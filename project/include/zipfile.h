/* Author: Tobi Vollebregt */

/*
#include <std_disclaimer.h>

   "I do not accept responsibility for any effects, adverse or otherwise, 
	that this code may have on you, your computer, your sanity, your dog, 
	and anything else that you can think of. Use it at your own risk."
*/

/* Zip archive reader functions through Allegro's PACKFILE system.
 *
 *  Copyright (C) 2005  Tobi Vollebregt
 *  License: Allegro
 *
 *  Requires Allegro WIP 4.1.18 or higher.
 */

#ifndef __tjv_zipfile_h__
#define __tjv_zipfile_h__

#ifndef ALLEGRO_VERSION
#error Must #include "allegro.h" before this file.
#endif

#if 10000*ALLEGRO_VERSION+100*ALLEGRO_SUB_VERSION+ALLEGRO_WIP_VERSION<40118
#error Requires Allegro WIP 4.1.18 or higher.
#endif

#ifdef __cplusplus
extern "C" {
#endif /* defined(__cplusplus) */

/* Usage example:
 *  Suppose you have a file archive.zip containing the files
 *  foo and bar, you would read from them as follows:
 *
 *  PACKFILE *zip, *foo, *bar;
 *
 *  zip = pack_fopen_zip_dir("archive.zip");
 *
 *  if (!zip) { show error message }
 *
 *  foo = pack_fopen_zip(zip, "foo");
 *  bar = pack_fopen_zip(zip, "bar");
 *  pack_fclose(zip);
 *
 *  if (!foo || !bar) { show error message }
 *
 *  { read from packfiles foo and bar like
 *    you read from any other packfile }
 *
 *  pack_fclose(foo);
 *  pack_fclose(bar);
 */

PACKFILE *pack_fopen_zip_dir(AL_CONST char* filename);
PACKFILE *pack_fopen_zip(AL_CONST PACKFILE *zip, AL_CONST char *filename);

int zip_get_num_dir_entries(AL_CONST PACKFILE *zip);
char *zip_get_name(AL_CONST PACKFILE *zip, int i, char *dest);
long zip_get_size(AL_CONST PACKFILE *zip, int i);

#ifdef __cplusplus
}; /* end of extern "C" */

/* Simple (example) wrapper class. */
class ZipFile
{
	PACKFILE *zip;
 public:
	ZipFile(): zip(NULL) {}
	ZipFile(const char *n): zip(openDir(n)) {}
	~ZipFile() { close(); }
	PACKFILE *openDir(const char *n) { close(); return (zip = pack_fopen_zip_dir(n)); }
	PACKFILE *open(const char *n) const { return pack_fopen_zip(zip, n); }
	PACKFILE *getPackfile() { return zip; }
	const PACKFILE *getPackfile() const { return zip; }
	bool  isOk() const { return (bool)zip; }
	void  close() { pack_fclose(zip); }
	int   getNumDirEntries() const { return zip_get_num_dir_entries(zip); }
	char *getName(int i, char *p) const { return zip_get_name(zip, i, p); }
	long  getSize(int i) const { return zip_get_size(zip, i); }
};

#endif /* defined(__cplusplus) */

#endif /* !defined(__tjv_zipfile_h__) */
