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
  FILE *pngtmp;
  BITMAP *avatar;
  char request[512], pngfname[256];
  
  if(argc != 2)
  {
    printf("Usage: %s [a.cc username]\n", argv[0]);
  }
  sprintf(request, "http://www.bafsoft.com/sh2k5/a_cc/user.php?usr=%s&cmd=avapng", argv[1]);
  sprintf(pngfname, "temp/%s.png", argv[1]);
  
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
  
  allegro_init();
  install_keyboard();
  set_color_depth(32);
  set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
  avatar = load_png(pngfname, NULL);
  clear_to_color(screen, getpixel(avatar, 0, 0));
  blit(avatar, screen, 0, 0, 0, 0, 80, 80);
  
  while(!keypressed())
    ;
  
  destroy_bitmap(avatar);

  return 0;
}
END_OF_MAIN()
