#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <allegro.h>

#ifndef NO_PNG
#include <loadpng.h>
#endif

#define BPP 32
#define TRCOLORS 2
#define FILELEN 256
#define LEVELS 6

void MakeColored(BITMAP *src, int r, int g, int b, int level){
 int i,j,k;
 int col,tr,tg,tb,tn,tc;
 int trcolors[TRCOLORS]={makecol(0,0,0),makecol(255,0,255)};
 int *colors=NULL;
 if(!src) return;
 if(r>255||g>255||b>255||r<0||g<0||b<0) return;
 if(level<=0) return;
 colors=(int *) malloc(sizeof(int)*(level+1));
 if(!colors) return;
 for(i=0;i<=level;i++){
  colors[i]=makecol((r*i)/level,(g*i)/level,(b*i)/level);
 }
 //The damn slow way :P
 for(i=0;i<src->h;i++) {
   for(j=0;j<src->w;j++) {
      col=getpixel(src,j,i);
      for(tc=0,k=0;k<TRCOLORS&&!tc;k++) if(col==trcolors[k]) ++tc;
      if(!tc){
      tr=getr(col);tg=getg(col);tb=getb(col);
      tn=(int)level*sqrt(((tr*tr)+(tg*tg)+(tb*tb))/3.)/255.;
      putpixel(src,j,i,colors[tn]);
      }
   }
 }
 free(colors); colors=NULL;
}

void pexit(){
allegro_exit();
exit(0);
}

void pinit(){
if(allegro_init()) pexit();
set_color_depth(BPP);
#ifndef NO_PNG
register_png_file_type();
#endif	
}

void main(int argc, char *argv[]){
int r=0,g=0,b=0,level=0;
BITMAP *src=NULL;
pinit();
if(argc!=7){
fprintf(stderr,"Usage: %s Source_Bitmap Dest_Bitmap R G B Levels",argv[0]);
pexit();
}
src=load_bitmap(argv[1],NULL); //Source Filename
if(src)  {
r=atoi(argv[3]); //Red
g=atoi(argv[4]); //Green
b=atoi(argv[5]); //Blue
level=atoi(argv[6]); //Levels
MakeColored(src, r, g, b, level-1);
save_bitmap(argv[2],src,NULL);
destroy_bitmap(src);
src=NULL;
}
pexit();
}

END_OF_MAIN();