#include <png.h>
#include <allegro.h>
#include <winalleg.h>
#include <loadpng.h>

#include <stdio.h>

#include <curl/curl.h>
#include <curl/types.h>
#include <curl/easy.h>

#include "acc.h"

// from a.cc by spelly
void textout_wordwrap_(BITMAP* dst, FONT* font, int x, int y, int w, int h, int tcol, int bcol, char* text)
{
  int height = text_height(font);
  
  char *start = NULL;
  char *end = NULL;
  
  static char delim[] = " ";
  char *token = NULL;
  int cur_x = x;
  int cur_y = y;
  int space = text_length(font, " ");
  int len = 0;
  int max_x = x + w;
  int max_y = y + h;
  int get_token = TRUE;
  char one_char[] = "X";
  
  start= text;
  end = strchr(start, '\n');
  while (end != NULL)
  {
    *end='\0';
    
    token = strtok(start, delim);
    while (token != NULL)
    {
      len = text_length(font , token);
      
      get_token = TRUE;
      if (cur_x + len > max_x)
      {
        if (len > w)
        {
          // the token does not fit into a single line
          get_token = FALSE;
          
          while (cur_x < max_x && *token)
          {
            // there's no char_out function, so we'll use a two char string
            *one_char = *token;
            len = text_length(font, one_char);
            if (cur_x + len < max_x)
            {
              token++;
              textout_ex(dst, font, one_char, cur_x, cur_y, tcol, bcol);
            }
            cur_x += len;
          }
          cur_y += height;
          cur_x = x;
        }
        else
        {
          cur_x = x;
          cur_y += height;
          
          textout_ex(dst, font, token, cur_x, cur_y, tcol, bcol);
          
          cur_x += len + space;
        }
      }
      else
      {
        textout_ex(dst, font, token, cur_x, cur_y, tcol, bcol);
        cur_x += len + space;
      }
      
      if (get_token)
      {
        token = strtok(NULL, delim);
      }
    }
    
    start = end + 1;
    end = strchr(start, '\n');
    cur_y += height;
    cur_x = x;
  }
}

void textout_word_wrap(BITMAP* dst, FONT* font, int x, int y, int w, int h, int tcol, int bcol, char *txt)
{
  static char text[8192];
  strncpy(text, txt, 8192);
  printf("\nTEXTOUT == %s\n\n", text);
  textout_wordwrap_(dst, font, x, y, w, h, tcol, bcol, text);
}

void textprintf_word_wrap(BITMAP *bmp, FONT *f, int x, int y, int w, int h, int tcol, int bcol, const char *format, ...)
{
  static char buf[8192];
  
  va_list ap;
  va_start(ap, format);
  uvszprintf(buf, sizeof(buf), format, ap);
  va_end(ap);
  
  textout_wordwrap_(bmp, f, x, y, w, h, tcol, bcol, buf);
}

void do_wrapped_text(BITMAP *dest, FONT *font, int x, int y, int w, int h, int txtcol, int bgcol, char *txt)
{
  textout_word_wrap(dest, font, x, y, w, h, txtcol, bgcol, txt);
}



BITMAP *buffer;
BITMAP *tmp;

void down_call(int done, int total, int percent)
{
  clear_bitmap(tmp);
  textprintf_ex(tmp, font, 50, 50, makecol(255,255,255), -1, "Downloading Avatars....");
  textprintf_ex(tmp, font, 70, 70, makecol(255,255,255), -1, "(%d/%d) %d%%", done + 1, total, percent);
  rect(tmp, 50, 100, 250, 125, makecol(255,255,255));
  rectfill(tmp, 51, 101, 50 + (2 * percent), 124, makecol(0,0,255));
  blit(tmp, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
}

int down_prog(void *clientp, double dltotal, double dlnow, double ultotal, double ulnow)
{
  int pcnt = (dlnow * 100.0) / dltotal;
  clear_bitmap(buffer);
  blit(tmp, buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
  textprintf_ex(buffer, font, 300, 50, makecol(255,255,255), -1, "Downloading File....");
  textprintf_ex(buffer, font, 320, 70, makecol(255,255,255), -1, "(%d/%d) %d%%", dlnow, dltotal, pcnt);
  printf("(%d/%d) %d%%\n", dlnow, dltotal, pcnt);
  rect(buffer, 300, 100, 500, 125, makecol(255,255,255));
  rectfill(buffer, 51, 101, 300 + (2 * pcnt), 124, makecol(0,0,255));
  blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
}

int main(int argc, char **argv)
{
  int i;
  acc_thread *rfp;
  
  if(argc != 2)
  {
    printf("Usage: %s [a.cc username]\n", argv[0]);
    return -1;
  }
  
  curl_global_init(CURL_GLOBAL_ALL);
  allegro_init();
  install_keyboard();
  set_color_depth(32);
  set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
  buffer = create_bitmap(SCREEN_W, SCREEN_H);
  tmp = create_bitmap(SCREEN_W, SCREEN_H);
  
  set_dl_callback(down_call);
  set_cdl_callback(down_prog);
  printf("%s = %d\n", argv[1], acc_get_uid(argv[1]));
  textprintf_ex(tmp, font, 50, 50, makecol(255,255,255), -1, "Please wait...");
  blit(tmp, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
  rfp = acc_get_rfp(argv[1]); printf("done - got %d posts", rfp->num_posts);
  
  clear_bitmap(screen);
  
  //set_gfx_mode(GFX_AUTODETECT, 1024, 768, 0, 0);
  //printf("Topic: %s  XML URL: %s  Number of Posts: %d\n", title, xml, num_posts);
  //for(i = 0; i < (num_posts < 9 ? num_posts : 9); ++i)
  for(i = 0; i < (rfp->num_posts < (SCREEN_H / 96) ? rfp->num_posts : (SCREEN_W / 96)); ++i)
  {
    //printf("Post %d  Posted by: %s [%d]  %s\n============================================================================\n%s\n============================================================================\n", i, posts[i].poster, posts[i].posterid, posts[i].postdate, posts[i].post);
    /// 96 height for each
    blit(rfp->posts[i].avatar, screen, 0, 0, 8, (i * 96) + 14, 80, 80);
    textprintf_ex(screen, font, 8, (i * 96) + 2, makecol(255,255,255), -1, "%s [%d]", rfp->posts[i].poster, rfp->posts[i].posterid);
    
    ///textprintf_ex(screen, font, 100, (i * 96) + 2 + text_height(font), makecol(255,255,255), -1, "%s", posts[i].post);
    ///do_wrapped_text(screen, font, 100, ((i * 96) + 2) + text_height(font), SCREEN_W - 102, (94 - text_height(font)) / text_height(font), makecol(255,255,255), -1, rfp->posts[i].post);
    /// void do_wrapped_text(BITMAP *dest, FONT *font, int x, int y, int w, int h, int txtcol, int bgcol, char *txt)
    do_wrapped_text(screen, font, 100, (i * 96) + 2 + text_height(font), SCREEN_W - 102, 94 - text_height(font), makecol(255,255,255), -1, rfp->posts[i].post);
    putpixel(screen, 100, (i * 96) + 2 + text_height(font), makecol(255, 128, 255));
    printf("Trying post #%d - (x,y,w,h) (%d,%d,%d,%d)\n=============================================\n%s\n=============================================\n", i, 100, (i * 96) + 2 + text_height(font), SCREEN_W - 102, 94 - text_height(font), rfp->posts[i].post);
  }
  
  while(!keypressed())
    ;
  
  del_acc_thread(rfp);
  set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
  //_cleanup_avatars();

  return 0;
}
END_OF_MAIN()
