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

/*  Coded with the help of a quick'n dirty
 *  ZIP file reader class by Javier Arevalo.
 */

#include <allegro.h>
#include <zlib.h>
#include <string.h>
#include "zipfile.h"

/* Compile time assertion. */
#define CT_ASSERT(x, msg) \
	typedef int __tjv_cta__ ## msg ## __ [(x) ? 1 : -1];

#define ZIP_DIR_HEADER_SIGNATURE        0x06054b50
#define ZIP_DIR_FILE_HEADER_SIGNATURE   0x02014b50
#define ZIP_LOCAL_HEADER_SIGNATURE      0x04034b50
#define COMP_STORE  0
#define COMP_DEFLAT 8

typedef unsigned long dword;
typedef unsigned short word;

CT_ASSERT(sizeof(dword) == 4, invalid_dword_size);
CT_ASSERT(sizeof(word) == 2, invalid_word_size);

/* Structures must be packed. If your platform doesn't know about the pack
 * #pragma's, you may try to remove the #pragma's altogether, since my code
 * just won't compile if the size of (one of) the structures is invalid. */
#ifdef ALLEGRO_GCC
 #pragma pack(push, 2)
#else
 #pragma pack(2)
#endif

/* ZIP_LOCAL_HEADER: file header before the compressed data of the file */
typedef struct ZIP_LOCAL_HEADER
{
	dword   sig;            /* ZIP_LOCAL_HEADER_SIGNATURE */
	word    version;
	word    flag;
	word    compression;    /* COMP_xxxx */
	word    modTime;
	word    modDate;
	dword   crc32;
	dword   cSize;
	dword   ucSize;
	word    fnameLen;       /* Filename string follows header. */
	word    xtraLen;        /* Extra field follows filename. */
} ZIP_LOCAL_HEADER;

CT_ASSERT(sizeof(ZIP_LOCAL_HEADER) == 30, invalid_zip_local_header_size);

/* ZIP_DIR_HEADER: end record of a zip archive */
typedef struct ZIP_DIR_HEADER
{
	dword   sig;            /* ZIP_DIR_HEADER_SIGNATURE */
	word    nDisk;
	word    nStartDisk;
	word    nDirEntries;
	word    totalDirEntries;
	dword   dirSize;
	dword   dirOffset;
	word    cmntLen;
} ZIP_DIR_HEADER;

CT_ASSERT(sizeof(ZIP_DIR_HEADER) == 22, invalid_zip_dir_header_size);

/* ZIP_DIR_FILE_HEADER: file header in directory data (before end record) */
typedef struct ZIP_DIR_FILE_HEADER
{
	dword   sig;            /* ZIP_DIR_FILE_HEADER_SIGNATURE */
	word    verMade;
	word    verNeeded;
	word    flag;
	word    compression;    /* COMP_xxxx */
	word    modTime;
	word    modDate;
	dword   crc32;
	dword   cSize;          /* Compressed size */
	dword   ucSize;         /* Uncompressed size */
	word    fnameLen;       /* Filename string follows header. */
	word    xtraLen;        /* Extra field follows filename. */
	word    cmntLen;        /* Comment field follows extra field. */
	word    diskStart;
	word    intAttr;
	dword   extAttr;
	dword   hdrOffset;
} ZIP_DIR_FILE_HEADER;

CT_ASSERT(sizeof(ZIP_DIR_FILE_HEADER) == 46, invalid_zip_dir_file_header_size);

#ifdef ALLEGRO_GCC
 #pragma pack(pop)
#else
 #pragma pack()
#endif

#ifdef ALLEGRO_BIG_ENDIAN

static void swap_dword(dword *_dw)
{
	char *dw = (char*)_dw;

	dw[0] ^= dw[3] ^= dw[0];
	dw[1] ^= dw[2] ^= dw[1];
}

static void swap_word(word *_w)
{
	char *w = (char*)_w;

	w[0] ^= w[1] ^= w[0];
}

