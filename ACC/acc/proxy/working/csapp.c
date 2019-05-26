
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


# 1 "csapp.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "csapp.c" 
# 22 "csapp.c" 
# 1 "csapp.h" 1
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
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
# 50 "/usr/include/libio.h" 2 3 4
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
#line 79 "/usr/include/stdio.h"
typedef  __gnuc_va_list va_list; 
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
extern  FILE *tmpfile(void ) __attribute__  (( __warn_unused_result__ )) ; 
#line 209 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 215 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
# 209 "/usr/include/stdio.h" 3 4
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam(const char *__dir, const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 237 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 242 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 252 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 252 "/usr/include/stdio.h" 3 4
# 273 "/usr/include/stdio.h" 3 4
extern  FILE *fopen(const char *__restrict __filename, const char *__restrict __modes) __attribute__  (( __warn_unused_result__ )) ; 
#line 280 "/usr/include/stdio.h"
extern  FILE *freopen(const char *__restrict __filename, const char *__restrict __modes,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
# 295 "/usr/include/stdio.h" 3 4
# 306 "/usr/include/stdio.h" 3 4
extern  FILE *fdopen(int __fd, const char *__modes) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 320 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, const char *__modes) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 325 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__bufloc,  size_t *__sizeloc) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __attribute__  (( __warn_unused_result__ )) ; 
#line 431 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...) __attribute__  (( __warn_unused_result__ )) ; 
#line 434 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 443 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf") __attribute__  (( __warn_unused_result__ )) ; 
#line 446 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf") __attribute__  (( __warn_unused_result__ )) ; 
#line 448 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__  (( __nothrow__ )) ; 
# 443 "/usr/include/stdio.h" 3 4
# 473 "/usr/include/stdio.h" 3 4
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 480 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 485 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 498 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__  (( __format__ ( __scanf__, 2, 0 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 501 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__  (( __format__ ( __scanf__, 1, 0 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
# 594 "/usr/include/stdio.h" 3 4
# 638 "/usr/include/stdio.h" 3 4
extern char *gets(char *__s) __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __deprecated__ )) ; 
#line 667 "/usr/include/stdio.h"
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 670 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 680 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 689 "/usr/include/stdio.h"
extern int fputs(const char *__restrict __s,  FILE *__restrict __stream); 
#line 695 "/usr/include/stdio.h"
extern int puts(const char *__s); 
#line 702 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 710 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 716 "/usr/include/stdio.h"
extern  size_t fwrite(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
# 665 "/usr/include/stdio.h" 3 4
# 738 "/usr/include/stdio.h" 3 4
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 740 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 749 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 754 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 759 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
#line 773 "/usr/include/stdio.h"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 778 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream) __attribute__  (( __warn_unused_result__ )) ; 
# 773 "/usr/include/stdio.h" 3 4
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 803 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, const  fpos_t *__pos); 
# 815 "/usr/include/stdio.h" 3 4
# 826 "/usr/include/stdio.h" 3 4
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 828 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 830 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 835 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 836 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 837 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 846 "/usr/include/stdio.h"
extern void perror(const char *__s); 
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern const char *const sys_errlist[]; 
#line 858 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 863 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
# 854 "/usr/include/stdio.h" 2 3 4
# 873 "/usr/include/stdio.h" 3 4
extern  FILE *popen(const char *__command, const char *__modes) __attribute__  (( __warn_unused_result__ )) ; 
#line 879 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 885 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 913 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 917 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 920 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 913 "/usr/include/stdio.h" 3 4
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) int getchar(void )  
# 494 "csapp.c"
{
# 496 "csapp.c"
int retValue_acc;




# 502 "csapp.c"
{

#line 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 507 "csapp.c"
retValue_acc = _IO_getc(stdin);
# 509 "csapp.c"
return (int )retValue_acc;
 
# 512 "csapp.c"

}

# 516 "csapp.c"
return (int )retValue_acc;

# 519 "csapp.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fgetc_unlocked( FILE *__fp)  
# 525 "csapp.c"
{
# 527 "csapp.c"
int retValue_acc;




# 533 "csapp.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 538 "csapp.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 540 "csapp.c"
return (int )retValue_acc;
 
# 543 "csapp.c"

}

# 547 "csapp.c"
return (int )retValue_acc;

# 550 "csapp.c"

}
 
#line 64 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getc_unlocked( FILE *__fp)  
# 556 "csapp.c"
{
# 558 "csapp.c"
int retValue_acc;




# 564 "csapp.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 569 "csapp.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 571 "csapp.c"
return (int )retValue_acc;
 
# 574 "csapp.c"

}

# 578 "csapp.c"
return (int )retValue_acc;

# 581 "csapp.c"

}
 
#line 71 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getchar_unlocked(void )  
# 587 "csapp.c"
{
# 589 "csapp.c"
int retValue_acc;




# 595 "csapp.c"
{

#line 72 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 600 "csapp.c"
retValue_acc = ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++))));
# 602 "csapp.c"
return (int )retValue_acc;
 
# 605 "csapp.c"

}

# 609 "csapp.c"
return (int )retValue_acc;

# 612 "csapp.c"

}
 
#line 80 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar(int __c)  
# 618 "csapp.c"
{
# 620 "csapp.c"
int retValue_acc;




# 626 "csapp.c"
{

#line 81 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 631 "csapp.c"
retValue_acc = _IO_putc(__c, stdout);
# 633 "csapp.c"
return (int )retValue_acc;
 
# 636 "csapp.c"

}

# 640 "csapp.c"
return (int )retValue_acc;

# 643 "csapp.c"

}
 
#line 89 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fputc_unlocked(int __c,  FILE *__stream)  
# 649 "csapp.c"
{
# 651 "csapp.c"
int retValue_acc;




# 657 "csapp.c"
{

#line 90 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 662 "csapp.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 664 "csapp.c"
return (int )retValue_acc;
 
# 667 "csapp.c"

}

# 671 "csapp.c"
return (int )retValue_acc;

# 674 "csapp.c"

}
 
#line 99 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putc_unlocked(int __c,  FILE *__stream)  
# 680 "csapp.c"
{
# 682 "csapp.c"
int retValue_acc;




# 688 "csapp.c"
{

#line 100 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 693 "csapp.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 695 "csapp.c"
return (int )retValue_acc;
 
# 698 "csapp.c"

}

# 702 "csapp.c"
return (int )retValue_acc;

# 705 "csapp.c"

}
 
#line 106 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar_unlocked(int __c)  
# 711 "csapp.c"
{
# 713 "csapp.c"
int retValue_acc;




# 719 "csapp.c"
{

#line 107 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 724 "csapp.c"
retValue_acc = ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c)))));
# 726 "csapp.c"
return (int )retValue_acc;
 
# 729 "csapp.c"

}

# 733 "csapp.c"
return (int )retValue_acc;

# 736 "csapp.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  
# 742 "csapp.c"
{
# 744 "csapp.c"
int retValue_acc;




# 750 "csapp.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 755 "csapp.c"
retValue_acc = ((((__stream)->_flags) & 0x10) != 0);
# 757 "csapp.c"
return (int )retValue_acc;
 
# 760 "csapp.c"

}

# 764 "csapp.c"
return (int )retValue_acc;

# 767 "csapp.c"

}
 
#line 133 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  
# 773 "csapp.c"
{
# 775 "csapp.c"
int retValue_acc;




# 781 "csapp.c"
{

#line 134 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 786 "csapp.c"
retValue_acc = ((((__stream)->_flags) & 0x20) != 0);
# 788 "csapp.c"
return (int )retValue_acc;
 
# 791 "csapp.c"

}

# 795 "csapp.c"
return (int )retValue_acc;

# 798 "csapp.c"

}
 
# 124 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
# 935 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk(char *__restrict __s, int __flag,  size_t __slen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vsprintf_chk(char *__restrict __s, int __flag,  size_t __slen, const char *__restrict __format,  __gnuc_va_list __ap) __attribute__  (( __nothrow__ )) ; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) sprintf(char *__restrict __s, const char *__restrict __fmt, ...)  
# 811 "csapp.c"
{
# 813 "csapp.c"
int retValue_acc;




# 819 "csapp.c"
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 824 "csapp.c"
retValue_acc = __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 826 "csapp.c"
return (int )retValue_acc;
 
# 829 "csapp.c"

}

# 833 "csapp.c"
return (int )retValue_acc;

# 836 "csapp.c"

}
 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsprintf(char *__restrict __s, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 842 "csapp.c"
{
# 844 "csapp.c"
int retValue_acc;




# 850 "csapp.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 855 "csapp.c"
retValue_acc = __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 857 "csapp.c"
return (int )retValue_acc;
 
# 860 "csapp.c"

}

# 864 "csapp.c"
return (int )retValue_acc;

# 867 "csapp.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __snprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 57 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vsnprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format,  __gnuc_va_list __ap) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) snprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt, ...)  
# 877 "csapp.c"
{
# 879 "csapp.c"
int retValue_acc;




# 885 "csapp.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 890 "csapp.c"
retValue_acc = __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 892 "csapp.c"
return (int )retValue_acc;
 
# 895 "csapp.c"

}

# 899 "csapp.c"
return (int )retValue_acc;

# 902 "csapp.c"

}
 
#line 76 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsnprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 908 "csapp.c"
{
# 910 "csapp.c"
int retValue_acc;




# 916 "csapp.c"
{

#line 78 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 921 "csapp.c"
retValue_acc = __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 923 "csapp.c"
return (int )retValue_acc;
 
# 926 "csapp.c"

}

# 930 "csapp.c"
return (int )retValue_acc;

# 933 "csapp.c"

}
 
#line 86 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __fprintf_chk( FILE *__restrict __stream, int __flag, const char *__restrict __format, ...); 
#line 87 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __printf_chk(int __flag, const char *__restrict __format, ...); 
#line 89 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vfprintf_chk( FILE *__restrict __stream, int __flag, const char *__restrict __format,  __gnuc_va_list __ap); 
#line 91 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vprintf_chk(int __flag, const char *__restrict __format,  __gnuc_va_list __ap); 
#line 96 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int fprintf( FILE *__restrict __stream, const char *__restrict __fmt, ...)  
# 947 "csapp.c"
{
# 949 "csapp.c"
int retValue_acc;




# 955 "csapp.c"
{

#line 98 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 960 "csapp.c"
retValue_acc = __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack());
# 962 "csapp.c"
return (int )retValue_acc;
 
# 965 "csapp.c"

}

# 969 "csapp.c"
return (int )retValue_acc;

# 972 "csapp.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int printf(const char *__restrict __fmt, ...)  
# 978 "csapp.c"
{
# 980 "csapp.c"
int retValue_acc;




# 986 "csapp.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 991 "csapp.c"
retValue_acc = __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack());
# 993 "csapp.c"
return (int )retValue_acc;
 
# 996 "csapp.c"

}

# 1000 "csapp.c"
return (int )retValue_acc;

# 1003 "csapp.c"

}
 
#line 115 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vprintf(const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1009 "csapp.c"
{
# 1011 "csapp.c"
int retValue_acc;




# 1017 "csapp.c"
{

#line 117 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1022 "csapp.c"
retValue_acc = __vfprintf_chk(stdout, 2 - 1, __fmt, __ap);
# 1024 "csapp.c"
return (int )retValue_acc;
 
# 1027 "csapp.c"

}

# 1031 "csapp.c"
return (int )retValue_acc;

# 1034 "csapp.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vfprintf( FILE *__restrict __stream, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1040 "csapp.c"
{
# 1042 "csapp.c"
int retValue_acc;




# 1048 "csapp.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1053 "csapp.c"
retValue_acc = __vfprintf_chk(__stream, 2 - 1, __fmt, __ap);
# 1055 "csapp.c"
return (int )retValue_acc;
 
# 1058 "csapp.c"

}

# 1062 "csapp.c"
return (int )retValue_acc;

# 1065 "csapp.c"

}
 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __dprintf_chk(int __fd, int __flag, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vdprintf_chk(int __fd, int __flag, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int dprintf(int __fd, const char *__restrict __fmt, ...)  
# 1075 "csapp.c"
{
# 1077 "csapp.c"
int retValue_acc;




# 1083 "csapp.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1088 "csapp.c"
retValue_acc = __dprintf_chk(__fd, 2 - 1, __fmt, __builtin_va_arg_pack());
# 1090 "csapp.c"
return (int )retValue_acc;
 
# 1093 "csapp.c"

}

# 1097 "csapp.c"
return (int )retValue_acc;

# 1100 "csapp.c"

}
 
#line 151 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1106 "csapp.c"
{
# 1108 "csapp.c"
int retValue_acc;




# 1114 "csapp.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1119 "csapp.c"
retValue_acc = __vdprintf_chk(__fd, 2 - 1, __fmt, __ap);
# 1121 "csapp.c"
return (int )retValue_acc;
 
# 1124 "csapp.c"

}

# 1128 "csapp.c"
return (int )retValue_acc;

# 1131 "csapp.c"

}
 
#line 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_chk(char *__str,  size_t ) __attribute__  (( __warn_unused_result__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_warn(char *__str) __asm__ ("""gets") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use fgets or getline instead, gets can't ""specify buffer size" )  )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *gets(char *__str)  
# 1141 "csapp.c"
{
# 1143 "csapp.c"
char* retValue_acc;




# 1149 "csapp.c"
{

#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__str, 2 > 1) != (( size_t )(-1))){

# 1155 "csapp.c"
retValue_acc = __gets_chk(__str, __builtin_object_size(__str, 2 > 1));
# 1157 "csapp.c"
return (char* )retValue_acc;
 }
#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1162 "csapp.c"
retValue_acc = __gets_warn(__str);
# 1164 "csapp.c"
return (char* )retValue_acc;
 
# 1167 "csapp.c"

}

# 1171 "csapp.c"
return (char* )retValue_acc;

# 1174 "csapp.c"

}
 
#line 242 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 243 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_alias(char *__restrict __s, int __n,  FILE *__restrict __stream) __asm__ ("""fgets") __attribute__  (( __warn_unused_result__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk_warn(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __asm__ ("""__fgets_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fgets called with bigger size than length ""of destination buffer" )  )) ; 
#line 254 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream)  
# 1186 "csapp.c"
{
# 1188 "csapp.c"
char* retValue_acc;




# 1194 "csapp.c"
{

#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1))){
{ 
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__n)) || __n <= 0){

# 1203 "csapp.c"
retValue_acc = __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 1205 "csapp.c"
return (char* )retValue_acc;
 }
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((( size_t )__n) > __builtin_object_size(__s, 2 > 1)){

# 1211 "csapp.c"
retValue_acc = __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 1213 "csapp.c"
return (char* )retValue_acc;
 }} }
#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1218 "csapp.c"
retValue_acc = __fgets_alias(__s, __n, __stream);
# 1220 "csapp.c"
return (char* )retValue_acc;
 
# 1223 "csapp.c"

}

# 1227 "csapp.c"
return (char* )retValue_acc;

# 1230 "csapp.c"

}
 
#line 268 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 269 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_alias(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""fread") __attribute__  (( __warn_unused_result__ )) ; 
#line 278 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk_warn(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""__fread_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fread called with bigger size * nmemb than length ""of destination buffer" )  )) ; 
#line 283 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream)  
# 1242 "csapp.c"
{
# 1244 "csapp.c"
size_t retValue_acc;




# 1250 "csapp.c"
{

#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 1259 "csapp.c"
retValue_acc = __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1261 "csapp.c"
return (size_t )retValue_acc;
 }
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 1267 "csapp.c"
retValue_acc = __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1269 "csapp.c"
return (size_t )retValue_acc;
 }} }
#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1274 "csapp.c"
retValue_acc = __fread_alias(__ptr, __size, __n, __stream);
# 1276 "csapp.c"
return (size_t )retValue_acc;
 
# 1279 "csapp.c"

}

# 1283 "csapp.c"
return (size_t )retValue_acc;

# 1286 "csapp.c"

}
 
# 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
# 329 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern  size_t __fread_unlocked_chk(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 330 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_unlocked_alias(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""fread_unlocked") __attribute__  (( __warn_unused_result__ )) ; 
#line 339 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_unlocked_chk_warn(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""__fread_unlocked_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fread_unlocked called with bigger size * nmemb than ""length of destination buffer" )  )) ; 
#line 344 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream)  
# 1299 "csapp.c"
{
# 1301 "csapp.c"
size_t retValue_acc;




# 1307 "csapp.c"
{

#line 359 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 1316 "csapp.c"
retValue_acc = __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1318 "csapp.c"
return (size_t )retValue_acc;
 }
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 1324 "csapp.c"
retValue_acc = __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1326 "csapp.c"
return (size_t )retValue_acc;
 }} }
#line 359 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_constant_p(__size) && __builtin_constant_p(__n) && (__size | __n) < (((( size_t )1)) << (8 * sizeof ( size_t ) / 2)) && __size * __n <= 8){
{ 
#line 364 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

#line 364 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
 size_t __cnt = __size * __n;
#line 365 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

#line 365 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
char *__cptr = ((char *)__ptr);
#line 366 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__cnt == 0){

# 1343 "csapp.c"
retValue_acc = 0;
# 1345 "csapp.c"
return (size_t )retValue_acc;
 }
#line 369 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
for(;__cnt > 0;(--__cnt)) { { 
#line 371 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

#line 371 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
int __c = ((__builtin_expect((((__stream)->_IO_read_ptr) >= ((__stream)->_IO_read_end)), 0)?__uflow(__stream):(*((unsigned char *)((__stream)->_IO_read_ptr)++))));
#line 372 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__c == ((-1))){
break; }
#line 374 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
(*__cptr++) = __c; } } 
#line 376 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1361 "csapp.c"
retValue_acc = (__cptr - ((char *)__ptr)) / __size;
# 1363 "csapp.c"
return (size_t )retValue_acc;
 } }
#line 379 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1368 "csapp.c"
retValue_acc = __fread_unlocked_alias(__ptr, __size, __n, __stream);
# 1370 "csapp.c"
return (size_t )retValue_acc;
 
# 1373 "csapp.c"

}

# 1377 "csapp.c"
return (size_t )retValue_acc;

# 1380 "csapp.c"

}
 
# 938 "/usr/include/stdio.h" 2 3 4
# 9 "csapp.h" 2
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
# 1411 "csapp.c"
{
# 1413 "csapp.c"
unsigned int retValue_acc;




# 1419 "csapp.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 1424 "csapp.c"
retValue_acc = __builtin_bswap32(__bsx);
# 1426 "csapp.c"
return (unsigned int )retValue_acc;
 
# 1429 "csapp.c"

}

# 1433 "csapp.c"
return (unsigned int )retValue_acc;

# 1436 "csapp.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 1442 "csapp.c"
{
# 1444 "csapp.c"
__uint64_t retValue_acc;




# 1450 "csapp.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 1455 "csapp.c"
retValue_acc = __builtin_bswap64(__bsx);
# 1457 "csapp.c"
return (__uint64_t )retValue_acc;
 
# 1460 "csapp.c"

}

# 1464 "csapp.c"
return (__uint64_t )retValue_acc;

# 1467 "csapp.c"

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
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 145 "/usr/include/stdlib.h"
extern double atof(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 148 "/usr/include/stdlib.h"
extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 151 "/usr/include/stdlib.h"
extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 158 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
#line 279 "/usr/include/stdlib.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) atoi(const char *__nptr)  
# 1522 "csapp.c"
{
# 1524 "csapp.c"
int retValue_acc;




# 1530 "csapp.c"
{

#line 280 "/usr/include/stdlib.h"

# 1535 "csapp.c"
retValue_acc = ((int )strtol(__nptr, ((char **)(((void *)0))), 10));
# 1537 "csapp.c"
return (int )retValue_acc;
 
# 1540 "csapp.c"

}

# 1544 "csapp.c"
return (int )retValue_acc;

# 1547 "csapp.c"

}
 
#line 284 "/usr/include/stdlib.h"
extern __inline  __attribute__  (( __gnu_inline__ )) long int  __attribute__  (( __nothrow__ )) atol(const char *__nptr)  
# 1553 "csapp.c"
{
# 1555 "csapp.c"
long int retValue_acc;




# 1561 "csapp.c"
{

#line 285 "/usr/include/stdlib.h"

# 1566 "csapp.c"
retValue_acc = strtol(__nptr, ((char **)(((void *)0))), 10);
# 1568 "csapp.c"
return (long int )retValue_acc;
 
# 1571 "csapp.c"

}

# 1575 "csapp.c"
return (long int )retValue_acc;

# 1578 "csapp.c"

}
 
#line 293 "/usr/include/stdlib.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ )) long long int  __attribute__  (( __nothrow__ )) atoll(const char *__nptr)  
# 1584 "csapp.c"
{
# 1586 "csapp.c"
long long int retValue_acc;




# 1592 "csapp.c"
{

#line 294 "/usr/include/stdlib.h"

# 1597 "csapp.c"
retValue_acc = strtoll(__nptr, ((char **)(((void *)0))), 10);
# 1599 "csapp.c"
return (long long int )retValue_acc;
 
# 1602 "csapp.c"

}

# 1606 "csapp.c"
return (long long int )retValue_acc;

# 1609 "csapp.c"

}
 
# 276 "/usr/include/stdlib.h" 3 4
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a(long int __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 309 "/usr/include/stdlib.h"
extern long int a64l(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
# 1 "/usr/include/x86_64-linux-gnu/bits/select2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3 4
extern long int __fdelt_chk(long int __d); 
#line 26 "/usr/include/x86_64-linux-gnu/bits/select2.h"
extern long int __fdelt_warn(long int __d) __attribute__  (( __warning__ ( "bit outside of fd_set selected" )  )) ; 
# 129 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 40 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_major(unsigned long long int __dev)  
# 1757 "csapp.c"
{
# 1759 "csapp.c"
unsigned int retValue_acc;




# 1765 "csapp.c"
{

#line 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1770 "csapp.c"
retValue_acc = ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff));
# 1772 "csapp.c"
return (unsigned int )retValue_acc;
 
# 1775 "csapp.c"

}

# 1779 "csapp.c"
return (unsigned int )retValue_acc;

# 1782 "csapp.c"

}
 
#line 46 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  
# 1788 "csapp.c"
{
# 1790 "csapp.c"
unsigned int retValue_acc;




# 1796 "csapp.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1801 "csapp.c"
retValue_acc = (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff));
# 1803 "csapp.c"
return (unsigned int )retValue_acc;
 
# 1806 "csapp.c"

}

# 1810 "csapp.c"
return (unsigned int )retValue_acc;

# 1813 "csapp.c"

}
 
#line 52 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  
# 1819 "csapp.c"
{
# 1821 "csapp.c"
unsigned long long int retValue_acc;




# 1827 "csapp.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1832 "csapp.c"
retValue_acc = ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32));
# 1834 "csapp.c"
return (unsigned long long int )retValue_acc;
 
# 1837 "csapp.c"

}

# 1841 "csapp.c"
return (unsigned long long int )retValue_acc;

# 1844 "csapp.c"

}
 
#line 228 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
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
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 504 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern char *getenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 642 "/usr/include/stdlib.h"
extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
# 642 "/usr/include/stdlib.h" 3 4
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 717 "/usr/include/stdlib.h"
extern int system(const char *__command) __attribute__  (( __warn_unused_result__ )) ; 
# 712 "/usr/include/stdlib.h" 3 4
# 735 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 742 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 757 "/usr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
# 752 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar)  
# 2036 "csapp.c"
{
# 2038 "csapp.c"
void* retValue_acc;




# 2044 "csapp.c"
{

#line 23 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

#line 23 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
 size_t __l,__u,__idx;
#line 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

#line 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
const void *__p;
#line 25 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

#line 25 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
int __comparison;
#line 27 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__l = 0; 
#line 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__u = __nmemb; 
#line 29 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
while(__l < __u) { { 
#line 31 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__idx = (__l + __u) / 2; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__p = ((void *)((((const char *)__base)) + (__idx * __size))); 
#line 33 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__comparison = ((*__compar))(__key, __p); 
#line 34 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
if (__comparison < 0){
__u = __idx; }else{
if (__comparison > 0){
__l = __idx + 1; }else{

# 2077 "csapp.c"
retValue_acc = ((void *)__p);
# 2079 "csapp.c"
return (void* )retValue_acc;
 }}} } 
#line 42 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

# 2084 "csapp.c"
retValue_acc = (((void *)0));
# 2086 "csapp.c"
return (void* )retValue_acc;
 
# 2089 "csapp.c"

}

# 2093 "csapp.c"
return (void* )retValue_acc;

# 2096 "csapp.c"

}
 
#line 766 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
# 761 "/usr/include/stdlib.h" 2 3 4
# 775 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 776 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 781 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 790 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 792 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 799 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 813 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 819 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 825 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 832 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 837 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
# 812 "/usr/include/stdlib.h" 3 4
# 902 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 952 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 951 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) double  __attribute__  (( __nothrow__ )) atof(const char *__nptr)  
# 2156 "csapp.c"
{
# 2158 "csapp.c"
double retValue_acc;




# 2164 "csapp.c"
{

#line 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"

# 2169 "csapp.c"
retValue_acc = strtod(__nptr, ((char **)(((void *)0))));
# 2171 "csapp.c"
return (double )retValue_acc;
 
# 2174 "csapp.c"

}

# 2178 "csapp.c"
return (double )retValue_acc;

# 2181 "csapp.c"

}
 
