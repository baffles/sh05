/* libacc
 * complex interface to a.cc through caching proxy on bafsoft.com
 *
 * by baf, 2005
 * http://www.bafsoft.com/
 */

#include "acc.h"

avalist *avatars = NULL;
dlcallback dlcb = NULL;
curldlcallback cdlcb = NULL;

void set_dl_callback(dlcallback cb)
{
  dlcb = cb;
}

void set_cdl_callback(curldlcallback cb)
{
  cdlcb = cb;
}


int acc_get_uid(char *user)
{
  CURL *curl_handle;
  int id;
  char request[255];
  _acc_memory data;
  
  sprintf(request, "%s?usr=%s&cmd=%s", URL_BASE, user, "uid");
  //MAKE_URL_S(request, user, "uid");
  printf("%s", request);
  
  data.data = NULL;
  data.size = 0;
  
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
  curl_easy_setopt(curl_handle, CURLOPT_URL, request);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, _acc_memwrite);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)&data);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
  curl_easy_perform(curl_handle);
  curl_easy_cleanup(curl_handle);
  
  id = atoi(data.data);
  free(data.data);
  return id;
}


acc_uinfo *acc_get_uinfo(char *user)
{
  return acc_get_uinfo_ex(acc_get_uid(user));
}

acc_uinfo *acc_get_uinfo_ex(int uid)
{
  CURL *curl_handle;
  char request[255];
  _acc_memory data;
  acc_uinfo *ret;
  char *dataptr;
  int datapos = 0, len, j;
  
  sprintf(request, "http://www.bafsoft.com/sh2k5/a_cc/user.php?usr=%s&cmd=info", uid);
  //MAKE_URL_S(request, uid, "info");
  
  data.data = NULL;
  data.size = 0;
  
  curl_global_init(CURL_GLOBAL_ALL);
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
  curl_easy_setopt(curl_handle, CURLOPT_URL, request);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, _acc_memwrite);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)&data);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
  curl_easy_perform(curl_handle);
  curl_easy_cleanup(curl_handle);
  
  ret = (acc_uinfo *)malloc(sizeof(acc_uinfo));
  
  sscanf((char *)&data, "%d %d %d %d %d %[APM] %d %s %s %[^\0]", &ret->reginfo.m, &ret->reginfo.d, &ret->reginfo.y, &ret->reginfo.hr, &ret->reginfo.min, &ret->reginfo.ampm, &ret->minfo.id, ret->minfo.img_fname, ret->minfo.name, ret->profile);
  
  free(data.data);
  return ret;
}


acc_thread *acc_get_rfp(char *user)
{
  return acc_get_rfp_ex(acc_get_uid(user));
}