static void fix_zip_local_header(ZIP_LOCAL_HEADER *z)
{
	swap_dword(&z->sig);
	swap_word(&z->version);
	swap_word(&z->flag);
	swap_word(&z->compression);
	swap_word(&z->modTime);
	swap_word(&z->modDate);
	swap_dword(&z->crc32);
	swap_dword(&z->cSize);
	swap_dword(&z->ucSize);
	swap_word(&z->fnameLen);
	swap_word(&z->xtraLen);
}

static void fix_zip_dir_header(ZIP_DIR_HEADER *z)
{
	swap_dword(&z->sig);
	swap_word(&z->nDisk);
	swap_word(&z->nStartDisk);
	swap_word(&z->nDirEntries);
	swap_word(&z->totalDirEntries);
	swap_dword(&z->dirSize);
	swap_dword(&z->dirOffset);
	swap_word(&z->cmntLen);
}

static void fix_zip_dir_file_header(ZIP_DIR_FILE_HEADER *z)
{
	swap_dword(&z->sig);
	swap_word(&z->verMade);
	swap_word(&z->verNeeded);
	swap_word(&z->flag);
	swap_word(&z->compression);
	swap_word(&z->modTime);
	swap_word(&z->modDate);
	swap_dword(&z->crc32);
	swap_dword(&z->cSize);
	swap_dword(&z->ucSize);
	swap_word(&z->fnameLen);
	swap_word(&z->xtraLen);
	swap_word(&z->cmntLen);
	swap_word(&z->diskStart);
	swap_word(&z->intAttr);
	swap_dword(&z->extAttr);
	swap_dword(&z->hdrOffset);
}

#else /* defined(ALLEGRO_BIG_ENDIAN) */

#define fix_zip_local_header(z)
#define fix_zip_dir_header(z)
#define fix_zip_dir_file_header(z)

#endif /* !defined(ALLEGRO_BIG_ENDIAN) */

/* ZIP_USERDATA: the userdata field of the PACKFILE structure returned
 *  by pack_fopen_zip() points to a ZIP_USERDATA structure. */
typedef struct ZIP_USERDATA
{
	dword sig;              /* ZIP_LOCAL_HEADER_SIGNATURE */
	dword cSize;            /* Compressed size */
	int ungetc;             /* ungetc() buffer */
	PACKFILE *f;            /* the zip file */
	z_stream stream;        /* the zlib stream */
	int err;                /* zlib error code */
	char inbuf[4096];       /* input buffer (compressed data) */
} ZIP_USERDATA;

static int zip_fclose(void *_f);
static int zip_getc(void *_f);
static int zip_ungetc(int ch, void *_f);
static int zip_putc(int c, void *_f);
static long zip_fread(void *p, long n, void *_f);
static long zip_fwrite(AL_CONST void *p, long n, void *_f);
static int zip_fseek(void *_f, int offset);
static int zip_feof(void *_f);
static int zip_ferror(void *_f);

static int zip_dir_fclose(void *_f);
static int zip_dir_getc(void *_f);
static int zip_dir_ungetc(int ch, void *_f);
static int zip_dir_putc(int c, void *_f);
static long zip_dir_fread(void *p, long n, void *_f);
static long zip_dir_fwrite(AL_CONST void *p, long n, void *_f);
static int zip_dir_fseek(void *_f, int offset);
static int zip_dir_feof(void *_f);
static int zip_dir_ferror(void *_f);

/* userdata points to a ZIP_USERDATA structure in this case */

static PACKFILE_VTABLE zip_vtable =
{
	zip_fclose,
	zip_getc,
	zip_ungetc,
	zip_fread,
	zip_putc,
	zip_fwrite,
	zip_fseek,
	zip_feof,
	zip_ferror
};

/* userdata points to a chunk of memory containing, in the following order:
 *  dh:       ZIP_DIR_HEADER dh;
 *  dir_data: (ZIP_DIR_FILE_HEADER+fname+xtra+cmnt)[dh.nDirEntries]
 *              (the size of the entire dir_data field is dh.dirSize)
 *  dir:      ZIP_DIR_FILE_HEADER* dir[dh.nDirEntries];
 *              (currently unused, I must still add functions to walk
 *              through the directory entries).
 *  zipfname: NULL-terminated U_CURRENT string giving the name of the zip file.
 *              (as passed to pack_fopen_zip_dir().)
 */

