
struct JoinPoint { 
	void** (*fp) (struct JoinPoint *);
	void ** args;
	int argsCount;
	const char ** argsType;
	 void * (*arg)(int, struct JoinPoint *); 
	 const char * (*argType)(int , struct JoinPoint *); 
	void ** retValue;
	const char * retType;
	const char * funcName ;
	const char * targetName ;
	const char * fileName ;
	const char * kind ;
	void * excep_return ;
};

 struct __UTAC__EXCEPTION {
	void * jumpbuf ;
	unsigned long long int prtValue ;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next; 
	} * cflowfuncs; 
}; 


# 1 "patricia_test.c" 
# 1 "/aop/Graduation-Project-Backup/ACC/acc/patricia/working//" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "patricia_test.c" 
# 31 "patricia_test.c" 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
#line 102 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h"
typedef  __gnuc_va_list va_list; 
# 102 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3 4
# 32 "patricia_test.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 353 "/usr/include/features.h" 2 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3 4
typedef long unsigned int size_t; 
# 34 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int; 
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long; 
#line 36 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t; 
#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t; 
#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t; 
#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t; 
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t; 
#line 43 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t; 
#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t; 
#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t; 
#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t; 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned long int __dev_t; 
#line 125 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t; 
#line 127 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t; 
#line 129 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct {int __val[2]; 
}__fsid_t; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t; 
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t; 
#line 137 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t; 
#line 138 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t; 
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t; 
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t; 
#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t; 
#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void *__timer_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t; 
#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t; 
#line 166 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t; 
#line 170 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t; 
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t; 
#line 175 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t; 
#line 177 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __off64_t __loff_t; 
#line 182 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char *__caddr_t; 
#line 186 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t; 
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE ; 
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE; 
#line 64 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE; 
# 64 "/usr/include/stdio.h" 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 94 "/usr/include/wchar.h" 3 4
typedef struct {int __count; union {unsigned int __wch; char __wchb[4]; 
}__value; 
}__mbstate_t; 
#line 25 "/usr/include/_G_config.h"
typedef struct { __off_t __pos;  __mbstate_t __state; 
}_G_fpos_t; 
#line 30 "/usr/include/_G_config.h"
typedef struct { __off64_t __pos;  __mbstate_t __state; 
}_G_fpos64_t; 
# 21 "/usr/include/_G_config.h" 2 3 4
# 32 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t ; 
#line 144 "/usr/include/libio.h"
struct _IO_FILE ; 
#line 154 "/usr/include/libio.h"
typedef void _IO_lock_t; 
# 154 "/usr/include/libio.h" 3 4
# 177 "/usr/include/libio.h" 3 4
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; 
}; 
#line 186 "/usr/include/libio.h"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
# 245 "/usr/include/libio.h" 3 4
# 293 "/usr/include/libio.h" 3 4
# 312 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; 
}; 
#line 315 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 318 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 320 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 321 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 322 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 338 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 347 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, const char *__buf,  size_t __n); 
#line 355 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 358 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
# 338 "/usr/include/libio.h" 3 4
# 390 "/usr/include/libio.h" 3 4
extern int __underflow( _IO_FILE *); 
#line 391 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *); 
#line 392 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ); 
#line 434 "/usr/include/libio.h"
extern int _IO_getc( _IO_FILE *__fp); 
#line 435 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp); 
#line 436 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 437 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 439 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp); 
#line 445 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 446 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 447 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
# 434 "/usr/include/libio.h" 3 4
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 467 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 468 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ); 
#line 469 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ); 
#line 471 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ); 
#line 472 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ); 
#line 474 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
# 75 "/usr/include/stdio.h" 2 3 4
# 90 "/usr/include/stdio.h" 3 4
typedef  __off_t off_t; 
#line 102 "/usr/include/stdio.h"
typedef  __ssize_t ssize_t; 
#line 110 "/usr/include/stdio.h"
typedef  _G_fpos_t fpos_t; 
# 102 "/usr/include/stdio.h" 3 4
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 168 "/usr/include/stdio.h" 2 3 4
extern struct _IO_FILE *stdin; 
#line 169 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout; 
#line 170 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr; 
#line 178 "/usr/include/stdio.h"
extern int remove(const char *__filename) __attribute__  (( __nothrow__ )) ; 
#line 180 "/usr/include/stdio.h"
extern int rename(const char *__old, const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 186 "/usr/include/stdio.h"
extern int renameat(int __oldfd, const char *__old, int __newfd, const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 195 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 209 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 215 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 
# 209 "/usr/include/stdio.h" 3 4
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam(const char *__dir, const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 237 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 242 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 252 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 252 "/usr/include/stdio.h" 3 4
# 273 "/usr/include/stdio.h" 3 4
extern  FILE *fopen(const char *__restrict __filename, const char *__restrict __modes); 
#line 280 "/usr/include/stdio.h"
extern  FILE *freopen(const char *__restrict __filename, const char *__restrict __modes,  FILE *__restrict __stream); 
# 295 "/usr/include/stdio.h" 3 4
# 306 "/usr/include/stdio.h" 3 4
extern  FILE *fdopen(int __fd, const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 320 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__bufloc,  size_t *__sizeloc) __attribute__  (( __nothrow__ )) ; 
#line 332 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 344 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 347 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 357 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 362 "/usr/include/stdio.h"
extern int printf(const char *__restrict __format, ...); 
#line 365 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 372 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg); 
#line 377 "/usr/include/stdio.h"
extern int vprintf(const char *__restrict __format,  __gnuc_va_list __arg); 
#line 380 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 388 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 392 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
# 319 "/usr/include/stdio.h" 3 4
# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 416 "/usr/include/stdio.h"
extern int dprintf(int __fd, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 426 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 431 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...); 
#line 434 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 443 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf"); 
#line 446 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf"); 
#line 448 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__  (( __nothrow__ )) ; 
# 443 "/usr/include/stdio.h" 3 4
# 473 "/usr/include/stdio.h" 3 4
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 480 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 485 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 498 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 501 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 506 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vsscanf") __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
# 494 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc( FILE *__stream); 
#line 532 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 538 "/usr/include/stdio.h"
extern int getchar(void ); 
#line 550 "/usr/include/stdio.h"
extern int getc_unlocked( FILE *__stream); 
#line 551 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
# 550 "/usr/include/stdio.h" 3 4
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked( FILE *__stream); 
#line 573 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 574 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 580 "/usr/include/stdio.h"
extern int putchar(int __c); 
#line 594 "/usr/include/stdio.h"
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 602 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 603 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 610 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 613 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 623 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 594 "/usr/include/stdio.h" 3 4
# 638 "/usr/include/stdio.h" 3 4
extern char *gets(char *__s) __attribute__  (( __deprecated__ )) ; 
#line 667 "/usr/include/stdio.h"
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 670 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 680 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 689 "/usr/include/stdio.h"
extern int fputs(const char *__restrict __s,  FILE *__restrict __stream); 
#line 695 "/usr/include/stdio.h"
extern int puts(const char *__s); 
#line 702 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 710 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 716 "/usr/include/stdio.h"
extern  size_t fwrite(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
# 665 "/usr/include/stdio.h" 3 4
# 738 "/usr/include/stdio.h" 3 4
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 740 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 749 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 754 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 759 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
#line 773 "/usr/include/stdio.h"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 778 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
# 773 "/usr/include/stdio.h" 3 4
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 803 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, const  fpos_t *__pos); 
# 815 "/usr/include/stdio.h" 3 4
# 826 "/usr/include/stdio.h" 3 4
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 828 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 830 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 835 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 836 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 837 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 846 "/usr/include/stdio.h"
extern void perror(const char *__s); 
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern const char *const sys_errlist[]; 
#line 858 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 863 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 854 "/usr/include/stdio.h" 2 3 4
# 873 "/usr/include/stdio.h" 3 4
extern  FILE *popen(const char *__command, const char *__modes); 
#line 879 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 885 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 913 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 917 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 920 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 913 "/usr/include/stdio.h" 3 4
# 943 "/usr/include/stdio.h" 3 4
# 33 "patricia_test.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 323 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3 4
typedef int wchar_t; 
# 33 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int __bswap_32(unsigned int __bsx)  
# 517 "patricia_test.c"
{
# 519 "patricia_test.c"
unsigned int retValue_acc;




# 525 "patricia_test.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 530 "patricia_test.c"
retValue_acc = __builtin_bswap32(__bsx);
# 532 "patricia_test.c"
return (unsigned int )retValue_acc;
 
# 535 "patricia_test.c"

}

# 539 "patricia_test.c"
return (unsigned int )retValue_acc;

# 542 "patricia_test.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 548 "patricia_test.c"
{
# 550 "patricia_test.c"
__uint64_t retValue_acc;




# 556 "patricia_test.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 561 "patricia_test.c"
retValue_acc = __builtin_bswap64(__bsx);
# 563 "patricia_test.c"
return (__uint64_t )retValue_acc;
 
# 566 "patricia_test.c"

}

# 570 "patricia_test.c"
return (__uint64_t )retValue_acc;

# 573 "patricia_test.c"

}
 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; 
}__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; 
}__wait_stopped; 
}; 
# 43 "/usr/include/stdlib.h" 2 3 4
# 71 "/usr/include/stdlib.h" 3 4
typedef union {union wait *__uptr; int *__iptr; 
}__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 101 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; 
}div_t; 
#line 109 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; 
}ldiv_t; 
#line 121 "/usr/include/stdlib.h"
 __extension__ typedef struct {long long int quot; long long int rem; 
}lldiv_t; 
# 95 "/usr/include/stdlib.h" 3 4
# 139 "/usr/include/stdlib.h" 3 4
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 
#line 145 "/usr/include/stdlib.h"
extern double atof(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 148 "/usr/include/stdlib.h"
extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 151 "/usr/include/stdlib.h"
extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 158 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 166 "/usr/include/stdlib.h"
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 173 "/usr/include/stdlib.h"
extern float strtof(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 177 "/usr/include/stdlib.h"
extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/stdlib.h"
extern long int strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 189 "/usr/include/stdlib.h"
extern unsigned long int strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 197 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 202 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 211 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 216 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/stdlib.h"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/stdlib.h"
extern long int a64l(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 305 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_short u_short; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_int u_int; 
#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_long u_long; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __quad_t quad_t; 
#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 44 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __loff_t loff_t; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __ino_t ino_t; 
#line 60 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __dev_t dev_t; 
#line 65 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __gid_t gid_t; 
#line 70 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __mode_t mode_t; 
#line 75 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 80 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __uid_t uid_t; 
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __pid_t pid_t; 
#line 104 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __id_t id_t; 
#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 116 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 122 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __key_t key_t; 
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 75 "/usr/include/time.h"
typedef  __time_t time_t; 
# 73 "/usr/include/time.h" 3 4
# 91 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 103 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 103 "/usr/include/time.h" 3 4
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort; 
#line 152 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint; 
#line 194 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 197 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 202 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 203 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 205 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; 
}__sigset_t; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __sigset_t sigset_t; 
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 124 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec;  __syscall_slong_t tv_nsec; 
}; 
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; 
}; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __suseconds_t suseconds_t; 
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask; 
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct { __fd_mask __fds_bits[1024 / (8 * ((int )sizeof ( __fd_mask )))]; 
}fd_set; 
#line 82 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __fd_mask fd_mask; 
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 109 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 122 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t {char __size[56]; long int __align; 
}; 
#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef struct __pthread_internal_list {struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; 
}__pthread_list_t; 
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision;  __pthread_list_t __list; 
}__data; char __size[40]; long int __align; 
}pthread_mutex_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_mutexattr_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; 
}__data; char __size[48];  __extension__ long long int __align; 
}pthread_cond_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_condattr_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 213 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; int __writer; int __shared; unsigned long int __pad1; unsigned long int __pad2; unsigned int __flags; 
}__data; char __size[56]; long int __align; 
}pthread_rwlock_t; 
#line 219 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; 
}pthread_rwlockattr_t; 
#line 225 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[32]; long int __align; 
}pthread_barrier_t; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_barrierattr_t; 
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 321 "/usr/include/stdlib.h" 2 3 4
extern long int random(void ) __attribute__  (( __nothrow__ )) ; 
#line 324 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 335 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 352 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; 
}; 
#line 355 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 358 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 363 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 367 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 374 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ )) ; 
#line 376 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 381 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 
#line 389 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 390 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 393 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 395 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 398 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 400 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 403 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 
#line 405 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 406 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 420 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init;  __extension__ unsigned long long int __a; 
}; 
#line 424 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 427 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 432 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 436 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 441 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 445 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 449 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 452 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 456 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 466 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 481 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 483 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 488 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 32 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 498 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 504 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 493 "/usr/include/stdlib.h" 2 3 4
# 515 "/usr/include/stdlib.h" 3 4
extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 536 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 557 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 564 "/usr/include/stdlib.h"
extern char *getenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 530 "/usr/include/stdlib.h" 3 4
# 578 "/usr/include/stdlib.h" 3 4
extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 585 "/usr/include/stdlib.h"
extern int setenv(const char *__name, const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 588 "/usr/include/stdlib.h"
extern int unsetenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 595 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 
#line 606 "/usr/include/stdlib.h"
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 606 "/usr/include/stdlib.h" 3 4
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 642 "/usr/include/stdlib.h"
extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 642 "/usr/include/stdlib.h" 3 4
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 717 "/usr/include/stdlib.h"
extern int system(const char *__command); 
# 712 "/usr/include/stdlib.h" 3 4
# 735 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 742 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 757 "/usr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 766 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
# 752 "/usr/include/stdlib.h" 3 4
# 775 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 776 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 781 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 790 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 792 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 799 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 813 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 819 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 825 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 832 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 837 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 844 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 847 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 852 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 856 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 863 "/usr/include/stdlib.h"
extern int mblen(const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 867 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 870 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 
#line 875 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 879 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 888 "/usr/include/stdlib.h"
extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 812 "/usr/include/stdlib.h" 3 4
# 902 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 952 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 951 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 34 "patricia_test.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 47 "/usr/include/string.h" 3 4
extern void *memcpy(void *__restrict __dest, const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 51 "/usr/include/string.h"
extern void *memmove(void *__dest, const void *__src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 60 "/usr/include/string.h"
extern void *memccpy(void *__restrict __dest, const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 66 "/usr/include/string.h"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 70 "/usr/include/string.h"
extern int memcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 97 "/usr/include/string.h"
extern void *memchr(const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 96 "/usr/include/string.h" 3 4
# 130 "/usr/include/string.h" 3 4
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 134 "/usr/include/string.h"
extern char *strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 138 "/usr/include/string.h"
extern char *strcat(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 141 "/usr/include/string.h"
extern char *strncat(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 145 "/usr/include/string.h"
extern int strcmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 148 "/usr/include/string.h"
extern int strncmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 152 "/usr/include/string.h"
extern int strcoll(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 156 "/usr/include/string.h"
extern  size_t strxfrm(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 1 "/usr/include/xlocale.h" 1 3 4
# 39 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct {struct __locale_data *__locales[13]; const unsigned short int *__ctype_b; const int *__ctype_tolower; const int *__ctype_toupper; const char *__names[13]; 
}*__locale_t; 
#line 42 "/usr/include/xlocale.h"
typedef  __locale_t locale_t; 
#line 167 "/usr/include/string.h"
extern int strcoll_l(const char *__s1, const char *__s2,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 170 "/usr/include/string.h"
extern  size_t strxfrm_l(char *__dest, const char *__src,  size_t __n,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 177 "/usr/include/string.h"
extern char *strdup(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/string.h"
extern char *strndup(const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 164 "/usr/include/string.h" 2 3 4
# 211 "/usr/include/string.h" 3 4
# 237 "/usr/include/string.h" 3 4
extern char *strchr(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 264 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 263 "/usr/include/string.h" 3 4
# 286 "/usr/include/string.h" 3 4
extern  size_t strcspn(const char *__s, const char *__reject) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 290 "/usr/include/string.h"
extern  size_t strspn(const char *__s, const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 316 "/usr/include/string.h"
extern char *strpbrk(const char *__s, const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 315 "/usr/include/string.h" 3 4
# 343 "/usr/include/string.h" 3 4
extern char *strstr(const char *__haystack, const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 349 "/usr/include/string.h"
extern char *strtok(char *__restrict __s, const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 357 "/usr/include/string.h"
extern char *__strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 361 "/usr/include/string.h"
extern char *strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 400 "/usr/include/string.h"
extern  size_t strlen(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 407 "/usr/include/string.h"
extern  size_t strnlen(const char *__string,  size_t __maxlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 413 "/usr/include/string.h"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ )) ; 
# 397 "/usr/include/string.h" 3 4
# 427 "/usr/include/string.h" 3 4
extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 445 "/usr/include/string.h"
extern char *strerror_l(int __errnum,  __locale_t __l) __attribute__  (( __nothrow__ )) ; 
#line 451 "/usr/include/string.h"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 456 "/usr/include/string.h"
extern void bcopy(const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 459 "/usr/include/string.h"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 463 "/usr/include/string.h"
extern int bcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 445 "/usr/include/string.h" 3 4
# 490 "/usr/include/string.h" 3 4
extern char *index(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 518 "/usr/include/string.h"
extern char *rindex(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 523 "/usr/include/string.h"
extern int ffs(int __i) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 517 "/usr/include/string.h" 3 4
# 535 "/usr/include/string.h" 3 4
extern int strcasecmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 539 "/usr/include/string.h"
extern int strncasecmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 559 "/usr/include/string.h"
extern char *strsep(char **__restrict __stringp, const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 564 "/usr/include/string.h"
extern char *strsignal(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 568 "/usr/include/string.h"
extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 570 "/usr/include/string.h"
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 576 "/usr/include/string.h"
extern char *__stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 579 "/usr/include/string.h"
extern char *stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 557 "/usr/include/string.h" 3 4
# 644 "/usr/include/string.h" 3 4
# 35 "patricia_test.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 71 "/usr/include/assert.h" 3 4
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 76 "/usr/include/assert.h"
extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 82 "/usr/include/assert.h"
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 36 "patricia_test.c" 2
# 1 "/usr/include/err.h" 1 3 4
# 35 "/usr/include/err.h" 3 4
extern void warn(const char *__format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 37 "/usr/include/err.h"
extern void vwarn(const char *__format,  __gnuc_va_list ) __attribute__  (( __format__ ( __printf__, 1, 0 )  )) ; 
#line 41 "/usr/include/err.h"
extern void warnx(const char *__format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 43 "/usr/include/err.h"
extern void vwarnx(const char *__format,  __gnuc_va_list ) __attribute__  (( __format__ ( __printf__, 1, 0 )  )) ; 
#line 47 "/usr/include/err.h"
extern void err(int __status, const char *__format, ...) __attribute__  (( __noreturn__ , __format__ ( __printf__, 2, 3 )  )) ; 
#line 49 "/usr/include/err.h"
extern void verr(int __status, const char *__format,  __gnuc_va_list ) __attribute__  (( __noreturn__ , __format__ ( __printf__, 2, 0 )  )) ; 
#line 51 "/usr/include/err.h"
extern void errx(int __status, const char *__format, ...) __attribute__  (( __noreturn__ , __format__ ( __printf__, 2, 3 )  )) ; 
#line 53 "/usr/include/err.h"
extern void verrx(int __status, const char *,  __gnuc_va_list ) __attribute__  (( __noreturn__ , __format__ ( __printf__, 2, 0 )  )) ; 
# 37 "patricia_test.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 36 "/usr/include/errno.h" 2 3 4
# 58 "/usr/include/errno.h" 3 4
# 38 "patricia_test.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 47 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock {short int l_type; short int l_whence;  __off_t l_start;  __off_t l_len;  __pid_t l_pid; 
}; 
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 341 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 415 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 67 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 68 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat { __dev_t st_dev;  __ino_t st_ino;  __nlink_t st_nlink;  __mode_t st_mode;  __uid_t st_uid;  __gid_t st_gid; int __pad0;  __dev_t st_rdev;  __off_t st_size;  __blksize_t st_blksize;  __blkcnt_t st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim;  __syscall_slong_t __glibc_reserved[3]; 
}; 
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl(int __fd, int __cmd, ...); 
#line 146 "/usr/include/fcntl.h"
extern int open(const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 146 "/usr/include/fcntl.h" 3 4
# 171 "/usr/include/fcntl.h" 3 4
extern int openat(int __fd, const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 192 "/usr/include/fcntl.h"
extern int creat(const char *__file,  mode_t __mode) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 192 "/usr/include/fcntl.h" 3 4
# 221 "/usr/include/fcntl.h" 3 4
extern int lockf(int __fd, int __cmd,  off_t __len); 
#line 239 "/usr/include/fcntl.h"
extern int posix_fadvise(int __fd,  off_t __offset,  off_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
# 238 "/usr/include/fcntl.h" 3 4
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate(int __fd,  off_t __offset,  off_t __len); 
# 282 "/usr/include/fcntl.h" 3 4
# 39 "patricia_test.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4
# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef  __useconds_t useconds_t; 
#line 267 "/usr/include/unistd.h"
typedef  __intptr_t intptr_t; 
#line 274 "/usr/include/unistd.h"
typedef  __socklen_t socklen_t; 
# 267 "/usr/include/unistd.h" 3 4
# 287 "/usr/include/unistd.h" 3 4
extern int access(const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/unistd.h"
extern int faccessat(int __fd, const char *__file, int __type, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 304 "/usr/include/unistd.h" 3 4
# 334 "/usr/include/unistd.h" 3 4
extern  __off_t lseek(int __fd,  __off_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 353 "/usr/include/unistd.h"
extern int close(int __fd); 
#line 360 "/usr/include/unistd.h"
extern  ssize_t read(int __fd, void *__buf,  size_t __nbytes); 
#line 366 "/usr/include/unistd.h"
extern  ssize_t write(int __fd, const void *__buf,  size_t __n); 
# 353 "/usr/include/unistd.h" 3 4
# 377 "/usr/include/unistd.h" 3 4
extern  ssize_t pread(int __fd, void *__buf,  size_t __nbytes,  __off_t __offset); 
#line 385 "/usr/include/unistd.h"
extern  ssize_t pwrite(int __fd, const void *__buf,  size_t __n,  __off_t __offset); 
#line 417 "/usr/include/unistd.h"
extern int pipe(int __pipedes[2]) __attribute__  (( __nothrow__ )) ; 
# 417 "/usr/include/unistd.h" 3 4
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm(unsigned int __seconds) __attribute__  (( __nothrow__ )) ; 
#line 444 "/usr/include/unistd.h"
extern unsigned int sleep(unsigned int __seconds); 
#line 453 "/usr/include/unistd.h"
extern  __useconds_t ualarm( __useconds_t __value,  __useconds_t __interval) __attribute__  (( __nothrow__ )) ; 
#line 460 "/usr/include/unistd.h"
extern int usleep( __useconds_t __useconds); 
# 444 "/usr/include/unistd.h" 3 4
# 469 "/usr/include/unistd.h" 3 4
extern int pause(void ); 
#line 474 "/usr/include/unistd.h"
extern int chown(const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 478 "/usr/include/unistd.h"
extern int fchown(int __fd,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ )) ; 
#line 484 "/usr/include/unistd.h"
extern int lchown(const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 493 "/usr/include/unistd.h"
extern int fchownat(int __fd, const char *__file,  __uid_t __owner,  __gid_t __group, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 497 "/usr/include/unistd.h"
extern int chdir(const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 501 "/usr/include/unistd.h"
extern int fchdir(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 511 "/usr/include/unistd.h"
extern char *getcwd(char *__buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
# 511 "/usr/include/unistd.h" 3 4
# 526 "/usr/include/unistd.h" 3 4
extern char *getwd(char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ )) ; 
#line 531 "/usr/include/unistd.h"
extern int dup(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 534 "/usr/include/unistd.h"
extern int dup2(int __fd, int __fd2) __attribute__  (( __nothrow__ )) ; 
#line 543 "/usr/include/unistd.h"
extern char **__environ; 
#line 552 "/usr/include/unistd.h"
extern int execve(const char *__path, char *const __argv[], char *const __envp[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 558 "/usr/include/unistd.h"
extern int fexecve(int __fd, char *const __argv[], char *const __envp[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 564 "/usr/include/unistd.h"
extern int execv(const char *__path, char *const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 569 "/usr/include/unistd.h"
extern int execle(const char *__path, const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 574 "/usr/include/unistd.h"
extern int execl(const char *__path, const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 579 "/usr/include/unistd.h"
extern int execvp(const char *__file, char *const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 585 "/usr/include/unistd.h"
extern int execlp(const char *__file, const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 543 "/usr/include/unistd.h" 3 4
# 598 "/usr/include/unistd.h" 3 4
extern int nice(int __inc) __attribute__  (( __nothrow__ )) ; 
#line 603 "/usr/include/unistd.h"
extern void _exit(int __status) __attribute__  (( __noreturn__ )) ; 
# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 68 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum {_PC_LINK_MAX,_PC_MAX_CANON,_PC_MAX_INPUT,_PC_NAME_MAX,_PC_PATH_MAX,_PC_PIPE_BUF,_PC_CHOWN_RESTRICTED,_PC_NO_TRUNC,_PC_VDISABLE,_PC_SYNC_IO,_PC_ASYNC_IO,_PC_PRIO_IO,_PC_SOCK_MAXBUF,_PC_FILESIZEBITS,_PC_REC_INCR_XFER_SIZE,_PC_REC_MAX_XFER_SIZE,_PC_REC_MIN_XFER_SIZE,_PC_REC_XFER_ALIGN,_PC_ALLOC_SIZE_MIN,_PC_SYMLINK_MAX,_PC_2_SYMLINKS}; 
#line 530 "/usr/include/x86_64-linux-gnu/bits/confname.h"
enum {_SC_ARG_MAX,_SC_CHILD_MAX,_SC_CLK_TCK,_SC_NGROUPS_MAX,_SC_OPEN_MAX,_SC_STREAM_MAX,_SC_TZNAME_MAX,_SC_JOB_CONTROL,_SC_SAVED_IDS,_SC_REALTIME_SIGNALS,_SC_PRIORITY_SCHEDULING,_SC_TIMERS,_SC_ASYNCHRONOUS_IO,_SC_PRIORITIZED_IO,_SC_SYNCHRONIZED_IO,_SC_FSYNC,_SC_MAPPED_FILES,_SC_MEMLOCK,_SC_MEMLOCK_RANGE,_SC_MEMORY_PROTECTION,_SC_MESSAGE_PASSING,_SC_SEMAPHORES,_SC_SHARED_MEMORY_OBJECTS,_SC_AIO_LISTIO_MAX,_SC_AIO_MAX,_SC_AIO_PRIO_DELTA_MAX,_SC_DELAYTIMER_MAX,_SC_MQ_OPEN_MAX,_SC_MQ_PRIO_MAX,_SC_VERSION,_SC_PAGESIZE,_SC_RTSIG_MAX,_SC_SEM_NSEMS_MAX,_SC_SEM_VALUE_MAX,_SC_SIGQUEUE_MAX,_SC_TIMER_MAX,_SC_BC_BASE_MAX,_SC_BC_DIM_MAX,_SC_BC_SCALE_MAX,_SC_BC_STRING_MAX,_SC_COLL_WEIGHTS_MAX,_SC_EQUIV_CLASS_MAX,_SC_EXPR_NEST_MAX,_SC_LINE_MAX,_SC_RE_DUP_MAX,_SC_CHARCLASS_NAME_MAX,_SC_2_VERSION,_SC_2_C_BIND,_SC_2_C_DEV,_SC_2_FORT_DEV,_SC_2_FORT_RUN,_SC_2_SW_DEV,_SC_2_LOCALEDEF,_SC_PII,_SC_PII_XTI,_SC_PII_SOCKET,_SC_PII_INTERNET,_SC_PII_OSI,_SC_POLL,_SC_SELECT,_SC_UIO_MAXIOV,_SC_IOV_MAX=_SC_UIO_MAXIOV,_SC_PII_INTERNET_STREAM,_SC_PII_INTERNET_DGRAM,_SC_PII_OSI_COTS,_SC_PII_OSI_CLTS,_SC_PII_OSI_M,_SC_T_IOV_MAX,_SC_THREADS,_SC_THREAD_SAFE_FUNCTIONS,_SC_GETGR_R_SIZE_MAX,_SC_GETPW_R_SIZE_MAX,_SC_LOGIN_NAME_MAX,_SC_TTY_NAME_MAX,_SC_THREAD_DESTRUCTOR_ITERATIONS,_SC_THREAD_KEYS_MAX,_SC_THREAD_STACK_MIN,_SC_THREAD_THREADS_MAX,_SC_THREAD_ATTR_STACKADDR,_SC_THREAD_ATTR_STACKSIZE,_SC_THREAD_PRIORITY_SCHEDULING,_SC_THREAD_PRIO_INHERIT,_SC_THREAD_PRIO_PROTECT,_SC_THREAD_PROCESS_SHARED,_SC_NPROCESSORS_CONF,_SC_NPROCESSORS_ONLN,_SC_PHYS_PAGES,_SC_AVPHYS_PAGES,_SC_ATEXIT_MAX,_SC_PASS_MAX,_SC_XOPEN_VERSION,_SC_XOPEN_XCU_VERSION,_SC_XOPEN_UNIX,_SC_XOPEN_CRYPT,_SC_XOPEN_ENH_I18N,_SC_XOPEN_SHM,_SC_2_CHAR_TERM,_SC_2_C_VERSION,_SC_2_UPE,_SC_XOPEN_XPG2,_SC_XOPEN_XPG3,_SC_XOPEN_XPG4,_SC_CHAR_BIT,_SC_CHAR_MAX,_SC_CHAR_MIN,_SC_INT_MAX,_SC_INT_MIN,_SC_LONG_BIT,_SC_WORD_BIT,_SC_MB_LEN_MAX,_SC_NZERO,_SC_SSIZE_MAX,_SC_SCHAR_MAX,_SC_SCHAR_MIN,_SC_SHRT_MAX,_SC_SHRT_MIN,_SC_UCHAR_MAX,_SC_UINT_MAX,_SC_ULONG_MAX,_SC_USHRT_MAX,_SC_NL_ARGMAX,_SC_NL_LANGMAX,_SC_NL_MSGMAX,_SC_NL_NMAX,_SC_NL_SETMAX,_SC_NL_TEXTMAX,_SC_XBS5_ILP32_OFF32,_SC_XBS5_ILP32_OFFBIG,_SC_XBS5_LP64_OFF64,_SC_XBS5_LPBIG_OFFBIG,_SC_XOPEN_LEGACY,_SC_XOPEN_REALTIME,_SC_XOPEN_REALTIME_THREADS,_SC_ADVISORY_INFO,_SC_BARRIERS,_SC_BASE,_SC_C_LANG_SUPPORT,_SC_C_LANG_SUPPORT_R,_SC_CLOCK_SELECTION,_SC_CPUTIME,_SC_THREAD_CPUTIME,_SC_DEVICE_IO,_SC_DEVICE_SPECIFIC,_SC_DEVICE_SPECIFIC_R,_SC_FD_MGMT,_SC_FIFO,_SC_PIPE,_SC_FILE_ATTRIBUTES,_SC_FILE_LOCKING,_SC_FILE_SYSTEM,_SC_MONOTONIC_CLOCK,_SC_MULTI_PROCESS,_SC_SINGLE_PROCESS,_SC_NETWORKING,_SC_READER_WRITER_LOCKS,_SC_SPIN_LOCKS,_SC_REGEXP,_SC_REGEX_VERSION,_SC_SHELL,_SC_SIGNALS,_SC_SPAWN,_SC_SPORADIC_SERVER,_SC_THREAD_SPORADIC_SERVER,_SC_SYSTEM_DATABASE,_SC_SYSTEM_DATABASE_R,_SC_TIMEOUTS,_SC_TYPED_MEMORY_OBJECTS,_SC_USER_GROUPS,_SC_USER_GROUPS_R,_SC_2_PBS,_SC_2_PBS_ACCOUNTING,_SC_2_PBS_LOCATE,_SC_2_PBS_MESSAGE,_SC_2_PBS_TRACK,_SC_SYMLOOP_MAX,_SC_STREAMS,_SC_2_PBS_CHECKPOINT,_SC_V6_ILP32_OFF32,_SC_V6_ILP32_OFFBIG,_SC_V6_LP64_OFF64,_SC_V6_LPBIG_OFFBIG,_SC_HOST_NAME_MAX,_SC_TRACE,_SC_TRACE_EVENT_FILTER,_SC_TRACE_INHERIT,_SC_TRACE_LOG,_SC_LEVEL1_ICACHE_SIZE,_SC_LEVEL1_ICACHE_ASSOC,_SC_LEVEL1_ICACHE_LINESIZE,_SC_LEVEL1_DCACHE_SIZE,_SC_LEVEL1_DCACHE_ASSOC,_SC_LEVEL1_DCACHE_LINESIZE,_SC_LEVEL2_CACHE_SIZE,_SC_LEVEL2_CACHE_ASSOC,_SC_LEVEL2_CACHE_LINESIZE,_SC_LEVEL3_CACHE_SIZE,_SC_LEVEL3_CACHE_ASSOC,_SC_LEVEL3_CACHE_LINESIZE,_SC_LEVEL4_CACHE_SIZE,_SC_LEVEL4_CACHE_ASSOC,_SC_LEVEL4_CACHE_LINESIZE,_SC_IPV6=_SC_LEVEL1_ICACHE_SIZE + 50,_SC_RAW_SOCKETS,_SC_V7_ILP32_OFF32,_SC_V7_ILP32_OFFBIG,_SC_V7_LP64_OFF64,_SC_V7_LPBIG_OFFBIG,_SC_SS_REPL_MAX,_SC_TRACE_EVENT_NAME_MAX,_SC_TRACE_NAME_MAX,_SC_TRACE_SYS_MAX,_SC_TRACE_USER_EVENT_MAX,_SC_XOPEN_STREAMS,_SC_THREAD_ROBUST_PRIO_INHERIT,_SC_THREAD_ROBUST_PRIO_PROTECT}; 
#line 675 "/usr/include/x86_64-linux-gnu/bits/confname.h"
enum {_CS_PATH,_CS_V6_WIDTH_RESTRICTED_ENVS,_CS_GNU_LIBC_VERSION,_CS_GNU_LIBPTHREAD_VERSION,_CS_V5_WIDTH_RESTRICTED_ENVS,_CS_V7_WIDTH_RESTRICTED_ENVS,_CS_LFS_CFLAGS=1000,_CS_LFS_LDFLAGS,_CS_LFS_LIBS,_CS_LFS_LINTFLAGS,_CS_LFS64_CFLAGS,_CS_LFS64_LDFLAGS,_CS_LFS64_LIBS,_CS_LFS64_LINTFLAGS,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,_CS_XBS5_ILP32_OFF32_LDFLAGS,_CS_XBS5_ILP32_OFF32_LIBS,_CS_XBS5_ILP32_OFF32_LINTFLAGS,_CS_XBS5_ILP32_OFFBIG_CFLAGS,_CS_XBS5_ILP32_OFFBIG_LDFLAGS,_CS_XBS5_ILP32_OFFBIG_LIBS,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,_CS_XBS5_LP64_OFF64_CFLAGS,_CS_XBS5_LP64_OFF64_LDFLAGS,_CS_XBS5_LP64_OFF64_LIBS,_CS_XBS5_LP64_OFF64_LINTFLAGS,_CS_XBS5_LPBIG_OFFBIG_CFLAGS,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,_CS_XBS5_LPBIG_OFFBIG_LIBS,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,_CS_POSIX_V6_ILP32_OFF32_CFLAGS,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,_CS_POSIX_V6_ILP32_OFF32_LIBS,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LIBS,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,_CS_POSIX_V6_LP64_OFF64_CFLAGS,_CS_POSIX_V6_LP64_OFF64_LDFLAGS,_CS_POSIX_V6_LP64_OFF64_LIBS,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,_CS_POSIX_V7_ILP32_OFF32_CFLAGS,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS,_CS_POSIX_V7_ILP32_OFF32_LIBS,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,_CS_POSIX_V7_ILP32_OFFBIG_LIBS,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,_CS_POSIX_V7_LP64_OFF64_CFLAGS,_CS_POSIX_V7_LP64_OFF64_LDFLAGS,_CS_POSIX_V7_LP64_OFF64_LIBS,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,_CS_V6_ENV,_CS_V7_ENV}; 
#line 613 "/usr/include/unistd.h"
extern long int pathconf(const char *__path, int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 616 "/usr/include/unistd.h"
extern long int fpathconf(int __fd, int __name) __attribute__  (( __nothrow__ )) ; 
#line 619 "/usr/include/unistd.h"
extern long int sysconf(int __name) __attribute__  (( __nothrow__ )) ; 
#line 623 "/usr/include/unistd.h"
extern  size_t confstr(int __name, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 628 "/usr/include/unistd.h"
extern  __pid_t getpid(void ) __attribute__  (( __nothrow__ )) ; 
#line 631 "/usr/include/unistd.h"
extern  __pid_t getppid(void ) __attribute__  (( __nothrow__ )) ; 
#line 634 "/usr/include/unistd.h"
extern  __pid_t getpgrp(void ) __attribute__  (( __nothrow__ )) ; 
#line 637 "/usr/include/unistd.h"
extern  __pid_t __getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 639 "/usr/include/unistd.h"
extern  __pid_t getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 646 "/usr/include/unistd.h"
extern int setpgid( __pid_t __pid,  __pid_t __pgid) __attribute__  (( __nothrow__ )) ; 
# 610 "/usr/include/unistd.h" 2 3 4
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp(void ) __attribute__  (( __nothrow__ )) ; 
#line 667 "/usr/include/unistd.h"
extern  __pid_t setsid(void ) __attribute__  (( __nothrow__ )) ; 
#line 671 "/usr/include/unistd.h"
extern  __pid_t getsid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 675 "/usr/include/unistd.h"
extern  __uid_t getuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 678 "/usr/include/unistd.h"
extern  __uid_t geteuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 681 "/usr/include/unistd.h"
extern  __gid_t getgid(void ) __attribute__  (( __nothrow__ )) ; 
#line 684 "/usr/include/unistd.h"
extern  __gid_t getegid(void ) __attribute__  (( __nothrow__ )) ; 
#line 689 "/usr/include/unistd.h"
extern int getgroups(int __size,  __gid_t __list[]) __attribute__  (( __nothrow__ )) ; 
#line 700 "/usr/include/unistd.h"
extern int setuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 705 "/usr/include/unistd.h"
extern int setreuid( __uid_t __ruid,  __uid_t __euid) __attribute__  (( __nothrow__ )) ; 
#line 710 "/usr/include/unistd.h"
extern int seteuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 717 "/usr/include/unistd.h"
extern int setgid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 722 "/usr/include/unistd.h"
extern int setregid( __gid_t __rgid,  __gid_t __egid) __attribute__  (( __nothrow__ )) ; 
#line 727 "/usr/include/unistd.h"
extern int setegid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
# 700 "/usr/include/unistd.h" 3 4
# 756 "/usr/include/unistd.h" 3 4
extern  __pid_t fork(void ) __attribute__  (( __nothrow__ )) ; 
#line 764 "/usr/include/unistd.h"
extern  __pid_t vfork(void ) __attribute__  (( __nothrow__ )) ; 
#line 770 "/usr/include/unistd.h"
extern char *ttyname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 775 "/usr/include/unistd.h"
extern int ttyname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 779 "/usr/include/unistd.h"
extern int isatty(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 785 "/usr/include/unistd.h"
extern int ttyslot(void ) __attribute__  (( __nothrow__ )) ; 
#line 791 "/usr/include/unistd.h"
extern int link(const char *__from, const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 798 "/usr/include/unistd.h"
extern int linkat(int __fromfd, const char *__from, int __tofd, const char *__to, int __flags) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 804 "/usr/include/unistd.h"
extern int symlink(const char *__from, const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 811 "/usr/include/unistd.h"
extern  ssize_t readlink(const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 817 "/usr/include/unistd.h"
extern int symlinkat(const char *__from, int __tofd, const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 822 "/usr/include/unistd.h"
extern  ssize_t readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 826 "/usr/include/unistd.h"
extern int unlink(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 831 "/usr/include/unistd.h"
extern int unlinkat(int __fd, const char *__name, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 835 "/usr/include/unistd.h"
extern int rmdir(const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 839 "/usr/include/unistd.h"
extern  __pid_t tcgetpgrp(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 842 "/usr/include/unistd.h"
extern int tcsetpgrp(int __fd,  __pid_t __pgrp_id) __attribute__  (( __nothrow__ )) ; 
#line 849 "/usr/include/unistd.h"
extern char *getlogin(void ); 
#line 857 "/usr/include/unistd.h"
extern int getlogin_r(char *__name,  size_t __name_len) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 862 "/usr/include/unistd.h"
extern int setlogin(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg; 
#line 71 "/usr/include/getopt.h"
extern int optind; 
#line 76 "/usr/include/getopt.h"
extern int opterr; 
#line 80 "/usr/include/getopt.h"
extern int optopt; 
# 71 "/usr/include/getopt.h" 3 4
# 151 "/usr/include/getopt.h" 3 4
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__  (( __nothrow__ )) ; 
#line 879 "/usr/include/unistd.h"
extern int gethostname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 887 "/usr/include/unistd.h"
extern int sethostname(const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 891 "/usr/include/unistd.h"
extern int sethostid(long int __id) __attribute__  (( __nothrow__ )) ; 
#line 898 "/usr/include/unistd.h"
extern int getdomainname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 900 "/usr/include/unistd.h"
extern int setdomainname(const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 906 "/usr/include/unistd.h"
extern int vhangup(void ) __attribute__  (( __nothrow__ )) ; 
#line 909 "/usr/include/unistd.h"
extern int revoke(const char *__file) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 919 "/usr/include/unistd.h"
extern int profil(unsigned short int *__sample_buffer,  size_t __size,  size_t __offset, unsigned int __scale) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 925 "/usr/include/unistd.h"
extern int acct(const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 929 "/usr/include/unistd.h"
extern char *getusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 930 "/usr/include/unistd.h"
extern void endusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 931 "/usr/include/unistd.h"
extern void setusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 937 "/usr/include/unistd.h"
extern int daemon(int __nochdir, int __noclose) __attribute__  (( __nothrow__ )) ; 
#line 944 "/usr/include/unistd.h"
extern int chroot(const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 948 "/usr/include/unistd.h"
extern char *getpass(const char *__prompt) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 956 "/usr/include/unistd.h"
extern int fsync(int __fd); 
# 872 "/usr/include/unistd.h" 2 3 4
# 969 "/usr/include/unistd.h" 3 4
extern long int gethostid(void ); 
#line 972 "/usr/include/unistd.h"
extern void sync(void ) __attribute__  (( __nothrow__ )) ; 
#line 978 "/usr/include/unistd.h"
extern int getpagesize(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 983 "/usr/include/unistd.h"
extern int getdtablesize(void ) __attribute__  (( __nothrow__ )) ; 
#line 994 "/usr/include/unistd.h"
extern int truncate(const char *__file,  __off_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 993 "/usr/include/unistd.h" 3 4
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate(int __fd,  __off_t __length) __attribute__  (( __nothrow__ )) ; 
#line 1037 "/usr/include/unistd.h"
extern int brk(void *__addr) __attribute__  (( __nothrow__ )) ; 
#line 1043 "/usr/include/unistd.h"
extern void *sbrk( intptr_t __delta) __attribute__  (( __nothrow__ )) ; 
# 1037 "/usr/include/unistd.h" 3 4
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall(long int __sysno, ...) __attribute__  (( __nothrow__ )) ; 
#line 1112 "/usr/include/unistd.h"
extern int fdatasync(int __fildes); 
# 1112 "/usr/include/unistd.h" 3 4
# 1151 "/usr/include/unistd.h" 3 4
# 40 "patricia_test.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/socket.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/uio.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 47 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
struct iovec {void *iov_base;  size_t iov_len; 
}; 
# 29 "/usr/include/x86_64-linux-gnu/sys/uio.h" 2 3 4
# 40 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern  ssize_t readv(int __fd, const struct iovec *__iovec, int __count); 
#line 51 "/usr/include/x86_64-linux-gnu/sys/uio.h"
extern  ssize_t writev(int __fd, const struct iovec *__iovec, int __count); 
# 50 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 66 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern  ssize_t preadv(int __fd, const struct iovec *__iovec, int __count,  __off_t __offset); 
#line 78 "/usr/include/x86_64-linux-gnu/sys/uio.h"
extern  ssize_t pwritev(int __fd, const struct iovec *__iovec, int __count,  __off_t __offset); 
# 77 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 120 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 3 4
enum __socket_type {SOCK_STREAM=1,SOCK_DGRAM=2,SOCK_RAW=3,SOCK_RDM=4,SOCK_SEQPACKET=5,SOCK_DCCP=6,SOCK_PACKET=10,SOCK_CLOEXEC=02000000,SOCK_NONBLOCK=00004000}; 
# 39 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct sockaddr { sa_family_t sa_family; char sa_data[14]; 
}; 
# 147 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 167 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct sockaddr_storage { sa_family_t ss_family; unsigned long int __ss_align; char __ss_padding[(128 - (2 * sizeof (unsigned long int )))]; 
}; 
#line 219 "/usr/include/x86_64-linux-gnu/bits/socket.h"
enum {MSG_OOB=0x01,MSG_PEEK=0x02,MSG_DONTROUTE=0x04,MSG_CTRUNC=0x08,MSG_PROXY=0x10,MSG_TRUNC=0x20,MSG_DONTWAIT=0x40,MSG_EOR=0x80,MSG_WAITALL=0x100,MSG_FIN=0x200,MSG_SYN=0x400,MSG_CONFIRM=0x800,MSG_RST=0x1000,MSG_ERRQUEUE=0x2000,MSG_NOSIGNAL=0x4000,MSG_MORE=0x8000,MSG_WAITFORONE=0x10000,MSG_FASTOPEN=0x20000000,MSG_CMSG_CLOEXEC=0x40000000}; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct msghdr {void *msg_name;  socklen_t msg_namelen; struct iovec *msg_iov;  size_t msg_iovlen; void *msg_control;  size_t msg_controllen; int msg_flags; 
}; 
#line 254 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct cmsghdr { size_t cmsg_len; int cmsg_level; int cmsg_type;  __extension__ unsigned char __cmsg_data[]; 
}; 
#line 273 "/usr/include/x86_64-linux-gnu/bits/socket.h"
extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg) __attribute__  (( __nothrow__ )) ; 
# 272 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 307 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
enum {SCM_RIGHTS=0x01}; 
# 345 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 2 3 4
# 346 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 383 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct linger {int l_onoff; int l_linger; 
}; 
#line 47 "/usr/include/x86_64-linux-gnu/sys/socket.h"
struct osockaddr {unsigned short int sa_family; unsigned char sa_data[14]; 
}; 
#line 60 "/usr/include/x86_64-linux-gnu/sys/socket.h"
enum {SHUT_RD=0,SHUT_WR,SHUT_RDWR}; 
# 39 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 113 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int socket(int __domain, int __type, int __protocol) __attribute__  (( __nothrow__ )) ; 
#line 120 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int socketpair(int __domain, int __type, int __protocol, int __fds[2]) __attribute__  (( __nothrow__ )) ; 
#line 124 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int bind(int __fd, const struct sockaddr *__addr,  socklen_t __len) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int getsockname(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 137 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int connect(int __fd, const struct sockaddr *__addr,  socklen_t __len); 
#line 142 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int getpeername(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 149 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t send(int __fd, const void *__buf,  size_t __n, int __flags); 
#line 156 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t recv(int __fd, void *__buf,  size_t __n, int __flags); 
#line 165 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t sendto(int __fd, const void *__buf,  size_t __n, int __flags, const struct sockaddr *__addr,  socklen_t __addr_len); 
# 137 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 176 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern  ssize_t recvfrom(int __fd, void *__restrict __buf,  size_t __n, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
#line 185 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t sendmsg(int __fd, const struct msghdr *__message, int __flags); 
#line 202 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t recvmsg(int __fd, struct msghdr *__message, int __flags); 
# 202 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 221 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int getsockopt(int __fd, int __level, int __optname, void *__restrict __optval,  socklen_t *__restrict __optlen) __attribute__  (( __nothrow__ )) ; 
#line 227 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int setsockopt(int __fd, int __level, int __optname, const void *__optval,  socklen_t __optlen) __attribute__  (( __nothrow__ )) ; 
#line 233 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int listen(int __fd, int __n) __attribute__  (( __nothrow__ )) ; 
#line 244 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int accept(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
# 243 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown(int __fd, int __how) __attribute__  (( __nothrow__ )) ; 
#line 266 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int sockatmark(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 274 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int isfdtype(int __fd, int __fdtype) __attribute__  (( __nothrow__ )) ; 
# 283 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 42 "patricia_test.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 59 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone {int tz_minuteswest; int tz_dsttime; 
}; 
#line 61 "/usr/include/x86_64-linux-gnu/sys/time.h"
typedef struct timezone *__restrict __timezone_ptr_t; 
#line 72 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int gettimeofday(struct timeval *__restrict __tv,  __timezone_ptr_t __tz) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 79 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int settimeofday(const struct timeval *__tv, const struct timezone *__tz) __attribute__  (( __nothrow__ )) ; 
#line 86 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int adjtime(const struct timeval *__delta, struct timeval *__olddelta) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/sys/time.h"
enum __itimer_which {ITIMER_REAL=0,ITIMER_VIRTUAL=1,ITIMER_PROF=2}; 
#line 113 "/usr/include/x86_64-linux-gnu/sys/time.h"
struct itimerval {struct timeval it_interval; struct timeval it_value; 
}; 
#line 120 "/usr/include/x86_64-linux-gnu/sys/time.h"
typedef int __itimer_which_t; 
#line 126 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int getitimer( __itimer_which_t __which, struct itimerval *__value) __attribute__  (( __nothrow__ )) ; 
#line 133 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int setitimer( __itimer_which_t __which, const struct itimerval *__restrict __new, struct itimerval *__restrict __old) __attribute__  (( __nothrow__ )) ; 
#line 139 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int utimes(const char *__file, const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int lutimes(const char *__file, const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 147 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern int futimes(int __fd, const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
# 71 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 189 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 43 "patricia_test.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember(const  __sigset_t *, int ); 
#line 103 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
extern int __sigaddset( __sigset_t *, int ); 
#line 104 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
extern int __sigdelset( __sigset_t *, int ); 
#line 40 "/usr/include/signal.h"
typedef  __sig_atomic_t sig_atomic_t; 
# 33 "/usr/include/signal.h" 2 3 4
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 76 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4
typedef union sigval {int sival_int; void *sival_ptr; 
}sigval_t; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
typedef  __clock_t __sigchld_clock_t; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
typedef struct {int si_signo; int si_errno; int si_code; union {int _pad[((128 / sizeof (int )) - 4)]; struct { __pid_t si_pid;  __uid_t si_uid; 
}_kill; struct {int si_tid; int si_overrun;  sigval_t si_sigval; 
}_timer; struct { __pid_t si_pid;  __uid_t si_uid;  sigval_t si_sigval; 
}_rt; struct { __pid_t si_pid;  __uid_t si_uid; int si_status;  __sigchld_clock_t si_utime;  __sigchld_clock_t si_stime; 
}_sigchld; struct {void *si_addr; short int si_addr_lsb; 
}_sigfault; struct {long int si_band; int si_fd; 
}_sigpoll; struct {void *_call_addr; int _syscall; unsigned int _arch; 
}_sigsys; 
}_sifields; 
}siginfo_t; 
# 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 173 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum {SI_ASYNCNL=(-60),SI_TKILL=(-6),SI_SIGIO,SI_ASYNCIO,SI_MESGQ,SI_TIMER,SI_QUEUE,SI_USER,SI_KERNEL=0x80}; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {ILL_ILLOPC=1,ILL_ILLOPN,ILL_ILLADR,ILL_ILLTRP,ILL_PRVOPC,ILL_PRVREG,ILL_COPROC,ILL_BADSTK}; 
#line 216 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {FPE_INTDIV=1,FPE_INTOVF,FPE_FLTDIV,FPE_FLTOVF,FPE_FLTUND,FPE_FLTRES,FPE_FLTINV,FPE_FLTSUB}; 
#line 225 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {SEGV_MAPERR=1,SEGV_ACCERR}; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {BUS_ADRALN=1,BUS_ADRERR,BUS_OBJERR,BUS_MCEERR_AR,BUS_MCEERR_AO}; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {TRAP_BRKPT=1,TRAP_TRACE}; 
#line 266 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {CLD_EXITED=1,CLD_KILLED,CLD_DUMPED,CLD_TRAPPED,CLD_STOPPED,CLD_CONTINUED}; 
#line 283 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {POLL_IN=1,POLL_OUT,POLL_MSG,POLL_ERR,POLL_PRI,POLL_HUP}; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
typedef struct sigevent { sigval_t sigev_value; int sigev_signo; int sigev_notify; union {int _pad[((64 / sizeof (int )) - 4)];  __pid_t _tid; struct {void (*_function)( sigval_t );  pthread_attr_t *_attribute; 
}_sigev_thread; 
}_sigev_un; 
}sigevent_t; 
#line 345 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
enum {SIGEV_SIGNAL=0,SIGEV_NONE,SIGEV_THREAD,SIGEV_THREAD_ID=4}; 
# 307 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 85 "/usr/include/signal.h" 2 3 4
typedef void (*__sighandler_t)(int ); 
#line 91 "/usr/include/signal.h"
extern  __sighandler_t __sysv_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/signal.h"
extern  __sighandler_t signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
# 100 "/usr/include/signal.h" 3 4
# 114 "/usr/include/signal.h" 3 4
# 127 "/usr/include/signal.h" 3 4
extern int kill( __pid_t __pid, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/signal.h"
extern int killpg( __pid_t __pgrp, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 139 "/usr/include/signal.h"
extern int raise(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 145 "/usr/include/signal.h"
extern  __sighandler_t ssignal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 146 "/usr/include/signal.h"
extern int gsignal(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 151 "/usr/include/signal.h"
extern void psignal(int __sig, const char *__s); 
#line 156 "/usr/include/signal.h"
extern void psiginfo(const  siginfo_t *__pinfo, const char *__s); 
#line 167 "/usr/include/signal.h"
extern int __sigpause(int __sig_or_mask, int __is_sig); 
# 167 "/usr/include/signal.h" 3 4
# 189 "/usr/include/signal.h" 3 4
extern int sigblock(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 192 "/usr/include/signal.h"
extern int sigsetmask(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 195 "/usr/include/signal.h"
extern int siggetmask(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 209 "/usr/include/signal.h"
typedef  __sighandler_t sig_t; 
#line 215 "/usr/include/signal.h"
extern int sigemptyset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 218 "/usr/include/signal.h"
extern int sigfillset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 221 "/usr/include/signal.h"
extern int sigaddset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 224 "/usr/include/signal.h"
extern int sigdelset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 228 "/usr/include/signal.h"
extern int sigismember(const  sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 209 "/usr/include/signal.h" 3 4
# 245 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction {union { __sighandler_t sa_handler; void (*sa_sigaction)(int ,  siginfo_t *, void *); 
}__sigaction_handler;  __sigset_t sa_mask; int sa_flags; void (*sa_restorer)(void ); 
}; 
#line 249 "/usr/include/signal.h"
extern int sigprocmask(int __how, const  sigset_t *__restrict __set,  sigset_t *__restrict __oset) __attribute__  (( __nothrow__ )) ; 
#line 256 "/usr/include/signal.h"
extern int sigsuspend(const  sigset_t *__set) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 260 "/usr/include/signal.h"
extern int sigaction(int __sig, const struct sigaction *__restrict __act, struct sigaction *__restrict __oact) __attribute__  (( __nothrow__ )) ; 
#line 263 "/usr/include/signal.h"
extern int sigpending( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 271 "/usr/include/signal.h"
extern int sigwait(const  sigset_t *__restrict __set, int *__restrict __sig) __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 279 "/usr/include/signal.h"
extern int sigwaitinfo(const  sigset_t *__restrict __set,  siginfo_t *__restrict __info) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 289 "/usr/include/signal.h"
extern int sigtimedwait(const  sigset_t *__restrict __set,  siginfo_t *__restrict __info, const struct timespec *__restrict __timeout) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 294 "/usr/include/signal.h"
extern int sigqueue( __pid_t __pid, int __sig, const union sigval __val) __attribute__  (( __nothrow__ )) ; 
# 246 "/usr/include/signal.h" 2 3 4
# 303 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65]; 
#line 304 "/usr/include/signal.h"
extern const char *const sys_siglist[65]; 
#line 314 "/usr/include/signal.h"
struct sigvec { __sighandler_t sv_handler; int sv_mask; int sv_flags; 
}; 
#line 328 "/usr/include/signal.h"
extern int sigvec(int __sig, const struct sigvec *__vec, struct sigvec *__ovec) __attribute__  (( __nothrow__ )) ; 
# 327 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes { __uint32_t magic1;  __uint32_t extended_size;  __uint64_t xstate_bv;  __uint32_t xstate_size;  __uint32_t padding[7]; 
}; 
#line 42 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct _fpreg {unsigned short significand[4]; unsigned short exponent; 
}; 
#line 49 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct _fpxreg {unsigned short significand[4]; unsigned short exponent; unsigned short padding[3]; 
}; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct _xmmreg { __uint32_t element[4]; 
}; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct _fpstate { __uint16_t cwd;  __uint16_t swd;  __uint16_t ftw;  __uint16_t fop;  __uint64_t rip;  __uint64_t rdp;  __uint32_t mxcsr;  __uint32_t mxcr_mask; struct _fpxreg _st[8]; struct _xmmreg _xmm[16];  __uint32_t padding[24]; 
}; 
#line 171 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct sigcontext { __uint64_t r8;  __uint64_t r9;  __uint64_t r10;  __uint64_t r11;  __uint64_t r12;  __uint64_t r13;  __uint64_t r14;  __uint64_t r15;  __uint64_t rdi;  __uint64_t rsi;  __uint64_t rbp;  __uint64_t rbx;  __uint64_t rdx;  __uint64_t rax;  __uint64_t rcx;  __uint64_t rsp;  __uint64_t rip;  __uint64_t eflags; unsigned short cs; unsigned short gs; unsigned short fs; unsigned short __pad0;  __uint64_t err;  __uint64_t trapno;  __uint64_t oldmask;  __uint64_t cr2;  __extension__ union {struct _fpstate *fpstate;  __uint64_t __fpstate_word; 
};  __uint64_t __reserved1[8]; 
}; 
#line 180 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct _xsave_hdr { __uint64_t xstate_bv;  __uint64_t reserved1[2];  __uint64_t reserved2[5]; 
}; 
#line 185 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct _ymmh_state { __uint32_t ymmh_space[64]; 
}; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h"
struct _xstate {struct _fpstate fpstate; struct _xsave_hdr xstate_hdr; struct _ymmh_state ymmh; 
}; 
# 121 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
# 335 "/usr/include/signal.h" 2 3 4
extern int sigreturn(struct sigcontext *__scp) __attribute__  (( __nothrow__ )) ; 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 347 "/usr/include/signal.h" 2 3 4
extern int siginterrupt(int __sig, int __interrupt) __attribute__  (( __nothrow__ )) ; 
# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
struct sigstack {void *ss_sp; int ss_onstack; 
}; 
#line 39 "/usr/include/x86_64-linux-gnu/bits/sigstack.h"
enum {SS_ONSTACK=1,SS_DISABLE}; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/sigstack.h"
typedef struct sigaltstack {void *ss_sp; int ss_flags;  size_t ss_size; 
}stack_t; 
# 49 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
# 350 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
 __extension__ typedef long long int greg_t; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/ucontext.h"
typedef  greg_t gregset_t[23]; 
#line 97 "/usr/include/x86_64-linux-gnu/sys/ucontext.h"
struct _libc_fpxreg {unsigned short int significand[4]; unsigned short int exponent; unsigned short int padding[3]; 
}; 
#line 102 "/usr/include/x86_64-linux-gnu/sys/ucontext.h"
struct _libc_xmmreg { __uint32_t element[4]; 
}; 
#line 118 "/usr/include/x86_64-linux-gnu/sys/ucontext.h"
struct _libc_fpstate { __uint16_t cwd;  __uint16_t swd;  __uint16_t ftw;  __uint16_t fop;  __uint64_t rip;  __uint64_t rdp;  __uint32_t mxcsr;  __uint32_t mxcr_mask; struct _libc_fpxreg _st[8]; struct _libc_xmmreg _xmm[16];  __uint32_t padding[24]; 
}; 
#line 121 "/usr/include/x86_64-linux-gnu/sys/ucontext.h"
typedef struct _libc_fpstate *fpregset_t; 
#line 130 "/usr/include/x86_64-linux-gnu/sys/ucontext.h"
typedef struct { gregset_t gregs;  fpregset_t fpregs;  __extension__ unsigned long long __reserved1[8]; 
}mcontext_t; 
#line 141 "/usr/include/x86_64-linux-gnu/sys/ucontext.h"
typedef struct ucontext {unsigned long int uc_flags; struct ucontext *uc_link;  stack_t uc_stack;  mcontext_t uc_mcontext;  __sigset_t uc_sigmask; struct _libc_fpstate __fpregs_mem; 
}ucontext_t; 
# 92 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 359 "/usr/include/signal.h" 2 3 4
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 364 "/usr/include/signal.h"
extern int sigaltstack(const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss) __attribute__  (( __nothrow__ )) ; 
# 388 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask(int __how, const  __sigset_t *__restrict __newmask,  __sigset_t *__restrict __oldmask) __attribute__  (( __nothrow__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/bits/sigthread.h"
extern int pthread_kill( pthread_t __threadid, int __signo) __attribute__  (( __nothrow__ )) ; 
#line 395 "/usr/include/signal.h"
extern int __libc_current_sigrtmin(void ) __attribute__  (( __nothrow__ )) ; 
#line 397 "/usr/include/signal.h"
extern int __libc_current_sigrtmax(void ) __attribute__  (( __nothrow__ )) ; 
# 389 "/usr/include/signal.h" 2 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 102 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern  __pid_t wait( __WAIT_STATUS __stat_loc); 
#line 125 "/usr/include/x86_64-linux-gnu/sys/wait.h"
extern  __pid_t waitpid( __pid_t __pid, int *__stat_loc, int __options); 
# 125 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 135 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4
# 136 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern int waitid( idtype_t __idtype,  __id_t __id,  siginfo_t *__infop, int __options); 
#line 155 "/usr/include/x86_64-linux-gnu/sys/wait.h"
struct rusage ; 
#line 163 "/usr/include/x86_64-linux-gnu/sys/wait.h"
extern  __pid_t wait3( __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/sys/wait.h"
extern  __pid_t wait4( __pid_t __pid,  __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
# 45 "patricia_test.c" 2
# 1 "/usr/include/rpc/rpc.h" 1 3 4
# 38 "/usr/include/rpc/rpc.h" 3 4
# 1 "/usr/include/rpc/types.h" 1 3 4
# 37 "/usr/include/rpc/types.h" 3 4
typedef int bool_t; 
#line 38 "/usr/include/rpc/types.h"
typedef int enum_t; 
#line 40 "/usr/include/rpc/types.h"
typedef unsigned long rpcprog_t; 
#line 41 "/usr/include/rpc/types.h"
typedef unsigned long rpcvers_t; 
#line 42 "/usr/include/rpc/types.h"
typedef unsigned long rpcproc_t; 
#line 43 "/usr/include/rpc/types.h"
typedef unsigned long rpcprot_t; 
#line 44 "/usr/include/rpc/types.h"
typedef unsigned long rpcport_t; 
# 94 "/usr/include/rpc/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/param.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/limits.h" 1 3 4
# 11 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/limits.h" 1 3 4
# 122 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include-fixed/limits.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/param.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/param.h" 2 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 95 "/usr/include/rpc/types.h" 2 3 4
# 1 "/usr/include/netinet/in.h" 1 3 4
# 22 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t; 
#line 49 "/usr/include/stdint.h"
typedef unsigned short int uint16_t; 
#line 51 "/usr/include/stdint.h"
typedef unsigned int uint32_t; 
#line 55 "/usr/include/stdint.h"
typedef unsigned long int uint64_t; 
#line 65 "/usr/include/stdint.h"
typedef signed char int_least8_t; 
#line 66 "/usr/include/stdint.h"
typedef short int int_least16_t; 
#line 67 "/usr/include/stdint.h"
typedef int int_least32_t; 
#line 69 "/usr/include/stdint.h"
typedef long int int_least64_t; 
#line 76 "/usr/include/stdint.h"
typedef unsigned char uint_least8_t; 
#line 77 "/usr/include/stdint.h"
typedef unsigned short int uint_least16_t; 
#line 78 "/usr/include/stdint.h"
typedef unsigned int uint_least32_t; 
#line 80 "/usr/include/stdint.h"
typedef unsigned long int uint_least64_t; 
# 65 "/usr/include/stdint.h" 3 4
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t; 
#line 92 "/usr/include/stdint.h"
typedef long int int_fast16_t; 
#line 93 "/usr/include/stdint.h"
typedef long int int_fast32_t; 
#line 94 "/usr/include/stdint.h"
typedef long int int_fast64_t; 
#line 103 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t; 
#line 105 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t; 
#line 106 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t; 
#line 107 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t; 
# 103 "/usr/include/stdint.h" 3 4
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t; 
#line 134 "/usr/include/stdint.h"
typedef long int intmax_t; 
#line 135 "/usr/include/stdint.h"
typedef unsigned long int uintmax_t; 
# 134 "/usr/include/stdint.h" 3 4
# 30 "/usr/include/netinet/in.h" 2 3 4
typedef  uint32_t in_addr_t; 
#line 34 "/usr/include/netinet/in.h"
struct in_addr { in_addr_t s_addr; 
}; 
# 1 "/usr/include/x86_64-linux-gnu/bits/in.h" 1 3 4
# 116 "/usr/include/x86_64-linux-gnu/bits/in.h" 3 4
struct ip_opts {struct in_addr ip_dst; char ip_opts[40]; 
}; 
#line 124 "/usr/include/x86_64-linux-gnu/bits/in.h"
struct ip_mreqn {struct in_addr imr_multiaddr; struct in_addr imr_address; int imr_ifindex; 
}; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/in.h"
struct in_pktinfo {int ipi_ifindex; struct in_addr ipi_spec_dst; struct in_addr ipi_addr; 
}; 
#line 91 "/usr/include/netinet/in.h"
enum {IPPROTO_IP=0,IPPROTO_ICMP=1,IPPROTO_IGMP=2,IPPROTO_IPIP=4,IPPROTO_TCP=6,IPPROTO_EGP=8,IPPROTO_PUP=12,IPPROTO_UDP=17,IPPROTO_IDP=22,IPPROTO_TP=29,IPPROTO_DCCP=33,IPPROTO_IPV6=41,IPPROTO_RSVP=46,IPPROTO_GRE=47,IPPROTO_ESP=50,IPPROTO_AH=51,IPPROTO_MTP=92,IPPROTO_BEETPH=94,IPPROTO_ENCAP=98,IPPROTO_PIM=103,IPPROTO_COMP=108,IPPROTO_SCTP=132,IPPROTO_UDPLITE=136,IPPROTO_RAW=255,IPPROTO_MAX}; 
#line 113 "/usr/include/netinet/in.h"
enum {IPPROTO_HOPOPTS=0,IPPROTO_ROUTING=43,IPPROTO_FRAGMENT=44,IPPROTO_ICMPV6=58,IPPROTO_NONE=59,IPPROTO_DSTOPTS=60,IPPROTO_MH=135}; 
#line 117 "/usr/include/netinet/in.h"
typedef  uint16_t in_port_t; 
#line 157 "/usr/include/netinet/in.h"
enum {IPPORT_ECHO=7,IPPORT_DISCARD=9,IPPORT_SYSTAT=11,IPPORT_DAYTIME=13,IPPORT_NETSTAT=15,IPPORT_FTP=21,IPPORT_TELNET=23,IPPORT_SMTP=25,IPPORT_TIMESERVER=37,IPPORT_NAMESERVER=42,IPPORT_WHOIS=43,IPPORT_MTP=57,IPPORT_TFTP=69,IPPORT_RJE=77,IPPORT_FINGER=79,IPPORT_TTYLINK=87,IPPORT_SUPDUP=95,IPPORT_EXECSERVER=512,IPPORT_LOGINSERVER=513,IPPORT_CMDSERVER=514,IPPORT_EFSSERVER=520,IPPORT_BIFFUDP=512,IPPORT_WHOSERVER=513,IPPORT_ROUTESERVER=520,IPPORT_RESERVED=1024,IPPORT_USERRESERVED=5000}; 
# 38 "/usr/include/netinet/in.h" 2 3 4
# 224 "/usr/include/netinet/in.h" 3 4
struct in6_addr {union { uint8_t __u6_addr8[16];  uint16_t __u6_addr16[8];  uint32_t __u6_addr32[4]; 
}__in6_u; 
}; 
#line 227 "/usr/include/netinet/in.h"
extern const struct in6_addr in6addr_any; 
#line 228 "/usr/include/netinet/in.h"
extern const struct in6_addr in6addr_loopback; 
#line 248 "/usr/include/netinet/in.h"
struct sockaddr_in { sa_family_t sin_family;  in_port_t sin_port; struct in_addr sin_addr; unsigned char sin_zero[sizeof (struct sockaddr ) - (sizeof (unsigned short int )) - sizeof ( in_port_t ) - sizeof (struct in_addr )]; 
}; 
#line 259 "/usr/include/netinet/in.h"
struct sockaddr_in6 { sa_family_t sin6_family;  in_port_t sin6_port;  uint32_t sin6_flowinfo; struct in6_addr sin6_addr;  uint32_t sin6_scope_id; 
}; 
#line 271 "/usr/include/netinet/in.h"
struct ip_mreq {struct in_addr imr_multiaddr; struct in_addr imr_interface; 
}; 
#line 283 "/usr/include/netinet/in.h"
struct ip_mreq_source {struct in_addr imr_multiaddr; struct in_addr imr_interface; struct in_addr imr_sourceaddr; 
}; 
#line 295 "/usr/include/netinet/in.h"
struct ipv6_mreq {struct in6_addr ipv6mr_multiaddr; unsigned int ipv6mr_interface; 
}; 
#line 307 "/usr/include/netinet/in.h"
struct group_req { uint32_t gr_interface; struct sockaddr_storage gr_group; 
}; 
#line 319 "/usr/include/netinet/in.h"
struct group_source_req { uint32_t gsr_interface; struct sockaddr_storage gsr_group; struct sockaddr_storage gsr_source; 
}; 
#line 338 "/usr/include/netinet/in.h"
struct ip_msfilter {struct in_addr imsf_multiaddr; struct in_addr imsf_interface;  uint32_t imsf_fmode;  uint32_t imsf_numsrc; struct in_addr imsf_slist[1]; 
}; 
#line 359 "/usr/include/netinet/in.h"
struct group_filter { uint32_t gf_interface; struct sockaddr_storage gf_group;  uint32_t gf_fmode;  uint32_t gf_numsrc; struct sockaddr_storage gf_slist[1]; 
}; 
# 237 "/usr/include/netinet/in.h" 3 4
# 374 "/usr/include/netinet/in.h" 3 4
extern  uint32_t ntohl( uint32_t __netlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 376 "/usr/include/netinet/in.h"
extern  uint16_t ntohs( uint16_t __netshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 378 "/usr/include/netinet/in.h"
extern  uint32_t htonl( uint32_t __hostlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 380 "/usr/include/netinet/in.h"
extern  uint16_t htons( uint16_t __hostshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 386 "/usr/include/netinet/in.h" 2 3 4
# 501 "/usr/include/netinet/in.h" 3 4
extern int bindresvport(int __sockfd, struct sockaddr_in *__sock_in) __attribute__  (( __nothrow__ )) ; 
#line 505 "/usr/include/netinet/in.h"
extern int bindresvport6(int __sockfd, struct sockaddr_in6 *__sock_in) __attribute__  (( __nothrow__ )) ; 
# 628 "/usr/include/netinet/in.h" 3 4
# 97 "/usr/include/rpc/types.h" 2 3 4
# 39 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/xdr.h" 1 3 4
# 44 "/usr/include/rpc/xdr.h" 3 4
# 85 "/usr/include/rpc/xdr.h" 3 4
enum xdr_op {XDR_ENCODE=0,XDR_DECODE=1,XDR_FREE=2}; 
#line 109 "/usr/include/rpc/xdr.h"
typedef struct XDR XDR; 
#line 141 "/usr/include/rpc/xdr.h"
struct XDR {enum xdr_op x_op; struct xdr_ops { bool_t (*x_getlong)( XDR *__xdrs, long *__lp);  bool_t (*x_putlong)( XDR *__xdrs, const long *__lp);  bool_t (*x_getbytes)( XDR *__xdrs,  caddr_t __addr,  u_int __len);  bool_t (*x_putbytes)( XDR *__xdrs, const char *__addr,  u_int __len);  u_int (*x_getpostn)(const  XDR *__xdrs);  bool_t (*x_setpostn)( XDR *__xdrs,  u_int __pos);  int32_t *(*x_inline)( XDR *__xdrs,  u_int __len); void (*x_destroy)( XDR *__xdrs);  bool_t (*x_getint32)( XDR *__xdrs,  int32_t *__ip);  bool_t (*x_putint32)( XDR *__xdrs, const  int32_t *__ip); 
}*x_ops;  caddr_t x_public;  caddr_t x_private;  caddr_t x_base;  u_int x_handy; 
}; 
# 109 "/usr/include/rpc/xdr.h" 3 4
# 152 "/usr/include/rpc/xdr.h" 3 4
typedef  bool_t (*xdrproc_t)( XDR *, void *, ...); 
#line 236 "/usr/include/rpc/xdr.h"
struct xdr_discrim {int value;  xdrproc_t proc; 
}; 
# 232 "/usr/include/rpc/xdr.h" 3 4
# 285 "/usr/include/rpc/xdr.h" 3 4
extern  bool_t xdr_void(void ) __attribute__  (( __nothrow__ )) ; 
#line 286 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_short( XDR *__xdrs, short *__sp) __attribute__  (( __nothrow__ )) ; 
#line 287 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_u_short( XDR *__xdrs,  u_short *__usp) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_int( XDR *__xdrs, int *__ip) __attribute__  (( __nothrow__ )) ; 
#line 289 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_u_int( XDR *__xdrs,  u_int *__up) __attribute__  (( __nothrow__ )) ; 
#line 290 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_long( XDR *__xdrs, long *__lp) __attribute__  (( __nothrow__ )) ; 
#line 291 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_u_long( XDR *__xdrs,  u_long *__ulp) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_hyper( XDR *__xdrs,  quad_t *__llp) __attribute__  (( __nothrow__ )) ; 
#line 293 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_u_hyper( XDR *__xdrs,  u_quad_t *__ullp) __attribute__  (( __nothrow__ )) ; 
#line 294 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_longlong_t( XDR *__xdrs,  quad_t *__llp) __attribute__  (( __nothrow__ )) ; 
#line 295 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_u_longlong_t( XDR *__xdrs,  u_quad_t *__ullp) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_int8_t( XDR *__xdrs,  int8_t *__ip) __attribute__  (( __nothrow__ )) ; 
#line 297 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_uint8_t( XDR *__xdrs,  uint8_t *__up) __attribute__  (( __nothrow__ )) ; 
#line 298 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_int16_t( XDR *__xdrs,  int16_t *__ip) __attribute__  (( __nothrow__ )) ; 
#line 299 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_uint16_t( XDR *__xdrs,  uint16_t *__up) __attribute__  (( __nothrow__ )) ; 
#line 300 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_int32_t( XDR *__xdrs,  int32_t *__ip) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_uint32_t( XDR *__xdrs,  uint32_t *__up) __attribute__  (( __nothrow__ )) ; 
#line 302 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_int64_t( XDR *__xdrs,  int64_t *__ip) __attribute__  (( __nothrow__ )) ; 
#line 303 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_uint64_t( XDR *__xdrs,  uint64_t *__up) __attribute__  (( __nothrow__ )) ; 
#line 304 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_quad_t( XDR *__xdrs,  quad_t *__ip) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_u_quad_t( XDR *__xdrs,  u_quad_t *__up) __attribute__  (( __nothrow__ )) ; 
#line 306 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_bool( XDR *__xdrs,  bool_t *__bp) __attribute__  (( __nothrow__ )) ; 
#line 307 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_enum( XDR *__xdrs,  enum_t *__ep) __attribute__  (( __nothrow__ )) ; 
#line 310 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_array( XDR *_xdrs,  caddr_t *__addrp,  u_int *__sizep,  u_int __maxsize,  u_int __elsize,  xdrproc_t __elproc) __attribute__  (( __nothrow__ )) ; 
#line 312 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_bytes( XDR *__xdrs, char **__cpp,  u_int *__sizep,  u_int __maxsize) __attribute__  (( __nothrow__ )) ; 
#line 313 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_opaque( XDR *__xdrs,  caddr_t __cp,  u_int __cnt) __attribute__  (( __nothrow__ )) ; 
#line 314 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_string( XDR *__xdrs, char **__cpp,  u_int __maxsize) __attribute__  (( __nothrow__ )) ; 
#line 317 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_union( XDR *__xdrs,  enum_t *__dscmp, char *__unp, const struct xdr_discrim *__choices,  xdrproc_t __dfault) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_char( XDR *__xdrs, char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 319 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_u_char( XDR *__xdrs,  u_char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 321 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_vector( XDR *__xdrs, char *__basep,  u_int __nelem,  u_int __elemsize,  xdrproc_t __xdr_elem) __attribute__  (( __nothrow__ )) ; 
#line 322 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_float( XDR *__xdrs, float *__fp) __attribute__  (( __nothrow__ )) ; 
#line 323 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_double( XDR *__xdrs, double *__dp) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_reference( XDR *__xdrs,  caddr_t *__xpp,  u_int __size,  xdrproc_t __proc) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_pointer( XDR *__xdrs, char **__objpp,  u_int __obj_size,  xdrproc_t __xdr_obj) __attribute__  (( __nothrow__ )) ; 
#line 328 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_wrapstring( XDR *__xdrs, char **__cpp) __attribute__  (( __nothrow__ )) ; 
#line 329 "/usr/include/rpc/xdr.h"
extern  u_long xdr_sizeof( xdrproc_t , void *) __attribute__  (( __nothrow__ )) ; 
#line 340 "/usr/include/rpc/xdr.h"
struct netobj { u_int n_len; char *n_bytes; 
}; 
#line 341 "/usr/include/rpc/xdr.h"
typedef struct netobj netobj; 
#line 342 "/usr/include/rpc/xdr.h"
extern  bool_t xdr_netobj( XDR *__xdrs, struct netobj *__np) __attribute__  (( __nothrow__ )) ; 
#line 351 "/usr/include/rpc/xdr.h"
extern void xdrmem_create( XDR *__xdrs, const  caddr_t __addr,  u_int __size, enum xdr_op __xop) __attribute__  (( __nothrow__ )) ; 
#line 355 "/usr/include/rpc/xdr.h"
extern void xdrstdio_create( XDR *__xdrs,  FILE *__file, enum xdr_op __xop) __attribute__  (( __nothrow__ )) ; 
#line 361 "/usr/include/rpc/xdr.h"
extern void xdrrec_create( XDR *__xdrs,  u_int __sendsize,  u_int __recvsize,  caddr_t __tcp_handle, int (*__readit)(char *, char *, int ), int (*__writeit)(char *, char *, int )) __attribute__  (( __nothrow__ )) ; 
#line 364 "/usr/include/rpc/xdr.h"
extern  bool_t xdrrec_endofrecord( XDR *__xdrs,  bool_t __sendnow) __attribute__  (( __nothrow__ )) ; 
#line 367 "/usr/include/rpc/xdr.h"
extern  bool_t xdrrec_skiprecord( XDR *__xdrs) __attribute__  (( __nothrow__ )) ; 
#line 370 "/usr/include/rpc/xdr.h"
extern  bool_t xdrrec_eof( XDR *__xdrs) __attribute__  (( __nothrow__ )) ; 
#line 373 "/usr/include/rpc/xdr.h"
extern void xdr_free( xdrproc_t __proc, char *__objp) __attribute__  (( __nothrow__ )) ; 
# 43 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/auth.h" 1 3 4
# 67 "/usr/include/rpc/auth.h" 3 4
enum auth_stat {AUTH_OK=0,AUTH_BADCRED=1,AUTH_REJECTEDCRED=2,AUTH_BADVERF=3,AUTH_REJECTEDVERF=4,AUTH_TOOWEAK=5,AUTH_INVALIDRESP=6,AUTH_FAILED=7}; 
#line 75 "/usr/include/rpc/auth.h"
union des_block {struct { u_int32_t high;  u_int32_t low; 
}key; char c[8]; 
}; 
#line 76 "/usr/include/rpc/auth.h"
typedef union des_block des_block; 
#line 77 "/usr/include/rpc/auth.h"
extern  bool_t xdr_des_block( XDR *__xdrs,  des_block *__blkp) __attribute__  (( __nothrow__ )) ; 
#line 86 "/usr/include/rpc/auth.h"
struct opaque_auth { enum_t oa_flavor;  caddr_t oa_base;  u_int oa_length; 
}; 
#line 91 "/usr/include/rpc/auth.h"
typedef struct AUTH AUTH; 
#line 105 "/usr/include/rpc/auth.h"
struct AUTH {struct opaque_auth ah_cred; struct opaque_auth ah_verf; union des_block ah_key; struct auth_ops {void (*ah_nextverf)( AUTH *); int (*ah_marshal)( AUTH *,  XDR *); int (*ah_validate)( AUTH *, struct opaque_auth *); int (*ah_refresh)( AUTH *); void (*ah_destroy)( AUTH *); 
}*ah_ops;  caddr_t ah_private; 
}; 
#line 142 "/usr/include/rpc/auth.h"
extern struct opaque_auth _null_auth; 
# 142 "/usr/include/rpc/auth.h" 3 4
# 159 "/usr/include/rpc/auth.h" 3 4
extern  AUTH *authunix_create(char *__machname,  __uid_t __uid,  __gid_t __gid, int __len,  __gid_t *__aup_gids); 
#line 160 "/usr/include/rpc/auth.h"
extern  AUTH *authunix_create_default(void ); 
#line 161 "/usr/include/rpc/auth.h"
extern  AUTH *authnone_create(void ) __attribute__  (( __nothrow__ )) ; 
#line 164 "/usr/include/rpc/auth.h"
extern  AUTH *authdes_create(const char *__servername,  u_int __window, struct sockaddr *__syncaddr,  des_block *__ckey) __attribute__  (( __nothrow__ )) ; 
#line 166 "/usr/include/rpc/auth.h"
extern  AUTH *authdes_pk_create(const char *,  netobj *,  u_int , struct sockaddr *,  des_block *) __attribute__  (( __nothrow__ )) ; 
#line 182 "/usr/include/rpc/auth.h"
extern int getnetname(char *) __attribute__  (( __nothrow__ )) ; 
#line 183 "/usr/include/rpc/auth.h"
extern int host2netname(char *, const char *, const char *) __attribute__  (( __nothrow__ )) ; 
#line 184 "/usr/include/rpc/auth.h"
extern int user2netname(char *, const  uid_t , const char *) __attribute__  (( __nothrow__ )) ; 
#line 186 "/usr/include/rpc/auth.h"
extern int netname2user(const char *,  uid_t *,  gid_t *, int *,  gid_t *) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/rpc/auth.h"
extern int netname2host(const char *, char *, const int ) __attribute__  (( __nothrow__ )) ; 
#line 194 "/usr/include/rpc/auth.h"
extern int key_decryptsession(char *,  des_block *); 
#line 195 "/usr/include/rpc/auth.h"
extern int key_decryptsession_pk(char *,  netobj *,  des_block *); 
#line 196 "/usr/include/rpc/auth.h"
extern int key_encryptsession(char *,  des_block *); 
#line 197 "/usr/include/rpc/auth.h"
extern int key_encryptsession_pk(char *,  netobj *,  des_block *); 
#line 198 "/usr/include/rpc/auth.h"
extern int key_gendes( des_block *); 
#line 199 "/usr/include/rpc/auth.h"
extern int key_setsecret(char *); 
#line 200 "/usr/include/rpc/auth.h"
extern int key_secretkey_is_set(void ); 
#line 201 "/usr/include/rpc/auth.h"
extern int key_get_conv(char *,  des_block *); 
#line 206 "/usr/include/rpc/auth.h"
extern  bool_t xdr_opaque_auth( XDR *, struct opaque_auth *) __attribute__  (( __nothrow__ )) ; 
# 182 "/usr/include/rpc/auth.h" 3 4
# 46 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/clnt.h" 1 3 4
# 41 "/usr/include/rpc/clnt.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/un.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/un.h" 3 4
struct sockaddr_un { sa_family_t sun_family; char sun_path[108]; 
}; 
# 44 "/usr/include/x86_64-linux-gnu/sys/un.h" 3 4
# 97 "/usr/include/rpc/clnt.h" 2 3 4
enum clnt_stat {RPC_SUCCESS=0,RPC_CANTENCODEARGS=1,RPC_CANTDECODERES=2,RPC_CANTSEND=3,RPC_CANTRECV=4,RPC_TIMEDOUT=5,RPC_VERSMISMATCH=6,RPC_AUTHERROR=7,RPC_PROGUNAVAIL=8,RPC_PROGVERSMISMATCH=9,RPC_PROCUNAVAIL=10,RPC_CANTDECODEARGS=11,RPC_SYSTEMERROR=12,RPC_NOBROADCAST=21,RPC_UNKNOWNHOST=13,RPC_UNKNOWNPROTO=17,RPC_UNKNOWNADDR=19,RPC_RPCBFAILURE=14,RPC_PROGNOTREGISTERED=15,RPC_N2AXLATEFAILURE=22,RPC_FAILED=16,RPC_INTR=18,RPC_TLIERROR=20,RPC_UDERROR=23,RPC_INPROGRESS=24,RPC_STALERACHANDLE=25}; 
#line 121 "/usr/include/rpc/clnt.h"
struct rpc_err {enum clnt_stat re_status; union {int RE_errno; enum auth_stat RE_why; struct { u_long low;  u_long high; 
}RE_vers; struct {long s1; long s2; 
}RE_lb; 
}ru; 
}; 
#line 129 "/usr/include/rpc/clnt.h"
typedef struct CLIENT CLIENT; 
#line 146 "/usr/include/rpc/clnt.h"
struct CLIENT { AUTH *cl_auth; struct clnt_ops {enum clnt_stat (*cl_call)( CLIENT *,  u_long ,  xdrproc_t ,  caddr_t ,  xdrproc_t ,  caddr_t , struct timeval ); void (*cl_abort)(void ); void (*cl_geterr)( CLIENT *, struct rpc_err *);  bool_t (*cl_freeres)( CLIENT *,  xdrproc_t ,  caddr_t ); void (*cl_destroy)( CLIENT *);  bool_t (*cl_control)( CLIENT *, int , char *); 
}*cl_ops;  caddr_t cl_private; 
}; 
#line 278 "/usr/include/rpc/clnt.h"
extern  CLIENT *clntraw_create(const  u_long __prog, const  u_long __vers) __attribute__  (( __nothrow__ )) ; 
# 277 "/usr/include/rpc/clnt.h" 3 4
# 293 "/usr/include/rpc/clnt.h" 3 4
extern  CLIENT *clnt_create(const char *__host, const  u_long __prog, const  u_long __vers, const char *__prot) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/rpc/clnt.h"
extern  CLIENT *clnttcp_create(struct sockaddr_in *__raddr,  u_long __prog,  u_long __version, int *__sockp,  u_int __sendsz,  u_int __recvsz) __attribute__  (( __nothrow__ )) ; 
# 307 "/usr/include/rpc/clnt.h" 3 4
# 334 "/usr/include/rpc/clnt.h" 3 4
extern  CLIENT *clntudp_create(struct sockaddr_in *__raddr,  u_long __program,  u_long __version, struct timeval __wait_resend, int *__sockp) __attribute__  (( __nothrow__ )) ; 
#line 338 "/usr/include/rpc/clnt.h"
extern  CLIENT *clntudp_bufcreate(struct sockaddr_in *__raddr,  u_long __program,  u_long __version, struct timeval __wait_resend, int *__sockp,  u_int __sendsz,  u_int __recvsz) __attribute__  (( __nothrow__ )) ; 
#line 356 "/usr/include/rpc/clnt.h"
extern  CLIENT *clntunix_create(struct sockaddr_un *__raddr,  u_long __program,  u_long __version, int *__sockp,  u_int __sendsz,  u_int __recvsz) __attribute__  (( __nothrow__ )) ; 
#line 362 "/usr/include/rpc/clnt.h"
extern int callrpc(const char *__host, const  u_long __prognum, const  u_long __versnum, const  u_long __procnum, const  xdrproc_t __inproc, const char *__in, const  xdrproc_t __outproc, char *__out) __attribute__  (( __nothrow__ )) ; 
#line 363 "/usr/include/rpc/clnt.h"
extern int _rpc_dtablesize(void ) __attribute__  (( __nothrow__ )) ; 
#line 368 "/usr/include/rpc/clnt.h"
extern void clnt_pcreateerror(const char *__msg); 
#line 369 "/usr/include/rpc/clnt.h"
extern char *clnt_spcreateerror(const char *__msg) __attribute__  (( __nothrow__ )) ; 
#line 374 "/usr/include/rpc/clnt.h"
extern void clnt_perrno(enum clnt_stat __num); 
#line 379 "/usr/include/rpc/clnt.h"
extern void clnt_perror( CLIENT *__clnt, const char *__msg); 
#line 381 "/usr/include/rpc/clnt.h"
extern char *clnt_sperror( CLIENT *__clnt, const char *__msg) __attribute__  (( __nothrow__ )) ; 
#line 390 "/usr/include/rpc/clnt.h"
struct rpc_createerr {enum clnt_stat cf_stat; struct rpc_err cf_error; 
}; 
#line 392 "/usr/include/rpc/clnt.h"
extern struct rpc_createerr rpc_createerr; 
#line 399 "/usr/include/rpc/clnt.h"
extern char *clnt_sperrno(enum clnt_stat __num) __attribute__  (( __nothrow__ )) ; 
#line 405 "/usr/include/rpc/clnt.h"
extern int getrpcport(const char *__host,  u_long __prognum,  u_long __versnum,  u_int __proto) __attribute__  (( __nothrow__ )) ; 
#line 411 "/usr/include/rpc/clnt.h"
extern void get_myaddress(struct sockaddr_in *) __attribute__  (( __nothrow__ )) ; 
# 354 "/usr/include/rpc/clnt.h" 3 4
# 49 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/rpc_msg.h" 1 3 4
# 57 "/usr/include/rpc/rpc_msg.h" 3 4
enum msg_type {CALL=0,REPLY=1}; 
#line 62 "/usr/include/rpc/rpc_msg.h"
enum reply_stat {MSG_ACCEPTED=0,MSG_DENIED=1}; 
#line 71 "/usr/include/rpc/rpc_msg.h"
enum accept_stat {SUCCESS=0,PROG_UNAVAIL=1,PROG_MISMATCH=2,PROC_UNAVAIL=3,GARBAGE_ARGS=4,SYSTEM_ERR=5}; 
#line 76 "/usr/include/rpc/rpc_msg.h"
enum reject_stat {RPC_MISMATCH=0,AUTH_ERROR=1}; 
#line 103 "/usr/include/rpc/rpc_msg.h"
struct accepted_reply {struct opaque_auth ar_verf; enum accept_stat ar_stat; union {struct { u_long low;  u_long high; 
}AR_versions; struct { caddr_t where;  xdrproc_t proc; 
}AR_results; 
}ru; 
}; 
#line 119 "/usr/include/rpc/rpc_msg.h"
struct rejected_reply {enum reject_stat rj_stat; union {struct { u_long low;  u_long high; 
}RJ_versions; enum auth_stat RJ_why; 
}ru; 
}; 
#line 132 "/usr/include/rpc/rpc_msg.h"
struct reply_body {enum reply_stat rp_stat; union {struct accepted_reply RP_ar; struct rejected_reply RP_dr; 
}ru; 
}; 
#line 144 "/usr/include/rpc/rpc_msg.h"
struct call_body { u_long cb_rpcvers;  u_long cb_prog;  u_long cb_vers;  u_long cb_proc; struct opaque_auth cb_cred; struct opaque_auth cb_verf; 
}; 
#line 158 "/usr/include/rpc/rpc_msg.h"
struct rpc_msg { u_long rm_xid; enum msg_type rm_direction; union {struct call_body RM_cmb; struct reply_body RM_rmb; 
}ru; 
}; 
# 87 "/usr/include/rpc/rpc_msg.h" 3 4
# 169 "/usr/include/rpc/rpc_msg.h" 3 4
extern  bool_t xdr_callmsg( XDR *__xdrs, struct rpc_msg *__cmsg) __attribute__  (( __nothrow__ )) ; 
#line 177 "/usr/include/rpc/rpc_msg.h"
extern  bool_t xdr_callhdr( XDR *__xdrs, struct rpc_msg *__cmsg) __attribute__  (( __nothrow__ )) ; 
#line 185 "/usr/include/rpc/rpc_msg.h"
extern  bool_t xdr_replymsg( XDR *__xdrs, struct rpc_msg *__rmsg) __attribute__  (( __nothrow__ )) ; 
#line 194 "/usr/include/rpc/rpc_msg.h"
extern void _seterr_reply(struct rpc_msg *__msg, struct rpc_err *__error) __attribute__  (( __nothrow__ )) ; 
# 52 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/auth_unix.h" 1 3 4
# 50 "/usr/include/rpc/auth_unix.h" 3 4
# 69 "/usr/include/rpc/auth_unix.h" 3 4
struct authunix_parms { u_long aup_time; char *aup_machname;  __uid_t aup_uid;  __gid_t aup_gid;  u_int aup_len;  __gid_t *aup_gids; 
}; 
#line 72 "/usr/include/rpc/auth_unix.h"
extern  bool_t xdr_authunix_parms( XDR *__xdrs, struct authunix_parms *__p) __attribute__  (( __nothrow__ )) ; 
#line 82 "/usr/include/rpc/auth_unix.h"
struct short_hand_verf {struct opaque_auth new_cred; 
}; 
# 53 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/auth_des.h" 1 3 4
# 31 "/usr/include/rpc/auth_des.h" 3 4
enum authdes_namekind {ADN_FULLNAME,ADN_NICKNAME}; 
#line 40 "/usr/include/rpc/auth_des.h"
struct authdes_fullname {char *name;  des_block key;  uint32_t window; 
}; 
#line 48 "/usr/include/rpc/auth_des.h"
struct authdes_cred {enum authdes_namekind adc_namekind; struct authdes_fullname adc_fullname;  uint32_t adc_nickname; 
}; 
#line 55 "/usr/include/rpc/auth_des.h"
struct rpc_timeval { uint32_t tv_sec;  uint32_t tv_usec; 
}; 
#line 67 "/usr/include/rpc/auth_des.h"
struct authdes_verf {union {struct rpc_timeval adv_ctime;  des_block adv_xtime; 
}adv_time_u;  uint32_t adv_int_u; 
}; 
#line 90 "/usr/include/rpc/auth_des.h"
extern int authdes_getucred(const struct authdes_cred *__adc,  uid_t *__uid,  gid_t *__gid, short *__grouplen,  gid_t *__groups) __attribute__  (( __nothrow__ )) ; 
#line 95 "/usr/include/rpc/auth_des.h"
extern int getpublickey(const char *__name, char *__key) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/rpc/auth_des.h"
extern int getsecretkey(const char *__name, char *__key, const char *__passwd) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/rpc/auth_des.h"
extern int rtime(struct sockaddr_in *__addrp, struct rpc_timeval *__timep, struct rpc_timeval *__timeout) __attribute__  (( __nothrow__ )) ; 
# 88 "/usr/include/rpc/auth_des.h" 3 4
# 54 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/svc.h" 1 3 4
# 57 "/usr/include/rpc/svc.h" 3 4
# 85 "/usr/include/rpc/svc.h" 3 4
enum xprt_stat {XPRT_DIED,XPRT_MOREREQS,XPRT_IDLE}; 
#line 90 "/usr/include/rpc/svc.h"
typedef struct SVCXPRT SVCXPRT; 
#line 115 "/usr/include/rpc/svc.h"
struct SVCXPRT {int xp_sock;  u_short xp_port; const struct xp_ops { bool_t (*xp_recv)( SVCXPRT *__xprt, struct rpc_msg *__msg); enum xprt_stat (*xp_stat)( SVCXPRT *__xprt);  bool_t (*xp_getargs)( SVCXPRT *__xprt,  xdrproc_t __xdr_args,  caddr_t __args_ptr);  bool_t (*xp_reply)( SVCXPRT *__xprt, struct rpc_msg *__msg);  bool_t (*xp_freeargs)( SVCXPRT *__xprt,  xdrproc_t __xdr_args,  caddr_t __args_ptr); void (*xp_destroy)( SVCXPRT *__xprt); 
}*xp_ops; int xp_addrlen; struct sockaddr_in xp_raddr; struct opaque_auth xp_verf;  caddr_t xp_p1;  caddr_t xp_p2; char xp_pad[256]; 
}; 
#line 171 "/usr/include/rpc/svc.h"
struct svc_req { rpcprog_t rq_prog;  rpcvers_t rq_vers;  rpcproc_t rq_proc; struct opaque_auth rq_cred;  caddr_t rq_clntcred;  SVCXPRT *rq_xprt; 
}; 
#line 175 "/usr/include/rpc/svc.h"
typedef void (*__dispatch_fn_t)(struct svc_req *,  SVCXPRT *); 
# 164 "/usr/include/rpc/svc.h" 3 4
# 190 "/usr/include/rpc/svc.h" 3 4
extern  bool_t svc_register( SVCXPRT *__xprt,  rpcprog_t __prog,  rpcvers_t __vers,  __dispatch_fn_t __dispatch,  rpcprot_t __protocol) __attribute__  (( __nothrow__ )) ; 
#line 199 "/usr/include/rpc/svc.h"
extern void svc_unregister( rpcprog_t __prog,  rpcvers_t __vers) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/rpc/svc.h"
extern void xprt_register( SVCXPRT *__xprt) __attribute__  (( __nothrow__ )) ; 
#line 215 "/usr/include/rpc/svc.h"
extern void xprt_unregister( SVCXPRT *__xprt) __attribute__  (( __nothrow__ )) ; 
# 199 "/usr/include/rpc/svc.h" 3 4
# 245 "/usr/include/rpc/svc.h" 3 4
extern  bool_t svc_sendreply( SVCXPRT *__xprt,  xdrproc_t __xdr_results,  caddr_t __xdr_location) __attribute__  (( __nothrow__ )) ; 
#line 247 "/usr/include/rpc/svc.h"
extern void svcerr_decode( SVCXPRT *__xprt) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/rpc/svc.h"
extern void svcerr_weakauth( SVCXPRT *__xprt) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/rpc/svc.h"
extern void svcerr_noproc( SVCXPRT *__xprt) __attribute__  (( __nothrow__ )) ; 
#line 254 "/usr/include/rpc/svc.h"
extern void svcerr_progvers( SVCXPRT *__xprt,  rpcvers_t __low_vers,  rpcvers_t __high_vers) __attribute__  (( __nothrow__ )) ; 
#line 256 "/usr/include/rpc/svc.h"
extern void svcerr_auth( SVCXPRT *__xprt, enum auth_stat __why) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/rpc/svc.h"
extern void svcerr_noprog( SVCXPRT *__xprt) __attribute__  (( __nothrow__ )) ; 
#line 260 "/usr/include/rpc/svc.h"
extern void svcerr_systemerr( SVCXPRT *__xprt) __attribute__  (( __nothrow__ )) ; 
#line 278 "/usr/include/rpc/svc.h"
extern struct pollfd *svc_pollfd; 
#line 279 "/usr/include/rpc/svc.h"
extern int svc_max_pollfd; 
#line 280 "/usr/include/rpc/svc.h"
extern  fd_set svc_fdset; 
#line 287 "/usr/include/rpc/svc.h"
extern void svc_getreq(int __rdfds) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/rpc/svc.h"
extern void svc_getreq_common(const int __fd) __attribute__  (( __nothrow__ )) ; 
#line 289 "/usr/include/rpc/svc.h"
extern void svc_getreqset( fd_set *__readfds) __attribute__  (( __nothrow__ )) ; 
#line 290 "/usr/include/rpc/svc.h"
extern void svc_getreq_poll(struct pollfd *, const int ) __attribute__  (( __nothrow__ )) ; 
#line 291 "/usr/include/rpc/svc.h"
extern void svc_exit(void ) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/rpc/svc.h"
extern void svc_run(void ) __attribute__  (( __nothrow__ )) ; 
# 278 "/usr/include/rpc/svc.h" 3 4
# 306 "/usr/include/rpc/svc.h" 3 4
extern  SVCXPRT *svcraw_create(void ) __attribute__  (( __nothrow__ )) ; 
#line 311 "/usr/include/rpc/svc.h"
extern  SVCXPRT *svcudp_create(int __sock) __attribute__  (( __nothrow__ )) ; 
#line 313 "/usr/include/rpc/svc.h"
extern  SVCXPRT *svcudp_bufcreate(int __sock,  u_int __sendsz,  u_int __recvsz) __attribute__  (( __nothrow__ )) ; 
#line 319 "/usr/include/rpc/svc.h"
extern  SVCXPRT *svctcp_create(int __sock,  u_int __sendsize,  u_int __recvsize) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/rpc/svc.h"
extern  SVCXPRT *svcfd_create(int __sock,  u_int __sendsize,  u_int __recvsize) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/rpc/svc.h"
extern  SVCXPRT *svcunix_create(int __sock,  u_int __sendsize,  u_int __recvsize, char *__path) __attribute__  (( __nothrow__ )) ; 
# 57 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/svc_auth.h" 1 3 4
# 46 "/usr/include/rpc/svc_auth.h" 3 4
extern enum auth_stat _authenticate(struct svc_req *__rqst, struct rpc_msg *__msg) __attribute__  (( __nothrow__ )) ; 
# 58 "/usr/include/rpc/rpc.h" 2 3 4
# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 42 "/usr/include/rpc/netdb.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 51 "/usr/include/rpc/netdb.h" 2 3 4
struct rpcent {char *r_name; char **r_aliases; int r_number; 
}; 
#line 53 "/usr/include/rpc/netdb.h"
extern void setrpcent(int __stayopen) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/rpc/netdb.h"
extern void endrpcent(void ) __attribute__  (( __nothrow__ )) ; 
#line 55 "/usr/include/rpc/netdb.h"
extern struct rpcent *getrpcbyname(const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/rpc/netdb.h"
extern struct rpcent *getrpcbynumber(int __number) __attribute__  (( __nothrow__ )) ; 
#line 57 "/usr/include/rpc/netdb.h"
extern struct rpcent *getrpcent(void ) __attribute__  (( __nothrow__ )) ; 
#line 62 "/usr/include/rpc/netdb.h"
extern int getrpcbyname_r(const char *__name, struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 66 "/usr/include/rpc/netdb.h"
extern int getrpcbynumber_r(int __number, struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 69 "/usr/include/rpc/netdb.h"
extern int getrpcent_r(struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 70 "/usr/include/rpc/rpc.h"
extern  fd_set *__rpc_thread_svc_fdset(void ) __attribute__  (( __const__ )) ; 
#line 74 "/usr/include/rpc/rpc.h"
extern struct rpc_createerr *__rpc_thread_createerr(void ) __attribute__  (( __const__ )) ; 
# 66 "/usr/include/rpc/rpc.h" 2 3 4
# 86 "/usr/include/rpc/rpc.h" 3 4
extern struct pollfd **__rpc_thread_svc_pollfd(void ) __attribute__  (( __const__ )) ; 
#line 89 "/usr/include/rpc/rpc.h"
extern int *__rpc_thread_svc_max_pollfd(void ) __attribute__  (( __const__ )) ; 
# 47 "patricia_test.c" 2
# 1 "/usr/include/arpa/inet.h" 1 3 4
# 34 "/usr/include/arpa/inet.h" 3 4
extern  in_addr_t inet_addr(const char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 37 "/usr/include/arpa/inet.h"
extern  in_addr_t inet_lnaof(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 42 "/usr/include/arpa/inet.h"
extern struct in_addr inet_makeaddr( in_addr_t __net,  in_addr_t __host) __attribute__  (( __nothrow__ )) ; 
#line 45 "/usr/include/arpa/inet.h"
extern  in_addr_t inet_netof(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 49 "/usr/include/arpa/inet.h"
extern  in_addr_t inet_network(const char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 53 "/usr/include/arpa/inet.h"
extern char *inet_ntoa(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 59 "/usr/include/arpa/inet.h"
extern int inet_pton(int __af, const char *__restrict __cp, void *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 66 "/usr/include/arpa/inet.h"
extern const char *inet_ntop(int __af, const void *__restrict __cp, char *__restrict __buf,  socklen_t __len) __attribute__  (( __nothrow__ )) ; 
#line 73 "/usr/include/arpa/inet.h"
extern int inet_aton(const char *__cp, struct in_addr *__inp) __attribute__  (( __nothrow__ )) ; 
#line 77 "/usr/include/arpa/inet.h"
extern char *inet_neta( in_addr_t __net, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 83 "/usr/include/arpa/inet.h"
extern char *inet_net_ntop(int __af, const void *__cp, int __bits, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 89 "/usr/include/arpa/inet.h"
extern int inet_net_pton(int __af, const char *__cp, void *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 95 "/usr/include/arpa/inet.h"
extern unsigned int inet_nsap_addr(const char *__cp, unsigned char *__buf, int __len) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/arpa/inet.h"
extern char *inet_nsap_ntoa(int __len, const unsigned char *__cp, char *__buf) __attribute__  (( __nothrow__ )) ; 
# 49 "patricia_test.c" 2
# 1 "patricia.h" 1
# 37 "patricia.h" 
struct ptree_mask {unsigned long pm_mask; void *pm_data; 
}; 
#line 50 "patricia.h"
struct ptree {unsigned long p_key; struct ptree_mask *p_m; unsigned char p_mlen; char p_b; struct ptree *p_left; struct ptree *p_right; 
}; 
#line 53 "patricia.h"
extern struct ptree *pat_insert(struct ptree *n, struct ptree *head); 
#line 54 "patricia.h"
extern int pat_remove(struct ptree *n, struct ptree *head); 
#line 55 "patricia.h"
extern struct ptree *pat_search(unsigned long key, struct ptree *head); 
#line 56 "patricia_test.c"
struct ExtendNode {int foo; double bar; 
}; 
#line 59 "patricia_test.c"
static struct ptree *malloc_ptree()  
# 2531 "patricia_test.c"
{
# 2533 "patricia_test.c"
struct ptree * retValue_acc;




# 2539 "patricia_test.c"
{

#line 60 "patricia_test.c"

#line 60 "patricia_test.c"
struct ptree *p;
#line 61 "patricia_test.c"

#line 61 "patricia_test.c"
struct ptree_mask *pm;
#line 63 "patricia_test.c"
p = ((struct ptree *)malloc(sizeof (struct ptree ))); 
#line 64 "patricia_test.c"
if ((!p)){
{ 
#line 66 "patricia_test.c"
perror("Allocating p-trie node"); 
#line 67 "patricia_test.c"
exit(0); } }
#line 69 "patricia_test.c"
bzero(p, sizeof ((*p))); 
#line 70 "patricia_test.c"
(p->p_m) = ((struct ptree_mask *)malloc(sizeof (struct ptree_mask ))); 
#line 72 "patricia_test.c"
if ((!(p->p_m))){
{ 
#line 74 "patricia_test.c"
perror("Allocating p-trie mask data"); 
#line 75 "patricia_test.c"
exit(0); } }
#line 77 "patricia_test.c"
bzero((p->p_m), sizeof ((*(p->p_m)))); 
#line 78 "patricia_test.c"
pm = (p->p_m); 
#line 79 "patricia_test.c"
(pm->pm_data) = ((struct ExtendNode *)malloc(sizeof (struct ExtendNode ))); 
#line 80 "patricia_test.c"
if ((!(pm->pm_data))){
{ 
#line 82 "patricia_test.c"
perror("Allocating p-trie mask's node data"); 
#line 83 "patricia_test.c"
exit(0); } }
#line 85 "patricia_test.c"
bzero((pm->pm_data), sizeof ((*(pm->pm_data)))); 
#line 86 "patricia_test.c"

# 2587 "patricia_test.c"
retValue_acc = p;
# 2589 "patricia_test.c"
return (struct ptree * )retValue_acc;
 
# 2592 "patricia_test.c"

}

# 2596 "patricia_test.c"
return (struct ptree * )retValue_acc;

# 2599 "patricia_test.c"

}
 
#line 91 "patricia_test.c"
static int match(struct ptree *pfind, struct in_addr addr, struct in_addr *min_mask)  
# 2605 "patricia_test.c"
{
# 2607 "patricia_test.c"
int retValue_acc;




# 2613 "patricia_test.c"
{

#line 92 "patricia_test.c"

#line 92 "patricia_test.c"
int i;
#line 93 "patricia_test.c"

#line 93 "patricia_test.c"
int found = 0;
#line 94 "patricia_test.c"
(min_mask->s_addr) = 0xffffffff; 
#line 97 "patricia_test.c"
for(i = 0;i < (pfind->p_mlen);i++) { { 
#line 103 "patricia_test.c"
if ((pfind->p_key) == (addr.s_addr & (pfind->p_m)[i].pm_mask) && (min_mask->s_addr) >= (pfind->p_m)[i].pm_mask){
{ 
#line 100 "patricia_test.c"
(min_mask->s_addr) = (pfind->p_m)[i].pm_mask; 
#line 101 "patricia_test.c"
found = 1; } }} } 
#line 104 "patricia_test.c"

# 2637 "patricia_test.c"
retValue_acc = found;
# 2639 "patricia_test.c"
return (int )retValue_acc;
 
# 2642 "patricia_test.c"

}

# 2646 "patricia_test.c"
return (int )retValue_acc;

# 2649 "patricia_test.c"

}
 
#line 108 "patricia_test.c"
static int more_than_all_mask(struct in_addr new, struct ptree *pfind)  
# 2655 "patricia_test.c"
{
# 2657 "patricia_test.c"
int retValue_acc;




# 2663 "patricia_test.c"
{

#line 109 "patricia_test.c"

#line 109 "patricia_test.c"
int i;
#line 110 "patricia_test.c"
for(i = 0;i < (pfind->p_mlen);i++) { { 
#line 114 "patricia_test.c"
if (new.s_addr <= (pfind->p_m)[i].pm_mask){

# 2675 "patricia_test.c"
retValue_acc = 0;
# 2677 "patricia_test.c"
return (int )retValue_acc;
 }} } 
#line 115 "patricia_test.c"

# 2682 "patricia_test.c"
retValue_acc = 1;
# 2684 "patricia_test.c"
return (int )retValue_acc;
 
# 2687 "patricia_test.c"

}

# 2691 "patricia_test.c"
return (int )retValue_acc;

# 2694 "patricia_test.c"

}
 
static inline struct ptree *  pat_insert__patricia_test__0 (struct ptree * n ,struct ptree * head  )  ; 

#line 119 "patricia_test.c"
int main(int argc, char **argv)  
# 2702 "patricia_test.c"
{
# 2704 "patricia_test.c"
int retValue_acc;




# 2710 "patricia_test.c"
{

#line 120 "patricia_test.c"

#line 120 "patricia_test.c"
struct ptree *phead;
#line 121 "patricia_test.c"

#line 121 "patricia_test.c"
struct ptree *p,*pfind;
#line 122 "patricia_test.c"

#line 122 "patricia_test.c"
struct ptree_mask *pm;
#line 123 "patricia_test.c"

#line 123 "patricia_test.c"
 FILE *fp;
#line 124 "patricia_test.c"

#line 124 "patricia_test.c"
char line[128];
#line 125 "patricia_test.c"

#line 125 "patricia_test.c"
char addr_str[16];
#line 126 "patricia_test.c"

#line 126 "patricia_test.c"
char mask_str[16];
#line 127 "patricia_test.c"

#line 127 "patricia_test.c"
struct in_addr addr;
#line 128 "patricia_test.c"

#line 128 "patricia_test.c"
struct in_addr mask;
#line 129 "patricia_test.c"

#line 129 "patricia_test.c"
struct in_addr network;
#line 130 "patricia_test.c"

#line 130 "patricia_test.c"
float time;
#line 132 "patricia_test.c"
if (argc < 2){
{ 
#line 134 "patricia_test.c"
printf("Usage: %s <TCP stream>\n", argv[0]); 
#line 135 "patricia_test.c"
exit((-1)); } }
#line 142 "patricia_test.c"
if ((fp = fopen(argv[1], "r")) == (((void *)0))){
{ 
#line 144 "patricia_test.c"
printf("File %s doesn't seem to exist\n", argv[1]); 
#line 145 "patricia_test.c"
exit(0); } }
# 51 "patricia_test.c" 2
# 158 "patricia_test.c" 
phead = malloc_ptree(); 
#line 164 "patricia_test.c"
(phead->p_mlen) = 1; 
#line 165 "patricia_test.c"
(phead->p_left) = (phead->p_right) = phead; 
#line 170 "patricia_test.c"
while(fgets(line, 128, fp)) { { 
#line 176 "patricia_test.c"
sscanf(line, "%f %s %s", (&time), ((char *)(&addr_str)), ((char *)(&mask_str))); 
#line 177 "patricia_test.c"
inet_aton(addr_str, (&addr)); 
#line 178 "patricia_test.c"
inet_aton(mask_str, (&mask)); 
#line 179 "patricia_test.c"
addr.s_addr = htonl(addr.s_addr); 
#line 180 "patricia_test.c"
mask.s_addr = htonl(mask.s_addr); 
#line 185 "patricia_test.c"
p = malloc_ptree(); 
#line 191 "patricia_test.c"
(p->p_key) = addr.s_addr; 
#line 192 "patricia_test.c"
((p->p_m)->pm_mask) = mask.s_addr; 
#line 193 "patricia_test.c"
(p->p_mlen)++; 
#line 195 "patricia_test.c"
pfind = pat_search(addr.s_addr, phead); 
#line 196 "patricia_test.c"
if (pfind != phead && match(pfind, addr, (&network)) && (!more_than_all_mask(mask, pfind))){
{ 
#line 198 "patricia_test.c"
addr.s_addr = ntohl(addr.s_addr); 
#line 199 "patricia_test.c"
network.s_addr = ntohl(network.s_addr); 
#line 200 "patricia_test.c"
printf("Found %s ", inet_ntoa(addr)); 
#line 201 "patricia_test.c"
printf("%s in %f.\n", inet_ntoa(network), time); } }else{
{ 
#line 209 "patricia_test.c"
addr.s_addr &= mask.s_addr; 
#line 210 "patricia_test.c"
addr.s_addr = ntohl(addr.s_addr); 
#line 211 "patricia_test.c"
mask.s_addr = ntohl(mask.s_addr); 
#line 212 "patricia_test.c"
printf("Insert %s ", inet_ntoa(addr)); 
#line 213 "patricia_test.c"
printf("%s.\n", inet_ntoa(mask)); 
#line 214 "patricia_test.c"
p = pat_insert__patricia_test__0(p, phead); } }
#line 216 "patricia_test.c"
if ((!p)){
{ 
#line 218 "patricia_test.c"
fprintf(stderr, "Failed on pat_insert\n"); 
#line 219 "patricia_test.c"
exit(0); } }} } 
#line 223 "patricia_test.c"
exit(1); 
# 2833 "patricia_test.c"

}

# 2837 "patricia_test.c"
return (int )retValue_acc;

# 2840 "patricia_test.c"

}
  void __utac_acc__patricia_aspect__1 (struct ptree * phead  );

  struct ptree * pat_insert (struct ptree * n ,struct ptree * head  ) ; 

# 2847 "patricia_test.c"
static inline struct ptree *  pat_insert__patricia_test__0 (struct ptree * n ,struct ptree * head  ) {

# 2850 "patricia_test.c"
struct ptree * retValue_acc;

# 2853 "patricia_test.c"
retValue_acc = pat_insert ( n , head ) ;  

{
struct ptree * __utac__ad__arg1 = head ; 
__utac_acc__patricia_aspect__1(__utac__ad__arg1 );

}

# 2862 "patricia_test.c"
return (struct ptree * )retValue_acc;
}
 
