<?php
function rfp($uid)
{
  $request = "http://www.allegro.cc/members/profile-forums.php?id=" . $uid;
  $fpdata = file_get_contents($request);
  
  $fp_mid = strpos($fpdata, "<!-- middle column //-->");
  preg_match("/Recent Posts:<ul><li><a href=\"(.*?)\"[ ]*>(.*?)<\/a> - <i>(\d{2})\/(\d{2})\/(\d{4}) (\d{1,2}):(\d{2}) (..)<\/i>/", $fpdata, $recent_post, 0, $fp_mid);
  preg_match("/\/forums\/view_thread\.php\?_id=(\d+)&/", $recent_post[1], $neat_url);
  
  $tempdata = file_get_contents("http://www.allegro.cc/forums/view_thread.php?_id=" . $neat_url[1]);
  preg_match("/<a href=\"\/rss\/thread\.xml\/(\d+).*?\"/", $tempdata, $real_tid);
  
  $tdata = file_get_contents("http://www.allegro.cc/rss/thread.xml/" . $real_tid[1]);
  
  $objXML = new xml2Array();
  $posts = $objXML->parse($tdata);
  
  if($posts == NULL || $objXML->isErr)
  {
    // report back the error
    $err = array(
      'title' => 'Error retrieving thread',
      'xml'   => 'http://www.allegro.cc/rss/thread.xml/0',
      'pcount'=> 1,
      'posts' => array(
        array(
          'poster' => 'BAFSoft A.CC Retriever',
          'posterid' => 0,
          'postdate' => strftime("%a, %d %b %Y %R ", time()),
          'post' => "Error occured retrieving thread $tid:\n" . $objXML->err,
        )
      )
    );
    return $err;
  }
  
  $rdat = array(
    'title' => $recent_post[2],
    'xml'   => "http://www.allegro.cc/rss/thread.xml/" . $real_tid[1],
    'pcount'=> 0,
    'posts' => array()
  );
  
  $i = 1;
  while(isset($posts[0]['children'][$i]))
  {
    preg_match("/\((.*?)\)/", $posts[0]['children'][$i]['children'][1]['tagData'], $poster);
    $rdat['posts'][$i - 1]['poster'] = $poster[1];
    $rdat['posts'][$i - 1]['posterid'] = get_uid($poster[1]);
    $rdat['posts'][$i - 1]['postdate'] = $posts[0]['children'][$i]['children'][2]['tagData'];
    $rdat['posts'][$i - 1]['post'] = $posts[0]['children'][$i]['children'][0]['tagData'];
    $rdat['pcount']++;
    
    $i++;
  }
  return $rdat;
}

?>