# 956 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk(const char *__restrict __name, char *__restrict __resolved,  size_t __resolvedlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 26 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern char *__realpath_alias(const char *__restrict __name, char *__restrict __resolved) __asm__ ("""realpath") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 33 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern char *__realpath_chk_warn(const char *__restrict __name, char *__restrict __resolved,  size_t __resolvedlen) __asm__ ("""__realpath_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "second argument of realpath must be either NULL or at ""least PATH_MAX bytes long buffer" )  )) ; 
#line 38 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) realpath(const char *__restrict __name, char *__restrict __resolved)  
# 2195 "csapp.c"
{
# 2197 "csapp.c"
char* retValue_acc;




# 2203 "csapp.c"
{

#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__resolved, 2 > 1) != (( size_t )(-1))){
{ 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2211 "csapp.c"
retValue_acc = __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
# 2213 "csapp.c"
return (char* )retValue_acc;
 } }
#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2218 "csapp.c"
retValue_acc = __realpath_alias(__name, __resolved);
# 2220 "csapp.c"
return (char* )retValue_acc;
 
# 2223 "csapp.c"

}

# 2227 "csapp.c"
return (char* )retValue_acc;

# 2230 "csapp.c"

}
 
#line 53 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ptsname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ptsname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ptsname_r called with buflen bigger than ""size of buf" )  )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ptsname_r(int __fd, char *__buf,  size_t __buflen)  
# 2242 "csapp.c"
{
# 2244 "csapp.c"
int retValue_acc;




# 2250 "csapp.c"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__buflen))){

# 2259 "csapp.c"
retValue_acc = __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 2261 "csapp.c"
return (int )retValue_acc;
 }
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 2267 "csapp.c"
retValue_acc = __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 2269 "csapp.c"
return (int )retValue_acc;
 }} }
#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2274 "csapp.c"
retValue_acc = __ptsname_r_alias(__fd, __buf, __buflen);
# 2276 "csapp.c"
return (int )retValue_acc;
 
# 2279 "csapp.c"

}

# 2283 "csapp.c"
return (int )retValue_acc;

# 2286 "csapp.c"

}
 
#line 78 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_chk(char *__s,  wchar_t __wchar,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_alias(char *__s,  wchar_t __wchar) __asm__ ("""wctomb") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 84 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) int  __attribute__  (( __nothrow__ )) wctomb(char *__s,  wchar_t __wchar)  
# 2296 "csapp.c"
{
# 2298 "csapp.c"
int retValue_acc;




# 2304 "csapp.c"
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1)) && 16 > __builtin_object_size(__s, 2 > 1)){

# 2310 "csapp.c"
retValue_acc = __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1));
# 2312 "csapp.c"
return (int )retValue_acc;
 }
#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2317 "csapp.c"
retValue_acc = __wctomb_alias(__s, __wchar);
# 2319 "csapp.c"
return (int )retValue_acc;
 
# 2322 "csapp.c"

}

# 2326 "csapp.c"
return (int )retValue_acc;

# 2329 "csapp.c"

}
 
#line 100 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 101 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_alias( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len) __asm__ ("""mbstowcs") __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk_warn( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__mbstowcs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "mbstowcs called with dst buffer smaller than len ""* sizeof (wchar_t)" )  )) ; 
#line 114 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) mbstowcs( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len)  
# 2341 "csapp.c"
{
# 2343 "csapp.c"
size_t retValue_acc;




# 2349 "csapp.c"
{

#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 2358 "csapp.c"
retValue_acc = __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 2360 "csapp.c"
return (size_t )retValue_acc;
 }
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t )){

# 2366 "csapp.c"
retValue_acc = __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 2368 "csapp.c"
return (size_t )retValue_acc;
 }} }
#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2373 "csapp.c"
retValue_acc = __mbstowcs_alias(__dst, __src, __len);
# 2375 "csapp.c"
return (size_t )retValue_acc;
 
# 2378 "csapp.c"

}

# 2382 "csapp.c"
return (size_t )retValue_acc;

# 2385 "csapp.c"

}
 
#line 131 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_alias(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len) __asm__ ("""wcstombs") __attribute__  (( __nothrow__ )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk_warn(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__wcstombs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "wcstombs called with dst buffer smaller than len" )  )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) wcstombs(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len)  
# 2397 "csapp.c"
{
# 2399 "csapp.c"
size_t retValue_acc;




# 2405 "csapp.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 2414 "csapp.c"
retValue_acc = __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 2416 "csapp.c"
return (size_t )retValue_acc;
 }
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1)){

# 2422 "csapp.c"
retValue_acc = __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 2424 "csapp.c"
return (size_t )retValue_acc;
 }} }
#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2429 "csapp.c"
retValue_acc = __wcstombs_alias(__dst, __src, __len);
# 2431 "csapp.c"
return (size_t )retValue_acc;
 
# 2434 "csapp.c"

}

# 2438 "csapp.c"
return (size_t )retValue_acc;

# 2441 "csapp.c"

}
 
# 960 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 10 "csapp.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 1 3 4
# 11 "csapp.h" 2
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
extern int faccessat(int __fd, const char *__file, int __type, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
# 304 "/usr/include/unistd.h" 3 4
# 334 "/usr/include/unistd.h" 3 4
extern  __off_t lseek(int __fd,  __off_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 353 "/usr/include/unistd.h"
extern int close(int __fd); 
#line 360 "/usr/include/unistd.h"
extern  ssize_t read(int __fd, void *__buf,  size_t __nbytes) __attribute__  (( __warn_unused_result__ )) ; 
#line 366 "/usr/include/unistd.h"
extern  ssize_t write(int __fd, const void *__buf,  size_t __n) __attribute__  (( __warn_unused_result__ )) ; 
# 353 "/usr/include/unistd.h" 3 4
# 377 "/usr/include/unistd.h" 3 4
extern  ssize_t pread(int __fd, void *__buf,  size_t __nbytes,  __off_t __offset) __attribute__  (( __warn_unused_result__ )) ; 
#line 385 "/usr/include/unistd.h"
extern  ssize_t pwrite(int __fd, const void *__buf,  size_t __n,  __off_t __offset) __attribute__  (( __warn_unused_result__ )) ; 
#line 417 "/usr/include/unistd.h"
extern int pipe(int __pipedes[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int chown(const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 478 "/usr/include/unistd.h"
extern int fchown(int __fd,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 484 "/usr/include/unistd.h"
extern int lchown(const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 493 "/usr/include/unistd.h"
extern int fchownat(int __fd, const char *__file,  __uid_t __owner,  __gid_t __group, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 497 "/usr/include/unistd.h"
extern int chdir(const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 501 "/usr/include/unistd.h"
extern int fchdir(int __fd) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 511 "/usr/include/unistd.h"
extern char *getcwd(char *__buf,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
# 511 "/usr/include/unistd.h" 3 4
# 526 "/usr/include/unistd.h" 3 4
extern char *getwd(char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 531 "/usr/include/unistd.h"
extern int dup(int __fd) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int nice(int __inc) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int getgroups(int __size,  __gid_t __list[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 700 "/usr/include/unistd.h"
extern int setuid( __uid_t __uid) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 705 "/usr/include/unistd.h"
extern int setreuid( __uid_t __ruid,  __uid_t __euid) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 710 "/usr/include/unistd.h"
extern int seteuid( __uid_t __uid) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 717 "/usr/include/unistd.h"
extern int setgid( __gid_t __gid) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 722 "/usr/include/unistd.h"
extern int setregid( __gid_t __rgid,  __gid_t __egid) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 727 "/usr/include/unistd.h"
extern int setegid( __gid_t __gid) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
# 700 "/usr/include/unistd.h" 3 4
# 756 "/usr/include/unistd.h" 3 4
extern  __pid_t fork(void ) __attribute__  (( __nothrow__ )) ; 
#line 764 "/usr/include/unistd.h"
extern  __pid_t vfork(void ) __attribute__  (( __nothrow__ )) ; 
#line 770 "/usr/include/unistd.h"
extern char *ttyname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 775 "/usr/include/unistd.h"
extern int ttyname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 779 "/usr/include/unistd.h"
extern int isatty(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 785 "/usr/include/unistd.h"
extern int ttyslot(void ) __attribute__  (( __nothrow__ )) ; 
#line 791 "/usr/include/unistd.h"
extern int link(const char *__from, const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 798 "/usr/include/unistd.h"
extern int linkat(int __fromfd, const char *__from, int __tofd, const char *__to, int __flags) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 804 "/usr/include/unistd.h"
extern int symlink(const char *__from, const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 811 "/usr/include/unistd.h"
extern  ssize_t readlink(const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 817 "/usr/include/unistd.h"
extern int symlinkat(const char *__from, int __tofd, const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 822 "/usr/include/unistd.h"
extern  ssize_t readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int sethostname(const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 891 "/usr/include/unistd.h"
extern int sethostid(long int __id) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 898 "/usr/include/unistd.h"
extern int getdomainname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 900 "/usr/include/unistd.h"
extern int setdomainname(const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 906 "/usr/include/unistd.h"
extern int vhangup(void ) __attribute__  (( __nothrow__ )) ; 
#line 909 "/usr/include/unistd.h"
extern int revoke(const char *__file) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int daemon(int __nochdir, int __noclose) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 944 "/usr/include/unistd.h"
extern int chroot(const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
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
extern int truncate(const char *__file,  __off_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
# 993 "/usr/include/unistd.h" 3 4
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate(int __fd,  __off_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 1037 "/usr/include/unistd.h"
extern int brk(void *__addr) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 1043 "/usr/include/unistd.h"
extern void *sbrk( intptr_t __delta) __attribute__  (( __nothrow__ )) ; 
# 1037 "/usr/include/unistd.h" 3 4
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall(long int __sysno, ...) __attribute__  (( __nothrow__ )) ; 
#line 1081 "/usr/include/unistd.h"
extern int lockf(int __fd, int __cmd,  __off_t __len) __attribute__  (( __warn_unused_result__ )) ; 
# 1081 "/usr/include/unistd.h" 3 4
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync(int __fildes); 
# 1148 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
extern  ssize_t __read_chk(int __fd, void *__buf,  size_t __nbytes,  size_t __buflen) __attribute__  (( __warn_unused_result__ )) ; 
#line 25 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __read_alias(int __fd, void *__buf,  size_t __nbytes) __asm__ ("""read") __attribute__  (( __warn_unused_result__ )) ; 
#line 30 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __read_chk_warn(int __fd, void *__buf,  size_t __nbytes,  size_t __buflen) __asm__ ("""__read_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "read called with bigger length than size of ""the destination buffer" )  )) ; 
#line 34 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  ssize_t read(int __fd, void *__buf,  size_t __nbytes)  
# 2722 "csapp.c"
{
# 2724 "csapp.c"
ssize_t retValue_acc;




# 2730 "csapp.c"
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 0) != (( size_t )(-1))){
{ 
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__nbytes))){

# 2739 "csapp.c"
retValue_acc = __read_chk(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2741 "csapp.c"
return (ssize_t )retValue_acc;
 }
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__nbytes > __builtin_object_size(__buf, 0)){

# 2747 "csapp.c"
retValue_acc = __read_chk_warn(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2749 "csapp.c"
return (ssize_t )retValue_acc;
 }} }
#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2754 "csapp.c"
retValue_acc = __read_alias(__fd, __buf, __nbytes);
# 2756 "csapp.c"
return (ssize_t )retValue_acc;
 
# 2759 "csapp.c"

}

# 2763 "csapp.c"
return (ssize_t )retValue_acc;

# 2766 "csapp.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_alias(const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlink") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk_warn(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlink_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlink called with bigger length ""than size of destination buffer" )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlink(const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2778 "csapp.c"
{
# 2780 "csapp.c"
ssize_t retValue_acc;




# 2786 "csapp.c"
{

#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2795 "csapp.c"
retValue_acc = __readlink_chk(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2797 "csapp.c"
return (ssize_t )retValue_acc;
 }
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2803 "csapp.c"
retValue_acc = __readlink_chk_warn(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2805 "csapp.c"
return (ssize_t )retValue_acc;
 }} }
#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2810 "csapp.c"
retValue_acc = __readlink_alias(__path, __buf, __len);
# 2812 "csapp.c"
return (ssize_t )retValue_acc;
 
# 2815 "csapp.c"

}

# 2819 "csapp.c"
return (ssize_t )retValue_acc;

# 2822 "csapp.c"

}
 
#line 157 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_alias(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlinkat") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk_warn(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlinkat_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlinkat called with bigger ""length than size of destination ""buffer" )  )) ; 
#line 173 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2834 "csapp.c"
{
# 2836 "csapp.c"
ssize_t retValue_acc;




# 2842 "csapp.c"
{

#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2851 "csapp.c"
retValue_acc = __readlinkat_chk(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2853 "csapp.c"
return (ssize_t )retValue_acc;
 }
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2859 "csapp.c"
retValue_acc = __readlinkat_chk_warn(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2861 "csapp.c"
return (ssize_t )retValue_acc;
 }} }
#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2866 "csapp.c"
retValue_acc = __readlinkat_alias(__fd, __path, __buf, __len);
# 2868 "csapp.c"
return (ssize_t )retValue_acc;
 
# 2871 "csapp.c"

}

# 2875 "csapp.c"
return (ssize_t )retValue_acc;

# 2878 "csapp.c"

}
 
#line 188 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk(char *__buf,  size_t __size,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_alias(char *__buf,  size_t __size) __asm__ ("""getcwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 194 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk_warn(char *__buf,  size_t __size,  size_t __buflen) __asm__ ("""__getcwd_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getcwd caller with bigger length than size of ""destination buffer" )  )) ; 
#line 199 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getcwd(char *__buf,  size_t __size)  
# 2890 "csapp.c"
{
# 2892 "csapp.c"
char* retValue_acc;




# 2898 "csapp.c"
{

#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size))){

# 2907 "csapp.c"
retValue_acc = __getcwd_chk(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 2909 "csapp.c"
return (char* )retValue_acc;
 }
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size > __builtin_object_size(__buf, 2 > 1)){

# 2915 "csapp.c"
retValue_acc = __getcwd_chk_warn(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 2917 "csapp.c"
return (char* )retValue_acc;
 }} }
#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2922 "csapp.c"
retValue_acc = __getcwd_alias(__buf, __size);
# 2924 "csapp.c"
return (char* )retValue_acc;
 
# 2927 "csapp.c"

}

# 2931 "csapp.c"
return (char* )retValue_acc;

# 2934 "csapp.c"

}
 
#line 213 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_chk(char *__buf,  size_t buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 215 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_warn(char *__buf) __asm__ ("""getwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use getcwd instead, as getwd ""doesn't specify buffer size" )  )) ; 
#line 220 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getwd(char *__buf)  
# 2944 "csapp.c"
{
# 2946 "csapp.c"
char* retValue_acc;




# 2952 "csapp.c"
{

#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){

# 2958 "csapp.c"
retValue_acc = __getwd_chk(__buf, __builtin_object_size(__buf, 2 > 1));
# 2960 "csapp.c"
return (char* )retValue_acc;
 }
#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2965 "csapp.c"
retValue_acc = __getwd_warn(__buf);
# 2967 "csapp.c"
return (char* )retValue_acc;
 
# 2970 "csapp.c"

}

# 2974 "csapp.c"
return (char* )retValue_acc;

# 2977 "csapp.c"

}
 
#line 228 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk(int __name, char *__buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_alias(int __name, char *__buf,  size_t __len) __asm__ ("""confstr") __attribute__  (( __nothrow__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk_warn(int __name, char *__buf,  size_t __len,  size_t __buflen) __asm__ ("""__confstr_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "confstr called with bigger length than size of destination ""buffer" )  )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) confstr(int __name, char *__buf,  size_t __len)  
# 2989 "csapp.c"
{
# 2991 "csapp.c"
size_t retValue_acc;




# 2997 "csapp.c"
{

#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 3006 "csapp.c"
retValue_acc = __confstr_chk(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3008 "csapp.c"
return (size_t )retValue_acc;
 }
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) < __len){

# 3014 "csapp.c"
retValue_acc = __confstr_chk_warn(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3016 "csapp.c"
return (size_t )retValue_acc;
 }} }
#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3021 "csapp.c"
retValue_acc = __confstr_alias(__name, __buf, __len);
# 3023 "csapp.c"
return (size_t )retValue_acc;
 
# 3026 "csapp.c"

}

# 3030 "csapp.c"
return (size_t )retValue_acc;

# 3033 "csapp.c"

}
 
#line 252 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk(int __size,  __gid_t __list[],  size_t __listlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 253 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_alias(int __size,  __gid_t __list[]) __asm__ ("""getgroups") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk_warn(int __size,  __gid_t __list[],  size_t __listlen) __asm__ ("""__getgroups_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getgroups called with bigger group count than what ""can fit into destination buffer" )  )) ; 
#line 263 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getgroups(int __size,  __gid_t __list[])  
# 3045 "csapp.c"
{
# 3047 "csapp.c"
int retValue_acc;




# 3053 "csapp.c"
{

#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__list, 2 > 1) != (( size_t )(-1))){
{ 
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size)) || __size < 0){

# 3062 "csapp.c"
retValue_acc = __getgroups_chk(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3064 "csapp.c"
return (int )retValue_acc;
 }
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size * sizeof ( __gid_t ) > __builtin_object_size(__list, 2 > 1)){

# 3070 "csapp.c"
retValue_acc = __getgroups_chk_warn(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3072 "csapp.c"
return (int )retValue_acc;
 }} }
#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3077 "csapp.c"
retValue_acc = __getgroups_alias(__size, __list);
# 3079 "csapp.c"
return (int )retValue_acc;
 
# 3082 "csapp.c"

}

# 3086 "csapp.c"
return (int )retValue_acc;

# 3089 "csapp.c"

}
 
#line 277 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 280 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ttyname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ttyname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ttyname_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 289 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ttyname_r(int __fd, char *__buf,  size_t __buflen)  
# 3101 "csapp.c"
{
# 3103 "csapp.c"
int retValue_acc;




# 3109 "csapp.c"
{

#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3118 "csapp.c"
retValue_acc = __ttyname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3120 "csapp.c"
return (int )retValue_acc;
 }
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3126 "csapp.c"
retValue_acc = __ttyname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3128 "csapp.c"
return (int )retValue_acc;
 }} }
#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3133 "csapp.c"
retValue_acc = __ttyname_r_alias(__fd, __buf, __buflen);
# 3135 "csapp.c"
return (int )retValue_acc;
 
# 3138 "csapp.c"

}

# 3142 "csapp.c"
return (int )retValue_acc;

# 3145 "csapp.c"

}
 
#line 304 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_alias(char *__buf,  size_t __buflen) __asm__ ("""getlogin_r") __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 310 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getlogin_r_chk") __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "getlogin_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 315 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int getlogin_r(char *__buf,  size_t __buflen)  
# 3157 "csapp.c"
{
# 3159 "csapp.c"
int retValue_acc;




# 3165 "csapp.c"
{

#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3174 "csapp.c"
retValue_acc = __getlogin_r_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3176 "csapp.c"
return (int )retValue_acc;
 }
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3182 "csapp.c"
retValue_acc = __getlogin_r_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3184 "csapp.c"
return (int )retValue_acc;
 }} }
#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3189 "csapp.c"
retValue_acc = __getlogin_r_alias(__buf, __buflen);
# 3191 "csapp.c"
return (int )retValue_acc;
 
# 3194 "csapp.c"

}

# 3198 "csapp.c"
return (int )retValue_acc;

# 3201 "csapp.c"

}
 
#line 331 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 332 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_alias(char *__buf,  size_t __buflen) __asm__ ("""gethostname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__gethostname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "gethostname called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 342 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) gethostname(char *__buf,  size_t __buflen)  
# 3213 "csapp.c"
{
# 3215 "csapp.c"
int retValue_acc;




# 3221 "csapp.c"
{

#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3230 "csapp.c"
retValue_acc = __gethostname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3232 "csapp.c"
return (int )retValue_acc;
 }
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3238 "csapp.c"
retValue_acc = __gethostname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3240 "csapp.c"
return (int )retValue_acc;
 }} }
#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3245 "csapp.c"
retValue_acc = __gethostname_alias(__buf, __buflen);
# 3247 "csapp.c"
return (int )retValue_acc;
 
# 3250 "csapp.c"

}

# 3254 "csapp.c"
return (int )retValue_acc;

# 3257 "csapp.c"

}
 
#line 358 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 359 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_alias(char *__buf,  size_t __buflen) __asm__ ("""getdomainname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 365 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getdomainname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getdomainname called with bigger ""buflen than size of destination ""buffer" )  )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getdomainname(char *__buf,  size_t __buflen)  
# 3269 "csapp.c"
{
# 3271 "csapp.c"
int retValue_acc;




# 3277 "csapp.c"
{

#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3286 "csapp.c"
retValue_acc = __getdomainname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3288 "csapp.c"
return (int )retValue_acc;
 }
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3294 "csapp.c"
retValue_acc = __getdomainname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3296 "csapp.c"
return (int )retValue_acc;
 }} }
#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3301 "csapp.c"
retValue_acc = __getdomainname_alias(__buf, __buflen);
# 3303 "csapp.c"
return (int )retValue_acc;
 
# 3306 "csapp.c"

}

# 3310 "csapp.c"
return (int )retValue_acc;

# 3313 "csapp.c"

}
 
# 123 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
# 1149 "/usr/include/unistd.h" 2 3 4
# 12 "csapp.h" 2
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
# 632 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string.h" 1 3 4
# 633 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string2.h" 1 3 4
# 393 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern void *__rawmemchr(const void *__s, int __c); 
#line 945 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c1(const char *__s, int __reject); 
#line 947 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c1(const char *__s, int __reject)  
# 3443 "csapp.c"
{
# 3445 "csapp.c"
size_t retValue_acc;




# 3451 "csapp.c"
{

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 949 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 951 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3462 "csapp.c"
retValue_acc = __result;
# 3464 "csapp.c"
return (size_t )retValue_acc;
 
# 3467 "csapp.c"

}

# 3471 "csapp.c"
return (size_t )retValue_acc;

# 3474 "csapp.c"

}
 
#line 955 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2); 
#line 957 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2)  
# 3482 "csapp.c"
{
# 3484 "csapp.c"
size_t retValue_acc;




# 3490 "csapp.c"
{

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 959 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 962 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3501 "csapp.c"
retValue_acc = __result;
# 3503 "csapp.c"
return (size_t )retValue_acc;
 
# 3506 "csapp.c"

}

# 3510 "csapp.c"
return (size_t )retValue_acc;

# 3513 "csapp.c"

}
 
#line 966 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3); 
#line 969 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3)  
# 3521 "csapp.c"
{
# 3523 "csapp.c"
size_t retValue_acc;




# 3529 "csapp.c"
{

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 971 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 974 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3540 "csapp.c"
retValue_acc = __result;
# 3542 "csapp.c"
return (size_t )retValue_acc;
 
# 3545 "csapp.c"

}

# 3549 "csapp.c"
return (size_t )retValue_acc;

# 3552 "csapp.c"

}
 
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept); 
#line 1023 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept)  
# 3561 "csapp.c"
{
# 3563 "csapp.c"
size_t retValue_acc;




# 3569 "csapp.c"
{

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1026 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept) { (++__result); } 
#line 1028 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3580 "csapp.c"
retValue_acc = __result;
# 3582 "csapp.c"
return (size_t )retValue_acc;
 
# 3585 "csapp.c"

}

# 3589 "csapp.c"
return (size_t )retValue_acc;

# 3592 "csapp.c"

}
 
#line 1032 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2); 
#line 1034 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2)  
# 3600 "csapp.c"
{
# 3602 "csapp.c"
size_t retValue_acc;




# 3608 "csapp.c"
{

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1037 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 1039 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3619 "csapp.c"
retValue_acc = __result;
# 3621 "csapp.c"
return (size_t )retValue_acc;
 
# 3624 "csapp.c"

}

# 3628 "csapp.c"
return (size_t )retValue_acc;

# 3631 "csapp.c"

}
 
#line 1043 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1045 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 3639 "csapp.c"
{
# 3641 "csapp.c"
size_t retValue_acc;




# 3647 "csapp.c"
{

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1048 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 1051 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3658 "csapp.c"
retValue_acc = __result;
# 3660 "csapp.c"
return (size_t )retValue_acc;
 
# 3663 "csapp.c"

}

# 3667 "csapp.c"
return (size_t )retValue_acc;

# 3670 "csapp.c"

}
 
#line 1098 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2); 
#line 1101 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2)  
# 3678 "csapp.c"
{
# 3680 "csapp.c"
char* retValue_acc;




# 3686 "csapp.c"
{

#line 1104 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 1105 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3693 "csapp.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 3695 "csapp.c"
return (char* )retValue_acc;
 
# 3698 "csapp.c"

}

# 3702 "csapp.c"
return (char* )retValue_acc;

# 3705 "csapp.c"

}
 