acc_thread *acc_get_rfp_ex(int uid)
{
  CURL *curl_handle;
  FILE *temp;
  char request[255], tempname[255];
  //_acc_memory data;
  acc_thread *ret;
  //char *dataptr;
  //int datapos = 0, len, i, j;
  int len, i;
  
  sprintf(request, "%s?usr=%d&cmd=rfp", URL_BASE, uid);
  printf("%s", request);
  //MAKE_URL(request, uid, "rfp");
  sprintf(tempname, "temp/%d.rfp", uid);
  
  //data.data = NULL;
  //data.size = 0;
  
  temp = fopen(tempname, "w");
  curl_global_init(CURL_GLOBAL_ALL);
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
  curl_easy_setopt(curl_handle, CURLOPT_URL, request);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, fwrite);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)temp);
  //curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, _acc_memwrite);
  //curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)&data);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
  ///
  if(cdlcb)
  {
    curl_easy_setopt(curl_handle, CURLOPT_PROGRESSFUNCTION, cdlcb);
    curl_easy_setopt(curl_handle, CURLOPT_PROGRESSDATA, NULL);
    //curl_easy_setopt(curl_handle, CURLOPT_NOPROGRESS, FALSE);
  }
  ///
  curl_easy_perform(curl_handle);
  curl_easy_cleanup(curl_handle);
  fclose(temp);
  
  ret = (acc_thread *)malloc(sizeof(acc_thread));
  temp = fopen(tempname, "r");
  
  fscanf(temp, "%d", &len);
  ret->title = (char *)malloc(len + 1);
  fread(ret->title, len, 1, temp); ret->title[len] = 0;
  
  fscanf(temp, "%d", &len);
  ret->xml = (char *)malloc(len + 1);
  fread(ret->xml, len, 1, temp); ret->xml[len] = 0;
  
  fscanf(temp, "%d ", &ret->num_posts);
  ret->posts = (acc_post *)malloc(sizeof(acc_post) * ret->num_posts);
  for(i = 0; i < ret->num_posts; ++i)
  {
    ret->posts[i].id = i;
    
    fscanf(temp, "%d", &len);
    ret->posts[i].poster = (char *)malloc(len + 1);
    fread(ret->posts[i].poster, len, 1, temp); ret->posts[i].poster[len] = 0;
    
    fscanf(temp, "%d ", &ret->posts[i].posterid);
    
    fscanf(temp, "%d", &len);
    ret->posts[i].postdate = (char *)malloc(len + 1);
    fread(ret->posts[i].postdate, len, 1, temp); ret->posts[i].postdate[len] = 0;
    
    fscanf(temp, "%d ", &len);
    ret->posts[i].post = (char *)malloc(len + 1);
    fread(ret->posts[i].post, len, 1, temp); ret->posts[i].post[len] = 0;
    
    ret->posts[i].avatar = acc_get_avatar_ex(ret->posts[i].posterid);
    
    if(dlcb)
      (*dlcb)(i, ret->num_posts, (int)(((float)(i + 1) / (float)ret->num_posts) * 100));
  }
  fclose(temp);
  //unlink(tempname);
  
  /**dataptr = (char *)data.data;
  sscanf(dataptr, "%d", &len);
  datapos++;
  for(i = 10; len > i; i *= 10)
    datapos++;
  dataptr = data.data + datapos;
  ret->title = (char *)malloc(len + 1);
  strncpy(ret->title, dataptr, len);
  datapos += len;
  dataptr = data.data + datapos;
  ret->title[len] = 0;
  
  sscanf(dataptr, "%d", &len);
  datapos++;
  for(j = 10; len > j; j *= 10)
    datapos++;
  dataptr = data.data + datapos;
  ret->xml = (char *)malloc(len + 1);
  strncpy(ret->xml, dataptr, len);
  datapos += len;
  dataptr = data.data + datapos;
  ret->xml[len] = 0;
  
  sscanf(dataptr, "%d", &ret->num_posts);
  datapos++;
  for(j = 10; ret->num_posts > j; j *= 10)
    datapos++;
  
  ret->posts = (acc_post *)malloc(sizeof(acc_post) * ret->num_posts);
  for(i = 0; i < ret->num_posts; ++i)
  {
    ret->posts[i].id = i;
    
    sscanf(dataptr, "%d", &len);
    datapos++;
    for(j = 10; len > j; j *= 10)
      datapos++;
    dataptr = data.data + datapos;
    ret->posts[i].poster = (char *)malloc(len + 1);
    strncpy(ret->posts[i].poster, dataptr, len);
    datapos += len;
    dataptr = data.data + datapos;
    
    sscanf(dataptr, "%d", &ret->posts[i].posterid);
    for(j = 10; ret->posts[i].posterid > j; j *= 10)
      datapos++;
    
    sscanf(dataptr, "%d", &len);
    datapos++;
    for(j = 10; len > j; j *= 10)
      datapos++;
    dataptr = data.data + datapos;
    ret->posts[i].postdate = (char *)malloc(len + 1);
    strncpy(ret->posts[i].postdate, dataptr, len);
    datapos += len;
    dataptr = data.data + datapos;
    
    sscanf(dataptr, "%d", &len);
    datapos++;
    for(j = 10; len > j; j *= 10)
      datapos++;
    dataptr = data.data + datapos;
    ret->posts[i].post = (char *)malloc(len + 1);
    strncpy(ret->posts[i].poster, dataptr, len);
    datapos += len;
    dataptr = data.data + datapos;
    
    ret->posts[i].avatar = acc_get_avatar_ex(ret->posts[i].posterid);
    if(dlcb)
      (*dlcb)(i, ret->num_posts, (int)(((float)(i + 1) / (float)ret->num_posts) * 100));
  }
  
  free(data.data);**/
  
  return ret;
}

