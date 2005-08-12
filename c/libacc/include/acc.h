/* libacc
 * complex interface to a.cc through caching proxy on bafsoft.com
 *
 * by baf, 2005
 * http://www.bafsoft.com/
 */

#ifndef ACC_H
#define ACC_H

#include <png.h>
#include <allegro.h>
#include <winalleg.h>
#include <loadpng.h>

#include <stdio.h>

#include <curl/curl.h>
#include <curl/types.h>
#include <curl/easy.h>

#define URL_BASE "http://www.bafsoft.net/acc_cache/user.php"
#define MAKE_URL_S(b,u,c) sprintf(b, "%s?usr=%s&cmd=%s", URL_BASE, u, c)
#define MAKE_URL(b,u,c) sprintf(b, "%s?usr=%d&cmd=%s", URL_BASE, u, c)

typedef struct acc_uinfo_s acc_uinfo;
struct acc_uinfo_s
{
  struct acc_reginfo
  {
    int m, d, y, hr, min;
    char ampm;
  } reginfo;
  struct acc_minfo
  {
    int id;
    char img_fname[256];
    char name[256];
  } minfo;
  char profile[2048];
};

typedef struct acc_post_s acc_post;
struct acc_post_s
{
  int id;
  char *poster;
  int posterid;
  char *postdate;
  char *post;
  BITMAP *avatar;
};

typedef struct acc_thread_s acc_thread;
struct acc_thread_s
{
  char *title;
  char *xml;
  int num_posts;
  acc_post *posts;
};

typedef void (*dlcallback)(int done, int total, int percent);
typedef int (*curldlcallback)(void *clientp, double dltotal, double dlnow, double ultotal, double ulnow);
extern dlcallback dlcb;
extern curldlcallback cdlcb;

void set_dl_callback(dlcallback cb);
void set_cdl_callback(curldlcallback cb);

int acc_get_uid(char *user);

acc_uinfo *acc_get_uinfo(char *user);
acc_uinfo *acc_get_uinfo_ex(int uid);

acc_thread *acc_get_rfp(char *user);
acc_thread *acc_get_rfp_ex(int uid);
acc_thread *acc_get_thread(int tid);

BITMAP *acc_get_avatar(char *user);
BITMAP *acc_get_avatar_ex(int uid);

void del_acc_thread(acc_thread *td);
void del_acc_uinfo(acc_uinfo *td);

/* internal avatar handeling */
typedef struct avalist_s avalist;
struct avalist_s
{
  int id;
  BITMAP *bmp;
  avalist *next;
};

avalist *_new_node(int id, BITMAP *bmp);
BITMAP *_fetch_avatar(int uid);
void _cleanup_avatars();

/* internal curl stuff */
typedef struct _acc_memory_s _acc_memory;
struct _acc_memory_s
{
  char *data;
  int size;
};

void *_acc_realloc(void *ptr, size_t size);
size_t _acc_memwrite(void *ptr, size_t size, size_t nmemb, void *data);

#endif
