<?php
function avapng($id)
{
  if($id == 0)
    $baduser = true;
  
  $query1 = "SELECT * FROM `avacache` WHERE `id` = '" . $id . "';";
  $result1 = mysql_query($query1);
  $update = false;
  if(!$baduser && $result1 && (($row1 = mysql_fetch_assoc($result1)) != NULL))
  {
    //if($row1['lastupdate'] < (time() - 3600)) // if its an hour old, update it
    if($row1['lastupdate'] < (time() - 21600)) // if its 6 hours old, update it
      $update = true;
    else
    {
      header("Content-type: image/png");
      echo $row1['avatar'];
      exit();
    }
  }
  
  $fpdata = file_get_contents("http://www.allegro.cc/members/profile-forums.php?id=" . $id);
  $fp_mid = strpos($fpdata, "<!-- middle column //-->");
  preg_match("/Recent Posts:<ul><li><a href=\"(.*?)\"[ ]*>(.*?)<\/a> - <i>(\d{2})\/(\d{2})\/(\d{4}) (\d{1,2}):(\d{2}) (..)<\/i>/", $fpdata, $recent_post, 0, $fp_mid);
  preg_match("/\/forums\/view_thread\.php\?_id=(\d+)&/", $recent_post[1], $neat_url);
  $tempdata = file_get_contents("http://www.allegro.cc/forums/view_thread.php?_id=" . $neat_url[1]);
  preg_match("!/members/avatars/" . $id . "\.([^\']+)\'!", $tempdata, $avatare);
  
  if(strtolower($avatare[1]) == 'png')
  {
    $ava = @imageCreateFromPng("http://www.allegro.cc/members/avatars/" . $id . "." . $avatare[1]);
  }
  elseif(strtolower($avatare[1]) == 'jpg' || strtolower($avatare[1] == 'jpeg'))
  {
    $ava = @imageCreateFromJpeg("http://www.allegro.cc/members/avatars/" . $id . "." . $avatare[1]);
  }
  elseif(strtolower($avatare[1]) == 'gif')
  {
    $ava = @imageCreateFromGif("http://www.allegro.cc/members/avatars/" . $id . "." . $avatare[1]);
  }
  else
  {
    $ava = @imageCreateFromGif("http://www.allegro.cc/members/avatars/" . $id . ".gif");
  }
  
  if(!$ava || $baduser)
  {
    $ava = imageCreateFromPng("http://www.allegro.cc/members/pictures/0.png");
    $tc = imageColorAllocate($ava, 155, 155, 155);
    if($baduser)
    {
      imageString($ava, 1, 40 - ((imageFontWidth(1) * 12) / 2), 80 - (2 * imageFontHeight(1)), "Invalid User", $tc);
      imageString($ava, 1, 40 - ((imageFontWidth(1) * strlen("(" . $user . ")")) / 2), 80 - imageFontHeight(1), "(" . $user . ")", $tc);
    }
    else
    {
      imageString($ava, 1, 40 - ((imageFontWidth(1) * 13) / 2), 80 - (2 * imageFontHeight(1)), "Couldn't find", $tc);
      imageString($ava, 1, 40 - ((imageFontWidth(1) * strlen("avatar (#" . $id . ")")) / 2), 80 - imageFontHeight(1), "avatar (#" . $id . ")", $tc);
    }
  }
  
  ob_start();
  header("Content-type: image/png");
  imagePng($ava);
  $img_data = ob_get_contents();
  @ob_end_flush();
  
  if($update)
    $query2 = "UPDATE `avacache` SET `lastupdate` = '" . time() . "' AND SET `avatar` = '" . mysql_escape_string($img_data) . "' WHERE `id` = '" . $id . "';";
  else
    $query2 = "INSERT INTO `avacache` VALUES('" . (int)$id . "', '" . time() . "', '" . mysql_escape_string($img_data) . "');";
  if(!$baduser)
    @mysql_query($query2);
}

?>