#line 1109 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1112 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 3713 "csapp.c"
{
# 3715 "csapp.c"
char* retValue_acc;




# 3721 "csapp.c"
{

#line 1116 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 1117 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3728 "csapp.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 3730 "csapp.c"
return (char* )retValue_acc;
 
# 3733 "csapp.c"

}

# 3737 "csapp.c"
return (char* )retValue_acc;

# 3740 "csapp.c"

}
 
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 1150 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  
# 3749 "csapp.c"
{
# 3751 "csapp.c"
char* retValue_acc;




# 3757 "csapp.c"
{

#line 1151 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1151 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__result;
#line 1152 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__s == (((void *)0))){
__s = (*__nextp); }
#line 1154 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) == __sep) { (++__s); } 
#line 1156 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__result = (((void *)0)); 
#line 1157 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if ((*__s) != '\0'){
{ 
#line 1159 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__result = __s++; 
#line 1160 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0') { if ((*__s++) == __sep){
{ 
#line 1163 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__s[(-1)] = '\0'; 
#line 1164 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break; } }} } }
#line 1167 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*__nextp) = __s; 
#line 1168 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3787 "csapp.c"
retValue_acc = __result;
# 3789 "csapp.c"
return (char* )retValue_acc;
 
# 3792 "csapp.c"

}

# 3796 "csapp.c"
return (char* )retValue_acc;

# 3799 "csapp.c"

}
 
#line 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern char *__strsep_g(char **__stringp, const char *__delim); 
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject); 
#line 1200 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject)  
# 3810 "csapp.c"
{
# 3812 "csapp.c"
char* retValue_acc;




# 3818 "csapp.c"
{

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__retval = (*__s);
#line 1202 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 1204 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3830 "csapp.c"
retValue_acc = __retval;
# 3832 "csapp.c"
return (char* )retValue_acc;
 
# 3835 "csapp.c"

}

# 3839 "csapp.c"
return (char* )retValue_acc;

# 3842 "csapp.c"

}
 
#line 1207 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 1210 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2)  
# 3850 "csapp.c"
{
# 3852 "csapp.c"
char* retValue_acc;




# 3858 "csapp.c"
{

#line 1211 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1211 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__retval = (*__s);
#line 1212 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__retval != (((void *)0))){
{ 
#line 1214 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1214 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__cp = __retval;
#line 1215 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(1) { { 
#line 1222 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if ((*__cp) == '\0'){
{ 
#line 1219 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__cp = (((void *)0)); 
#line 1220 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break; } }
#line 1222 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if ((*__cp) == __reject1 || (*__cp) == __reject2){
{ 
#line 1224 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*__cp++) = '\0'; 
#line 1225 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break; } }
#line 1227 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(++__cp); } } 
#line 1229 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*__s) = __cp; } }
#line 1231 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3894 "csapp.c"
retValue_acc = __retval;
# 3896 "csapp.c"
return (char* )retValue_acc;
 
# 3899 "csapp.c"

}

# 3903 "csapp.c"
return (char* )retValue_acc;

# 3906 "csapp.c"

}
 
#line 1235 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 1238 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  
# 3914 "csapp.c"
{
# 3916 "csapp.c"
char* retValue_acc;




# 3922 "csapp.c"
{

#line 1239 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1239 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__retval = (*__s);
#line 1240 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__retval != (((void *)0))){
{ 
#line 1242 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1242 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__cp = __retval;
#line 1243 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(1) { { 
#line 1250 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if ((*__cp) == '\0'){
{ 
#line 1247 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__cp = (((void *)0)); 
#line 1248 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break; } }
#line 1250 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if ((*__cp) == __reject1 || (*__cp) == __reject2 || (*__cp) == __reject3){
{ 
#line 1252 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*__cp++) = '\0'; 
#line 1253 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break; } }
#line 1255 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(++__cp); } } 
#line 1257 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*__s) = __cp; } }
#line 1259 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3958 "csapp.c"
retValue_acc = __retval;
# 3960 "csapp.c"
return (char* )retValue_acc;
 
# 3963 "csapp.c"

}

# 3967 "csapp.c"
return (char* )retValue_acc;

# 3970 "csapp.c"

}
 
#line 1278 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern char *__strdup(const char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
# 1278 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1298 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strndup(const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
# 636 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string3.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern void __warn_memset_zero_len(void ) __attribute__  (( __warning__ ( "memset used with constant zero length parameter; this could be due to transposed parameters" )  )) ; 
#line 50 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memcpy(void *__restrict __dest, const void *__restrict __src,  size_t __len)  
# 3985 "csapp.c"
{
# 3987 "csapp.c"
void* retValue_acc;




# 3993 "csapp.c"
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 3998 "csapp.c"
retValue_acc = __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 4000 "csapp.c"
return (void* )retValue_acc;
 
# 4003 "csapp.c"

}

# 4007 "csapp.c"
return (void* )retValue_acc;

# 4010 "csapp.c"

}
 
#line 56 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memmove(void *__dest, const void *__src,  size_t __len)  
# 4016 "csapp.c"
{
# 4018 "csapp.c"
void* retValue_acc;




# 4024 "csapp.c"
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4029 "csapp.c"
retValue_acc = __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 4031 "csapp.c"
return (void* )retValue_acc;
 
# 4034 "csapp.c"

}

# 4038 "csapp.c"
return (void* )retValue_acc;

# 4041 "csapp.c"

}
 
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memset(void *__dest, int __ch,  size_t __len)  
# 4048 "csapp.c"
{
# 4050 "csapp.c"
void* retValue_acc;




# 4056 "csapp.c"
{

#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_constant_p(__len) && __len == 0 && ((!__builtin_constant_p(__ch)) || __ch != 0)){
{ 
#line 81 "/usr/include/x86_64-linux-gnu/bits/string3.h"
__warn_memset_zero_len(); 
#line 82 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4066 "csapp.c"
retValue_acc = __dest;
# 4068 "csapp.c"
return (void* )retValue_acc;
 } }
#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4073 "csapp.c"
retValue_acc = __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
# 4075 "csapp.c"
return (void* )retValue_acc;
 
# 4078 "csapp.c"

}

# 4082 "csapp.c"
return (void* )retValue_acc;

# 4085 "csapp.c"

}
 
#line 90 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bcopy(const void *__src, void *__dest,  size_t __len)  
# 4091 "csapp.c"
{



# 4096 "csapp.c"
{

#line 91 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0))); 
# 4101 "csapp.c"

}

# 4105 "csapp.c"

}
 
#line 96 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bzero(void *__dest,  size_t __len)  
# 4111 "csapp.c"
{



# 4116 "csapp.c"
{

#line 97 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memset_chk(__dest, '\0', __len, __builtin_object_size(__dest, 0))); 
# 4121 "csapp.c"

}

# 4125 "csapp.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcpy(char *__restrict __dest, const char *__restrict __src)  
# 4131 "csapp.c"
{
# 4133 "csapp.c"
char* retValue_acc;




# 4139 "csapp.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4144 "csapp.c"
retValue_acc = __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 4146 "csapp.c"
return (char* )retValue_acc;
 
# 4149 "csapp.c"

}

# 4153 "csapp.c"
return (char* )retValue_acc;

# 4156 "csapp.c"

}
 
#line 119 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 4162 "csapp.c"
{
# 4164 "csapp.c"
char* retValue_acc;




# 4170 "csapp.c"
{

#line 120 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4175 "csapp.c"
retValue_acc = __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 4177 "csapp.c"
return (char* )retValue_acc;
 
# 4180 "csapp.c"

}

# 4184 "csapp.c"
return (char* )retValue_acc;

# 4187 "csapp.c"

}
 
#line 125 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_chk(char *__dest, const char *__src,  size_t __n,  size_t __destlen) __attribute__  (( __nothrow__ )) ; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_alias(char *__dest, const char *__src,  size_t __n) __asm__ ("""stpncpy") __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) stpncpy(char *__dest, const char *__src,  size_t __n)  
# 4197 "csapp.c"
{
# 4199 "csapp.c"
char* retValue_acc;




# 4205 "csapp.c"
{

#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_object_size(__dest, 2 > 1) != (( size_t )(-1)) && ((!__builtin_constant_p(__n)) || __n <= __builtin_object_size(__dest, 2 > 1))){

# 4211 "csapp.c"
retValue_acc = __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1));
# 4213 "csapp.c"
return (char* )retValue_acc;
 }
#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4218 "csapp.c"
retValue_acc = __stpncpy_alias(__dest, __src, __n);
# 4220 "csapp.c"
return (char* )retValue_acc;
 
# 4223 "csapp.c"

}

# 4227 "csapp.c"
return (char* )retValue_acc;

# 4230 "csapp.c"

}
 
#line 141 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcat(char *__restrict __dest, const char *__restrict __src)  
# 4236 "csapp.c"
{
# 4238 "csapp.c"
char* retValue_acc;




# 4244 "csapp.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4249 "csapp.c"
retValue_acc = __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 4251 "csapp.c"
return (char* )retValue_acc;
 
# 4254 "csapp.c"

}

# 4258 "csapp.c"
return (char* )retValue_acc;

# 4261 "csapp.c"

}
 
#line 149 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncat(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 4267 "csapp.c"
{
# 4269 "csapp.c"
char* retValue_acc;




# 4275 "csapp.c"
{

#line 150 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4280 "csapp.c"
retValue_acc = __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 4282 "csapp.c"
return (char* )retValue_acc;
 
# 4285 "csapp.c"

}

# 4289 "csapp.c"
return (char* )retValue_acc;

# 4292 "csapp.c"

}
 
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 641 "/usr/include/string.h" 2 3 4
# 13 "csapp.h" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
# 60 "/usr/include/ctype.h" 3 4
enum {_ISupper=(((0) < 8?((1 << (0)) << 8):((1 << (0)) >> 8))),_ISlower=(((1) < 8?((1 << (1)) << 8):((1 << (1)) >> 8))),_ISalpha=(((2) < 8?((1 << (2)) << 8):((1 << (2)) >> 8))),_ISdigit=(((3) < 8?((1 << (3)) << 8):((1 << (3)) >> 8))),_ISxdigit=(((4) < 8?((1 << (4)) << 8):((1 << (4)) >> 8))),_ISspace=(((5) < 8?((1 << (5)) << 8):((1 << (5)) >> 8))),_ISprint=(((6) < 8?((1 << (6)) << 8):((1 << (6)) >> 8))),_ISgraph=(((7) < 8?((1 << (7)) << 8):((1 << (7)) >> 8))),_ISblank=(((8) < 8?((1 << (8)) << 8):((1 << (8)) >> 8))),_IScntrl=(((9) < 8?((1 << (9)) << 8):((1 << (9)) >> 8))),_ISpunct=(((10) < 8?((1 << (10)) << 8):((1 << (10)) >> 8))),_ISalnum=(((11) < 8?((1 << (11)) << 8):((1 << (11)) >> 8)))}; 
#line 80 "/usr/include/ctype.h"
extern const unsigned short int **__ctype_b_loc(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 82 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_tolower_loc(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 84 "/usr/include/ctype.h"
extern const  __int32_t **__ctype_toupper_loc(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 79 "/usr/include/ctype.h" 3 4
# 110 "/usr/include/ctype.h" 3 4
extern int isalnum(int ) __attribute__  (( __nothrow__ )) ; 
#line 111 "/usr/include/ctype.h"
extern int isalpha(int ) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/ctype.h"
extern int iscntrl(int ) __attribute__  (( __nothrow__ )) ; 
#line 113 "/usr/include/ctype.h"
extern int isdigit(int ) __attribute__  (( __nothrow__ )) ; 
#line 114 "/usr/include/ctype.h"
extern int islower(int ) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/ctype.h"
extern int isgraph(int ) __attribute__  (( __nothrow__ )) ; 
#line 116 "/usr/include/ctype.h"
extern int isprint(int ) __attribute__  (( __nothrow__ )) ; 
#line 117 "/usr/include/ctype.h"
extern int ispunct(int ) __attribute__  (( __nothrow__ )) ; 
#line 118 "/usr/include/ctype.h"
extern int isspace(int ) __attribute__  (( __nothrow__ )) ; 
#line 119 "/usr/include/ctype.h"
extern int isupper(int ) __attribute__  (( __nothrow__ )) ; 
#line 120 "/usr/include/ctype.h"
extern int isxdigit(int ) __attribute__  (( __nothrow__ )) ; 
#line 124 "/usr/include/ctype.h"
extern int tolower(int __c) __attribute__  (( __nothrow__ )) ; 
#line 127 "/usr/include/ctype.h"
extern int toupper(int __c) __attribute__  (( __nothrow__ )) ; 
#line 136 "/usr/include/ctype.h"
extern int isblank(int ) __attribute__  (( __nothrow__ )) ; 
#line 150 "/usr/include/ctype.h"
extern int isascii(int __c) __attribute__  (( __nothrow__ )) ; 
#line 154 "/usr/include/ctype.h"
extern int toascii(int __c) __attribute__  (( __nothrow__ )) ; 
#line 158 "/usr/include/ctype.h"
extern int _toupper(int ) __attribute__  (( __nothrow__ )) ; 
#line 159 "/usr/include/ctype.h"
extern int _tolower(int ) __attribute__  (( __nothrow__ )) ; 
# 150 "/usr/include/ctype.h" 3 4
# 216 "/usr/include/ctype.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) tolower(int __c)  
# 4349 "csapp.c"
{
# 4351 "csapp.c"
int retValue_acc;




# 4357 "csapp.c"
{

#line 217 "/usr/include/ctype.h"

# 4362 "csapp.c"
retValue_acc = (__c >= (-128) && __c < 256?((*__ctype_tolower_loc()))[__c]:__c);
# 4364 "csapp.c"
return (int )retValue_acc;
 
# 4367 "csapp.c"

}

# 4371 "csapp.c"
return (int )retValue_acc;

# 4374 "csapp.c"

}
 
#line 222 "/usr/include/ctype.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) toupper(int __c)  
# 4380 "csapp.c"
{
# 4382 "csapp.c"
int retValue_acc;




# 4388 "csapp.c"
{

#line 223 "/usr/include/ctype.h"

# 4393 "csapp.c"
retValue_acc = (__c >= (-128) && __c < 256?((*__ctype_toupper_loc()))[__c]:__c);
# 4395 "csapp.c"
return (int )retValue_acc;
 
# 4398 "csapp.c"

}

# 4402 "csapp.c"
return (int )retValue_acc;

# 4405 "csapp.c"

}
 
#line 271 "/usr/include/ctype.h"
extern int isalnum_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 272 "/usr/include/ctype.h"
extern int isalpha_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 273 "/usr/include/ctype.h"
extern int iscntrl_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 274 "/usr/include/ctype.h"
extern int isdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 275 "/usr/include/ctype.h"
extern int islower_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 276 "/usr/include/ctype.h"
extern int isgraph_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 277 "/usr/include/ctype.h"
extern int isprint_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 278 "/usr/include/ctype.h"
extern int ispunct_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/ctype.h"
extern int isspace_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 280 "/usr/include/ctype.h"
extern int isupper_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 281 "/usr/include/ctype.h"
extern int isxdigit_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 283 "/usr/include/ctype.h"
extern int isblank_l(int ,  __locale_t ) __attribute__  (( __nothrow__ )) ; 
#line 287 "/usr/include/ctype.h"
extern int __tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/ctype.h"
extern int tolower_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ )) ; 
#line 291 "/usr/include/ctype.h"
extern int __toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/ctype.h"
extern int toupper_l(int __c,  __locale_t __l) __attribute__  (( __nothrow__ )) ; 
# 271 "/usr/include/ctype.h" 3 4
# 347 "/usr/include/ctype.h" 3 4
# 14 "csapp.h" 2
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4
typedef long int __jmp_buf[8]; 
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 43 "/usr/include/setjmp.h" 2 3 4
struct __jmp_buf_tag { __jmp_buf __jmpbuf; int __mask_was_saved;  __sigset_t __saved_mask; 
}; 
#line 48 "/usr/include/setjmp.h"
typedef struct __jmp_buf_tag jmp_buf[1]; 
#line 52 "/usr/include/setjmp.h"
extern int setjmp( jmp_buf __env) __attribute__  (( __nothrow__ )) ; 
#line 59 "/usr/include/setjmp.h"
extern int __sigsetjmp(struct __jmp_buf_tag __env[1], int __savemask) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/setjmp.h"
extern int _setjmp(struct __jmp_buf_tag __env[1]) __attribute__  (( __nothrow__ )) ; 
#line 75 "/usr/include/setjmp.h"
extern void longjmp(struct __jmp_buf_tag __env[1], int __val) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 84 "/usr/include/setjmp.h"
extern void _longjmp(struct __jmp_buf_tag __env[1], int __val) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 92 "/usr/include/setjmp.h"
typedef struct __jmp_buf_tag sigjmp_buf[1]; 
#line 103 "/usr/include/setjmp.h"
extern void siglongjmp( sigjmp_buf __env, int __val) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 102 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h" 3 4
extern void longjmp(struct __jmp_buf_tag __env[1], int __val) __asm__ ("""__longjmp_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 28 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h"
extern void _longjmp(struct __jmp_buf_tag __env[1], int __val) __asm__ ("""__longjmp_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h"
extern void siglongjmp(struct __jmp_buf_tag __env[1], int __val) __asm__ ("""__longjmp_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 110 "/usr/include/setjmp.h" 2 3 4
# 15 "csapp.h" 2
# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember(const  __sigset_t *, int ); 
#line 103 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
extern int __sigaddset( __sigset_t *, int ); 
#line 104 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
extern int __sigdelset( __sigset_t *, int ); 
#line 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int __sigismember(const  __sigset_t *__set, int __sig)  
# 4493 "csapp.c"
{
# 4495 "csapp.c"
int retValue_acc;




# 4501 "csapp.c"
{

#line 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

#line 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

#line 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

# 4514 "csapp.c"
retValue_acc = (((__set->__val)[__word] & __mask)?1:0);
# 4516 "csapp.c"
return (int )retValue_acc;
 
# 4519 "csapp.c"

}

# 4523 "csapp.c"
return (int )retValue_acc;

# 4526 "csapp.c"

}
 
#line 117 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int __sigaddset( __sigset_t *__set, int __sig)  
# 4532 "csapp.c"
{
# 4534 "csapp.c"
int retValue_acc;




# 4540 "csapp.c"
{

#line 117 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

#line 117 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 117 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

#line 117 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 117 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

# 4553 "csapp.c"
retValue_acc = (((__set->__val)[__word] |= __mask) , 0);
# 4555 "csapp.c"
return (int )retValue_acc;
 
# 4558 "csapp.c"

}

# 4562 "csapp.c"
return (int )retValue_acc;

# 4565 "csapp.c"

}
 
#line 118 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int __sigdelset( __sigset_t *__set, int __sig)  
# 4571 "csapp.c"
{
# 4573 "csapp.c"
int retValue_acc;




# 4579 "csapp.c"
{

#line 118 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

#line 118 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 118 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

#line 118 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 118 "/usr/include/x86_64-linux-gnu/bits/sigset.h"

# 4592 "csapp.c"
retValue_acc = (((__set->__val)[__word] &= (~__mask)) , 0);
# 4594 "csapp.c"
return (int )retValue_acc;
 
# 4597 "csapp.c"

}

# 4601 "csapp.c"
return (int )retValue_acc;

# 4604 "csapp.c"

}
 
# 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
# 40 "/usr/include/signal.h" 2 3 4
typedef  __sig_atomic_t sig_atomic_t; 
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
# 16 "csapp.h" 2
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4
# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent { __ino_t d_ino;  __off_t d_off; unsigned short int d_reclen; unsigned char d_type; char d_name[256]; 
}; 
# 62 "/usr/include/dirent.h" 2 3 4
# 117 "/usr/include/dirent.h" 3 4
enum {DT_UNKNOWN=0,DT_FIFO=1,DT_CHR=2,DT_DIR=4,DT_BLK=6,DT_REG=8,DT_LNK=10,DT_SOCK=12,DT_WHT=14}; 
#line 127 "/usr/include/dirent.h"
typedef struct __dirstream DIR; 
#line 134 "/usr/include/dirent.h"
extern  DIR *opendir(const char *__name) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 141 "/usr/include/dirent.h"
extern  DIR *fdopendir(int __fd); 
#line 149 "/usr/include/dirent.h"
extern int closedir( DIR *__dirp) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 127 "/usr/include/dirent.h" 3 4
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir( DIR *__dirp) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 186 "/usr/include/dirent.h"
extern int readdir_r( DIR *__restrict __dirp, struct dirent *__restrict __entry, struct dirent **__restrict __result) __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
# 183 "/usr/include/dirent.h" 3 4
# 208 "/usr/include/dirent.h" 3 4
extern void rewinddir( DIR *__dirp) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 214 "/usr/include/dirent.h"
extern void seekdir( DIR *__dirp, long int __pos) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 217 "/usr/include/dirent.h"
extern long int telldir( DIR *__dirp) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 223 "/usr/include/dirent.h"
extern int dirfd( DIR *__dirp) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 232 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 233 "/usr/include/dirent.h" 2 3 4
# 244 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 245 "/usr/include/dirent.h" 2 3 4
# 259 "/usr/include/dirent.h" 3 4
extern int scandir(const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector)(const struct dirent *), int (*__cmp)(const struct dirent **, const struct dirent **)) __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 326 "/usr/include/dirent.h"
extern int alphasort(const struct dirent **__e1, const struct dirent **__e2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 324 "/usr/include/dirent.h" 3 4
# 355 "/usr/include/dirent.h" 3 4
extern  __ssize_t getdirentries(int __fd, char *__restrict __buf,  size_t __nbytes,  __off_t *__restrict __basep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
# 401 "/usr/include/dirent.h" 3 4
# 17 "csapp.h" 2
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
# 18 "csapp.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
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
# 20 "csapp.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 103 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat { __dev_t st_dev;  __ino_t st_ino;  __nlink_t st_nlink;  __mode_t st_mode;  __uid_t st_uid;  __gid_t st_gid; int __pad0;  __dev_t st_rdev;  __off_t st_size;  __blksize_t st_blksize;  __blkcnt_t st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim;  __syscall_slong_t __glibc_reserved[3]; 
}; 
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 210 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat(const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 214 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int fstat(int __fd, struct stat *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int fstatat(int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
# 238 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 264 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 285 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int chmod(const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int lchmod(const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 297 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int fchmod(int __fd,  __mode_t __mode) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int fchmodat(int __fd, const char *__file,  __mode_t __mode, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 312 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern  __mode_t umask( __mode_t __mask) __attribute__  (( __nothrow__ )) ; 
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 322 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir(const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 329 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int mkdirat(int __fd, const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int mknod(const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 344 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int mknodat(int __fd, const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 351 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int mkfifo(const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 358 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int mkfifoat(int __fd, const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 367 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int utimensat(int __fd, const char *__path, const struct timespec __times[2], int __flags) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 372 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int futimens(int __fd, const struct timespec __times[2]) __attribute__  (( __nothrow__ )) ; 
#line 400 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 402 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int __xstat(int __ver, const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 404 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int __lxstat(int __ver, const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 407 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int __fxstatat(int __ver, int __fildes, const char *__filename, struct stat *__stat_buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
# 399 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 443 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod(int __ver, const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 447 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern int __xmknodat(int __ver, int __fd, const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 5 )  )) ; 
#line 454 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) stat(const char *__path, struct stat *__statbuf)  
# 5003 "csapp.c"
{
# 5005 "csapp.c"
int retValue_acc;




# 5011 "csapp.c"
{

#line 455 "/usr/include/x86_64-linux-gnu/sys/stat.h"

# 5016 "csapp.c"
retValue_acc = __xstat(1, __path, __statbuf);
# 5018 "csapp.c"
return (int )retValue_acc;
 
# 5021 "csapp.c"

}

# 5025 "csapp.c"
return (int )retValue_acc;

# 5028 "csapp.c"

}
 
#line 461 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) lstat(const char *__path, struct stat *__statbuf)  
# 5034 "csapp.c"
{
# 5036 "csapp.c"
int retValue_acc;




# 5042 "csapp.c"
{

#line 462 "/usr/include/x86_64-linux-gnu/sys/stat.h"

# 5047 "csapp.c"
retValue_acc = __lxstat(1, __path, __statbuf);
# 5049 "csapp.c"
return (int )retValue_acc;
 
# 5052 "csapp.c"

}

# 5056 "csapp.c"
return (int )retValue_acc;

# 5059 "csapp.c"

}
 
#line 468 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) fstat(int __fd, struct stat *__statbuf)  
# 5065 "csapp.c"
{
# 5067 "csapp.c"
int retValue_acc;




# 5073 "csapp.c"
{

#line 469 "/usr/include/x86_64-linux-gnu/sys/stat.h"

# 5078 "csapp.c"
retValue_acc = __fxstat(1, __fd, __statbuf);
# 5080 "csapp.c"
return (int )retValue_acc;
 
# 5083 "csapp.c"

}

# 5087 "csapp.c"
return (int )retValue_acc;

# 5090 "csapp.c"

}
 
#line 476 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) fstatat(int __fd, const char *__filename, struct stat *__statbuf, int __flag)  
# 5096 "csapp.c"
{
# 5098 "csapp.c"
int retValue_acc;




# 5104 "csapp.c"
{

#line 477 "/usr/include/x86_64-linux-gnu/sys/stat.h"

# 5109 "csapp.c"
retValue_acc = __fxstatat(1, __fd, __filename, __statbuf, __flag);
# 5111 "csapp.c"
return (int )retValue_acc;
 
# 5114 "csapp.c"

}

# 5118 "csapp.c"
return (int )retValue_acc;

# 5121 "csapp.c"

}
 
#line 484 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) mknod(const char *__path,  __mode_t __mode,  __dev_t __dev)  
# 5127 "csapp.c"
{
# 5129 "csapp.c"
int retValue_acc;




# 5135 "csapp.c"
{

#line 485 "/usr/include/x86_64-linux-gnu/sys/stat.h"

# 5140 "csapp.c"
retValue_acc = __xmknod(0, __path, __mode, (&__dev));
# 5142 "csapp.c"
return (int )retValue_acc;
 
# 5145 "csapp.c"

}

# 5149 "csapp.c"
return (int )retValue_acc;

# 5152 "csapp.c"

}
 
#line 493 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) mknodat(int __fd, const char *__path,  __mode_t __mode,  __dev_t __dev)  
# 5158 "csapp.c"
{
# 5160 "csapp.c"
int retValue_acc;




# 5166 "csapp.c"
{

#line 494 "/usr/include/x86_64-linux-gnu/sys/stat.h"

# 5171 "csapp.c"
retValue_acc = __xmknodat(0, __fd, __path, __mode, (&__dev));
# 5173 "csapp.c"
return (int )retValue_acc;
 
# 5176 "csapp.c"

}

# 5180 "csapp.c"
return (int )retValue_acc;

# 5183 "csapp.c"

}
 
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 21 "csapp.h" 2
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
# 239 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise(int __fd,  off_t __offset,  off_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
#line 260 "/usr/include/fcntl.h"
extern int posix_fallocate(int __fd,  off_t __offset,  off_t __len); 
# 260 "/usr/include/fcntl.h" 3 4
# 279 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern int __open_2(const char *__path, int __oflag) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern int __open_alias(const char *__path, int __oflag, ...) __asm__ ("""open") __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern void __open_too_many_args(void ) __attribute__  (( __error__ ( "open can be called either with 2 or 3 arguments, not more" )  )) ; 
#line 37 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern void __open_missing_mode(void ) __attribute__  (( __error__ ( "open with O_CREAT in second argument needs 3 arguments" )  )) ; 
#line 42 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int open(const char *__path, int __oflag, ...)  
# 5233 "csapp.c"
{
# 5235 "csapp.c"
int retValue_acc;




# 5241 "csapp.c"
{

#line 46 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if (__builtin_va_arg_pack_len() > 1){
__open_too_many_args(); }
#line 46 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if (__builtin_constant_p(__oflag)){
{ 
#line 53 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if ((__oflag & 0100) != 0 && __builtin_va_arg_pack_len() < 1){
{ 
#line 50 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
__open_missing_mode(); 
#line 51 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"

# 5257 "csapp.c"
retValue_acc = __open_2(__path, __oflag);
# 5259 "csapp.c"
return (int )retValue_acc;
 } }
#line 53 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"

# 5264 "csapp.c"
retValue_acc = __open_alias(__path, __oflag, __builtin_va_arg_pack());
# 5266 "csapp.c"
return (int )retValue_acc;
 } }
#line 56 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if (__builtin_va_arg_pack_len() < 1){

# 5272 "csapp.c"
retValue_acc = __open_2(__path, __oflag);
# 5274 "csapp.c"
return (int )retValue_acc;
 }
#line 59 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"

# 5279 "csapp.c"
retValue_acc = __open_alias(__path, __oflag, __builtin_va_arg_pack());
# 5281 "csapp.c"
return (int )retValue_acc;
 
# 5284 "csapp.c"

}

