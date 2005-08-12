#include <png.h>
#include <allegro.h>
#include <winalleg.h>
#include <loadpng.h>

#include <stdio.h>

#include <curl/curl.h>
#include <curl/types.h>
#include <curl/easy.h>

typedef struct avalist avalist;
struct avalist
{
  int id;
  BITMAP *bmp;
  avalist *next;
};

avalist *avatars = NULL;

BITMAP *get_avatar(int uid)
{
  unsigned char found = 0;
  avalist *cur = avatars;
  while(cur != NULL)
  {
    if(cur->id == uid)
    {
      found = 1;
      break;
    }
    cur = cur->next;
  }
  if(!found)
  {
    char request[256], pngfname[128];
    FILE *pngtmp;
    BITMAP *ret;
    CURL *curl_handle;
    avalist *newa;
    sprintf(request, "http://www.bafsoft.com/sh2k5/a_cc/user.php?usr=%d&cmd=avapng", uid);
    sprintf(pngfname, "temp/%d.png", uid);
    
    //printf("\nDownloading avatar for user #%d\n", uid);
    
    pngtmp = fopen(pngfname, "wb");
    curl_global_init(CURL_GLOBAL_ALL);
    curl_handle = curl_easy_init();
    curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
    curl_easy_setopt(curl_handle, CURLOPT_URL, request);
    curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, fwrite);
    curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)pngtmp);
    curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
    curl_easy_perform(curl_handle);
    curl_easy_cleanup(curl_handle);
    fclose(pngtmp);
    
    newa = (avalist *)malloc(sizeof(avalist));
    newa->id = uid;
    newa->bmp = load_png(pngfname, NULL);
    newa->next = NULL;
    
    cur = avatars;
    if(cur)
    {
      while(cur->next != NULL)
        cur = cur->next;
      cur->next = newa;
      cur = cur->next;
    }
    else
      avatars = cur = newa;
  }
  
  return cur->bmp;
}

void clean_avatars()
{
  avalist *cur = avatars;
  avalist *next = avatars;
  if(cur == NULL)
    return;
  while(1)
  {
    next = cur->next;
    destroy_bitmap(cur->bmp);
    free(cur);
    cur = next;
    if(cur == NULL)
      break;
  }
}

// from a.cc by spelly
void textoutWordWrap_(BITMAP* dst, FONT* font, int x, int y, int w, int h, int col, char* text) {
int height = text_height(font);

char *start = NULL;
char *end = NULL;

static char delim[] = " ";
char *token = NULL;
int curX = x;
int curY = y;
int space = text_length(font, " ");
int len = 0;
int maxX = x + w;
int maxY = y + h;
int getToken = TRUE;
char oneChar[] = "X";

start= text;
end = strchr(start, '\n');
while (end != NULL) {
*end='\0';

token = strtok(start, delim);
while (token != NULL) {
len = text_length(font , token);

getToken = TRUE;
if (curX + len > maxX) {
if (len > w) {
// the token does not fit into a single line
getToken = FALSE;

while (curX < maxX && *token) {
// there's no char_out function, so we'll use a two char string
*oneChar = *token;
len = text_length(font, oneChar);
if (curX + len < maxX) {
token++;
textout(dst, font, oneChar, curX, curY, col);
}
curX += len;
}
curY += height;
curX = x;
} else {
curX = x;
curY += height;

textout(dst, font, token, curX, curY, col);

curX += len + space;
}
} else {
textout(dst, font, token, curX, curY, col);
curX += len + space;
}

if (getToken) {
token = strtok(NULL, delim);
}
}

start = end+1;
end = strchr(start, '\n');
curY += height;
curX = x;
}
}

void textoutWordWrap(BITMAP* dst, FONT* font, int x, int y, int w, int h, int col, char* txt) {
static char text[512];
strcpy(text, txt);
textoutWordWrap_(dst, font, x, y, w, h, col, text);
}

void textprintfWordWrap(BITMAP *bmp, FONT *f, int x, int y, int w, int h, int color, const char *format, ...) {
static char buf[512];

va_list ap;
va_start(ap, format);
uvszprintf(buf, sizeof(buf), format, ap);
va_end(ap);

textoutWordWrap_(bmp, f, x, y, w, h, color, buf);
}

void do_wrapped_text(BITMAP *dest, FONT *font, int x, int y, int w, int rows, int txtcol, int bgcol, char *txt)
{
  textoutWordWrap(dest, font, x, y, w, (rows - 1) * text_height(font), txtcol, txt);
}

int main(int argc, char **argv)
{
  CURL *curl_handle;
  FILE *rfptmp;
  BITMAP *buffer;
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
    BITMAP *avatar;
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
  
  allegro_init();
  install_keyboard();
  set_color_depth(32);
  set_gfx_mode(GFX_AUTODETECT, 1024, 768, 0, 0);
  buffer = create_bitmap(1024, 768);
  
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
    posts[i].avatar = get_avatar(posts[i].posterid);
    
    //printf("DOWNLOADING AVATARS... (%d/%d) %d%% done\r", i + 1, num_posts, (int)(((float)(i + 1) / (float)num_posts) * 100));
    clear_bitmap(buffer);
    textprintf_ex(buffer, font, 50, 50, makecol(255,255,255), -1, "Downloading Avatars....");
    textprintf_ex(buffer, font, 70, 70, makecol(255,255,255), -1, "(%d/%d) %d%%", i + 1, num_posts, (int)(((float)(i + 1) / (float)num_posts) * 100));
    /// 668 -> 868
    rect(buffer, 412, 100, 612, 150, makecol(255,255,255));
    rectfill(buffer, 413, 101, 412 + (2 * (int)(((float)(i + 1) / (float)num_posts) * 100)), 149, makecol(0,0,255));
    blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
  }
  clear_bitmap(screen);
  
  //set_gfx_mode(GFX_AUTODETECT, 1024, 768, 0, 0);
  //printf("Topic: %s  XML URL: %s  Number of Posts: %d\n", title, xml, num_posts);
  //for(i = 0; i < (num_posts < 9 ? num_posts : 9); ++i)
  for(i = 0; i < (num_posts < (SCREEN_W / 96) ? num_posts : (SCREEN_W / 96)); ++i)
  {
    //printf("Post %d  Posted by: %s [%d]  %s\n============================================================================\n%s\n============================================================================\n", i, posts[i].poster, posts[i].posterid, posts[i].postdate, posts[i].post);
    /// 96 height for each
    printf("\n%d", i);
    blit(posts[i].avatar, screen, 0, 0, 8, (i * 96) + 14, 80, 80);
    textprintf_ex(screen, font, 8, (i * 96) + 2, makecol(255,255,255), -1, "%s [%d]", posts[i].poster, posts[i].posterid);
    
    ///textprintf_ex(screen, font, 100, (i * 96) + 2 + text_height(font), makecol(255,255,255), -1, "%s", posts[i].post);
    do_wrapped_text(screen, font, 100, ((i * 96) + 2) + text_height(font), SCREEN_W - 102, (94 - text_height(font)) / text_height(font), makecol(255,255,255), -1, posts[i].post);
  }
  
  while(!keypressed())
    ;
  
  for(i = 0; i < num_posts; ++i)
  {
    free(posts[i].poster);
    free(posts[i].postdate);
    free(posts[i].post);
    //destroy_bitmap(posts[i].avatar);
  }
  free(posts);
  clean_avatars();

  return 0;
}
END_OF_MAIN()
