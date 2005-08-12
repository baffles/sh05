<?php
function get_uid($user)
{
  $query1 = "SELECT * FROM `uidcache` WHERE `name` = '" . mysql_escape_string($user) . "';";
  $result1 = mysql_query($query1);
  if(($row1 = mysql_fetch_assoc($result1)) != NULL)
  {
    if($row1['lastupdate'] < (time() - 21600)) // if its 6 hours old, update it
      $update = true;
    else
    {
      return $row1['id'];
    }
  }
  
  $pagedata = file_get_contents("http://www.allegro.cc/members/" . urlencode($user));
  
  if(strpos($pagedata, "<title>Allegro.cc - Main</title>") !== false)
    return(0);
  
  // find start of data
  $start_middle = strpos($pagedata, "<!-- middle column //-->");
  if($start_middle === false)
    return(0);
    
  preg_match("/\?_id=(\d{1,4})&/", $pagedata, $matches, 0, $start_middle);
  if($update)
    $query2 = "UPDATE `uidcache` SET `id` = '" . $matches[1] . "' AND SET `lastupdate` = '" . time() . "' WHERE `name` = '" . mysql_escape_string($user) . "';";
  else
    $query2 = "INSERT INTO `uidcache` VALUES('" . mysql_escape_string($user) . "', '" . time() . "', '" . (int)$matches[1] . "');";
  mysql_query($query2);
  
  return $matches[1];
}

?>
