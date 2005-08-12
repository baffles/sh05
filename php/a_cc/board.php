<?php
function board($bid)
{
  $data = file_get_contents("http://www.allegro.cc/forums/board/" . $bid);
  
  /*
  <tr class="thread m1090"><td class="lightbulb" width="21"><a href="/forums/last-read.php?id=514817" >
  <img src="/templates/classic/media/thread_unread.gif" border="0" alt="*"></a></td>
  <td width='*' class='topic_outside'><table width='100%'><tr><td width='24' valign='top' class='topic_icon'>
  <img src='/forums/icons/display.gif' width='16' height='16' border='0'></td><td class='topic_inside'>
  
  <a href="/forums/view_thread.php?_id=514817" >support for 32bpp on Radeon8500 broken?</a></td></tr></table></td>
  <td width='140' class='originator'><a href="/members/profile.php?_id=1090" >Dennis Busch</a></td>
  <td width='75' class='replies'>11</td><td width='180' class='last_post'>
  <span class='age' title='08/01/2005 1:51 PM'>1&nbsp;day ago</span> by <span class='person'>
  <a href="/members/profile.php?_id=1090" >Dennis&nbsp;Busch</a></span></td></tr>
  */
  /*
  <tr class=\"thread .*?\"><td class=\"lightbulb\" width=\"21\"><a href=\"/forums/last-read\.php\?id=(\d*)\"\s*><img src=\".*?\" border=\"0\" alt=\".\"></a></td><td width='*' class='topic_outside'><table width='100%'><tr><td width='24' valign='top' class='topic_icon'><img src='/forums/icons/display\.gif' width='16' height='16' border='0'></td><td class='topic_inside'><a href=\"/forums/view_thread\.php\?_id=(\d*)\"\s*>(.*?)</a></td></tr></table></td><td width='140' class='originator'><a href=\"/members/profile\.php\?_id=(\d*)\"\s*>(.*?)</a></td><td width='75' class='replies'>(\d*)</td><td width='180' class='last_post'><span class='age' title='(.*?)'>(.*?)</span> by <span class='person'><a href=\"/members/profile.php?_id=(\d*)\"\s*>(.*?)</a></span></td></tr>
  */
  
  // !<tr class="thread.*?"><td class="lightbulb" width="21"><a href="/forums/last-read.php?id=(\d*)"\s*><img src=".*?" border="0" alt="*"></a></td>.*?<td class='topic_inside'><a href="/forums/view_thread.php?_id=(\d)"\s*>(.*?)</a></td></tr></table></td><td width='140' class='originator'><a href="/members/profile.php?_id=(\d*)" >(.*?)</a></td><td width='75' class='replies'>(\d*)</td><td width='180' class='last_post'><span class='age' title='(.*?)'>.*?</span> by <span class='person'><a href="/members/profile.php?_id=(\d*)" >(.*?)</a></span></td></tr>!
  preg_match_all("!<tr class=\"thread .*?\"><td class=\"lightbulb\" width=\"21\"><a href=\"/forums/last-read\.php\?id=(\d*).*?\"\s*><img src=\".*?\" border=\"0\" alt=\".\"></a></td><td width='*' class='topic_outside'><table width='100%'><tr><td width='24' valign='top' class='topic_icon'><img src='/forums/icons/display\.gif' width='16' height='16' border='0'></td><td class='topic_inside'><a href=\"/forums/view_thread\.php\?_id=(\d*).*?\"\s*>(.*?)</a></td></tr></table></td><td width='140' class='originator'><a href=\"/members/profile\.php\?_id=(\d*).*?\"\s*>(.*?)</a></td><td width='75' class='replies'>(\d*)</td><td width='180' class='last_post'><span class='age' title='(.*?)'>(.*?)</span> by <span class='person'><a href=\"/members/profile.php?_id=(\d*).*?\"\s*>(.*?)</a></span></td></tr>!", $tdata, $threads);
  print_r($threads);
  echo "<!--$data-->";
}

?>
