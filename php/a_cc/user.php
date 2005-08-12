<?php
require "xmlparser.php";

require "avapng.php";
require "board.php";
require "uid.php";
require "userinfo.php";
require "rfp.php";
require "thread.php";

$db = mysql_connect("localhost", "acash", "levertr0n");
mysql_select_db("acc_cache", $db);

$user = isset($_GET['usr']) ? $_GET['usr'] : "BAF";
$cmd = isset($_GET['cmd']) ? $_GET['cmd'] : 'uid';

$pagedata = file_get_contents("http://www.allegro.cc/members/" . urlencode($user));

if(strpos($pagedata, "<title>Allegro.cc - Main</title>") !== false)
  $baduser = true;

// find start of data
$start_middle = strpos($pagedata, "<!-- middle column //-->");
if($start_middle === false)
  exit();


if($cmd == 'uid')
{
  // find user id
  $uid = get_uid($user);
  //echo "User ID for " . $user . " is " . $uid . ".";
  echo $uid;
}
elseif($cmd == 'info')
{
  // get their information
  $data = get_userinfo(get_uid($user));
  /*echo "<pre>";
  print_r($data);
  echo "</pre>";*/
  printf("%d %d %d %d %d %s %d %s %s %s", $data['since']['m'], $data['since']['d'], $data['since']['y'], $data['since']['hr'], $data['since']['min'], $data['since']['ampm'], $data['minfo']['id'], $data['minfo']['img'], $data['minfo']['name'], $data['profile']);
}
elseif($cmd == 'rfp')
{
  // get their most recent post + that whole thread
  $rfp = rfp(get_uid($user));
  /*echo "<pre>";
  print_r($rfp);
  echo "</pre>";*/
  // title
  // xml
  // pcount
  // - poster
  // - posterid
  // - postdate
  // - post
  
  printf("%d%s", strlen($rfp['title']), $rfp['title']);
  printf("%d%s", strlen($rfp['xml']), $rfp['xml']);
  printf("%d ", $rfp['pcount']);
  for($i = 0; $i < $rfp['pcount']; $i++)
  {
    printf("%d%s", strlen($rfp['posts'][$i]['poster']), $rfp['posts'][$i]['poster']);
    printf("%d ", $rfp['posts'][$i]['posterid']);
    printf("%d%s", strlen($rfp['posts'][$i]['postdate']), $rfp['posts'][$i]['postdate']);
    printf("%d %s ", strlen($rfp['posts'][$i]['post']), $rfp['posts'][$i]['post']);
  }
}
elseif($cmd == 'thread')
{
  // get their most recent post + that whole thread
  $thread = thread(intval($user));
  /*echo "<pre>";
  print_r($rfp);
  echo "</pre>";*/
  // title
  // xml
  // pcount
  // - poster
  // - posterid
  // - postdate
  // - post
  
  printf("%d%s", strlen($thread['title']), $thread['title']);
  printf("%d%s", strlen($thread['xml']), $thread['xml']);
  printf("%d ", $thread['pcount']);
  for($i = 0; $i < $thread['pcount']; $i++)
  {
    printf("%d%s", strlen($thread['posts'][$i]['poster']), $thread['posts'][$i]['poster']);
    printf("%d ", $thread['posts'][$i]['posterid']);
    printf("%d%s", strlen($thread['posts'][$i]['postdate']), $thread['posts'][$i]['postdate']);
    printf("%d %s ", strlen($thread['posts'][$i]['post']), $thread['posts'][$i]['post']);
  }
}
elseif($cmd == 'avapng')
{
  avapng(get_uid($user));
}
elseif($cmd == 'board')
{
  board($user);
}
else
{
}
?>