acc_thread *acc_get_thread(int tid)
{
  CURL *curl_handle;
  FILE *temp;
  char request[255], tempname[255];
  //_acc_memory data;
  acc_thread *ret;
  //char *dataptr;
  //int datapos = 0, len, i, j;
  int len, i;
  
  sprintf(request, "http://www.bafsoft.com/sh2k5/a_cc/user.php?usr=%d&cmd=thread", tid);
  //MAKE_URL(request, tid, "thread");
  sprintf(tempname, "temp/%d.thd", tid);
  
  //data.data = NULL;
  //data.size = 0;
  
  temp = fopen(tempname, "w");
  curl_global_init(CURL_GLOBAL_ALL);
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
  curl_easy_setopt(curl_handle, CURLOPT_URL, request);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, fwrite);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)temp);
  //curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, _acc_memwrite);
  //curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)&data);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
  ///
  if(cdlcb)
  {
    curl_easy_setopt(curl_handle, CURLOPT_PROGRESSFUNCTION, cdlcb);
    curl_easy_setopt(curl_handle, CURLOPT_PROGRESSDATA, NULL);
    curl_easy_setopt(curl_handle, CURLOPT_NOPROGRESS, FALSE);
  }
  ///
  curl_easy_perform(curl_handle);
  curl_easy_cleanup(curl_handle);
  fclose(temp);
  
  ret = (acc_thread *)malloc(sizeof(acc_thread));
  temp = fopen(tempname, "r");
  
  fscanf(temp, "%d", &len);
  ret->title = (char *)malloc(len + 1);
  fread(ret->title, len, 1, temp); ret->title[len] = 0;
  
  fscanf(temp, "%d", &len);
  ret->xml = (char *)malloc(len + 1);
  fread(ret->xml, len, 1, temp); ret->xml[len] = 0;
  
  fscanf(temp, "%d ", &ret->num_posts);
  ret->posts = (acc_post *)malloc(sizeof(acc_post) * ret->num_posts);
  for(i = 0; i < ret->num_posts; ++i)
  {
    ret->posts[i].id = i;
    
    fscanf(temp, "%d", &len);
    ret->posts[i].poster = (char *)malloc(len + 1);
    fread(ret->posts[i].poster, len, 1, temp); ret->posts[i].poster[len] = 0;
    
    fscanf(temp, "%d ", &ret->posts[i].posterid);
    
    fscanf(temp, "%d", &len);
    ret->posts[i].postdate = (char *)malloc(len + 1);
    fread(ret->posts[i].postdate, len, 1, temp); ret->posts[i].postdate[len] = 0;
    
    fscanf(temp, "%d ", &len);
    ret->posts[i].post = (char *)malloc(len + 1);
    fread(ret->posts[i].post, len, 1, temp); ret->posts[i].post[len] = 0;
    
    ret->posts[i].avatar = acc_get_avatar_ex(ret->posts[i].posterid);
    
    if(dlcb)
      (*dlcb)(i, ret->num_posts, (int)(((float)(i + 1) / (float)ret->num_posts) * 100));
  }
  fclose(temp);
  //unlink(tempname);
  
  return ret;
}


BITMAP *acc_get_avatar(char *user)
{
  acc_get_avatar_ex(acc_get_uid(user));
}

BITMAP *acc_get_avatar_ex(int uid)
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
    avalist *newa;
    
    newa = _new_node(uid, _fetch_avatar(uid));
    
    cur = avatars;
    if(cur)
    {
      while(cur->next != NULL)
        cur = cur->next;
      cur->next = newa;
      cur = cur->next;
    }
    else
    {
      avatars = cur = newa;
      atexit(_cleanup_avatars);
    }
  }
  
  return cur->bmp;
}

void del_acc_thread(acc_thread *td)
{
  int i;
  if(!td)
    return;
  
  free(td->title);
  free(td->xml);
  for(i = 0; i < td->num_posts; ++i)
  {
    free(td->posts[i].poster);
    free(td->posts[i].postdate);
    free(td->posts[i].post);
    td->posts[i].avatar = NULL;
  }
  free(td->posts);
  free(td);
}

void del_acc_uinfo(acc_uinfo *td)
{
  if(td)
    free(td);
}


/* internal avatar handeling */
avalist *_new_node(int id, BITMAP *bmp)
{
  avalist *ret = (avalist *)malloc(sizeof(avalist));
  ret->id = id;
  ret->bmp = bmp;
  ret->next = NULL;
  return ret;
}

BITMAP *_fetch_avatar(int uid)
{
  char request[256], pngfname[128];
  FILE *pngtmp;
  CURL *curl_handle;
  
  sprintf(request, "http://www.bafsoft.com/sh2k5/a_cc/user.php?usr=%d&cmd=avapng", uid);
  //MAKE_URL(request, uid, "avapng");
  sprintf(pngfname, "temp/%d.png", uid);
  
  pngtmp = fopen(pngfname, "wb");
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
  curl_easy_setopt(curl_handle, CURLOPT_URL, request);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, fwrite);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)pngtmp);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
  ///
  if(cdlcb)
  {
    curl_easy_setopt(curl_handle, CURLOPT_PROGRESSFUNCTION, cdlcb);
    curl_easy_setopt(curl_handle, CURLOPT_PROGRESSDATA, NULL);
    curl_easy_setopt(curl_handle, CURLOPT_NOPROGRESS, FALSE);
  }
  ///
  curl_easy_perform(curl_handle);
  curl_easy_cleanup(curl_handle);
  fclose(pngtmp);
  
  return load_png(pngfname, NULL);
}

void _cleanup_avatars()
{
  avalist *cur = avatars;
  avalist *next = avatars;
  int i = 0;
  while(cur)
  {
    next = cur->next;
    destroy_bitmap(cur->bmp);
    free(cur);
    cur = next;
  }
  avatars = NULL;
}

/* internal curl stuff */
void *_acc_realloc(void *ptr, size_t size)
{
  if(ptr)
    return realloc(ptr, size);
  else
    return malloc(size);
}

size_t _acc_memwrite(void *ptr, size_t size, size_t nmemb, void *data)
{
  size_t realsize = size * nmemb;
  _acc_memory *mem = (_acc_memory *)data;

  mem->data = (char *)_acc_realloc(mem->data, mem->size + realsize + 1);
  if(mem->data)
  {
    memcpy(&(mem->data[mem->size]), ptr, realsize);
    mem->size += realsize;
    mem->data[mem->size] = 0;
  }
  return realsize;
}
