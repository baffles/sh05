<?php
function get_userinfo($uid)
{
  $query1 = "SELECT * FROM `procache` WHERE `id` = '" . mysql_escape_string($uid) . "';";
  $result1 = mysql_query($query1);
  if(($row1 = mysql_fetch_assoc($result1)) != NULL)
  {
    if($row1['lastupdate'] < (time() - 21600)) // if its 6 hours old, update it
      $update = true;
    else
    {
      $rd = array(
        'since'   => array(
              'm'   => $row1['regm'],
              'd'   => $row1['regd'],
              'y'   => $row1['regy'],
              'hr'  => $row1['reghr'],
              'min' => $row1['regmin'],
              'ampm'=> $row1['regampm']
              ),
        'minfo'   => array(
              'id'  => $row1['id'],
              'img' => $row1['mimg'],
              'name'=> $row1['mname']
              ),
        'profile' => $row1['mpro']
      );
      return $rd;
    }
  }
  
  $pagedata = file_get_contents("http://www.allegro.cc/members/" . urlencode($uid));
  
  $start_middle = strpos($pagedata, "<!-- middle column //-->");
  if($start_middle === false)
    return NULL;
  
  preg_match("/Member since: (\d{1,2})\/(\d{1,2})\/(\d{4}) (\d{1,2}):(\d{1,2}) (..)/", $pagedata, $member_since, 0, $start_middle);
  preg_match("/<br><br>&#147;(.*?)&#148;<br><br>/", $pagedata, $profile, 0, $start_middle);
  preg_match("!<img src=\'/members/pictures/(\d*)\.(.+?)\' alt=\'(.*?)\' width=\'80\'!", $pagedata, $member_data, 0, $start_middle);
  
  $rd = array(
    'since'   => array(
          'm'   => $member_since[1],
          'd'   => $member_since[2],
          'y'   => $member_since[3],
          'hr'  => $member_since[4],
          'min' => $member_since[5],
          'ampm'=> $member_since[6]
          ),
    'minfo'   => array(
          'id'  => $member_data[1],
          'img' => "/members/pictures/" . $member_data[1] . "." . $member_data[2],
          'name'=> $member_data[3]
          ),
    'profile' => $profile[1]
  );
  
  if($update)
  {
    $query2 = "DELETE FROM `procache` WHERE `id` = '" . $member_data[1] . "'; ";
    mysql_query($query2);
  }
  else
    $query2 = "INSERT INTO `procache` VALUES('" . $member_data[1] . "', '" . $member_since[1] . "', '" . $member_since[2] . "', '". $member_since[3] . "', '" . $member_since[4] . "', '" . $member_since[5] . "', '" . mysql_escape_string($member_since[6]) . "', '" . mysql_escape_string("/members/pictures/" . $member_data[1] . "." . $member_data[2]) . "','" . mysql_escape_string($member_data[3]) . "', '" . time() . "', '" . mysql_escape_string($profile[1]) . "');";
  mysql_query($query2);
  return $rd;
}

?>