# 5288 "csapp.c"
return (int )retValue_acc;

# 5291 "csapp.c"

}
 
#line 99 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern int __openat_2(int __fd, const char *__path, int __oflag) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 102 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern int __openat_alias(int __fd, const char *__path, int __oflag, ...) __asm__ ("""openat") __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 98 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
# 111 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern void __openat_too_many_args(void ) __attribute__  (( __error__ ( "openat can be called either with 3 or 4 arguments, not more" )  )) ; 
#line 113 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern void __openat_missing_mode(void ) __attribute__  (( __error__ ( "openat with O_CREAT in third argument needs 4 arguments" )  )) ; 
#line 118 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int openat(int __fd, const char *__path, int __oflag, ...)  
# 5306 "csapp.c"
{
# 5308 "csapp.c"
int retValue_acc;




# 5314 "csapp.c"
{

#line 122 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if (__builtin_va_arg_pack_len() > 1){
__openat_too_many_args(); }
#line 122 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if (__builtin_constant_p(__oflag)){
{ 
#line 129 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if ((__oflag & 0100) != 0 && __builtin_va_arg_pack_len() < 1){
{ 
#line 126 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
__openat_missing_mode(); 
#line 127 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"

# 5330 "csapp.c"
retValue_acc = __openat_2(__fd, __path, __oflag);
# 5332 "csapp.c"
return (int )retValue_acc;
 } }
#line 129 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"

# 5337 "csapp.c"
retValue_acc = __openat_alias(__fd, __path, __oflag, __builtin_va_arg_pack());
# 5339 "csapp.c"
return (int )retValue_acc;
 } }
#line 132 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
if (__builtin_va_arg_pack_len() < 1){

# 5345 "csapp.c"
retValue_acc = __openat_2(__fd, __path, __oflag);
# 5347 "csapp.c"
return (int )retValue_acc;
 }
#line 135 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"

# 5352 "csapp.c"
retValue_acc = __openat_alias(__fd, __path, __oflag, __builtin_va_arg_pack());
# 5354 "csapp.c"
return (int )retValue_acc;
 
# 5357 "csapp.c"

}

# 5361 "csapp.c"
return (int )retValue_acc;

# 5364 "csapp.c"

}
 
