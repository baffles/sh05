#include <png.h>
#include <allegro.h>
#include <winalleg.h>
#include <loadpng.h>

#include <stdio.h>

#include <curl/curl.h>
#include <curl/types.h>
#include <curl/easy.h>

int main(int argc, char **argv)
{
  CURL *curl_handle;
  FILE *rfptmp;
  char request[512], rfpname[256];
  
  int len, num_posts, i;
  char *title, *xml;
  typedef struct _pl_
  {
    int id;
    char *poster;
    int posterid;
    char *postdate;
    char *post;
  } postlist;
  postlist *posts;
  
  if(argc != 2)
  {
    printf("Usage: %s [a.cc username]\n", argv[0]);
    return -1;
  }
  sprintf(request, "http://www.bafsoft.com/sh2k5/a_cc/user.php?usr=%s&cmd=rfp", argv[1]);
  sprintf(rfpname, "temp/%s.rfp", argv[1]);
  
  rfptmp = fopen(rfpname, "wb");
  curl_global_init(CURL_GLOBAL_ALL);
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
  curl_easy_setopt(curl_handle, CURLOPT_URL, request);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, fwrite);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)rfptmp);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
  curl_easy_perform(curl_handle);
  curl_easy_cleanup(curl_handle);
  fclose(rfptmp);
  
  /** printf("%d%s", strlen($rfp['title']), $rfp['title']);
  printf("%d%s", strlen($rfp['xml']), $rfp['xml']);
  printf("%d ", $rfp['pcount']);
  for($i = 0; $i < $rfp['pcount']; $i++)
  {
    printf("%d%s", strlen($rfp['posts'][$i]['poster']), $rfp['posts'][$i]['poster']);
    printf("%d ", $rfp['posts'][$i]['posterid']);
    printf("%d%s", strlen($rfp['posts'][$i]['postdate']), $rfp['posts'][$i]['postdate']);
    printf("%d %s ", strlen($rfp['posts'][$i]['post']), $rfp['posts'][$i]['post']);
  }**/ /// typedef struct { int id; char *poster, int posterid; char *postdate; char *post; } postlist;
  rfptmp = fopen(rfpname, "rb");
  
  fscanf(rfptmp, "%d", &len);
  title = (char *)malloc(len + 1);
  fread(title, len, 1, rfptmp); title[len] = 0;
  
  fscanf(rfptmp, "%d", &len);
  xml = (char *)malloc(len + 1);
  fread(xml, len, 1, rfptmp); xml[len] = 0;
  
  fscanf(rfptmp, "%d ", &num_posts);
  posts = (postlist *)malloc(sizeof(postlist) * num_posts);
  for(i = 0; i < num_posts; ++i)
  {
    posts[i].id = i;
    fscanf(rfptmp, "%d", &len);
    posts[i].poster = (char *)malloc(len + 1);
    fread(posts[i].poster, len, 1, rfptmp); posts[i].poster[len] = 0;
    fscanf(rfptmp, "%d ", &posts[i].posterid);
    fscanf(rfptmp, "%d", &len);
    posts[i].postdate = (char *)malloc(len + 1);
    fread(posts[i].postdate, len, 1, rfptmp); posts[i].postdate[len] = 0;
    fscanf(rfptmp, "%d ", &len);
    posts[i].post = (char *)malloc(len + 1);
    fread(posts[i].post, len, 1, rfptmp); posts[i].post[len] = 0;
  }
  
  printf("Topic: %s  XML URL: %s  Number of Posts: %d\n", title, xml, num_posts);
  for(i = 0; i < num_posts; ++i)
  {
    printf("Post %d  Posted by: %s [%d]  %s\n============================================================================\n%s\n============================================================================\n", i, posts[i].poster, posts[i].posterid, posts[i].postdate, posts[i].post);
  }

  return 0;
}
END_OF_MAIN()