static PACKFILE_VTABLE zip_dir_vtable =
{
	zip_dir_fclose,
	zip_dir_getc,
	zip_dir_ungetc,
	zip_dir_fread,
	zip_dir_putc,
	zip_dir_fwrite,
	zip_dir_fseek,
	zip_dir_feof,
	zip_dir_ferror
};

static int zip_fclose(void *_f)
{
	ZIP_USERDATA *z = (ZIP_USERDATA*)_f;

	ASSERT(z);
	ASSERT(z->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	inflateEnd(&z->stream);
	pack_fclose(z->f);
	free(_f);
	return 0;
}

static int zip_getc(void *_f)
{
	unsigned char ch;

	ASSERT(_f);
	ASSERT(((ZIP_USERDATA*)_f)->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	return zip_fread(&ch, 1, _f) == 1 ? ch : EOF;
}

static int zip_ungetc(int ch, void *_f)
{
	ZIP_USERDATA *z = (ZIP_USERDATA*)_f;

	ASSERT(z);
	ASSERT(z->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	return (z->ungetc = ch); /* can't fail */
}

static int zip_putc(int c, void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_USERDATA*)_f)->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	return EOF; /* read-only */
}

/* helper function for zip_fread(). Returns FALSE on error, TRUE on success. */
static int zip_refill_buffer(ZIP_USERDATA *z)
{
	ASSERT(z);
	ASSERT(z->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	if (z->stream.avail_in == 0)
	{
		long n = MIN(sizeof(z->inbuf), z->cSize - z->stream.total_in);

		z->stream.next_in = (Bytef*)z->inbuf;
		z->stream.avail_in = n;

		if (pack_fread(z->inbuf, n, z->f) != n)
		{
			z->err = Z_DATA_ERROR;
			return FALSE;
		}
	}
	return TRUE;
}

/* workhorse function, used by zip_getc() and zip_fseek() */
static long zip_fread(void *p, long n, void *_f)
{
	ZIP_USERDATA *z = (ZIP_USERDATA*)_f;

	ASSERT(p);
	ASSERT(n >= 0);
	ASSERT(z);
	ASSERT(z->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	if (n && z->ungetc >= 0)
	{
		char *q = (char*)p;

		*q = z->ungetc;
		p = q + 1;
		--n;
		z->ungetc = -1;
	}

	if (n)
	{
		z->stream.next_out = (Bytef*)p;
		z->stream.avail_out = n;
		z->err = Z_OK;

		while (z->stream.avail_out && z->err == Z_OK && zip_refill_buffer(z))
			z->err = inflate(&z->stream, Z_NO_FLUSH);

		return n - z->stream.avail_out;
	}

	return 0;
}

static long zip_fwrite(AL_CONST void *p, long n, void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_USERDATA*)_f)->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	return EOF; /* read-only */
}

static int zip_fseek(void *_f, int offset)
{
	ASSERT(offset >= 0);
	ASSERT(_f);
	ASSERT(((ZIP_USERDATA*)_f)->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	while (offset--) if (zip_getc(_f) == EOF) return EOF;
	return 0;
}

static int zip_feof(void *_f)
{
	ZIP_USERDATA *z = (ZIP_USERDATA*)_f;

	ASSERT(z);
	ASSERT(z->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	return z->ungetc < 0 && z->err == Z_STREAM_END;
}

static int zip_ferror(void *_f)
{
	ZIP_USERDATA *z = (ZIP_USERDATA*)_f;

	ASSERT(z);
	ASSERT(z->sig == ZIP_LOCAL_HEADER_SIGNATURE);

	if (z->ungetc >= 0 || z->err == Z_STREAM_END) return 0;
	return z->err;
}

static int zip_dir_fclose(void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);

	free(_f);
	return 0;
}

static int zip_dir_getc(void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return EOF;
}

static int zip_dir_ungetc(int ch, void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return EOF;
}

static int zip_dir_putc(int c, void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return EOF;
}

static long zip_dir_fread(void *p, long n, void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return EOF;
}

static long zip_dir_fwrite(AL_CONST void *p, long n, void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return EOF;
}

static int zip_dir_fseek(void *_f, int offset)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return EOF;
}

static int zip_dir_feof(void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return TRUE;
}

static int zip_dir_ferror(void *_f)
{
	ASSERT(_f);
	ASSERT(((ZIP_DIR_HEADER*)_f)->sig == ZIP_DIR_HEADER_SIGNATURE);
	ASSERT(FALSE);

	return TRUE;
}

/* pack_fopen_zip:
 *  Opens a PACKFILE to read from a file which resides inside a zip archive.
 *  You must give it the PACKFILE representing the zip file (as returned by
 *  pack_fopen_zip_dir) and the path/filename inside the archive.
 */
PACKFILE *pack_fopen_zip(AL_CONST PACKFILE *zip, AL_CONST char *filename)
{
	char fname[512]; /* U_ASCII format, UNIX slashes */
	char tmp[512];
	AL_CONST ZIP_DIR_HEADER *dh;
	AL_CONST char *dir_data, *pfh;
	AL_CONST ZIP_DIR_FILE_HEADER **dir;
	AL_CONST char *zipfilename; /* U_CURRENT format */
	int fnameLen, i;

	ASSERT(zip);
	ASSERT(zip->userdata);
	ASSERT(filename);

	/* Setup pointers. */
	dh = (AL_CONST ZIP_DIR_HEADER*)zip->userdata;

	ASSERT(dh->sig == ZIP_DIR_HEADER_SIGNATURE);

	dir_data = (AL_CONST char*)(dh + 1);
	dir = (AL_CONST ZIP_DIR_FILE_HEADER**)(dir_data + dh->dirSize);
	zipfilename = (AL_CONST char*)(dir + dh->nDirEntries);

	/* We need the fname converted to ASCII *and* stored in fname. */
	do_uconvert(filename, U_CURRENT, fname, U_ASCII, sizeof(fname));
	fnameLen = strlen(fname);
	if (fnameLen > (int)sizeof(fname)) fnameLen = sizeof(fname);

	/* Convert DOS backslashes to UNIX slashes */
	for (i = 0; i < fnameLen; ++i)
		if (fname[i] == '\\') fname[i] = '/';

	/* Look for our entry. */
	for (i = 0, pfh = dir_data; i < dh->nDirEntries; i++)
	{
		AL_CONST ZIP_DIR_FILE_HEADER *fh = (ZIP_DIR_FILE_HEADER*)pfh;

		/* Check the directory entry integrity. */
		ASSERT(fh->sig == ZIP_DIR_FILE_HEADER_SIGNATURE);

		/* Is this our entry? */
		pfh += sizeof(*fh);

		if (fh->fnameLen == fnameLen && !memcmp(pfh, fname, fnameLen))
		{
			PACKFILE *f;
			ZIP_LOCAL_HEADER h;
			ZIP_USERDATA *z;

			/* Go to the actual file and read the local header. */
			if (!(f = pack_fopen(zipfilename, "r")) ||
				pack_fseek(f, fh->hdrOffset) ||
				pack_fread(&h, sizeof(h), f) != sizeof(h))
			{
				TRACE("%s#%s: %s\n", uconvert_toascii(zipfilename, tmp), fname, strerror(*allegro_errno));
				pack_fclose(f);
				return NULL;
			}

			/* Fix endianness */
			fix_zip_local_header(&h);

			/* Check */
			if (h.sig != ZIP_LOCAL_HEADER_SIGNATURE)
			{
				TRACE("%s#%s: invalid ZIP_LOCAL_HEADER signature\n", uconvert_toascii(zipfilename, tmp), fname);
				pack_fclose(f);
				return NULL;
			}

			/* Skip extra fields */
			if (pack_fseek(f, h.fnameLen + h.xtraLen))
			{
				TRACE("%s#%s: %s\n", uconvert_toascii(zipfilename, tmp), fname, strerror(*allegro_errno));
				pack_fclose(f);
				return NULL;
			}

			if (h.compression == COMP_STORE)
			{
				/* Fake an early EOF and return the zip PACKFILE. */
				f->normal.todo = fh->ucSize;
				return f;
			}
			else if (h.compression != COMP_DEFLAT)
			{
				TRACE("%s#%s: unknown compression\n", uconvert_toascii(zipfilename, tmp), fname);
				pack_fclose(f);
				return NULL;
			}

			/* Alloc compressed data buffer and read the whole stream */
			if (!(z = (ZIP_USERDATA*)malloc(sizeof(ZIP_USERDATA))))
			{
				TRACE("%s#%s: %s\n", uconvert_toascii(zipfilename, tmp), fname, strerror(*allegro_errno));
				return NULL;
			}

			memset(z, 0, sizeof(ZIP_USERDATA));
			z->cSize = h.cSize;
			z->ungetc = -1;
			z->f = f;

			/* Perform inflation. wbits < 0 indicates no zlib header inside the data. */
			zip_refill_buffer(z);
			z->err = inflateInit2(&z->stream, -MAX_WBITS);

			if (z->err != Z_OK)
			{
				TRACE("%s#%s: %s\n", uconvert_toascii(zipfilename, tmp), fname, z->stream.msg);
				zip_fclose(z);
				return NULL;
			}

			return pack_fopen_vtable(&zip_vtable, z);
		}

		/* Skip extra and comment fields. */
		pfh += fh->fnameLen + fh->xtraLen + fh->cmntLen;
	}

	/* No such entry, return error. */
	*allegro_errno = ENOENT;
	TRACE("%s#%s: %s\n", uconvert_toascii(zipfilename, tmp), fname, strerror(*allegro_errno));
	return NULL;
}

/* pack_fopen_zip_dir:
 *  Opens the zip archive specified by filename and reads the directory and
 *  directory file headers. These headers are stored in a PACKFILE structure
 *  and must be passed to pack_fopen_zip() to actually read a file from the
 *  zip archive. Returns NULL on error, the zip packfile on success.
 */
PACKFILE *pack_fopen_zip_dir(AL_CONST char* filename)
{
	char tmp[512];
	PACKFILE *f;
	long dhOffset;
	ZIP_DIR_HEADER dh;
	ZIP_DIR_FILE_HEADER *fh, **dir;
	void *data;
	char *dir_data, *pfh;
	int fnameLen, i;

	ASSERT(filename);

	/* Assuming no extra comment at the end, read the whole end record. */
	if (!(f = pack_fopen(filename, "r")) ||
		pack_fseek(f, (dhOffset = f->normal.todo - sizeof(ZIP_DIR_HEADER))) ||
		pack_fread(&dh, sizeof(dh), f) != sizeof(dh))
	{
		TRACE("%s: %s\n", uconvert_toascii(filename, tmp), strerror(*allegro_errno));
		pack_fclose(f);
		return NULL;
	}

	pack_fclose(f);

	/* Fix endianness */
	fix_zip_dir_header(&dh);

	/* Check */
	if (dh.sig != ZIP_DIR_HEADER_SIGNATURE)
	{
		TRACE("%s: invalid ZIP_DIR_HEADER signature\n", uconvert_toascii(filename, tmp));
		return NULL;
	}

	/* Go to the beginning of the directory. */
	if (!(f = pack_fopen(filename, "r")) || 
		pack_fseek(f, dhOffset - dh.dirSize))
	{
		TRACE("%s: %s\n", uconvert_toascii(filename, tmp), strerror(*allegro_errno));
		pack_fclose(f);
		return NULL;
	}

	/* Allocate the data buffer and read and setup the whole thing. */
	fnameLen = ustrsizez(filename);
	data = malloc(sizeof(dh) + dh.dirSize + dh.nDirEntries*sizeof(*dir) + fnameLen);
	if (!data) { pack_fclose(f); return NULL; }
	memcpy(data, &dh, sizeof(dh));
	dir_data = (char*)((ZIP_DIR_HEADER*)data + 1);
	pack_fread(dir_data, dh.dirSize, f);
	pack_fclose(f);
	dir = (ZIP_DIR_FILE_HEADER**)(dir_data + dh.dirSize);
	memset(dir, 0, dh.nDirEntries*sizeof(*dir));
	memcpy(dir + dh.nDirEntries, filename, fnameLen);

	/* Now process each entry. */
	for (i = 0, pfh = dir_data; i < dh.nDirEntries; ++i)
	{
		/* Store the address of nth file for quicker access. */
		dir[i] = fh = (ZIP_DIR_FILE_HEADER*)pfh;

		/* Fix endianness */
		fix_zip_dir_file_header(fh);

		/* Check the directory entry integrity. */
		if (fh->sig != ZIP_DIR_FILE_HEADER_SIGNATURE)
		{
			TRACE("%s: invalid ZIP_DIR_FILE_HEADER signature\n", uconvert_toascii(filename, tmp));
			free(data);
			return NULL;
		}

		/* Skip name, extra and comment fields. */
		pfh += sizeof(*fh) + fh->fnameLen + fh->xtraLen + fh->cmntLen;
	}

	return pack_fopen_vtable(&zip_dir_vtable, data);
}

int zip_get_num_dir_entries(AL_CONST PACKFILE *zip)
{
	AL_CONST ZIP_DIR_HEADER *dh;

	ASSERT(zip);
	ASSERT(zip->userdata);

	/* Setup pointer. */
	dh = (AL_CONST ZIP_DIR_HEADER*)zip->userdata;

	ASSERT(dh->sig == ZIP_DIR_HEADER_SIGNATURE);

	return dh->nDirEntries;
}

char *zip_get_name(AL_CONST PACKFILE *zip, int i, char *dest)
{
	char tmp[512];
	AL_CONST ZIP_DIR_HEADER *dh;
	AL_CONST char *dir_data;
	AL_CONST ZIP_DIR_FILE_HEADER **dir;
	int fnameLen;

	ASSERT(zip);
	ASSERT(zip->userdata);
	ASSERT(dest);

	/* Setup pointers. */
	dh = (AL_CONST ZIP_DIR_HEADER*)zip->userdata;

	ASSERT(dh->sig == ZIP_DIR_HEADER_SIGNATURE);

	dir_data = (AL_CONST char*)(dh + 1);
	dir = (AL_CONST ZIP_DIR_FILE_HEADER**)(dir_data + dh->dirSize);

	ASSERT(i >= 0);
	ASSERT(i < dh->nDirEntries);

	/* Copy to dest (unicode-awaraarrrg) */
	fnameLen = MIN(dir[i]->fnameLen, sizeof(tmp) - 1);
	memcpy(tmp, dir[i] + 1, fnameLen);
	tmp[fnameLen] = 0;
	do_uconvert(tmp, U_ASCII, dest, U_CURRENT, INT_MAX);
	return dest;
}

long zip_get_size(AL_CONST PACKFILE *zip, int i)
{
	AL_CONST ZIP_DIR_HEADER *dh;
	AL_CONST char *dir_data;
	AL_CONST ZIP_DIR_FILE_HEADER **dir;

	ASSERT(zip);
	ASSERT(zip->userdata);

	/* Setup pointers. */
	dh = (AL_CONST ZIP_DIR_HEADER*)zip->userdata;

	ASSERT(dh->sig == ZIP_DIR_HEADER_SIGNATURE);

	dir_data = (AL_CONST char*)(dh + 1);
	dir = (AL_CONST ZIP_DIR_FILE_HEADER**)(dir_data + dh->dirSize);

	ASSERT(i >= 0);
	ASSERT(i < dh->nDirEntries);

	return dir[i]->ucSize;
}