# 280 "/usr/include/fcntl.h" 2 3 4
# 22 "csapp.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/mman.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman.h" 1 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 1 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/mman.h" 2 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4
# 58 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mmap(void *__addr,  size_t __len, int __prot, int __flags, int __fd,  __off_t __offset) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int munmap(void *__addr,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 81 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int mprotect(void *__addr,  size_t __len, int __prot) __attribute__  (( __nothrow__ )) ; 
#line 89 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int msync(void *__addr,  size_t __len, int __flags); 
#line 94 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int madvise(void *__addr,  size_t __len, int __advice) __attribute__  (( __nothrow__ )) ; 
#line 98 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int posix_madvise(void *__addr,  size_t __len, int __advice) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int mlock(const void *__addr,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int munlock(const void *__addr,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 111 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int mlockall(int __flags) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int munlockall(void ) __attribute__  (( __nothrow__ )) ; 
#line 124 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int mincore(void *__start,  size_t __len, unsigned char *__vec) __attribute__  (( __nothrow__ )) ; 
# 76 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 144 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern int shm_open(const char *__name, int __oflag,  mode_t __mode); 
#line 147 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern int shm_unlink(const char *__name); 
# 23 "csapp.h" 2
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
# 24 "csapp.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t; 
#line 29 "/usr/include/x86_64-linux-gnu/bits/mathdef.h"
typedef double double_t; 
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __acos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double asin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __asin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atan2(double __y, double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atan2(double __y, double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double acosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __acosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double asinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __asinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double exp(double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __exp(double __x) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double frexp(double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __frexp(double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double ldexp(double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __ldexp(double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log(double __x) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log(double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log10(double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log10(double __x) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double modf(double __x, double *__iptr) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __modf(double __x, double *__iptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double expm1(double __x) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __expm1(double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log1p(double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log1p(double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double logb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __logb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double exp2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __exp2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double pow(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __pow(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sqrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sqrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double hypot(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __hypot(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cbrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cbrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double ceil(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __ceil(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fabs(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fabs(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double floor(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __floor(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmod(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmod(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinf(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finite(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinf(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finite(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double drem(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __drem(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double significand(double __x) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __significand(double __x) __attribute__  (( __nothrow__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double copysign(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __copysign(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nan(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nan(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnan(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnan(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double j0(double ) __attribute__  (( __nothrow__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __j0(double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double j1(double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __j1(double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double jn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __jn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double y0(double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __y0(double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double y1(double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __y1(double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double yn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __yn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double erf(double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __erf(double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double erfc(double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __erfc(double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double lgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __lgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double gamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __gamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double lgamma_r(double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __lgamma_r(double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double rint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __rint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nextafter(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nextafter(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nexttoward(double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nexttoward(double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double remainder(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __remainder(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalbn(double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalbn(double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalbln(double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalbln(double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nearbyint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nearbyint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double round(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __round(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double trunc(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __trunc(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double remquo(double __x, double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __remquo(double __x, double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fdim(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fdim(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmax(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmax(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmin(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmin(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassify(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbit(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fma(double __x, double __y, double __z) __attribute__  (( __nothrow__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fma(double __x, double __y, double __z) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalb(double __x, double __n) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalb(double __x, double __n) __attribute__  (( __nothrow__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __acosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float asinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __asinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atan2f(float __y, float __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atan2f(float __y, float __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float cosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __cosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float coshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __coshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float acoshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __acoshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float asinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __asinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float expf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __expf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float frexpf(float __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __frexpf(float __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ldexpf(float __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ldexpf(float __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float logf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __logf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log10f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log10f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float modff(float __x, float *__iptr) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __modff(float __x, float *__iptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float expm1f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __expm1f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log1pf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log1pf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float logbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __logbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float exp2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __exp2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float powf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __powf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sqrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sqrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float hypotf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __hypotf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float cbrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __cbrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ceilf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ceilf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fabsf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fabsf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float floorf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __floorf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmodf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmodf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinff(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finitef(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinff(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finitef(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float dremf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __dremf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float significandf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __significandf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float copysignf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __copysignf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nanf(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nanf(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnanf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float j0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __j0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float j1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __j1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float jnf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __jnf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float y0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __y0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float y1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __y1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ynf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ynf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float erff(float ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __erff(float ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float erfcf(float ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __erfcf(float ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float lgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __lgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float gammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __gammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float lgammaf_r(float , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __lgammaf_r(float , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float rintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __rintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nextafterf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nextafterf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nexttowardf(float __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nexttowardf(float __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float remainderf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __remainderf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalbnf(float __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalbnf(float __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalblnf(float __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalblnf(float __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nearbyintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nearbyintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float roundf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __roundf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float truncf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __truncf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float remquof(float __x, float __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __remquof(float __x, float __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fdimf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fdimf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmaxf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmaxf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fminf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fminf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassifyf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbitf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmaf(float __x, float __y, float __z) __attribute__  (( __nothrow__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmaf(float __x, float __y, float __z) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalbf(float __x, float __n) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalbf(float __x, float __n) __attribute__  (( __nothrow__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __acosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double asinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __asinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atan2l(long double __y, long double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atan2l(long double __y, long double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double cosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __cosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double coshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __coshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double acoshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __acoshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double asinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __asinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double expl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __expl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double frexpl(long double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __frexpl(long double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ldexpl(long double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ldexpl(long double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double logl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __logl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log10l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log10l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double modfl(long double __x, long double *__iptr) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __modfl(long double __x, long double *__iptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double expm1l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __expm1l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log1pl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log1pl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double logbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __logbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double exp2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __exp2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double powl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __powl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sqrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sqrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double hypotl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __hypotl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double cbrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __cbrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ceill(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ceill(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fabsl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fabsl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double floorl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __floorl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmodl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmodl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinfl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finitel(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinfl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finitel(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double dreml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __dreml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double significandl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __significandl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double copysignl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __copysignl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nanl(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nanl(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnanl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double j0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __j0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double j1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __j1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double jnl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __jnl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double y0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __y0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double y1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __y1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ynl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ynl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double erfl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __erfl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double erfcl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __erfcl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double lgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __lgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double gammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __gammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double lgammal_r(long double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __lgammal_r(long double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double rintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __rintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nextafterl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nextafterl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nexttowardl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nexttowardl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double remainderl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __remainderl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalbnl(long double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalbnl(long double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalblnl(long double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalblnl(long double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nearbyintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nearbyintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double roundl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __roundl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double truncl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __truncl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double remquol(long double __x, long double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __remquol(long double __x, long double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fdiml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fdiml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmaxl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmaxl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fminl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fminl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassifyl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbitl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmal(long double __x, long double __y, long double __z) __attribute__  (( __nothrow__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmal(long double __x, long double __y, long double __z) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalbl(long double __x, long double __n) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalbl(long double __x, long double __n) __attribute__  (( __nothrow__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam; 
#line 206 "/usr/include/math.h"
enum {FP_NAN=0,FP_INFINITE=1,FP_ZERO=2,FP_SUBNORMAL=3,FP_NORMAL=4}; 
# 189 "/usr/include/math.h" 3 4
# 308 "/usr/include/math.h" 3 4
typedef enum {_IEEE_=(-1),_SVID_,_XOPEN_,_POSIX_,_ISOC_}_LIB_VERSION_TYPE; 
#line 313 "/usr/include/math.h"
extern  _LIB_VERSION_TYPE _LIB_VERSION; 
#line 334 "/usr/include/math.h"
struct exception {int type; char *name; double arg1; double arg2; double retval; 
}; 
#line 339 "/usr/include/math.h"
extern int matherr(struct exception *__exc); 
# 326 "/usr/include/math.h" 3 4
# 426 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 1 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) __signbitf(float __x)  
# 6341 "csapp.c"
{
# 6343 "csapp.c"
int retValue_acc;




# 6349 "csapp.c"
{

#line 130 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

#line 130 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
int __m;
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
 __asm ("pmovmskb %1, %0" : "=r"(__m) : "x"(__x)); 
#line 132 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

# 6360 "csapp.c"
retValue_acc = (__m & 0x8) != 0;
# 6362 "csapp.c"
return (int )retValue_acc;
 
# 6365 "csapp.c"

}

# 6369 "csapp.c"
return (int )retValue_acc;

# 6372 "csapp.c"

}
 
#line 140 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) __signbit(double __x)  
# 6378 "csapp.c"
{
# 6380 "csapp.c"
int retValue_acc;




# 6386 "csapp.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

#line 142 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
int __m;
#line 143 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
 __asm ("pmovmskb %1, %0" : "=r"(__m) : "x"(__x)); 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

# 6397 "csapp.c"
retValue_acc = (__m & 0x80) != 0;
# 6399 "csapp.c"
return (int )retValue_acc;
 
# 6402 "csapp.c"

}

# 6406 "csapp.c"
return (int )retValue_acc;

# 6409 "csapp.c"

}
 
#line 152 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) __signbitl(long double __x)  
# 6415 "csapp.c"
{
# 6417 "csapp.c"
int retValue_acc;




# 6423 "csapp.c"
{

#line 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

#line 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
 __extension__ union {long double __l; int __i[3]; 
}__u = {__l:__x};
#line 154 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

# 6433 "csapp.c"
retValue_acc = (__u.__i[2] & 0x8000) != 0;
# 6435 "csapp.c"
return (int )retValue_acc;
 
# 6438 "csapp.c"

}

# 6442 "csapp.c"
return (int )retValue_acc;

# 6445 "csapp.c"

}
 
# 427 "/usr/include/math.h" 2 3 4
# 488 "/usr/include/math.h" 3 4
# 25 "csapp.h" 2
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 33 "/usr/include/sched.h" 2 3 4
# 41 "/usr/include/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4
# 75 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
struct sched_param {int __sched_priority; 
}; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/sched.h"
struct __sched_param {int __sched_priority; 
}; 
# 95 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/sched.h"
typedef struct { __cpu_mask __bits[1024 / (8 * sizeof ( __cpu_mask ))]; 
}cpu_set_t; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/sched.h"
extern int __sched_cpucount( size_t __setsize, const  cpu_set_t *__setp) __attribute__  (( __nothrow__ )) ; 
#line 205 "/usr/include/x86_64-linux-gnu/bits/sched.h"
extern  cpu_set_t *__sched_cpualloc( size_t __count) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 206 "/usr/include/x86_64-linux-gnu/bits/sched.h"
extern void __sched_cpufree( cpu_set_t *__set) __attribute__  (( __nothrow__ )) ; 
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
# 50 "/usr/include/sched.h" 2 3 4
extern int sched_setparam( __pid_t __pid, const struct sched_param *__param) __attribute__  (( __nothrow__ )) ; 
#line 53 "/usr/include/sched.h"
extern int sched_getparam( __pid_t __pid, struct sched_param *__param) __attribute__  (( __nothrow__ )) ; 
#line 57 "/usr/include/sched.h"
extern int sched_setscheduler( __pid_t __pid, int __policy, const struct sched_param *__param) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/sched.h"
extern int sched_getscheduler( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/sched.h"
extern int sched_yield(void ) __attribute__  (( __nothrow__ )) ; 
#line 66 "/usr/include/sched.h"
extern int sched_get_priority_max(int __algorithm) __attribute__  (( __nothrow__ )) ; 
#line 69 "/usr/include/sched.h"
extern int sched_get_priority_min(int __algorithm) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/sched.h"
extern int sched_rr_get_interval( __pid_t __pid, struct timespec *__t) __attribute__  (( __nothrow__ )) ; 
# 124 "/usr/include/sched.h" 3 4
# 24 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 152 "/usr/include/time.h" 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; const char *tm_zone; 
}; 
#line 165 "/usr/include/time.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; 
}; 
#line 168 "/usr/include/time.h"
struct sigevent ; 
#line 189 "/usr/include/time.h"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ )) ; 
#line 192 "/usr/include/time.h"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 196 "/usr/include/time.h"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 199 "/usr/include/time.h"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/time.h"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
# 186 "/usr/include/time.h" 3 4
# 226 "/usr/include/time.h" 3 4
extern  size_t strftime_l(char *__restrict __s,  size_t __maxsize, const char *__restrict __format, const struct tm *__restrict __tp,  __locale_t __loc) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/time.h"
extern struct tm *gmtime(const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 243 "/usr/include/time.h"
extern struct tm *localtime(const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/time.h"
extern struct tm *gmtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 255 "/usr/include/time.h"
extern struct tm *localtime_r(const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 261 "/usr/include/time.h"
extern char *asctime(const struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/time.h"
extern char *ctime(const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 273 "/usr/include/time.h"
extern char *asctime_r(const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 277 "/usr/include/time.h"
extern char *ctime_r(const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/time.h"
extern char *__tzname[2]; 
#line 283 "/usr/include/time.h"
extern int __daylight; 
#line 284 "/usr/include/time.h"
extern long int __timezone; 
#line 289 "/usr/include/time.h"
extern char *tzname[2]; 
#line 293 "/usr/include/time.h"
extern void tzset(void ) __attribute__  (( __nothrow__ )) ; 
#line 297 "/usr/include/time.h"
extern int daylight; 
#line 298 "/usr/include/time.h"
extern long int timezone; 
#line 304 "/usr/include/time.h"
extern int stime(const  time_t *__when) __attribute__  (( __nothrow__ )) ; 
# 236 "/usr/include/time.h" 3 4
# 319 "/usr/include/time.h" 3 4
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 322 "/usr/include/time.h"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/time.h"
extern int dysize(int __year) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 335 "/usr/include/time.h"
extern int nanosleep(const struct timespec *__requested_time, struct timespec *__remaining); 
#line 339 "/usr/include/time.h"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ )) ; 
#line 342 "/usr/include/time.h"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 346 "/usr/include/time.h"
extern int clock_settime( clockid_t __clock_id, const struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 355 "/usr/include/time.h"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, const struct timespec *__req, struct timespec *__rem); 
#line 358 "/usr/include/time.h"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ )) ; 
#line 365 "/usr/include/time.h"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ )) ; 
#line 368 "/usr/include/time.h"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 373 "/usr/include/time.h"
extern int timer_settime( timer_t __timerid, int __flags, const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ )) ; 
#line 377 "/usr/include/time.h"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ )) ; 
#line 380 "/usr/include/time.h"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
# 334 "/usr/include/time.h" 3 4
# 430 "/usr/include/time.h" 3 4
# 25 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 38 "/usr/include/pthread.h" 2 3 4
enum {PTHREAD_CREATE_JOINABLE,PTHREAD_CREATE_DETACHED}; 
#line 59 "/usr/include/pthread.h"
enum {PTHREAD_MUTEX_TIMED_NP,PTHREAD_MUTEX_RECURSIVE_NP,PTHREAD_MUTEX_ERRORCHECK_NP,PTHREAD_MUTEX_ADAPTIVE_NP,PTHREAD_MUTEX_NORMAL=PTHREAD_MUTEX_TIMED_NP,PTHREAD_MUTEX_RECURSIVE=PTHREAD_MUTEX_RECURSIVE_NP,PTHREAD_MUTEX_ERRORCHECK=PTHREAD_MUTEX_ERRORCHECK_NP,PTHREAD_MUTEX_DEFAULT=PTHREAD_MUTEX_NORMAL}; 
#line 70 "/usr/include/pthread.h"
enum {PTHREAD_MUTEX_STALLED,PTHREAD_MUTEX_STALLED_NP=PTHREAD_MUTEX_STALLED,PTHREAD_MUTEX_ROBUST,PTHREAD_MUTEX_ROBUST_NP=PTHREAD_MUTEX_ROBUST}; 
#line 81 "/usr/include/pthread.h"
enum {PTHREAD_PRIO_NONE,PTHREAD_PRIO_INHERIT,PTHREAD_PRIO_PROTECT}; 
#line 131 "/usr/include/pthread.h"
enum {PTHREAD_RWLOCK_PREFER_READER_NP,PTHREAD_RWLOCK_PREFER_WRITER_NP,PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,PTHREAD_RWLOCK_DEFAULT_NP=PTHREAD_RWLOCK_PREFER_READER_NP}; 
# 125 "/usr/include/pthread.h" 3 4
# 172 "/usr/include/pthread.h" 3 4
enum {PTHREAD_INHERIT_SCHED,PTHREAD_EXPLICIT_SCHED}; 
#line 182 "/usr/include/pthread.h"
enum {PTHREAD_SCOPE_SYSTEM,PTHREAD_SCOPE_PROCESS}; 
#line 192 "/usr/include/pthread.h"
enum {PTHREAD_PROCESS_PRIVATE,PTHREAD_PROCESS_SHARED}; 
#line 207 "/usr/include/pthread.h"
struct _pthread_cleanup_buffer {void (*__routine)(void *); void *__arg; int __canceltype; struct _pthread_cleanup_buffer *__prev; 
}; 
#line 216 "/usr/include/pthread.h"
enum {PTHREAD_CANCEL_ENABLE,PTHREAD_CANCEL_DISABLE}; 
#line 223 "/usr/include/pthread.h"
enum {PTHREAD_CANCEL_DEFERRED,PTHREAD_CANCEL_ASYNCHRONOUS}; 
# 201 "/usr/include/pthread.h" 3 4
# 247 "/usr/include/pthread.h" 3 4
extern int pthread_create( pthread_t *__restrict __newthread, const  pthread_attr_t *__restrict __attr, void *(*__start_routine)(void *), void *__restrict __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 253 "/usr/include/pthread.h"
extern void pthread_exit(void *__retval) __attribute__  (( __noreturn__ )) ; 
#line 261 "/usr/include/pthread.h"
extern int pthread_join( pthread_t __th, void **__thread_return); 
#line 282 "/usr/include/pthread.h"
extern int pthread_detach( pthread_t __th) __attribute__  (( __nothrow__ )) ; 
#line 286 "/usr/include/pthread.h"
extern  pthread_t pthread_self(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 290 "/usr/include/pthread.h"
extern int pthread_equal( pthread_t __thread1,  pthread_t __thread2) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 298 "/usr/include/pthread.h"
extern int pthread_attr_init( pthread_attr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 302 "/usr/include/pthread.h"
extern int pthread_attr_destroy( pthread_attr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 307 "/usr/include/pthread.h"
extern int pthread_attr_getdetachstate(const  pthread_attr_t *__attr, int *__detachstate) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 312 "/usr/include/pthread.h"
extern int pthread_attr_setdetachstate( pthread_attr_t *__attr, int __detachstate) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 318 "/usr/include/pthread.h"
extern int pthread_attr_getguardsize(const  pthread_attr_t *__attr,  size_t *__guardsize) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 323 "/usr/include/pthread.h"
extern int pthread_attr_setguardsize( pthread_attr_t *__attr,  size_t __guardsize) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 329 "/usr/include/pthread.h"
extern int pthread_attr_getschedparam(const  pthread_attr_t *__restrict __attr, struct sched_param *__restrict __param) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 334 "/usr/include/pthread.h"
extern int pthread_attr_setschedparam( pthread_attr_t *__restrict __attr, const struct sched_param *__restrict __param) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 339 "/usr/include/pthread.h"
extern int pthread_attr_getschedpolicy(const  pthread_attr_t *__restrict __attr, int *__restrict __policy) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 343 "/usr/include/pthread.h"
extern int pthread_attr_setschedpolicy( pthread_attr_t *__attr, int __policy) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 348 "/usr/include/pthread.h"
extern int pthread_attr_getinheritsched(const  pthread_attr_t *__restrict __attr, int *__restrict __inherit) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 353 "/usr/include/pthread.h"
extern int pthread_attr_setinheritsched( pthread_attr_t *__attr, int __inherit) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 359 "/usr/include/pthread.h"
extern int pthread_attr_getscope(const  pthread_attr_t *__restrict __attr, int *__restrict __scope) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 363 "/usr/include/pthread.h"
extern int pthread_attr_setscope( pthread_attr_t *__attr, int __scope) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 368 "/usr/include/pthread.h"
extern int pthread_attr_getstackaddr(const  pthread_attr_t *__restrict __attr, void **__restrict __stackaddr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __deprecated__ )) ; 
#line 376 "/usr/include/pthread.h"
extern int pthread_attr_setstackaddr( pthread_attr_t *__attr, void *__stackaddr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ )) ; 
#line 381 "/usr/include/pthread.h"
extern int pthread_attr_getstacksize(const  pthread_attr_t *__restrict __attr,  size_t *__restrict __stacksize) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 388 "/usr/include/pthread.h"
extern int pthread_attr_setstacksize( pthread_attr_t *__attr,  size_t __stacksize) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 395 "/usr/include/pthread.h"
extern int pthread_attr_getstack(const  pthread_attr_t *__restrict __attr, void **__restrict __stackaddr,  size_t *__restrict __stacksize) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 401 "/usr/include/pthread.h"
extern int pthread_attr_setstack( pthread_attr_t *__attr, void *__stackaddr,  size_t __stacksize) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 282 "/usr/include/pthread.h" 3 4
# 442 "/usr/include/pthread.h" 3 4
extern int pthread_setschedparam( pthread_t __target_thread, int __policy, const struct sched_param *__param) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 448 "/usr/include/pthread.h"
extern int pthread_getschedparam( pthread_t __target_thread, int *__restrict __policy, struct sched_param *__restrict __param) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 452 "/usr/include/pthread.h"
extern int pthread_setschedprio( pthread_t __target_thread, int __prio) __attribute__  (( __nothrow__ )) ; 
#line 506 "/usr/include/pthread.h"
extern int pthread_once( pthread_once_t *__once_control, void (*__init_routine)(void )) __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 505 "/usr/include/pthread.h" 3 4
# 517 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate(int __state, int *__oldstate); 
#line 521 "/usr/include/pthread.h"
extern int pthread_setcanceltype(int __type, int *__oldtype); 
#line 524 "/usr/include/pthread.h"
extern int pthread_cancel( pthread_t __th); 
#line 529 "/usr/include/pthread.h"
extern void pthread_testcancel(void ); 
#line 542 "/usr/include/pthread.h"
typedef struct {struct { __jmp_buf __cancel_jmp_buf; int __mask_was_saved; 
}__cancel_jmp_buf[1]; void *__pad[4]; 
}__pthread_unwind_buf_t __attribute__  (( __aligned__ )) ; 
#line 557 "/usr/include/pthread.h"
struct __pthread_cleanup_frame {void (*__cancel_routine)(void *); void *__cancel_arg; int __do_it; int __cancel_type; 
}; 
# 551 "/usr/include/pthread.h" 3 4
# 692 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel( __pthread_unwind_buf_t *__buf); 
#line 704 "/usr/include/pthread.h"
extern void __pthread_unregister_cancel( __pthread_unwind_buf_t *__buf); 
# 703 "/usr/include/pthread.h" 3 4
# 749 "/usr/include/pthread.h" 3 4
extern void __pthread_unwind_next( __pthread_unwind_buf_t *__buf) __attribute__  (( __noreturn__ ))  __attribute__  (( __weak__ )) ; 
#line 753 "/usr/include/pthread.h"
struct __jmp_buf_tag ; 
#line 754 "/usr/include/pthread.h"
extern int __sigsetjmp(struct __jmp_buf_tag *__env, int __savemask) __attribute__  (( __nothrow__ )) ; 
#line 762 "/usr/include/pthread.h"
extern int pthread_mutex_init( pthread_mutex_t *__mutex, const  pthread_mutexattr_t *__mutexattr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 766 "/usr/include/pthread.h"
extern int pthread_mutex_destroy( pthread_mutex_t *__mutex) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 770 "/usr/include/pthread.h"
extern int pthread_mutex_trylock( pthread_mutex_t *__mutex) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 774 "/usr/include/pthread.h"
extern int pthread_mutex_lock( pthread_mutex_t *__mutex) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 780 "/usr/include/pthread.h"
extern int pthread_mutex_timedlock( pthread_mutex_t *__restrict __mutex, const struct timespec *__restrict __abstime) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 785 "/usr/include/pthread.h"
extern int pthread_mutex_unlock( pthread_mutex_t *__mutex) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 792 "/usr/include/pthread.h"
extern int pthread_mutex_getprioceiling(const  pthread_mutex_t *__restrict __mutex, int *__restrict __prioceiling) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 799 "/usr/include/pthread.h"
extern int pthread_mutex_setprioceiling( pthread_mutex_t *__restrict __mutex, int __prioceiling, int *__restrict __old_ceiling) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 805 "/usr/include/pthread.h"
extern int pthread_mutex_consistent( pthread_mutex_t *__mutex) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 818 "/usr/include/pthread.h"
extern int pthread_mutexattr_init( pthread_mutexattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 822 "/usr/include/pthread.h"
extern int pthread_mutexattr_destroy( pthread_mutexattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 828 "/usr/include/pthread.h"
extern int pthread_mutexattr_getpshared(const  pthread_mutexattr_t *__restrict __attr, int *__restrict __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 833 "/usr/include/pthread.h"
extern int pthread_mutexattr_setpshared( pthread_mutexattr_t *__attr, int __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 839 "/usr/include/pthread.h"
extern int pthread_mutexattr_gettype(const  pthread_mutexattr_t *__restrict __attr, int *__restrict __kind) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 845 "/usr/include/pthread.h"
extern int pthread_mutexattr_settype( pthread_mutexattr_t *__attr, int __kind) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 852 "/usr/include/pthread.h"
extern int pthread_mutexattr_getprotocol(const  pthread_mutexattr_t *__restrict __attr, int *__restrict __protocol) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 858 "/usr/include/pthread.h"
extern int pthread_mutexattr_setprotocol( pthread_mutexattr_t *__attr, int __protocol) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 864 "/usr/include/pthread.h"
extern int pthread_mutexattr_getprioceiling(const  pthread_mutexattr_t *__restrict __attr, int *__restrict __prioceiling) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 869 "/usr/include/pthread.h"
extern int pthread_mutexattr_setprioceiling( pthread_mutexattr_t *__attr, int __prioceiling) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 875 "/usr/include/pthread.h"
extern int pthread_mutexattr_getrobust(const  pthread_mutexattr_t *__attr, int *__robustness) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 885 "/usr/include/pthread.h"
extern int pthread_mutexattr_setrobust( pthread_mutexattr_t *__attr, int __robustness) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 817 "/usr/include/pthread.h" 3 4
# 901 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init( pthread_rwlock_t *__restrict __rwlock, const  pthread_rwlockattr_t *__restrict __attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 905 "/usr/include/pthread.h"
extern int pthread_rwlock_destroy( pthread_rwlock_t *__rwlock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 909 "/usr/include/pthread.h"
extern int pthread_rwlock_rdlock( pthread_rwlock_t *__rwlock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 913 "/usr/include/pthread.h"
extern int pthread_rwlock_tryrdlock( pthread_rwlock_t *__rwlock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 919 "/usr/include/pthread.h"
extern int pthread_rwlock_timedrdlock( pthread_rwlock_t *__restrict __rwlock, const struct timespec *__restrict __abstime) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 924 "/usr/include/pthread.h"
extern int pthread_rwlock_wrlock( pthread_rwlock_t *__rwlock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 928 "/usr/include/pthread.h"
extern int pthread_rwlock_trywrlock( pthread_rwlock_t *__rwlock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 934 "/usr/include/pthread.h"
extern int pthread_rwlock_timedwrlock( pthread_rwlock_t *__restrict __rwlock, const struct timespec *__restrict __abstime) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 939 "/usr/include/pthread.h"
extern int pthread_rwlock_unlock( pthread_rwlock_t *__rwlock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 946 "/usr/include/pthread.h"
extern int pthread_rwlockattr_init( pthread_rwlockattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 950 "/usr/include/pthread.h"
extern int pthread_rwlockattr_destroy( pthread_rwlockattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 956 "/usr/include/pthread.h"
extern int pthread_rwlockattr_getpshared(const  pthread_rwlockattr_t *__restrict __attr, int *__restrict __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 961 "/usr/include/pthread.h"
extern int pthread_rwlockattr_setpshared( pthread_rwlockattr_t *__attr, int __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 967 "/usr/include/pthread.h"
extern int pthread_rwlockattr_getkind_np(const  pthread_rwlockattr_t *__restrict __attr, int *__restrict __pref) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 971 "/usr/include/pthread.h"
extern int pthread_rwlockattr_setkind_np( pthread_rwlockattr_t *__attr, int __pref) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 981 "/usr/include/pthread.h"
extern int pthread_cond_init( pthread_cond_t *__restrict __cond, const  pthread_condattr_t *__restrict __cond_attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 985 "/usr/include/pthread.h"
extern int pthread_cond_destroy( pthread_cond_t *__cond) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 989 "/usr/include/pthread.h"
extern int pthread_cond_signal( pthread_cond_t *__cond) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 993 "/usr/include/pthread.h"
extern int pthread_cond_broadcast( pthread_cond_t *__cond) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1002 "/usr/include/pthread.h"
extern int pthread_cond_wait( pthread_cond_t *__restrict __cond,  pthread_mutex_t *__restrict __mutex) __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1014 "/usr/include/pthread.h"
extern int pthread_cond_timedwait( pthread_cond_t *__restrict __cond,  pthread_mutex_t *__restrict __mutex, const struct timespec *__restrict __abstime) __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 1020 "/usr/include/pthread.h"
extern int pthread_condattr_init( pthread_condattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1024 "/usr/include/pthread.h"
extern int pthread_condattr_destroy( pthread_condattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1030 "/usr/include/pthread.h"
extern int pthread_condattr_getpshared(const  pthread_condattr_t *__restrict __attr, int *__restrict __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1034 "/usr/include/pthread.h"
extern int pthread_condattr_setpshared( pthread_condattr_t *__attr, int __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1041 "/usr/include/pthread.h"
extern int pthread_condattr_getclock(const  pthread_condattr_t *__restrict __attr,  __clockid_t *__restrict __clock_id) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1046 "/usr/include/pthread.h"
extern int pthread_condattr_setclock( pthread_condattr_t *__attr,  __clockid_t __clock_id) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 1011 "/usr/include/pthread.h" 3 4
# 1056 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init( pthread_spinlock_t *__lock, int __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1060 "/usr/include/pthread.h"
extern int pthread_spin_destroy( pthread_spinlock_t *__lock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1064 "/usr/include/pthread.h"
extern int pthread_spin_lock( pthread_spinlock_t *__lock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1068 "/usr/include/pthread.h"
extern int pthread_spin_trylock( pthread_spinlock_t *__lock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1072 "/usr/include/pthread.h"
extern int pthread_spin_unlock( pthread_spinlock_t *__lock) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1082 "/usr/include/pthread.h"
extern int pthread_barrier_init( pthread_barrier_t *__restrict __barrier, const  pthread_barrierattr_t *__restrict __attr, unsigned int __count) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1086 "/usr/include/pthread.h"
extern int pthread_barrier_destroy( pthread_barrier_t *__barrier) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1090 "/usr/include/pthread.h"
extern int pthread_barrier_wait( pthread_barrier_t *__barrier) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1095 "/usr/include/pthread.h"
extern int pthread_barrierattr_init( pthread_barrierattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1099 "/usr/include/pthread.h"
extern int pthread_barrierattr_destroy( pthread_barrierattr_t *__attr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1105 "/usr/include/pthread.h"
extern int pthread_barrierattr_getpshared(const  pthread_barrierattr_t *__restrict __attr, int *__restrict __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1110 "/usr/include/pthread.h"
extern int pthread_barrierattr_setpshared( pthread_barrierattr_t *__attr, int __pshared) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1124 "/usr/include/pthread.h"
extern int pthread_key_create( pthread_key_t *__key, void (*__destr_function)(void *)) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1127 "/usr/include/pthread.h"
extern int pthread_key_delete( pthread_key_t __key) __attribute__  (( __nothrow__ )) ; 
#line 1130 "/usr/include/pthread.h"
extern void *pthread_getspecific( pthread_key_t __key) __attribute__  (( __nothrow__ )) ; 
#line 1134 "/usr/include/pthread.h"
extern int pthread_setspecific( pthread_key_t __key, const void *__pointer) __attribute__  (( __nothrow__ )) ; 
#line 1141 "/usr/include/pthread.h"
extern int pthread_getcpuclockid( pthread_t __thread_id,  __clockid_t *__clock_id) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 1122 "/usr/include/pthread.h" 3 4
# 1158 "/usr/include/pthread.h" 3 4
extern int pthread_atfork(void (*__prepare)(void ), void (*__parent)(void ), void (*__child)(void )) __attribute__  (( __nothrow__ )) ; 
#line 1165 "/usr/include/pthread.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) pthread_equal( pthread_t __thread1,  pthread_t __thread2)  
# 6842 "csapp.c"
{
# 6844 "csapp.c"
int retValue_acc;




# 6850 "csapp.c"
{

#line 1166 "/usr/include/pthread.h"

# 6855 "csapp.c"
retValue_acc = __thread1 == __thread2;
# 6857 "csapp.c"
return (int )retValue_acc;
 
# 6860 "csapp.c"

}

# 6864 "csapp.c"
return (int )retValue_acc;

# 6867 "csapp.c"

}
 
# 26 "csapp.h" 2
# 1 "/usr/include/semaphore.h" 1 3 4
# 29 "/usr/include/semaphore.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/semaphore.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/semaphore.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/semaphore.h" 2 3 4
# 40 "/usr/include/x86_64-linux-gnu/bits/semaphore.h" 3 4
typedef union {char __size[32]; long int __align; 
}sem_t; 
#line 37 "/usr/include/semaphore.h"
extern int sem_init( sem_t *__sem, int __pshared, unsigned int __value) __attribute__  (( __nothrow__ )) ; 
#line 39 "/usr/include/semaphore.h"
extern int sem_destroy( sem_t *__sem) __attribute__  (( __nothrow__ )) ; 
#line 42 "/usr/include/semaphore.h"
extern  sem_t *sem_open(const char *__name, int __oflag, ...) __attribute__  (( __nothrow__ )) ; 
#line 45 "/usr/include/semaphore.h"
extern int sem_close( sem_t *__sem) __attribute__  (( __nothrow__ )) ; 
#line 48 "/usr/include/semaphore.h"
extern int sem_unlink(const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/semaphore.h"
extern int sem_wait( sem_t *__sem); 
#line 62 "/usr/include/semaphore.h"
extern int sem_timedwait( sem_t *__restrict __sem, const struct timespec *__restrict __abstime); 
#line 66 "/usr/include/semaphore.h"
extern int sem_trywait( sem_t *__sem) __attribute__  (( __nothrow__ )) ; 
#line 69 "/usr/include/semaphore.h"
extern int sem_post( sem_t *__sem) __attribute__  (( __nothrow__ )) ; 
#line 73 "/usr/include/semaphore.h"
extern int sem_getvalue( sem_t *__restrict __sem, int *__restrict __sval) __attribute__  (( __nothrow__ )) ; 
# 30 "/usr/include/semaphore.h" 2 3 4
# 27 "csapp.h" 2
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
extern  ssize_t readv(int __fd, const struct iovec *__iovec, int __count) __attribute__  (( __warn_unused_result__ )) ; 
#line 51 "/usr/include/x86_64-linux-gnu/sys/uio.h"
extern  ssize_t writev(int __fd, const struct iovec *__iovec, int __count) __attribute__  (( __warn_unused_result__ )) ; 
# 50 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 66 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern  ssize_t preadv(int __fd, const struct iovec *__iovec, int __count,  __off_t __offset) __attribute__  (( __warn_unused_result__ )) ; 
#line 78 "/usr/include/x86_64-linux-gnu/sys/uio.h"
extern  ssize_t pwritev(int __fd, const struct iovec *__iovec, int __count,  __off_t __offset) __attribute__  (( __warn_unused_result__ )) ; 
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
#line 280 "/usr/include/x86_64-linux-gnu/bits/socket.h"
extern __inline  __attribute__  (( __gnu_inline__ )) struct cmsghdr * __attribute__  (( __nothrow__ )) __cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg)  
# 6959 "csapp.c"
{
# 6961 "csapp.c"
struct cmsghdr * retValue_acc;




# 6967 "csapp.c"
{

#line 285 "/usr/include/x86_64-linux-gnu/bits/socket.h"
if ((( size_t )(__cmsg->cmsg_len)) < sizeof (struct cmsghdr )){

# 6973 "csapp.c"
retValue_acc = ((struct cmsghdr *)0);
# 6975 "csapp.c"
return (struct cmsghdr * )retValue_acc;
 }
#line 285 "/usr/include/x86_64-linux-gnu/bits/socket.h"
__cmsg = ((struct cmsghdr *)(((unsigned char *)__cmsg) + ((((__cmsg->cmsg_len)) + sizeof ( size_t ) - 1) & (( size_t )(~(sizeof ( size_t ) - 1)))))); 
#line 287 "/usr/include/x86_64-linux-gnu/bits/socket.h"
if (((unsigned char *)(__cmsg + 1)) > (((unsigned char *)(__mhdr->msg_control)) + (__mhdr->msg_controllen)) || (((unsigned char *)__cmsg) + ((((__cmsg->cmsg_len)) + sizeof ( size_t ) - 1) & (( size_t )(~(sizeof ( size_t ) - 1)))) > (((unsigned char *)(__mhdr->msg_control)) + (__mhdr->msg_controllen)))){

# 6983 "csapp.c"
retValue_acc = ((struct cmsghdr *)0);
# 6985 "csapp.c"
return (struct cmsghdr * )retValue_acc;
 }
#line 293 "/usr/include/x86_64-linux-gnu/bits/socket.h"

# 6990 "csapp.c"
retValue_acc = __cmsg;
# 6992 "csapp.c"
return (struct cmsghdr * )retValue_acc;
 
# 6995 "csapp.c"

}

# 6999 "csapp.c"
return (struct cmsghdr * )retValue_acc;

# 7002 "csapp.c"

}
 
#line 307 "/usr/include/x86_64-linux-gnu/bits/socket.h"
enum {SCM_RIGHTS=0x01}; 
# 272 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
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
# 1 "/usr/include/x86_64-linux-gnu/bits/socket2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/socket2.h" 3 4
extern  ssize_t __recv_chk(int __fd, void *__buf,  size_t __n,  size_t __buflen, int __flags); 
#line 25 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
extern  ssize_t __recv_alias(int __fd, void *__buf,  size_t __n, int __flags) __asm__ ("""recv"); 
#line 30 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
extern  ssize_t __recv_chk_warn(int __fd, void *__buf,  size_t __n,  size_t __buflen, int __flags) __asm__ ("""__recv_chk") __attribute__  (( __warning__ ( "recv called with bigger length than size of destination ""buffer" )  )) ; 
#line 34 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  ssize_t recv(int __fd, void *__buf,  size_t __n, int __flags)  
# 7077 "csapp.c"
{
# 7079 "csapp.c"
ssize_t retValue_acc;




# 7085 "csapp.c"
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
if (__builtin_object_size(__buf, 0) != (( size_t )(-1))){
{ 
#line 40 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
if ((!__builtin_constant_p(__n))){

# 7094 "csapp.c"
retValue_acc = __recv_chk(__fd, __buf, __n, __builtin_object_size(__buf, 0), __flags);
# 7096 "csapp.c"
return (ssize_t )retValue_acc;
 }
#line 40 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
if (__n > __builtin_object_size(__buf, 0)){

# 7102 "csapp.c"
retValue_acc = __recv_chk_warn(__fd, __buf, __n, __builtin_object_size(__buf, 0), __flags);
# 7104 "csapp.c"
return (ssize_t )retValue_acc;
 }} }
#line 43 "/usr/include/x86_64-linux-gnu/bits/socket2.h"

# 7109 "csapp.c"
retValue_acc = __recv_alias(__fd, __buf, __n, __flags);
# 7111 "csapp.c"
return (ssize_t )retValue_acc;
 
# 7114 "csapp.c"

}

# 7118 "csapp.c"
return (ssize_t )retValue_acc;

# 7121 "csapp.c"

}
 
#line 49 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
extern  ssize_t __recvfrom_chk(int __fd, void *__restrict __buf,  size_t __n,  size_t __buflen, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
#line 50 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
extern  ssize_t __recvfrom_alias(int __fd, void *__restrict __buf,  size_t __n, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len) __asm__ ("""recvfrom"); 
#line 59 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
extern  ssize_t __recvfrom_chk_warn(int __fd, void *__restrict __buf,  size_t __n,  size_t __buflen, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len) __asm__ ("""__recvfrom_chk") __attribute__  (( __warning__ ( "recvfrom called with bigger length than size of ""destination buffer" )  )) ; 
#line 64 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  ssize_t recvfrom(int __fd, void *__restrict __buf,  size_t __n, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len)  
# 7133 "csapp.c"
{
# 7135 "csapp.c"
ssize_t retValue_acc;




# 7141 "csapp.c"
{

#line 74 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
if (__builtin_object_size(__buf, 0) != (( size_t )(-1))){
{ 
#line 70 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
if ((!__builtin_constant_p(__n))){

# 7150 "csapp.c"
retValue_acc = __recvfrom_chk(__fd, __buf, __n, __builtin_object_size(__buf, 0), __flags, __addr, __addr_len);
# 7152 "csapp.c"
return (ssize_t )retValue_acc;
 }
#line 70 "/usr/include/x86_64-linux-gnu/bits/socket2.h"
if (__n > __builtin_object_size(__buf, 0)){

# 7158 "csapp.c"
retValue_acc = __recvfrom_chk_warn(__fd, __buf, __n, __builtin_object_size(__buf, 0), __flags, __addr, __addr_len);
# 7160 "csapp.c"
return (ssize_t )retValue_acc;
 }} }
#line 74 "/usr/include/x86_64-linux-gnu/bits/socket2.h"

# 7165 "csapp.c"
retValue_acc = __recvfrom_alias(__fd, __buf, __n, __flags, __addr, __addr_len);
# 7167 "csapp.c"
return (ssize_t )retValue_acc;
 
# 7170 "csapp.c"

}

# 7174 "csapp.c"
return (ssize_t )retValue_acc;

# 7177 "csapp.c"

}
 
# 281 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 28 "csapp.h" 2
# 1 "/usr/include/netdb.h" 1 3 4
# 27 "/usr/include/netdb.h" 3 4
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
# 28 "/usr/include/netdb.h" 2 3 4
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
# 33 "/usr/include/netdb.h" 2 3 4
# 42 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 3 4
struct netent {char *n_name; char **n_aliases; int n_addrtype;  uint32_t n_net; 
}; 
# 43 "/usr/include/netdb.h" 2 3 4
# 61 "/usr/include/netdb.h" 3 4
extern int *__h_errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 92 "/usr/include/netdb.h"
extern void herror(const char *__str) __attribute__  (( __nothrow__ )) ; 
#line 95 "/usr/include/netdb.h"
extern const char *hstrerror(int __err_num) __attribute__  (( __nothrow__ )) ; 
#line 110 "/usr/include/netdb.h"
struct hostent {char *h_name; char **h_aliases; int h_addrtype; int h_length; char **h_addr_list; 
}; 
#line 117 "/usr/include/netdb.h"
extern void sethostent(int __stay_open); 
#line 123 "/usr/include/netdb.h"
extern void endhostent(void ); 
#line 130 "/usr/include/netdb.h"
extern struct hostent *gethostent(void ); 
#line 138 "/usr/include/netdb.h"
extern struct hostent *gethostbyaddr(const void *__addr,  __socklen_t __len, int __type); 
#line 144 "/usr/include/netdb.h"
extern struct hostent *gethostbyname(const char *__name); 
# 92 "/usr/include/netdb.h" 3 4
# 155 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2(const char *__name, int __af); 
#line 170 "/usr/include/netdb.h"
extern int gethostent_r(struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 177 "/usr/include/netdb.h"
extern int gethostbyaddr_r(const void *__restrict __addr,  __socklen_t __len, int __type, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 183 "/usr/include/netdb.h"
extern int gethostbyname_r(const char *__restrict __name, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 189 "/usr/include/netdb.h"
extern int gethostbyname2_r(const char *__restrict __name, int __af, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
# 167 "/usr/include/netdb.h" 3 4
# 198 "/usr/include/netdb.h" 3 4
extern void setnetent(int __stay_open); 
#line 204 "/usr/include/netdb.h"
extern void endnetent(void ); 
#line 211 "/usr/include/netdb.h"
extern struct netent *getnetent(void ); 
#line 218 "/usr/include/netdb.h"
extern struct netent *getnetbyaddr( uint32_t __net, int __type); 
#line 224 "/usr/include/netdb.h"
extern struct netent *getnetbyname(const char *__name); 
#line 240 "/usr/include/netdb.h"
extern int getnetent_r(struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 246 "/usr/include/netdb.h"
extern int getnetbyaddr_r( uint32_t __net, int __type, struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 252 "/usr/include/netdb.h"
extern int getnetbyname_r(const char *__restrict __name, struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 263 "/usr/include/netdb.h"
struct servent {char *s_name; char **s_aliases; int s_port; char *s_proto; 
}; 
#line 270 "/usr/include/netdb.h"
extern void setservent(int __stay_open); 
#line 276 "/usr/include/netdb.h"
extern void endservent(void ); 
#line 283 "/usr/include/netdb.h"
extern struct servent *getservent(void ); 
#line 290 "/usr/include/netdb.h"
extern struct servent *getservbyname(const char *__name, const char *__proto); 
#line 297 "/usr/include/netdb.h"
extern struct servent *getservbyport(int __port, const char *__proto); 
# 237 "/usr/include/netdb.h" 3 4
# 310 "/usr/include/netdb.h" 3 4
extern int getservent_r(struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 316 "/usr/include/netdb.h"
extern int getservbyname_r(const char *__restrict __name, const char *__restrict __proto, struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 321 "/usr/include/netdb.h"
extern int getservbyport_r(int __port, const char *__restrict __proto, struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 331 "/usr/include/netdb.h"
struct protoent {char *p_name; char **p_aliases; int p_proto; 
}; 
#line 338 "/usr/include/netdb.h"
extern void setprotoent(int __stay_open); 
#line 344 "/usr/include/netdb.h"
extern void endprotoent(void ); 
#line 351 "/usr/include/netdb.h"
extern struct protoent *getprotoent(void ); 
#line 357 "/usr/include/netdb.h"
extern struct protoent *getprotobyname(const char *__name); 
#line 363 "/usr/include/netdb.h"
extern struct protoent *getprotobynumber(int __proto); 
#line 376 "/usr/include/netdb.h"
extern int getprotoent_r(struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 381 "/usr/include/netdb.h"
extern int getprotobyname_r(const char *__restrict __name, struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 386 "/usr/include/netdb.h"
extern int getprotobynumber_r(int __proto, struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
# 374 "/usr/include/netdb.h" 3 4
# 395 "/usr/include/netdb.h" 3 4
extern int setnetgrent(const char *__netgroup); 
#line 403 "/usr/include/netdb.h"
extern void endnetgrent(void ); 
#line 414 "/usr/include/netdb.h"
extern int getnetgrent(char **__restrict __hostp, char **__restrict __userp, char **__restrict __domainp); 
# 412 "/usr/include/netdb.h" 3 4
# 424 "/usr/include/netdb.h" 3 4
extern int innetgr(const char *__netgroup, const char *__host, const char *__user, const char *__domain); 
#line 435 "/usr/include/netdb.h"
extern int getnetgrent_r(char **__restrict __hostp, char **__restrict __userp, char **__restrict __domainp, char *__restrict __buffer,  size_t __buflen); 
#line 454 "/usr/include/netdb.h"
extern int rcmd(char **__restrict __ahost, unsigned short int __rport, const char *__restrict __locuser, const char *__restrict __remuser, const char *__restrict __cmd, int *__restrict __fd2p); 
# 451 "/usr/include/netdb.h" 3 4
# 467 "/usr/include/netdb.h" 3 4
extern int rcmd_af(char **__restrict __ahost, unsigned short int __rport, const char *__restrict __locuser, const char *__restrict __remuser, const char *__restrict __cmd, int *__restrict __fd2p,  sa_family_t __af); 
#line 482 "/usr/include/netdb.h"
extern int rexec(char **__restrict __ahost, int __rport, const char *__restrict __name, const char *__restrict __pass, const char *__restrict __cmd, int *__restrict __fd2p); 
# 479 "/usr/include/netdb.h" 3 4
# 495 "/usr/include/netdb.h" 3 4
extern int rexec_af(char **__restrict __ahost, int __rport, const char *__restrict __name, const char *__restrict __pass, const char *__restrict __cmd, int *__restrict __fd2p,  sa_family_t __af); 
#line 506 "/usr/include/netdb.h"
extern int ruserok(const char *__rhost, int __suser, const char *__remuser, const char *__locuser); 
# 505 "/usr/include/netdb.h" 3 4
# 517 "/usr/include/netdb.h" 3 4
extern int ruserok_af(const char *__rhost, int __suser, const char *__remuser, const char *__locuser,  sa_family_t __af); 
#line 529 "/usr/include/netdb.h"
extern int iruserok( uint32_t __raddr, int __suser, const char *__remuser, const char *__locuser); 
# 528 "/usr/include/netdb.h" 3 4
# 541 "/usr/include/netdb.h" 3 4
extern int iruserok_af(const void *__raddr, int __suser, const char *__remuser, const char *__locuser,  sa_family_t __af); 
#line 551 "/usr/include/netdb.h"
extern int rresvport(int *__alport); 
# 551 "/usr/include/netdb.h" 3 4
# 560 "/usr/include/netdb.h" 3 4
extern int rresvport_af(int *__alport,  sa_family_t __af); 
#line 577 "/usr/include/netdb.h"
struct addrinfo {int ai_flags; int ai_family; int ai_socktype; int ai_protocol;  socklen_t ai_addrlen; struct sockaddr *ai_addr; char *ai_canonname; struct addrinfo *ai_next; 
}; 
#line 665 "/usr/include/netdb.h"
extern int getaddrinfo(const char *__restrict __name, const char *__restrict __service, const struct addrinfo *__restrict __req, struct addrinfo **__restrict __pai); 
#line 668 "/usr/include/netdb.h"
extern void freeaddrinfo(struct addrinfo *__ai) __attribute__  (( __nothrow__ )) ; 
#line 671 "/usr/include/netdb.h"
extern const char *gai_strerror(int __ecode) __attribute__  (( __nothrow__ )) ; 
#line 680 "/usr/include/netdb.h"
extern int getnameinfo(const struct sockaddr *__restrict __sa,  socklen_t __salen, char *__restrict __host,  socklen_t __hostlen, char *__restrict __serv,  socklen_t __servlen, int __flags); 
# 662 "/usr/include/netdb.h" 3 4
# 713 "/usr/include/netdb.h" 3 4
# 29 "csapp.h" 2
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
# 31 "csapp.h" 2
# 40 "csapp.h" 
typedef struct sockaddr SA; 
#line 51 "csapp.h"
typedef struct {int rio_fd; int rio_cnt; char *rio_bufptr; char rio_buf[8192]; 
}rio_t; 
#line 55 "csapp.h"
extern int (*__h_errno_location()); 
#line 56 "csapp.h"
extern char **environ; 
#line 64 "csapp.h"
void unix_error(char *msg); 
#line 65 "csapp.h"
void posix_error(int code, char *msg); 
#line 66 "csapp.h"
void dns_error(char *msg); 
#line 67 "csapp.h"
void gai_error(int code, char *msg); 
#line 68 "csapp.h"
void app_error(char *msg); 
#line 71 "csapp.h"
 pid_t Fork(void ); 
#line 72 "csapp.h"
void Execve(const char *filename, char *const argv[], char *const envp[]); 
#line 73 "csapp.h"
 pid_t Wait(int *status); 
#line 74 "csapp.h"
 pid_t Waitpid( pid_t pid, int *iptr, int options); 
#line 75 "csapp.h"
void Kill( pid_t pid, int signum); 
#line 76 "csapp.h"
unsigned int Sleep(unsigned int secs); 
#line 77 "csapp.h"
void Pause(void ); 
#line 78 "csapp.h"
unsigned int Alarm(unsigned int seconds); 
#line 79 "csapp.h"
void Setpgid( pid_t pid,  pid_t pgid); 
#line 80 "csapp.h"
 pid_t Getpgrp(); 
#line 83 "csapp.h"
typedef void handler_t(int ); 
#line 84 "csapp.h"
 handler_t *Signal(int signum,  handler_t *handler); 
#line 85 "csapp.h"
void Sigprocmask(int how, const  sigset_t *set,  sigset_t *oldset); 
#line 86 "csapp.h"
void Sigemptyset( sigset_t *set); 
#line 87 "csapp.h"
void Sigfillset( sigset_t *set); 
#line 88 "csapp.h"
void Sigaddset( sigset_t *set, int signum); 
#line 89 "csapp.h"
void Sigdelset( sigset_t *set, int signum); 
#line 90 "csapp.h"
int Sigismember(const  sigset_t *set, int signum); 
#line 91 "csapp.h"
int Sigsuspend(const  sigset_t *set); 
#line 94 "csapp.h"
 ssize_t sio_puts(char s[]); 
#line 95 "csapp.h"
 ssize_t sio_putl(long v); 
#line 96 "csapp.h"
void sio_error(char s[]); 
#line 99 "csapp.h"
 ssize_t Sio_puts(char s[]); 
#line 100 "csapp.h"
 ssize_t Sio_putl(long v); 
#line 101 "csapp.h"
void Sio_error(char s[]); 
#line 104 "csapp.h"
int Open(const char *pathname, int flags,  mode_t mode); 
#line 105 "csapp.h"
 ssize_t Read(int fd, void *buf,  size_t count); 
#line 106 "csapp.h"
 ssize_t Write(int fd, const void *buf,  size_t count); 
#line 107 "csapp.h"
 off_t Lseek(int fildes,  off_t offset, int whence); 
#line 108 "csapp.h"
void Close(int fd); 
#line 110 "csapp.h"
int Select(int n,  fd_set *readfds,  fd_set *writefds,  fd_set *exceptfds, struct timeval *timeout); 
#line 111 "csapp.h"
int Dup2(int fd1, int fd2); 
#line 112 "csapp.h"
void Stat(const char *filename, struct stat *buf); 
#line 113 "csapp.h"
void Fstat(int fd, struct stat *buf); 
#line 116 "csapp.h"
 DIR *Opendir(const char *name); 
#line 117 "csapp.h"
struct dirent *Readdir( DIR *dirp); 
#line 118 "csapp.h"
int Closedir( DIR *dirp); 
#line 121 "csapp.h"
void *Mmap(void *addr,  size_t len, int prot, int flags, int fd,  off_t offset); 
#line 122 "csapp.h"
void Munmap(void *start,  size_t length); 
#line 125 "csapp.h"
void Fclose( FILE *fp); 
#line 126 "csapp.h"
 FILE *Fdopen(int fd, const char *type); 
#line 127 "csapp.h"
char *Fgets(char *ptr, int n,  FILE *stream); 
#line 128 "csapp.h"
 FILE *Fopen(const char *filename, const char *mode); 
#line 129 "csapp.h"
void Fputs(const char *ptr,  FILE *stream); 
#line 130 "csapp.h"
 size_t Fread(void *ptr,  size_t size,  size_t nmemb,  FILE *stream); 
#line 131 "csapp.h"
void Fwrite(const void *ptr,  size_t size,  size_t nmemb,  FILE *stream); 
#line 134 "csapp.h"
void *Malloc( size_t size); 
#line 135 "csapp.h"
void *Realloc(void *ptr,  size_t size); 
#line 136 "csapp.h"
void *Calloc( size_t nmemb,  size_t size); 
#line 137 "csapp.h"
void Free(void *ptr); 
#line 140 "csapp.h"
int Socket(int domain, int type, int protocol); 
#line 141 "csapp.h"
void Setsockopt(int s, int level, int optname, const void *optval, int optlen); 
#line 142 "csapp.h"
void Bind(int sockfd, struct sockaddr *my_addr, int addrlen); 
#line 143 "csapp.h"
void Listen(int s, int backlog); 
#line 144 "csapp.h"
int Accept(int s, struct sockaddr *addr,  socklen_t *addrlen); 
#line 145 "csapp.h"
void Connect(int sockfd, struct sockaddr *serv_addr, int addrlen); 
#line 149 "csapp.h"
void Getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res); 
#line 151 "csapp.h"
void Getnameinfo(const struct sockaddr *sa,  socklen_t salen, char *host,  size_t hostlen, char *serv,  size_t servlen, int flags); 
#line 152 "csapp.h"
void Freeaddrinfo(struct addrinfo *res); 
#line 153 "csapp.h"
void Inet_ntop(int af, const void *src, char *dst,  socklen_t size); 
#line 154 "csapp.h"
void Inet_pton(int af, const char *src, void *dst); 
#line 157 "csapp.h"
struct hostent *Gethostbyname(const char *name); 
#line 158 "csapp.h"
struct hostent *Gethostbyaddr(const char *addr, int len, int type); 
#line 162 "csapp.h"
void Pthread_create( pthread_t *tidp,  pthread_attr_t *attrp, void *(*routine)(void *), void *argp); 
#line 163 "csapp.h"
void Pthread_join( pthread_t tid, void **thread_return); 
#line 164 "csapp.h"
void Pthread_cancel( pthread_t tid); 
#line 165 "csapp.h"
void Pthread_detach( pthread_t tid); 
#line 166 "csapp.h"
void Pthread_exit(void *retval); 
#line 167 "csapp.h"
 pthread_t Pthread_self(void ); 
#line 168 "csapp.h"
void Pthread_once( pthread_once_t *once_control, void (*init_function)()); 
#line 171 "csapp.h"
void Sem_init( sem_t *sem, int pshared, unsigned int value); 
#line 172 "csapp.h"
void P( sem_t *sem); 
#line 173 "csapp.h"
void V( sem_t *sem); 
#line 176 "csapp.h"
 ssize_t rio_readn(int fd, void *usrbuf,  size_t n); 
#line 177 "csapp.h"
 ssize_t rio_writen(int fd, void *usrbuf,  size_t n); 
#line 178 "csapp.h"
void rio_readinitb( rio_t *rp, int fd); 
#line 179 "csapp.h"
 ssize_t rio_readnb( rio_t *rp, void *usrbuf,  size_t n); 
#line 180 "csapp.h"
 ssize_t rio_readlineb( rio_t *rp, void *usrbuf,  size_t maxlen); 
#line 183 "csapp.h"
 ssize_t Rio_readn(int fd, void *usrbuf,  size_t n); 
#line 184 "csapp.h"
void Rio_writen(int fd, void *usrbuf,  size_t n); 
#line 185 "csapp.h"
void Rio_readinitb( rio_t *rp, int fd); 
#line 186 "csapp.h"
 ssize_t Rio_readnb( rio_t *rp, void *usrbuf,  size_t n); 
#line 187 "csapp.h"
 ssize_t Rio_readlineb( rio_t *rp, void *usrbuf,  size_t maxlen); 
#line 190 "csapp.h"
int open_clientfd(char *hostname, char *port); 
#line 191 "csapp.h"
int open_listenfd(char *port); 
#line 194 "csapp.h"
int Open_clientfd(char *hostname, char *port); 
#line 195 "csapp.h"
int Open_listenfd(char *port); 
#line 30 "csapp.c"
void unix_error(char *msg)  
# 7709 "csapp.c"
{



# 7714 "csapp.c"
{

#line 31 "csapp.c"
fprintf(stderr, "%s: %s\n", msg, strerror(((*__errno_location())))); 
#line 32 "csapp.c"
exit(0); 
# 7721 "csapp.c"

}

# 7725 "csapp.c"

}
 
#line 37 "csapp.c"
void posix_error(int code, char *msg)  
# 7731 "csapp.c"
{



# 7736 "csapp.c"
{

#line 38 "csapp.c"
fprintf(stderr, "%s: %s\n", msg, strerror(code)); 
#line 39 "csapp.c"
exit(0); 
# 7743 "csapp.c"

}

# 7747 "csapp.c"

}
 
#line 43 "csapp.c"
void gai_error(int code, char *msg)  
# 7753 "csapp.c"
{



# 7758 "csapp.c"
{

#line 44 "csapp.c"
fprintf(stderr, "%s: %s\n", msg, gai_strerror(code)); 
#line 45 "csapp.c"
exit(0); 
# 7765 "csapp.c"

}

# 7769 "csapp.c"

}
 
#line 49 "csapp.c"
void app_error(char *msg)  
# 7775 "csapp.c"
{



# 7780 "csapp.c"
{

#line 50 "csapp.c"
fprintf(stderr, "%s\n", msg); 
#line 51 "csapp.c"
exit(0); 
# 7787 "csapp.c"

}

# 7791 "csapp.c"

}
 
#line 56 "csapp.c"
void dns_error(char *msg)  
# 7797 "csapp.c"
{



# 7802 "csapp.c"
{

#line 57 "csapp.c"
fprintf(stderr, "%s\n", msg); 
#line 58 "csapp.c"
exit(0); 
# 7809 "csapp.c"

}

# 7813 "csapp.c"

}
 
#line 68 "csapp.c"
 pid_t Fork(void )  
# 7819 "csapp.c"
{
# 7821 "csapp.c"
pid_t retValue_acc;




# 7827 "csapp.c"
{

#line 69 "csapp.c"

#line 69 "csapp.c"
 pid_t pid;
#line 71 "csapp.c"
if ((pid = fork()) < 0){
unix_error("Fork error"); }
#line 73 "csapp.c"

# 7839 "csapp.c"
retValue_acc = pid;
# 7841 "csapp.c"
return (pid_t )retValue_acc;
 
# 7844 "csapp.c"

}

# 7848 "csapp.c"
return (pid_t )retValue_acc;

# 7851 "csapp.c"

}
 
#line 78 "csapp.c"
void Execve(const char *filename, char *const argv[], char *const envp[])  
# 7857 "csapp.c"
{



# 7862 "csapp.c"
{

#line 81 "csapp.c"
if (execve(filename, argv, envp) < 0){
unix_error("Execve error"); }
# 7868 "csapp.c"

}

# 7872 "csapp.c"

}
 
#line 85 "csapp.c"
 pid_t Wait(int *status)  
# 7878 "csapp.c"
{
# 7880 "csapp.c"
pid_t retValue_acc;




# 7886 "csapp.c"
{

#line 86 "csapp.c"

#line 86 "csapp.c"
 pid_t pid;
#line 88 "csapp.c"
if ((pid = wait(status)) < 0){
unix_error("Wait error"); }
#line 90 "csapp.c"

# 7898 "csapp.c"
retValue_acc = pid;
# 7900 "csapp.c"
return (pid_t )retValue_acc;
 
# 7903 "csapp.c"

}

# 7907 "csapp.c"
return (pid_t )retValue_acc;

# 7910 "csapp.c"

}
 
#line 95 "csapp.c"
 pid_t Waitpid( pid_t pid, int *iptr, int options)  
# 7916 "csapp.c"
{
# 7918 "csapp.c"
pid_t retValue_acc;




# 7924 "csapp.c"
{

#line 96 "csapp.c"

#line 96 "csapp.c"
 pid_t retpid;
#line 98 "csapp.c"
if ((retpid = waitpid(pid, iptr, options)) < 0){
unix_error("Waitpid error"); }
#line 100 "csapp.c"

# 7936 "csapp.c"
retValue_acc = (retpid);
# 7938 "csapp.c"
return (pid_t )retValue_acc;
 
# 7941 "csapp.c"

}

# 7945 "csapp.c"
return (pid_t )retValue_acc;

# 7948 "csapp.c"

}
 
#line 105 "csapp.c"
void Kill( pid_t pid, int signum)  
# 7954 "csapp.c"
{



# 7959 "csapp.c"
{

#line 106 "csapp.c"

#line 106 "csapp.c"
int rc;
#line 108 "csapp.c"
if ((rc = kill(pid, signum)) < 0){
unix_error("Kill error"); }
# 7969 "csapp.c"

}

# 7973 "csapp.c"

}
 
#line 114 "csapp.c"
void Pause()  
# 7979 "csapp.c"
{



# 7984 "csapp.c"
{

#line 115 "csapp.c"
((void )pause()); 
#line 116 "csapp.c"
return ; 
 
# 7992 "csapp.c"

}

# 7996 "csapp.c"

}
 
#line 120 "csapp.c"
unsigned int Sleep(unsigned int secs)  
# 8002 "csapp.c"
{
# 8004 "csapp.c"
unsigned int retValue_acc;




# 8010 "csapp.c"
{

#line 121 "csapp.c"

#line 121 "csapp.c"
unsigned int rc;
#line 123 "csapp.c"
if ((rc = sleep(secs)) < 0){
unix_error("Sleep error"); }
#line 125 "csapp.c"

# 8022 "csapp.c"
retValue_acc = rc;
# 8024 "csapp.c"
return (unsigned int )retValue_acc;
 
# 8027 "csapp.c"

}

# 8031 "csapp.c"
return (unsigned int )retValue_acc;

# 8034 "csapp.c"

}
 
#line 128 "csapp.c"
unsigned int Alarm(unsigned int seconds)  
# 8040 "csapp.c"
{
# 8042 "csapp.c"
unsigned int retValue_acc;




# 8048 "csapp.c"
{

#line 129 "csapp.c"

# 8053 "csapp.c"
retValue_acc = alarm(seconds);
# 8055 "csapp.c"
return (unsigned int )retValue_acc;
 
# 8058 "csapp.c"

}

# 8062 "csapp.c"
return (unsigned int )retValue_acc;

# 8065 "csapp.c"

}
 
#line 132 "csapp.c"
void Setpgid( pid_t pid,  pid_t pgid)  
# 8071 "csapp.c"
{



# 8076 "csapp.c"
{

#line 133 "csapp.c"

#line 133 "csapp.c"
int rc;
#line 135 "csapp.c"
if ((rc = setpgid(pid, pgid)) < 0){
unix_error("Setpgid error"); }
#line 137 "csapp.c"
return ; 
 
# 8089 "csapp.c"

}

# 8093 "csapp.c"

}
 
#line 140 "csapp.c"
 pid_t Getpgrp(void )  
# 8099 "csapp.c"
{
# 8101 "csapp.c"
pid_t retValue_acc;




# 8107 "csapp.c"
{

#line 141 "csapp.c"

# 8112 "csapp.c"
retValue_acc = getpgrp();
# 8114 "csapp.c"
return (pid_t )retValue_acc;
 
# 8117 "csapp.c"

}

# 8121 "csapp.c"
return (pid_t )retValue_acc;

# 8124 "csapp.c"

}
 
#line 150 "csapp.c"
 handler_t *Signal(int signum,  handler_t *handler)  
# 8130 "csapp.c"
{
# 8132 "csapp.c"
handler_t* retValue_acc;




# 8138 "csapp.c"
{

#line 151 "csapp.c"

#line 151 "csapp.c"
struct sigaction action,old_action;
#line 153 "csapp.c"
action.__sigaction_handler.sa_handler = handler; 
#line 154 "csapp.c"
sigemptyset((&action.sa_mask)); 
#line 155 "csapp.c"
action.sa_flags = 0x10000000; 
#line 157 "csapp.c"
if (sigaction(signum, (&action), (&old_action)) < 0){
unix_error("Signal error"); }
#line 159 "csapp.c"

# 8156 "csapp.c"
retValue_acc = (old_action.__sigaction_handler.sa_handler);
# 8158 "csapp.c"
return (handler_t* )retValue_acc;
 
# 8161 "csapp.c"

}

# 8165 "csapp.c"
return (handler_t* )retValue_acc;

# 8168 "csapp.c"

}
 
#line 164 "csapp.c"
void Sigprocmask(int how, const  sigset_t *set,  sigset_t *oldset)  
# 8174 "csapp.c"
{



# 8179 "csapp.c"
{

#line 167 "csapp.c"
if (sigprocmask(how, set, oldset) < 0){
unix_error("Sigprocmask error"); }
#line 167 "csapp.c"
return ; 
 
# 8188 "csapp.c"

}

# 8192 "csapp.c"

}
 
#line 171 "csapp.c"
void Sigemptyset( sigset_t *set)  
# 8198 "csapp.c"
{



# 8203 "csapp.c"
{

#line 174 "csapp.c"
if (sigemptyset(set) < 0){
unix_error("Sigemptyset error"); }
#line 174 "csapp.c"
return ; 
 
# 8212 "csapp.c"

}

# 8216 "csapp.c"

}
 
#line 178 "csapp.c"
void Sigfillset( sigset_t *set)  
# 8222 "csapp.c"
{



# 8227 "csapp.c"
{

#line 181 "csapp.c"
if (sigfillset(set) < 0){
unix_error("Sigfillset error"); }
#line 181 "csapp.c"
return ; 
 
# 8236 "csapp.c"

}

# 8240 "csapp.c"

}
 
#line 185 "csapp.c"
void Sigaddset( sigset_t *set, int signum)  
# 8246 "csapp.c"
{



# 8251 "csapp.c"
{

#line 188 "csapp.c"
if (sigaddset(set, signum) < 0){
unix_error("Sigaddset error"); }
#line 188 "csapp.c"
return ; 
 
# 8260 "csapp.c"

}

# 8264 "csapp.c"

}
 
#line 192 "csapp.c"
void Sigdelset( sigset_t *set, int signum)  
# 8270 "csapp.c"
{



# 8275 "csapp.c"
{

#line 195 "csapp.c"
if (sigdelset(set, signum) < 0){
unix_error("Sigdelset error"); }
#line 195 "csapp.c"
return ; 
 
# 8284 "csapp.c"

}

# 8288 "csapp.c"

}
 
#line 199 "csapp.c"
int Sigismember(const  sigset_t *set, int signum)  
# 8294 "csapp.c"
{
# 8296 "csapp.c"
int retValue_acc;




# 8302 "csapp.c"
{

#line 200 "csapp.c"

#line 200 "csapp.c"
int rc;
#line 201 "csapp.c"
if ((rc = sigismember(set, signum)) < 0){
unix_error("Sigismember error"); }
#line 203 "csapp.c"

# 8314 "csapp.c"
retValue_acc = rc;
# 8316 "csapp.c"
return (int )retValue_acc;
 
# 8319 "csapp.c"

}

# 8323 "csapp.c"
return (int )retValue_acc;

# 8326 "csapp.c"

}
 
#line 207 "csapp.c"
int Sigsuspend(const  sigset_t *set)  
# 8332 "csapp.c"
{
# 8334 "csapp.c"
int retValue_acc;




# 8340 "csapp.c"
{

#line 208 "csapp.c"

#line 208 "csapp.c"
int rc = sigsuspend(set);
#line 209 "csapp.c"
if (((*__errno_location())) != 4){
unix_error("Sigsuspend error"); }
#line 211 "csapp.c"

# 8352 "csapp.c"
retValue_acc = rc;
# 8354 "csapp.c"
return (int )retValue_acc;
 
# 8357 "csapp.c"

}

# 8361 "csapp.c"
return (int )retValue_acc;

# 8364 "csapp.c"

}
 
# 23 "csapp.c" 2
# 224 "csapp.c" 
static void sio_reverse(char s[])  
# 8371 "csapp.c"
{



# 8376 "csapp.c"
{

#line 225 "csapp.c"

#line 225 "csapp.c"
int c,i,j;
#line 227 "csapp.c"
for(i = 0 , j = strlen(s) - 1;i < j;i++ , j--) { { 
#line 228 "csapp.c"
c = s[i]; 
#line 229 "csapp.c"
s[i] = s[j]; 
#line 230 "csapp.c"
s[j] = c; } } 
# 8391 "csapp.c"

}

# 8395 "csapp.c"

}
 
#line 236 "csapp.c"
static void sio_ltoa(long v, char s[], int b)  
# 8401 "csapp.c"
{



# 8406 "csapp.c"
{

#line 237 "csapp.c"

#line 237 "csapp.c"
int c,i = 0;
#line 239 "csapp.c"
do { { 
#line 240 "csapp.c"
s[i++] = (((c = (v % b)) < 10)?c + '0':c - 10 + 'a'); } } while((v /= b) > 0); 
#line 242 "csapp.c"
s[i] = '\0'; 
#line 243 "csapp.c"
sio_reverse(s); 
# 8421 "csapp.c"

}

# 8425 "csapp.c"

}
 
#line 248 "csapp.c"
static  size_t sio_strlen(char s[])  
# 8431 "csapp.c"
{
# 8433 "csapp.c"
size_t retValue_acc;




# 8439 "csapp.c"
{

#line 249 "csapp.c"

#line 249 "csapp.c"
int i = 0;
#line 251 "csapp.c"
while(s[i] != '\0') { (++i); } 
#line 253 "csapp.c"

# 8450 "csapp.c"
retValue_acc = i;
# 8452 "csapp.c"
return (size_t )retValue_acc;
 
# 8455 "csapp.c"

}

# 8459 "csapp.c"
return (size_t )retValue_acc;

# 8462 "csapp.c"

}
 
#line 261 "csapp.c"
 ssize_t sio_puts(char s[])  
# 8468 "csapp.c"
{
# 8470 "csapp.c"
ssize_t retValue_acc;




# 8476 "csapp.c"
{

#line 262 "csapp.c"

# 8481 "csapp.c"
retValue_acc = write(1, s, sio_strlen(s));
# 8483 "csapp.c"
return (ssize_t )retValue_acc;
 
# 8486 "csapp.c"

}

# 8490 "csapp.c"
return (ssize_t )retValue_acc;

# 8493 "csapp.c"

}
 
#line 266 "csapp.c"
 ssize_t sio_putl(long v)  
# 8499 "csapp.c"
{
# 8501 "csapp.c"
ssize_t retValue_acc;




# 8507 "csapp.c"
{

#line 267 "csapp.c"

#line 267 "csapp.c"
char s[128];
#line 269 "csapp.c"
sio_ltoa(v, s, 10); 
#line 270 "csapp.c"

# 8518 "csapp.c"
retValue_acc = sio_puts(s);
# 8520 "csapp.c"
return (ssize_t )retValue_acc;
 
# 8523 "csapp.c"

}

# 8527 "csapp.c"
return (ssize_t )retValue_acc;

# 8530 "csapp.c"

}
 
#line 274 "csapp.c"
void sio_error(char s[])  
# 8536 "csapp.c"
{



# 8541 "csapp.c"
{

#line 275 "csapp.c"
sio_puts(s); 
#line 276 "csapp.c"
_exit(1); 
# 8548 "csapp.c"

}

# 8552 "csapp.c"

}
 
#line 284 "csapp.c"
 ssize_t Sio_putl(long v)  
# 8558 "csapp.c"
{
# 8560 "csapp.c"
ssize_t retValue_acc;




# 8566 "csapp.c"
{

#line 285 "csapp.c"

#line 285 "csapp.c"
 ssize_t n;
#line 287 "csapp.c"
if ((n = sio_putl(v)) < 0){
sio_error("Sio_putl error"); }
#line 289 "csapp.c"

# 8578 "csapp.c"
retValue_acc = n;
# 8580 "csapp.c"
return (ssize_t )retValue_acc;
 
# 8583 "csapp.c"

}

# 8587 "csapp.c"
return (ssize_t )retValue_acc;

# 8590 "csapp.c"

}
 
#line 293 "csapp.c"
 ssize_t Sio_puts(char s[])  
# 8596 "csapp.c"
{
# 8598 "csapp.c"
ssize_t retValue_acc;




# 8604 "csapp.c"
{

#line 294 "csapp.c"

#line 294 "csapp.c"
 ssize_t n;
#line 296 "csapp.c"
if ((n = sio_puts(s)) < 0){
sio_error("Sio_puts error"); }
#line 298 "csapp.c"

# 8616 "csapp.c"
retValue_acc = n;
# 8618 "csapp.c"
return (ssize_t )retValue_acc;
 
# 8621 "csapp.c"

}

# 8625 "csapp.c"
return (ssize_t )retValue_acc;

# 8628 "csapp.c"

}
 
#line 302 "csapp.c"
void Sio_error(char s[])  
# 8634 "csapp.c"
{



# 8639 "csapp.c"
{

#line 303 "csapp.c"
sio_error(s); 
# 8644 "csapp.c"

}

# 8648 "csapp.c"

}
 
#line 311 "csapp.c"
int Open(const char *pathname, int flags,  mode_t mode)  
# 8654 "csapp.c"
{
# 8656 "csapp.c"
int retValue_acc;




# 8662 "csapp.c"
{

#line 312 "csapp.c"

#line 312 "csapp.c"
int rc;
#line 314 "csapp.c"
if ((rc = open(pathname, flags, mode)) < 0){
unix_error("Open error"); }
#line 316 "csapp.c"

# 8674 "csapp.c"
retValue_acc = rc;
# 8676 "csapp.c"
return (int )retValue_acc;
 
# 8679 "csapp.c"

}

# 8683 "csapp.c"
return (int )retValue_acc;

# 8686 "csapp.c"

}
 
#line 320 "csapp.c"
 ssize_t Read(int fd, void *buf,  size_t count)  
# 8692 "csapp.c"
{
# 8694 "csapp.c"
ssize_t retValue_acc;




# 8700 "csapp.c"
{

#line 321 "csapp.c"

#line 321 "csapp.c"
 ssize_t rc;
#line 323 "csapp.c"
if ((rc = read(fd, buf, count)) < 0){
unix_error("Read error"); }
#line 325 "csapp.c"

# 8712 "csapp.c"
retValue_acc = rc;
# 8714 "csapp.c"
return (ssize_t )retValue_acc;
 
# 8717 "csapp.c"

}

# 8721 "csapp.c"
return (ssize_t )retValue_acc;

# 8724 "csapp.c"

}
 
#line 329 "csapp.c"
 ssize_t Write(int fd, const void *buf,  size_t count)  
# 8730 "csapp.c"
{
# 8732 "csapp.c"
ssize_t retValue_acc;




# 8738 "csapp.c"
{

#line 330 "csapp.c"

#line 330 "csapp.c"
 ssize_t rc;
#line 332 "csapp.c"
if ((rc = write(fd, buf, count)) < 0){
unix_error("Write error"); }
#line 334 "csapp.c"

# 8750 "csapp.c"
retValue_acc = rc;
# 8752 "csapp.c"
return (ssize_t )retValue_acc;
 
# 8755 "csapp.c"

}

# 8759 "csapp.c"
return (ssize_t )retValue_acc;

# 8762 "csapp.c"

}
 
#line 338 "csapp.c"
 off_t Lseek(int fildes,  off_t offset, int whence)  
# 8768 "csapp.c"
{
# 8770 "csapp.c"
off_t retValue_acc;




# 8776 "csapp.c"
{

#line 339 "csapp.c"

#line 339 "csapp.c"
 off_t rc;
#line 341 "csapp.c"
if ((rc = lseek(fildes, offset, whence)) < 0){
unix_error("Lseek error"); }
#line 343 "csapp.c"

# 8788 "csapp.c"
retValue_acc = rc;
# 8790 "csapp.c"
return (off_t )retValue_acc;
 
# 8793 "csapp.c"

}

# 8797 "csapp.c"
return (off_t )retValue_acc;

# 8800 "csapp.c"

}
 
#line 347 "csapp.c"
void Close(int fd)  
# 8806 "csapp.c"
{



# 8811 "csapp.c"
{

#line 348 "csapp.c"

#line 348 "csapp.c"
int rc;
#line 350 "csapp.c"
if ((rc = close(fd)) < 0){
unix_error("Close error"); }
# 8821 "csapp.c"

}

# 8825 "csapp.c"

}
 
#line 356 "csapp.c"
int Select(int n,  fd_set *readfds,  fd_set *writefds,  fd_set *exceptfds, struct timeval *timeout)  
# 8831 "csapp.c"
{
# 8833 "csapp.c"
int retValue_acc;




# 8839 "csapp.c"
{

#line 357 "csapp.c"

#line 357 "csapp.c"
int rc;
#line 359 "csapp.c"
if ((rc = select(n, readfds, writefds, exceptfds, timeout)) < 0){
unix_error("Select error"); }
#line 361 "csapp.c"

# 8851 "csapp.c"
retValue_acc = rc;
# 8853 "csapp.c"
return (int )retValue_acc;
 
# 8856 "csapp.c"

}

# 8860 "csapp.c"
return (int )retValue_acc;

# 8863 "csapp.c"

}
 
#line 365 "csapp.c"
int Dup2(int fd1, int fd2)  
# 8869 "csapp.c"
{
# 8871 "csapp.c"
int retValue_acc;




# 8877 "csapp.c"
{

#line 366 "csapp.c"

#line 366 "csapp.c"
int rc;
#line 368 "csapp.c"
if ((rc = dup2(fd1, fd2)) < 0){
unix_error("Dup2 error"); }
#line 370 "csapp.c"

# 8889 "csapp.c"
retValue_acc = rc;
# 8891 "csapp.c"
return (int )retValue_acc;
 
# 8894 "csapp.c"

}

# 8898 "csapp.c"
return (int )retValue_acc;

# 8901 "csapp.c"

}
 
#line 374 "csapp.c"
void Stat(const char *filename, struct stat *buf)  
# 8907 "csapp.c"
{



# 8912 "csapp.c"
{

#line 377 "csapp.c"
if (stat(filename, buf) < 0){
unix_error("Stat error"); }
# 8918 "csapp.c"

}

# 8922 "csapp.c"

}
 
#line 380 "csapp.c"
void Fstat(int fd, struct stat *buf)  
# 8928 "csapp.c"
{



# 8933 "csapp.c"
{

#line 383 "csapp.c"
if (fstat(fd, buf) < 0){
unix_error("Fstat error"); }
# 8939 "csapp.c"

}

# 8943 "csapp.c"

}
 
#line 390 "csapp.c"
 DIR *Opendir(const char *name)  
# 8949 "csapp.c"
{
# 8951 "csapp.c"
DIR* retValue_acc;




# 8957 "csapp.c"
{

#line 391 "csapp.c"

#line 391 "csapp.c"
 DIR *dirp = opendir(name);
#line 393 "csapp.c"
if ((!dirp)){
unix_error("opendir error"); }
#line 395 "csapp.c"

# 8969 "csapp.c"
retValue_acc = dirp;
# 8971 "csapp.c"
return (DIR* )retValue_acc;
 
# 8974 "csapp.c"

}

# 8978 "csapp.c"
return (DIR* )retValue_acc;

# 8981 "csapp.c"

}
 
#line 399 "csapp.c"
struct dirent *Readdir( DIR *dirp)  
# 8987 "csapp.c"
{
# 8989 "csapp.c"
struct dirent * retValue_acc;




# 8995 "csapp.c"
{

#line 400 "csapp.c"

#line 400 "csapp.c"
struct dirent *dep;
#line 402 "csapp.c"
((*__errno_location())) = 0; 
#line 403 "csapp.c"
dep = readdir(dirp); 
#line 404 "csapp.c"
if ((dep == (((void *)0))) && (((*__errno_location())) != 0)){
unix_error("readdir error"); }
#line 406 "csapp.c"

# 9011 "csapp.c"
retValue_acc = dep;
# 9013 "csapp.c"
return (struct dirent * )retValue_acc;
 
# 9016 "csapp.c"

}

# 9020 "csapp.c"
return (struct dirent * )retValue_acc;

# 9023 "csapp.c"

}
 
#line 410 "csapp.c"
int Closedir( DIR *dirp)  
# 9029 "csapp.c"
{
# 9031 "csapp.c"
int retValue_acc;




# 9037 "csapp.c"
{

#line 411 "csapp.c"

#line 411 "csapp.c"
int rc;
#line 413 "csapp.c"
if ((rc = closedir(dirp)) < 0){
unix_error("closedir error"); }
#line 415 "csapp.c"

# 9049 "csapp.c"
retValue_acc = rc;
# 9051 "csapp.c"
return (int )retValue_acc;
 
# 9054 "csapp.c"

}

# 9058 "csapp.c"
return (int )retValue_acc;

# 9061 "csapp.c"

}
 
#line 422 "csapp.c"
void *Mmap(void *addr,  size_t len, int prot, int flags, int fd,  off_t offset)  
# 9067 "csapp.c"
{
# 9069 "csapp.c"
void* retValue_acc;




# 9075 "csapp.c"
{

#line 423 "csapp.c"

#line 423 "csapp.c"
void *ptr;
#line 425 "csapp.c"
if ((ptr = mmap(addr, len, prot, flags, fd, offset)) == (((void *)(-1)))){
unix_error("mmap error"); }
#line 427 "csapp.c"

# 9087 "csapp.c"
retValue_acc = (ptr);
# 9089 "csapp.c"
return (void* )retValue_acc;
 
# 9092 "csapp.c"

}

# 9096 "csapp.c"
return (void* )retValue_acc;

# 9099 "csapp.c"

}
 
#line 431 "csapp.c"
void Munmap(void *start,  size_t length)  
# 9105 "csapp.c"
{



# 9110 "csapp.c"
{

#line 434 "csapp.c"
if (munmap(start, length) < 0){
unix_error("munmap error"); }
# 9116 "csapp.c"

}

# 9120 "csapp.c"

}
 
#line 441 "csapp.c"
void *Malloc( size_t size)  
# 9126 "csapp.c"
{
# 9128 "csapp.c"
void* retValue_acc;




# 9134 "csapp.c"
{

#line 442 "csapp.c"

#line 442 "csapp.c"
void *p;
#line 444 "csapp.c"
if ((p = malloc(size)) == (((void *)0))){
unix_error("Malloc error"); }
#line 446 "csapp.c"

# 9146 "csapp.c"
retValue_acc = p;
# 9148 "csapp.c"
return (void* )retValue_acc;
 
# 9151 "csapp.c"

}

# 9155 "csapp.c"
return (void* )retValue_acc;

# 9158 "csapp.c"

}
 
#line 450 "csapp.c"
void *Realloc(void *ptr,  size_t size)  
# 9164 "csapp.c"
{
# 9166 "csapp.c"
void* retValue_acc;




# 9172 "csapp.c"
{

#line 451 "csapp.c"

#line 451 "csapp.c"
void *p;
#line 453 "csapp.c"
if ((p = realloc(ptr, size)) == (((void *)0))){
unix_error("Realloc error"); }
#line 455 "csapp.c"

# 9184 "csapp.c"
retValue_acc = p;
# 9186 "csapp.c"
return (void* )retValue_acc;
 
# 9189 "csapp.c"

}

# 9193 "csapp.c"
return (void* )retValue_acc;

# 9196 "csapp.c"

}
 
#line 459 "csapp.c"
void *Calloc( size_t nmemb,  size_t size)  
# 9202 "csapp.c"
{
# 9204 "csapp.c"
void* retValue_acc;




# 9210 "csapp.c"
{

#line 460 "csapp.c"

#line 460 "csapp.c"
void *p;
#line 462 "csapp.c"
if ((p = calloc(nmemb, size)) == (((void *)0))){
unix_error("Calloc error"); }
#line 464 "csapp.c"

# 9222 "csapp.c"
retValue_acc = p;
# 9224 "csapp.c"
return (void* )retValue_acc;
 
# 9227 "csapp.c"

}

# 9231 "csapp.c"
return (void* )retValue_acc;

# 9234 "csapp.c"

}
 
#line 468 "csapp.c"
void Free(void *ptr)  
# 9240 "csapp.c"
{



# 9245 "csapp.c"
{

#line 469 "csapp.c"
free(ptr); 
# 9250 "csapp.c"

}

# 9254 "csapp.c"

}
 
#line 476 "csapp.c"
void Fclose( FILE *fp)  
# 9260 "csapp.c"
{



# 9265 "csapp.c"
{

#line 479 "csapp.c"
if (fclose(fp) != 0){
unix_error("Fclose error"); }
# 9271 "csapp.c"

}

# 9275 "csapp.c"

}
 
#line 482 "csapp.c"
 FILE *Fdopen(int fd, const char *type)  
# 9281 "csapp.c"
{
# 9283 "csapp.c"
FILE* retValue_acc;




# 9289 "csapp.c"
{

#line 483 "csapp.c"

#line 483 "csapp.c"
 FILE *fp;
#line 485 "csapp.c"
if ((fp = fdopen(fd, type)) == (((void *)0))){
unix_error("Fdopen error"); }
#line 488 "csapp.c"

# 9301 "csapp.c"
retValue_acc = fp;
# 9303 "csapp.c"
return (FILE* )retValue_acc;
 
# 9306 "csapp.c"

}

# 9310 "csapp.c"
return (FILE* )retValue_acc;

# 9313 "csapp.c"

}
 
#line 492 "csapp.c"
char *Fgets(char *ptr, int n,  FILE *stream)  
# 9319 "csapp.c"
{
# 9321 "csapp.c"
char* retValue_acc;




# 9327 "csapp.c"
{

#line 493 "csapp.c"

#line 493 "csapp.c"
char *rptr;
#line 495 "csapp.c"
if (((rptr = fgets(ptr, n, stream)) == (((void *)0))) && ferror(stream)){
app_error("Fgets error"); }
#line 498 "csapp.c"

# 9339 "csapp.c"
retValue_acc = rptr;
# 9341 "csapp.c"
return (char* )retValue_acc;
 
# 9344 "csapp.c"

}

# 9348 "csapp.c"
return (char* )retValue_acc;

# 9351 "csapp.c"

}
 
#line 502 "csapp.c"
 FILE *Fopen(const char *filename, const char *mode)  
# 9357 "csapp.c"
{
# 9359 "csapp.c"
FILE* retValue_acc;




# 9365 "csapp.c"
{

#line 503 "csapp.c"

#line 503 "csapp.c"
 FILE *fp;
#line 505 "csapp.c"
if ((fp = fopen(filename, mode)) == (((void *)0))){
unix_error("Fopen error"); }
#line 508 "csapp.c"

# 9377 "csapp.c"
retValue_acc = fp;
# 9379 "csapp.c"
return (FILE* )retValue_acc;
 
# 9382 "csapp.c"

}

# 9386 "csapp.c"
return (FILE* )retValue_acc;

# 9389 "csapp.c"

}
 
#line 512 "csapp.c"
void Fputs(const char *ptr,  FILE *stream)  
# 9395 "csapp.c"
{



# 9400 "csapp.c"
{

#line 515 "csapp.c"
if (fputs(ptr, stream) == ((-1))){
unix_error("Fputs error"); }
# 9406 "csapp.c"

}

# 9410 "csapp.c"

}
 
#line 518 "csapp.c"
 size_t Fread(void *ptr,  size_t size,  size_t nmemb,  FILE *stream)  
# 9416 "csapp.c"
{
# 9418 "csapp.c"
size_t retValue_acc;




# 9424 "csapp.c"
{

#line 519 "csapp.c"

#line 519 "csapp.c"
 size_t n;
#line 521 "csapp.c"
if (((n = fread(ptr, size, nmemb, stream)) < nmemb) && ferror(stream)){
unix_error("Fread error"); }
#line 523 "csapp.c"

# 9436 "csapp.c"
retValue_acc = n;
# 9438 "csapp.c"
return (size_t )retValue_acc;
 
# 9441 "csapp.c"

}

# 9445 "csapp.c"
return (size_t )retValue_acc;

# 9448 "csapp.c"

}
 
#line 527 "csapp.c"
void Fwrite(const void *ptr,  size_t size,  size_t nmemb,  FILE *stream)  
# 9454 "csapp.c"
{



# 9459 "csapp.c"
{

#line 530 "csapp.c"
if (fwrite(ptr, size, nmemb, stream) < nmemb){
unix_error("Fwrite error"); }
# 9465 "csapp.c"

}

# 9469 "csapp.c"

}
 
#line 538 "csapp.c"
int Socket(int domain, int type, int protocol)  
# 9475 "csapp.c"
{
# 9477 "csapp.c"
int retValue_acc;




# 9483 "csapp.c"
{

#line 539 "csapp.c"

#line 539 "csapp.c"
int rc;
#line 541 "csapp.c"
if ((rc = socket(domain, type, protocol)) < 0){
unix_error("Socket error"); }
#line 543 "csapp.c"

# 9495 "csapp.c"
retValue_acc = rc;
# 9497 "csapp.c"
return (int )retValue_acc;
 
# 9500 "csapp.c"

}

# 9504 "csapp.c"
return (int )retValue_acc;

# 9507 "csapp.c"

}
 
#line 547 "csapp.c"
void Setsockopt(int s, int level, int optname, const void *optval, int optlen)  
# 9513 "csapp.c"
{



# 9518 "csapp.c"
{

#line 548 "csapp.c"

#line 548 "csapp.c"
int rc;
#line 550 "csapp.c"
if ((rc = setsockopt(s, level, optname, optval, optlen)) < 0){
unix_error("Setsockopt error"); }
# 9528 "csapp.c"

}

# 9532 "csapp.c"

}
 
#line 555 "csapp.c"
void Bind(int sockfd, struct sockaddr *my_addr, int addrlen)  
# 9538 "csapp.c"
{



# 9543 "csapp.c"
{

#line 556 "csapp.c"

#line 556 "csapp.c"
int rc;
#line 558 "csapp.c"
if ((rc = bind(sockfd, my_addr, addrlen)) < 0){
unix_error("Bind error"); }
# 9553 "csapp.c"

}

# 9557 "csapp.c"

}
 
#line 563 "csapp.c"
void Listen(int s, int backlog)  
# 9563 "csapp.c"
{



# 9568 "csapp.c"
{

#line 564 "csapp.c"

#line 564 "csapp.c"
int rc;
#line 566 "csapp.c"
if ((rc = listen(s, backlog)) < 0){
unix_error("Listen error"); }
# 9578 "csapp.c"

}

# 9582 "csapp.c"

}
 
#line 571 "csapp.c"
int Accept(int s, struct sockaddr *addr,  socklen_t *addrlen)  
# 9588 "csapp.c"
{
# 9590 "csapp.c"
int retValue_acc;




# 9596 "csapp.c"
{

#line 572 "csapp.c"

#line 572 "csapp.c"
int rc;
#line 574 "csapp.c"
if ((rc = accept(s, addr, addrlen)) < 0){
unix_error("Accept error"); }
#line 576 "csapp.c"

# 9608 "csapp.c"
retValue_acc = rc;
# 9610 "csapp.c"
return (int )retValue_acc;
 
# 9613 "csapp.c"

}

# 9617 "csapp.c"
return (int )retValue_acc;

# 9620 "csapp.c"

}
 
#line 580 "csapp.c"
void Connect(int sockfd, struct sockaddr *serv_addr, int addrlen)  
# 9626 "csapp.c"
{



# 9631 "csapp.c"
{

#line 581 "csapp.c"

#line 581 "csapp.c"
int rc;
#line 583 "csapp.c"
if ((rc = connect(sockfd, serv_addr, addrlen)) < 0){
unix_error("Connect error"); }
# 9641 "csapp.c"

}

# 9645 "csapp.c"

}
 
#line 593 "csapp.c"
void Getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res)  
# 9651 "csapp.c"
{



# 9656 "csapp.c"
{

#line 594 "csapp.c"

#line 594 "csapp.c"
int rc;
#line 596 "csapp.c"
if ((rc = getaddrinfo(node, service, hints, res)) != 0){
gai_error(rc, "Getaddrinfo error"); }
# 9666 "csapp.c"

}

# 9670 "csapp.c"

}
 
#line 603 "csapp.c"
void Getnameinfo(const struct sockaddr *sa,  socklen_t salen, char *host,  size_t hostlen, char *serv,  size_t servlen, int flags)  
# 9676 "csapp.c"
{



# 9681 "csapp.c"
{

#line 604 "csapp.c"

#line 604 "csapp.c"
int rc;
#line 606 "csapp.c"
if ((rc = getnameinfo(sa, salen, host, hostlen, serv, servlen, flags)) != 0){
gai_error(rc, "Getnameinfo error"); }
# 9691 "csapp.c"

}

# 9695 "csapp.c"

}
 
#line 612 "csapp.c"
void Freeaddrinfo(struct addrinfo *res)  
# 9701 "csapp.c"
{



# 9706 "csapp.c"
{

#line 613 "csapp.c"
freeaddrinfo(res); 
# 9711 "csapp.c"

}

# 9715 "csapp.c"

}
 
#line 617 "csapp.c"
void Inet_ntop(int af, const void *src, char *dst,  socklen_t size)  
# 9721 "csapp.c"
{



# 9726 "csapp.c"
{

#line 620 "csapp.c"
if ((!inet_ntop(af, src, dst, size))){
unix_error("Inet_ntop error"); }
# 9732 "csapp.c"

}

# 9736 "csapp.c"

}
 
#line 623 "csapp.c"
void Inet_pton(int af, const char *src, void *dst)  
# 9742 "csapp.c"
{



# 9747 "csapp.c"
{

#line 624 "csapp.c"

#line 624 "csapp.c"
int rc;
#line 626 "csapp.c"
rc = inet_pton(af, src, dst); 
#line 627 "csapp.c"
if (rc == 0){
app_error("inet_pton error: invalid dotted-decimal address"); }else{
if (rc < 0){
unix_error("Inet_pton error"); }}
# 9761 "csapp.c"

}

# 9765 "csapp.c"

}
 
#line 642 "csapp.c"
struct hostent *Gethostbyname(const char *name)  
# 9771 "csapp.c"
{
# 9773 "csapp.c"
struct hostent * retValue_acc;




# 9779 "csapp.c"
{

#line 643 "csapp.c"

#line 643 "csapp.c"
struct hostent *p;
#line 645 "csapp.c"
if ((p = gethostbyname(name)) == (((void *)0))){
dns_error("Gethostbyname error"); }
#line 647 "csapp.c"

# 9791 "csapp.c"
retValue_acc = p;
# 9793 "csapp.c"
return (struct hostent * )retValue_acc;
 
# 9796 "csapp.c"

}

# 9800 "csapp.c"
return (struct hostent * )retValue_acc;

# 9803 "csapp.c"

}
 
#line 652 "csapp.c"
struct hostent *Gethostbyaddr(const char *addr, int len, int type)  
# 9809 "csapp.c"
{
# 9811 "csapp.c"
struct hostent * retValue_acc;




# 9817 "csapp.c"
{

#line 653 "csapp.c"

#line 653 "csapp.c"
struct hostent *p;
#line 655 "csapp.c"
if ((p = gethostbyaddr(addr, len, type)) == (((void *)0))){
dns_error("Gethostbyaddr error"); }
#line 657 "csapp.c"

# 9829 "csapp.c"
retValue_acc = p;
# 9831 "csapp.c"
return (struct hostent * )retValue_acc;
 
# 9834 "csapp.c"

}

# 9838 "csapp.c"
return (struct hostent * )retValue_acc;

# 9841 "csapp.c"

}
 
#line 666 "csapp.c"
void Pthread_create( pthread_t *tidp,  pthread_attr_t *attrp, void *(*routine)(void *), void *argp)  
# 9847 "csapp.c"
{



# 9852 "csapp.c"
{

#line 667 "csapp.c"

#line 667 "csapp.c"
int rc;
#line 669 "csapp.c"
if ((rc = pthread_create(tidp, attrp, routine, argp)) != 0){
posix_error(rc, "Pthread_create error"); }
# 9862 "csapp.c"

}

# 9866 "csapp.c"

}
 
#line 673 "csapp.c"
void Pthread_cancel( pthread_t tid)  
# 9872 "csapp.c"
{



# 9877 "csapp.c"
{

#line 674 "csapp.c"

#line 674 "csapp.c"
int rc;
#line 676 "csapp.c"
if ((rc = pthread_cancel(tid)) != 0){
posix_error(rc, "Pthread_cancel error"); }
# 9887 "csapp.c"

}

# 9891 "csapp.c"

}
 
#line 680 "csapp.c"
void Pthread_join( pthread_t tid, void **thread_return)  
# 9897 "csapp.c"
{



# 9902 "csapp.c"
{

#line 681 "csapp.c"

#line 681 "csapp.c"
int rc;
#line 683 "csapp.c"
if ((rc = pthread_join(tid, thread_return)) != 0){
posix_error(rc, "Pthread_join error"); }
# 9912 "csapp.c"

}

# 9916 "csapp.c"

}
 
#line 688 "csapp.c"
void Pthread_detach( pthread_t tid)  
# 9922 "csapp.c"
{



# 9927 "csapp.c"
{

#line 689 "csapp.c"

#line 689 "csapp.c"
int rc;
#line 691 "csapp.c"
if ((rc = pthread_detach(tid)) != 0){
posix_error(rc, "Pthread_detach error"); }
# 9937 "csapp.c"

}

# 9941 "csapp.c"

}
 
#line 696 "csapp.c"
void Pthread_exit(void *retval)  
# 9947 "csapp.c"
{



# 9952 "csapp.c"
{

#line 697 "csapp.c"
pthread_exit(retval); 
# 9957 "csapp.c"

}

# 9961 "csapp.c"

}
 
#line 700 "csapp.c"
 pthread_t Pthread_self(void )  
# 9967 "csapp.c"
{
# 9969 "csapp.c"
pthread_t retValue_acc;




# 9975 "csapp.c"
{

#line 701 "csapp.c"

# 9980 "csapp.c"
retValue_acc = pthread_self();
# 9982 "csapp.c"
return (pthread_t )retValue_acc;
 
# 9985 "csapp.c"

}

# 9989 "csapp.c"
return (pthread_t )retValue_acc;

# 9992 "csapp.c"

}
 
#line 704 "csapp.c"
void Pthread_once( pthread_once_t *once_control, void (*init_function)())  
# 9998 "csapp.c"
{



# 10003 "csapp.c"
{

#line 705 "csapp.c"
pthread_once(once_control, init_function); 
# 10008 "csapp.c"

}

# 10012 "csapp.c"

}
 
#line 713 "csapp.c"
void Sem_init( sem_t *sem, int pshared, unsigned int value)  
# 10018 "csapp.c"
{



# 10023 "csapp.c"
{

#line 716 "csapp.c"
if (sem_init(sem, pshared, value) < 0){
unix_error("Sem_init error"); }
# 10029 "csapp.c"

}

# 10033 "csapp.c"

}
 
#line 719 "csapp.c"
void P( sem_t *sem)  
# 10039 "csapp.c"
{



# 10044 "csapp.c"
{

#line 722 "csapp.c"
if (sem_wait(sem) < 0){
unix_error("P error"); }
# 10050 "csapp.c"

}

# 10054 "csapp.c"

}
 
#line 725 "csapp.c"
void V( sem_t *sem)  
# 10060 "csapp.c"
{



# 10065 "csapp.c"
{

#line 728 "csapp.c"
if (sem_post(sem) < 0){
unix_error("V error"); }
# 10071 "csapp.c"

}

# 10075 "csapp.c"

}
 
# 641 "csapp.c" 
# 739 "csapp.c" 
 ssize_t rio_readn(int fd, void *usrbuf,  size_t n)  
# 10082 "csapp.c"
{
# 10084 "csapp.c"
ssize_t retValue_acc;




# 10090 "csapp.c"
{

#line 740 "csapp.c"

#line 740 "csapp.c"
 size_t nleft = n;
#line 741 "csapp.c"

#line 741 "csapp.c"
 ssize_t nread;
#line 742 "csapp.c"

#line 742 "csapp.c"
char *bufp = usrbuf;
#line 744 "csapp.c"
while(nleft > 0) { { 
#line 753 "csapp.c"
if ((nread = read(fd, bufp, nleft)) < 0){
{ 
#line 749 "csapp.c"
if (((*__errno_location())) == 4){
nread = 0; }else{

# 10114 "csapp.c"
retValue_acc = (-1);
# 10116 "csapp.c"
return (ssize_t )retValue_acc;
 }} }else{
if (nread == 0){
break; }}
#line 753 "csapp.c"
nleft -= nread; 
#line 754 "csapp.c"
bufp += nread; } } 
#line 756 "csapp.c"

# 10127 "csapp.c"
retValue_acc = (n - nleft);
# 10129 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10132 "csapp.c"

}

# 10136 "csapp.c"
return (ssize_t )retValue_acc;

# 10139 "csapp.c"

}
 
#line 765 "csapp.c"
 ssize_t rio_writen(int fd, void *usrbuf,  size_t n)  
# 10145 "csapp.c"
{
# 10147 "csapp.c"
ssize_t retValue_acc;




# 10153 "csapp.c"
{

#line 766 "csapp.c"

#line 766 "csapp.c"
 size_t nleft = n;
#line 767 "csapp.c"

#line 767 "csapp.c"
 ssize_t nwritten;
#line 768 "csapp.c"

#line 768 "csapp.c"
char *bufp = usrbuf;
#line 770 "csapp.c"
while(nleft > 0) { { 
#line 777 "csapp.c"
if ((nwritten = write(fd, bufp, nleft)) <= 0){
{ 
#line 775 "csapp.c"
if (((*__errno_location())) == 4){
nwritten = 0; }else{

# 10177 "csapp.c"
retValue_acc = (-1);
# 10179 "csapp.c"
return (ssize_t )retValue_acc;
 }} }
#line 777 "csapp.c"
nleft -= nwritten; 
#line 778 "csapp.c"
bufp += nwritten; } } 
#line 780 "csapp.c"

# 10188 "csapp.c"
retValue_acc = n;
# 10190 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10193 "csapp.c"

}

# 10197 "csapp.c"
return (ssize_t )retValue_acc;

# 10200 "csapp.c"

}
 
#line 795 "csapp.c"
static  ssize_t rio_read( rio_t *rp, char *usrbuf,  size_t n)  
# 10206 "csapp.c"
{
# 10208 "csapp.c"
ssize_t retValue_acc;




# 10214 "csapp.c"
{

#line 796 "csapp.c"

#line 796 "csapp.c"
int cnt;
#line 798 "csapp.c"
while((rp->rio_cnt) <= 0) { { 
#line 800 "csapp.c"
(rp->rio_cnt) = read((rp->rio_fd), (rp->rio_buf), sizeof ((rp->rio_buf))); 
#line 801 "csapp.c"
if ((rp->rio_cnt) < 0){
{ 
#line 804 "csapp.c"
if (((*__errno_location())) != 4){

# 10231 "csapp.c"
retValue_acc = (-1);
# 10233 "csapp.c"
return (ssize_t )retValue_acc;
 }} }else{
if ((rp->rio_cnt) == 0){

# 10238 "csapp.c"
retValue_acc = 0;
# 10240 "csapp.c"
return (ssize_t )retValue_acc;
 }else{
(rp->rio_bufptr) = (rp->rio_buf); }}} } 
#line 812 "csapp.c"
cnt = n; 
#line 813 "csapp.c"
if ((rp->rio_cnt) < n){
cnt = (rp->rio_cnt); }
#line 815 "csapp.c"
memcpy(usrbuf, (rp->rio_bufptr), cnt); 
#line 816 "csapp.c"
(rp->rio_bufptr) += cnt; 
#line 817 "csapp.c"
(rp->rio_cnt) -= cnt; 
#line 818 "csapp.c"

# 10257 "csapp.c"
retValue_acc = cnt;
# 10259 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10262 "csapp.c"

}

# 10266 "csapp.c"
return (ssize_t )retValue_acc;

# 10269 "csapp.c"

}
 
#line 827 "csapp.c"
void rio_readinitb( rio_t *rp, int fd)  
# 10275 "csapp.c"
{



# 10280 "csapp.c"
{

#line 828 "csapp.c"
(rp->rio_fd) = fd; 
#line 829 "csapp.c"
(rp->rio_cnt) = 0; 
#line 830 "csapp.c"
(rp->rio_bufptr) = (rp->rio_buf); 
# 10289 "csapp.c"

}

# 10293 "csapp.c"

}
 
#line 839 "csapp.c"
 ssize_t rio_readnb( rio_t *rp, void *usrbuf,  size_t n)  
# 10299 "csapp.c"
{
# 10301 "csapp.c"
ssize_t retValue_acc;




# 10307 "csapp.c"
{

#line 840 "csapp.c"

#line 840 "csapp.c"
 size_t nleft = n;
#line 841 "csapp.c"

#line 841 "csapp.c"
 ssize_t nread;
#line 842 "csapp.c"

#line 842 "csapp.c"
char *bufp = usrbuf;
#line 844 "csapp.c"
while(nleft > 0) { { 
#line 849 "csapp.c"
if ((nread = rio_read(rp, bufp, nleft)) < 0){

# 10327 "csapp.c"
retValue_acc = (-1);
# 10329 "csapp.c"
return (ssize_t )retValue_acc;
 }else{
if (nread == 0){
break; }}
#line 849 "csapp.c"
nleft -= nread; 
#line 850 "csapp.c"
bufp += nread; } } 
#line 852 "csapp.c"

# 10340 "csapp.c"
retValue_acc = (n - nleft);
# 10342 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10345 "csapp.c"

}

# 10349 "csapp.c"
return (ssize_t )retValue_acc;

# 10352 "csapp.c"

}
 
#line 861 "csapp.c"
 ssize_t rio_readlineb( rio_t *rp, void *usrbuf,  size_t maxlen)  
# 10358 "csapp.c"
{
# 10360 "csapp.c"
ssize_t retValue_acc;




# 10366 "csapp.c"
{

#line 862 "csapp.c"

#line 862 "csapp.c"
int n,rc;
#line 863 "csapp.c"

#line 863 "csapp.c"
char c,*bufp = usrbuf;
#line 865 "csapp.c"
for(n = 1;n < maxlen;n++) { { 
#line 878 "csapp.c"
if ((rc = rio_read(rp, (&c), 1)) == 1){
{ 
#line 867 "csapp.c"
(*bufp++) = c; 
#line 868 "csapp.c"
if (c == '\n'){
{ 
#line 869 "csapp.c"
n++; 
#line 870 "csapp.c"
break; } }} }else{
if (rc == 0){
{ 
#line 876 "csapp.c"
if (n == 1){

# 10396 "csapp.c"
retValue_acc = 0;
# 10398 "csapp.c"
return (ssize_t )retValue_acc;
 }else{
break; }} }else{

# 10403 "csapp.c"
retValue_acc = (-1);
# 10405 "csapp.c"
return (ssize_t )retValue_acc;
 }}} } 
#line 880 "csapp.c"
(*bufp) = 0; 
#line 881 "csapp.c"

# 10412 "csapp.c"
retValue_acc = n - 1;
# 10414 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10417 "csapp.c"

}

# 10421 "csapp.c"
return (ssize_t )retValue_acc;

# 10424 "csapp.c"

}
 
#line 889 "csapp.c"
 ssize_t Rio_readn(int fd, void *ptr,  size_t nbytes)  
# 10430 "csapp.c"
{
# 10432 "csapp.c"
ssize_t retValue_acc;




# 10438 "csapp.c"
{

#line 890 "csapp.c"

#line 890 "csapp.c"
 ssize_t n;
#line 892 "csapp.c"
if ((n = rio_readn(fd, ptr, nbytes)) < 0){
unix_error("Rio_readn error"); }
#line 894 "csapp.c"

# 10450 "csapp.c"
retValue_acc = n;
# 10452 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10455 "csapp.c"

}

# 10459 "csapp.c"
return (ssize_t )retValue_acc;

# 10462 "csapp.c"

}
 
#line 898 "csapp.c"
void Rio_writen(int fd, void *usrbuf,  size_t n)  
# 10468 "csapp.c"
{



# 10473 "csapp.c"
{

#line 901 "csapp.c"
if (rio_writen(fd, usrbuf, n) != n){
unix_error("Rio_writen error"); }
# 10479 "csapp.c"

}

# 10483 "csapp.c"

}
 
#line 904 "csapp.c"
void Rio_readinitb( rio_t *rp, int fd)  
# 10489 "csapp.c"
{



# 10494 "csapp.c"
{

#line 905 "csapp.c"
rio_readinitb(rp, fd); 
# 10499 "csapp.c"

}

# 10503 "csapp.c"

}
 
#line 909 "csapp.c"
 ssize_t Rio_readnb( rio_t *rp, void *usrbuf,  size_t n)  
# 10509 "csapp.c"
{
# 10511 "csapp.c"
ssize_t retValue_acc;




# 10517 "csapp.c"
{

#line 910 "csapp.c"

#line 910 "csapp.c"
 ssize_t rc;
#line 912 "csapp.c"
if ((rc = rio_readnb(rp, usrbuf, n)) < 0){
unix_error("Rio_readnb error"); }
#line 914 "csapp.c"

# 10529 "csapp.c"
retValue_acc = rc;
# 10531 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10534 "csapp.c"

}

# 10538 "csapp.c"
return (ssize_t )retValue_acc;

# 10541 "csapp.c"

}
 
#line 918 "csapp.c"
 ssize_t Rio_readlineb( rio_t *rp, void *usrbuf,  size_t maxlen)  
# 10547 "csapp.c"
{
# 10549 "csapp.c"
ssize_t retValue_acc;




# 10555 "csapp.c"
{

#line 919 "csapp.c"

#line 919 "csapp.c"
 ssize_t rc;
#line 921 "csapp.c"
if ((rc = rio_readlineb(rp, usrbuf, maxlen)) < 0){
unix_error("Rio_readlineb error"); }
#line 923 "csapp.c"

# 10567 "csapp.c"
retValue_acc = rc;
# 10569 "csapp.c"
return (ssize_t )retValue_acc;
 
# 10572 "csapp.c"

}

# 10576 "csapp.c"
return (ssize_t )retValue_acc;

# 10579 "csapp.c"

}
 
# 794 "csapp.c" 
# 939 "csapp.c" 
int open_clientfd(char *hostname, char *port)  
# 10586 "csapp.c"
{
# 10588 "csapp.c"
int retValue_acc;




# 10594 "csapp.c"
{

#line 940 "csapp.c"

#line 940 "csapp.c"
int clientfd,rc;
#line 941 "csapp.c"

#line 941 "csapp.c"
struct addrinfo hints,*listp,*p;
#line 944 "csapp.c"
memset((&hints), 0, sizeof (struct addrinfo )); 
#line 945 "csapp.c"
hints.ai_socktype = SOCK_STREAM; 
#line 946 "csapp.c"
hints.ai_flags = 0x0400; 
#line 947 "csapp.c"
hints.ai_flags |= 0x0020; 
#line 948 "csapp.c"
if ((rc = getaddrinfo(hostname, port, (&hints), (&listp))) != 0){
{ 
#line 949 "csapp.c"
fprintf(stderr, "getaddrinfo failed (%s:%s): %s\n", hostname, port, gai_strerror(rc)); 
#line 950 "csapp.c"

# 10620 "csapp.c"
retValue_acc = (-2);
# 10622 "csapp.c"
return (int )retValue_acc;
 } }
#line 954 "csapp.c"
for(p = listp;p;p = (p->ai_next)) { { 
#line 960 "csapp.c"
if ((clientfd = socket((p->ai_family), (p->ai_socktype), (p->ai_protocol))) < 0){
continue; }
#line 960 "csapp.c"
if (connect(clientfd, (p->ai_addr), (p->ai_addrlen)) != (-1)){
break; }
#line 962 "csapp.c"
if (close(clientfd) < 0){
{ 
#line 963 "csapp.c"
fprintf(stderr, "open_clientfd: close failed: %s\n", strerror(((*__errno_location())))); 
#line 964 "csapp.c"

# 10640 "csapp.c"
retValue_acc = (-1);
# 10642 "csapp.c"
return (int )retValue_acc;
 } }} } 
#line 969 "csapp.c"
freeaddrinfo(listp); 
#line 970 "csapp.c"
if ((!p)){

# 10650 "csapp.c"
retValue_acc = (-1);
# 10652 "csapp.c"
return (int )retValue_acc;
 }else{

# 10656 "csapp.c"
retValue_acc = clientfd;
# 10658 "csapp.c"
return (int )retValue_acc;
 }
# 10661 "csapp.c"

}

# 10665 "csapp.c"
return (int )retValue_acc;

# 10668 "csapp.c"

}
 
#line 987 "csapp.c"
int open_listenfd(char *port)  
# 10674 "csapp.c"
{
# 10676 "csapp.c"
int retValue_acc;




# 10682 "csapp.c"
{

#line 988 "csapp.c"

#line 988 "csapp.c"
struct addrinfo hints,*listp,*p;
#line 989 "csapp.c"

#line 989 "csapp.c"
int listenfd,rc,optval = 1;
#line 992 "csapp.c"
memset((&hints), 0, sizeof (struct addrinfo )); 
#line 993 "csapp.c"
hints.ai_socktype = SOCK_STREAM; 
#line 994 "csapp.c"
hints.ai_flags = 0x0001 | 0x0020; 
#line 995 "csapp.c"
hints.ai_flags |= 0x0400; 
#line 996 "csapp.c"
if ((rc = getaddrinfo((((void *)0)), port, (&hints), (&listp))) != 0){
{ 
#line 997 "csapp.c"
fprintf(stderr, "getaddrinfo failed (port %s): %s\n", port, gai_strerror(rc)); 
#line 998 "csapp.c"

# 10708 "csapp.c"
retValue_acc = (-2);
# 10710 "csapp.c"
return (int )retValue_acc;
 } }
#line 1002 "csapp.c"
for(p = listp;p;p = (p->ai_next)) { { 
#line 1008 "csapp.c"
if ((listenfd = socket((p->ai_family), (p->ai_socktype), (p->ai_protocol))) < 0){
continue; }
#line 1008 "csapp.c"
setsockopt(listenfd, 1, 2, ((const void *)(&optval)), sizeof (int )); 
#line 1012 "csapp.c"
if (bind(listenfd, (p->ai_addr), (p->ai_addrlen)) == 0){
break; }
#line 1014 "csapp.c"
if (close(listenfd) < 0){
{ 
#line 1015 "csapp.c"
fprintf(stderr, "open_listenfd close failed: %s\n", strerror(((*__errno_location())))); 
#line 1016 "csapp.c"

# 10730 "csapp.c"
retValue_acc = (-1);
# 10732 "csapp.c"
return (int )retValue_acc;
 } }} } 
#line 1022 "csapp.c"
freeaddrinfo(listp); 
#line 1023 "csapp.c"
if ((!p)){

# 10740 "csapp.c"
retValue_acc = (-1);
# 10742 "csapp.c"
return (int )retValue_acc;
 }
#line 1027 "csapp.c"
if (listen(listenfd, 1024) < 0){
{ 
#line 1028 "csapp.c"
close(listenfd); 
#line 1029 "csapp.c"

# 10752 "csapp.c"
retValue_acc = (-1);
# 10754 "csapp.c"
return (int )retValue_acc;
 } }
#line 1031 "csapp.c"

# 10759 "csapp.c"
retValue_acc = listenfd;
# 10761 "csapp.c"
return (int )retValue_acc;
 
# 10764 "csapp.c"

}

# 10768 "csapp.c"
return (int )retValue_acc;

# 10771 "csapp.c"

}
 
#line 1039 "csapp.c"
int Open_clientfd(char *hostname, char *port)  
# 10777 "csapp.c"
{
# 10779 "csapp.c"
int retValue_acc;




# 10785 "csapp.c"
{

#line 1040 "csapp.c"

#line 1040 "csapp.c"
int rc;
#line 1042 "csapp.c"
if ((rc = open_clientfd(hostname, port)) < 0){
unix_error("Open_clientfd error"); }
#line 1044 "csapp.c"

# 10797 "csapp.c"
retValue_acc = rc;
# 10799 "csapp.c"
return (int )retValue_acc;
 
# 10802 "csapp.c"

}

# 10806 "csapp.c"
return (int )retValue_acc;

# 10809 "csapp.c"

}
 
#line 1048 "csapp.c"
int Open_listenfd(char *port)  
# 10815 "csapp.c"
{
# 10817 "csapp.c"
int retValue_acc;




# 10823 "csapp.c"
{

#line 1049 "csapp.c"

#line 1049 "csapp.c"
int rc;
#line 1051 "csapp.c"
if ((rc = open_listenfd(port)) < 0){
unix_error("Open_listenfd error"); }
#line 1053 "csapp.c"

# 10835 "csapp.c"
retValue_acc = rc;
# 10837 "csapp.c"
return (int )retValue_acc;
 
# 10840 "csapp.c"

}

# 10844 "csapp.c"
return (int )retValue_acc;

# 10847 "csapp.c"

}
 
