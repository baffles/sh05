<?php
function thread($tid)
{
  $tdata = file_get_contents("http://www.allegro.cc/rss/thread.xml/" . $tid);
  
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
    'title' => $posts[0]['children'][0]['children'][0]['tagData'],
    'xml'   => "http://www.allegro.cc/rss/thread.xml/" . $tid[1],
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
