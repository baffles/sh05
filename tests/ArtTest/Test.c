#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <allegro.h>

#define BPP 32
#define XRES 320
#define YRES 200

BITMAP *DBuffer=NULL;
BITMAP *Cloud1=NULL,*Cloud2=NULL,*Sun=NULL;
BITMAP *Title=NULL;

void pexit(){
allegro_exit();
exit(0);
}

int pinit(){
int retval=-1;
if(retval=allegro_init()) return retval;
set_color_depth(BPP);
if(retval=install_keyboard()) return retval;
if(retval=set_gfx_mode(GFX_AUTODETECT_WINDOWED,XRES,YRES,0,0)) return retval;
return 0;
}

void punload(){
if(Cloud2) destroy_bitmap(Cloud2);
Cloud2=NULL;
if(Title) destroy_bitmap(Title);
Title=NULL;
if(Cloud1) destroy_bitmap(Cloud1);
Cloud1=NULL;
if(Sun) destroy_bitmap(Sun);
Sun=NULL;
if(DBuffer) destroy_bitmap(DBuffer);
DBuffer=NULL;
}

int pload(){
int retval=-1;
punload();
DBuffer=create_bitmap(XRES,YRES); if(!DBuffer) return retval;
Cloud1=load_bitmap("Cloud1.bmp",NULL); if(!Cloud1) return retval;
Cloud2=load_bitmap("Cloud2.bmp",NULL); if(!Cloud2) return retval;
Sun=load_bitmap("Sun.bmp",NULL); if(!Sun) return retval;
Title=load_bitmap("Title.bmp",NULL); if(!Title) return retval;
return 0;
}

void process(){
int done=0;
int C1x=20,C2x=180;
int skycol=makecol(204,204,204);
set_window_title("Sky Demo");
while(!key[KEY_ESC]){
clear_to_color(DBuffer,makecol(204,204,204));
draw_sprite(DBuffer,Sun,10,10);
draw_sprite(DBuffer,Cloud1,C1x++,30);
if(C1x>=XRES) C1x=-Cloud1->w;
draw_sprite(DBuffer,Cloud2,C2x++,50);
if(C2x>=XRES) C2x=-Cloud2->w;
draw_sprite(DBuffer,Title,(XRES-Title->w)/2,70);
blit(DBuffer,screen,0,0,0,0,XRES,YRES);
rest(30);
}
}

void main(int argc, char *argv[]){
if(!pinit())
if(!pload()) 
process();
punload();
pexit();
}

END_OF_MAIN();

