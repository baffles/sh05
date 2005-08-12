# 1 "test1.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "test1.c"
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 1 3
# 359 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 1 3
# 34 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zconf.h" 1 3
# 261 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zconf.h" 3
typedef unsigned char Byte;

typedef unsigned int uInt;
typedef unsigned long uLong;





   typedef Byte Bytef;

typedef char charf;
typedef int intf;
typedef uInt uIntf;
typedef uLong uLongf;


   typedef void const *voidpc;
   typedef void *voidpf;
   typedef void *voidp;







# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/sys/types.h" 1 3
# 32 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/sys/types.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/_mingw.h" 1 3
# 33 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/sys/types.h" 2 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 151 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 213 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 3 4
typedef unsigned int size_t;
# 325 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 39 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/sys/types.h" 2 3





typedef long time_t;
# 53 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/sys/types.h" 3
typedef long _off_t;


typedef _off_t off_t;







typedef unsigned int _dev_t;





typedef _dev_t dev_t;






typedef short _ino_t;


typedef _ino_t ino_t;






typedef int _pid_t;


typedef _pid_t pid_t;






typedef unsigned short _mode_t;


typedef _mode_t mode_t;






typedef int _sigset_t;


typedef _sigset_t sigset_t;





typedef long _ssize_t;


typedef _ssize_t ssize_t;
# 289 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zconf.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unistd.h" 1 3
# 9 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unistd.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 1 3
# 36 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 1 3
# 42 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 354 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 3 4
typedef short unsigned int wint_t;
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 43 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdarg.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stdarg.h" 1 3 4
# 44 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdarg.h" 2 3
# 45 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 2 3
# 151 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 3
typedef struct _iobuf
{
 char* _ptr;
 int _cnt;
 char* _base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char* _tmpfname;
} FILE;
# 176 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 3
extern __attribute__((dllimport)) FILE _iob[];
# 191 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 3
 FILE* __attribute__((__cdecl__)) fopen (const char*, const char*);
 FILE* __attribute__((__cdecl__)) freopen (const char*, const char*, FILE*);
 int __attribute__((__cdecl__)) fflush (FILE*);
 int __attribute__((__cdecl__)) fclose (FILE*);

 int __attribute__((__cdecl__)) remove (const char*);
 int __attribute__((__cdecl__)) rename (const char*, const char*);
 FILE* __attribute__((__cdecl__)) tmpfile (void);
 char* __attribute__((__cdecl__)) tmpnam (char*);
 char* __attribute__((__cdecl__)) _tempnam (const char*, const char*);


 char* __attribute__((__cdecl__)) tempnam (const char*, const char*);


 int __attribute__((__cdecl__)) setvbuf (FILE*, char*, int, size_t);

 void __attribute__((__cdecl__)) setbuf (FILE*, char*);





 int __attribute__((__cdecl__)) fprintf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) printf (const char*, ...);
 int __attribute__((__cdecl__)) sprintf (char*, const char*, ...);
 int __attribute__((__cdecl__)) _snprintf (char*, size_t, const char*, ...);
 int __attribute__((__cdecl__)) vfprintf (FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vprintf (const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vsprintf (char*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) _vsnprintf (char*, size_t, const char*, __gnuc_va_list);


int __attribute__((__cdecl__)) snprintf(char* s, size_t n, const char* format, ...);
extern __inline__ int __attribute__((__cdecl__))
vsnprintf (char* s, size_t n, const char* format, __gnuc_va_list arg)
  { return _vsnprintf ( s, n, format, arg); }
int __attribute__((__cdecl__)) vscanf (const char * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) vfscanf (FILE * __restrict__, const char * __restrict__,
       __gnuc_va_list);
int __attribute__((__cdecl__)) vsscanf (const char * __restrict__,
       const char * __restrict__, __gnuc_va_list);






 int __attribute__((__cdecl__)) fscanf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) scanf (const char*, ...);
 int __attribute__((__cdecl__)) sscanf (const char*, const char*, ...);




 int __attribute__((__cdecl__)) fgetc (FILE*);
 char* __attribute__((__cdecl__)) fgets (char*, int, FILE*);
 int __attribute__((__cdecl__)) fputc (int, FILE*);
 int __attribute__((__cdecl__)) fputs (const char*, FILE*);
 int __attribute__((__cdecl__)) getc (FILE*);
 int __attribute__((__cdecl__)) getchar (void);
 char* __attribute__((__cdecl__)) gets (char*);
 int __attribute__((__cdecl__)) putc (int, FILE*);
 int __attribute__((__cdecl__)) putchar (int);
 int __attribute__((__cdecl__)) puts (const char*);
 int __attribute__((__cdecl__)) ungetc (int, FILE*);





 size_t __attribute__((__cdecl__)) fread (void*, size_t, size_t, FILE*);
 size_t __attribute__((__cdecl__)) fwrite (const void*, size_t, size_t, FILE*);





 int __attribute__((__cdecl__)) fseek (FILE*, long, int);
 long __attribute__((__cdecl__)) ftell (FILE*);
 void __attribute__((__cdecl__)) rewind (FILE*);
# 295 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 3
typedef long long fpos_t;




 int __attribute__((__cdecl__)) fgetpos (FILE*, fpos_t*);
 int __attribute__((__cdecl__)) fsetpos (FILE*, const fpos_t*);





 void __attribute__((__cdecl__)) clearerr (FILE*);
 int __attribute__((__cdecl__)) feof (FILE*);
 int __attribute__((__cdecl__)) ferror (FILE*);
 void __attribute__((__cdecl__)) perror (const char*);






 FILE* __attribute__((__cdecl__)) _popen (const char*, const char*);
 int __attribute__((__cdecl__)) _pclose (FILE*);


 FILE* __attribute__((__cdecl__)) popen (const char*, const char*);
 int __attribute__((__cdecl__)) pclose (FILE*);





 int __attribute__((__cdecl__)) _flushall (void);
 int __attribute__((__cdecl__)) _fgetchar (void);
 int __attribute__((__cdecl__)) _fputchar (int);
 FILE* __attribute__((__cdecl__)) _fdopen (int, const char*);
 int __attribute__((__cdecl__)) _fileno (FILE*);
 int __attribute__((__cdecl__)) _fcloseall(void);

 int __attribute__((__cdecl__)) _getmaxstdio(void);
 int __attribute__((__cdecl__)) _setmaxstdio(int);



 int __attribute__((__cdecl__)) fgetchar (void);
 int __attribute__((__cdecl__)) fputchar (int);
 FILE* __attribute__((__cdecl__)) fdopen (int, const char*);
 int __attribute__((__cdecl__)) fileno (FILE*);
# 352 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 3
 int __attribute__((__cdecl__)) fwprintf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) wprintf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) swprintf (wchar_t*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) _snwprintf (wchar_t*, size_t, const wchar_t*, ...);
 int __attribute__((__cdecl__)) vfwprintf (FILE*, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vswprintf (wchar_t*, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) _vsnwprintf (wchar_t*, size_t, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) fwscanf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) wscanf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) swscanf (const wchar_t*, const wchar_t*, ...);
 wint_t __attribute__((__cdecl__)) fgetwc (FILE*);
 wint_t __attribute__((__cdecl__)) fputwc (wchar_t, FILE*);
 wint_t __attribute__((__cdecl__)) ungetwc (wchar_t, FILE*);


 wchar_t* __attribute__((__cdecl__)) fgetws (wchar_t*, int, FILE*);
 int __attribute__((__cdecl__)) fputws (const wchar_t*, FILE*);
 wint_t __attribute__((__cdecl__)) getwc (FILE*);
 wint_t __attribute__((__cdecl__)) getwchar (void);
 wchar_t* __attribute__((__cdecl__)) _getws (wchar_t*);
 wint_t __attribute__((__cdecl__)) putwc (wint_t, FILE*);
 int __attribute__((__cdecl__)) _putws (const wchar_t*);
 wint_t __attribute__((__cdecl__)) putwchar (wint_t);
 FILE* __attribute__((__cdecl__)) _wfdopen(int, wchar_t *);
 FILE* __attribute__((__cdecl__)) _wfopen (const wchar_t*, const wchar_t*);
 FILE* __attribute__((__cdecl__)) _wfreopen (const wchar_t*, const wchar_t*, FILE*);
 FILE* __attribute__((__cdecl__)) _wfsopen (const wchar_t*, const wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) _wtmpnam (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wtempnam (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) _wrename (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) _wremove (const wchar_t*);
 void __attribute__((__cdecl__)) _wperror (const wchar_t*);
 FILE* __attribute__((__cdecl__)) _wpopen (const wchar_t*, const wchar_t*);



int __attribute__((__cdecl__)) snwprintf (wchar_t* s, size_t n, const wchar_t* format, ...);
extern __inline__ int __attribute__((__cdecl__))
vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __gnuc_va_list arg)
  { return _vsnwprintf ( s, n, format, arg);}
int __attribute__((__cdecl__)) vwscanf (const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) vfwscanf (FILE * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) vswscanf (const wchar_t * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
# 406 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdio.h" 3
 FILE* __attribute__((__cdecl__)) wpopen (const wchar_t*, const wchar_t*);






 wint_t __attribute__((__cdecl__)) _fgetwchar (void);
 wint_t __attribute__((__cdecl__)) _fputwchar (wint_t);
 int __attribute__((__cdecl__)) _getw (FILE*);
 int __attribute__((__cdecl__)) _putw (int, FILE*);


 wint_t __attribute__((__cdecl__)) fgetwchar (void);
 wint_t __attribute__((__cdecl__)) fputwchar (wint_t);
 int __attribute__((__cdecl__)) getw (FILE*);
 int __attribute__((__cdecl__)) putw (int, FILE*);
# 37 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 2 3
# 60 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 3
typedef unsigned long _fsize_t;







struct _finddata_t
{
 unsigned attrib;
 time_t time_create;
 time_t time_access;
 time_t time_write;
 _fsize_t size;
 char name[(260)];
};

struct _finddatai64_t {
    unsigned attrib;
    time_t time_create;
    time_t time_access;
    time_t time_write;
    long long size;
    char name[(260)];
};



struct _wfinddata_t {
     unsigned attrib;
     time_t time_create;
     time_t time_access;
     time_t time_write;
     _fsize_t size;
     wchar_t name[(260)];
};
struct _wfinddatai64_t {
    unsigned attrib;
    time_t time_create;
    time_t time_access;
    time_t time_write;
    long long size;
    wchar_t name[(260)];
};
# 119 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 3
 int __attribute__((__cdecl__)) _findfirst (const char*, struct _finddata_t*);
 int __attribute__((__cdecl__)) _findnext (int, struct _finddata_t*);
 int __attribute__((__cdecl__)) _findclose (int);

 int __attribute__((__cdecl__)) _chdir (const char*);
 char* __attribute__((__cdecl__)) _getcwd (char*, int);
 int __attribute__((__cdecl__)) _mkdir (const char*);
 char* __attribute__((__cdecl__)) _mktemp (char*);
 int __attribute__((__cdecl__)) _rmdir (const char*);
 int __attribute__((__cdecl__)) _chmod (const char*, int);



 long long __attribute__((__cdecl__)) _filelengthi64(int);
 long __attribute__((__cdecl__)) _findfirsti64(const char*, struct _finddatai64_t*);
 int __attribute__((__cdecl__)) _findnexti64(long, struct _finddatai64_t*);
 long long __attribute__((__cdecl__)) _lseeki64(int, long long, int);
 long long __attribute__((__cdecl__)) _telli64(int);






 int __attribute__((__cdecl__)) chdir (const char*);
 char* __attribute__((__cdecl__)) getcwd (char*, int);
 int __attribute__((__cdecl__)) mkdir (const char*);
 char* __attribute__((__cdecl__)) mktemp (char*);
 int __attribute__((__cdecl__)) rmdir (const char*);
 int __attribute__((__cdecl__)) chmod (const char*, int);
# 179 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 3
 int __attribute__((__cdecl__)) _access (const char*, int);
 int __attribute__((__cdecl__)) _chsize (int, long);
 int __attribute__((__cdecl__)) _close (int);
 int __attribute__((__cdecl__)) _commit(int);



 int __attribute__((__cdecl__)) _creat (const char*, int);

 int __attribute__((__cdecl__)) _dup (int);
 int __attribute__((__cdecl__)) _dup2 (int, int);
 long __attribute__((__cdecl__)) _filelength (int);
 int __attribute__((__cdecl__)) _fileno (FILE*);
 long __attribute__((__cdecl__)) _get_osfhandle (int);
 int __attribute__((__cdecl__)) _isatty (int);







 int __attribute__((__cdecl__)) _eof (int);



 int __attribute__((__cdecl__)) _locking (int, int, long);

 long __attribute__((__cdecl__)) _lseek (int, long, int);


 int __attribute__((__cdecl__)) _open (const char*, int, ...);

 int __attribute__((__cdecl__)) _open_osfhandle (long, int);
 int __attribute__((__cdecl__)) _pipe (int *, unsigned int, int);
 int __attribute__((__cdecl__)) _read (int, void*, unsigned int);
 int __attribute__((__cdecl__)) _setmode (int, int);



 int __attribute__((__cdecl__)) _sopen (const char*, int, int, ...);

 long __attribute__((__cdecl__)) _tell (int);

 int __attribute__((__cdecl__)) _umask (int);
 int __attribute__((__cdecl__)) _unlink (const char*);
 int __attribute__((__cdecl__)) _write (int, const void*, unsigned int);





 int __attribute__((__cdecl__)) _waccess(const wchar_t*, int);
 int __attribute__((__cdecl__)) _wchmod(const wchar_t*, int);
 int __attribute__((__cdecl__)) _wcreat(const wchar_t*, int);
 long __attribute__((__cdecl__)) _wfindfirst(const wchar_t*, struct _wfinddata_t*);
 int __attribute__((__cdecl__)) _wfindnext(long, struct _wfinddata_t *);
 int __attribute__((__cdecl__)) _wunlink(const wchar_t*);
 int __attribute__((__cdecl__)) _wopen(const wchar_t*, int, ...);
 int __attribute__((__cdecl__)) _wsopen(const wchar_t*, int, int, ...);
 wchar_t * __attribute__((__cdecl__)) _wmktemp(wchar_t*);
 long __attribute__((__cdecl__)) _wfindfirsti64(const wchar_t*, struct _wfinddatai64_t*);
 int __attribute__((__cdecl__)) _wfindnexti64(long, struct _wfinddatai64_t*);
# 253 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 3
 int __attribute__((__cdecl__)) access (const char*, int);
 int __attribute__((__cdecl__)) chsize (int, long );
 int __attribute__((__cdecl__)) close (int);
 int __attribute__((__cdecl__)) creat (const char*, int);
 int __attribute__((__cdecl__)) dup (int);
 int __attribute__((__cdecl__)) dup2 (int, int);
 int __attribute__((__cdecl__)) eof (int);
 long __attribute__((__cdecl__)) filelength (int);
 int __attribute__((__cdecl__)) fileno (FILE*);
 int __attribute__((__cdecl__)) isatty (int);
 long __attribute__((__cdecl__)) lseek (int, long, int);
 int __attribute__((__cdecl__)) open (const char*, int, ...);
 int __attribute__((__cdecl__)) read (int, void*, unsigned int);
 int __attribute__((__cdecl__)) setmode (int, int);
 int __attribute__((__cdecl__)) sopen (const char*, int, int, ...);
 long __attribute__((__cdecl__)) tell (int);
 int __attribute__((__cdecl__)) umask (int);
 int __attribute__((__cdecl__)) unlink (const char*);
 int __attribute__((__cdecl__)) write (int, const void*, unsigned int);
# 10 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unistd.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/process.h" 1 3
# 76 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/process.h" 3
 void __attribute__((__cdecl__)) _cexit(void);
 void __attribute__((__cdecl__)) _c_exit(void);

 int __attribute__((__cdecl__)) _cwait (int*, _pid_t, int);

 _pid_t __attribute__((__cdecl__)) _getpid(void);

 int __attribute__((__cdecl__)) _execl (const char*, const char*, ...);
 int __attribute__((__cdecl__)) _execle (const char*, const char*, ...);
 int __attribute__((__cdecl__)) _execlp (const char*, const char*, ...);
 int __attribute__((__cdecl__)) _execlpe (const char*, const char*, ...);
 int __attribute__((__cdecl__)) _execv (const char*, const char* const*);
 int __attribute__((__cdecl__)) _execve (const char*, const char* const*, const char* const*);
 int __attribute__((__cdecl__)) _execvp (const char*, const char* const*);
 int __attribute__((__cdecl__)) _execvpe (const char*, const char* const*, const char* const*);

 int __attribute__((__cdecl__)) _spawnl (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) _spawnle (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) _spawnlp (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) _spawnlpe (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) _spawnv (int, const char*, const char* const*);
 int __attribute__((__cdecl__)) _spawnve (int, const char*, const char* const*, const char* const*);
 int __attribute__((__cdecl__)) _spawnvp (int, const char*, const char* const*);
 int __attribute__((__cdecl__)) _spawnvpe (int, const char*, const char* const*, const char* const*);
# 113 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/process.h" 3
 unsigned long __attribute__((__cdecl__))
 _beginthread (void (*)(void *), unsigned, void*);
 void __attribute__((__cdecl__)) _endthread (void);


 unsigned long __attribute__((__cdecl__))
 _beginthreadex (void *, unsigned, unsigned (__attribute__((__stdcall__)) *) (void *),
    void*, unsigned, unsigned*);
 void __attribute__((__cdecl__)) _endthreadex (unsigned);
# 130 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/process.h" 3
 int __attribute__((__cdecl__)) cwait (int*, pid_t, int);
 pid_t __attribute__((__cdecl__)) getpid (void);
 int __attribute__((__cdecl__)) execl (const char*, const char*, ...);
 int __attribute__((__cdecl__)) execle (const char*, const char*, ...);
 int __attribute__((__cdecl__)) execlp (const char*, const char*, ...);
 int __attribute__((__cdecl__)) execlpe (const char*, const char*, ...);
 int __attribute__((__cdecl__)) execv (const char*, const char* const*);
 int __attribute__((__cdecl__)) execve (const char*, const char* const*, const char* const*);
 int __attribute__((__cdecl__)) execvp (const char*, const char* const*);
 int __attribute__((__cdecl__)) execvpe (const char*, const char* const*, const char* const*);
 int __attribute__((__cdecl__)) spawnl (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) spawnle (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) spawnlp (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) spawnlpe (int, const char*, const char*, ...);
 int __attribute__((__cdecl__)) spawnv (int, const char*, const char* const*);
 int __attribute__((__cdecl__)) spawnve (int, const char*, const char* const*, const char* const*);
 int __attribute__((__cdecl__)) spawnvp (int, const char*, const char* const*);
 int __attribute__((__cdecl__)) spawnvpe (int, const char*, const char* const*, const char* const*);
# 11 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unistd.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/getopt.h" 1 3
# 41 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/getopt.h" 3
extern int opterr;
extern int optind;
extern int optopt;
extern int optreset;
extern char *optarg;

int getopt (int, char * const *, const char *);
# 14 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unistd.h" 2 3
# 290 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zconf.h" 2 3
# 35 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 2 3
# 77 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);
typedef void (*free_func) (voidpf opaque, voidpf address);

struct internal_state;

typedef struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;

    Bytef *next_out;
    uInt avail_out;
    uLong total_out;

    char *msg;
    struct internal_state *state;

    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;

    int data_type;
    uLong adler;
    uLong reserved;
} z_stream;

typedef z_stream *z_streamp;





typedef struct gz_header_s {
    int text;
    uLong time;
    int xflags;
    int os;
    Bytef *extra;
    uInt extra_len;
    uInt extra_max;
    Bytef *name;
    uInt name_max;
    Bytef *comment;
    uInt comm_max;
    int hcrc;
    int done;

} gz_header;

typedef gz_header *gz_headerp;
# 212 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern const char * zlibVersion (void);
# 242 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflate (z_streamp strm, int flush);
# 328 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateEnd (z_streamp strm);
# 363 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflate (z_streamp strm, int flush);
# 462 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflateEnd (z_streamp strm);
# 538 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength);
# 577 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateCopy (z_streamp dest, z_streamp source);
# 595 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateReset (z_streamp strm);
# 606 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateParams (z_streamp strm, int level, int strategy);
# 627 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateTune (z_streamp strm, int good_length, int max_lazy, int nice_length, int max_chain);
# 644 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern uLong deflateBound (z_streamp strm, uLong sourceLen);
# 653 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflatePrime (z_streamp strm, int bits, int value);
# 669 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateSetHeader (z_streamp strm, gz_headerp head);
# 736 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength);
# 758 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflateSync (z_streamp strm);
# 773 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflateCopy (z_streamp dest, z_streamp source);
# 789 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflateReset (z_streamp strm);
# 799 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflatePrime (z_streamp strm, int bits, int value);
# 815 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflateGetHeader (z_streamp strm, gz_headerp head);
# 877 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
typedef unsigned (*in_func) (void *, unsigned char * *);
typedef int (*out_func) (void *, unsigned char *, unsigned);

extern int inflateBack (z_streamp strm, in_func in, void *in_desc, out_func out, void *out_desc);
# 949 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int inflateBackEnd (z_streamp strm);







extern uLong zlibCompileFlags (void);
# 1009 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int compress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
# 1024 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int compress2 (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen, int level);
# 1040 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern uLong compressBound (uLong sourceLen);






extern int uncompress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
# 1066 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
typedef voidp gzFile;

extern gzFile gzopen (const char *path, const char *mode);
# 1085 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern gzFile gzdopen (int fd, const char *mode);
# 1098 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int gzsetparams (gzFile file, int level, int strategy);







extern int gzread (gzFile file, voidp buf, unsigned len);







extern int gzwrite (gzFile file, voidpc buf, unsigned len);







extern int gzprintf (gzFile file, const char *format, ...);
# 1135 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int gzputs (gzFile file, const char *s);






extern char * gzgets (gzFile file, char *buf, int len);
# 1151 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int gzputc (gzFile file, int c);





extern int gzgetc (gzFile file);





extern int gzungetc (int c, gzFile file);
# 1173 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int gzflush (gzFile file, int flush);
# 1183 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern off_t gzseek (gzFile file, off_t offset, int whence);
# 1201 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int gzrewind (gzFile file);






extern off_t gztell (gzFile file);
# 1217 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int gzeof (gzFile file);





extern int gzdirect (gzFile file);





extern int gzclose (gzFile file);






extern const char * gzerror (gzFile file, int *errnum);
# 1245 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern void gzclearerr (gzFile file);
# 1260 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern uLong adler32 (uLong adler, const Bytef *buf, uInt len);
# 1276 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern uLong adler32_combine (uLong adler1, uLong adler2, off_t len2);
# 1285 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern uLong crc32 (uLong crc, const Bytef *buf, uInt len);
# 1301 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern uLong crc32_combine (uLong crc1, uLong crc2, off_t len2);
# 1317 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
extern int deflateInit_ (z_streamp strm, int level, const char *version, int stream_size);

extern int inflateInit_ (z_streamp strm, const char *version, int stream_size);

extern int deflateInit2_ (z_streamp strm, int level, int method, int windowBits, int memLevel, int strategy, const char *version, int stream_size);



extern int inflateInit2_ (z_streamp strm, int windowBits, const char *version, int stream_size);

extern int inflateBackInit_ (z_streamp strm, int windowBits, unsigned char *window, const char *version, int stream_size);
# 1346 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/zlib.h" 3
    struct internal_state {int dummy;};


extern const char * zError (int);
extern int inflateSyncPoint (z_streamp z);
extern const uLongf * get_crc_table (void);
# 360 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 2 3



# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 1 3
# 313 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/setjmp.h" 1 3
# 49 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/setjmp.h" 3
typedef int jmp_buf[16];





 int __attribute__((__cdecl__)) _setjmp (jmp_buf);







 void __attribute__((__cdecl__)) longjmp (jmp_buf, int);
# 314 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 2 3
# 326 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/string.h" 1 3
# 40 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/string.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 41 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/string.h" 2 3
# 52 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/string.h" 3
 void* __attribute__((__cdecl__)) memchr (const void*, int, size_t);
 int __attribute__((__cdecl__)) memcmp (const void*, const void*, size_t);
 void* __attribute__((__cdecl__)) memcpy (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) memmove (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) memset (void*, int, size_t);
 char* __attribute__((__cdecl__)) strcat (char*, const char*);
 char* __attribute__((__cdecl__)) strchr (const char*, int);
 int __attribute__((__cdecl__)) strcmp (const char*, const char*);
 int __attribute__((__cdecl__)) strcoll (const char*, const char*);
 char* __attribute__((__cdecl__)) strcpy (char*, const char*);
 size_t __attribute__((__cdecl__)) strcspn (const char*, const char*);
 char* __attribute__((__cdecl__)) strerror (int);

 size_t __attribute__((__cdecl__)) strlen (const char*);
 char* __attribute__((__cdecl__)) strncat (char*, const char*, size_t);
 int __attribute__((__cdecl__)) strncmp (const char*, const char*, size_t);
 char* __attribute__((__cdecl__)) strncpy (char*, const char*, size_t);
 char* __attribute__((__cdecl__)) strpbrk (const char*, const char*);
 char* __attribute__((__cdecl__)) strrchr (const char*, int);
 size_t __attribute__((__cdecl__)) strspn (const char*, const char*);
 char* __attribute__((__cdecl__)) strstr (const char*, const char*);
 char* __attribute__((__cdecl__)) strtok (char*, const char*);
 size_t __attribute__((__cdecl__)) strxfrm (char*, const char*, size_t);





 char* __attribute__((__cdecl__)) _strerror (const char *);
 void* __attribute__((__cdecl__)) _memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) _memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) _strdup (const char*);
 int __attribute__((__cdecl__)) _strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) _stricmp (const char*, const char*);
 int __attribute__((__cdecl__)) _stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) _strlwr (char*);
 int __attribute__((__cdecl__)) _strnicmp (const char*, const char*, size_t);
 char* __attribute__((__cdecl__)) _strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) _strrev (char*);
 char* __attribute__((__cdecl__)) _strset (char*, int);
 char* __attribute__((__cdecl__)) _strupr (char*);
 void __attribute__((__cdecl__)) _swab (const char*, char*, size_t);


 int __attribute__((__cdecl__)) _strncoll(const char*, const char*, size_t);
 int __attribute__((__cdecl__)) _strnicoll(const char*, const char*, size_t);







 wchar_t* __attribute__((__cdecl__)) wcscat (wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcschr (const wchar_t*, wchar_t);
 int __attribute__((__cdecl__)) wcscmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) wcscoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcscpy (wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) wcscspn (const wchar_t*, const wchar_t*);

 size_t __attribute__((__cdecl__)) wcslen (const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsncat (wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) wcsncmp(const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) wcsncpy(wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) wcspbrk(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsrchr(const wchar_t*, wchar_t);
 size_t __attribute__((__cdecl__)) wcsspn(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsstr(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcstok(wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) wcsxfrm(wchar_t*, const wchar_t*, size_t);
# 131 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/string.h" 3
 wchar_t* __attribute__((__cdecl__)) _wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) _wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) _wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) _wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) _wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) _wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) _wcsupr (wchar_t*);


 int __attribute__((__cdecl__)) _wcsncoll(const wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) _wcsnicoll(const wchar_t*, const wchar_t*, size_t);
# 159 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/string.h" 3
 void* __attribute__((__cdecl__)) memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) strdup (const char*);
 int __attribute__((__cdecl__)) strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) stricmp (const char*, const char*);
extern __inline__ int __attribute__((__cdecl__))
strcasecmp (const char * __sz1, const char * __sz2)
  {return _stricmp (__sz1, __sz2);}
 int __attribute__((__cdecl__)) stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) strlwr (char*);
 int __attribute__((__cdecl__)) strnicmp (const char*, const char*, size_t);
extern __inline__ int __attribute__((__cdecl__))
strncasecmp (const char * __sz1, const char * __sz2, size_t __sizeMaxCompare)
  {return _strnicmp (__sz1, __sz2, __sizeMaxCompare);}
 char* __attribute__((__cdecl__)) strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) strrev (char*);
 char* __attribute__((__cdecl__)) strset (char*, int);
 char* __attribute__((__cdecl__)) strupr (char*);

 void __attribute__((__cdecl__)) swab (const char*, char*, size_t);



extern __inline__ int __attribute__((__cdecl__))
wcscmpi (const wchar_t * __ws1, const wchar_t * __ws2)
  {return _wcsicmp (__ws1, __ws2);}
 wchar_t* __attribute__((__cdecl__)) wcsdup (wchar_t*);
 int __attribute__((__cdecl__)) wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) wcsupr (wchar_t*);
# 327 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 2 3
# 1037 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 1 3
# 37 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 38 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 2 3
# 69 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 3
typedef long clock_t;
# 78 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 3
struct tm
{
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;

};





 clock_t __attribute__((__cdecl__)) clock (void);
 time_t __attribute__((__cdecl__)) time (time_t*);
 double __attribute__((__cdecl__)) difftime (time_t, time_t);
 time_t __attribute__((__cdecl__)) mktime (struct tm*);
# 111 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 3
 char* __attribute__((__cdecl__)) asctime (const struct tm*);
 char* __attribute__((__cdecl__)) ctime (const time_t*);
 struct tm* __attribute__((__cdecl__)) gmtime (const time_t*);
 struct tm* __attribute__((__cdecl__)) localtime (const time_t*);


 size_t __attribute__((__cdecl__)) strftime (char*, size_t, const char*, const struct tm*);

 size_t __attribute__((__cdecl__)) wcsftime (wchar_t*, size_t, const wchar_t*, const struct tm*);


extern void __attribute__((__cdecl__)) _tzset (void);


extern void __attribute__((__cdecl__)) tzset (void);


 char* __attribute__((__cdecl__)) _strdate(char*);
 char* __attribute__((__cdecl__)) _strtime(char*);
# 142 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 3
extern int* __attribute__((__cdecl__)) __p__daylight (void);
extern long* __attribute__((__cdecl__)) __p__timezone (void);
extern char** __attribute__((__cdecl__)) __p__tzname (void);

extern __attribute__((dllimport)) int _daylight;
extern __attribute__((dllimport)) long _timezone;
extern __attribute__((dllimport)) char *_tzname[2];
# 180 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/time.h" 3
extern __attribute__((dllimport)) int daylight;
extern __attribute__((dllimport)) long timezone;
extern __attribute__((dllimport)) char *tzname[2];





 wchar_t* __attribute__((__cdecl__)) _wasctime(const struct tm*);
 wchar_t* __attribute__((__cdecl__)) _wctime(const time_t*);
 wchar_t* __attribute__((__cdecl__)) _wstrdate(wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wstrtime(wchar_t*);
# 1038 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 2 3
# 1050 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 3
typedef unsigned long png_uint_32;
typedef long png_int_32;
typedef unsigned short png_uint_16;
typedef short png_int_16;
typedef unsigned char png_byte;







   typedef size_t png_size_t;
# 1127 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 3
typedef png_int_32 png_fixed_point;


typedef void * png_voidp;
typedef png_byte * png_bytep;
typedef png_uint_32 * png_uint_32p;
typedef png_int_32 * png_int_32p;
typedef png_uint_16 * png_uint_16p;
typedef png_int_16 * png_int_16p;
typedef const char * png_const_charp;
typedef char * png_charp;
typedef png_fixed_point * png_fixed_point_p;





typedef FILE * png_FILE_p;




typedef double * png_doublep;



typedef png_byte * * png_bytepp;
typedef png_uint_32 * * png_uint_32pp;
typedef png_int_32 * * png_int_32pp;
typedef png_uint_16 * * png_uint_16pp;
typedef png_int_16 * * png_int_16pp;
typedef const char * * png_const_charpp;
typedef char * * png_charpp;
typedef png_fixed_point * * png_fixed_point_pp;

typedef double * * png_doublepp;



typedef char * * * png_charppp;
# 1175 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pngconf.h" 3
typedef charf * png_zcharp;
typedef charf * * png_zcharpp;
typedef z_stream * png_zstreamp;
# 364 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 2 3
# 443 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern const char png_libpng_ver[18];
# 452 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern const int png_pass_start[7];
extern const int png_pass_inc[7];
extern const int png_pass_ystart[7];
extern const int png_pass_yinc[7];
extern const int png_pass_mask[7];
extern const int png_pass_dsp_mask[7];
# 472 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
typedef struct png_color_struct
{
   png_byte red;
   png_byte green;
   png_byte blue;
} png_color;
typedef png_color * png_colorp;
typedef png_color * * png_colorpp;

typedef struct png_color_16_struct
{
   png_byte index;
   png_uint_16 red;
   png_uint_16 green;
   png_uint_16 blue;
   png_uint_16 gray;
} png_color_16;
typedef png_color_16 * png_color_16p;
typedef png_color_16 * * png_color_16pp;

typedef struct png_color_8_struct
{
   png_byte red;
   png_byte green;
   png_byte blue;
   png_byte gray;
   png_byte alpha;
} png_color_8;
typedef png_color_8 * png_color_8p;
typedef png_color_8 * * png_color_8pp;





typedef struct png_sPLT_entry_struct
{
   png_uint_16 red;
   png_uint_16 green;
   png_uint_16 blue;
   png_uint_16 alpha;
   png_uint_16 frequency;
} png_sPLT_entry;
typedef png_sPLT_entry * png_sPLT_entryp;
typedef png_sPLT_entry * * png_sPLT_entrypp;






typedef struct png_sPLT_struct
{
   png_charp name;
   png_byte depth;
   png_sPLT_entryp entries;
   png_int_32 nentries;
} png_sPLT_t;
typedef png_sPLT_t * png_sPLT_tp;
typedef png_sPLT_t * * png_sPLT_tpp;
# 542 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
typedef struct png_text_struct
{
   int compression;




   png_charp key;
   png_charp text;

   png_size_t text_length;







} png_text;
typedef png_text * png_textp;
typedef png_text * * png_textpp;
# 581 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
typedef struct png_time_struct
{
   png_uint_16 year;
   png_byte month;
   png_byte day;
   png_byte hour;
   png_byte minute;
   png_byte second;
} png_time;
typedef png_time * png_timep;
typedef png_time * * png_timepp;







typedef struct png_unknown_chunk_t
{
    png_byte name[5];
    png_byte *data;
    png_size_t size;


    png_byte location;
}
png_unknown_chunk;
typedef png_unknown_chunk * png_unknown_chunkp;
typedef png_unknown_chunk * * png_unknown_chunkpp;
# 652 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
typedef struct png_info_struct
{

   png_uint_32 width;
   png_uint_32 height;
   png_uint_32 valid;
   png_uint_32 rowbytes;
   png_colorp palette;
   png_uint_16 num_palette;
   png_uint_16 num_trans;
   png_byte bit_depth;
   png_byte color_type;

   png_byte compression_type;
   png_byte filter_type;
   png_byte interlace_type;


   png_byte channels;
   png_byte pixel_depth;
   png_byte spare_byte;
   png_byte signature[8];
# 686 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   float gamma;





   png_byte srgb_intent;
# 704 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   int num_text;
   int max_text;
   png_textp text;






   png_time mod_time;
# 723 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_color_8 sig_bit;
# 737 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_bytep trans;
   png_color_16 trans_values;
# 748 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_color_16 background;
# 757 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_int_32 x_offset;
   png_int_32 y_offset;
   png_byte offset_unit_type;







   png_uint_32 x_pixels_per_unit;
   png_uint_32 y_pixels_per_unit;
   png_byte phys_unit_type;
# 779 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_uint_16p hist;
# 790 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   float x_white;
   float y_white;
   float x_red;
   float y_red;
   float x_green;
   float y_green;
   float x_blue;
   float y_blue;
# 813 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_charp pcal_purpose;
   png_int_32 pcal_X0;
   png_int_32 pcal_X1;
   png_charp pcal_units;
   png_charpp pcal_params;
   png_byte pcal_type;
   png_byte pcal_nparams;




   png_uint_32 free_me;




   png_unknown_chunkp unknown_chunks;
   png_size_t unknown_chunks_num;




   png_charp iccp_name;
   png_charp iccp_profile;

   png_uint_32 iccp_proflen;
   png_byte iccp_compression;




   png_sPLT_tp splt_palettes;
   png_uint_32 splt_palettes_num;
# 856 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_byte scal_unit;

   double scal_pixel_width;
   double scal_pixel_height;


   png_charp scal_s_width;
   png_charp scal_s_height;






   png_bytepp row_pointers;



   png_fixed_point int_gamma;



   png_fixed_point int_x_white;
   png_fixed_point int_y_white;
   png_fixed_point int_x_red;
   png_fixed_point int_y_red;
   png_fixed_point int_x_green;
   png_fixed_point int_y_green;
   png_fixed_point int_x_blue;
   png_fixed_point int_y_blue;


} png_info;

typedef png_info * png_infop;
typedef png_info * * png_infopp;
# 992 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
typedef struct png_row_info_struct
{
   png_uint_32 width;
   png_uint_32 rowbytes;
   png_byte color_type;
   png_byte bit_depth;
   png_byte channels;
   png_byte pixel_depth;
} png_row_info;

typedef png_row_info * png_row_infop;
typedef png_row_info * * png_row_infopp;







typedef struct png_struct_def png_struct;
typedef png_struct * png_structp;

typedef void (__attribute__((__cdecl__)) *png_error_ptr) (png_structp, png_const_charp);
typedef void (__attribute__((__cdecl__)) *png_rw_ptr) (png_structp, png_bytep, png_size_t);
typedef void (__attribute__((__cdecl__)) *png_flush_ptr) (png_structp);
typedef void (__attribute__((__cdecl__)) *png_read_status_ptr) (png_structp, png_uint_32, int);

typedef void (__attribute__((__cdecl__)) *png_write_status_ptr) (png_structp, png_uint_32, int);



typedef void (__attribute__((__cdecl__)) *png_progressive_info_ptr) (png_structp, png_infop);
typedef void (__attribute__((__cdecl__)) *png_progressive_end_ptr) (png_structp, png_infop);
typedef void (__attribute__((__cdecl__)) *png_progressive_row_ptr) (png_structp, png_bytep, png_uint_32, int);






typedef void (__attribute__((__cdecl__)) *png_user_transform_ptr) (png_structp, png_row_infop, png_bytep);




typedef int (__attribute__((__cdecl__)) *png_user_chunk_ptr) (png_structp, png_unknown_chunkp);


typedef void (__attribute__((__cdecl__)) *png_unknown_chunk_ptr) (png_structp);
# 1063 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
typedef png_voidp (*png_malloc_ptr) (png_structp, png_size_t);
typedef void (*png_free_ptr) (png_structp, png_voidp);
# 1073 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
struct png_struct_def
{

   jmp_buf jmpbuf;

   png_error_ptr error_fn;
   png_error_ptr warning_fn;
   png_voidp error_ptr;
   png_rw_ptr write_data_fn;
   png_rw_ptr read_data_fn;
   png_voidp io_ptr;


   png_user_transform_ptr read_user_transform_fn;



   png_user_transform_ptr write_user_transform_fn;






   png_voidp user_transform_ptr;
   png_byte user_transform_depth;
   png_byte user_transform_channels;



   png_uint_32 mode;
   png_uint_32 flags;
   png_uint_32 transformations;

   z_stream zstream;
   png_bytep zbuf;
   png_size_t zbuf_size;
   int zlib_level;
   int zlib_method;
   int zlib_window_bits;
   int zlib_mem_level;
   int zlib_strategy;

   png_uint_32 width;
   png_uint_32 height;
   png_uint_32 num_rows;
   png_uint_32 usr_width;
   png_uint_32 rowbytes;
   png_uint_32 irowbytes;
   png_uint_32 iwidth;
   png_uint_32 row_number;
   png_bytep prev_row;
   png_bytep row_buf;
   png_bytep sub_row;
   png_bytep up_row;
   png_bytep avg_row;
   png_bytep paeth_row;
   png_row_info row_info;

   png_uint_32 idat_size;
   png_uint_32 crc;
   png_colorp palette;
   png_uint_16 num_palette;
   png_uint_16 num_trans;
   png_byte chunk_name[5];
   png_byte compression;
   png_byte filter;
   png_byte interlaced;
   png_byte pass;
   png_byte do_filter;
   png_byte color_type;
   png_byte bit_depth;
   png_byte usr_bit_depth;
   png_byte pixel_depth;
   png_byte channels;
   png_byte usr_channels;
   png_byte sig_bytes;





   png_uint_16 filler;




   png_byte background_gamma_type;

   float background_gamma;

   png_color_16 background;

   png_color_16 background_1;




   png_flush_ptr output_flush_fn;
   png_uint_32 flush_dist;
   png_uint_32 flush_rows;



   int gamma_shift;

   float gamma;
   float screen_gamma;




   png_bytep gamma_table;
   png_bytep gamma_from_1;
   png_bytep gamma_to_1;
   png_uint_16pp gamma_16_table;
   png_uint_16pp gamma_16_from_1;
   png_uint_16pp gamma_16_to_1;



   png_color_8 sig_bit;



   png_color_8 shift;




   png_bytep trans;
   png_color_16 trans_values;


   png_read_status_ptr read_row_fn;
   png_write_status_ptr write_row_fn;

   png_progressive_info_ptr info_fn;
   png_progressive_row_ptr row_fn;
   png_progressive_end_ptr end_fn;
   png_bytep save_buffer_ptr;
   png_bytep save_buffer;
   png_bytep current_buffer_ptr;
   png_bytep current_buffer;
   png_uint_32 push_length;
   png_uint_32 skip_length;
   png_size_t save_buffer_size;
   png_size_t save_buffer_max;
   png_size_t buffer_size;
   png_size_t current_buffer_size;
   int process_mode;
   int cur_palette;


     png_size_t current_text_size;
     png_size_t current_text_left;
     png_charp current_text;
     png_charp current_text_ptr;
# 1245 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_bytep palette_lookup;
   png_bytep dither_index;



   png_uint_16p hist;



   png_byte heuristic_method;
   png_byte num_prev_filters;
   png_bytep prev_filters;
   png_uint_16p filter_weights;
   png_uint_16p inv_filter_weights;
   png_uint_16p filter_costs;
   png_uint_16p inv_filter_costs;



   png_charp time_buffer;





   png_uint_32 free_me;



   png_voidp user_chunk_ptr;
   png_user_chunk_ptr read_user_chunk_fn;



   int num_chunk_list;
   png_bytep chunk_list;




   png_byte rgb_to_gray_status;

   png_uint_16 rgb_to_gray_red_coeff;
   png_uint_16 rgb_to_gray_green_coeff;
   png_uint_16 rgb_to_gray_blue_coeff;
# 1300 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_uint_32 mng_features_permitted;





   png_fixed_point int_gamma;




   png_byte filter_type;
# 1321 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
   png_byte mmx_bitdepth_threshold;
   png_uint_32 mmx_rowbytes_threshold;
   png_uint_32 asm_flags;




   png_voidp mem_ptr;
   png_malloc_ptr malloc_fn;
   png_free_ptr free_fn;



   png_bytep big_row_buf;



   png_bytep dither_sort;
   png_bytep index_to_palette;

   png_bytep palette_to_index;




   png_byte compression_type;


   png_uint_32 user_width_max;
   png_uint_32 user_height_max;


};





typedef png_structp version_1_2_8;

typedef png_struct * * png_structpp;
# 1370 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern png_uint_32 __attribute__((__cdecl__)) png_access_version_number (void);




extern void __attribute__((__cdecl__)) png_set_sig_bytes (png_structp png_ptr, int num_bytes);







extern int __attribute__((__cdecl__)) png_sig_cmp (png_bytep sig, png_size_t start, png_size_t num_to_check);





extern int __attribute__((__cdecl__)) png_check_sig (png_bytep sig, int num);


extern png_structp __attribute__((__cdecl__)) png_create_read_struct
   (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn);



extern png_structp __attribute__((__cdecl__)) png_create_write_struct
   (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn);



extern png_uint_32 __attribute__((__cdecl__)) png_get_compression_buffer_size
   (png_structp png_ptr);



extern void __attribute__((__cdecl__)) png_set_compression_buffer_size
   (png_structp png_ptr, png_uint_32 size);



extern int __attribute__((__cdecl__)) png_reset_zstream (png_structp png_ptr);



extern png_structp __attribute__((__cdecl__)) png_create_read_struct_2
   (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn, png_voidp mem_ptr, png_malloc_ptr malloc_fn, png_free_ptr free_fn);


extern png_structp __attribute__((__cdecl__)) png_create_write_struct_2
   (png_const_charp user_png_ver, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warn_fn, png_voidp mem_ptr, png_malloc_ptr malloc_fn, png_free_ptr free_fn);





extern void __attribute__((__cdecl__)) png_write_chunk (png_structp png_ptr, png_bytep chunk_name, png_bytep data, png_size_t length);



extern void __attribute__((__cdecl__)) png_write_chunk_start (png_structp png_ptr, png_bytep chunk_name, png_uint_32 length);



extern void __attribute__((__cdecl__)) png_write_chunk_data (png_structp png_ptr, png_bytep data, png_size_t length);



extern void __attribute__((__cdecl__)) png_write_chunk_end (png_structp png_ptr);


extern png_infop __attribute__((__cdecl__)) png_create_info_struct
   (png_structp png_ptr);


extern void __attribute__((__cdecl__)) png_info_init (png_infop info_ptr);



extern void __attribute__((__cdecl__)) png_info_init_3 (png_infopp info_ptr, png_size_t png_info_struct_size);



extern void __attribute__((__cdecl__)) png_write_info_before_PLTE (png_structp png_ptr, png_infop info_ptr);

extern void __attribute__((__cdecl__)) png_write_info (png_structp png_ptr, png_infop info_ptr);




extern void __attribute__((__cdecl__)) png_read_info (png_structp png_ptr, png_infop info_ptr);




extern png_charp __attribute__((__cdecl__)) png_convert_to_rfc1123
   (png_structp png_ptr, png_timep ptime);






extern void __attribute__((__cdecl__)) png_convert_from_struct_tm (png_timep ptime, struct tm * ttime);



extern void __attribute__((__cdecl__)) png_convert_from_time_t (png_timep ptime, time_t ttime);






extern void __attribute__((__cdecl__)) png_set_expand (png_structp png_ptr);
extern void __attribute__((__cdecl__)) png_set_gray_1_2_4_to_8 (png_structp png_ptr);
extern void __attribute__((__cdecl__)) png_set_palette_to_rgb (png_structp png_ptr);
extern void __attribute__((__cdecl__)) png_set_tRNS_to_alpha (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_bgr (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_gray_to_rgb (png_structp png_ptr);





extern void __attribute__((__cdecl__)) png_set_rgb_to_gray (png_structp png_ptr, int error_action, double red, double green );


extern void __attribute__((__cdecl__)) png_set_rgb_to_gray_fixed (png_structp png_ptr, int error_action, png_fixed_point red, png_fixed_point green );

extern png_byte __attribute__((__cdecl__)) png_get_rgb_to_gray_status (png_structp png_ptr);



extern void __attribute__((__cdecl__)) png_build_grayscale_palette (int bit_depth, png_colorp palette);



extern void __attribute__((__cdecl__)) png_set_strip_alpha (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_swap_alpha (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_invert_alpha (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_filler (png_structp png_ptr, png_uint_32 filler, int flags);






extern void __attribute__((__cdecl__)) png_set_add_alpha (png_structp png_ptr, png_uint_32 filler, int flags);






extern void __attribute__((__cdecl__)) png_set_swap (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_packing (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_packswap (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_shift (png_structp png_ptr, png_color_8p true_bits);






extern int __attribute__((__cdecl__)) png_set_interlace_handling (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_invert_mono (png_structp png_ptr);





extern void __attribute__((__cdecl__)) png_set_background (png_structp png_ptr, png_color_16p background_color, int background_gamma_code, int need_expand, double background_gamma);
# 1591 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_strip_16 (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_dither (png_structp png_ptr, png_colorp palette, int num_palette, int maximum_colors, png_uint_16p histogram, int full_dither);







extern void __attribute__((__cdecl__)) png_set_gamma (png_structp png_ptr, double screen_gamma, double default_file_gamma);
# 1613 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_permit_empty_plte (png_structp png_ptr, int empty_plte_permitted);





extern void __attribute__((__cdecl__)) png_set_flush (png_structp png_ptr, int nrows);

extern void __attribute__((__cdecl__)) png_write_flush (png_structp png_ptr);



extern void __attribute__((__cdecl__)) png_start_read_image (png_structp png_ptr);


extern void __attribute__((__cdecl__)) png_read_update_info (png_structp png_ptr, png_infop info_ptr);




extern void __attribute__((__cdecl__)) png_read_rows (png_structp png_ptr, png_bytepp row, png_bytepp display_row, png_uint_32 num_rows);





extern void __attribute__((__cdecl__)) png_read_row (png_structp png_ptr, png_bytep row, png_bytep display_row);






extern void __attribute__((__cdecl__)) png_read_image (png_structp png_ptr, png_bytepp image);




extern void __attribute__((__cdecl__)) png_write_row (png_structp png_ptr, png_bytep row);



extern void __attribute__((__cdecl__)) png_write_rows (png_structp png_ptr, png_bytepp row, png_uint_32 num_rows);



extern void __attribute__((__cdecl__)) png_write_image (png_structp png_ptr, png_bytepp image);



extern void __attribute__((__cdecl__)) png_write_end (png_structp png_ptr, png_infop info_ptr);




extern void __attribute__((__cdecl__)) png_read_end (png_structp png_ptr, png_infop info_ptr);




extern void __attribute__((__cdecl__)) png_destroy_info_struct (png_structp png_ptr, png_infopp info_ptr_ptr);



extern void __attribute__((__cdecl__)) png_destroy_read_struct (png_structpp png_ptr_ptr, png_infopp info_ptr_ptr, png_infopp end_info_ptr_ptr);



extern void png_read_destroy (png_structp png_ptr, png_infop info_ptr, png_infop end_info_ptr);



extern void __attribute__((__cdecl__)) png_destroy_write_struct
   (png_structpp png_ptr_ptr, png_infopp info_ptr_ptr);


extern void png_write_destroy (png_structp png_ptr);


extern void __attribute__((__cdecl__)) png_set_crc_action (png_structp png_ptr, int crit_action, int ancil_action);
# 1722 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_filter (png_structp png_ptr, int method, int filters);
# 1779 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_filter_heuristics (png_structp png_ptr, int heuristic_method, int num_weights, png_doublep filter_weights, png_doublep filter_costs);
# 1800 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_compression_level (png_structp png_ptr, int level);


extern void __attribute__((__cdecl__)) png_set_compression_mem_level
   (png_structp png_ptr, int mem_level);

extern void __attribute__((__cdecl__)) png_set_compression_strategy
   (png_structp png_ptr, int strategy);

extern void __attribute__((__cdecl__)) png_set_compression_window_bits
   (png_structp png_ptr, int window_bits);

extern void __attribute__((__cdecl__)) png_set_compression_method (png_structp png_ptr, int method);
# 1826 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_init_io (png_structp png_ptr, png_FILE_p fp);
# 1837 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_error_fn (png_structp png_ptr, png_voidp error_ptr, png_error_ptr error_fn, png_error_ptr warning_fn);



extern png_voidp __attribute__((__cdecl__)) png_get_error_ptr (png_structp png_ptr);






extern void __attribute__((__cdecl__)) png_set_write_fn (png_structp png_ptr, png_voidp io_ptr, png_rw_ptr write_data_fn, png_flush_ptr output_flush_fn);



extern void __attribute__((__cdecl__)) png_set_read_fn (png_structp png_ptr, png_voidp io_ptr, png_rw_ptr read_data_fn);



extern png_voidp __attribute__((__cdecl__)) png_get_io_ptr (png_structp png_ptr);

extern void __attribute__((__cdecl__)) png_set_read_status_fn (png_structp png_ptr, png_read_status_ptr read_row_fn);


extern void __attribute__((__cdecl__)) png_set_write_status_fn (png_structp png_ptr, png_write_status_ptr write_row_fn);




extern void __attribute__((__cdecl__)) png_set_mem_fn (png_structp png_ptr, png_voidp mem_ptr, png_malloc_ptr malloc_fn, png_free_ptr free_fn);


extern png_voidp __attribute__((__cdecl__)) png_get_mem_ptr (png_structp png_ptr);




extern void __attribute__((__cdecl__)) png_set_read_user_transform_fn (png_structp png_ptr, png_user_transform_ptr read_user_transform_fn);





extern void __attribute__((__cdecl__)) png_set_write_user_transform_fn (png_structp png_ptr, png_user_transform_ptr write_user_transform_fn);






extern void __attribute__((__cdecl__)) png_set_user_transform_info (png_structp png_ptr, png_voidp user_transform_ptr, int user_transform_depth, int user_transform_channels);



extern png_voidp __attribute__((__cdecl__)) png_get_user_transform_ptr
   (png_structp png_ptr);



extern void __attribute__((__cdecl__)) png_set_read_user_chunk_fn (png_structp png_ptr, png_voidp user_chunk_ptr, png_user_chunk_ptr read_user_chunk_fn);

extern png_voidp __attribute__((__cdecl__)) png_get_user_chunk_ptr (png_structp png_ptr);







extern void __attribute__((__cdecl__)) png_set_progressive_read_fn (png_structp png_ptr, png_voidp progressive_ptr, png_progressive_info_ptr info_fn, png_progressive_row_ptr row_fn, png_progressive_end_ptr end_fn);





extern png_voidp __attribute__((__cdecl__)) png_get_progressive_ptr
   (png_structp png_ptr);


extern void __attribute__((__cdecl__)) png_process_data (png_structp png_ptr, png_infop info_ptr, png_bytep buffer, png_size_t buffer_size);





extern void __attribute__((__cdecl__)) png_progressive_combine_row (png_structp png_ptr, png_bytep old_row, png_bytep new_row);



extern png_voidp __attribute__((__cdecl__)) png_malloc (png_structp png_ptr, png_uint_32 size);






extern png_voidp __attribute__((__cdecl__)) png_malloc_warn (png_structp png_ptr, png_uint_32 size);




extern void __attribute__((__cdecl__)) png_free (png_structp png_ptr, png_voidp ptr);
# 1950 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_free_data (png_structp png_ptr, png_infop info_ptr, png_uint_32 free_me, int num);




extern void __attribute__((__cdecl__)) png_data_freer (png_structp png_ptr, png_infop info_ptr, int freer, png_uint_32 mask);
# 1978 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern png_voidp __attribute__((__cdecl__)) png_malloc_default (png_structp png_ptr, png_uint_32 size);

extern void __attribute__((__cdecl__)) png_free_default (png_structp png_ptr, png_voidp ptr);



extern png_voidp __attribute__((__cdecl__)) png_memcpy_check (png_structp png_ptr, png_voidp s1, png_voidp s2, png_uint_32 size);


extern png_voidp __attribute__((__cdecl__)) png_memset_check (png_structp png_ptr, png_voidp s1, int value, png_uint_32 size);
# 1996 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_error (png_structp png_ptr, png_const_charp error_message);



extern void __attribute__((__cdecl__)) png_chunk_error (png_structp png_ptr, png_const_charp error_message);



extern void __attribute__((__cdecl__)) png_warning (png_structp png_ptr, png_const_charp warning_message);



extern void __attribute__((__cdecl__)) png_chunk_warning (png_structp png_ptr, png_const_charp warning_message);
# 2024 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern png_uint_32 __attribute__((__cdecl__)) png_get_valid (png_structp png_ptr, png_infop info_ptr, png_uint_32 flag);



extern png_uint_32 __attribute__((__cdecl__)) png_get_rowbytes (png_structp png_ptr, png_infop info_ptr);





extern png_bytepp __attribute__((__cdecl__)) png_get_rows (png_structp png_ptr, png_infop info_ptr);



extern void __attribute__((__cdecl__)) png_set_rows (png_structp png_ptr, png_infop info_ptr, png_bytepp row_pointers);




extern png_byte __attribute__((__cdecl__)) png_get_channels (png_structp png_ptr, png_infop info_ptr);




extern png_uint_32 __attribute__((__cdecl__)) png_get_image_width (png_structp png_ptr, png_infop info_ptr);



extern png_uint_32 __attribute__((__cdecl__)) png_get_image_height (png_structp png_ptr, png_infop info_ptr);



extern png_byte __attribute__((__cdecl__)) png_get_bit_depth (png_structp png_ptr, png_infop info_ptr);



extern png_byte __attribute__((__cdecl__)) png_get_color_type (png_structp png_ptr, png_infop info_ptr);



extern png_byte __attribute__((__cdecl__)) png_get_filter_type (png_structp png_ptr, png_infop info_ptr);



extern png_byte __attribute__((__cdecl__)) png_get_interlace_type (png_structp png_ptr, png_infop info_ptr);



extern png_byte __attribute__((__cdecl__)) png_get_compression_type (png_structp png_ptr, png_infop info_ptr);



extern png_uint_32 __attribute__((__cdecl__)) png_get_pixels_per_meter (png_structp png_ptr, png_infop info_ptr);

extern png_uint_32 __attribute__((__cdecl__)) png_get_x_pixels_per_meter (png_structp png_ptr, png_infop info_ptr);

extern png_uint_32 __attribute__((__cdecl__)) png_get_y_pixels_per_meter (png_structp png_ptr, png_infop info_ptr);




extern float __attribute__((__cdecl__)) png_get_pixel_aspect_ratio (png_structp png_ptr, png_infop info_ptr);




extern png_int_32 __attribute__((__cdecl__)) png_get_x_offset_pixels (png_structp png_ptr, png_infop info_ptr);

extern png_int_32 __attribute__((__cdecl__)) png_get_y_offset_pixels (png_structp png_ptr, png_infop info_ptr);

extern png_int_32 __attribute__((__cdecl__)) png_get_x_offset_microns (png_structp png_ptr, png_infop info_ptr);

extern png_int_32 __attribute__((__cdecl__)) png_get_y_offset_microns (png_structp png_ptr, png_infop info_ptr);





extern png_bytep __attribute__((__cdecl__)) png_get_signature (png_structp png_ptr, png_infop info_ptr);



extern png_uint_32 __attribute__((__cdecl__)) png_get_bKGD (png_structp png_ptr, png_infop info_ptr, png_color_16p *background);




extern void __attribute__((__cdecl__)) png_set_bKGD (png_structp png_ptr, png_infop info_ptr, png_color_16p background);





extern png_uint_32 __attribute__((__cdecl__)) png_get_cHRM (png_structp png_ptr, png_infop info_ptr, double *white_x, double *white_y, double *red_x, double *red_y, double *green_x, double *green_y, double *blue_x, double *blue_y);





extern png_uint_32 __attribute__((__cdecl__)) png_get_cHRM_fixed (png_structp png_ptr, png_infop info_ptr, png_fixed_point *int_white_x, png_fixed_point *int_white_y, png_fixed_point *int_red_x, png_fixed_point *int_red_y, png_fixed_point *int_green_x, png_fixed_point *int_green_y, png_fixed_point *int_blue_x, png_fixed_point *int_blue_y);
# 2133 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_cHRM (png_structp png_ptr, png_infop info_ptr, double white_x, double white_y, double red_x, double red_y, double green_x, double green_y, double blue_x, double blue_y);




extern void __attribute__((__cdecl__)) png_set_cHRM_fixed (png_structp png_ptr, png_infop info_ptr, png_fixed_point int_white_x, png_fixed_point int_white_y, png_fixed_point int_red_x, png_fixed_point int_red_y, png_fixed_point int_green_x, png_fixed_point int_green_y, png_fixed_point int_blue_x, png_fixed_point int_blue_y);
# 2148 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern png_uint_32 __attribute__((__cdecl__)) png_get_gAMA (png_structp png_ptr, png_infop info_ptr, double *file_gamma);


extern png_uint_32 __attribute__((__cdecl__)) png_get_gAMA_fixed (png_structp png_ptr, png_infop info_ptr, png_fixed_point *int_file_gamma);





extern void __attribute__((__cdecl__)) png_set_gAMA (png_structp png_ptr, png_infop info_ptr, double file_gamma);


extern void __attribute__((__cdecl__)) png_set_gAMA_fixed (png_structp png_ptr, png_infop info_ptr, png_fixed_point int_file_gamma);




extern png_uint_32 __attribute__((__cdecl__)) png_get_hIST (png_structp png_ptr, png_infop info_ptr, png_uint_16p *hist);




extern void __attribute__((__cdecl__)) png_set_hIST (png_structp png_ptr, png_infop info_ptr, png_uint_16p hist);



extern png_uint_32 __attribute__((__cdecl__)) png_get_IHDR (png_structp png_ptr, png_infop info_ptr, png_uint_32 *width, png_uint_32 *height, int *bit_depth, int *color_type, int *interlace_method, int *compression_method, int *filter_method);




extern void __attribute__((__cdecl__)) png_set_IHDR (png_structp png_ptr, png_infop info_ptr, png_uint_32 width, png_uint_32 height, int bit_depth, int color_type, int interlace_method, int compression_method, int filter_method);





extern png_uint_32 __attribute__((__cdecl__)) png_get_oFFs (png_structp png_ptr, png_infop info_ptr, png_int_32 *offset_x, png_int_32 *offset_y, int *unit_type);





extern void __attribute__((__cdecl__)) png_set_oFFs (png_structp png_ptr, png_infop info_ptr, png_int_32 offset_x, png_int_32 offset_y, int unit_type);





extern png_uint_32 __attribute__((__cdecl__)) png_get_pCAL (png_structp png_ptr, png_infop info_ptr, png_charp *purpose, png_int_32 *X0, png_int_32 *X1, int *type, int *nparams, png_charp *units, png_charpp *params);





extern void __attribute__((__cdecl__)) png_set_pCAL (png_structp png_ptr, png_infop info_ptr, png_charp purpose, png_int_32 X0, png_int_32 X1, int type, int nparams, png_charp units, png_charpp params);





extern png_uint_32 __attribute__((__cdecl__)) png_get_pHYs (png_structp png_ptr, png_infop info_ptr, png_uint_32 *res_x, png_uint_32 *res_y, int *unit_type);




extern void __attribute__((__cdecl__)) png_set_pHYs (png_structp png_ptr, png_infop info_ptr, png_uint_32 res_x, png_uint_32 res_y, int unit_type);



extern png_uint_32 __attribute__((__cdecl__)) png_get_PLTE (png_structp png_ptr, png_infop info_ptr, png_colorp *palette, int *num_palette);


extern void __attribute__((__cdecl__)) png_set_PLTE (png_structp png_ptr, png_infop info_ptr, png_colorp palette, int num_palette);



extern png_uint_32 __attribute__((__cdecl__)) png_get_sBIT (png_structp png_ptr, png_infop info_ptr, png_color_8p *sig_bit);




extern void __attribute__((__cdecl__)) png_set_sBIT (png_structp png_ptr, png_infop info_ptr, png_color_8p sig_bit);




extern png_uint_32 __attribute__((__cdecl__)) png_get_sRGB (png_structp png_ptr, png_infop info_ptr, int *intent);




extern void __attribute__((__cdecl__)) png_set_sRGB (png_structp png_ptr, png_infop info_ptr, int intent);

extern void __attribute__((__cdecl__)) png_set_sRGB_gAMA_and_cHRM (png_structp png_ptr, png_infop info_ptr, int intent);




extern png_uint_32 __attribute__((__cdecl__)) png_get_iCCP (png_structp png_ptr, png_infop info_ptr, png_charpp name, int *compression_type, png_charpp profile, png_uint_32 *proflen);






extern void __attribute__((__cdecl__)) png_set_iCCP (png_structp png_ptr, png_infop info_ptr, png_charp name, int compression_type, png_charp profile, png_uint_32 proflen);






extern png_uint_32 __attribute__((__cdecl__)) png_get_sPLT (png_structp png_ptr, png_infop info_ptr, png_sPLT_tpp entries);




extern void __attribute__((__cdecl__)) png_set_sPLT (png_structp png_ptr, png_infop info_ptr, png_sPLT_tp entries, int nentries);





extern png_uint_32 __attribute__((__cdecl__)) png_get_text (png_structp png_ptr, png_infop info_ptr, png_textp *text_ptr, int *num_text);
# 2285 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_text (png_structp png_ptr, png_infop info_ptr, png_textp text_ptr, int num_text);




extern png_uint_32 __attribute__((__cdecl__)) png_get_tIME (png_structp png_ptr, png_infop info_ptr, png_timep *mod_time);




extern void __attribute__((__cdecl__)) png_set_tIME (png_structp png_ptr, png_infop info_ptr, png_timep mod_time);




extern png_uint_32 __attribute__((__cdecl__)) png_get_tRNS (png_structp png_ptr, png_infop info_ptr, png_bytep *trans, int *num_trans, png_color_16p *trans_values);





extern void __attribute__((__cdecl__)) png_set_tRNS (png_structp png_ptr, png_infop info_ptr, png_bytep trans, int num_trans, png_color_16p trans_values);
# 2316 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern png_uint_32 __attribute__((__cdecl__)) png_get_sCAL (png_structp png_ptr, png_infop info_ptr, int *unit, double *width, double *height);
# 2328 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_sCAL (png_structp png_ptr, png_infop info_ptr, int unit, double width, double height);



extern void __attribute__((__cdecl__)) png_set_sCAL_s (png_structp png_ptr, png_infop info_ptr, int unit, png_charp swidth, png_charp sheight);
# 2347 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern void __attribute__((__cdecl__)) png_set_keep_unknown_chunks (png_structp png_ptr, int keep, png_bytep chunk_list, int num_chunks);

extern void __attribute__((__cdecl__)) png_set_unknown_chunks (png_structp png_ptr, png_infop info_ptr, png_unknown_chunkp unknowns, int num_unknowns);

extern void __attribute__((__cdecl__)) png_set_unknown_chunk_location
   (png_structp png_ptr, png_infop info_ptr, int chunk, int location);
extern png_uint_32 __attribute__((__cdecl__)) png_get_unknown_chunks (png_structp png_ptr, png_infop info_ptr, png_unknown_chunkpp entries);



 int __attribute__((__cdecl__)) png_handle_as_unknown (png_structp png_ptr, png_bytep chunk_name);






extern void __attribute__((__cdecl__)) png_set_invalid (png_structp png_ptr, png_infop info_ptr, int mask);




extern void __attribute__((__cdecl__)) png_read_png (png_structp png_ptr, png_infop info_ptr, int transforms, png_voidp params);



extern void __attribute__((__cdecl__)) png_write_png (png_structp png_ptr, png_infop info_ptr, int transforms, png_voidp params);
# 2430 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern png_bytep __attribute__((__cdecl__)) png_sig_bytes (void);

extern png_charp __attribute__((__cdecl__)) png_get_copyright (png_structp png_ptr);
extern png_charp __attribute__((__cdecl__)) png_get_header_ver (png_structp png_ptr);
extern png_charp __attribute__((__cdecl__)) png_get_header_version (png_structp png_ptr);
extern png_charp __attribute__((__cdecl__)) png_get_libpng_ver (png_structp png_ptr);


extern png_uint_32 __attribute__((__cdecl__)) png_permit_mng_features (png_structp png_ptr, png_uint_32 mng_features_permitted);
# 2478 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/png.h" 3
extern png_uint_32 __attribute__((__cdecl__)) png_get_mmx_flagmask
   (int flag_select, int *compilerID);


extern png_uint_32 __attribute__((__cdecl__)) png_get_asm_flagmask
   (int flag_select);


extern png_uint_32 __attribute__((__cdecl__)) png_get_asm_flags
   (png_structp png_ptr);


extern png_byte __attribute__((__cdecl__)) png_get_mmx_bitdepth_threshold
   (png_structp png_ptr);


extern png_uint_32 __attribute__((__cdecl__)) png_get_mmx_rowbytes_threshold
   (png_structp png_ptr);


extern void __attribute__((__cdecl__)) png_set_asm_flags
   (png_structp png_ptr, png_uint_32 asm_flags);


extern void __attribute__((__cdecl__)) png_set_mmx_thresholds
   (png_structp png_ptr, png_byte mmx_bitdepth_threshold, png_uint_32 mmx_rowbytes_threshold);







extern int __attribute__((__cdecl__)) png_mmx_support (void);




extern void __attribute__((__cdecl__)) png_set_strip_error_numbers (png_structp png_ptr, png_uint_32 strip_mode);







extern void __attribute__((__cdecl__)) png_set_user_limits (png_structp png_ptr, png_uint_32 user_width_max, png_uint_32 user_height_max);

extern png_uint_32 __attribute__((__cdecl__)) png_get_user_width_max (png_structp png_ptr);

extern png_uint_32 __attribute__((__cdecl__)) png_get_user_height_max (png_structp png_ptr);
# 2 "test1.c" 2
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 1 3
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 1 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/errno.h" 1 3
# 107 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/errno.h" 3
 int* __attribute__((__cdecl__)) _errno(void);
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/limits.h" 1 3
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdarg.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stdarg.h" 1 3 4
# 106 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdarg.h" 2 3
# 27 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 1 3
# 38 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 39 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 2 3
# 86 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
extern int _argc;
extern char** _argv;




extern int* __attribute__((__cdecl__)) __p___argc(void);
extern char*** __attribute__((__cdecl__)) __p___argv(void);
extern wchar_t*** __attribute__((__cdecl__)) __p___wargv(void);
# 127 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
   extern __attribute__((dllimport)) int __mb_cur_max;
# 152 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
 int* __attribute__((__cdecl__)) _errno(void);


 int* __attribute__((__cdecl__)) __doserrno(void);







  extern char *** __attribute__((__cdecl__)) __p__environ(void);
  extern wchar_t *** __attribute__((__cdecl__)) __p__wenviron(void);
# 186 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
  extern __attribute__((dllimport)) int _sys_nerr;
# 210 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
extern __attribute__((dllimport)) char* _sys_errlist[];
# 224 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
extern unsigned __attribute__((__cdecl__)) int* __p__osver(void);
extern unsigned __attribute__((__cdecl__)) int* __p__winver(void);
extern unsigned __attribute__((__cdecl__)) int* __p__winmajor(void);
extern unsigned __attribute__((__cdecl__)) int* __p__winminor(void);







extern __attribute__((dllimport)) unsigned int _osver;
extern __attribute__((dllimport)) unsigned int _winver;
extern __attribute__((dllimport)) unsigned int _winmajor;
extern __attribute__((dllimport)) unsigned int _winminor;
# 275 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
 char** __attribute__((__cdecl__)) __p__pgmptr(void);

 wchar_t** __attribute__((__cdecl__)) __p__wpgmptr(void);
# 308 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
extern __attribute__((dllimport)) int _fmode;
# 324 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
 double __attribute__((__cdecl__)) atof (const char*);
 int __attribute__((__cdecl__)) atoi (const char*);
 long __attribute__((__cdecl__)) atol (const char*);
 int __attribute__((__cdecl__)) _wtoi (const wchar_t *);
 long __attribute__((__cdecl__)) _wtol (const wchar_t *);

 double __attribute__((__cdecl__)) strtod (const char*, char**);

extern __inline__ float __attribute__((__cdecl__)) strtof (const char *nptr, char **endptr)
  { return (strtod (nptr, endptr));}
long double __attribute__((__cdecl__)) strtold (const char * __restrict__, char ** __restrict__);


 long __attribute__((__cdecl__)) strtol (const char*, char**, int);
 unsigned long __attribute__((__cdecl__)) strtoul (const char*, char**, int);



 double __attribute__((__cdecl__)) wcstod (const wchar_t*, wchar_t**);

extern __inline__ float __attribute__((__cdecl__)) wcstof( const wchar_t *nptr, wchar_t **endptr)
{ return (wcstod(nptr, endptr)); }
long double __attribute__((__cdecl__)) wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);


 long __attribute__((__cdecl__)) wcstol (const wchar_t*, wchar_t**, int);
 unsigned long __attribute__((__cdecl__)) wcstoul (const wchar_t*, wchar_t**, int);



 size_t __attribute__((__cdecl__)) wcstombs (char*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) wctomb (char*, wchar_t);

 int __attribute__((__cdecl__)) mblen (const char*, size_t);
 size_t __attribute__((__cdecl__)) mbstowcs (wchar_t*, const char*, size_t);
 int __attribute__((__cdecl__)) mbtowc (wchar_t*, const char*, size_t);

 int __attribute__((__cdecl__)) rand (void);
 void __attribute__((__cdecl__)) srand (unsigned int);

 void* __attribute__((__cdecl__)) calloc (size_t, size_t);
 void* __attribute__((__cdecl__)) malloc (size_t);
 void* __attribute__((__cdecl__)) realloc (void*, size_t);
 void __attribute__((__cdecl__)) free (void*);

 void __attribute__((__cdecl__)) abort (void) __attribute__ ((noreturn));
 void __attribute__((__cdecl__)) exit (int) __attribute__ ((noreturn));


int __attribute__((__cdecl__)) atexit (void (*)(void));

 int __attribute__((__cdecl__)) system (const char*);
 char* __attribute__((__cdecl__)) getenv (const char*);


 void* __attribute__((__cdecl__)) bsearch (const void*, const void*, size_t, size_t,
     int (*)(const void*, const void*));
 void __attribute__((__cdecl__)) qsort (void*, size_t, size_t,
     int (*)(const void*, const void*));

 int __attribute__((__cdecl__)) abs (int);
 long __attribute__((__cdecl__)) labs (long);
# 395 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 div_t __attribute__((__cdecl__)) div (int, int);
 ldiv_t __attribute__((__cdecl__)) ldiv (long, long);







 void __attribute__((__cdecl__)) _beep (unsigned int, unsigned int);
 void __attribute__((__cdecl__)) _seterrormode (int);
 void __attribute__((__cdecl__)) _sleep (unsigned long);

 void __attribute__((__cdecl__)) _exit (int) __attribute__ ((noreturn));



typedef int (* _onexit_t)(void);
_onexit_t __attribute__((__cdecl__)) _onexit( _onexit_t );

 int __attribute__((__cdecl__)) _putenv (const char*);
 void __attribute__((__cdecl__)) _searchenv (const char*, const char*, char*);


 char* __attribute__((__cdecl__)) _ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) _fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) _gcvt (double, int, char*);

 void __attribute__((__cdecl__)) _makepath (char*, const char*, const char*, const char*, const char*);
 void __attribute__((__cdecl__)) _splitpath (const char*, char*, char*, char*, char*);
 char* __attribute__((__cdecl__)) _fullpath (char*, const char*, size_t);

 char* __attribute__((__cdecl__)) _itoa (int, char*, int);
 char* __attribute__((__cdecl__)) _ltoa (long, char*, int);
 char* __attribute__((__cdecl__)) _ultoa(unsigned long, char*, int);
 wchar_t* __attribute__((__cdecl__)) _itow (int, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) _ltow (long, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) _ultow (unsigned long, wchar_t*, int);


 long long __attribute__((__cdecl__)) _atoi64(const char *);
 char* __attribute__((__cdecl__)) _i64toa(long long, char *, int);
 char* __attribute__((__cdecl__)) _ui64toa(unsigned long long, char *, int);
 long long __attribute__((__cdecl__)) _wtoi64(const wchar_t *);
 wchar_t* __attribute__((__cdecl__)) _i64tow(long long, wchar_t *, int);
 wchar_t* __attribute__((__cdecl__)) _ui64tow(unsigned long long, wchar_t *, int);

 wchar_t* __attribute__((__cdecl__)) _wgetenv(const wchar_t*);
 int __attribute__((__cdecl__)) _wputenv(const wchar_t*);
 void __attribute__((__cdecl__)) _wsearchenv(const wchar_t*, const wchar_t*, wchar_t*);
 void __attribute__((__cdecl__)) _wmakepath(wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*);
 void __attribute__((__cdecl__)) _wsplitpath (const wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wfullpath (wchar_t*, const wchar_t*, size_t);

 unsigned int __attribute__((__cdecl__)) _rotl(unsigned int, int);
 unsigned int __attribute__((__cdecl__)) _rotr(unsigned int, int);
 unsigned long __attribute__((__cdecl__)) _lrotl(unsigned long, int);
 unsigned long __attribute__((__cdecl__)) _lrotr(unsigned long, int);




 int __attribute__((__cdecl__)) putenv (const char*);
 void __attribute__((__cdecl__)) searchenv (const char*, const char*, char*);

 char* __attribute__((__cdecl__)) itoa (int, char*, int);
 char* __attribute__((__cdecl__)) ltoa (long, char*, int);


 char* __attribute__((__cdecl__)) ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) gcvt (double, int, char*);
# 480 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdlib.h" 3
void __attribute__((__cdecl__)) _Exit(int) __attribute__ ((noreturn));

extern __inline__ void __attribute__((__cdecl__)) _Exit(int status)
 { _exit(status); }


typedef struct { long long quot, rem; } lldiv_t;

lldiv_t __attribute__((__cdecl__)) lldiv (long long, long long);

extern __inline__ long long __attribute__((__cdecl__)) llabs(long long _j)
  {return (_j >= 0 ? _j : -_j);}

long long __attribute__((__cdecl__)) strtoll (const char* __restrict__, char** __restrict, int);
unsigned long long __attribute__((__cdecl__)) strtoull (const char* __restrict__, char** __restrict__, int);


long long __attribute__((__cdecl__)) atoll (const char *);


long long __attribute__((__cdecl__)) wtoll (const wchar_t *);
char* __attribute__((__cdecl__)) lltoa (long long, char *, int);
char* __attribute__((__cdecl__)) ulltoa (unsigned long long , char *, int);
wchar_t* __attribute__((__cdecl__)) lltow (long long, wchar_t *, int);
wchar_t* __attribute__((__cdecl__)) ulltow (unsigned long long, wchar_t *, int);


extern __inline__ long long __attribute__((__cdecl__)) atoll (const char * _c)
 { return _atoi64 (_c); }
extern __inline__ char* __attribute__((__cdecl__)) lltoa (long long _n, char * _c, int _i)
 { return _i64toa (_n, _c, _i); }
extern __inline__ char* __attribute__((__cdecl__)) ulltoa (unsigned long long _n, char * _c, int _i)
 { return _ui64toa (_n, _c, _i); }
extern __inline__ long long __attribute__((__cdecl__)) wtoll (const wchar_t * _w)
  { return _wtoi64 (_w); }
extern __inline__ wchar_t* __attribute__((__cdecl__)) lltow (long long _n, wchar_t * _w, int _i)
 { return _i64tow (_n, _w, _i); }
extern __inline__ wchar_t* __attribute__((__cdecl__)) ulltow (unsigned long long _n, wchar_t * _w, int _i)
 { return _ui64tow (_n, _w, _i); }
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 2 3
# 40 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 1 3
# 36 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/alplatf.h" 1 3
# 37 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 2 3







# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/almngw32.h" 1 3
# 22 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/almngw32.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 1 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/almngw32.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/fcntl.h" 1 3
# 39 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/fcntl.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 1 3
# 40 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/fcntl.h" 2 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/almngw32.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/direct.h" 1 3
# 38 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/direct.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 39 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/direct.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/io.h" 1 3
# 42 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/direct.h" 2 3
# 51 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/direct.h" 3
struct _diskfree_t {
 unsigned total_clusters;
 unsigned avail_clusters;
 unsigned sectors_per_cluster;
 unsigned bytes_per_sector;
};







 int __attribute__((__cdecl__)) _getdrive (void);
 unsigned long __attribute__((__cdecl__)) _getdrives(void);
 int __attribute__((__cdecl__)) _chdrive (int);
 char* __attribute__((__cdecl__)) _getdcwd (int, char*, int);
 unsigned __attribute__((__cdecl__)) _getdiskfree (unsigned, struct _diskfree_t *);
# 77 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/direct.h" 3
 int __attribute__((__cdecl__)) _wchdir(const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wgetcwd(wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) _wgetdcwd(int, wchar_t*, int);
 int __attribute__((__cdecl__)) _wmkdir(const wchar_t*);
 int __attribute__((__cdecl__)) _wrmdir(const wchar_t*);
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/almngw32.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/malloc.h" 1 3
# 45 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/malloc.h" 3
typedef struct _heapinfo
{
 int* _pentry;
 size_t _size;
 int _useflag;
} _HEAPINFO;
# 63 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/malloc.h" 3
 int __attribute__((__cdecl__)) _heapwalk (_HEAPINFO*);





 int __attribute__((__cdecl__)) heapwalk (_HEAPINFO*);





 int __attribute__((__cdecl__)) _heapchk (void);
 int __attribute__((__cdecl__)) _heapmin (void);
 int __attribute__((__cdecl__)) _heapset (unsigned int);

 size_t __attribute__((__cdecl__)) _msize (void*);
 size_t __attribute__((__cdecl__)) _get_sbh_threshold (void);
 int __attribute__((__cdecl__)) _set_sbh_threshold (size_t);
 void* __attribute__((__cdecl__)) _expand (void*, size_t);
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/almngw32.h" 2 3
# 45 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 2 3
# 64 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/astdint.h" 1 3
# 30 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/astdint.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdint.h" 1 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdint.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 1 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/include/stddef.h" 1 3 4
# 7 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stddef.h" 2 3
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdint.h" 2 3


typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
typedef long long int_least64_t;
typedef unsigned long long uint_least64_t;





typedef char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
typedef long long int_fast64_t;
typedef unsigned long long uint_fast64_t;


typedef int intptr_t;
typedef unsigned uintptr_t;


typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 31 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/astdint.h" 2 3
# 65 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 2 3
# 336 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 3
   extern __inline__ int bmp_read24 (uintptr_t addr); extern __inline__ int bmp_read24 (uintptr_t addr) { unsigned char *p = (unsigned char *)addr; int c; c = ((*(unsigned char *)(p)) | (*((unsigned char *)(p) + 1) << 8) | (*((unsigned char *)(p) + 2) << 16)); return c; }
# 346 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/internal/alconfig.h" 3
   extern __inline__ void bmp_write24 (uintptr_t addr, int c); extern __inline__ void bmp_write24 (uintptr_t addr, int c) { unsigned char *p = (unsigned char *)addr; ((*(unsigned char *)(p) = (c)), (*((unsigned char *)(p) + 1) = (c) >> 8), (*((unsigned char *)(p) + 2) = (c) >> 16)); }
# 41 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 2 3
# 80 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 3
extern __attribute__((dllimport)) int * allegro_errno;

typedef struct _DRIVER_INFO
{
   int id;
   void *driver;
   int autodetect;
} _DRIVER_INFO;
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 1 3
# 22 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/base.h" 1 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/unicode.h" 1 3
# 34 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/unicode.h" 3
extern void set_uformat (int type);
extern int get_uformat (void);
extern void register_uformat (int type, int (*u_getc) (const char *s), int (*u_getx) (char **s), int (*u_setc) (char *s, int c), int (*u_width) (const char *s), int (*u_cwidth) (int c), int (*u_isok) (int c), int u_width_max);
extern void set_ucodepage (const unsigned short *table, const unsigned short *extras);

extern int need_uconvert (const char *s, int type, int newtype);
extern int uconvert_size (const char *s, int type, int newtype);
extern void do_uconvert (const char *s, int type, char *buf, int newtype, int size);
extern char * uconvert (const char *s, int type, char *buf, int newtype, int size);
extern int uwidth_max (int type);






extern __attribute__((dllimport)) char empty_string[];

extern __attribute__((dllimport)) int (*ugetc) (const char *s);
extern __attribute__((dllimport)) int (*ugetx) (char **s);
extern __attribute__((dllimport)) int (*ugetxc) (const char **s);
extern __attribute__((dllimport)) int (*usetc) (char *s, int c);
extern __attribute__((dllimport)) int (*uwidth) (const char *s);
extern __attribute__((dllimport)) int (*ucwidth) (int c);
extern __attribute__((dllimport)) int (*uisok) (int c);
extern int uoffset (const char *s, int idx);
extern int ugetat (const char *s, int idx);
extern int usetat (char *s, int idx, int c);
extern int uinsert (char *s, int idx, int c);
extern int uremove (char *s, int idx);
extern int utolower (int c);
extern int utoupper (int c);
extern int uisspace (int c);
extern int uisdigit (int c);
extern int ustrsize (const char *s);
extern int ustrsizez (const char *s);
extern char * _ustrdup (const char *src, void * (*malloc_func) (size_t));
extern char * ustrzcpy (char *dest, int size, const char *src);
extern char * ustrzcat (char *dest, int size, const char *src);
extern int ustrlen (const char *s);
extern int ustrcmp (const char *s1, const char *s2);
extern char * ustrzncpy (char *dest, int size, const char *src, int n);
extern char * ustrzncat (char *dest, int size, const char *src, int n);
extern int ustrncmp (const char *s1, const char *s2, int n);
extern int ustricmp (const char *s1, const char *s2);
extern int ustrnicmp (const char *s1, const char *s2, int n);
extern char * ustrlwr (char *s);
extern char * ustrupr (char *s);
extern char * ustrchr (const char *s, int c);
extern char * ustrrchr (const char *s, int c);
extern char * ustrstr (const char *s1, const char *s2);
extern char * ustrpbrk (const char *s, const char *set);
extern char * ustrtok (char *s, const char *set);
extern char * ustrtok_r (char *s, const char *set, char **last);
extern double uatof (const char *s);
extern long ustrtol (const char *s, char **endp, int base);
extern double ustrtod (const char *s, char **endp);
extern const char * ustrerror (int err);
extern int uszprintf (char *buf, int size, const char *format, ...) __attribute__ ((format (printf, 3, 4)));
extern int uvszprintf (char *buf, int size, const char *format, va_list args);
extern int usprintf (char *buf, const char *format, ...) __attribute__ ((format (printf, 2, 3)));
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/config.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/config.h" 3
extern void set_config_file (const char *filename);
extern void set_config_data (const char *data, int length);
extern void override_config_file (const char *filename);
extern void override_config_data (const char *data, int length);
extern void flush_config_file (void);
extern void reload_config_texts (const char *new_language);

extern void push_config_state (void);
extern void pop_config_state (void);

extern void hook_config_section (const char *section, int (*intgetter) (const char *, int), const char * (*stringgetter) (const char *, const char *), void (*stringsetter) (const char *, const char *));
extern int config_is_hooked (const char *section);

extern const char * get_config_string (const char *section, const char *name, const char *def);
extern int get_config_int (const char *section, const char *name, int def);
extern int get_config_hex (const char *section, const char *name, int def);
extern float get_config_float (const char *section, const char *name, float def);
extern int get_config_id (const char *section, const char *name, int def);
extern char ** get_config_argv (const char *section, const char *name, int *argc);
extern const char * get_config_text (const char *msg);

extern void set_config_string (const char *section, const char *name, const char *val);
extern void set_config_int (const char *section, const char *name, int val);
extern void set_config_hex (const char *section, const char *name, int val);
extern void set_config_float (const char *section, const char *name, float val);
extern void set_config_id (const char *section, const char *name, int val);
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 2 3





struct RGB;
struct BITMAP;
struct GFX_VTABLE;
struct GFX_MODE;



extern __attribute__((dllimport)) char allegro_id[];
extern __attribute__((dllimport)) char allegro_error[];
# 64 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 3
extern __attribute__((dllimport)) int os_type;
extern __attribute__((dllimport)) int os_version;
extern __attribute__((dllimport)) int os_revision;
extern __attribute__((dllimport)) int os_multitasking;
# 78 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 3
extern int _get_allegro_version (void);
extern int _install_allegro (int system_id, int *errno_ptr, int (*atexit_ptr) (void (*func) (void)));

extern __inline__ int install_allegro (int system_id, int *errno_ptr, int (*atexit_ptr) (void (*func) (void))); extern __inline__ int install_allegro (int system_id, int *errno_ptr, int (*atexit_ptr) (void (*func) (void))) { if ((((4)<<16)|((2)<<8)) != _get_allegro_version()) { ustrzcpy(allegro_error, 256, get_config_text("Library version mismatch")); return !0; } return _install_allegro(system_id, errno_ptr, atexit_ptr); }
# 92 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 3
extern void allegro_exit (void);

extern void allegro_message (const char *msg, ...) __attribute__ ((format (printf, 1, 2)));
extern void get_executable_name (char *output, int size);
extern int set_close_button_callback (void (*proc) (void));


extern void check_cpu (void);
# 188 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 3
extern __attribute__((dllimport)) char cpu_vendor[];
extern __attribute__((dllimport)) int cpu_family;
extern __attribute__((dllimport)) int cpu_model;
extern __attribute__((dllimport)) int cpu_capabilities;


typedef struct SYSTEM_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   int (*init) (void);
   void (*exit) (void);
   void (*get_executable_name) (char *output, int size);
   int (*find_resource) (char *dest, const char *resource, int size);
   void (*set_window_title) (const char *name);
   int (*set_close_button_callback) (void (*proc) (void));
   void (*message) (const char *msg);
   void (*assert) (const char *msg);
   void (*save_console_state) (void);
   void (*restore_console_state) (void);
   struct BITMAP * (*create_bitmap) (int color_depth, int width, int height);
   void (*created_bitmap) (struct BITMAP *bmp);
   struct BITMAP * (*create_sub_bitmap) (struct BITMAP *parent, int x, int y, int width, int height);
   void (*created_sub_bitmap) (struct BITMAP *bmp, struct BITMAP *parent);
   int (*destroy_bitmap) (struct BITMAP *bitmap);
   void (*read_hardware_palette) (void);
   void (*set_palette_range) (const struct RGB *p, int from, int to, int retracesync);
   struct GFX_VTABLE * (*get_vtable) (int color_depth);
   int (*set_display_switch_mode) (int mode);
   void (*display_switch_lock) (int lock, int foreground);
   int (*desktop_color_depth) (void);
   int (*get_desktop_resolution) (int *width, int *height);
   void (*get_gfx_safe_mode) (int *driver, struct GFX_MODE *mode);
   void (*yield_timeslice) (void);
   void * (*create_mutex) (void);
   void (*destroy_mutex) (void *handle);
   void (*lock_mutex) (void *handle);
   void (*unlock_mutex) (void *handle);
   _DRIVER_INFO * (*gfx_drivers) (void);
   _DRIVER_INFO * (*digi_drivers) (void);
   _DRIVER_INFO * (*midi_drivers) (void);
   _DRIVER_INFO * (*keyboard_drivers) (void);
   _DRIVER_INFO * (*mouse_drivers) (void);
   _DRIVER_INFO * (*joystick_drivers) (void);
   _DRIVER_INFO * (*timer_drivers) (void);
} SYSTEM_DRIVER;


extern __attribute__((dllimport)) SYSTEM_DRIVER system_none;
extern __attribute__((dllimport)) SYSTEM_DRIVER * system_driver;
extern __attribute__((dllimport)) _DRIVER_INFO _system_driver_list[];





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/system.inl" 1 3
# 22 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/system.inl" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/debug.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/debug.h" 3
extern void al_assert (const char *file, int linenr);
extern void al_trace (const char *msg, ...) __attribute__ ((format (printf, 1, 2)));

extern void register_assert_handler (int (*handler) (const char *msg));
extern void register_trace_handler (int (*handler) (const char *msg));
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/system.inl" 2 3






extern __inline__ void set_window_title (const char *name); extern __inline__ void set_window_title (const char *name) { ; if (system_driver->set_window_title) system_driver->set_window_title(name); }
# 38 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/system.inl" 3
extern __inline__ int desktop_color_depth (void); extern __inline__ int desktop_color_depth (void) { ; if (system_driver->desktop_color_depth) return system_driver->desktop_color_depth(); else return 0; }
# 49 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/system.inl" 3
extern __inline__ int get_desktop_resolution (int *width, int *height); extern __inline__ int get_desktop_resolution (int *width, int *height) { ; if (system_driver->get_desktop_resolution) return system_driver->get_desktop_resolution(width, height); else return -1; }
# 247 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/system.h" 2 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/debug.h" 1 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/unicode.h" 1 3
# 31 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/mouse.h" 1 3
# 32 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/mouse.h" 3
typedef struct MOUSE_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   int (*init) (void);
   void (*exit) (void);
   void (*poll) (void);
   void (*timer_poll) (void);
   void (*position) (int x, int y);
   void (*set_range) (int x1, int y_1, int x2, int y2);
   void (*set_speed) (int xspeed, int yspeed);
   void (*get_mickeys) (int *mickeyx, int *mickeyy);
   int (*analyse_data) (const char *buffer, int size);
   void (*enable_hardware_cursor) (const int mode);
   int (*select_system_cursor) (const int cursor);
} MOUSE_DRIVER;


extern __attribute__((dllimport)) MOUSE_DRIVER mousedrv_none;
extern __attribute__((dllimport)) MOUSE_DRIVER * mouse_driver;
extern __attribute__((dllimport)) _DRIVER_INFO _mouse_driver_list[];

extern int install_mouse (void);
extern void remove_mouse (void);

extern int poll_mouse (void);
extern int mouse_needs_poll (void);

extern void enable_hardware_cursor (void);
extern void disable_hardware_cursor (void);
# 74 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/mouse.h" 3
extern __attribute__((dllimport)) struct BITMAP * mouse_sprite;
extern __attribute__((dllimport)) int mouse_x_focus;
extern __attribute__((dllimport)) int mouse_y_focus;

extern __attribute__((dllimport)) volatile int mouse_x;
extern __attribute__((dllimport)) volatile int mouse_y;
extern __attribute__((dllimport)) volatile int mouse_z;
extern __attribute__((dllimport)) volatile int mouse_b;
extern __attribute__((dllimport)) volatile int mouse_pos;

extern __attribute__((dllimport)) volatile int freeze_mouse_flag;
# 95 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/mouse.h" 3
extern __attribute__((dllimport)) void (*mouse_callback) (int flags);

extern void show_mouse (struct BITMAP *bmp);
extern void scare_mouse (void);
extern void scare_mouse_area (int x, int y, int w, int h);
extern void unscare_mouse (void);
extern void position_mouse (int x, int y);
extern void position_mouse_z (int z);
extern void set_mouse_range (int x1, int y_1, int x2, int y2);
extern void set_mouse_speed (int xspeed, int yspeed);
extern void select_mouse_cursor (int cursor);
extern void set_mouse_cursor_bitmap (int cursor, struct BITMAP *bmp);
extern void set_mouse_sprite_focus (int x, int y);
extern void get_mouse_mickeys (int *mickeyx, int *mickeyy);
extern void set_mouse_sprite (struct BITMAP *sprite);
extern int show_os_cursor (int cursor);
# 33 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/timer.h" 1 3
# 34 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/timer.h" 3
typedef struct TIMER_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   int (*init) (void);
   void (*exit) (void);
   int (*install_int) (void (*proc) (void), long speed);
   void (*remove_int) (void (*proc) (void));
   int (*install_param_int) (void (*proc) (void *param), void *param, long speed);
   void (*remove_param_int) (void (*proc) (void *param), void *param);
   int (*can_simulate_retrace) (void);
   void (*simulate_retrace) (int enable);
   void (*rest) (unsigned int tyme, void (*callback) (void));
} TIMER_DRIVER;


extern __attribute__((dllimport)) TIMER_DRIVER * timer_driver;
extern __attribute__((dllimport)) _DRIVER_INFO _timer_driver_list[];

extern int install_timer (void);
extern void remove_timer (void);

extern int install_int_ex (void (*proc) (void), long speed);
extern int install_int (void (*proc) (void), long speed);
extern void remove_int (void (*proc) (void));

extern int install_param_int_ex (void (*proc) (void *param), void *param, long speed);
extern int install_param_int (void (*proc) (void *param), void *param, long speed);
extern void remove_param_int (void (*proc) (void *param), void *param);

extern __attribute__((dllimport)) volatile int retrace_count;

extern void rest (unsigned int tyme);
extern void rest_callback (unsigned int tyme, void (*callback) (void));
# 34 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/keyboard.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/keyboard.h" 3
typedef struct KEYBOARD_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   int autorepeat;
   int (*init) (void);
   void (*exit) (void);
   void (*poll) (void);
   void (*set_leds) (int leds);
   void (*set_rate) (int delay, int rate);
   void (*wait_for_input) (void);
   void (*stop_waiting_for_input) (void);
   int (*scancode_to_ascii) (int scancode);
   const char * (*scancode_to_name) (int scancode);
} KEYBOARD_DRIVER;


extern __attribute__((dllimport)) KEYBOARD_DRIVER * keyboard_driver;
extern __attribute__((dllimport)) _DRIVER_INFO _keyboard_driver_list[];

extern int install_keyboard (void);
extern void remove_keyboard (void);

extern int poll_keyboard (void);
extern int keyboard_needs_poll (void);

extern __attribute__((dllimport)) int (*keyboard_callback) (int key);
extern __attribute__((dllimport)) int (*keyboard_ucallback) (int key, int *scancode);
extern __attribute__((dllimport)) void (*keyboard_lowlevel_callback) (int scancode);

extern void install_keyboard_hooks (int (*keypressed) (void), int (*readkey) (void));

extern __attribute__((dllimport)) volatile char key[];
extern __attribute__((dllimport)) volatile int key_shifts;

extern __attribute__((dllimport)) int three_finger_flag;
extern __attribute__((dllimport)) int key_led_flag;

extern int keypressed (void);
extern int readkey (void);
extern int ureadkey (int *scancode);
extern void simulate_keypress (int keycode);
extern void simulate_ukeypress (int keycode, int scancode);
extern void clear_keybuf (void);
extern void set_leds (int leds);
extern void set_keyboard_rate (int delay, int repeat);
extern int scancode_to_ascii (int scancode);
extern const char * scancode_to_name (int scancode);







enum {
   __allegro_KB_SHIFT_FLAG = 0x0001,
   __allegro_KB_CTRL_FLAG = 0x0002,
   __allegro_KB_ALT_FLAG = 0x0004,
   __allegro_KB_LWIN_FLAG = 0x0008,
   __allegro_KB_RWIN_FLAG = 0x0010,
   __allegro_KB_MENU_FLAG = 0x0020,
   __allegro_KB_COMMAND_FLAG = 0x0040,
   __allegro_KB_SCROLOCK_FLAG = 0x0100,
   __allegro_KB_NUMLOCK_FLAG = 0x0200,
   __allegro_KB_CAPSLOCK_FLAG = 0x0400,
   __allegro_KB_INALTSEQ_FLAG = 0x0800,
   __allegro_KB_ACCENT1_FLAG = 0x1000,
   __allegro_KB_ACCENT2_FLAG = 0x2000,
   __allegro_KB_ACCENT3_FLAG = 0x4000,
   __allegro_KB_ACCENT4_FLAG = 0x8000
};

enum {
   __allegro_KEY_A = 1,
   __allegro_KEY_B = 2,
   __allegro_KEY_C = 3,
   __allegro_KEY_D = 4,
   __allegro_KEY_E = 5,
   __allegro_KEY_F = 6,
   __allegro_KEY_G = 7,
   __allegro_KEY_H = 8,
   __allegro_KEY_I = 9,
   __allegro_KEY_J = 10,
   __allegro_KEY_K = 11,
   __allegro_KEY_L = 12,
   __allegro_KEY_M = 13,
   __allegro_KEY_N = 14,
   __allegro_KEY_O = 15,
   __allegro_KEY_P = 16,
   __allegro_KEY_Q = 17,
   __allegro_KEY_R = 18,
   __allegro_KEY_S = 19,
   __allegro_KEY_T = 20,
   __allegro_KEY_U = 21,
   __allegro_KEY_V = 22,
   __allegro_KEY_W = 23,
   __allegro_KEY_X = 24,
   __allegro_KEY_Y = 25,
   __allegro_KEY_Z = 26,
   __allegro_KEY_0 = 27,
   __allegro_KEY_1 = 28,
   __allegro_KEY_2 = 29,
   __allegro_KEY_3 = 30,
   __allegro_KEY_4 = 31,
   __allegro_KEY_5 = 32,
   __allegro_KEY_6 = 33,
   __allegro_KEY_7 = 34,
   __allegro_KEY_8 = 35,
   __allegro_KEY_9 = 36,
   __allegro_KEY_0_PAD = 37,
   __allegro_KEY_1_PAD = 38,
   __allegro_KEY_2_PAD = 39,
   __allegro_KEY_3_PAD = 40,
   __allegro_KEY_4_PAD = 41,
   __allegro_KEY_5_PAD = 42,
   __allegro_KEY_6_PAD = 43,
   __allegro_KEY_7_PAD = 44,
   __allegro_KEY_8_PAD = 45,
   __allegro_KEY_9_PAD = 46,
   __allegro_KEY_F1 = 47,
   __allegro_KEY_F2 = 48,
   __allegro_KEY_F3 = 49,
   __allegro_KEY_F4 = 50,
   __allegro_KEY_F5 = 51,
   __allegro_KEY_F6 = 52,
   __allegro_KEY_F7 = 53,
   __allegro_KEY_F8 = 54,
   __allegro_KEY_F9 = 55,
   __allegro_KEY_F10 = 56,
   __allegro_KEY_F11 = 57,
   __allegro_KEY_F12 = 58,
   __allegro_KEY_ESC = 59,
   __allegro_KEY_TILDE = 60,
   __allegro_KEY_MINUS = 61,
   __allegro_KEY_EQUALS = 62,
   __allegro_KEY_BACKSPACE = 63,
   __allegro_KEY_TAB = 64,
   __allegro_KEY_OPENBRACE = 65,
   __allegro_KEY_CLOSEBRACE = 66,
   __allegro_KEY_ENTER = 67,
   __allegro_KEY_COLON = 68,
   __allegro_KEY_QUOTE = 69,
   __allegro_KEY_BACKSLASH = 70,
   __allegro_KEY_BACKSLASH2 = 71,
   __allegro_KEY_COMMA = 72,
   __allegro_KEY_STOP = 73,
   __allegro_KEY_SLASH = 74,
   __allegro_KEY_SPACE = 75,
   __allegro_KEY_INSERT = 76,
   __allegro_KEY_DEL = 77,
   __allegro_KEY_HOME = 78,
   __allegro_KEY_END = 79,
   __allegro_KEY_PGUP = 80,
   __allegro_KEY_PGDN = 81,
   __allegro_KEY_LEFT = 82,
   __allegro_KEY_RIGHT = 83,
   __allegro_KEY_UP = 84,
   __allegro_KEY_DOWN = 85,
   __allegro_KEY_SLASH_PAD = 86,
   __allegro_KEY_ASTERISK = 87,
   __allegro_KEY_MINUS_PAD = 88,
   __allegro_KEY_PLUS_PAD = 89,
   __allegro_KEY_DEL_PAD = 90,
   __allegro_KEY_ENTER_PAD = 91,
   __allegro_KEY_PRTSCR = 92,
   __allegro_KEY_PAUSE = 93,
   __allegro_KEY_ABNT_C1 = 94,
   __allegro_KEY_YEN = 95,
   __allegro_KEY_KANA = 96,
   __allegro_KEY_CONVERT = 97,
   __allegro_KEY_NOCONVERT = 98,
   __allegro_KEY_AT = 99,
   __allegro_KEY_CIRCUMFLEX = 100,
   __allegro_KEY_COLON2 = 101,
   __allegro_KEY_KANJI = 102,
   __allegro_KEY_EQUALS_PAD = 103,
   __allegro_KEY_BACKQUOTE = 104,
   __allegro_KEY_SEMICOLON = 105,
   __allegro_KEY_COMMAND = 106,
   __allegro_KEY_UNKNOWN1 = 107,
   __allegro_KEY_UNKNOWN2 = 108,
   __allegro_KEY_UNKNOWN3 = 109,
   __allegro_KEY_UNKNOWN4 = 110,
   __allegro_KEY_UNKNOWN5 = 111,
   __allegro_KEY_UNKNOWN6 = 112,
   __allegro_KEY_UNKNOWN7 = 113,
   __allegro_KEY_UNKNOWN8 = 114,

   __allegro_KEY_MODIFIERS = 115,

   __allegro_KEY_LSHIFT = 115,
   __allegro_KEY_RSHIFT = 116,
   __allegro_KEY_LCONTROL = 117,
   __allegro_KEY_RCONTROL = 118,
   __allegro_KEY_ALT = 119,
   __allegro_KEY_ALTGR = 120,
   __allegro_KEY_LWIN = 121,
   __allegro_KEY_RWIN = 122,
   __allegro_KEY_MENU = 123,
   __allegro_KEY_SCRLOCK = 124,
   __allegro_KEY_NUMLOCK = 125,
   __allegro_KEY_CAPSLOCK = 126,

   __allegro_KEY_MAX = 127
};
# 35 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/joystick.h" 1 3
# 39 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/joystick.h" 3
typedef struct JOYSTICK_AXIS_INFO
{
   int pos;
   int d1, d2;
   const char *name;
} JOYSTICK_AXIS_INFO;



typedef struct JOYSTICK_STICK_INFO
{
   int flags;
   int num_axis;
   JOYSTICK_AXIS_INFO axis[3];
   const char *name;
} JOYSTICK_STICK_INFO;



typedef struct JOYSTICK_BUTTON_INFO
{
   int b;
   const char *name;
} JOYSTICK_BUTTON_INFO;



typedef struct JOYSTICK_INFO
{
   int flags;
   int num_sticks;
   int num_buttons;
   JOYSTICK_STICK_INFO stick[5];
   JOYSTICK_BUTTON_INFO button[32];
} JOYSTICK_INFO;
# 92 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/joystick.h" 3
extern __attribute__((dllimport)) JOYSTICK_INFO joy[];
extern __attribute__((dllimport)) int num_joysticks;


typedef struct JOYSTICK_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   int (*init) (void);
   void (*exit) (void);
   int (*poll) (void);
   int (*save_data) (void);
   int (*load_data) (void);
   const char * (*calibrate_name) (int n);
   int (*calibrate) (int n);
} JOYSTICK_DRIVER;


extern __attribute__((dllimport)) JOYSTICK_DRIVER joystick_none;
extern __attribute__((dllimport)) JOYSTICK_DRIVER * joystick_driver;
extern __attribute__((dllimport)) _DRIVER_INFO _joystick_driver_list[];
# 128 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/joystick.h" 3
extern int install_joystick (int type);
extern void remove_joystick (void);

extern int poll_joystick (void);

extern int save_joystick_data (const char *filename);
extern int load_joystick_data (const char *filename);

extern const char * calibrate_joystick_name (int n);
extern int calibrate_joystick (int n);
# 36 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/palette.h" 1 3
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/palette.h" 3
typedef struct RGB
{
   unsigned char r, g, b;
   unsigned char filler;
} RGB;



typedef RGB PALETTE[256];
# 38 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 1 3
# 22 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3d.h" 1 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3d.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fixed.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fixed.h" 3
typedef int32_t fixed;

extern __attribute__((dllimport)) const fixed fixtorad_r;
extern __attribute__((dllimport)) const fixed radtofix_r;
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3d.h" 2 3





struct BITMAP;

typedef struct V3D
{
   fixed x, y, z;
   fixed u, v;
   int c;
} V3D;


typedef struct V3D_f
{
   float x, y, z;
   float u, v;
   int c;
} V3D_f;
# 65 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3d.h" 3
extern __attribute__((dllimport)) float scene_gap;

extern void _soft_polygon3d (struct BITMAP *bmp, int type, struct BITMAP *texture, int vc, V3D *vtx[]);
extern void _soft_polygon3d_f (struct BITMAP *bmp, int type, struct BITMAP *texture, int vc, V3D_f *vtx[]);
extern void _soft_triangle3d (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D *v1, V3D *v2, V3D *v3);
extern void _soft_triangle3d_f (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3);
extern void _soft_quad3d (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D *v1, V3D *v2, V3D *v3, V3D *v4);
extern void _soft_quad3d_f (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3, V3D_f *v4);
extern int clip3d (int type, fixed min_z, fixed max_z, int vc, const V3D *vtx[], V3D *vout[], V3D *vtmp[], int out[]);
extern int clip3d_f (int type, float min_z, float max_z, int vc, const V3D_f *vtx[], V3D_f *vout[], V3D_f *vtmp[], int out[]);

extern fixed polygon_z_normal (const V3D *v1, const V3D *v2, const V3D *v3);
extern float polygon_z_normal_f (const V3D_f *v1, const V3D_f *v2, const V3D_f *v3);





typedef struct BITMAP ZBUFFER;

extern ZBUFFER * create_zbuffer (struct BITMAP *bmp);
extern ZBUFFER * create_sub_zbuffer (ZBUFFER *parent, int x, int y, int width, int height);
extern void set_zbuffer (ZBUFFER *zbuf);
extern void clear_zbuffer (ZBUFFER *zbuf, float z);
extern void destroy_zbuffer (ZBUFFER *zbuf);

extern int create_scene (int nedge, int npoly);
extern void clear_scene (struct BITMAP* bmp);
extern void destroy_scene (void);
extern int scene_polygon3d (int type, struct BITMAP *texture, int vx, V3D *vtx[]);
extern int scene_polygon3d_f (int type, struct BITMAP *texture, int vx, V3D_f *vtx[]);
extern void render_scene (void);
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 2 3







struct RLE_SPRITE;
struct FONT_GLYPH;
struct RGB;
# 58 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 3
typedef struct GFX_MODE
{
   int width, height, bpp;
} GFX_MODE;

typedef struct GFX_MODE_LIST
{
   int num_modes;
   GFX_MODE *mode;
} GFX_MODE_LIST;

typedef struct GFX_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   struct BITMAP * (*init) (int w, int h, int v_w, int v_h, int color_depth);
   void (*exit) (struct BITMAP *b);
   int (*scroll) (int x, int y);
   void (*vsync) (void);
   void (*set_palette) (const struct RGB *p, int from, int to, int retracesync);
   int (*request_scroll) (int x, int y);
   int (*poll_scroll) (void);
   void (*enable_triple_buffer) (void);
   struct BITMAP * (*create_video_bitmap) (int width, int height);
   void (*destroy_video_bitmap) (struct BITMAP *bitmap);
   int (*show_video_bitmap) (struct BITMAP *bitmap);
   int (*request_video_bitmap) (struct BITMAP *bitmap);
   struct BITMAP * (*create_system_bitmap) (int width, int height);
   void (*destroy_system_bitmap) (struct BITMAP *bitmap);
   int (*set_mouse_sprite) (struct BITMAP *sprite, int xfocus, int yfocus);
   int (*show_mouse) (struct BITMAP *bmp, int x, int y);
   void (*hide_mouse) (void);
   void (*move_mouse) (int x, int y);
   void (*drawing_mode) (void);
   void (*save_video_state) (void);
   void (*restore_video_state) (void);
   void (*set_blender_mode) (int mode, int r, int g, int b, int a);
   GFX_MODE_LIST * (*fetch_mode_list) (void);
   int w, h;
   int linear;
   long bank_size;
   long bank_gran;
   long vid_mem;
   long vid_phys_base;
   int windowed;
} GFX_DRIVER;


extern __attribute__((dllimport)) GFX_DRIVER * gfx_driver;
extern __attribute__((dllimport)) _DRIVER_INFO _gfx_driver_list[];
# 147 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 3
extern __attribute__((dllimport)) int gfx_capabilities;


typedef struct GFX_VTABLE
{
   int color_depth;
   int mask_color;
   void *unwrite_bank;
   void (*set_clip) (struct BITMAP *bmp);
   void (*acquire) (struct BITMAP *bmp);
   void (*release) (struct BITMAP *bmp);
   struct BITMAP * (*create_sub_bitmap) (struct BITMAP *parent, int x, int y, int width, int height);
   void (*created_sub_bitmap) (struct BITMAP *bmp, struct BITMAP *parent);
   int (*getpixel) (struct BITMAP *bmp, int x, int y);
   void (*putpixel) (struct BITMAP *bmp, int x, int y, int color);
   void (*vline) (struct BITMAP *bmp, int x, int y_1, int y2, int color);
   void (*hline) (struct BITMAP *bmp, int x1, int y, int x2, int color);
   void (*hfill) (struct BITMAP *bmp, int x1, int y, int x2, int color);
   void (*line) (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int color);
   void (*fastline) (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int color);
   void (*rectfill) (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int color);
   void (*triangle) (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int x3, int y3, int color);
   void (*draw_sprite) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y);
   void (*draw_256_sprite) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y);
   void (*draw_sprite_v_flip) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y);
   void (*draw_sprite_h_flip) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y);
   void (*draw_sprite_vh_flip) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y);
   void (*draw_trans_sprite) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y);
   void (*draw_trans_rgba_sprite) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y);
   void (*draw_lit_sprite) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y, int color);
   void (*draw_rle_sprite) (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y);
   void (*draw_trans_rle_sprite) (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y);
   void (*draw_trans_rgba_rle_sprite) (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y);
   void (*draw_lit_rle_sprite) (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y, int color);
   void (*draw_character) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y, int color, int bg);
   void (*draw_glyph) (struct BITMAP *bmp, const struct FONT_GLYPH *glyph, int x, int y, int color, int bg);
   void (*blit_from_memory) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*blit_to_memory) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*blit_from_system) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*blit_to_system) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*blit_to_self) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*blit_to_self_forward) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*blit_to_self_backward) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*blit_between_formats) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*masked_blit) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
   void (*clear_to_color) (struct BITMAP *bitmap, int color);
   void (*pivot_scaled_sprite_flip) (struct BITMAP *bmp, struct BITMAP *sprite, fixed x, fixed y, fixed cx, fixed cy, fixed angle, fixed scale, int v_flip);
   void (*do_stretch_blit) (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int source_width, int source_height, int dest_x, int dest_y, int dest_width, int dest_height, int masked);
   void (*draw_gouraud_sprite) (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y, int c1, int c2, int c3, int c4);
   void (*draw_sprite_end) (void);
   void (*blit_end) (void);
   void (*polygon) (struct BITMAP *bmp, int vertices, const int *points, int color);
   void (*rect) (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int color);
   void (*circle) (struct BITMAP *bmp, int x, int y, int radius, int color);
   void (*circlefill) (struct BITMAP *bmp, int x, int y, int radius, int color);
   void (*ellipse) (struct BITMAP *bmp, int x, int y, int rx, int ry, int color);
   void (*ellipsefill) (struct BITMAP *bmp, int x, int y, int rx, int ry, int color);
   void (*arc) (struct BITMAP *bmp, int x, int y, fixed ang1, fixed ang2, int r, int color);
   void (*spline) (struct BITMAP *bmp, const int points[8], int color);
   void (*floodfill) (struct BITMAP *bmp, int x, int y, int color);
   void (*polygon3d) (struct BITMAP *bmp, int type, struct BITMAP *texture, int vc, V3D *vtx[]);
   void (*polygon3d_f) (struct BITMAP *bmp, int type, struct BITMAP *texture, int vc, V3D_f *vtx[]);
   void (*triangle3d) (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D *v1, V3D *v2, V3D *v3);
   void (*triangle3d_f) (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3);
   void (*quad3d) (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D *v1, V3D *v2, V3D *v3, V3D *v4);
   void (*quad3d_f) (struct BITMAP *bmp, int type, struct BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3, V3D_f *v4);
} GFX_VTABLE;


extern __attribute__((dllimport)) GFX_VTABLE __linear_vtable8;
extern __attribute__((dllimport)) GFX_VTABLE __linear_vtable15;
extern __attribute__((dllimport)) GFX_VTABLE __linear_vtable16;
extern __attribute__((dllimport)) GFX_VTABLE __linear_vtable24;
extern __attribute__((dllimport)) GFX_VTABLE __linear_vtable32;


typedef struct _VTABLE_INFO
{
   int color_depth;
   GFX_VTABLE *vtable;
} _VTABLE_INFO;

extern __attribute__((dllimport)) _VTABLE_INFO _vtable_list[];
# 257 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 3
typedef struct BITMAP
{
   int w, h;
   int clip;
   int cl, cr, ct, cb;
   GFX_VTABLE *vtable;
   void *write_bank;
   void *read_bank;
   void *dat;
   unsigned long id;
   void *extra;
   int x_ofs;
   int y_ofs;
   int seg;
   unsigned char * line[];
} BITMAP;
# 285 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 3
extern __attribute__((dllimport)) BITMAP * screen;
# 381 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 3
extern GFX_MODE_LIST * get_gfx_mode_list (int card);
extern void destroy_gfx_mode_list (GFX_MODE_LIST *gfx_mode_list);
extern void set_color_depth (int depth);
extern int get_color_depth (void);
extern void set_color_conversion (int mode);
extern int get_color_conversion (void);
extern void request_refresh_rate (int rate);
extern int get_refresh_rate (void);
extern int set_gfx_mode (int card, int w, int h, int v_w, int v_h);
extern int scroll_screen (int x, int y);
extern int request_scroll (int x, int y);
extern int poll_scroll (void);
extern int show_video_bitmap (BITMAP *bitmap);
extern int request_video_bitmap (BITMAP *bitmap);
extern int enable_triple_buffer (void);
extern BITMAP * create_bitmap (int width, int height);
extern BITMAP * create_bitmap_ex (int color_depth, int width, int height);
extern BITMAP * create_sub_bitmap (BITMAP *parent, int x, int y, int width, int height);
extern BITMAP * create_video_bitmap (int width, int height);
extern BITMAP * create_system_bitmap (int width, int height);
extern void destroy_bitmap (BITMAP *bitmap);
extern void set_clip_rect (BITMAP *bitmap, int x1, int y_1, int x2, int y2);
extern void add_clip_rect (BITMAP *bitmap, int x1, int y_1, int x2, int y2);
extern void clear_bitmap (BITMAP *bitmap);
extern void vsync (void);
# 418 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 3
extern int set_display_switch_mode (int mode);
extern int get_display_switch_mode (void);
extern int set_display_switch_callback (int dir, void (*cb) (void));
extern void remove_display_switch_callback (void (*cb) (void));

extern void lock_bitmap (struct BITMAP *bmp);





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 1 3
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/asm.inl" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/asm.inl" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ int _default_ds (void); extern __inline__ int _default_ds (void) { short result; __asm__ ( "  movw %%ds, %0 " : "=r" (result) ); return result; }
# 46 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ uintptr_t bmp_write_line (BITMAP *bmp, int lyne); extern __inline__ uintptr_t bmp_write_line (BITMAP *bmp, int lyne) { uintptr_t result; __asm__ volatile ( "  call *%3 " : "=a" (result) : "d" (bmp), "0" (lyne), "r" (bmp->write_bank) ); return result; }
# 68 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ uintptr_t bmp_read_line (BITMAP *bmp, int lyne); extern __inline__ uintptr_t bmp_read_line (BITMAP *bmp, int lyne) { uintptr_t result; __asm__ volatile ( "  call *%3 " : "=a" (result) : "d" (bmp), "0" (lyne), "r" (bmp->read_bank) ); return result; }
# 90 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ void bmp_unwrite_line (BITMAP *bmp); extern __inline__ void bmp_unwrite_line (BITMAP *bmp) { __asm__ volatile ( "  call *%1 " : : "d" (bmp), "r" (bmp->vtable->unwrite_bank) ); }
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/asm.inl" 2 3
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 2 3
# 87 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ int is_windowed_mode (void); extern __inline__ int is_windowed_mode (void) { ; return gfx_driver->windowed; }
# 96 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ void clear_to_color (BITMAP *bitmap, int color); extern __inline__ void clear_to_color (BITMAP *bitmap, int color) { ; bitmap->vtable->clear_to_color(bitmap, color); }







extern __inline__ int bitmap_color_depth (BITMAP *bmp); extern __inline__ int bitmap_color_depth (BITMAP *bmp) { ; return bmp->vtable->color_depth; }







extern __inline__ int bitmap_mask_color (BITMAP *bmp); extern __inline__ int bitmap_mask_color (BITMAP *bmp) { ; return bmp->vtable->mask_color; }







extern __inline__ int is_same_bitmap (BITMAP *bmp1, BITMAP *bmp2); extern __inline__ int is_same_bitmap (BITMAP *bmp1, BITMAP *bmp2) { unsigned long m1; unsigned long m2; if ((!bmp1) || (!bmp2)) return 0; if (bmp1 == bmp2) return -1; m1 = bmp1->id & 0x01FFFFFF; m2 = bmp2->id & 0x01FFFFFF; return ((m1) && (m1 == m2)); }
# 138 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ int is_linear_bitmap (BITMAP *bmp); extern __inline__ int is_linear_bitmap (BITMAP *bmp) { ; return (bmp->id & 0x10000000) == 0; }







extern __inline__ int is_planar_bitmap (BITMAP *bmp); extern __inline__ int is_planar_bitmap (BITMAP *bmp) { ; return (bmp->id & 0x10000000) != 0; }







extern __inline__ int is_memory_bitmap (BITMAP *bmp); extern __inline__ int is_memory_bitmap (BITMAP *bmp) { ; return (bmp->id & (0x80000000 | 0x40000000)) == 0; }







extern __inline__ int is_screen_bitmap (BITMAP *bmp); extern __inline__ int is_screen_bitmap (BITMAP *bmp) { ; return is_same_bitmap(bmp, screen); }







extern __inline__ int is_video_bitmap (BITMAP *bmp); extern __inline__ int is_video_bitmap (BITMAP *bmp) { ; return (bmp->id & 0x80000000) != 0; }







extern __inline__ int is_system_bitmap (BITMAP *bmp); extern __inline__ int is_system_bitmap (BITMAP *bmp) { ; return (bmp->id & 0x40000000) != 0; }







extern __inline__ int is_sub_bitmap (BITMAP *bmp); extern __inline__ int is_sub_bitmap (BITMAP *bmp) { ; return (bmp->id & 0x20000000) != 0; }
# 203 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ void acquire_bitmap (BITMAP *bmp); extern __inline__ void acquire_bitmap (BITMAP *bmp) { ; if (bmp->vtable->acquire) bmp->vtable->acquire(bmp); }
# 212 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ void release_bitmap (BITMAP *bmp); extern __inline__ void release_bitmap (BITMAP *bmp) { ; if (bmp->vtable->release) bmp->vtable->release(bmp); }
# 221 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ void acquire_screen (void); extern __inline__ void acquire_screen (void) { acquire_bitmap(screen); }





extern __inline__ void release_screen (void); extern __inline__ void release_screen (void) { release_bitmap(screen); }







extern __inline__ int is_inside_bitmap (BITMAP *bmp, int x, int y, int clip); extern __inline__ int is_inside_bitmap (BITMAP *bmp, int x, int y, int clip) { ; if (clip) { if (bmp->clip) return (x >= bmp->cl) && (y >= bmp->ct) && (x < bmp->cr) && (y < bmp->cb); else return -1; } else return (unsigned int)x < (unsigned int)bmp->w && (unsigned int)y < (unsigned int)bmp->h; }
# 252 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ void get_clip_rect (BITMAP *bitmap, int *x1, int *y_1, int *x2, int *y2); extern __inline__ void get_clip_rect (BITMAP *bitmap, int *x1, int *y_1, int *x2, int *y2) { ; *x1 = bitmap->cl; *y_1 = bitmap->ct; *x2 = bitmap->cr-1; *y2 = bitmap->cb-1; }
# 263 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 3
extern __inline__ void set_clip_state (BITMAP *bitmap, int state); extern __inline__ void set_clip_state (BITMAP *bitmap, int state) { ; bitmap->clip = state; }






extern __inline__ int get_clip_state (BITMAP *bitmap); extern __inline__ int get_clip_state (BITMAP *bitmap) { ; return bitmap->clip; }
# 430 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 2 3
# 39 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/color.h" 1 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/color.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/palette.h" 1 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/color.h" 2 3





struct BITMAP;

extern __attribute__((dllimport)) PALETTE black_palette;
extern __attribute__((dllimport)) PALETTE desktop_palette;
extern __attribute__((dllimport)) PALETTE default_palette;

typedef struct {
   unsigned char data[32][32][32];
} RGB_MAP;

typedef struct {
   unsigned char data[256][256];
} COLOR_MAP;

extern __attribute__((dllimport)) RGB_MAP * rgb_map;
extern __attribute__((dllimport)) COLOR_MAP * color_map;

extern __attribute__((dllimport)) PALETTE _current_palette;

extern __attribute__((dllimport)) int _rgb_r_shift_15;
extern __attribute__((dllimport)) int _rgb_g_shift_15;
extern __attribute__((dllimport)) int _rgb_b_shift_15;
extern __attribute__((dllimport)) int _rgb_r_shift_16;
extern __attribute__((dllimport)) int _rgb_g_shift_16;
extern __attribute__((dllimport)) int _rgb_b_shift_16;
extern __attribute__((dllimport)) int _rgb_r_shift_24;
extern __attribute__((dllimport)) int _rgb_g_shift_24;
extern __attribute__((dllimport)) int _rgb_b_shift_24;
extern __attribute__((dllimport)) int _rgb_r_shift_32;
extern __attribute__((dllimport)) int _rgb_g_shift_32;
extern __attribute__((dllimport)) int _rgb_b_shift_32;
extern __attribute__((dllimport)) int _rgb_a_shift_32;

extern __attribute__((dllimport)) int _rgb_scale_5[];
extern __attribute__((dllimport)) int _rgb_scale_6[];







extern __attribute__((dllimport)) int * palette_color;

extern void set_color (int idx, const RGB *p);
extern void set_palette (const PALETTE p);
extern void set_palette_range (const PALETTE p, int from, int to, int retracesync);

extern void get_color (int idx, RGB *p);
extern void get_palette (PALETTE p);
extern void get_palette_range (PALETTE p, int from, int to);

extern void fade_interpolate (const PALETTE source, const PALETTE dest, PALETTE output, int pos, int from, int to);
extern void fade_from_range (const PALETTE source, const PALETTE dest, int speed, int from, int to);
extern void fade_in_range (const PALETTE p, int speed, int from, int to);
extern void fade_out_range (int speed, int from, int to);
extern void fade_from (const PALETTE source, const PALETTE dest, int speed);
extern void fade_in (const PALETTE p, int speed);
extern void fade_out (int speed);

extern void select_palette (const PALETTE p);
extern void unselect_palette (void);

extern void generate_332_palette (PALETTE pal);
extern int generate_optimized_palette (struct BITMAP *image, PALETTE pal, const signed char rsvdcols[256]);

extern void create_rgb_table (RGB_MAP *table, const PALETTE pal, void (*callback) (int pos));
extern void create_light_table (COLOR_MAP *table, const PALETTE pal, int r, int g, int b, void (*callback) (int pos));
extern void create_trans_table (COLOR_MAP *table, const PALETTE pal, int r, int g, int b, void (*callback) (int pos));
extern void create_color_table (COLOR_MAP *table, const PALETTE pal, void (*blend) (const PALETTE pal, int x, int y, RGB *rgb), void (*callback) (int pos));
extern void create_blender_table (COLOR_MAP *table, const PALETTE pal, void (*callback) (int pos));

typedef unsigned long (*BLENDER_FUNC) (unsigned long x, unsigned long y, unsigned long n);

extern void set_blender_mode (BLENDER_FUNC b15, BLENDER_FUNC b16, BLENDER_FUNC b24, int r, int g, int b, int a);
extern void set_blender_mode_ex (BLENDER_FUNC b15, BLENDER_FUNC b16, BLENDER_FUNC b24, BLENDER_FUNC b32, BLENDER_FUNC b15x, BLENDER_FUNC b16x, BLENDER_FUNC b24x, int r, int g, int b, int a);

extern void set_alpha_blender (void);
extern void set_write_alpha_blender (void);
extern void set_trans_blender (int r, int g, int b, int a);
extern void set_add_blender (int r, int g, int b, int a);
extern void set_burn_blender (int r, int g, int b, int a);
extern void set_color_blender (int r, int g, int b, int a);
extern void set_difference_blender (int r, int g, int b, int a);
extern void set_dissolve_blender (int r, int g, int b, int a);
extern void set_dodge_blender (int r, int g, int b, int a);
extern void set_hue_blender (int r, int g, int b, int a);
extern void set_invert_blender (int r, int g, int b, int a);
extern void set_luminance_blender (int r, int g, int b, int a);
extern void set_multiply_blender (int r, int g, int b, int a);
extern void set_saturation_blender (int r, int g, int b, int a);
extern void set_screen_blender (int r, int g, int b, int a);

extern void hsv_to_rgb (float h, float s, float v, int *r, int *g, int *b);
extern void rgb_to_hsv (int r, int g, int b, float *h, float *s, float *v);

extern int bestfit_color (const PALETTE pal, int r, int g, int b);

extern int makecol (int r, int g, int b);
extern int makecol8 (int r, int g, int b);
extern int makecol_depth (int color_depth, int r, int g, int b);

extern int makeacol (int r, int g, int b, int a);
extern int makeacol_depth (int color_depth, int r, int g, int b, int a);

extern int makecol15_dither (int r, int g, int b, int x, int y);
extern int makecol16_dither (int r, int g, int b, int x, int y);

extern int getr (int c);
extern int getg (int c);
extern int getb (int c);
extern int geta (int c);

extern int getr_depth (int color_depth, int c);
extern int getg_depth (int color_depth, int c);
extern int getb_depth (int color_depth, int c);
extern int geta_depth (int color_depth, int c);





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/color.inl" 1 3
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/color.inl" 3
extern __inline__ int makecol15 (int r, int g, int b); extern __inline__ int makecol15 (int r, int g, int b) { return (((r >> 3) << _rgb_r_shift_15) | ((g >> 3) << _rgb_g_shift_15) | ((b >> 3) << _rgb_b_shift_15)); }







extern __inline__ int makecol16 (int r, int g, int b); extern __inline__ int makecol16 (int r, int g, int b) { return (((r >> 3) << _rgb_r_shift_16) | ((g >> 2) << _rgb_g_shift_16) | ((b >> 3) << _rgb_b_shift_16)); }







extern __inline__ int makecol24 (int r, int g, int b); extern __inline__ int makecol24 (int r, int g, int b) { return ((r << _rgb_r_shift_24) | (g << _rgb_g_shift_24) | (b << _rgb_b_shift_24)); }







extern __inline__ int makecol32 (int r, int g, int b); extern __inline__ int makecol32 (int r, int g, int b) { return ((r << _rgb_r_shift_32) | (g << _rgb_g_shift_32) | (b << _rgb_b_shift_32)); }







extern __inline__ int makeacol32 (int r, int g, int b, int a); extern __inline__ int makeacol32 (int r, int g, int b, int a) { return ((r << _rgb_r_shift_32) | (g << _rgb_g_shift_32) | (b << _rgb_b_shift_32) | (a << _rgb_a_shift_32)); }
# 67 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/color.inl" 3
extern __inline__ int getr8 (int c); extern __inline__ int getr8 (int c) { return _rgb_scale_6[(int)_current_palette[c].r]; }





extern __inline__ int getg8 (int c); extern __inline__ int getg8 (int c) { return _rgb_scale_6[(int)_current_palette[c].g]; }





extern __inline__ int getb8 (int c); extern __inline__ int getb8 (int c) { return _rgb_scale_6[(int)_current_palette[c].b]; }





extern __inline__ int getr15 (int c); extern __inline__ int getr15 (int c) { return _rgb_scale_5[(c >> _rgb_r_shift_15) & 0x1F]; }





extern __inline__ int getg15 (int c); extern __inline__ int getg15 (int c) { return _rgb_scale_5[(c >> _rgb_g_shift_15) & 0x1F]; }





extern __inline__ int getb15 (int c); extern __inline__ int getb15 (int c) { return _rgb_scale_5[(c >> _rgb_b_shift_15) & 0x1F]; }





extern __inline__ int getr16 (int c); extern __inline__ int getr16 (int c) { return _rgb_scale_5[(c >> _rgb_r_shift_16) & 0x1F]; }





extern __inline__ int getg16 (int c); extern __inline__ int getg16 (int c) { return _rgb_scale_6[(c >> _rgb_g_shift_16) & 0x3F]; }





extern __inline__ int getb16 (int c); extern __inline__ int getb16 (int c) { return _rgb_scale_5[(c >> _rgb_b_shift_16) & 0x1F]; }





extern __inline__ int getr24 (int c); extern __inline__ int getr24 (int c) { return ((c >> _rgb_r_shift_24) & 0xFF); }





extern __inline__ int getg24 (int c); extern __inline__ int getg24 (int c) { return ((c >> _rgb_g_shift_24) & 0xFF); }





extern __inline__ int getb24 (int c); extern __inline__ int getb24 (int c) { return ((c >> _rgb_b_shift_24) & 0xFF); }





extern __inline__ int getr32 (int c); extern __inline__ int getr32 (int c) { return ((c >> _rgb_r_shift_32) & 0xFF); }





extern __inline__ int getg32 (int c); extern __inline__ int getg32 (int c) { return ((c >> _rgb_g_shift_32) & 0xFF); }





extern __inline__ int getb32 (int c); extern __inline__ int getb32 (int c) { return ((c >> _rgb_b_shift_32) & 0xFF); }





extern __inline__ int geta32 (int c); extern __inline__ int geta32 (int c) { return ((c >> _rgb_a_shift_32) & 0xFF); }







extern __inline__ void _set_color (int idx, const RGB *p); extern __inline__ void _set_color (int idx, const RGB *p) { set_color(idx, p); }
# 152 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/color.h" 2 3
# 40 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/draw.h" 1 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/draw.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gfx.h" 1 3
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/draw.h" 2 3
# 37 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/draw.h" 3
extern void drawing_mode (int mode, struct BITMAP *pattern, int x_anchor, int y_anchor);
extern void xor_mode (int on);
extern void solid_mode (void);
extern void do_line (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int d, void (*proc) (struct BITMAP *, int, int, int));
extern void _soft_triangle (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int x3, int y3, int color);
extern void _soft_polygon (struct BITMAP *bmp, int vertices, const int *points, int color);
extern void _soft_rect (struct BITMAP *bmp, int x1, int y_1, int x2, int y2, int color);
extern void do_circle (struct BITMAP *bmp, int x, int y, int radius, int d, void (*proc) (struct BITMAP *, int, int, int));
extern void _soft_circle (struct BITMAP *bmp, int x, int y, int radius, int color);
extern void _soft_circlefill (struct BITMAP *bmp, int x, int y, int radius, int color);
extern void do_ellipse (struct BITMAP *bmp, int x, int y, int rx, int ry, int d, void (*proc) (struct BITMAP *, int, int, int));
extern void _soft_ellipse (struct BITMAP *bmp, int x, int y, int rx, int ry, int color);
extern void _soft_ellipsefill (struct BITMAP *bmp, int x, int y, int rx, int ry, int color);
extern void do_arc (struct BITMAP *bmp, int x, int y, fixed ang1, fixed ang2, int r, int d, void (*proc) (struct BITMAP *, int, int, int));
extern void _soft_arc (struct BITMAP *bmp, int x, int y, fixed ang1, fixed ang2, int r, int color);
extern void calc_spline (const int points[8], int npts, int *x, int *y);
extern void _soft_spline (struct BITMAP *bmp, const int points[8], int color);
extern void _soft_floodfill (struct BITMAP *bmp, int x, int y, int color);
extern void blit (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
extern void masked_blit (struct BITMAP *source, struct BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
extern void stretch_blit (struct BITMAP *s, struct BITMAP *d, int s_x, int s_y, int s_w, int s_h, int d_x, int d_y, int d_w, int d_h);
extern void masked_stretch_blit (struct BITMAP *s, struct BITMAP *d, int s_x, int s_y, int s_w, int s_h, int d_x, int d_y, int d_w, int d_h);
extern void stretch_sprite (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y, int w, int h);
extern void _soft_draw_gouraud_sprite (struct BITMAP *bmp, struct BITMAP *sprite, int x, int y, int c1, int c2, int c3, int c4);





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 1 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3d.h" 1 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/gfx.inl" 1 3
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 2 3





extern __inline__ int getpixel (BITMAP *bmp, int x, int y); extern __inline__ int getpixel (BITMAP *bmp, int x, int y) { ; return bmp->vtable->getpixel(bmp, x, y); }







extern __inline__ void putpixel (BITMAP *bmp, int x, int y, int color); extern __inline__ void putpixel (BITMAP *bmp, int x, int y, int color) { ; bmp->vtable->putpixel(bmp, x, y, color); }







extern __inline__ void vline (BITMAP *bmp, int x, int y_1, int y2, int color); extern __inline__ void vline (BITMAP *bmp, int x, int y_1, int y2, int color) { ; bmp->vtable->vline(bmp, x, y_1, y2, color); }







extern __inline__ void hline (BITMAP *bmp, int x1, int y, int x2, int color); extern __inline__ void hline (BITMAP *bmp, int x1, int y, int x2, int color) { ; bmp->vtable->hline(bmp, x1, y, x2, color); }







extern __inline__ void line (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color); extern __inline__ void line (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color) { ; bmp->vtable->line(bmp, x1, y_1, x2, y2, color); }







extern __inline__ void fastline (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color); extern __inline__ void fastline (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color) { ; bmp->vtable->fastline(bmp, x1, y_1, x2, y2, color); }







extern __inline__ void rectfill (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color); extern __inline__ void rectfill (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color) { ; bmp->vtable->rectfill(bmp, x1, y_1, x2, y2, color); }







extern __inline__ void triangle (BITMAP *bmp, int x1, int y_1, int x2, int y2, int x3, int y3, int color); extern __inline__ void triangle (BITMAP *bmp, int x1, int y_1, int x2, int y2, int x3, int y3, int color) { ; bmp->vtable->triangle(bmp, x1, y_1, x2, y2, x3, y3, color); }







extern __inline__ void polygon (BITMAP *bmp, int vertices, const int *points, int color); extern __inline__ void polygon (BITMAP *bmp, int vertices, const int *points, int color) { ; bmp->vtable->polygon(bmp, vertices, points, color); }







extern __inline__ void rect (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color); extern __inline__ void rect (BITMAP *bmp, int x1, int y_1, int x2, int y2, int color) { ; bmp->vtable->rect(bmp, x1, y_1, x2, y2, color); }







extern __inline__ void circle (BITMAP *bmp, int x, int y, int radius, int color); extern __inline__ void circle (BITMAP *bmp, int x, int y, int radius, int color) { ; bmp->vtable->circle(bmp, x, y, radius, color); }







extern __inline__ void circlefill (BITMAP *bmp, int x, int y, int radius, int color); extern __inline__ void circlefill (BITMAP *bmp, int x, int y, int radius, int color) { ; bmp->vtable->circlefill(bmp, x, y, radius, color); }
# 127 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void ellipse (BITMAP *bmp, int x, int y, int rx, int ry, int color); extern __inline__ void ellipse (BITMAP *bmp, int x, int y, int rx, int ry, int color) { ; bmp->vtable->ellipse(bmp, x, y, rx, ry, color); }
# 136 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void ellipsefill (BITMAP *bmp, int x, int y, int rx, int ry, int color); extern __inline__ void ellipsefill (BITMAP *bmp, int x, int y, int rx, int ry, int color) { ; bmp->vtable->ellipsefill(bmp, x, y, rx, ry, color); }
# 145 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void arc (BITMAP *bmp, int x, int y, fixed ang1, fixed ang2, int r, int color); extern __inline__ void arc (BITMAP *bmp, int x, int y, fixed ang1, fixed ang2, int r, int color) { ; bmp->vtable->arc(bmp, x, y, ang1, ang2, r, color); }
# 154 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void spline (BITMAP *bmp, const int points[8], int color); extern __inline__ void spline (BITMAP *bmp, const int points[8], int color) { ; bmp->vtable->spline(bmp, points, color); }
# 163 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void floodfill (BITMAP *bmp, int x, int y, int color); extern __inline__ void floodfill (BITMAP *bmp, int x, int y, int color) { ; bmp->vtable->floodfill(bmp, x, y, color); }
# 172 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void polygon3d (BITMAP *bmp, int type, BITMAP *texture, int vc, V3D *vtx[]); extern __inline__ void polygon3d (BITMAP *bmp, int type, BITMAP *texture, int vc, V3D *vtx[]) { ; bmp->vtable->polygon3d(bmp, type, texture, vc, vtx); }
# 181 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void polygon3d_f (BITMAP *bmp, int type, BITMAP *texture, int vc, V3D_f *vtx[]); extern __inline__ void polygon3d_f (BITMAP *bmp, int type, BITMAP *texture, int vc, V3D_f *vtx[]) { ; bmp->vtable->polygon3d_f(bmp, type, texture, vc, vtx); }
# 190 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void triangle3d (BITMAP *bmp, int type, BITMAP *texture, V3D *v1, V3D *v2, V3D *v3); extern __inline__ void triangle3d (BITMAP *bmp, int type, BITMAP *texture, V3D *v1, V3D *v2, V3D *v3) { ; bmp->vtable->triangle3d(bmp, type, texture, v1, v2, v3); }
# 199 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void triangle3d_f (BITMAP *bmp, int type, BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3); extern __inline__ void triangle3d_f (BITMAP *bmp, int type, BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3) { ; bmp->vtable->triangle3d_f(bmp, type, texture, v1, v2, v3); }
# 208 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void quad3d (BITMAP *bmp, int type, BITMAP *texture, V3D *v1, V3D *v2, V3D *v3, V3D *v4); extern __inline__ void quad3d (BITMAP *bmp, int type, BITMAP *texture, V3D *v1, V3D *v2, V3D *v3, V3D *v4) { ; bmp->vtable->quad3d(bmp, type, texture, v1, v2, v3, v4); }
# 217 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void quad3d_f (BITMAP *bmp, int type, BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3, V3D_f *v4); extern __inline__ void quad3d_f (BITMAP *bmp, int type, BITMAP *texture, V3D_f *v1, V3D_f *v2, V3D_f *v3, V3D_f *v4) { ; bmp->vtable->quad3d_f(bmp, type, texture, v1, v2, v3, v4); }
# 228 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y); extern __inline__ void draw_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y) { ; ; if (sprite->vtable->color_depth == 8) { bmp->vtable->draw_256_sprite(bmp, sprite, x, y); } else { ; bmp->vtable->draw_sprite(bmp, sprite, x, y); } }
# 243 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y); extern __inline__ void draw_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y) { ; ; ; bmp->vtable->draw_sprite_v_flip(bmp, sprite, x, y); }
# 252 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_sprite_h_flip (BITMAP *bmp, BITMAP *sprite, int x, int y); extern __inline__ void draw_sprite_h_flip (BITMAP *bmp, BITMAP *sprite, int x, int y) { ; ; ; bmp->vtable->draw_sprite_h_flip(bmp, sprite, x, y); }
# 261 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_sprite_vh_flip (BITMAP *bmp, BITMAP *sprite, int x, int y); extern __inline__ void draw_sprite_vh_flip (BITMAP *bmp, BITMAP *sprite, int x, int y) { ; ; ; bmp->vtable->draw_sprite_vh_flip(bmp, sprite, x, y); }
# 271 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_trans_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y); extern __inline__ void draw_trans_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y) { ; ; if (sprite->vtable->color_depth == 32) { ; bmp->vtable->draw_trans_rgba_sprite(bmp, sprite, x, y); } else { ; bmp->vtable->draw_trans_sprite(bmp, sprite, x, y); } }
# 289 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_lit_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int color); extern __inline__ void draw_lit_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int color) { ; ; ; bmp->vtable->draw_lit_sprite(bmp, sprite, x, y, color); }
# 299 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_gouraud_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int c1, int c2, int c3, int c4); extern __inline__ void draw_gouraud_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int c1, int c2, int c3, int c4) { ; ; ; bmp->vtable->draw_gouraud_sprite(bmp, sprite, x, y, c1, c2, c3, c4); }
# 309 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void draw_character_ex (BITMAP *bmp, BITMAP *sprite, int x, int y, int color, int bg); extern __inline__ void draw_character_ex (BITMAP *bmp, BITMAP *sprite, int x, int y, int color, int bg) { ; ; ; bmp->vtable->draw_character(bmp, sprite, x, y, color, bg); }
# 319 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void rotate_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle); extern __inline__ void rotate_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, (x<<16) + (sprite->w * 0x10000) / 2, (y<<16) + (sprite->h * 0x10000) / 2, sprite->w << 15, sprite->h << 15, angle, 0x10000, 0); }
# 331 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void rotate_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle); extern __inline__ void rotate_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, (x<<16) + (sprite->w * 0x10000) / 2, (y<<16) + (sprite->h * 0x10000) / 2, sprite->w << 15, sprite->h << 15, angle, 0x10000, -1); }
# 343 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void rotate_scaled_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle, fixed scale); extern __inline__ void rotate_scaled_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle, fixed scale) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, (x<<16) + (sprite->w * scale) / 2, (y<<16) + (sprite->h * scale) / 2, sprite->w << 15, sprite->h << 15, angle, scale, 0); }
# 355 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void rotate_scaled_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle, fixed scale); extern __inline__ void rotate_scaled_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, fixed angle, fixed scale) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, (x<<16) + (sprite->w * scale) / 2, (y<<16) + (sprite->h * scale) / 2, sprite->w << 15, sprite->h << 15, angle, scale, -1); }
# 367 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void pivot_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle); extern __inline__ void pivot_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, x<<16, y<<16, cx<<16, cy<<16, angle, 0x10000, 0); }
# 376 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void pivot_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle); extern __inline__ void pivot_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, x<<16, y<<16, cx<<16, cy<<16, angle, 0x10000, -1); }
# 385 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void pivot_scaled_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle, fixed scale); extern __inline__ void pivot_scaled_sprite (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle, fixed scale) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, x<<16, y<<16, cx<<16, cy<<16, angle, scale, 0); }
# 394 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void pivot_scaled_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle, fixed scale); extern __inline__ void pivot_scaled_sprite_v_flip (BITMAP *bmp, BITMAP *sprite, int x, int y, int cx, int cy, fixed angle, fixed scale) { ; ; bmp->vtable->pivot_scaled_sprite_flip(bmp, sprite, x<<16, y<<16, cx<<16, cy<<16, angle, scale, -1); }
# 403 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void _putpixel (BITMAP *bmp, int x, int y, int color); extern __inline__ void _putpixel (BITMAP *bmp, int x, int y, int color) { uintptr_t addr; ; addr = bmp_write_line(bmp, y); (*((uint8_t *)(addr+x)) = (color)); bmp_unwrite_line(bmp); }
# 414 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ int _getpixel (BITMAP *bmp, int x, int y); extern __inline__ int _getpixel (BITMAP *bmp, int x, int y) { uintptr_t addr; int c; ; addr = bmp_read_line(bmp, y); c = (*((uint8_t *)(addr+x))); bmp_unwrite_line(bmp); return c; }
# 428 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void _putpixel15 (BITMAP *bmp, int x, int y, int color); extern __inline__ void _putpixel15 (BITMAP *bmp, int x, int y, int color) { uintptr_t addr; ; addr = bmp_write_line(bmp, y); (*((uint16_t *)(addr+x*sizeof(short))) = (color)); bmp_unwrite_line(bmp); }
# 439 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ int _getpixel15 (BITMAP *bmp, int x, int y); extern __inline__ int _getpixel15 (BITMAP *bmp, int x, int y) { uintptr_t addr; int c; ; addr = bmp_read_line(bmp, y); c = (*((uint16_t *)(addr+x*sizeof(short)))); bmp_unwrite_line(bmp); return c; }
# 453 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void _putpixel16 (BITMAP *bmp, int x, int y, int color); extern __inline__ void _putpixel16 (BITMAP *bmp, int x, int y, int color) { uintptr_t addr; ; addr = bmp_write_line(bmp, y); (*((uint16_t *)(addr+x*sizeof(short))) = (color)); bmp_unwrite_line(bmp); }
# 464 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ int _getpixel16 (BITMAP *bmp, int x, int y); extern __inline__ int _getpixel16 (BITMAP *bmp, int x, int y) { uintptr_t addr; int c; ; addr = bmp_read_line(bmp, y); c = (*((uint16_t *)(addr+x*sizeof(short)))); bmp_unwrite_line(bmp); return c; }
# 478 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void _putpixel24 (BITMAP *bmp, int x, int y, int color); extern __inline__ void _putpixel24 (BITMAP *bmp, int x, int y, int color) { uintptr_t addr; ; addr = bmp_write_line(bmp, y); bmp_write24(addr+x*3, color); bmp_unwrite_line(bmp); }
# 489 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ int _getpixel24 (BITMAP *bmp, int x, int y); extern __inline__ int _getpixel24 (BITMAP *bmp, int x, int y) { uintptr_t addr; int c; ; addr = bmp_read_line(bmp, y); c = bmp_read24(addr+x*3); bmp_unwrite_line(bmp); return c; }
# 503 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ void _putpixel32 (BITMAP *bmp, int x, int y, int color); extern __inline__ void _putpixel32 (BITMAP *bmp, int x, int y, int color) { uintptr_t addr; ; addr = bmp_write_line(bmp, y); (*((uint32_t *)(addr+x*sizeof(int32_t))) = (color)); bmp_unwrite_line(bmp); }
# 514 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/draw.inl" 3
extern __inline__ int _getpixel32 (BITMAP *bmp, int x, int y); extern __inline__ int _getpixel32 (BITMAP *bmp, int x, int y) { uintptr_t addr; int c; ; addr = bmp_read_line(bmp, y); c = (*((uint32_t *)(addr+x*sizeof(int32_t)))); bmp_unwrite_line(bmp); return c; }
# 67 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/draw.h" 2 3
# 41 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/rle.h" 1 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/rle.h" 3
typedef struct RLE_SPRITE
{
   int w, h;
   int color_depth;
   int size;
   signed char dat[];
} RLE_SPRITE;


extern RLE_SPRITE * get_rle_sprite (struct BITMAP *bitmap);
extern void destroy_rle_sprite (RLE_SPRITE *sprite);





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/rle.inl" 1 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/rle.inl" 3
extern __inline__ void draw_rle_sprite (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y); extern __inline__ void draw_rle_sprite (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y) { ; ; ; bmp->vtable->draw_rle_sprite(bmp, sprite, x, y); }
# 39 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/rle.inl" 3
extern __inline__ void draw_trans_rle_sprite (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y); extern __inline__ void draw_trans_rle_sprite (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y) { ; ; if (sprite->color_depth == 32) { ; bmp->vtable->draw_trans_rgba_rle_sprite(bmp, sprite, x, y); } else { ; bmp->vtable->draw_trans_rle_sprite(bmp, sprite, x, y); } }
# 55 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/rle.inl" 3
extern __inline__ void draw_lit_rle_sprite (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y, int color); extern __inline__ void draw_lit_rle_sprite (struct BITMAP *bmp, const struct RLE_SPRITE *sprite, int x, int y, int color) { ; ; ; bmp->vtable->draw_lit_rle_sprite(bmp, sprite, x, y, color); }
# 46 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/rle.h" 2 3
# 42 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/compiled.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/compiled.h" 3
struct BITMAP;




typedef struct COMPILED_SPRITE
{
   short planar;
   short color_depth;
   short w, h;
   struct {
      void *draw;
      int len;
   } proc[4];
} COMPILED_SPRITE;
# 52 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/compiled.h" 3
extern COMPILED_SPRITE * get_compiled_sprite (struct BITMAP *bitmap, int planar);
extern void destroy_compiled_sprite (COMPILED_SPRITE *sprite);
extern void draw_compiled_sprite (struct BITMAP *bmp, const COMPILED_SPRITE *sprite, int x, int y);
# 43 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/text.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/text.h" 3
struct BITMAP;

struct FONT_VTABLE;

struct FONT;

extern __attribute__((dllimport)) struct FONT * font;
extern __attribute__((dllimport)) int allegro_404_char;
extern void textout_ex (struct BITMAP *bmp, const struct FONT *f, const char *str, int x, int y, int color, int bg);
extern void textout_centre_ex (struct BITMAP *bmp, const struct FONT *f, const char *str, int x, int y, int color, int bg);
extern void textout_right_ex (struct BITMAP *bmp, const struct FONT *f, const char *str, int x, int y, int color, int bg);
extern void textout_justify_ex (struct BITMAP *bmp, const struct FONT *f, const char *str, int x1, int x2, int y, int diff, int color, int bg);
extern void textprintf_ex (struct BITMAP *bmp, const struct FONT *f, int x, int y, int color, int bg, const char *format, ...) __attribute__ ((format (printf, 7, 8)));
extern void textprintf_centre_ex (struct BITMAP *bmp, const struct FONT *f, int x, int y, int color, int bg, const char *format, ...) __attribute__ ((format (printf, 7, 8)));
extern void textprintf_right_ex (struct BITMAP *bmp, const struct FONT *f, int x, int y, int color, int bg, const char *format, ...) __attribute__ ((format (printf, 7, 8)));
extern void textprintf_justify_ex (struct BITMAP *bmp, const struct FONT *f, int x1, int x2, int y, int diff, int color, int bg, const char *format, ...) __attribute__ ((format (printf, 9, 10)));
extern int text_length (const struct FONT *f, const char *str);
extern int text_height (const struct FONT *f);
extern void destroy_font (struct FONT *f);
# 44 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/font.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/font.h" 3
typedef struct FONT_GLYPH
{
   short w, h;
   unsigned char dat[];
} FONT_GLYPH;


struct FONT_VTABLE;

typedef struct FONT
{
   void *data;
   int height;
   struct FONT_VTABLE *vtable;
} FONT;

extern int is_color_font (FONT *f);
extern int is_mono_font (FONT *f);
extern int is_compatible_font (FONT *f1, FONT *f2);

extern void register_font_file_type (const char *ext, FONT *(*load)(const char *filename, RGB *pal, void *param));
extern FONT * load_font (const char *filename, RGB *pal, void *param);

extern FONT * load_dat_font (const char *filename, RGB *pal, void *param);
extern FONT * load_bios_font (const char *filename, RGB *pal, void *param);
extern FONT * load_grx_font (const char *filename, RGB *pal, void *param);
extern FONT * load_grx_or_bios_font (const char *filename, RGB *pal, void *param);
extern FONT * load_bitmap_font (const char *fname, RGB *pal, void *param);
extern FONT * load_txt_font (const char *fname, RGB *pal, void *param);

extern FONT * grab_font_from_bitmap (BITMAP *bmp);

extern int get_font_ranges (FONT *f);
extern int get_font_range_begin (FONT *f, int range);
extern int get_font_range_end (FONT *f, int range);
extern FONT * extract_font_range (FONT *f, int begin, int end);
extern FONT * merge_fonts (FONT *f1, FONT *f2);
extern int transpose_font (FONT *f, int drange);
# 45 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fli.h" 1 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fli.h" 3
struct BITMAP;






extern int play_fli (const char *filename, struct BITMAP *bmp, int loop, int (*callback) (void));
extern int play_memory_fli (void *fli_data, struct BITMAP *bmp, int loop, int (*callback) (void));

extern int open_fli (const char *filename);
extern int open_memory_fli (void *fli_data);
extern void close_fli (void);
extern int next_fli_frame (int loop);
extern void reset_fli_variables (void);

extern __attribute__((dllimport)) struct BITMAP * fli_bitmap;
extern __attribute__((dllimport)) PALETTE fli_palette;

extern __attribute__((dllimport)) int fli_bmp_dirty_from;
extern __attribute__((dllimport)) int fli_bmp_dirty_to;
extern __attribute__((dllimport)) int fli_pal_dirty_from;
extern __attribute__((dllimport)) int fli_pal_dirty_to;

extern __attribute__((dllimport)) int fli_frame;

extern __attribute__((dllimport)) volatile int fli_timer;
# 47 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/config.h" 1 3
# 48 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gui.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gui.h" 3
struct BITMAP;
struct DIALOG;

typedef int (*DIALOG_PROC) (int msg, struct DIALOG *d, int c);

typedef struct DIALOG
{
   DIALOG_PROC proc;
   int x, y, w, h;
   int fg, bg;
   int key;
   int flags;
   int d1, d2;
   void *dp, *dp2, *dp3;
} DIALOG;



typedef struct MENU
{
   char *text;
   int (*proc) (void);
   struct MENU *child;
   int flags;
   void *dp;
} MENU;



typedef struct DIALOG_PLAYER
{
   int obj;
   int res;
   int mouse_obj;
   int focus_obj;
   int joy_on;
   int click_wait;
   int mouse_ox, mouse_oy;
   int mouse_oz;
   int mouse_b;
   DIALOG *dialog;
} DIALOG_PLAYER;



typedef struct MENU_PLAYER
{
   MENU *menu;
   int bar;
   int size;
   int sel;
   int x, y, w, h;
   int (*proc)(void);
   BITMAP *saved;

   int mouse_button_was_pressed;
   int back_from_child;
   int timestamp;
   int mouse_sel;
   int redraw;
   int auto_open;
   int ret;

   DIALOG *dialog;

   struct MENU_PLAYER *parent;
   struct MENU_PLAYER *child;
} MENU_PLAYER;
# 150 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/gui.h" 3
extern int d_yield_proc (int msg, DIALOG *d, int c);
extern int d_clear_proc (int msg, DIALOG *d, int c);
extern int d_box_proc (int msg, DIALOG *d, int c);
extern int d_shadow_box_proc (int msg, DIALOG *d, int c);
extern int d_bitmap_proc (int msg, DIALOG *d, int c);
extern int d_text_proc (int msg, DIALOG *d, int c);
extern int d_ctext_proc (int msg, DIALOG *d, int c);
extern int d_rtext_proc (int msg, DIALOG *d, int c);
extern int d_button_proc (int msg, DIALOG *d, int c);
extern int d_check_proc (int msg, DIALOG *d, int c);
extern int d_radio_proc (int msg, DIALOG *d, int c);
extern int d_icon_proc (int msg, DIALOG *d, int c);
extern int d_keyboard_proc (int msg, DIALOG *d, int c);
extern int d_edit_proc (int msg, DIALOG *d, int c);
extern int d_list_proc (int msg, DIALOG *d, int c);
extern int d_text_list_proc (int msg, DIALOG *d, int c);
extern int d_textbox_proc (int msg, DIALOG *d, int c);
extern int d_slider_proc (int msg, DIALOG *d, int c);
extern int d_menu_proc (int msg, DIALOG *d, int c);

extern __attribute__((dllimport)) DIALOG_PROC gui_shadow_box_proc;
extern __attribute__((dllimport)) DIALOG_PROC gui_ctext_proc;
extern __attribute__((dllimport)) DIALOG_PROC gui_button_proc;
extern __attribute__((dllimport)) DIALOG_PROC gui_edit_proc;
extern __attribute__((dllimport)) DIALOG_PROC gui_list_proc;
extern __attribute__((dllimport)) DIALOG_PROC gui_text_list_proc;

extern __attribute__((dllimport)) void (*gui_menu_draw_menu) (int x, int y, int w, int h);
extern __attribute__((dllimport)) void (*gui_menu_draw_menu_item) (MENU *m, int x, int y, int w, int h, int bar, int sel);

extern __attribute__((dllimport)) DIALOG * active_dialog;
extern __attribute__((dllimport)) MENU * active_menu;

extern __attribute__((dllimport)) int gui_mouse_focus;

extern __attribute__((dllimport)) int gui_fg_color;
extern __attribute__((dllimport)) int gui_mg_color;
extern __attribute__((dllimport)) int gui_bg_color;

extern __attribute__((dllimport)) int gui_font_baseline;

extern __attribute__((dllimport)) int (*gui_mouse_x) (void);
extern __attribute__((dllimport)) int (*gui_mouse_y) (void);
extern __attribute__((dllimport)) int (*gui_mouse_z) (void);
extern __attribute__((dllimport)) int (*gui_mouse_b) (void);

extern void gui_set_screen (BITMAP *bmp);
extern BITMAP * gui_get_screen (void);
extern int gui_textout_ex (struct BITMAP *bmp, const char *s, int x, int y, int color, int bg, int centre);
extern int gui_strlen (const char *s);
extern void position_dialog (DIALOG *dialog, int x, int y);
extern void centre_dialog (DIALOG *dialog);
extern void set_dialog_color (DIALOG *dialog, int fg, int bg);
extern int find_dialog_focus (DIALOG *dialog);
extern int offer_focus (DIALOG *dialog, int obj, int *focus_obj, int force);
extern int object_message (DIALOG *dialog, int msg, int c);
extern int dialog_message (DIALOG *dialog, int msg, int c, int *obj);
extern int broadcast_dialog_message (int msg, int c);
extern int do_dialog (DIALOG *dialog, int focus_obj);
extern int popup_dialog (DIALOG *dialog, int focus_obj);
extern DIALOG_PLAYER * init_dialog (DIALOG *dialog, int focus_obj);
extern int update_dialog (DIALOG_PLAYER *player);
extern int shutdown_dialog (DIALOG_PLAYER *player);
extern int do_menu (MENU *menu, int x, int y);
extern MENU_PLAYER * init_menu (MENU *menu, int x, int y);
extern int update_menu (MENU_PLAYER *player);
extern int shutdown_menu (MENU_PLAYER *player);
extern int alert (const char *s1, const char *s2, const char *s3, const char *b1, const char *b2, int c1, int c2);
extern int alert3 (const char *s1, const char *s2, const char *s3, const char *b1, const char *b2, const char *b3, int c1, int c2, int c3);
extern int file_select_ex (const char *message, char *path, const char *ext, int size, int w, int h);

extern int gfx_mode_select (int *card, int *w, int *h);
extern int gfx_mode_select_ex (int *card, int *w, int *h, int *color_depth);
extern int gfx_mode_select_filter (int *card, int *w, int *h, int *color_depth, int (*filter)(int, int, int, int));
# 49 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/sound.h" 1 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/sound.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/digi.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/digi.h" 3
struct PACKFILE;






typedef struct SAMPLE
{
   int bits;
   int stereo;
   int freq;
   int priority;
   unsigned long len;
   unsigned long loop_start;
   unsigned long loop_end;
   unsigned long param;
   void *data;
} SAMPLE;





typedef struct DIGI_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   int voices;
   int basevoice;
   int max_voices;
   int def_voices;


   int (*detect) (int input);
   int (*init) (int input, int voices);
   void (*exit) (int input);
   int (*mixer_volume) (int volume);


   void * (*lock_voice) (int voice, int start, int end);
   void (*unlock_voice) (int voice);
   int (*buffer_size) (void);


   void (*init_voice) (int voice, const SAMPLE *sample);
   void (*release_voice) (int voice);
   void (*start_voice) (int voice);
   void (*stop_voice) (int voice);
   void (*loop_voice) (int voice, int playmode);


   int (*get_position) (int voice);
   void (*set_position) (int voice, int position);


   int (*get_volume) (int voice);
   void (*set_volume) (int voice, int volume);
   void (*ramp_volume) (int voice, int tyme, int endvol);
   void (*stop_volume_ramp) (int voice);


   int (*get_frequency) (int voice);
   void (*set_frequency) (int voice, int frequency);
   void (*sweep_frequency) (int voice, int tyme, int endfreq);
   void (*stop_frequency_sweep) (int voice);


   int (*get_pan) (int voice);
   void (*set_pan) (int voice, int pan);
   void (*sweep_pan) (int voice, int tyme, int endpan);
   void (*stop_pan_sweep) (int voice);


   void (*set_echo) (int voice, int strength, int delay);
   void (*set_tremolo) (int voice, int rate, int depth);
   void (*set_vibrato) (int voice, int rate, int depth);


   int rec_cap_bits;
   int rec_cap_stereo;
   int (*rec_cap_rate) (int bits, int stereo);
   int (*rec_cap_parm) (int rate, int bits, int stereo);
   int (*rec_source) (int source);
   int (*rec_start) (int rate, int bits, int stereo);
   void (*rec_stop) (void);
   int (*rec_read) (void *buf);
} DIGI_DRIVER;

extern __attribute__((dllimport)) _DRIVER_INFO _digi_driver_list[];
# 130 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/digi.h" 3
extern __attribute__((dllimport)) DIGI_DRIVER * digi_driver;

extern __attribute__((dllimport)) DIGI_DRIVER * digi_input_driver;

extern __attribute__((dllimport)) int digi_card;

extern __attribute__((dllimport)) int digi_input_card;

extern int detect_digi_driver (int driver_id);


extern SAMPLE * load_sample (const char *filename);
extern SAMPLE * load_wav (const char *filename);
extern SAMPLE * load_wav_pf (struct PACKFILE *f);
extern SAMPLE * load_voc (const char *filename);
extern SAMPLE * load_voc_pf (struct PACKFILE *f);
extern int save_sample (const char *filename, SAMPLE *spl);
extern SAMPLE * create_sample (int bits, int stereo, int freq, int len);
extern void destroy_sample (SAMPLE *spl);

extern int play_sample (const SAMPLE *spl, int vol, int pan, int freq, int loop);
extern void stop_sample (const SAMPLE *spl);
extern void adjust_sample (const SAMPLE *spl, int vol, int pan, int freq, int loop);

extern int allocate_voice (const SAMPLE *spl);
extern void deallocate_voice (int voice);
extern void reallocate_voice (int voice, const SAMPLE *spl);
extern void release_voice (int voice);
extern void voice_start (int voice);
extern void voice_stop (int voice);
extern void voice_set_priority (int voice, int priority);
extern SAMPLE * voice_check (int voice);







extern void voice_set_playmode (int voice, int playmode);

extern int voice_get_position (int voice);
extern void voice_set_position (int voice, int position);

extern int voice_get_volume (int voice);
extern void voice_set_volume (int voice, int volume);
extern void voice_ramp_volume (int voice, int tyme, int endvol);
extern void voice_stop_volumeramp (int voice);

extern int voice_get_frequency (int voice);
extern void voice_set_frequency (int voice, int frequency);
extern void voice_sweep_frequency (int voice, int tyme, int endfreq);
extern void voice_stop_frequency_sweep (int voice);

extern int voice_get_pan (int voice);
extern void voice_set_pan (int voice, int pan);
extern void voice_sweep_pan (int voice, int tyme, int endpan);
extern void voice_stop_pan_sweep (int voice);

extern void voice_set_echo (int voice, int strength, int delay);
extern void voice_set_tremolo (int voice, int rate, int depth);
extern void voice_set_vibrato (int voice, int rate, int depth);





extern int get_sound_input_cap_bits (void);
extern int get_sound_input_cap_stereo (void);
extern int get_sound_input_cap_rate (int bits, int stereo);
extern int get_sound_input_cap_parm (int rate, int bits, int stereo);
extern int set_sound_input_source (int source);
extern int start_sound_input (int rate, int bits, int stereo);
extern void stop_sound_input (void);
extern int read_sound_input (void *buffer);

extern __attribute__((dllimport)) void (*digi_recorder) (void);

extern void lock_sample (struct SAMPLE *spl);

extern void register_sample_file_type (const char *ext, struct SAMPLE * (*load) (const char *filename), int (*save) (const char *filename, struct SAMPLE *spl));
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/sound.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/stream.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/stream.h" 3
struct SAMPLE;

typedef struct AUDIOSTREAM
{
   int voice;
   struct SAMPLE *samp;
   int len;
   int bufcount;
   int bufnum;
   int active;
   void *locked;
} AUDIOSTREAM;

extern AUDIOSTREAM * play_audio_stream (int len, int bits, int stereo, int freq, int vol, int pan);
extern void stop_audio_stream (AUDIOSTREAM *stream);
extern void * get_audio_stream_buffer (AUDIOSTREAM *stream);
extern void free_audio_stream_buffer (AUDIOSTREAM *stream);
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/sound.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/midi.h" 1 3
# 33 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/midi.h" 3
typedef struct MIDI
{
   int divisions;
   struct {
      unsigned char *data;
      int len;
   } track[32];
} MIDI;







typedef struct MIDI_DRIVER
{
   int id;
   const char *name;
   const char *desc;
   const char *ascii_name;
   int voices;
   int basevoice;
   int max_voices;
   int def_voices;
   int xmin, xmax;


   int (*detect) (int input);
   int (*init) (int input, int voices);
   void (*exit) (int input);
   int (*mixer_volume) (int volume);


   void (*raw_midi) (int data);


   int (*load_patches) (const char *patches, const char *drums);
   void (*adjust_patches) (const char *patches, const char *drums);


   void (*key_on) (int inst, int note, int bend, int vol, int pan);
   void (*key_off) (int voice);
   void (*set_volume) (int voice, int vol);
   void (*set_pitch) (int voice, int note, int bend);
   void (*set_pan) (int voice, int pan);
   void (*set_vibrato) (int voice, int amount);
} MIDI_DRIVER;


extern __attribute__((dllimport)) MIDI_DRIVER midi_digmid;

extern __attribute__((dllimport)) _DRIVER_INFO _midi_driver_list[];
# 101 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/midi.h" 3
extern __attribute__((dllimport)) MIDI_DRIVER * midi_driver;

extern __attribute__((dllimport)) MIDI_DRIVER * midi_input_driver;

extern __attribute__((dllimport)) int midi_card;

extern __attribute__((dllimport)) int midi_input_card;

extern __attribute__((dllimport)) volatile long midi_pos;
extern __attribute__((dllimport)) volatile long midi_time;

extern __attribute__((dllimport)) long midi_loop_start;
extern __attribute__((dllimport)) long midi_loop_end;

extern int detect_midi_driver (int driver_id);

extern MIDI * load_midi (const char *filename);
extern void destroy_midi (MIDI *midi);
extern int play_midi (MIDI *midi, int loop);
extern int play_looped_midi (MIDI *midi, int loop_start, int loop_end);
extern void stop_midi (void);
extern void midi_pause (void);
extern void midi_resume (void);
extern int midi_seek (int target);
extern int get_midi_length (MIDI *midi);
extern void midi_out (unsigned char *data, int length);
extern int load_midi_patches (void);

extern __attribute__((dllimport)) void (*midi_msg_callback) (int msg, int byte1, int byte2);
extern __attribute__((dllimport)) void (*midi_meta_callback) (int type, const unsigned char *data, int length);
extern __attribute__((dllimport)) void (*midi_sysex_callback) (const unsigned char *data, int length);

extern __attribute__((dllimport)) void (*midi_recorder) (unsigned char data);

extern void lock_midi (struct MIDI *midi);
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/sound.h" 2 3





extern void reserve_voices (int digi_voices, int midi_voices);
extern void set_volume_per_voice (int scale);

extern int install_sound (int digi, int midi, const char *cfg_path);
extern void remove_sound (void);

extern int install_sound_input (int digi, int midi);
extern void remove_sound_input (void);

extern void set_volume (int digi_volume, int midi_volume);
extern void set_hardware_volume (int digi_volume, int midi_volume);

extern void set_mixer_quality (int quality);
extern int get_mixer_quality (void);
extern int get_mixer_frequency (void);
extern int get_mixer_bits (void);
extern int get_mixer_channels (void);
extern int get_mixer_voices (void);
extern int get_mixer_buffer_length (void);
# 51 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/file.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/file.h" 3
extern char * fix_filename_case (char *path);
extern char * fix_filename_slashes (char *path);
extern char * canonicalize_filename (char *dest, const char *filename, int size);
extern char * make_absolute_filename (char *dest, const char *path, const char *filename, int size);
extern char * make_relative_filename (char *dest, const char *path, const char *filename, int size);
extern int is_relative_filename (const char *filename);
extern char * replace_filename (char *dest, const char *path, const char *filename, int size);
extern char * replace_extension (char *dest, const char *filename, const char *ext, int size);
extern char * append_filename (char *dest, const char *path, const char *filename, int size);
extern char * get_filename (const char *path);
extern char * get_extension (const char *filename);
extern void put_backslash (char *filename);
extern int file_exists (const char *filename, int attrib, int *aret);
extern int exists (const char *filename);
extern long file_size (const char *filename);
extern time_t file_time (const char *filename);
extern int delete_file (const char *filename);
extern int for_each_file_ex (const char *name, int in_attrib, int out_attrib, int (*callback) (const char *filename, int attrib, void *param), void *param);
extern int set_allegro_resource_path (int priority, const char *path);
extern int find_allegro_resource (char *dest, const char *resource, const char *ext, const char *datafile, const char *objectname, const char *envvar, const char *subdir, int size);

struct al_ffblk
{
   int attrib;
   time_t time;
   long size;
   char name[512];
   void *ff_data;
};

extern int al_findfirst (const char *pattern, struct al_ffblk *info, int attrib);
extern int al_findnext (struct al_ffblk *info);
extern void al_findclose (struct al_ffblk *info);
# 86 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/file.h" 3
typedef struct PACKFILE_VTABLE PACKFILE_VTABLE;
typedef struct PACKFILE PACKFILE;

struct LZSS_PACK_DATA;
struct LZSS_UNPACK_DATA;


struct _al_normal_packfile_details
{
   int hndl;
   int flags;
   unsigned char *buf_pos;
   int buf_size;
   long todo;
   struct PACKFILE *parent;
   struct LZSS_PACK_DATA *pack_data;
   struct LZSS_UNPACK_DATA *unpack_data;
   char *filename;
   char *passdata;
   char *passpos;
   unsigned char buf[4096];
};


struct PACKFILE
{
   const PACKFILE_VTABLE *vtable;
   void *userdata;
   int is_normal_packfile;






   struct _al_normal_packfile_details normal;
};


struct PACKFILE_VTABLE
{
   int (*pf_fclose) (void *userdata);
   int (*pf_getc) (void *userdata);
   int (*pf_ungetc) (int c, void *userdata);
   long (*pf_fread) (void *p, long n, void *userdata);
   int (*pf_putc) (int c, void *userdata);
   long (*pf_fwrite) (const void *p, long n, void *userdata);
   int (*pf_fseek) (void *userdata, int offset);
   int (*pf_feof) (void *userdata);
   int (*pf_ferror) (void *userdata);
};


extern void packfile_password (const char *password);
extern PACKFILE * pack_fopen (const char *filename, const char *mode);
extern PACKFILE * pack_fopen_vtable (const PACKFILE_VTABLE *vtable, void *userdata);
extern int pack_fclose (PACKFILE *f);
extern int pack_fseek (PACKFILE *f, int offset);
extern PACKFILE * pack_fopen_chunk (PACKFILE *f, int pack);
extern PACKFILE * pack_fclose_chunk (PACKFILE *f);
extern int pack_igetw (PACKFILE *f);
extern long pack_igetl (PACKFILE *f);
extern int pack_iputw (int w, PACKFILE *f);
extern long pack_iputl (long l, PACKFILE *f);
extern int pack_mgetw (PACKFILE *f);
extern long pack_mgetl (PACKFILE *f);
extern int pack_mputw (int w, PACKFILE *f);
extern long pack_mputl (long l, PACKFILE *f);
extern long pack_fread (void *p, long n, PACKFILE *f);
extern long pack_fwrite (const void *p, long n, PACKFILE *f);
extern int pack_ungetc (int c, PACKFILE *f);
extern char * pack_fgets (char *p, int max, PACKFILE *f);
extern int pack_fputs (const char *p, PACKFILE *f);
extern void * pack_get_userdata (PACKFILE *f);






# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/file.inl" 1 3
# 26 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/file.inl" 3
extern __inline__ int pack_getc (PACKFILE *f); extern __inline__ int pack_getc (PACKFILE *f) { ; ; ; return f->vtable->pf_getc(f->userdata); }
# 36 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/file.inl" 3
extern __inline__ int pack_putc (int c, PACKFILE *f); extern __inline__ int pack_putc (int c, PACKFILE *f) { ; ; ; return f->vtable->pf_putc(c, f->userdata); }
# 46 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/file.inl" 3
extern __inline__ int pack_feof (PACKFILE *f); extern __inline__ int pack_feof (PACKFILE *f) { ; ; ; return f->vtable->pf_feof(f->userdata); }
# 56 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/file.inl" 3
extern __inline__ int pack_ferror (PACKFILE *f); extern __inline__ int pack_ferror (PACKFILE *f) { ; ; ; return f->vtable->pf_ferror(f->userdata); }
# 167 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/file.h" 2 3
# 53 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/lzss.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/lzss.h" 3
typedef struct LZSS_PACK_DATA LZSS_PACK_DATA;
typedef struct LZSS_UNPACK_DATA LZSS_UNPACK_DATA;


extern LZSS_PACK_DATA * create_lzss_pack_data (void);
extern void free_lzss_pack_data (LZSS_PACK_DATA *dat);
extern int lzss_write (PACKFILE *file, LZSS_PACK_DATA *dat, int size, unsigned char *buf, int last);

extern LZSS_UNPACK_DATA * create_lzss_unpack_data (void);
extern void free_lzss_unpack_data (LZSS_UNPACK_DATA *dat);
extern int lzss_read (PACKFILE *file, LZSS_UNPACK_DATA *dat, int s, unsigned char *buf);
# 54 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/datafile.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/datafile.h" 3
struct BITMAP;
struct PACKFILE;
struct RGB;
# 52 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/datafile.h" 3
typedef struct DATAFILE_PROPERTY
{
   char *dat;
   int type;
} DATAFILE_PROPERTY;


typedef struct DATAFILE
{
   void *dat;
   int type;
   long size;
   DATAFILE_PROPERTY *prop;
} DATAFILE;


extern DATAFILE * load_datafile (const char *filename);
extern DATAFILE * load_datafile_callback (const char *filename, void (*callback) (DATAFILE *));
extern void unload_datafile (DATAFILE *dat);

extern DATAFILE * load_datafile_object (const char *filename, const char *objectname);
extern void unload_datafile_object (DATAFILE *dat);

extern DATAFILE * find_datafile_object (const DATAFILE *dat, const char *objectname);
extern const char * get_datafile_property (const DATAFILE *dat, int type);
extern void register_datafile_object (int id_, void * (*load) (struct PACKFILE *f, long size), void (*destroy) (void *data));

extern void fixup_datafile (DATAFILE *data);

extern struct BITMAP * load_bitmap (const char *filename, struct RGB *pal);
extern struct BITMAP * load_bmp (const char *filename, struct RGB *pal);
extern struct BITMAP * load_bmp_pf (PACKFILE *f, struct RGB *pal);
extern struct BITMAP * load_lbm (const char *filename, struct RGB *pal);
extern struct BITMAP * load_pcx (const char *filename, struct RGB *pal);
extern struct BITMAP * load_pcx_pf (PACKFILE *f, struct RGB *pal);
extern struct BITMAP * load_tga (const char *filename, struct RGB *pal);
extern struct BITMAP * load_tga_pf (PACKFILE *f, struct RGB *pal);

extern int save_bitmap (const char *filename, struct BITMAP *bmp, const struct RGB *pal);
extern int save_bmp (const char *filename, struct BITMAP *bmp, const struct RGB *pal);
extern int save_bmp_pf (PACKFILE *f, struct BITMAP *bmp, const struct RGB *pal);
extern int save_pcx (const char *filename, struct BITMAP *bmp, const struct RGB *pal);
extern int save_pcx_pf (PACKFILE *f, struct BITMAP *bmp, const struct RGB *pal);
extern int save_tga (const char *filename, struct BITMAP *bmp, const struct RGB *pal);
extern int save_tga_pf (PACKFILE *f, struct BITMAP *bmp, const struct RGB *pal);

extern void register_bitmap_file_type (const char *ext, struct BITMAP * (*load) (const char *filename, struct RGB *pal), int (*save) (const char *filename, struct BITMAP *bmp, const struct RGB *pal));
# 55 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fixed.h" 1 3
# 57 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fmaths.h" 1 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fmaths.h" 3
extern fixed fixsqrt (fixed x);
extern fixed fixhypot (fixed x, fixed y);
extern fixed fixatan (fixed x);
extern fixed fixatan2 (fixed y, fixed x);

extern __attribute__((dllimport)) fixed _cos_tbl[];
extern __attribute__((dllimport)) fixed _tan_tbl[];
extern __attribute__((dllimport)) fixed _acos_tbl[];





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/fmaths.inl" 1 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/fmaths.inl" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/asm.inl" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/asm.inl" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 1 3
# 133 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ fixed fixadd (fixed x, fixed y); extern __inline__ fixed fixadd (fixed x, fixed y) { fixed result; { __asm__ ( "  addl %2, %0 ; " "  jno 0f ; " "  movl %4, %0 ; " "  movl %3, (%0) ; " "  movl $0x7FFFFFFF, %0 ; " "  cmpl $0, %2 ; " "  jg 0f ; " "  negl %0 ; " " 0: " : "=r" (result) : "0" (x), "rm" (y), "i" (34), "m" (allegro_errno) : "%cc", "memory" ); return result; } }
# 171 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ fixed fixsub (fixed x, fixed y); extern __inline__ fixed fixsub (fixed x, fixed y) { fixed result; { __asm__ ( "  subl %2, %0 ; " "  jno 0f ; " "  movl %4, %0 ; " "  movl %3, (%0) ; " "  movl $0x7FFFFFFF, %0 ; " "  cmpl $0, %2 ; " "  jl 0f ; " "  negl %0 ; " " 0: " : "=r" (result) : "0" (x), "rm" (y), "i" (34), "m" (allegro_errno) : "%cc", "memory" ); return result; } }
# 209 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ fixed fixmul (fixed x, fixed y); extern __inline__ fixed fixmul (fixed x, fixed y) { fixed edx __attribute__ ((__unused__)); fixed result; { __asm__ ( "  movl %2, %%eax ; " "  imull %3 ; " "  shrdl $16, %%edx, %%eax ; " "  sarl $15, %%edx ; " "  jz 0f ; " "  cmpl $-1, %%edx ; " "  je 0f ; " "  movl %5, %%eax ; " "  movl %4, (%%eax) ; " "  movl $0x7FFFFFFF, %%eax ; " "  cmpl $0, %2 ; " "  jge 1f ; " "  negl %%eax ; " " 1: " "  cmpl $0, %3 ; " "  jge 0f ; " "  negl %%eax ; " "  .balign 4, 0x90 ; " " 0: " : "=&a" (result), "=&d" (edx) : "mr" (x), "mr" (y), "i" (34), "m" (allegro_errno) : "%cc", "memory" ); return result; } }
# 261 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ fixed fixdiv (fixed x, fixed y); extern __inline__ fixed fixdiv (fixed x, fixed y) { fixed edx __attribute__ ((__unused__)); fixed reg __attribute__ ((__unused__)); fixed result; { __asm__ ( "  testl %%eax, %%eax ; " "  js 3f ; " "  testl %2, %2 ; " "  jns 4f ; " "  negl %2 ; " " 0: " "  movl %%eax, %%edx ; " "  shrl $16, %%edx ; " "  shll $16, %%eax ; " "  cmpl %2, %%edx ; " "  jae 1f ; " "  divl %2 ; " "  testl %%eax, %%eax ; " "  jns 2f ; " " 1: " "  movl %6, %%eax ; " "  movl %5, (%%eax) ; " "  movl $0x7FFFFFFF, %%eax ; " " 2: " "  negl %%eax ; " "  jmp 6f ; " "  .balign 4, 0x90 ; " " 3: " "  negl %%eax ; " "  testl %2, %2 ; " "  jns 0b ; " "  negl %2 ; " " 4: " "  movl %%eax, %%edx ; " "  shrl $16, %%edx ; " "  shll $16, %%eax ; " "  cmpl %2, %%edx ; " "  jae 5f ; " "  divl %2 ; " "  testl %%eax, %%eax ; " "  jns 6f ; " " 5: " "  movl %6, %%eax ; " "  movl %5, (%%eax) ; " "  movl $0x7FFFFFFF, %%eax ; " " 6: " : "=a" (result), "=&d" (edx), "=r" (reg) : "0" (x), "2" (y), "i" (34), "m" (allegro_errno) : "%cc", "memory" ); return result; } }
# 345 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ int fixfloor (fixed x); extern __inline__ int fixfloor (fixed x) { int result; __asm__ ( " sarl $16, %0 " : "=r" (result) : "0" (x) ); return result; }
# 366 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/al386gcc.h" 3
extern __inline__ int fixceil (fixed x); extern __inline__ int fixceil (fixed x) { int result; __asm__ ( " addl $0xFFFF, %0 ;" " jns 0f ;" " jo 1f ;" "0:" " sarl $16, %0 ;" " jmp 2f ;" "1:" " movl %3, %0 ;" " movl %2, (%0) ;" " movl $0x7FFF, %0 ;" "2:" : "=r" (result) : "0" (x), "i" (34), "m" (allegro_errno) : "%cc", "memory" ); return result; }
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/asm.inl" 2 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/fmaths.inl" 2 3
# 32 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/fmaths.inl" 3
extern __inline__ fixed ftofix (double x); extern __inline__ fixed ftofix (double x) { if (x > 32767.0) { *allegro_errno = 34; return 0x7FFFFFFF; } if (x < -32767.0) { *allegro_errno = 34; return -0x7FFFFFFF; } return (fixed)(x * 65536.0 + (x < 0 ? -0.5 : 0.5)); }
# 48 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/fmaths.inl" 3
extern __inline__ double fixtof (fixed x); extern __inline__ double fixtof (fixed x) { return (double)x / 65536.0; }
# 177 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/fmaths.inl" 3
extern __inline__ fixed itofix (int x); extern __inline__ fixed itofix (int x) { return x << 16; }





extern __inline__ int fixtoi (fixed x); extern __inline__ int fixtoi (fixed x) { return fixfloor(x) + ((x & 0x8000) >> 15); }





extern __inline__ fixed fixcos (fixed x); extern __inline__ fixed fixcos (fixed x) { return _cos_tbl[((x + 0x4000) >> 15) & 0x1FF]; }





extern __inline__ fixed fixsin (fixed x); extern __inline__ fixed fixsin (fixed x) { return _cos_tbl[((x - 0x400000 + 0x4000) >> 15) & 0x1FF]; }





extern __inline__ fixed fixtan (fixed x); extern __inline__ fixed fixtan (fixed x) { return _tan_tbl[((x + 0x4000) >> 15) & 0xFF]; }





extern __inline__ fixed fixacos (fixed x); extern __inline__ fixed fixacos (fixed x) { if ((x < -65536) || (x > 65536)) { *allegro_errno = 33; return 0; } return _acos_tbl[(x+65536+127)>>8]; }
# 218 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/fmaths.inl" 3
extern __inline__ fixed fixasin (fixed x); extern __inline__ fixed fixasin (fixed x) { if ((x < -65536) || (x > 65536)) { *allegro_errno = 33; return 0; } return 0x00400000 - _acos_tbl[(x+65536+127)>>8]; }
# 43 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fmaths.h" 2 3
# 58 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/matrix.h" 1 3
# 24 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/matrix.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/fmaths.h" 1 3
# 25 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/matrix.h" 2 3





typedef struct MATRIX
{
   fixed v[3][3];
   fixed t[3];
} MATRIX;


typedef struct MATRIX_f
{
   float v[3][3];
   float t[3];
} MATRIX_f;


extern __attribute__((dllimport)) MATRIX identity_matrix;
extern __attribute__((dllimport)) MATRIX_f identity_matrix_f;

extern void get_translation_matrix (MATRIX *m, fixed x, fixed y, fixed z);
extern void get_translation_matrix_f (MATRIX_f *m, float x, float y, float z);

extern void get_scaling_matrix (MATRIX *m, fixed x, fixed y, fixed z);
extern void get_scaling_matrix_f (MATRIX_f *m, float x, float y, float z);

extern void get_x_rotate_matrix (MATRIX *m, fixed r);
extern void get_x_rotate_matrix_f (MATRIX_f *m, float r);

extern void get_y_rotate_matrix (MATRIX *m, fixed r);
extern void get_y_rotate_matrix_f (MATRIX_f *m, float r);

extern void get_z_rotate_matrix (MATRIX *m, fixed r);
extern void get_z_rotate_matrix_f (MATRIX_f *m, float r);

extern void get_rotation_matrix (MATRIX *m, fixed x, fixed y, fixed z);
extern void get_rotation_matrix_f (MATRIX_f *m, float x, float y, float z);

extern void get_align_matrix (MATRIX *m, fixed xfront, fixed yfront, fixed zfront, fixed xup, fixed yup, fixed zup);
extern void get_align_matrix_f (MATRIX_f *m, float xfront, float yfront, float zfront, float xup, float yup, float zup);

extern void get_vector_rotation_matrix (MATRIX *m, fixed x, fixed y, fixed z, fixed a);
extern void get_vector_rotation_matrix_f (MATRIX_f *m, float x, float y, float z, float a);

extern void get_transformation_matrix (MATRIX *m, fixed scale, fixed xrot, fixed yrot, fixed zrot, fixed x, fixed y, fixed z);
extern void get_transformation_matrix_f (MATRIX_f *m, float scale, float xrot, float yrot, float zrot, float x, float y, float z);

extern void get_camera_matrix (MATRIX *m, fixed x, fixed y, fixed z, fixed xfront, fixed yfront, fixed zfront, fixed xup, fixed yup, fixed zup, fixed fov, fixed aspect);
extern void get_camera_matrix_f (MATRIX_f *m, float x, float y, float z, float xfront, float yfront, float zfront, float xup, float yup, float zup, float fov, float aspect);

extern void qtranslate_matrix (MATRIX *m, fixed x, fixed y, fixed z);
extern void qtranslate_matrix_f (MATRIX_f *m, float x, float y, float z);

extern void qscale_matrix (MATRIX *m, fixed scale);
extern void qscale_matrix_f (MATRIX_f *m, float scale);

extern void matrix_mul (const MATRIX *m1, const MATRIX *m2, MATRIX *out);
extern void matrix_mul_f (const MATRIX_f *m1, const MATRIX_f *m2, MATRIX_f *out);

extern void apply_matrix_f (const MATRIX_f *m, float x, float y, float z, float *xout, float *yout, float *zout);





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/matrix.inl" 1 3
# 32 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/matrix.inl" 3
extern __inline__ void apply_matrix (MATRIX *m, fixed x, fixed y, fixed z, fixed *xout, fixed *yout, fixed *zout); extern __inline__ void apply_matrix (MATRIX *m, fixed x, fixed y, fixed z, fixed *xout, fixed *yout, fixed *zout) { *xout = (fixmul(x, m->v[0][0]) + fixmul(y, m->v[0][1]) + fixmul(z, m->v[0][2]) + m->t[0]); *yout = (fixmul(x, m->v[1][0]) + fixmul(y, m->v[1][1]) + fixmul(z, m->v[1][2]) + m->t[1]); *zout = (fixmul(x, m->v[2][0]) + fixmul(y, m->v[2][1]) + fixmul(z, m->v[2][2]) + m->t[2]); }
# 93 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/matrix.h" 2 3
# 59 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/quat.h" 1 3
# 28 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/quat.h" 3
typedef struct QUAT
{
     float w, x, y, z;
} QUAT;


extern __attribute__((dllimport)) QUAT identity_quat;

extern void quat_mul (const QUAT *p, const QUAT *q, QUAT *out);
extern void get_x_rotate_quat (QUAT *q, float r);
extern void get_y_rotate_quat (QUAT *q, float r);
extern void get_z_rotate_quat (QUAT *q, float r);
extern void get_rotation_quat (QUAT *q, float x, float y, float z);
extern void get_vector_rotation_quat (QUAT *q, float x, float y, float z, float a);

extern void apply_quat (const QUAT *q, float x, float y, float z, float *xout, float *yout, float *zout);
extern void quat_slerp (const QUAT *from, const QUAT *to, float t, QUAT *out, int how);
# 60 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3d.h" 1 3
# 62 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3dmaths.h" 1 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3dmaths.h" 3
struct QUAT;
struct MATRIX_f;

extern fixed vector_length (fixed x, fixed y, fixed z);
extern float vector_length_f (float x, float y, float z);

extern void normalize_vector (fixed *x, fixed *y, fixed *z);
extern void normalize_vector_f (float *x, float *y, float *z);

extern void cross_product (fixed x1, fixed y_1, fixed z1, fixed x2, fixed y2, fixed z2, fixed *xout, fixed *yout, fixed *zout);
extern void cross_product_f (float x1, float y_1, float z1, float x2, float y2, float z2, float *xout, float *yout, float *zout);

extern __attribute__((dllimport)) fixed _persp_xscale;
extern __attribute__((dllimport)) fixed _persp_yscale;
extern __attribute__((dllimport)) fixed _persp_xoffset;
extern __attribute__((dllimport)) fixed _persp_yoffset;

extern __attribute__((dllimport)) float _persp_xscale_f;
extern __attribute__((dllimport)) float _persp_yscale_f;
extern __attribute__((dllimport)) float _persp_xoffset_f;
extern __attribute__((dllimport)) float _persp_yoffset_f;

extern void set_projection_viewport (int x, int y, int w, int h);

extern void quat_to_matrix (const struct QUAT *q, struct MATRIX_f *m);
extern void matrix_to_quat (const struct MATRIX_f *m, struct QUAT *q);





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/3dmaths.inl" 1 3
# 27 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/inline/3dmaths.inl" 3
extern __inline__ fixed dot_product (fixed x1, fixed y_1, fixed z1, fixed x2, fixed y2, fixed z2); extern __inline__ fixed dot_product (fixed x1, fixed y_1, fixed z1, fixed x2, fixed y2, fixed z2) { return fixmul(x1, x2) + fixmul(y_1, y2) + fixmul(z1, z2); }





extern __inline__ float dot_product_f (float x1, float y_1, float z1, float x2, float y2, float z2); extern __inline__ float dot_product_f (float x1, float y_1, float z1, float x2, float y2, float z2) { return (x1 * x2) + (y_1 * y2) + (z1 * z2); }





extern __inline__ void persp_project (fixed x, fixed y, fixed z, fixed *xout, fixed *yout); extern __inline__ void persp_project (fixed x, fixed y, fixed z, fixed *xout, fixed *yout) { *xout = fixmul(fixdiv(x, z), _persp_xscale) + _persp_xoffset; *yout = fixmul(fixdiv(y, z), _persp_yscale) + _persp_yoffset; }






extern __inline__ void persp_project_f (float x, float y, float z, float *xout, float *yout); extern __inline__ void persp_project_f (float x, float y, float z, float *xout, float *yout) { float z1 = 1.0f / z; *xout = ((x * z1) * _persp_xscale_f) + _persp_xoffset_f; *yout = ((y * z1) * _persp_yscale_f) + _persp_yoffset_f; }
# 61 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/3dmaths.h" 2 3
# 63 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3



# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/alcompat.h" 1 3
# 31 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/alcompat.h" 3
         static __attribute__((unused)) __inline__ void clear(BITMAP *bmp)
         {
            clear_bitmap(bmp);
         }
# 57 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/alcompat.h" 3
      static __attribute__((unused)) __inline__ fixed fadd(fixed x, fixed y) { return fixadd(x, y); }
      static __attribute__((unused)) __inline__ fixed fsub(fixed x, fixed y) { return fixsub(x, y); }
      static __attribute__((unused)) __inline__ fixed fmul(fixed x, fixed y) { return fixmul(x, y); }
      static __attribute__((unused)) __inline__ fixed fdiv(fixed x, fixed y) { return fixdiv(x, y); }
      static __attribute__((unused)) __inline__ int fceil(fixed x) { return fixceil(x); }
      static __attribute__((unused)) __inline__ int ffloor(fixed x) { return fixfloor(x); }
      static __attribute__((unused)) __inline__ fixed fcos(fixed x) { return fixcos(x); }
      static __attribute__((unused)) __inline__ fixed fsin(fixed x) { return fixsin(x); }
      static __attribute__((unused)) __inline__ fixed ftan(fixed x) { return fixtan(x); }
      static __attribute__((unused)) __inline__ fixed facos(fixed x) { return fixacos(x); }
      static __attribute__((unused)) __inline__ fixed fasin(fixed x) { return fixasin(x); }
      static __attribute__((unused)) __inline__ fixed fatan(fixed x) { return fixatan(x); }
      static __attribute__((unused)) __inline__ fixed fatan2(fixed y, fixed x) { return fixatan2(y, x); }
      static __attribute__((unused)) __inline__ fixed fsqrt(fixed x) { return fixsqrt(x); }
      static __attribute__((unused)) __inline__ fixed fhypot(fixed x, fixed y) { return fixhypot(x, y); }
# 127 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/alcompat.h" 3
extern __attribute__ ((deprecated)) int initialise_joystick (void);
# 155 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/alcompat.h" 3
extern __inline__ __attribute__ ((deprecated)) int file_select (const char *message, char *path, const char *ext); extern __inline__ __attribute__ ((deprecated)) int file_select (const char *message, char *path, const char *ext) { return file_select_ex(message, path, ext, 1024, -1, -1); }






extern __attribute__ ((deprecated)) int for_each_file (const char *name, int attrib, void (*callback) (const char *filename, int attrib, int param), int param);



extern __attribute__((dllimport)) int _textmode;
extern __attribute__ ((deprecated)) int text_mode (int mode);

extern __inline__ __attribute__ ((deprecated)) void textout (struct BITMAP *bmp, const FONT *f, const char *str, int x, int y, int color); extern __inline__ __attribute__ ((deprecated)) void textout (struct BITMAP *bmp, const FONT *f, const char *str, int x, int y, int color) { textout_ex(bmp, f, str, x, y, color, _textmode); }




extern __inline__ __attribute__ ((deprecated)) void textout_centre (struct BITMAP *bmp, const FONT *f, const char *str, int x, int y, int color); extern __inline__ __attribute__ ((deprecated)) void textout_centre (struct BITMAP *bmp, const FONT *f, const char *str, int x, int y, int color) { textout_centre_ex(bmp, f, str, x, y, color, _textmode); }




extern __inline__ __attribute__ ((deprecated)) void textout_right (struct BITMAP *bmp, const FONT *f, const char *str, int x, int y, int color); extern __inline__ __attribute__ ((deprecated)) void textout_right (struct BITMAP *bmp, const FONT *f, const char *str, int x, int y, int color) { textout_right_ex(bmp, f, str, x, y, color, _textmode); }




extern __inline__ __attribute__ ((deprecated)) void textout_justify (struct BITMAP *bmp, const FONT *f, const char *str, int x1, int x2, int y, int diff, int color); extern __inline__ __attribute__ ((deprecated)) void textout_justify (struct BITMAP *bmp, const FONT *f, const char *str, int x1, int x2, int y, int diff, int color) { textout_justify_ex(bmp, f, str, x1, x2, y, diff, color, _textmode); }




extern __attribute__ ((deprecated)) void textprintf (struct BITMAP *bmp, const FONT *f, int x, int y, int color, const char *format, ...) __attribute__ ((format (printf, 6, 7)));
extern __attribute__ ((deprecated)) void textprintf_centre (struct BITMAP *bmp, const FONT *f, int x, int y, int color, const char *format, ...) __attribute__ ((format (printf, 6, 7)));
extern __attribute__ ((deprecated)) void textprintf_right (struct BITMAP *bmp, const FONT *f, int x, int y, int color, const char *format, ...) __attribute__ ((format (printf, 6, 7)));
extern __attribute__ ((deprecated)) void textprintf_justify (struct BITMAP *bmp, const FONT *f, int x1, int x2, int y, int diff, int color, const char *format, ...) __attribute__ ((format (printf, 8, 9)));

extern __inline__ __attribute__ ((deprecated)) void draw_character (BITMAP *bmp, BITMAP *sprite, int x, int y, int color); extern __inline__ __attribute__ ((deprecated)) void draw_character (BITMAP *bmp, BITMAP *sprite, int x, int y, int color) { draw_character_ex(bmp, sprite, x, y, color, _textmode); }




extern __inline__ __attribute__ ((deprecated)) int gui_textout (struct BITMAP *bmp, const char *s, int x, int y, int color, int centre); extern __inline__ __attribute__ ((deprecated)) int gui_textout (struct BITMAP *bmp, const char *s, int x, int y, int color, int centre) { return gui_textout_ex(bmp, s, x, y, color, _textmode, centre); }






extern __inline__ __attribute__ ((deprecated)) int set_window_close_button (int enable); extern __inline__ __attribute__ ((deprecated)) int set_window_close_button (int enable) { (void)enable; return 0; }





extern __inline__ __attribute__ ((deprecated)) void set_window_close_hook (void (*proc)(void)); extern __inline__ __attribute__ ((deprecated)) void set_window_close_hook (void (*proc)(void)) { set_close_button_callback(proc); }






extern __attribute__ ((deprecated)) void set_clip (BITMAP *bitmap, int x1, int y_1, int x2, int y2);



extern __inline__ __attribute__ ((deprecated)) void yield_timeslice (void); extern __inline__ __attribute__ ((deprecated)) void yield_timeslice (void) { ; if (system_driver->yield_timeslice) system_driver->yield_timeslice(); }
# 233 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/alcompat.h" 3
extern __attribute__((dllimport)) void (*retrace_proc) (void);





   extern __attribute__ ((deprecated)) int timer_can_simulate_retrace (void);
   extern __attribute__ ((deprecated)) void timer_simulate_retrace (int enable);

extern __attribute__ ((deprecated)) int timer_is_using_retrace (void);
# 67 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 77 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/alwin.h" 1 3
# 32 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/alwin.h" 3
extern int _WinMain (void *_main, void *hInst, void *hPrev, char *Cmd, int nShow);
# 68 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/alwin.h" 3
extern __attribute__((dllimport)) SYSTEM_DRIVER system_directx;
# 105 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/alwin.h" 3
extern __attribute__((dllimport)) GFX_DRIVER gfx_directx_accel;
extern __attribute__((dllimport)) GFX_DRIVER gfx_directx_safe;
extern __attribute__((dllimport)) GFX_DRIVER gfx_directx_soft;
extern __attribute__((dllimport)) GFX_DRIVER gfx_directx_win;
extern __attribute__((dllimport)) GFX_DRIVER gfx_directx_ovl;
extern __attribute__((dllimport)) GFX_DRIVER gfx_gdi;
# 140 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro/platform/alwin.h" 3
extern __attribute__((dllimport)) JOYSTICK_DRIVER joystick_directx;
extern __attribute__((dllimport)) JOYSTICK_DRIVER joystick_win32;
# 78 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/allegro.h" 2 3
# 3 "test1.c" 2
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winalleg.h" 1 3
# 54 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winalleg.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 1 3
# 16 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 3
       
# 17 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 3
# 47 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/stdarg.h" 1 3
# 48 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windef.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windef.h" 3
# 222 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windef.h" 3
typedef unsigned long DWORD;
typedef int WINBOOL,*PWINBOOL,*LPWINBOOL;



typedef WINBOOL BOOL;



typedef unsigned char BYTE;

typedef BOOL *PBOOL,*LPBOOL;
typedef unsigned short WORD;
typedef float FLOAT;
typedef FLOAT *PFLOAT;
typedef BYTE *PBYTE,*LPBYTE;
typedef int *PINT,*LPINT;
typedef WORD *PWORD,*LPWORD;
typedef long *LPLONG;
typedef DWORD *PDWORD,*LPDWORD;
typedef const void *PCVOID,*LPCVOID;
typedef int INT;
typedef unsigned int UINT,*PUINT,*LPUINT;

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
# 34 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winerror.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winerror.h" 3
# 35 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 2 3
# 49 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef char CCHAR, *PCCHAR;
typedef unsigned char UCHAR,*PUCHAR;
typedef unsigned short USHORT,*PUSHORT;
typedef unsigned long ULONG,*PULONG;
typedef char *PSZ;

typedef void *PVOID,*LPVOID;





typedef void* PVOID64;
# 77 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR,*LPWCH,*PWCH,*NWPSTR,*LPWSTR,*PWSTR;
typedef const WCHAR *LPCWCH,*PCWCH,*LPCWSTR,*PCWSTR;
typedef CHAR *PCHAR,*LPCH,*PCH,*NPSTR,*LPSTR,*PSTR;
typedef const CHAR *LPCCH,*PCSTR,*LPCSTR;
# 92 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef CHAR TCHAR;
typedef CHAR _TCHAR;


typedef TCHAR TBYTE,*PTCH,*PTBYTE;
typedef TCHAR *LPTCH,*PTSTR,*LPTSTR,*LP,*PTCHAR;
typedef const TCHAR *LPCTSTR;
# 117 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef SHORT *PSHORT;
typedef LONG *PLONG;




typedef PVOID HANDLE;


typedef HANDLE *PHANDLE,*LPHANDLE;
typedef DWORD LCID;
typedef PDWORD PLCID;
typedef WORD LANGID;
# 139 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef long long LONGLONG;
typedef unsigned long long DWORDLONG;



typedef LONGLONG *PLONGLONG;
typedef DWORDLONG *PDWORDLONG;
typedef DWORDLONG ULONGLONG,*PULONGLONG;
typedef LONGLONG USN;
# 157 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef BYTE BOOLEAN,*PBOOLEAN;

typedef BYTE FCHAR;
typedef WORD FSHORT;
typedef DWORD FLONG;


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/basetsd.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/basetsd.h" 3
# 50 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/basetsd.h" 3
typedef int LONG32, *PLONG32;

typedef int INT32, *PINT32;

typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
typedef unsigned int UINT32, *PUINT32;
# 97 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/basetsd.h" 3
typedef int INT_PTR, *PINT_PTR;
typedef unsigned int UINT_PTR, *PUINT_PTR;
typedef long LONG_PTR, *PLONG_PTR;
typedef unsigned long ULONG_PTR, *PULONG_PTR;
typedef unsigned short UHALF_PTR, *PUHALF_PTR;
typedef short HALF_PTR, *PHALF_PTR;
typedef unsigned long HANDLE_PTR;


typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef long long LONG64, *PLONG64;
typedef long long INT64, *PINT64;
typedef unsigned long long ULONG64, *PULONG64;
typedef unsigned long long DWORD64, *PDWORD64;
typedef unsigned long long UINT64, *PUINT64;
# 165 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 2 3
# 1280 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef DWORD ACCESS_MASK, *PACCESS_MASK;







typedef struct _GUID {
 unsigned long Data1;
 unsigned short Data2;
 unsigned short Data3;
 unsigned char Data4[8];
} GUID, *REFGUID, *LPGUID;


typedef struct _GENERIC_MAPPING {
 ACCESS_MASK GenericRead;
 ACCESS_MASK GenericWrite;
 ACCESS_MASK GenericExecute;
 ACCESS_MASK GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING;
typedef struct _ACE_HEADER {
 BYTE AceType;
 BYTE AceFlags;
 WORD AceSize;
} ACE_HEADER, *PACE_HEADER;
typedef struct _ACCESS_ALLOWED_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} ACCESS_ALLOWED_ACE, *PACCESS_ALLOWED_ACE;
typedef struct _ACCESS_DENIED_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} ACCESS_DENIED_ACE, *PACCESS_DENIED_ACE;
typedef struct _SYSTEM_AUDIT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;
typedef struct _SYSTEM_ALARM_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} SYSTEM_ALARM_ACE,*PSYSTEM_ALARM_ACE;
typedef struct _ACCESS_ALLOWED_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} ACCESS_ALLOWED_OBJECT_ACE,*PACCESS_ALLOWED_OBJECT_ACE;
typedef struct _ACCESS_DENIED_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} ACCESS_DENIED_OBJECT_ACE,*PACCESS_DENIED_OBJECT_ACE;
typedef struct _SYSTEM_AUDIT_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} SYSTEM_AUDIT_OBJECT_ACE,*PSYSTEM_AUDIT_OBJECT_ACE;
typedef struct _SYSTEM_ALARM_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} SYSTEM_ALARM_OBJECT_ACE,*PSYSTEM_ALARM_OBJECT_ACE;
typedef struct _ACL {
 BYTE AclRevision;
 BYTE Sbz1;
 WORD AclSize;
 WORD AceCount;
 WORD Sbz2;
} ACL,*PACL;
typedef struct _ACL_REVISION_INFORMATION {
 DWORD AclRevision;
} ACL_REVISION_INFORMATION;
typedef struct _ACL_SIZE_INFORMATION {
 DWORD AceCount;
 DWORD AclBytesInUse;
 DWORD AclBytesFree;
} ACL_SIZE_INFORMATION;
# 1389 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef struct _FLOATING_SAVE_AREA {
 DWORD ControlWord;
 DWORD StatusWord;
 DWORD TagWord;
 DWORD ErrorOffset;
 DWORD ErrorSelector;
 DWORD DataOffset;
 DWORD DataSelector;
 BYTE RegisterArea[80];
 DWORD Cr0NpxState;
} FLOATING_SAVE_AREA;
typedef struct _CONTEXT {
 DWORD ContextFlags;
 DWORD Dr0;
 DWORD Dr1;
 DWORD Dr2;
 DWORD Dr3;
 DWORD Dr6;
 DWORD Dr7;
 FLOATING_SAVE_AREA FloatSave;
 DWORD SegGs;
 DWORD SegFs;
 DWORD SegEs;
 DWORD SegDs;
 DWORD Edi;
 DWORD Esi;
 DWORD Ebx;
 DWORD Edx;
 DWORD Ecx;
 DWORD Eax;
 DWORD Ebp;
 DWORD Eip;
 DWORD SegCs;
 DWORD EFlags;
 DWORD Esp;
 DWORD SegSs;
 BYTE ExtendedRegisters[512];
} CONTEXT;
# 1908 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef CONTEXT *PCONTEXT,*LPCONTEXT;
typedef struct _EXCEPTION_RECORD {
 DWORD ExceptionCode;
 DWORD ExceptionFlags;
 struct _EXCEPTION_RECORD *ExceptionRecord;
 PVOID ExceptionAddress;
 DWORD NumberParameters;
 DWORD ExceptionInformation[15];
} EXCEPTION_RECORD,*PEXCEPTION_RECORD,*LPEXCEPTION_RECORD;
typedef struct _EXCEPTION_POINTERS {
 PEXCEPTION_RECORD ExceptionRecord;
 PCONTEXT ContextRecord;
} EXCEPTION_POINTERS,*PEXCEPTION_POINTERS,*LPEXCEPTION_POINTERS;
typedef union _LARGE_INTEGER {
  struct {
    DWORD LowPart;
    LONG HighPart;
  } u;

  __extension__ struct {
    DWORD LowPart;
    LONG HighPart;
  };

  LONGLONG QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;
typedef union _ULARGE_INTEGER {
  struct {
    DWORD LowPart;
    DWORD HighPart;
  } u;

  __extension__ struct {
    DWORD LowPart;
    DWORD HighPart;
  };

  ULONGLONG QuadPart;
} ULARGE_INTEGER, *PULARGE_INTEGER;
typedef LARGE_INTEGER LUID,*PLUID;
#pragma pack(push,4)
typedef struct _LUID_AND_ATTRIBUTES {
 LUID Luid;
 DWORD Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES;
#pragma pack(pop)
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
typedef struct _PRIVILEGE_SET {
 DWORD PrivilegeCount;
 DWORD Control;
 LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET,*PPRIVILEGE_SET;
typedef struct _SECURITY_ATTRIBUTES {
 DWORD nLength;
 LPVOID lpSecurityDescriptor;
 BOOL bInheritHandle;
} SECURITY_ATTRIBUTES,*PSECURITY_ATTRIBUTES,*LPSECURITY_ATTRIBUTES;
typedef enum _SECURITY_IMPERSONATION_LEVEL {
 SecurityAnonymous,
 SecurityIdentification,
 SecurityImpersonation,
 SecurityDelegation
} SECURITY_IMPERSONATION_LEVEL,*PSECURITY_IMPERSONATION_LEVEL;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,*PSECURITY_CONTEXT_TRACKING_MODE;
typedef struct _SECURITY_QUALITY_OF_SERVICE {
 DWORD Length;
 SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
 SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
 BOOLEAN EffectiveOnly;
} SECURITY_QUALITY_OF_SERVICE,*PSECURITY_QUALITY_OF_SERVICE;
typedef PVOID PACCESS_TOKEN;
typedef struct _SE_IMPERSONATION_STATE {
 PACCESS_TOKEN Token;
 BOOLEAN CopyOnOpen;
 BOOLEAN EffectiveOnly;
 SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE,*PSE_IMPERSONATION_STATE;
typedef struct _SID_IDENTIFIER_AUTHORITY {
 BYTE Value[6];
} SID_IDENTIFIER_AUTHORITY,*PSID_IDENTIFIER_AUTHORITY,*LPSID_IDENTIFIER_AUTHORITY;
typedef PVOID PSID;
typedef struct _SID {
   BYTE Revision;
   BYTE SubAuthorityCount;
   SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
   DWORD SubAuthority[1];
} SID, *PISID;
typedef struct _SID_AND_ATTRIBUTES {
 PSID Sid;
 DWORD Attributes;
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES;
typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[1];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;
typedef struct _TOKEN_SOURCE {
 CHAR SourceName[8];
 LUID SourceIdentifier;
} TOKEN_SOURCE,*PTOKEN_SOURCE;
typedef struct _TOKEN_CONTROL {
 LUID TokenId;
 LUID AuthenticationId;
 LUID ModifiedId;
 TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL,*PTOKEN_CONTROL;
typedef struct _TOKEN_DEFAULT_DACL {
 PACL DefaultDacl;
} TOKEN_DEFAULT_DACL,*PTOKEN_DEFAULT_DACL;
typedef struct _TOKEN_GROUPS {
 DWORD GroupCount;
 SID_AND_ATTRIBUTES Groups[1];
} TOKEN_GROUPS,*PTOKEN_GROUPS,*LPTOKEN_GROUPS;
typedef struct _TOKEN_OWNER {
 PSID Owner;
} TOKEN_OWNER,*PTOKEN_OWNER;
typedef struct _TOKEN_PRIMARY_GROUP {
 PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP,*PTOKEN_PRIMARY_GROUP;
typedef struct _TOKEN_PRIVILEGES {
 DWORD PrivilegeCount;
 LUID_AND_ATTRIBUTES Privileges[1];
} TOKEN_PRIVILEGES,*PTOKEN_PRIVILEGES,*LPTOKEN_PRIVILEGES;
typedef enum tagTOKEN_TYPE { TokenPrimary=1,TokenImpersonation }TOKEN_TYPE, *PTOKEN_TYPE;
typedef struct _TOKEN_STATISTICS {
 LUID TokenId;
 LUID AuthenticationId;
 LARGE_INTEGER ExpirationTime;
 TOKEN_TYPE TokenType;
 SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
 DWORD DynamicCharged;
 DWORD DynamicAvailable;
 DWORD GroupCount;
 DWORD PrivilegeCount;
 LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;
typedef struct _TOKEN_USER {
 SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;
typedef DWORD SECURITY_INFORMATION,*PSECURITY_INFORMATION;
typedef WORD SECURITY_DESCRIPTOR_CONTROL,*PSECURITY_DESCRIPTOR_CONTROL;
typedef struct _SECURITY_DESCRIPTOR {
 BYTE Revision;
 BYTE Sbz1;
 SECURITY_DESCRIPTOR_CONTROL Control;
 PSID Owner;
 PSID Group;
 PACL Sacl;
 PACL Dacl;
} SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;
typedef enum _TOKEN_INFORMATION_CLASS {
 TokenUser=1,TokenGroups,TokenPrivileges,TokenOwner,
 TokenPrimaryGroup,TokenDefaultDacl,TokenSource,TokenType,
 TokenImpersonationLevel,TokenStatistics,TokenRestrictedSids,
 TokenSessionId
} TOKEN_INFORMATION_CLASS;
typedef enum _SID_NAME_USE {
 SidTypeUser=1,SidTypeGroup,SidTypeDomain,SidTypeAlias,SidTypeWellKnownGroup,
 SidTypeDeletedAccount,SidTypeInvalid,SidTypeUnknown
} SID_NAME_USE,*PSID_NAME_USE;
typedef struct _QUOTA_LIMITS {
 SIZE_T PagedPoolLimit;
 SIZE_T NonPagedPoolLimit;
 SIZE_T MinimumWorkingSetSize;
 SIZE_T MaximumWorkingSetSize;
 SIZE_T PagefileLimit;
 LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS,*PQUOTA_LIMITS;
typedef struct _IO_COUNTERS {
 ULONGLONG ReadOperationCount;
 ULONGLONG WriteOperationCount;
 ULONGLONG OtherOperationCount;
 ULONGLONG ReadTransferCount;
 ULONGLONG WriteTransferCount;
 ULONGLONG OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS;
typedef struct _FILE_NOTIFY_INFORMATION {
 DWORD NextEntryOffset;
 DWORD Action;
 DWORD FileNameLength;
 WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION,*PFILE_NOTIFY_INFORMATION;
typedef struct _TAPE_ERASE {
 DWORD Type;
 BOOLEAN Immediate;
} TAPE_ERASE,*PTAPE_ERASE;
typedef struct _TAPE_GET_DRIVE_PARAMETERS {
 BOOLEAN ECC;
 BOOLEAN Compression;
 BOOLEAN DataPadding;
 BOOLEAN ReportSetmarks;
  DWORD DefaultBlockSize;
  DWORD MaximumBlockSize;
  DWORD MinimumBlockSize;
  DWORD MaximumPartitionCount;
  DWORD FeaturesLow;
  DWORD FeaturesHigh;
  DWORD EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS,*PTAPE_GET_DRIVE_PARAMETERS;
typedef struct _TAPE_GET_MEDIA_PARAMETERS {
 LARGE_INTEGER Capacity;
 LARGE_INTEGER Remaining;
 DWORD BlockSize;
 DWORD PartitionCount;
 BOOLEAN WriteProtected;
} TAPE_GET_MEDIA_PARAMETERS,*PTAPE_GET_MEDIA_PARAMETERS;
typedef struct _TAPE_GET_POSITION {
 ULONG Type;
 ULONG Partition;
 ULONG OffsetLow;
 ULONG OffsetHigh;
} TAPE_GET_POSITION,*PTAPE_GET_POSITION;
typedef struct _TAPE_PREPARE {
 DWORD Operation;
 BOOLEAN Immediate;
} TAPE_PREPARE,*PTAPE_PREPARE;
typedef struct _TAPE_SET_DRIVE_PARAMETERS {
 BOOLEAN ECC;
 BOOLEAN Compression;
 BOOLEAN DataPadding;
 BOOLEAN ReportSetmarks;
 ULONG EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS,*PTAPE_SET_DRIVE_PARAMETERS;
typedef struct _TAPE_SET_MEDIA_PARAMETERS {
 ULONG BlockSize;
} TAPE_SET_MEDIA_PARAMETERS,*PTAPE_SET_MEDIA_PARAMETERS;
typedef struct _TAPE_SET_POSITION {
 DWORD Method;
 DWORD Partition;
 LARGE_INTEGER Offset;
 BOOLEAN Immediate;
} TAPE_SET_POSITION,*PTAPE_SET_POSITION;
typedef struct _TAPE_WRITE_MARKS {
 DWORD Type;
 DWORD Count;
 BOOLEAN Immediate;
} TAPE_WRITE_MARKS,*PTAPE_WRITE_MARKS;
typedef struct _TAPE_CREATE_PARTITION {
 DWORD Method;
 DWORD Count;
 DWORD Size;
} TAPE_CREATE_PARTITION,*PTAPE_CREATE_PARTITION;
typedef struct _MEMORY_BASIC_INFORMATION {
 PVOID BaseAddress;
 PVOID AllocationBase;
 DWORD AllocationProtect;
 DWORD RegionSize;
 DWORD State;
 DWORD Protect;
 DWORD Type;
} MEMORY_BASIC_INFORMATION,*PMEMORY_BASIC_INFORMATION;
typedef struct _MESSAGE_RESOURCE_ENTRY {
 WORD Length;
 WORD Flags;
 BYTE Text[1];
} MESSAGE_RESOURCE_ENTRY,*PMESSAGE_RESOURCE_ENTRY;
typedef struct _MESSAGE_RESOURCE_BLOCK {
 DWORD LowId;
 DWORD HighId;
 DWORD OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK,*PMESSAGE_RESOURCE_BLOCK;
typedef struct _MESSAGE_RESOURCE_DATA {
 DWORD NumberOfBlocks;
 MESSAGE_RESOURCE_BLOCK Blocks[1];
} MESSAGE_RESOURCE_DATA,*PMESSAGE_RESOURCE_DATA;
typedef struct _LIST_ENTRY {
 struct _LIST_ENTRY *Flink;
 struct _LIST_ENTRY *Blink;
} LIST_ENTRY,*PLIST_ENTRY;
typedef struct _SINGLE_LIST_ENTRY {
 struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY,*PSINGLE_LIST_ENTRY;






typedef union _SLIST_HEADER {
 ULONGLONG Alignment;
 __extension__ struct {
  SINGLE_LIST_ENTRY Next;
  WORD Depth;
  WORD Sequence;
 } ;
} SLIST_HEADER,*PSLIST_HEADER;


typedef struct _RTL_CRITICAL_SECTION_DEBUG {
 WORD Type;
 WORD CreatorBackTraceIndex;
 struct _RTL_CRITICAL_SECTION *CriticalSection;
 LIST_ENTRY ProcessLocksList;
 DWORD EntryCount;
 DWORD ContentionCount;
 DWORD Spare[2];
} RTL_CRITICAL_SECTION_DEBUG,*PRTL_CRITICAL_SECTION_DEBUG;
typedef struct _RTL_CRITICAL_SECTION {
 PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
 LONG LockCount;
 LONG RecursionCount;
 HANDLE OwningThread;
 HANDLE LockSemaphore;
 DWORD Reserved;
} RTL_CRITICAL_SECTION,*PRTL_CRITICAL_SECTION;
typedef struct _EVENTLOGRECORD {
 DWORD Length;
 DWORD Reserved;
 DWORD RecordNumber;
 DWORD TimeGenerated;
 DWORD TimeWritten;
 DWORD EventID;
 WORD EventType;
 WORD NumStrings;
 WORD EventCategory;
 WORD ReservedFlags;
 DWORD ClosingRecordNumber;
 DWORD StringOffset;
 DWORD UserSidLength;
 DWORD UserSidOffset;
 DWORD DataLength;
 DWORD DataOffset;
} EVENTLOGRECORD,*PEVENTLOGRECORD;
typedef struct _OSVERSIONINFOA {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 CHAR szCSDVersion[128];
} OSVERSIONINFOA,*POSVERSIONINFOA,*LPOSVERSIONINFOA;
typedef struct _OSVERSIONINFOW {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 WCHAR szCSDVersion[128];
} OSVERSIONINFOW,*POSVERSIONINFOW,*LPOSVERSIONINFOW;
typedef struct _OSVERSIONINFOEXA {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 CHAR szCSDVersion[128];
 WORD wServicePackMajor;
 WORD wServicePackMinor;
 WORD wSuiteMask;
 BYTE wProductType;
 BYTE wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 WCHAR szCSDVersion[128];
 WORD wServicePackMajor;
 WORD wServicePackMinor;
 WORD wSuiteMask;
 BYTE wProductType;
 BYTE wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW;
#pragma pack(push,2)
typedef struct _IMAGE_VXD_HEADER {
 WORD e32_magic;
 BYTE e32_border;
 BYTE e32_worder;
 DWORD e32_level;
 WORD e32_cpu;
 WORD e32_os;
 DWORD e32_ver;
 DWORD e32_mflags;
 DWORD e32_mpages;
 DWORD e32_startobj;
 DWORD e32_eip;
 DWORD e32_stackobj;
 DWORD e32_esp;
 DWORD e32_pagesize;
 DWORD e32_lastpagesize;
 DWORD e32_fixupsize;
 DWORD e32_fixupsum;
 DWORD e32_ldrsize;
 DWORD e32_ldrsum;
 DWORD e32_objtab;
 DWORD e32_objcnt;
 DWORD e32_objmap;
 DWORD e32_itermap;
 DWORD e32_rsrctab;
 DWORD e32_rsrccnt;
 DWORD e32_restab;
 DWORD e32_enttab;
 DWORD e32_dirtab;
 DWORD e32_dircnt;
 DWORD e32_fpagetab;
 DWORD e32_frectab;
 DWORD e32_impmod;
 DWORD e32_impmodcnt;
 DWORD e32_impproc;
 DWORD e32_pagesum;
 DWORD e32_datapage;
 DWORD e32_preload;
 DWORD e32_nrestab;
 DWORD e32_cbnrestab;
 DWORD e32_nressum;
 DWORD e32_autodata;
 DWORD e32_debuginfo;
 DWORD e32_debuglen;
 DWORD e32_instpreload;
 DWORD e32_instdemand;
 DWORD e32_heapsize;
 BYTE e32_res3[12];
 DWORD e32_winresoff;
 DWORD e32_winreslen;
 WORD e32_devid;
 WORD e32_ddkver;
} IMAGE_VXD_HEADER,*PIMAGE_VXD_HEADER;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_FILE_HEADER {
 WORD Machine;
 WORD NumberOfSections;
 DWORD TimeDateStamp;
 DWORD PointerToSymbolTable;
 DWORD NumberOfSymbols;
 WORD SizeOfOptionalHeader;
 WORD Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;
typedef struct _IMAGE_DATA_DIRECTORY {
 DWORD VirtualAddress;
 DWORD Size;
} IMAGE_DATA_DIRECTORY,*PIMAGE_DATA_DIRECTORY;
typedef struct _IMAGE_OPTIONAL_HEADER {
 WORD Magic;
 BYTE MajorLinkerVersion;
 BYTE MinorLinkerVersion;
 DWORD SizeOfCode;
 DWORD SizeOfInitializedData;
 DWORD SizeOfUninitializedData;
 DWORD AddressOfEntryPoint;
 DWORD BaseOfCode;
 DWORD BaseOfData;
 DWORD ImageBase;
 DWORD SectionAlignment;
 DWORD FileAlignment;
 WORD MajorOperatingSystemVersion;
 WORD MinorOperatingSystemVersion;
 WORD MajorImageVersion;
 WORD MinorImageVersion;
 WORD MajorSubsystemVersion;
 WORD MinorSubsystemVersion;
 DWORD Reserved1;
 DWORD SizeOfImage;
 DWORD SizeOfHeaders;
 DWORD CheckSum;
 WORD Subsystem;
 WORD DllCharacteristics;
 DWORD SizeOfStackReserve;
 DWORD SizeOfStackCommit;
 DWORD SizeOfHeapReserve;
 DWORD SizeOfHeapCommit;
 DWORD LoaderFlags;
 DWORD NumberOfRvaAndSizes;
 IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER,*PIMAGE_OPTIONAL_HEADER;
typedef struct _IMAGE_ROM_OPTIONAL_HEADER {
 WORD Magic;
 BYTE MajorLinkerVersion;
 BYTE MinorLinkerVersion;
 DWORD SizeOfCode;
 DWORD SizeOfInitializedData;
 DWORD SizeOfUninitializedData;
 DWORD AddressOfEntryPoint;
 DWORD BaseOfCode;
 DWORD BaseOfData;
 DWORD BaseOfBss;
 DWORD GprMask;
 DWORD CprMask[4];
 DWORD GpValue;
} IMAGE_ROM_OPTIONAL_HEADER,*PIMAGE_ROM_OPTIONAL_HEADER;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct _IMAGE_DOS_HEADER {
 WORD e_magic;
 WORD e_cblp;
 WORD e_cp;
 WORD e_crlc;
 WORD e_cparhdr;
 WORD e_minalloc;
 WORD e_maxalloc;
 WORD e_ss;
 WORD e_sp;
 WORD e_csum;
 WORD e_ip;
 WORD e_cs;
 WORD e_lfarlc;
 WORD e_ovno;
 WORD e_res[4];
 WORD e_oemid;
 WORD e_oeminfo;
 WORD e_res2[10];
 LONG e_lfanew;
} IMAGE_DOS_HEADER,*PIMAGE_DOS_HEADER;
typedef struct _IMAGE_OS2_HEADER {
 WORD ne_magic;
 CHAR ne_ver;
 CHAR ne_rev;
 WORD ne_enttab;
 WORD ne_cbenttab;
 LONG ne_crc;
 WORD ne_flags;
 WORD ne_autodata;
 WORD ne_heap;
 WORD ne_stack;
 LONG ne_csip;
 LONG ne_sssp;
 WORD ne_cseg;
 WORD ne_cmod;
 WORD ne_cbnrestab;
 WORD ne_segtab;
 WORD ne_rsrctab;
 WORD ne_restab;
 WORD ne_modtab;
 WORD ne_imptab;
 LONG ne_nrestab;
 WORD ne_cmovent;
 WORD ne_align;
 WORD ne_cres;
 BYTE ne_exetyp;
 BYTE ne_flagsothers;
 WORD ne_pretthunks;
 WORD ne_psegrefbytes;
 WORD ne_swaparea;
 WORD ne_expver;
} IMAGE_OS2_HEADER,*PIMAGE_OS2_HEADER;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_NT_HEADERS {
 DWORD Signature;
 IMAGE_FILE_HEADER FileHeader;
 IMAGE_OPTIONAL_HEADER OptionalHeader;
} IMAGE_NT_HEADERS,*PIMAGE_NT_HEADERS;
typedef struct _IMAGE_ROM_HEADERS {
 IMAGE_FILE_HEADER FileHeader;
 IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS,*PIMAGE_ROM_HEADERS;
typedef struct _IMAGE_SECTION_HEADER {
 BYTE Name[8];
 union {
  DWORD PhysicalAddress;
  DWORD VirtualSize;
 } Misc;
 DWORD VirtualAddress;
 DWORD SizeOfRawData;
 DWORD PointerToRawData;
 DWORD PointerToRelocations;
 DWORD PointerToLinenumbers;
 WORD NumberOfRelocations;
 WORD NumberOfLinenumbers;
 DWORD Characteristics;
} IMAGE_SECTION_HEADER,*PIMAGE_SECTION_HEADER;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct _IMAGE_SYMBOL {
 union {
  BYTE ShortName[8];
  struct {
   DWORD Short;
   DWORD Long;
  } Name;
  PBYTE LongName[2];
 } N;
 DWORD Value;
 SHORT SectionNumber;
 WORD Type;
 BYTE StorageClass;
 BYTE NumberOfAuxSymbols;
} IMAGE_SYMBOL,*PIMAGE_SYMBOL;
typedef union _IMAGE_AUX_SYMBOL {
 struct {
  DWORD TagIndex;
  union {
   struct {
    WORD Linenumber;
    WORD Size;
   } LnSz;
   DWORD TotalSize;
  } Misc;
  union {
   struct {
    DWORD PointerToLinenumber;
    DWORD PointerToNextFunction;
   } Function;
   struct {
    WORD Dimension[4];
   } Array;
  } FcnAry;
  WORD TvIndex;
 } Sym;
 struct {
  BYTE Name[18];
 } File;
 struct {
  DWORD Length;
  WORD NumberOfRelocations;
  WORD NumberOfLinenumbers;
  DWORD CheckSum;
  SHORT Number;
  BYTE Selection;
 } Section;
} IMAGE_AUX_SYMBOL,*PIMAGE_AUX_SYMBOL;
typedef struct _IMAGE_COFF_SYMBOLS_HEADER {
 DWORD NumberOfSymbols;
 DWORD LvaToFirstSymbol;
 DWORD NumberOfLinenumbers;
 DWORD LvaToFirstLinenumber;
 DWORD RvaToFirstByteOfCode;
 DWORD RvaToLastByteOfCode;
 DWORD RvaToFirstByteOfData;
 DWORD RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER,*PIMAGE_COFF_SYMBOLS_HEADER;
typedef struct _IMAGE_RELOCATION {
 __extension__ union {
  DWORD VirtualAddress;
  DWORD RelocCount;
 } ;
 DWORD SymbolTableIndex;
 WORD Type;
} IMAGE_RELOCATION,*PIMAGE_RELOCATION;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_BASE_RELOCATION {
 DWORD VirtualAddress;
 DWORD SizeOfBlock;
} IMAGE_BASE_RELOCATION,*PIMAGE_BASE_RELOCATION;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct _IMAGE_LINENUMBER {
 union {
  DWORD SymbolTableIndex;
  DWORD VirtualAddress;
 } Type;
 WORD Linenumber;
} IMAGE_LINENUMBER,*PIMAGE_LINENUMBER;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER {
 BYTE Name[16];
 BYTE Date[12];
 BYTE UserID[6];
 BYTE GroupID[6];
 BYTE Mode[8];
 BYTE Size[10];
 BYTE EndHeader[2];
} IMAGE_ARCHIVE_MEMBER_HEADER,*PIMAGE_ARCHIVE_MEMBER_HEADER;
typedef struct _IMAGE_EXPORT_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 DWORD Name;
 DWORD Base;
 DWORD NumberOfFunctions;
 DWORD NumberOfNames;
 PDWORD *AddressOfFunctions;
 PDWORD *AddressOfNames;
 PWORD *AddressOfNameOrdinals;
} IMAGE_EXPORT_DIRECTORY,*PIMAGE_EXPORT_DIRECTORY;
typedef struct _IMAGE_IMPORT_BY_NAME {
 WORD Hint;
 BYTE Name[1];
} IMAGE_IMPORT_BY_NAME,*PIMAGE_IMPORT_BY_NAME;
typedef struct _IMAGE_THUNK_DATA {
 union {
  PBYTE ForwarderString;
  PDWORD Function;
  DWORD Ordinal;
  PIMAGE_IMPORT_BY_NAME AddressOfData;
 } u1;
} IMAGE_THUNK_DATA,*PIMAGE_THUNK_DATA;
typedef struct _IMAGE_IMPORT_DESCRIPTOR {
 __extension__ union {
  DWORD Characteristics;
  PIMAGE_THUNK_DATA OriginalFirstThunk;
 } ;
 DWORD TimeDateStamp;
 DWORD ForwarderChain;
 DWORD Name;
 PIMAGE_THUNK_DATA FirstThunk;
} IMAGE_IMPORT_DESCRIPTOR,*PIMAGE_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR {
 DWORD TimeDateStamp;
 WORD OffsetModuleName;
 WORD NumberOfModuleForwarderRefs;
} IMAGE_BOUND_IMPORT_DESCRIPTOR,*PIMAGE_BOUND_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_FORWARDER_REF {
 DWORD TimeDateStamp;
 WORD OffsetModuleName;
 WORD Reserved;
} IMAGE_BOUND_FORWARDER_REF,*PIMAGE_BOUND_FORWARDER_REF;
typedef void(__attribute__((__stdcall__)) *PIMAGE_TLS_CALLBACK)(PVOID,DWORD,PVOID);
typedef struct _IMAGE_TLS_DIRECTORY {
 DWORD StartAddressOfRawData;
 DWORD EndAddressOfRawData;
 PDWORD AddressOfIndex;
 PIMAGE_TLS_CALLBACK *AddressOfCallBacks;
 DWORD SizeOfZeroFill;
 DWORD Characteristics;
} IMAGE_TLS_DIRECTORY,*PIMAGE_TLS_DIRECTORY;
typedef struct _IMAGE_RESOURCE_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 WORD NumberOfNamedEntries;
 WORD NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY,*PIMAGE_RESOURCE_DIRECTORY;
__extension__ typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY {
 __extension__ union {
  __extension__ struct {
   DWORD NameOffset:31;
   DWORD NameIsString:1;
  };
  DWORD Name;
  WORD Id;
 } ;
 __extension__ union {
  DWORD OffsetToData;
  __extension__ struct {
   DWORD OffsetToDirectory:31;
   DWORD DataIsDirectory:1;
  } ;
 } ;
} IMAGE_RESOURCE_DIRECTORY_ENTRY,*PIMAGE_RESOURCE_DIRECTORY_ENTRY;
typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING {
 WORD Length;
 CHAR NameString[1];
} IMAGE_RESOURCE_DIRECTORY_STRING,*PIMAGE_RESOURCE_DIRECTORY_STRING;
typedef struct _IMAGE_RESOURCE_DIR_STRING_U {
 WORD Length;
 WCHAR NameString[1];
} IMAGE_RESOURCE_DIR_STRING_U,*PIMAGE_RESOURCE_DIR_STRING_U;
typedef struct _IMAGE_RESOURCE_DATA_ENTRY {
 DWORD OffsetToData;
 DWORD Size;
 DWORD CodePage;
 DWORD Reserved;
} IMAGE_RESOURCE_DATA_ENTRY,*PIMAGE_RESOURCE_DATA_ENTRY;
typedef struct _IMAGE_LOAD_CONFIG_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 DWORD GlobalFlagsClear;
 DWORD GlobalFlagsSet;
 DWORD CriticalSectionDefaultTimeout;
 DWORD DeCommitFreeBlockThreshold;
 DWORD DeCommitTotalFreeThreshold;
 PVOID LockPrefixTable;
 DWORD MaximumAllocationSize;
 DWORD VirtualMemoryThreshold;
 DWORD ProcessHeapFlags;
 DWORD Reserved[4];
} IMAGE_LOAD_CONFIG_DIRECTORY,*PIMAGE_LOAD_CONFIG_DIRECTORY;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
 DWORD BeginAddress;
 DWORD EndAddress;
 PVOID ExceptionHandler;
 PVOID HandlerData;
 DWORD PrologEndAddress;
} IMAGE_RUNTIME_FUNCTION_ENTRY,*PIMAGE_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_DEBUG_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 DWORD Type;
 DWORD SizeOfData;
 DWORD AddressOfRawData;
 DWORD PointerToRawData;
} IMAGE_DEBUG_DIRECTORY,*PIMAGE_DEBUG_DIRECTORY;
typedef struct _FPO_DATA {
 DWORD ulOffStart;
 DWORD cbProcSize;
 DWORD cdwLocals;
 WORD cdwParams;
 WORD cbProlog:8;
 WORD cbRegs:3;
 WORD fHasSEH:1;
 WORD fUseBP:1;
 WORD reserved:1;
 WORD cbFrame:2;
} FPO_DATA,*PFPO_DATA;
typedef struct _IMAGE_DEBUG_MISC {
 DWORD DataType;
 DWORD Length;
 BOOLEAN Unicode;
 BYTE Reserved[3];
 BYTE Data[1];
} IMAGE_DEBUG_MISC,*PIMAGE_DEBUG_MISC;
typedef struct _IMAGE_FUNCTION_ENTRY {
 DWORD StartingAddress;
 DWORD EndingAddress;
 DWORD EndOfPrologue;
} IMAGE_FUNCTION_ENTRY,*PIMAGE_FUNCTION_ENTRY;
typedef struct _IMAGE_SEPARATE_DEBUG_HEADER {
 WORD Signature;
 WORD Flags;
 WORD Machine;
 WORD Characteristics;
 DWORD TimeDateStamp;
 DWORD CheckSum;
 DWORD ImageBase;
 DWORD SizeOfImage;
 DWORD NumberOfSections;
 DWORD ExportedNamesSize;
 DWORD DebugDirectorySize;
 DWORD SectionAlignment;
 DWORD Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER,*PIMAGE_SEPARATE_DEBUG_HEADER;
#pragma pack(pop)
typedef enum _CM_SERVICE_NODE_TYPE {
 DriverType=1,
 FileSystemType=2,
 Win32ServiceOwnProcess=16,
 Win32ServiceShareProcess=32,
 AdapterType=4,
 RecognizerType=8
} SERVICE_NODE_TYPE;
typedef enum _CM_SERVICE_LOAD_TYPE {
 BootLoad=0,
 SystemLoad=1,
 AutoLoad=2,
 DemandLoad=3,
 DisableLoad=4
} SERVICE_LOAD_TYPE;
typedef enum _CM_ERROR_CONTROL_TYPE {
 IgnoreError=0,
 NormalError=1,
 SevereError=2,
 CriticalError=3
} SERVICE_ERROR_TYPE;
typedef struct _NT_TIB {
 struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
 PVOID StackBase;
 PVOID StackLimit;
 PVOID SubSystemTib;
 __extension__ union {
  PVOID FiberData;
  DWORD Version;
 } ;
 PVOID ArbitraryUserPointer;
 struct _NT_TIB *Self;
} NT_TIB,*PNT_TIB;
typedef struct _REPARSE_DATA_BUFFER {
 DWORD ReparseTag;
 WORD ReparseDataLength;
 WORD Reserved;
 __extension__ union {
  struct {
   WORD SubstituteNameOffset;
   WORD SubstituteNameLength;
   WORD PrintNameOffset;
   WORD PrintNameLength;
   WCHAR PathBuffer[1];
  } SymbolicLinkReparseBuffer;
  struct {
   WORD SubstituteNameOffset;
   WORD SubstituteNameLength;
   WORD PrintNameOffset;
   WORD PrintNameLength;
   WCHAR PathBuffer[1];
  } MountPointReparseBuffer;
  struct {
   BYTE DataBuffer[1];
  } GenericReparseBuffer;
 } ;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;
typedef struct _REPARSE_GUID_DATA_BUFFER {
 DWORD ReparseTag;
 WORD ReparseDataLength;
 WORD Reserved;
 GUID ReparseGuid;
 struct {
  BYTE DataBuffer[1];
 } GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;
typedef struct _REPARSE_POINT_INFORMATION {
 WORD ReparseDataLength;
 WORD UnparsedNameLength;
} REPARSE_POINT_INFORMATION, *PREPARSE_POINT_INFORMATION;

typedef union _FILE_SEGMENT_ELEMENT {
 PVOID64 Buffer;
 ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
# 2850 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef enum _JOBOBJECTINFOCLASS {
 JobObjectBasicAccountingInformation = 1,
 JobObjectBasicLimitInformation,
 JobObjectBasicProcessIdList,
 JobObjectBasicUIRestrictions,
 JobObjectSecurityLimitInformation,
 JobObjectEndOfJobTimeInformation,
 JobObjectAssociateCompletionPortInformation,
 JobObjectBasicAndIoAccountingInformation,
 JobObjectExtendedLimitInformation,
 JobObjectJobSetInformation,
 MaxJobObjectInfoClass
} JOBOBJECTINFOCLASS;
typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION {
 LARGE_INTEGER TotalUserTime;
 LARGE_INTEGER TotalKernelTime;
 LARGE_INTEGER ThisPeriodTotalUserTime;
 LARGE_INTEGER ThisPeriodTotalKernelTime;
 DWORD TotalPageFaultCount;
 DWORD TotalProcesses;
 DWORD ActiveProcesses;
 DWORD TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION,*PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION {
 LARGE_INTEGER PerProcessUserTimeLimit;
 LARGE_INTEGER PerJobUserTimeLimit;
 DWORD LimitFlags;
 SIZE_T MinimumWorkingSetSize;
 SIZE_T MaximumWorkingSetSize;
 DWORD ActiveProcessLimit;
 ULONG_PTR Affinity;
 DWORD PriorityClass;
 DWORD SchedulingClass;
} JOBOBJECT_BASIC_LIMIT_INFORMATION,*PJOBOBJECT_BASIC_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST {
 DWORD NumberOfAssignedProcesses;
 DWORD NumberOfProcessIdsInList;
 ULONG_PTR ProcessIdList[1];
} JOBOBJECT_BASIC_PROCESS_ID_LIST, *PJOBOBJECT_BASIC_PROCESS_ID_LIST;
typedef struct _JOBOBJECT_BASIC_UI_RESTRICTIONS {
 DWORD UIRestrictionsClass;
} JOBOBJECT_BASIC_UI_RESTRICTIONS,*PJOBOBJECT_BASIC_UI_RESTRICTIONS;
typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION {
 DWORD SecurityLimitFlags;
 HANDLE JobToken;
 PTOKEN_GROUPS SidsToDisable;
 PTOKEN_PRIVILEGES PrivilegesToDelete;
 PTOKEN_GROUPS RestrictedSids;
} JOBOBJECT_SECURITY_LIMIT_INFORMATION,*PJOBOBJECT_SECURITY_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION {
 DWORD EndOfJobTimeAction;
} JOBOBJECT_END_OF_JOB_TIME_INFORMATION,*PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;
typedef struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT {
 PVOID CompletionKey;
 HANDLE CompletionPort;
} JOBOBJECT_ASSOCIATE_COMPLETION_PORT,*PJOBOBJECT_ASSOCIATE_COMPLETION_PORT;
typedef struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION {
 JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
 IO_COUNTERS IoInfo;
} JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION,*PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION {
 JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
 IO_COUNTERS IoInfo;
 SIZE_T ProcessMemoryLimit;
 SIZE_T JobMemoryLimit;
 SIZE_T PeakProcessMemoryUsed;
 SIZE_T PeakJobMemoryUsed;
} JOBOBJECT_EXTENDED_LIMIT_INFORMATION,*PJOBOBJECT_EXTENDED_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_JOBSET_INFORMATION {
 DWORD MemberLevel;
} JOBOBJECT_JOBSET_INFORMATION,*PJOBOBJECT_JOBSET_INFORMATION;



# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pshpack4.h" 1 3

#pragma pack(push,4)
# 2925 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 2 3






typedef enum _LATENCY_TIME {
 LT_DONT_CARE,
 LT_LOWEST_LATENCY
} LATENCY_TIME, *PLATENCY_TIME;

typedef enum _SYSTEM_POWER_STATE {
 PowerSystemUnspecified,
 PowerSystemWorking,
 PowerSystemSleeping1,
 PowerSystemSleeping2,
 PowerSystemSleeping3,
 PowerSystemHibernate,
 PowerSystemShutdown,
 PowerSystemMaximum
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;


typedef enum {
 PowerActionNone,
 PowerActionReserved,
 PowerActionSleep,
 PowerActionHibernate,
 PowerActionShutdown,
 PowerActionShutdownReset,
 PowerActionShutdownOff,
 PowerActionWarmEject
} POWER_ACTION, *PPOWER_ACTION;

typedef enum _DEVICE_POWER_STATE {
 PowerDeviceUnspecified,
 PowerDeviceD0,
 PowerDeviceD1,
 PowerDeviceD2,
 PowerDeviceD3,
 PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef struct {
 DWORD Granularity;
 DWORD Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;

typedef struct _POWER_ACTION_POLICY {
 POWER_ACTION Action;
 ULONG Flags;
 ULONG EventCode;
} POWER_ACTION_POLICY, *PPOWER_ACTION_POLICY;
# 3006 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
typedef struct _SYSTEM_POWER_LEVEL {
 BOOLEAN Enable;
 UCHAR Spare[3];
 ULONG BatteryLevel;
 POWER_ACTION_POLICY PowerPolicy;
 SYSTEM_POWER_STATE MinSystemState;
} SYSTEM_POWER_LEVEL, *PSYSTEM_POWER_LEVEL;

typedef struct _SYSTEM_POWER_POLICY {
 ULONG Revision;
 POWER_ACTION_POLICY PowerButton;
 POWER_ACTION_POLICY SleepButton;
 POWER_ACTION_POLICY LidClose;
 SYSTEM_POWER_STATE LidOpenWake;
 ULONG Reserved;
 POWER_ACTION_POLICY Idle;
 ULONG IdleTimeout;
 UCHAR IdleSensitivity;
 UCHAR DynamicThrottle;
 UCHAR Spare2[2];
 SYSTEM_POWER_STATE MinSleep;
 SYSTEM_POWER_STATE MaxSleep;
 SYSTEM_POWER_STATE ReducedLatencySleep;
 ULONG WinLogonFlags;
 ULONG Spare3;
 ULONG DozeS4Timeout;
 ULONG BroadcastCapacityResolution;
 SYSTEM_POWER_LEVEL DischargePolicy[4];
 ULONG VideoTimeout;
 BOOLEAN VideoDimDisplay;
 ULONG VideoReserved[3];
 ULONG SpindownTimeout;
 BOOLEAN OptimizeForPower;
 UCHAR FanThrottleTolerance;
 UCHAR ForcedThrottle;
 UCHAR MinThrottle;
 POWER_ACTION_POLICY OverThrottled;
} SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY;

typedef struct _SYSTEM_POWER_CAPABILITIES {
 BOOLEAN PowerButtonPresent;
 BOOLEAN SleepButtonPresent;
 BOOLEAN LidPresent;
 BOOLEAN SystemS1;
 BOOLEAN SystemS2;
 BOOLEAN SystemS3;
 BOOLEAN SystemS4;
 BOOLEAN SystemS5;
 BOOLEAN HiberFilePresent;
 BOOLEAN FullWake;
 BOOLEAN VideoDimPresent;
 BOOLEAN ApmPresent;
 BOOLEAN UpsPresent;
 BOOLEAN ThermalControl;
 BOOLEAN ProcessorThrottle;
 UCHAR ProcessorMinThrottle;
 UCHAR ProcessorMaxThrottle;
 UCHAR spare2[4];
 BOOLEAN DiskSpinDown;
 UCHAR spare3[8];
 BOOLEAN SystemBatteriesPresent;
 BOOLEAN BatteriesAreShortTerm;
 BATTERY_REPORTING_SCALE BatteryScale[3];
 SYSTEM_POWER_STATE AcOnLineWake;
 SYSTEM_POWER_STATE SoftLidWake;
 SYSTEM_POWER_STATE RtcWake;
 SYSTEM_POWER_STATE MinDeviceWakeState;
 SYSTEM_POWER_STATE DefaultLowLatencyWake;
} SYSTEM_POWER_CAPABILITIES, *PSYSTEM_POWER_CAPABILITIES;

typedef struct _SYSTEM_BATTERY_STATE {
 BOOLEAN AcOnLine;
 BOOLEAN BatteryPresent;
 BOOLEAN Charging;
 BOOLEAN Discharging;
 BOOLEAN Spare1[4];
 ULONG MaxCapacity;
 ULONG RemainingCapacity;
 ULONG Rate;
 ULONG EstimatedTime;
 ULONG DefaultAlert1;
 ULONG DefaultAlert2;
} SYSTEM_BATTERY_STATE, *PSYSTEM_BATTERY_STATE;

typedef enum _POWER_INFORMATION_LEVEL {
 SystemPowerPolicyAc,
 SystemPowerPolicyDc,
 VerifySystemPolicyAc,
 VerifySystemPolicyDc,
 SystemPowerCapabilities,
 SystemBatteryState,
 SystemPowerStateHandler,
 ProcessorStateHandler,
 SystemPowerPolicyCurrent,
 AdministratorPowerPolicy,
 SystemReserveHiberFile,
 ProcessorInformation,
 SystemPowerInformation,
 ProcessorStateHandler2,
 LastWakeTime,
 LastSleepTime,
 SystemExecutionState,
 SystemPowerStateNotifyHandler,
 ProcessorPowerPolicyAc,
 ProcessorPowerPolicyDc,
 VerifyProcessorPowerPolicyAc,
 VerifyProcessorPowerPolicyDc,
 ProcessorPowerPolicyCurrent
} POWER_INFORMATION_LEVEL;


typedef struct _SYSTEM_POWER_INFORMATION {
 ULONG MaxIdlenessAllowed;
 ULONG Idleness;
 ULONG TimeRemaining;
 UCHAR CoolingMode;
} SYSTEM_POWER_INFORMATION, *PSYSTEM_POWER_INFORMATION;


typedef struct _PROCESSOR_POWER_POLICY_INFO {
 ULONG TimeCheck;
 ULONG DemoteLimit;
 ULONG PromoteLimit;
 UCHAR DemotePercent;
 UCHAR PromotePercent;
 UCHAR Spare[2];
 ULONG AllowDemotion : 1;
 ULONG AllowPromotion : 1;
 ULONG Reserved : 30;
} PROCESSOR_POWER_POLICY_INFO, *PPROCESSOR_POWER_POLICY_INFO;
typedef struct _PROCESSOR_POWER_POLICY {
 ULONG Revision;
 UCHAR DynamicThrottle;
 UCHAR Spare[3];
 ULONG Reserved;
 ULONG PolicyCount;
 PROCESSOR_POWER_POLICY_INFO Policy[3];
} PROCESSOR_POWER_POLICY, *PPROCESSOR_POWER_POLICY;
typedef struct _ADMINISTRATOR_POWER_POLICY {
 SYSTEM_POWER_STATE MinSleep;
 SYSTEM_POWER_STATE MaxSleep;
 ULONG MinVideoTimeout;
 ULONG MaxVideoTimeout;
 ULONG MinSpindownTimeout;
 ULONG MaxSpindownTimeout;
} ADMINISTRATOR_POWER_POLICY, *PADMINISTRATOR_POWER_POLICY;
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/poppack.h" 1 3

#pragma pack(pop)
# 3153 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 2 3


typedef void (__attribute__((__stdcall__)) *WAITORTIMERCALLBACKFUNC)(PVOID,BOOLEAN);





typedef OSVERSIONINFOA OSVERSIONINFO,*POSVERSIONINFO,*LPOSVERSIONINFO;
typedef OSVERSIONINFOEXA OSVERSIONINFOEX,*POSVERSIONINFOEX,*LPOSVERSIONINFOEX;
# 3171 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnt.h" 3
PVOID GetCurrentFiber(void);
PVOID GetFiberData(void);

PVOID GetCurrentFiber(void);
extern __inline__ PVOID GetCurrentFiber(void)
{
    void* ret;
    __asm__ volatile (
 "movl	%%fs:0x10,%0"
 : "=r" (ret)
 );
    return ret;
}

PVOID GetFiberData(void);
extern __inline__ PVOID GetFiberData(void)
{
    void* ret;
    __asm__ volatile (
 "movl	%%fs:0x10,%0\n"
 "movl	(%0),%0"
 : "=r" (ret)
 );
    return ret;
}
# 247 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windef.h" 2 3

typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;

typedef LONG HRESULT;



typedef WORD ATOM;

typedef HANDLE HGLOBAL;
typedef HANDLE HLOCAL;
typedef HANDLE GLOBALHANDLE;
typedef HANDLE LOCALHANDLE;
typedef void *HGDIOBJ;
typedef HANDLE HACCEL;
typedef HANDLE HBITMAP;
typedef HANDLE HBRUSH;
typedef HANDLE HCOLORSPACE;
typedef HANDLE HDC;
typedef HANDLE HGLRC;
typedef HANDLE HDESK;
typedef HANDLE HENHMETAFILE;
typedef HANDLE HFONT;
typedef HANDLE HICON;
typedef HANDLE HKEY;


typedef HANDLE HMONITOR;

typedef HANDLE HTERMINAL;
typedef HANDLE HWINEVENTHOOK;

typedef HKEY *PHKEY;
typedef HANDLE HMENU;
typedef HANDLE HMETAFILE;
typedef HANDLE HINSTANCE;
typedef HINSTANCE HMODULE;
typedef HANDLE HPALETTE;
typedef HANDLE HPEN;
typedef HANDLE HRGN;
typedef HANDLE HRSRC;
typedef HANDLE HSTR;
typedef HANDLE HTASK;
typedef HANDLE HWND;
typedef HANDLE HWINSTA;
typedef HANDLE HKL;
typedef int HFILE;
typedef HICON HCURSOR;
typedef DWORD COLORREF;
typedef int (__attribute__((__stdcall__)) *FARPROC)();
typedef int (__attribute__((__stdcall__)) *NEARPROC)();
typedef int (__attribute__((__stdcall__)) *PROC)();
typedef struct tagRECT {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECT,*PRECT,*LPRECT;
typedef const RECT *LPCRECT;
typedef struct tagRECTL {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECTL,*PRECTL,*LPRECTL;
typedef const RECTL *LPCRECTL;
typedef struct tagPOINT {
 LONG x;
 LONG y;
} POINT,POINTL,*PPOINT,*LPPOINT,*PPOINTL,*LPPOINTL;
typedef struct tagSIZE {
 LONG cx;
 LONG cy;
} SIZE,SIZEL,*PSIZE,*LPSIZE,*PSIZEL,*LPSIZEL;
typedef struct tagPOINTS {
 SHORT x;
 SHORT y;
} POINTS,*PPOINTS,*LPPOINTS;
# 49 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wincon.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wincon.h" 3
# 54 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wincon.h" 3
typedef struct _CHAR_INFO {
 union {
  WCHAR UnicodeChar;
  CHAR AsciiChar;
 } Char;
 WORD Attributes;
} CHAR_INFO,*PCHAR_INFO;
typedef struct _SMALL_RECT {
 SHORT Left;
 SHORT Top;
 SHORT Right;
 SHORT Bottom;
} SMALL_RECT,*PSMALL_RECT;
typedef struct _CONSOLE_CURSOR_INFO {
 DWORD dwSize;
 BOOL bVisible;
} CONSOLE_CURSOR_INFO,*PCONSOLE_CURSOR_INFO;
typedef struct _COORD {
 SHORT X;
 SHORT Y;
} COORD;
typedef struct _CONSOLE_FONT_INFO {
 DWORD nFont;
 COORD dwFontSize;
} CONSOLE_FONT_INFO, *PCONSOLE_FONT_INFO;
typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
 COORD dwSize;
 COORD dwCursorPosition;
 WORD wAttributes;
 SMALL_RECT srWindow;
 COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO,*PCONSOLE_SCREEN_BUFFER_INFO;
typedef BOOL(__attribute__((__stdcall__)) *PHANDLER_ROUTINE)(DWORD);
typedef struct _KEY_EVENT_RECORD {
 BOOL bKeyDown;
 WORD wRepeatCount;
 WORD wVirtualKeyCode;
 WORD wVirtualScanCode;
 union {
  WCHAR UnicodeChar;
  CHAR AsciiChar;
 } uChar;
 DWORD dwControlKeyState;
}


 __attribute__((packed))

KEY_EVENT_RECORD;

typedef struct _MOUSE_EVENT_RECORD {
 COORD dwMousePosition;
 DWORD dwButtonState;
 DWORD dwControlKeyState;
 DWORD dwEventFlags;
} MOUSE_EVENT_RECORD;
typedef struct _WINDOW_BUFFER_SIZE_RECORD { COORD dwSize; } WINDOW_BUFFER_SIZE_RECORD;
typedef struct _MENU_EVENT_RECORD { UINT dwCommandId; } MENU_EVENT_RECORD,*PMENU_EVENT_RECORD;
typedef struct _FOCUS_EVENT_RECORD { BOOL bSetFocus; } FOCUS_EVENT_RECORD;
typedef struct _INPUT_RECORD {
 WORD EventType;
 union {
  KEY_EVENT_RECORD KeyEvent;
  MOUSE_EVENT_RECORD MouseEvent;
  WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
  MENU_EVENT_RECORD MenuEvent;
  FOCUS_EVENT_RECORD FocusEvent;
 } Event;
} INPUT_RECORD,*PINPUT_RECORD;

BOOL __attribute__((__stdcall__)) AllocConsole(void);
HANDLE __attribute__((__stdcall__)) CreateConsoleScreenBuffer(DWORD,DWORD,const SECURITY_ATTRIBUTES*,DWORD,LPVOID);
BOOL __attribute__((__stdcall__)) FillConsoleOutputAttribute(HANDLE,WORD,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) FillConsoleOutputCharacterA(HANDLE,CHAR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) FillConsoleOutputCharacterW(HANDLE,WCHAR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) FlushConsoleInputBuffer(HANDLE);
BOOL __attribute__((__stdcall__)) FreeConsole(void);
BOOL __attribute__((__stdcall__)) GenerateConsoleCtrlEvent(DWORD,DWORD);
UINT __attribute__((__stdcall__)) GetConsoleCP(void);
BOOL __attribute__((__stdcall__)) GetConsoleCursorInfo(HANDLE,PCONSOLE_CURSOR_INFO);
BOOL __attribute__((__stdcall__)) GetConsoleMode(HANDLE,PDWORD);
UINT __attribute__((__stdcall__)) GetConsoleOutputCP(void);
BOOL __attribute__((__stdcall__)) GetConsoleScreenBufferInfo(HANDLE,PCONSOLE_SCREEN_BUFFER_INFO);
DWORD __attribute__((__stdcall__)) GetConsoleTitleA(LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetConsoleTitleW(LPWSTR,DWORD);



COORD __attribute__((__stdcall__)) GetLargestConsoleWindowSize(HANDLE);
BOOL __attribute__((__stdcall__)) GetNumberOfConsoleInputEvents(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetNumberOfConsoleMouseButtons(PDWORD);
BOOL __attribute__((__stdcall__)) PeekConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) PeekConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleA(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) ReadConsoleW(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) ReadConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputAttribute(HANDLE,LPWORD,DWORD,COORD,LPDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputCharacterA(HANDLE,LPSTR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputCharacterW(HANDLE,LPWSTR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputA(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputW(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) ScrollConsoleScreenBufferA(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL __attribute__((__stdcall__)) ScrollConsoleScreenBufferW(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL __attribute__((__stdcall__)) SetConsoleActiveScreenBuffer(HANDLE);
BOOL __attribute__((__stdcall__)) SetConsoleCP(UINT);
BOOL __attribute__((__stdcall__)) SetConsoleCtrlHandler(PHANDLER_ROUTINE,BOOL);
BOOL __attribute__((__stdcall__)) SetConsoleCursorInfo(HANDLE,const CONSOLE_CURSOR_INFO*);
BOOL __attribute__((__stdcall__)) SetConsoleCursorPosition(HANDLE,COORD);
BOOL __attribute__((__stdcall__)) SetConsoleMode(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetConsoleOutputCP(UINT);
BOOL __attribute__((__stdcall__)) SetConsoleScreenBufferSize(HANDLE,COORD);
BOOL __attribute__((__stdcall__)) SetConsoleTextAttribute(HANDLE,WORD);
BOOL __attribute__((__stdcall__)) SetConsoleTitleA(LPCSTR);
BOOL __attribute__((__stdcall__)) SetConsoleTitleW(LPCWSTR);
BOOL __attribute__((__stdcall__)) SetConsoleWindowInfo(HANDLE,BOOL,const SMALL_RECT*);
BOOL __attribute__((__stdcall__)) WriteConsoleA(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) WriteConsoleW(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) WriteConsoleInputA(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleInputW(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputA(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputW(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputAttribute(HANDLE,const WORD*,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputCharacterA(HANDLE,LPCSTR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputCharacterW(HANDLE,LPCWSTR,DWORD,COORD,PDWORD);
# 50 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 3
# 519 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 3
typedef struct _FILETIME {
 DWORD dwLowDateTime;
 DWORD dwHighDateTime;
} FILETIME,*PFILETIME,*LPFILETIME;
typedef struct _BY_HANDLE_FILE_INFORMATION {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD dwVolumeSerialNumber;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;
 DWORD nNumberOfLinks;
 DWORD nFileIndexHigh;
 DWORD nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION,*LPBY_HANDLE_FILE_INFORMATION;
typedef struct _DCB {
 DWORD DCBlength;
 DWORD BaudRate;
 DWORD fBinary:1;
 DWORD fParity:1;
 DWORD fOutxCtsFlow:1;
 DWORD fOutxDsrFlow:1;
 DWORD fDtrControl:2;
 DWORD fDsrSensitivity:1;
 DWORD fTXContinueOnXoff:1;
 DWORD fOutX:1;
 DWORD fInX:1;
 DWORD fErrorChar:1;
 DWORD fNull:1;
 DWORD fRtsControl:2;
 DWORD fAbortOnError:1;
 DWORD fDummy2:17;
 WORD wReserved;
 WORD XonLim;
 WORD XoffLim;
 BYTE ByteSize;
 BYTE Parity;
 BYTE StopBits;
 char XonChar;
 char XoffChar;
 char ErrorChar;
 char EofChar;
 char EvtChar;
 WORD wReserved1;
} DCB,*LPDCB;
typedef struct _COMM_CONFIG {
 DWORD dwSize;
 WORD wVersion;
 WORD wReserved;
 DCB dcb;
 DWORD dwProviderSubType;
 DWORD dwProviderOffset;
 DWORD dwProviderSize;
 WCHAR wcProviderData[1];
} COMMCONFIG,*LPCOMMCONFIG;
typedef struct _COMMPROP {
 WORD wPacketLength;
 WORD wPacketVersion;
 DWORD dwServiceMask;
 DWORD dwReserved1;
 DWORD dwMaxTxQueue;
 DWORD dwMaxRxQueue;
 DWORD dwMaxBaud;
 DWORD dwProvSubType;
 DWORD dwProvCapabilities;
 DWORD dwSettableParams;
 DWORD dwSettableBaud;
 WORD wSettableData;
 WORD wSettableStopParity;
 DWORD dwCurrentTxQueue;
 DWORD dwCurrentRxQueue;
 DWORD dwProvSpec1;
 DWORD dwProvSpec2;
 WCHAR wcProvChar[1];
} COMMPROP,*LPCOMMPROP;
typedef struct _COMMTIMEOUTS {
 DWORD ReadIntervalTimeout;
 DWORD ReadTotalTimeoutMultiplier;
 DWORD ReadTotalTimeoutConstant;
 DWORD WriteTotalTimeoutMultiplier;
 DWORD WriteTotalTimeoutConstant;
} COMMTIMEOUTS,*LPCOMMTIMEOUTS;
typedef struct _COMSTAT {
 DWORD fCtsHold:1;
 DWORD fDsrHold:1;
 DWORD fRlsdHold:1;
 DWORD fXoffHold:1;
 DWORD fXoffSent:1;
 DWORD fEof:1;
 DWORD fTxim:1;
 DWORD fReserved:25;
 DWORD cbInQue;
 DWORD cbOutQue;
} COMSTAT,*LPCOMSTAT;
typedef DWORD (__attribute__((__stdcall__)) *LPTHREAD_START_ROUTINE)(LPVOID);
typedef struct _CREATE_PROCESS_DEBUG_INFO {
 HANDLE hFile;
 HANDLE hProcess;
 HANDLE hThread;
 LPVOID lpBaseOfImage;
 DWORD dwDebugInfoFileOffset;
 DWORD nDebugInfoSize;
 LPVOID lpThreadLocalBase;
 LPTHREAD_START_ROUTINE lpStartAddress;
 LPVOID lpImageName;
 WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO,*LPCREATE_PROCESS_DEBUG_INFO;
typedef struct _CREATE_THREAD_DEBUG_INFO {
 HANDLE hThread;
 LPVOID lpThreadLocalBase;
 LPTHREAD_START_ROUTINE lpStartAddress;
} CREATE_THREAD_DEBUG_INFO,*LPCREATE_THREAD_DEBUG_INFO;
typedef struct _EXCEPTION_DEBUG_INFO {
 EXCEPTION_RECORD ExceptionRecord;
 DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO,*LPEXCEPTION_DEBUG_INFO;
typedef struct _EXIT_THREAD_DEBUG_INFO {
 DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO,*LPEXIT_THREAD_DEBUG_INFO;
typedef struct _EXIT_PROCESS_DEBUG_INFO {
 DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO,*LPEXIT_PROCESS_DEBUG_INFO;
typedef struct _LOAD_DLL_DEBUG_INFO {
 HANDLE hFile;
 LPVOID lpBaseOfDll;
 DWORD dwDebugInfoFileOffset;
 DWORD nDebugInfoSize;
 LPVOID lpImageName;
 WORD fUnicode;
} LOAD_DLL_DEBUG_INFO,*LPLOAD_DLL_DEBUG_INFO;
typedef struct _UNLOAD_DLL_DEBUG_INFO {
 LPVOID lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO,*LPUNLOAD_DLL_DEBUG_INFO;
typedef struct _OUTPUT_DEBUG_STRING_INFO {
 LPSTR lpDebugStringData;
 WORD fUnicode;
 WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO,*LPOUTPUT_DEBUG_STRING_INFO;
typedef struct _RIP_INFO {
 DWORD dwError;
 DWORD dwType;
} RIP_INFO,*LPRIP_INFO;
typedef struct _DEBUG_EVENT {
 DWORD dwDebugEventCode;
 DWORD dwProcessId;
 DWORD dwThreadId;
 union {
  EXCEPTION_DEBUG_INFO Exception;
  CREATE_THREAD_DEBUG_INFO CreateThread;
  CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
  EXIT_THREAD_DEBUG_INFO ExitThread;
  EXIT_PROCESS_DEBUG_INFO ExitProcess;
  LOAD_DLL_DEBUG_INFO LoadDll;
  UNLOAD_DLL_DEBUG_INFO UnloadDll;
  OUTPUT_DEBUG_STRING_INFO DebugString;
  RIP_INFO RipInfo;
 } u;
} DEBUG_EVENT,*LPDEBUG_EVENT;
typedef struct _OVERLAPPED {
 DWORD Internal;
 DWORD InternalHigh;
 DWORD Offset;
 DWORD OffsetHigh;
 HANDLE hEvent;
} OVERLAPPED,*POVERLAPPED,*LPOVERLAPPED;
typedef struct _STARTUPINFOA {
 DWORD cb;
 LPSTR lpReserved;
 LPSTR lpDesktop;
 LPSTR lpTitle;
 DWORD dwX;
 DWORD dwY;
 DWORD dwXSize;
 DWORD dwYSize;
 DWORD dwXCountChars;
 DWORD dwYCountChars;
 DWORD dwFillAttribute;
 DWORD dwFlags;
 WORD wShowWindow;
 WORD cbReserved2;
 PBYTE lpReserved2;
 HANDLE hStdInput;
 HANDLE hStdOutput;
 HANDLE hStdError;
} STARTUPINFOA,*LPSTARTUPINFOA;
typedef struct _STARTUPINFOW {
 DWORD cb;
 LPWSTR lpReserved;
 LPWSTR lpDesktop;
 LPWSTR lpTitle;
 DWORD dwX;
 DWORD dwY;
 DWORD dwXSize;
 DWORD dwYSize;
 DWORD dwXCountChars;
 DWORD dwYCountChars;
 DWORD dwFillAttribute;
 DWORD dwFlags;
 WORD wShowWindow;
 WORD cbReserved2;
 PBYTE lpReserved2;
 HANDLE hStdInput;
 HANDLE hStdOutput;
 HANDLE hStdError;
} STARTUPINFOW,*LPSTARTUPINFOW;
typedef struct _PROCESS_INFORMATION {
 HANDLE hProcess;
 HANDLE hThread;
 DWORD dwProcessId;
 DWORD dwThreadId;
} PROCESS_INFORMATION,*LPPROCESS_INFORMATION;
typedef struct _CRITICAL_SECTION_DEBUG {
 WORD Type;
 WORD CreatorBackTraceIndex;
 struct _CRITICAL_SECTION *CriticalSection;
 LIST_ENTRY ProcessLocksList;
 DWORD EntryCount;
 DWORD ContentionCount;
 DWORD Spare [2];
} CRITICAL_SECTION_DEBUG,*PCRITICAL_SECTION_DEBUG;
typedef struct _CRITICAL_SECTION {
 PCRITICAL_SECTION_DEBUG DebugInfo;
 LONG LockCount;
 LONG RecursionCount;
 HANDLE OwningThread;
 HANDLE LockSemaphore;
 DWORD SpinCount;
} CRITICAL_SECTION,*PCRITICAL_SECTION,*LPCRITICAL_SECTION;
typedef struct _SYSTEMTIME {
 WORD wYear;
 WORD wMonth;
 WORD wDayOfWeek;
 WORD wDay;
 WORD wHour;
 WORD wMinute;
 WORD wSecond;
 WORD wMilliseconds;
} SYSTEMTIME,*LPSYSTEMTIME;
typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA,*LPWIN32_FILE_ATTRIBUTE_DATA;
typedef struct _WIN32_FIND_DATAA {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;
 DWORD dwReserved0;
 DWORD dwReserved1;
 CHAR cFileName[260];
 CHAR cAlternateFileName[14];
} WIN32_FIND_DATAA,*PWIN32_FIND_DATAA,*LPWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAW {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;
 DWORD dwReserved0;
 DWORD dwReserved1;
 WCHAR cFileName[260];
 WCHAR cAlternateFileName[14];
} WIN32_FIND_DATAW,*PWIN32_FIND_DATAW,*LPWIN32_FIND_DATAW;
typedef struct _WIN32_STREAM_ID {
 DWORD dwStreamId;
 DWORD dwStreamAttributes;
 LARGE_INTEGER Size;
 DWORD dwStreamNameSize;
 WCHAR cStreamName[1];
} WIN32_STREAM_ID;
typedef enum _FINDEX_INFO_LEVELS {
 FindExInfoStandard,
 FindExInfoMaxInfoLevel
} FINDEX_INFO_LEVELS;
typedef enum _FINDEX_SEARCH_OPS {
 FindExSearchNameMatch,
 FindExSearchLimitToDirectories,
 FindExSearchLimitToDevices,
 FindExSearchMaxSearchOp
} FINDEX_SEARCH_OPS;
typedef enum _ACL_INFORMATION_CLASS {
 AclRevisionInformation=1,
 AclSizeInformation
} ACL_INFORMATION_CLASS;
typedef struct tagHW_PROFILE_INFOA {
 DWORD dwDockInfo;
 CHAR szHwProfileGuid[39];
 CHAR szHwProfileName[80];
} HW_PROFILE_INFOA,*LPHW_PROFILE_INFOA;
typedef struct tagHW_PROFILE_INFOW {
 DWORD dwDockInfo;
 WCHAR szHwProfileGuid[39];
 WCHAR szHwProfileName[80];
} HW_PROFILE_INFOW,*LPHW_PROFILE_INFOW;
typedef enum _GET_FILEEX_INFO_LEVELS {
 GetFileExInfoStandard,
 GetFileExMaxInfoLevel
} GET_FILEEX_INFO_LEVELS;
typedef struct _SYSTEM_INFO {
 __extension__ union {
  DWORD dwOemId;
  __extension__ struct {
   WORD wProcessorArchitecture;
   WORD wReserved;
  } ;
 } ;
 DWORD dwPageSize;
 PVOID lpMinimumApplicationAddress;
 PVOID lpMaximumApplicationAddress;
 DWORD dwActiveProcessorMask;
 DWORD dwNumberOfProcessors;
 DWORD dwProcessorType;
 DWORD dwAllocationGranularity;
 WORD wProcessorLevel;
 WORD wProcessorRevision;
} SYSTEM_INFO,*LPSYSTEM_INFO;
typedef struct _SYSTEM_POWER_STATUS {
 BYTE ACLineStatus;
 BYTE BatteryFlag;
 BYTE BatteryLifePercent;
 BYTE Reserved1;
 DWORD BatteryLifeTime;
 DWORD BatteryFullLifeTime;
} SYSTEM_POWER_STATUS,*LPSYSTEM_POWER_STATUS;
typedef struct _TIME_ZONE_INFORMATION {
 LONG Bias;
 WCHAR StandardName[32];
 SYSTEMTIME StandardDate;
 LONG StandardBias;
 WCHAR DaylightName[32];
 SYSTEMTIME DaylightDate;
 LONG DaylightBias;
} TIME_ZONE_INFORMATION,*LPTIME_ZONE_INFORMATION;
typedef struct _MEMORYSTATUS {
 DWORD dwLength;
 DWORD dwMemoryLoad;
 DWORD dwTotalPhys;
 DWORD dwAvailPhys;
 DWORD dwTotalPageFile;
 DWORD dwAvailPageFile;
 DWORD dwTotalVirtual;
 DWORD dwAvailVirtual;
} MEMORYSTATUS,*LPMEMORYSTATUS;
# 883 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 3
typedef struct _LDT_ENTRY {
 WORD LimitLow;
 WORD BaseLow;
 union {
  struct {
   BYTE BaseMid;
   BYTE Flags1;
   BYTE Flags2;
   BYTE BaseHi;
  } Bytes;
  struct {
   DWORD BaseMid:8;
   DWORD Type:5;
   DWORD Dpl:2;
   DWORD Pres:1;
   DWORD LimitHi:4;
   DWORD Sys:1;
   DWORD Reserved_0:1;
   DWORD Default_Big:1;
   DWORD Granularity:1;
   DWORD BaseHi:8;
  } Bits;
 } HighWord;
} LDT_ENTRY,*PLDT_ENTRY,*LPLDT_ENTRY;
typedef struct _PROCESS_HEAP_ENTRY {
 PVOID lpData;
 DWORD cbData;
 BYTE cbOverhead;
 BYTE iRegionIndex;
 WORD wFlags;
 __extension__ union {
  struct {
   HANDLE hMem;
   DWORD dwReserved[3];
  } Block;
  struct {
   DWORD dwCommittedSize;
   DWORD dwUnCommittedSize;
   LPVOID lpFirstBlock;
   LPVOID lpLastBlock;
  } Region;
 } ;
} PROCESS_HEAP_ENTRY,*LPPROCESS_HEAP_ENTRY;
typedef struct _OFSTRUCT {
 BYTE cBytes;
 BYTE fFixedDisk;
 WORD nErrCode;
 WORD Reserved1;
 WORD Reserved2;
 CHAR szPathName[128];
} OFSTRUCT,*LPOFSTRUCT,*POFSTRUCT;
typedef struct _WIN_CERTIFICATE {
      DWORD dwLength;
      WORD wRevision;
      WORD wCertificateType;
      BYTE bCertificate[1];
} WIN_CERTIFICATE, *LPWIN_CERTIFICATE;

typedef DWORD(__attribute__((__stdcall__)) *LPPROGRESS_ROUTINE)(LARGE_INTEGER,LARGE_INTEGER,LARGE_INTEGER,LARGE_INTEGER,DWORD,DWORD,HANDLE,HANDLE,LPVOID);
typedef void(__attribute__((__stdcall__)) *LPFIBER_START_ROUTINE)(PVOID);
typedef BOOL(__attribute__((__stdcall__)) *ENUMRESLANGPROC)(HMODULE,LPCTSTR,LPCTSTR,WORD,LONG);
typedef BOOL(__attribute__((__stdcall__)) *ENUMRESNAMEPROC)(HMODULE,LPCTSTR,LPTSTR,LONG);
typedef BOOL(__attribute__((__stdcall__)) *ENUMRESTYPEPROC)(HMODULE,LPTSTR,LONG);
typedef void(__attribute__((__stdcall__)) *LPOVERLAPPED_COMPLETION_ROUTINE)(DWORD,DWORD,LPOVERLAPPED);
typedef LONG(__attribute__((__stdcall__)) *PTOP_LEVEL_EXCEPTION_FILTER)(LPEXCEPTION_POINTERS);
typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;
typedef void(__attribute__((__stdcall__)) *PAPCFUNC)(DWORD);
typedef void(__attribute__((__stdcall__)) *PTIMERAPCROUTINE)(PVOID,DWORD,DWORD);



int __attribute__((__stdcall__)) WinMain(HINSTANCE,HINSTANCE,LPSTR,int);



int __attribute__((__stdcall__)) wWinMain(HINSTANCE,HINSTANCE,LPWSTR,int);
long __attribute__((__stdcall__)) _hread(HFILE,LPVOID,long);
long __attribute__((__stdcall__)) _hwrite(HFILE,LPCSTR,long);
HFILE __attribute__((__stdcall__)) _lclose(HFILE);
HFILE __attribute__((__stdcall__)) _lcreat(LPCSTR,int);
LONG __attribute__((__stdcall__)) _llseek(HFILE,LONG,int);
HFILE __attribute__((__stdcall__)) _lopen(LPCSTR,int);
UINT __attribute__((__stdcall__)) _lread(HFILE,LPVOID,UINT);
UINT __attribute__((__stdcall__)) _lwrite(HFILE,LPCSTR,UINT);

BOOL __attribute__((__stdcall__)) AccessCheck(PSECURITY_DESCRIPTOR,HANDLE,DWORD,PGENERIC_MAPPING,PPRIVILEGE_SET,PDWORD,PDWORD,PBOOL);
BOOL __attribute__((__stdcall__)) AccessCheckAndAuditAlarmA(LPCSTR,LPVOID,LPSTR,LPSTR,PSECURITY_DESCRIPTOR,DWORD,PGENERIC_MAPPING,BOOL,PDWORD,PBOOL,PBOOL);
BOOL __attribute__((__stdcall__)) AccessCheckAndAuditAlarmW(LPCWSTR,LPVOID,LPWSTR,LPWSTR,PSECURITY_DESCRIPTOR,DWORD,PGENERIC_MAPPING,BOOL,PDWORD,PBOOL,PBOOL);
BOOL __attribute__((__stdcall__)) AddAccessAllowedAce(PACL,DWORD,DWORD,PSID);
BOOL __attribute__((__stdcall__)) AddAccessDeniedAce(PACL,DWORD,DWORD,PSID);




BOOL __attribute__((__stdcall__)) AddAce(PACL,DWORD,DWORD,PVOID,DWORD);
ATOM __attribute__((__stdcall__)) AddAtomA(LPCSTR);
ATOM __attribute__((__stdcall__)) AddAtomW(LPCWSTR);
BOOL __attribute__((__stdcall__)) AddAuditAccessAce(PACL,DWORD,DWORD,PSID,BOOL,BOOL);
BOOL __attribute__((__stdcall__)) AdjustTokenGroups(HANDLE,BOOL,PTOKEN_GROUPS,DWORD,PTOKEN_GROUPS,PDWORD);
BOOL __attribute__((__stdcall__)) AdjustTokenPrivileges(HANDLE,BOOL,PTOKEN_PRIVILEGES,DWORD,PTOKEN_PRIVILEGES,PDWORD);
BOOL __attribute__((__stdcall__)) AllocateAndInitializeSid(PSID_IDENTIFIER_AUTHORITY,BYTE,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,PSID*);
BOOL __attribute__((__stdcall__)) AllocateLocallyUniqueId(PLUID);
BOOL __attribute__((__stdcall__)) AreAllAccessesGranted(DWORD,DWORD);
BOOL __attribute__((__stdcall__)) AreAnyAccessesGranted(DWORD,DWORD);
BOOL __attribute__((__stdcall__)) AreFileApisANSI(void);
BOOL __attribute__((__stdcall__)) BackupEventLogA(HANDLE,LPCSTR);
BOOL __attribute__((__stdcall__)) BackupEventLogW(HANDLE,LPCWSTR);
BOOL __attribute__((__stdcall__)) BackupRead(HANDLE,LPBYTE,DWORD,LPDWORD,BOOL,BOOL,LPVOID*);
BOOL __attribute__((__stdcall__)) BackupSeek(HANDLE,DWORD,DWORD,LPDWORD,LPDWORD,LPVOID*);
BOOL __attribute__((__stdcall__)) BackupWrite(HANDLE,LPBYTE,DWORD,LPDWORD,BOOL,BOOL,LPVOID*);
BOOL __attribute__((__stdcall__)) Beep(DWORD,DWORD);
HANDLE __attribute__((__stdcall__)) BeginUpdateResourceA(LPCSTR,BOOL);
HANDLE __attribute__((__stdcall__)) BeginUpdateResourceW(LPCWSTR,BOOL);
BOOL __attribute__((__stdcall__)) BuildCommDCBA(LPCSTR,LPDCB);
BOOL __attribute__((__stdcall__)) BuildCommDCBW(LPCWSTR,LPDCB);
BOOL __attribute__((__stdcall__)) BuildCommDCBAndTimeoutsA(LPCSTR,LPDCB,LPCOMMTIMEOUTS);
BOOL __attribute__((__stdcall__)) BuildCommDCBAndTimeoutsW(LPCWSTR,LPDCB,LPCOMMTIMEOUTS);
BOOL __attribute__((__stdcall__)) CallNamedPipeA(LPCSTR,PVOID,DWORD,PVOID,DWORD,PDWORD,DWORD);
BOOL __attribute__((__stdcall__)) CallNamedPipeW(LPCWSTR,PVOID,DWORD,PVOID,DWORD,PDWORD,DWORD);
BOOL __attribute__((__stdcall__)) CancelIo(HANDLE);
BOOL __attribute__((__stdcall__)) CancelWaitableTimer(HANDLE);
BOOL __attribute__((__stdcall__)) ClearCommBreak(HANDLE);
BOOL __attribute__((__stdcall__)) ClearCommError(HANDLE,PDWORD,LPCOMSTAT);
BOOL __attribute__((__stdcall__)) ClearEventLogA(HANDLE,LPCSTR);
BOOL __attribute__((__stdcall__)) ClearEventLogW(HANDLE,LPCWSTR);
BOOL __attribute__((__stdcall__)) CloseEventLog(HANDLE);
BOOL __attribute__((__stdcall__)) CloseHandle(HANDLE);
BOOL __attribute__((__stdcall__)) CommConfigDialogA(LPCSTR,HWND,LPCOMMCONFIG);
BOOL __attribute__((__stdcall__)) CommConfigDialogW(LPCWSTR,HWND,LPCOMMCONFIG);
LONG __attribute__((__stdcall__)) CompareFileTime(const FILETIME*,const FILETIME*);
BOOL __attribute__((__stdcall__)) ConnectNamedPipe(HANDLE,LPOVERLAPPED);
BOOL __attribute__((__stdcall__)) ContinueDebugEvent(DWORD,DWORD,DWORD);
PVOID __attribute__((__stdcall__)) ConvertThreadToFiber(PVOID);
BOOL __attribute__((__stdcall__)) CopyFileA(LPCSTR,LPCSTR,BOOL);
BOOL __attribute__((__stdcall__)) CopyFileW(LPCWSTR,LPCWSTR,BOOL);
BOOL __attribute__((__stdcall__)) CopyFileExA(LPCSTR,LPCSTR,LPPROGRESS_ROUTINE,LPVOID,LPBOOL,DWORD);
BOOL __attribute__((__stdcall__)) CopyFileExW(LPCWSTR,LPCWSTR,LPPROGRESS_ROUTINE,LPVOID,LPBOOL,DWORD);
# 1028 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 3
BOOL __attribute__((__stdcall__)) CopySid(DWORD,PSID,PSID);
BOOL __attribute__((__stdcall__)) CreateDirectoryA(LPCSTR,LPSECURITY_ATTRIBUTES);
BOOL __attribute__((__stdcall__)) CreateDirectoryW(LPCWSTR,LPSECURITY_ATTRIBUTES);
BOOL __attribute__((__stdcall__)) CreateDirectoryExA(LPCSTR,LPCSTR,LPSECURITY_ATTRIBUTES);
BOOL __attribute__((__stdcall__)) CreateDirectoryExW(LPCWSTR,LPCWSTR,LPSECURITY_ATTRIBUTES);
HANDLE __attribute__((__stdcall__)) CreateEventA(LPSECURITY_ATTRIBUTES,BOOL,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) CreateEventW(LPSECURITY_ATTRIBUTES,BOOL,BOOL,LPCWSTR);
LPVOID __attribute__((__stdcall__)) CreateFiber(SIZE_T,LPFIBER_START_ROUTINE,LPVOID);
LPVOID __attribute__((__stdcall__)) CreateFiberEx(SIZE_T,SIZE_T,DWORD,LPFIBER_START_ROUTINE,LPVOID);
HANDLE __attribute__((__stdcall__)) CreateFileA(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE);
HANDLE __attribute__((__stdcall__)) CreateFileW(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE);
HANDLE __attribute__((__stdcall__)) CreateFileMappingA(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,DWORD,DWORD,LPCSTR);
HANDLE __attribute__((__stdcall__)) CreateFileMappingW(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,DWORD,DWORD,LPCWSTR);




HANDLE __attribute__((__stdcall__)) CreateIoCompletionPort(HANDLE,HANDLE,DWORD,DWORD);






HANDLE __attribute__((__stdcall__)) CreateMailslotA(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HANDLE __attribute__((__stdcall__)) CreateMailslotW(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HANDLE __attribute__((__stdcall__)) CreateMutexA(LPSECURITY_ATTRIBUTES,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) CreateMutexW(LPSECURITY_ATTRIBUTES,BOOL,LPCWSTR);
HANDLE __attribute__((__stdcall__)) CreateNamedPipeA(LPCSTR,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HANDLE __attribute__((__stdcall__)) CreateNamedPipeW(LPCWSTR,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
BOOL __attribute__((__stdcall__)) CreatePipe(PHANDLE,PHANDLE,LPSECURITY_ATTRIBUTES,DWORD);
BOOL __attribute__((__stdcall__)) CreatePrivateObjectSecurity(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR*,BOOL,HANDLE,PGENERIC_MAPPING);
BOOL __attribute__((__stdcall__)) CreateProcessA(LPCSTR,LPSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCSTR,LPSTARTUPINFOA,LPPROCESS_INFORMATION);
BOOL __attribute__((__stdcall__)) CreateProcessW(LPCWSTR,LPWSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCWSTR,LPSTARTUPINFOW,LPPROCESS_INFORMATION);
BOOL __attribute__((__stdcall__)) CreateProcessAsUserA(HANDLE,LPCSTR,LPSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCSTR,LPSTARTUPINFOA,LPPROCESS_INFORMATION);
BOOL __attribute__((__stdcall__)) CreateProcessAsUserW(HANDLE,LPCWSTR,LPWSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCWSTR,LPSTARTUPINFOW,LPPROCESS_INFORMATION);
HANDLE __attribute__((__stdcall__)) CreateRemoteThread(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,LPTHREAD_START_ROUTINE,LPVOID,DWORD,LPDWORD);
HANDLE __attribute__((__stdcall__)) CreateSemaphoreA(LPSECURITY_ATTRIBUTES,LONG,LONG,LPCSTR);
HANDLE __attribute__((__stdcall__)) CreateSemaphoreW(LPSECURITY_ATTRIBUTES,LONG,LONG,LPCWSTR);
DWORD __attribute__((__stdcall__)) CreateTapePartition(HANDLE,DWORD,DWORD,DWORD);
HANDLE __attribute__((__stdcall__)) CreateThread(LPSECURITY_ATTRIBUTES,DWORD,LPTHREAD_START_ROUTINE,PVOID,DWORD,PDWORD);
HANDLE __attribute__((__stdcall__)) CreateWaitableTimerA(LPSECURITY_ATTRIBUTES,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) CreateWaitableTimerW(LPSECURITY_ATTRIBUTES,BOOL,LPCWSTR);
BOOL __attribute__((__stdcall__)) DebugActiveProcess(DWORD);
void __attribute__((__stdcall__)) DebugBreak(void);
BOOL __attribute__((__stdcall__)) DefineDosDeviceA(DWORD,LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) DefineDosDeviceW(DWORD,LPCWSTR,LPCWSTR);

BOOL __attribute__((__stdcall__)) DeleteAce(PACL,DWORD);
ATOM __attribute__((__stdcall__)) DeleteAtom(ATOM);
void __attribute__((__stdcall__)) DeleteCriticalSection(PCRITICAL_SECTION);
void __attribute__((__stdcall__)) DeleteFiber(PVOID);
BOOL __attribute__((__stdcall__)) DeleteFileA(LPCSTR);
BOOL __attribute__((__stdcall__)) DeleteFileW(LPCWSTR);




BOOL __attribute__((__stdcall__)) DeregisterEventSource(HANDLE);
BOOL __attribute__((__stdcall__)) DestroyPrivateObjectSecurity(PSECURITY_DESCRIPTOR*);
BOOL __attribute__((__stdcall__)) DeviceIoControl(HANDLE,DWORD,PVOID,DWORD,PVOID,DWORD,PDWORD,POVERLAPPED);
BOOL __attribute__((__stdcall__)) DisableThreadLibraryCalls(HMODULE);
BOOL __attribute__((__stdcall__)) DisconnectNamedPipe(HANDLE);
BOOL __attribute__((__stdcall__)) DosDateTimeToFileTime(WORD,WORD,LPFILETIME);
BOOL __attribute__((__stdcall__)) DuplicateHandle(HANDLE,HANDLE,HANDLE,PHANDLE,DWORD,BOOL,DWORD);
BOOL __attribute__((__stdcall__)) DuplicateToken(HANDLE,SECURITY_IMPERSONATION_LEVEL,PHANDLE);
BOOL __attribute__((__stdcall__)) DuplicateTokenEx(HANDLE,DWORD,LPSECURITY_ATTRIBUTES,SECURITY_IMPERSONATION_LEVEL,TOKEN_TYPE,PHANDLE);
BOOL __attribute__((__stdcall__)) EncryptFileA(LPCSTR);
BOOL __attribute__((__stdcall__)) EncryptFileW(LPCWSTR);
BOOL __attribute__((__stdcall__)) EndUpdateResourceA(HANDLE,BOOL);
BOOL __attribute__((__stdcall__)) EndUpdateResourceW(HANDLE,BOOL);
void __attribute__((__stdcall__)) EnterCriticalSection(LPCRITICAL_SECTION);
BOOL __attribute__((__stdcall__)) EnumResourceLanguagesA(HMODULE,LPCSTR,LPCSTR,ENUMRESLANGPROC,LONG_PTR);
BOOL __attribute__((__stdcall__)) EnumResourceLanguagesW(HMODULE,LPCWSTR,LPCWSTR,ENUMRESLANGPROC,LONG_PTR);
BOOL __attribute__((__stdcall__)) EnumResourceNamesA(HMODULE,LPCSTR,ENUMRESNAMEPROC,LONG_PTR);
BOOL __attribute__((__stdcall__)) EnumResourceNamesW(HMODULE,LPCWSTR,ENUMRESNAMEPROC,LONG_PTR);
BOOL __attribute__((__stdcall__)) EnumResourceTypesA(HMODULE,ENUMRESTYPEPROC,LONG_PTR);
BOOL __attribute__((__stdcall__)) EnumResourceTypesW(HMODULE,ENUMRESTYPEPROC,LONG_PTR);
BOOL __attribute__((__stdcall__)) EqualPrefixSid(PSID,PSID);
BOOL __attribute__((__stdcall__)) EqualSid(PSID,PSID);
DWORD __attribute__((__stdcall__)) EraseTape(HANDLE,DWORD,BOOL);
BOOL __attribute__((__stdcall__)) EscapeCommFunction(HANDLE,DWORD);
__attribute__((noreturn)) void __attribute__((__stdcall__)) ExitProcess(UINT);
__attribute__((noreturn)) void __attribute__((__stdcall__)) ExitThread(DWORD);
DWORD __attribute__((__stdcall__)) ExpandEnvironmentStringsA(LPCSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) ExpandEnvironmentStringsW(LPCWSTR,LPWSTR,DWORD);
void __attribute__((__stdcall__)) FatalAppExitA(UINT,LPCSTR);
void __attribute__((__stdcall__)) FatalAppExitW(UINT,LPCWSTR);
void __attribute__((__stdcall__)) FatalExit(int);
BOOL __attribute__((__stdcall__)) FileEncryptionStatusA(LPCSTR,LPDWORD);
BOOL __attribute__((__stdcall__)) FileEncryptionStatusW(LPCWSTR,LPDWORD);
BOOL __attribute__((__stdcall__)) FileTimeToDosDateTime(const FILETIME *,LPWORD,LPWORD);
BOOL __attribute__((__stdcall__)) FileTimeToLocalFileTime(const FILETIME *,LPFILETIME);
BOOL __attribute__((__stdcall__)) FileTimeToSystemTime(const FILETIME *,LPSYSTEMTIME);
ATOM __attribute__((__stdcall__)) FindAtomA(LPCSTR);
ATOM __attribute__((__stdcall__)) FindAtomW(LPCWSTR);
BOOL __attribute__((__stdcall__)) FindClose(HANDLE);
BOOL __attribute__((__stdcall__)) FindCloseChangeNotification(HANDLE);
HANDLE __attribute__((__stdcall__)) FindFirstChangeNotificationA(LPCSTR,BOOL,DWORD);
HANDLE __attribute__((__stdcall__)) FindFirstChangeNotificationW(LPCWSTR,BOOL,DWORD);
HANDLE __attribute__((__stdcall__)) FindFirstFileA(LPCSTR,LPWIN32_FIND_DATAA);
HANDLE __attribute__((__stdcall__)) FindFirstFileW(LPCWSTR,LPWIN32_FIND_DATAW);
HANDLE __attribute__((__stdcall__)) FindFirstFileExA(LPCSTR,FINDEX_INFO_LEVELS,PVOID,FINDEX_SEARCH_OPS,PVOID,DWORD);
HANDLE __attribute__((__stdcall__)) FindFirstFileExW(LPCWSTR,FINDEX_INFO_LEVELS,PVOID,FINDEX_SEARCH_OPS,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) FindFirstFreeAce(PACL,PVOID*);






BOOL __attribute__((__stdcall__)) FindNextChangeNotification(HANDLE);
BOOL __attribute__((__stdcall__)) FindNextFileA(HANDLE,LPWIN32_FIND_DATAA);
BOOL __attribute__((__stdcall__)) FindNextFileW(HANDLE,LPWIN32_FIND_DATAW);
# 1150 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 3
HRSRC __attribute__((__stdcall__)) FindResourceA(HMODULE,LPCSTR,LPCSTR);
HRSRC __attribute__((__stdcall__)) FindResourceW(HINSTANCE,LPCWSTR,LPCWSTR);
HRSRC __attribute__((__stdcall__)) FindResourceExA(HINSTANCE,LPCSTR,LPCSTR,WORD);
HRSRC __attribute__((__stdcall__)) FindResourceExW(HINSTANCE,LPCWSTR,LPCWSTR,WORD);
BOOL __attribute__((__stdcall__)) FlushFileBuffers(HANDLE);
BOOL __attribute__((__stdcall__)) FlushInstructionCache(HANDLE,PCVOID,DWORD);
BOOL __attribute__((__stdcall__)) FlushViewOfFile(PCVOID,DWORD);
DWORD __attribute__((__stdcall__)) FormatMessageA(DWORD,PCVOID,DWORD,DWORD,LPSTR,DWORD,va_list*);
DWORD __attribute__((__stdcall__)) FormatMessageW(DWORD,PCVOID,DWORD,DWORD,LPWSTR,DWORD,va_list*);
BOOL __attribute__((__stdcall__)) FreeEnvironmentStringsA(LPSTR);
BOOL __attribute__((__stdcall__)) FreeEnvironmentStringsW(LPWSTR);
BOOL __attribute__((__stdcall__)) FreeLibrary(HMODULE);
__attribute__((noreturn)) void __attribute__((__stdcall__)) FreeLibraryAndExitThread(HMODULE,DWORD);



BOOL __attribute__((__stdcall__)) FreeResource(HGLOBAL);

PVOID __attribute__((__stdcall__)) FreeSid(PSID);
BOOL __attribute__((__stdcall__)) GetAce(PACL,DWORD,LPVOID*);
BOOL __attribute__((__stdcall__)) GetAclInformation(PACL,PVOID,DWORD,ACL_INFORMATION_CLASS);
UINT __attribute__((__stdcall__)) GetAtomNameA(ATOM,LPSTR,int);
UINT __attribute__((__stdcall__)) GetAtomNameW(ATOM,LPWSTR,int);
BOOL __attribute__((__stdcall__)) GetBinaryTypeA(LPCSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetBinaryTypeW(LPCWSTR,PDWORD);
LPSTR __attribute__((__stdcall__)) GetCommandLineA(void);
LPWSTR __attribute__((__stdcall__)) GetCommandLineW(void);
BOOL __attribute__((__stdcall__)) GetCommConfig(HANDLE,LPCOMMCONFIG,PDWORD);
BOOL __attribute__((__stdcall__)) GetCommMask(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetCommModemStatus(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetCommProperties(HANDLE,LPCOMMPROP);
BOOL __attribute__((__stdcall__)) GetCommState(HANDLE,LPDCB);
BOOL __attribute__((__stdcall__)) GetCommTimeouts(HANDLE,LPCOMMTIMEOUTS);
DWORD __attribute__((__stdcall__)) GetCompressedFileSizeA(LPCSTR,PDWORD);
DWORD __attribute__((__stdcall__)) GetCompressedFileSizeW(LPCWSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetComputerNameA(LPSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetComputerNameW(LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) GetCurrentDirectoryA(DWORD,LPSTR);
DWORD __attribute__((__stdcall__)) GetCurrentDirectoryW(DWORD,LPWSTR);
BOOL __attribute__((__stdcall__)) GetCurrentHwProfileA(LPHW_PROFILE_INFOA);
BOOL __attribute__((__stdcall__)) GetCurrentHwProfileW(LPHW_PROFILE_INFOW);
HANDLE __attribute__((__stdcall__)) GetCurrentProcess(void);
DWORD __attribute__((__stdcall__)) GetCurrentProcessId(void);
HANDLE __attribute__((__stdcall__)) GetCurrentThread(void);
DWORD __attribute__((__stdcall__)) GetCurrentThreadId(void);

BOOL __attribute__((__stdcall__)) GetDefaultCommConfigA(LPCSTR,LPCOMMCONFIG,PDWORD);
BOOL __attribute__((__stdcall__)) GetDefaultCommConfigW(LPCWSTR,LPCOMMCONFIG,PDWORD);
BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceA(LPCSTR,PDWORD,PDWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceW(LPCWSTR,PDWORD,PDWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceExA(LPCSTR,PULARGE_INTEGER,PULARGE_INTEGER,PULARGE_INTEGER);
BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceExW(LPCWSTR,PULARGE_INTEGER,PULARGE_INTEGER,PULARGE_INTEGER);
UINT __attribute__((__stdcall__)) GetDriveTypeA(LPCSTR);
UINT __attribute__((__stdcall__)) GetDriveTypeW(LPCWSTR);
LPSTR __attribute__((__stdcall__)) GetEnvironmentStrings(void);
LPSTR __attribute__((__stdcall__)) GetEnvironmentStringsA(void);
LPWSTR __attribute__((__stdcall__)) GetEnvironmentStringsW(void);
DWORD __attribute__((__stdcall__)) GetEnvironmentVariableA(LPCSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetEnvironmentVariableW(LPCWSTR,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) GetExitCodeProcess(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetExitCodeThread(HANDLE,PDWORD);
DWORD __attribute__((__stdcall__)) GetFileAttributesA(LPCSTR);
DWORD __attribute__((__stdcall__)) GetFileAttributesW(LPCWSTR);
BOOL __attribute__((__stdcall__)) GetFileAttributesExA(LPCSTR,GET_FILEEX_INFO_LEVELS,PVOID);
BOOL __attribute__((__stdcall__)) GetFileAttributesExW(LPCWSTR,GET_FILEEX_INFO_LEVELS,PVOID);
BOOL __attribute__((__stdcall__)) GetFileInformationByHandle(HANDLE,LPBY_HANDLE_FILE_INFORMATION);
BOOL __attribute__((__stdcall__)) GetFileSecurityA(LPCSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetFileSecurityW(LPCWSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetFileSize(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetFileSizeEx(HANDLE,PLARGE_INTEGER);
BOOL __attribute__((__stdcall__)) GetFileTime(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME);
DWORD __attribute__((__stdcall__)) GetFileType(HANDLE);

DWORD __attribute__((__stdcall__)) GetFullPathNameA(LPCSTR,DWORD,LPSTR,LPSTR*);
DWORD __attribute__((__stdcall__)) GetFullPathNameW(LPCWSTR,DWORD,LPWSTR,LPWSTR*);
BOOL __attribute__((__stdcall__)) GetHandleInformation(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetKernelObjectSecurity(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetLengthSid(PSID);
void __attribute__((__stdcall__)) GetLocalTime(LPSYSTEMTIME);
DWORD __attribute__((__stdcall__)) GetLogicalDrives(void);
DWORD __attribute__((__stdcall__)) GetLogicalDriveStringsA(DWORD,LPSTR);
DWORD __attribute__((__stdcall__)) GetLogicalDriveStringsW(DWORD,LPWSTR);




BOOL __attribute__((__stdcall__)) GetMailslotInfo(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetModuleFileNameA(HINSTANCE,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetModuleFileNameW(HINSTANCE,LPWSTR,DWORD);
HMODULE __attribute__((__stdcall__)) GetModuleHandleA(LPCSTR);
HMODULE __attribute__((__stdcall__)) GetModuleHandleW(LPCWSTR);




BOOL __attribute__((__stdcall__)) GetNamedPipeHandleStateA(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD,LPSTR,DWORD);
BOOL __attribute__((__stdcall__)) GetNamedPipeHandleStateW(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) GetNamedPipeInfo(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetNumberOfEventLogRecords(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetOldestEventLogRecord(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetOverlappedResult(HANDLE,LPOVERLAPPED,PDWORD,BOOL);
DWORD __attribute__((__stdcall__)) GetPriorityClass(HANDLE);
BOOL __attribute__((__stdcall__)) GetPrivateObjectSecurity(PSECURITY_DESCRIPTOR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
UINT __attribute__((__stdcall__)) GetPrivateProfileIntA(LPCSTR,LPCSTR,INT,LPCSTR);
UINT __attribute__((__stdcall__)) GetPrivateProfileIntW(LPCWSTR,LPCWSTR,INT,LPCWSTR);
DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionA(LPCSTR,LPSTR,DWORD,LPCSTR);
DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionW(LPCWSTR,LPWSTR,DWORD,LPCWSTR);
DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionNamesA(LPSTR,DWORD,LPCSTR);
DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionNamesW(LPWSTR,DWORD,LPCWSTR);
DWORD __attribute__((__stdcall__)) GetPrivateProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPSTR,DWORD,LPCSTR);
DWORD __attribute__((__stdcall__)) GetPrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,DWORD,LPCWSTR);
BOOL __attribute__((__stdcall__)) GetPrivateProfileStructA(LPCSTR,LPCSTR,LPVOID,UINT,LPCSTR);
BOOL __attribute__((__stdcall__)) GetPrivateProfileStructW(LPCWSTR,LPCWSTR,LPVOID,UINT,LPCWSTR);
FARPROC __attribute__((__stdcall__)) GetProcAddress(HINSTANCE,LPCSTR);
BOOL __attribute__((__stdcall__)) GetProcessAffinityMask(HANDLE,PDWORD,PDWORD);
HANDLE __attribute__((__stdcall__)) GetProcessHeap(void);
DWORD __attribute__((__stdcall__)) GetProcessHeaps(DWORD,PHANDLE);
BOOL __attribute__((__stdcall__)) GetProcessPriorityBoost(HANDLE,PBOOL);
BOOL __attribute__((__stdcall__)) GetProcessShutdownParameters(PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetProcessTimes(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME,LPFILETIME);
DWORD __attribute__((__stdcall__)) GetProcessVersion(DWORD);
HWINSTA __attribute__((__stdcall__)) GetProcessWindowStation(void);
BOOL __attribute__((__stdcall__)) GetProcessWorkingSetSize(HANDLE,PSIZE_T,PSIZE_T);
UINT __attribute__((__stdcall__)) GetProfileIntA(LPCSTR,LPCSTR,INT);
UINT __attribute__((__stdcall__)) GetProfileIntW(LPCWSTR,LPCWSTR,INT);
DWORD __attribute__((__stdcall__)) GetProfileSectionA(LPCSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetProfileSectionW(LPCWSTR,LPWSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) GetQueuedCompletionStatus(HANDLE,PDWORD,PDWORD,LPOVERLAPPED*,DWORD);
BOOL __attribute__((__stdcall__)) GetSecurityDescriptorControl(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR_CONTROL,PDWORD);
BOOL __attribute__((__stdcall__)) GetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR,LPBOOL,PACL*,LPBOOL);
BOOL __attribute__((__stdcall__)) GetSecurityDescriptorGroup(PSECURITY_DESCRIPTOR,PSID*,LPBOOL);
DWORD __attribute__((__stdcall__)) GetSecurityDescriptorLength(PSECURITY_DESCRIPTOR);
BOOL __attribute__((__stdcall__)) GetSecurityDescriptorOwner(PSECURITY_DESCRIPTOR,PSID*,LPBOOL);
BOOL __attribute__((__stdcall__)) GetSecurityDescriptorSacl(PSECURITY_DESCRIPTOR,LPBOOL,PACL*,LPBOOL);
DWORD __attribute__((__stdcall__)) GetShortPathNameA(LPCSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetShortPathNameW(LPCWSTR,LPWSTR,DWORD);
PSID_IDENTIFIER_AUTHORITY __attribute__((__stdcall__)) GetSidIdentifierAuthority(PSID);
DWORD __attribute__((__stdcall__)) GetSidLengthRequired(UCHAR);
PDWORD __attribute__((__stdcall__)) GetSidSubAuthority(PSID,DWORD);
PUCHAR __attribute__((__stdcall__)) GetSidSubAuthorityCount(PSID);
void __attribute__((__stdcall__)) GetStartupInfoA(LPSTARTUPINFOA);
void __attribute__((__stdcall__)) GetStartupInfoW(LPSTARTUPINFOW);
HANDLE __attribute__((__stdcall__)) GetStdHandle(DWORD);
UINT __attribute__((__stdcall__)) GetSystemDirectoryA(LPSTR,UINT);
UINT __attribute__((__stdcall__)) GetSystemDirectoryW(LPWSTR,UINT);
void __attribute__((__stdcall__)) GetSystemInfo(LPSYSTEM_INFO);
BOOL __attribute__((__stdcall__)) GetSystemPowerStatus(LPSYSTEM_POWER_STATUS);
void __attribute__((__stdcall__)) GetSystemTime(LPSYSTEMTIME);



BOOL __attribute__((__stdcall__)) GetSystemTimeAdjustment(PDWORD,PDWORD,PBOOL);
void __attribute__((__stdcall__)) GetSystemTimeAsFileTime(LPFILETIME);
DWORD __attribute__((__stdcall__)) GetTapeParameters(HANDLE,DWORD,PDWORD,PVOID);
DWORD __attribute__((__stdcall__)) GetTapePosition(HANDLE,DWORD,PDWORD,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetTapeStatus(HANDLE);
UINT __attribute__((__stdcall__)) GetTempFileNameA(LPCSTR,LPCSTR,UINT,LPSTR);
UINT __attribute__((__stdcall__)) GetTempFileNameW(LPCWSTR,LPCWSTR,UINT,LPWSTR);
DWORD __attribute__((__stdcall__)) GetTempPathA(DWORD,LPSTR);
DWORD __attribute__((__stdcall__)) GetTempPathW(DWORD,LPWSTR);
BOOL __attribute__((__stdcall__)) GetThreadContext(HANDLE,LPCONTEXT);
int __attribute__((__stdcall__)) GetThreadPriority(HANDLE);
BOOL __attribute__((__stdcall__)) GetThreadPriorityBoost(HANDLE,PBOOL);
BOOL __attribute__((__stdcall__)) GetThreadSelectorEntry(HANDLE,DWORD,LPLDT_ENTRY);
BOOL __attribute__((__stdcall__)) GetThreadTimes(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME,LPFILETIME);
DWORD __attribute__((__stdcall__)) GetTickCount(void);
DWORD __attribute__((__stdcall__)) GetTimeZoneInformation(LPTIME_ZONE_INFORMATION);
BOOL __attribute__((__stdcall__)) GetTokenInformation(HANDLE,TOKEN_INFORMATION_CLASS,PVOID,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetUserNameA (LPSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetUserNameW(LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) GetVersion(void);
BOOL __attribute__((__stdcall__)) GetVersionExA(LPOSVERSIONINFOA);
BOOL __attribute__((__stdcall__)) GetVersionExW(LPOSVERSIONINFOW);
BOOL __attribute__((__stdcall__)) GetVolumeInformationA(LPCSTR,LPSTR,DWORD,PDWORD,PDWORD,PDWORD,LPSTR,DWORD);
BOOL __attribute__((__stdcall__)) GetVolumeInformationW(LPCWSTR,LPWSTR,DWORD,PDWORD,PDWORD,PDWORD,LPWSTR,DWORD);
# 1335 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 3
UINT __attribute__((__stdcall__)) GetWindowsDirectoryA(LPSTR,UINT);
UINT __attribute__((__stdcall__)) GetWindowsDirectoryW(LPWSTR,UINT);
DWORD __attribute__((__stdcall__)) GetWindowThreadProcessId(HWND,PDWORD);
ATOM __attribute__((__stdcall__)) GlobalAddAtomA(LPCSTR);
ATOM __attribute__((__stdcall__)) GlobalAddAtomW( LPCWSTR);
HGLOBAL __attribute__((__stdcall__)) GlobalAlloc(UINT,DWORD);
SIZE_T __attribute__((__stdcall__)) GlobalCompact(DWORD);
ATOM __attribute__((__stdcall__)) GlobalDeleteAtom(ATOM);
HGLOBAL GlobalDiscard(HGLOBAL);
ATOM __attribute__((__stdcall__)) GlobalFindAtomA(LPCSTR);
ATOM __attribute__((__stdcall__)) GlobalFindAtomW(LPCWSTR);
void __attribute__((__stdcall__)) GlobalFix(HGLOBAL);
UINT __attribute__((__stdcall__)) GlobalFlags(HGLOBAL);
HGLOBAL __attribute__((__stdcall__)) GlobalFree(HGLOBAL);
UINT __attribute__((__stdcall__)) GlobalGetAtomNameA(ATOM,LPSTR,int);
UINT __attribute__((__stdcall__)) GlobalGetAtomNameW(ATOM,LPWSTR,int);
HGLOBAL __attribute__((__stdcall__)) GlobalHandle(PCVOID);
LPVOID __attribute__((__stdcall__)) GlobalLock(HGLOBAL);
void __attribute__((__stdcall__)) GlobalMemoryStatus(LPMEMORYSTATUS);



HGLOBAL __attribute__((__stdcall__)) GlobalReAlloc(HGLOBAL,DWORD,UINT);
DWORD __attribute__((__stdcall__)) GlobalSize(HGLOBAL);
void __attribute__((__stdcall__)) GlobalUnfix(HGLOBAL);
BOOL __attribute__((__stdcall__)) GlobalUnlock(HGLOBAL);
BOOL __attribute__((__stdcall__)) GlobalUnWire(HGLOBAL);
PVOID __attribute__((__stdcall__)) GlobalWire(HGLOBAL);

PVOID __attribute__((__stdcall__)) HeapAlloc(HANDLE,DWORD,DWORD);
SIZE_T __attribute__((__stdcall__)) HeapCompact(HANDLE,DWORD);
HANDLE __attribute__((__stdcall__)) HeapCreate(DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) HeapDestroy(HANDLE);
BOOL __attribute__((__stdcall__)) HeapFree(HANDLE,DWORD,PVOID);
BOOL __attribute__((__stdcall__)) HeapLock(HANDLE);
PVOID __attribute__((__stdcall__)) HeapReAlloc(HANDLE,DWORD,PVOID,DWORD);
DWORD __attribute__((__stdcall__)) HeapSize(HANDLE,DWORD,PCVOID);
BOOL __attribute__((__stdcall__)) HeapUnlock(HANDLE);
BOOL __attribute__((__stdcall__)) HeapValidate(HANDLE,DWORD,PCVOID);
BOOL __attribute__((__stdcall__)) HeapWalk(HANDLE,LPPROCESS_HEAP_ENTRY);
BOOL __attribute__((__stdcall__)) ImpersonateLoggedOnUser(HANDLE);
BOOL __attribute__((__stdcall__)) ImpersonateNamedPipeClient(HANDLE);
BOOL __attribute__((__stdcall__)) ImpersonateSelf(SECURITY_IMPERSONATION_LEVEL);
BOOL __attribute__((__stdcall__)) InitAtomTable(DWORD);
BOOL __attribute__((__stdcall__)) InitializeAcl(PACL,DWORD,DWORD);
void __attribute__((__stdcall__)) InitializeCriticalSection(LPCRITICAL_SECTION);
BOOL __attribute__((__stdcall__)) InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION,DWORD);
DWORD __attribute__((__stdcall__)) SetCriticalSectionSpinCount(LPCRITICAL_SECTION,DWORD);
BOOL __attribute__((__stdcall__)) InitializeSecurityDescriptor(PSECURITY_DESCRIPTOR,DWORD);
BOOL __attribute__((__stdcall__)) InitializeSid (PSID,PSID_IDENTIFIER_AUTHORITY,BYTE);


LONG __attribute__((__stdcall__)) InterlockedCompareExchange(LPLONG,LONG,LONG);



LONG __attribute__((__stdcall__)) InterlockedDecrement(LPLONG);
LONG __attribute__((__stdcall__)) InterlockedExchange(LPLONG,LONG);



LONG __attribute__((__stdcall__)) InterlockedExchangeAdd(LPLONG,LONG);
LONG __attribute__((__stdcall__)) InterlockedIncrement(LPLONG);

BOOL __attribute__((__stdcall__)) IsBadCodePtr(FARPROC);
BOOL __attribute__((__stdcall__)) IsBadHugeReadPtr(PCVOID,UINT);
BOOL __attribute__((__stdcall__)) IsBadHugeWritePtr(PVOID,UINT);
BOOL __attribute__((__stdcall__)) IsBadReadPtr(PCVOID,UINT);
BOOL __attribute__((__stdcall__)) IsBadStringPtrA(LPCSTR,UINT);
BOOL __attribute__((__stdcall__)) IsBadStringPtrW(LPCWSTR,UINT);
BOOL __attribute__((__stdcall__)) IsBadWritePtr(PVOID,UINT);
BOOL __attribute__((__stdcall__)) IsDebuggerPresent(void);
BOOL __attribute__((__stdcall__)) IsProcessorFeaturePresent(DWORD);
BOOL __attribute__((__stdcall__)) IsTextUnicode(PCVOID,int,LPINT);
BOOL __attribute__((__stdcall__)) IsValidAcl(PACL);
BOOL __attribute__((__stdcall__)) IsValidSecurityDescriptor(PSECURITY_DESCRIPTOR);
BOOL __attribute__((__stdcall__)) IsValidSid(PSID);
void __attribute__((__stdcall__)) LeaveCriticalSection(LPCRITICAL_SECTION);

HINSTANCE __attribute__((__stdcall__)) LoadLibraryA(LPCSTR);
HINSTANCE __attribute__((__stdcall__)) LoadLibraryExA(LPCSTR,HANDLE,DWORD);
HINSTANCE __attribute__((__stdcall__)) LoadLibraryExW(LPCWSTR,HANDLE,DWORD);
HINSTANCE __attribute__((__stdcall__)) LoadLibraryW(LPCWSTR);
DWORD __attribute__((__stdcall__)) LoadModule(LPCSTR,PVOID);
HGLOBAL __attribute__((__stdcall__)) LoadResource(HINSTANCE,HRSRC);
HLOCAL __attribute__((__stdcall__)) LocalAlloc(UINT,SIZE_T);
SIZE_T __attribute__((__stdcall__)) LocalCompact(UINT);
HLOCAL LocalDiscard(HLOCAL);
BOOL __attribute__((__stdcall__)) LocalFileTimeToFileTime(const FILETIME *,LPFILETIME);
UINT __attribute__((__stdcall__)) LocalFlags(HLOCAL);
HLOCAL __attribute__((__stdcall__)) LocalFree(HLOCAL);
HLOCAL __attribute__((__stdcall__)) LocalHandle(LPCVOID);
PVOID __attribute__((__stdcall__)) LocalLock(HLOCAL);
HLOCAL __attribute__((__stdcall__)) LocalReAlloc(HLOCAL,SIZE_T,UINT);
SIZE_T __attribute__((__stdcall__)) LocalShrink(HLOCAL,UINT);
UINT __attribute__((__stdcall__)) LocalSize(HLOCAL);
BOOL __attribute__((__stdcall__)) LocalUnlock(HLOCAL);
BOOL __attribute__((__stdcall__)) LockFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) LockFileEx(HANDLE,DWORD,DWORD,DWORD,DWORD,LPOVERLAPPED);
PVOID __attribute__((__stdcall__)) LockResource(HGLOBAL);

BOOL __attribute__((__stdcall__)) LogonUserA(LPSTR,LPSTR,LPSTR,DWORD,DWORD,PHANDLE);
BOOL __attribute__((__stdcall__)) LogonUserW(LPWSTR,LPWSTR,LPWSTR,DWORD,DWORD,PHANDLE);
BOOL __attribute__((__stdcall__)) LookupAccountNameA(LPCSTR,LPCSTR,PSID,PDWORD,LPSTR,PDWORD,PSID_NAME_USE);
BOOL __attribute__((__stdcall__)) LookupAccountNameW(LPCWSTR,LPCWSTR,PSID,PDWORD,LPWSTR,PDWORD,PSID_NAME_USE);
BOOL __attribute__((__stdcall__)) LookupAccountSidA(LPCSTR,PSID,LPSTR,PDWORD,LPSTR,PDWORD,PSID_NAME_USE);
BOOL __attribute__((__stdcall__)) LookupAccountSidW(LPCWSTR,PSID,LPWSTR,PDWORD,LPWSTR,PDWORD,PSID_NAME_USE);
BOOL __attribute__((__stdcall__)) LookupPrivilegeDisplayNameA(LPCSTR,LPCSTR,LPSTR,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) LookupPrivilegeDisplayNameW(LPCWSTR,LPCWSTR,LPWSTR,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) LookupPrivilegeNameA(LPCSTR,PLUID,LPSTR,PDWORD);
BOOL __attribute__((__stdcall__)) LookupPrivilegeNameW(LPCWSTR,PLUID,LPWSTR,PDWORD);
BOOL __attribute__((__stdcall__)) LookupPrivilegeValueA(LPCSTR,LPCSTR,PLUID);
BOOL __attribute__((__stdcall__)) LookupPrivilegeValueW(LPCWSTR,LPCWSTR,PLUID);
LPSTR __attribute__((__stdcall__)) lstrcatA(LPSTR,LPCSTR);
LPWSTR __attribute__((__stdcall__)) lstrcatW(LPWSTR,LPCWSTR);
int __attribute__((__stdcall__)) lstrcmpA(LPCSTR,LPCSTR);
int __attribute__((__stdcall__)) lstrcmpiA(LPCSTR,LPCSTR);
int __attribute__((__stdcall__)) lstrcmpiW( LPCWSTR,LPCWSTR);
int __attribute__((__stdcall__)) lstrcmpW(LPCWSTR,LPCWSTR);
LPSTR __attribute__((__stdcall__)) lstrcpyA(LPSTR,LPCSTR);
LPSTR __attribute__((__stdcall__)) lstrcpynA(LPSTR,LPCSTR,int);
LPWSTR __attribute__((__stdcall__)) lstrcpynW(LPWSTR,LPCWSTR,int);
LPWSTR __attribute__((__stdcall__)) lstrcpyW(LPWSTR,LPCWSTR);
int __attribute__((__stdcall__)) lstrlenA(LPCSTR);
int __attribute__((__stdcall__)) lstrlenW(LPCWSTR);
BOOL __attribute__((__stdcall__)) MakeAbsoluteSD(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PDWORD,PACL,PDWORD,PACL,PDWORD,PSID,PDWORD,PSID,PDWORD);

BOOL __attribute__((__stdcall__)) MakeSelfRelativeSD(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PDWORD);
void __attribute__((__stdcall__)) MapGenericMask(PDWORD,PGENERIC_MAPPING);
PVOID __attribute__((__stdcall__)) MapViewOfFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
PVOID __attribute__((__stdcall__)) MapViewOfFileEx(HANDLE,DWORD,DWORD,DWORD,DWORD,PVOID);
BOOL __attribute__((__stdcall__)) MoveFileA(LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) MoveFileExA(LPCSTR,LPCSTR,DWORD);
BOOL __attribute__((__stdcall__)) MoveFileExW(LPCWSTR,LPCWSTR,DWORD);
BOOL __attribute__((__stdcall__)) MoveFileW(LPCWSTR,LPCWSTR);
int __attribute__((__stdcall__)) MulDiv(int,int,int);
BOOL __attribute__((__stdcall__)) NotifyChangeEventLog(HANDLE,HANDLE);
BOOL __attribute__((__stdcall__)) ObjectCloseAuditAlarmA(LPCSTR,PVOID,BOOL);
BOOL __attribute__((__stdcall__)) ObjectCloseAuditAlarmW(LPCWSTR,PVOID,BOOL);
BOOL __attribute__((__stdcall__)) ObjectDeleteAuditAlarmA(LPCSTR,PVOID,BOOL);
BOOL __attribute__((__stdcall__)) ObjectDeleteAuditAlarmW(LPCWSTR,PVOID,BOOL);
BOOL __attribute__((__stdcall__)) ObjectOpenAuditAlarmA(LPCSTR,PVOID,LPSTR,LPSTR,PSECURITY_DESCRIPTOR,HANDLE,DWORD,DWORD,PPRIVILEGE_SET,BOOL,BOOL,PBOOL);
BOOL __attribute__((__stdcall__)) ObjectOpenAuditAlarmW(LPCWSTR,PVOID,LPWSTR,LPWSTR,PSECURITY_DESCRIPTOR,HANDLE,DWORD,DWORD,PPRIVILEGE_SET,BOOL,BOOL,PBOOL);
BOOL __attribute__((__stdcall__)) ObjectPrivilegeAuditAlarmA(LPCSTR,PVOID,HANDLE,DWORD,PPRIVILEGE_SET,BOOL);
BOOL __attribute__((__stdcall__)) ObjectPrivilegeAuditAlarmW(LPCWSTR,PVOID,HANDLE,DWORD,PPRIVILEGE_SET,BOOL);
HANDLE __attribute__((__stdcall__)) OpenBackupEventLogA(LPCSTR,LPCSTR);
HANDLE __attribute__((__stdcall__)) OpenBackupEventLogW(LPCWSTR,LPCWSTR);
HANDLE __attribute__((__stdcall__)) OpenEventA(DWORD,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) OpenEventLogA (LPCSTR,LPCSTR);
HANDLE __attribute__((__stdcall__)) OpenEventLogW(LPCWSTR,LPCWSTR);
HANDLE __attribute__((__stdcall__)) OpenEventW(DWORD,BOOL,LPCWSTR);
HFILE __attribute__((__stdcall__)) OpenFile(LPCSTR,LPOFSTRUCT,UINT);
HANDLE __attribute__((__stdcall__)) OpenFileMappingA(DWORD,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) OpenFileMappingW(DWORD,BOOL,LPCWSTR);
HANDLE __attribute__((__stdcall__)) OpenMutexA(DWORD,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) OpenMutexW(DWORD,BOOL,LPCWSTR);
HANDLE __attribute__((__stdcall__)) OpenProcess(DWORD,BOOL,DWORD);
BOOL __attribute__((__stdcall__)) OpenProcessToken(HANDLE,DWORD,PHANDLE);
HANDLE __attribute__((__stdcall__)) OpenSemaphoreA(DWORD,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) OpenSemaphoreW(DWORD,BOOL,LPCWSTR);



BOOL __attribute__((__stdcall__)) OpenThreadToken(HANDLE,DWORD,BOOL,PHANDLE);
HANDLE __attribute__((__stdcall__)) OpenWaitableTimerA(DWORD,BOOL,LPCSTR);
HANDLE __attribute__((__stdcall__)) OpenWaitableTimerW(DWORD,BOOL,LPCWSTR);
void __attribute__((__stdcall__)) OutputDebugStringA(LPCSTR);
void __attribute__((__stdcall__)) OutputDebugStringW(LPCWSTR);
BOOL __attribute__((__stdcall__)) PeekNamedPipe(HANDLE,PVOID,DWORD,PDWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) PostQueuedCompletionStatus(HANDLE,DWORD,DWORD,LPOVERLAPPED);
DWORD __attribute__((__stdcall__)) PrepareTape(HANDLE,DWORD,BOOL);
BOOL __attribute__((__stdcall__)) PrivilegeCheck (HANDLE,PPRIVILEGE_SET,PBOOL);
BOOL __attribute__((__stdcall__)) PrivilegedServiceAuditAlarmA(LPCSTR,LPCSTR,HANDLE,PPRIVILEGE_SET,BOOL);
BOOL __attribute__((__stdcall__)) PrivilegedServiceAuditAlarmW(LPCWSTR,LPCWSTR,HANDLE,PPRIVILEGE_SET,BOOL);
BOOL __attribute__((__stdcall__)) PulseEvent(HANDLE);
BOOL __attribute__((__stdcall__)) PurgeComm(HANDLE,DWORD);
DWORD __attribute__((__stdcall__)) QueryDosDeviceA(LPCSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) QueryDosDeviceW(LPCWSTR,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) QueryPerformanceCounter(PLARGE_INTEGER);
BOOL __attribute__((__stdcall__)) QueryPerformanceFrequency(PLARGE_INTEGER);
DWORD __attribute__((__stdcall__)) QueueUserAPC(PAPCFUNC,HANDLE,DWORD);
void __attribute__((__stdcall__)) RaiseException(DWORD,DWORD,DWORD,const DWORD*);
BOOL __attribute__((__stdcall__)) ReadDirectoryChangesW(HANDLE,PVOID,DWORD,BOOL,DWORD,PDWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
BOOL __attribute__((__stdcall__)) ReadEventLogA(HANDLE,DWORD,DWORD,PVOID,DWORD,DWORD *,DWORD *);
BOOL __attribute__((__stdcall__)) ReadEventLogW(HANDLE,DWORD,DWORD,PVOID,DWORD,DWORD *,DWORD *);
BOOL __attribute__((__stdcall__)) ReadFile(HANDLE,PVOID,DWORD,PDWORD,LPOVERLAPPED);
BOOL __attribute__((__stdcall__)) ReadFileEx(HANDLE,PVOID,DWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
BOOL __attribute__((__stdcall__)) ReadFileScatter(HANDLE,FILE_SEGMENT_ELEMENT*,DWORD,LPDWORD,LPOVERLAPPED);
BOOL __attribute__((__stdcall__)) ReadProcessMemory(HANDLE,PCVOID,PVOID,DWORD,PDWORD);
HANDLE __attribute__((__stdcall__)) RegisterEventSourceA (LPCSTR,LPCSTR);
HANDLE __attribute__((__stdcall__)) RegisterEventSourceW(LPCWSTR,LPCWSTR);
BOOL __attribute__((__stdcall__)) ReleaseMutex(HANDLE);
BOOL __attribute__((__stdcall__)) ReleaseSemaphore(HANDLE,LONG,LPLONG);
BOOL __attribute__((__stdcall__)) RemoveDirectoryA(LPCSTR);
BOOL __attribute__((__stdcall__)) RemoveDirectoryW(LPCWSTR);
BOOL __attribute__((__stdcall__)) ReportEventA(HANDLE,WORD,WORD,DWORD,PSID,WORD,DWORD,LPCSTR*,PVOID);
BOOL __attribute__((__stdcall__)) ReportEventW(HANDLE,WORD,WORD,DWORD,PSID,WORD,DWORD,LPCWSTR*,PVOID);
BOOL __attribute__((__stdcall__)) ResetEvent(HANDLE);
DWORD __attribute__((__stdcall__)) ResumeThread(HANDLE);
BOOL __attribute__((__stdcall__)) RevertToSelf(void);
DWORD __attribute__((__stdcall__)) SearchPathA(LPCSTR,LPCSTR,LPCSTR,DWORD,LPSTR,LPSTR*);
DWORD __attribute__((__stdcall__)) SearchPathW(LPCWSTR,LPCWSTR,LPCWSTR,DWORD,LPWSTR,LPWSTR*);
BOOL __attribute__((__stdcall__)) SetAclInformation(PACL,PVOID,DWORD,ACL_INFORMATION_CLASS);
BOOL __attribute__((__stdcall__)) SetCommBreak(HANDLE);
BOOL __attribute__((__stdcall__)) SetCommConfig(HANDLE,LPCOMMCONFIG,DWORD);
BOOL __attribute__((__stdcall__)) SetCommMask(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetCommState(HANDLE,LPDCB);
BOOL __attribute__((__stdcall__)) SetCommTimeouts(HANDLE,LPCOMMTIMEOUTS);
BOOL __attribute__((__stdcall__)) SetComputerNameA(LPCSTR);
BOOL __attribute__((__stdcall__)) SetComputerNameW(LPCWSTR);
BOOL __attribute__((__stdcall__)) SetCurrentDirectoryA(LPCSTR);
BOOL __attribute__((__stdcall__)) SetCurrentDirectoryW(LPCWSTR);
BOOL __attribute__((__stdcall__)) SetDefaultCommConfigA(LPCSTR,LPCOMMCONFIG,DWORD);
BOOL __attribute__((__stdcall__)) SetDefaultCommConfigW(LPCWSTR,LPCOMMCONFIG,DWORD);
BOOL __attribute__((__stdcall__)) SetEndOfFile(HANDLE);
BOOL __attribute__((__stdcall__)) SetEnvironmentVariableA(LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) SetEnvironmentVariableW(LPCWSTR,LPCWSTR);
UINT __attribute__((__stdcall__)) SetErrorMode(UINT);
BOOL __attribute__((__stdcall__)) SetEvent(HANDLE);
void __attribute__((__stdcall__)) SetFileApisToANSI(void);
void __attribute__((__stdcall__)) SetFileApisToOEM(void);
BOOL __attribute__((__stdcall__)) SetFileAttributesA(LPCSTR,DWORD);
BOOL __attribute__((__stdcall__)) SetFileAttributesW(LPCWSTR,DWORD);
DWORD __attribute__((__stdcall__)) SetFilePointer(HANDLE,LONG,PLONG,DWORD);
BOOL __attribute__((__stdcall__)) SetFilePointerEx(HANDLE,LARGE_INTEGER,PLARGE_INTEGER,DWORD);
BOOL __attribute__((__stdcall__)) SetFileSecurityA(LPCSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL __attribute__((__stdcall__)) SetFileSecurityW(LPCWSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL __attribute__((__stdcall__)) SetFileTime(HANDLE,const FILETIME*,const FILETIME*,const FILETIME*);
UINT __attribute__((__stdcall__)) SetHandleCount(UINT);
BOOL __attribute__((__stdcall__)) SetHandleInformation(HANDLE,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) SetKernelObjectSecurity(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
void __attribute__((__stdcall__)) SetLastError(DWORD);
void __attribute__((__stdcall__)) SetLastErrorEx(DWORD,DWORD);
BOOL __attribute__((__stdcall__)) SetLocalTime(const SYSTEMTIME*);
BOOL __attribute__((__stdcall__)) SetMailslotInfo(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetNamedPipeHandleState(HANDLE,PDWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) SetPriorityClass(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrivateObjectSecurity(SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR *,PGENERIC_MAPPING,HANDLE);
BOOL __attribute__((__stdcall__)) SetProcessAffinityMask(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetProcessPriorityBoost(HANDLE,BOOL);
BOOL __attribute__((__stdcall__)) SetProcessShutdownParameters(DWORD,DWORD);
BOOL __attribute__((__stdcall__)) SetProcessWorkingSetSize(HANDLE,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) SetSecurityDescriptorControl(PSECURITY_DESCRIPTOR,SECURITY_DESCRIPTOR_CONTROL,SECURITY_DESCRIPTOR_CONTROL);
BOOL __attribute__((__stdcall__)) SetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR,BOOL,PACL,BOOL);
BOOL __attribute__((__stdcall__)) SetSecurityDescriptorGroup(PSECURITY_DESCRIPTOR,PSID,BOOL);
BOOL __attribute__((__stdcall__)) SetSecurityDescriptorOwner(PSECURITY_DESCRIPTOR,PSID,BOOL);
BOOL __attribute__((__stdcall__)) SetSecurityDescriptorSacl(PSECURITY_DESCRIPTOR,BOOL,PACL,BOOL);
BOOL __attribute__((__stdcall__)) SetStdHandle(DWORD,HANDLE);

BOOL __attribute__((__stdcall__)) SetSystemPowerState(BOOL,BOOL);
BOOL __attribute__((__stdcall__)) SetSystemTime(const SYSTEMTIME*);
BOOL __attribute__((__stdcall__)) SetSystemTimeAdjustment(DWORD,BOOL);
DWORD __attribute__((__stdcall__)) SetTapeParameters(HANDLE,DWORD,PVOID);
DWORD __attribute__((__stdcall__)) SetTapePosition(HANDLE,DWORD,DWORD,DWORD,DWORD,BOOL);
DWORD __attribute__((__stdcall__)) SetThreadAffinityMask(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetThreadContext(HANDLE,const CONTEXT*);
DWORD __attribute__((__stdcall__)) SetThreadIdealProcessor(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetThreadPriority(HANDLE,int);
BOOL __attribute__((__stdcall__)) SetThreadPriorityBoost(HANDLE,BOOL);
BOOL __attribute__((__stdcall__)) SetThreadToken (PHANDLE,HANDLE);
BOOL __attribute__((__stdcall__)) SetTimeZoneInformation(const TIME_ZONE_INFORMATION *);
BOOL __attribute__((__stdcall__)) SetTokenInformation(HANDLE,TOKEN_INFORMATION_CLASS,PVOID,DWORD);
LPTOP_LEVEL_EXCEPTION_FILTER __attribute__((__stdcall__)) SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER);
BOOL __attribute__((__stdcall__)) SetupComm(HANDLE,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) SetVolumeLabelA(LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) SetVolumeLabelW(LPCWSTR,LPCWSTR);




BOOL __attribute__((__stdcall__)) SetWaitableTimer(HANDLE,const LARGE_INTEGER*,LONG,PTIMERAPCROUTINE,PVOID,BOOL);
DWORD __attribute__((__stdcall__)) SignalObjectAndWait(HANDLE,HANDLE,DWORD,BOOL);
DWORD __attribute__((__stdcall__)) SizeofResource(HINSTANCE,HRSRC);
void __attribute__((__stdcall__)) Sleep(DWORD);
DWORD __attribute__((__stdcall__)) SleepEx(DWORD,BOOL);
DWORD __attribute__((__stdcall__)) SuspendThread(HANDLE);
void __attribute__((__stdcall__)) SwitchToFiber(PVOID);
BOOL __attribute__((__stdcall__)) SwitchToThread(void);
BOOL __attribute__((__stdcall__)) SystemTimeToFileTime(const SYSTEMTIME*,LPFILETIME);
BOOL __attribute__((__stdcall__)) SystemTimeToTzSpecificLocalTime(LPTIME_ZONE_INFORMATION,LPSYSTEMTIME,LPSYSTEMTIME);
BOOL __attribute__((__stdcall__)) TerminateProcess(HANDLE,UINT);
BOOL __attribute__((__stdcall__)) TerminateThread(HANDLE,DWORD);
DWORD __attribute__((__stdcall__)) TlsAlloc(void);
BOOL __attribute__((__stdcall__)) TlsFree(DWORD);
PVOID __attribute__((__stdcall__)) TlsGetValue(DWORD);
BOOL __attribute__((__stdcall__)) TlsSetValue(DWORD,PVOID);
BOOL __attribute__((__stdcall__)) TransactNamedPipe(HANDLE,PVOID,DWORD,PVOID,DWORD,PDWORD,LPOVERLAPPED);
BOOL __attribute__((__stdcall__)) TransmitCommChar(HANDLE,char);
BOOL __attribute__((__stdcall__)) TryEnterCriticalSection(LPCRITICAL_SECTION);
LONG __attribute__((__stdcall__)) UnhandledExceptionFilter(LPEXCEPTION_POINTERS);
BOOL __attribute__((__stdcall__)) UnlockFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) UnlockFileEx(HANDLE,DWORD,DWORD,DWORD,LPOVERLAPPED);


BOOL __attribute__((__stdcall__)) UnmapViewOfFile(PVOID);
BOOL __attribute__((__stdcall__)) UpdateResourceA(HANDLE,LPCSTR,LPCSTR,WORD,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) UpdateResourceW(HANDLE,LPCWSTR,LPCWSTR,WORD,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) VerifyVersionInfoA(LPOSVERSIONINFOEXA,DWORD,DWORDLONG);
BOOL __attribute__((__stdcall__)) VerifyVersionInfoW(LPOSVERSIONINFOEXW,DWORD,DWORDLONG);
PVOID __attribute__((__stdcall__)) VirtualAlloc(PVOID,DWORD,DWORD,DWORD);
PVOID __attribute__((__stdcall__)) VirtualAllocEx(HANDLE,PVOID,DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) VirtualFree(PVOID,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) VirtualFreeEx(HANDLE,PVOID,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) VirtualLock(PVOID,DWORD);
BOOL __attribute__((__stdcall__)) VirtualProtect(PVOID,DWORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) VirtualProtectEx(HANDLE,PVOID,DWORD,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) VirtualQuery(LPCVOID,PMEMORY_BASIC_INFORMATION,DWORD);
DWORD __attribute__((__stdcall__)) VirtualQueryEx(HANDLE,LPCVOID,PMEMORY_BASIC_INFORMATION,DWORD);
BOOL __attribute__((__stdcall__)) VirtualUnlock(PVOID,DWORD);
BOOL __attribute__((__stdcall__)) WaitCommEvent(HANDLE,PDWORD,LPOVERLAPPED);
BOOL __attribute__((__stdcall__)) WaitForDebugEvent(LPDEBUG_EVENT,DWORD);
DWORD __attribute__((__stdcall__)) WaitForMultipleObjects(DWORD,const HANDLE*,BOOL,DWORD);
DWORD __attribute__((__stdcall__)) WaitForMultipleObjectsEx(DWORD,const HANDLE*,BOOL,DWORD,BOOL);
DWORD __attribute__((__stdcall__)) WaitForSingleObject(HANDLE,DWORD);
DWORD __attribute__((__stdcall__)) WaitForSingleObjectEx(HANDLE,DWORD,BOOL);
BOOL __attribute__((__stdcall__)) WaitNamedPipeA(LPCSTR,DWORD);
BOOL __attribute__((__stdcall__)) WaitNamedPipeW(LPCWSTR,DWORD);
BOOL __attribute__((__stdcall__)) WinLoadTrustProvider(GUID*);
BOOL __attribute__((__stdcall__)) WriteFile(HANDLE,PCVOID,DWORD,PDWORD,LPOVERLAPPED);
BOOL __attribute__((__stdcall__)) WriteFileEx(HANDLE,PCVOID,DWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
BOOL __attribute__((__stdcall__)) WriteFileGather(HANDLE,FILE_SEGMENT_ELEMENT*,DWORD,LPDWORD,LPOVERLAPPED);
BOOL __attribute__((__stdcall__)) WritePrivateProfileSectionA(LPCSTR,LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) WritePrivateProfileSectionW(LPCWSTR,LPCWSTR,LPCWSTR);
BOOL __attribute__((__stdcall__)) WritePrivateProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) WritePrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL __attribute__((__stdcall__)) WritePrivateProfileStructA(LPCSTR,LPCSTR,LPVOID,UINT,LPCSTR);
BOOL __attribute__((__stdcall__)) WritePrivateProfileStructW(LPCWSTR,LPCWSTR,LPVOID,UINT,LPCWSTR);
BOOL __attribute__((__stdcall__)) WriteProcessMemory(HANDLE,LPVOID,LPCVOID,SIZE_T,SIZE_T*);
BOOL __attribute__((__stdcall__)) WriteProfileSectionA(LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) WriteProfileSectionW(LPCWSTR,LPCWSTR);
BOOL __attribute__((__stdcall__)) WriteProfileStringA(LPCSTR,LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) WriteProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR);
DWORD __attribute__((__stdcall__)) WriteTapemark(HANDLE,DWORD,DWORD,BOOL);
# 1850 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winbase.h" 3
typedef STARTUPINFOA STARTUPINFO,*LPSTARTUPINFO;
typedef WIN32_FIND_DATAA WIN32_FIND_DATA,*LPWIN32_FIND_DATA;
typedef HW_PROFILE_INFOA HW_PROFILE_INFO,*LPHW_PROFILE_INFO;
# 51 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wingdi.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wingdi.h" 3
# 1178 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wingdi.h" 3
typedef struct _ABC {
 int abcA;
 UINT abcB;
 int abcC;
} ABC,*LPABC;
typedef struct _ABCFLOAT {
 FLOAT abcfA;
 FLOAT abcfB;
 FLOAT abcfC;
} ABCFLOAT,*LPABCFLOAT;
typedef struct tagBITMAP {
 LONG bmType;
 LONG bmWidth;
 LONG bmHeight;
 LONG bmWidthBytes;
 WORD bmPlanes;
 WORD bmBitsPixel;
 LPVOID bmBits;
} WINDOWS_BITMAP,*PBITMAP,*LPBITMAP;
typedef struct tagBITMAPCOREHEADER {
 DWORD bcSize;
 WORD bcWidth;
 WORD bcHeight;
 WORD bcPlanes;
 WORD bcBitCount;
} BITMAPCOREHEADER,*LPBITMAPCOREHEADER,*PBITMAPCOREHEADER;
#pragma pack(push,1)
typedef struct tagRGBTRIPLE {
 BYTE rgbtBlue;
 BYTE rgbtGreen;
 BYTE rgbtRed;
} RGBTRIPLE,*LPRGBTRIPLE;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct tagBITMAPFILEHEADER {
 WORD bfType;
 DWORD bfSize;
 WORD bfReserved1;
 WORD bfReserved2;
 DWORD bfOffBits;
} BITMAPFILEHEADER,*LPBITMAPFILEHEADER,*PBITMAPFILEHEADER;
#pragma pack(pop)
typedef struct _BITMAPCOREINFO {
 BITMAPCOREHEADER bmciHeader;
 RGBTRIPLE bmciColors[1];
} BITMAPCOREINFO,*LPBITMAPCOREINFO,*PBITMAPCOREINFO;
typedef struct tagBITMAPINFOHEADER{
 DWORD biSize;
 LONG biWidth;
 LONG biHeight;
 WORD biPlanes;
 WORD biBitCount;
 DWORD biCompression;
 DWORD biSizeImage;
 LONG biXPelsPerMeter;
 LONG biYPelsPerMeter;
 DWORD biClrUsed;
 DWORD biClrImportant;
} BITMAPINFOHEADER,*LPBITMAPINFOHEADER,*PBITMAPINFOHEADER;
typedef struct tagRGBQUAD {
 BYTE rgbBlue;
 BYTE rgbGreen;
 BYTE rgbRed;
 BYTE rgbReserved;
} RGBQUAD,*LPRGBQUAD;
typedef struct tagBITMAPINFO {
 BITMAPINFOHEADER bmiHeader;
 RGBQUAD bmiColors[1];
} BITMAPINFO,*LPBITMAPINFO,*PBITMAPINFO;
typedef long FXPT16DOT16,*LPFXPT16DOT16;
typedef long FXPT2DOT30,*LPFXPT2DOT30;
typedef struct tagCIEXYZ {
 FXPT2DOT30 ciexyzX;
 FXPT2DOT30 ciexyzY;
 FXPT2DOT30 ciexyzZ;
} CIEXYZ,*LPCIEXYZ;
typedef struct tagCIEXYZTRIPLE {
 CIEXYZ ciexyzRed;
 CIEXYZ ciexyzGreen;
 CIEXYZ ciexyzBlue;
} CIEXYZTRIPLE,*LPCIEXYZTRIPLE;
typedef struct {
 DWORD bV4Size;
 LONG bV4Width;
 LONG bV4Height;
 WORD bV4Planes;
 WORD bV4BitCount;
 DWORD bV4V4Compression;
 DWORD bV4SizeImage;
 LONG bV4XPelsPerMeter;
 LONG bV4YPelsPerMeter;
 DWORD bV4ClrUsed;
 DWORD bV4ClrImportant;
 DWORD bV4RedMask;
 DWORD bV4GreenMask;
 DWORD bV4BlueMask;
 DWORD bV4AlphaMask;
 DWORD bV4CSType;
 CIEXYZTRIPLE bV4Endpoints;
 DWORD bV4GammaRed;
 DWORD bV4GammaGreen;
 DWORD bV4GammaBlue;
} BITMAPV4HEADER,*LPBITMAPV4HEADER,*PBITMAPV4HEADER;
typedef struct tagFONTSIGNATURE {
 DWORD fsUsb[4];
 DWORD fsCsb[2];
} FONTSIGNATURE,*LPFONTSIGNATURE;
typedef struct {
 UINT ciCharset;
 UINT ciACP;
 FONTSIGNATURE fs;
} CHARSETINFO,*LPCHARSETINFO;
typedef struct tagCOLORADJUSTMENT {
 WORD caSize;
 WORD caFlags;
 WORD caIlluminantIndex;
 WORD caRedGamma;
 WORD caGreenGamma;
 WORD caBlueGamma;
 WORD caReferenceBlack;
 WORD caReferenceWhite;
 SHORT caContrast;
 SHORT caBrightness;
 SHORT caColorfulness;
 SHORT caRedGreenTint;
} COLORADJUSTMENT,*LPCOLORADJUSTMENT;
typedef struct _devicemodeA {
  BYTE dmDeviceName[32];
  WORD dmSpecVersion;
  WORD dmDriverVersion;
  WORD dmSize;
  WORD dmDriverExtra;
  DWORD dmFields;
  __extension__ union {
    __extension__ struct {
      short dmOrientation;
      short dmPaperSize;
      short dmPaperLength;
      short dmPaperWidth;
      short dmScale;
      short dmCopies;
      short dmDefaultSource;
      short dmPrintQuality;
    } ;
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
  } ;

  short dmColor;
  short dmDuplex;
  short dmYResolution;
  short dmTTOption;
  short dmCollate;
  BYTE dmFormName[32];
  WORD dmLogPixels;
  DWORD dmBitsPerPel;
  DWORD dmPelsWidth;
  DWORD dmPelsHeight;
  __extension__ union {
    DWORD dmDisplayFlags;
    DWORD dmNup;
  } ;
  DWORD dmDisplayFrequency;

  DWORD dmICMMethod;
  DWORD dmICMIntent;
  DWORD dmMediaType;
  DWORD dmDitherType;
  DWORD dmReserved1;
  DWORD dmReserved2;

  DWORD dmPanningWidth;
  DWORD dmPanningHeight;


} DEVMODEA,*LPDEVMODEA,*PDEVMODEA;
typedef struct _devicemodeW {
  WCHAR dmDeviceName[32];
  WORD dmSpecVersion;
  WORD dmDriverVersion;
  WORD dmSize;
  WORD dmDriverExtra;
  DWORD dmFields;
  __extension__ union {
    __extension__ struct {
      short dmOrientation;
      short dmPaperSize;
      short dmPaperLength;
      short dmPaperWidth;
      short dmScale;
      short dmCopies;
      short dmDefaultSource;
      short dmPrintQuality;
    } ;
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
  } ;

  short dmColor;
  short dmDuplex;
  short dmYResolution;
  short dmTTOption;
  short dmCollate;
  WCHAR dmFormName[32];
  WORD dmLogPixels;
  DWORD dmBitsPerPel;
  DWORD dmPelsWidth;
  DWORD dmPelsHeight;
  __extension__ union {
    DWORD dmDisplayFlags;
    DWORD dmNup;
  } ;
  DWORD dmDisplayFrequency;

  DWORD dmICMMethod;
  DWORD dmICMIntent;
  DWORD dmMediaType;
  DWORD dmDitherType;
  DWORD dmReserved1;
  DWORD dmReserved2;

  DWORD dmPanningWidth;
  DWORD dmPanningHeight;


} DEVMODEW,*LPDEVMODEW,*PDEVMODEW;
typedef struct tagDIBSECTION {
 WINDOWS_BITMAP dsBm;
 BITMAPINFOHEADER dsBmih;
 DWORD dsBitfields[3];
 HANDLE dshSection;
 DWORD dsOffset;
} DIBSECTION;
typedef struct _DOCINFOA {
 int cbSize;
 LPCSTR lpszDocName;
 LPCSTR lpszOutput;
 LPCSTR lpszDatatype;
 DWORD fwType;
} DOCINFOA,*LPDOCINFOA;
typedef struct _DOCINFOW {
 int cbSize;
 LPCWSTR lpszDocName;
 LPCWSTR lpszOutput;
 LPCWSTR lpszDatatype;
 DWORD fwType;
} DOCINFOW,*LPDOCINFOW;
typedef struct tagEMR {
 DWORD iType;
 DWORD nSize;
} EMR,*PEMR;
typedef struct tagEMRANGLEARC {
 EMR emr;
 POINTL ptlCenter;
 DWORD nRadius;
 FLOAT eStartAngle;
 FLOAT eSweepAngle;
} EMRANGLEARC,*PEMRANGLEARC;
typedef struct tagEMRARC {
 EMR emr;
 RECTL rclBox;
 POINTL ptlStart;
 POINTL ptlEnd;
} EMRARC,*PEMRARC,EMRARCTO,*PEMRARCTO,EMRCHORD,*PEMRCHORD,EMRPIE,*PEMRPIE;
typedef struct _XFORM {
 FLOAT eM11;
 FLOAT eM12;
 FLOAT eM21;
 FLOAT eM22;
 FLOAT eDx;
 FLOAT eDy;
} XFORM,*PXFORM,*LPXFORM;
typedef struct tagEMRBITBLT {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG cxDest;
 LONG cyDest;
 DWORD dwRop;
 LONG xSrc;
 LONG ySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
} EMRBITBLT,*PEMRBITBLT;
typedef struct tagLOGBRUSH {
 UINT lbStyle;
 COLORREF lbColor;
 LONG lbHatch;
} LOGBRUSH,*PLOGBRUSH,*LPLOGBRUSH;
typedef LOGBRUSH PATTERN,*PPATTERN,*LPPATTERN;
typedef struct tagEMRCREATEBRUSHINDIRECT {
 EMR emr;
 DWORD ihBrush;
 LOGBRUSH lb;
} EMRCREATEBRUSHINDIRECT,*PEMRCREATEBRUSHINDIRECT;
typedef LONG LCSCSTYPE;
typedef LONG LCSGAMUTMATCH;
typedef struct tagLOGCOLORSPACEA {
 DWORD lcsSignature;
 DWORD lcsVersion;
 DWORD lcsSize;
 LCSCSTYPE lcsCSType;
 LCSGAMUTMATCH lcsIntent;
 CIEXYZTRIPLE lcsEndpoints;
 DWORD lcsGammaRed;
 DWORD lcsGammaGreen;
 DWORD lcsGammaBlue;
 CHAR lcsFilename[260];
} LOGCOLORSPACEA,*LPLOGCOLORSPACEA;
typedef struct tagLOGCOLORSPACEW {
 DWORD lcsSignature;
 DWORD lcsVersion;
 DWORD lcsSize;
 LCSCSTYPE lcsCSType;
 LCSGAMUTMATCH lcsIntent;
 CIEXYZTRIPLE lcsEndpoints;
 DWORD lcsGammaRed;
 DWORD lcsGammaGreen;
 DWORD lcsGammaBlue;
 WCHAR lcsFilename[260];
} LOGCOLORSPACEW,*LPLOGCOLORSPACEW;
typedef struct tagEMRCREATECOLORSPACE {
 EMR emr;
 DWORD ihCS;
 LOGCOLORSPACEW lcs;
} EMRCREATECOLORSPACE,*PEMRCREATECOLORSPACE;
typedef struct tagEMRCREATEDIBPATTERNBRUSHPT {
 EMR emr;
 DWORD ihBrush;
 DWORD iUsage;
 DWORD offBmi;
 DWORD cbBmi;
 DWORD offBits;
 DWORD cbBits;
} EMRCREATEDIBPATTERNBRUSHPT,*PEMRCREATEDIBPATTERNBRUSHPT;
typedef struct tagEMRCREATEMONOBRUSH {
 EMR emr;
 DWORD ihBrush;
 DWORD iUsage;
 DWORD offBmi;
 DWORD cbBmi;
 DWORD offBits;
 DWORD cbBits;
} EMRCREATEMONOBRUSH,*PEMRCREATEMONOBRUSH;
typedef struct tagPALETTEENTRY {
 BYTE peRed;
 BYTE peGreen;
 BYTE peBlue;
 BYTE peFlags;
} PALETTEENTRY,*LPPALETTEENTRY,*PPALETTEENTRY;
typedef struct tagLOGPALETTE {
 WORD palVersion;
 WORD palNumEntries;
 PALETTEENTRY palPalEntry[1];
} LOGPALETTE,*NPLOGPALETTE,*PLOGPALETTE,*LPLOGPALETTE;
typedef struct tagEMRCREATEPALETTE {
 EMR emr;
 DWORD ihPal;
 LOGPALETTE lgpl;
} EMRCREATEPALETTE,*PEMRCREATEPALETTE;
typedef struct tagLOGPEN {
 UINT lopnStyle;
 POINT lopnWidth;
 COLORREF lopnColor;
} LOGPEN,*PLOGPEN,*LPLOGPEN;
typedef struct tagEMRCREATEPEN {
 EMR emr;
 DWORD ihPen;
 LOGPEN lopn;
} EMRCREATEPEN,*PEMRCREATEPEN;
typedef struct tagEMRELLIPSE {
 EMR emr;
 RECTL rclBox;
} EMRELLIPSE,*PEMRELLIPSE,EMRRECTANGLE,*PEMRRECTANGLE;
typedef struct tagEMREOF {
 EMR emr;
 DWORD nPalEntries;
 DWORD offPalEntries;
 DWORD nSizeLast;
} EMREOF,*PEMREOF;
typedef struct tagEMREXCLUDECLIPRECT {
 EMR emr;
 RECTL rclClip;
} EMREXCLUDECLIPRECT,*PEMREXCLUDECLIPRECT,EMRINTERSECTCLIPRECT,*PEMRINTERSECTCLIPRECT;
typedef struct tagPANOSE {
 BYTE bFamilyType;
 BYTE bSerifStyle;
 BYTE bWeight;
 BYTE bProportion;
 BYTE bContrast;
 BYTE bStrokeVariation;
 BYTE bArmStyle;
 BYTE bLetterform;
 BYTE bMidline;
 BYTE bXHeight;
} PANOSE;
typedef struct tagLOGFONTA {
 LONG lfHeight;
 LONG lfWidth;
 LONG lfEscapement;
 LONG lfOrientation;
 LONG lfWeight;
 BYTE lfItalic;
 BYTE lfUnderline;
 BYTE lfStrikeOut;
 BYTE lfCharSet;
 BYTE lfOutPrecision;
 BYTE lfClipPrecision;
 BYTE lfQuality;
 BYTE lfPitchAndFamily;
 CHAR lfFaceName[32];
} LOGFONTA,*PLOGFONTA,*LPLOGFONTA;
typedef struct tagLOGFONTW {
 LONG lfHeight;
 LONG lfWidth;
 LONG lfEscapement;
 LONG lfOrientation;
 LONG lfWeight;
 BYTE lfItalic;
 BYTE lfUnderline;
 BYTE lfStrikeOut;
 BYTE lfCharSet;
 BYTE lfOutPrecision;
 BYTE lfClipPrecision;
 BYTE lfQuality;
 BYTE lfPitchAndFamily;
 WCHAR lfFaceName[32];
} LOGFONTW,*PLOGFONTW,*LPLOGFONTW;
typedef struct tagEXTLOGFONTA {
 LOGFONTA elfLogFont;
 BYTE elfFullName[64];
 BYTE elfStyle[32];
 DWORD elfVersion;
 DWORD elfStyleSize;
 DWORD elfMatch;
 DWORD elfReserved;
 BYTE elfVendorId[4];
 DWORD elfCulture;
 PANOSE elfPanose;
} EXTLOGFONTA,*PEXTLOGFONTA,*LPEXTLOGFONTA;
typedef struct tagEXTLOGFONTW {
 LOGFONTW elfLogFont;
 WCHAR elfFullName[64];
 WCHAR elfStyle[32];
 DWORD elfVersion;
 DWORD elfStyleSize;
 DWORD elfMatch;
 DWORD elfReserved;
 BYTE elfVendorId[4];
 DWORD elfCulture;
 PANOSE elfPanose;
} EXTLOGFONTW,*PEXTLOGFONTW,*LPEXTLOGFONTW;
typedef struct tagEMREXTCREATEFONTINDIRECTW {
 EMR emr;
 DWORD ihFont;
 EXTLOGFONTW elfw;
} EMREXTCREATEFONTINDIRECTW,*PEMREXTCREATEFONTINDIRECTW;
typedef struct tagEXTLOGPEN {
 UINT elpPenStyle;
 UINT elpWidth;
 UINT elpBrushStyle;
 COLORREF elpColor;
 LONG elpHatch;
 DWORD elpNumEntries;
 DWORD elpStyleEntry[1];
} EXTLOGPEN,*PEXTLOGPEN,*LPEXTLOGPEN;
typedef struct tagEMREXTCREATEPEN {
 EMR emr;
 DWORD ihPen;
 DWORD offBmi;
 DWORD cbBmi;
 DWORD offBits;
 DWORD cbBits;
 EXTLOGPEN elp;
} EMREXTCREATEPEN,*PEMREXTCREATEPEN;
typedef struct tagEMREXTFLOODFILL {
 EMR emr;
 POINTL ptlStart;
 COLORREF crColor;
 DWORD iMode;
} EMREXTFLOODFILL,*PEMREXTFLOODFILL;
typedef struct tagEMREXTSELECTCLIPRGN {
 EMR emr;
 DWORD cbRgnData;
 DWORD iMode;
 BYTE RgnData[1];
} EMREXTSELECTCLIPRGN,*PEMREXTSELECTCLIPRGN;
typedef struct tagEMRTEXT {
 POINTL ptlReference;
 DWORD nChars;
 DWORD offString;
 DWORD fOptions;
 RECTL rcl;
 DWORD offDx;
} EMRTEXT,*PEMRTEXT;
typedef struct tagEMREXTTEXTOUTA {
 EMR emr;
 RECTL rclBounds;
 DWORD iGraphicsMode;
 FLOAT exScale;
 FLOAT eyScale;
 EMRTEXT emrtext;
} EMREXTTEXTOUTA,*PEMREXTTEXTOUTA,EMREXTTEXTOUTW,*PEMREXTTEXTOUTW;
typedef struct tagEMRFILLPATH {
 EMR emr;
 RECTL rclBounds;
} EMRFILLPATH,*PEMRFILLPATH,EMRSTROKEANDFILLPATH,*PEMRSTROKEANDFILLPATH,EMRSTROKEPATH,*PEMRSTROKEPATH;
typedef struct tagEMRFILLRGN {
 EMR emr;
 RECTL rclBounds;
 DWORD cbRgnData;
 DWORD ihBrush;
 BYTE RgnData[1];
} EMRFILLRGN,*PEMRFILLRGN;
typedef struct tagEMRFORMAT {
 DWORD dSignature;
 DWORD nVersion;
 DWORD cbData;
 DWORD offData;
} EMRFORMAT;
typedef struct tagEMRFRAMERGN {
 EMR emr;
 RECTL rclBounds;
 DWORD cbRgnData;
 DWORD ihBrush;
 SIZEL szlStroke;
 BYTE RgnData[1];
} EMRFRAMERGN,*PEMRFRAMERGN;
typedef struct tagEMRGDICOMMENT {
 EMR emr;
 DWORD cbData;
 BYTE Data[1];
} EMRGDICOMMENT,*PEMRGDICOMMENT;
typedef struct tagEMRINVERTRGN {
 EMR emr;
 RECTL rclBounds;
 DWORD cbRgnData;
 BYTE RgnData[1];
} EMRINVERTRGN,*PEMRINVERTRGN,EMRPAINTRGN,*PEMRPAINTRGN;
typedef struct tagEMRLINETO {
 EMR emr;
 POINTL ptl;
} EMRLINETO,*PEMRLINETO,EMRMOVETOEX,*PEMRMOVETOEX;
typedef struct tagEMRMASKBLT {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG cxDest;
 LONG cyDest;
 DWORD dwRop;
 LONG xSrc;
 LONG ySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 LONG xMask;
 LONG yMask;
 DWORD iUsageMask;
 DWORD offBmiMask;
 DWORD cbBmiMask;
 DWORD offBitsMask;
 DWORD cbBitsMask;
} EMRMASKBLT,*PEMRMASKBLT;
typedef struct tagEMRMODIFYWORLDTRANSFORM {
 EMR emr;
 XFORM xform;
 DWORD iMode;
} EMRMODIFYWORLDTRANSFORM,*PEMRMODIFYWORLDTRANSFORM;
typedef struct tagEMROFFSETCLIPRGN {
 EMR emr;
 POINTL ptlOffset;
} EMROFFSETCLIPRGN,*PEMROFFSETCLIPRGN;
typedef struct tagEMRPLGBLT {
 EMR emr;
 RECTL rclBounds;
 POINTL aptlDest[3];
 LONG xSrc;
 LONG ySrc;
 LONG cxSrc;
 LONG cySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 LONG xMask;
 LONG yMask;
 DWORD iUsageMask;
 DWORD offBmiMask;
 DWORD cbBmiMask;
 DWORD offBitsMask;
 DWORD cbBitsMask;
} EMRPLGBLT,*PEMRPLGBLT;
typedef struct tagEMRPOLYDRAW {
 EMR emr;
 RECTL rclBounds;
 DWORD cptl;
 POINTL aptl[1];
 BYTE abTypes[1];
} EMRPOLYDRAW,*PEMRPOLYDRAW;
typedef struct tagEMRPOLYDRAW16 {
 EMR emr;
 RECTL rclBounds;
 DWORD cpts;
 POINTS apts[1];
 BYTE abTypes[1];
} EMRPOLYDRAW16,*PEMRPOLYDRAW16;
typedef struct tagEMRPOLYLINE {
 EMR emr;
 RECTL rclBounds;
 DWORD cptl;
 POINTL aptl[1];
} EMRPOLYLINE,*PEMRPOLYLINE,EMRPOLYBEZIER,*PEMRPOLYBEZIER,EMRPOLYGON,*PEMRPOLYGON,EMRPOLYBEZIERTO,*PEMRPOLYBEZIERTO,EMRPOLYLINETO,*PEMRPOLYLINETO;
typedef struct tagEMRPOLYLINE16 {
 EMR emr;
 RECTL rclBounds;
 DWORD cpts;
 POINTL apts[1];
} EMRPOLYLINE16,*PEMRPOLYLINE16,EMRPOLYBEZIER16,*PEMRPOLYBEZIER16,EMRPOLYGON16,*PEMRPOLYGON16,EMRPOLYBEZIERTO16,*PEMRPOLYBEZIERTO16,EMRPOLYLINETO16,*PEMRPOLYLINETO16;
typedef struct tagEMRPOLYPOLYLINE {
 EMR emr;
 RECTL rclBounds;
 DWORD nPolys;
 DWORD cptl;
 DWORD aPolyCounts[1];
 POINTL aptl[1];
} EMRPOLYPOLYLINE,*PEMRPOLYPOLYLINE,EMRPOLYPOLYGON,*PEMRPOLYPOLYGON;
typedef struct tagEMRPOLYPOLYLINE16 {
 EMR emr;
 RECTL rclBounds;
 DWORD nPolys;
 DWORD cpts;
 DWORD aPolyCounts[1];
 POINTS apts[1];
} EMRPOLYPOLYLINE16,*PEMRPOLYPOLYLINE16,EMRPOLYPOLYGON16,*PEMRPOLYPOLYGON16;
typedef struct tagEMRPOLYTEXTOUTA {
 EMR emr;
 RECTL rclBounds;
 DWORD iGraphicsMode;
 FLOAT exScale;
 FLOAT eyScale;
 LONG cStrings;
 EMRTEXT aemrtext[1];
} EMRPOLYTEXTOUTA,*PEMRPOLYTEXTOUTA,EMRPOLYTEXTOUTW,*PEMRPOLYTEXTOUTW;
typedef struct tagEMRRESIZEPALETTE {
 EMR emr;
 DWORD ihPal;
 DWORD cEntries;
} EMRRESIZEPALETTE,*PEMRRESIZEPALETTE;
typedef struct tagEMRRESTOREDC {
 EMR emr;
 LONG iRelative;
} EMRRESTOREDC,*PEMRRESTOREDC;
typedef struct tagEMRROUNDRECT {
 EMR emr;
 RECTL rclBox;
 SIZEL szlCorner;
} EMRROUNDRECT,*PEMRROUNDRECT;
typedef struct tagEMRSCALEVIEWPORTEXTEX {
 EMR emr;
 LONG xNum;
 LONG xDenom;
 LONG yNum;
 LONG yDenom;
} EMRSCALEVIEWPORTEXTEX,*PEMRSCALEVIEWPORTEXTEX,EMRSCALEWINDOWEXTEX,*PEMRSCALEWINDOWEXTEX;
typedef struct tagEMRSELECTCOLORSPACE {
 EMR emr;
 DWORD ihCS;
} EMRSELECTCOLORSPACE,*PEMRSELECTCOLORSPACE,EMRDELETECOLORSPACE,*PEMRDELETECOLORSPACE;
typedef struct tagEMRSELECTOBJECT {
 EMR emr;
 DWORD ihObject;
} EMRSELECTOBJECT,*PEMRSELECTOBJECT,EMRDELETEOBJECT,*PEMRDELETEOBJECT;
typedef struct tagEMRSELECTPALETTE {
 EMR emr;
 DWORD ihPal;
} EMRSELECTPALETTE,*PEMRSELECTPALETTE;
typedef struct tagEMRSETARCDIRECTION {
 EMR emr;
 DWORD iArcDirection;
} EMRSETARCDIRECTION,*PEMRSETARCDIRECTION;
typedef struct tagEMRSETTEXTCOLOR {
 EMR emr;
 COLORREF crColor;
} EMRSETBKCOLOR,*PEMRSETBKCOLOR,EMRSETTEXTCOLOR,*PEMRSETTEXTCOLOR;
typedef struct tagEMRSETCOLORADJUSTMENT {
 EMR emr;
 COLORADJUSTMENT ColorAdjustment;
} EMRSETCOLORADJUSTMENT,*PEMRSETCOLORADJUSTMENT;
typedef struct tagEMRSETDIBITSTODEVICE {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG xSrc;
 LONG ySrc;
 LONG cxSrc;
 LONG cySrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 DWORD iUsageSrc;
 DWORD iStartScan;
 DWORD cScans;
} EMRSETDIBITSTODEVICE,*PEMRSETDIBITSTODEVICE;
typedef struct tagEMRSETMAPPERFLAGS {
 EMR emr;
 DWORD dwFlags;
} EMRSETMAPPERFLAGS,*PEMRSETMAPPERFLAGS;
typedef struct tagEMRSETMITERLIMIT {
 EMR emr;
 FLOAT eMiterLimit;
} EMRSETMITERLIMIT,*PEMRSETMITERLIMIT;
typedef struct tagEMRSETPALETTEENTRIES {
 EMR emr;
 DWORD ihPal;
 DWORD iStart;
 DWORD cEntries;
 PALETTEENTRY aPalEntries[1];
} EMRSETPALETTEENTRIES,*PEMRSETPALETTEENTRIES;
typedef struct tagEMRSETPIXELV {
 EMR emr;
 POINTL ptlPixel;
 COLORREF crColor;
} EMRSETPIXELV,*PEMRSETPIXELV;
typedef struct tagEMRSETVIEWPORTEXTEX {
 EMR emr;
 SIZEL szlExtent;
} EMRSETVIEWPORTEXTEX,*PEMRSETVIEWPORTEXTEX,EMRSETWINDOWEXTEX,*PEMRSETWINDOWEXTEX;
typedef struct tagEMRSETVIEWPORTORGEX {
 EMR emr;
 POINTL ptlOrigin;
} EMRSETVIEWPORTORGEX,*PEMRSETVIEWPORTORGEX,EMRSETWINDOWORGEX,*PEMRSETWINDOWORGEX,EMRSETBRUSHORGEX,*PEMRSETBRUSHORGEX;
typedef struct tagEMRSETWORLDTRANSFORM {
 EMR emr;
 XFORM xform;
} EMRSETWORLDTRANSFORM,*PEMRSETWORLDTRANSFORM;
typedef struct tagEMRSTRETCHBLT {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG cxDest;
 LONG cyDest;
 DWORD dwRop;
 LONG xSrc;
 LONG ySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 LONG cxSrc;
 LONG cySrc;
} EMRSTRETCHBLT,*PEMRSTRETCHBLT;
typedef struct tagEMRSTRETCHDIBITS {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG xSrc;
 LONG ySrc;
 LONG cxSrc;
 LONG cySrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 DWORD iUsageSrc;
 DWORD dwRop;
 LONG cxDest;
 LONG cyDest;
} EMRSTRETCHDIBITS,*PEMRSTRETCHDIBITS;
typedef struct tagABORTPATH {
 EMR emr;
} EMRABORTPATH,*PEMRABORTPATH,EMRBEGINPATH,*PEMRBEGINPATH,EMRENDPATH,*PEMRENDPATH,EMRCLOSEFIGURE,*PEMRCLOSEFIGURE,EMRFLATTENPATH,*PEMRFLATTENPATH,EMRWIDENPATH,*PEMRWIDENPATH,EMRSETMETARGN,*PEMRSETMETARGN,EMRSAVEDC,*PEMRSAVEDC,EMRREALIZEPALETTE,*PEMRREALIZEPALETTE;
typedef struct tagEMRSELECTCLIPPATH {
 EMR emr;
 DWORD iMode;
} EMRSELECTCLIPPATH,*PEMRSELECTCLIPPATH,EMRSETBKMODE,*PEMRSETBKMODE,EMRSETMAPMODE,*PEMRSETMAPMODE,EMRSETPOLYFILLMODE,*PEMRSETPOLYFILLMODE,EMRSETROP2,*PEMRSETROP2,EMRSETSTRETCHBLTMODE,*PEMRSETSTRETCHBLTMODE,EMRSETTEXTALIGN,*PEMRSETTEXTALIGN,EMRENABLEICM,*PEMRENABLEICM;
#pragma pack(push,2)
typedef struct tagMETAHEADER {
 WORD mtType;
 WORD mtHeaderSize;
 WORD mtVersion;
 DWORD mtSize;
 WORD mtNoObjects;
 DWORD mtMaxRecord;
 WORD mtNoParameters;
} METAHEADER,*PMETAHEADER,*LPMETAHEADER;
#pragma pack(pop)
typedef struct tagENHMETAHEADER {
 DWORD iType;
 DWORD nSize;
 RECTL rclBounds;
 RECTL rclFrame;
 DWORD dSignature;
 DWORD nVersion;
 DWORD nBytes;
 DWORD nRecords;
 WORD nHandles;
 WORD sReserved;
 DWORD nDescription;
 DWORD offDescription;
 DWORD nPalEntries;
 SIZEL szlDevice;
 SIZEL szlMillimeters;
} ENHMETAHEADER,*LPENHMETAHEADER;
typedef struct tagMETARECORD {
 DWORD rdSize;
 WORD rdFunction;
 WORD rdParm[1];
} METARECORD,*PMETARECORD,*LPMETARECORD;
typedef struct tagENHMETARECORD {
 DWORD iType;
 DWORD nSize;
 DWORD dParm[1];
} ENHMETARECORD,*LPENHMETARECORD;
typedef struct tagHANDLETABLE {
 HGDIOBJ objectHandle[1];
} HANDLETABLE,*LPHANDLETABLE;
typedef struct tagTEXTMETRICA {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 BYTE tmFirstChar;
 BYTE tmLastChar;
 BYTE tmDefaultChar;
 BYTE tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
} TEXTMETRICA,*PTEXTMETRICA,*LPTEXTMETRICA;
typedef struct tagTEXTMETRICW {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 WCHAR tmFirstChar;
 WCHAR tmLastChar;
 WCHAR tmDefaultChar;
 WCHAR tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
} TEXTMETRICW,*PTEXTMETRICW,*LPTEXTMETRICW;
typedef struct _RGNDATAHEADER {
 DWORD dwSize;
 DWORD iType;
 DWORD nCount;
 DWORD nRgnSize;
 RECT rcBound;
} RGNDATAHEADER;
typedef struct _RGNDATA {
 RGNDATAHEADER rdh;
 char Buffer[1];
} RGNDATA,*PRGNDATA, *LPRGNDATA;


typedef struct tagGCP_RESULTSA {
 DWORD lStructSize;
 LPSTR lpOutString;
 UINT *lpOrder;
 INT *lpDx;
 INT *lpCaretPos;
 LPSTR lpClass;
 LPWSTR lpGlyphs;
 UINT nGlyphs;
 UINT nMaxFit;
} GCP_RESULTSA,*LPGCP_RESULTSA;
typedef struct tagGCP_RESULTSW {
 DWORD lStructSize;
 LPWSTR lpOutString;
 UINT *lpOrder;
 INT *lpDx;
 INT *lpCaretPos;
 LPWSTR lpClass;
 LPWSTR lpGlyphs;
 UINT nGlyphs;
 UINT nMaxFit;
} GCP_RESULTSW,*LPGCP_RESULTSW;
typedef struct _GLYPHMETRICS {
 UINT gmBlackBoxX;
 UINT gmBlackBoxY;
 POINT gmptGlyphOrigin;
 short gmCellIncX;
 short gmCellIncY;
} GLYPHMETRICS,*LPGLYPHMETRICS;
typedef struct tagKERNINGPAIR {
 WORD wFirst;
 WORD wSecond;
 int iKernAmount;
} KERNINGPAIR,*LPKERNINGPAIR;
typedef struct _FIXED {
 WORD fract;
 short value;
} FIXED;
typedef struct _MAT2 {
 FIXED eM11;
 FIXED eM12;
 FIXED eM21;
 FIXED eM22;
} MAT2,*LPMAT2;
typedef struct _OUTLINETEXTMETRICA {
 UINT otmSize;
 TEXTMETRICA otmTextMetrics;
 BYTE otmFiller;
 PANOSE otmPanoseNumber;
 UINT otmfsSelection;
 UINT otmfsType;
 int otmsCharSlopeRise;
 int otmsCharSlopeRun;
 int otmItalicAngle;
 UINT otmEMSquare;
 int otmAscent;
 int otmDescent;
 UINT otmLineGap;
 UINT otmsCapEmHeight;
 UINT otmsXHeight;
 RECT otmrcFontBox;
 int otmMacAscent;
 int otmMacDescent;
 UINT otmMacLineGap;
 UINT otmusMinimumPPEM;
 POINT otmptSubscriptSize;
 POINT otmptSubscriptOffset;
 POINT otmptSuperscriptSize;
 POINT otmptSuperscriptOffset;
 UINT otmsStrikeoutSize;
 int otmsStrikeoutPosition;
 int otmsUnderscoreSize;
 int otmsUnderscorePosition;
 PSTR otmpFamilyName;
 PSTR otmpFaceName;
 PSTR otmpStyleName;
 PSTR otmpFullName;
} OUTLINETEXTMETRICA,*POUTLINETEXTMETRICA,*LPOUTLINETEXTMETRICA;
typedef struct _OUTLINETEXTMETRICW {
 UINT otmSize;
 TEXTMETRICW otmTextMetrics;
 BYTE otmFiller;
 PANOSE otmPanoseNumber;
 UINT otmfsSelection;
 UINT otmfsType;
 int otmsCharSlopeRise;
 int otmsCharSlopeRun;
 int otmItalicAngle;
 UINT otmEMSquare;
 int otmAscent;
 int otmDescent;
 UINT otmLineGap;
 UINT otmsCapEmHeight;
 UINT otmsXHeight;
 RECT otmrcFontBox;
 int otmMacAscent;
 int otmMacDescent;
 UINT otmMacLineGap;
 UINT otmusMinimumPPEM;
 POINT otmptSubscriptSize;
 POINT otmptSubscriptOffset;
 POINT otmptSuperscriptSize;
 POINT otmptSuperscriptOffset;
 UINT otmsStrikeoutSize;
 int otmsStrikeoutPosition;
 int otmsUnderscoreSize;
 int otmsUnderscorePosition;
 PSTR otmpFamilyName;
 PSTR otmpFaceName;
 PSTR otmpStyleName;
 PSTR otmpFullName;
} OUTLINETEXTMETRICW,*POUTLINETEXTMETRICW,*LPOUTLINETEXTMETRICW;
typedef struct _RASTERIZER_STATUS {
 short nSize;
 short wFlags;
 short nLanguageID;
} RASTERIZER_STATUS,*LPRASTERIZER_STATUS;
typedef struct _POLYTEXTA {
 int x;
 int y;
 UINT n;
 LPCSTR lpstr;
 UINT uiFlags;
 RECT rcl;
 int *pdx;
} POLYTEXTA, *PPOLYTEXTA;
typedef struct _POLYTEXTW {
 int x;
 int y;
 UINT n;
 LPCWSTR lpstr;
 UINT uiFlags;
 RECT rcl;
 int *pdx;
} POLYTEXTW, *PPOLYTEXTW;
typedef struct tagPIXELFORMATDESCRIPTOR {
 WORD nSize;
 WORD nVersion;
 DWORD dwFlags;
 BYTE iPixelType;
 BYTE cColorBits;
 BYTE cRedBits;
 BYTE cRedShift;
 BYTE cGreenBits;
 BYTE cGreenShift;
 BYTE cBlueBits;
 BYTE cBlueShift;
 BYTE cAlphaBits;
 BYTE cAlphaShift;
 BYTE cAccumBits;
 BYTE cAccumRedBits;
 BYTE cAccumGreenBits;
 BYTE cAccumBlueBits;
 BYTE cAccumAlphaBits;
 BYTE cDepthBits;
 BYTE cStencilBits;
 BYTE cAuxBuffers;
 BYTE iLayerType;
 BYTE bReserved;
 DWORD dwLayerMask;
 DWORD dwVisibleMask;
 DWORD dwDamageMask;
} PIXELFORMATDESCRIPTOR,*PPIXELFORMATDESCRIPTOR,*LPPIXELFORMATDESCRIPTOR;
typedef struct tagMETAFILEPICT {
 LONG mm;
 LONG xExt;
 LONG yExt;
 HMETAFILE hMF;
} METAFILEPICT,*LPMETAFILEPICT;
typedef struct tagLOCALESIGNATURE {
 DWORD lsUsb[4];
 DWORD lsCsbDefault[2];
 DWORD lsCsbSupported[2];
} LOCALESIGNATURE,*PLOCALESIGNATURE,*LPLOCALESIGNATURE;
typedef LONG LCSTYPE;
#pragma pack(push,4)
typedef struct tagNEWTEXTMETRICA {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 BYTE tmFirstChar;
 BYTE tmLastChar;
 BYTE tmDefaultChar;
 BYTE tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
 DWORD ntmFlags;
 UINT ntmSizeEM;
 UINT ntmCellHeight;
 UINT ntmAvgWidth;
} NEWTEXTMETRICA,*PNEWTEXTMETRICA,*LPNEWTEXTMETRICA;
typedef struct tagNEWTEXTMETRICW {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 WCHAR tmFirstChar;
 WCHAR tmLastChar;
 WCHAR tmDefaultChar;
 WCHAR tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
 DWORD ntmFlags;
 UINT ntmSizeEM;
 UINT ntmCellHeight;
 UINT ntmAvgWidth;
} NEWTEXTMETRICW,*PNEWTEXTMETRICW,*LPNEWTEXTMETRICW;
#pragma pack(pop)
typedef struct tagNEWTEXTMETRICEXA {
 NEWTEXTMETRICA ntmTm;
 FONTSIGNATURE ntmFontSig;
} NEWTEXTMETRICEXA;
typedef struct tagNEWTEXTMETRICEXW {
 NEWTEXTMETRICW ntmTm;
 FONTSIGNATURE ntmFontSig;
} NEWTEXTMETRICEXW;
typedef struct tagPELARRAY {
 LONG paXCount;
 LONG paYCount;
 LONG paXExt;
 LONG paYExt;
 BYTE paRGBs;
} PELARRAY,*PPELARRAY,*LPPELARRAY;
typedef struct tagENUMLOGFONTA {
 LOGFONTA elfLogFont;
 BYTE elfFullName[64];
 BYTE elfStyle[32];
} ENUMLOGFONTA,*LPENUMLOGFONTA;
typedef struct tagENUMLOGFONTW {
 LOGFONTW elfLogFont;
 WCHAR elfFullName[64];
 WCHAR elfStyle[32];
} ENUMLOGFONTW,*LPENUMLOGFONTW;
typedef struct tagENUMLOGFONTEXA {
 LOGFONTA elfLogFont;
 BYTE elfFullName[64];
 BYTE elfStyle[32];
 BYTE elfScript[32];
} ENUMLOGFONTEXA,*LPENUMLOGFONTEXA;
typedef struct tagENUMLOGFONTEXW {
 LOGFONTW elfLogFont;
 WCHAR elfFullName[64];
 BYTE elfStyle[32];
 BYTE elfScript[32];
} ENUMLOGFONTEXW,*LPENUMLOGFONTEXW;
typedef struct tagPOINTFX {
 FIXED x;
 FIXED y;
} POINTFX,*LPPOINTFX;
typedef struct tagTTPOLYCURVE {
 WORD wType;
 WORD cpfx;
 POINTFX apfx[1];
} TTPOLYCURVE,*LPTTPOLYCURVE;
typedef struct tagTTPOLYGONHEADER {
 DWORD cb;
 DWORD dwType;
 POINTFX pfxStart;
} TTPOLYGONHEADER,*LPTTPOLYGONHEADER;
typedef struct _POINTFLOAT {
 FLOAT x;
 FLOAT y;
} POINTFLOAT,*PPOINTFLOAT;
typedef struct _GLYPHMETRICSFLOAT {
 FLOAT gmfBlackBoxX;
 FLOAT gmfBlackBoxY;
 POINTFLOAT gmfptGlyphOrigin;
 FLOAT gmfCellIncX;
 FLOAT gmfCellIncY;
} GLYPHMETRICSFLOAT,*PGLYPHMETRICSFLOAT,*LPGLYPHMETRICSFLOAT;
typedef struct tagLAYERPLANEDESCRIPTOR {
 WORD nSize;
 WORD nVersion;
 DWORD dwFlags;
 BYTE iPixelType;
 BYTE cColorBits;
 BYTE cRedBits;
 BYTE cRedShift;
 BYTE cGreenBits;
 BYTE cGreenShift;
 BYTE cBlueBits;
 BYTE cBlueShift;
 BYTE cAlphaBits;
 BYTE cAlphaShift;
 BYTE cAccumBits;
 BYTE cAccumRedBits;
 BYTE cAccumGreenBits;
 BYTE cAccumBlueBits;
 BYTE cAccumAlphaBits;
 BYTE cDepthBits;
 BYTE cStencilBits;
 BYTE cAuxBuffers;
 BYTE iLayerPlane;
 BYTE bReserved;
 COLORREF crTransparent;
} LAYERPLANEDESCRIPTOR,*PLAYERPLANEDESCRIPTOR,*LPLAYERPLANEDESCRIPTOR;
typedef struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
} BLENDFUNCTION,*PBLENDFUNCTION,*LPBLENDFUNCTION;

typedef struct _DESIGNVECTOR {
 DWORD dvReserved;
 DWORD dvNumAxes;
 LONG dvValues[16];
} DESIGNVECTOR, *PDESIGNVECTOR, *LPDESIGNVECTOR;
typedef USHORT COLOR16;
typedef struct _TRIVERTEX {
 LONG x;
 LONG y;
 COLOR16 Red;
 COLOR16 Green;
 COLOR16 Blue;
 COLOR16 Alpha;
} TRIVERTEX, *PTRIVERTEX, *LPTRIVERTEX;
typedef struct _GRADIENT_TRIANGLE {
 ULONG Vertex1;
 ULONG Vertex2;
 ULONG Vertex3;
} GRADIENT_TRIANGLE,*PGRADIENT_TRIANGLE,*LPGRADIENT_TRIANGLE;
typedef struct _GRADIENT_RECT {
 ULONG UpperLeft;
 ULONG LowerRight;
}GRADIENT_RECT,*PGRADIENT_RECT,*LPGRADIENT_RECT;
typedef struct _DISPLAY_DEVICEA {
  DWORD cb;
  CHAR DeviceName[32];
  CHAR DeviceString[128];
  DWORD StateFlags;
  CHAR DeviceID[128];
  CHAR DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA, *LPDISPLAY_DEVICEA;
typedef struct _DISPLAY_DEVICEW {
  DWORD cb;
  WCHAR DeviceName[32];
  WCHAR DeviceString[128];
  DWORD StateFlags;
  WCHAR DeviceID[128];
  WCHAR DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW, *LPDISPLAY_DEVICEW;

typedef BOOL (__attribute__((__stdcall__)) *ABORTPROC)(HDC,int);
typedef int (__attribute__((__stdcall__)) *MFENUMPROC)(HDC,HANDLETABLE*,METARECORD*,int,LPARAM);
typedef int (__attribute__((__stdcall__)) *ENHMFENUMPROC)(HDC,HANDLETABLE*,ENHMETARECORD*,int,LPARAM);
typedef int (__attribute__((__stdcall__)) *OLDFONTENUMPROCA)(const LOGFONTA*,const TEXTMETRICA*,DWORD,LPARAM);
typedef int (__attribute__((__stdcall__)) *OLDFONTENUMPROCW)(const LOGFONTW*,const TEXTMETRICW*,DWORD,LPARAM);
typedef OLDFONTENUMPROCA FONTENUMPROCA;
typedef OLDFONTENUMPROCW FONTENUMPROCW;
typedef int (__attribute__((__stdcall__)) *ICMENUMPROCA)(LPSTR,LPARAM);
typedef int (__attribute__((__stdcall__)) *ICMENUMPROCW)(LPWSTR,LPARAM);
typedef void (__attribute__((__stdcall__)) *GOBJENUMPROC)(LPVOID,LPARAM);
typedef void (__attribute__((__stdcall__)) *LINEDDAPROC)(int,int,LPARAM);
typedef UINT (__attribute__((__stdcall__)) *LPFNDEVMODE)(HWND,HMODULE,LPDEVMODEA,LPSTR,LPSTR,LPDEVMODEA,LPSTR,UINT);
typedef DWORD (__attribute__((__stdcall__)) *LPFNDEVCAPS)(LPSTR,LPSTR,UINT,LPSTR,LPDEVMODEA);







int __attribute__((__stdcall__)) AbortDoc(HDC);
BOOL __attribute__((__stdcall__)) AbortPath(HDC);
int __attribute__((__stdcall__)) AddFontResourceA(LPCSTR);
int __attribute__((__stdcall__)) AddFontResourceW(LPCWSTR);





BOOL __attribute__((__stdcall__)) AngleArc(HDC,int,int,DWORD,FLOAT,FLOAT);
BOOL __attribute__((__stdcall__)) AnimatePalette(HPALETTE,UINT,UINT,const PALETTEENTRY*);
BOOL __attribute__((__stdcall__)) Arc(HDC,int,int,int,int,int,int,int,int);
BOOL __attribute__((__stdcall__)) ArcTo(HDC,int,int,int,int,int,int,int,int);
BOOL __attribute__((__stdcall__)) BeginPath(HDC);
BOOL __attribute__((__stdcall__)) BitBlt(HDC,int,int,int,int,HDC,int,int,DWORD);
BOOL __attribute__((__stdcall__)) CancelDC(HDC);
BOOL __attribute__((__stdcall__)) CheckColorsInGamut(HDC,PVOID,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) Chord(HDC,int,int,int,int,int,int,int,int);
int __attribute__((__stdcall__)) ChoosePixelFormat(HDC,const PIXELFORMATDESCRIPTOR*);
HENHMETAFILE __attribute__((__stdcall__)) CloseEnhMetaFile(HDC);
BOOL __attribute__((__stdcall__)) CloseFigure(HDC);
HMETAFILE __attribute__((__stdcall__)) CloseMetaFile(HDC);
BOOL __attribute__((__stdcall__)) ColorMatchToTarget(HDC,HDC,DWORD);
int __attribute__((__stdcall__)) CombineRgn(HRGN,HRGN,HRGN,int);
BOOL __attribute__((__stdcall__)) CombineTransform(LPXFORM,const XFORM*,const XFORM*);
HENHMETAFILE __attribute__((__stdcall__)) CopyEnhMetaFileA(HENHMETAFILE,LPCSTR);
HENHMETAFILE __attribute__((__stdcall__)) CopyEnhMetaFileW(HENHMETAFILE,LPCWSTR);
HMETAFILE __attribute__((__stdcall__)) CopyMetaFileA(HMETAFILE,LPCSTR);
HMETAFILE __attribute__((__stdcall__)) CopyMetaFileW(HMETAFILE,LPCWSTR);
HBITMAP __attribute__((__stdcall__)) CreateBitmap(int,int,UINT,UINT,PCVOID);
HBITMAP __attribute__((__stdcall__)) CreateBitmapIndirect(const WINDOWS_BITMAP*);
HBRUSH __attribute__((__stdcall__)) CreateBrushIndirect(const LOGBRUSH*);
HCOLORSPACE __attribute__((__stdcall__)) CreateColorSpaceA(LPLOGCOLORSPACEA);
HCOLORSPACE __attribute__((__stdcall__)) CreateColorSpaceW(LPLOGCOLORSPACEW);
HBITMAP __attribute__((__stdcall__)) CreateCompatibleBitmap(HDC,int,int);
HDC __attribute__((__stdcall__)) CreateCompatibleDC(HDC);
HDC __attribute__((__stdcall__)) CreateDCA(LPCSTR,LPCSTR,LPCSTR,const DEVMODEA*);
HDC __attribute__((__stdcall__)) CreateDCW(LPCWSTR,LPCWSTR,LPCWSTR,const DEVMODEW*);
HBITMAP __attribute__((__stdcall__)) CreateDIBitmap(HDC,const BITMAPINFOHEADER*,DWORD,PCVOID,const BITMAPINFO*,UINT);
HBRUSH __attribute__((__stdcall__)) CreateDIBPatternBrush(HGLOBAL,UINT);
HBRUSH __attribute__((__stdcall__)) CreateDIBPatternBrushPt(PCVOID,UINT);
HBITMAP __attribute__((__stdcall__)) CreateDIBSection(HDC,const BITMAPINFO*,UINT,void**,HANDLE,DWORD);
HBITMAP __attribute__((__stdcall__)) CreateDiscardableBitmap(HDC,int,int);
HRGN __attribute__((__stdcall__)) CreateEllipticRgn(int,int,int,int);
HRGN __attribute__((__stdcall__)) CreateEllipticRgnIndirect(LPCRECT);
HDC __attribute__((__stdcall__)) CreateEnhMetaFileA(HDC,LPCSTR,LPCRECT,LPCSTR);
HDC __attribute__((__stdcall__)) CreateEnhMetaFileW(HDC,LPCWSTR,LPCRECT,LPCWSTR);
HFONT __attribute__((__stdcall__)) CreateFontA(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCSTR);
HFONT __attribute__((__stdcall__)) CreateFontW(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCWSTR);
HFONT __attribute__((__stdcall__)) CreateFontIndirectA(const LOGFONTA*);
HFONT __attribute__((__stdcall__)) CreateFontIndirectW(const LOGFONTW*);
HPALETTE __attribute__((__stdcall__)) CreateHalftonePalette(HDC);
HBRUSH __attribute__((__stdcall__)) CreateHatchBrush(int,COLORREF);
HDC __attribute__((__stdcall__)) CreateICA(LPCSTR,LPCSTR,LPCSTR,const DEVMODEA*);
HDC __attribute__((__stdcall__)) CreateICW(LPCWSTR,LPCWSTR,LPCWSTR,const DEVMODEW*);
HDC __attribute__((__stdcall__)) CreateMetaFileA(LPCSTR);
HDC __attribute__((__stdcall__)) CreateMetaFileW(LPCWSTR);
HPALETTE __attribute__((__stdcall__)) CreatePalette(const LOGPALETTE*);
HBRUSH __attribute__((__stdcall__)) CreatePatternBrush(HBITMAP);
HPEN __attribute__((__stdcall__)) CreatePen(int,int,COLORREF);
HPEN __attribute__((__stdcall__)) CreatePenIndirect(const LOGPEN*);
HRGN __attribute__((__stdcall__)) CreatePolygonRgn(const POINT*,int,int);
HRGN __attribute__((__stdcall__)) CreatePolyPolygonRgn(const POINT*,const INT*,int,int);
HRGN __attribute__((__stdcall__)) CreateRectRgn(int,int,int,int);
HRGN __attribute__((__stdcall__)) CreateRectRgnIndirect(LPCRECT);
HRGN __attribute__((__stdcall__)) CreateRoundRectRgn(int,int,int,int,int,int);
BOOL __attribute__((__stdcall__)) CreateScalableFontResourceA(DWORD,LPCSTR,LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) CreateScalableFontResourceW(DWORD,LPCWSTR,LPCWSTR,LPCWSTR);
HBRUSH __attribute__((__stdcall__)) CreateSolidBrush(COLORREF);
BOOL __attribute__((__stdcall__)) DeleteColorSpace(HCOLORSPACE);
BOOL __attribute__((__stdcall__)) DeleteDC(HDC);
BOOL __attribute__((__stdcall__)) DeleteEnhMetaFile(HENHMETAFILE);
BOOL __attribute__((__stdcall__)) DeleteMetaFile(HMETAFILE);
BOOL __attribute__((__stdcall__)) DeleteObject(HGDIOBJ);
int __attribute__((__stdcall__)) DescribePixelFormat(HDC,int,UINT,LPPIXELFORMATDESCRIPTOR);
DWORD __attribute__((__stdcall__)) DeviceCapabilitiesA(LPCSTR,LPCSTR,WORD,LPSTR,const DEVMODEA*);
DWORD __attribute__((__stdcall__)) DeviceCapabilitiesW(LPCWSTR,LPCWSTR,WORD,LPWSTR,const DEVMODEW*);
BOOL __attribute__((__stdcall__)) DPtoLP(HDC,LPPOINT,int);
int __attribute__((__stdcall__)) DrawEscape(HDC,int,int,LPCSTR);
BOOL __attribute__((__stdcall__)) Ellipse(HDC,int,int,int,int);
int __attribute__((__stdcall__)) EndDoc(HDC);
int __attribute__((__stdcall__)) EndPage(HDC);
BOOL __attribute__((__stdcall__)) EndPath(HDC);
BOOL __attribute__((__stdcall__)) EnumEnhMetaFile(HDC,HENHMETAFILE,ENHMFENUMPROC,PVOID,LPCRECT);
int __attribute__((__stdcall__)) EnumFontFamiliesA(HDC,LPCSTR,FONTENUMPROCA,LPARAM);
int __attribute__((__stdcall__)) EnumFontFamiliesW(HDC,LPCWSTR,FONTENUMPROCW,LPARAM);
int __attribute__((__stdcall__)) EnumFontFamiliesExA(HDC,PLOGFONTA,FONTENUMPROCA,LPARAM,DWORD);
int __attribute__((__stdcall__)) EnumFontFamiliesExW(HDC,PLOGFONTW,FONTENUMPROCW,LPARAM,DWORD);
int __attribute__((__stdcall__)) EnumFontsA(HDC,LPCSTR,FONTENUMPROCA,LPARAM);
int __attribute__((__stdcall__)) EnumFontsW(HDC,LPCWSTR,FONTENUMPROCW,LPARAM);
int __attribute__((__stdcall__)) EnumICMProfilesA(HDC,ICMENUMPROCA,LPARAM);
int __attribute__((__stdcall__)) EnumICMProfilesW(HDC,ICMENUMPROCW,LPARAM);
BOOL __attribute__((__stdcall__)) EnumMetaFile(HDC,HMETAFILE,MFENUMPROC,LPARAM);
int __attribute__((__stdcall__)) EnumObjects(HDC,int,GOBJENUMPROC,LPARAM);
BOOL __attribute__((__stdcall__)) EqualRgn(HRGN,HRGN);
int __attribute__((__stdcall__)) Escape(HDC,int,int,LPCSTR,PVOID);
int __attribute__((__stdcall__)) ExcludeClipRect(HDC,int,int,int,int);
int __attribute__((__stdcall__)) ExcludeUpdateRgn(HDC,HWND);
HPEN __attribute__((__stdcall__)) ExtCreatePen(DWORD,DWORD,const LOGBRUSH*,DWORD,const DWORD*);
HRGN __attribute__((__stdcall__)) ExtCreateRegion(const XFORM*,DWORD,const RGNDATA*);
int __attribute__((__stdcall__)) ExtEscape(HDC,int,int,LPCSTR,int,LPSTR);
BOOL __attribute__((__stdcall__)) ExtFloodFill(HDC,int,int,COLORREF,UINT);
int __attribute__((__stdcall__)) ExtSelectClipRgn(HDC,HRGN,int);
BOOL __attribute__((__stdcall__)) ExtTextOutA(HDC,int,int,UINT,LPCRECT,LPCSTR,UINT,const INT*);
BOOL __attribute__((__stdcall__)) ExtTextOutW(HDC,int,int,UINT,LPCRECT,LPCWSTR,UINT,const INT*);
BOOL __attribute__((__stdcall__)) FillPath(HDC);
int __attribute__((__stdcall__)) FillRect(HDC,LPCRECT,HBRUSH);
int __attribute__((__stdcall__)) FillRgn(HDC,HRGN,HBRUSH);
BOOL __attribute__((__stdcall__)) FixBrushOrgEx(HDC,int,int,LPPOINT);
BOOL __attribute__((__stdcall__)) FlattenPath(HDC);
BOOL __attribute__((__stdcall__)) FloodFill(HDC,int,int,COLORREF);
BOOL __attribute__((__stdcall__)) GdiComment(HDC,UINT,const BYTE*);
BOOL __attribute__((__stdcall__)) GdiFlush(void);
DWORD __attribute__((__stdcall__)) GdiGetBatchLimit(void);
DWORD __attribute__((__stdcall__)) GdiSetBatchLimit(DWORD);
# 2580 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wingdi.h" 3
int __attribute__((__stdcall__)) GetArcDirection(HDC);
BOOL __attribute__((__stdcall__)) GetAspectRatioFilterEx(HDC,LPSIZE);
LONG __attribute__((__stdcall__)) GetBitmapBits(HBITMAP,LONG,PVOID);
BOOL __attribute__((__stdcall__)) GetBitmapDimensionEx(HBITMAP,LPSIZE);
COLORREF __attribute__((__stdcall__)) GetBkColor(HDC);
int __attribute__((__stdcall__)) GetBkMode(HDC);
UINT __attribute__((__stdcall__)) GetBoundsRect(HDC,LPRECT,UINT);
BOOL __attribute__((__stdcall__)) GetBrushOrgEx(HDC,LPPOINT);
BOOL __attribute__((__stdcall__)) GetCharABCWidthsA(HDC,UINT,UINT,LPABC);
BOOL __attribute__((__stdcall__)) GetCharABCWidthsW(HDC,UINT,UINT,LPABC);
BOOL __attribute__((__stdcall__)) GetCharABCWidthsFloatA(HDC,UINT,UINT,LPABCFLOAT);
BOOL __attribute__((__stdcall__)) GetCharABCWidthsFloatW(HDC,UINT,UINT,LPABCFLOAT);
DWORD __attribute__((__stdcall__)) GetCharacterPlacementA(HDC,LPCSTR,int,int,LPGCP_RESULTSA,DWORD);
DWORD __attribute__((__stdcall__)) GetCharacterPlacementW(HDC,LPCWSTR,int,int,LPGCP_RESULTSW,DWORD);
BOOL __attribute__((__stdcall__)) GetCharWidth32A(HDC,UINT,UINT,LPINT);
BOOL __attribute__((__stdcall__)) GetCharWidth32W(HDC,UINT,UINT,LPINT);
BOOL __attribute__((__stdcall__)) GetCharWidthA(HDC,UINT,UINT,LPINT);
BOOL __attribute__((__stdcall__)) GetCharWidthW(HDC,UINT,UINT,LPINT);
BOOL __attribute__((__stdcall__)) GetCharWidthFloatA(HDC,UINT,UINT,PFLOAT);
BOOL __attribute__((__stdcall__)) GetCharWidthFloatW(HDC,UINT,UINT,PFLOAT);
int __attribute__((__stdcall__)) GetClipBox(HDC,LPRECT);
int __attribute__((__stdcall__)) GetClipRgn(HDC,HRGN);
BOOL __attribute__((__stdcall__)) GetColorAdjustment(HDC,LPCOLORADJUSTMENT);
HANDLE __attribute__((__stdcall__)) GetColorSpace(HDC);
HGDIOBJ __attribute__((__stdcall__)) GetCurrentObject(HDC,UINT);
BOOL __attribute__((__stdcall__)) GetCurrentPositionEx(HDC,LPPOINT);
HCURSOR __attribute__((__stdcall__)) GetCursor(void);
BOOL __attribute__((__stdcall__)) GetDCOrgEx(HDC,LPPOINT);
int __attribute__((__stdcall__)) GetDeviceCaps(HDC,int);
BOOL __attribute__((__stdcall__)) GetDeviceGammaRamp(HDC,PVOID);
UINT __attribute__((__stdcall__)) GetDIBColorTable(HDC,UINT,UINT,RGBQUAD*);
int __attribute__((__stdcall__)) GetDIBits(HDC,HBITMAP,UINT,UINT,PVOID,LPBITMAPINFO,UINT);
HENHMETAFILE __attribute__((__stdcall__)) GetEnhMetaFileA(LPCSTR);
HENHMETAFILE __attribute__((__stdcall__)) GetEnhMetaFileW(LPCWSTR);
UINT __attribute__((__stdcall__)) GetEnhMetaFileBits(HENHMETAFILE,UINT,LPBYTE);
UINT __attribute__((__stdcall__)) GetEnhMetaFileDescriptionA(HENHMETAFILE,UINT,LPSTR);
UINT __attribute__((__stdcall__)) GetEnhMetaFileDescriptionW(HENHMETAFILE,UINT,LPWSTR);
UINT __attribute__((__stdcall__)) GetEnhMetaFileHeader(HENHMETAFILE,UINT,LPENHMETAHEADER);
UINT __attribute__((__stdcall__)) GetEnhMetaFilePaletteEntries(HENHMETAFILE,UINT,LPPALETTEENTRY);
UINT __attribute__((__stdcall__)) GetEnhMetaFilePixelFormat(HENHMETAFILE,DWORD,const PIXELFORMATDESCRIPTOR*);
DWORD __attribute__((__stdcall__)) GetFontData(HDC,DWORD,DWORD,PVOID,DWORD);
DWORD __attribute__((__stdcall__)) GetFontLanguageInfo(HDC);
DWORD __attribute__((__stdcall__)) GetGlyphOutlineA(HDC,UINT,UINT,LPGLYPHMETRICS,DWORD,PVOID,const MAT2*);
DWORD __attribute__((__stdcall__)) GetGlyphOutlineW(HDC,UINT,UINT,LPGLYPHMETRICS,DWORD,PVOID,const MAT2*);
int __attribute__((__stdcall__)) GetGraphicsMode(HDC);
BOOL __attribute__((__stdcall__)) GetICMProfileA(HDC,DWORD,LPSTR);
BOOL __attribute__((__stdcall__)) GetICMProfileW(HDC,DWORD,LPWSTR);
DWORD __attribute__((__stdcall__)) GetKerningPairsA(HDC,DWORD,LPKERNINGPAIR);
DWORD __attribute__((__stdcall__)) GetKerningPairsW(HDC,DWORD,LPKERNINGPAIR);
BOOL __attribute__((__stdcall__)) GetLogColorSpaceA(HCOLORSPACE,LPLOGCOLORSPACEA,DWORD);
BOOL __attribute__((__stdcall__)) GetLogColorSpaceW(HCOLORSPACE,LPLOGCOLORSPACEW,DWORD);
int __attribute__((__stdcall__)) GetMapMode(HDC);
HMETAFILE __attribute__((__stdcall__)) GetMetaFileA(LPCSTR);
HMETAFILE __attribute__((__stdcall__)) GetMetaFileW(LPCWSTR);
UINT __attribute__((__stdcall__)) GetMetaFileBitsEx(HMETAFILE,UINT,PVOID);
int __attribute__((__stdcall__)) GetMetaRgn(HDC,HRGN);
BOOL __attribute__((__stdcall__)) GetMiterLimit(HDC,PFLOAT);
COLORREF __attribute__((__stdcall__)) GetNearestColor(HDC,COLORREF);
UINT __attribute__((__stdcall__)) GetNearestPaletteIndex(HPALETTE,COLORREF);
int __attribute__((__stdcall__)) GetObjectA(HGDIOBJ,int,PVOID);
int __attribute__((__stdcall__)) GetObjectW(HGDIOBJ,int,PVOID);
DWORD __attribute__((__stdcall__)) GetObjectType(HGDIOBJ);
UINT __attribute__((__stdcall__)) GetOutlineTextMetricsA(HDC,UINT,LPOUTLINETEXTMETRICA);
UINT __attribute__((__stdcall__)) GetOutlineTextMetricsW(HDC,UINT,LPOUTLINETEXTMETRICW);
UINT __attribute__((__stdcall__)) GetPaletteEntries(HPALETTE,UINT,UINT,LPPALETTEENTRY);
int __attribute__((__stdcall__)) GetPath(HDC,LPPOINT,PBYTE,int);
COLORREF __attribute__((__stdcall__)) GetPixel(HDC,int,int);
int __attribute__((__stdcall__)) GetPixelFormat(HDC);
int __attribute__((__stdcall__)) GetPolyFillMode(HDC);
BOOL __attribute__((__stdcall__)) GetRasterizerCaps(LPRASTERIZER_STATUS,UINT);
int __attribute__((__stdcall__)) GetRandomRgn (HDC,HRGN,INT);
DWORD __attribute__((__stdcall__)) GetRegionData(HRGN,DWORD,LPRGNDATA);
int __attribute__((__stdcall__)) GetRgnBox(HRGN,LPRECT);
int __attribute__((__stdcall__)) GetROP2(HDC);
HGDIOBJ __attribute__((__stdcall__)) GetStockObject(int);
int __attribute__((__stdcall__)) GetStretchBltMode(HDC);
UINT __attribute__((__stdcall__)) GetSystemPaletteEntries(HDC,UINT,UINT,LPPALETTEENTRY);
UINT __attribute__((__stdcall__)) GetSystemPaletteUse(HDC);
UINT __attribute__((__stdcall__)) GetTextAlign(HDC);
int __attribute__((__stdcall__)) GetTextCharacterExtra(HDC);
int __attribute__((__stdcall__)) GetTextCharset(HDC);
int __attribute__((__stdcall__)) GetTextCharsetInfo(HDC,LPFONTSIGNATURE,DWORD);
COLORREF __attribute__((__stdcall__)) GetTextColor(HDC);
BOOL __attribute__((__stdcall__)) GetTextExtentExPointA(HDC,LPCSTR,int,int,LPINT,LPINT,LPSIZE);
BOOL __attribute__((__stdcall__)) GetTextExtentExPointW( HDC,LPCWSTR,int,int,LPINT,LPINT,LPSIZE );
BOOL __attribute__((__stdcall__)) GetTextExtentPointA(HDC,LPCSTR,int,LPSIZE);
BOOL __attribute__((__stdcall__)) GetTextExtentPointW(HDC,LPCWSTR,int,LPSIZE);
BOOL __attribute__((__stdcall__)) GetTextExtentPoint32A(HDC,LPCSTR,int,LPSIZE);
BOOL __attribute__((__stdcall__)) GetTextExtentPoint32W( HDC,LPCWSTR,int,LPSIZE);
int __attribute__((__stdcall__)) GetTextFaceA(HDC,int,LPSTR);
int __attribute__((__stdcall__)) GetTextFaceW(HDC,int,LPWSTR);
BOOL __attribute__((__stdcall__)) GetTextMetricsA(HDC,LPTEXTMETRICA);
BOOL __attribute__((__stdcall__)) GetTextMetricsW(HDC,LPTEXTMETRICW);
BOOL __attribute__((__stdcall__)) GetViewportExtEx(HDC,LPSIZE);
BOOL __attribute__((__stdcall__)) GetViewportOrgEx(HDC,LPPOINT);
BOOL __attribute__((__stdcall__)) GetWindowExtEx(HDC,LPSIZE);
BOOL __attribute__((__stdcall__)) GetWindowOrgEx(HDC,LPPOINT);
UINT __attribute__((__stdcall__)) GetWinMetaFileBits(HENHMETAFILE,UINT,LPBYTE,INT,HDC);
BOOL __attribute__((__stdcall__)) GetWorldTransform(HDC,LPXFORM);
int __attribute__((__stdcall__)) IntersectClipRect(HDC,int,int,int,int);
BOOL __attribute__((__stdcall__)) InvertRgn(HDC,HRGN);
BOOL __attribute__((__stdcall__)) LineDDA(int,int,int,int,LINEDDAPROC,LPARAM);
BOOL __attribute__((__stdcall__)) LineTo(HDC,int,int);
BOOL __attribute__((__stdcall__)) LPtoDP(HDC,LPPOINT,int);
BOOL __attribute__((__stdcall__)) MaskBlt(HDC,int,int,int,int,HDC,int,int,HBITMAP,int,int,DWORD);
BOOL __attribute__((__stdcall__)) ModifyWorldTransform(HDC,const XFORM*,DWORD);
BOOL __attribute__((__stdcall__)) MoveToEx(HDC,int,int,LPPOINT);
int __attribute__((__stdcall__)) OffsetClipRgn(HDC,int,int);
int __attribute__((__stdcall__)) OffsetRgn(HRGN,int,int);
BOOL __attribute__((__stdcall__)) OffsetViewportOrgEx(HDC,int,int,LPPOINT);
BOOL __attribute__((__stdcall__)) OffsetWindowOrgEx(HDC,int,int,LPPOINT);
BOOL __attribute__((__stdcall__)) PaintRgn(HDC,HRGN);
BOOL __attribute__((__stdcall__)) PatBlt(HDC,int,int,int,int,DWORD);
HRGN __attribute__((__stdcall__)) PathToRegion(HDC);
BOOL __attribute__((__stdcall__)) Pie(HDC,int,int,int,int,int,int,int,int);
BOOL __attribute__((__stdcall__)) PlayEnhMetaFile(HDC,HENHMETAFILE,LPCRECT);
BOOL __attribute__((__stdcall__)) PlayEnhMetaFileRecord(HDC,LPHANDLETABLE,const ENHMETARECORD*,UINT);
BOOL __attribute__((__stdcall__)) PlayMetaFile(HDC,HMETAFILE);
BOOL __attribute__((__stdcall__)) PlayMetaFileRecord(HDC,LPHANDLETABLE,LPMETARECORD,UINT);
BOOL __attribute__((__stdcall__)) PlgBlt(HDC,const POINT*,HDC,int,int,int,int,HBITMAP,int,int);
BOOL __attribute__((__stdcall__)) PolyBezier(HDC,const POINT*,DWORD);
BOOL __attribute__((__stdcall__)) PolyBezierTo(HDC,const POINT*,DWORD);
BOOL __attribute__((__stdcall__)) PolyDraw(HDC,const POINT*,const BYTE*,int);
BOOL __attribute__((__stdcall__)) Polygon(HDC,const POINT*,int);
BOOL __attribute__((__stdcall__)) Polyline(HDC,const POINT*,int);
BOOL __attribute__((__stdcall__)) PolylineTo(HDC,const POINT*,DWORD);
BOOL __attribute__((__stdcall__)) PolyPolygon(HDC,const POINT*,const INT*,int);
BOOL __attribute__((__stdcall__)) PolyPolyline(HDC,const POINT*,const DWORD*,DWORD);
BOOL __attribute__((__stdcall__)) PolyTextOutA(HDC,const POLYTEXTA*,int);
BOOL __attribute__((__stdcall__)) PolyTextOutW(HDC,const POLYTEXTW*,int);
BOOL __attribute__((__stdcall__)) PtInRegion(HRGN,int,int);
BOOL __attribute__((__stdcall__)) PtVisible(HDC,int,int);
UINT __attribute__((__stdcall__)) RealizePalette(HDC);
BOOL __attribute__((__stdcall__)) Rectangle(HDC,int,int,int,int);
BOOL __attribute__((__stdcall__)) RectInRegion(HRGN,LPCRECT);
BOOL __attribute__((__stdcall__)) RectVisible(HDC,LPCRECT);
BOOL __attribute__((__stdcall__)) RemoveFontResourceA(LPCSTR);
BOOL __attribute__((__stdcall__)) RemoveFontResourceW(LPCWSTR);





HDC __attribute__((__stdcall__)) ResetDCA(HDC,const DEVMODEA*);
HDC __attribute__((__stdcall__)) ResetDCW(HDC,const DEVMODEW*);
BOOL __attribute__((__stdcall__)) ResizePalette(HPALETTE,UINT);
BOOL __attribute__((__stdcall__)) RestoreDC(HDC,int);
BOOL __attribute__((__stdcall__)) RoundRect(HDC,int,int,int,int,int,int);
int __attribute__((__stdcall__)) SaveDC(HDC);
BOOL __attribute__((__stdcall__)) ScaleViewportExtEx(HDC,int,int,int,int,LPSIZE);
BOOL __attribute__((__stdcall__)) ScaleWindowExtEx(HDC,int,int,int,int,LPSIZE);
BOOL __attribute__((__stdcall__)) SelectClipPath(HDC,int);
int __attribute__((__stdcall__)) SelectClipRgn(HDC,HRGN);
HGDIOBJ __attribute__((__stdcall__)) SelectObject(HDC,HGDIOBJ);
HPALETTE __attribute__((__stdcall__)) SelectPalette(HDC,HPALETTE,BOOL);
int __attribute__((__stdcall__)) SetAbortProc(HDC,ABORTPROC);
int __attribute__((__stdcall__)) SetArcDirection(HDC,int);
LONG __attribute__((__stdcall__)) SetBitmapBits(HBITMAP,DWORD,PCVOID);
BOOL __attribute__((__stdcall__)) SetBitmapDimensionEx(HBITMAP,int,int,LPSIZE);
COLORREF __attribute__((__stdcall__)) SetBkColor(HDC,COLORREF);
int __attribute__((__stdcall__)) SetBkMode(HDC,int);
UINT __attribute__((__stdcall__)) SetBoundsRect(HDC,LPCRECT,UINT);
BOOL __attribute__((__stdcall__)) SetBrushOrgEx(HDC,int,int,LPPOINT);
BOOL __attribute__((__stdcall__)) SetColorAdjustment(HDC,const COLORADJUSTMENT*);
BOOL __attribute__((__stdcall__)) SetColorSpace(HDC,HCOLORSPACE);




BOOL __attribute__((__stdcall__)) SetDeviceGammaRamp(HDC,PVOID);
UINT __attribute__((__stdcall__)) SetDIBColorTable(HDC,UINT,UINT,const RGBQUAD*);
int __attribute__((__stdcall__)) SetDIBits(HDC,HBITMAP,UINT,UINT,PCVOID,const BITMAPINFO*,UINT);
int __attribute__((__stdcall__)) SetDIBitsToDevice(HDC,int,int,DWORD,DWORD,int,int,UINT,UINT,PCVOID,const BITMAPINFO*,UINT);
HENHMETAFILE __attribute__((__stdcall__)) SetEnhMetaFileBits(UINT,const BYTE*);
int __attribute__((__stdcall__)) SetGraphicsMode(HDC,int);
int __attribute__((__stdcall__)) SetICMMode(HDC,int);
BOOL __attribute__((__stdcall__)) SetICMProfileA(HDC,LPSTR);
BOOL __attribute__((__stdcall__)) SetICMProfileW(HDC,LPWSTR);
int __attribute__((__stdcall__)) SetMapMode(HDC,int);
DWORD __attribute__((__stdcall__)) SetMapperFlags(HDC,DWORD);
HMETAFILE __attribute__((__stdcall__)) SetMetaFileBitsEx(UINT,const BYTE *);
int __attribute__((__stdcall__)) SetMetaRgn(HDC);
BOOL __attribute__((__stdcall__)) SetMiterLimit(HDC,FLOAT,PFLOAT);
UINT __attribute__((__stdcall__)) SetPaletteEntries(HPALETTE,UINT,UINT,const PALETTEENTRY*);
COLORREF __attribute__((__stdcall__)) SetPixel(HDC,int,int,COLORREF);
BOOL __attribute__((__stdcall__)) SetPixelFormat(HDC,int,const PIXELFORMATDESCRIPTOR*);
BOOL __attribute__((__stdcall__)) SetPixelV(HDC,int,int,COLORREF);
int __attribute__((__stdcall__)) SetPolyFillMode(HDC,int);
BOOL __attribute__((__stdcall__)) SetRectRgn(HRGN,int,int,int,int);
int __attribute__((__stdcall__)) SetROP2(HDC,int);
int __attribute__((__stdcall__)) SetStretchBltMode(HDC,int);
UINT __attribute__((__stdcall__)) SetSystemPaletteUse(HDC,UINT);
UINT __attribute__((__stdcall__)) SetTextAlign(HDC,UINT);
int __attribute__((__stdcall__)) SetTextCharacterExtra(HDC,int);
COLORREF __attribute__((__stdcall__)) SetTextColor(HDC,COLORREF);
BOOL __attribute__((__stdcall__)) SetTextJustification(HDC,int,int);
BOOL __attribute__((__stdcall__)) SetViewportExtEx(HDC,int,int,LPSIZE);
BOOL __attribute__((__stdcall__)) SetViewportOrgEx(HDC,int,int,LPPOINT);
BOOL __attribute__((__stdcall__)) SetWindowExtEx(HDC,int,int,LPSIZE);
BOOL __attribute__((__stdcall__)) SetWindowOrgEx(HDC,int,int,LPPOINT);
HENHMETAFILE __attribute__((__stdcall__)) SetWinMetaFileBits(UINT,const BYTE*,HDC,const METAFILEPICT*);
BOOL __attribute__((__stdcall__)) SetWorldTransform(HDC,const XFORM *);
int __attribute__((__stdcall__)) StartDocA(HDC,const DOCINFOA*);
int __attribute__((__stdcall__)) StartDocW(HDC,const DOCINFOW*);
int __attribute__((__stdcall__)) StartPage(HDC);
BOOL __attribute__((__stdcall__)) StretchBlt(HDC,int,int,int,int,HDC,int,int,int,int,DWORD);
int __attribute__((__stdcall__)) StretchDIBits(HDC,int,int,int,int,int,int,int,int,const void *,const BITMAPINFO *,UINT,DWORD);
BOOL __attribute__((__stdcall__)) StrokeAndFillPath(HDC);
BOOL __attribute__((__stdcall__)) StrokePath(HDC);
BOOL __attribute__((__stdcall__)) SwapBuffers(HDC);
BOOL __attribute__((__stdcall__)) TextOutA(HDC,int,int,LPCSTR,int);
BOOL __attribute__((__stdcall__)) TextOutW(HDC,int,int,LPCWSTR,int);
BOOL __attribute__((__stdcall__)) TranslateCharsetInfo(PDWORD,LPCHARSETINFO,DWORD);
BOOL __attribute__((__stdcall__)) UnrealizeObject(HGDIOBJ);
BOOL __attribute__((__stdcall__)) UpdateColors(HDC);
BOOL __attribute__((__stdcall__)) UpdateICMRegKeyA(DWORD,DWORD,LPSTR,UINT);
BOOL __attribute__((__stdcall__)) UpdateICMRegKeyW(DWORD,DWORD,LPWSTR,UINT);
BOOL __attribute__((__stdcall__)) WidenPath(HDC);
BOOL __attribute__((__stdcall__)) wglCopyContext(HGLRC,HGLRC,UINT);
HGLRC __attribute__((__stdcall__)) wglCreateContext(HDC);
HGLRC __attribute__((__stdcall__)) wglCreateLayerContext(HDC,int);
BOOL __attribute__((__stdcall__)) wglDeleteContext(HGLRC);
BOOL __attribute__((__stdcall__)) wglDescribeLayerPlane(HDC,int,int,UINT,LPLAYERPLANEDESCRIPTOR);
HGLRC __attribute__((__stdcall__)) wglGetCurrentContext(void);
HDC __attribute__((__stdcall__)) wglGetCurrentDC(void);
int __attribute__((__stdcall__)) wglGetLayerPaletteEntries(HDC,int,int,int,COLORREF*);
PROC __attribute__((__stdcall__)) wglGetProcAddress(LPCSTR);
BOOL __attribute__((__stdcall__)) wglMakeCurrent(HDC,HGLRC);
BOOL __attribute__((__stdcall__)) wglRealizeLayerPalette(HDC,int,BOOL);
int __attribute__((__stdcall__)) wglSetLayerPaletteEntries(HDC,int,int,int,const COLORREF*);
BOOL __attribute__((__stdcall__)) wglShareLists(HGLRC,HGLRC);
BOOL __attribute__((__stdcall__)) wglSwapLayerBuffers(HDC,UINT);
BOOL __attribute__((__stdcall__)) wglUseFontBitmapsA(HDC,DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) wglUseFontBitmapsW(HDC,DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) wglUseFontOutlinesA(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);
BOOL __attribute__((__stdcall__)) wglUseFontOutlinesW(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);
# 2893 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wingdi.h" 3
typedef BYTE BCHAR;
typedef DOCINFOA DOCINFO, *LPDOCINFO;
typedef LOGFONTA LOGFONT,*PLOGFONT,*LPLOGFONT;
typedef TEXTMETRICA TEXTMETRIC,*PTEXTMETRIC,*LPTEXTMETRIC;


typedef DEVMODEA DEVMODE,*PDEVMODE,*LPDEVMODE;
typedef EXTLOGFONTA EXTLOGFONT,*PEXTLOGFONT,*LPEXTLOGFONT;
typedef GCP_RESULTSA GCP_RESULTS,*LPGCP_RESULTS;
typedef OUTLINETEXTMETRICA OUTLINETEXTMETRIC,*POUTLINETEXTMETRIC,*LPOUTLINETEXTMETRIC;
typedef POLYTEXTA POLYTEXT;
typedef LOGCOLORSPACEA LOGCOLORSPACE,*LPLOGCOLORSPACE;
typedef NEWTEXTMETRICA NEWTEXTMETRIC,*PNEWTEXTMETRIC,*LPNEWTEXTMETRIC;
typedef NEWTEXTMETRICEXA NEWTEXTMETRICEX;
typedef ENUMLOGFONTA ENUMLOGFONT,*LPENUMLOGFONT;
typedef ENUMLOGFONTEXA ENUMLOGFONTEX,*LPENUMLOGFONTEX;
typedef DISPLAY_DEVICEA DISPLAY_DEVICE, *PDISPLAY_DEVICE, *LPDISPLAY_DEVICE;
# 53 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winuser.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winuser.h" 3
# 2053 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winuser.h" 3
typedef BOOL(__attribute__((__stdcall__)) *DLGPROC)(HWND,UINT,WPARAM,LPARAM);
typedef void(__attribute__((__stdcall__)) *TIMERPROC)(HWND,UINT,UINT,DWORD);
typedef BOOL(__attribute__((__stdcall__)) *GRAYSTRINGPROC)(HDC,LPARAM,int);
typedef LRESULT(__attribute__((__stdcall__)) *HOOKPROC)(int,WPARAM,LPARAM);
typedef BOOL(__attribute__((__stdcall__)) *PROPENUMPROCA)(HWND,LPCSTR,HANDLE);
typedef BOOL(__attribute__((__stdcall__)) *PROPENUMPROCW)(HWND,LPCWSTR,HANDLE);
typedef BOOL(__attribute__((__stdcall__)) *PROPENUMPROCEXA)(HWND,LPSTR,HANDLE,DWORD);
typedef BOOL(__attribute__((__stdcall__)) *PROPENUMPROCEXW)(HWND,LPWSTR,HANDLE,DWORD);
typedef int(__attribute__((__stdcall__)) *EDITWORDBREAKPROCA)(LPSTR,int,int,int);
typedef int(__attribute__((__stdcall__)) *EDITWORDBREAKPROCW)(LPWSTR,int,int,int);
typedef LRESULT(__attribute__((__stdcall__)) *WNDPROC)(HWND,UINT,WPARAM,LPARAM);
typedef BOOL(__attribute__((__stdcall__)) *DRAWSTATEPROC)(HDC,LPARAM,WPARAM,int,int);
typedef BOOL(__attribute__((__stdcall__)) *WNDENUMPROC)(HWND,LPARAM);
typedef BOOL(__attribute__((__stdcall__)) *ENUMWINDOWSPROC)(HWND,LPARAM);
typedef BOOL(__attribute__((__stdcall__))* MONITORENUMPROC)(HMONITOR,HDC,LPRECT,LPARAM);
typedef BOOL(__attribute__((__stdcall__)) *NAMEENUMPROCA)(LPSTR,LPARAM);
typedef BOOL(__attribute__((__stdcall__)) *NAMEENUMPROCW)(LPWSTR,LPARAM);
typedef NAMEENUMPROCA DESKTOPENUMPROCA;
typedef NAMEENUMPROCW DESKTOPENUMPROCW;
typedef NAMEENUMPROCA WINSTAENUMPROCA;
typedef NAMEENUMPROCW WINSTAENUMPROCW;
typedef void(__attribute__((__stdcall__)) *SENDASYNCPROC)(HWND,UINT,DWORD,LRESULT);
typedef HANDLE HHOOK;
typedef HANDLE HDWP;
typedef HANDLE HDEVNOTIFY;
typedef struct tagACCEL {
 BYTE fVirt;
 WORD key;
 WORD cmd;
} ACCEL,*LPACCEL;
typedef struct tagACCESSTIMEOUT {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iTimeOutMSec;
} ACCESSTIMEOUT, *LPACCESSTIMEOUT;
typedef struct tagANIMATIONINFO {
 UINT cbSize;
 int iMinAnimate;
} ANIMATIONINFO,*LPANIMATIONINFO;
typedef struct tagCREATESTRUCTA {
 LPVOID lpCreateParams;
 HINSTANCE hInstance;
 HMENU hMenu;
 HWND hwndParent;
 int cy;
 int cx;
 int y;
 int x;
 LONG style;
 LPCSTR lpszName;
 LPCSTR lpszClass;
 DWORD dwExStyle;
} CREATESTRUCTA,*LPCREATESTRUCTA;
typedef struct tagCREATESTRUCTW {
 LPVOID lpCreateParams;
 HINSTANCE hInstance;
 HMENU hMenu;
 HWND hwndParent;
 int cy;
 int cx;
 int y;
 int x;
 LONG style;
 LPCWSTR lpszName;
 LPCWSTR lpszClass;
 DWORD dwExStyle;
} CREATESTRUCTW,*LPCREATESTRUCTW;
typedef struct tagCBT_CREATEWNDA {
 LPCREATESTRUCTA lpcs;
 HWND hwndInsertAfter;
} CBT_CREATEWNDA, *LPCBT_CREATEWNDA;
typedef struct tagCBT_CREATEWNDW {
 LPCREATESTRUCTW lpcs;
 HWND hwndInsertAfter;
} CBT_CREATEWNDW, *LPCBT_CREATEWNDW;
typedef struct tagCBTACTIVATESTRUCT {
 BOOL fMouse;
 HWND hWndActive;
} CBTACTIVATESTRUCT,*LPCBTACTIVATESTRUCT;
typedef struct tagCLIENTCREATESTRUCT {
 HANDLE hWindowMenu;
 UINT idFirstChild;
} CLIENTCREATESTRUCT,*LPCLIENTCREATESTRUCT;
typedef struct tagCOMPAREITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 HWND hwndItem;
 UINT itemID1;
 DWORD itemData1;
 UINT itemID2;
 DWORD itemData2;
 DWORD dwLocaleId;
} COMPAREITEMSTRUCT,*LPCOMPAREITEMSTRUCT;
typedef struct tagCOPYDATASTRUCT {
 DWORD dwData;
 DWORD cbData;
 PVOID lpData;
} COPYDATASTRUCT,*PCOPYDATASTRUCT;
typedef struct tagCURSORSHAPE {
 int xHotSpot;
 int yHotSpot;
 int cx;
 int cy;
 int cbWidth;
    BYTE Planes;
    BYTE BitsPixel;
} CURSORSHAPE,*LPCURSORSHAPE;
typedef struct tagCWPRETSTRUCT {
 LRESULT lResult;
 LPARAM lParam;
 WPARAM wParam;
 DWORD message;
 HWND hwnd;
} CWPRETSTRUCT;
typedef struct tagCWPSTRUCT {
 LPARAM lParam;
 WPARAM wParam;
 UINT message;
 HWND hwnd;
} CWPSTRUCT,*PCWPSTRUCT;
typedef struct tagDEBUGHOOKINFO {
 DWORD idThread;
 DWORD idThreadInstaller;
 LPARAM lParam;
 WPARAM wParam;
 int code;
} DEBUGHOOKINFO,*PDEBUGHOOKINFO,*LPDEBUGHOOKINFO;
typedef struct tagDELETEITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 UINT itemID;
 HWND hwndItem;
 UINT itemData;
} DELETEITEMSTRUCT,*PDELETEITEMSTRUCT,*LPDELETEITEMSTRUCT;
#pragma pack(push,2)
typedef struct {
 DWORD style;
 DWORD dwExtendedStyle;
 short x;
 short y;
 short cx;
 short cy;
 WORD id;
} DLGITEMTEMPLATE,*LPDLGITEMTEMPLATE;
typedef struct {
 DWORD style;
 DWORD dwExtendedStyle;
 WORD cdit;
 short x;
 short y;
 short cx;
 short cy;
} DLGTEMPLATE,*LPDLGTEMPLATE,*LPDLGTEMPLATEA,*LPDLGTEMPLATEW;
typedef const DLGTEMPLATE *LPCDLGTEMPLATE;
#pragma pack(pop)
typedef struct tagDRAWITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 UINT itemID;
 UINT itemAction;
 UINT itemState;
 HWND hwndItem;
 HDC hDC;
 RECT rcItem;
 DWORD itemData;
} DRAWITEMSTRUCT,*LPDRAWITEMSTRUCT,*PDRAWITEMSTRUCT;
typedef struct {
 UINT cbSize;
 int iTabLength;
 int iLeftMargin;
 int iRightMargin;
 UINT uiLengthDrawn;
} DRAWTEXTPARAMS,*LPDRAWTEXTPARAMS;
typedef struct tagPAINTSTRUCT {
 HDC hdc;
 BOOL fErase;
 RECT rcPaint;
 BOOL fRestore;
 BOOL fIncUpdate;
 BYTE rgbReserved[32];
} PAINTSTRUCT,*LPPAINTSTRUCT;
typedef struct tagMSG {
 HWND hwnd;
 UINT message;
 WPARAM wParam;
 LPARAM lParam;
 DWORD time;
 POINT pt;
} MSG,*LPMSG,*PMSG;
typedef struct _ICONINFO {
 BOOL fIcon;
 DWORD xHotspot;
 DWORD yHotspot;
 HBITMAP hbmMask;
 HBITMAP hbmColor;
} ICONINFO,*PICONINFO;
typedef struct tagNMHDR {
 HWND hwndFrom;
 UINT idFrom;
 UINT code;
} NMHDR,*LPNMHDR;
typedef struct _WNDCLASSA {
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCSTR lpszMenuName;
 LPCSTR lpszClassName;
} WNDCLASSA,*LPWNDCLASSA,*PWNDCLASSA;
typedef struct _WNDCLASSW {
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCWSTR lpszMenuName;
 LPCWSTR lpszClassName;
} WNDCLASSW,*LPWNDCLASSW,*PWNDCLASSW;
typedef struct _WNDCLASSEXA {
 UINT cbSize;
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCSTR lpszMenuName;
 LPCSTR lpszClassName;
 HICON hIconSm;
} WNDCLASSEXA,*LPWNDCLASSEXA,*PWNDCLASSEXA;
typedef struct _WNDCLASSEXW {
 UINT cbSize;
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCWSTR lpszMenuName;
 LPCWSTR lpszClassName;
 HICON hIconSm;
} WNDCLASSEXW,*LPWNDCLASSEXW,*PWNDCLASSEXW;
typedef struct tagMENUITEMINFOA {
 UINT cbSize;
 UINT fMask;
 UINT fType;
 UINT fState;
 UINT wID;
 HMENU hSubMenu;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 LPSTR dwTypeData;
 UINT cch;



} MENUITEMINFOA,*LPMENUITEMINFOA;
typedef const MENUITEMINFOA *LPCMENUITEMINFOA;
typedef struct tagMENUITEMINFOW {
 UINT cbSize;
 UINT fMask;
 UINT fType;
 UINT fState;
 UINT wID;
 HMENU hSubMenu;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 LPWSTR dwTypeData;
 UINT cch;



} MENUITEMINFOW,*LPMENUITEMINFOW;
typedef const MENUITEMINFOW *LPCMENUITEMINFOW;
typedef struct tagSCROLLINFO {
 UINT cbSize;
 UINT fMask;
 int nMin;
 int nMax;
 UINT nPage;
 int nPos;
 int nTrackPos;
} SCROLLINFO,*LPSCROLLINFO;
typedef const SCROLLINFO *LPCSCROLLINFO;
typedef struct _WINDOWPLACEMENT {
 UINT length;
 UINT flags;
 UINT showCmd;
 POINT ptMinPosition;
 POINT ptMaxPosition;
 RECT rcNormalPosition;
} WINDOWPLACEMENT,*LPWINDOWPLACEMENT,*PWINDOWPLACEMENT;
typedef struct {
 WORD versionNumber;
 WORD offset;
} MENUITEMTEMPLATEHEADER;
typedef struct {
 WORD mtOption;
 WORD mtID;
 WCHAR mtString[1];
} MENUITEMTEMPLATE;
typedef void MENUTEMPLATE,MENUTEMPLATEA,MENUTEMPLATEW,*LPMENUTEMPLATEA,*LPMENUTEMPLATEW,*LPMENUTEMPLATE;
typedef struct tagHELPINFO {
 UINT cbSize;
 int iContextType;
 int iCtrlId;
 HANDLE hItemHandle;
 DWORD dwContextId;
 POINT MousePos;
} HELPINFO,*LPHELPINFO;
typedef void(__attribute__((__stdcall__)) *MSGBOXCALLBACK)(LPHELPINFO);
typedef struct {
 UINT cbSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCSTR lpszText;
 LPCSTR lpszCaption;
 DWORD dwStyle;
 LPCSTR lpszIcon;
 DWORD dwContextHelpId;
 MSGBOXCALLBACK lpfnMsgBoxCallback;
 DWORD dwLanguageId;
} MSGBOXPARAMSA,*PMSGBOXPARAMSA,*LPMSGBOXPARAMSA;
typedef struct {
 UINT cbSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCWSTR lpszText;
 LPCWSTR lpszCaption;
 DWORD dwStyle;
 LPCWSTR lpszIcon;
 DWORD dwContextHelpId;
 MSGBOXCALLBACK lpfnMsgBoxCallback;
 DWORD dwLanguageId;
} MSGBOXPARAMSW,*PMSGBOXPARAMSW,*LPMSGBOXPARAMSW;
typedef struct tagUSEROBJECTFLAGS {
 BOOL fInherit;
 BOOL fReserved;
 DWORD dwFlags;
} USEROBJECTFLAGS;
typedef struct tagFILTERKEYS {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iWaitMSec;
 DWORD iDelayMSec;
 DWORD iRepeatMSec;
 DWORD iBounceMSec;
} FILTERKEYS;
typedef struct tagHIGHCONTRASTA {
 UINT cbSize;
 DWORD dwFlags;
 LPSTR lpszDefaultScheme;
} HIGHCONTRASTA,*LPHIGHCONTRASTA;
typedef struct tagHIGHCONTRASTW {
 UINT cbSize;
 DWORD dwFlags;
 LPWSTR lpszDefaultScheme;
} HIGHCONTRASTW,*LPHIGHCONTRASTW;

typedef struct tagICONMETRICSA {
 UINT cbSize;
 int iHorzSpacing;
 int iVertSpacing;
 int iTitleWrap;
 LOGFONTA lfFont;
} ICONMETRICSA,*LPICONMETRICSA;
typedef struct tagICONMETRICSW {
 UINT cbSize;
 int iHorzSpacing;
 int iVertSpacing;
 int iTitleWrap;
 LOGFONTW lfFont;
} ICONMETRICSW,*LPICONMETRICSW;

typedef struct tagMINIMIZEDMETRICS {
 UINT cbSize;
 int iWidth;
 int iHorzGap;
 int iVertGap;
 int iArrange;
} MINIMIZEDMETRICS,*LPMINIMIZEDMETRICS;
typedef struct tagMOUSEKEYS{
 UINT cbSize;
 DWORD dwFlags;
 DWORD iMaxSpeed;
 DWORD iTimeToMaxSpeed;
 DWORD iCtrlSpeed;
 DWORD dwReserved1;
 DWORD dwReserved2;
} MOUSEKEYS, *LPMOUSEKEYS;

typedef struct tagNONCLIENTMETRICSA {
 UINT cbSize;
 int iBorderWidth;
 int iScrollWidth;
 int iScrollHeight;
 int iCaptionWidth;
 int iCaptionHeight;
 LOGFONTA lfCaptionFont;
 int iSmCaptionWidth;
 int iSmCaptionHeight;
 LOGFONTA lfSmCaptionFont;
 int iMenuWidth;
 int iMenuHeight;
 LOGFONTA lfMenuFont;
 LOGFONTA lfStatusFont;
 LOGFONTA lfMessageFont;
} NONCLIENTMETRICSA,*LPNONCLIENTMETRICSA;
typedef struct tagNONCLIENTMETRICSW {
 UINT cbSize;
 int iBorderWidth;
 int iScrollWidth;
 int iScrollHeight;
 int iCaptionWidth;
 int iCaptionHeight;
 LOGFONTW lfCaptionFont;
 int iSmCaptionWidth;
 int iSmCaptionHeight;
 LOGFONTW lfSmCaptionFont;
 int iMenuWidth;
 int iMenuHeight;
 LOGFONTW lfMenuFont;
 LOGFONTW lfStatusFont;
 LOGFONTW lfMessageFont;
} NONCLIENTMETRICSW,*LPNONCLIENTMETRICSW;

typedef struct tagSERIALKEYSA {
 UINT cbSize;
 DWORD dwFlags;
 LPSTR lpszActivePort;
 LPSTR lpszPort;
 UINT iBaudRate;
 UINT iPortState;
 UINT iActive;
} SERIALKEYSA,*LPSERIALKEYSA;
typedef struct tagSERIALKEYSW {
 UINT cbSize;
 DWORD dwFlags;
 LPWSTR lpszActivePort;
 LPWSTR lpszPort;
 UINT iBaudRate;
 UINT iPortState;
 UINT iActive;
} SERIALKEYSW,*LPSERIALKEYSW;
typedef struct tagSOUNDSENTRYA {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iFSTextEffect;
 DWORD iFSTextEffectMSec;
 DWORD iFSTextEffectColorBits;
 DWORD iFSGrafEffect;
 DWORD iFSGrafEffectMSec;
 DWORD iFSGrafEffectColor;
 DWORD iWindowsEffect;
 DWORD iWindowsEffectMSec;
 LPSTR lpszWindowsEffectDLL;
 DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYA,*LPSOUNDSENTRYA;
typedef struct tagSOUNDSENTRYW {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iFSTextEffect;
 DWORD iFSTextEffectMSec;
 DWORD iFSTextEffectColorBits;
 DWORD iFSGrafEffect;
 DWORD iFSGrafEffectMSec;
 DWORD iFSGrafEffectColor;
 DWORD iWindowsEffect;
 DWORD iWindowsEffectMSec;
 LPWSTR lpszWindowsEffectDLL;
 DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYW,*LPSOUNDSENTRYW;
typedef struct tagSTICKYKEYS {
 DWORD cbSize;
 DWORD dwFlags;
} STICKYKEYS,*LPSTICKYKEYS;
typedef struct tagTOGGLEKEYS {
 DWORD cbSize;
 DWORD dwFlags;
} TOGGLEKEYS;
typedef struct tagMOUSEHOOKSTRUCT {
 POINT pt;
 HWND hwnd;
 UINT wHitTestCode;
 DWORD dwExtraInfo;
} MOUSEHOOKSTRUCT, *LPMOUSEHOOKSTRUCT, *PMOUSEHOOKSTRUCT;
typedef struct tagTRACKMOUSEEVENT {
 DWORD cbSize;
 DWORD dwFlags;
 HWND hwndTrack;
 DWORD dwHoverTime;
} TRACKMOUSEEVENT,*LPTRACKMOUSEEVENT;
typedef struct tagTPMPARAMS {
 UINT cbSize;
 RECT rcExclude;
} TPMPARAMS,*LPTPMPARAMS;
typedef struct tagEVENTMSG {
 UINT message;
 UINT paramL;
 UINT paramH;
 DWORD time;
 HWND hwnd;
} EVENTMSG,*PEVENTMSGMSG,*LPEVENTMSGMSG, *PEVENTMSG, *LPEVENTMSG;
typedef struct _WINDOWPOS {
 HWND hwnd;
 HWND hwndInsertAfter;
 int x;
 int y;
 int cx;
 int cy;
 UINT flags;
} WINDOWPOS,*PWINDOWPOS,*LPWINDOWPOS;
typedef struct tagMDICREATESTRUCTA {
 LPCSTR szClass;
 LPCSTR szTitle;
 HANDLE hOwner;
 int x;
 int y;
 int cx;
 int cy;
 DWORD style;
 LPARAM lParam;
} MDICREATESTRUCTA,*LPMDICREATESTRUCTA;
typedef struct tagMDICREATESTRUCTW {
 LPCWSTR szClass;
 LPCWSTR szTitle;
 HANDLE hOwner;
 int x;
 int y;
 int cx;
 int cy;
 DWORD style;
 LPARAM lParam;
} MDICREATESTRUCTW,*LPMDICREATESTRUCTW;
typedef struct tagMINMAXINFO {
 POINT ptReserved;
 POINT ptMaxSize;
 POINT ptMaxPosition;
 POINT ptMinTrackSize;
 POINT ptMaxTrackSize;
} MINMAXINFO,*PMINMAXINFO,*LPMINMAXINFO;
typedef struct tagMDINEXTMENU {
 HMENU hmenuIn;
 HMENU hmenuNext;
 HWND hwndNext;
} MDINEXTMENU,*PMDINEXTMENU,*LPMDINEXTMENU;
typedef struct tagMEASUREITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 UINT itemID;
 UINT itemWidth;
 UINT itemHeight;
 DWORD itemData;
} MEASUREITEMSTRUCT,*PMEASUREITEMSTRUCT,*LPMEASUREITEMSTRUCT;
typedef struct tagDROPSTRUCT {
 HWND hwndSource;
 HWND hwndSink;
 DWORD wFmt;
 DWORD dwData;
 POINT ptDrop;
 DWORD dwControlData;
} DROPSTRUCT,*PDROPSTRUCT,*LPDROPSTRUCT;
typedef DWORD HELPPOLY;
typedef struct tagMULTIKEYHELPA {
 DWORD mkSize;
 CHAR mkKeylist;
 CHAR szKeyphrase[1];
} MULTIKEYHELPA,*PMULTIKEYHELPA,*LPMULTIKEYHELPA;
typedef struct tagMULTIKEYHELPW {
 DWORD mkSize;
 WCHAR mkKeylist;
 WCHAR szKeyphrase[1];
} MULTIKEYHELPW,*PMULTIKEYHELPW,*LPMULTIKEYHELPW;
typedef struct tagHELPWININFOA {
 int wStructSize;
 int x;
 int y;
 int dx;
 int dy;
 int wMax;
 CHAR rgchMember[2];
} HELPWININFOA,*PHELPWININFOA,*LPHELPWININFOA;
typedef struct tagHELPWININFOW {
 int wStructSize;
 int x;
 int y;
 int dx;
 int dy;
 int wMax;
 WCHAR rgchMember[2];
} HELPWININFOW,*PHELPWININFOW,*LPHELPWININFOW;
typedef struct tagSTYLESTRUCT {
 DWORD styleOld;
 DWORD styleNew;
} STYLESTRUCT,*LPSTYLESTRUCT;
typedef struct tagALTTABINFO {
 DWORD cbSize;
 int cItems;
 int cColumns;
 int cRows;
 int iColFocus;
 int iRowFocus;
 int cxItem;
 int cyItem;
 POINT ptStart;
} ALTTABINFO, *PALTTABINFO, *LPALTTABINFO;
typedef struct tagCOMBOBOXINFO {
 DWORD cbSize;
 RECT rcItem;
 RECT rcButton;
 DWORD stateButton;
 HWND hwndCombo;
 HWND hwndItem;
 HWND hwndList;
} COMBOBOXINFO, *PCOMBOBOXINFO, *LPCOMBOBOXINFO;
typedef struct tagCURSORINFO {
 DWORD cbSize;
 DWORD flags;
 HCURSOR hCursor;
 POINT ptScreenPos;
} CURSORINFO,*PCURSORINFO,*LPCURSORINFO;
typedef struct tagMENUBARINFO {
 DWORD cbSize;
 RECT rcBar;
 HMENU hMenu;
 HWND hwndMenu;
 BOOL fBarFocused:1;
 BOOL fFocused:1;
} MENUBARINFO, *PMENUBARINFO;
typedef struct tagMENUINFO {
 DWORD cbSize;
 DWORD fMask;
 DWORD dwStyle;
 UINT cyMax;
 HBRUSH hbrBack;
 DWORD dwContextHelpID;
 ULONG_PTR dwMenuData;
} MENUINFO, *LPMENUINFO;
typedef MENUINFO const *LPCMENUINFO;

typedef struct tagSCROLLBARINFO {
 DWORD cbSize;
 RECT rcScrollBar;
 int dxyLineButton;
 int xyThumbTop;
 int xyThumbBottom;
 int reserved;
 DWORD rgstate[5 + 1];
} SCROLLBARINFO, *PSCROLLBARINFO, *LPSCROLLBARINFO;

typedef struct tagTITLEBARINFO {
 DWORD cbSize;
 RECT rcTitleBar;
 DWORD rgstate[5 + 1];
} TITLEBARINFO, *PTITLEBARINFO, *LPTITLEBARINFO;
typedef struct tagWINDOWINFO {
 DWORD cbSize;
 RECT rcWindow;
 RECT rcClient;
 DWORD dwStyle;
 DWORD dwExStyle;
 DWORD dwWindowStatus;
 UINT cxWindowBorders;
 UINT cyWindowBorders;
 ATOM atomWindowType;
 WORD wCreatorVersion;
} WINDOWINFO, *PWINDOWINFO, *LPWINDOWINFO;
typedef struct tagLASTINPUTINFO {
 UINT cbSize;
 DWORD dwTime;
} LASTINPUTINFO, * PLASTINPUTINFO;
typedef struct tagMONITORINFO {
 DWORD cbSize;
 RECT rcMonitor;
 RECT rcWork;
 DWORD dwFlags;
} MONITORINFO,*LPMONITORINFO;

typedef struct tagMONITORINFOEXA {
 DWORD cbSize;
 RECT rcMonitor;
 RECT rcWork;
 DWORD dwFlags;
 CHAR szDevice[32];
} MONITORINFOEXA, *LPMONITORINFOEXA;
typedef struct tagMONITORINFOEXW {
 DWORD cbSize;
 RECT rcMonitor;
 RECT rcWork;
 DWORD dwFlags;
 WCHAR szDevice[32];
} MONITORINFOEXW, *LPMONITORINFOEXW;
typedef struct tagKBDLLHOOKSTRUCT {
 DWORD vkCode;
 DWORD scanCode;
 DWORD flags;
 DWORD time;
 DWORD dwExtraInfo;
} KBDLLHOOKSTRUCT, *LPKBDLLHOOKSTRUCT, *PKBDLLHOOKSTRUCT;
# 2774 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winuser.h" 3
typedef struct tagMOUSEMOVEPOINT {
  int x;
  int y;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} MOUSEMOVEPOINT, *PMOUSEMOVEPOINT;
typedef struct tagMOUSEINPUT {
  LONG dx;
  LONG dy;
  DWORD mouseData;
  DWORD dwFlags;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} MOUSEINPUT, *PMOUSEINPUT;
typedef struct tagKEYBDINPUT {
  WORD wVk;
  WORD wScan;
  DWORD dwFlags;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} KEYBDINPUT, *PKEYBDINPUT;
typedef struct tagHARDWAREINPUT {
  DWORD uMsg;
  WORD wParamL;
  WORD wParamH;
} HARDWAREINPUT, *PHARDWAREINPUT;
typedef struct tagINPUT {
  DWORD type;
  __extension__ union {
  MOUSEINPUT mi;
  KEYBDINPUT ki;
  HARDWAREINPUT hi;
  } ;
} INPUT, *PINPUT, *LPINPUT;
typedef struct tagGUITHREADINFO {
 DWORD cbSize;
 DWORD flags;
 HWND hwndActive;
 HWND hwndFocus;
 HWND hwndCapture;
 HWND hwndMenuOwner;
 HWND hwndMoveSize;
 HWND hwndCaret;
 RECT rcCaret;
} GUITHREADINFO, *PGUITHREADINFO;
# 2839 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winuser.h" 3
HKL __attribute__((__stdcall__)) ActivateKeyboardLayout(HKL,UINT);
BOOL __attribute__((__stdcall__)) AdjustWindowRect(LPRECT,DWORD,BOOL);
BOOL __attribute__((__stdcall__)) AdjustWindowRectEx(LPRECT,DWORD,BOOL,DWORD);
BOOL __attribute__((__stdcall__)) AnyPopup(void);
BOOL __attribute__((__stdcall__)) AppendMenuA(HMENU,UINT,UINT_PTR,LPCSTR);
BOOL __attribute__((__stdcall__)) AppendMenuW(HMENU,UINT,UINT_PTR,LPCWSTR);
UINT __attribute__((__stdcall__)) ArrangeIconicWindows(HWND);
BOOL __attribute__((__stdcall__)) AttachThreadInput(DWORD,DWORD,BOOL);
HDWP __attribute__((__stdcall__)) BeginDeferWindowPos(int);
HDC __attribute__((__stdcall__)) BeginPaint(HWND,LPPAINTSTRUCT);
BOOL __attribute__((__stdcall__)) BringWindowToTop(HWND);
long __attribute__((__stdcall__)) BroadcastSystemMessage(DWORD,LPDWORD,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) CallMsgFilter(PMSG,int);
LRESULT __attribute__((__stdcall__)) CallNextHookEx(HHOOK,int,WPARAM,LPARAM);
LRESULT __attribute__((__stdcall__)) CallWindowProcA(WNDPROC,HWND,UINT,WPARAM,LPARAM);
LRESULT __attribute__((__stdcall__)) CallWindowProcW(WNDPROC,HWND,UINT,WPARAM,LPARAM);
WORD __attribute__((__stdcall__)) CascadeWindows(HWND,UINT,LPCRECT,UINT,const HWND*);
BOOL __attribute__((__stdcall__)) ChangeClipboardChain(HWND,HWND);

LONG __attribute__((__stdcall__)) ChangeDisplaySettingsA(PDEVMODEA,DWORD);
LONG __attribute__((__stdcall__)) ChangeDisplaySettingsW(PDEVMODEW,DWORD);

BOOL __attribute__((__stdcall__)) ChangeMenuA(HMENU,UINT,LPCSTR,UINT,UINT);
BOOL __attribute__((__stdcall__)) ChangeMenuW(HMENU,UINT,LPCWSTR,UINT,UINT);
LPSTR __attribute__((__stdcall__)) CharLowerA(LPSTR);
LPWSTR __attribute__((__stdcall__)) CharLowerW(LPWSTR);
DWORD __attribute__((__stdcall__)) CharLowerBuffA(LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) CharLowerBuffW(LPWSTR,DWORD);
LPSTR __attribute__((__stdcall__)) CharNextA(LPCSTR);
LPWSTR __attribute__((__stdcall__)) CharNextW(LPCWSTR);
LPSTR __attribute__((__stdcall__)) CharNextExA(WORD,LPCSTR,DWORD);
LPWSTR __attribute__((__stdcall__)) CharNextExW(WORD,LPCWSTR,DWORD);
LPSTR __attribute__((__stdcall__)) CharPrevA(LPCSTR,LPCSTR);
LPWSTR __attribute__((__stdcall__)) CharPrevW(LPCWSTR,LPCWSTR);
LPSTR __attribute__((__stdcall__)) CharPrevExA(WORD,LPCSTR,LPCSTR,DWORD);
LPWSTR __attribute__((__stdcall__)) CharPrevExW(WORD,LPCWSTR,LPCWSTR,DWORD);
BOOL __attribute__((__stdcall__)) CharToOemA(LPCSTR,LPSTR);
BOOL __attribute__((__stdcall__)) CharToOemW(LPCWSTR,LPSTR);
BOOL __attribute__((__stdcall__)) CharToOemBuffA(LPCSTR,LPSTR,DWORD);
BOOL __attribute__((__stdcall__)) CharToOemBuffW(LPCWSTR,LPSTR,DWORD);
LPSTR __attribute__((__stdcall__)) CharUpperA(LPSTR);
LPWSTR __attribute__((__stdcall__)) CharUpperW(LPWSTR);
DWORD __attribute__((__stdcall__)) CharUpperBuffA(LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) CharUpperBuffW(LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) CheckDlgButton(HWND,int,UINT);
DWORD __attribute__((__stdcall__)) CheckMenuItem(HMENU,UINT,UINT);
BOOL __attribute__((__stdcall__)) CheckMenuRadioItem(HMENU,UINT,UINT,UINT,UINT);
BOOL __attribute__((__stdcall__)) CheckRadioButton(HWND,int,int,int);
HWND __attribute__((__stdcall__)) ChildWindowFromPoint(HWND,POINT);
HWND __attribute__((__stdcall__)) ChildWindowFromPointEx(HWND,POINT,UINT);
BOOL __attribute__((__stdcall__)) ClientToScreen(HWND,LPPOINT);
BOOL __attribute__((__stdcall__)) ClipCursor(LPCRECT);
BOOL __attribute__((__stdcall__)) CloseClipboard(void);
BOOL __attribute__((__stdcall__)) CloseDesktop(HDESK);
BOOL __attribute__((__stdcall__)) CloseWindow(HWND);
BOOL __attribute__((__stdcall__)) CloseWindowStation(HWINSTA);
int __attribute__((__stdcall__)) CopyAcceleratorTableA(HACCEL,LPACCEL,int);
int __attribute__((__stdcall__)) CopyAcceleratorTableW(HACCEL,LPACCEL,int);
HCURSOR __attribute__((__stdcall__)) CopyCursor(HCURSOR);
HICON __attribute__((__stdcall__)) CopyIcon(HICON);
HANDLE __attribute__((__stdcall__)) CopyImage(HANDLE,UINT,int,int,UINT);
BOOL __attribute__((__stdcall__)) CopyRect(LPRECT,LPCRECT);
int __attribute__((__stdcall__)) CountClipboardFormats(void);
HACCEL __attribute__((__stdcall__)) CreateAcceleratorTableA(LPACCEL,int);
HACCEL __attribute__((__stdcall__)) CreateAcceleratorTableW(LPACCEL,int);
BOOL __attribute__((__stdcall__)) CreateCaret(HWND,HBITMAP,int,int);
HCURSOR __attribute__((__stdcall__)) CreateCursor(HINSTANCE,int,int,int,int,PCVOID,PCVOID);

HDESK __attribute__((__stdcall__)) CreateDesktopA(LPCSTR,LPCSTR,LPDEVMODEA,DWORD,ACCESS_MASK,LPSECURITY_ATTRIBUTES);
HDESK __attribute__((__stdcall__)) CreateDesktopW(LPCWSTR,LPCWSTR,LPDEVMODEW,DWORD,ACCESS_MASK,LPSECURITY_ATTRIBUTES);





HWND __attribute__((__stdcall__)) CreateDialogIndirectParamA(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
HWND __attribute__((__stdcall__)) CreateDialogIndirectParamW(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
HWND __attribute__((__stdcall__)) CreateDialogParamA(HINSTANCE,LPCSTR,HWND,DLGPROC,LPARAM);
HWND __attribute__((__stdcall__)) CreateDialogParamW(HINSTANCE,LPCWSTR,HWND,DLGPROC,LPARAM);
HICON __attribute__((__stdcall__)) CreateIcon(HINSTANCE,int,int,BYTE,BYTE,const BYTE*,const BYTE*);
HICON __attribute__((__stdcall__)) CreateIconFromResource(PBYTE,DWORD,BOOL,DWORD);
HICON __attribute__((__stdcall__)) CreateIconFromResourceEx(PBYTE,DWORD,BOOL,DWORD,int,int,UINT);
HICON __attribute__((__stdcall__)) CreateIconIndirect(PICONINFO);
HWND __attribute__((__stdcall__)) CreateMDIWindowA(LPCSTR,LPCSTR,DWORD,int,int,int,int,HWND,HINSTANCE,LPARAM);
HWND __attribute__((__stdcall__)) CreateMDIWindowW(LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HINSTANCE,LPARAM);
HMENU __attribute__((__stdcall__)) CreateMenu(void);
HMENU __attribute__((__stdcall__)) CreatePopupMenu(void);


HWND __attribute__((__stdcall__)) CreateWindowExA(DWORD,LPCSTR,LPCSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
HWND __attribute__((__stdcall__)) CreateWindowExW(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
HWINSTA __attribute__((__stdcall__)) CreateWindowStationA(LPSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HWINSTA __attribute__((__stdcall__)) CreateWindowStationW(LPWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
LRESULT __attribute__((__stdcall__)) DefDlgProcA(HWND,UINT,WPARAM,LPARAM);
LRESULT __attribute__((__stdcall__)) DefDlgProcW(HWND,UINT,WPARAM,LPARAM);
HDWP __attribute__((__stdcall__)) DeferWindowPos(HDWP,HWND,HWND,int,int,int,int,UINT);
LRESULT __attribute__((__stdcall__)) DefFrameProcA(HWND,HWND,UINT,WPARAM,LPARAM);
LRESULT __attribute__((__stdcall__)) DefFrameProcW(HWND,HWND,UINT,WPARAM,LPARAM);

LRESULT __attribute__((__stdcall__)) DefMDIChildProcA(HWND,UINT,WPARAM,LPARAM);
LRESULT __attribute__((__stdcall__)) DefMDIChildProcW(HWND,UINT,WPARAM,LPARAM);
LRESULT __attribute__((__stdcall__)) DefWindowProcA(HWND,UINT,WPARAM,LPARAM);
LRESULT __attribute__((__stdcall__)) DefWindowProcW(HWND,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) DeleteMenu(HMENU,UINT,UINT);
BOOL __attribute__((__stdcall__)) DestroyAcceleratorTable(HACCEL);
BOOL __attribute__((__stdcall__)) DestroyCaret(void);
BOOL __attribute__((__stdcall__)) DestroyCursor(HCURSOR);
BOOL __attribute__((__stdcall__)) DestroyIcon(HICON);
BOOL __attribute__((__stdcall__)) DestroyMenu(HMENU);
BOOL __attribute__((__stdcall__)) DestroyWindow(HWND);




int __attribute__((__stdcall__)) DialogBoxIndirectParamA(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
int __attribute__((__stdcall__)) DialogBoxIndirectParamW(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
int __attribute__((__stdcall__)) DialogBoxParamA(HINSTANCE,LPCSTR,HWND,DLGPROC,LPARAM);
int __attribute__((__stdcall__)) DialogBoxParamW(HINSTANCE,LPCWSTR,HWND,DLGPROC,LPARAM);
LONG __attribute__((__stdcall__)) DispatchMessageA(const MSG*);
LONG __attribute__((__stdcall__)) DispatchMessageW(const MSG*);
int __attribute__((__stdcall__)) DlgDirListA(HWND,LPSTR,int,int,UINT);
int __attribute__((__stdcall__)) DlgDirListW(HWND,LPWSTR,int,int,UINT);
int __attribute__((__stdcall__)) DlgDirListComboBoxA(HWND,LPSTR,int,int,UINT);
int __attribute__((__stdcall__)) DlgDirListComboBoxW(HWND,LPWSTR,int,int,UINT);
BOOL __attribute__((__stdcall__)) DlgDirSelectComboBoxExA(HWND,LPSTR,int,int);
BOOL __attribute__((__stdcall__)) DlgDirSelectComboBoxExW(HWND,LPWSTR,int,int);
BOOL __attribute__((__stdcall__)) DlgDirSelectExA(HWND,LPSTR,int,int);
BOOL __attribute__((__stdcall__)) DlgDirSelectExW(HWND,LPWSTR,int,int);
BOOL __attribute__((__stdcall__)) DragDetect(HWND,POINT);
DWORD __attribute__((__stdcall__)) DragObject(HWND,HWND,UINT,DWORD,HCURSOR);
BOOL __attribute__((__stdcall__)) DrawAnimatedRects(HWND,int,LPCRECT,LPCRECT);
BOOL __attribute__((__stdcall__)) DrawCaption(HWND,HDC,LPCRECT,UINT);
BOOL __attribute__((__stdcall__)) DrawEdge(HDC,LPRECT,UINT,UINT);
BOOL __attribute__((__stdcall__)) DrawFocusRect(HDC,LPCRECT);
BOOL __attribute__((__stdcall__)) DrawFrameControl(HDC,LPRECT,UINT,UINT);
BOOL __attribute__((__stdcall__)) DrawIcon(HDC,int,int,HICON);
BOOL __attribute__((__stdcall__)) DrawIconEx(HDC,int,int,HICON,int,int,UINT,HBRUSH,UINT);
BOOL __attribute__((__stdcall__)) DrawMenuBar(HWND);
BOOL __attribute__((__stdcall__)) DrawStateA(HDC,HBRUSH,DRAWSTATEPROC,LPARAM,WPARAM,int,int,int,int,UINT);
BOOL __attribute__((__stdcall__)) DrawStateW(HDC,HBRUSH,DRAWSTATEPROC,LPARAM,WPARAM,int,int,int,int,UINT);
int __attribute__((__stdcall__)) DrawTextA(HDC,LPCSTR,int,LPRECT,UINT);
int __attribute__((__stdcall__)) DrawTextW(HDC,LPCWSTR,int,LPRECT,UINT);
int __attribute__((__stdcall__)) DrawTextExA(HDC,LPSTR,int,LPRECT,UINT,LPDRAWTEXTPARAMS);
int __attribute__((__stdcall__)) DrawTextExW(HDC,LPWSTR,int,LPRECT,UINT,LPDRAWTEXTPARAMS);
BOOL __attribute__((__stdcall__)) EmptyClipboard(void);
BOOL __attribute__((__stdcall__)) EnableMenuItem(HMENU,UINT,UINT);
BOOL __attribute__((__stdcall__)) EnableScrollBar(HWND,UINT,UINT);
BOOL __attribute__((__stdcall__)) EnableWindow(HWND,BOOL);
BOOL __attribute__((__stdcall__)) EndDeferWindowPos(HDWP);
BOOL __attribute__((__stdcall__)) EndDialog(HWND,int);
BOOL __attribute__((__stdcall__)) EndMenu(void);
BOOL __attribute__((__stdcall__)) EndPaint(HWND,const PAINTSTRUCT*);
BOOL __attribute__((__stdcall__)) EnumChildWindows(HWND,ENUMWINDOWSPROC,LPARAM);
UINT __attribute__((__stdcall__)) EnumClipboardFormats(UINT);
BOOL __attribute__((__stdcall__)) EnumDesktopsA(HWINSTA,DESKTOPENUMPROCA,LPARAM);
BOOL __attribute__((__stdcall__)) EnumDesktopsW(HWINSTA,DESKTOPENUMPROCW,LPARAM);
BOOL __attribute__((__stdcall__)) EnumDesktopWindows(HDESK,ENUMWINDOWSPROC,LPARAM);
BOOL __attribute__((__stdcall__)) EnumDisplayMonitors(HDC,LPCRECT,MONITORENUMPROC,LPARAM);

BOOL __attribute__((__stdcall__)) EnumDisplaySettingsA(LPCSTR,DWORD,PDEVMODEA);
BOOL __attribute__((__stdcall__)) EnumDisplaySettingsW(LPCWSTR,DWORD,PDEVMODEW);
BOOL __attribute__((__stdcall__)) EnumDisplayDevicesA(LPCSTR,DWORD,PDISPLAY_DEVICEA,DWORD);
BOOL __attribute__((__stdcall__)) EnumDisplayDevicesW(LPCWSTR,DWORD,PDISPLAY_DEVICEW,DWORD);

int __attribute__((__stdcall__)) EnumPropsA(HWND,PROPENUMPROCA);
int __attribute__((__stdcall__)) EnumPropsW(HWND,PROPENUMPROCW);
int __attribute__((__stdcall__)) EnumPropsExA(HWND,PROPENUMPROCEXA,LPARAM);
int __attribute__((__stdcall__)) EnumPropsExW(HWND,PROPENUMPROCEXW,LPARAM);

BOOL __attribute__((__stdcall__)) EnumThreadWindows(DWORD,WNDENUMPROC,LPARAM);
BOOL __attribute__((__stdcall__)) EnumWindows(WNDENUMPROC,LPARAM);
BOOL __attribute__((__stdcall__)) EnumWindowStationsA(WINSTAENUMPROCA,LPARAM);
BOOL __attribute__((__stdcall__)) EnumWindowStationsW(WINSTAENUMPROCW,LPARAM);
BOOL __attribute__((__stdcall__)) EqualRect(LPCRECT,LPCRECT);

BOOL __attribute__((__stdcall__)) ExitWindowsEx(UINT,DWORD);
HWND __attribute__((__stdcall__)) FindWindowA(LPCSTR,LPCSTR);
HWND __attribute__((__stdcall__)) FindWindowExA(HWND,HWND,LPCSTR,LPCSTR);
HWND __attribute__((__stdcall__)) FindWindowExW(HWND,HWND,LPCWSTR,LPCWSTR);
HWND __attribute__((__stdcall__)) FindWindowW(LPCWSTR,LPCWSTR);
BOOL __attribute__((__stdcall__)) FlashWindow(HWND,BOOL);
int __attribute__((__stdcall__)) FrameRect(HDC,LPCRECT,HBRUSH);
BOOL __attribute__((__stdcall__)) FrameRgn(HDC,HRGN,HBRUSH,int,int);
HWND __attribute__((__stdcall__)) GetActiveWindow(void);
HWND __attribute__((__stdcall__)) GetAncestor(HWND hwnd, UINT gaFlags);
SHORT __attribute__((__stdcall__)) GetAsyncKeyState(int);
HWND __attribute__((__stdcall__)) GetCapture(void);
UINT __attribute__((__stdcall__)) GetCaretBlinkTime(void);
BOOL __attribute__((__stdcall__)) GetCaretPos(LPPOINT);
BOOL __attribute__((__stdcall__)) GetClassInfoA(HINSTANCE,LPCSTR,LPWNDCLASSA);
BOOL __attribute__((__stdcall__)) GetClassInfoExA(HINSTANCE,LPCSTR,LPWNDCLASSEXA);
BOOL __attribute__((__stdcall__)) GetClassInfoW(HINSTANCE,LPCWSTR,LPWNDCLASSW);
BOOL __attribute__((__stdcall__)) GetClassInfoExW(HINSTANCE,LPCWSTR,LPWNDCLASSEXW);
DWORD __attribute__((__stdcall__)) GetClassLongA(HWND,int);
DWORD __attribute__((__stdcall__)) GetClassLongW(HWND,int);
int __attribute__((__stdcall__)) GetClassNameA(HWND,LPSTR,int);
int __attribute__((__stdcall__)) GetClassNameW(HWND,LPWSTR,int);
WORD __attribute__((__stdcall__)) GetClassWord(HWND,int);
BOOL __attribute__((__stdcall__)) GetClientRect(HWND,LPRECT);
HANDLE __attribute__((__stdcall__)) GetClipboardData(UINT);
int __attribute__((__stdcall__)) GetClipboardFormatNameA(UINT,LPSTR,int);
int __attribute__((__stdcall__)) GetClipboardFormatNameW(UINT,LPWSTR,int);
HWND __attribute__((__stdcall__)) GetClipboardOwner(void);
HWND __attribute__((__stdcall__)) GetClipboardViewer(void);
BOOL __attribute__((__stdcall__)) GetClipCursor(LPRECT);
BOOL __attribute__((__stdcall__)) GetCursorPos(LPPOINT);
HDC __attribute__((__stdcall__)) GetDC(HWND);
HDC __attribute__((__stdcall__)) GetDCEx(HWND,HRGN,DWORD);
HWND __attribute__((__stdcall__)) GetDesktopWindow(void);
long __attribute__((__stdcall__)) GetDialogBaseUnits(void);
int __attribute__((__stdcall__)) GetDlgCtrlID(HWND);
HWND __attribute__((__stdcall__)) GetDlgItem(HWND,int);
UINT __attribute__((__stdcall__)) GetDlgItemInt(HWND,int,PBOOL,BOOL);
UINT __attribute__((__stdcall__)) GetDlgItemTextA(HWND,int,LPSTR,int);
UINT __attribute__((__stdcall__)) GetDlgItemTextW(HWND,int,LPWSTR,int);
UINT __attribute__((__stdcall__)) GetDoubleClickTime(void);
HWND __attribute__((__stdcall__)) GetFocus(void);
HWND __attribute__((__stdcall__)) GetForegroundWindow(void);
BOOL __attribute__((__stdcall__)) GetIconInfo(HICON,PICONINFO);
BOOL __attribute__((__stdcall__)) GetInputState(void);
UINT __attribute__((__stdcall__)) GetKBCodePage(void);
HKL __attribute__((__stdcall__)) GetKeyboardLayout(DWORD);
UINT __attribute__((__stdcall__)) GetKeyboardLayoutList(int,HKL*);
BOOL __attribute__((__stdcall__)) GetKeyboardLayoutNameA(LPSTR);
BOOL __attribute__((__stdcall__)) GetKeyboardLayoutNameW(LPWSTR);
BOOL __attribute__((__stdcall__)) GetKeyboardState(PBYTE);
int __attribute__((__stdcall__)) GetKeyboardType(int);
int __attribute__((__stdcall__)) GetKeyNameTextA(LONG,LPSTR,int);
int __attribute__((__stdcall__)) GetKeyNameTextW(LONG,LPWSTR,int);
SHORT __attribute__((__stdcall__)) GetKeyState(int);
HWND __attribute__((__stdcall__)) GetLastActivePopup(HWND);
DWORD __attribute__((__stdcall__)) GetLastError(void);
HMENU __attribute__((__stdcall__)) GetMenu(HWND);
LONG __attribute__((__stdcall__)) GetMenuCheckMarkDimensions(void);
DWORD __attribute__((__stdcall__)) GetMenuContextHelpId(HMENU);
UINT __attribute__((__stdcall__)) GetMenuDefaultItem(HMENU,UINT,UINT);
int __attribute__((__stdcall__)) GetMenuItemCount(HMENU);
UINT __attribute__((__stdcall__)) GetMenuItemID(HMENU,int);
BOOL __attribute__((__stdcall__)) GetMenuItemInfoA(HMENU,UINT,BOOL,LPMENUITEMINFOA);
BOOL __attribute__((__stdcall__)) GetMenuItemInfoW(HMENU,UINT,BOOL,LPMENUITEMINFOW);
BOOL __attribute__((__stdcall__)) GetMenuItemRect(HWND,HMENU,UINT,LPRECT);
UINT __attribute__((__stdcall__)) GetMenuState(HMENU,UINT,UINT);
int __attribute__((__stdcall__)) GetMenuStringA(HMENU,UINT,LPSTR,int,UINT);
int __attribute__((__stdcall__)) GetMenuStringW(HMENU,UINT,LPWSTR,int,UINT);
BOOL __attribute__((__stdcall__)) GetMessageA(LPMSG,HWND,UINT,UINT);
BOOL __attribute__((__stdcall__)) GetMessageW(LPMSG,HWND,UINT,UINT);
LONG __attribute__((__stdcall__)) GetMessageExtraInfo(void);
DWORD __attribute__((__stdcall__)) GetMessagePos(void);
LONG __attribute__((__stdcall__)) GetMessageTime(void);
HWND __attribute__((__stdcall__)) GetNextDlgGroupItem(HWND,HWND,BOOL);
HWND __attribute__((__stdcall__)) GetNextDlgTabItem(HWND,HWND,BOOL);

HWND __attribute__((__stdcall__)) GetOpenClipboardWindow(void);
HWND __attribute__((__stdcall__)) GetParent(HWND);
int __attribute__((__stdcall__)) GetPriorityClipboardFormat(UINT*,int);
HANDLE __attribute__((__stdcall__)) GetPropA(HWND,LPCSTR);
HANDLE __attribute__((__stdcall__)) GetPropW(HWND,LPCWSTR);
DWORD __attribute__((__stdcall__)) GetQueueStatus(UINT);
BOOL __attribute__((__stdcall__)) GetScrollInfo(HWND,int,LPSCROLLINFO);
int __attribute__((__stdcall__)) GetScrollPos(HWND,int);
BOOL __attribute__((__stdcall__)) GetScrollRange(HWND,int,LPINT,LPINT);

HWND __attribute__((__stdcall__)) GetShellWindow(void);

HMENU __attribute__((__stdcall__)) GetSubMenu(HMENU,int);
DWORD __attribute__((__stdcall__)) GetSysColor(int);
HBRUSH __attribute__((__stdcall__)) GetSysColorBrush(int);

HMENU __attribute__((__stdcall__)) GetSystemMenu(HWND,BOOL);
int __attribute__((__stdcall__)) GetSystemMetrics(int);
DWORD __attribute__((__stdcall__)) GetTabbedTextExtentA(HDC,LPCSTR,int,int,LPINT);
DWORD __attribute__((__stdcall__)) GetTabbedTextExtentW(HDC,LPCWSTR,int,int,LPINT);
LONG __attribute__((__stdcall__)) GetWindowLongA(HWND,int);
LONG __attribute__((__stdcall__)) GetWindowLongW(HWND,int);







HDESK __attribute__((__stdcall__)) GetThreadDesktop(DWORD);
HWND __attribute__((__stdcall__)) GetTopWindow(HWND);
BOOL __attribute__((__stdcall__)) GetUpdateRect(HWND,LPRECT,BOOL);
int __attribute__((__stdcall__)) GetUpdateRgn(HWND,HRGN,BOOL);
BOOL __attribute__((__stdcall__)) GetUserObjectInformationA(HANDLE,int,PVOID,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetUserObjectInformationW(HANDLE,int,PVOID,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetUserObjectSecurity(HANDLE,PSECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
HWND __attribute__((__stdcall__)) GetWindow(HWND,UINT);
DWORD __attribute__((__stdcall__)) GetWindowContextHelpId(HWND);
HDC __attribute__((__stdcall__)) GetWindowDC(HWND);
BOOL __attribute__((__stdcall__)) GetWindowExtEx(HDC,LPSIZE);
BOOL __attribute__((__stdcall__)) GetWindowPlacement(HWND,WINDOWPLACEMENT*);
BOOL __attribute__((__stdcall__)) GetWindowRect(HWND,LPRECT);
int __attribute__((__stdcall__)) GetWindowRgn(HWND,HRGN);

int __attribute__((__stdcall__)) GetWindowTextA(HWND,LPSTR,int);
int __attribute__((__stdcall__)) GetWindowTextLengthA(HWND);
int __attribute__((__stdcall__)) GetWindowTextLengthW(HWND);
int __attribute__((__stdcall__)) GetWindowTextW(HWND,LPWSTR,int);
WORD __attribute__((__stdcall__)) GetWindowWord(HWND,int);
BOOL __attribute__((__stdcall__)) GetAltTabInfoA(HWND,int,PALTTABINFO,LPSTR,UINT);
BOOL __attribute__((__stdcall__)) GetAltTabInfoW(HWND,int,PALTTABINFO,LPWSTR,UINT);
BOOL __attribute__((__stdcall__)) GetComboBoxInfo(HWND,PCOMBOBOXINFO);
BOOL __attribute__((__stdcall__)) GetCursorInfo(PCURSORINFO);
BOOL __attribute__((__stdcall__)) GetLastInputInfo(PLASTINPUTINFO);
DWORD __attribute__((__stdcall__)) GetListBoxInfo(HWND);
BOOL __attribute__((__stdcall__)) GetMenuBarInfo(HWND,LONG,LONG,PMENUBARINFO);
BOOL __attribute__((__stdcall__)) GetMenuInfo(HMENU,LPMENUINFO);
BOOL __attribute__((__stdcall__)) GetScrollBarInfo(HWND,LONG,PSCROLLBARINFO);
BOOL __attribute__((__stdcall__)) GetTitleBarInfo(HWND,PTITLEBARINFO);
BOOL __attribute__((__stdcall__)) GetWindowInfo(HWND,PWINDOWINFO);
BOOL __attribute__((__stdcall__)) GetMonitorInfoA(HMONITOR,LPMONITORINFO);
BOOL __attribute__((__stdcall__)) GetMonitorInfoW(HMONITOR,LPMONITORINFO);
UINT __attribute__((__stdcall__)) GetWindowModuleFileNameA(HWND,LPSTR,UINT);
UINT __attribute__((__stdcall__)) GetWindowModuleFileNameW(HWND,LPWSTR,UINT);
BOOL __attribute__((__stdcall__)) GrayStringA(HDC,HBRUSH,GRAYSTRINGPROC,LPARAM,int,int,int,int,int);
BOOL __attribute__((__stdcall__)) GrayStringW(HDC,HBRUSH,GRAYSTRINGPROC,LPARAM,int,int,int,int,int);
BOOL __attribute__((__stdcall__)) HideCaret(HWND);
BOOL __attribute__((__stdcall__)) HiliteMenuItem(HWND,HMENU,UINT,UINT);
BOOL __attribute__((__stdcall__)) InflateRect(LPRECT,int,int);
BOOL __attribute__((__stdcall__)) InSendMessage(void);
BOOL __attribute__((__stdcall__)) InsertMenuA(HMENU,UINT,UINT,UINT,LPCSTR);
BOOL __attribute__((__stdcall__)) InsertMenuW(HMENU,UINT,UINT,UINT,LPCWSTR);
BOOL __attribute__((__stdcall__)) InsertMenuItemA(HMENU,UINT,BOOL,LPCMENUITEMINFOA);
BOOL __attribute__((__stdcall__)) InsertMenuItemW(HMENU,UINT,BOOL,LPCMENUITEMINFOW);
BOOL __attribute__((__stdcall__)) IntersectRect(LPRECT,LPCRECT,LPCRECT);
BOOL __attribute__((__stdcall__)) InvalidateRect(HWND,LPCRECT,BOOL);
BOOL __attribute__((__stdcall__)) InvalidateRgn(HWND,HRGN,BOOL);
BOOL __attribute__((__stdcall__)) InvertRect(HDC,LPCRECT);
BOOL __attribute__((__stdcall__)) IsCharAlphaA(CHAR ch);
BOOL __attribute__((__stdcall__)) IsCharAlphaNumericA(CHAR);
BOOL __attribute__((__stdcall__)) IsCharAlphaNumericW(WCHAR);
BOOL __attribute__((__stdcall__)) IsCharAlphaW(WCHAR);
BOOL __attribute__((__stdcall__)) IsCharLowerA(CHAR);
BOOL __attribute__((__stdcall__)) IsCharLowerW(WCHAR);
BOOL __attribute__((__stdcall__)) IsCharUpperA(CHAR);
BOOL __attribute__((__stdcall__)) IsCharUpperW(WCHAR);
BOOL __attribute__((__stdcall__)) IsChild(HWND,HWND);
BOOL __attribute__((__stdcall__)) IsClipboardFormatAvailable(UINT);
BOOL __attribute__((__stdcall__)) IsDialogMessageA(HWND,LPMSG);
BOOL __attribute__((__stdcall__)) IsDialogMessageW(HWND,LPMSG);
UINT __attribute__((__stdcall__)) IsDlgButtonChecked(HWND,int);
BOOL __attribute__((__stdcall__)) IsIconic(HWND);
BOOL __attribute__((__stdcall__)) IsMenu(HMENU);
BOOL __attribute__((__stdcall__)) IsRectEmpty(LPCRECT);
BOOL __attribute__((__stdcall__)) IsWindow(HWND);
BOOL __attribute__((__stdcall__)) IsWindowEnabled(HWND);
BOOL __attribute__((__stdcall__)) IsWindowUnicode(HWND);
BOOL __attribute__((__stdcall__)) IsWindowVisible(HWND);
BOOL __attribute__((__stdcall__)) IsZoomed(HWND);
void __attribute__((__stdcall__)) keybd_event(BYTE,BYTE,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) KillTimer(HWND,UINT);
HACCEL __attribute__((__stdcall__)) LoadAcceleratorsA(HINSTANCE,LPCSTR);
HACCEL __attribute__((__stdcall__)) LoadAcceleratorsW(HINSTANCE,LPCWSTR);
HBITMAP __attribute__((__stdcall__)) LoadBitmapA(HINSTANCE,LPCSTR);
HBITMAP __attribute__((__stdcall__)) LoadBitmapW(HINSTANCE,LPCWSTR);
HCURSOR __attribute__((__stdcall__)) LoadCursorA(HINSTANCE,LPCSTR);
HCURSOR __attribute__((__stdcall__)) LoadCursorFromFileA(LPCSTR);
HCURSOR __attribute__((__stdcall__)) LoadCursorFromFileW(LPCWSTR);
HCURSOR __attribute__((__stdcall__)) LoadCursorW(HINSTANCE,LPCWSTR);
HICON __attribute__((__stdcall__)) LoadIconA(HINSTANCE,LPCSTR);
HICON __attribute__((__stdcall__)) LoadIconW(HINSTANCE,LPCWSTR);
HANDLE __attribute__((__stdcall__)) LoadImageA(HINSTANCE,LPCSTR,UINT,int,int,UINT);
HANDLE __attribute__((__stdcall__)) LoadImageW(HINSTANCE,LPCWSTR,UINT,int,int,UINT);
HKL __attribute__((__stdcall__)) LoadKeyboardLayoutA(LPCSTR,UINT);
HKL __attribute__((__stdcall__)) LoadKeyboardLayoutW(LPCWSTR,UINT);
HMENU __attribute__((__stdcall__)) LoadMenuA(HINSTANCE,LPCSTR);
HMENU __attribute__((__stdcall__)) LoadMenuIndirectA(const MENUTEMPLATE*);
HMENU __attribute__((__stdcall__)) LoadMenuIndirectW(const MENUTEMPLATE*);
HMENU __attribute__((__stdcall__)) LoadMenuW(HINSTANCE,LPCWSTR);
int __attribute__((__stdcall__)) LoadStringA(HINSTANCE,UINT,LPSTR,int);
int __attribute__((__stdcall__)) LoadStringW(HINSTANCE,UINT,LPWSTR,int);
BOOL __attribute__((__stdcall__)) LockWindowUpdate(HWND);
int __attribute__((__stdcall__)) LookupIconIdFromDirectory(PBYTE,BOOL);
int __attribute__((__stdcall__)) LookupIconIdFromDirectoryEx(PBYTE,BOOL,int,int,UINT);
BOOL __attribute__((__stdcall__)) MapDialogRect(HWND,LPRECT);
UINT __attribute__((__stdcall__)) MapVirtualKeyA(UINT,UINT);
UINT __attribute__((__stdcall__)) MapVirtualKeyExA(UINT,UINT,HKL);
UINT __attribute__((__stdcall__)) MapVirtualKeyExW(UINT,UINT,HKL);
UINT __attribute__((__stdcall__)) MapVirtualKeyW(UINT,UINT);
int __attribute__((__stdcall__)) MapWindowPoints(HWND,HWND,LPPOINT,UINT);
int __attribute__((__stdcall__)) MenuItemFromPoint(HWND,HMENU,POINT);
BOOL __attribute__((__stdcall__)) MessageBeep(UINT);
int __attribute__((__stdcall__)) MessageBoxA(HWND,LPCSTR,LPCSTR,UINT);
int __attribute__((__stdcall__)) MessageBoxW(HWND,LPCWSTR,LPCWSTR,UINT);
int __attribute__((__stdcall__)) MessageBoxExA(HWND,LPCSTR,LPCSTR,UINT,WORD);
int __attribute__((__stdcall__)) MessageBoxExW(HWND,LPCWSTR,LPCWSTR,UINT,WORD);
int __attribute__((__stdcall__)) MessageBoxIndirectA(const MSGBOXPARAMSA*);
int __attribute__((__stdcall__)) MessageBoxIndirectW(const MSGBOXPARAMSW*);
BOOL __attribute__((__stdcall__)) ModifyMenuA(HMENU,UINT,UINT,UINT,LPCSTR);
BOOL __attribute__((__stdcall__)) ModifyMenuW(HMENU,UINT,UINT,UINT,LPCWSTR);
void __attribute__((__stdcall__)) mouse_event(DWORD,DWORD,DWORD,DWORD,ULONG_PTR);
BOOL __attribute__((__stdcall__)) MoveWindow(HWND,int,int,int,int,BOOL);
DWORD __attribute__((__stdcall__)) MsgWaitForMultipleObjects(DWORD,const HANDLE*,BOOL,DWORD,DWORD);
DWORD __attribute__((__stdcall__)) MsgWaitForMultipleObjectsEx(DWORD,const HANDLE*,DWORD,DWORD,DWORD);
void __attribute__((__stdcall__)) NotifyWinEvent(DWORD,HWND,LONG,LONG);
DWORD __attribute__((__stdcall__)) OemKeyScan(WORD);
BOOL __attribute__((__stdcall__)) OemToCharA(LPCSTR,LPSTR);
BOOL __attribute__((__stdcall__)) OemToCharBuffA(LPCSTR,LPSTR,DWORD);
BOOL __attribute__((__stdcall__)) OemToCharBuffW(LPCSTR,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) OemToCharW(LPCSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) OffsetRect(LPRECT,int,int);
BOOL __attribute__((__stdcall__)) OpenClipboard(HWND);
HDESK __attribute__((__stdcall__)) OpenDesktopA(LPSTR,DWORD,BOOL,DWORD);
HDESK __attribute__((__stdcall__)) OpenDesktopW(LPWSTR,DWORD,BOOL,DWORD);
BOOL __attribute__((__stdcall__)) OpenIcon(HWND);
HDESK __attribute__((__stdcall__)) OpenInputDesktop(DWORD,BOOL,DWORD);
HWINSTA __attribute__((__stdcall__)) OpenWindowStationA(LPSTR,BOOL,DWORD);
HWINSTA __attribute__((__stdcall__)) OpenWindowStationW(LPWSTR,BOOL,DWORD);
BOOL __attribute__((__stdcall__)) PaintDesktop(HDC);
BOOL __attribute__((__stdcall__)) PeekMessageA(LPMSG,HWND,UINT,UINT,UINT);
BOOL __attribute__((__stdcall__)) PeekMessageW(LPMSG,HWND,UINT,UINT,UINT);


BOOL __attribute__((__stdcall__)) PostMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) PostMessageW(HWND,UINT,WPARAM,LPARAM);
void __attribute__((__stdcall__)) PostQuitMessage(int);
BOOL __attribute__((__stdcall__)) PostThreadMessageA(DWORD,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) PostThreadMessageW(DWORD,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) PtInRect(LPCRECT,POINT);
BOOL __attribute__((__stdcall__)) RedrawWindow(HWND,LPCRECT,HRGN,UINT);
ATOM __attribute__((__stdcall__)) RegisterClassA(const WNDCLASSA*);
ATOM __attribute__((__stdcall__)) RegisterClassW(const WNDCLASSW*);
ATOM __attribute__((__stdcall__)) RegisterClassExA(const WNDCLASSEXA*);
ATOM __attribute__((__stdcall__)) RegisterClassExW(const WNDCLASSEXW*);
UINT __attribute__((__stdcall__)) RegisterClipboardFormatA(LPCSTR);
UINT __attribute__((__stdcall__)) RegisterClipboardFormatW(LPCWSTR);
BOOL __attribute__((__stdcall__)) RegisterHotKey(HWND,int,UINT,UINT);
UINT __attribute__((__stdcall__)) RegisterWindowMessageA(LPCSTR);
UINT __attribute__((__stdcall__)) RegisterWindowMessageW(LPCWSTR);
BOOL __attribute__((__stdcall__)) ReleaseCapture(void);
int __attribute__((__stdcall__)) ReleaseDC(HWND,HDC);
BOOL __attribute__((__stdcall__)) RemoveMenu(HMENU,UINT,UINT);
HANDLE __attribute__((__stdcall__)) RemovePropA(HWND,LPCSTR);
HANDLE __attribute__((__stdcall__)) RemovePropW(HWND,LPCWSTR);
BOOL __attribute__((__stdcall__)) ReplyMessage(LRESULT);
BOOL __attribute__((__stdcall__)) ScreenToClient(HWND,LPPOINT);
BOOL __attribute__((__stdcall__)) ScrollDC(HDC,int,int,LPCRECT,LPCRECT,HRGN,LPRECT);
BOOL __attribute__((__stdcall__)) ScrollWindow(HWND,int,int,LPCRECT,LPCRECT);
int __attribute__((__stdcall__)) ScrollWindowEx(HWND,int,int,LPCRECT,LPCRECT,HRGN,LPRECT,UINT);
LONG __attribute__((__stdcall__)) SendDlgItemMessageA(HWND,int,UINT,WPARAM,LPARAM);
LONG __attribute__((__stdcall__)) SendDlgItemMessageW(HWND,int,UINT,WPARAM,LPARAM);
UINT __attribute__((__stdcall__)) SendInput(UINT,LPINPUT,int);
LRESULT __attribute__((__stdcall__)) SendMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) SendMessageCallbackA(HWND,UINT,WPARAM,LPARAM,SENDASYNCPROC,DWORD);
BOOL __attribute__((__stdcall__)) SendMessageCallbackW(HWND,UINT,WPARAM,LPARAM,SENDASYNCPROC,DWORD);
LRESULT __attribute__((__stdcall__)) SendMessageTimeoutA(HWND,UINT,WPARAM,LPARAM,UINT,UINT,PDWORD);
LRESULT __attribute__((__stdcall__)) SendMessageTimeoutW(HWND,UINT,WPARAM,LPARAM,UINT,UINT,PDWORD);
LRESULT __attribute__((__stdcall__)) SendMessageW(HWND,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) SendNotifyMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) SendNotifyMessageW(HWND,UINT,WPARAM,LPARAM);
HWND __attribute__((__stdcall__)) SetActiveWindow(HWND);
HWND __attribute__((__stdcall__)) SetCapture(HWND hWnd);
BOOL __attribute__((__stdcall__)) SetCaretBlinkTime(UINT);
BOOL __attribute__((__stdcall__)) SetCaretPos(int,int);
DWORD __attribute__((__stdcall__)) SetClassLongA(HWND,int,LONG);
DWORD __attribute__((__stdcall__)) SetClassLongW(HWND,int,LONG);
WORD __attribute__((__stdcall__)) SetClassWord(HWND,int,WORD);
HANDLE __attribute__((__stdcall__)) SetClipboardData(UINT,HANDLE);
HWND __attribute__((__stdcall__)) SetClipboardViewer(HWND);
HCURSOR __attribute__((__stdcall__)) SetCursor(HCURSOR);
BOOL __attribute__((__stdcall__)) SetCursorPos(int,int);
void __attribute__((__stdcall__)) SetDebugErrorLevel(DWORD);
BOOL __attribute__((__stdcall__)) SetDlgItemInt(HWND,int,UINT,BOOL);
BOOL __attribute__((__stdcall__)) SetDlgItemTextA(HWND,int,LPCSTR);
BOOL __attribute__((__stdcall__)) SetDlgItemTextW(HWND,int,LPCWSTR);
BOOL __attribute__((__stdcall__)) SetDoubleClickTime(UINT);
HWND __attribute__((__stdcall__)) SetFocus(HWND);
BOOL __attribute__((__stdcall__)) SetForegroundWindow(HWND);
BOOL __attribute__((__stdcall__)) SetKeyboardState(PBYTE);
BOOL __attribute__((__stdcall__)) SetMenu(HWND,HMENU);
BOOL __attribute__((__stdcall__)) SetMenuContextHelpId(HMENU,DWORD);
BOOL __attribute__((__stdcall__)) SetMenuDefaultItem(HMENU,UINT,UINT);
BOOL __attribute__((__stdcall__)) SetMenuInfo(HMENU,LPCMENUINFO);
BOOL __attribute__((__stdcall__)) SetMenuItemBitmaps(HMENU,UINT,UINT,HBITMAP,HBITMAP);
BOOL __attribute__((__stdcall__)) SetMenuItemInfoA(HMENU,UINT,BOOL,LPCMENUITEMINFOA);
BOOL __attribute__((__stdcall__)) SetMenuItemInfoW( HMENU,UINT,BOOL,LPCMENUITEMINFOW);
LPARAM __attribute__((__stdcall__)) SetMessageExtraInfo(LPARAM);
BOOL __attribute__((__stdcall__)) SetMessageQueue(int);
HWND __attribute__((__stdcall__)) SetParent(HWND,HWND);
BOOL __attribute__((__stdcall__)) SetProcessWindowStation(HWINSTA);
BOOL __attribute__((__stdcall__)) SetPropA(HWND,LPCSTR,HANDLE);
BOOL __attribute__((__stdcall__)) SetPropW(HWND,LPCWSTR,HANDLE);
BOOL __attribute__((__stdcall__)) SetRect(LPRECT,int,int,int,int);
BOOL __attribute__((__stdcall__)) SetRectEmpty(LPRECT);
int __attribute__((__stdcall__)) SetScrollInfo(HWND,int,LPCSCROLLINFO,BOOL);
int __attribute__((__stdcall__)) SetScrollPos(HWND,int,int,BOOL);
BOOL __attribute__((__stdcall__)) SetScrollRange(HWND,int,int,int,BOOL);
BOOL __attribute__((__stdcall__)) SetSysColors(int,const INT *,const COLORREF *);

BOOL __attribute__((__stdcall__)) SetSystemCursor(HCURSOR,DWORD);
BOOL __attribute__((__stdcall__)) SetThreadDesktop(HDESK);
UINT __attribute__((__stdcall__)) SetTimer(HWND,UINT,UINT,TIMERPROC);
BOOL __attribute__((__stdcall__)) SetUserObjectInformationA(HANDLE,int,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) SetUserObjectInformationW(HANDLE,int,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) SetUserObjectSecurity(HANDLE,PSECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL __attribute__((__stdcall__)) SetWindowContextHelpId(HWND,DWORD);
LONG __attribute__((__stdcall__)) SetWindowLongA(HWND,int,LONG);
LONG __attribute__((__stdcall__)) SetWindowLongW(HWND,int,LONG);







BOOL __attribute__((__stdcall__)) SetWindowPlacement(HWND hWnd,const WINDOWPLACEMENT*);
BOOL __attribute__((__stdcall__)) SetWindowPos(HWND,HWND,int,int,int,int,UINT);
int __attribute__((__stdcall__)) SetWindowRgn(HWND,HRGN,BOOL);
HOOKPROC __attribute__((__stdcall__)) SetWindowsHookA(int,HOOKPROC);
HHOOK __attribute__((__stdcall__)) SetWindowsHookExA(int,HOOKPROC,HINSTANCE,DWORD);
HHOOK __attribute__((__stdcall__)) SetWindowsHookExW(int,HOOKPROC,HINSTANCE,DWORD);
BOOL __attribute__((__stdcall__)) SetWindowTextA(HWND,LPCSTR);
BOOL __attribute__((__stdcall__)) SetWindowTextW(HWND,LPCWSTR);
WORD __attribute__((__stdcall__)) SetWindowWord(HWND,int,WORD);
BOOL __attribute__((__stdcall__)) ShowCaret(HWND);
int __attribute__((__stdcall__)) ShowCursor(BOOL);
BOOL __attribute__((__stdcall__)) ShowOwnedPopups(HWND,BOOL);
BOOL __attribute__((__stdcall__)) ShowScrollBar(HWND,int,BOOL);
BOOL __attribute__((__stdcall__)) ShowWindow(HWND,int);
BOOL __attribute__((__stdcall__)) ShowWindowAsync(HWND,int);
BOOL __attribute__((__stdcall__)) SubtractRect(LPRECT,LPCRECT,LPCRECT);
BOOL __attribute__((__stdcall__)) SwapMouseButton(BOOL);
BOOL __attribute__((__stdcall__)) SwitchDesktop(HDESK);
BOOL __attribute__((__stdcall__)) SystemParametersInfoA(UINT,UINT,PVOID,UINT);
BOOL __attribute__((__stdcall__)) SystemParametersInfoW(UINT,UINT,PVOID,UINT);
LONG __attribute__((__stdcall__)) TabbedTextOutA(HDC,int,int,LPCSTR,int,int,LPINT,int);
LONG __attribute__((__stdcall__)) TabbedTextOutW(HDC,int,int,LPCWSTR,int,int,LPINT,int);
WORD __attribute__((__stdcall__)) TileWindows(HWND,UINT,LPCRECT,UINT,const HWND *);
int __attribute__((__stdcall__)) ToAscii(UINT,UINT,PBYTE,LPWORD,UINT);
int __attribute__((__stdcall__)) ToAsciiEx(UINT,UINT,PBYTE,LPWORD,UINT,HKL);
int __attribute__((__stdcall__)) ToUnicode(UINT,UINT,PBYTE,LPWSTR,int,UINT);
int __attribute__((__stdcall__)) ToUnicodeEx(UINT,UINT,PBYTE,LPWSTR,int,UINT,HKL);
BOOL __attribute__((__stdcall__)) TrackMouseEvent(LPTRACKMOUSEEVENT);
BOOL __attribute__((__stdcall__)) TrackPopupMenu(HMENU,UINT,int,int,int,HWND,LPCRECT);
BOOL __attribute__((__stdcall__)) TrackPopupMenuEx(HMENU,UINT,int,int,HWND,LPTPMPARAMS);
int __attribute__((__stdcall__)) TranslateAcceleratorA(HWND,HACCEL,LPMSG);
int __attribute__((__stdcall__)) TranslateAcceleratorW(HWND,HACCEL,LPMSG);
BOOL __attribute__((__stdcall__)) TranslateMDISysAccel(HWND,LPMSG);
BOOL __attribute__((__stdcall__)) TranslateMessage(const MSG*);
BOOL __attribute__((__stdcall__)) UnhookWindowsHook(int,HOOKPROC);
BOOL __attribute__((__stdcall__)) UnhookWindowsHookEx(HHOOK);
BOOL __attribute__((__stdcall__)) UnionRect(LPRECT,LPCRECT,LPCRECT);
BOOL __attribute__((__stdcall__)) UnloadKeyboardLayout(HKL);
BOOL __attribute__((__stdcall__)) UnregisterClassA(LPCSTR,HINSTANCE);
BOOL __attribute__((__stdcall__)) UnregisterClassW(LPCWSTR,HINSTANCE);
BOOL __attribute__((__stdcall__)) UnregisterHotKey(HWND,int);
BOOL __attribute__((__stdcall__)) UpdateWindow(HWND);
BOOL __attribute__((__stdcall__)) ValidateRect(HWND,LPCRECT);
BOOL __attribute__((__stdcall__)) ValidateRgn(HWND,HRGN);
SHORT __attribute__((__stdcall__)) VkKeyScanA(CHAR);
SHORT __attribute__((__stdcall__)) VkKeyScanExA(CHAR,HKL);
SHORT __attribute__((__stdcall__)) VkKeyScanExW(WCHAR,HKL);
SHORT __attribute__((__stdcall__)) VkKeyScanW(WCHAR);
DWORD __attribute__((__stdcall__)) WaitForInputIdle(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) WaitMessage(void);
HWND __attribute__((__stdcall__)) WindowFromDC(HDC hDC);
HWND __attribute__((__stdcall__)) WindowFromPoint(POINT);
UINT __attribute__((__stdcall__)) WinExec(LPCSTR,UINT);
BOOL __attribute__((__stdcall__)) WinHelpA(HWND,LPCSTR,UINT,DWORD);
BOOL __attribute__((__stdcall__)) WinHelpW(HWND,LPCWSTR,UINT,DWORD);
int __attribute__((__cdecl__)) wsprintfA(LPSTR,LPCSTR,...);
int __attribute__((__cdecl__)) wsprintfW(LPWSTR,LPCWSTR,...);
int __attribute__((__stdcall__)) wvsprintfA(LPSTR,LPCSTR,va_list arglist);
int __attribute__((__stdcall__)) wvsprintfW(LPWSTR,LPCWSTR,va_list arglist);

BOOL __attribute__((__stdcall__)) AllowSetForegroundWindow(DWORD);
BOOL __attribute__((__stdcall__)) LockSetForegroundWindow(UINT);


BOOL __attribute__((__stdcall__)) SetLayeredWindowAttributes(HWND,COLORREF,BYTE,DWORD);
BOOL __attribute__((__stdcall__)) UpdateLayeredWindow(HWND,HDC,POINT*,SIZE*,HDC,POINT*,COLORREF,BLENDFUNCTION*,DWORD);


BOOL __attribute__((__stdcall__)) GetLayeredWindowAttributes(HWND,COLORREF*,BYTE*,DWORD*);
# 3582 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winuser.h" 3
typedef WNDCLASSA WNDCLASS,*LPWNDCLASS,*PWNDCLASS;
typedef WNDCLASSEXA WNDCLASSEX,*LPWNDCLASSEX,*PWNDCLASSEX;
typedef MENUITEMINFOA MENUITEMINFO,*LPMENUITEMINFO;
typedef LPCMENUITEMINFOA LPCMENUITEMINFO;
typedef MSGBOXPARAMSA MSGBOXPARAMS,*PMSGBOXPARAMS,*LPMSGBOXPARAMS;
typedef HIGHCONTRASTA HIGHCONTRAST,*LPHIGHCONTRAST;
typedef SERIALKEYSA SERIALKEYS,*LPSERIALKEYS;
typedef SOUNDSENTRYA SOUNDSENTRY,*LPSOUNDSENTRY;
typedef CREATESTRUCTA CREATESTRUCT, *LPCREATESTRUCT;
typedef CBT_CREATEWNDA CBT_CREATEWND, *LPCBT_CREATEWND;
typedef MDICREATESTRUCTA MDICREATESTRUCT,*LPMDICREATESTRUCT;
typedef MULTIKEYHELPA MULTIKEYHELP,*PMULTIKEYHELP,*LPMULTIKEYHELP;
typedef MONITORINFOEXA MONITORINFOEX, *LPMONITORINFOEX;
# 3723 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winuser.h" 3
typedef ICONMETRICSA ICONMETRICS,*LPICONMETRICS;
typedef NONCLIENTMETRICSA NONCLIENTMETRICS,*LPNONCLIENTMETRICS;
# 56 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnls.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnls.h" 3
# 422 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnls.h" 3
typedef DWORD LCTYPE;
typedef DWORD CALTYPE;
typedef DWORD CALID;
typedef DWORD LGRPID;
typedef BOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__))* CALINFO_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (__attribute__((__stdcall__))* CALINFO_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (__attribute__((__stdcall__))* LANGUAGEGROUP_ENUMPROCA)(LGRPID, LPSTR, LPSTR, DWORD, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__))* LANGUAGEGROUP_ENUMPROCW)(LGRPID, LPWSTR, LPWSTR, DWORD, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__))* LANGGROUPLOCALE_ENUMPROCA)(LGRPID, LCID, LPSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__))* LANGGROUPLOCALE_ENUMPROCW)(LGRPID, LCID, LPWSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__))* UILANGUAGE_ENUMPROCW)(LPWSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__))* UILANGUAGE_ENUMPROCA)(LPSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__)) *LOCALE_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *LOCALE_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__)) *CODEPAGE_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *CODEPAGE_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__))* DATEFMT_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (__attribute__((__stdcall__))* DATEFMT_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (__attribute__((__stdcall__)) *TIMEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *TIMEFMT_ENUMPROCW)(LPWSTR);

typedef struct _cpinfo {
 UINT MaxCharSize;
 BYTE DefaultChar[2];
 BYTE LeadByte[12];
} CPINFO,*LPCPINFO;
typedef struct _cpinfoexA {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
    WCHAR UnicodeDefaultChar;
    UINT CodePage;
    CHAR CodePageName[260];
} CPINFOEXA, *LPCPINFOEXA;
typedef struct _cpinfoexW {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
    WCHAR UnicodeDefaultChar;
    UINT CodePage;
    WCHAR CodePageName[260];
} CPINFOEXW, *LPCPINFOEXW;
typedef struct _currencyfmtA {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPSTR lpDecimalSep;
 LPSTR lpThousandSep;
 UINT NegativeOrder;
 UINT PositiveOrder;
 LPSTR lpCurrencySymbol;
} CURRENCYFMTA, *LPCURRENCYFMTA;
typedef struct _currencyfmtW {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPWSTR lpDecimalSep;
 LPWSTR lpThousandSep;
 UINT NegativeOrder;
 UINT PositiveOrder;
 LPWSTR lpCurrencySymbol;
} CURRENCYFMTW, *LPCURRENCYFMTW;
typedef struct _numberfmtA {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPSTR lpDecimalSep;
 LPSTR lpThousandSep;
 UINT NegativeOrder;
} NUMBERFMTA, *LPNUMBERFMTA;
typedef struct _numberfmtW {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPWSTR lpDecimalSep;
 LPWSTR lpThousandSep;
 UINT NegativeOrder;
} NUMBERFMTW, *LPNUMBERFMTW;

int __attribute__((__stdcall__)) CompareStringA(LCID,DWORD,LPCSTR,int,LPCSTR,int);
int __attribute__((__stdcall__)) CompareStringW(LCID,DWORD,LPCWSTR,int,LPCWSTR,int);
LCID __attribute__((__stdcall__)) ConvertDefaultLocale(LCID);
BOOL __attribute__((__stdcall__)) EnumCalendarInfoA(CALINFO_ENUMPROCA,LCID,CALID,CALTYPE);
BOOL __attribute__((__stdcall__)) EnumCalendarInfoW(CALINFO_ENUMPROCW,LCID,CALID,CALTYPE);
BOOL __attribute__((__stdcall__)) EnumDateFormatsA(DATEFMT_ENUMPROCA,LCID,DWORD);
BOOL __attribute__((__stdcall__)) EnumDateFormatsW(DATEFMT_ENUMPROCW,LCID,DWORD);
BOOL __attribute__((__stdcall__)) EnumSystemCodePagesA(CODEPAGE_ENUMPROCA,DWORD);
BOOL __attribute__((__stdcall__)) EnumSystemCodePagesW(CODEPAGE_ENUMPROCW,DWORD);
BOOL __attribute__((__stdcall__)) EnumSystemLocalesA(LOCALE_ENUMPROCA,DWORD);
BOOL __attribute__((__stdcall__)) EnumSystemLocalesW(LOCALE_ENUMPROCW,DWORD);
BOOL __attribute__((__stdcall__)) EnumTimeFormatsA(TIMEFMT_ENUMPROCA,LCID,DWORD);
BOOL __attribute__((__stdcall__)) EnumTimeFormatsW(TIMEFMT_ENUMPROCW,LCID,DWORD);
int __attribute__((__stdcall__)) FoldStringA(DWORD,LPCSTR,int,LPSTR,int);
int __attribute__((__stdcall__)) FoldStringW(DWORD,LPCWSTR,int,LPWSTR,int);
UINT __attribute__((__stdcall__)) GetACP(void);
BOOL __attribute__((__stdcall__)) GetCPInfo(UINT,LPCPINFO);
BOOL __attribute__((__stdcall__)) GetCPInfoExA(UINT,DWORD,LPCPINFOEXA);
BOOL __attribute__((__stdcall__)) GetCPInfoExW(UINT,DWORD,LPCPINFOEXW);
int __attribute__((__stdcall__)) GetCurrencyFormatA(LCID,DWORD,LPCSTR,const CURRENCYFMTA*,LPSTR,int);
int __attribute__((__stdcall__)) GetCurrencyFormatW(LCID,DWORD,LPCWSTR,const CURRENCYFMTW*,LPWSTR,int);
int __attribute__((__stdcall__)) GetDateFormatA(LCID,DWORD,const SYSTEMTIME*,LPCSTR,LPSTR,int);
int __attribute__((__stdcall__)) GetDateFormatW(LCID,DWORD,const SYSTEMTIME*,LPCWSTR,LPWSTR,int);
int __attribute__((__stdcall__)) GetLocaleInfoA(LCID,LCTYPE,LPSTR,int);
int __attribute__((__stdcall__)) GetLocaleInfoW(LCID,LCTYPE,LPWSTR,int);
int __attribute__((__stdcall__)) GetNumberFormatA(LCID,DWORD,LPCSTR,const NUMBERFMTA*,LPSTR,int);
int __attribute__((__stdcall__)) GetNumberFormatW(LCID,DWORD,LPCWSTR,const NUMBERFMTW*,LPWSTR,int);
UINT __attribute__((__stdcall__)) GetOEMCP(void);
BOOL __attribute__((__stdcall__)) GetStringTypeA(LCID,DWORD,LPCSTR,int,LPWORD);
BOOL __attribute__((__stdcall__)) GetStringTypeW(DWORD,LPCWSTR,int,LPWORD);
BOOL __attribute__((__stdcall__)) GetStringTypeExA(LCID,DWORD,LPCSTR,int,LPWORD);
BOOL __attribute__((__stdcall__)) GetStringTypeExW(LCID,DWORD,LPCWSTR,int,LPWORD);
LANGID __attribute__((__stdcall__)) GetSystemDefaultLangID(void);
LCID __attribute__((__stdcall__)) GetSystemDefaultLCID(void);
LCID __attribute__((__stdcall__)) GetThreadLocale(void);
int __attribute__((__stdcall__)) GetTimeFormatA(LCID,DWORD,const SYSTEMTIME*,LPCSTR,LPSTR,int);
int __attribute__((__stdcall__)) GetTimeFormatW(LCID,DWORD,const SYSTEMTIME*,LPCWSTR,LPWSTR,int);
LANGID __attribute__((__stdcall__)) GetUserDefaultLangID(void);
LCID __attribute__((__stdcall__)) GetUserDefaultLCID(void);
BOOL __attribute__((__stdcall__)) IsDBCSLeadByte(BYTE);
BOOL __attribute__((__stdcall__)) IsDBCSLeadByteEx(UINT,BYTE);
BOOL __attribute__((__stdcall__)) IsValidCodePage(UINT);
BOOL __attribute__((__stdcall__)) IsValidLocale(LCID,DWORD);
int __attribute__((__stdcall__)) LCMapStringA(LCID,DWORD,LPCSTR,int,LPSTR,int);
int __attribute__((__stdcall__)) LCMapStringW(LCID,DWORD,LPCWSTR,int,LPWSTR,int);
int __attribute__((__stdcall__)) MultiByteToWideChar(UINT,DWORD,LPCSTR,int,LPWSTR,int);
BOOL __attribute__((__stdcall__)) SetLocaleInfoA(LCID,LCTYPE,LPCSTR);
BOOL __attribute__((__stdcall__)) SetLocaleInfoW(LCID,LCTYPE,LPCWSTR);
BOOL __attribute__((__stdcall__)) SetThreadLocale(LCID);
int __attribute__((__stdcall__)) WideCharToMultiByte(UINT,DWORD,LPCWSTR,int,LPSTR,int,LPCSTR,LPBOOL);
# 621 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnls.h" 3
typedef CPINFOEXA CPINFOEX;
typedef LPCPINFOEXA LPCPINFOEX;
typedef CURRENCYFMTA CURRENCYFMT;
typedef LPCURRENCYFMTA LPCURRENCYFMT;
typedef NUMBERFMTA NUMBERFMT;
typedef LPNUMBERFMTA LPNUMBERFMT;
# 59 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winver.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winver.h" 3
# 85 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winver.h" 3
typedef struct tagVS_FIXEDFILEINFO {
 DWORD dwSignature;
 DWORD dwStrucVersion;
 DWORD dwFileVersionMS;
 DWORD dwFileVersionLS;
 DWORD dwProductVersionMS;
 DWORD dwProductVersionLS;
 DWORD dwFileFlagsMask;
 DWORD dwFileFlags;
 DWORD dwFileOS;
 DWORD dwFileType;
 DWORD dwFileSubtype;
 DWORD dwFileDateMS;
 DWORD dwFileDateLS;
} VS_FIXEDFILEINFO;
DWORD __attribute__((__stdcall__)) VerFindFileA(DWORD,LPSTR,LPSTR,LPSTR,LPSTR,PUINT,LPSTR,PUINT);
DWORD __attribute__((__stdcall__)) VerFindFileW(DWORD,LPWSTR,LPWSTR,LPWSTR,LPWSTR,PUINT,LPWSTR,PUINT);
DWORD __attribute__((__stdcall__)) VerInstallFileA(DWORD,LPSTR,LPSTR,LPSTR,LPSTR,LPSTR,LPSTR,PUINT);
DWORD __attribute__((__stdcall__)) VerInstallFileW(DWORD,LPWSTR,LPWSTR,LPWSTR,LPWSTR,LPWSTR,LPWSTR,PUINT);
DWORD __attribute__((__stdcall__)) GetFileVersionInfoSizeA(LPSTR,PDWORD);
DWORD __attribute__((__stdcall__)) GetFileVersionInfoSizeW(LPWSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetFileVersionInfoA(LPSTR,DWORD,DWORD,PVOID);
BOOL __attribute__((__stdcall__)) GetFileVersionInfoW(LPWSTR,DWORD,DWORD,PVOID);
DWORD __attribute__((__stdcall__)) VerLanguageNameA(DWORD,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) VerLanguageNameW(DWORD,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) VerQueryValueA(const LPVOID,LPSTR,LPVOID*,PUINT);
BOOL __attribute__((__stdcall__)) VerQueryValueW(const LPVOID,LPWSTR,LPVOID*,PUINT);
# 62 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnetwk.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnetwk.h" 3
# 160 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnetwk.h" 3
typedef struct _NETRESOURCEA {
 DWORD dwScope;
 DWORD dwType;
 DWORD dwDisplayType;
 DWORD dwUsage;
 LPSTR lpLocalName;
 LPSTR lpRemoteName;
 LPSTR lpComment ;
 LPSTR lpProvider;
}NETRESOURCEA,*LPNETRESOURCEA;
typedef struct _NETRESOURCEW {
 DWORD dwScope;
 DWORD dwType;
 DWORD dwDisplayType;
 DWORD dwUsage;
 LPWSTR lpLocalName;
 LPWSTR lpRemoteName;
 LPWSTR lpComment ;
 LPWSTR lpProvider;
}NETRESOURCEW,*LPNETRESOURCEW;
typedef struct _CONNECTDLGSTRUCTA{
 DWORD cbStructure;
 HWND hwndOwner;
 LPNETRESOURCEA lpConnRes;
 DWORD dwFlags;
 DWORD dwDevNum;
} CONNECTDLGSTRUCTA,*LPCONNECTDLGSTRUCTA;
typedef struct _CONNECTDLGSTRUCTW{
 DWORD cbStructure;
 HWND hwndOwner;
 LPNETRESOURCEW lpConnRes;
 DWORD dwFlags;
 DWORD dwDevNum;
} CONNECTDLGSTRUCTW,*LPCONNECTDLGSTRUCTW;
typedef struct _DISCDLGSTRUCTA{
 DWORD cbStructure;
 HWND hwndOwner;
 LPSTR lpLocalName;
 LPSTR lpRemoteName;
 DWORD dwFlags;
} DISCDLGSTRUCTA,*LPDISCDLGSTRUCTA;
typedef struct _DISCDLGSTRUCTW{
 DWORD cbStructure;
 HWND hwndOwner;
 LPWSTR lpLocalName;
 LPWSTR lpRemoteName;
 DWORD dwFlags;
} DISCDLGSTRUCTW,*LPDISCDLGSTRUCTW;
typedef struct _UNIVERSAL_NAME_INFOA { LPSTR lpUniversalName; }UNIVERSAL_NAME_INFOA,*LPUNIVERSAL_NAME_INFOA;
typedef struct _UNIVERSAL_NAME_INFOW { LPWSTR lpUniversalName; }UNIVERSAL_NAME_INFOW,*LPUNIVERSAL_NAME_INFOW;
typedef struct _REMOTE_NAME_INFOA {
 LPSTR lpUniversalName;
 LPSTR lpConnectionName;
 LPSTR lpRemainingPath;
}REMOTE_NAME_INFOA,*LPREMOTE_NAME_INFOA;
typedef struct _REMOTE_NAME_INFOW {
 LPWSTR lpUniversalName;
 LPWSTR lpConnectionName;
 LPWSTR lpRemainingPath;
}REMOTE_NAME_INFOW,*LPREMOTE_NAME_INFOW;
typedef struct _NETINFOSTRUCT{
 DWORD cbStructure;
 DWORD dwProviderVersion;
 DWORD dwStatus;
 DWORD dwCharacteristics;
 DWORD dwHandle;
 WORD wNetType;
 DWORD dwPrinters;
 DWORD dwDrives;
} NETINFOSTRUCT,*LPNETINFOSTRUCT;
typedef UINT(__attribute__((__stdcall__)) *PFNGETPROFILEPATHA)(LPCSTR,LPSTR,UINT);
typedef UINT(__attribute__((__stdcall__)) *PFNGETPROFILEPATHW)(LPCWSTR,LPWSTR,UINT);
typedef UINT(__attribute__((__stdcall__)) *PFNRECONCILEPROFILEA)(LPCSTR,LPCSTR,DWORD);
typedef UINT(__attribute__((__stdcall__)) *PFNRECONCILEPROFILEW)(LPCWSTR,LPCWSTR,DWORD);
typedef BOOL(__attribute__((__stdcall__)) *PFNPROCESSPOLICIESA)(HWND,LPCSTR,LPCSTR,LPCSTR,DWORD);
typedef BOOL(__attribute__((__stdcall__)) *PFNPROCESSPOLICIESW)(HWND,LPCWSTR,LPCWSTR,LPCWSTR,DWORD);
typedef struct _NETCONNECTINFOSTRUCT{
 DWORD cbStructure;
 DWORD dwFlags;
 DWORD dwSpeed;
 DWORD dwDelay;
 DWORD dwOptDataSize;
} NETCONNECTINFOSTRUCT,*LPNETCONNECTINFOSTRUCT;

DWORD __attribute__((__stdcall__)) WNetAddConnectionA(LPCSTR,LPCSTR,LPCSTR);
DWORD __attribute__((__stdcall__)) WNetAddConnectionW(LPCWSTR,LPCWSTR,LPCWSTR);
DWORD __attribute__((__stdcall__)) WNetAddConnection2A(LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetAddConnection2W(LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetAddConnection3A(HWND,LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetAddConnection3W(HWND,LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetCancelConnectionA(LPCSTR,BOOL);
DWORD __attribute__((__stdcall__)) WNetCancelConnectionW(LPCWSTR,BOOL);
DWORD __attribute__((__stdcall__)) WNetCancelConnection2A(LPCSTR,DWORD,BOOL);
DWORD __attribute__((__stdcall__)) WNetCancelConnection2W(LPCWSTR,DWORD,BOOL);
DWORD __attribute__((__stdcall__)) WNetGetConnectionA(LPCSTR,LPSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetConnectionW(LPCWSTR,LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetUseConnectionA(HWND,LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD,LPSTR,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) WNetUseConnectionW(HWND,LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD,LPWSTR,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) WNetSetConnectionA(LPCSTR,DWORD,PVOID);
DWORD __attribute__((__stdcall__)) WNetSetConnectionW(LPCWSTR,DWORD,PVOID);
DWORD __attribute__((__stdcall__)) WNetConnectionDialog(HWND,DWORD);
DWORD __attribute__((__stdcall__)) WNetDisconnectDialog(HWND,DWORD);
DWORD __attribute__((__stdcall__)) WNetConnectionDialog1A(LPCONNECTDLGSTRUCTA);
DWORD __attribute__((__stdcall__)) WNetConnectionDialog1W(LPCONNECTDLGSTRUCTW);
DWORD __attribute__((__stdcall__)) WNetDisconnectDialog1A(LPDISCDLGSTRUCTA);
DWORD __attribute__((__stdcall__)) WNetDisconnectDialog1W(LPDISCDLGSTRUCTW);
DWORD __attribute__((__stdcall__)) WNetOpenEnumA(DWORD,DWORD,DWORD,LPNETRESOURCEA,LPHANDLE);
DWORD __attribute__((__stdcall__)) WNetOpenEnumW(DWORD,DWORD,DWORD,LPNETRESOURCEW,LPHANDLE);
DWORD __attribute__((__stdcall__)) WNetEnumResourceA(HANDLE,PDWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetEnumResourceW(HANDLE,PDWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetCloseEnum(HANDLE);
DWORD __attribute__((__stdcall__)) WNetGetUniversalNameA(LPCSTR,DWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetUniversalNameW(LPCWSTR,DWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetUserA(LPCSTR,LPSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetUserW(LPCWSTR,LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetProviderNameA(DWORD,LPSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetProviderNameW(DWORD,LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetNetworkInformationA(LPCSTR,LPNETINFOSTRUCT);
DWORD __attribute__((__stdcall__)) WNetGetNetworkInformationW(LPCWSTR,LPNETINFOSTRUCT);
DWORD __attribute__((__stdcall__)) WNetGetResourceInformationA(LPNETRESOURCEA,LPVOID,LPDWORD,LPSTR*);
DWORD __attribute__((__stdcall__)) WNetGetResourceInformationW(LPNETRESOURCEA,LPVOID,LPDWORD,LPWSTR*);
DWORD __attribute__((__stdcall__)) WNetGetLastErrorA(PDWORD,LPSTR,DWORD,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetGetLastErrorW(PDWORD,LPWSTR,DWORD,LPWSTR,DWORD);
DWORD __attribute__((__stdcall__)) MultinetGetConnectionPerformanceA(LPNETRESOURCEA,LPNETCONNECTINFOSTRUCT);
DWORD __attribute__((__stdcall__)) MultinetGetConnectionPerformanceW(LPNETRESOURCEW,LPNETCONNECTINFOSTRUCT);
# 317 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winnetwk.h" 3
typedef NETRESOURCEA NETRESOURCE,*LPNETRESOURCE;
typedef CONNECTDLGSTRUCTA CONNECTDLGSTRUCT,*LPCONNECTDLGSTRUCT;
typedef DISCDLGSTRUCTA DISCDLGSTRUCT,*LPDISCDLGSTRUCT;
typedef UNIVERSAL_NAME_INFOA UNIVERSAL_NAME_INFO,*LPUNIVERSAL_NAME_INFO;
typedef REMOTE_NAME_INFOA REMOTE_NAME_INFO,*LPREMOTE_NAME_INFO;
# 65 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winreg.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winreg.h" 3
# 41 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winreg.h" 3
typedef ACCESS_MASK REGSAM;
typedef struct value_entA {
 LPSTR ve_valuename;
 DWORD ve_valuelen;
 DWORD ve_valueptr;
 DWORD ve_type;
} VALENTA,*PVALENTA;
typedef struct value_entW {
 LPWSTR ve_valuename;
 DWORD ve_valuelen;
 DWORD ve_valueptr;
 DWORD ve_type;
} VALENTW,*PVALENTW;
BOOL __attribute__((__stdcall__)) AbortSystemShutdownA(LPCSTR);
BOOL __attribute__((__stdcall__)) AbortSystemShutdownW(LPCWSTR);
BOOL __attribute__((__stdcall__)) InitiateSystemShutdownA(LPSTR,LPSTR,DWORD,BOOL,BOOL);
BOOL __attribute__((__stdcall__)) InitiateSystemShutdownW(LPWSTR,LPWSTR,DWORD,BOOL,BOOL);
LONG __attribute__((__stdcall__)) RegCloseKey(HKEY);
LONG __attribute__((__stdcall__)) RegConnectRegistryA(LPCSTR,HKEY,PHKEY);
LONG __attribute__((__stdcall__)) RegConnectRegistryW(LPCWSTR,HKEY,PHKEY);
LONG __attribute__((__stdcall__)) RegCreateKeyA(HKEY,LPCSTR,PHKEY);
LONG __attribute__((__stdcall__)) RegCreateKeyExA(HKEY,LPCSTR,DWORD,LPSTR,DWORD,REGSAM,LPSECURITY_ATTRIBUTES,PHKEY,PDWORD);
LONG __attribute__((__stdcall__)) RegCreateKeyExW(HKEY,LPCWSTR,DWORD,LPWSTR,DWORD,REGSAM,LPSECURITY_ATTRIBUTES,PHKEY,PDWORD);
LONG __attribute__((__stdcall__)) RegCreateKeyW(HKEY,LPCWSTR,PHKEY);
LONG __attribute__((__stdcall__)) RegDeleteKeyA(HKEY,LPCSTR);
LONG __attribute__((__stdcall__)) RegDeleteKeyW(HKEY,LPCWSTR);
LONG __attribute__((__stdcall__)) RegDeleteValueA(HKEY,LPCSTR);
LONG __attribute__((__stdcall__)) RegDeleteValueW(HKEY,LPCWSTR);
LONG __attribute__((__stdcall__)) RegEnumKeyA(HKEY,DWORD,LPSTR,DWORD);
LONG __attribute__((__stdcall__)) RegEnumKeyW(HKEY,DWORD,LPWSTR,DWORD);
LONG __attribute__((__stdcall__)) RegEnumKeyExA(HKEY,DWORD,LPSTR,PDWORD,PDWORD,LPSTR,PDWORD,PFILETIME);
LONG __attribute__((__stdcall__)) RegEnumKeyExW(HKEY,DWORD,LPWSTR,PDWORD,PDWORD,LPWSTR,PDWORD,PFILETIME);
LONG __attribute__((__stdcall__)) RegEnumValueA(HKEY,DWORD,LPSTR,PDWORD,PDWORD,PDWORD,LPBYTE,PDWORD);
LONG __attribute__((__stdcall__)) RegEnumValueW(HKEY,DWORD,LPWSTR,PDWORD,PDWORD,PDWORD,LPBYTE,PDWORD);
LONG __attribute__((__stdcall__)) RegFlushKey(HKEY);
LONG __attribute__((__stdcall__)) RegGetKeySecurity(HKEY,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,PDWORD);
LONG __attribute__((__stdcall__)) RegLoadKeyA(HKEY,LPCSTR,LPCSTR);
LONG __attribute__((__stdcall__)) RegLoadKeyW(HKEY,LPCWSTR,LPCWSTR);
LONG __attribute__((__stdcall__)) RegNotifyChangeKeyValue(HKEY,BOOL,DWORD,HANDLE,BOOL);
LONG __attribute__((__stdcall__)) RegOpenKeyA(HKEY,LPCSTR,PHKEY);
LONG __attribute__((__stdcall__)) RegOpenKeyExA(HKEY,LPCSTR,DWORD,REGSAM,PHKEY);
LONG __attribute__((__stdcall__)) RegOpenKeyExW(HKEY,LPCWSTR,DWORD,REGSAM,PHKEY);
LONG __attribute__((__stdcall__)) RegOpenKeyW(HKEY,LPCWSTR,PHKEY);
LONG __attribute__((__stdcall__)) RegQueryInfoKeyA(HKEY,LPSTR,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PFILETIME);
LONG __attribute__((__stdcall__)) RegQueryInfoKeyW(HKEY,LPWSTR,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PFILETIME);
LONG __attribute__((__stdcall__)) RegQueryMultipleValuesA(HKEY,PVALENTA,DWORD,LPSTR,LPDWORD);
LONG __attribute__((__stdcall__)) RegQueryMultipleValuesW(HKEY,PVALENTW,DWORD,LPWSTR,LPDWORD);
LONG __attribute__((__stdcall__)) RegQueryValueA(HKEY,LPCSTR,LPSTR,PLONG);
LONG __attribute__((__stdcall__)) RegQueryValueExA(HKEY,LPCSTR,LPDWORD,LPDWORD,LPBYTE,LPDWORD);
LONG __attribute__((__stdcall__)) RegQueryValueExW(HKEY,LPCWSTR,LPDWORD,LPDWORD,LPBYTE,LPDWORD);
LONG __attribute__((__stdcall__)) RegQueryValueW(HKEY,LPCWSTR,LPWSTR,PLONG);
LONG __attribute__((__stdcall__)) RegReplaceKeyA(HKEY,LPCSTR,LPCSTR,LPCSTR);
LONG __attribute__((__stdcall__)) RegReplaceKeyW(HKEY,LPCWSTR,LPCWSTR,LPCWSTR);
LONG __attribute__((__stdcall__)) RegRestoreKeyA(HKEY,LPCSTR,DWORD);
LONG __attribute__((__stdcall__)) RegRestoreKeyW(HKEY,LPCWSTR,DWORD);
LONG __attribute__((__stdcall__)) RegSaveKeyA(HKEY,LPCSTR,LPSECURITY_ATTRIBUTES);
LONG __attribute__((__stdcall__)) RegSaveKeyW(HKEY,LPCWSTR,LPSECURITY_ATTRIBUTES);
LONG __attribute__((__stdcall__)) RegSetKeySecurity(HKEY,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
LONG __attribute__((__stdcall__)) RegSetValueA(HKEY,LPCSTR,DWORD,LPCSTR,DWORD);
LONG __attribute__((__stdcall__)) RegSetValueExA(HKEY,LPCSTR,DWORD,DWORD,const BYTE*,DWORD);
LONG __attribute__((__stdcall__)) RegSetValueExW(HKEY,LPCWSTR,DWORD,DWORD,const BYTE*,DWORD);
LONG __attribute__((__stdcall__)) RegSetValueW(HKEY,LPCWSTR,DWORD,LPCWSTR,DWORD);
LONG __attribute__((__stdcall__)) RegUnLoadKeyA(HKEY,LPCSTR);
LONG __attribute__((__stdcall__)) RegUnLoadKeyW(HKEY,LPCWSTR);
# 132 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winreg.h" 3
typedef VALENTA VALENT,*PVALENT;
# 68 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsvc.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsvc.h" 3
# 70 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsvc.h" 3
typedef struct _SERVICE_STATUS {
 DWORD dwServiceType;
 DWORD dwCurrentState;
 DWORD dwControlsAccepted;
 DWORD dwWin32ExitCode;
 DWORD dwServiceSpecificExitCode;
 DWORD dwCheckPoint;
 DWORD dwWaitHint;
} SERVICE_STATUS,*LPSERVICE_STATUS;
typedef struct _SERVICE_STATUS_PROCESS {
 DWORD dwServiceType;
 DWORD dwCurrentState;
 DWORD dwControlsAccepted;
 DWORD dwWin32ExitCode;
 DWORD dwServiceSpecificExitCode;
 DWORD dwCheckPoint;
 DWORD dwWaitHint;
 DWORD dwProcessId;
 DWORD dwServiceFlags;
} SERVICE_STATUS_PROCESS, *LPSERVICE_STATUS_PROCESS;
typedef enum _SC_STATUS_TYPE {
 SC_STATUS_PROCESS_INFO = 0
} SC_STATUS_TYPE;
typedef enum _SC_ENUM_TYPE {
        SC_ENUM_PROCESS_INFO = 0
} SC_ENUM_TYPE;
typedef struct _ENUM_SERVICE_STATUSA {
 LPSTR lpServiceName;
 LPSTR lpDisplayName;
 SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSA,*LPENUM_SERVICE_STATUSA;
typedef struct _ENUM_SERVICE_STATUSW {
 LPWSTR lpServiceName;
 LPWSTR lpDisplayName;
 SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSW,*LPENUM_SERVICE_STATUSW;
typedef struct _ENUM_SERVICE_STATUS_PROCESSA {
 LPSTR lpServiceName;
 LPSTR lpDisplayName;
 SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSA,*LPENUM_SERVICE_STATUS_PROCESSA;
typedef struct _ENUM_SERVICE_STATUS_PROCESSW {
 LPWSTR lpServiceName;
 LPWSTR lpDisplayName;
 SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSW,*LPENUM_SERVICE_STATUS_PROCESSW;
typedef struct _QUERY_SERVICE_CONFIGA {
 DWORD dwServiceType;
 DWORD dwStartType;
 DWORD dwErrorControl;
 LPSTR lpBinaryPathName;
 LPSTR lpLoadOrderGroup;
 DWORD dwTagId;
 LPSTR lpDependencies;
 LPSTR lpServiceStartName;
 LPSTR lpDisplayName;
} QUERY_SERVICE_CONFIGA,*LPQUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGW {
 DWORD dwServiceType;
 DWORD dwStartType;
 DWORD dwErrorControl;
 LPWSTR lpBinaryPathName;
 LPWSTR lpLoadOrderGroup;
 DWORD dwTagId;
 LPWSTR lpDependencies;
 LPWSTR lpServiceStartName;
 LPWSTR lpDisplayName;
} QUERY_SERVICE_CONFIGW,*LPQUERY_SERVICE_CONFIGW;
typedef struct _QUERY_SERVICE_LOCK_STATUSA {
 DWORD fIsLocked;
 LPSTR lpLockOwner;
 DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA,*LPQUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSW {
 DWORD fIsLocked;
 LPWSTR lpLockOwner;
 DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW,*LPQUERY_SERVICE_LOCK_STATUSW;
typedef void (__attribute__((__stdcall__)) *LPSERVICE_MAIN_FUNCTIONA)(DWORD,LPSTR*);
typedef void (__attribute__((__stdcall__)) *LPSERVICE_MAIN_FUNCTIONW)(DWORD,LPWSTR*);
typedef struct _SERVICE_TABLE_ENTRYA {
 LPSTR lpServiceName;
 LPSERVICE_MAIN_FUNCTIONA lpServiceProc;
} SERVICE_TABLE_ENTRYA,*LPSERVICE_TABLE_ENTRYA;
typedef struct _SERVICE_TABLE_ENTRYW {
 LPWSTR lpServiceName;
 LPSERVICE_MAIN_FUNCTIONW lpServiceProc;
} SERVICE_TABLE_ENTRYW,*LPSERVICE_TABLE_ENTRYW;
typedef HANDLE SC_HANDLE;
typedef SC_HANDLE *LPSC_HANDLE;
typedef PVOID SC_LOCK;
typedef DWORD SERVICE_STATUS_HANDLE;
typedef void(__attribute__((__stdcall__)) *LPHANDLER_FUNCTION)(DWORD);
typedef DWORD (__attribute__((__stdcall__)) *LPHANDLER_FUNCTION_EX)(DWORD,DWORD,LPVOID,LPVOID);
typedef struct _SERVICE_DESCRIPTIONA {
 LPSTR lpDescription;
} SERVICE_DESCRIPTIONA,*LPSERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONW {
 LPWSTR lpDescription;
} SERVICE_DESCRIPTIONW,*LPSERVICE_DESCRIPTIONW;
typedef enum _SC_ACTION_TYPE {
        SC_ACTION_NONE = 0,
        SC_ACTION_RESTART = 1,
        SC_ACTION_REBOOT = 2,
        SC_ACTION_RUN_COMMAND = 3
} SC_ACTION_TYPE;
typedef struct _SC_ACTION {
 SC_ACTION_TYPE Type;
 DWORD Delay;
} SC_ACTION,*LPSC_ACTION;
typedef struct _SERVICE_FAILURE_ACTIONSA {
 DWORD dwResetPeriod;
 LPSTR lpRebootMsg;
 LPSTR lpCommand;
 DWORD cActions;
 SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSA,*LPSERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSW {
 DWORD dwResetPeriod;
 LPWSTR lpRebootMsg;
 LPWSTR lpCommand;
 DWORD cActions;
 SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSW,*LPSERVICE_FAILURE_ACTIONSW;

BOOL __attribute__((__stdcall__)) ChangeServiceConfigA(SC_HANDLE,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,LPDWORD,LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL __attribute__((__stdcall__)) ChangeServiceConfigW(SC_HANDLE,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,LPDWORD,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL __attribute__((__stdcall__)) ChangeServiceConfig2A(SC_HANDLE,DWORD,LPVOID);
BOOL __attribute__((__stdcall__)) ChangeServiceConfig2W(SC_HANDLE,DWORD,LPVOID);
BOOL __attribute__((__stdcall__)) CloseServiceHandle(SC_HANDLE);
BOOL __attribute__((__stdcall__)) ControlService(SC_HANDLE,DWORD,LPSERVICE_STATUS);
SC_HANDLE __attribute__((__stdcall__)) CreateServiceA(SC_HANDLE,LPCSTR,LPCSTR,DWORD,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,PDWORD,LPCSTR,LPCSTR,LPCSTR);
SC_HANDLE __attribute__((__stdcall__)) CreateServiceW(SC_HANDLE,LPCWSTR,LPCWSTR,DWORD,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,PDWORD,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL __attribute__((__stdcall__)) DeleteService(SC_HANDLE);
BOOL __attribute__((__stdcall__)) EnumDependentServicesA(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumDependentServicesW(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumServicesStatusA(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumServicesStatusW(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumServicesStatusExA(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCSTR);
BOOL __attribute__((__stdcall__)) EnumServicesStatusExW(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCWSTR);
BOOL __attribute__((__stdcall__)) GetServiceDisplayNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetServiceDisplayNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetServiceKeyNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
BOOL __attribute__((__stdcall__)) GetServiceKeyNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
SC_LOCK __attribute__((__stdcall__)) LockServiceDatabase(SC_HANDLE);
BOOL __attribute__((__stdcall__)) NotifyBootConfigStatus(BOOL);
SC_HANDLE __attribute__((__stdcall__)) OpenSCManagerA(LPCSTR,LPCSTR,DWORD);
SC_HANDLE __attribute__((__stdcall__)) OpenSCManagerW(LPCWSTR,LPCWSTR,DWORD);
SC_HANDLE __attribute__((__stdcall__)) OpenServiceA(SC_HANDLE,LPCSTR,DWORD);
SC_HANDLE __attribute__((__stdcall__)) OpenServiceW(SC_HANDLE,LPCWSTR,DWORD);
BOOL __attribute__((__stdcall__)) QueryServiceConfigA(SC_HANDLE,LPQUERY_SERVICE_CONFIGA,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) QueryServiceConfigW(SC_HANDLE,LPQUERY_SERVICE_CONFIGW,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) QueryServiceConfig2A(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
BOOL __attribute__((__stdcall__)) QueryServiceConfig2W(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
BOOL __attribute__((__stdcall__)) QueryServiceLockStatusA(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSA,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) QueryServiceLockStatusW(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSW,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) QueryServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,LPDWORD);
BOOL __attribute__((__stdcall__)) QueryServiceStatus(SC_HANDLE,LPSERVICE_STATUS);
BOOL __attribute__((__stdcall__)) QueryServiceStatusEx(SC_HANDLE,SC_STATUS_TYPE,LPBYTE,DWORD,LPDWORD);
SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerA(LPCSTR,LPHANDLER_FUNCTION);
SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerW(LPCWSTR,LPHANDLER_FUNCTION);
SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerExA(LPCSTR,LPHANDLER_FUNCTION_EX,LPVOID);
SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerExW(LPCWSTR,LPHANDLER_FUNCTION_EX,LPVOID);
BOOL __attribute__((__stdcall__)) SetServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL __attribute__((__stdcall__)) SetServiceStatus(SERVICE_STATUS_HANDLE,LPSERVICE_STATUS);
BOOL __attribute__((__stdcall__)) StartServiceA(SC_HANDLE,DWORD,LPCSTR*);
BOOL __attribute__((__stdcall__)) StartServiceCtrlDispatcherA(LPSERVICE_TABLE_ENTRYA);
BOOL __attribute__((__stdcall__)) StartServiceCtrlDispatcherW(LPSERVICE_TABLE_ENTRYW);
BOOL __attribute__((__stdcall__)) StartServiceW(SC_HANDLE,DWORD,LPCWSTR*);
BOOL __attribute__((__stdcall__)) UnlockServiceDatabase(SC_LOCK);
# 274 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsvc.h" 3
typedef ENUM_SERVICE_STATUSA ENUM_SERVICE_STATUS,*LPENUM_SERVICE_STATUS;
typedef ENUM_SERVICE_STATUS_PROCESSA ENUM_SERVICE_STATUS_PROCESS;
typedef LPENUM_SERVICE_STATUS_PROCESSA LPENUM_SERVICE_STATUS_PROCESS;
typedef QUERY_SERVICE_CONFIGA QUERY_SERVICE_CONFIG,*LPQUERY_SERVICE_CONFIG;
typedef QUERY_SERVICE_LOCK_STATUSA QUERY_SERVICE_LOCK_STATUS,*LPQUERY_SERVICE_LOCK_STATUS;
typedef SERVICE_TABLE_ENTRYA SERVICE_TABLE_ENTRY,*LPSERVICE_TABLE_ENTRY;
typedef LPSERVICE_MAIN_FUNCTIONA LPSERVICE_MAIN_FUNCTION;
typedef SERVICE_DESCRIPTIONA SERVICE_DESCRIPTION;
typedef LPSERVICE_DESCRIPTIONA LPSERVICE_DESCRIPTION;
typedef SERVICE_FAILURE_ACTIONSA SERVICE_FAILURE_ACTIONS;
typedef LPSERVICE_FAILURE_ACTIONSA LPSERVICE_FAILURE_ACTIONS;
# 71 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3



# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/cderr.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/cderr.h" 3
# 75 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/dde.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/dde.h" 3
# 23 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/dde.h" 3
typedef struct {
 unsigned short bAppReturnCode:8,reserved:6,fBusy:1,fAck:1;
} DDEACK;
typedef struct {
 unsigned short reserved:14,fDeferUpd:1,fAckReq:1;
 short cfFormat;
} DDEADVISE;
typedef struct {
 unsigned short unused:12,fResponse:1,fRelease:1,reserved:1,fAckReq:1;
 short cfFormat;
 BYTE Value[1];
} DDEDATA;
typedef struct {
 unsigned short unused:13,fRelease:1,fReserved:2;
 short cfFormat;
 BYTE Value[1];
} DDEPOKE;
typedef struct {
        unsigned short unused:13,
                 fRelease:1,
                 fDeferUpd:1,
         fAckReq:1;
    short cfFormat;
} DDELN;

typedef struct {
 unsigned short unused:12,fAck:1,fRelease:1,fReserved:1,fAckReq:1;
    short cfFormat;
    BYTE rgb[1];
} DDEUP;
BOOL __attribute__((__stdcall__)) DdeSetQualityOfService(HWND,const SECURITY_QUALITY_OF_SERVICE*,PSECURITY_QUALITY_OF_SERVICE);
BOOL __attribute__((__stdcall__)) ImpersonateDdeClientWindow(HWND,HWND);
LPARAM __attribute__((__stdcall__)) PackDDElParam(UINT,UINT_PTR,UINT_PTR);
BOOL __attribute__((__stdcall__)) UnpackDDElParam(UINT,LPARAM,PUINT_PTR,PUINT_PTR);
BOOL __attribute__((__stdcall__)) FreeDDElParam(UINT,LPARAM);
LPARAM __attribute__((__stdcall__)) ReuseDDElParam(LPARAM,UINT,UINT,UINT_PTR,UINT_PTR);
# 76 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ddeml.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ddeml.h" 3
# 145 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ddeml.h" 3
typedef HANDLE HCONVLIST;
typedef HANDLE HCONV;
typedef HANDLE HSZ;
typedef HANDLE HDDEDATA;
typedef HDDEDATA __attribute__((__stdcall__)) FNCALLBACK(UINT,UINT,HCONV,HSZ,HSZ,HDDEDATA,DWORD,DWORD);
typedef HDDEDATA(__attribute__((__stdcall__)) *PFNCALLBACK)(UINT,UINT,HCONV,HSZ,HSZ,HDDEDATA,DWORD,DWORD);
typedef struct tagHSZPAIR {
 HSZ hszSvc;
 HSZ hszTopic;
} HSZPAIR, *PHSZPAIR;
typedef struct tagCONVCONTEXT {
 UINT cb;
 UINT wFlags;
 UINT wCountryID;
 int iCodePage;
 DWORD dwLangID;
 DWORD dwSecurity;
 SECURITY_QUALITY_OF_SERVICE qos;
} CONVCONTEXT,*PCONVCONTEXT;
typedef struct tagCONVINFO {
 DWORD cb;
 DWORD hUser;
 HCONV hConvPartner;
 HSZ hszSvcPartner;
 HSZ hszServiceReq;
 HSZ hszTopic;
 HSZ hszItem;
 UINT wFmt;
 UINT wType;
 UINT wStatus;
 UINT wConvst;
 UINT wLastError;
 HCONVLIST hConvList;
 CONVCONTEXT ConvCtxt;
 HWND hwnd;
 HWND hwndPartner;
} CONVINFO,*PCONVINFO;
typedef struct tagDDEML_MSG_HOOK_DATA {
 UINT uiLo;
 UINT uiHi;
 DWORD cbData;
 DWORD Data[8];
} DDEML_MSG_HOOK_DATA;
typedef struct tagMONHSZSTRUCT {
 UINT cb;
 BOOL fsAction;
 DWORD dwTime;
 HSZ hsz;
 HANDLE hTask;
 TCHAR str[1];
} MONHSZSTRUCT, *PMONHSZSTRUCT;
typedef struct tagMONLINKSTRUCT {
 UINT cb;
 DWORD dwTime;
 HANDLE hTask;
 BOOL fEstablished;
 BOOL fNoData;
 HSZ hszSvc;
 HSZ hszTopic;
 HSZ hszItem;
 UINT wFmt;
 BOOL fServer;
 HCONV hConvServer;
 HCONV hConvClient;
} MONLINKSTRUCT, *PMONLINKSTRUCT;
typedef struct tagMONCONVSTRUCT {
 UINT cb;
 BOOL fConnect;
 DWORD dwTime;
 HANDLE hTask;
 HSZ hszSvc;
 HSZ hszTopic;
 HCONV hConvClient;
 HCONV hConvServer;
} MONCONVSTRUCT, *PMONCONVSTRUCT;
typedef struct tagMONCBSTRUCT {
 UINT cb;
 DWORD dwTime;
 HANDLE hTask;
 DWORD dwRet;
 UINT wType;
 UINT wFmt;
 HCONV hConv;
 HSZ hsz1;
 HSZ hsz2;
 HDDEDATA hData;
 ULONG_PTR dwData1;
 ULONG_PTR dwData2;
 CONVCONTEXT cc;
 DWORD cbData;
 DWORD Data[8];
} MONCBSTRUCT, *PMONCBSTRUCT;
typedef struct tagMONERRSTRUCT {
 UINT cb;
 UINT wLastError;
 DWORD dwTime;
 HANDLE hTask;
} MONERRSTRUCT, *PMONERRSTRUCT;
typedef struct tagMONMSGSTRUCT {
 UINT cb;
 HWND hwndTo;
 DWORD dwTime;
 HANDLE hTask;
 UINT wMsg;
 WPARAM wParam;
 LPARAM lParam;
 DDEML_MSG_HOOK_DATA dmhd;
} MONMSGSTRUCT, *PMONMSGSTRUCT;

BOOL __attribute__((__stdcall__)) DdeAbandonTransaction(DWORD,HCONV,DWORD);
PBYTE __attribute__((__stdcall__)) DdeAccessData(HDDEDATA,PDWORD);
HDDEDATA __attribute__((__stdcall__)) DdeAddData(HDDEDATA,PBYTE,DWORD,DWORD);
HDDEDATA __attribute__((__stdcall__)) DdeClientTransaction(PBYTE,DWORD,HCONV,HSZ,UINT,UINT,DWORD,PDWORD);
int __attribute__((__stdcall__)) DdeCmpStringHandles(HSZ,HSZ);
HCONV __attribute__((__stdcall__)) DdeConnect(DWORD,HSZ,HSZ,PCONVCONTEXT);
HCONVLIST __attribute__((__stdcall__)) DdeConnectList(DWORD,HSZ,HSZ,HCONVLIST,PCONVCONTEXT);
HDDEDATA __attribute__((__stdcall__)) DdeCreateDataHandle(DWORD,PBYTE,DWORD,DWORD,HSZ,UINT,UINT);
HSZ __attribute__((__stdcall__)) DdeCreateStringHandleA(DWORD,LPSTR,int);
HSZ __attribute__((__stdcall__)) DdeCreateStringHandleW(DWORD,LPWSTR,int);
BOOL __attribute__((__stdcall__)) DdeDisconnect(HCONV);
BOOL __attribute__((__stdcall__)) DdeDisconnectList(HCONVLIST);
BOOL __attribute__((__stdcall__)) DdeEnableCallback(DWORD,HCONV,UINT);
BOOL __attribute__((__stdcall__)) DdeFreeDataHandle(HDDEDATA);
BOOL __attribute__((__stdcall__)) DdeFreeStringHandle(DWORD,HSZ);
DWORD __attribute__((__stdcall__)) DdeGetData(HDDEDATA,PBYTE,DWORD,DWORD);
UINT __attribute__((__stdcall__)) DdeGetLastError(DWORD);
BOOL __attribute__((__stdcall__)) DdeImpersonateClient(HCONV);
UINT __attribute__((__stdcall__)) DdeInitializeA(PDWORD,PFNCALLBACK,DWORD,DWORD);
UINT __attribute__((__stdcall__)) DdeInitializeW(PDWORD,PFNCALLBACK,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) DdeKeepStringHandle(DWORD,HSZ);
HDDEDATA __attribute__((__stdcall__)) DdeNameService(DWORD,HSZ,HSZ,UINT);
BOOL __attribute__((__stdcall__)) DdePostAdvise(DWORD,HSZ,HSZ);
UINT __attribute__((__stdcall__)) DdeQueryConvInfo(HCONV,DWORD,PCONVINFO);
HCONV __attribute__((__stdcall__)) DdeQueryNextServer(HCONVLIST,HCONV);
DWORD __attribute__((__stdcall__)) DdeQueryStringA(DWORD,HSZ,LPSTR,DWORD,int);
DWORD __attribute__((__stdcall__)) DdeQueryStringW(DWORD,HSZ,LPWSTR,DWORD,int);
HCONV __attribute__((__stdcall__)) DdeReconnect(HCONV);
BOOL __attribute__((__stdcall__)) DdeSetUserHandle(HCONV,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) DdeUnaccessData(HDDEDATA);
BOOL __attribute__((__stdcall__)) DdeUninitialize(DWORD);
# 77 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/dlgs.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/dlgs.h" 3
# 176 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/dlgs.h" 3
typedef struct tagCRGB {
 BYTE bRed;
 BYTE bGreen;
 BYTE bBlue;
 BYTE bExtra;
} CRGB;
# 78 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/imm.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/imm.h" 3
# 244 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/imm.h" 3
typedef DWORD HIMC;
typedef DWORD HIMCC;
typedef HKL *LPHKL;
typedef struct tagCOMPOSITIONFORM {
 DWORD dwStyle;
 POINT ptCurrentPos;
 RECT rcArea;
} COMPOSITIONFORM,*PCOMPOSITIONFORM,*LPCOMPOSITIONFORM;
typedef struct tagCANDIDATEFORM {
 DWORD dwIndex;
 DWORD dwStyle;
 POINT ptCurrentPos;
 RECT rcArea;
} CANDIDATEFORM,*PCANDIDATEFORM,*LPCANDIDATEFORM;
typedef struct tagCANDIDATELIST {
 DWORD dwSize;
 DWORD dwStyle;
 DWORD dwCount;
 DWORD dwSelection;
 DWORD dwPageStart;
 DWORD dwPageSize;
 DWORD dwOffset[1];
} CANDIDATELIST,*PCANDIDATELIST,*LPCANDIDATELIST;
typedef struct tagREGISTERWORDA {
 LPSTR lpReading;
 LPSTR lpWord;
} REGISTERWORDA,*PREGISTERWORDA,*LPREGISTERWORDA;
typedef struct tagREGISTERWORDW {
 LPWSTR lpReading;
 LPWSTR lpWord;
} REGISTERWORDW,*PREGISTERWORDW,*LPREGISTERWORDW;
typedef struct tagSTYLEBUFA {
 DWORD dwStyle;
 CHAR szDescription[32];
} STYLEBUFA,*PSTYLEBUFA,*LPSTYLEBUFA;
typedef struct tagSTYLEBUFW {
 DWORD dwStyle;
 WCHAR szDescription[32];
} STYLEBUFW,*PSTYLEBUFW,*LPSTYLEBUFW;
typedef struct tagIMEMENUITEMINFOA {
 UINT cbSize;
 UINT fType;
 UINT fState;
 UINT wID;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 CHAR szString[80];
 HBITMAP hbmpItem;
} IMEMENUITEMINFOA,*PIMEMENUITEMINFOA,*LPIMEMENUITEMINFOA;
typedef struct tagIMEMENUITEMINFOW {
 UINT cbSize;
 UINT fType;
 UINT fState;
 UINT wID;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 WCHAR szString[80];
 HBITMAP hbmpItem;
} IMEMENUITEMINFOW,*PIMEMENUITEMINFOW,*LPIMEMENUITEMINFOW;
typedef int (__attribute__((__stdcall__)) *REGISTERWORDENUMPROCA)(LPCSTR, DWORD, LPCSTR, LPVOID);
typedef int (__attribute__((__stdcall__)) *REGISTERWORDENUMPROCW)(LPCWSTR, DWORD, LPCWSTR, LPVOID);







typedef REGISTERWORDA REGISTERWORD,*PREGISTERWORD,*LPREGISTERWORD;
typedef STYLEBUFA STYLEBUF,*PSTYLEBUF,*LPSTYLEBUF;
typedef IMEMENUITEMINFOA IMEMENUITEMINFO,*PIMEMENUITEMINFO,*LPIMEMENUITEMINFO;

HKL __attribute__((__stdcall__)) ImmInstallIMEA(LPCSTR,LPCSTR);
HKL __attribute__((__stdcall__)) ImmInstallIMEW(LPCWSTR,LPCWSTR);
HWND __attribute__((__stdcall__)) ImmGetDefaultIMEWnd(HWND);
UINT __attribute__((__stdcall__)) ImmGetDescriptionA(HKL,LPSTR,UINT);
UINT __attribute__((__stdcall__)) ImmGetDescriptionW(HKL,LPWSTR,UINT);
UINT __attribute__((__stdcall__)) ImmGetIMEFileNameA(HKL,LPSTR,UINT);
UINT __attribute__((__stdcall__)) ImmGetIMEFileNameW(HKL,LPWSTR,UINT);
DWORD __attribute__((__stdcall__)) ImmGetProperty(HKL,DWORD);
BOOL __attribute__((__stdcall__)) ImmIsIME(HKL);
BOOL __attribute__((__stdcall__)) ImmSimulateHotKey(HWND,DWORD);
HIMC __attribute__((__stdcall__)) ImmCreateContext(void);
BOOL __attribute__((__stdcall__)) ImmDestroyContext(HIMC);
HIMC __attribute__((__stdcall__)) ImmGetContext(HWND);
BOOL __attribute__((__stdcall__)) ImmReleaseContext(HWND,HIMC);
HIMC __attribute__((__stdcall__)) ImmAssociateContext(HWND,HIMC);
LONG __attribute__((__stdcall__)) ImmGetCompositionStringA(HIMC,DWORD,PVOID,DWORD);
LONG __attribute__((__stdcall__)) ImmGetCompositionStringW(HIMC,DWORD,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) ImmSetCompositionStringA(HIMC,DWORD,PCVOID,DWORD,PCVOID,DWORD);
BOOL __attribute__((__stdcall__)) ImmSetCompositionStringW(HIMC,DWORD,PCVOID,DWORD,PCVOID,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListCountA(HIMC,PDWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListCountW(HIMC,PDWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListA(HIMC,DWORD,PCANDIDATELIST,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListW(HIMC,DWORD,PCANDIDATELIST,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetGuideLineA(HIMC,DWORD,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetGuideLineW(HIMC,DWORD,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) ImmGetConversionStatus(HIMC,LPDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ImmSetConversionStatus(HIMC,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) ImmGetOpenStatus(HIMC);
BOOL __attribute__((__stdcall__)) ImmSetOpenStatus(HIMC,BOOL);

BOOL __attribute__((__stdcall__)) ImmGetCompositionFontA(HIMC,LPLOGFONTA);
BOOL __attribute__((__stdcall__)) ImmGetCompositionFontW(HIMC,LPLOGFONTW);
BOOL __attribute__((__stdcall__)) ImmSetCompositionFontA(HIMC,LPLOGFONTA);
BOOL __attribute__((__stdcall__)) ImmSetCompositionFontW(HIMC,LPLOGFONTW);

BOOL __attribute__((__stdcall__)) ImmConfigureIMEA(HKL,HWND,DWORD,PVOID);
BOOL __attribute__((__stdcall__)) ImmConfigureIMEW(HKL,HWND,DWORD,PVOID);
LRESULT __attribute__((__stdcall__)) ImmEscapeA(HKL,HIMC,UINT,PVOID);
LRESULT __attribute__((__stdcall__)) ImmEscapeW(HKL,HIMC,UINT,PVOID);
DWORD __attribute__((__stdcall__)) ImmGetConversionListA(HKL,HIMC,LPCSTR,PCANDIDATELIST,DWORD,UINT);
DWORD __attribute__((__stdcall__)) ImmGetConversionListW(HKL,HIMC,LPCWSTR,PCANDIDATELIST,DWORD,UINT);
BOOL __attribute__((__stdcall__)) ImmNotifyIME(HIMC,DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) ImmGetStatusWindowPos(HIMC,LPPOINT);
BOOL __attribute__((__stdcall__)) ImmSetStatusWindowPos(HIMC,LPPOINT);
BOOL __attribute__((__stdcall__)) ImmGetCompositionWindow(HIMC,PCOMPOSITIONFORM);
BOOL __attribute__((__stdcall__)) ImmSetCompositionWindow(HIMC,PCOMPOSITIONFORM);
BOOL __attribute__((__stdcall__)) ImmGetCandidateWindow(HIMC,DWORD,PCANDIDATEFORM);
BOOL __attribute__((__stdcall__)) ImmSetCandidateWindow(HIMC,PCANDIDATEFORM);
BOOL __attribute__((__stdcall__)) ImmIsUIMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) ImmIsUIMessageW(HWND,UINT,WPARAM,LPARAM);
UINT __attribute__((__stdcall__)) ImmGetVirtualKey(HWND);
BOOL __attribute__((__stdcall__)) ImmRegisterWordA(HKL,LPCSTR,DWORD,LPCSTR);
BOOL __attribute__((__stdcall__)) ImmRegisterWordW(HKL,LPCWSTR,DWORD,LPCWSTR);
BOOL __attribute__((__stdcall__)) ImmUnregisterWordA(HKL,LPCSTR,DWORD,LPCSTR);
BOOL __attribute__((__stdcall__)) ImmUnregisterWordW(HKL,LPCWSTR,DWORD,LPCWSTR);
UINT __attribute__((__stdcall__)) ImmGetRegisterWordStyleA(HKL,UINT,PSTYLEBUFA);
UINT __attribute__((__stdcall__)) ImmGetRegisterWordStyleW(HKL,UINT,PSTYLEBUFW);
UINT __attribute__((__stdcall__)) ImmEnumRegisterWordA(HKL,REGISTERWORDENUMPROCA,LPCSTR,DWORD,LPCSTR,PVOID);
UINT __attribute__((__stdcall__)) ImmEnumRegisterWordW(HKL,REGISTERWORDENUMPROCW,LPCWSTR,DWORD,LPCWSTR,PVOID);
BOOL __attribute__((__stdcall__)) EnableEUDC(BOOL);
BOOL __attribute__((__stdcall__)) ImmDisableIME(DWORD);
DWORD __attribute__((__stdcall__)) ImmGetImeMenuItemsA(HIMC,DWORD,DWORD,LPIMEMENUITEMINFOA,LPIMEMENUITEMINFOA,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetImeMenuItemsW(HIMC,DWORD,DWORD,LPIMEMENUITEMINFOW,LPIMEMENUITEMINFOW,DWORD);
# 79 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/lzexpand.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/lzexpand.h" 3
# 18 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/lzexpand.h" 3
LONG __attribute__((__stdcall__)) CopyLZFile(INT,INT);
INT __attribute__((__stdcall__)) GetExpandedNameA(LPSTR,LPSTR);
INT __attribute__((__stdcall__)) GetExpandedNameW(LPWSTR,LPWSTR);
void __attribute__((__stdcall__)) LZClose(INT);
LONG __attribute__((__stdcall__)) LZCopy(INT,INT);
void __attribute__((__stdcall__)) LZDone(void);
INT __attribute__((__stdcall__)) LZInit(INT);
INT __attribute__((__stdcall__)) LZOpenFileA(LPSTR,LPOFSTRUCT,WORD);
INT __attribute__((__stdcall__)) LZOpenFileW(LPWSTR,LPOFSTRUCT,WORD);
INT __attribute__((__stdcall__)) LZRead(INT,LPSTR,INT);
LONG __attribute__((__stdcall__)) LZSeek(INT,LONG,INT);
INT __attribute__((__stdcall__)) LZStart(void);
# 80 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/mmsystem.h" 1 3




       
# 6 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/mmsystem.h" 3

#pragma pack(push,1)
# 904 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/mmsystem.h" 3
typedef DWORD MCIERROR;
typedef UINT MCIDEVICEID;
typedef UINT(__attribute__((__stdcall__)) *YIELDPROC)(MCIDEVICEID,DWORD);
typedef UINT MMVERSION;
typedef UINT MMRESULT;
typedef struct mmtime_tag {
 UINT wType;
 union {
  DWORD ms;
  DWORD sample;
  DWORD cb;
  DWORD ticks;
  struct {
   BYTE hour;
   BYTE min;
   BYTE sec;
   BYTE frame;
   BYTE fps;
   BYTE dummy;
   BYTE pad[2];
  } smpte;
  struct {
   DWORD songptrpos;
  } midi;
 } u;
} MMTIME,*PMMTIME,*LPMMTIME;
typedef HANDLE HDRVR;
typedef struct tagDRVCONFIGINFO {
 DWORD dwDCISize;
 LPCWSTR lpszDCISectionName;
 LPCWSTR lpszDCIAliasName;
} DRVCONFIGINFO,*PDRVCONFIGINFO,*LPDRVCONFIGINFO;
typedef struct DRVCONFIGINFOEX {
 DWORD dwDCISize;
 LPCWSTR lpszDCISectionName;
 LPCWSTR lpszDCIAliasName;
 DWORD dnDevNode;
} DRVCONFIGINFOEX,*PDRVCONFIGINFOEX,*LPDRVCONFIGINFOEX;
typedef LRESULT(__attribute__((__stdcall__))* DRIVERPROC)(DWORD,HDRVR,UINT,LPARAM,LPARAM);
typedef void (__attribute__((__stdcall__)) DRVCALLBACK)(HDRVR,UINT,DWORD,DWORD,DWORD);
typedef DRVCALLBACK *LPDRVCALLBACK;
typedef DRVCALLBACK *PDRVCALLBACK;
typedef HANDLE HWAVE;
typedef HANDLE HWAVEIN;
typedef HANDLE HWAVEOUT;
typedef HWAVEIN *LPHWAVEIN;
typedef HWAVEOUT *LPHWAVEOUT;
typedef DRVCALLBACK WAVECALLBACK;
typedef WAVECALLBACK *LPWAVECALLBACK;
typedef struct wavehdr_tag {
 LPSTR lpData;
 DWORD dwBufferLength;
 DWORD dwBytesRecorded;
 DWORD dwUser;
 DWORD dwFlags;
 DWORD dwLoops;
 struct wavehdr_tag *lpNext;
 DWORD reserved;
} WAVEHDR,*PWAVEHDR,*LPWAVEHDR;
typedef struct tagWAVEOUTCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
 DWORD dwSupport;
} WAVEOUTCAPSA,*PWAVEOUTCAPSA,*LPWAVEOUTCAPSA;
typedef struct tagWAVEOUTCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
 DWORD dwSupport;
} WAVEOUTCAPSW,*PWAVEOUTCAPSW,*LPWAVEOUTCAPSW;
typedef struct tagWAVEINCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
} WAVEINCAPSA,*PWAVEINCAPSA,*LPWAVEINCAPSA;
typedef struct tagWAVEINCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
} WAVEINCAPSW,*PWAVEINCAPSW,*LPWAVEINCAPSW;
typedef struct waveformat_tag {
 WORD wFormatTag;
 WORD nChannels;
 DWORD nSamplesPerSec;
 DWORD nAvgBytesPerSec;
 WORD nBlockAlign;
} WAVEFORMAT,*PWAVEFORMAT,*LPWAVEFORMAT;
typedef struct pcmwaveformat_tag {
 WAVEFORMAT wf;
 WORD wBitsPerSample;
} PCMWAVEFORMAT, *PPCMWAVEFORMAT,*LPPCMWAVEFORMAT;


typedef struct tWAVEFORMATEX {
 WORD wFormatTag;
 WORD nChannels;
 DWORD nSamplesPerSec;
 DWORD nAvgBytesPerSec;
 WORD nBlockAlign;
 WORD wBitsPerSample;
 WORD cbSize;
} WAVEFORMATEX,*PWAVEFORMATEX,*LPWAVEFORMATEX;
typedef const WAVEFORMATEX *LPCWAVEFORMATEX;

typedef HANDLE HMIDI;
typedef HANDLE HMIDIIN;
typedef HANDLE HMIDIOUT;
typedef HANDLE HMIDISTRM;
typedef HMIDI *LPHMIDI;
typedef HMIDIIN *LPHMIDIIN;
typedef HMIDIOUT *LPHMIDIOUT;
typedef HMIDISTRM *LPHMIDISTRM;
typedef DRVCALLBACK MIDICALLBACK;
typedef MIDICALLBACK *LPMIDICALLBACK;
typedef WORD PATCHARRAY[128];
typedef WORD *LPPATCHARRAY;
typedef WORD KEYARRAY[128];
typedef WORD *LPKEYARRAY;
typedef struct tagMIDIOUTCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 WORD wTechnology;
 WORD wVoices;
 WORD wNotes;
 WORD wChannelMask;
 DWORD dwSupport;
} MIDIOUTCAPSA,*PMIDIOUTCAPSA,*LPMIDIOUTCAPSA;
typedef struct tagMIDIOUTCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 WORD wTechnology;
 WORD wVoices;
 WORD wNotes;
 WORD wChannelMask;
 DWORD dwSupport;
} MIDIOUTCAPSW,*PMIDIOUTCAPSW,*LPMIDIOUTCAPSW;
typedef struct tagMIDIINCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD dwSupport;
} MIDIINCAPSA,*PMIDIINCAPSA,*LPMIDIINCAPSA;
typedef struct tagMIDIINCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD dwSupport;
} MIDIINCAPSW,*PMIDIINCAPSW,*NPMIDIINCAPSW,*LPMIDIINCAPSW;
typedef struct midihdr_tag {
 LPSTR lpData;
 DWORD dwBufferLength;
 DWORD dwBytesRecorded;
 DWORD dwUser;
 DWORD dwFlags;
 struct midihdr_tag *lpNext;
 DWORD reserved;
 DWORD dwOffset;
 DWORD dwReserved[8];
} MIDIHDR,*PMIDIHDR,*LPMIDIHDR;
typedef struct midievent_tag {
 DWORD dwDeltaTime;
 DWORD dwStreamID;
 DWORD dwEvent;
 DWORD dwParms[1];
} MIDIEVENT;
typedef struct midistrmbuffver_tag {
 DWORD dwVersion;
 DWORD dwMid;
 DWORD dwOEMVersion;
} MIDISTRMBUFFVER;
typedef struct midiproptimediv_tag {
 DWORD cbStruct;
 DWORD dwTimeDiv;
} MIDIPROPTIMEDIV,*LPMIDIPROPTIMEDIV;
typedef struct midiproptempo_tag {
 DWORD cbStruct;
 DWORD dwTempo;
} MIDIPROPTEMPO,*LPMIDIPROPTEMPO;
typedef struct tagAUXCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 WORD wTechnology;
 WORD wReserved1;
 DWORD dwSupport;
} AUXCAPSA,*PAUXCAPSA,*LPAUXCAPSA;
typedef struct tagAUXCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 WORD wTechnology;
 WORD wReserved1;
 DWORD dwSupport;
} AUXCAPSW,*PAUXCAPSW,*LPAUXCAPSW;
typedef HANDLE HMIXEROBJ;
typedef HMIXEROBJ *LPHMIXEROBJ;
typedef HANDLE HMIXER;
typedef HMIXER *LPHMIXER;
typedef struct tagMIXERCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD fdwSupport;
 DWORD cDestinations;
} MIXERCAPSA,*PMIXERCAPSA,*LPMIXERCAPSA;
typedef struct tagMIXERCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD fdwSupport;
 DWORD cDestinations;
} MIXERCAPSW,*PMIXERCAPSW,*LPMIXERCAPSW;
typedef struct tagMIXERLINEA {
 DWORD cbStruct;
 DWORD dwDestination;
 DWORD dwSource;
 DWORD dwLineID;
 DWORD fdwLine;
 DWORD dwUser;
 DWORD dwComponentType;
 DWORD cChannels;
 DWORD cConnections;
 DWORD cControls;
 CHAR szShortName[16];
 CHAR szName[64];
 struct {
  DWORD dwType;
  DWORD dwDeviceID;
  WORD wMid;
  WORD wPid;
  MMVERSION vDriverVersion;
  CHAR szPname[32];
 } Target;
} MIXERLINEA,*PMIXERLINEA,*LPMIXERLINEA;
typedef struct tagMIXERLINEW {
 DWORD cbStruct;
 DWORD dwDestination;
 DWORD dwSource;
 DWORD dwLineID;
 DWORD fdwLine;
 DWORD dwUser;
 DWORD dwComponentType;
 DWORD cChannels;
 DWORD cConnections;
 DWORD cControls;
 WCHAR szShortName[16];
 WCHAR szName[64];
 struct {
  DWORD dwType;
  DWORD dwDeviceID;
  WORD wMid;
  WORD wPid;
  MMVERSION vDriverVersion;
  WCHAR szPname[32];
 } Target;
} MIXERLINEW,*PMIXERLINEW,*LPMIXERLINEW;
typedef struct tagMIXERCONTROLA {
 DWORD cbStruct;
 DWORD dwControlID;
 DWORD dwControlType;
 DWORD fdwControl;
 DWORD cMultipleItems;
 CHAR szShortName[16];
 CHAR szName[64];
 union {
  __extension__ struct {
   LONG lMinimum;
   LONG lMaximum;
  };
  __extension__ struct {
   DWORD dwMinimum;
   DWORD dwMaximum;
  };
  DWORD dwReserved[6];
 } Bounds;
 union {
  DWORD cSteps;
  DWORD cbCustomData;
  DWORD dwReserved[6];
 } Metrics;
} MIXERCONTROLA,*PMIXERCONTROLA,*LPMIXERCONTROLA;
typedef struct tagMIXERCONTROLW {
 DWORD cbStruct;
 DWORD dwControlID;
 DWORD dwControlType;
 DWORD fdwControl;
 DWORD cMultipleItems;
 WCHAR szShortName[16];
 WCHAR szName[64];
 union {
  __extension__ struct {
   LONG lMinimum;
   LONG lMaximum;
  };
  __extension__ struct {
   DWORD dwMinimum;
   DWORD dwMaximum;
  };
  DWORD dwReserved[6];
 } Bounds;
 union {
  DWORD cSteps;
  DWORD cbCustomData;
  DWORD dwReserved[6];
 } Metrics;
} MIXERCONTROLW,*PMIXERCONTROLW,*LPMIXERCONTROLW;
typedef struct tagMIXERLINECONTROLSA {
 DWORD cbStruct;
 DWORD dwLineID;
 __extension__ union {
  DWORD dwControlID;
  DWORD dwControlType;
 } ;
 DWORD cControls;
 DWORD cbmxctrl;
 LPMIXERCONTROLA pamxctrl;
} MIXERLINECONTROLSA,*PMIXERLINECONTROLSA,*LPMIXERLINECONTROLSA;
typedef struct tagMIXERLINECONTROLSW {
 DWORD cbStruct;
 DWORD dwLineID;
 __extension__ union {
  DWORD dwControlID;
  DWORD dwControlType;
 } ;
 DWORD cControls;
 DWORD cbmxctrl;
 LPMIXERCONTROLW pamxctrl;
} MIXERLINECONTROLSW,*PMIXERLINECONTROLSW,*LPMIXERLINECONTROLSW;
typedef struct tMIXERCONTROLDETAILS {
 DWORD cbStruct;
 DWORD dwControlID;
 DWORD cChannels;
 __extension__ union {
  HWND hwndOwner;
  DWORD cMultipleItems;
 } ;
 DWORD cbDetails;
 PVOID paDetails;
} MIXERCONTROLDETAILS,*PMIXERCONTROLDETAILS,*LPMIXERCONTROLDETAILS;
typedef struct tagMIXERCONTROLDETAILS_LISTTEXTA {
 DWORD dwParam1;
 DWORD dwParam2;
 CHAR szName[64];
} MIXERCONTROLDETAILS_LISTTEXTA,*PMIXERCONTROLDETAILS_LISTTEXTA,*LPMIXERCONTROLDETAILS_LISTTEXTA;
typedef struct tagMIXERCONTROLDETAILS_LISTTEXTW {
 DWORD dwParam1;
 DWORD dwParam2;
 WCHAR szName[64];
} MIXERCONTROLDETAILS_LISTTEXTW,*PMIXERCONTROLDETAILS_LISTTEXTW,*LPMIXERCONTROLDETAILS_LISTTEXTW;
typedef struct tMIXERCONTROLDETAILS_BOOLEAN {
 LONG fValue;
} MIXERCONTROLDETAILS_BOOLEAN,*PMIXERCONTROLDETAILS_BOOLEAN,*LPMIXERCONTROLDETAILS_BOOLEAN;
typedef struct tMIXERCONTROLDETAILS_SIGNED {
 LONG lValue;
} MIXERCONTROLDETAILS_SIGNED,*PMIXERCONTROLDETAILS_SIGNED,*LPMIXERCONTROLDETAILS_SIGNED;
typedef struct tMIXERCONTROLDETAILS_UNSIGNED {
 DWORD dwValue;
} MIXERCONTROLDETAILS_UNSIGNED,*PMIXERCONTROLDETAILS_UNSIGNED,*LPMIXERCONTROLDETAILS_UNSIGNED;
typedef void(__attribute__((__stdcall__)) TIMECALLBACK)(UINT,UINT,DWORD,DWORD,DWORD);
typedef TIMECALLBACK *LPTIMECALLBACK;
typedef struct timecaps_tag {
 UINT wPeriodMin;
 UINT wPeriodMax;
} TIMECAPS,*PTIMECAPS,*LPTIMECAPS;
typedef struct tagJOYCAPSA {
 WORD wMid;
 WORD wPid;
 CHAR szPname[32];
 UINT wXmin;
 UINT wXmax;
 UINT wYmin;
 UINT wYmax;
 UINT wZmin;
 UINT wZmax;
 UINT wNumButtons;
 UINT wPeriodMin;
 UINT wPeriodMax;
 UINT wRmin;
 UINT wRmax;
 UINT wUmin;
 UINT wUmax;
 UINT wVmin;
 UINT wVmax;
 UINT wCaps;
 UINT wMaxAxes;
 UINT wNumAxes;
 UINT wMaxButtons;
 CHAR szRegKey[32];
 CHAR szOEMVxD[260];
} JOYCAPSA,*PJOYCAPSA,*LPJOYCAPSA;
typedef struct tagJOYCAPSW {
 WORD wMid;
 WORD wPid;
 WCHAR szPname[32];
 UINT wXmin;
 UINT wXmax;
 UINT wYmin;
 UINT wYmax;
 UINT wZmin;
 UINT wZmax;
 UINT wNumButtons;
 UINT wPeriodMin;
 UINT wPeriodMax;
 UINT wRmin;
 UINT wRmax;
 UINT wUmin;
 UINT wUmax;
 UINT wVmin;
 UINT wVmax;
 UINT wCaps;
 UINT wMaxAxes;
 UINT wNumAxes;
 UINT wMaxButtons;
 WCHAR szRegKey[32];
 WCHAR szOEMVxD[260];
} JOYCAPSW,*PJOYCAPSW,*LPJOYCAPSW;
typedef struct joyinfo_tag {
 UINT wXpos;
 UINT wYpos;
 UINT wZpos;
 UINT wButtons;
} JOYINFO,*PJOYINFO,*LPJOYINFO;
typedef struct joyinfoex_tag {
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwXpos;
 DWORD dwYpos;
 DWORD dwZpos;
 DWORD dwRpos;
 DWORD dwUpos;
 DWORD dwVpos;
 DWORD dwButtons;
 DWORD dwButtonNumber;
 DWORD dwPOV;
 DWORD dwReserved1;
 DWORD dwReserved2;
} JOYINFOEX,*PJOYINFOEX,*LPJOYINFOEX;
typedef DWORD FOURCC;
typedef char *HPSTR;
typedef HANDLE HMMIO;
typedef LRESULT (__attribute__((__stdcall__)) MMIOPROC)(LPSTR,UINT,LPARAM,LPARAM);
typedef MMIOPROC *LPMMIOPROC;
typedef struct _MMIOINFO {
 DWORD dwFlags;
 FOURCC fccIOProc;
 LPMMIOPROC pIOProc;
 UINT wErrorRet;
 HTASK htask;
 LONG cchBuffer;
 HPSTR pchBuffer;
 HPSTR pchNext;
 HPSTR pchEndRead;
 HPSTR pchEndWrite;
 LONG lBufOffset;
 LONG lDiskOffset;
 DWORD adwInfo[3];
 DWORD dwReserved1;
 DWORD dwReserved2;
 HMMIO hmmio;
} MMIOINFO,*PMMIOINFO,*LPMMIOINFO;
typedef const MMIOINFO *LPCMMIOINFO;
typedef struct _MMCKINFO {
 FOURCC ckid;
 DWORD cksize;
 FOURCC fccType;
 DWORD dwDataOffset;
 DWORD dwFlags;
} MMCKINFO,*PMMCKINFO,*LPMMCKINFO;
typedef const MMCKINFO *LPCMMCKINFO;
typedef struct tagMCI_GENERIC_PARMS {
 DWORD dwCallback;
} MCI_GENERIC_PARMS,*PMCI_GENERIC_PARMS,*LPMCI_GENERIC_PARMS;
typedef struct tagMCI_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
} MCI_OPEN_PARMSA,*PMCI_OPEN_PARMSA,*LPMCI_OPEN_PARMSA;
typedef struct tagMCI_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
} MCI_OPEN_PARMSW,*PMCI_OPEN_PARMSW,*LPMCI_OPEN_PARMSW;
typedef struct tagMCI_PLAY_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
} MCI_PLAY_PARMS,*PMCI_PLAY_PARMS,*LPMCI_PLAY_PARMS;
typedef struct tagMCI_SEEK_PARMS {
 DWORD dwCallback;
 DWORD dwTo;
} MCI_SEEK_PARMS, *PMCI_SEEK_PARMS,*LPMCI_SEEK_PARMS;
typedef struct tagMCI_STATUS_PARMS {
 DWORD dwCallback;
 DWORD dwReturn;
 DWORD dwItem;
 DWORD dwTrack;
} MCI_STATUS_PARMS,*PMCI_STATUS_PARMS,*LPMCI_STATUS_PARMS;
typedef struct tagMCI_INFO_PARMSA {
 DWORD dwCallback;
 LPSTR lpstrReturn;
 DWORD dwRetSize;
} MCI_INFO_PARMSA,*LPMCI_INFO_PARMSA;
typedef struct tagMCI_INFO_PARMSW {
 DWORD dwCallback;
 LPWSTR lpstrReturn;
 DWORD dwRetSize;
} MCI_INFO_PARMSW,*LPMCI_INFO_PARMSW;
typedef struct tagMCI_GETDEVCAPS_PARMS {
 DWORD dwCallback;
 DWORD dwReturn;
 DWORD dwItem;
} MCI_GETDEVCAPS_PARMS,*PMCI_GETDEVCAPS_PARMS,*LPMCI_GETDEVCAPS_PARMS;
typedef struct tagMCI_SYSINFO_PARMSA {
 DWORD dwCallback;
 LPSTR lpstrReturn;
 DWORD dwRetSize;
 DWORD dwNumber;
 UINT wDeviceType;
} MCI_SYSINFO_PARMSA,*PMCI_SYSINFO_PARMSA,*LPMCI_SYSINFO_PARMSA;
typedef struct tagMCI_SYSINFO_PARMSW {
 DWORD dwCallback;
 LPWSTR lpstrReturn;
 DWORD dwRetSize;
 DWORD dwNumber;
 UINT wDeviceType;
} MCI_SYSINFO_PARMSW,*PMCI_SYSINFO_PARMSW,*LPMCI_SYSINFO_PARMSW;
typedef struct tagMCI_SET_PARMS {
 DWORD dwCallback;
 DWORD dwTimeFormat;
 DWORD dwAudio;
} MCI_SET_PARMS,*PMCI_SET_PARMS,*LPMCI_SET_PARMS;
typedef struct tagMCI_BREAK_PARMS {
 DWORD dwCallback;
 int nVirtKey;
 HWND hwndBreak;
} MCI_BREAK_PARMS,*PMCI_BREAK_PARMS,*LPMCI_BREAK_PARMS;
typedef struct tagMCI_SAVE_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
} MCI_SAVE_PARMSA,*PMCI_SAVE_PARMSA,*LPMCI_SAVE_PARMSA;
typedef struct tagMCI_SAVE_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
} MCI_SAVE_PARMSW,*PMCI_SAVE_PARMSW,*LPMCI_SAVE_PARMSW;
typedef struct tagMCI_LOAD_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
} MCI_LOAD_PARMSA,*PMCI_LOAD_PARMSA,*LPMCI_LOAD_PARMSA;
typedef struct tagMCI_LOAD_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
} MCI_LOAD_PARMSW,*PMCI_LOAD_PARMSW,*LPMCI_LOAD_PARMSW;
typedef struct tagMCI_RECORD_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
} MCI_RECORD_PARMS,*LPMCI_RECORD_PARMS;
typedef struct tagMCI_VD_PLAY_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
 DWORD dwSpeed;
} MCI_VD_PLAY_PARMS,*PMCI_VD_PLAY_PARMS,*LPMCI_VD_PLAY_PARMS;
typedef struct tagMCI_VD_STEP_PARMS {
 DWORD dwCallback;
 DWORD dwFrames;
} MCI_VD_STEP_PARMS,*PMCI_VD_STEP_PARMS,*LPMCI_VD_STEP_PARMS;
typedef struct tagMCI_VD_ESCAPE_PARMSA {
 DWORD dwCallback;
 LPCSTR lpstrCommand;
} MCI_VD_ESCAPE_PARMSA,*PMCI_VD_ESCAPE_PARMSA,*LPMCI_VD_ESCAPE_PARMSA;
typedef struct tagMCI_VD_ESCAPE_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpstrCommand;
} MCI_VD_ESCAPE_PARMSW,*PMCI_VD_ESCAPE_PARMSW,*LPMCI_VD_ESCAPE_PARMSW;
typedef struct tagMCI_WAVE_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
 DWORD dwBufferSeconds;
} MCI_WAVE_OPEN_PARMSA,*PMCI_WAVE_OPEN_PARMSA,*LPMCI_WAVE_OPEN_PARMSA;
typedef struct tagMCI_WAVE_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
 DWORD dwBufferSeconds;
} MCI_WAVE_OPEN_PARMSW,*PMCI_WAVE_OPEN_PARMSW,*LPMCI_WAVE_OPEN_PARMSW;
typedef struct tagMCI_WAVE_DELETE_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
} MCI_WAVE_DELETE_PARMS, *PMCI_WAVE_DELETE_PARMS,*LPMCI_WAVE_DELETE_PARMS;
typedef struct tagMCI_WAVE_SET_PARMS {
 DWORD dwCallback;
 DWORD dwTimeFormat;
 DWORD dwAudio;
 UINT wInput;
 UINT wOutput;
 WORD wFormatTag;
 WORD wReserved2;
 WORD nChannels;
 WORD wReserved3;
 DWORD nSamplesPerSec;
 DWORD nAvgBytesPerSec;
 WORD nBlockAlign;
 WORD wReserved4;
 WORD wBitsPerSample;
 WORD wReserved5;
} MCI_WAVE_SET_PARMS,*PMCI_WAVE_SET_PARMS,*LPMCI_WAVE_SET_PARMS;

LRESULT __attribute__((__stdcall__)) CloseDriver(HDRVR,LONG,LONG);
HDRVR __attribute__((__stdcall__)) OpenDriver(LPCWSTR,LPCWSTR,LONG);
LRESULT __attribute__((__stdcall__)) SendDriverMessage(HDRVR,UINT,LONG,LONG);
HMODULE __attribute__((__stdcall__)) DrvGetModuleHandle(HDRVR);
HMODULE __attribute__((__stdcall__)) GetDriverModuleHandle(HDRVR);
LRESULT __attribute__((__stdcall__)) DefDriverProc(DWORD,HDRVR,UINT,LPARAM,LPARAM);
UINT __attribute__((__stdcall__)) mmsystemGetVersion(void);

BOOL __attribute__((__stdcall__)) sndPlaySoundA(LPCSTR,UINT);
BOOL __attribute__((__stdcall__)) sndPlaySoundW(LPCWSTR,UINT);
BOOL __attribute__((__stdcall__)) PlaySoundA(LPCSTR,HMODULE,DWORD);
BOOL __attribute__((__stdcall__)) PlaySoundW(LPCWSTR,HMODULE,DWORD);
UINT __attribute__((__stdcall__)) waveOutGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) waveOutGetDevCapsA(UINT,LPWAVEOUTCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetDevCapsW(UINT,LPWAVEOUTCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetVolume(HWAVEOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) waveOutSetVolume(HWAVEOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutOpen(LPHWAVEOUT,UINT,LPCWAVEFORMATEX,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutClose(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutPrepareHeader(HWAVEOUT,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutUnprepareHeader(HWAVEOUT,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutWrite(HWAVEOUT,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutPause(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutRestart(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutReset(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutBreakLoop(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutGetPosition(HWAVEOUT,LPMMTIME,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetPitch(HWAVEOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) waveOutSetPitch(HWAVEOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutGetPlaybackRate(HWAVEOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) waveOutSetPlaybackRate(HWAVEOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutGetID(HWAVEOUT,LPUINT);
MMRESULT __attribute__((__stdcall__)) waveOutMessage(HWAVEOUT,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) waveInGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) waveInGetDevCapsA(UINT,LPWAVEINCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetDevCapsW(UINT,LPWAVEINCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInOpen(LPHWAVEIN,UINT,LPCWAVEFORMATEX,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) waveInClose(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInPrepareHeader(HWAVEIN,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInUnprepareHeader(HWAVEIN,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInAddBuffer(HWAVEIN,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInStart(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInStop(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInReset(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInGetPosition(HWAVEIN,LPMMTIME,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetID(HWAVEIN,LPUINT);
MMRESULT __attribute__((__stdcall__)) waveInMessage(HWAVEIN,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) midiOutGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) midiStreamOpen(LPHMIDISTRM,LPUINT,DWORD,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) midiStreamClose(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiStreamProperty(HMIDISTRM,LPBYTE,DWORD);
MMRESULT __attribute__((__stdcall__)) midiStreamPosition(HMIDISTRM,LPMMTIME,UINT);
MMRESULT __attribute__((__stdcall__)) midiStreamOut(HMIDISTRM,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiStreamPause(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiStreamRestart(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiStreamStop(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiConnect(HMIDI,HMIDIOUT,PVOID);
MMRESULT __attribute__((__stdcall__)) midiDisconnect(HMIDI,HMIDIOUT,PVOID);
MMRESULT __attribute__((__stdcall__)) midiOutGetDevCapsA(UINT,LPMIDIOUTCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetDevCapsW(UINT,LPMIDIOUTCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetVolume(HMIDIOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) midiOutSetVolume(HMIDIOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) midiOutGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutOpen(LPHMIDIOUT,UINT,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) midiOutClose(HMIDIOUT);
MMRESULT __attribute__((__stdcall__)) midiOutPrepareHeader(HMIDIOUT,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutUnprepareHeader(HMIDIOUT,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutShortMsg(HMIDIOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) midiOutLongMsg(HMIDIOUT,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutReset(HMIDIOUT);
MMRESULT __attribute__((__stdcall__)) midiOutCachePatches(HMIDIOUT,UINT,LPWORD,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutCacheDrumPatches(HMIDIOUT,UINT,LPWORD,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetID(HMIDIOUT,LPUINT);
MMRESULT __attribute__((__stdcall__)) midiOutMessage(HMIDIOUT,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) midiInGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) midiInGetDevCapsA(UINT,LPMIDIINCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) midiInGetDevCapsW(UINT,LPMIDIINCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) midiInGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInOpen(LPHMIDIIN,UINT,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) midiInClose(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInPrepareHeader(HMIDIIN,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInUnprepareHeader(HMIDIIN,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInAddBuffer(HMIDIIN,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInStart(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInStop(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInReset(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInGetID(HMIDIIN,LPUINT);
MMRESULT __attribute__((__stdcall__)) midiInMessage(HMIDIIN,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) auxGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) auxGetDevCapsA(UINT,LPAUXCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) auxGetDevCapsW(UINT,LPAUXCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) auxSetVolume(UINT,DWORD);
MMRESULT __attribute__((__stdcall__)) auxGetVolume(UINT,PDWORD);
MMRESULT __attribute__((__stdcall__)) auxOutMessage(UINT,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) mixerGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) mixerGetDevCapsA(UINT,LPMIXERCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) mixerGetDevCapsW(UINT,LPMIXERCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) mixerOpen(LPHMIXER,UINT,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerClose(HMIXER);
DWORD __attribute__((__stdcall__)) mixerMessage(HMIXER,UINT,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineInfoA(HMIXEROBJ,LPMIXERLINEA,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineInfoW(HMIXEROBJ,LPMIXERLINEW,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetID(HMIXEROBJ,PUINT,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineControlsA(HMIXEROBJ,LPMIXERLINECONTROLSA,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineControlsW(HMIXEROBJ,LPMIXERLINECONTROLSW,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetControlDetailsA(HMIXEROBJ,LPMIXERCONTROLDETAILS,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetControlDetailsW(HMIXEROBJ,LPMIXERCONTROLDETAILS,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerSetControlDetails(HMIXEROBJ,LPMIXERCONTROLDETAILS,DWORD);
MMRESULT __attribute__((__stdcall__)) timeGetSystemTime(LPMMTIME,UINT);
DWORD __attribute__((__stdcall__)) timeGetTime(void);
MMRESULT __attribute__((__stdcall__)) timeSetEvent(UINT,UINT,LPTIMECALLBACK,DWORD,UINT);
MMRESULT __attribute__((__stdcall__)) timeKillEvent(UINT);
MMRESULT __attribute__((__stdcall__)) timeGetDevCaps(LPTIMECAPS,UINT);
MMRESULT __attribute__((__stdcall__)) timeBeginPeriod(UINT);
MMRESULT __attribute__((__stdcall__)) timeEndPeriod(UINT);
UINT __attribute__((__stdcall__)) joyGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) joyGetDevCapsA(UINT,LPJOYCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) joyGetDevCapsW(UINT,LPJOYCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) joyGetPos(UINT,LPJOYINFO);
MMRESULT __attribute__((__stdcall__)) joyGetPosEx(UINT,LPJOYINFOEX);
MMRESULT __attribute__((__stdcall__)) joyGetThreshold(UINT,LPUINT);
MMRESULT __attribute__((__stdcall__)) joyReleaseCapture(UINT);
MMRESULT __attribute__((__stdcall__)) joySetCapture(HWND,UINT,UINT,BOOL);
MMRESULT __attribute__((__stdcall__)) joySetThreshold(UINT,UINT);
FOURCC __attribute__((__stdcall__)) mmioStringToFOURCCA(LPCSTR,UINT);
FOURCC __attribute__((__stdcall__)) mmioStringToFOURCCW(LPCWSTR,UINT);
LPMMIOPROC __attribute__((__stdcall__)) mmioInstallIOProcA(FOURCC,LPMMIOPROC,DWORD);
LPMMIOPROC __attribute__((__stdcall__)) mmioInstallIOProcW(FOURCC,LPMMIOPROC,DWORD);
HMMIO __attribute__((__stdcall__)) mmioOpenA(LPSTR,LPMMIOINFO,DWORD);
HMMIO __attribute__((__stdcall__)) mmioOpenW(LPWSTR,LPMMIOINFO,DWORD);
MMRESULT __attribute__((__stdcall__)) mmioRenameA(LPCSTR,LPCSTR,LPCMMIOINFO,DWORD);
MMRESULT __attribute__((__stdcall__)) mmioRenameW(LPCWSTR,LPCWSTR,LPCMMIOINFO,DWORD);
MMRESULT __attribute__((__stdcall__)) mmioClose(HMMIO,UINT);
LONG __attribute__((__stdcall__)) mmioRead(HMMIO,HPSTR,LONG);
LONG __attribute__((__stdcall__)) mmioWrite(HMMIO,LPCSTR,LONG);
LONG __attribute__((__stdcall__)) mmioSeek(HMMIO,LONG,int);
MMRESULT __attribute__((__stdcall__)) mmioGetInfo(HMMIO,LPMMIOINFO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioSetInfo(HMMIO,LPCMMIOINFO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioSetBuffer(HMMIO,LPSTR,LONG,UINT);
MMRESULT __attribute__((__stdcall__)) mmioFlush(HMMIO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioAdvance(HMMIO,LPMMIOINFO,UINT);
LRESULT __attribute__((__stdcall__)) mmioSendMessage(HMMIO,UINT,LPARAM,LPARAM);
MMRESULT __attribute__((__stdcall__)) mmioDescend(HMMIO,LPMMCKINFO,const MMCKINFO*,UINT);
MMRESULT __attribute__((__stdcall__)) mmioAscend(HMMIO,LPMMCKINFO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioCreateChunk(HMMIO,LPMMCKINFO,UINT);
MCIERROR __attribute__((__stdcall__)) mciSendCommandA(MCIDEVICEID,UINT,DWORD,DWORD);
MCIERROR __attribute__((__stdcall__)) mciSendCommandW(MCIDEVICEID,UINT,DWORD,DWORD);
MCIERROR __attribute__((__stdcall__)) mciSendStringA(LPCSTR,LPSTR,UINT,HWND);
MCIERROR __attribute__((__stdcall__)) mciSendStringW(LPCWSTR,LPWSTR,UINT,HWND);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDA(LPCSTR);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDW(LPCWSTR);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDFromElementIDA(DWORD,LPCSTR);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDFromElementIDW(DWORD,LPCWSTR);
BOOL __attribute__((__stdcall__)) mciGetErrorStringA(MCIERROR,LPSTR,UINT);
BOOL __attribute__((__stdcall__)) mciGetErrorStringW(MCIERROR,LPWSTR,UINT);
BOOL __attribute__((__stdcall__)) mciSetYieldProc(MCIDEVICEID,YIELDPROC,DWORD);
HTASK __attribute__((__stdcall__)) mciGetCreatorTask(MCIDEVICEID);
YIELDPROC __attribute__((__stdcall__)) mciGetYieldProc(MCIDEVICEID,PDWORD);

typedef struct tagMCI_SEQ_SET_PARMS {
 DWORD dwCallback;
 DWORD dwTimeFormat;
 DWORD dwAudio;
 DWORD dwTempo;
 DWORD dwPort;
 DWORD dwSlave;
 DWORD dwMaster;
 DWORD dwOffset;
} MCI_SEQ_SET_PARMS,*PMCI_SEQ_SET_PARMS,*LPMCI_SEQ_SET_PARMS;
typedef struct tagMCI_ANIM_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_ANIM_OPEN_PARMSA,*PMCI_ANIM_OPEN_PARMSA,*LPMCI_ANIM_OPEN_PARMSA;
typedef struct tagMCI_ANIM_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_ANIM_OPEN_PARMSW,*PMCI_ANIM_OPEN_PARMSW,*LPMCI_ANIM_OPEN_PARMSW;
typedef struct tagMCI_ANIM_PLAY_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
 DWORD dwSpeed;
} MCI_ANIM_PLAY_PARMS,*PMCI_ANIM_PLAY_PARMS,*LPMCI_ANIM_PLAY_PARMS;
typedef struct tagMCI_ANIM_STEP_PARMS {
 DWORD dwCallback;
 DWORD dwFrames;
} MCI_ANIM_STEP_PARMS,*PMCI_ANIM_STEP_PARMS,*LPMCI_ANIM_STEP_PARMS;
typedef struct tagMCI_ANIM_WINDOW_PARMSA {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCSTR lpstrText;
} MCI_ANIM_WINDOW_PARMSA,*PMCI_ANIM_WINDOW_PARMSA,*LPMCI_ANIM_WINDOW_PARMSA;
typedef struct tagMCI_ANIM_WINDOW_PARMSW {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCWSTR lpstrText;
} MCI_ANIM_WINDOW_PARMSW,*PMCI_ANIM_WINDOW_PARMSW,*LPMCI_ANIM_WINDOW_PARMSW;
typedef struct tagMCI_ANIM_RECT_PARMS {
 DWORD dwCallback;




 RECT rc;

} MCI_ANIM_RECT_PARMS,*PMCI_ANIM_RECT_PARMS,*LPMCI_ANIM_RECT_PARMS;
typedef struct tagMCI_ANIM_UPDATE_PARMS {
 DWORD dwCallback;
 RECT rc;
 HDC hDC;
} MCI_ANIM_UPDATE_PARMS,*PMCI_ANIM_UPDATE_PARMS,*LPMCI_ANIM_UPDATE_PARMS;
typedef struct tagMCI_OVLY_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_OVLY_OPEN_PARMSA,*PMCI_OVLY_OPEN_PARMSA,*LPMCI_OVLY_OPEN_PARMSA;
typedef struct tagMCI_OVLY_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_OVLY_OPEN_PARMSW,*PMCI_OVLY_OPEN_PARMSW,*LPMCI_OVLY_OPEN_PARMSW;
typedef struct tagMCI_OVLY_WINDOW_PARMSA {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCSTR lpstrText;
} MCI_OVLY_WINDOW_PARMSA,*PMCI_OVLY_WINDOW_PARMSA,*LPMCI_OVLY_WINDOW_PARMSA;
typedef struct tagMCI_OVLY_WINDOW_PARMSW {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCWSTR lpstrText;
} MCI_OVLY_WINDOW_PARMSW,*PMCI_OVLY_WINDOW_PARMSW,*LPMCI_OVLY_WINDOW_PARMSW;
typedef struct tagMCI_OVLY_RECT_PARMS {
 DWORD dwCallback;




 RECT rc;

} MCI_OVLY_RECT_PARMS,*PMCI_OVLY_RECT_PARMS,*LPMCI_OVLY_RECT_PARMS;
typedef struct tagMCI_OVLY_SAVE_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
 RECT rc;
} MCI_OVLY_SAVE_PARMSA,*PMCI_OVLY_SAVE_PARMSA,*LPMCI_OVLY_SAVE_PARMSA;
typedef struct tagMCI_OVLY_SAVE_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
 RECT rc;
} MCI_OVLY_SAVE_PARMSW,*PMCI_OVLY_SAVE_PARMSW,*LPMCI_OVLY_SAVE_PARMSW;
typedef struct tagMCI_OVLY_LOAD_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
 RECT rc;
} MCI_OVLY_LOAD_PARMSA,*PMCI_OVLY_LOAD_PARMSA,*LPMCI_OVLY_LOAD_PARMSA;
typedef struct tagMCI_OVLY_LOAD_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
 RECT rc;
} MCI_OVLY_LOAD_PARMSW,*PMCI_OVLY_LOAD_PARMSW,*LPMCI_OVLY_LOAD_PARMSW;
# 1888 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/mmsystem.h" 3
typedef WAVEOUTCAPSA WAVEOUTCAPS,*PWAVEOUTCAPS,*LPWAVEOUTCAPS;
typedef WAVEINCAPSA WAVEINCAPS,*PWAVEINCAPS,*LPWAVEINCAPS;
typedef MIDIOUTCAPSA MIDIOUTCAPS,*PMIDIOUTCAPS,*LPMIDIOUTCAPS;
typedef MIDIINCAPSA MIDIINCAPS,*PMIDIINCAPS,*LPMIDIINCAPS;
typedef AUXCAPSA AUXCAPS,*PAUXCAPS,*LPAUXCAPS;
typedef MIXERCAPSA MIXERCAPS,*PMIXERCAPS,*LPMIXERCAPS;
typedef MIXERLINEA MIXERLINE,*PMIXERLINE,*LPMIXERLINE;
typedef MIXERCONTROLA MIXERCONTROL,*PMIXERCONTROL,*LPMIXERCONTROL;
typedef MIXERLINECONTROLSA MIXERLINECONTROLS,*PMIXERLINECONTROLS,*LPMIXERLINECONTROLS;
typedef MIXERCONTROLDETAILS_LISTTEXTA MIXERCONTROLDETAILS_LISTTEXT,*PMIXERCONTROLDETAILS_LISTTEXT,*LPMIXERCONTROLDETAILS_LISTTEXT;
typedef JOYCAPSA JOYCAPS,*PJOYCAPS,*LPJOYCAPS;
typedef MCI_OPEN_PARMSA MCI_OPEN_PARMS,*PMCI_OPEN_PARMS,*LPMCI_OPEN_PARMS;
typedef MCI_INFO_PARMSA MCI_INFO_PARMS,*LPMCI_INFO_PARMS;
typedef MCI_SYSINFO_PARMSA MCI_SYSINFO_PARMS,*PMCI_SYSINFO_PARMS,*LPMCI_SYSINFO_PARMS;
typedef MCI_SAVE_PARMSA MCI_SAVE_PARMS,*PMCI_SAVE_PARMS,*LPMCI_SAVE_PARMS;
typedef MCI_LOAD_PARMSA MCI_LOAD_PARMS,*PMCI_LOAD_PARMS,*LPMCI_LOAD_PARMS;
typedef MCI_VD_ESCAPE_PARMSA MCI_VD_ESCAPE_PARMS,*PMCI_VD_ESCAPE_PARMS,*LPMCI_VD_ESCAPE_PARMS;
typedef MCI_WAVE_OPEN_PARMSA MCI_WAVE_OPEN_PARMS,*PMCI_WAVE_OPEN_PARMS,*LPMCI_WAVE_OPEN_PARMS;
typedef MCI_ANIM_OPEN_PARMSA MCI_ANIM_OPEN_PARMS,*PMCI_ANIM_OPEN_PARMS,*LPMCI_ANIM_OPEN_PARMS;
typedef MCI_ANIM_WINDOW_PARMSA MCI_ANIM_WINDOW_PARMS,*PMCI_ANIM_WINDOW_PARMS,*LPMCI_ANIM_WINDOW_PARMS;
typedef MCI_OVLY_OPEN_PARMSA MCI_OVLY_OPEN_PARMS,*PMCI_OVLY_OPEN_PARMS,*LPMCI_OVLY_OPEN_PARMS;
typedef MCI_OVLY_WINDOW_PARMSA MCI_OVLY_WINDOW_PARMS,*PMCI_OVLY_WINDOW_PARMS,*LPMCI_OVLY_WINDOW_PARMS;
typedef MCI_OVLY_SAVE_PARMSA MCI_OVLY_SAVE_PARMS,*PMCI_OVLY_SAVE_PARMS,*LPMCI_OVLY_SAVE_PARMS;
# 1940 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/mmsystem.h" 3
#pragma pack(pop)
# 81 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/nb30.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/nb30.h" 3
# 95 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/nb30.h" 3
typedef struct _ACTION_HEADER {
 ULONG transport_id;
 USHORT action_code;
 USHORT reserved;
} ACTION_HEADER,*PACTION_HEADER;
typedef struct _ADAPTER_STATUS {
 UCHAR adapter_address[6];
 UCHAR rev_major;
 UCHAR reserved0;
 UCHAR adapter_type;
 UCHAR rev_minor;
 WORD duration;
 WORD frmr_recv;
 WORD frmr_xmit;
 WORD iframe_recv_err;
 WORD xmit_aborts;
 DWORD xmit_success;
 DWORD recv_success;
 WORD iframe_xmit_err;
 WORD recv_buff_unavail;
 WORD t1_timeouts;
 WORD ti_timeouts;
 DWORD reserved1;
 WORD free_ncbs;
 WORD max_cfg_ncbs;
 WORD max_ncbs;
 WORD xmit_buf_unavail;
 WORD max_dgram_size;
 WORD pending_sess;
 WORD max_cfg_sess;
 WORD max_sess;
 WORD max_sess_pkt_size;
 WORD name_count;
} ADAPTER_STATUS,*PADAPTER_STATUS;
typedef struct _FIND_NAME_BUFFER {
 UCHAR length;
 UCHAR access_control;
 UCHAR frame_control;
 UCHAR destination_addr[6];
 UCHAR source_addr[6];
 UCHAR routing_info[18];
} FIND_NAME_BUFFER,*PFIND_NAME_BUFFER;
typedef struct _FIND_NAME_HEADER {
 WORD node_count;
 UCHAR reserved;
 UCHAR unique_group;
} FIND_NAME_HEADER,*PFIND_NAME_HEADER;
typedef struct _LANA_ENUM {
 UCHAR length;
 UCHAR lana[254 +1];
} LANA_ENUM,*PLANA_ENUM;
typedef struct _NAME_BUFFER {
 UCHAR name[16];
 UCHAR name_num;
 UCHAR name_flags;
} NAME_BUFFER,*PNAME_BUFFER;
typedef struct _NCB {
 UCHAR ncb_command;
 UCHAR ncb_retcode;
 UCHAR ncb_lsn;
 UCHAR ncb_num;
 PUCHAR ncb_buffer;
 WORD ncb_length;
 UCHAR ncb_callname[16];
 UCHAR ncb_name[16];
 UCHAR ncb_rto;
 UCHAR ncb_sto;
 void (__attribute__((__stdcall__)) *ncb_post)(struct _NCB*);
 UCHAR ncb_lana_num;
 UCHAR ncb_cmd_cplt;
 UCHAR ncb_reserve[10];
 HANDLE ncb_event;
} NCB,*PNCB;
typedef struct _SESSION_BUFFER {
 UCHAR lsn;
 UCHAR state;
 UCHAR local_name[16];
 UCHAR remote_name[16];
 UCHAR rcvs_outstanding;
 UCHAR sends_outstanding;
} SESSION_BUFFER,*PSESSION_BUFFER;
typedef struct _SESSION_HEADER {
 UCHAR sess_name;
 UCHAR num_sess;
 UCHAR rcv_dg_outstanding;
 UCHAR rcv_any_outstanding;
} SESSION_HEADER,*PSESSION_HEADER;
UCHAR __attribute__((__stdcall__)) Netbios(PNCB);
# 82 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 1 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 1 3
# 3 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 2 3





       
# 9 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 3
# 31 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 3
typedef void *I_RPC_HANDLE;
typedef long RPC_STATUS;

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdce.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdce.h" 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/basetyps.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/basetyps.h" 3
# 118 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/basetyps.h" 3
typedef GUID UUID;

typedef GUID IID;
typedef GUID CLSID;
typedef CLSID *LPCLSID;
typedef IID *LPIID;
typedef IID *REFIID;
typedef CLSID *REFCLSID;
typedef GUID FMTID;
typedef FMTID *REFFMTID;
typedef unsigned long error_status_t;

typedef unsigned long PROPID;
# 11 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdce.h" 2 3
# 91 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdce.h" 3
typedef I_RPC_HANDLE RPC_BINDING_HANDLE;
typedef RPC_BINDING_HANDLE handle_t;
typedef struct _RPC_BINDING_VECTOR {
 unsigned long Count;
 RPC_BINDING_HANDLE BindingH[1];
} RPC_BINDING_VECTOR;
typedef struct _UUID_VECTOR {
 unsigned long Count;
 UUID *Uuid[1];
} UUID_VECTOR;
typedef void *RPC_IF_HANDLE;
typedef struct _RPC_IF_ID {
 UUID Uuid;
 unsigned short VersMajor;
 unsigned short VersMinor;
} RPC_IF_ID;
typedef struct _RPC_POLICY {
 unsigned int Length ;
 unsigned long EndpointFlags ;
 unsigned long NICFlags ;
} RPC_POLICY,*PRPC_POLICY ;
typedef void __attribute__((__stdcall__)) RPC_OBJECT_INQ_FN(UUID*,UUID*,RPC_STATUS*);
typedef RPC_STATUS RPC_IF_CALLBACK_FN(RPC_IF_HANDLE,void*);
typedef struct {
 unsigned int Count;
 unsigned long Stats[1];
} RPC_STATS_VECTOR;
typedef struct {
 unsigned long Count;
 RPC_IF_ID*IfId[1];
} RPC_IF_ID_VECTOR;
typedef void *RPC_AUTH_IDENTITY_HANDLE;
typedef void *RPC_AUTHZ_HANDLE;
typedef struct _RPC_SECURITY_QOS {
 unsigned long Version;
 unsigned long Capabilities;
 unsigned long IdentityTracking;
 unsigned long ImpersonationType;
} RPC_SECURITY_QOS,*PRPC_SECURITY_QOS;
typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
 unsigned short *User;
 unsigned long UserLength;
 unsigned short *Domain;
 unsigned long DomainLength;
 unsigned short *Password;
 unsigned long PasswordLength;
 unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W,*PSEC_WINNT_AUTH_IDENTITY_W;
typedef struct _SEC_WINNT_AUTH_IDENTITY_A {
 unsigned char *User;
 unsigned long UserLength;
 unsigned char *Domain;
 unsigned long DomainLength;
 unsigned char *Password;
 unsigned long PasswordLength;
 unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_A,*PSEC_WINNT_AUTH_IDENTITY_A;
typedef struct {
 unsigned char *UserName;
 unsigned char *ComputerName;
 unsigned short Privilege;
 unsigned long AuthFlags;
} RPC_CLIENT_INFORMATION1,* PRPC_CLIENT_INFORMATION1;
typedef I_RPC_HANDLE *RPC_EP_INQ_HANDLE;
typedef int(__attribute__((__stdcall__)) *RPC_MGMT_AUTHORIZATION_FN)(RPC_BINDING_HANDLE,unsigned long,RPC_STATUS*);


typedef struct _RPC_PROTSEQ_VECTORA {
 unsigned int Count;
 unsigned char*Protseq[1];
} RPC_PROTSEQ_VECTORA;
typedef struct _RPC_PROTSEQ_VECTORW {
 unsigned int Count;
 unsigned short*Protseq[1];
} RPC_PROTSEQ_VECTORW;
RPC_STATUS __attribute__((__stdcall__)) RpcBindingFromStringBindingA(unsigned char *,RPC_BINDING_HANDLE *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingFromStringBindingW(unsigned short *,RPC_BINDING_HANDLE *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingToStringBindingA(RPC_BINDING_HANDLE,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingToStringBindingW(RPC_BINDING_HANDLE,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingComposeA(unsigned char *,unsigned char *,unsigned char *,unsigned char *,unsigned char *,unsigned char **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingComposeW(unsigned short *,unsigned short *,unsigned short *,unsigned short *,unsigned short *,unsigned short **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingParseA(unsigned char *,unsigned char **,unsigned char **,unsigned char **,unsigned char **,unsigned char **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingParseW(unsigned short *,unsigned short **,unsigned short **,unsigned short **,unsigned short **,unsigned short **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringFreeA(unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcStringFreeW(unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkIsProtseqValidA(unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkIsProtseqValidW(unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkInqProtseqsA(RPC_PROTSEQ_VECTORA**);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkInqProtseqsW(RPC_PROTSEQ_VECTORW**);
RPC_STATUS __attribute__((__stdcall__)) RpcProtseqVectorFreeA(RPC_PROTSEQ_VECTORA**);
RPC_STATUS __attribute__((__stdcall__)) RpcProtseqVectorFreeW(RPC_PROTSEQ_VECTORW**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqA(unsigned char*,unsigned int,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqW(unsigned short*,unsigned int,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqExA(unsigned char*,unsigned int MaxCalls,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqExW(unsigned short*,unsigned int,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpA(unsigned char*,unsigned int,unsigned char*,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpExA(unsigned char*,unsigned int,unsigned char*,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpW(unsigned short*,unsigned int,unsigned short*,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpExW(unsigned short*,unsigned int,unsigned short*,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfA(unsigned char*,unsigned int,RPC_IF_HANDLE,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfExA(unsigned char*,unsigned int,RPC_IF_HANDLE,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfW(unsigned short*,unsigned int,RPC_IF_HANDLE,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfExW(unsigned short*,unsigned int,RPC_IF_HANDLE,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqServerPrincNameA(RPC_BINDING_HANDLE,unsigned long,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqServerPrincNameW(RPC_BINDING_HANDLE,unsigned long,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerInqDefaultPrincNameA(unsigned long,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerInqDefaultPrincNameW(unsigned long,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingInqEntryNameA(RPC_BINDING_HANDLE,unsigned long,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingInqEntryNameW(RPC_BINDING_HANDLE,unsigned long,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthClientA(RPC_BINDING_HANDLE,RPC_AUTHZ_HANDLE *,unsigned char**,unsigned long*,unsigned long*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthClientW(RPC_BINDING_HANDLE,RPC_AUTHZ_HANDLE *,unsigned short**,unsigned long*,unsigned long*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoA(RPC_BINDING_HANDLE,unsigned char**,unsigned long*,unsigned long*,RPC_AUTH_IDENTITY_HANDLE*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoW(RPC_BINDING_HANDLE,unsigned short**,unsigned long*,unsigned long*,RPC_AUTH_IDENTITY_HANDLE*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoA(RPC_BINDING_HANDLE,unsigned char*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoExA(RPC_BINDING_HANDLE,unsigned char*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long,RPC_SECURITY_QOS*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoW(RPC_BINDING_HANDLE,unsigned short*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoExW(RPC_BINDING_HANDLE,unsigned short*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long,RPC_SECURITY_QOS*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoExA(RPC_BINDING_HANDLE,unsigned char**,unsigned long*,unsigned long*,RPC_AUTH_IDENTITY_HANDLE*,unsigned long*,unsigned long,RPC_SECURITY_QOS*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoExW(RPC_BINDING_HANDLE,unsigned short ** , unsigned long *, unsigned long *, RPC_AUTH_IDENTITY_HANDLE *, unsigned long *, unsigned long , RPC_SECURITY_QOS *);
typedef void(__attribute__((__stdcall__)) *RPC_AUTH_KEY_RETRIEVAL_FN)(void*,unsigned short*,unsigned long,void**,RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterAuthInfoA(unsigned char*,unsigned long,RPC_AUTH_KEY_RETRIEVAL_FN,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterAuthInfoW(unsigned short*,unsigned long,RPC_AUTH_KEY_RETRIEVAL_FN,void*);
RPC_STATUS __attribute__((__stdcall__)) UuidToStringA(UUID*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) UuidFromStringA(unsigned char*,UUID*);
RPC_STATUS __attribute__((__stdcall__)) UuidToStringW(UUID*,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) UuidFromStringW(unsigned short*,UUID*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterNoReplaceA(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterNoReplaceW(RPC_IF_HANDLE,RPC_BINDING_VECTOR*, UUID_VECTOR*,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterA(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterW(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) DceErrorInqTextA(RPC_STATUS,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) DceErrorInqTextW(RPC_STATUS,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqNextA(RPC_EP_INQ_HANDLE,RPC_IF_ID*,RPC_BINDING_HANDLE*,UUID*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqNextW(RPC_EP_INQ_HANDLE,RPC_IF_ID*,RPC_BINDING_HANDLE*,UUID*,unsigned short**);
# 329 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdce.h" 3
RPC_STATUS __attribute__((__stdcall__)) RpcBindingCopy(RPC_BINDING_HANDLE,RPC_BINDING_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingFree(RPC_BINDING_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqObject(RPC_BINDING_HANDLE,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingReset(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetObject(RPC_BINDING_HANDLE,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqDefaultProtectLevel(unsigned long,unsigned long *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingVectorFree(RPC_BINDING_VECTOR **);
RPC_STATUS __attribute__((__stdcall__)) RpcIfInqId(RPC_IF_HANDLE,RPC_IF_ID *);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqComTimeout(RPC_BINDING_HANDLE,unsigned int*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetComTimeout(RPC_BINDING_HANDLE,unsigned int);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetCancelTimeout(long Timeout);
RPC_STATUS __attribute__((__stdcall__)) RpcObjectInqType(UUID *,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcObjectSetInqFn(RPC_OBJECT_INQ_FN *);
RPC_STATUS __attribute__((__stdcall__)) RpcObjectSetType(UUID *,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcProtseqVectorFreeA(RPC_PROTSEQ_VECTORA **);
RPC_STATUS __attribute__((__stdcall__)) RpcServerInqIf(RPC_IF_HANDLE,UUID*,void**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerListen(unsigned int,unsigned int,unsigned int);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterIf(RPC_IF_HANDLE,UUID*,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterIfEx(RPC_IF_HANDLE,UUID*,void*,unsigned int,unsigned int,RPC_IF_CALLBACK_FN*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUnregisterIf(RPC_IF_HANDLE,UUID*,unsigned int);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqs(unsigned int,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqsEx(unsigned int,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqsIf(unsigned int,RPC_IF_HANDLE,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqsIfEx(unsigned int,RPC_IF_HANDLE,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtStatsVectorFree(RPC_STATS_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqStats(RPC_BINDING_HANDLE,RPC_STATS_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtIsServerListening(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtStopServerListening(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtWaitServerListen(void);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetServerStackSize(unsigned long);
void __attribute__((__stdcall__)) RpcSsDontSerializeContext(void);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEnableIdleCleanup(void);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqIfIds(RPC_BINDING_HANDLE,RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcIfIdVectorFree(RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcEpResolveBinding(RPC_BINDING_HANDLE,RPC_IF_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingServerFromClient(RPC_BINDING_HANDLE,RPC_BINDING_HANDLE*);
__attribute__((noreturn)) void __attribute__((__stdcall__)) RpcRaiseException(RPC_STATUS);
RPC_STATUS __attribute__((__stdcall__)) RpcTestCancel(void);
RPC_STATUS __attribute__((__stdcall__)) RpcCancelThread(void*);
RPC_STATUS __attribute__((__stdcall__)) UuidCreate(UUID*);
signed int __attribute__((__stdcall__)) UuidCompare(UUID*,UUID*, RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) UuidCreateNil(UUID*);
int __attribute__((__stdcall__)) UuidEqual(UUID*,UUID*, RPC_STATUS*);
unsigned short __attribute__((__stdcall__)) UuidHash(UUID*,RPC_STATUS*);
int __attribute__((__stdcall__)) UuidIsNil(UUID*,RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpUnregister(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqBegin(RPC_BINDING_HANDLE,unsigned long,RPC_IF_ID*,unsigned long,UUID*,RPC_EP_INQ_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqDone(RPC_EP_INQ_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpUnregister(RPC_BINDING_HANDLE,RPC_IF_ID*,RPC_BINDING_HANDLE,UUID*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetAuthorizationFn(RPC_MGMT_AUTHORIZATION_FN);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqParameter(unsigned int,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetParameter(unsigned int,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtBindingInqParameter(RPC_BINDING_HANDLE,unsigned int,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtBindingSetParameter(RPC_BINDING_HANDLE,unsigned int,unsigned long);





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdcep.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdcep.h" 3
# 22 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdcep.h" 3
typedef struct _RPC_VERSION {
 unsigned short MajorVersion;
 unsigned short MinorVersion;
} RPC_VERSION;
typedef struct _RPC_SYNTAX_IDENTIFIER {
 GUID SyntaxGUID;
 RPC_VERSION SyntaxVersion;
} RPC_SYNTAX_IDENTIFIER, *PRPC_SYNTAX_IDENTIFIER;
typedef struct _RPC_MESSAGE {
 HANDLE Handle;
 unsigned long DataRepresentation;
 void *Buffer;
 unsigned int BufferLength;
 unsigned int ProcNum;
 PRPC_SYNTAX_IDENTIFIER TransferSyntax;
 void *RpcInterfaceInformation;
 void *ReservedForRuntime;
 void *ManagerEpv;
 void *ImportContext;
 unsigned long RpcFlags;
} RPC_MESSAGE,*PRPC_MESSAGE;
typedef long __attribute__((__stdcall__)) RPC_FORWARD_FUNCTION(GUID*,RPC_VERSION*,GUID*,unsigned char*,void**);
typedef void(__attribute__((__stdcall__)) *RPC_DISPATCH_FUNCTION) ( PRPC_MESSAGE Message);
typedef struct {
 unsigned int DispatchTableCount;
 RPC_DISPATCH_FUNCTION *DispatchTable;
 int Reserved;
} RPC_DISPATCH_TABLE,*PRPC_DISPATCH_TABLE;
typedef struct _RPC_PROTSEQ_ENDPOINT {
 unsigned char *RpcProtocolSequence;
 unsigned char *Endpoint;
} RPC_PROTSEQ_ENDPOINT,*PRPC_PROTSEQ_ENDPOINT;
typedef struct _RPC_SERVER_INTERFACE {
 unsigned int Length;
 RPC_SYNTAX_IDENTIFIER InterfaceId;
 RPC_SYNTAX_IDENTIFIER TransferSyntax;
 PRPC_DISPATCH_TABLE DispatchTable;
 unsigned int RpcProtseqEndpointCount;
 PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
 void *DefaultManagerEpv;
 void const *InterpreterInfo;
} RPC_SERVER_INTERFACE,*PRPC_SERVER_INTERFACE;
typedef struct _RPC_CLIENT_INTERFACE {
 unsigned int Length;
 RPC_SYNTAX_IDENTIFIER InterfaceId;
 RPC_SYNTAX_IDENTIFIER TransferSyntax;
 PRPC_DISPATCH_TABLE DispatchTable;
 unsigned int RpcProtseqEndpointCount;
 PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
 unsigned long Reserved;
 void const *InterpreterInfo;
} RPC_CLIENT_INTERFACE,*PRPC_CLIENT_INTERFACE;
typedef void *I_RPC_MUTEX;
typedef struct _RPC_TRANSFER_SYNTAX {
 GUID Uuid;
 unsigned short VersMajor;
 unsigned short VersMinor;
} RPC_TRANSFER_SYNTAX;
typedef long(__attribute__((__stdcall__)) *RPC_BLOCKING_FUNCTION)(void*,void*);

long __attribute__((__stdcall__)) I_RpcGetBuffer(RPC_MESSAGE*);
long __attribute__((__stdcall__)) I_RpcSendReceive(RPC_MESSAGE*);
long __attribute__((__stdcall__)) I_RpcFreeBuffer(RPC_MESSAGE*);
void __attribute__((__stdcall__)) I_RpcRequestMutex(I_RPC_MUTEX*);
void __attribute__((__stdcall__)) I_RpcClearMutex(I_RPC_MUTEX);
void __attribute__((__stdcall__)) I_RpcDeleteMutex(I_RPC_MUTEX);
__attribute__((__stdcall__)) void * I_RpcAllocate(unsigned int);
void __attribute__((__stdcall__)) I_RpcFree(void*);
void __attribute__((__stdcall__)) I_RpcPauseExecution(unsigned long);
typedef void(__attribute__((__stdcall__)) *PRPC_RUNDOWN) (void*);
long __attribute__((__stdcall__)) I_RpcMonitorAssociation(HANDLE,PRPC_RUNDOWN,void*);
long __attribute__((__stdcall__)) I_RpcStopMonitorAssociation(HANDLE);
HANDLE __attribute__((__stdcall__)) I_RpcGetCurrentCallHandle(void);
long __attribute__((__stdcall__)) I_RpcGetAssociationContext(void**);
long __attribute__((__stdcall__)) I_RpcSetAssociationContext(void*);

long __attribute__((__stdcall__)) I_RpcNsBindingSetEntryName(HANDLE,unsigned long,unsigned short*);
long __attribute__((__stdcall__)) I_RpcBindingInqDynamicEndpoint(HANDLE, unsigned short**);




long __attribute__((__stdcall__)) I_RpcBindingInqTransportType(HANDLE,unsigned int*);
long __attribute__((__stdcall__)) I_RpcIfInqTransferSyntaxes(HANDLE,RPC_TRANSFER_SYNTAX*,unsigned int,unsigned int*);
long __attribute__((__stdcall__)) I_UuidCreate(GUID*);
long __attribute__((__stdcall__)) I_RpcBindingCopy(HANDLE,HANDLE*);
long __attribute__((__stdcall__)) I_RpcBindingIsClientLocal(HANDLE,unsigned int*);
void __attribute__((__stdcall__)) I_RpcSsDontSerializeContext(void);
long __attribute__((__stdcall__)) I_RpcServerRegisterForwardFunction(RPC_FORWARD_FUNCTION*);
long __attribute__((__stdcall__)) I_RpcConnectionInqSockBuffSize(unsigned long*,unsigned long*);
long __attribute__((__stdcall__)) I_RpcConnectionSetSockBuffSize(unsigned long,unsigned long);
long __attribute__((__stdcall__)) I_RpcBindingSetAsync(HANDLE,RPC_BLOCKING_FUNCTION);
long __attribute__((__stdcall__)) I_RpcAsyncSendReceive(RPC_MESSAGE*,void*);
long __attribute__((__stdcall__)) I_RpcGetThreadWindowHandle(void**);
long __attribute__((__stdcall__)) I_RpcServerThreadPauseListening(void);
long __attribute__((__stdcall__)) I_RpcServerThreadContinueListening(void);
long __attribute__((__stdcall__)) I_RpcServerUnregisterEndpointA(unsigned char*,unsigned char*);
long __attribute__((__stdcall__)) I_RpcServerUnregisterEndpointW(unsigned short*,unsigned short*);
# 389 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcdce.h" 2 3
# 35 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcnsi.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcnsi.h" 3





typedef void *RPC_NS_HANDLE;
# 20 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcnsi.h" 3
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingExportA(unsigned long,unsigned char*,RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingUnexportA(unsigned long,unsigned char*,RPC_IF_HANDLE,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupBeginA(unsigned long,unsigned char*,RPC_IF_HANDLE,UUID*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupNext(RPC_NS_HANDLE,RPC_BINDING_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupDeleteA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrAddA(unsigned long,unsigned char*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrRemoveA(unsigned long,unsigned char*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqBeginA(unsigned long,unsigned char*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqNextA(RPC_NS_HANDLE,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileDeleteA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltAddA(unsigned long,unsigned char*,RPC_IF_ID*,unsigned long,unsigned char*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltRemoveA(unsigned long,unsigned char*,RPC_IF_ID*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqBeginA(unsigned long,unsigned char*,unsigned long,RPC_IF_ID*,unsigned long,unsigned long,unsigned char*,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqNextA(RPC_NS_HANDLE,RPC_IF_ID*,unsigned char**,unsigned long*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqNext( RPC_NS_HANDLE, UUID*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqDone( RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryExpandNameA(unsigned long,unsigned char*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtBindingUnexportA(unsigned long,unsigned char*,RPC_IF_ID*,unsigned long,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryCreateA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryDeleteA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryInqIfIdsA(unsigned long,unsigned char*,RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtHandleSetExpAge(RPC_NS_HANDLE,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtInqExpAge(unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtSetExpAge(unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportNext(RPC_NS_HANDLE,RPC_BINDING_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingSelect(RPC_BINDING_VECTOR*,RPC_BINDING_HANDLE*);

RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqBeginA(unsigned long,unsigned char*,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportBeginA(unsigned long,unsigned char*,RPC_IF_HANDLE,UUID*,RPC_NS_HANDLE*);


RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingExportW(unsigned long,unsigned short*,RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingUnexportW(unsigned long,unsigned short*,RPC_IF_HANDLE,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupBeginW(unsigned long,unsigned short*,RPC_IF_HANDLE,UUID*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupDeleteW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrAddW(unsigned long,unsigned short*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrRemoveW(unsigned long,unsigned short*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqBeginW(unsigned long,unsigned short*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqNextW(RPC_NS_HANDLE,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileDeleteW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltAddW(unsigned long,unsigned short*, RPC_IF_ID*,unsigned long,unsigned short*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltRemoveW(unsigned long,unsigned short*, RPC_IF_ID*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqBeginW(unsigned long,unsigned short*, unsigned long,RPC_IF_ID*,unsigned long,unsigned long,unsigned short*, RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqNextW(RPC_NS_HANDLE,RPC_IF_ID*, unsigned short**,unsigned long*,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqBeginW(unsigned long,unsigned short*,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryExpandNameW(unsigned long,unsigned short*,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtBindingUnexportW(unsigned long,unsigned short*,RPC_IF_ID*,unsigned long,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryCreateW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryDeleteW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryInqIfIdsW(unsigned long,unsigned short , RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportBeginW(unsigned long,unsigned short*,RPC_IF_HANDLE,UUID*,RPC_NS_HANDLE*);
# 36 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcnterr.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcnterr.h" 3
# 37 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 2 3
# 53 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 3
RPC_STATUS __attribute__((__stdcall__)) RpcImpersonateClient(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcRevertToSelf(void);
long __attribute__((__stdcall__)) I_RpcMapWin32Status(RPC_STATUS);
# 83 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/shellapi.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/shellapi.h" 3
# 97 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/shellapi.h" 3
typedef WORD FILEOP_FLAGS;
typedef WORD PRINTEROP_FLAGS;
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/pshpack2.h" 1 3

#pragma pack(push,2)
# 100 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/shellapi.h" 2 3
typedef struct _AppBarData {
 DWORD cbSize;
 HWND hWnd;
 UINT uCallbackMessage;
 UINT uEdge;
 RECT rc;
 LPARAM lParam;
} APPBARDATA,*PAPPBARDATA;
typedef HANDLE HDROP;
typedef struct _NOTIFYICONDATAA {
 DWORD cbSize;
 HWND hWnd;
 UINT uID;
 UINT uFlags;
 UINT uCallbackMessage;
 HICON hIcon;
 CHAR szTip[64];
} NOTIFYICONDATAA,*PNOTIFYICONDATAA;
typedef struct _NOTIFYICONDATAW {
 DWORD cbSize;
 HWND hWnd;
 UINT uID;
 UINT uFlags;
 UINT uCallbackMessage;
 HICON hIcon;
 WCHAR szTip[64];
} NOTIFYICONDATAW,*PNOTIFYICONDATAW;
typedef struct _SHELLEXECUTEINFOA {
 DWORD cbSize;
 ULONG fMask;
 HWND hwnd;
 LPCSTR lpVerb;
 LPCSTR lpFile;
 LPCSTR lpParameters;
 LPCSTR lpDirectory;
 int nShow;
 HINSTANCE hInstApp;
 PVOID lpIDList;
 LPCSTR lpClass;
 HKEY hkeyClass;
 DWORD dwHotKey;
 HANDLE hIcon;
 HANDLE hProcess;
} SHELLEXECUTEINFOA,*LPSHELLEXECUTEINFOA;
typedef struct _SHELLEXECUTEINFOW {
 DWORD cbSize;
 ULONG fMask;
 HWND hwnd;
 LPCWSTR lpVerb;
 LPCWSTR lpFile;
 LPCWSTR lpParameters;
 LPCWSTR lpDirectory;
 int nShow;
 HINSTANCE hInstApp;
 PVOID lpIDList;
 LPCWSTR lpClass;
 HKEY hkeyClass;
 DWORD dwHotKey;
 HANDLE hIcon;
 HANDLE hProcess;
} SHELLEXECUTEINFOW,*LPSHELLEXECUTEINFOW;
typedef struct _SHFILEOPSTRUCTA {
 HWND hwnd;
 UINT wFunc;
 LPCSTR pFrom;
 LPCSTR pTo;
 FILEOP_FLAGS fFlags;
 BOOL fAnyOperationsAborted;
 PVOID hNameMappings;
 LPCSTR lpszProgressTitle;
} SHFILEOPSTRUCTA,*LPSHFILEOPSTRUCTA;
typedef struct _SHFILEOPSTRUCTW {
 HWND hwnd;
 UINT wFunc;
 LPCWSTR pFrom;
 LPCWSTR pTo;
 FILEOP_FLAGS fFlags;
 BOOL fAnyOperationsAborted;
 PVOID hNameMappings;
 LPCWSTR lpszProgressTitle;
} SHFILEOPSTRUCTW,*LPSHFILEOPSTRUCTW;
typedef struct _SHFILEINFOA {
 HICON hIcon;
 int iIcon;
 DWORD dwAttributes;
 CHAR szDisplayName[260];
 CHAR szTypeName[80];
} SHFILEINFOA;
typedef struct _SHFILEINFOW {
 HICON hIcon;
 int iIcon;
 DWORD dwAttributes;
 WCHAR szDisplayName[260];
 WCHAR szTypeName[80];
} SHFILEINFOW;
typedef struct _SHQUERYRBINFO {
 DWORD cbSize;
 long long i64Size;
 long long i64NumItems;
} SHQUERYRBINFO, *LPSHQUERYRBINFO;
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/poppack.h" 1 3

#pragma pack(pop)
# 201 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/shellapi.h" 2 3

LPWSTR * __attribute__((__stdcall__)) CommandLineToArgvW(LPCWSTR,int*);
void __attribute__((__stdcall__)) DragAcceptFiles(HWND,BOOL);
void __attribute__((__stdcall__)) DragFinish(HDROP);
UINT __attribute__((__stdcall__)) DragQueryFileA(HDROP,UINT,LPSTR,UINT);
UINT __attribute__((__stdcall__)) DragQueryFileW(HDROP,UINT,LPWSTR,UINT);
BOOL __attribute__((__stdcall__)) DragQueryPoint(HDROP,LPPOINT);
HICON __attribute__((__stdcall__)) ExtractAssociatedIconA(HINSTANCE,LPCSTR,PWORD);
HICON __attribute__((__stdcall__)) ExtractAssociatedIconW(HINSTANCE,LPCWSTR,PWORD);
HICON __attribute__((__stdcall__)) ExtractIconA(HINSTANCE,LPCSTR,UINT);
HICON __attribute__((__stdcall__)) ExtractIconW(HINSTANCE,LPCWSTR,UINT);
UINT __attribute__((__stdcall__)) ExtractIconExA(LPCSTR,int,HICON*,HICON*,UINT);
UINT __attribute__((__stdcall__)) ExtractIconExW(LPCWSTR,int,HICON*,HICON*,UINT);
HINSTANCE __attribute__((__stdcall__)) FindExecutableA(LPCSTR,LPCSTR,LPSTR);
HINSTANCE __attribute__((__stdcall__)) FindExecutableW(LPCWSTR,LPCWSTR,LPWSTR);
UINT __attribute__((__stdcall__)) SHAppBarMessage(DWORD,PAPPBARDATA);
BOOL __attribute__((__stdcall__)) Shell_NotifyIconA(DWORD,PNOTIFYICONDATAA);
BOOL __attribute__((__stdcall__)) Shell_NotifyIconW(DWORD,PNOTIFYICONDATAW);
int __attribute__((__stdcall__)) ShellAboutA(HWND,LPCSTR,LPCSTR,HICON);
int __attribute__((__stdcall__)) ShellAboutW(HWND,LPCWSTR,LPCWSTR,HICON);
HINSTANCE __attribute__((__stdcall__)) ShellExecuteA(HWND,LPCSTR,LPCSTR,LPCSTR,LPCSTR,INT);
HINSTANCE __attribute__((__stdcall__)) ShellExecuteW(HWND,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR,INT);
BOOL __attribute__((__stdcall__)) ShellExecuteExA(LPSHELLEXECUTEINFOA);
BOOL __attribute__((__stdcall__)) ShellExecuteExW(LPSHELLEXECUTEINFOW);
int __attribute__((__stdcall__)) SHFileOperationA(LPSHFILEOPSTRUCTA);
int __attribute__((__stdcall__)) SHFileOperationW(LPSHFILEOPSTRUCTW);
void __attribute__((__stdcall__)) SHFreeNameMappings(HANDLE);
DWORD __attribute__((__stdcall__)) SHGetFileInfoA(LPCSTR,DWORD,SHFILEINFOA*,UINT,UINT);
DWORD __attribute__((__stdcall__)) SHGetFileInfoW(LPCWSTR,DWORD,SHFILEINFOW*,UINT,UINT);
HRESULT __attribute__((__stdcall__)) SHQueryRecycleBinA(LPCSTR, LPSHQUERYRBINFO);
HRESULT __attribute__((__stdcall__)) SHQueryRecycleBinW(LPCWSTR, LPSHQUERYRBINFO);
HRESULT __attribute__((__stdcall__)) SHEmptyRecycleBinA(HWND,LPCSTR,DWORD);
HRESULT __attribute__((__stdcall__)) SHEmptyRecycleBinW(HWND,LPCWSTR,DWORD);
# 255 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/shellapi.h" 3
typedef NOTIFYICONDATAA NOTIFYICONDATA,*PNOTIFYICONDATA;
typedef SHELLEXECUTEINFOA SHELLEXECUTEINFO,*LPSHELLEXECUTEINFO;
typedef SHFILEOPSTRUCTA SHFILEOPSTRUCT,*LPSHFILEOPSTRUCT;
typedef SHFILEINFOA SHFILEINFO;
# 84 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winperf.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winperf.h" 3
# 78 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winperf.h" 3
typedef struct _PERF_DATA_BLOCK {
 WCHAR Signature[4];
 DWORD LittleEndian;
 DWORD Version;
 DWORD Revision;
 DWORD TotalByteLength;
 DWORD HeaderLength;
 DWORD NumObjectTypes;
 LONG DefaultObject;
 SYSTEMTIME SystemTime;
 LARGE_INTEGER PerfTime;
 LARGE_INTEGER PerfFreq;
 LARGE_INTEGER PerfTime100nSec;
 DWORD SystemNameLength;
 DWORD SystemNameOffset;
} PERF_DATA_BLOCK, *PPERF_DATA_BLOCK;
typedef struct _PERF_OBJECT_TYPE {
 DWORD TotalByteLength;
 DWORD DefinitionLength;
 DWORD HeaderLength;
 DWORD ObjectNameTitleIndex;
 LPWSTR ObjectNameTitle;
 DWORD ObjectHelpTitleIndex;
 LPWSTR ObjectHelpTitle;
 DWORD DetailLevel;
 DWORD NumCounters;
 LONG DefaultCounter;
 LONG NumInstances;
 DWORD CodePage;
 LARGE_INTEGER PerfTime;
 LARGE_INTEGER PerfFreq;
} PERF_OBJECT_TYPE, *PPERF_OBJECT_TYPE;
typedef struct _PERF_COUNTER_DEFINITION {
 DWORD ByteLength;
 DWORD CounterNameTitleIndex;
 LPWSTR CounterNameTitle;
 DWORD CounterHelpTitleIndex;
 LPWSTR CounterHelpTitle;
 LONG DefaultScale;
 DWORD DetailLevel;
 DWORD CounterType;
 DWORD CounterSize;
 DWORD CounterOffset;
} PERF_COUNTER_DEFINITION,*PPERF_COUNTER_DEFINITION;
typedef struct _PERF_INSTANCE_DEFINITION {
 DWORD ByteLength;
 DWORD ParentObjectTitleIndex;
 DWORD ParentObjectInstance;
 LONG UniqueID;
 DWORD NameOffset;
 DWORD NameLength;
} PERF_INSTANCE_DEFINITION,*PPERF_INSTANCE_DEFINITION;
typedef struct _PERF_COUNTER_BLOCK {
 DWORD ByteLength;
} PERF_COUNTER_BLOCK, *PPERF_COUNTER_BLOCK;
typedef DWORD(__attribute__((__stdcall__)) PM_OPEN_PROC)(LPWSTR);
typedef DWORD(__attribute__((__stdcall__)) PM_COLLECT_PROC)(LPWSTR,PVOID*,PDWORD,PDWORD);
typedef DWORD(__attribute__((__stdcall__)) PM_CLOSE_PROC)(void);
# 85 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/commdlg.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/commdlg.h" 3





#pragma pack(push,1)
# 216 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/commdlg.h" 3
typedef UINT (__attribute__((__stdcall__)) *__CDHOOKPROC)(HWND,UINT,WPARAM,LPARAM);
typedef __CDHOOKPROC LPCCHOOKPROC;
typedef __CDHOOKPROC LPCFHOOKPROC;
typedef __CDHOOKPROC LPFRHOOKPROC;
typedef __CDHOOKPROC LPOFNHOOKPROC;
typedef __CDHOOKPROC LPPAGEPAINTHOOK;
typedef __CDHOOKPROC LPPAGESETUPHOOK;
typedef __CDHOOKPROC LPSETUPHOOKPROC;
typedef __CDHOOKPROC LPPRINTHOOKPROC;
typedef struct tagCHOOSECOLORA {
 DWORD lStructSize;
 HWND hwndOwner;
 HWND hInstance;
 COLORREF rgbResult;
 COLORREF* lpCustColors;
 DWORD Flags;
 LPARAM lCustData;
 LPCCHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;
} CHOOSECOLORA,*LPCHOOSECOLORA;
typedef struct tagCHOOSECOLORW {
 DWORD lStructSize;
 HWND hwndOwner;
 HWND hInstance;
 COLORREF rgbResult;
 COLORREF* lpCustColors;
 DWORD Flags;
 LPARAM lCustData;
 LPCCHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;
} CHOOSECOLORW,*LPCHOOSECOLORW;
typedef struct tagCHOOSEFONTA {
 DWORD lStructSize;
 HWND hwndOwner;
 HDC hDC;
 LPLOGFONTA lpLogFont;
 INT iPointSize;
 DWORD Flags;
 DWORD rgbColors;
 LPARAM lCustData;
 LPCFHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;
 HINSTANCE hInstance;
 LPSTR lpszStyle;
 WORD nFontType;
 WORD ___MISSING_ALIGNMENT__;
 INT nSizeMin;
 INT nSizeMax;
} CHOOSEFONTA,*LPCHOOSEFONTA;
typedef struct tagCHOOSEFONTW {
 DWORD lStructSize;
 HWND hwndOwner;
 HDC hDC;
 LPLOGFONTW lpLogFont;
 INT iPointSize;
 DWORD Flags;
 DWORD rgbColors;
 LPARAM lCustData;
 LPCFHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;
 HINSTANCE hInstance;
 LPWSTR lpszStyle;
 WORD nFontType;
 WORD ___MISSING_ALIGNMENT__;
 INT nSizeMin;
 INT nSizeMax;
} CHOOSEFONTW,*LPCHOOSEFONTW;
typedef struct tagDEVNAMES {
 WORD wDriverOffset;
 WORD wDeviceOffset;
 WORD wOutputOffset;
 WORD wDefault;
} DEVNAMES,*LPDEVNAMES;
typedef struct {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 DWORD Flags;
 LPSTR lpstrFindWhat;
 LPSTR lpstrReplaceWith;
 WORD wFindWhatLen;
 WORD wReplaceWithLen;
 LPARAM lCustData;
 LPFRHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;
} FINDREPLACEA,*LPFINDREPLACEA;
typedef struct {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 DWORD Flags;
 LPWSTR lpstrFindWhat;
 LPWSTR lpstrReplaceWith;
 WORD wFindWhatLen;
 WORD wReplaceWithLen;
 LPARAM lCustData;
 LPFRHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;
} FINDREPLACEW,*LPFINDREPLACEW;
typedef struct tagOFNA {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCSTR lpstrFilter;
 LPSTR lpstrCustomFilter;
 DWORD nMaxCustFilter;
 DWORD nFilterIndex;
 LPSTR lpstrFile;
 DWORD nMaxFile;
 LPSTR lpstrFileTitle;
 DWORD nMaxFileTitle;
 LPCSTR lpstrInitialDir;
 LPCSTR lpstrTitle;
 DWORD Flags;
 WORD nFileOffset;
 WORD nFileExtension;
 LPCSTR lpstrDefExt;
 DWORD lCustData;
 LPOFNHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;
} OPENFILENAMEA,*LPOPENFILENAMEA;
typedef struct tagOFNW {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCWSTR lpstrFilter;
 LPWSTR lpstrCustomFilter;
 DWORD nMaxCustFilter;
 DWORD nFilterIndex;
 LPWSTR lpstrFile;
 DWORD nMaxFile;
 LPWSTR lpstrFileTitle;
 DWORD nMaxFileTitle;
 LPCWSTR lpstrInitialDir;
 LPCWSTR lpstrTitle;
 DWORD Flags;
 WORD nFileOffset;
 WORD nFileExtension;
 LPCWSTR lpstrDefExt;
 DWORD lCustData;
 LPOFNHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;
} OPENFILENAMEW,*LPOPENFILENAMEW;
typedef struct _OFNOTIFYA {
 NMHDR hdr;
 LPOPENFILENAMEA lpOFN;
 LPSTR pszFile;
} OFNOTIFYA,*LPOFNOTIFYA;
typedef struct _OFNOTIFYW {
 NMHDR hdr;
 LPOPENFILENAMEW lpOFN;
 LPWSTR pszFile;
} OFNOTIFYW,*LPOFNOTIFYW;
typedef struct tagPSDA {
 DWORD lStructSize;
 HWND hwndOwner;
 HGLOBAL hDevMode;
 HGLOBAL hDevNames;
 DWORD Flags;
 POINT ptPaperSize;
 RECT rtMinMargin;
 RECT rtMargin;
 HINSTANCE hInstance;
 LPARAM lCustData;
 LPPAGESETUPHOOK lpfnPageSetupHook;
 LPPAGEPAINTHOOK lpfnPagePaintHook;
 LPCSTR lpPageSetupTemplateName;
 HGLOBAL hPageSetupTemplate;
} PAGESETUPDLGA,*LPPAGESETUPDLGA;
typedef struct tagPSDW {
 DWORD lStructSize;
 HWND hwndOwner;
 HGLOBAL hDevMode;
 HGLOBAL hDevNames;
 DWORD Flags;
 POINT ptPaperSize;
 RECT rtMinMargin;
 RECT rtMargin;
 HINSTANCE hInstance;
 LPARAM lCustData;
 LPPAGESETUPHOOK lpfnPageSetupHook;
 LPPAGEPAINTHOOK lpfnPagePaintHook;
 LPCWSTR lpPageSetupTemplateName;
 HGLOBAL hPageSetupTemplate;
} PAGESETUPDLGW,*LPPAGESETUPDLGW;
typedef struct tagPDA {
 DWORD lStructSize;
 HWND hwndOwner;
 HANDLE hDevMode;
 HANDLE hDevNames;
 HDC hDC;
 DWORD Flags;
 WORD nFromPage;
 WORD nToPage;
 WORD nMinPage;
 WORD nMaxPage;
 WORD nCopies;
 HINSTANCE hInstance;
 DWORD lCustData;
 LPPRINTHOOKPROC lpfnPrintHook;
 LPSETUPHOOKPROC lpfnSetupHook;
 LPCSTR lpPrintTemplateName;
 LPCSTR lpSetupTemplateName;
 HANDLE hPrintTemplate;
 HANDLE hSetupTemplate;
} PRINTDLGA,*LPPRINTDLGA;
typedef struct tagPDW {
 DWORD lStructSize;
 HWND hwndOwner;
 HANDLE hDevMode;
 HANDLE hDevNames;
 HDC hDC;
 DWORD Flags;
 WORD nFromPage;
 WORD nToPage;
 WORD nMinPage;
 WORD nMaxPage;
 WORD nCopies;
 HINSTANCE hInstance;
 DWORD lCustData;
 LPPRINTHOOKPROC lpfnPrintHook;
 LPSETUPHOOKPROC lpfnSetupHook;
 LPCWSTR lpPrintTemplateName;
 LPCWSTR lpSetupTemplateName;
 HANDLE hPrintTemplate;
 HANDLE hSetupTemplate;
} PRINTDLGW,*LPPRINTDLGW;
# 498 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/commdlg.h" 3
BOOL __attribute__((__stdcall__)) ChooseColorA(LPCHOOSECOLORA);
BOOL __attribute__((__stdcall__)) ChooseColorW(LPCHOOSECOLORW);
BOOL __attribute__((__stdcall__)) ChooseFontA(LPCHOOSEFONTA);
BOOL __attribute__((__stdcall__)) ChooseFontW(LPCHOOSEFONTW);
DWORD __attribute__((__stdcall__)) CommDlgExtendedError(void);
HWND __attribute__((__stdcall__)) FindTextA(LPFINDREPLACEA);
HWND __attribute__((__stdcall__)) FindTextW(LPFINDREPLACEW);
short __attribute__((__stdcall__)) GetFileTitleA(LPCSTR,LPSTR,WORD);
short __attribute__((__stdcall__)) GetFileTitleW(LPCWSTR,LPWSTR,WORD);
BOOL __attribute__((__stdcall__)) GetOpenFileNameA(LPOPENFILENAMEA);
BOOL __attribute__((__stdcall__)) GetOpenFileNameW(LPOPENFILENAMEW);
BOOL __attribute__((__stdcall__)) GetSaveFileNameA(LPOPENFILENAMEA);
BOOL __attribute__((__stdcall__)) GetSaveFileNameW(LPOPENFILENAMEW);
BOOL __attribute__((__stdcall__)) PageSetupDlgA(LPPAGESETUPDLGA);
BOOL __attribute__((__stdcall__)) PageSetupDlgW(LPPAGESETUPDLGW);
BOOL __attribute__((__stdcall__)) PrintDlgA(LPPRINTDLGA);
BOOL __attribute__((__stdcall__)) PrintDlgW(LPPRINTDLGW);
HWND __attribute__((__stdcall__)) ReplaceTextA(LPFINDREPLACEA);
HWND __attribute__((__stdcall__)) ReplaceTextW(LPFINDREPLACEW);
# 558 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/commdlg.h" 3
typedef CHOOSECOLORA CHOOSECOLOR,*LPCHOOSECOLOR;
typedef CHOOSEFONTA CHOOSEFONT,*LPCHOOSEFONT;
typedef FINDREPLACEA FINDREPLACE,*LPFINDREPLACE;
typedef OPENFILENAMEA OPENFILENAME,*LPOPENFILENAME;
typedef OFNOTIFYA OFNOTIFY,*LPOFNOTIFY;
typedef PAGESETUPDLGA PAGESETUPDLG,*LPPAGESETUPDLG;
typedef PRINTDLGA PRINTDLG,*LPPRINTDLG;
# 579 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/commdlg.h" 3
#pragma pack(pop)
# 87 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winspool.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winspool.h" 3
# 221 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winspool.h" 3
typedef struct _ADDJOB_INFO_1A {
 LPSTR Path;
 DWORD JobId;
} ADDJOB_INFO_1A,*PADDJOB_INFO_1A,*LPADDJOB_INFO_1A;
typedef struct _ADDJOB_INFO_1W {
 LPWSTR Path;
 DWORD JobId;
} ADDJOB_INFO_1W,*PADDJOB_INFO_1W,*LPADDJOB_INFO_1W;
typedef struct _DATATYPES_INFO_1A{LPSTR pName;} DATATYPES_INFO_1A,*PDATATYPES_INFO_1A,*LPDATATYPES_INFO_1A;
typedef struct _DATATYPES_INFO_1W{LPWSTR pName;} DATATYPES_INFO_1W,*PDATATYPES_INFO_1W,*LPDATATYPES_INFO_1W;
typedef struct _JOB_INFO_1A {
 DWORD JobId;
 LPSTR pPrinterName;
 LPSTR pMachineName;
 LPSTR pUserName;
 LPSTR pDocument;
 LPSTR pDatatype;
 LPSTR pStatus;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD TotalPages;
 DWORD PagesPrinted;
 SYSTEMTIME Submitted;
} JOB_INFO_1A,*PJOB_INFO_1A,*LPJOB_INFO_1A;
typedef struct _JOB_INFO_1W {
 DWORD JobId;
 LPWSTR pPrinterName;
 LPWSTR pMachineName;
 LPWSTR pUserName;
 LPWSTR pDocument;
 LPWSTR pDatatype;
 LPWSTR pStatus;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD TotalPages;
 DWORD PagesPrinted;
 SYSTEMTIME Submitted;
} JOB_INFO_1W,*PJOB_INFO_1W,*LPJOB_INFO_1W;
typedef struct _JOB_INFO_2A {
 DWORD JobId;
 LPSTR pPrinterName;
 LPSTR pMachineName;
 LPSTR pUserName;
 LPSTR pDocument;
 LPSTR pNotifyName;
 LPSTR pDatatype;
 LPSTR pPrintProcessor;
 LPSTR pParameters;
 LPSTR pDriverName;
 LPDEVMODEA pDevMode;
 LPSTR pStatus;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD TotalPages;
 DWORD Size;
 SYSTEMTIME Submitted;
 DWORD Time;
 DWORD PagesPrinted;
} JOB_INFO_2A,*PJOB_INFO_2A,*LPJOB_INFO_2A;
typedef struct _JOB_INFO_2W {
 DWORD JobId;
 LPWSTR pPrinterName;
 LPWSTR pMachineName;
 LPWSTR pUserName;
 LPWSTR pDocument;
 LPWSTR pNotifyName;
 LPWSTR pDatatype;
 LPWSTR pPrintProcessor;
 LPWSTR pParameters;
 LPWSTR pDriverName;
 LPDEVMODEW pDevMode;
 LPWSTR pStatus;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD TotalPages;
 DWORD Size;
 SYSTEMTIME Submitted;
 DWORD Time;
 DWORD PagesPrinted;
} JOB_INFO_2W,*PJOB_INFO_2W,*LPJOB_INFO_2W;
typedef struct _DOC_INFO_1A {
 LPSTR pDocName;
 LPSTR pOutputFile;
 LPSTR pDatatype;
} DOC_INFO_1A,*PDOC_INFO_1A,*LPDOC_INFO_1A;
typedef struct _DOC_INFO_1W {
 LPWSTR pDocName;
 LPWSTR pOutputFile;
 LPWSTR pDatatype;
} DOC_INFO_1W,*PDOC_INFO_1W,*LPDOC_INFO_1W;
typedef struct _DOC_INFO_2A {
 LPSTR pDocName;
 LPSTR pOutputFile;
 LPSTR pDatatype;
 DWORD dwMode;
 DWORD JobId;
} DOC_INFO_2A,*PDOC_INFO_2A,*LPDOC_INFO_2A;
typedef struct _DOC_INFO_2W {
 LPWSTR pDocName;
 LPWSTR pOutputFile;
 LPWSTR pDatatype;
 DWORD dwMode;
 DWORD JobId;
} DOC_INFO_2W,*PDOC_INFO_2W,*LPDOC_INFO_2W;
typedef struct _DRIVER_INFO_1A {LPSTR pName;} DRIVER_INFO_1A,*PDRIVER_INFO_1A,*LPDRIVER_INFO_1A;
typedef struct _DRIVER_INFO_1W {LPWSTR pName;} DRIVER_INFO_1W,*PDRIVER_INFO_1W,*LPDRIVER_INFO_1W;
typedef struct _DRIVER_INFO_2A {
 DWORD cVersion;
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDriverPath;
 LPSTR pDataFile;
 LPSTR pConfigFile;
} DRIVER_INFO_2A,*PDRIVER_INFO_2A,*LPDRIVER_INFO_2A;
typedef struct _DRIVER_INFO_2W {
 DWORD cVersion;
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDriverPath;
 LPWSTR pDataFile;
 LPWSTR pConfigFile;
} DRIVER_INFO_2W,*PDRIVER_INFO_2W,*LPDRIVER_INFO_2W;
typedef struct _DRIVER_INFO_3A {
 DWORD cVersion;
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDriverPath;
 LPSTR pDataFile;
 LPSTR pConfigFile;
 LPSTR pHelpFile;
 LPSTR pDependentFiles;
 LPSTR pMonitorName;
 LPSTR pDefaultDataType;
} DRIVER_INFO_3A,*PDRIVER_INFO_3A,*LPDRIVER_INFO_3A;
typedef struct _DRIVER_INFO_3W {
 DWORD cVersion;
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDriverPath;
 LPWSTR pDataFile;
 LPWSTR pConfigFile;
 LPWSTR pHelpFile;
 LPWSTR pDependentFiles;
 LPWSTR pMonitorName;
 LPWSTR pDefaultDataType;
} DRIVER_INFO_3W,*PDRIVER_INFO_3W,*LPDRIVER_INFO_3W;
typedef struct _MONITOR_INFO_1A{LPSTR pName;} MONITOR_INFO_1A,*PMONITOR_INFO_1A,*LPMONITOR_INFO_1A;
typedef struct _MONITOR_INFO_1W{LPWSTR pName;} MONITOR_INFO_1W,*PMONITOR_INFO_1W,*LPMONITOR_INFO_1W;
typedef struct _PORT_INFO_1A {LPSTR pName;} PORT_INFO_1A,*PPORT_INFO_1A,*LPPORT_INFO_1A;
typedef struct _PORT_INFO_1W {LPWSTR pName;} PORT_INFO_1W,*PPORT_INFO_1W,*LPPORT_INFO_1W;
typedef struct _MONITOR_INFO_2A{
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDLLName;
} MONITOR_INFO_2A,*PMONITOR_INFO_2A,*LPMONITOR_INFO_2A;
typedef struct _MONITOR_INFO_2W{
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDLLName;
} MONITOR_INFO_2W,*PMONITOR_INFO_2W,*LPMONITOR_INFO_2W;
typedef struct _PORT_INFO_2A {
 LPSTR pPortName;
 LPSTR pMonitorName;
 LPSTR pDescription;
 DWORD fPortType;
 DWORD Reserved;
} PORT_INFO_2A,*PPORT_INFO_2A,*LPPORT_INFO_2A;
typedef struct _PORT_INFO_2W {
 LPWSTR pPortName;
 LPWSTR pMonitorName;
 LPWSTR pDescription;
 DWORD fPortType;
 DWORD Reserved;
} PORT_INFO_2W,*PPORT_INFO_2W,*LPPORT_INFO_2W;
typedef struct _PORT_INFO_3A {
 DWORD dwStatus;
 LPSTR pszStatus;
 DWORD dwSeverity;
} PORT_INFO_3A,*PPORT_INFO_3A,*LPPORT_INFO_3A;
typedef struct _PORT_INFO_3W {
 DWORD dwStatus;
 LPWSTR pszStatus;
 DWORD dwSeverity;
} PORT_INFO_3W,*PPORT_INFO_3W,*LPPORT_INFO_3W;
typedef struct _PRINTER_INFO_1A {
 DWORD Flags;
 LPSTR pDescription;
 LPSTR pName;
 LPSTR pComment;
} PRINTER_INFO_1A,*PPRINTER_INFO_1A,*LPPRINTER_INFO_1A;
typedef struct _PRINTER_INFO_1W {
 DWORD Flags;
 LPWSTR pDescription;
 LPWSTR pName;
 LPWSTR pComment;
} PRINTER_INFO_1W,*PPRINTER_INFO_1W,*LPPRINTER_INFO_1W;
typedef struct _PRINTER_INFO_2A {
 LPSTR pServerName;
 LPSTR pPrinterName;
 LPSTR pShareName;
 LPSTR pPortName;
 LPSTR pDriverName;
 LPSTR pComment;
 LPSTR pLocation;
 LPDEVMODEA pDevMode;
 LPSTR pSepFile;
 LPSTR pPrintProcessor;
 LPSTR pDatatype;
 LPSTR pParameters;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Attributes;
 DWORD Priority;
 DWORD DefaultPriority;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD Status;
 DWORD cJobs;
 DWORD AveragePPM;
} PRINTER_INFO_2A,*PPRINTER_INFO_2A,*LPPRINTER_INFO_2A;
typedef struct _PRINTER_INFO_2W {
 LPWSTR pServerName;
 LPWSTR pPrinterName;
 LPWSTR pShareName;
 LPWSTR pPortName;
 LPWSTR pDriverName;
 LPWSTR pComment;
 LPWSTR pLocation;
 LPDEVMODEW pDevMode;
 LPWSTR pSepFile;
 LPWSTR pPrintProcessor;
 LPWSTR pDatatype;
 LPWSTR pParameters;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Attributes;
 DWORD Priority;
 DWORD DefaultPriority;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD Status;
 DWORD cJobs;
 DWORD AveragePPM;
} PRINTER_INFO_2W,*PPRINTER_INFO_2W,*LPPRINTER_INFO_2W;
typedef struct _PRINTER_INFO_3 {
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
} PRINTER_INFO_3,*PPRINTER_INFO_3,*LPPRINTER_INFO_3;
typedef struct _PRINTER_INFO_4A {
 LPSTR pPrinterName;
 LPSTR pServerName;
 DWORD Attributes;
} PRINTER_INFO_4A,*PPRINTER_INFO_4A,*LPPRINTER_INFO_4A;
typedef struct _PRINTER_INFO_4W {
 LPWSTR pPrinterName;
 LPWSTR pServerName;
 DWORD Attributes;
} PRINTER_INFO_4W,*PPRINTER_INFO_4W,*LPPRINTER_INFO_4W;
typedef struct _PRINTER_INFO_5A {
 LPSTR pPrinterName;
 LPSTR pPortName;
 DWORD Attributes;
 DWORD DeviceNotSelectedTimeout;
 DWORD TransmissionRetryTimeout;
} PRINTER_INFO_5A,*PPRINTER_INFO_5A,*LPPRINTER_INFO_5A;
typedef struct _PRINTER_INFO_5W {
 LPWSTR pPrinterName;
 LPWSTR pPortName;
 DWORD Attributes;
 DWORD DeviceNotSelectedTimeout;
 DWORD TransmissionRetryTimeout;
} PRINTER_INFO_5W,*PPRINTER_INFO_5W,*LPPRINTER_INFO_5W;
typedef struct _PRINTER_INFO_6 {
 DWORD dwStatus;
} PRINTER_INFO_6,*PPRINTER_INFO_6,*LPPRINTER_INFO_6;
typedef struct _PRINTPROCESSOR_INFO_1A {LPSTR pName;} PRINTPROCESSOR_INFO_1A,*PPRINTPROCESSOR_INFO_1A,*LPPRINTPROCESSOR_INFO_1A;
typedef struct _PRINTPROCESSOR_INFO_1W {LPWSTR pName;} PRINTPROCESSOR_INFO_1W,*PPRINTPROCESSOR_INFO_1W,*LPPRINTPROCESSOR_INFO_1W;
typedef struct _PRINTER_NOTIFY_INFO_DATA {
 WORD Type;
 WORD Field;
 DWORD Reserved;
 DWORD Id;
 union {
  DWORD adwData[2];
  struct {
   DWORD cbBuf;
   PVOID pBuf;
  } Data;
 } NotifyData;
} PRINTER_NOTIFY_INFO_DATA,*PPRINTER_NOTIFY_INFO_DATA,*LPPRINTER_NOTIFY_INFO_DATA;
typedef struct _PRINTER_NOTIFY_INFO {
 DWORD Version;
 DWORD Flags;
 DWORD Count;
 PRINTER_NOTIFY_INFO_DATA aData[1];
} PRINTER_NOTIFY_INFO,*PPRINTER_NOTIFY_INFO,*LPPRINTER_NOTIFY_INFO;
typedef struct _FORM_INFO_1A {
 DWORD Flags;
 LPSTR pName;
 SIZEL Size;
 RECTL ImageableArea;
} FORM_INFO_1A,*PFORM_INFO_1A,*LPFORM_INFO_1A;
typedef struct _FORM_INFO_1W {
 DWORD Flags;
 LPWSTR pName;
 SIZEL Size;
 RECTL ImageableArea;
} FORM_INFO_1W,*PFORM_INFO_1W,*LPFORM_INFO_1W;
typedef struct _PRINTER_DEFAULTSA {
 LPSTR pDatatype;
 LPDEVMODE pDevMode;
 ACCESS_MASK DesiredAccess;
} PRINTER_DEFAULTSA,*PPRINTER_DEFAULTSA,*LPPRINTER_DEFAULTSA;
typedef struct _PRINTER_DEFAULTSW {
 LPWSTR pDatatype;
 LPDEVMODE pDevMode;
 ACCESS_MASK DesiredAccess;
} PRINTER_DEFAULTSW,*PPRINTER_DEFAULTSW,*LPPRINTER_DEFAULTSW;

BOOL __attribute__((__stdcall__)) AbortPrinter(HANDLE);
BOOL __attribute__((__stdcall__)) AddFormA(HANDLE,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddFormW(HANDLE,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddJobA(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) AddJobW(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) AddMonitorA(LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddMonitorW(LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPortA(LPSTR,HWND,LPSTR);
BOOL __attribute__((__stdcall__)) AddPortW(LPWSTR,HWND,LPWSTR);
HANDLE __attribute__((__stdcall__)) AddPrinterA(LPSTR,DWORD,PBYTE);
HANDLE __attribute__((__stdcall__)) AddPrinterW(LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrinterConnectionA(LPSTR);
BOOL __attribute__((__stdcall__)) AddPrinterConnectionW(LPWSTR);
BOOL __attribute__((__stdcall__)) AddPrinterDriverA(LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrinterDriverW(LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrintProcessorA(LPSTR,LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) AddPrintProcessorW(LPWSTR,LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) AddPrintProvidorA(LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrintProvidorW(LPWSTR,DWORD,PBYTE);
LONG __attribute__((__stdcall__)) AdvancedDocumentPropertiesA(HWND,HANDLE,LPSTR,PDEVMODE,PDEVMODEA);
LONG __attribute__((__stdcall__)) AdvancedDocumentPropertiesW(HWND,HANDLE,LPWSTR,PDEVMODE,PDEVMODEW);
BOOL __attribute__((__stdcall__)) ClosePrinter(HANDLE);
BOOL __attribute__((__stdcall__)) ConfigurePortA(LPSTR,HWND,LPSTR);
BOOL __attribute__((__stdcall__)) ConfigurePortW(LPWSTR,HWND,LPWSTR);
HANDLE __attribute__((__stdcall__)) ConnectToPrinterDlg(HWND,DWORD);
BOOL __attribute__((__stdcall__)) DeleteFormA(HANDLE,LPSTR);
BOOL __attribute__((__stdcall__)) DeleteFormW(HANDLE,LPWSTR);
BOOL __attribute__((__stdcall__)) DeleteMonitorA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeleteMonitorW(LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePortA(LPSTR,HWND,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePortW(LPWSTR,HWND,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrinter(HANDLE);
BOOL __attribute__((__stdcall__)) DeletePrinterConnectionA(LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrinterConnectionW(LPWSTR);
DWORD __attribute__((__stdcall__)) DeletePrinterDataA(HANDLE,LPSTR);
DWORD __attribute__((__stdcall__)) DeletePrinterDataW(HANDLE,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrinterDriverA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrinterDriverW(LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProcessorA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProcessorW(LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProvidorA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProvidorW(LPWSTR,LPWSTR,LPWSTR);
LONG __attribute__((__stdcall__)) DocumentPropertiesA(HWND,HANDLE,LPSTR,PDEVMODEA,PDEVMODEA,DWORD);
LONG __attribute__((__stdcall__)) DocumentPropertiesW(HWND,HANDLE,LPWSTR,PDEVMODEA,PDEVMODEA,DWORD);
BOOL __attribute__((__stdcall__)) EndDocPrinter(HANDLE);
BOOL __attribute__((__stdcall__)) EndPagePrinter(HANDLE);
BOOL __attribute__((__stdcall__)) EnumFormsA(HANDLE,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumFormsW(HANDLE,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumJobsA(HANDLE,DWORD,DWORD,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumJobsW(HANDLE,DWORD,DWORD,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumMonitorsA(LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumMonitorsW(LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPortsA(LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPortsW(LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) EnumPrinterDataA(HANDLE,DWORD,LPSTR,DWORD,PDWORD,PDWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) EnumPrinterDataW(HANDLE,DWORD,LPWSTR,DWORD,PDWORD,PDWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrinterDriversA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrinterDriversW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintersA(DWORD,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintersW(DWORD,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorDatatypesA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorDatatypesW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorsA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorsW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) FindClosePrinterChangeNotification(HANDLE);
HANDLE __attribute__((__stdcall__)) FindFirstPrinterChangeNotification(HANDLE,DWORD,DWORD,PVOID);
HANDLE __attribute__((__stdcall__)) FindNextPrinterChangeNotification(HANDLE,PDWORD,PVOID,PVOID*);
BOOL __attribute__((__stdcall__)) FreePrinterNotifyInfo(PPRINTER_NOTIFY_INFO);
BOOL __attribute__((__stdcall__)) GetFormA(HANDLE,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetFormW(HANDLE,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetJobA(HANDLE,DWORD,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetJobW(HANDLE,DWORD,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetPrinterA(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetPrinterW(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDataA(HANDLE,LPSTR,PDWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDataW(HANDLE,LPWSTR,PDWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverA(HANDLE,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverW(HANDLE,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverDirectoryA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverDirectoryW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrintProcessorDirectoryA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrintProcessorDirectoryW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) OpenPrinterA(LPSTR,PHANDLE,LPPRINTER_DEFAULTSA);
BOOL __attribute__((__stdcall__)) OpenPrinterW(LPWSTR,PHANDLE,LPPRINTER_DEFAULTSW);
DWORD __attribute__((__stdcall__)) PrinterMessageBoxA(HANDLE,DWORD,HWND,LPSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) PrinterMessageBoxW(HANDLE,DWORD,HWND,LPWSTR,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) PrinterProperties(HWND,HANDLE);
BOOL __attribute__((__stdcall__)) ReadPrinter(HANDLE,PVOID,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ResetPrinterA(HANDLE,LPPRINTER_DEFAULTSA);
BOOL __attribute__((__stdcall__)) ResetPrinterW(HANDLE,LPPRINTER_DEFAULTSW);
BOOL __attribute__((__stdcall__)) ScheduleJob(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetFormA(HANDLE,LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) SetFormW(HANDLE,LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) SetJobA(HANDLE,DWORD,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetJobW(HANDLE,DWORD,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterA(HANDLE,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterW(HANDLE,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterDataA(HANDLE,LPSTR,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterDataW(HANDLE,LPWSTR,DWORD,PBYTE,DWORD);
DWORD __attribute__((__stdcall__)) StartDocPrinterA(HANDLE,DWORD,PBYTE);
DWORD __attribute__((__stdcall__)) StartDocPrinterW(HANDLE,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) StartPagePrinter(HANDLE);
DWORD __attribute__((__stdcall__)) WaitForPrinterChange(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) WritePrinter(HANDLE,PVOID,DWORD,PDWORD);
# 717 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winspool.h" 3
typedef JOB_INFO_1A JOB_INFO_1,*PJOB_INFO_1,*LPJOB_INFO_1;
typedef JOB_INFO_2A JOB_INFO_2,*PJOB_INFO_2,*LPJOB_INFO_2;
typedef ADDJOB_INFO_1A ADDJOB_INFO_1,*PADDJOB_INFO_1,*LPADDJOB_INFO_1;
typedef DATATYPES_INFO_1A DATATYPES_INFO_1,*PDATATYPES_INFO_1,*LPDATATYPES_INFO_1;
typedef MONITOR_INFO_1A MONITOR_INFO_1,*PMONITOR_INFO_1,*LPMONITOR_INFO_1;
typedef MONITOR_INFO_2A MONITOR_INFO_2,*PMONITOR_INFO_2,*LPMONITOR_INFO_2;
typedef DOC_INFO_1A DOC_INFO_1,*PDOC_INFO_1,*LPDOC_INFO_1;
typedef DOC_INFO_2A DOC_INFO_2,*PDOC_INFO_2,*LPDOC_INFO_2;
typedef PORT_INFO_1A PORT_INFO_1,*PPORT_INFO_1,*LPPORT_INFO_1;
typedef PORT_INFO_2A PORT_INFO_2,*PPORT_INFO_2,*LPPORT_INFO_2;
typedef PORT_INFO_3A PORT_INFO_3,*PPORT_INFO_3,*LPPORT_INFO_3;
typedef DRIVER_INFO_2A DRIVER_INFO_2,*PDRIVER_INFO_2,*LPDRIVER_INFO_2;
typedef PRINTER_INFO_1A PRINTER_INFO_1,*PPRINTER_INFO_1,*LPPRINTER_INFO_1;
typedef PRINTER_INFO_2A PRINTER_INFO_2,*PPRINTER_INFO_2,*LPPRINTER_INFO_2;
typedef PRINTER_INFO_4A PRINTER_INFO_4,*PPRINTER_INFO_4,*LPPRINTER_INFO_4;
typedef PRINTER_INFO_5A PRINTER_INFO_5,*PPRINTER_INFO_5,*LPPRINTER_INFO_5;
typedef PRINTPROCESSOR_INFO_1A PRINTPROCESSOR_INFO_1,*PPRINTPROCESSOR_INFO_1,*LPPRINTPROCESSOR_INFO_1;
typedef FORM_INFO_1A FORM_INFO_1,*PFORM_INFO_1,*LPFORM_INFO_1;
typedef PRINTER_DEFAULTSA PRINTER_DEFAULTS,*PPRINTER_DEFAULTS,*LPPRINTER_DEFAULTS;
# 88 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 98 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 1 3
# 17 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
       
# 18 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
# 30 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef u_int SOCKET;
# 53 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
typedef struct fd_set {
 u_int fd_count;
 SOCKET fd_array[64];
} fd_set;
int __attribute__((__stdcall__)) __WSAFDIsSet(SOCKET,fd_set*);
# 101 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
struct timeval {
 long tv_sec;
 long tv_usec;
};







struct hostent {
 char *h_name;
 char **h_aliases;
 short h_addrtype;
 short h_length;
 char **h_addr_list;

};
struct linger {
 u_short l_onoff;
 u_short l_linger;
};
# 147 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
struct netent {
 char * n_name;
 char **n_aliases;
 short n_addrtype;
 u_long n_net;
};
struct servent {
 char *s_name;
 char **s_aliases;
 short s_port;
 char *s_proto;
};
struct protoent {
 char *p_name;
 char **p_aliases;
 short p_proto;
};
# 215 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
struct in_addr {
 union {
  struct { u_char s_b1,s_b2,s_b3,s_b4; } S_un_b;
  struct { u_short s_w1,s_w2; } S_un_w;
  u_long S_addr;
 } S_un;






};
# 246 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
struct sockaddr_in {
 short sin_family;
 u_short sin_port;
 struct in_addr sin_addr;
 char sin_zero[8];
};


typedef struct WSAData {
 WORD wVersion;
 WORD wHighVersion;
 char szDescription[256 +1];
 char szSystemStatus[128 +1];
 unsigned short iMaxSockets;
 unsigned short iMaxUdpDg;
 char * lpVendorInfo;
} WSADATA;
typedef WSADATA *LPWSADATA;
# 327 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
struct sockaddr {
 u_short sa_family;
 char sa_data[14];
};





struct sockaddr_storage {
    short ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct sockproto {
 u_short sp_family;
 u_short sp_protocol;
};
# 515 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
SOCKET __attribute__((__stdcall__)) accept(SOCKET,struct sockaddr*,int*);
int __attribute__((__stdcall__)) bind(SOCKET,const struct sockaddr*,int);
int __attribute__((__stdcall__)) closesocket(SOCKET);
int __attribute__((__stdcall__)) connect(SOCKET,const struct sockaddr*,int);
int __attribute__((__stdcall__)) ioctlsocket(SOCKET,long,u_long *);
int __attribute__((__stdcall__)) getpeername(SOCKET,struct sockaddr*,int*);
int __attribute__((__stdcall__)) getsockname(SOCKET,struct sockaddr*,int*);
int __attribute__((__stdcall__)) getsockopt(SOCKET,int,int,char*,int*);
unsigned long __attribute__((__stdcall__)) inet_addr(const char*);
__attribute__((__stdcall__)) char * inet_ntoa(struct in_addr);
int __attribute__((__stdcall__)) listen(SOCKET,int);
int __attribute__((__stdcall__)) recv(SOCKET,char*,int,int);
int __attribute__((__stdcall__)) recvfrom(SOCKET,char*,int,int,struct sockaddr*,int*);
int __attribute__((__stdcall__)) send(SOCKET,const char*,int,int);
int __attribute__((__stdcall__)) sendto(SOCKET,const char*,int,int,const struct sockaddr*,int);
int __attribute__((__stdcall__)) setsockopt(SOCKET,int,int,const char*,int);
int __attribute__((__stdcall__)) shutdown(SOCKET,int);
SOCKET __attribute__((__stdcall__)) socket(int,int,int);
__attribute__((__stdcall__)) struct hostent * gethostbyaddr(const char*,int,int);
__attribute__((__stdcall__)) struct hostent * gethostbyname(const char*);
__attribute__((__stdcall__)) struct servent * getservbyport(int,const char*);
__attribute__((__stdcall__)) struct servent * getservbyname(const char*,const char*);
__attribute__((__stdcall__)) struct protoent * getprotobynumber(int);
__attribute__((__stdcall__)) struct protoent * getprotobyname(const char*);
int __attribute__((__stdcall__)) WSAStartup(WORD,LPWSADATA);
int __attribute__((__stdcall__)) WSACleanup(void);
void __attribute__((__stdcall__)) WSASetLastError(int);
int __attribute__((__stdcall__)) WSAGetLastError(void);




BOOL __attribute__((__stdcall__)) WSAIsBlocking(void);
int __attribute__((__stdcall__)) WSAUnhookBlockingHook(void);
FARPROC __attribute__((__stdcall__)) WSASetBlockingHook(FARPROC);
int __attribute__((__stdcall__)) WSACancelBlockingCall(void);

HANDLE __attribute__((__stdcall__)) WSAAsyncGetServByName(HWND,u_int,const char*,const char*,char*,int);
HANDLE __attribute__((__stdcall__)) WSAAsyncGetServByPort(HWND,u_int,int,const char*,char*,int);
HANDLE __attribute__((__stdcall__)) WSAAsyncGetProtoByName(HWND,u_int,const char*,char*,int);
HANDLE __attribute__((__stdcall__)) WSAAsyncGetProtoByNumber(HWND,u_int,int,char*,int);
HANDLE __attribute__((__stdcall__)) WSAAsyncGetHostByName(HWND,u_int,const char*,char*,int);
HANDLE __attribute__((__stdcall__)) WSAAsyncGetHostByAddr(HWND,u_int,const char*,int,int,char*,int);
int __attribute__((__stdcall__)) WSACancelAsyncRequest(HANDLE);
int __attribute__((__stdcall__)) WSAAsyncSelect(SOCKET,HWND,u_int,long);

u_long __attribute__((__stdcall__)) htonl(u_long);
u_long __attribute__((__stdcall__)) ntohl(u_long);
u_short __attribute__((__stdcall__)) htons(u_short);
u_short __attribute__((__stdcall__)) ntohs(u_short);
int __attribute__((__stdcall__)) select(int nfds,fd_set*,fd_set*,fd_set*,const struct timeval*);


int __attribute__((__stdcall__)) gethostname(char*,int);
# 577 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
typedef struct sockaddr SOCKADDR;
typedef struct sockaddr *PSOCKADDR;
typedef struct sockaddr *LPSOCKADDR;
typedef struct sockaddr_storage SOCKADDR_STORAGE, *PSOCKADDR_STORAGE;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr_in *PSOCKADDR_IN;
typedef struct sockaddr_in *LPSOCKADDR_IN;
typedef struct linger LINGER;
typedef struct linger *PLINGER;
typedef struct linger *LPLINGER;
typedef struct in_addr IN_ADDR;
typedef struct in_addr *PIN_ADDR;
typedef struct in_addr *LPIN_ADDR;
typedef struct fd_set FD_SET;
typedef struct fd_set *PFD_SET;
typedef struct fd_set *LPFD_SET;
typedef struct hostent HOSTENT;
typedef struct hostent *PHOSTENT;
typedef struct hostent *LPHOSTENT;
typedef struct servent SERVENT;
typedef struct servent *PSERVENT;
typedef struct servent *LPSERVENT;
typedef struct protoent PROTOENT;
typedef struct protoent *PPROTOENT;
typedef struct protoent *LPPROTOENT;
typedef struct timeval TIMEVAL;
typedef struct timeval *PTIMEVAL;
typedef struct timeval *LPTIMEVAL;
# 637 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
typedef struct _OVERLAPPED *LPWSAOVERLAPPED;
# 654 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
typedef struct _WSABUF {
 unsigned long len;
 char *buf;
} WSABUF, *LPWSABUF;

typedef enum
{
 BestEffortService,
 ControlledLoadService,
 PredictiveService,
 GuaranteedDelayService,
 GuaranteedService
} GUARANTEE;
# 678 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
typedef unsigned int SERVICETYPE;
typedef struct _flowspec
{
 unsigned int TokenRate;
 unsigned int TokenBucketSize;
 unsigned int PeakBandwidth;
 unsigned int Latency;
 unsigned int DelayVariation;
 SERVICETYPE ServiceType;
 unsigned int MaxSduSize;
 unsigned int MinimumPolicedSize;
   } FLOWSPEC, *PFLOWSPEC, *LPFLOWSPEC;

typedef struct _QualityOfService
{
 FLOWSPEC SendingFlowspec;
 FLOWSPEC ReceivingFlowspec;
 WSABUF ProviderSpecific;
} QOS, *LPQOS;







typedef unsigned int GROUP;



typedef struct _WSANETWORKEVENTS {
 long lNetworkEvents;
 int iErrorCode[10];
} WSANETWORKEVENTS, *LPWSANETWORKEVENTS;






typedef enum _WSAESETSERVICEOP
{
 RNRSERVICE_REGISTER=0,
 RNRSERVICE_DEREGISTER,
 RNRSERVICE_DELETE
} WSAESETSERVICEOP, *PWSAESETSERVICEOP, *LPWSAESETSERVICEOP;

typedef struct _AFPROTOCOLS {
 INT iAddressFamily;
 INT iProtocol;
} AFPROTOCOLS, *PAFPROTOCOLS, *LPAFPROTOCOLS;

typedef enum _WSAEcomparator
{
 COMP_EQUAL = 0,
 COMP_NOTLESS
} WSAECOMPARATOR, *PWSAECOMPARATOR, *LPWSAECOMPARATOR;

typedef struct _WSAVersion
{
 DWORD dwVersion;
 WSAECOMPARATOR ecHow;
} WSAVERSION, *PWSAVERSION, *LPWSAVERSION;



typedef struct _SOCKET_ADDRESS {
 LPSOCKADDR lpSockaddr;
 INT iSockaddrLength;
} SOCKET_ADDRESS,*PSOCKET_ADDRESS,*LPSOCKET_ADDRESS;
typedef struct _CSADDR_INFO {
 SOCKET_ADDRESS LocalAddr;
 SOCKET_ADDRESS RemoteAddr;
 INT iSocketType;
 INT iProtocol;
} CSADDR_INFO,*PCSADDR_INFO,*LPCSADDR_INFO;


typedef struct _SOCKET_ADDRESS_LIST {
    INT iAddressCount;
    SOCKET_ADDRESS Address[1];
} SOCKET_ADDRESS_LIST, * LPSOCKET_ADDRESS_LIST;



typedef struct _BLOB {
 ULONG cbSize;
 BYTE *pBlobData;
} BLOB,*PBLOB,*LPBLOB;


typedef struct _WSAQuerySetA
{
 DWORD dwSize;
 LPSTR lpszServiceInstanceName;
 LPGUID lpServiceClassId;
 LPWSAVERSION lpVersion;
 LPSTR lpszComment;
 DWORD dwNameSpace;
 LPGUID lpNSProviderId;
 LPSTR lpszContext;
 DWORD dwNumberOfProtocols;
 LPAFPROTOCOLS lpafpProtocols;
 LPSTR lpszQueryString;
 DWORD dwNumberOfCsAddrs;
 LPCSADDR_INFO lpcsaBuffer;
 DWORD dwOutputFlags;
 LPBLOB lpBlob;
} WSAQUERYSETA, *PWSAQUERYSETA, *LPWSAQUERYSETA;

typedef struct _WSAQuerySetW
{
 DWORD dwSize;
 LPWSTR lpszServiceInstanceName;
 LPGUID lpServiceClassId;
 LPWSAVERSION lpVersion;
 LPWSTR lpszComment;
 DWORD dwNameSpace;
 LPGUID lpNSProviderId;
 LPWSTR lpszContext;
 DWORD dwNumberOfProtocols;
 LPAFPROTOCOLS lpafpProtocols;
 LPWSTR lpszQueryString;
 DWORD dwNumberOfCsAddrs;
 LPCSADDR_INFO lpcsaBuffer;
 DWORD dwOutputFlags;
 LPBLOB lpBlob;
} WSAQUERYSETW, *PWSAQUERYSETW, *LPWSAQUERYSETW;






typedef WSAQUERYSETA WSAQUERYSET;
typedef PWSAQUERYSETA PWSAQUERYSET;
typedef LPWSAQUERYSETA LPWSAQUERYSET;


typedef struct _WSANSClassInfoA
{
 LPSTR lpszName;
 DWORD dwNameSpace;
 DWORD dwValueType;
 DWORD dwValueSize;
 LPVOID lpValue;
} WSANSCLASSINFOA, *PWSANSCLASSINFOA, *LPWSANSCLASSINFOA;

typedef struct _WSANSClassInfoW
{
 LPWSTR lpszName;
 DWORD dwNameSpace;
 DWORD dwValueType;
 DWORD dwValueSize;
 LPVOID lpValue;
} WSANSCLASSINFOW, *PWSANSCLASSINFOW, *LPWSANSCLASSINFOW;






typedef WSANSCLASSINFOA WSANSCLASSINFO;
typedef PWSANSCLASSINFOA PWSANSCLASSINFO;
typedef LPWSANSCLASSINFOA LPWSANSCLASSINFO;


typedef struct _WSAServiceClassInfoA
{
 LPGUID lpServiceClassId;
 LPSTR lpszServiceClassName;
 DWORD dwCount;
 LPWSANSCLASSINFOA lpClassInfos;
} WSASERVICECLASSINFOA, *PWSASERVICECLASSINFOA, *LPWSASERVICECLASSINFOA;

typedef struct _WSAServiceClassInfoW
{
 LPGUID lpServiceClassId;
 LPWSTR lpszServiceClassName;
 DWORD dwCount;
 LPWSANSCLASSINFOW lpClassInfos;
} WSASERVICECLASSINFOW, *PWSASERVICECLASSINFOW, *LPWSASERVICECLASSINFOW;






typedef WSASERVICECLASSINFOA WSASERVICECLASSINFO;
typedef PWSASERVICECLASSINFOA PWSASERVICECLASSINFO;
typedef LPWSASERVICECLASSINFOA LPWSASERVICECLASSINFO;


typedef struct _WSANAMESPACE_INFOA {
 GUID NSProviderId;
 DWORD dwNameSpace;
 BOOL fActive;
 DWORD dwVersion;
 LPSTR lpszIdentifier;
} WSANAMESPACE_INFOA, *PWSANAMESPACE_INFOA, *LPWSANAMESPACE_INFOA;

typedef struct _WSANAMESPACE_INFOW {
 GUID NSProviderId;
 DWORD dwNameSpace;
 BOOL fActive;
 DWORD dwVersion;
 LPWSTR lpszIdentifier;
} WSANAMESPACE_INFOW, *PWSANAMESPACE_INFOW, *LPWSANAMESPACE_INFOW;






typedef WSANAMESPACE_INFOA WSANAMESPACE_INFO;
typedef PWSANAMESPACE_INFOA PWSANAMESPACE_INFO;
typedef LPWSANAMESPACE_INFOA LPWSANAMESPACE_INFO;


typedef struct _WSAPROTOCOLCHAIN {
 int ChainLen;
 DWORD ChainEntries[7];
} WSAPROTOCOLCHAIN, *LPWSAPROTOCOLCHAIN;



typedef struct _WSAPROTOCOL_INFOA {
 DWORD dwServiceFlags1;
 DWORD dwServiceFlags2;
 DWORD dwServiceFlags3;
 DWORD dwServiceFlags4;
 DWORD dwProviderFlags;
 GUID ProviderId;
 DWORD dwCatalogEntryId;
 WSAPROTOCOLCHAIN ProtocolChain;
 int iVersion;
 int iAddressFamily;
 int iMaxSockAddr;
 int iMinSockAddr;
 int iSocketType;
 int iProtocol;
 int iProtocolMaxOffset;
 int iNetworkByteOrder;
 int iSecurityScheme;
 DWORD dwMessageSize;
 DWORD dwProviderReserved;
 CHAR szProtocol[255 +1];
} WSAPROTOCOL_INFOA, *LPWSAPROTOCOL_INFOA;

typedef struct _WSAPROTOCOL_INFOW {
 DWORD dwServiceFlags1;
 DWORD dwServiceFlags2;
 DWORD dwServiceFlags3;
 DWORD dwServiceFlags4;
 DWORD dwProviderFlags;
 GUID ProviderId;
 DWORD dwCatalogEntryId;
 WSAPROTOCOLCHAIN ProtocolChain;
 int iVersion;
 int iAddressFamily;
 int iMaxSockAddr;
 int iMinSockAddr;
 int iSocketType;
 int iProtocol;
 int iProtocolMaxOffset;
 int iNetworkByteOrder;
 int iSecurityScheme;
 DWORD dwMessageSize;
 DWORD dwProviderReserved;
 WCHAR szProtocol[255 +1];
} WSAPROTOCOL_INFOW, * LPWSAPROTOCOL_INFOW;

typedef int (__attribute__((__stdcall__)) *LPCONDITIONPROC)(LPWSABUF, LPWSABUF, LPQOS, LPQOS, LPWSABUF, LPWSABUF, GROUP *, DWORD);
typedef void (__attribute__((__stdcall__)) *LPWSAOVERLAPPED_COMPLETION_ROUTINE)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD);






typedef WSAPROTOCOL_INFOA WSAPROTOCOL_INFO;
typedef LPWSAPROTOCOL_INFOA LPWSAPROTOCOL_INFO;



typedef enum _WSACOMPLETIONTYPE {
    NSP_NOTIFY_IMMEDIATELY = 0,
    NSP_NOTIFY_HWND,
    NSP_NOTIFY_EVENT,
    NSP_NOTIFY_PORT,
    NSP_NOTIFY_APC
} WSACOMPLETIONTYPE, * PWSACOMPLETIONTYPE, * LPWSACOMPLETIONTYPE;
typedef struct _WSACOMPLETION {
    WSACOMPLETIONTYPE Type;
    union {
        struct {
            HWND hWnd;
            UINT uMsg;
            WPARAM context;
        } WindowMessage;
        struct {
            LPWSAOVERLAPPED lpOverlapped;
        } Event;
        struct {
            LPWSAOVERLAPPED lpOverlapped;
            LPWSAOVERLAPPED_COMPLETION_ROUTINE lpfnCompletionProc;
        } Apc;
        struct {
            LPWSAOVERLAPPED lpOverlapped;
            HANDLE hPort;
            ULONG_PTR Key;
        } Port;
    } Parameters;
} WSACOMPLETION, *PWSACOMPLETION, *LPWSACOMPLETION;
# 1062 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winsock2.h" 3
SOCKET __attribute__((__stdcall__)) WSAAccept(SOCKET, struct sockaddr *, LPINT, LPCONDITIONPROC, DWORD);
INT __attribute__((__stdcall__)) WSAAddressToStringA(LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOA, LPSTR, LPDWORD);
INT __attribute__((__stdcall__)) WSAAddressToStringW(LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOW, LPWSTR, LPDWORD);
BOOL __attribute__((__stdcall__)) WSACloseEvent(HANDLE);
int __attribute__((__stdcall__)) WSAConnect(SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS);
HANDLE __attribute__((__stdcall__)) WSACreateEvent(void);
int __attribute__((__stdcall__)) WSADuplicateSocketA(SOCKET, DWORD, LPWSAPROTOCOL_INFOA);
int __attribute__((__stdcall__)) WSADuplicateSocketW(SOCKET, DWORD, LPWSAPROTOCOL_INFOW);
INT __attribute__((__stdcall__)) WSAEnumNameSpaceProvidersA(LPDWORD, LPWSANAMESPACE_INFOA);
INT __attribute__((__stdcall__)) WSAEnumNameSpaceProvidersW(LPDWORD, LPWSANAMESPACE_INFOW);
int __attribute__((__stdcall__)) WSAEnumNetworkEvents(SOCKET, HANDLE, LPWSANETWORKEVENTS);
int __attribute__((__stdcall__)) WSAEnumProtocolsA(LPINT, LPWSAPROTOCOL_INFOA, LPDWORD);
int __attribute__((__stdcall__)) WSAEnumProtocolsW(LPINT, LPWSAPROTOCOL_INFOW, LPDWORD);
int __attribute__((__stdcall__)) WSAEventSelect(SOCKET, HANDLE, long);
BOOL __attribute__((__stdcall__)) WSAGetOverlappedResult(SOCKET, LPWSAOVERLAPPED, LPDWORD, BOOL, LPDWORD);
BOOL __attribute__((__stdcall__)) WSAGetQOSByName(SOCKET, LPWSABUF, LPQOS);
INT __attribute__((__stdcall__)) WSAGetServiceClassInfoA(LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOA);
INT __attribute__((__stdcall__)) WSAGetServiceClassInfoW(LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOW);
INT __attribute__((__stdcall__)) WSAGetServiceClassNameByClassIdA(LPGUID, LPSTR, LPDWORD);
INT __attribute__((__stdcall__)) WSAGetServiceClassNameByClassIdW(LPGUID, LPWSTR, LPDWORD);
int __attribute__((__stdcall__)) WSAHtonl(SOCKET, unsigned long, unsigned long *);
int __attribute__((__stdcall__)) WSAHtons(SOCKET, unsigned short, unsigned short *);
INT __attribute__((__stdcall__)) WSAInstallServiceClassA(LPWSASERVICECLASSINFOA);
INT __attribute__((__stdcall__)) WSAInstallServiceClassW(LPWSASERVICECLASSINFOW);
int __attribute__((__stdcall__)) WSAIoctl(SOCKET, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
SOCKET __attribute__((__stdcall__)) WSAJoinLeaf(SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS, DWORD);
INT __attribute__((__stdcall__)) WSALookupServiceBeginA(LPWSAQUERYSETA, DWORD, LPHANDLE);
INT __attribute__((__stdcall__)) WSALookupServiceBeginW(LPWSAQUERYSETW lpqsRestrictions, DWORD, LPHANDLE);
INT __attribute__((__stdcall__)) WSALookupServiceNextA(HANDLE, DWORD, LPDWORD, LPWSAQUERYSETA);
INT __attribute__((__stdcall__)) WSALookupServiceNextW(HANDLE, DWORD, LPDWORD, LPWSAQUERYSETW);
INT __attribute__((__stdcall__)) WSALookupServiceEnd(HANDLE);
int __attribute__((__stdcall__)) WSANSPIoctl(HANDLE,DWORD,LPVOID,DWORD,LPVOID,DWORD,LPDWORD,LPWSACOMPLETION);
int __attribute__((__stdcall__)) WSANtohl(SOCKET, unsigned long, unsigned long *);
int __attribute__((__stdcall__)) WSANtohs(SOCKET, unsigned short, unsigned short *);
int __attribute__((__stdcall__)) WSARecv(SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
int __attribute__((__stdcall__)) WSARecvDisconnect(SOCKET, LPWSABUF);
int __attribute__((__stdcall__)) WSARecvFrom(SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, struct sockaddr *, LPINT, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
INT __attribute__((__stdcall__)) WSARemoveServiceClass(LPGUID);
BOOL __attribute__((__stdcall__)) WSAResetEvent(HANDLE);
int __attribute__((__stdcall__)) WSASend(SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
int __attribute__((__stdcall__)) WSASendDisconnect(SOCKET, LPWSABUF);
int __attribute__((__stdcall__)) WSASendTo(SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, const struct sockaddr *, int, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
BOOL __attribute__((__stdcall__)) WSASetEvent(HANDLE);
INT __attribute__((__stdcall__)) WSASetServiceA(LPWSAQUERYSETA, WSAESETSERVICEOP, DWORD);
INT __attribute__((__stdcall__)) WSASetServiceW(LPWSAQUERYSETW, WSAESETSERVICEOP, DWORD);
SOCKET __attribute__((__stdcall__)) WSASocketA(int, int, int, LPWSAPROTOCOL_INFOA, GROUP, DWORD);
SOCKET __attribute__((__stdcall__)) WSASocketW(int, int, int, LPWSAPROTOCOL_INFOW, GROUP, DWORD);
INT __attribute__((__stdcall__)) WSAStringToAddressA(LPSTR, INT, LPWSAPROTOCOL_INFOA, LPSOCKADDR, LPINT);
INT __attribute__((__stdcall__)) WSAStringToAddressW(LPWSTR, INT, LPWSAPROTOCOL_INFOW, LPSOCKADDR, LPINT);
DWORD __attribute__((__stdcall__)) WSAWaitForMultipleEvents(DWORD, const HANDLE *, BOOL, DWORD, BOOL);
typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSAACCEPT)(SOCKET, struct sockaddr *, LPINT, LPCONDITIONPROC, DWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAADDRESSTOSTRINGA)(LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOA, LPSTR, LPDWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAADDRESSTOSTRINGW)(LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOW, LPWSTR, LPDWORD);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSACLOSEEVENT)(HANDLE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSACONNECT)(SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS);
typedef HANDLE (__attribute__((__stdcall__)) *LPFN_WSACREATEEVENT)(void);
typedef int (__attribute__((__stdcall__)) *LPFN_WSADUPLICATESOCKETA)(SOCKET, DWORD, LPWSAPROTOCOL_INFOA);
typedef int (__attribute__((__stdcall__)) *LPFN_WSADUPLICATESOCKETW)(SOCKET, DWORD, LPWSAPROTOCOL_INFOW);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAENUMNAMESPACEPROVIDERSA)(LPDWORD, LPWSANAMESPACE_INFOA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAENUMNAMESPACEPROVIDERSW)(LPDWORD, LPWSANAMESPACE_INFOW);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAENUMNETWORKEVENTS)(SOCKET, HANDLE, LPWSANETWORKEVENTS);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAENUMPROTOCOLSA)(LPINT, LPWSAPROTOCOL_INFOA, LPDWORD);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAENUMPROTOCOLSW)(LPINT, LPWSAPROTOCOL_INFOW, LPDWORD);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAEVENTSELECT)(SOCKET, HANDLE, long);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSAGETOVERLAPPEDRESULT)(SOCKET, LPWSAOVERLAPPED, LPDWORD, BOOL, LPDWORD);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSAGETQOSBYNAME)(SOCKET, LPWSABUF, LPQOS);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSINFOA)(LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSINFOW)(LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOW);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSNAMEBYCLASSIDA)(LPGUID, LPSTR, LPDWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSNAMEBYCLASSIDW)(LPGUID, LPWSTR, LPDWORD);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAHTONL)(SOCKET, unsigned long, unsigned long *);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAHTONS)(SOCKET, unsigned short, unsigned short *);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAINSTALLSERVICECLASSA)(LPWSASERVICECLASSINFOA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAINSTALLSERVICECLASSW)(LPWSASERVICECLASSINFOW);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAIOCTL)(SOCKET, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSAJOINLEAF)(SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS, DWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICEBEGINA)(LPWSAQUERYSETA, DWORD, LPHANDLE);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICEBEGINW)(LPWSAQUERYSETW, DWORD, LPHANDLE);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICENEXTA)(HANDLE, DWORD, LPDWORD, LPWSAQUERYSETA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICENEXTW)(HANDLE, DWORD, LPDWORD, LPWSAQUERYSETW);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICEEND)(HANDLE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSANSPIoctl)(HANDLE, DWORD,LPVOID,DWORD,LPVOID,DWORD,LPDWORD,LPWSACOMPLETION);
typedef int (__attribute__((__stdcall__)) *LPFN_WSANTOHL)(SOCKET, unsigned long, unsigned long *);
typedef int (__attribute__((__stdcall__)) *LPFN_WSANTOHS)(SOCKET, unsigned short, unsigned short *);
typedef int (__attribute__((__stdcall__)) *LPFN_WSARECV)(SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSARECVDISCONNECT)(SOCKET, LPWSABUF);
typedef int (__attribute__((__stdcall__)) *LPFN_WSARECVFROM)(SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, struct sockaddr *, LPINT, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAREMOVESERVICECLASS)(LPGUID);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSARESETEVENT)(HANDLE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSASEND)(SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSASENDDISCONNECT)(SOCKET, LPWSABUF);
typedef int (__attribute__((__stdcall__)) *LPFN_WSASENDTO)(SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, const struct sockaddr *, int, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSASETEVENT)(HANDLE);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSASETSERVICEA)(LPWSAQUERYSETA, WSAESETSERVICEOP, DWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSASETSERVICEW)(LPWSAQUERYSETW, WSAESETSERVICEOP, DWORD);
typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSASOCKETA)(int, int, int, LPWSAPROTOCOL_INFOA, GROUP, DWORD);
typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSASOCKETW)(int, int, int, LPWSAPROTOCOL_INFOW, GROUP, DWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSASTRINGTOADDRESSA)(LPSTR, INT, LPWSAPROTOCOL_INFOA, LPSOCKADDR, LPINT);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSASTRINGTOADDRESSW)(LPWSTR, INT, LPWSAPROTOCOL_INFOW, LPSOCKADDR, LPINT);
typedef DWORD (__attribute__((__stdcall__)) *LPFN_WSAWAITFORMULTIPLEEVENTS)(DWORD, const HANDLE *, BOOL, DWORD, BOOL);
# 99 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 111 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ole2.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ole2.h" 3


#pragma pack(push,8)

# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 1 3


# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 1 3
# 4 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcndr.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcndr.h" 3





# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcnsip.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcnsip.h" 3





typedef struct {
 RPC_NS_HANDLE LookupContext;
 RPC_BINDING_HANDLE ProposedHandle;
 RPC_BINDING_VECTOR *Bindings;
} RPC_IMPORT_CONTEXT_P,*PRPC_IMPORT_CONTEXT_P;
RPC_STATUS __attribute__((__stdcall__)) I_RpcNsGetBuffer( PRPC_MESSAGE);
RPC_STATUS __attribute__((__stdcall__)) I_RpcNsSendReceive( PRPC_MESSAGE, RPC_BINDING_HANDLE*);
void __attribute__((__stdcall__)) I_RpcNsRaiseException( PRPC_MESSAGE, RPC_STATUS);
RPC_STATUS __attribute__((__stdcall__)) I_RpcReBindBuffer( PRPC_MESSAGE);
RPC_STATUS __attribute__((__stdcall__)) I_NsServerBindSearch(void);
RPC_STATUS __attribute__((__stdcall__)) I_NsClientBindSearch(void);
void __attribute__((__stdcall__)) I_NsClientBindDone(void);
# 11 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcndr.h" 2 3



# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objfwd.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objfwd.h" 3







typedef struct IMoniker *LPMONIKER;
typedef struct IStream *LPSTREAM;
typedef struct IMarshal *LPMARSHAL;
typedef struct IMalloc *LPMALLOC;
typedef struct IMallocSpy *LPMALLOCSPY;
typedef struct IMessageFilter *LPMESSAGEFILTER;
typedef struct IPersist *LPPERSIST;
typedef struct IPersistStream *LPPERSISTSTREAM;
typedef struct IRunningObjectTable *LPRUNNINGOBJECTTABLE;
typedef struct IBindCtx *LPBINDCTX,*LPBC;
typedef struct IAdviseSink *LPADVISESINK;
typedef struct IAdviseSink2 *LPADVISESINK2;
typedef struct IDataObject *LPDATAOBJECT;
typedef struct IDataAdviseHolder *LPDATAADVISEHOLDER;
typedef struct IEnumMoniker *LPENUMMONIKER;
typedef struct IEnumFORMATETC *LPENUMFORMATETC;
typedef struct IEnumSTATDATA *LPENUMSTATDATA;
typedef struct IEnumSTATSTG *LPENUMSTATSTG;
typedef struct IEnumSTATPROPSTG LPENUMSTATPROPSTG;
typedef struct IEnumString *LPENUMSTRING;
typedef struct IEnumUnknown *LPENUMUNKNOWN;
typedef struct IStorage *LPSTORAGE;
typedef struct IPersistStorage *LPPERSISTSTORAGE;
typedef struct ILockBytes *LPLOCKBYTES;
typedef struct IStdMarshalInfo *LPSTDMARSHALINFO;
typedef struct IExternalConnection *LPEXTERNALCONNECTION;
typedef struct IRunnableObject *LPRUNNABLEOBJECT;
typedef struct IROTData *LPROTDATA;
typedef struct IPersistFile *LPPERSISTFILE;
typedef struct IRootStorage *LPROOTSTORAGE;
typedef struct IRpcChannelBuffer *LPRPCCHANNELBUFFER;
typedef struct IRpcProxyBuffer *LPRPCPROXYBUFFER;
typedef struct IRpcStubBuffer *LPRPCSTUBBUFFER;
typedef struct IPropertyStorage *LPPROPERTYSTORAGE;
typedef struct IEnumSTATPROPSETSTG *LPENUMSTATPROPSETSTG;
typedef struct IPropertySetStorage *LPPROPERTYSETSTORAGE;
typedef struct IClientSecurity *LPCLIENTSECURITY;
typedef struct IServerSecurity *LPSERVERSECURITY;
typedef struct IClassActivator *LPCLASSACTIVATOR;
typedef struct IFillLockBytes *LPFILLLOCKBYTES;
typedef struct IProgressNotify *LPPROGRESSNOTIFY;
typedef struct ILayoutStorage *LPLAYOUTSTORAGE;
# 15 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcndr.h" 2 3
# 50 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcndr.h" 3
typedef unsigned char byte;
# 94 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpcndr.h" 3
typedef void *NDR_CCONTEXT;
typedef struct {
 void *pad[2];
 void *userContext;
} *NDR_SCONTEXT;
typedef void (__attribute__((__stdcall__)) *NDR_RUNDOWN)(void*);
typedef struct _SCONTEXT_QUEUE {
 unsigned long NumberOfObjects;
 NDR_SCONTEXT *ArrayOfObjects;
} SCONTEXT_QUEUE,*PSCONTEXT_QUEUE;
struct _MIDL_STUB_MESSAGE;
struct _MIDL_STUB_DESC;
struct _FULL_PTR_XLAT_TABLES;
typedef unsigned char *RPC_BUFPTR;
typedef unsigned long RPC_LENGTH;
typedef void(__attribute__((__stdcall__)) *EXPR_EVAL)(struct _MIDL_STUB_MESSAGE*);
typedef const unsigned char *PFORMAT_STRING;
typedef struct {
 long Dimension;
 unsigned long *BufferConformanceMark;
 unsigned long *BufferVarianceMark;
 unsigned long *MaxCountArray;
 unsigned long *OffsetArray;
 unsigned long *ActualCountArray;
} ARRAY_INFO,*PARRAY_INFO;

RPC_BINDING_HANDLE __attribute__((__stdcall__)) NDRCContextBinding(NDR_CCONTEXT);
void __attribute__((__stdcall__)) NDRCContextMarshall(NDR_CCONTEXT,void*);
void __attribute__((__stdcall__)) NDRCContextUnmarshall(NDR_CCONTEXT*,RPC_BINDING_HANDLE,void*,unsigned long);
void __attribute__((__stdcall__)) NDRSContextMarshall(NDR_SCONTEXT,void*,NDR_RUNDOWN);
NDR_SCONTEXT __attribute__((__stdcall__)) NDRSContextUnmarshall(void*pBuff,unsigned long);
void __attribute__((__stdcall__)) RpcSsDestroyClientContext(void**);
void __attribute__((__stdcall__)) NDRcopy(void*,void*,unsigned int);
unsigned int __attribute__((__stdcall__)) MIDL_wchar_strlen(wchar_t*);
void __attribute__((__stdcall__)) MIDL_wchar_strcpy(void*,wchar_t*);
void __attribute__((__stdcall__)) char_from_ndr(PRPC_MESSAGE,unsigned char*);
void __attribute__((__stdcall__)) char_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,unsigned char*);
void __attribute__((__stdcall__)) short_from_ndr(PRPC_MESSAGE,unsigned short*);
void __attribute__((__stdcall__)) short_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,unsigned short*);
void __attribute__((__stdcall__)) short_from_ndr_temp(unsigned char**,unsigned short*,unsigned long);
void __attribute__((__stdcall__)) long_from_ndr(PRPC_MESSAGE,unsigned long*);
void __attribute__((__stdcall__)) long_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,unsigned long*);
void __attribute__((__stdcall__)) long_from_ndr_temp(unsigned char**,unsigned long*,unsigned long);
void __attribute__((__stdcall__)) enum_from_ndr(PRPC_MESSAGE,unsigned int*);
void __attribute__((__stdcall__)) float_from_ndr(PRPC_MESSAGE,void*);
void __attribute__((__stdcall__)) float_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,void*);
void __attribute__((__stdcall__)) double_from_ndr(PRPC_MESSAGE,void*);
void __attribute__((__stdcall__)) double_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,void*);
void __attribute__((__stdcall__)) hyper_from_ndr(PRPC_MESSAGE,long long*);
void __attribute__((__stdcall__)) hyper_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,long long*);
void __attribute__((__stdcall__)) hyper_from_ndr_temp(unsigned char**,long long*,unsigned long);
void __attribute__((__stdcall__)) data_from_ndr(PRPC_MESSAGE,void*,char*,unsigned char);
void __attribute__((__stdcall__)) data_into_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) tree_into_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) data_size_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) tree_size_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) tree_peek_ndr(PRPC_MESSAGE,unsigned char**,char*,unsigned char);
void *__attribute__((__stdcall__)) midl_allocate(int);

#pragma pack(push,4)
typedef struct _MIDL_STUB_MESSAGE {
 PRPC_MESSAGE RpcMsg;
 unsigned char *Buffer;
 unsigned char *BufferStart;
 unsigned char *BufferEnd;
 unsigned char *BufferMark;
 unsigned long BufferLength;
 unsigned long MemorySize;
 unsigned char *Memory;
 int IsClient;
 int ReuseBuffer;
 unsigned char *AllocAllNodesMemory;
 unsigned char *AllocAllNodesMemoryEnd;
 int IgnoreEmbeddedPointers;
 unsigned char *PointerBufferMark;
 unsigned char fBufferValid;
 unsigned char Unused;
 unsigned long MaxCount;
 unsigned long Offset;
 unsigned long ActualCount;
 void*(__attribute__((__stdcall__)) *pfnAllocate)(unsigned int);
 void(__attribute__((__stdcall__)) *pfnFree)(void*);
 unsigned char *StackTop;
 unsigned char *pPresentedType;
 unsigned char *pTransmitType;
 handle_t SavedHandle;
 const struct _MIDL_STUB_DESC *StubDesc;
 struct _FULL_PTR_XLAT_TABLES *FullPtrXlatTables;
 unsigned long FullPtrRefId;
 int fCheckBounds;
 int fInDontFree :1;
 int fDontCallFreeInst :1;
 int fInOnlyParam :1;
 int fHasReturn :1;
 unsigned long dwDestContext;
 void*pvDestContext;
 NDR_SCONTEXT *SavedContextHandles;
 long ParamNumber;
 struct IRpcChannelBuffer *pRpcChannelBuffer;
 PARRAY_INFO pArrayInfo;
 unsigned long *SizePtrCountArray;
 unsigned long *SizePtrOffsetArray;
 unsigned long *SizePtrLengthArray;
 void*pArgQueue;
 unsigned long dwStubPhase;
 unsigned long Reserved[5];
} MIDL_STUB_MESSAGE,*PMIDL_STUB_MESSAGE;
#pragma pack(pop)
typedef void*(__attribute__((__stdcall__)) *GENERIC_BINDING_ROUTINE)(void*);
typedef void (__attribute__((__stdcall__)) *GENERIC_UNBIND_ROUTINE)(void*,unsigned char*);
typedef struct _GENERIC_BINDING_ROUTINE_PAIR {
 GENERIC_BINDING_ROUTINE pfnBind;
 GENERIC_UNBIND_ROUTINE pfnUnbind;
} GENERIC_BINDING_ROUTINE_PAIR,*PGENERIC_BINDING_ROUTINE_PAIR;
typedef struct __GENERIC_BINDING_INFO {
 void *pObj;
 unsigned int Size;
 GENERIC_BINDING_ROUTINE pfnBind;
 GENERIC_UNBIND_ROUTINE pfnUnbind;
} GENERIC_BINDING_INFO,*PGENERIC_BINDING_INFO;
typedef void(__attribute__((__stdcall__)) *XMIT_HELPER_ROUTINE)(PMIDL_STUB_MESSAGE);
typedef struct _XMIT_ROUTINE_QUINTUPLE {
 XMIT_HELPER_ROUTINE pfnTranslateToXmit;
 XMIT_HELPER_ROUTINE pfnTranslateFromXmit;
 XMIT_HELPER_ROUTINE pfnFreeXmit;
 XMIT_HELPER_ROUTINE pfnFreeInst;
} XMIT_ROUTINE_QUINTUPLE,*PXMIT_ROUTINE_QUINTUPLE;
typedef struct _MALLOC_FREE_STRUCT {
void*(__attribute__((__stdcall__)) *pfnAllocate)(unsigned int);
void(__attribute__((__stdcall__)) *pfnFree)(void*);
} MALLOC_FREE_STRUCT;
typedef struct _COMM_FAULT_OFFSETS {
 short CommOffset;
 short FaultOffset;
} COMM_FAULT_OFFSETS;
typedef struct _MIDL_STUB_DESC {
 void*RpcInterfaceInformation;
 void*(__attribute__((__stdcall__)) *pfnAllocate)(unsigned int);
 void(__attribute__((__stdcall__)) *pfnFree)(void*);
 union {
  handle_t *pAutoHandle;
  handle_t *pPrimitiveHandle;
  PGENERIC_BINDING_INFO pGenericBindingInfo;
 } IMPLICIT_HANDLE_INFO;
 const NDR_RUNDOWN *apfnNdrRundownRoutines;
 const GENERIC_BINDING_ROUTINE_PAIR *aGenericBindingRoutinePairs;
 const EXPR_EVAL *apfnExprEval;
 const XMIT_ROUTINE_QUINTUPLE *aXmitQuintuple;
 const unsigned char *pFormatTypes;
 int fCheckBounds;
 unsigned long Version;
 MALLOC_FREE_STRUCT *pMallocFreeStruct;
 long MIDLVersion;
 const COMM_FAULT_OFFSETS *CommFaultOffsets;
} MIDL_STUB_DESC;
typedef const MIDL_STUB_DESC *PMIDL_STUB_DESC;
typedef void*PMIDL_XMIT_TYPE;
typedef struct _MIDL_FORMAT_STRING {
 short Pad;
 unsigned char Format[1];
} MIDL_FORMAT_STRING;
typedef void(__attribute__((__stdcall__)) *STUB_THUNK)(PMIDL_STUB_MESSAGE);
typedef long(__attribute__((__stdcall__)) *SERVER_ROUTINE)(void);
typedef struct _MIDL_SERVER_INFO_ {
 PMIDL_STUB_DESC pStubDesc;
 const SERVER_ROUTINE *DispatchTable;
 PFORMAT_STRING ProcString;
 const unsigned short *FmtStringOffset;
 const STUB_THUNK *ThunkTable;
} MIDL_SERVER_INFO,*PMIDL_SERVER_INFO;
typedef struct _MIDL_STUBLESS_PROXY_INFO {
 PMIDL_STUB_DESC pStubDesc;
 PFORMAT_STRING ProcFormatString;
 const unsigned short *FormatStringOffset;
} MIDL_STUBLESS_PROXY_INFO;
typedef MIDL_STUBLESS_PROXY_INFO *PMIDL_STUBLESS_PROXY_INFO;
typedef union _CLIENT_CALL_RETURN {
 void *Pointer;
 long Simple;
} CLIENT_CALL_RETURN;
typedef enum { XLAT_SERVER = 1,XLAT_CLIENT } XLAT_SIDE;
typedef struct _FULL_PTR_TO_REFID_ELEMENT {
 struct _FULL_PTR_TO_REFID_ELEMENT *Next;
 void*Pointer;
 unsigned long RefId;
 unsigned char State;
} FULL_PTR_TO_REFID_ELEMENT,*PFULL_PTR_TO_REFID_ELEMENT;
typedef struct _FULL_PTR_XLAT_TABLES {
 struct {
  void **XlatTable;
  unsigned char *StateTable;
  unsigned long NumberOfEntries;
 } RefIdToPointer;
 struct {
  PFULL_PTR_TO_REFID_ELEMENT *XlatTable;
  unsigned long NumberOfBuckets;
  unsigned long HashMask;
 } PointerToRefId;
 unsigned long NextRefId;
 XLAT_SIDE XlatSide;
} FULL_PTR_XLAT_TABLES,*PFULL_PTR_XLAT_TABLES;
void __attribute__((__stdcall__)) NdrSimpleTypeMarshall(PMIDL_STUB_MESSAGE,unsigned char*,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrPointerMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING pFormat);
unsigned char *__attribute__((__stdcall__)) NdrSimpleStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrHardStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrComplexStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrFixedArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrVaryingArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrComplexArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrNonConformantStringMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantStringMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrEncapsulatedUnionMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrNonEncapsulatedUnionMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrByteCountPointerMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrXmitOrRepAsMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrInterfacePointerMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrClientContextMarshall(PMIDL_STUB_MESSAGE,NDR_CCONTEXT,int);
void __attribute__((__stdcall__)) NdrServerContextMarshall(PMIDL_STUB_MESSAGE,NDR_SCONTEXT,NDR_RUNDOWN);
void __attribute__((__stdcall__)) NdrSimpleTypeUnmarshall(PMIDL_STUB_MESSAGE,unsigned char*,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrPointerUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrSimpleStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrHardStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrComplexStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrFixedArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrVaryingArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrComplexArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrNonConformantStringUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantStringUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrEncapsulatedUnionUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrNonEncapsulatedUnionUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrByteCountPointerUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrXmitOrRepAsUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrInterfacePointerUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
void __attribute__((__stdcall__)) NdrClientContextUnmarshall(PMIDL_STUB_MESSAGE,NDR_CCONTEXT*,RPC_BINDING_HANDLE);
NDR_SCONTEXT __attribute__((__stdcall__)) NdrServerContextUnmarshall(PMIDL_STUB_MESSAGE);
void __attribute__((__stdcall__)) NdrPointerBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrSimpleStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrHardStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrFixedArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrVaryingArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantStringBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrNonConformantStringBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrEncapsulatedUnionBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrNonEncapsulatedUnionBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrByteCountPointerBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrXmitOrRepAsBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrInterfacePointerBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrContextHandleSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrPointerMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrSimpleStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantVaryingStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrHardStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrComplexStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrFixedArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantVaryingArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrVaryingArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrComplexArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantStringMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrNonConformantStringMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrEncapsulatedUnionMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrNonEncapsulatedUnionMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrXmitOrRepAsMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrInterfacePointerMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrPointerFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrSimpleStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrHardStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrFixedArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrVaryingArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrEncapsulatedUnionFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrNonEncapsulatedUnionFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrByteCountPointerFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrXmitOrRepAsFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrInterfacePointerFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConvert(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrClientInitializeNew(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,unsigned int);
unsigned char *__attribute__((__stdcall__)) NdrServerInitializeNew(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC);
void __attribute__((__stdcall__)) NdrClientInitialize(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,unsigned int);
unsigned char *__attribute__((__stdcall__)) NdrServerInitialize(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC);
unsigned char *__attribute__((__stdcall__)) NdrServerInitializeUnmarshall(PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,PRPC_MESSAGE);
void __attribute__((__stdcall__)) NdrServerInitializeMarshall(PRPC_MESSAGE,PMIDL_STUB_MESSAGE);
unsigned char *__attribute__((__stdcall__)) NdrGetBuffer(PMIDL_STUB_MESSAGE,unsigned long,RPC_BINDING_HANDLE);
unsigned char *__attribute__((__stdcall__)) NdrNsGetBuffer(PMIDL_STUB_MESSAGE,unsigned long,RPC_BINDING_HANDLE);
unsigned char *__attribute__((__stdcall__)) NdrSendReceive(PMIDL_STUB_MESSAGE,unsigned char*);
unsigned char *__attribute__((__stdcall__)) NdrNsSendReceive(PMIDL_STUB_MESSAGE,unsigned char*,RPC_BINDING_HANDLE*);
void __attribute__((__stdcall__)) NdrFreeBuffer(PMIDL_STUB_MESSAGE);
CLIENT_CALL_RETURN __attribute__((__cdecl__)) NdrClientCall(PMIDL_STUB_DESC,PFORMAT_STRING,...);
typedef enum {
 STUB_UNMARSHAL,
 STUB_CALL_SERVER,
 STUB_MARSHAL,
 STUB_CALL_SERVER_NO_HRESULT
} STUB_PHASE;
typedef enum {
 PROXY_CALCSIZE,
 PROXY_GETBUFFER,
 PROXY_MARSHAL,
 PROXY_SENDRECEIVE,
 PROXY_UNMARSHAL
} PROXY_PHASE;
long __attribute__((__stdcall__)) NdrStubCall(struct IRpcStubBuffer*,struct IRpcChannelBuffer*,PRPC_MESSAGE,unsigned long*);
void __attribute__((__stdcall__)) NdrServerCall(PRPC_MESSAGE);
int __attribute__((__stdcall__)) NdrServerUnmarshall(struct IRpcChannelBuffer*,PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,PFORMAT_STRING,void*);
void __attribute__((__stdcall__)) NdrServerMarshall(struct IRpcStubBuffer*,struct IRpcChannelBuffer*,PMIDL_STUB_MESSAGE,PFORMAT_STRING);
RPC_STATUS __attribute__((__stdcall__)) NdrMapCommAndFaultStatus(PMIDL_STUB_MESSAGE,unsigned long*,unsigned long*,RPC_STATUS);
int __attribute__((__stdcall__)) NdrSH_UPDecision(PMIDL_STUB_MESSAGE,unsigned char**,RPC_BUFPTR);
int __attribute__((__stdcall__)) NdrSH_TLUPDecision(PMIDL_STUB_MESSAGE,unsigned char**);
int __attribute__((__stdcall__)) NdrSH_TLUPDecisionBuffer(PMIDL_STUB_MESSAGE,unsigned char**);
int __attribute__((__stdcall__)) NdrSH_IfAlloc(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
int __attribute__((__stdcall__)) NdrSH_IfAllocRef(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
int __attribute__((__stdcall__)) NdrSH_IfAllocSet(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_IfCopy(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_IfAllocCopy(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
unsigned long __attribute__((__stdcall__)) NdrSH_Copy(unsigned char*,unsigned char*,unsigned long);
void __attribute__((__stdcall__)) NdrSH_IfFree(PMIDL_STUB_MESSAGE,unsigned char*);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_StringMarshall(PMIDL_STUB_MESSAGE,unsigned char*,unsigned long,int);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_StringUnMarshall(PMIDL_STUB_MESSAGE,unsigned char**,int);
typedef void *RPC_SS_THREAD_HANDLE;
typedef void* __attribute__((__stdcall__)) RPC_CLIENT_ALLOC(unsigned int);
typedef void __attribute__((__stdcall__)) RPC_CLIENT_FREE(void*);
void*__attribute__((__stdcall__)) RpcSsAllocate(unsigned int);
void __attribute__((__stdcall__)) RpcSsDisableAllocate(void);
void __attribute__((__stdcall__)) RpcSsEnableAllocate(void);
void __attribute__((__stdcall__)) RpcSsFree(void*);
RPC_SS_THREAD_HANDLE __attribute__((__stdcall__)) RpcSsGetThreadHandle(void);
void __attribute__((__stdcall__)) RpcSsSetClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*);
void __attribute__((__stdcall__)) RpcSsSetThreadHandle(RPC_SS_THREAD_HANDLE);
void __attribute__((__stdcall__)) RpcSsSwapClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*,RPC_CLIENT_ALLOC**,RPC_CLIENT_FREE**);
void*__attribute__((__stdcall__)) RpcSmAllocate(unsigned int,RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmClientFree(void*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmDestroyClientContext(void**);
RPC_STATUS __attribute__((__stdcall__)) RpcSmDisableAllocate(void);
RPC_STATUS __attribute__((__stdcall__)) RpcSmEnableAllocate(void);
RPC_STATUS __attribute__((__stdcall__)) RpcSmFree(void*);
RPC_SS_THREAD_HANDLE __attribute__((__stdcall__)) RpcSmGetThreadHandle(RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmSetClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmSetThreadHandle(RPC_SS_THREAD_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcSmSwapClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*,RPC_CLIENT_ALLOC**,RPC_CLIENT_FREE**);
void __attribute__((__stdcall__)) NdrRpcSsEnableAllocate(PMIDL_STUB_MESSAGE);
void __attribute__((__stdcall__)) NdrRpcSsDisableAllocate(PMIDL_STUB_MESSAGE);
void __attribute__((__stdcall__)) NdrRpcSmSetClientToOsf(PMIDL_STUB_MESSAGE);
void*__attribute__((__stdcall__)) NdrRpcSmClientAllocate(unsigned int);
void __attribute__((__stdcall__)) NdrRpcSmClientFree(void*);
void*__attribute__((__stdcall__)) NdrRpcSsDefaultAllocate(unsigned int);
void __attribute__((__stdcall__)) NdrRpcSsDefaultFree(void*);
PFULL_PTR_XLAT_TABLES __attribute__((__stdcall__)) NdrFullPointerXlatInit(unsigned long,XLAT_SIDE);
void __attribute__((__stdcall__)) NdrFullPointerXlatFree(PFULL_PTR_XLAT_TABLES);
int __attribute__((__stdcall__)) NdrFullPointerQueryPointer(PFULL_PTR_XLAT_TABLES,void*,unsigned char,unsigned long*);
int __attribute__((__stdcall__)) NdrFullPointerQueryRefId(PFULL_PTR_XLAT_TABLES,unsigned long,unsigned char,void**);
void __attribute__((__stdcall__)) NdrFullPointerInsertRefId(PFULL_PTR_XLAT_TABLES,unsigned long,void*);
int __attribute__((__stdcall__)) NdrFullPointerFree(PFULL_PTR_XLAT_TABLES,void*);
void*__attribute__((__stdcall__)) NdrAllocate(PMIDL_STUB_MESSAGE,unsigned int);
void __attribute__((__stdcall__)) NdrClearOutParameters(PMIDL_STUB_MESSAGE,PFORMAT_STRING,void*);
void*__attribute__((__stdcall__)) NdrOleAllocate(unsigned int);
void __attribute__((__stdcall__)) NdrOleFree(void*);
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 2 3




       
# 10 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 3



#pragma pack(push,8)
# 52 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 3
typedef enum tagREGCLS {
 REGCLS_SINGLEUSE = 0,
 REGCLS_MULTIPLEUSE = 1,
 REGCLS_MULTI_SEPARATE = 2
} REGCLS;
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wtypes.h" 1 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 1 3
# 2 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wtypes.h" 2 3





       
# 8 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wtypes.h" 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wtypes.h" 3
typedef enum tagDVASPECT {
 DVASPECT_CONTENT=1,
 DVASPECT_THUMBNAIL=2,
 DVASPECT_ICON=4,
 DVASPECT_DOCPRINT=8
} DVASPECT;
typedef enum tagDVASPECT2 {
 DVASPECT_OPAQUE=16,
 DVASPECT_TRANSPARENT=32
} DVASPECT2;
typedef enum tagSTATFLAG {
 STATFLAG_DEFAULT=0,
 STATFLAG_NONAME=1
} STATFLAG;
typedef enum tagMEMCTX {
 MEMCTX_TASK=1,
 MEMCTX_SHARED,
 MEMCTX_MACSYSTEM,
 MEMCTX_UNKNOWN=-1,
 MEMCTX_SAME=-2
} MEMCTX;
typedef enum tagMSHCTX {
 MSHCTX_LOCAL,
 MSHCTX_NOSHAREDMEM,
 MSHCTX_DIFFERENTMACHINE,
 MSHCTX_INPROC
} MSHCTX;
typedef enum tagCLSCTX {
 CLSCTX_INPROC_SERVER=1,CLSCTX_INPROC_HANDLER=2,CLSCTX_LOCAL_SERVER=4,
 CLSCTX_INPROC_SERVER16=8,CLSCTX_REMOTE_SERVER=16
} CLSCTX;
typedef enum tagMSHLFLAGS {
 MSHLFLAGS_NORMAL,MSHLFLAGS_TABLESTRONG,MSHLFLAGS_TABLEWEAK
} MSHLFLAGS;
typedef struct _FLAGGED_WORD_BLOB {
 unsigned long fFlags;
 unsigned long clSize;
 unsigned short asData[1];
}FLAGGED_WORD_BLOB;


typedef WCHAR OLECHAR;
typedef LPWSTR LPOLESTR;
typedef LPCWSTR LPCOLESTR;







typedef unsigned short VARTYPE;
typedef short VARIANT_BOOL;
typedef VARIANT_BOOL _VARIANT_BOOL;


typedef OLECHAR *BSTR;
typedef FLAGGED_WORD_BLOB *wireBSTR;
typedef BSTR *LPBSTR;
typedef LONG SCODE;
typedef void *HCONTEXT;
typedef union tagCY {
 __extension__ struct {
  unsigned long Lo;
  long Hi;
 };
 LONGLONG int64;
} CY;
typedef double DATE;
typedef struct tagBSTRBLOB {
 ULONG cbSize;
 PBYTE pData;
}BSTRBLOB;
typedef struct tagBSTRBLOB *LPBSTRBLOB;
typedef struct tagCLIPDATA {
 ULONG cbSize;
 long ulClipFmt;
 PBYTE pClipData;
}CLIPDATA;
typedef enum tagSTGC {
 STGC_DEFAULT,STGC_OVERWRITE,STGC_ONLYIFCURRENT,
 STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE
}STGC;
typedef enum tagSTGMOVE {
 STGMOVE_MOVE,STGMOVE_COPY,STGMOVE_SHALLOWCOPY
}STGMOVE;
enum VARENUM {
 VT_EMPTY,VT_NULL,VT_I2,VT_I4,VT_R4,VT_R8,VT_CY,VT_DATE,VT_BSTR,VT_DISPATCH,
 VT_ERROR,VT_BOOL,VT_VARIANT,VT_UNKNOWN,VT_DECIMAL,VT_I1=16,VT_UI1,VT_UI2,VT_UI4,VT_I8,
 VT_UI8,VT_INT,VT_UINT,VT_VOID,VT_HRESULT,VT_PTR,VT_SAFEARRAY,VT_CARRAY,VT_USERDEFINED,
 VT_LPSTR,VT_LPWSTR,VT_RECORD=36,VT_FILETIME=64,VT_BLOB,VT_STREAM,VT_STORAGE,VT_STREAMED_OBJECT,
 VT_STORED_OBJECT,VT_BLOB_OBJECT,VT_CF,VT_CLSID,VT_BSTR_BLOB=0xfff,VT_VECTOR=0x1000,
 VT_ARRAY=0x2000,VT_BYREF=0x4000,VT_RESERVED=0x8000,VT_ILLEGAL= 0xffff,VT_ILLEGALMASKED=0xfff,
 VT_TYPEMASK=0xfff
};
# 132 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wtypes.h" 3
typedef struct _BYTE_SIZEDARR {
 unsigned long clSize;
 byte *pData;
}BYTE_SIZEDARR;
typedef struct _SHORT_SIZEDARR {
 unsigned long clSize;
 unsigned short *pData;
}WORD_SIZEDARR;
typedef struct _LONG_SIZEDARR {
 unsigned long clSize;
 unsigned long *pData;
}DWORD_SIZEDARR;
typedef struct _HYPER_SIZEDARR {
 unsigned long clSize;
 long long *pData;
}HYPER_SIZEDARR;
typedef double DOUBLE;
typedef struct tagDEC {
 USHORT wReserved;
 __extension__ union {
  __extension__ struct {
   BYTE scale;
   BYTE sign;
  };
  USHORT signscale;
 } ;
 ULONG Hi32;
 __extension__ union {
  __extension__ struct {
   ULONG Lo32;
   ULONG Mid32;
  };
  ULONGLONG Lo64;
 } ;
} DECIMAL;
typedef void *HMETAFILEPICT;
# 58 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unknwn.h" 1 3







       
# 9 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unknwn.h" 3






# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wtypes.h" 1 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/rpc.h" 1 3
# 2 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/wtypes.h" 2 3
# 16 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/unknwn.h" 2 3

void * __attribute__((__stdcall__)) MIDL_user_allocate(size_t);
void __attribute__((__stdcall__)) MIDL_user_free(void*);
extern const IID IID_IUnknown;
extern const IID IID_IClassFactory;




typedef struct IUnknown { struct IUnknownVtbl *lpVtbl; } IUnknown; typedef struct IUnknownVtbl IUnknownVtbl; struct IUnknownVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IUnknown *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IUnknown *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IUnknown *) ;
};
typedef IUnknown *LPUNKNOWN;





typedef struct IClassFactory { struct IClassFactoryVtbl *lpVtbl; } IClassFactory; typedef struct IClassFactoryVtbl IClassFactoryVtbl; struct IClassFactoryVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IClassFactory *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IClassFactory *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IClassFactory *) ;
 HRESULT(__attribute__((__stdcall__)) *CreateInstance)(IClassFactory *, LPUNKNOWN,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *LockServer)(IClassFactory *, BOOL) ;
};
typedef IClassFactory *LPCLASSFACTORY;

HRESULT __attribute__((__stdcall__)) IUnknown_QueryInterface_Proxy(IUnknown*,const IID* const,void**);
void __attribute__((__stdcall__)) IUnknown_QueryInterface_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IUnknown_AddRef_Proxy(IUnknown*);
void __attribute__((__stdcall__)) IUnknown_AddRef_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IUnknown_Release_Proxy(IUnknown*);
void __attribute__((__stdcall__)) IUnknown_Release_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IClassFactory_RemoteCreateInstance_Proxy(IClassFactory*,const IID* const,IUnknown**);
void __attribute__((__stdcall__)) IClassFactory_RemoteCreateInstance_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IClassFactory_RemoteLockServer_Proxy(IClassFactory*,BOOL);
void __attribute__((__stdcall__)) IClassFactory_RemoteLockServer_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IClassFactory_CreateInstance_Proxy(IClassFactory*,IUnknown*,const IID* const,void**);
HRESULT __attribute__((__stdcall__)) IClassFactory_CreateInstance_Stub(IClassFactory*,const IID* const,IUnknown**);
HRESULT __attribute__((__stdcall__)) IClassFactory_LockServer_Proxy(IClassFactory*,BOOL);
HRESULT __attribute__((__stdcall__)) IClassFactory_LockServer_Stub(IClassFactory*,BOOL);
# 59 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objidl.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objidl.h" 3




typedef struct tagSTATSTG {
 LPOLESTR pwcsName;
 DWORD type;
 ULARGE_INTEGER cbSize;
 FILETIME mtime;
 FILETIME ctime;
 FILETIME atime;
 DWORD grfMode;
 DWORD grfLocksSupported;
 CLSID clsid;
 DWORD grfStateBits;
 DWORD reserved;
} STATSTG;
typedef enum tagSTGTY {
 STGTY_STORAGE=1,
 STGTY_STREAM,
 STGTY_LOCKBYTES,
 STGTY_PROPERTY
} STGTY;
typedef enum tagSTREAM_SEEK {
 STREAM_SEEK_SET,
 STREAM_SEEK_CUR,
 STREAM_SEEK_END
} STREAM_SEEK;
typedef struct tagINTERFACEINFO {
 LPUNKNOWN pUnk;
 IID iid;
 WORD wMethod;
} INTERFACEINFO,*LPINTERFACEINFO;
typedef enum tagCALLTYPE {
 CALLTYPE_TOPLEVEL=1,
 CALLTYPE_NESTED,
 CALLTYPE_ASYNC,
 CALLTYPE_TOPLEVEL_CALLPENDING,
 CALLTYPE_ASYNC_CALLPENDING
} CALLTYPE;
typedef enum tagPENDINGTYPE {
 PENDINGTYPE_TOPLEVEL=1,
 PENDINGTYPE_NESTED
} PENDINGTYPE;
typedef enum tagPENDINGMSG {
 PENDINGMSG_CANCELCALL=0,
 PENDINGMSG_WAITNOPROCESS,
 PENDINGMSG_WAITDEFPROCESS
} PENDINGMSG;
typedef OLECHAR **SNB;
typedef enum tagDATADIR {
 DATADIR_GET=1,
 DATADIR_SET
} DATADIR;
typedef WORD CLIPFORMAT,*LPCLIPFORMAT;
typedef struct tagDVTARGETDEVICE {
 DWORD tdSize;
 WORD tdDriverNameOffset;
 WORD tdDeviceNameOffset;
 WORD tdPortNameOffset;
 WORD tdExtDevmodeOffset;
 BYTE tdData[1];
} DVTARGETDEVICE;
typedef struct tagFORMATETC {
 CLIPFORMAT cfFormat;
 DVTARGETDEVICE*ptd;
 DWORD dwAspect;
 LONG lindex;
 DWORD tymed;
} FORMATETC,*LPFORMATETC;
typedef struct tagRemSTGMEDIUM {
 DWORD tymed;
 DWORD dwHandleType;
 ULONG pData;
 unsigned long pUnkForRelease;
 unsigned long cbData;
 BYTE data[1];
} RemSTGMEDIUM;
typedef struct tagHLITEM {
 ULONG uHLID;
 LPWSTR pwzFriendlyName;
} HLITEM;
typedef struct tagSTATDATA {
 FORMATETC formatetc;
 DWORD grfAdvf;
 struct IAdviseSink *pAdvSink;
 DWORD dwConnection;
} STATDATA;
typedef struct tagSTATPROPSETSTG {
 FMTID fmtid;
 CLSID clsid;
 DWORD grfFlags;
 FILETIME mtime;
 FILETIME ctime;
 FILETIME atime;
} STATPROPSETSTG;
typedef enum tagEXTCONN {
 EXTCONN_STRONG=1,
 EXTCONN_WEAK=2,
 EXTCONN_CALLABLE=4
} EXTCONN;
typedef struct tagMULTI_QI {
 const IID *pIID;
 IUnknown *pItf;
 HRESULT hr;
} MULTI_QI;
typedef struct _AUTH_IDENTITY {
 USHORT *User;
 ULONG UserLength;
 USHORT *Domain;
 ULONG DomainLength;
 USHORT *Password;
 ULONG PasswordLength;
 ULONG Flags;
} AUTH_IDENTITY;
typedef struct _COAUTHINFO{
 DWORD dwAuthnSvc;
 DWORD dwAuthzSvc;
 LPWSTR pwszServerPrincName;
 DWORD dwAuthnLevel;
 DWORD dwImpersonationLevel;
 AUTH_IDENTITY *pAuthIdentityData;
 DWORD dwCapabilities;
} COAUTHINFO;
typedef struct _COSERVERINFO {
 DWORD dwReserved1;
 LPWSTR pwszName;
 COAUTHINFO *pAuthInfo;
 DWORD dwReserved2;
} COSERVERINFO;
typedef struct tagBIND_OPTS {
 DWORD cbStruct;
 DWORD grfFlags;
 DWORD grfMode;
 DWORD dwTickCountDeadline;
} BIND_OPTS,*LPBIND_OPTS;
typedef struct tagBIND_OPTS2 {
 DWORD cbStruct;
 DWORD grfFlags;
 DWORD grfMode;
 DWORD dwTickCountDeadline;
 DWORD dwTrackFlags;
 DWORD dwClassContext;
 LCID locale;
 COSERVERINFO *pServerInfo;
} BIND_OPTS2,*LPBIND_OPTS2;
typedef enum tagBIND_FLAGS {
 BIND_MAYBOTHERUSER=1,
 BIND_JUSTTESTEXISTENCE
} BIND_FLAGS;
typedef struct tagSTGMEDIUM {
 DWORD tymed;
 __extension__ union {
  HBITMAP hBitmap;
  PVOID hMetaFilePict;
  HENHMETAFILE hEnhMetaFile;
  HGLOBAL hGlobal;
  LPWSTR lpszFileName;
  LPSTREAM pstm;
  LPSTORAGE pstg;
 } ;
 LPUNKNOWN pUnkForRelease;
} STGMEDIUM,*LPSTGMEDIUM;
typedef enum tagLOCKTYPE {
 LOCK_WRITE=1,
 LOCK_EXCLUSIVE=2,
 LOCK_ONLYONCE=4
} LOCKTYPE;
typedef unsigned long RPCOLEDATAREP;
typedef struct tagRPCOLEMESSAGE {
 PVOID reserved1;
 RPCOLEDATAREP dataRepresentation;
 PVOID Buffer;
 ULONG cbBuffer;
 ULONG iMethod;
 PVOID reserved2[5];
 ULONG rpcFlags;
} RPCOLEMESSAGE;
typedef enum tagMKSYS {
 MKSYS_NONE,
 MKSYS_GENERICCOMPOSITE,
 MKSYS_FILEMONIKER,
 MKSYS_ANTIMONIKER,
 MKSYS_ITEMMONIKER,
 MKSYS_POINTERMONIKER
} MKSYS;
typedef enum tagMKREDUCE {
 MKRREDUCE_ALL,
 MKRREDUCE_ONE=196608,
 MKRREDUCE_TOUSER=131072,
 MKRREDUCE_THROUGHUSER=65536
} MKRREDUCE;
typedef struct tagRemSNB {
 unsigned long ulCntStr;
 unsigned long ulCntChar;
 OLECHAR rgString[1];
} RemSNB;
typedef enum tagADVF {
 ADVF_NODATA=1,ADVF_PRIMEFIRST=2,ADVF_ONLYONCE=4,ADVF_DATAONSTOP=64,
 ADVFCACHE_NOHANDLER=8,ADVFCACHE_FORCEBUILTIN=16,ADVFCACHE_ONSAVE=32
} ADVF;
typedef enum tagTYMED {
 TYMED_HGLOBAL=1,TYMED_FILE=2,TYMED_ISTREAM=4,TYMED_ISTORAGE=8,
 TYMED_GDI=16,TYMED_MFPICT=32,TYMED_ENHMF=64,TYMED_NULL=0
} TYMED;
typedef enum tagSERVERCALL {
 SERVERCALL_ISHANDLED,SERVERCALL_REJECTED,SERVERCALL_RETRYLATER
} SERVERCALL;
typedef struct tagCAUB {
 ULONG cElems;
 unsigned char *pElems;
}CAUB;
typedef struct tagCAI {
 ULONG cElems;
 short *pElems;
}CAI;
typedef struct tagCAUI {
 ULONG cElems;
 USHORT *pElems;
}CAUI;
typedef struct tagCAL {
 ULONG cElems;
 long *pElems;
}CAL;
typedef struct tagCAUL {
 ULONG cElems;
 ULONG *pElems;
}CAUL;
typedef struct tagCAFLT {
 ULONG cElems;
 float *pElems;
}CAFLT;
typedef struct tagCADBL {
 ULONG cElems;
 double *pElems;
}CADBL;
typedef struct tagCACY {
 ULONG cElems;
 CY *pElems;
}CACY;
typedef struct tagCADATE {
 ULONG cElems;
 DATE *pElems;
}CADATE;
typedef struct tagCABSTR {
 ULONG cElems;
 BSTR *pElems;
}CABSTR;
typedef struct tagCABSTRBLOB {
 ULONG cElems;
 BSTRBLOB *pElems;
}CABSTRBLOB;
typedef struct tagCABOOL {
 ULONG cElems;
 VARIANT_BOOL *pElems;
}CABOOL;
typedef struct tagCASCODE {
 ULONG cElems;
 SCODE *pElems;
}CASCODE;
typedef struct tagCAH {
 ULONG cElems;
 LARGE_INTEGER *pElems;
}CAH;
typedef struct tagCAUH {
 ULONG cElems;
 ULARGE_INTEGER *pElems;
}CAUH;
typedef struct tagCALPSTR {
 ULONG cElems;
 LPSTR *pElems;
}CALPSTR;
typedef struct tagCALPWSTR {
 ULONG cElems;
 LPWSTR *pElems;
}CALPWSTR;
typedef struct tagCAFILETIME {
 ULONG cElems;
 FILETIME *pElems;
}CAFILETIME;
typedef struct tagCACLIPDATA {
 ULONG cElems;
 CLIPDATA *pElems;
}CACLIPDATA;
typedef struct tagCACLSID {
 ULONG cElems;
 CLSID *pElems;
}CACLSID;
typedef struct tagPROPVARIANT *LPPROPVARIANT;
typedef struct tagCAPROPVARIANT {
 ULONG cElems;
 LPPROPVARIANT pElems;
}CAPROPVARIANT;
typedef struct tagPROPVARIANT {
 VARTYPE vt;
 WORD wReserved1;
 WORD wReserved2;
 WORD wReserved3;
 __extension__ union {
  CHAR cVal;
  UCHAR bVal;
  short iVal;
  USHORT uiVal;
  VARIANT_BOOL boolVal;





  long lVal;
  ULONG ulVal;
  float fltVal;
  SCODE scode;
  LARGE_INTEGER hVal;
  ULARGE_INTEGER uhVal;
  double dblVal;
  CY cyVal;
  DATE date;
  FILETIME filetime;
  CLSID *puuid;
  BLOB blob;
  CLIPDATA *pclipdata;
  LPSTREAM pStream;
  LPSTORAGE pStorage;
  BSTR bstrVal;
  BSTRBLOB bstrblobVal;
  LPSTR pszVal;
  LPWSTR pwszVal;
  CAUB caub;
  CAI cai;
  CAUI caui;
  CABOOL cabool;
  CAL cal;
  CAUL caul;
  CAFLT caflt;
  CASCODE cascode;
  CAH cah;
  CAUH cauh;
  CADBL cadbl;
  CACY cacy;
  CADATE cadate;
  CAFILETIME cafiletime;
  CACLSID cauuid;
  CACLIPDATA caclipdata;
  CABSTR cabstr;
  CABSTRBLOB cabstrblob;
  CALPSTR calpstr;
  CALPWSTR calpwstr;
  CAPROPVARIANT capropvar;
 } ;
} PROPVARIANT;
typedef struct tagPROPSPEC {
 ULONG ulKind;
 __extension__ union {
  PROPID propid;
  LPOLESTR lpwstr;
 } ;
}PROPSPEC;
typedef struct tagSTATPROPSTG {
 LPOLESTR lpwstrName;
 PROPID propid;
 VARTYPE vt;
} STATPROPSTG;
typedef enum PROPSETFLAG {
 PROPSETFLAG_DEFAULT,PROPSETFLAG_NONSIMPLE,PROPSETFLAG_ANSI,
 PROPSETFLAG_UNBUFFERED=4
} PROPSETFLAG;
typedef struct tagSTORAGELAYOUT {
 DWORD LayoutType;
 OLECHAR* pwcsElementName;
 LARGE_INTEGER cOffset;
 LARGE_INTEGER cBytes;
} STORAGELAYOUT;
typedef struct tagSOLE_AUTHENTICATION_SERVICE {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    OLECHAR *pPrincipalName;
    HRESULT hr;
} SOLE_AUTHENTICATION_SERVICE;

typedef enum tagEOLE_AUTHENTICATION_CAPABILITIES {
 EOAC_NONE = 0,
 EOAC_MUTUAL_AUTH = 0x1,
 EOAC_STATIC_CLOAKING = 0x20,
 EOAC_DYNAMIC_CLOAKING = 0x40,
 EOAC_ANY_AUTHORITY = 0x80,
 EOAC_MAKE_FULLSIC = 0x100,
 EOAC_DEFAULT = 0x800,
 EOAC_SECURE_REFS = 0x2,
 EOAC_ACCESS_CONTROL = 0x4,
 EOAC_APPID = 0x8,
 EOAC_DYNAMIC = 0x10,
 EOAC_REQUIRE_FULLSIC = 0x200,
 EOAC_AUTO_IMPERSONATE = 0x400,
 EOAC_NO_CUSTOM_MARSHAL = 0x2000,
 EOAC_DISABLE_AAA = 0x1000
} EOLE_AUTHENTICATION_CAPABILITIES;
typedef struct tagSOLE_AUTHENTICATION_INFO {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    void* pAuthInfo;
} SOLE_AUTHENTICATION_INFO;

typedef struct tagSOLE_AUTHENTICATION_LIST {
    DWORD cAuthInfo;
    SOLE_AUTHENTICATION_INFO* aAuthInfo;
} SOLE_AUTHENTICATION_LIST;

extern const FMTID FMTID_SummaryInformation;
extern const FMTID FMTID_DocSummaryInformation;
extern const FMTID FMTID_UserDefinedProperties;

typedef struct IEnumFORMATETC { struct IEnumFORMATETCVtbl *lpVtbl; } IEnumFORMATETC; typedef struct IEnumFORMATETCVtbl IEnumFORMATETCVtbl; struct IEnumFORMATETCVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumFORMATETC*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumFORMATETC*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumFORMATETC*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumFORMATETC*, ULONG,FORMATETC*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumFORMATETC*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumFORMATETC*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumFORMATETC*, IEnumFORMATETC**) ; };
typedef struct IEnumHLITEM { struct IEnumHLITEMVtbl *lpVtbl; } IEnumHLITEM; typedef struct IEnumHLITEMVtbl IEnumHLITEMVtbl; struct IEnumHLITEMVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumHLITEM*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumHLITEM*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumHLITEM*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumHLITEM*, ULONG,HLITEM*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumHLITEM*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumHLITEM*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumHLITEM*, IEnumHLITEM**) ; };
typedef struct IEnumSTATDATA { struct IEnumSTATDATAVtbl *lpVtbl; } IEnumSTATDATA; typedef struct IEnumSTATDATAVtbl IEnumSTATDATAVtbl; struct IEnumSTATDATAVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATDATA*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATDATA*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATDATA*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATDATA*, ULONG,STATDATA*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATDATA*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATDATA*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATDATA*, IEnumSTATDATA**) ; };
typedef struct IEnumSTATPROPSETSTG { struct IEnumSTATPROPSETSTGVtbl *lpVtbl; } IEnumSTATPROPSETSTG; typedef struct IEnumSTATPROPSETSTGVtbl IEnumSTATPROPSETSTGVtbl; struct IEnumSTATPROPSETSTGVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATPROPSETSTG*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATPROPSETSTG*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATPROPSETSTG*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATPROPSETSTG*, ULONG,STATPROPSETSTG*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATPROPSETSTG*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATPROPSETSTG*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATPROPSETSTG*, IEnumSTATPROPSETSTG**) ; };
typedef struct IEnumSTATPROPSTG { struct IEnumSTATPROPSTGVtbl *lpVtbl; } IEnumSTATPROPSTG; typedef struct IEnumSTATPROPSTGVtbl IEnumSTATPROPSTGVtbl; struct IEnumSTATPROPSTGVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATPROPSTG*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATPROPSTG*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATPROPSTG*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATPROPSTG*, ULONG,STATPROPSTG*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATPROPSTG*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATPROPSTG*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATPROPSTG*, IEnumSTATPROPSTG**) ; };
typedef struct IEnumSTATSTG { struct IEnumSTATSTGVtbl *lpVtbl; } IEnumSTATSTG; typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl; struct IEnumSTATSTGVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATSTG*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATSTG*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATSTG*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATSTG*, ULONG,STATSTG*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATSTG*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATSTG*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATSTG*, IEnumSTATSTG**) ; };
typedef struct IEnumString { struct IEnumStringVtbl *lpVtbl; } IEnumString; typedef struct IEnumStringVtbl IEnumStringVtbl; struct IEnumStringVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumString*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumString*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumString*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumString*, ULONG,LPOLESTR*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumString*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumString*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumString*, IEnumString**) ; };
typedef struct IEnumMoniker { struct IEnumMonikerVtbl *lpVtbl; } IEnumMoniker; typedef struct IEnumMonikerVtbl IEnumMonikerVtbl; struct IEnumMonikerVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumMoniker*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumMoniker*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumMoniker*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumMoniker*, ULONG,struct IMoniker**,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumMoniker*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumMoniker*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumMoniker*, IEnumMoniker**) ; };
typedef struct IEnumUnknown { struct IEnumUnknownVtbl *lpVtbl; } IEnumUnknown; typedef struct IEnumUnknownVtbl IEnumUnknownVtbl; struct IEnumUnknownVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumUnknown*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumUnknown*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumUnknown*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumUnknown*, ULONG,IUnknown**,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumUnknown*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumUnknown*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumUnknown*, IEnumUnknown**) ; };

extern const IID IID_ISequentialStream;


typedef struct ISequentialStream { struct ISequentialStreamVtbl *lpVtbl; } ISequentialStream; typedef struct ISequentialStreamVtbl ISequentialStreamVtbl; struct ISequentialStreamVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ISequentialStream *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ISequentialStream *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ISequentialStream *) ;
 HRESULT(__attribute__((__stdcall__)) *Read)(ISequentialStream *, void*,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Write)(ISequentialStream *, void const*,ULONG,ULONG*) ;
};

extern const IID IID_IStream;


typedef struct IStream { struct IStreamVtbl *lpVtbl; } IStream; typedef struct IStreamVtbl IStreamVtbl; struct IStreamVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IStream *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IStream *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IStream *) ;
 HRESULT(__attribute__((__stdcall__)) *Read)(IStream *, void*,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Write)(IStream *, void const*,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Seek)(IStream *, LARGE_INTEGER,DWORD,ULARGE_INTEGER*) ;
 HRESULT(__attribute__((__stdcall__)) *SetSize)(IStream *, ULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *CopyTo)(IStream *, IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*) ;
 HRESULT(__attribute__((__stdcall__)) *Commit)(IStream *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revert)(IStream *) ;
 HRESULT(__attribute__((__stdcall__)) *LockRegion)(IStream *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *UnlockRegion)(IStream *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(IStream *, STATSTG*,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Clone)(IStream *, LPSTREAM*) ;
};

extern const IID IID_IMarshal;


typedef struct IMarshal { struct IMarshalVtbl *lpVtbl; } IMarshal; typedef struct IMarshalVtbl IMarshalVtbl; struct IMarshalVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMarshal *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMarshal *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMarshal *) ;
 HRESULT(__attribute__((__stdcall__)) *GetUnmarshalClass) (IMarshal *, const IID* const,DWORD,PVOID,DWORD,CLSID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetMarshalSizeMax) (IMarshal *, const IID* const,DWORD,PVOID,DWORD,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *MarshalInterface) (IMarshal *, const IID* const,DWORD,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *UnmarshalInterface) (IMarshal *, IStream*,void**) ;
 HRESULT(__attribute__((__stdcall__)) *ReleaseMarshalData) (IMarshal *, IStream*) ;
 HRESULT(__attribute__((__stdcall__)) *DisconnectObject) (IMarshal *, DWORD) ;
};

extern const IID IID_IStdMarshalInfo;


typedef struct IStdMarshalInfo { struct IStdMarshalInfoVtbl *lpVtbl; } IStdMarshalInfo; typedef struct IStdMarshalInfoVtbl IStdMarshalInfoVtbl; struct IStdMarshalInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IStdMarshalInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IStdMarshalInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IStdMarshalInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassForHandler)(IStdMarshalInfo *, DWORD,PVOID,CLSID*) ;
};

extern const IID IID_IMalloc;


typedef struct IMalloc { struct IMallocVtbl *lpVtbl; } IMalloc; typedef struct IMallocVtbl IMallocVtbl; struct IMallocVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMalloc *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMalloc *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMalloc *) ;
 void*(__attribute__((__stdcall__)) *Alloc)(IMalloc *, ULONG) ;
 void*(__attribute__((__stdcall__)) *Realloc)(IMalloc *, void*,ULONG) ;
 void(__attribute__((__stdcall__)) *Free)(IMalloc *, void*) ;
 ULONG(__attribute__((__stdcall__)) *GetSize)(IMalloc *, void*) ;
 int(__attribute__((__stdcall__)) *DidAlloc)(IMalloc *, void*) ;
 void(__attribute__((__stdcall__)) *HeapMinimize)(IMalloc *) ;
};

extern const IID IID_IMallocSpy;


typedef struct IMallocSpy { struct IMallocSpyVtbl *lpVtbl; } IMallocSpy; typedef struct IMallocSpyVtbl IMallocSpyVtbl; struct IMallocSpyVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMallocSpy *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMallocSpy *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMallocSpy *) ;
 ULONG(__attribute__((__stdcall__)) *PreAlloc)(IMallocSpy *, ULONG) ;
 void*(__attribute__((__stdcall__)) *PostAlloc)(IMallocSpy *, void*) ;
 void*(__attribute__((__stdcall__)) *PreFree)(IMallocSpy *, void*,BOOL) ;
 void(__attribute__((__stdcall__)) *PostFree)(IMallocSpy *, BOOL) ;
 ULONG(__attribute__((__stdcall__)) *PreRealloc)(IMallocSpy *, void*,ULONG,void*) ;
 void*(__attribute__((__stdcall__)) *PostRealloc)(IMallocSpy *, void*,BOOL) ;
 void*(__attribute__((__stdcall__)) *PreGetSize)(IMallocSpy *, void*,BOOL) ;
 ULONG(__attribute__((__stdcall__)) *PostGetSize)(IMallocSpy *, ULONG,BOOL) ;
 void*(__attribute__((__stdcall__)) *PreDidAlloc)(IMallocSpy *, void*,BOOL) ;
 int(__attribute__((__stdcall__)) *PostDidAlloc)(IMallocSpy *, void*,BOOL,int) ;
 void(__attribute__((__stdcall__)) *PreHeapMinimize)(IMallocSpy *) ;
 void(__attribute__((__stdcall__)) *PostHeapMinimize)(IMallocSpy *) ;
};

extern const IID IID_IMessageFilter;


typedef struct IMessageFilter { struct IMessageFilterVtbl *lpVtbl; } IMessageFilter; typedef struct IMessageFilterVtbl IMessageFilterVtbl; struct IMessageFilterVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMessageFilter *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMessageFilter *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMessageFilter *) ;
 DWORD(__attribute__((__stdcall__)) *HandleInComingCall)(IMessageFilter *, DWORD,HTASK,DWORD,LPINTERFACEINFO) ;
 DWORD(__attribute__((__stdcall__)) *RetryRejectedCall)(IMessageFilter *, HTASK,DWORD,DWORD) ;
 DWORD(__attribute__((__stdcall__)) *MessagePending)(IMessageFilter *, HTASK,DWORD,DWORD) ;
};

extern const IID IID_IPersist;


typedef struct IPersist { struct IPersistVtbl *lpVtbl; } IPersist; typedef struct IPersistVtbl IPersistVtbl; struct IPersistVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersist *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersist *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersist *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersist *, CLSID*) ;
};

extern const IID IID_IPersistStream;


typedef struct IPersistStream { struct IPersistStreamVtbl *lpVtbl; } IPersistStream; typedef struct IPersistStreamVtbl IPersistStreamVtbl; struct IPersistStreamVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersistStream *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersistStream *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersistStream *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersistStream *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IPersistStream *) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IPersistStream *, IStream*) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IPersistStream *, IStream*,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetSizeMax)(IPersistStream *, PULARGE_INTEGER) ;
};

extern const IID IID_IRunningObjectTable;


typedef struct IRunningObjectTable { struct IRunningObjectTableVtbl *lpVtbl; } IRunningObjectTable; typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl; struct IRunningObjectTableVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRunningObjectTable *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRunningObjectTable *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRunningObjectTable *) ;
 HRESULT(__attribute__((__stdcall__)) *Register)(IRunningObjectTable *, DWORD,LPUNKNOWN,LPMONIKER,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revoke)(IRunningObjectTable *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *IsRunning)(IRunningObjectTable *, LPMONIKER) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectA)(IRunningObjectTable *, LPMONIKER,LPUNKNOWN*) ;
 HRESULT(__attribute__((__stdcall__)) *NoteChangeTime)(IRunningObjectTable *, DWORD,LPFILETIME) ;
 HRESULT(__attribute__((__stdcall__)) *GetTimeOfLastChange)(IRunningObjectTable *, LPMONIKER,LPFILETIME) ;
 HRESULT(__attribute__((__stdcall__)) *EnumRunning)(IRunningObjectTable *, IEnumMoniker**) ;
};

extern const IID IID_IBindCtx;


typedef struct IBindCtx { struct IBindCtxVtbl *lpVtbl; } IBindCtx; typedef struct IBindCtxVtbl IBindCtxVtbl; struct IBindCtxVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IBindCtx *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IBindCtx *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IBindCtx *) ;
 HRESULT(__attribute__((__stdcall__)) *RegisterObjectBound)(IBindCtx *, LPUNKNOWN) ;
 HRESULT(__attribute__((__stdcall__)) *RevokeObjectBound)(IBindCtx *, LPUNKNOWN) ;
 HRESULT(__attribute__((__stdcall__)) *ReleaseBoundObjects)(IBindCtx *) ;
 HRESULT(__attribute__((__stdcall__)) *SetBindOptions)(IBindCtx *, LPBIND_OPTS) ;
 HRESULT(__attribute__((__stdcall__)) *GetBindOptions)(IBindCtx *, LPBIND_OPTS) ;
 HRESULT(__attribute__((__stdcall__)) *GetRunningObjectTable)(IBindCtx *, IRunningObjectTable**) ;
 HRESULT(__attribute__((__stdcall__)) *RegisterObjectParam)(IBindCtx *, LPOLESTR,IUnknown*) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectParam)(IBindCtx *, LPOLESTR,IUnknown**) ;
 HRESULT(__attribute__((__stdcall__)) *EnumObjectParam)(IBindCtx *, IEnumString**) ;
 HRESULT(__attribute__((__stdcall__)) *RevokeObjectParam)(IBindCtx *, LPOLESTR) ;
};

extern const IID IID_IMoniker;


typedef struct IMoniker { struct IMonikerVtbl *lpVtbl; } IMoniker; typedef struct IMonikerVtbl IMonikerVtbl; struct IMonikerVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMoniker *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMoniker *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMoniker *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IMoniker *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IMoniker *) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IMoniker *, IStream*) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IMoniker *, IStream*,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetSizeMax)(IMoniker *, PULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *BindToObject)(IMoniker *, IBindCtx*,IMoniker*,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *BindToStorage)(IMoniker *, IBindCtx*,IMoniker*,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *Reduce)(IMoniker *, IBindCtx*,DWORD,IMoniker**,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *ComposeWith)(IMoniker *, IMoniker*,BOOL,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *Enum)(IMoniker *, BOOL,IEnumMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *IsEqual)(IMoniker *, IMoniker*) ;
 HRESULT(__attribute__((__stdcall__)) *Hash)(IMoniker *, PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *IsRunning)(IMoniker *, IBindCtx*,IMoniker*,IMoniker*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTimeOfLastChange)(IMoniker *, IBindCtx*,IMoniker*,LPFILETIME) ;
 HRESULT(__attribute__((__stdcall__)) *Inverse)(IMoniker *, IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *CommonPrefixWith)(IMoniker *, IMoniker*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *RelativePathTo)(IMoniker *, IMoniker*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *GetDisplayName)(IMoniker *, IBindCtx*,IMoniker*,LPOLESTR*) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IMoniker *, IBindCtx*,IMoniker*,LPOLESTR,ULONG*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *IsSystemMoniker)(IMoniker *, PDWORD) ;
};

extern const IID IID_IPersistStorage;


typedef struct IPersistStorage { struct IPersistStorageVtbl *lpVtbl; } IPersistStorage; typedef struct IPersistStorageVtbl IPersistStorageVtbl; struct IPersistStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersistStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersistStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersistStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersistStorage *, CLSID*) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IPersistStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *InitNew)(IPersistStorage *, LPSTORAGE) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IPersistStorage *, LPSTORAGE) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IPersistStorage *, LPSTORAGE,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *SaveCompleted)(IPersistStorage *, LPSTORAGE) ;
 HRESULT(__attribute__((__stdcall__)) *HandsOffStorage)(IPersistStorage *) ;
};

extern const IID IID_IPersistFile;


typedef struct IPersistFile { struct IPersistFileVtbl *lpVtbl; } IPersistFile; typedef struct IPersistFileVtbl IPersistFileVtbl; struct IPersistFileVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersistFile *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersistFile *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersistFile *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersistFile *, CLSID*) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IPersistFile *) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IPersistFile *, LPCOLESTR,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IPersistFile *, LPCOLESTR,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *SaveCompleted)(IPersistFile *, LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *GetCurFile)(IPersistFile *, LPOLESTR*) ;
};

extern const IID IID_IAdviseSink;


typedef struct IAdviseSink { struct IAdviseSinkVtbl *lpVtbl; } IAdviseSink; typedef struct IAdviseSinkVtbl IAdviseSinkVtbl; struct IAdviseSinkVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IAdviseSink *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IAdviseSink *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IAdviseSink *) ;
 void(__attribute__((__stdcall__)) *OnDataChange)(IAdviseSink *, FORMATETC*,STGMEDIUM*) ;
 void(__attribute__((__stdcall__)) *OnViewChange)(IAdviseSink *, DWORD,LONG) ;
 void(__attribute__((__stdcall__)) *OnRename)(IAdviseSink *, IMoniker*) ;
 void(__attribute__((__stdcall__)) *OnSave)(IAdviseSink *) ;
 void(__attribute__((__stdcall__)) *OnClose)(IAdviseSink *) ;
};

extern const IID IID_IAdviseSink2;


typedef struct IAdviseSink2 { struct IAdviseSink2Vtbl *lpVtbl; } IAdviseSink2; typedef struct IAdviseSink2Vtbl IAdviseSink2Vtbl; struct IAdviseSink2Vtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IAdviseSink2 *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IAdviseSink2 *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IAdviseSink2 *) ;
 void(__attribute__((__stdcall__)) *OnDataChange)(IAdviseSink2 *, FORMATETC*,STGMEDIUM*) ;
 void(__attribute__((__stdcall__)) *OnViewChange)(IAdviseSink2 *, DWORD,LONG) ;
 void(__attribute__((__stdcall__)) *OnRename)(IAdviseSink2 *, IMoniker*) ;
 void(__attribute__((__stdcall__)) *OnSave)(IAdviseSink2 *) ;
 void(__attribute__((__stdcall__)) *OnClose)(IAdviseSink2 *) ;
 void(__attribute__((__stdcall__)) *OnLinkSrcChange)(IAdviseSink2 *, IMoniker*);
};

extern const IID IID_IDataObject;


typedef struct IDataObject { struct IDataObjectVtbl *lpVtbl; } IDataObject; typedef struct IDataObjectVtbl IDataObjectVtbl; struct IDataObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDataObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDataObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDataObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetData)(IDataObject *, FORMATETC*,STGMEDIUM*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDataHere)(IDataObject *, FORMATETC*,STGMEDIUM*) ;
 HRESULT(__attribute__((__stdcall__)) *QueryGetData)(IDataObject *, FORMATETC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetCanonicalFormatEtc)(IDataObject *, FORMATETC*,FORMATETC*) ;
 HRESULT(__attribute__((__stdcall__)) *SetData)(IDataObject *, FORMATETC*,STGMEDIUM*,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *EnumFormatEtc)(IDataObject *, DWORD,IEnumFORMATETC**) ;
 HRESULT(__attribute__((__stdcall__)) *DAdvise)(IDataObject *, FORMATETC*,DWORD,IAdviseSink*,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *DUnadvise)(IDataObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumDAdvise)(IDataObject *, IEnumSTATDATA**) ;
};

extern const IID IID_IDataAdviseHolder;


typedef struct IDataAdviseHolder { struct IDataAdviseHolderVtbl *lpVtbl; } IDataAdviseHolder; typedef struct IDataAdviseHolderVtbl IDataAdviseHolderVtbl; struct IDataAdviseHolderVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDataAdviseHolder *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDataAdviseHolder *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDataAdviseHolder *) ;
 HRESULT(__attribute__((__stdcall__)) *Advise)(IDataAdviseHolder *, IDataObject*,FORMATETC*,DWORD,IAdviseSink*,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unadvise)(IDataAdviseHolder *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumAdvise)(IDataAdviseHolder *, IEnumSTATDATA**) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnDataChange)(IDataAdviseHolder *, IDataObject*,DWORD,DWORD) ;
};

extern const IID IID_IStorage;


typedef struct IStorage { struct IStorageVtbl *lpVtbl; } IStorage; typedef struct IStorageVtbl IStorageVtbl; struct IStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *CreateStream)(IStorage *, LPCWSTR,DWORD,DWORD,DWORD,IStream**) ;
 HRESULT(__attribute__((__stdcall__)) *OpenStream)(IStorage *, LPCWSTR,PVOID,DWORD,DWORD,IStream**) ;
 HRESULT(__attribute__((__stdcall__)) *CreateStorage)(IStorage *, LPCWSTR,DWORD,DWORD,DWORD,IStorage**) ;
 HRESULT(__attribute__((__stdcall__)) *OpenStorage)(IStorage *, LPCWSTR,IStorage*,DWORD,SNB,DWORD,IStorage**) ;
 HRESULT(__attribute__((__stdcall__)) *CopyTo)(IStorage *, DWORD,IID const*,SNB,IStorage*) ;
 HRESULT(__attribute__((__stdcall__)) *MoveElementTo)(IStorage *, LPCWSTR,IStorage*,LPCWSTR,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Commit)(IStorage *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revert)(IStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *EnumElements)(IStorage *, DWORD,PVOID,DWORD,IEnumSTATSTG**) ;
 HRESULT(__attribute__((__stdcall__)) *DestroyElement)(IStorage *, LPCWSTR) ;
 HRESULT(__attribute__((__stdcall__)) *RenameElement)(IStorage *, LPCWSTR,LPCWSTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetElementTimes)(IStorage *, LPCWSTR,FILETIME const*,FILETIME const*,FILETIME const*) ;
 HRESULT(__attribute__((__stdcall__)) *SetClass)(IStorage *, const CLSID* const) ;
 HRESULT(__attribute__((__stdcall__)) *SetStateBits)(IStorage *, DWORD,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(IStorage *, STATSTG*,DWORD) ;
};

extern const IID IID_IRootStorage;


typedef struct IRootStorage { struct IRootStorageVtbl *lpVtbl; } IRootStorage; typedef struct IRootStorageVtbl IRootStorageVtbl; struct IRootStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRootStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRootStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRootStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *SwitchToFile)(IRootStorage *, LPOLESTR) ;
};

extern const IID IID_IRpcChannelBuffer;


typedef struct IRpcChannelBuffer { struct IRpcChannelBufferVtbl *lpVtbl; } IRpcChannelBuffer; typedef struct IRpcChannelBufferVtbl IRpcChannelBufferVtbl; struct IRpcChannelBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRpcChannelBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRpcChannelBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRpcChannelBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *GetBuffer)(IRpcChannelBuffer *, RPCOLEMESSAGE*,const IID* const) ;
 HRESULT(__attribute__((__stdcall__)) *SendReceive)(IRpcChannelBuffer *, RPCOLEMESSAGE*,PULONG) ;
 HRESULT(__attribute__((__stdcall__)) *FreeBuffer)(IRpcChannelBuffer *, RPCOLEMESSAGE*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDestCtx)(IRpcChannelBuffer *, PDWORD,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *IsConnected)(IRpcChannelBuffer *) ;
};

extern const IID IID_IRpcProxyBuffer;


typedef struct IRpcProxyBuffer { struct IRpcProxyBufferVtbl *lpVtbl; } IRpcProxyBuffer; typedef struct IRpcProxyBufferVtbl IRpcProxyBufferVtbl; struct IRpcProxyBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRpcProxyBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRpcProxyBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRpcProxyBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *Connect)(IRpcProxyBuffer *, IRpcChannelBuffer*) ;
 void(__attribute__((__stdcall__)) *Disconnect)(IRpcProxyBuffer *) ;

};

extern const IID IID_IRpcStubBuffer;


typedef struct IRpcStubBuffer { struct IRpcStubBufferVtbl *lpVtbl; } IRpcStubBuffer; typedef struct IRpcStubBufferVtbl IRpcStubBufferVtbl; struct IRpcStubBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRpcStubBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRpcStubBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRpcStubBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *Connect)(IRpcStubBuffer *, LPUNKNOWN) ;
 void(__attribute__((__stdcall__)) *Disconnect)(IRpcStubBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *Invoke)(IRpcStubBuffer *, RPCOLEMESSAGE*,LPRPCSTUBBUFFER) ;
 LPRPCSTUBBUFFER(__attribute__((__stdcall__)) *IsIIDSupported)(IRpcStubBuffer *, const IID* const) ;
 ULONG(__attribute__((__stdcall__)) *CountRefs)(IRpcStubBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *DebugServerQueryInterface)(IRpcStubBuffer *, PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *DebugServerRelease)(IRpcStubBuffer *, PVOID) ;
};

extern const IID IID_IPSFactoryBuffer;


typedef struct IPSFactoryBuffer { struct IPSFactoryBufferVtbl *lpVtbl; } IPSFactoryBuffer; typedef struct IPSFactoryBufferVtbl IPSFactoryBufferVtbl; struct IPSFactoryBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPSFactoryBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPSFactoryBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPSFactoryBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *CreateProxy)(IPSFactoryBuffer *, LPUNKNOWN,const IID* const,LPRPCPROXYBUFFER*,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *CreateStub)(IPSFactoryBuffer *, const IID* const,LPUNKNOWN,LPRPCSTUBBUFFER*) ;
};

extern const IID IID_ILockBytes;


typedef struct ILockBytes { struct ILockBytesVtbl *lpVtbl; } ILockBytes; typedef struct ILockBytesVtbl ILockBytesVtbl; struct ILockBytesVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ILockBytes *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ILockBytes *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ILockBytes *) ;
 HRESULT(__attribute__((__stdcall__)) *ReadAt)(ILockBytes *, ULARGE_INTEGER,PVOID,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *WriteAt)(ILockBytes *, ULARGE_INTEGER,PCVOID,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Flush)(ILockBytes *) ;
 HRESULT(__attribute__((__stdcall__)) *SetSize)(ILockBytes *, ULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *LockRegion)(ILockBytes *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *UnlockRegion)(ILockBytes *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(ILockBytes *, STATSTG*,DWORD) ;
};

extern const IID IID_IExternalConnection;


typedef struct IExternalConnection { struct IExternalConnectionVtbl *lpVtbl; } IExternalConnection; typedef struct IExternalConnectionVtbl IExternalConnectionVtbl; struct IExternalConnectionVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IExternalConnection *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IExternalConnection *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IExternalConnection *) ;
 HRESULT(__attribute__((__stdcall__)) *AddConnection)(IExternalConnection *, DWORD,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *ReleaseConnection)(IExternalConnection *, DWORD,DWORD,BOOL) ;
};

extern const IID IID_IRunnableObject;


typedef struct IRunnableObject { struct IRunnableObjectVtbl *lpVtbl; } IRunnableObject; typedef struct IRunnableObjectVtbl IRunnableObjectVtbl; struct IRunnableObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRunnableObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRunnableObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRunnableObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetRunningClass)(IRunnableObject *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *Run)(IRunnableObject *, LPBC) ;
 BOOL(__attribute__((__stdcall__)) *IsRunning)(IRunnableObject *) ;
 HRESULT(__attribute__((__stdcall__)) *LockRunning)(IRunnableObject *, BOOL,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *SetContainedObject)(IRunnableObject *, BOOL) ;
};

extern const IID IID_IROTData;


typedef struct IROTData { struct IROTDataVtbl *lpVtbl; } IROTData; typedef struct IROTDataVtbl IROTDataVtbl; struct IROTDataVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IROTData *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IROTData *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IROTData *) ;
 HRESULT(__attribute__((__stdcall__)) *GetComparisonData)(IROTData *, PVOID,ULONG,PULONG) ;
};

extern const IID IID_IChannelHook;


typedef struct IChannelHook { struct IChannelHookVtbl *lpVtbl; } IChannelHook; typedef struct IChannelHookVtbl IChannelHookVtbl; struct IChannelHookVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IChannelHook *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IChannelHook *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IChannelHook *) ;
 void(__attribute__((__stdcall__)) *ClientGetSize)(IChannelHook *, const GUID* const,const IID* const,PULONG) ;
 void(__attribute__((__stdcall__)) *ClientFillBuffer)(IChannelHook *, const GUID* const,const IID* const,PULONG,PVOID) ;
 void(__attribute__((__stdcall__)) *ClientNotify)(IChannelHook *, const GUID* const,const IID* const,ULONG,PVOID,DWORD,HRESULT) ;
 void(__attribute__((__stdcall__)) *ServerNotify)(IChannelHook *, const GUID* const,const IID* const,ULONG,PVOID,DWORD) ;
 void(__attribute__((__stdcall__)) *ServerGetSize)(IChannelHook *, const GUID* const,const IID* const,HRESULT,PULONG) ;
 void(__attribute__((__stdcall__)) *ServerFillBuffer)(IChannelHook *, const GUID* const,const IID* const,PULONG,PVOID,HRESULT) ;
};

extern const IID IID_IPropertyStorage;


typedef struct IPropertyStorage { struct IPropertyStorageVtbl *lpVtbl; } IPropertyStorage; typedef struct IPropertyStorageVtbl IPropertyStorageVtbl; struct IPropertyStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPropertyStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPropertyStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPropertyStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *ReadMultiple)(IPropertyStorage *, ULONG,PROPSPEC const*,PROPVARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *WriteMultiple)(IPropertyStorage *, ULONG,PROPSPEC const*,PROPVARIANT*,PROPID) ;
 HRESULT(__attribute__((__stdcall__)) *DeleteMultiple)(IPropertyStorage *, ULONG,PROPSPEC const*) ;
 HRESULT(__attribute__((__stdcall__)) *ReadPropertyNames)(IPropertyStorage *, ULONG,PROPID const*,LPWSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *WritePropertyNames)(IPropertyStorage *, ULONG,PROPID const*,LPWSTR const*) ;
 HRESULT(__attribute__((__stdcall__)) *DeletePropertyNames)(IPropertyStorage *, ULONG,PROPID const*) ;
 HRESULT(__attribute__((__stdcall__)) *SetClass)(IPropertyStorage *, const CLSID* const) ;
 HRESULT(__attribute__((__stdcall__)) *Commit)(IPropertyStorage *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revert)(IPropertyStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *Enum)(IPropertyStorage *, IEnumSTATPROPSTG**) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(IPropertyStorage *, STATPROPSTG*) ;
 HRESULT(__attribute__((__stdcall__)) *SetTimes)(IPropertyStorage *, FILETIME const*,FILETIME const*,FILETIME const*) ;
};

extern const IID IID_IPropertySetStorage;


typedef struct IPropertySetStorage { struct IPropertySetStorageVtbl *lpVtbl; } IPropertySetStorage; typedef struct IPropertySetStorageVtbl IPropertySetStorageVtbl; struct IPropertySetStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPropertySetStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPropertySetStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPropertySetStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *Create)(IPropertySetStorage *, REFFMTID,CLSID*,DWORD,DWORD,LPPROPERTYSTORAGE*) ;
 HRESULT(__attribute__((__stdcall__)) *Open)(IPropertySetStorage *, REFFMTID,DWORD,LPPROPERTYSTORAGE*) ;
 HRESULT(__attribute__((__stdcall__)) *Delete)(IPropertySetStorage *, REFFMTID) ;
 HRESULT(__attribute__((__stdcall__)) *Enum)(IPropertySetStorage *, IEnumSTATPROPSETSTG**) ;
};

extern const IID IID_IClientSecurity;


typedef struct IClientSecurity { struct IClientSecurityVtbl *lpVtbl; } IClientSecurity; typedef struct IClientSecurityVtbl IClientSecurityVtbl; struct IClientSecurityVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IClientSecurity *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IClientSecurity *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IClientSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *QueryBlanket)(IClientSecurity *, PVOID,PDWORD,PDWORD,OLECHAR**,PDWORD,PDWORD,RPC_AUTH_IDENTITY_HANDLE**,PDWORD*) ;
 HRESULT(__attribute__((__stdcall__)) *SetBlanket)(IClientSecurity *, PVOID,DWORD,DWORD,LPWSTR,DWORD,DWORD,RPC_AUTH_IDENTITY_HANDLE*,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *CopyProxy)(IClientSecurity *, LPUNKNOWN,LPUNKNOWN*) ;
};

extern const IID IID_IServerSecurity;


typedef struct IServerSecurity { struct IServerSecurityVtbl *lpVtbl; } IServerSecurity; typedef struct IServerSecurityVtbl IServerSecurityVtbl; struct IServerSecurityVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IServerSecurity *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IServerSecurity *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IServerSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *QueryBlanket)(IServerSecurity *, PDWORD,PDWORD,OLECHAR**,PDWORD,PDWORD,RPC_AUTHZ_HANDLE*,PDWORD*) ;
 HRESULT(__attribute__((__stdcall__)) *ImpersonateClient)(IServerSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *RevertToSelf)(IServerSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *IsImpersonating)(IServerSecurity *) ;
};

extern const IID IID_IClassActivator;


typedef struct IClassActivator { struct IClassActivatorVtbl *lpVtbl; } IClassActivator; typedef struct IClassActivatorVtbl IClassActivatorVtbl; struct IClassActivatorVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IClassActivator *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IClassActivator *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IClassActivator *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassObject)(IClassActivator *, const CLSID* const,DWORD,LCID,const IID* const,PVOID*) ;
};

extern const IID IID_IFillLockBytes;


typedef struct IFillLockBytes { struct IFillLockBytesVtbl *lpVtbl; } IFillLockBytes; typedef struct IFillLockBytesVtbl IFillLockBytesVtbl; struct IFillLockBytesVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IFillLockBytes *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IFillLockBytes *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IFillLockBytes *) ;
 HRESULT(__attribute__((__stdcall__)) *FillAppend)(IFillLockBytes *, void const*,ULONG,PULONG) ;
 HRESULT(__attribute__((__stdcall__)) *FillAt)(IFillLockBytes *, ULARGE_INTEGER,void const*,ULONG,PULONG) ;
 HRESULT(__attribute__((__stdcall__)) *SetFillSize)(IFillLockBytes *, ULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *Terminate)(IFillLockBytes *, BOOL) ;
};

extern const IID IID_IProgressNotify;


typedef struct IProgressNotify { struct IProgressNotifyVtbl *lpVtbl; } IProgressNotify; typedef struct IProgressNotifyVtbl IProgressNotifyVtbl; struct IProgressNotifyVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IProgressNotify *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IProgressNotify *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IProgressNotify *) ;
 HRESULT(__attribute__((__stdcall__)) *OnProgress)(IProgressNotify *, DWORD,DWORD,BOOL,BOOL) ;
};

extern const IID IID_ILayoutStorage;


typedef struct ILayoutStorage { struct ILayoutStorageVtbl *lpVtbl; } ILayoutStorage; typedef struct ILayoutStorageVtbl ILayoutStorageVtbl; struct ILayoutStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ILayoutStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ILayoutStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ILayoutStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *LayoutScript)(ILayoutStorage *, STORAGELAYOUT*,DWORD,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *BeginMonitor)(ILayoutStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *EndMonitor)(ILayoutStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *ReLayoutDocfile)(ILayoutStorage *, OLECHAR*) ;
};

HRESULT __attribute__((__stdcall__)) IMarshal_GetUnmarshalClass_Proxy(IMarshal*,const IID* const,void*,DWORD,void*,DWORD,CLSID*);
void __attribute__((__stdcall__)) IMarshal_GetUnmarshalClass_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_GetMarshalSizeMax_Proxy(IMarshal*,const IID* const,void*,DWORD,void*,DWORD,DWORD*);
void __attribute__((__stdcall__)) IMarshal_GetMarshalSizeMax_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_MarshalInterface_Proxy(IMarshal*,IStream*,const IID* const,void*,DWORD,void*,DWORD);
void __attribute__((__stdcall__)) IMarshal_MarshalInterface_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_UnmarshalInterface_Proxy(IMarshal*,IStream*,const IID* const,void**);
void __attribute__((__stdcall__)) IMarshal_UnmarshalInterface_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_ReleaseMarshalData_Proxy(IMarshal*,IStream*);
void __attribute__((__stdcall__)) IMarshal_ReleaseMarshalData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_DisconnectObject_Proxy(IMarshal*,DWORD);
void __attribute__((__stdcall__)) IMarshal_DisconnectObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMalloc_Alloc_Proxy(IMalloc*,ULONG);
void __attribute__((__stdcall__)) IMalloc_Alloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMalloc_Realloc_Proxy(IMalloc*,void*,ULONG);
void __attribute__((__stdcall__)) IMalloc_Realloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMalloc_Free_Proxy(IMalloc*,void*);
void __attribute__((__stdcall__)) IMalloc_Free_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMalloc_GetSize_Proxy(IMalloc*,void*);
void __attribute__((__stdcall__)) IMalloc_GetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
int __attribute__((__stdcall__)) IMalloc_DidAlloc_Proxy(IMalloc*,void*);
void __attribute__((__stdcall__)) IMalloc_DidAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMalloc_HeapMinimize_Proxy(IMalloc*);
void __attribute__((__stdcall__)) IMalloc_HeapMinimize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMallocSpy_PreAlloc_Proxy(IMallocSpy*,ULONG cbRequest);
void __attribute__((__stdcall__)) IMallocSpy_PreAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PostAlloc_Proxy(IMallocSpy*,void*);
void __attribute__((__stdcall__)) IMallocSpy_PostAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PreFree_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreFree_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMallocSpy_PostFree_Proxy(IMallocSpy*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PostFree_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMallocSpy_PreRealloc_Proxy(IMallocSpy*,void*,ULONG,void**,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreRealloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PostRealloc_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PostRealloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PreGetSize_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreGetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMallocSpy_PostGetSize_Proxy(IMallocSpy*,ULONG,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PostGetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PreDidAlloc_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreDidAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
int __attribute__((__stdcall__)) IMallocSpy_PostDidAlloc_Proxy(IMallocSpy*,void*,BOOL,int);
void __attribute__((__stdcall__)) IMallocSpy_PostDidAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMallocSpy_PreHeapMinimize_Proxy(IMallocSpy* );
void __attribute__((__stdcall__)) IMallocSpy_PreHeapMinimize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMallocSpy_PostHeapMinimize_Proxy(IMallocSpy*);
void __attribute__((__stdcall__)) IMallocSpy_PostHeapMinimize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStdMarshalInfo_GetClassForHandler_Proxy(IStdMarshalInfo*,DWORD,void*,CLSID*);
void __attribute__((__stdcall__)) IStdMarshalInfo_GetClassForHandler_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IExternalConnection_AddConnection_Proxy(IExternalConnection*,DWORD,DWORD);
void __attribute__((__stdcall__)) IExternalConnection_AddConnection_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IExternalConnection_ReleaseConnection_Proxy(IExternalConnection*,DWORD,DWORD,BOOL);
void __attribute__((__stdcall__)) IExternalConnection_ReleaseConnection_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_RemoteNext_Proxy(IEnumUnknown*,ULONG,IUnknown**,ULONG*);
void __attribute__((__stdcall__)) IEnumUnknown_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Skip_Proxy(IEnumUnknown*,ULONG);
void __attribute__((__stdcall__)) IEnumUnknown_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Reset_Proxy(IEnumUnknown* );
void __attribute__((__stdcall__)) IEnumUnknown_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Clone_Proxy(IEnumUnknown*,IEnumUnknown**);
void __attribute__((__stdcall__)) IEnumUnknown_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RegisterObjectBound_Proxy(IBindCtx*,IUnknown*punk);
void __attribute__((__stdcall__)) IBindCtx_RegisterObjectBound_Stub(IRpcStubBuffer*,IRpcChannelBuffer*_pRpcChannelBuffer,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RevokeObjectBound_Proxy(IBindCtx*,IUnknown*punk);
void __attribute__((__stdcall__)) IBindCtx_RevokeObjectBound_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_ReleaseBoundObjects_Proxy(IBindCtx*);
void __attribute__((__stdcall__)) IBindCtx_ReleaseBoundObjects_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_SetBindOptions_Proxy(IBindCtx*,BIND_OPTS*);
void __attribute__((__stdcall__)) IBindCtx_SetBindOptions_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_GetBindOptions_Proxy(IBindCtx*,BIND_OPTS*pbindopts);
void __attribute__((__stdcall__)) IBindCtx_GetBindOptions_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_GetRunningObjectTable_Proxy(IBindCtx*,IRunningObjectTable**);
void __attribute__((__stdcall__)) IBindCtx_GetRunningObjectTable_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RegisterObjectParam_Proxy(IBindCtx*,LPCSTR,IUnknown*);
void __attribute__((__stdcall__)) IBindCtx_RegisterObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_GetObjectParam_Proxy(IBindCtx*,LPCSTR,IUnknown**);
void __attribute__((__stdcall__)) IBindCtx_GetObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_EnumObjectParam_Proxy(IBindCtx*,IEnumString**);
void __attribute__((__stdcall__)) IBindCtx_EnumObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RevokeObjectParam_Proxy(IBindCtx*,LPCSTR);
void __attribute__((__stdcall__)) IBindCtx_RevokeObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_RemoteNext_Proxy(IEnumMoniker*,ULONG,IMoniker**,ULONG*);
void __attribute__((__stdcall__)) IEnumMoniker_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Skip_Proxy(IEnumMoniker*,ULONG);
void __attribute__((__stdcall__)) IEnumMoniker_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Reset_Proxy(IEnumMoniker*);
void __attribute__((__stdcall__)) IEnumMoniker_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Clone_Proxy(IEnumMoniker*,IEnumMoniker**);
void __attribute__((__stdcall__)) IEnumMoniker_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_GetRunningClass_Proxy(IRunnableObject*,LPCLSID);
void __attribute__((__stdcall__)) IRunnableObject_GetRunningClass_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_Run_Proxy(IRunnableObject*,LPBINDCTX);
void __attribute__((__stdcall__)) IRunnableObject_Run_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
BOOL __attribute__((__stdcall__)) IRunnableObject_IsRunning_Proxy(IRunnableObject*);
void __attribute__((__stdcall__)) IRunnableObject_IsRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_LockRunning_Proxy(IRunnableObject*,BOOL,BOOL);
void __attribute__((__stdcall__)) IRunnableObject_LockRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_SetContainedObject_Proxy(IRunnableObject*,BOOL);
void __attribute__((__stdcall__)) IRunnableObject_SetContainedObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_Register_Proxy(IRunningObjectTable*,DWORD,IUnknown*,IMoniker*,DWORD*);
void __attribute__((__stdcall__)) IRunningObjectTable_Register_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_Revoke_Proxy(IRunningObjectTable*,DWORD);
void __attribute__((__stdcall__)) IRunningObjectTable_Revoke_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_IsRunning_Proxy(IRunningObjectTable*,IMoniker*);
void __attribute__((__stdcall__)) IRunningObjectTable_IsRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_GetObject_Proxy(IRunningObjectTable*,IMoniker*,IUnknown**);
void __attribute__((__stdcall__)) IRunningObjectTable_GetObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_NoteChangeTime_Proxy(IRunningObjectTable*,DWORD,FILETIME*);
void __attribute__((__stdcall__)) IRunningObjectTable_NoteChangeTime_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_GetTimeOfLastChange_Proxy(IRunningObjectTable*,IMoniker*,FILETIME*);
void __attribute__((__stdcall__)) IRunningObjectTable_GetTimeOfLastChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_EnumRunning_Proxy(IRunningObjectTable*,IEnumMoniker**);
void __attribute__((__stdcall__)) IRunningObjectTable_EnumRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersist_GetClassID_Proxy(IPersist*,CLSID*);
void __attribute__((__stdcall__)) IPersist_GetClassID_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_IsDirty_Proxy(IPersistStream*);
void __attribute__((__stdcall__)) IPersistStream_IsDirty_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_Load_Proxy(IPersistStream*,IStream*);
void __attribute__((__stdcall__)) IPersistStream_Load_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_Save_Proxy(IPersistStream*,IStream*,BOOL);
void __attribute__((__stdcall__)) IPersistStream_Save_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_GetSizeMax_Proxy(IPersistStream*,ULARGE_INTEGER*);
void __attribute__((__stdcall__)) IPersistStream_GetSizeMax_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_RemoteBindToObject_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
void __attribute__((__stdcall__)) IMoniker_RemoteBindToObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_RemoteBindToStorage_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
void __attribute__((__stdcall__)) IMoniker_RemoteBindToStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Reduce_Proxy(IMoniker*,IBindCtx*,DWORD,IMoniker**,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_Reduce_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_ComposeWith_Proxy(IMoniker*,IMoniker*,BOOL,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_ComposeWith_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Enum_Proxy(IMoniker*,BOOL,IEnumMoniker**);
void __attribute__((__stdcall__)) IMoniker_Enum_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_IsEqual_Proxy(IMoniker*,IMoniker*);
void __attribute__((__stdcall__)) IMoniker_IsEqual_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Hash_Proxy(IMoniker*,DWORD*);
void __attribute__((__stdcall__)) IMoniker_Hash_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_IsRunning_Proxy(IMoniker*,IBindCtx*,IMoniker*,IMoniker*);
void __attribute__((__stdcall__)) IMoniker_IsRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_GetTimeOfLastChange_Proxy(IMoniker*,IBindCtx*,IMoniker*,FILETIME*);
void __attribute__((__stdcall__)) IMoniker_GetTimeOfLastChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Inverse_Proxy(IMoniker*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_Inverse_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_CommonPrefixWith_Proxy(IMoniker*,IMoniker*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_CommonPrefixWith_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_RelativePathTo_Proxy(IMoniker*,IMoniker*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_RelativePathTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_GetDisplayName_Proxy(IMoniker*,IBindCtx*,IMoniker*,LPCSTR*);
void __attribute__((__stdcall__)) IMoniker_GetDisplayName_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_ParseDisplayName_Proxy(IMoniker*,IBindCtx*,IMoniker*,LPCSTR,ULONG*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_ParseDisplayName_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_IsSystemMoniker_Proxy(IMoniker*,DWORD*);
void __attribute__((__stdcall__)) IMoniker_IsSystemMoniker_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IROTData_GetComparisonData_Proxy(IROTData*,BYTE*,ULONG cbMax,ULONG*);
void __attribute__((__stdcall__)) IROTData_GetComparisonData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_RemoteNext_Proxy(IEnumString*,ULONG,LPCSTR*rgelt,ULONG*);
void __attribute__((__stdcall__)) IEnumString_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_Skip_Proxy(IEnumString*,ULONG);
void __attribute__((__stdcall__)) IEnumString_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_Reset_Proxy(IEnumString*);
void __attribute__((__stdcall__)) IEnumString_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_Clone_Proxy(IEnumString*,IEnumString**);
void __attribute__((__stdcall__)) IEnumString_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteRead_Proxy(IStream*,BYTE*,ULONG,ULONG*);
void __attribute__((__stdcall__)) IStream_RemoteRead_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteWrite_Proxy(IStream*,BYTE*pv,ULONG,ULONG*);
void __attribute__((__stdcall__)) IStream_RemoteWrite_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteSeek_Proxy(IStream*,LARGE_INTEGER,DWORD,ULARGE_INTEGER*);
void __attribute__((__stdcall__)) IStream_RemoteSeek_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_SetSize_Proxy(IStream*,ULARGE_INTEGER);
void __attribute__((__stdcall__)) IStream_SetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteCopyTo_Proxy(IStream*,IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*);
void __attribute__((__stdcall__)) IStream_RemoteCopyTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Commit_Proxy(IStream*,DWORD);
void __attribute__((__stdcall__)) IStream_Commit_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Revert_Proxy(IStream*);
void __attribute__((__stdcall__)) IStream_Revert_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_LockRegion_Proxy(IStream*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) IStream_LockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_UnlockRegion_Proxy(IStream*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) IStream_UnlockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Stat_Proxy(IStream*,STATSTG*,DWORD);
void __attribute__((__stdcall__)) IStream_Stat_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Clone_Proxy(IStream*,IStream**);
void __attribute__((__stdcall__)) IStream_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_RemoteNext_Proxy(IEnumSTATSTG*,ULONG,STATSTG*,ULONG*);
void __attribute__((__stdcall__)) IEnumSTATSTG_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Skip_Proxy(IEnumSTATSTG*,ULONG celt);
void __attribute__((__stdcall__)) IEnumSTATSTG_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Reset_Proxy(IEnumSTATSTG*);
void __attribute__((__stdcall__)) IEnumSTATSTG_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Clone_Proxy(IEnumSTATSTG*,IEnumSTATSTG**);
void __attribute__((__stdcall__)) IEnumSTATSTG_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_CreateStream_Proxy(IStorage*,OLECHAR*,DWORD,DWORD,DWORD,IStream**);
void __attribute__((__stdcall__)) IStorage_CreateStream_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_RemoteOpenStream_Proxy(IStorage*,const OLECHAR*,unsigned long,BYTE*,DWORD,DWORD,IStream**);
void __attribute__((__stdcall__)) IStorage_RemoteOpenStream_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_CreateStorage_Proxy(IStorage*,OLECHAR*,DWORD,DWORD,DWORD,IStorage**);
void __attribute__((__stdcall__)) IStorage_CreateStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_OpenStorage_Proxy(IStorage*,OLECHAR*,IStorage*,DWORD,SNB,DWORD,IStorage**);
void __attribute__((__stdcall__)) IStorage_OpenStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_CopyTo_Proxy(IStorage*,DWORD,const IID*,SNB,IStorage*);
void __attribute__((__stdcall__)) IStorage_CopyTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_MoveElementTo_Proxy(IStorage*,const OLECHAR*,IStorage*,const OLECHAR*,DWORD);
void __attribute__((__stdcall__)) IStorage_MoveElementTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_Commit_Proxy(IStorage*,DWORD);
void __attribute__((__stdcall__)) IStorage_Commit_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_Revert_Proxy(IStorage*);
void __attribute__((__stdcall__)) IStorage_Revert_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_RemoteEnumElements_Proxy(IStorage*,DWORD,unsigned long,BYTE*,DWORD,IEnumSTATSTG**);
void __attribute__((__stdcall__)) IStorage_RemoteEnumElements_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_DestroyElement_Proxy(IStorage*,OLECHAR*);
void __attribute__((__stdcall__)) IStorage_DestroyElement_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_RenameElement_Proxy(IStorage*,const OLECHAR*,const OLECHAR*);
void __attribute__((__stdcall__)) IStorage_RenameElement_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_SetElementTimes_Proxy(IStorage*,const OLECHAR*,const FILETIME*,const FILETIME*,const FILETIME*);
void __attribute__((__stdcall__)) IStorage_SetElementTimes_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_SetClass_Proxy(IStorage*,const CLSID* const);
void __attribute__((__stdcall__)) IStorage_SetClass_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_SetStateBits_Proxy(IStorage*,DWORD,DWORD);
void __attribute__((__stdcall__)) IStorage_SetStateBits_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_Stat_Proxy(IStorage*,STATSTG*,DWORD);
void __attribute__((__stdcall__)) IStorage_Stat_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_IsDirty_Proxy(IPersistFile*);
void __attribute__((__stdcall__)) IPersistFile_IsDirty_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_Load_Proxy(IPersistFile*,LPCOLESTR,DWORD);
void __attribute__((__stdcall__)) IPersistFile_Load_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_Save_Proxy(IPersistFile*,LPCOLESTR pszFileName,BOOL);
void __attribute__((__stdcall__)) IPersistFile_Save_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_SaveCompleted_Proxy(IPersistFile*,LPCOLESTR);
void __attribute__((__stdcall__)) IPersistFile_SaveCompleted_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_GetCurFile_Proxy(IPersistFile*,LPCSTR*);
void __attribute__((__stdcall__)) IPersistFile_GetCurFile_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_IsDirty_Proxy(IPersistStorage*);
void __attribute__((__stdcall__)) IPersistStorage_IsDirty_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_InitNew_Proxy(IPersistStorage*,IStorage*);
void __attribute__((__stdcall__)) IPersistStorage_InitNew_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_Load_Proxy(IPersistStorage*,IStorage*);
void __attribute__((__stdcall__)) IPersistStorage_Load_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_Save_Proxy(IPersistStorage*,IStorage*,BOOL);
void __attribute__((__stdcall__)) IPersistStorage_Save_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_SaveCompleted_Proxy(IPersistStorage*,IStorage*);
void __attribute__((__stdcall__)) IPersistStorage_SaveCompleted_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_HandsOffStorage_Proxy(IPersistStorage*);
void __attribute__((__stdcall__)) IPersistStorage_HandsOffStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_RemoteReadAt_Proxy(ILockBytes*,ULARGE_INTEGER,BYTE*,ULONG,ULONG*);
void __attribute__((__stdcall__)) ILockBytes_RemoteReadAt_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_RemoteWriteAt_Proxy(ILockBytes*,ULARGE_INTEGER,BYTE*pv,ULONG,ULONG*);
void __attribute__((__stdcall__)) ILockBytes_RemoteWriteAt_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_Flush_Proxy(ILockBytes*);
void __attribute__((__stdcall__)) ILockBytes_Flush_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_SetSize_Proxy(ILockBytes*,ULARGE_INTEGER);
void __attribute__((__stdcall__)) ILockBytes_SetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_LockRegion_Proxy(ILockBytes*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) ILockBytes_LockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_UnlockRegion_Proxy(ILockBytes*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) ILockBytes_UnlockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_Stat_Proxy(ILockBytes*,STATSTG*,DWORD);
void __attribute__((__stdcall__)) ILockBytes_Stat_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_RemoteNext_Proxy(IEnumFORMATETC*,ULONG,FORMATETC*,ULONG*);
void __attribute__((__stdcall__)) IEnumFORMATETC_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Skip_Proxy(IEnumFORMATETC*,ULONG);
void __attribute__((__stdcall__)) IEnumFORMATETC_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Reset_Proxy(IEnumFORMATETC*);
void __attribute__((__stdcall__)) IEnumFORMATETC_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Clone_Proxy(IEnumFORMATETC*,IEnumFORMATETC**);
void __attribute__((__stdcall__)) IEnumFORMATETC_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Next_Proxy(IEnumFORMATETC*,ULONG,FORMATETC*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Next_Stub(IEnumFORMATETC*,ULONG,FORMATETC*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_RemoteNext_Proxy(IEnumSTATDATA*,ULONG,STATDATA*,ULONG*);
void __attribute__((__stdcall__)) IEnumSTATDATA_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Skip_Proxy(IEnumSTATDATA*,ULONG);
void __attribute__((__stdcall__)) IEnumSTATDATA_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Reset_Proxy(IEnumSTATDATA*);
void __attribute__((__stdcall__)) IEnumSTATDATA_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Clone_Proxy(IEnumSTATDATA*,IEnumSTATDATA**);
void __attribute__((__stdcall__)) IEnumSTATDATA_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Next_Proxy(IEnumSTATDATA*,ULONG,STATDATA*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Next_Stub(IEnumSTATDATA*,ULONG,STATDATA*,ULONG*);
HRESULT __attribute__((__stdcall__)) IRootStorage_SwitchToFile_Proxy(IRootStorage*,LPCSTR);
void __attribute__((__stdcall__)) IRootStorage_SwitchToFile_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnDataChange_Proxy(IAdviseSink*,FORMATETC*,RemSTGMEDIUM*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnDataChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnViewChange_Proxy(IAdviseSink*,DWORD,LONG);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnViewChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnRename_Proxy(IAdviseSink*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnRename_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnSave_Proxy(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnSave_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IAdviseSink_RemoteOnClose_Proxy(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnClose_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_OnDataChange_Proxy(IAdviseSink*,FORMATETC*,STGMEDIUM*);
void __attribute__((__stdcall__)) IAdviseSink_OnDataChange_Stub(IAdviseSink*,FORMATETC*,RemSTGMEDIUM*);
void __attribute__((__stdcall__)) IAdviseSink_OnViewChange_Proxy(IAdviseSink*,DWORD,LONG);
void __attribute__((__stdcall__)) IAdviseSink_OnViewChange_Stub(IAdviseSink*,DWORD,LONG);
void __attribute__((__stdcall__)) IAdviseSink_OnRename_Proxy(IAdviseSink*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink_OnRename_Stub(IAdviseSink*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink_OnSave_Proxy(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_OnSave_Stub(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_OnClose_Proxy(IAdviseSink*);
HRESULT __attribute__((__stdcall__)) IAdviseSink_OnClose_Stub(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink2_RemoteOnLinkSrcChange_Proxy(IAdviseSink2*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink2_RemoteOnLinkSrcChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink2_OnLinkSrcChange_Proxy(IAdviseSink2*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink2_OnLinkSrcChange_Stub(IAdviseSink2*,IMoniker*);
HRESULT __attribute__((__stdcall__)) IDataObject_RemoteGetData_Proxy(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
void __attribute__((__stdcall__)) IDataObject_RemoteGetData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_RemoteGetDataHere_Proxy(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
void __attribute__((__stdcall__)) IDataObject_RemoteGetDataHere_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_QueryGetData_Proxy(IDataObject*,FORMATETC*);
void __attribute__((__stdcall__)) IDataObject_QueryGetData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_GetCanonicalFormatEtc_Proxy(IDataObject*,FORMATETC*,FORMATETC*);
void __attribute__((__stdcall__)) IDataObject_GetCanonicalFormatEtc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_RemoteSetData_Proxy(IDataObject*,FORMATETC*,RemSTGMEDIUM*,BOOL);
void __attribute__((__stdcall__)) IDataObject_RemoteSetData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_EnumFormatEtc_Proxy(IDataObject*,DWORD,IEnumFORMATETC**);
void __attribute__((__stdcall__)) IDataObject_EnumFormatEtc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_DAdvise_Proxy(IDataObject*,FORMATETC*,DWORD,IAdviseSink*,DWORD*);
void __attribute__((__stdcall__)) IDataObject_DAdvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_DUnadvise_Proxy(IDataObject*,DWORD);
void __attribute__((__stdcall__)) IDataObject_DUnadvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_EnumDAdvise_Proxy(IDataObject*,IEnumSTATDATA**);
void __attribute__((__stdcall__)) IDataObject_EnumDAdvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_GetData_Proxy(IDataObject*,FORMATETC*,STGMEDIUM*);
HRESULT __attribute__((__stdcall__)) IDataObject_GetData_Stub(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
HRESULT __attribute__((__stdcall__)) IDataObject_GetDataHere_Proxy(IDataObject*,FORMATETC*,STGMEDIUM*);
HRESULT __attribute__((__stdcall__)) IDataObject_GetDataHere_Stub(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
HRESULT __attribute__((__stdcall__)) IDataObject_SetData_Proxy(IDataObject*,FORMATETC*,STGMEDIUM*,BOOL);
HRESULT __attribute__((__stdcall__)) IDataObject_SetData_Stub(IDataObject*,FORMATETC*,RemSTGMEDIUM*,BOOL);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_Advise_Proxy(IDataAdviseHolder*,IDataObject*,FORMATETC*,DWORD,IAdviseSink*,DWORD*);
void __attribute__((__stdcall__)) IDataAdviseHolder_Advise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_Unadvise_Proxy(IDataAdviseHolder*,DWORD);
void __attribute__((__stdcall__)) IDataAdviseHolder_Unadvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_EnumAdvise_Proxy(IDataAdviseHolder*,IEnumSTATDATA**);
void __attribute__((__stdcall__)) IDataAdviseHolder_EnumAdvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_SendOnDataChange_Proxy(IDataAdviseHolder*,IDataObject*,DWORD,DWORD);
void __attribute__((__stdcall__)) IDataAdviseHolder_SendOnDataChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IMessageFilter_HandleInComingCall_Proxy(IMessageFilter*,DWORD,HTASK,DWORD,LPINTERFACEINFO);
void __attribute__((__stdcall__)) IMessageFilter_HandleInComingCall_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IMessageFilter_RetryRejectedCall_Proxy(IMessageFilter*,HTASK,DWORD,DWORD);
void __attribute__((__stdcall__)) IMessageFilter_RetryRejectedCall_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IMessageFilter_MessagePending_Proxy(IMessageFilter*,HTASK,DWORD,DWORD);
void __attribute__((__stdcall__)) IMessageFilter_MessagePending_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_GetBuffer_Proxy(IRpcChannelBuffer*,RPCOLEMESSAGE*,const IID* const);
void __attribute__((__stdcall__)) IRpcChannelBuffer_GetBuffer_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_SendReceive_Proxy(IRpcChannelBuffer*,RPCOLEMESSAGE*,ULONG*);
void __attribute__((__stdcall__)) IRpcChannelBuffer_SendReceive_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_FreeBuffer_Proxy(IRpcChannelBuffer*,RPCOLEMESSAGE*);
void __attribute__((__stdcall__)) IRpcChannelBuffer_FreeBuffer_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_GetDestCtx_Proxy(IRpcChannelBuffer*,DWORD*,void**);
void __attribute__((__stdcall__)) IRpcChannelBuffer_GetDestCtx_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_IsConnected_Proxy(IRpcChannelBuffer*);
void __attribute__((__stdcall__)) IRpcChannelBuffer_IsConnected_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcProxyBuffer_Connect_Proxy(IRpcProxyBuffer*,IRpcChannelBuffer*pRpcChannelBuffer);
void __attribute__((__stdcall__)) IRpcProxyBuffer_Connect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IRpcProxyBuffer_Disconnect_Proxy(IRpcProxyBuffer*);
void __attribute__((__stdcall__)) IRpcProxyBuffer_Disconnect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcStubBuffer_Connect_Proxy(IRpcStubBuffer*,IUnknown*);
void __attribute__((__stdcall__)) IRpcStubBuffer_Connect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IRpcStubBuffer_Disconnect_Proxy(IRpcStubBuffer*);
void __attribute__((__stdcall__)) IRpcStubBuffer_Disconnect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcStubBuffer_Invoke_Proxy(IRpcStubBuffer*,RPCOLEMESSAGE*,IRpcChannelBuffer*);
void __attribute__((__stdcall__)) IRpcStubBuffer_Invoke_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
IRpcStubBuffer*__attribute__((__stdcall__)) IRpcStubBuffer_IsIIDSupported_Proxy(IRpcStubBuffer*,const IID* const);
void __attribute__((__stdcall__)) IRpcStubBuffer_IsIIDSupported_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IRpcStubBuffer_CountRefs_Proxy(IRpcStubBuffer*);
void __attribute__((__stdcall__)) IRpcStubBuffer_CountRefs_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerQueryInterface_Proxy(IRpcStubBuffer*,void**);
void __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerQueryInterface_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerRelease_Proxy(IRpcStubBuffer*,void*);
void __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerRelease_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPSFactoryBuffer_CreateProxy_Proxy(IPSFactoryBuffer*,IUnknown*,const IID* const,IRpcProxyBuffer**,void**);
void __attribute__((__stdcall__)) IPSFactoryBuffer_CreateProxy_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPSFactoryBuffer_CreateStub_Proxy(IPSFactoryBuffer*,const IID* const,IUnknown*,IRpcStubBuffer**);
void __attribute__((__stdcall__)) IPSFactoryBuffer_CreateStub_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) SNB_to_xmit(SNB*,RemSNB**);
void __attribute__((__stdcall__)) SNB_from_xmit(RemSNB*,SNB*);
void __attribute__((__stdcall__)) SNB_free_inst(SNB*);
void __attribute__((__stdcall__)) SNB_free_xmit(RemSNB*);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Next_Proxy(IEnumUnknown*,ULONG,IUnknown**,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Next_Stub(IEnumUnknown*,ULONG,IUnknown**,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Next_Proxy(IEnumMoniker*,ULONG,IMoniker**,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Next_Stub(IEnumMoniker*,ULONG,IMoniker**,ULONG*);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToObject_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,void**);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToObject_Stub(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToStorage_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,void**);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToStorage_Stub(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
HRESULT __attribute__((__stdcall__)) IEnumString_Next_Proxy(IEnumString*,ULONG,LPCSTR*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumString_Next_Stub(IEnumString*,ULONG,LPCSTR*,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Read_Proxy(IStream*,void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Read_Stub(IStream*,BYTE*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Write_Proxy(IStream*,void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Write_Stub(IStream*,BYTE*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Seek_Proxy(IStream*,LARGE_INTEGER,DWORD,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IStream_Seek_Stub(IStream*,LARGE_INTEGER,DWORD,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IStream_CopyTo_Proxy(IStream*,IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IStream_CopyTo_Stub(IStream*,IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Next_Proxy(IEnumSTATSTG*,ULONG,STATSTG*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Next_Stub(IEnumSTATSTG*,ULONG,STATSTG*,ULONG*);
HRESULT __attribute__((__stdcall__)) IStorage_OpenStream_Proxy(IStorage*,OLECHAR*,void*,DWORD,DWORD,IStream**);
HRESULT __attribute__((__stdcall__)) IStorage_OpenStream_Stub(IStorage*,OLECHAR*,unsigned long,BYTE*,DWORD,DWORD,IStream** );
HRESULT __attribute__((__stdcall__)) IStorage_EnumElements_Proxy(IStorage*,DWORD,void*,DWORD,IEnumSTATSTG**);
HRESULT __attribute__((__stdcall__)) IStorage_EnumElements_Stub(IStorage*,DWORD,unsigned long,BYTE*,DWORD,IEnumSTATSTG**);
HRESULT __attribute__((__stdcall__)) ILockBytes_ReadAt_Proxy(ILockBytes*,ULARGE_INTEGER,void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) ILockBytes_ReadAt_Stub(ILockBytes*,ULARGE_INTEGER,BYTE*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) ILockBytes_WriteAt_Proxy(ILockBytes*,ULARGE_INTEGER,const void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) ILockBytes_WriteAt_Stub(ILockBytes*,ULARGE_INTEGER,BYTE*,ULONG,ULONG*);
# 60 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 2 3
# 73 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/cguid.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/cguid.h" 3





extern const IID GUID_NULL;
extern const IID IID_IRpcChannel;
extern const IID IID_IRpcStub;
extern const IID IID_IStubManager;
extern const IID IID_IRpcProxy;
extern const IID IID_IProxyManager;
extern const IID IID_IPSFactory;
extern const IID IID_IInternalMoniker;
extern const IID IID_IDfReserved1;
extern const IID IID_IDfReserved2;
extern const IID IID_IDfReserved3;
extern const CLSID CLSID_StdMarshal;
extern const IID IID_IStub;
extern const IID IID_IProxy;
extern const IID IID_IEnumGeneric;
extern const IID IID_IEnumHolder;
extern const IID IID_IEnumCallback;
extern const IID IID_IOleManager;
extern const IID IID_IOlePresObj;
extern const IID IID_IDebug;
extern const IID IID_IDebugStream;
extern const CLSID CLSID_PSGenObject;
extern const CLSID CLSID_PSClientSite;
extern const CLSID CLSID_PSClassObject;
extern const CLSID CLSID_PSInPlaceActive;
extern const CLSID CLSID_PSInPlaceFrame;
extern const CLSID CLSID_PSDragDrop;
extern const CLSID CLSID_PSBindCtx;
extern const CLSID CLSID_PSEnumerators;
extern const CLSID CLSID_StaticMetafile;
extern const CLSID CLSID_StaticDib;
extern const CLSID CID_CDfsVolume;
extern const CLSID CLSID_CCDFormKrnl;
extern const CLSID CLSID_CCDPropertyPage;
extern const CLSID CLSID_CCDFormDialog;
extern const CLSID CLSID_CCDCommandButton;
extern const CLSID CLSID_CCDComboBox;
extern const CLSID CLSID_CCDTextBox;
extern const CLSID CLSID_CCDCheckBox;
extern const CLSID CLSID_CCDLabel;
extern const CLSID CLSID_CCDOptionButton;
extern const CLSID CLSID_CCDListBox;
extern const CLSID CLSID_CCDScrollBar;
extern const CLSID CLSID_CCDGroupBox;
extern const CLSID CLSID_CCDGeneralPropertyPage;
extern const CLSID CLSID_CCDGenericPropertyPage;
extern const CLSID CLSID_CCDFontPropertyPage;
extern const CLSID CLSID_CCDColorPropertyPage;
extern const CLSID CLSID_CCDLabelPropertyPage;
extern const CLSID CLSID_CCDCheckBoxPropertyPage;
extern const CLSID CLSID_CCDTextBoxPropertyPage;
extern const CLSID CLSID_CCDOptionButtonPropertyPage;
extern const CLSID CLSID_CCDListBoxPropertyPage;
extern const CLSID CLSID_CCDCommandButtonPropertyPage;
extern const CLSID CLSID_CCDComboBoxPropertyPage;
extern const CLSID CLSID_CCDScrollBarPropertyPage;
extern const CLSID CLSID_CCDGroupBoxPropertyPage;
extern const CLSID CLSID_CCDXObjectPropertyPage;
extern const CLSID CLSID_CStdPropertyFrame;
extern const CLSID CLSID_CFormPropertyPage;
extern const CLSID CLSID_CGridPropertyPage;
extern const CLSID CLSID_CWSJArticlePage;
extern const CLSID CLSID_CSystemPage;
extern const CLSID CLSID_IdentityUnmarshal;
extern const CLSID CLSID_InProcFreeMarshaler;
extern const CLSID CLSID_Picture_Metafile;
extern const CLSID CLSID_Picture_EnhMetafile;
extern const CLSID CLSID_Picture_Dib;
extern const GUID GUID_TRISTATE;
# 74 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/objbase.h" 2 3

typedef enum tagCOINIT {
 COINIT_APARTMENTTHREADED = 0x2,
 COINIT_MULTITHREADED = 0x0,
 COINIT_DISABLE_OLE1DDE = 0x4,
 COINIT_SPEED_OVER_MEMORY = 0x8
} COINIT;
typedef enum tagSTDMSHLFLAGS {
    SMEXF_SERVER = 0x01,
    SMEXF_HANDLER = 0x02
} STDMSHLFLAGS;

extern DWORD __attribute__((__stdcall__)) CoBuildVersion(void);
extern HRESULT __attribute__((__stdcall__)) CoInitialize(PVOID);
extern HRESULT __attribute__((__stdcall__)) CoInitializeEx(LPVOID,DWORD);
extern void __attribute__((__stdcall__)) CoUninitialize(void);
extern HRESULT __attribute__((__stdcall__)) CoGetMalloc(DWORD,LPMALLOC*);
extern DWORD __attribute__((__stdcall__)) CoGetCurrentProcess(void);
extern HRESULT __attribute__((__stdcall__)) CoRegisterMallocSpy(LPMALLOCSPY);
extern HRESULT __attribute__((__stdcall__)) CoRevokeMallocSpy(void);
extern HRESULT __attribute__((__stdcall__)) CoCreateStandardMalloc(DWORD,IMalloc**);




extern HRESULT __attribute__((__stdcall__)) CoGetClassObject(const CLSID* const,DWORD,COSERVERINFO*,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoRegisterClassObject(const CLSID* const,LPUNKNOWN,DWORD,DWORD,PDWORD);
extern HRESULT __attribute__((__stdcall__)) CoRevokeClassObject(DWORD);
extern HRESULT __attribute__((__stdcall__)) CoGetMarshalSizeMax(ULONG*,const IID* const,LPUNKNOWN,DWORD,PVOID,DWORD);
extern HRESULT __attribute__((__stdcall__)) CoMarshalInterface(LPSTREAM,const IID* const,LPUNKNOWN,DWORD,PVOID,DWORD);
extern HRESULT __attribute__((__stdcall__)) CoUnmarshalInterface(LPSTREAM,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoMarshalHresult(LPSTREAM,HRESULT);
extern HRESULT __attribute__((__stdcall__)) CoUnmarshalHresult(LPSTREAM,HRESULT*);
extern HRESULT __attribute__((__stdcall__)) CoReleaseMarshalData(LPSTREAM);
extern HRESULT __attribute__((__stdcall__)) CoDisconnectObject(LPUNKNOWN,DWORD);
extern HRESULT __attribute__((__stdcall__)) CoLockObjectExternal(LPUNKNOWN,BOOL,BOOL);
extern HRESULT __attribute__((__stdcall__)) CoGetStandardMarshal(const IID* const,LPUNKNOWN,DWORD,PVOID,DWORD,LPMARSHAL*);
extern HRESULT __attribute__((__stdcall__)) CoGetStdMarshalEx(LPUNKNOWN,DWORD,LPUNKNOWN*);
extern BOOL __attribute__((__stdcall__)) CoIsHandlerConnected(LPUNKNOWN);
extern BOOL __attribute__((__stdcall__)) CoHasStrongExternalConnections(LPUNKNOWN);
extern HRESULT __attribute__((__stdcall__)) CoMarshalInterThreadInterfaceInStream(const IID* const,LPUNKNOWN,LPSTREAM*);
extern HRESULT __attribute__((__stdcall__)) CoGetInterfaceAndReleaseStream(LPSTREAM,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoCreateFreeThreadedMarshaler(LPUNKNOWN,LPUNKNOWN*);
extern HINSTANCE __attribute__((__stdcall__)) CoLoadLibrary(LPOLESTR,BOOL);
extern void __attribute__((__stdcall__)) CoFreeLibrary(HINSTANCE);
extern void __attribute__((__stdcall__)) CoFreeAllLibraries(void);
extern void __attribute__((__stdcall__)) CoFreeUnusedLibraries(void);
extern HRESULT __attribute__((__stdcall__)) CoCreateInstance(const CLSID* const,LPUNKNOWN,DWORD,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoCreateInstanceEx(const CLSID* const,IUnknown*,DWORD,COSERVERINFO*,DWORD,MULTI_QI*);
extern HRESULT __attribute__((__stdcall__)) StringFromCLSID(const CLSID* const,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) CLSIDFromString(LPOLESTR,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) StringFromIID(const IID* const,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) IIDFromString(LPOLESTR,LPIID);
extern BOOL __attribute__((__stdcall__)) CoIsOle1Class(const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) ProgIDFromCLSID(const CLSID* const,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) CLSIDFromProgID(LPCOLESTR,LPCLSID);
extern int __attribute__((__stdcall__)) StringFromGUID2(const GUID* const,LPOLESTR,int);
extern HRESULT __attribute__((__stdcall__)) CoCreateGuid(GUID*);
extern BOOL __attribute__((__stdcall__)) CoFileTimeToDosDateTime(FILETIME*,LPWORD,LPWORD);
extern BOOL __attribute__((__stdcall__)) CoDosDateTimeToFileTime(WORD,WORD,FILETIME*);
extern HRESULT __attribute__((__stdcall__)) CoFileTimeNow(FILETIME*);
extern HRESULT __attribute__((__stdcall__)) CoRegisterMessageFilter(LPMESSAGEFILTER,LPMESSAGEFILTER*);
extern HRESULT __attribute__((__stdcall__)) CoGetTreatAsClass(const CLSID* const,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) CoTreatAsClass(const CLSID* const,const CLSID* const);
typedef HRESULT (__attribute__((__stdcall__)) *LPFNGETCLASSOBJECT)(const CLSID* const,const IID* const,PVOID*);
typedef HRESULT (__attribute__((__stdcall__)) *LPFNCANUNLOADNOW)(void);
extern HRESULT __attribute__((__stdcall__)) DllGetClassObject(const CLSID* const,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) DllCanUnloadNow(void);
extern PVOID __attribute__((__stdcall__)) CoTaskMemAlloc(ULONG);
extern PVOID __attribute__((__stdcall__)) CoTaskMemRealloc(PVOID,ULONG);
extern void __attribute__((__stdcall__)) CoTaskMemFree(PVOID);
extern HRESULT __attribute__((__stdcall__)) CreateDataAdviseHolder(LPDATAADVISEHOLDER*);
extern HRESULT __attribute__((__stdcall__)) CreateDataCache(LPUNKNOWN,const CLSID* const,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) StgCreateDocfile(const OLECHAR*,DWORD,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgCreateDocfileOnILockBytes(ILockBytes*,DWORD,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgOpenStorage(const OLECHAR*,IStorage*,DWORD,SNB,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgOpenStorageOnILockBytes(ILockBytes*,IStorage*,DWORD,SNB,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgIsStorageFile(const OLECHAR*);
extern HRESULT __attribute__((__stdcall__)) StgIsStorageILockBytes(ILockBytes*);
extern HRESULT __attribute__((__stdcall__)) StgSetTimes(OLECHAR const*,FILETIME const*,FILETIME const*,FILETIME const*);
extern HRESULT __attribute__((__stdcall__)) BindMoniker(LPMONIKER,DWORD,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoGetObject(LPCWSTR,BIND_OPTS*,const IID* const,void**);
extern HRESULT __attribute__((__stdcall__)) MkParseDisplayName(LPBC,LPCOLESTR,ULONG*,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) MonikerRelativePathTo(LPMONIKER,LPMONIKER,LPMONIKER*,BOOL);
extern HRESULT __attribute__((__stdcall__)) MonikerCommonPrefixWith(LPMONIKER,LPMONIKER,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreateBindCtx(DWORD,LPBC*);
extern HRESULT __attribute__((__stdcall__)) CreateGenericComposite(LPMONIKER,LPMONIKER,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) GetClassFile (LPCOLESTR,CLSID*);
extern HRESULT __attribute__((__stdcall__)) CreateFileMoniker(LPCOLESTR,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreateItemMoniker(LPCOLESTR,LPCOLESTR,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreateAntiMoniker(LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreatePointerMoniker(LPUNKNOWN,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) GetRunningObjectTable(DWORD,LPRUNNINGOBJECTTABLE*);
extern HRESULT __attribute__((__stdcall__)) CoInitializeSecurity(PSECURITY_DESCRIPTOR,LONG,SOLE_AUTHENTICATION_SERVICE*, void*,DWORD,DWORD,void*,DWORD,void*);
extern HRESULT __attribute__((__stdcall__)) CoGetCallContext(const IID* const,void**);
extern HRESULT __attribute__((__stdcall__)) CoQueryProxyBlanket(IUnknown*, DWORD*,DWORD*,OLECHAR**,DWORD*,DWORD*,RPC_AUTH_IDENTITY_HANDLE*,DWORD*);
extern HRESULT __attribute__((__stdcall__)) CoSetProxyBlanket(IUnknown*,DWORD,DWORD,OLECHAR*,DWORD,DWORD,RPC_AUTH_IDENTITY_HANDLE, DWORD);
extern HRESULT __attribute__((__stdcall__)) CoCopyProxy(IUnknown*,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) CoQueryClientBlanket(DWORD*,DWORD*,OLECHAR**, DWORD*,DWORD*,RPC_AUTHZ_HANDLE*,DWORD*);
extern HRESULT __attribute__((__stdcall__)) CoImpersonateClient(void);
extern HRESULT __attribute__((__stdcall__)) CoRevertToSelf(void);
extern HRESULT __attribute__((__stdcall__)) CoQueryAuthenticationServices(DWORD*, SOLE_AUTHENTICATION_SERVICE**);
extern HRESULT __attribute__((__stdcall__)) CoSwitchCallContext(IUnknown*,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) CoGetInstanceFromFile(COSERVERINFO*, CLSID*,IUnknown*,DWORD,DWORD,OLECHAR*,DWORD,MULTI_QI*);
extern HRESULT __attribute__((__stdcall__)) CoGetInstanceFromIStorage(COSERVERINFO*,CLSID*, IUnknown*,DWORD,struct IStorage*, DWORD,MULTI_QI*);
extern ULONG __attribute__((__stdcall__)) CoAddRefServerProcess(void);
extern ULONG __attribute__((__stdcall__)) CoReleaseServerProcess(void);
extern HRESULT __attribute__((__stdcall__)) CoResumeClassObjects(void);
extern HRESULT __attribute__((__stdcall__)) CoSuspendClassObjects(void);

#pragma pack(pop)
# 10 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ole2.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/olectlid.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/olectlid.h" 3






extern const GUID IID_IDispatch;
extern const GUID IID_IPropertyNotifySink;
extern const GUID IID_IClassFactory2;
extern const GUID IID_IProvideClassInfo;
extern const GUID IID_IProvideClassInfo2;
extern const GUID IID_IConnectionPointContainer;
extern const GUID IID_IEnumConnectionPoints;
extern const GUID IID_IConnectionPoint;
extern const GUID IID_IEnumConnections;
extern const GUID IID_IOleControl;
extern const GUID IID_IOleControlSite;
extern const GUID IID_ISimpleFrameSite;
extern const GUID IID_IPersistStreamInit;
extern const GUID IID_IPersistMemory;
extern const GUID IID_IPersistPropertyBag;
extern const GUID IID_IPropertyBag;
extern const GUID IID_IErrorLog;
extern const GUID IID_IPropertyFrame;
extern const GUID IID_ISpecifyPropertyPages;
extern const GUID IID_IPerPropertyBrowsing;
extern const GUID IID_IPropertyPageSite;
extern const GUID IID_IPropertyPage;
extern const GUID IID_IPropertyPage2;
extern const GUID CLSID_CFontPropPage;
extern const GUID CLSID_CColorPropPage;
extern const GUID CLSID_CPicturePropPage;
extern const GUID CLSID_PersistPropset;
extern const GUID CLSID_ConvertVBX;
extern const GUID CLSID_StdFont;
extern const GUID CLSID_StdPicture;
extern const GUID IID_IFont;
extern const GUID IID_IFontDisp;
extern const GUID IID_IPicture;
extern const GUID IID_IPictureDisp;
extern const GUID GUID_HIMETRIC;
extern const GUID GUID_COLOR;
extern const GUID GUID_XPOSPIXEL;
extern const GUID GUID_YPOSPIXEL;
extern const GUID GUID_XSIZEPIXEL;
extern const GUID GUID_YSIZEPIXEL;
extern const GUID GUID_XPOS;
extern const GUID GUID_YPOS;
extern const GUID GUID_XSIZE;
extern const GUID GUID_YSIZE;
extern const GUID GUID_TRISTATE;
extern const GUID GUID_OPTIONVALUEEXCLUSIVE;
extern const GUID GUID_CHECKVALUEEXCLUSIVE;
extern const GUID GUID_FONTNAME;
extern const GUID GUID_FONTSIZE;
extern const GUID GUID_FONTBOLD;
extern const GUID GUID_FONTITALIC;
extern const GUID GUID_FONTUNDERSCORE;
extern const GUID GUID_FONTSTRIKETHROUGH;
extern const GUID GUID_HANDLE;
extern const GUID IID_IEnumUnknown;
extern const GUID IID_IEnumString;
extern const GUID IID_IEnumMoniker;
extern const GUID IID_IEnumFORMATETC;
extern const GUID IID_IEnumOLEVERB;
extern const GUID IID_IEnumSTATDATA;
extern const GUID IID_IEnumSTATSTG;
extern const GUID IID_IEnumGeneric;
extern const GUID IID_IEnumHolder;
extern const GUID IID_IEnumCallback;
extern const GUID IID_IPersistStream;
extern const GUID IID_IPersistStorage;
extern const GUID IID_IPersistFile;
extern const GUID IID_IPersist;
extern const GUID IID_IViewObject;
extern const GUID IID_IDataObject;
extern const GUID IID_IAdviseSink;
extern const GUID IID_IDataAdviseHolder;
extern const GUID IID_IOleAdviseHolder;
extern const GUID IID_IOleObject;
extern const GUID IID_IOleInPlaceObject;
extern const GUID IID_IOleWindow;
extern const GUID IID_IOleInPlaceUIWindow;
extern const GUID IID_IOleInPlaceFrame;
extern const GUID IID_IOleInPlaceActiveObject;
extern const GUID IID_IOleClientSite;
extern const GUID IID_IOleInPlaceSite;
extern const GUID IID_IParseDisplayName;
extern const GUID IID_IOleContainer;
extern const GUID IID_IOleItemContainer;
extern const GUID IID_IOleLink;
extern const GUID IID_IOleCache;
extern const GUID IID_IOleManager;
extern const GUID IID_IOlePresObj;
extern const GUID IID_IDropSource;
extern const GUID IID_IDropTarget;
extern const GUID IID_IDebug;
extern const GUID IID_IDebugStream;
extern const GUID IID_IAdviseSink2;
extern const GUID IID_IRunnableObject;
extern const GUID IID_IViewObject2;
extern const GUID IID_IOleCache2;
extern const GUID IID_IOleCacheControl;
extern const GUID CLSID_Picture_Metafile;
extern const GUID CLSID_Picture_Dib;
# 11 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ole2.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oleauto.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oleauto.h" 3


#pragma pack(push,8)
# 84 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oleauto.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oaidl.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oaidl.h" 3
# 56 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oaidl.h" 3
typedef struct ITypeLib *LPTYPELIB;
typedef struct ICreateTypeInfo *LPCREATETYPEINFO;
typedef struct ICreateTypeInfo2 *LPCREATETYPEINFO2;
typedef struct ICreateTypeLib *LPCREATETYPELIB;
typedef struct ICreateTypeLib2 *LPCREATETYPELIB2;
typedef struct ITypeComp *LPTYPECOMP;
typedef struct ITypeInfo *LPTYPEINFO;
typedef struct IErrorInfo *LPERRORINFO;
typedef struct IDispatch *LPDISPATCH;
typedef struct IEnumVARIANT *LPENUMVARIANT;
typedef struct ICreateErrorInfo *LPCREATEERRORINFO;
typedef struct ISupportErrorInfo *LPSUPPORTERRORINFO;
typedef struct IRecordInfo *LPRECORDINFO;

extern const IID IID_ITypeLib;
extern const IID IID_ICreateTypeInfo;
extern const IID IID_ICreateTypeInfo2;
extern const IID IID_ICreateTypeLib;
extern const IID IID_ICreateTypeLib2;
extern const IID IID_ITypeInfo;
extern const IID IID_IErrorInfo;
extern const IID IID_IDispatch;
extern const IID IID_IEnumVARIANT;
extern const IID IID_ICreateErrorInfo;
extern const IID IID_ISupportErrorInfo;
extern const IID IID_IRecordInfo;
extern const IID IID_ITypeMarshal;

typedef enum tagSYSKIND {
 SYS_WIN16,SYS_WIN32,SYS_MAC
} SYSKIND;
typedef enum tagLIBFLAGS {
 LIBFLAG_FRESTRICTED=1,LIBFLAG_FCONTROL=2,LIBFLAG_FHIDDEN=4,
 LIBFLAG_FHASDISKIMAGE=8
} LIBFLAGS;
typedef struct tagTLIBATTR {
 GUID guid;
 LCID lcid;
 SYSKIND syskind;
 WORD wMajorVerNum;
 WORD wMinorVerNum;
 WORD wLibFlags;
} TLIBATTR,*LPTLIBATTR;
typedef CY CURRENCY;
typedef struct tagSAFEARRAYBOUND {
 ULONG cElements;
 LONG lLbound;
}SAFEARRAYBOUND,*LPSAFEARRAYBOUND;
typedef struct _wireSAFEARR_BSTR
{
 ULONG Size;
 wireBSTR *aBstr;
}SAFEARR_BSTR;
typedef struct _wireSAFEARR_UNKNOWN {
 ULONG Size;
 IUnknown **apUnknown;
}SAFEARR_UNKNOWN;
typedef struct _wireSAFEARR_DISPATCH {
 ULONG Size;
 LPDISPATCH *apDispatch;
}SAFEARR_DISPATCH;
typedef struct _wireSAFEARR_VARIANT {
 ULONG Size;
 struct _wireVARIANT *aVariant;
}SAFEARR_VARIANT;
typedef enum tagSF_TYPE {
 SF_ERROR=VT_ERROR,
 SF_I1=VT_I1,
 SF_I2=VT_I2,
 SF_I4=VT_I4,
 SF_I8=VT_I8,
 SF_BSTR=VT_BSTR,
 SF_UNKNOWN=VT_UNKNOWN,
 SF_DISPATCH=VT_DISPATCH,
 SF_VARIANT=VT_VARIANT
}SF_TYPE;
typedef struct _wireBRECORD {
 ULONG fFlags;
 ULONG clSize;
 LPRECORDINFO* pRecInfo;
 byte* pRecord;
} *wireBRECORD;
typedef struct _wireSAFEARR_BRECORD {
    ULONG Size;
    wireBRECORD* aRecord;
    } SAFEARR_BRECORD;
typedef struct _wireSAFEARR_HAVEIID {
 ULONG Size;
 IUnknown** apUnknown;
 IID iid;
 } SAFEARR_HAVEIID;
typedef struct _wireSAFEARRAY_UNION {
 ULONG sfType;
 union {
  SAFEARR_BSTR BstrStr;
  SAFEARR_UNKNOWN UnknownStr;
  SAFEARR_DISPATCH DispatchStr;
  SAFEARR_VARIANT VariantStr;
  SAFEARR_BRECORD RecordStr;
  SAFEARR_HAVEIID HaveIidStr;
  BYTE_SIZEDARR ByteStr;
  WORD_SIZEDARR WordStr;
  DWORD_SIZEDARR LongStr;
  HYPER_SIZEDARR HyperStr;
 }u;
}SAFEARRAYUNION;
typedef struct _wireSAFEARRAY {
 USHORT cDims;
 USHORT fFeatures;
 ULONG cbElements;
 ULONG cLocks;
 SAFEARRAYUNION uArrayStructs;
 SAFEARRAYBOUND rgsabound[1];
}*wireSAFEARRAY;
typedef wireSAFEARRAY *wirePSAFEARRAY;
typedef struct tagSAFEARRAY {
 USHORT cDims;
 USHORT fFeatures;
 ULONG cbElements;
 ULONG cLocks;
 PVOID pvData;
 SAFEARRAYBOUND rgsabound[1];
}SAFEARRAY,*LPSAFEARRAY;

__extension__

typedef struct tagVARIANT {
  __extension__ union {
 struct {
 VARTYPE vt;
 WORD wReserved1;
 WORD wReserved2;
 WORD wReserved3;
 __extension__ union {
  long lVal;
  unsigned char bVal;
  short iVal;
  float fltVal;
  double dblVal;
  VARIANT_BOOL boolVal;
  SCODE scode;
  CY cyVal;
  DATE date;
  BSTR bstrVal;
  IUnknown *punkVal;
  LPDISPATCH pdispVal;
  SAFEARRAY *parray;
  unsigned char *pbVal;
  short *piVal;
  long *plVal;
  float *pfltVal;
  double *pdblVal;
  VARIANT_BOOL *pboolVal;
  _VARIANT_BOOL *pbool;
  SCODE *pscode;
  CY *pcyVal;
  DATE *pdate;
  BSTR *pbstrVal;
  IUnknown **ppunkVal;
  LPDISPATCH *ppdispVal;
  SAFEARRAY **pparray;
  struct tagVARIANT *pvarVal;
  void *byref;
  CHAR cVal;
  USHORT uiVal;
  ULONG ulVal;
  INT intVal;
  UINT uintVal;
  DECIMAL *pdecVal;
  CHAR *pcVal;
  USHORT *puiVal;
  ULONG *pulVal;
  INT *pintVal;
  UINT *puintVal;
  __extension__ struct {
   PVOID pvRecord;
   struct IRecordInfo *pRecInfo;
  } ;
 } ;
    } ;
    DECIMAL decVal;
  } ;
} VARIANT,*LPVARIANT;
typedef VARIANT VARIANTARG;
typedef VARIANT *LPVARIANTARG;
typedef struct _wireVARIANT {
 DWORD clSize;
 DWORD rpcReserved;
 USHORT vt;
 USHORT wReserved1;
 USHORT wReserved2;
 USHORT wReserved3;
 __extension__ union {
  LONG lVal;
  BYTE bVal;
  SHORT iVal;
  FLOAT fltVal;
  DOUBLE dblVal;
  VARIANT_BOOL boolVal;
  SCODE scode;
  CY cyVal;
  DATE date;
  wireBSTR bstrVal;
  IUnknown *punkVal;
  LPDISPATCH pdispVal;
  wirePSAFEARRAY parray;
  wireBRECORD brecVal;
  BYTE *pbVal;
  SHORT *piVal;
  LONG *plVal;
  FLOAT *pfltVal;
  DOUBLE *pdblVal;
  VARIANT_BOOL *pboolVal;
  SCODE *pscode;
  CY *pcyVal;
  DATE *pdate;
  wireBSTR *pbstrVal;
  IUnknown **ppunkVal;
  LPDISPATCH *ppdispVal;
  wirePSAFEARRAY *pparray;
  struct _wireVARIANT *pvarVal;
  CHAR cVal;
  USHORT uiVal;
  ULONG ulVal;
  INT intVal;
  UINT uintVal;
  DECIMAL decVal;
  DECIMAL *pdecVal;
  CHAR *pcVal;
  USHORT *puiVal;
  ULONG *pulVal;
  INT *pintVal;
  UINT *puintVal;
 } ;
} *wireVARIANT;
typedef LONG DISPID;
typedef DISPID MEMBERID;
typedef DWORD HREFTYPE;
typedef enum tagTYPEKIND {
 TKIND_ENUM,TKIND_RECORD,TKIND_MODULE,TKIND_INTERFACE,TKIND_DISPATCH,
 TKIND_COCLASS,TKIND_ALIAS,TKIND_UNION,TKIND_MAX
}TYPEKIND;
typedef struct tagTYPEDESC {
 __extension__ union {
  struct tagTYPEDESC *lptdesc;
  struct tagARRAYDESC *lpadesc;
  HREFTYPE hreftype;
 } ;
 VARTYPE vt;
}TYPEDESC;
typedef struct tagARRAYDESC {
 TYPEDESC tdescElem;
 USHORT cDims;
 SAFEARRAYBOUND rgbounds[1];
}ARRAYDESC;
typedef struct tagPARAMDESCEX {
 ULONG cBytes;
 VARIANTARG varDefaultValue;
}PARAMDESCEX,*LPPARAMDESCEX;
typedef struct tagPARAMDESC {
 LPPARAMDESCEX pparamdescex;
 USHORT wParamFlags;
}PARAMDESC,*LPPARAMDESC;
typedef struct tagIDLDESC {
 ULONG dwReserved;
 USHORT wIDLFlags;
}IDLDESC,*LPIDLDESC;
typedef struct tagELEMDESC {
 TYPEDESC tdesc;
 __extension__ union {
  IDLDESC idldesc;
  PARAMDESC paramdesc;
 } ;
} ELEMDESC,*LPELEMDESC;
typedef struct tagTYPEATTR {
 GUID guid;
 LCID lcid;
 DWORD dwReserved;
 MEMBERID memidConstructor;
 MEMBERID memidDestructor;
 LPOLESTR lpstrSchema;
 ULONG cbSizeInstance;
 TYPEKIND typekind;
 WORD cFuncs;
 WORD cVars;
 WORD cImplTypes;
 WORD cbSizeVft;
 WORD cbAlignment;
 WORD wTypeFlags;
 WORD wMajorVerNum;
 WORD wMinorVerNum;
 TYPEDESC tdescAlias;
 IDLDESC idldescType;
}TYPEATTR,*LPTYPEATTR;
typedef struct tagDISPPARAMS {
 VARIANTARG *rgvarg;
 DISPID *rgdispidNamedArgs;
 UINT cArgs;
 UINT cNamedArgs;
}DISPPARAMS;
typedef struct tagEXCEPINFO {
 WORD wCode;
 WORD wReserved;
 BSTR bstrSource;
 BSTR bstrDescription;
 BSTR bstrHelpFile;
 DWORD dwHelpContext;
 PVOID pvReserved;
 HRESULT(__attribute__((__stdcall__)) * pfnDeferredFillIn)(struct tagEXCEPINFO*);
 SCODE scode;
} EXCEPINFO,*LPEXCEPINFO;
typedef enum tagCALLCONV {
 CC_FASTCALL,CC_CDECL,CC_MSCPASCAL,CC_PASCAL=CC_MSCPASCAL,
 CC_MACPASCAL,CC_STDCALL,CC_FPFASTCALL,CC_SYSCALL,CC_MPWCDECL,
 CC_MPWPASCAL,CC_MAX=CC_MPWPASCAL
}CALLCONV;
typedef enum tagFUNCKIND {
 FUNC_VIRTUAL,FUNC_PUREVIRTUAL,FUNC_NONVIRTUAL,
 FUNC_STATIC,FUNC_DISPATCH
}FUNCKIND;
typedef enum tagINVOKEKIND {
 INVOKE_FUNC=1,INVOKE_PROPERTYGET,INVOKE_PROPERTYPUT=4,
 INVOKE_PROPERTYPUTREF=8
}INVOKEKIND;
typedef struct tagFUNCDESC {
 MEMBERID memid;
 SCODE *lprgscode;
 ELEMDESC *lprgelemdescParam;
 FUNCKIND funckind;
 INVOKEKIND invkind;
 CALLCONV callconv;
 SHORT cParams;
 SHORT cParamsOpt;
 SHORT oVft;
 SHORT cScodes;
 ELEMDESC elemdescFunc;
 WORD wFuncFlags;
}FUNCDESC,*LPFUNCDESC;
typedef enum tagVARKIND {
 VAR_PERINSTANCE,VAR_STATIC,VAR_CONST,VAR_DISPATCH
} VARKIND;
typedef struct tagVARDESC {
 MEMBERID memid;
 LPOLESTR lpstrSchema;
 __extension__ union {
  ULONG oInst;
  VARIANT *lpvarValue;
 } ;
 ELEMDESC elemdescVar;
 WORD wVarFlags;
 VARKIND varkind;
} VARDESC,*LPVARDESC;
typedef enum tagTYPEFLAGS {
 TYPEFLAG_FAPPOBJECT=1,TYPEFLAG_FCANCREATE=2,TYPEFLAG_FLICENSED=4,
 TYPEFLAG_FPREDECLID=8,TYPEFLAG_FHIDDEN=16,TYPEFLAG_FCONTROL=32,
 TYPEFLAG_FDUAL=64,TYPEFLAG_FNONEXTENSIBLE=128,
 TYPEFLAG_FOLEAUTOMATION=256,TYPEFLAG_FRESTRICTED=512,
 TYPEFLAG_FAGGREGATABLE=1024,TYPEFLAG_FREPLACEABLE=2048,
 TYPEFLAG_FDISPATCHABLE=4096,TYPEFLAG_FREVERSEBIND=8192
} TYPEFLAGS;
typedef enum tagFUNCFLAGS {
 FUNCFLAG_FRESTRICTED=1,FUNCFLAG_FSOURCE=2,FUNCFLAG_FBINDABLE=4,
 FUNCFLAG_FREQUESTEDIT=8,FUNCFLAG_FDISPLAYBIND=16,FUNCFLAG_FDEFAULTBIND=32,
 FUNCFLAG_FHIDDEN=64,FUNCFLAG_FUSESGETLASTERROR=128,FUNCFLAG_FDEFAULTCOLLELEM=256,
 FUNCFLAG_FUIDEFAULT=512,FUNCFLAG_FNONBROWSABLE=1024,FUNCFLAG_FREPLACEABLE=2048,
 FUNCFLAG_FIMMEDIATEBIND=4096
} FUNCFLAGS;
typedef enum tagVARFLAGS {
 VARFLAG_FREADONLY=1,VARFLAG_FSOURCE=2,VARFLAG_FBINDABLE=4,VARFLAG_FREQUESTEDIT=8,
 VARFLAG_FDISPLAYBIND=16,VARFLAG_FDEFAULTBIND=32,VARFLAG_FHIDDEN=64,VARFLAG_FRESTRICTED=128,
 VARFLAG_FDEFAULTCOLLELEM=256,VARFLAG_FUIDEFAULT=512,VARFLAG_FNONBROWSABLE=1024,
 VARFLAG_FREPLACEABLE=2048,VARFLAG_FIMMEDIATEBIND=4096
} VARFLAGS;
typedef struct tagCLEANLOCALSTORAGE {
 IUnknown *pInterface;
 PVOID pStorage;
 DWORD flags;
} CLEANLOCALSTORAGE;
typedef struct tagCUSTDATAITEM {
 GUID guid;
 VARIANTARG varValue;
} CUSTDATAITEM,*LPCUSTDATAITEM;
typedef struct tagCUSTDATA {
 DWORD cCustData;
 LPCUSTDATAITEM prgCustData;
} CUSTDATA,*LPCUSTDATA;

typedef enum tagDESCKIND {
        DESCKIND_NONE=0,DESCKIND_FUNCDESC=DESCKIND_NONE+1,
        DESCKIND_VARDESC=DESCKIND_FUNCDESC+1,DESCKIND_TYPECOMP=DESCKIND_VARDESC+1,
        DESCKIND_IMPLICITAPPOBJ=DESCKIND_TYPECOMP+1,
        DESCKIND_MAX=DESCKIND_IMPLICITAPPOBJ+1
} DESCKIND;

typedef union tagBINDPTR {
        LPFUNCDESC lpfuncdesc;
        LPVARDESC lpvardesc;
        LPTYPECOMP lptcomp;
} BINDPTR,*LPBINDPTR;



typedef struct IDispatch { struct IDispatchVtbl *lpVtbl; } IDispatch; typedef struct IDispatchVtbl IDispatchVtbl; struct IDispatchVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDispatch *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDispatch *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDispatch *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoCount)(IDispatch *, UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfo)(IDispatch *, UINT,LCID,LPTYPEINFO*) ;
 HRESULT(__attribute__((__stdcall__)) *GetIDsOfNames)(IDispatch *, const IID* const,LPOLESTR*,UINT,LCID,DISPID*) ;
 HRESULT(__attribute__((__stdcall__)) *Invoke)(IDispatch *, DISPID,const IID* const,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) ;
};



typedef struct IEnumVARIANT { struct IEnumVARIANTVtbl *lpVtbl; } IEnumVARIANT; typedef struct IEnumVARIANTVtbl IEnumVARIANTVtbl; struct IEnumVARIANTVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumVARIANT *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumVARIANT *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IEnumVARIANT *) ;
 HRESULT(__attribute__((__stdcall__)) *Next)(IEnumVARIANT *, ULONG,VARIANT*,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumVARIANT *, ULONG) ;
 HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumVARIANT *) ;
 HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumVARIANT *, IEnumVARIANT**) ;
};



typedef struct ITypeComp { struct ITypeCompVtbl *lpVtbl; } ITypeComp; typedef struct ITypeCompVtbl ITypeCompVtbl; struct ITypeCompVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeComp *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeComp *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeComp *) ;
 HRESULT(__attribute__((__stdcall__)) *Bind)(ITypeComp *, LPOLESTR,ULONG,WORD,LPTYPEINFO*,DESCKIND*,LPBINDPTR) ;
 HRESULT(__attribute__((__stdcall__)) *BindType)(ITypeComp *, LPOLESTR,ULONG,LPTYPEINFO*,LPTYPECOMP*) ;
};



typedef struct ITypeInfo { struct ITypeInfoVtbl *lpVtbl; } ITypeInfo; typedef struct ITypeInfoVtbl ITypeInfoVtbl; struct ITypeInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeAttr)(ITypeInfo *, LPTYPEATTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeComp)(ITypeInfo *, LPTYPECOMP*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFuncDesc)(ITypeInfo *, UINT,LPFUNCDESC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetVarDesc)(ITypeInfo *, UINT,LPVARDESC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetNames)(ITypeInfo *, MEMBERID,BSTR*,UINT,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetRefTypeOfImplType)(ITypeInfo *, UINT,HREFTYPE*) ;
 HRESULT(__attribute__((__stdcall__)) *GetImplTypeFlags)(ITypeInfo *, UINT,INT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetIDsOfNames)(ITypeInfo *, LPOLESTR*,UINT,MEMBERID*) ;
 HRESULT(__attribute__((__stdcall__)) *Invoke)(ITypeInfo *, PVOID,MEMBERID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation)(ITypeInfo *, MEMBERID,BSTR*,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDllEntry)(ITypeInfo *, MEMBERID,INVOKEKIND,BSTR*,BSTR*,WORD*) ;
 HRESULT(__attribute__((__stdcall__)) *GetRefTypeInfo)(ITypeInfo *, HREFTYPE,LPTYPEINFO*) ;
 HRESULT(__attribute__((__stdcall__)) *AddressOfMember)(ITypeInfo *, MEMBERID,INVOKEKIND,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *CreateInstance)(ITypeInfo *, LPUNKNOWN,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetMops)(ITypeInfo *, MEMBERID,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetContainingTypeLib)(ITypeInfo *, LPTYPELIB*,UINT*) ;
 void(__attribute__((__stdcall__)) *ReleaseTypeAttr)(ITypeInfo *, LPTYPEATTR) ;
 void(__attribute__((__stdcall__)) *ReleaseFuncDesc)(ITypeInfo *, LPFUNCDESC) ;
 void(__attribute__((__stdcall__)) *ReleaseVarDesc)(ITypeInfo *, LPVARDESC) ;
};



typedef struct ITypeLib { struct ITypeLibVtbl *lpVtbl; } ITypeLib; typedef struct ITypeLibVtbl ITypeLibVtbl; struct ITypeLibVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeLib *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeLib *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeLib *) ;
 UINT(__attribute__((__stdcall__)) *GetTypeInfoCount)(ITypeLib *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfo)(ITypeLib *, UINT,ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoType)(ITypeLib *, UINT,TYPEKIND*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoOfGuid)(ITypeLib *, const GUID* const,ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetLibAttr)(ITypeLib *, TLIBATTR**) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeComp)(ITypeLib *, ITypeComp*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation)(ITypeLib *, INT,BSTR*,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *IsName)(ITypeLib *, LPOLESTR,ULONG,BOOL*) ;
 HRESULT(__attribute__((__stdcall__)) *FindName)(ITypeLib *, LPOLESTR,ULONG,ITypeInfo**,MEMBERID*,USHORT*) ;
 void(__attribute__((__stdcall__)) *ReleaseTLibAttr)(ITypeLib *, TLIBATTR*) ;
};

extern const IID IID_IErrorInfo;


typedef struct IErrorInfo { struct IErrorInfoVtbl *lpVtbl; } IErrorInfo; typedef struct IErrorInfoVtbl IErrorInfoVtbl; struct IErrorInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IErrorInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IErrorInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IErrorInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *GetGUID)(IErrorInfo *, GUID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetSource)(IErrorInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDescription)(IErrorInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetHelpFile)(IErrorInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetHelpContext)(IErrorInfo *, DWORD*) ;
};

extern const IID IID_ICreateErrorInfo;


typedef struct ICreateErrorInfo { struct ICreateErrorInfoVtbl *lpVtbl; } ICreateErrorInfo; typedef struct ICreateErrorInfoVtbl ICreateErrorInfoVtbl; struct ICreateErrorInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ICreateErrorInfo *, const IID* const,PVOID*);
 ULONG(__attribute__((__stdcall__)) *AddRef)(ICreateErrorInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ICreateErrorInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *SetGUID)(ICreateErrorInfo *, const GUID* const) ;
 HRESULT(__attribute__((__stdcall__)) *SetSource)(ICreateErrorInfo *, LPOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetDescription)(ICreateErrorInfo *, LPOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetHelpFile)(ICreateErrorInfo *, LPOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetHelpContext)(ICreateErrorInfo *, DWORD) ;
};

extern const IID IID_ISupportErrorInfo;


typedef struct ISupportErrorInfo { struct ISupportErrorInfoVtbl *lpVtbl; } ISupportErrorInfo; typedef struct ISupportErrorInfoVtbl ISupportErrorInfoVtbl; struct ISupportErrorInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ISupportErrorInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ISupportErrorInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ISupportErrorInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *InterfaceSupportsErrorInfo)(ISupportErrorInfo *, const IID* const) ;
};

extern const IID IID_IRecordInfo;


typedef struct IRecordInfo { struct IRecordInfoVtbl *lpVtbl; } IRecordInfo; typedef struct IRecordInfoVtbl IRecordInfoVtbl; struct IRecordInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRecordInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRecordInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRecordInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *RecordInit)(IRecordInfo *, PVOID) ;
 HRESULT(__attribute__((__stdcall__)) *RecordClear)(IRecordInfo *, PVOID) ;
 HRESULT(__attribute__((__stdcall__)) *RecordCopy)(IRecordInfo *, PVOID, PVOID) ;
 HRESULT(__attribute__((__stdcall__)) *GetGuid)(IRecordInfo *, GUID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetName)(IRecordInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetSize)(IRecordInfo *, ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfo)(IRecordInfo *, ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetField)(IRecordInfo *, PVOID,LPCOLESTR,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFieldNoCopy)(IRecordInfo *, PVOID,LPCOLESTR,VARIANT*,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *PutField)(IRecordInfo *, ULONG,PVOID,LPCOLESTR, VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *PutFieldNoCopy)(IRecordInfo *, ULONG,PVOID,LPCOLESTR,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFieldNames)(IRecordInfo *, ULONG*,BSTR*) ;
 BOOL(__attribute__((__stdcall__)) *IsMatchingType)(IRecordInfo *, IRecordInfo *) ;
 PVOID(__attribute__((__stdcall__)) *RecordCreate)(IRecordInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *RecordCreateCopy)(IRecordInfo *, PVOID,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *RecordDestroy)(IRecordInfo *, PVOID) ;
};

extern const IID IID_ITypeMarshal;


typedef struct ITypeMarshal { struct ITypeMarshalVtbl *lpVtbl; } ITypeMarshal; typedef struct ITypeMarshalVtbl ITypeMarshalVtbl; struct ITypeMarshalVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeMarshal *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeMarshal *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeMarshal *) ;
 HRESULT(__attribute__((__stdcall__)) *Size)(ITypeMarshal *, PVOID,DWORD,PVOID,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Marshal)(ITypeMarshal *, PVOID,DWORD,PVOID,ULONG,BYTE*,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Unmarshal)(ITypeMarshal *, PVOID,DWORD,ULONG,BYTE*,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Free)(ITypeMarshal *, PVOID) ;
};
# 85 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oleauto.h" 2 3

typedef enum tagREGKIND {
 REGKIND_DEFAULT,
 REGKIND_REGISTER,
 REGKIND_NONE
} REGKIND;
typedef struct tagPARAMDATA {
 OLECHAR *szName;
 VARTYPE vt;
} PARAMDATA,*LPPARAMDATA;
typedef struct tagMETHODDATA {
 OLECHAR *szName;
 PARAMDATA *ppdata;
 DISPID dispid;
 UINT iMeth;
 CALLCONV cc;
 UINT cArgs;
 WORD wFlags;
 VARTYPE vtReturn;
} METHODDATA,*LPMETHODDATA;
typedef struct tagINTERFACEDATA {
 METHODDATA *pmethdata;
 UINT cMembers;
} INTERFACEDATA,*LPINTERFACEDATA;

extern BSTR __attribute__((__stdcall__)) SysAllocString(const OLECHAR*);
extern int __attribute__((__stdcall__)) SysReAllocString(BSTR*,const OLECHAR*);
extern BSTR __attribute__((__stdcall__)) SysAllocStringLen(const OLECHAR*,unsigned int);
extern int __attribute__((__stdcall__)) SysReAllocStringLen(BSTR*,const OLECHAR*,unsigned int);
extern void __attribute__((__stdcall__)) SysFreeString(BSTR);
extern unsigned int __attribute__((__stdcall__)) SysStringLen(BSTR);
extern unsigned int __attribute__((__stdcall__)) SysStringByteLen(BSTR);
extern BSTR __attribute__((__stdcall__)) SysAllocStringByteLen(const char*,unsigned int);
extern int __attribute__((__stdcall__)) DosDateTimeToVariantTime(unsigned short,unsigned short,double*);
extern int __attribute__((__stdcall__)) VariantTimeToDosDateTime(double,unsigned short*,unsigned short*);
extern int __attribute__((__stdcall__)) VariantTimeToSystemTime(double,LPSYSTEMTIME);
extern int __attribute__((__stdcall__)) SystemTimeToVariantTime(LPSYSTEMTIME, double*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayAllocDescriptor(unsigned int,SAFEARRAY**);
extern HRESULT __attribute__((__stdcall__)) SafeArrayAllocData(SAFEARRAY*);
extern SAFEARRAY* __attribute__((__stdcall__)) SafeArrayCreate(VARTYPE,unsigned int,SAFEARRAYBOUND*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayDestroyDescriptor(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayDestroyData(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayDestroy(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayRedim(SAFEARRAY*,SAFEARRAYBOUND*);
extern unsigned int __attribute__((__stdcall__)) SafeArrayGetDim(SAFEARRAY*);
extern unsigned int __attribute__((__stdcall__)) SafeArrayGetElemsize(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetUBound(SAFEARRAY*,unsigned int,long*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetLBound(SAFEARRAY*,unsigned int,long*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayLock(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayUnlock(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayAccessData(SAFEARRAY*,void**);
extern HRESULT __attribute__((__stdcall__)) SafeArrayUnaccessData(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetElement(SAFEARRAY*,long*,void*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayPutElement(SAFEARRAY*,long*,void*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayCopy(SAFEARRAY*,SAFEARRAY**);
extern HRESULT __attribute__((__stdcall__)) SafeArrayPtrOfIndex(SAFEARRAY*,long*,void**);
extern SAFEARRAY* __attribute__((__stdcall__)) SafeArrayCreateVector(VARTYPE,LONG,UINT);
extern void __attribute__((__stdcall__)) VariantInit(VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantClear(VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantCopy(VARIANTARG*,VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantCopyInd(VARIANT*,VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantChangeType(VARIANTARG*,VARIANTARG*,unsigned short,VARTYPE);
extern HRESULT __attribute__((__stdcall__)) VariantChangeTypeEx(VARIANTARG*,VARIANTARG*,LCID,unsigned short,VARTYPE);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromI2(short,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromI4(long,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromR4(float,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromR8(double,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromCy(CY,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromDate(DATE,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromStr(OLECHAR*,LCID,unsigned long,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromDisp(LPDISPATCH*,LCID,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromBool(VARIANT_BOOL,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromUI1(unsigned char,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromI4(long,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromR4(float,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromR8(double,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromCy(CY cyIn,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromDate(DATE,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromStr(OLECHAR*,LCID,unsigned long,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromDisp(LPDISPATCH*,LCID,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromBool(VARIANT_BOOL,short*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromUI1(unsigned char,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromI2(short,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromR4(float,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromR8(double,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromCy(CY,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromDate(DATE,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromStr(OLECHAR*,LCID,unsigned long,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromDisp(LPDISPATCH*,LCID,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromBool(VARIANT_BOOL,long*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromUI1(unsigned char,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI2(short,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI4(long,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromR8(double,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromCy(CY,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromDate(DATE,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromStr(OLECHAR*,LCID,unsigned long,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromDisp(LPDISPATCH*,LCID,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromBool(VARIANT_BOOL,float*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromUI1(unsigned char,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI2(short,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI4(long,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromR4(float,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromCy(CY,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDate(DATE,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromStr(OLECHAR*,LCID,unsigned long,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDisp(LPDISPATCH*,LCID,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromBool(VARIANT_BOOL,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDec(DECIMAL*,double*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromUI1(unsigned char,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI2(short,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI4(long,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromR4(float,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromR8(double,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromCy(CY,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromStr(OLECHAR*,LCID,unsigned long,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromDisp(LPDISPATCH*,LCID,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromBool(VARIANT_BOOL,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromUI1(unsigned char,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI2(short,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI4(long,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromR4(float,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromR8(double,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromDate(DATE,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromStr(OLECHAR*,LCID,unsigned long,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromDisp(LPDISPATCH*,LCID,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromBool(VARIANT_BOOL,CY*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromUI1(unsigned char,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI2(short,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI4(long,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromR4(float,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromR8(double,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromCy(CY,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromDate(DATE,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromDisp(LPDISPATCH*,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromBool(VARIANT_BOOL,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromUI1(unsigned char,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI2(short,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI4(long,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromR4(float,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromR8(double,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromDate(DATE,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromCy(CY,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromStr(OLECHAR*,LCID,unsigned long,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromDisp(LPDISPATCH*,LCID,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromR8(double,DECIMAL*);
extern ULONG __attribute__((__stdcall__)) LHashValOfNameSysA(SYSKIND,LCID,const char*);
extern ULONG __attribute__((__stdcall__)) LHashValOfNameSys(SYSKIND,LCID,const OLECHAR*);
extern HRESULT __attribute__((__stdcall__)) LoadTypeLib(const OLECHAR*,LPTYPELIB*);
extern HRESULT __attribute__((__stdcall__)) LoadTypeLibEx(LPCOLESTR,REGKIND,LPTYPELIB*);
extern HRESULT __attribute__((__stdcall__)) LoadRegTypeLib(const GUID* const,WORD,WORD,LCID,LPTYPELIB*);
extern HRESULT __attribute__((__stdcall__)) QueryPathOfRegTypeLib(const GUID* const,unsigned short,unsigned short,LCID,LPBSTR);
extern HRESULT __attribute__((__stdcall__)) RegisterTypeLib(LPTYPELIB,OLECHAR*,OLECHAR*);
extern HRESULT __attribute__((__stdcall__)) UnRegisterTypeLib(const GUID* const,WORD,WORD,LCID,SYSKIND);
extern HRESULT __attribute__((__stdcall__)) CreateTypeLib(SYSKIND,const OLECHAR*,LPCREATETYPELIB*);
extern HRESULT __attribute__((__stdcall__)) DispGetParam(DISPPARAMS*,UINT,VARTYPE,VARIANT*,UINT*);
extern HRESULT __attribute__((__stdcall__)) DispGetIDsOfNames(LPTYPEINFO,OLECHAR**,UINT,DISPID*);
extern HRESULT __attribute__((__stdcall__)) DispInvoke(void*,LPTYPEINFO,DISPID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
extern HRESULT __attribute__((__stdcall__)) CreateDispTypeInfo(INTERFACEDATA*,LCID,LPTYPEINFO*);
extern HRESULT __attribute__((__stdcall__)) CreateStdDispatch(IUnknown*,void*,LPTYPEINFO,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) RegisterActiveObject(IUnknown*,const CLSID* const,DWORD,DWORD*);
extern HRESULT __attribute__((__stdcall__)) RevokeActiveObject(DWORD,void*);
extern HRESULT __attribute__((__stdcall__)) GetActiveObject(const CLSID* const,void*,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) SetErrorInfo(unsigned long,LPERRORINFO);
extern HRESULT __attribute__((__stdcall__)) GetErrorInfo(unsigned long,LPERRORINFO*);
extern HRESULT __attribute__((__stdcall__)) CreateErrorInfo(LPCREATEERRORINFO*);
extern unsigned long __attribute__((__stdcall__)) OaBuildVersion(void);
extern HRESULT __attribute__((__stdcall__)) VectorFromBstr (BSTR, SAFEARRAY **);
extern HRESULT __attribute__((__stdcall__)) BstrFromVector (SAFEARRAY *, BSTR *);

extern HRESULT __attribute__((__stdcall__)) VarAdd(LPVARIANT, LPVARIANT, LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarSub(LPVARIANT, LPVARIANT, LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarMul(LPVARIANT, LPVARIANT, LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarDiv(LPVARIANT, LPVARIANT, LPVARIANT);
#pragma pack(pop)
# 12 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ole2.h" 2 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ole2.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oleidl.h" 1 3



       
# 5 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oleidl.h" 3
# 15 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/oleidl.h" 3
typedef struct IParseDisplayname *LPPARSEDISPLAYNAME;
typedef struct IOleContainer *LPOLECONTAINER;
typedef struct IOleClientSite *LPOLECLIENTSITE;
typedef struct IOleObject *LPOLEOBJECT;
typedef struct IDropTarget *LPDROPTARGET;
typedef struct IDropSource *LPDROPSOURCE;
typedef struct IEnumOleUndoUnits *LPENUMOLEUNDOUNITS;
typedef struct IEnumOLEVERB *LPENUMOLEVERB;
typedef struct IOleWindow *LPOLEWINDOW;
typedef struct IOleInPlaceUIWindow *LPOLEINPLACEUIWINDOW;
typedef struct IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;
typedef struct IOleInPlaceFrame *LPOLEINPLACEFRAME;
typedef struct IOleAdviseHolder *LPOLEADVISEHOLDER;
typedef struct IViewObject *LPVIEWOBJECT;
typedef struct IViewObject2 *LPVIEWOBJECT2;

typedef enum tagOLEWHICHMK {
 OLEWHICHMK_CONTAINER=1,
 OLEWHICHMK_OBJREL,
 OLEWHICHMK_OBJFULL
} OLEWHICHMK;
typedef enum tagOLEGETMONIKER {
 OLEGETMONIKER_ONLYIFTHERE=1,
 OLEGETMONIKER_FORCEASSIGN,
 OLEGETMONIKER_UNASSIGN,
 OLEGETMONIKER_TEMPFORUSER
} OLEGETMONIKER;
typedef enum tagUSERCLASSTYPE {
 USERCLASSTYPE_FULL=1,
 USERCLASSTYPE_SHORT,
 USERCLASSTYPE_APPNAME
} USERCLASSTYPE;


__extension__

typedef enum tagDROPEFFECT {
 DROPEFFECT_NONE=0,
 DROPEFFECT_COPY=1,
 DROPEFFECT_MOVE=2,
 DROPEFFECT_LINK=4,
 DROPEFFECT_SCROLL=0x80000000
} DROPEFFECT;
typedef struct tagOleMenuGroupWidths {
 LONG width[6];
} OLEMENUGROUPWIDTHS,*LPOLEMENUGROUPWIDTHS;
typedef HGLOBAL HOLEMENU;
typedef enum tagOLECLOSE {
 OLECLOSE_SAVEIFDIRTY,
 OLECLOSE_NOSAVE,
 OLECLOSE_PROMPTSAVE
} OLECLOSE;
typedef struct tagOLEVERB {
 LONG lVerb;
 LPWSTR lpszVerbName;
 DWORD fuFlags;
 DWORD grfAttribs;
} OLEVERB,*LPOLEVERB;
typedef RECT BORDERWIDTHS;
typedef LPRECT LPBORDERWIDTHS;
typedef LPCRECT LPCBORDERWIDTHS;
typedef struct tagOIFI {
 UINT cb;
 BOOL fMDIApp;
 HWND hwndFrame;
 HACCEL haccel;
 UINT cAccelEntries;
}OLEINPLACEFRAMEINFO,*LPOLEINPLACEFRAMEINFO;

typedef struct IEnumOLEVERB { struct IEnumOLEVERBVtbl *lpVtbl; } IEnumOLEVERB; typedef struct IEnumOLEVERBVtbl IEnumOLEVERBVtbl; struct IEnumOLEVERBVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumOLEVERB*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumOLEVERB*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumOLEVERB*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumOLEVERB*, ULONG,OLEVERB*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumOLEVERB*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumOLEVERB*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumOLEVERB*, IEnumOLEVERB**) ; };
typedef IEnumOLEVERB IEnumOleVerb;

extern const IID IID_IParseDisplayName;


typedef struct IParseDisplayName { struct IParseDisplayNameVtbl *lpVtbl; } IParseDisplayName; typedef struct IParseDisplayNameVtbl IParseDisplayNameVtbl; struct IParseDisplayNameVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IParseDisplayName *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IParseDisplayName *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IParseDisplayName *) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IParseDisplayName *, IBindCtx*,LPOLESTR,ULONG*,IMoniker**) ;
};

extern const IID IID_IOleContainer;


typedef struct IOleContainer { struct IOleContainerVtbl *lpVtbl; } IOleContainer; typedef struct IOleContainerVtbl IOleContainerVtbl; struct IOleContainerVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleContainer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleContainer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleContainer *) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IOleContainer *, IBindCtx*,LPOLESTR,ULONG*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *EnumObjects)(IOleContainer *, DWORD,IEnumUnknown**) ;
 HRESULT(__attribute__((__stdcall__)) *LockContainer)(IOleContainer *, BOOL) ;
};

extern const IID IID_IOleItemContainer;


typedef struct IOleItemContainer { struct IOleItemContainerVtbl *lpVtbl; } IOleItemContainer; typedef struct IOleItemContainerVtbl IOleItemContainerVtbl; struct IOleItemContainerVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleItemContainer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleItemContainer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleItemContainer *) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IOleItemContainer *, IBindCtx*,LPOLESTR,ULONG*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *EnumObjects)(IOleItemContainer *, DWORD,IEnumUnknown**) ;
 HRESULT(__attribute__((__stdcall__)) *LockContainer)(IOleItemContainer *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectA)(IOleItemContainer *, LPOLESTR,DWORD,IBindCtx*,const IID* const,void**) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectStorage)(IOleItemContainer *, LPOLESTR,IBindCtx*,const IID* const,void**) ;
 HRESULT(__attribute__((__stdcall__)) *IsRunning)(IOleItemContainer *, LPOLESTR) ;
};

extern const IID IID_IOleClientSite;


typedef struct IOleClientSite { struct IOleClientSiteVtbl *lpVtbl; } IOleClientSite; typedef struct IOleClientSiteVtbl IOleClientSiteVtbl; struct IOleClientSiteVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleClientSite *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleClientSite *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleClientSite *) ;
 HRESULT(__attribute__((__stdcall__)) *SaveObject)(IOleClientSite *) ;
 HRESULT(__attribute__((__stdcall__)) *GetMoniker)(IOleClientSite *, DWORD,DWORD,LPMONIKER*) ;
 HRESULT(__attribute__((__stdcall__)) *GetContainer)(IOleClientSite *, LPOLECONTAINER*) ;
 HRESULT(__attribute__((__stdcall__)) *ShowObject)(IOleClientSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnShowWindow)(IOleClientSite *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *RequestNewObjectLayout)(IOleClientSite *) ;
};

extern const IID IID_IOleObject;


typedef struct IOleObject { struct IOleObjectVtbl *lpVtbl; } IOleObject; typedef struct IOleObjectVtbl IOleObjectVtbl; struct IOleObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleObject *) ;
 HRESULT(__attribute__((__stdcall__)) *SetClientSite)(IOleObject *, LPOLECLIENTSITE) ;
 HRESULT(__attribute__((__stdcall__)) *GetClientSite)(IOleObject *, LPOLECLIENTSITE*) ;
 HRESULT(__attribute__((__stdcall__)) *SetHostNames)(IOleObject *, LPCOLESTR,LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *Close)(IOleObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetMoniker)(IOleObject *, DWORD,LPMONIKER) ;
 HRESULT(__attribute__((__stdcall__)) *GetMoniker)(IOleObject *, DWORD,DWORD,LPMONIKER*) ;
 HRESULT(__attribute__((__stdcall__)) *InitFromData)(IOleObject *, LPDATAOBJECT,BOOL,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GetClipboardData)(IOleObject *, DWORD,LPDATAOBJECT*) ;
 HRESULT(__attribute__((__stdcall__)) *DoVerb)(IOleObject *, LONG,LPMSG,LPOLECLIENTSITE,LONG,HWND,LPCRECT) ;
 HRESULT(__attribute__((__stdcall__)) *EnumVerbs)(IOleObject *, LPENUMOLEVERB*) ;
 HRESULT(__attribute__((__stdcall__)) *Update)(IOleObject *) ;
 HRESULT(__attribute__((__stdcall__)) *IsUpToDate)(IOleObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetUserClassID)(IOleObject *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *GetUserType)(IOleObject *, DWORD,LPOLESTR*) ;
 HRESULT(__attribute__((__stdcall__)) *SetExtent)(IOleObject *, DWORD,SIZEL*) ;
 HRESULT(__attribute__((__stdcall__)) *GetExtent)(IOleObject *, DWORD,SIZEL*) ;
 HRESULT(__attribute__((__stdcall__)) *Advise)(IOleObject *, LPADVISESINK,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unadvise)(IOleObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumAdvise)(IOleObject *, LPENUMSTATDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *GetMiscStatus)(IOleObject *, DWORD,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetColorScheme)(IOleObject *, LPLOGPALETTE) ;
};

extern const IID IID_IOleWindow;


typedef struct IOleWindow { struct IOleWindowVtbl *lpVtbl; } IOleWindow; typedef struct IOleWindowVtbl IOleWindowVtbl; struct IOleWindowVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleWindow *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleWindow *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleWindow *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleWindow *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleWindow *, BOOL) ;
};

extern const IID IID_IOleInPlaceUIWindow;


typedef struct IOleInPlaceUIWindow { struct IOleInPlaceUIWindowVtbl *lpVtbl; } IOleInPlaceUIWindow; typedef struct IOleInPlaceUIWindowVtbl IOleInPlaceUIWindowVtbl; struct IOleInPlaceUIWindowVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceUIWindow *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceUIWindow *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceUIWindow *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceUIWindow *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceUIWindow *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetBorder)(IOleInPlaceUIWindow *, LPRECT) ;
 HRESULT(__attribute__((__stdcall__)) *RequestBorderSpace)(IOleInPlaceUIWindow *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetBorderSpace)(IOleInPlaceUIWindow *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetActiveObject)(IOleInPlaceUIWindow *, LPOLEINPLACEACTIVEOBJECT,LPCOLESTR) ;
};

extern const IID IID_IOleInPlaceObject;


typedef struct IOleInPlaceObject { struct IOleInPlaceObjectVtbl *lpVtbl; } IOleInPlaceObject; typedef struct IOleInPlaceObjectVtbl IOleInPlaceObjectVtbl; struct IOleInPlaceObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceObject *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *InPlaceDeactivate)(IOleInPlaceObject *) ;
 HRESULT(__attribute__((__stdcall__)) *UIDeactivate)(IOleInPlaceObject *) ;
 HRESULT(__attribute__((__stdcall__)) *SetObjectRects)(IOleInPlaceObject *, LPCRECT,LPCRECT) ;
 HRESULT(__attribute__((__stdcall__)) *ReactivateAndUndo)(IOleInPlaceObject *) ;
};

extern const IID IID_IOleInPlaceActiveObject;


typedef struct IOleInPlaceActiveObject { struct IOleInPlaceActiveObjectVtbl *lpVtbl; } IOleInPlaceActiveObject; typedef struct IOleInPlaceActiveObjectVtbl IOleInPlaceActiveObjectVtbl; struct IOleInPlaceActiveObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceActiveObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceActiveObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceActiveObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceActiveObject *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceActiveObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *TranslateAcceleratorA)(IOleInPlaceActiveObject *, LPMSG) ;
 HRESULT(__attribute__((__stdcall__)) *OnFrameWindowActivate)(IOleInPlaceActiveObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *OnDocWindowActivate)(IOleInPlaceActiveObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *ResizeBorder)(IOleInPlaceActiveObject *, LPCRECT,LPOLEINPLACEUIWINDOW,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *EnableModeless)(IOleInPlaceActiveObject *, BOOL) ;
};

extern const IID IID_IOleInPlaceFrame;


typedef struct IOleInPlaceFrame { struct IOleInPlaceFrameVtbl *lpVtbl; } IOleInPlaceFrame; typedef struct IOleInPlaceFrameVtbl IOleInPlaceFrameVtbl; struct IOleInPlaceFrameVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceFrame *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceFrame *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceFrame *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceFrame *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceFrame *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetBorder)(IOleInPlaceFrame *, LPRECT) ;
 HRESULT(__attribute__((__stdcall__)) *RequestBorderSpace)(IOleInPlaceFrame *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetBorderSpace)(IOleInPlaceFrame *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetActiveObject)(IOleInPlaceFrame *, LPOLEINPLACEACTIVEOBJECT,LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *InsertMenus)(IOleInPlaceFrame *, HMENU,LPOLEMENUGROUPWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetMenu)(IOleInPlaceFrame *, HMENU,HOLEMENU,HWND) ;
 HRESULT(__attribute__((__stdcall__)) *RemoveMenus)(IOleInPlaceFrame *, HMENU) ;
 HRESULT(__attribute__((__stdcall__)) *SetStatusText)(IOleInPlaceFrame *, LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *EnableModeless)(IOleInPlaceFrame *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *TranslateAcceleratorA)(IOleInPlaceFrame *, LPMSG,WORD) ;
};

extern const IID IID_IOleInPlaceSite;


typedef struct IOleInPlaceSite { struct IOleInPlaceSiteVtbl *lpVtbl; } IOleInPlaceSite; typedef struct IOleInPlaceSiteVtbl IOleInPlaceSiteVtbl; struct IOleInPlaceSiteVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceSite *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceSite *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceSite *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceSite *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *CanInPlaceActivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnInPlaceActivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnUIActivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindowContext)(IOleInPlaceSite *, IOleInPlaceFrame**,IOleInPlaceUIWindow**,LPRECT,LPRECT,LPOLEINPLACEFRAMEINFO) ;
 HRESULT(__attribute__((__stdcall__)) *Scroll)(IOleInPlaceSite *, SIZE) ;
 HRESULT(__attribute__((__stdcall__)) *OnUIDeactivate)(IOleInPlaceSite *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *OnInPlaceDeactivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *DiscardUndoState)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *DeactivateAndUndo)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnPosRectChange)(IOleInPlaceSite *, LPCRECT) ;
};

extern const IID IID_IOleAdviseHolder;


typedef struct IOleAdviseHolder { struct IOleAdviseHolderVtbl *lpVtbl; } IOleAdviseHolder; typedef struct IOleAdviseHolderVtbl IOleAdviseHolderVtbl; struct IOleAdviseHolderVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleAdviseHolder *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleAdviseHolder *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleAdviseHolder *) ;
 HRESULT(__attribute__((__stdcall__)) *Advise)(IOleAdviseHolder *, LPADVISESINK,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unadvise)(IOleAdviseHolder *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumAdvise)(IOleAdviseHolder *, LPENUMSTATDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnRename)(IOleAdviseHolder *, LPMONIKER) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnSave)(IOleAdviseHolder *) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnClose)(IOleAdviseHolder *) ;
};

extern const IID IID_IDropSource;


typedef struct IDropSource { struct IDropSourceVtbl *lpVtbl; } IDropSource; typedef struct IDropSourceVtbl IDropSourceVtbl; struct IDropSourceVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDropSource *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDropSource *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDropSource *) ;
 HRESULT(__attribute__((__stdcall__)) *QueryContinueDrag)(IDropSource *, BOOL,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GiveFeedback)(IDropSource *, DWORD) ;
};

extern const IID IID_IDropTarget;


typedef struct IDropTarget { struct IDropTargetVtbl *lpVtbl; } IDropTarget; typedef struct IDropTargetVtbl IDropTargetVtbl; struct IDropTargetVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDropTarget *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDropTarget *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDropTarget *) ;
 HRESULT(__attribute__((__stdcall__)) *DragEnter)(IDropTarget *, LPDATAOBJECT,DWORD,POINTL,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *DragOver)(IDropTarget *, DWORD,POINTL,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *DragLeave)(IDropTarget *) ;
 HRESULT(__attribute__((__stdcall__)) *Drop)(IDropTarget *, LPDATAOBJECT,DWORD,POINTL,PDWORD) ;
};

typedef BOOL(__attribute__((__stdcall__)) *__IView_pfncont)(DWORD);
extern const IID IID_IViewObject;


typedef struct IViewObject { struct IViewObjectVtbl *lpVtbl; } IViewObject; typedef struct IViewObjectVtbl IViewObjectVtbl; struct IViewObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IViewObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IViewObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IViewObject *) ;
 HRESULT(__attribute__((__stdcall__)) *Draw)(IViewObject *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,HDC,LPCRECTL,LPCRECTL,__IView_pfncont pfnContinue,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GetColorSet)(IViewObject *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,LPLOGPALETTE*) ;
 HRESULT(__attribute__((__stdcall__)) *Freeze)(IViewObject *, DWORD,LONG,PVOID,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unfreeze)(IViewObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetAdvise)(IViewObject *, DWORD,DWORD,IAdviseSink*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAdvise)(IViewObject *, PDWORD,PDWORD,IAdviseSink**) ;
};

extern const IID IID_IViewObject2;


typedef struct IViewObject2 { struct IViewObject2Vtbl *lpVtbl; } IViewObject2; typedef struct IViewObject2Vtbl IViewObject2Vtbl; struct IViewObject2Vtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IViewObject2 *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IViewObject2 *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IViewObject2 *) ;
 HRESULT(__attribute__((__stdcall__)) *Draw)(IViewObject2 *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,HDC,LPCRECTL,LPCRECTL,__IView_pfncont pfnContinue,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GetColorSet)(IViewObject2 *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,LPLOGPALETTE*) ;
 HRESULT(__attribute__((__stdcall__)) *Freeze)(IViewObject2 *, DWORD,LONG,PVOID,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unfreeze)(IViewObject2 *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetAdvise)(IViewObject2 *, DWORD,DWORD,IAdviseSink*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAdvise)(IViewObject2 *, PDWORD,PDWORD,IAdviseSink**) ;
 HRESULT(__attribute__((__stdcall__)) *GetExtent)(IViewObject2 *, DWORD,LONG,DVTARGETDEVICE*,LPSIZEL) ;
};
# 30 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/ole2.h" 2 3

typedef struct _OLESTREAMVTBL *LPOLESTREAMVTBL;
typedef struct _OLESTREAM {
 LPOLESTREAMVTBL lpstbl;
} OLESTREAM,*LPOLESTREAM;
typedef struct _OLESTREAMVTBL {
 DWORD (__attribute__((__stdcall__))* Get)(LPOLESTREAM,void*,DWORD);
 DWORD (__attribute__((__stdcall__))* Put)(LPOLESTREAM,const void*,DWORD);
} OLESTREAMVTBL;

extern HRESULT __attribute__((__stdcall__)) CreateDataAdviseHolder(LPDATAADVISEHOLDER*);
extern DWORD __attribute__((__stdcall__)) OleBuildVersion(void);
extern HRESULT __attribute__((__stdcall__)) ReadClassStg(LPSTORAGE,CLSID*);
extern HRESULT __attribute__((__stdcall__)) WriteClassStg(LPSTORAGE,const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) ReadClassStm(LPSTREAM,CLSID*);
extern HRESULT __attribute__((__stdcall__)) WriteClassStm(LPSTREAM,const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) WriteFmtUserTypeStg(LPSTORAGE,CLIPFORMAT,LPOLESTR);
extern HRESULT __attribute__((__stdcall__)) ReadFmtUserTypeStg(LPSTORAGE,CLIPFORMAT*,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) OleInitialize(PVOID);
extern void __attribute__((__stdcall__)) OleUninitialize(void);
extern HRESULT __attribute__((__stdcall__)) OleQueryLinkFromData(LPDATAOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleQueryCreateFromData(LPDATAOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleCreate(const CLSID* const,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateFromData(LPDATAOBJECT,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateLinkFromData(LPDATAOBJECT,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateStaticFromData(LPDATAOBJECT,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateLink(LPMONIKER,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateLinkToFile(LPCOLESTR,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateFromFile(const CLSID* const,LPCOLESTR,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleLoad(LPSTORAGE,const IID* const,LPOLECLIENTSITE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleSave(LPPERSISTSTORAGE,LPSTORAGE,BOOL);
extern HRESULT __attribute__((__stdcall__)) OleLoadFromStream(LPSTREAM,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleSaveToStream(LPPERSISTSTREAM,LPSTREAM);
extern HRESULT __attribute__((__stdcall__)) OleSetContainedObject(LPUNKNOWN,BOOL);
extern HRESULT __attribute__((__stdcall__)) OleNoteObjectVisible(LPUNKNOWN,BOOL);
extern HRESULT __attribute__((__stdcall__)) RegisterDragDrop(HWND,LPDROPTARGET);
extern HRESULT __attribute__((__stdcall__)) RevokeDragDrop(HWND);
extern HRESULT __attribute__((__stdcall__)) DoDragDrop(LPDATAOBJECT,LPDROPSOURCE,DWORD,PDWORD);
extern HRESULT __attribute__((__stdcall__)) OleSetClipboard(LPDATAOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleGetClipboard(LPDATAOBJECT*);
extern HRESULT __attribute__((__stdcall__)) OleFlushClipboard(void);
extern HRESULT __attribute__((__stdcall__)) OleIsCurrentClipboard(LPDATAOBJECT);
extern HOLEMENU __attribute__((__stdcall__)) OleCreateMenuDescriptor(HMENU,LPOLEMENUGROUPWIDTHS);
extern HRESULT __attribute__((__stdcall__)) OleSetMenuDescriptor(HOLEMENU,HWND,HWND,LPOLEINPLACEFRAME,LPOLEINPLACEACTIVEOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleDestroyMenuDescriptor(HOLEMENU);
extern HRESULT __attribute__((__stdcall__)) OleTranslateAccelerator(LPOLEINPLACEFRAME,LPOLEINPLACEFRAMEINFO,LPMSG);
extern HANDLE __attribute__((__stdcall__)) OleDuplicateData(HANDLE,CLIPFORMAT,UINT);
extern HRESULT __attribute__((__stdcall__)) OleDraw(LPUNKNOWN,DWORD,HDC,LPCRECT);
extern HRESULT __attribute__((__stdcall__)) OleRun(LPUNKNOWN);
extern BOOL __attribute__((__stdcall__)) OleIsRunning(LPOLEOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleLockRunning(LPUNKNOWN,BOOL,BOOL);
extern void __attribute__((__stdcall__)) ReleaseStgMedium(LPSTGMEDIUM);
extern HRESULT __attribute__((__stdcall__)) CreateOleAdviseHolder(LPOLEADVISEHOLDER*);
extern HRESULT __attribute__((__stdcall__)) OleCreateDefaultHandler(const CLSID* const,LPUNKNOWN,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateEmbeddingHelper(const CLSID* const,LPUNKNOWN,DWORD,LPCLASSFACTORY,const IID* const,PVOID*);
extern BOOL __attribute__((__stdcall__)) IsAccelerator(HACCEL,int,LPMSG,WORD*);
extern HGLOBAL __attribute__((__stdcall__)) OleGetIconOfFile(LPOLESTR,BOOL);
extern HGLOBAL __attribute__((__stdcall__)) OleGetIconOfClass(const CLSID* const,LPOLESTR,BOOL);
extern HGLOBAL __attribute__((__stdcall__)) OleMetafilePictFromIconAndLabel(HICON,LPOLESTR,LPOLESTR,UINT);
extern HRESULT __attribute__((__stdcall__)) OleRegGetUserType(const CLSID* const,DWORD,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) OleRegGetMiscStatus(const CLSID* const,DWORD,DWORD*);
extern HRESULT __attribute__((__stdcall__)) OleRegEnumFormatEtc (const CLSID* const,DWORD,LPENUMFORMATETC*);
extern HRESULT __attribute__((__stdcall__)) OleRegEnumVerbs (const CLSID* const,LPENUMOLEVERB*);
extern HRESULT __attribute__((__stdcall__)) OleConvertOLESTREAMToIStorage(LPOLESTREAM,LPSTORAGE,const DVTARGETDEVICE*);
extern HRESULT __attribute__((__stdcall__)) OleConvertIStorageToOLESTREAM(LPSTORAGE,LPOLESTREAM);
extern HRESULT __attribute__((__stdcall__)) GetHGlobalFromILockBytes(LPLOCKBYTES,HGLOBAL*);
extern HRESULT __attribute__((__stdcall__)) CreateILockBytesOnHGlobal(HGLOBAL,BOOL,LPLOCKBYTES*);
extern HRESULT __attribute__((__stdcall__)) GetHGlobalFromStream(LPSTREAM,HGLOBAL*);
extern HRESULT __attribute__((__stdcall__)) CreateStreamOnHGlobal(HGLOBAL,BOOL,LPSTREAM*);
extern HRESULT __attribute__((__stdcall__)) OleDoAutoConvert(LPSTORAGE,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) OleGetAutoConvert(const CLSID* const,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) OleSetAutoConvert(const CLSID* const,const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) GetConvertStg(LPSTORAGE);
extern HRESULT __attribute__((__stdcall__)) SetConvertStg(LPSTORAGE,BOOL);
extern HRESULT __attribute__((__stdcall__)) OleConvertIStorageToOLESTREAMEx(LPSTORAGE,CLIPFORMAT,LONG,LONG,DWORD,LPSTGMEDIUM,LPOLESTREAM);
extern HRESULT __attribute__((__stdcall__)) OleConvertOLESTREAMToIStorageEx(LPOLESTREAM,LPSTORAGE,CLIPFORMAT*,LONG*,LONG*,DWORD*,LPSTGMEDIUM);



#pragma pack(pop)
# 112 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/windows.h" 2 3
# 55 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winalleg.h" 2 3
# 72 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/winalleg.h" 3
typedef struct WIN_GFX_DRIVER {
   int has_backing_store;
   void (*switch_in) (void);
   void (*switch_out) (void);
   void (*enter_sysmode) (void);
   void (*exit_sysmode) (void);
   void (*move) (int x, int y, int w, int h);
   void (*iconify) (void);
   void (*paint) (RECT *rect);
} WIN_GFX_DRIVER;

extern __attribute__((dllimport)) WIN_GFX_DRIVER * win_gfx_driver;

extern void win_grab_input (void);



extern HWND win_get_window (void);
extern void win_set_window (HWND wnd);
extern void win_set_wnd_create_proc (HWND (*proc) (WNDPROC));



extern HDC win_get_dc (BITMAP *bmp);
extern void win_release_dc (BITMAP *bmp, HDC dc);



extern void set_gdi_color_format (void);
extern void set_palette_to_hdc (HDC dc, PALETTE pal);
extern HPALETTE convert_palette_to_hpalette (PALETTE pal);
extern void convert_hpalette_to_palette (HPALETTE hpal, PALETTE pal);
extern HBITMAP convert_bitmap_to_hbitmap (BITMAP *bitmap);
extern BITMAP * convert_hbitmap_to_bitmap (HBITMAP bitmap);
extern void draw_to_hdc (HDC dc, BITMAP *bitmap, int x, int y);
extern void blit_to_hdc (BITMAP *bitmap, HDC dc, int src_x, int src_y, int dest_x, int dest_y, int w, int h);
extern void stretch_blit_to_hdc (BITMAP *bitmap, HDC dc, int src_x, int src_y, int src_w, int src_h, int dest_x, int dest_y, int dest_w, int dest_h);
extern void blit_from_hdc (HDC dc, BITMAP *bitmap, int src_x, int src_y, int dest_x, int dest_y, int w, int h);
extern void stretch_blit_from_hdc (HDC hdc, BITMAP *bitmap, int src_x, int src_y, int src_w, int src_h, int dest_x, int dest_y, int dest_w, int dest_h);
# 4 "test1.c" 2
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/loadpng.h" 1 3
# 22 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/loadpng.h" 3
extern double _png_screen_gamma;





extern int _png_compression_level;



BITMAP *load_png(const char *filename, RGB *pal);


BITMAP *load_memory_png(const void *buffer, int buffer_size, RGB *pal);


int save_png(const char *filename, BITMAP *bmp, const RGB *pal);




void register_png_file_type(void);





void register_png_datafile_object(int id);







int loadpng_init(void);
# 5 "test1.c" 2



# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 1 3
# 30 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curlver.h" 1 3
# 31 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 2 3
# 44 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef void CURL;
# 82 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
  typedef long long curl_off_t;
# 123 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
struct curl_httppost {
  struct curl_httppost *next;
  char *name;
  long namelength;
  char *contents;
  long contentslength;
  char *buffer;
  long bufferlength;
  char *contenttype;
  struct curl_slist* contentheader;
  struct curl_httppost *more;


  long flags;
# 146 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
  char *showfilename;


};

typedef int (*curl_progress_callback)(void *clientp,
                                      double dltotal,
                                      double dlnow,
                                      double ultotal,
                                      double ulnow);





typedef size_t (*curl_write_callback)(char *buffer,
                                      size_t size,
                                      size_t nitems,
                                      void *outstream);




typedef size_t (*curl_read_callback)(char *buffer,
                                      size_t size,
                                      size_t nitems,
                                      void *instream);




typedef int (*curl_passwd_callback)(void *clientp,
                                    const char *prompt,
                                    char *buffer,
                                    int buflen);


typedef enum {
  CURLIOE_OK,
  CURLIOE_UNKNOWNCMD,
  CURLIOE_FAILRESTART,
  CURLIOE_LAST
} curlioerr;

typedef enum {
  CURLIOCMD_NOP,
  CURLIOCMD_RESTARTREAD,
  CURLIOCMD_LAST
} curliocmd;

typedef curlioerr (*curl_ioctl_callback)(CURL *handle,
                                         int cmd,
                                         void *clientp);







typedef void *(*curl_malloc_callback)(size_t size);
typedef void (*curl_free_callback)(void *ptr);
typedef void *(*curl_realloc_callback)(void *ptr, size_t size);
typedef char *(*curl_strdup_callback)(const char *str);
typedef void *(*curl_calloc_callback)(size_t nmemb, size_t size);


typedef enum {
  CURLINFO_TEXT = 0,
  CURLINFO_HEADER_IN,
  CURLINFO_HEADER_OUT,
  CURLINFO_DATA_IN,
  CURLINFO_DATA_OUT,
  CURLINFO_SSL_DATA_IN,
  CURLINFO_SSL_DATA_OUT,
  CURLINFO_END
} curl_infotype;

typedef int (*curl_debug_callback)
       (CURL *handle,
        curl_infotype type,
        char *data,
        size_t size,
        void *userptr);
# 238 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {
  CURLE_OK = 0,
  CURLE_UNSUPPORTED_PROTOCOL,
  CURLE_FAILED_INIT,
  CURLE_URL_MALFORMAT,
  CURLE_URL_MALFORMAT_USER,
  CURLE_COULDNT_RESOLVE_PROXY,
  CURLE_COULDNT_RESOLVE_HOST,
  CURLE_COULDNT_CONNECT,
  CURLE_FTP_WEIRD_SERVER_REPLY,
  CURLE_FTP_ACCESS_DENIED,


  CURLE_FTP_USER_PASSWORD_INCORRECT,
  CURLE_FTP_WEIRD_PASS_REPLY,
  CURLE_FTP_WEIRD_USER_REPLY,
  CURLE_FTP_WEIRD_PASV_REPLY,
  CURLE_FTP_WEIRD_227_FORMAT,
  CURLE_FTP_CANT_GET_HOST,
  CURLE_FTP_CANT_RECONNECT,
  CURLE_FTP_COULDNT_SET_BINARY,
  CURLE_PARTIAL_FILE,
  CURLE_FTP_COULDNT_RETR_FILE,
  CURLE_FTP_WRITE_ERROR,
  CURLE_FTP_QUOTE_ERROR,
  CURLE_HTTP_RETURNED_ERROR,
  CURLE_WRITE_ERROR,
  CURLE_MALFORMAT_USER,
  CURLE_FTP_COULDNT_STOR_FILE,
  CURLE_READ_ERROR,
  CURLE_OUT_OF_MEMORY,
  CURLE_OPERATION_TIMEOUTED,
  CURLE_FTP_COULDNT_SET_ASCII,
  CURLE_FTP_PORT_FAILED,
  CURLE_FTP_COULDNT_USE_REST,
  CURLE_FTP_COULDNT_GET_SIZE,
  CURLE_HTTP_RANGE_ERROR,
  CURLE_HTTP_POST_ERROR,
  CURLE_SSL_CONNECT_ERROR,
  CURLE_BAD_DOWNLOAD_RESUME,
  CURLE_FILE_COULDNT_READ_FILE,
  CURLE_LDAP_CANNOT_BIND,
  CURLE_LDAP_SEARCH_FAILED,
  CURLE_LIBRARY_NOT_FOUND,
  CURLE_FUNCTION_NOT_FOUND,
  CURLE_ABORTED_BY_CALLBACK,
  CURLE_BAD_FUNCTION_ARGUMENT,
  CURLE_BAD_CALLING_ORDER,
  CURLE_INTERFACE_FAILED,
  CURLE_BAD_PASSWORD_ENTERED,
  CURLE_TOO_MANY_REDIRECTS ,
  CURLE_UNKNOWN_TELNET_OPTION,
  CURLE_TELNET_OPTION_SYNTAX ,
  CURLE_OBSOLETE,
  CURLE_SSL_PEER_CERTIFICATE,
  CURLE_GOT_NOTHING,
  CURLE_SSL_ENGINE_NOTFOUND,
  CURLE_SSL_ENGINE_SETFAILED,

  CURLE_SEND_ERROR,
  CURLE_RECV_ERROR,
  CURLE_SHARE_IN_USE,
  CURLE_SSL_CERTPROBLEM,
  CURLE_SSL_CIPHER,
  CURLE_SSL_CACERT,
  CURLE_BAD_CONTENT_ENCODING,
  CURLE_LDAP_INVALID_URL,
  CURLE_FILESIZE_EXCEEDED,
  CURLE_FTP_SSL_FAILED,
  CURLE_SEND_FAIL_REWIND,

  CURLE_SSL_ENGINE_INITFAILED,
  CURLE_LOGIN_DENIED,

  CURL_LAST
} CURLcode;

typedef CURLcode (*curl_ssl_ctx_callback)(CURL *curl,
                                          void *ssl_ctx,

                                          void *userptr);
# 330 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {
  CURLPROXY_HTTP = 0,
  CURLPROXY_SOCKS4 = 4,
  CURLPROXY_SOCKS5 = 5
} curl_proxytype;
# 359 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {
  CURLFTPSSL_NONE,
  CURLFTPSSL_TRY,
  CURLFTPSSL_CONTROL,
  CURLFTPSSL_ALL,
  CURLFTPSSL_LAST
} curl_ftpssl;


typedef enum {
  CURLFTPAUTH_DEFAULT,
  CURLFTPAUTH_SSL,
  CURLFTPAUTH_TLS,
  CURLFTPAUTH_LAST
} curl_ftpauth;
# 421 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {

  CURLOPT_FILE = 10000 + 1,


  CURLOPT_URL = 10000 + 2,


  CURLOPT_PORT = 0 + 3,


  CURLOPT_PROXY = 10000 + 4,


  CURLOPT_USERPWD = 10000 + 5,


  CURLOPT_PROXYUSERPWD = 10000 + 6,


  CURLOPT_RANGE = 10000 + 7,




  CURLOPT_INFILE = 10000 + 9,



  CURLOPT_ERRORBUFFER = 10000 + 10,



  CURLOPT_WRITEFUNCTION = 20000 + 11,



  CURLOPT_READFUNCTION = 20000 + 12,


  CURLOPT_TIMEOUT = 0 + 13,
# 472 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
  CURLOPT_INFILESIZE = 0 + 14,


  CURLOPT_POSTFIELDS = 10000 + 15,


  CURLOPT_REFERER = 10000 + 16,



  CURLOPT_FTPPORT = 10000 + 17,


  CURLOPT_USERAGENT = 10000 + 18,
# 494 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
  CURLOPT_LOW_SPEED_LIMIT = 0 + 19,


  CURLOPT_LOW_SPEED_TIME = 0 + 20,







  CURLOPT_RESUME_FROM = 0 + 21,


  CURLOPT_COOKIE = 10000 + 22,


  CURLOPT_HTTPHEADER = 10000 + 23,


  CURLOPT_HTTPPOST = 10000 + 24,


  CURLOPT_SSLCERT = 10000 + 25,


  CURLOPT_SSLCERTPASSWD = 10000 + 26,

  CURLOPT_SSLKEYPASSWD = 10000 + 26,


  CURLOPT_CRLF = 0 + 27,


  CURLOPT_QUOTE = 10000 + 28,



  CURLOPT_WRITEHEADER = 10000 + 29,



  CURLOPT_COOKIEFILE = 10000 + 31,



  CURLOPT_SSLVERSION = 0 + 32,


  CURLOPT_TIMECONDITION = 0 + 33,



  CURLOPT_TIMEVALUE = 0 + 34,







  CURLOPT_CUSTOMREQUEST = 10000 + 36,


  CURLOPT_STDERR = 10000 + 37,




  CURLOPT_POSTQUOTE = 10000 + 39,



  CURLOPT_WRITEINFO = 10000 + 40,

  CURLOPT_VERBOSE = 0 + 41,
  CURLOPT_HEADER = 0 + 42,
  CURLOPT_NOPROGRESS = 0 + 43,
  CURLOPT_NOBODY = 0 + 44,
  CURLOPT_FAILONERROR = 0 + 45,
  CURLOPT_UPLOAD = 0 + 46,
  CURLOPT_POST = 0 + 47,
  CURLOPT_FTPLISTONLY = 0 + 48,

  CURLOPT_FTPAPPEND = 0 + 50,



  CURLOPT_NETRC = 0 + 51,

  CURLOPT_FOLLOWLOCATION = 0 + 52,

  CURLOPT_TRANSFERTEXT = 0 + 53,
  CURLOPT_PUT = 0 + 54,






  CURLOPT_PROGRESSFUNCTION = 20000 + 56,


  CURLOPT_PROGRESSDATA = 10000 + 57,


  CURLOPT_AUTOREFERER = 0 + 58,



  CURLOPT_PROXYPORT = 0 + 59,


  CURLOPT_POSTFIELDSIZE = 0 + 60,


  CURLOPT_HTTPPROXYTUNNEL = 0 + 61,


  CURLOPT_INTERFACE = 10000 + 62,




  CURLOPT_KRB4LEVEL = 10000 + 63,


  CURLOPT_SSL_VERIFYPEER = 0 + 64,



  CURLOPT_CAINFO = 10000 + 65,





  CURLOPT_MAXREDIRS = 0 + 68,



  CURLOPT_FILETIME = 0 + 69,


  CURLOPT_TELNETOPTIONS = 10000 + 70,


  CURLOPT_MAXCONNECTS = 0 + 71,



  CURLOPT_CLOSEPOLICY = 0 + 72,






  CURLOPT_FRESH_CONNECT = 0 + 74,




  CURLOPT_FORBID_REUSE = 0 + 75,



  CURLOPT_RANDOM_FILE = 10000 + 76,


  CURLOPT_EGDSOCKET = 10000 + 77,




  CURLOPT_CONNECTTIMEOUT = 0 + 78,



  CURLOPT_HEADERFUNCTION = 20000 + 79,




  CURLOPT_HTTPGET = 0 + 80,




  CURLOPT_SSL_VERIFYHOST = 0 + 81,



  CURLOPT_COOKIEJAR = 10000 + 82,


  CURLOPT_SSL_CIPHER_LIST = 10000 + 83,



  CURLOPT_HTTP_VERSION = 0 + 84,




  CURLOPT_FTP_USE_EPSV = 0 + 85,


  CURLOPT_SSLCERTTYPE = 10000 + 86,


  CURLOPT_SSLKEY = 10000 + 87,


  CURLOPT_SSLKEYTYPE = 10000 + 88,


  CURLOPT_SSLENGINE = 10000 + 89,




  CURLOPT_SSLENGINE_DEFAULT = 0 + 90,


  CURLOPT_DNS_USE_GLOBAL_CACHE = 0 + 91,


  CURLOPT_DNS_CACHE_TIMEOUT = 0 + 92,


  CURLOPT_PREQUOTE = 10000 + 93,


  CURLOPT_DEBUGFUNCTION = 20000 + 94,


  CURLOPT_DEBUGDATA = 10000 + 95,


  CURLOPT_COOKIESESSION = 0 + 96,



  CURLOPT_CAPATH = 10000 + 97,


  CURLOPT_BUFFERSIZE = 0 + 98,




  CURLOPT_NOSIGNAL = 0 + 99,


  CURLOPT_SHARE = 10000 + 100,



  CURLOPT_PROXYTYPE = 0 + 101,



  CURLOPT_ENCODING = 10000 + 102,


  CURLOPT_PRIVATE = 10000 + 103,


  CURLOPT_HTTP200ALIASES = 10000 + 104,




  CURLOPT_UNRESTRICTED_AUTH = 0 + 105,




  CURLOPT_FTP_USE_EPRT = 0 + 106,




  CURLOPT_HTTPAUTH = 0 + 107,




  CURLOPT_SSL_CTX_FUNCTION = 20000 + 108,



  CURLOPT_SSL_CTX_DATA = 10000 + 109,


  CURLOPT_FTP_CREATE_MISSING_DIRS = 0 + 110,




  CURLOPT_PROXYAUTH = 0 + 111,





  CURLOPT_FTP_RESPONSE_TIMEOUT = 0 + 112,




  CURLOPT_IPRESOLVE = 0 + 113,






  CURLOPT_MAXFILESIZE = 0 + 114,




  CURLOPT_INFILESIZE_LARGE = 30000 + 115,




  CURLOPT_RESUME_FROM_LARGE = 30000 + 116,




  CURLOPT_MAXFILESIZE_LARGE = 30000 + 117,





  CURLOPT_NETRC_FILE = 10000 + 118,






  CURLOPT_FTP_SSL = 0 + 119,


  CURLOPT_POSTFIELDSIZE_LARGE = 30000 + 120,


  CURLOPT_TCP_NODELAY = 0 + 121,





  CURLOPT_SOURCE_USERPWD = 10000 + 123,







  CURLOPT_SOURCE_PREQUOTE = 10000 + 127,



  CURLOPT_SOURCE_POSTQUOTE = 10000 + 128,
# 877 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
  CURLOPT_FTPSSLAUTH = 0 + 129,

  CURLOPT_IOCTLFUNCTION = 20000 + 130,
  CURLOPT_IOCTLDATA = 10000 + 131,


  CURLOPT_SOURCE_URL = 10000 + 132,



  CURLOPT_SOURCE_QUOTE = 10000 + 133,



  CURLOPT_FTP_ACCOUNT = 10000 + 134,

  CURLOPT_LASTENTRY
} CURLoption;
# 930 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
enum {
  CURL_HTTP_VERSION_NONE,


  CURL_HTTP_VERSION_1_0,
  CURL_HTTP_VERSION_1_1,

  CURL_HTTP_VERSION_LAST
};


enum CURL_NETRC_OPTION {
  CURL_NETRC_IGNORED,

  CURL_NETRC_OPTIONAL,

  CURL_NETRC_REQUIRED,


  CURL_NETRC_LAST
};

enum {
  CURL_SSLVERSION_DEFAULT,
  CURL_SSLVERSION_TLSv1,
  CURL_SSLVERSION_SSLv2,
  CURL_SSLVERSION_SSLv3,

  CURL_SSLVERSION_LAST
};


typedef enum {
  CURL_TIMECOND_NONE,

  CURL_TIMECOND_IFMODSINCE,
  CURL_TIMECOND_IFUNMODSINCE,
  CURL_TIMECOND_LASTMOD,

  CURL_TIMECOND_LAST
} curl_TimeCond;
# 979 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) int (curl_strequal)(const char *s1, const char *s2);
__attribute__((dllimport)) int (curl_strnequal)(const char *s1, const char *s2, size_t n);
# 994 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {
  CURLFORM_NOTHING,


  CURLFORM_COPYNAME,
  CURLFORM_PTRNAME,
  CURLFORM_NAMELENGTH,
  CURLFORM_COPYCONTENTS,
  CURLFORM_PTRCONTENTS,
  CURLFORM_CONTENTSLENGTH,
  CURLFORM_FILECONTENT,
  CURLFORM_ARRAY,
  CURLFORM_OBSOLETE,
  CURLFORM_FILE,

  CURLFORM_BUFFER,
  CURLFORM_BUFFERPTR,
  CURLFORM_BUFFERLENGTH,

  CURLFORM_CONTENTTYPE,
  CURLFORM_CONTENTHEADER,
  CURLFORM_FILENAME,
  CURLFORM_END,
  CURLFORM_OBSOLETE2,

  CURLFORM_LASTENTRY
} CURLformoption;




struct curl_forms {
  CURLformoption option;
  const char *value;
};
# 1046 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {
  CURL_FORMADD_OK,

  CURL_FORMADD_MEMORY,
  CURL_FORMADD_OPTION_TWICE,
  CURL_FORMADD_NULL,
  CURL_FORMADD_UNKNOWN_OPTION,
  CURL_FORMADD_INCOMPLETE,
  CURL_FORMADD_ILLEGAL_ARRAY,
  CURL_FORMADD_DISABLED,

  CURL_FORMADD_LAST
} CURLFORMcode;
# 1069 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) CURLFORMcode curl_formadd(struct curl_httppost **httppost,
                                      struct curl_httppost **last_post,
                                      ...);
# 1080 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) void curl_formfree(struct curl_httppost *form);
# 1090 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) char *curl_getenv(const char *variable);
# 1099 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) char *curl_version(void);
# 1110 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) char *curl_escape(const char *string, int length);
# 1121 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) char *curl_unescape(const char *string, int length);
# 1131 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) void curl_free(void *p);
# 1141 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) CURLcode curl_global_init(long flags);
# 1156 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) CURLcode curl_global_init_mem(long flags,
                                          curl_malloc_callback m,
                                          curl_free_callback f,
                                          curl_realloc_callback r,
                                          curl_strdup_callback s,
                                          curl_calloc_callback c);
# 1171 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) void curl_global_cleanup(void);


struct curl_slist {
  char *data;
  struct curl_slist *next;
};
# 1187 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) struct curl_slist *curl_slist_append(struct curl_slist *,
                                                 const char *);
# 1197 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) void curl_slist_free_all(struct curl_slist *);
# 1209 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) time_t curl_getdate(const char *p, const time_t *now);
# 1218 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {
  CURLINFO_NONE,
  CURLINFO_EFFECTIVE_URL = 0x100000 + 1,
  CURLINFO_RESPONSE_CODE = 0x200000 + 2,
  CURLINFO_TOTAL_TIME = 0x300000 + 3,
  CURLINFO_NAMELOOKUP_TIME = 0x300000 + 4,
  CURLINFO_CONNECT_TIME = 0x300000 + 5,
  CURLINFO_PRETRANSFER_TIME = 0x300000 + 6,
  CURLINFO_SIZE_UPLOAD = 0x300000 + 7,
  CURLINFO_SIZE_DOWNLOAD = 0x300000 + 8,
  CURLINFO_SPEED_DOWNLOAD = 0x300000 + 9,
  CURLINFO_SPEED_UPLOAD = 0x300000 + 10,
  CURLINFO_HEADER_SIZE = 0x200000 + 11,
  CURLINFO_REQUEST_SIZE = 0x200000 + 12,
  CURLINFO_SSL_VERIFYRESULT = 0x200000 + 13,
  CURLINFO_FILETIME = 0x200000 + 14,
  CURLINFO_CONTENT_LENGTH_DOWNLOAD = 0x300000 + 15,
  CURLINFO_CONTENT_LENGTH_UPLOAD = 0x300000 + 16,
  CURLINFO_STARTTRANSFER_TIME = 0x300000 + 17,
  CURLINFO_CONTENT_TYPE = 0x100000 + 18,
  CURLINFO_REDIRECT_TIME = 0x300000 + 19,
  CURLINFO_REDIRECT_COUNT = 0x200000 + 20,
  CURLINFO_PRIVATE = 0x100000 + 21,
  CURLINFO_HTTP_CONNECTCODE = 0x200000 + 22,
  CURLINFO_HTTPAUTH_AVAIL = 0x200000 + 23,
  CURLINFO_PROXYAUTH_AVAIL = 0x200000 + 24,
  CURLINFO_OS_ERRNO = 0x200000 + 25,
  CURLINFO_NUM_CONNECTS = 0x200000 + 26,
  CURLINFO_SSL_ENGINES = 0x400000 + 27,


  CURLINFO_LASTONE = 28
} CURLINFO;





typedef enum {
  CURLCLOSEPOLICY_NONE,

  CURLCLOSEPOLICY_OLDEST,
  CURLCLOSEPOLICY_LEAST_RECENTLY_USED,
  CURLCLOSEPOLICY_LEAST_TRAFFIC,
  CURLCLOSEPOLICY_SLOWEST,
  CURLCLOSEPOLICY_CALLBACK,

  CURLCLOSEPOLICY_LAST
} curl_closepolicy;
# 1280 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef enum {
  CURL_LOCK_DATA_NONE = 0,




  CURL_LOCK_DATA_SHARE,
  CURL_LOCK_DATA_COOKIE,
  CURL_LOCK_DATA_DNS,
  CURL_LOCK_DATA_SSL_SESSION,
  CURL_LOCK_DATA_CONNECT,
  CURL_LOCK_DATA_LAST
} curl_lock_data;


typedef enum {
  CURL_LOCK_ACCESS_NONE = 0,
  CURL_LOCK_ACCESS_SHARED = 1,
  CURL_LOCK_ACCESS_SINGLE = 2,
  CURL_LOCK_ACCESS_LAST
} curl_lock_access;

typedef void (*curl_lock_function)(CURL *handle,
                                   curl_lock_data data,
                                   curl_lock_access locktype,
                                   void *userptr);
typedef void (*curl_unlock_function)(CURL *handle,
                                     curl_lock_data data,
                                     void *userptr);

typedef void CURLSH;

typedef enum {
  CURLSHE_OK,
  CURLSHE_BAD_OPTION,
  CURLSHE_IN_USE,
  CURLSHE_INVALID,
  CURLSHE_NOMEM,
  CURLSHE_LAST
} CURLSHcode;

typedef enum {
  CURLSHOPT_NONE,
  CURLSHOPT_SHARE,
  CURLSHOPT_UNSHARE,
  CURLSHOPT_LOCKFUNC,
  CURLSHOPT_UNLOCKFUNC,
  CURLSHOPT_USERDATA,

  CURLSHOPT_LAST
} CURLSHoption;

__attribute__((dllimport)) CURLSH *curl_share_init(void);
__attribute__((dllimport)) CURLSHcode curl_share_setopt(CURLSH *, CURLSHoption option, ...);
__attribute__((dllimport)) CURLSHcode curl_share_cleanup(CURLSH *);





typedef enum {
  CURLVERSION_FIRST,
  CURLVERSION_SECOND,
  CURLVERSION_THIRD,
  CURLVERSION_LAST
} CURLversion;
# 1354 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
typedef struct {
  CURLversion age;
  const char *version;
  unsigned int version_num;
  const char *host;
  int features;
  const char *ssl_version;
  long ssl_version_num;
  const char *libz_version;

  const char * const *protocols;


  const char *ares;
  int ares_num;


  const char *libidn;
} curl_version_info_data;
# 1395 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) curl_version_info_data *curl_version_info(CURLversion);
# 1406 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) const char *curl_easy_strerror(CURLcode);
# 1417 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 3
__attribute__((dllimport)) const char *curl_share_strerror(CURLSHcode);







# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/easy.h" 1 3
# 29 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/easy.h" 3
__attribute__((dllimport)) CURL *curl_easy_init(void);
__attribute__((dllimport)) CURLcode curl_easy_setopt(CURL *curl, CURLoption option, ...);
__attribute__((dllimport)) CURLcode curl_easy_perform(CURL *curl);
__attribute__((dllimport)) void curl_easy_cleanup(CURL *curl);
# 47 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/easy.h" 3
__attribute__((dllimport)) CURLcode curl_easy_getinfo(CURL *curl, CURLINFO info, ...);
# 62 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/easy.h" 3
__attribute__((dllimport)) CURL* curl_easy_duphandle(CURL *curl);
# 75 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/easy.h" 3
__attribute__((dllimport)) void curl_easy_reset(CURL *curl);
# 1426 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 2 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 1 3
# 69 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 1 3
# 70 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 2 3





typedef void CURLM;
# 93 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
typedef enum {
  CURLM_CALL_MULTI_PERFORM=-1,
  CURLM_OK,
  CURLM_BAD_HANDLE,
  CURLM_BAD_EASY_HANDLE,
  CURLM_OUT_OF_MEMORY,
  CURLM_INTERNAL_ERROR,
  CURLM_LAST
} CURLMcode;

typedef enum {
  CURLMSG_NONE,
  CURLMSG_DONE,

  CURLMSG_LAST
} CURLMSG;

struct CURLMsg {
  CURLMSG msg;
  CURL *easy_handle;
  union {
    void *whatever;
    CURLcode result;
  } data;
};
typedef struct CURLMsg CURLMsg;
# 127 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) CURLM *curl_multi_init(void);
# 136 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) CURLMcode curl_multi_add_handle(CURLM *multi_handle,
                                            CURL *curl_handle);
# 146 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) CURLMcode curl_multi_remove_handle(CURLM *multi_handle,
                                               CURL *curl_handle);
# 158 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) CURLMcode curl_multi_fdset(CURLM *multi_handle,
                                       fd_set *read_fd_set,
                                       fd_set *write_fd_set,
                                       fd_set *exc_fd_set,
                                       int *max_fd);
# 180 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) CURLMcode curl_multi_perform(CURLM *multi_handle,
                                         int *running_handles);
# 193 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) CURLMcode curl_multi_cleanup(CURLM *multi_handle);
# 223 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) CURLMsg *curl_multi_info_read(CURLM *multi_handle,
                                          int *msgs_in_queue);
# 235 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/multi.h" 3
__attribute__((dllimport)) const char *curl_multi_strerror(CURLMcode);
# 1427 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/curl.h" 2 3
# 9 "test1.c" 2
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/types.h" 1 3
# 10 "test1.c" 2
# 1 "c:/mingw/bin/../lib/gcc/mingw32/3.4.2/../../../../include/curl/easy.h" 1 3
# 11 "test1.c" 2

typedef struct avalist avalist;
struct avalist
{
  int id;
  BITMAP *bmp;
  avalist *next;
};

avalist *avatars = ((void *)0);

BITMAP *get_avatar(int uid)
{
  unsigned char found = 0;
  avalist *cur = avatars;
  while(cur != ((void *)0))
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



    pngtmp = fopen(pngfname, "wb");
    curl_global_init(((1<<0)|(1<<1)));
    curl_handle = curl_easy_init();
    curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
    curl_easy_setopt(curl_handle, CURLOPT_URL, request);
    curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, fwrite);
    curl_easy_setopt(curl_handle, CURLOPT_FILE, (void *)pngtmp);
    curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
    curl_easy_perform(curl_handle);
    curl_easy_cleanup(curl_handle);
    fclose(pngtmp);

    newa = (avalist *)malloc(sizeof(avalist));
    newa->id = uid;
    newa->bmp = load_png(pngfname, ((void *)0));
    newa->next = ((void *)0);

    cur = avatars;
    if(cur)
    {
      while(cur->next != ((void *)0))
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
  if(cur == ((void *)0))
    return;
  while(1)
  {
    next = cur->next;
    destroy_bitmap(cur->bmp);
    free(cur);
    cur = next;
    if(cur == ((void *)0))
      break;
  }
}


void textoutWordWrap_(BITMAP* dst, FONT* font, int x, int y, int w, int h, int col, char* text) {
int height = text_height(font);

char *start = ((void *)0);
char *end = ((void *)0);

static char delim[] = " ";
char *token = ((void *)0);
int curX = x;
int curY = y;
int space = text_length(font, " ");
int len = 0;
int maxX = x + w;
int maxY = y + h;
int getToken = -1;
char oneChar[] = "X";

start= text;
end = strchr(start, '\n');
while (end != ((void *)0)) {
*end='\0';

token = strtok(start, delim);
while (token != ((void *)0)) {
len = text_length(font , token);

getToken = -1;
if (curX + len > maxX) {
if (len > w) {

getToken = 0;

while (curX < maxX && *token) {

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
token = strtok(((void *)0), delim);
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
__builtin_va_start(ap,format);
uvszprintf(buf, sizeof(buf), format, ap);
__builtin_va_end(ap);

textoutWordWrap_(bmp, f, x, y, w, h, color, buf);
}

void do_wrapped_text(BITMAP *dest, FONT *font, int x, int y, int w, int rows, int txtcol, int bgcol, char *txt)
{
  textoutWordWrap(dest, font, x, y, w, (rows - 1) * text_height(font), txtcol, txt);
}

int _mangled_main(int argc, char **argv)
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
  curl_global_init(((1<<0)|(1<<1)));
  curl_handle = curl_easy_init();
  curl_easy_setopt(curl_handle, CURLOPT_HEADER, 0);
  curl_easy_setopt(curl_handle, CURLOPT_URL, request);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, fwrite);
  curl_easy_setopt(curl_handle, CURLOPT_FILE, (void *)rfptmp);
  curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "libcurl-agent/1.0");
  curl_easy_perform(curl_handle);
  curl_easy_cleanup(curl_handle);
  fclose(rfptmp);
# 239 "test1.c"
  install_allegro(0, &(*_errno()), (int (*)(void (*)(void)))atexit);
  install_keyboard();
  set_color_depth(32);
  set_gfx_mode(0, 1024, 768, 0, 0);
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


    clear_bitmap(buffer);
    textprintf_ex(buffer, font, 50, 50, makecol(255,255,255), -1, "Downloading Avatars....");
    textprintf_ex(buffer, font, 70, 70, makecol(255,255,255), -1, "(%d/%d) %d%%", i + 1, num_posts, (int)(((float)(i + 1) / (float)num_posts) * 100));

    rect(buffer, 412, 100, 612, 150, makecol(255,255,255));
    rectfill(buffer, 413, 101, 412 + (2 * (int)(((float)(i + 1) / (float)num_posts) * 100)), 149, makecol(0,0,255));
    blit(buffer, screen, 0, 0, 0, 0, (gfx_driver ? gfx_driver->w : 0), (gfx_driver ? gfx_driver->h : 0));
  }
  clear_bitmap(screen);




  for(i = 0; i < (num_posts < ((gfx_driver ? gfx_driver->w : 0) / 96) ? num_posts : ((gfx_driver ? gfx_driver->w : 0) / 96)); ++i)
  {


    printf("\n%d", i);
    blit(posts[i].avatar, screen, 0, 0, 8, (i * 96) + 14, 80, 80);
    textprintf_ex(screen, font, 8, (i * 96) + 2, makecol(255,255,255), -1, "%s [%d]", posts[i].poster, posts[i].posterid);


    do_wrapped_text(screen, font, 100, ((i * 96) + 2) + text_height(font), (gfx_driver ? gfx_driver->w : 0) - 102, (94 - text_height(font)) / text_height(font), makecol(255,255,255), -1, posts[i].post);
  }

  while(!keypressed())
    ;

  for(i = 0; i < num_posts; ++i)
  {
    free(posts[i].poster);
    free(posts[i].postdate);
    free(posts[i].post);

  }
  free(posts);
  clean_avatars();

  return 0;
}
int __attribute__((__stdcall__)) WinMain(void *hInst, void *hPrev, char *Cmd, int nShow) { return _WinMain((void *)_mangled_main, hInst, hPrev, Cmd, nShow); }
