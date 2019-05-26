
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


# 1 "mdriver.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "mdriver.c" 
# 10 "mdriver.c" 
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
# 493 "mdriver.c"
{
# 495 "mdriver.c"
int retValue_acc;




# 501 "mdriver.c"
{

#line 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 506 "mdriver.c"
retValue_acc = _IO_getc(stdin);
# 508 "mdriver.c"
return (int )retValue_acc;
 
# 511 "mdriver.c"

}

# 515 "mdriver.c"
return (int )retValue_acc;

# 518 "mdriver.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fgetc_unlocked( FILE *__fp)  
# 524 "mdriver.c"
{
# 526 "mdriver.c"
int retValue_acc;




# 532 "mdriver.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 537 "mdriver.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 539 "mdriver.c"
return (int )retValue_acc;
 
# 542 "mdriver.c"

}

# 546 "mdriver.c"
return (int )retValue_acc;

# 549 "mdriver.c"

}
 
#line 64 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getc_unlocked( FILE *__fp)  
# 555 "mdriver.c"
{
# 557 "mdriver.c"
int retValue_acc;




# 563 "mdriver.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 568 "mdriver.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 570 "mdriver.c"
return (int )retValue_acc;
 
# 573 "mdriver.c"

}

# 577 "mdriver.c"
return (int )retValue_acc;

# 580 "mdriver.c"

}
 
#line 71 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getchar_unlocked(void )  
# 586 "mdriver.c"
{
# 588 "mdriver.c"
int retValue_acc;




# 594 "mdriver.c"
{

#line 72 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 599 "mdriver.c"
retValue_acc = ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++))));
# 601 "mdriver.c"
return (int )retValue_acc;
 
# 604 "mdriver.c"

}

# 608 "mdriver.c"
return (int )retValue_acc;

# 611 "mdriver.c"

}
 
#line 80 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar(int __c)  
# 617 "mdriver.c"
{
# 619 "mdriver.c"
int retValue_acc;




# 625 "mdriver.c"
{

#line 81 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 630 "mdriver.c"
retValue_acc = _IO_putc(__c, stdout);
# 632 "mdriver.c"
return (int )retValue_acc;
 
# 635 "mdriver.c"

}

# 639 "mdriver.c"
return (int )retValue_acc;

# 642 "mdriver.c"

}
 
#line 89 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fputc_unlocked(int __c,  FILE *__stream)  
# 648 "mdriver.c"
{
# 650 "mdriver.c"
int retValue_acc;




# 656 "mdriver.c"
{

#line 90 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 661 "mdriver.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 663 "mdriver.c"
return (int )retValue_acc;
 
# 666 "mdriver.c"

}

# 670 "mdriver.c"
return (int )retValue_acc;

# 673 "mdriver.c"

}
 
#line 99 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putc_unlocked(int __c,  FILE *__stream)  
# 679 "mdriver.c"
{
# 681 "mdriver.c"
int retValue_acc;




# 687 "mdriver.c"
{

#line 100 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 692 "mdriver.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 694 "mdriver.c"
return (int )retValue_acc;
 
# 697 "mdriver.c"

}

# 701 "mdriver.c"
return (int )retValue_acc;

# 704 "mdriver.c"

}
 
#line 106 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar_unlocked(int __c)  
# 710 "mdriver.c"
{
# 712 "mdriver.c"
int retValue_acc;




# 718 "mdriver.c"
{

#line 107 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 723 "mdriver.c"
retValue_acc = ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c)))));
# 725 "mdriver.c"
return (int )retValue_acc;
 
# 728 "mdriver.c"

}

# 732 "mdriver.c"
return (int )retValue_acc;

# 735 "mdriver.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  
# 741 "mdriver.c"
{
# 743 "mdriver.c"
int retValue_acc;




# 749 "mdriver.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 754 "mdriver.c"
retValue_acc = ((((__stream)->_flags) & 0x10) != 0);
# 756 "mdriver.c"
return (int )retValue_acc;
 
# 759 "mdriver.c"

}

# 763 "mdriver.c"
return (int )retValue_acc;

# 766 "mdriver.c"

}
 
#line 133 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  
# 772 "mdriver.c"
{
# 774 "mdriver.c"
int retValue_acc;




# 780 "mdriver.c"
{

#line 134 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 785 "mdriver.c"
retValue_acc = ((((__stream)->_flags) & 0x20) != 0);
# 787 "mdriver.c"
return (int )retValue_acc;
 
# 790 "mdriver.c"

}

# 794 "mdriver.c"
return (int )retValue_acc;

# 797 "mdriver.c"

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
# 810 "mdriver.c"
{
# 812 "mdriver.c"
int retValue_acc;




# 818 "mdriver.c"
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 823 "mdriver.c"
retValue_acc = __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 825 "mdriver.c"
return (int )retValue_acc;
 
# 828 "mdriver.c"

}

# 832 "mdriver.c"
return (int )retValue_acc;

# 835 "mdriver.c"

}
 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsprintf(char *__restrict __s, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 841 "mdriver.c"
{
# 843 "mdriver.c"
int retValue_acc;




# 849 "mdriver.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 854 "mdriver.c"
retValue_acc = __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 856 "mdriver.c"
return (int )retValue_acc;
 
# 859 "mdriver.c"

}

# 863 "mdriver.c"
return (int )retValue_acc;

# 866 "mdriver.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __snprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 57 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vsnprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format,  __gnuc_va_list __ap) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) snprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt, ...)  
# 876 "mdriver.c"
{
# 878 "mdriver.c"
int retValue_acc;




# 884 "mdriver.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 889 "mdriver.c"
retValue_acc = __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 891 "mdriver.c"
return (int )retValue_acc;
 
# 894 "mdriver.c"

}

# 898 "mdriver.c"
return (int )retValue_acc;

# 901 "mdriver.c"

}
 
#line 76 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsnprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 907 "mdriver.c"
{
# 909 "mdriver.c"
int retValue_acc;




# 915 "mdriver.c"
{

#line 78 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 920 "mdriver.c"
retValue_acc = __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 922 "mdriver.c"
return (int )retValue_acc;
 
# 925 "mdriver.c"

}

# 929 "mdriver.c"
return (int )retValue_acc;

# 932 "mdriver.c"

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
# 946 "mdriver.c"
{
# 948 "mdriver.c"
int retValue_acc;




# 954 "mdriver.c"
{

#line 98 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 959 "mdriver.c"
retValue_acc = __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack());
# 961 "mdriver.c"
return (int )retValue_acc;
 
# 964 "mdriver.c"

}

# 968 "mdriver.c"
return (int )retValue_acc;

# 971 "mdriver.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int printf(const char *__restrict __fmt, ...)  
# 977 "mdriver.c"
{
# 979 "mdriver.c"
int retValue_acc;




# 985 "mdriver.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 990 "mdriver.c"
retValue_acc = __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack());
# 992 "mdriver.c"
return (int )retValue_acc;
 
# 995 "mdriver.c"

}

# 999 "mdriver.c"
return (int )retValue_acc;

# 1002 "mdriver.c"

}
 
#line 115 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vprintf(const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1008 "mdriver.c"
{
# 1010 "mdriver.c"
int retValue_acc;




# 1016 "mdriver.c"
{

#line 117 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1021 "mdriver.c"
retValue_acc = __vfprintf_chk(stdout, 2 - 1, __fmt, __ap);
# 1023 "mdriver.c"
return (int )retValue_acc;
 
# 1026 "mdriver.c"

}

# 1030 "mdriver.c"
return (int )retValue_acc;

# 1033 "mdriver.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vfprintf( FILE *__restrict __stream, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1039 "mdriver.c"
{
# 1041 "mdriver.c"
int retValue_acc;




# 1047 "mdriver.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1052 "mdriver.c"
retValue_acc = __vfprintf_chk(__stream, 2 - 1, __fmt, __ap);
# 1054 "mdriver.c"
return (int )retValue_acc;
 
# 1057 "mdriver.c"

}

# 1061 "mdriver.c"
return (int )retValue_acc;

# 1064 "mdriver.c"

}
 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __dprintf_chk(int __fd, int __flag, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vdprintf_chk(int __fd, int __flag, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int dprintf(int __fd, const char *__restrict __fmt, ...)  
# 1074 "mdriver.c"
{
# 1076 "mdriver.c"
int retValue_acc;




# 1082 "mdriver.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1087 "mdriver.c"
retValue_acc = __dprintf_chk(__fd, 2 - 1, __fmt, __builtin_va_arg_pack());
# 1089 "mdriver.c"
return (int )retValue_acc;
 
# 1092 "mdriver.c"

}

# 1096 "mdriver.c"
return (int )retValue_acc;

# 1099 "mdriver.c"

}
 
#line 151 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1105 "mdriver.c"
{
# 1107 "mdriver.c"
int retValue_acc;




# 1113 "mdriver.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1118 "mdriver.c"
retValue_acc = __vdprintf_chk(__fd, 2 - 1, __fmt, __ap);
# 1120 "mdriver.c"
return (int )retValue_acc;
 
# 1123 "mdriver.c"

}

# 1127 "mdriver.c"
return (int )retValue_acc;

# 1130 "mdriver.c"

}
 
#line 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_chk(char *__str,  size_t ) __attribute__  (( __warn_unused_result__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_warn(char *__str) __asm__ ("""gets") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use fgets or getline instead, gets can't ""specify buffer size" )  )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *gets(char *__str)  
# 1140 "mdriver.c"
{
# 1142 "mdriver.c"
char* retValue_acc;




# 1148 "mdriver.c"
{

#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__str, 2 > 1) != (( size_t )(-1))){

# 1154 "mdriver.c"
retValue_acc = __gets_chk(__str, __builtin_object_size(__str, 2 > 1));
# 1156 "mdriver.c"
return (char* )retValue_acc;
 }
#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1161 "mdriver.c"
retValue_acc = __gets_warn(__str);
# 1163 "mdriver.c"
return (char* )retValue_acc;
 
# 1166 "mdriver.c"

}

# 1170 "mdriver.c"
return (char* )retValue_acc;

# 1173 "mdriver.c"

}
 
#line 242 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 243 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_alias(char *__restrict __s, int __n,  FILE *__restrict __stream) __asm__ ("""fgets") __attribute__  (( __warn_unused_result__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk_warn(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __asm__ ("""__fgets_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fgets called with bigger size than length ""of destination buffer" )  )) ; 
#line 254 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream)  
# 1185 "mdriver.c"
{
# 1187 "mdriver.c"
char* retValue_acc;




# 1193 "mdriver.c"
{

#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1))){
{ 
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__n)) || __n <= 0){

# 1202 "mdriver.c"
retValue_acc = __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 1204 "mdriver.c"
return (char* )retValue_acc;
 }
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((( size_t )__n) > __builtin_object_size(__s, 2 > 1)){

# 1210 "mdriver.c"
retValue_acc = __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 1212 "mdriver.c"
return (char* )retValue_acc;
 }} }
#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1217 "mdriver.c"
retValue_acc = __fgets_alias(__s, __n, __stream);
# 1219 "mdriver.c"
return (char* )retValue_acc;
 
# 1222 "mdriver.c"

}

# 1226 "mdriver.c"
return (char* )retValue_acc;

# 1229 "mdriver.c"

}
 
#line 268 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 269 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_alias(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""fread") __attribute__  (( __warn_unused_result__ )) ; 
#line 278 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk_warn(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""__fread_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fread called with bigger size * nmemb than length ""of destination buffer" )  )) ; 
#line 283 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream)  
# 1241 "mdriver.c"
{
# 1243 "mdriver.c"
size_t retValue_acc;




# 1249 "mdriver.c"
{

#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 1258 "mdriver.c"
retValue_acc = __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1260 "mdriver.c"
return (size_t )retValue_acc;
 }
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 1266 "mdriver.c"
retValue_acc = __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1268 "mdriver.c"
return (size_t )retValue_acc;
 }} }
#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1273 "mdriver.c"
retValue_acc = __fread_alias(__ptr, __size, __n, __stream);
# 1275 "mdriver.c"
return (size_t )retValue_acc;
 
# 1278 "mdriver.c"

}

# 1282 "mdriver.c"
return (size_t )retValue_acc;

# 1285 "mdriver.c"

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
# 1298 "mdriver.c"
{
# 1300 "mdriver.c"
size_t retValue_acc;




# 1306 "mdriver.c"
{

#line 359 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 1315 "mdriver.c"
retValue_acc = __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1317 "mdriver.c"
return (size_t )retValue_acc;
 }
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 1323 "mdriver.c"
retValue_acc = __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1325 "mdriver.c"
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

# 1342 "mdriver.c"
retValue_acc = 0;
# 1344 "mdriver.c"
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

# 1360 "mdriver.c"
retValue_acc = (__cptr - ((char *)__ptr)) / __size;
# 1362 "mdriver.c"
return (size_t )retValue_acc;
 } }
#line 379 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1367 "mdriver.c"
retValue_acc = __fread_unlocked_alias(__ptr, __size, __n, __stream);
# 1369 "mdriver.c"
return (size_t )retValue_acc;
 
# 1372 "mdriver.c"

}

# 1376 "mdriver.c"
return (size_t )retValue_acc;

# 1379 "mdriver.c"

}
 
# 938 "/usr/include/stdio.h" 2 3 4
# 11 "mdriver.c" 2
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
# 1410 "mdriver.c"
{
# 1412 "mdriver.c"
unsigned int retValue_acc;




# 1418 "mdriver.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 1423 "mdriver.c"
retValue_acc = __builtin_bswap32(__bsx);
# 1425 "mdriver.c"
return (unsigned int )retValue_acc;
 
# 1428 "mdriver.c"

}

# 1432 "mdriver.c"
return (unsigned int )retValue_acc;

# 1435 "mdriver.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 1441 "mdriver.c"
{
# 1443 "mdriver.c"
__uint64_t retValue_acc;




# 1449 "mdriver.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 1454 "mdriver.c"
retValue_acc = __builtin_bswap64(__bsx);
# 1456 "mdriver.c"
return (__uint64_t )retValue_acc;
 
# 1459 "mdriver.c"

}

# 1463 "mdriver.c"
return (__uint64_t )retValue_acc;

# 1466 "mdriver.c"

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
# 1521 "mdriver.c"
{
# 1523 "mdriver.c"
int retValue_acc;




# 1529 "mdriver.c"
{

#line 280 "/usr/include/stdlib.h"

# 1534 "mdriver.c"
retValue_acc = ((int )strtol(__nptr, ((char **)(((void *)0))), 10));
# 1536 "mdriver.c"
return (int )retValue_acc;
 
# 1539 "mdriver.c"

}

# 1543 "mdriver.c"
return (int )retValue_acc;

# 1546 "mdriver.c"

}
 
#line 284 "/usr/include/stdlib.h"
extern __inline  __attribute__  (( __gnu_inline__ )) long int  __attribute__  (( __nothrow__ )) atol(const char *__nptr)  
# 1552 "mdriver.c"
{
# 1554 "mdriver.c"
long int retValue_acc;




# 1560 "mdriver.c"
{

#line 285 "/usr/include/stdlib.h"

# 1565 "mdriver.c"
retValue_acc = strtol(__nptr, ((char **)(((void *)0))), 10);
# 1567 "mdriver.c"
return (long int )retValue_acc;
 
# 1570 "mdriver.c"

}

# 1574 "mdriver.c"
return (long int )retValue_acc;

# 1577 "mdriver.c"

}
 
#line 293 "/usr/include/stdlib.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ )) long long int  __attribute__  (( __nothrow__ )) atoll(const char *__nptr)  
# 1583 "mdriver.c"
{
# 1585 "mdriver.c"
long long int retValue_acc;




# 1591 "mdriver.c"
{

#line 294 "/usr/include/stdlib.h"

# 1596 "mdriver.c"
retValue_acc = strtoll(__nptr, ((char **)(((void *)0))), 10);
# 1598 "mdriver.c"
return (long long int )retValue_acc;
 
# 1601 "mdriver.c"

}

# 1605 "mdriver.c"
return (long long int )retValue_acc;

# 1608 "mdriver.c"

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
# 1756 "mdriver.c"
{
# 1758 "mdriver.c"
unsigned int retValue_acc;




# 1764 "mdriver.c"
{

#line 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1769 "mdriver.c"
retValue_acc = ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff));
# 1771 "mdriver.c"
return (unsigned int )retValue_acc;
 
# 1774 "mdriver.c"

}

# 1778 "mdriver.c"
return (unsigned int )retValue_acc;

# 1781 "mdriver.c"

}
 
#line 46 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  
# 1787 "mdriver.c"
{
# 1789 "mdriver.c"
unsigned int retValue_acc;




# 1795 "mdriver.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1800 "mdriver.c"
retValue_acc = (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff));
# 1802 "mdriver.c"
return (unsigned int )retValue_acc;
 
# 1805 "mdriver.c"

}

# 1809 "mdriver.c"
return (unsigned int )retValue_acc;

# 1812 "mdriver.c"

}
 
#line 52 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  
# 1818 "mdriver.c"
{
# 1820 "mdriver.c"
unsigned long long int retValue_acc;




# 1826 "mdriver.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1831 "mdriver.c"
retValue_acc = ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32));
# 1833 "mdriver.c"
return (unsigned long long int )retValue_acc;
 
# 1836 "mdriver.c"

}

# 1840 "mdriver.c"
return (unsigned long long int )retValue_acc;

# 1843 "mdriver.c"

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
# 2035 "mdriver.c"
{
# 2037 "mdriver.c"
void* retValue_acc;




# 2043 "mdriver.c"
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

# 2076 "mdriver.c"
retValue_acc = ((void *)__p);
# 2078 "mdriver.c"
return (void* )retValue_acc;
 }}} } 
#line 42 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

# 2083 "mdriver.c"
retValue_acc = (((void *)0));
# 2085 "mdriver.c"
return (void* )retValue_acc;
 
# 2088 "mdriver.c"

}

# 2092 "mdriver.c"
return (void* )retValue_acc;

# 2095 "mdriver.c"

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
# 2155 "mdriver.c"
{
# 2157 "mdriver.c"
double retValue_acc;




# 2163 "mdriver.c"
{

#line 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"

# 2168 "mdriver.c"
retValue_acc = strtod(__nptr, ((char **)(((void *)0))));
# 2170 "mdriver.c"
return (double )retValue_acc;
 
# 2173 "mdriver.c"

}

# 2177 "mdriver.c"
return (double )retValue_acc;

# 2180 "mdriver.c"

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
# 2194 "mdriver.c"
{
# 2196 "mdriver.c"
char* retValue_acc;




# 2202 "mdriver.c"
{

#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__resolved, 2 > 1) != (( size_t )(-1))){
{ 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2210 "mdriver.c"
retValue_acc = __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
# 2212 "mdriver.c"
return (char* )retValue_acc;
 } }
#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2217 "mdriver.c"
retValue_acc = __realpath_alias(__name, __resolved);
# 2219 "mdriver.c"
return (char* )retValue_acc;
 
# 2222 "mdriver.c"

}

# 2226 "mdriver.c"
return (char* )retValue_acc;

# 2229 "mdriver.c"

}
 
#line 53 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ptsname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ptsname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ptsname_r called with buflen bigger than ""size of buf" )  )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ptsname_r(int __fd, char *__buf,  size_t __buflen)  
# 2241 "mdriver.c"
{
# 2243 "mdriver.c"
int retValue_acc;




# 2249 "mdriver.c"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__buflen))){

# 2258 "mdriver.c"
retValue_acc = __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 2260 "mdriver.c"
return (int )retValue_acc;
 }
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 2266 "mdriver.c"
retValue_acc = __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 2268 "mdriver.c"
return (int )retValue_acc;
 }} }
#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2273 "mdriver.c"
retValue_acc = __ptsname_r_alias(__fd, __buf, __buflen);
# 2275 "mdriver.c"
return (int )retValue_acc;
 
# 2278 "mdriver.c"

}

# 2282 "mdriver.c"
return (int )retValue_acc;

# 2285 "mdriver.c"

}
 
#line 78 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_chk(char *__s,  wchar_t __wchar,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_alias(char *__s,  wchar_t __wchar) __asm__ ("""wctomb") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 84 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) int  __attribute__  (( __nothrow__ )) wctomb(char *__s,  wchar_t __wchar)  
# 2295 "mdriver.c"
{
# 2297 "mdriver.c"
int retValue_acc;




# 2303 "mdriver.c"
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1)) && 16 > __builtin_object_size(__s, 2 > 1)){

# 2309 "mdriver.c"
retValue_acc = __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1));
# 2311 "mdriver.c"
return (int )retValue_acc;
 }
#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2316 "mdriver.c"
retValue_acc = __wctomb_alias(__s, __wchar);
# 2318 "mdriver.c"
return (int )retValue_acc;
 
# 2321 "mdriver.c"

}

# 2325 "mdriver.c"
return (int )retValue_acc;

# 2328 "mdriver.c"

}
 
#line 100 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 101 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_alias( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len) __asm__ ("""mbstowcs") __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk_warn( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__mbstowcs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "mbstowcs called with dst buffer smaller than len ""* sizeof (wchar_t)" )  )) ; 
#line 114 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) mbstowcs( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len)  
# 2340 "mdriver.c"
{
# 2342 "mdriver.c"
size_t retValue_acc;




# 2348 "mdriver.c"
{

#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 2357 "mdriver.c"
retValue_acc = __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 2359 "mdriver.c"
return (size_t )retValue_acc;
 }
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t )){

# 2365 "mdriver.c"
retValue_acc = __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 2367 "mdriver.c"
return (size_t )retValue_acc;
 }} }
#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2372 "mdriver.c"
retValue_acc = __mbstowcs_alias(__dst, __src, __len);
# 2374 "mdriver.c"
return (size_t )retValue_acc;
 
# 2377 "mdriver.c"

}

# 2381 "mdriver.c"
return (size_t )retValue_acc;

# 2384 "mdriver.c"

}
 
#line 131 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_alias(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len) __asm__ ("""wcstombs") __attribute__  (( __nothrow__ )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk_warn(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__wcstombs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "wcstombs called with dst buffer smaller than len" )  )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) wcstombs(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len)  
# 2396 "mdriver.c"
{
# 2398 "mdriver.c"
size_t retValue_acc;




# 2404 "mdriver.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 2413 "mdriver.c"
retValue_acc = __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 2415 "mdriver.c"
return (size_t )retValue_acc;
 }
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1)){

# 2421 "mdriver.c"
retValue_acc = __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 2423 "mdriver.c"
return (size_t )retValue_acc;
 }} }
#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2428 "mdriver.c"
retValue_acc = __wcstombs_alias(__dst, __src, __len);
# 2430 "mdriver.c"
return (size_t )retValue_acc;
 
# 2433 "mdriver.c"

}

# 2437 "mdriver.c"
return (size_t )retValue_acc;

# 2440 "mdriver.c"

}
 
# 960 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 12 "mdriver.c" 2
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
# 2719 "mdriver.c"
{
# 2721 "mdriver.c"
ssize_t retValue_acc;




# 2727 "mdriver.c"
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 0) != (( size_t )(-1))){
{ 
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__nbytes))){

# 2736 "mdriver.c"
retValue_acc = __read_chk(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2738 "mdriver.c"
return (ssize_t )retValue_acc;
 }
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__nbytes > __builtin_object_size(__buf, 0)){

# 2744 "mdriver.c"
retValue_acc = __read_chk_warn(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2746 "mdriver.c"
return (ssize_t )retValue_acc;
 }} }
#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2751 "mdriver.c"
retValue_acc = __read_alias(__fd, __buf, __nbytes);
# 2753 "mdriver.c"
return (ssize_t )retValue_acc;
 
# 2756 "mdriver.c"

}

# 2760 "mdriver.c"
return (ssize_t )retValue_acc;

# 2763 "mdriver.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_alias(const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlink") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk_warn(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlink_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlink called with bigger length ""than size of destination buffer" )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlink(const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2775 "mdriver.c"
{
# 2777 "mdriver.c"
ssize_t retValue_acc;




# 2783 "mdriver.c"
{

#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2792 "mdriver.c"
retValue_acc = __readlink_chk(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2794 "mdriver.c"
return (ssize_t )retValue_acc;
 }
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2800 "mdriver.c"
retValue_acc = __readlink_chk_warn(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2802 "mdriver.c"
return (ssize_t )retValue_acc;
 }} }
#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2807 "mdriver.c"
retValue_acc = __readlink_alias(__path, __buf, __len);
# 2809 "mdriver.c"
return (ssize_t )retValue_acc;
 
# 2812 "mdriver.c"

}

# 2816 "mdriver.c"
return (ssize_t )retValue_acc;

# 2819 "mdriver.c"

}
 
#line 157 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_alias(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlinkat") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk_warn(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlinkat_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlinkat called with bigger ""length than size of destination ""buffer" )  )) ; 
#line 173 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2831 "mdriver.c"
{
# 2833 "mdriver.c"
ssize_t retValue_acc;




# 2839 "mdriver.c"
{

#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2848 "mdriver.c"
retValue_acc = __readlinkat_chk(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2850 "mdriver.c"
return (ssize_t )retValue_acc;
 }
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2856 "mdriver.c"
retValue_acc = __readlinkat_chk_warn(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2858 "mdriver.c"
return (ssize_t )retValue_acc;
 }} }
#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2863 "mdriver.c"
retValue_acc = __readlinkat_alias(__fd, __path, __buf, __len);
# 2865 "mdriver.c"
return (ssize_t )retValue_acc;
 
# 2868 "mdriver.c"

}

# 2872 "mdriver.c"
return (ssize_t )retValue_acc;

# 2875 "mdriver.c"

}
 
#line 188 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk(char *__buf,  size_t __size,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_alias(char *__buf,  size_t __size) __asm__ ("""getcwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 194 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk_warn(char *__buf,  size_t __size,  size_t __buflen) __asm__ ("""__getcwd_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getcwd caller with bigger length than size of ""destination buffer" )  )) ; 
#line 199 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getcwd(char *__buf,  size_t __size)  
# 2887 "mdriver.c"
{
# 2889 "mdriver.c"
char* retValue_acc;




# 2895 "mdriver.c"
{

#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size))){

# 2904 "mdriver.c"
retValue_acc = __getcwd_chk(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 2906 "mdriver.c"
return (char* )retValue_acc;
 }
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size > __builtin_object_size(__buf, 2 > 1)){

# 2912 "mdriver.c"
retValue_acc = __getcwd_chk_warn(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 2914 "mdriver.c"
return (char* )retValue_acc;
 }} }
#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2919 "mdriver.c"
retValue_acc = __getcwd_alias(__buf, __size);
# 2921 "mdriver.c"
return (char* )retValue_acc;
 
# 2924 "mdriver.c"

}

# 2928 "mdriver.c"
return (char* )retValue_acc;

# 2931 "mdriver.c"

}
 
#line 213 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_chk(char *__buf,  size_t buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 215 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_warn(char *__buf) __asm__ ("""getwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use getcwd instead, as getwd ""doesn't specify buffer size" )  )) ; 
#line 220 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getwd(char *__buf)  
# 2941 "mdriver.c"
{
# 2943 "mdriver.c"
char* retValue_acc;




# 2949 "mdriver.c"
{

#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){

# 2955 "mdriver.c"
retValue_acc = __getwd_chk(__buf, __builtin_object_size(__buf, 2 > 1));
# 2957 "mdriver.c"
return (char* )retValue_acc;
 }
#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2962 "mdriver.c"
retValue_acc = __getwd_warn(__buf);
# 2964 "mdriver.c"
return (char* )retValue_acc;
 
# 2967 "mdriver.c"

}

# 2971 "mdriver.c"
return (char* )retValue_acc;

# 2974 "mdriver.c"

}
 
#line 228 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk(int __name, char *__buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_alias(int __name, char *__buf,  size_t __len) __asm__ ("""confstr") __attribute__  (( __nothrow__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk_warn(int __name, char *__buf,  size_t __len,  size_t __buflen) __asm__ ("""__confstr_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "confstr called with bigger length than size of destination ""buffer" )  )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) confstr(int __name, char *__buf,  size_t __len)  
# 2986 "mdriver.c"
{
# 2988 "mdriver.c"
size_t retValue_acc;




# 2994 "mdriver.c"
{

#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 3003 "mdriver.c"
retValue_acc = __confstr_chk(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3005 "mdriver.c"
return (size_t )retValue_acc;
 }
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) < __len){

# 3011 "mdriver.c"
retValue_acc = __confstr_chk_warn(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3013 "mdriver.c"
return (size_t )retValue_acc;
 }} }
#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3018 "mdriver.c"
retValue_acc = __confstr_alias(__name, __buf, __len);
# 3020 "mdriver.c"
return (size_t )retValue_acc;
 
# 3023 "mdriver.c"

}

# 3027 "mdriver.c"
return (size_t )retValue_acc;

# 3030 "mdriver.c"

}
 
#line 252 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk(int __size,  __gid_t __list[],  size_t __listlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 253 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_alias(int __size,  __gid_t __list[]) __asm__ ("""getgroups") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk_warn(int __size,  __gid_t __list[],  size_t __listlen) __asm__ ("""__getgroups_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getgroups called with bigger group count than what ""can fit into destination buffer" )  )) ; 
#line 263 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getgroups(int __size,  __gid_t __list[])  
# 3042 "mdriver.c"
{
# 3044 "mdriver.c"
int retValue_acc;




# 3050 "mdriver.c"
{

#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__list, 2 > 1) != (( size_t )(-1))){
{ 
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size)) || __size < 0){

# 3059 "mdriver.c"
retValue_acc = __getgroups_chk(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3061 "mdriver.c"
return (int )retValue_acc;
 }
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size * sizeof ( __gid_t ) > __builtin_object_size(__list, 2 > 1)){

# 3067 "mdriver.c"
retValue_acc = __getgroups_chk_warn(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3069 "mdriver.c"
return (int )retValue_acc;
 }} }
#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3074 "mdriver.c"
retValue_acc = __getgroups_alias(__size, __list);
# 3076 "mdriver.c"
return (int )retValue_acc;
 
# 3079 "mdriver.c"

}

# 3083 "mdriver.c"
return (int )retValue_acc;

# 3086 "mdriver.c"

}
 
#line 277 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 280 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ttyname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ttyname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ttyname_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 289 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ttyname_r(int __fd, char *__buf,  size_t __buflen)  
# 3098 "mdriver.c"
{
# 3100 "mdriver.c"
int retValue_acc;




# 3106 "mdriver.c"
{

#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3115 "mdriver.c"
retValue_acc = __ttyname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3117 "mdriver.c"
return (int )retValue_acc;
 }
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3123 "mdriver.c"
retValue_acc = __ttyname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3125 "mdriver.c"
return (int )retValue_acc;
 }} }
#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3130 "mdriver.c"
retValue_acc = __ttyname_r_alias(__fd, __buf, __buflen);
# 3132 "mdriver.c"
return (int )retValue_acc;
 
# 3135 "mdriver.c"

}

# 3139 "mdriver.c"
return (int )retValue_acc;

# 3142 "mdriver.c"

}
 
#line 304 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_alias(char *__buf,  size_t __buflen) __asm__ ("""getlogin_r") __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 310 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getlogin_r_chk") __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "getlogin_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 315 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int getlogin_r(char *__buf,  size_t __buflen)  
# 3154 "mdriver.c"
{
# 3156 "mdriver.c"
int retValue_acc;




# 3162 "mdriver.c"
{

#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3171 "mdriver.c"
retValue_acc = __getlogin_r_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3173 "mdriver.c"
return (int )retValue_acc;
 }
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3179 "mdriver.c"
retValue_acc = __getlogin_r_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3181 "mdriver.c"
return (int )retValue_acc;
 }} }
#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3186 "mdriver.c"
retValue_acc = __getlogin_r_alias(__buf, __buflen);
# 3188 "mdriver.c"
return (int )retValue_acc;
 
# 3191 "mdriver.c"

}

# 3195 "mdriver.c"
return (int )retValue_acc;

# 3198 "mdriver.c"

}
 
#line 331 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 332 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_alias(char *__buf,  size_t __buflen) __asm__ ("""gethostname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__gethostname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "gethostname called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 342 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) gethostname(char *__buf,  size_t __buflen)  
# 3210 "mdriver.c"
{
# 3212 "mdriver.c"
int retValue_acc;




# 3218 "mdriver.c"
{

#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3227 "mdriver.c"
retValue_acc = __gethostname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3229 "mdriver.c"
return (int )retValue_acc;
 }
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3235 "mdriver.c"
retValue_acc = __gethostname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3237 "mdriver.c"
return (int )retValue_acc;
 }} }
#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3242 "mdriver.c"
retValue_acc = __gethostname_alias(__buf, __buflen);
# 3244 "mdriver.c"
return (int )retValue_acc;
 
# 3247 "mdriver.c"

}

# 3251 "mdriver.c"
return (int )retValue_acc;

# 3254 "mdriver.c"

}
 
#line 358 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 359 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_alias(char *__buf,  size_t __buflen) __asm__ ("""getdomainname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 365 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getdomainname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getdomainname called with bigger ""buflen than size of destination ""buffer" )  )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getdomainname(char *__buf,  size_t __buflen)  
# 3266 "mdriver.c"
{
# 3268 "mdriver.c"
int retValue_acc;




# 3274 "mdriver.c"
{

#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3283 "mdriver.c"
retValue_acc = __getdomainname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3285 "mdriver.c"
return (int )retValue_acc;
 }
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3291 "mdriver.c"
retValue_acc = __getdomainname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3293 "mdriver.c"
return (int )retValue_acc;
 }} }
#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3298 "mdriver.c"
retValue_acc = __getdomainname_alias(__buf, __buflen);
# 3300 "mdriver.c"
return (int )retValue_acc;
 
# 3303 "mdriver.c"

}

# 3307 "mdriver.c"
return (int )retValue_acc;

# 3310 "mdriver.c"

}
 
# 123 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
# 1149 "/usr/include/unistd.h" 2 3 4
# 13 "mdriver.c" 2
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
# 14 "mdriver.c" 2
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
# 3457 "mdriver.c"
{
# 3459 "mdriver.c"
size_t retValue_acc;




# 3465 "mdriver.c"
{

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 949 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 951 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3476 "mdriver.c"
retValue_acc = __result;
# 3478 "mdriver.c"
return (size_t )retValue_acc;
 
# 3481 "mdriver.c"

}

# 3485 "mdriver.c"
return (size_t )retValue_acc;

# 3488 "mdriver.c"

}
 
#line 955 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2); 
#line 957 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2)  
# 3496 "mdriver.c"
{
# 3498 "mdriver.c"
size_t retValue_acc;




# 3504 "mdriver.c"
{

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 959 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 962 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3515 "mdriver.c"
retValue_acc = __result;
# 3517 "mdriver.c"
return (size_t )retValue_acc;
 
# 3520 "mdriver.c"

}

# 3524 "mdriver.c"
return (size_t )retValue_acc;

# 3527 "mdriver.c"

}
 
#line 966 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3); 
#line 969 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3)  
# 3535 "mdriver.c"
{
# 3537 "mdriver.c"
size_t retValue_acc;




# 3543 "mdriver.c"
{

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 971 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 974 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3554 "mdriver.c"
retValue_acc = __result;
# 3556 "mdriver.c"
return (size_t )retValue_acc;
 
# 3559 "mdriver.c"

}

# 3563 "mdriver.c"
return (size_t )retValue_acc;

# 3566 "mdriver.c"

}
 
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept); 
#line 1023 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept)  
# 3575 "mdriver.c"
{
# 3577 "mdriver.c"
size_t retValue_acc;




# 3583 "mdriver.c"
{

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1026 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept) { (++__result); } 
#line 1028 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3594 "mdriver.c"
retValue_acc = __result;
# 3596 "mdriver.c"
return (size_t )retValue_acc;
 
# 3599 "mdriver.c"

}

# 3603 "mdriver.c"
return (size_t )retValue_acc;

# 3606 "mdriver.c"

}
 
#line 1032 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2); 
#line 1034 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2)  
# 3614 "mdriver.c"
{
# 3616 "mdriver.c"
size_t retValue_acc;




# 3622 "mdriver.c"
{

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1037 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 1039 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3633 "mdriver.c"
retValue_acc = __result;
# 3635 "mdriver.c"
return (size_t )retValue_acc;
 
# 3638 "mdriver.c"

}

# 3642 "mdriver.c"
return (size_t )retValue_acc;

# 3645 "mdriver.c"

}
 
#line 1043 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1045 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 3653 "mdriver.c"
{
# 3655 "mdriver.c"
size_t retValue_acc;




# 3661 "mdriver.c"
{

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1048 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 1051 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3672 "mdriver.c"
retValue_acc = __result;
# 3674 "mdriver.c"
return (size_t )retValue_acc;
 
# 3677 "mdriver.c"

}

# 3681 "mdriver.c"
return (size_t )retValue_acc;

# 3684 "mdriver.c"

}
 
#line 1098 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2); 
#line 1101 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2)  
# 3692 "mdriver.c"
{
# 3694 "mdriver.c"
char* retValue_acc;




# 3700 "mdriver.c"
{

#line 1104 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 1105 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3707 "mdriver.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 3709 "mdriver.c"
return (char* )retValue_acc;
 
# 3712 "mdriver.c"

}

# 3716 "mdriver.c"
return (char* )retValue_acc;

# 3719 "mdriver.c"

}
 
#line 1109 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1112 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 3727 "mdriver.c"
{
# 3729 "mdriver.c"
char* retValue_acc;




# 3735 "mdriver.c"
{

#line 1116 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 1117 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3742 "mdriver.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 3744 "mdriver.c"
return (char* )retValue_acc;
 
# 3747 "mdriver.c"

}

# 3751 "mdriver.c"
return (char* )retValue_acc;

# 3754 "mdriver.c"

}
 
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 1150 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  
# 3763 "mdriver.c"
{
# 3765 "mdriver.c"
char* retValue_acc;




# 3771 "mdriver.c"
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

# 3801 "mdriver.c"
retValue_acc = __result;
# 3803 "mdriver.c"
return (char* )retValue_acc;
 
# 3806 "mdriver.c"

}

# 3810 "mdriver.c"
return (char* )retValue_acc;

# 3813 "mdriver.c"

}
 
#line 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern char *__strsep_g(char **__stringp, const char *__delim); 
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject); 
#line 1200 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject)  
# 3824 "mdriver.c"
{
# 3826 "mdriver.c"
char* retValue_acc;




# 3832 "mdriver.c"
{

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__retval = (*__s);
#line 1202 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 1204 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3844 "mdriver.c"
retValue_acc = __retval;
# 3846 "mdriver.c"
return (char* )retValue_acc;
 
# 3849 "mdriver.c"

}

# 3853 "mdriver.c"
return (char* )retValue_acc;

# 3856 "mdriver.c"

}
 
#line 1207 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 1210 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2)  
# 3864 "mdriver.c"
{
# 3866 "mdriver.c"
char* retValue_acc;




# 3872 "mdriver.c"
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

# 3908 "mdriver.c"
retValue_acc = __retval;
# 3910 "mdriver.c"
return (char* )retValue_acc;
 
# 3913 "mdriver.c"

}

# 3917 "mdriver.c"
return (char* )retValue_acc;

# 3920 "mdriver.c"

}
 
#line 1235 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 1238 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  
# 3928 "mdriver.c"
{
# 3930 "mdriver.c"
char* retValue_acc;




# 3936 "mdriver.c"
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

# 3972 "mdriver.c"
retValue_acc = __retval;
# 3974 "mdriver.c"
return (char* )retValue_acc;
 
# 3977 "mdriver.c"

}

# 3981 "mdriver.c"
return (char* )retValue_acc;

# 3984 "mdriver.c"

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
# 3999 "mdriver.c"
{
# 4001 "mdriver.c"
void* retValue_acc;




# 4007 "mdriver.c"
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4012 "mdriver.c"
retValue_acc = __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 4014 "mdriver.c"
return (void* )retValue_acc;
 
# 4017 "mdriver.c"

}

# 4021 "mdriver.c"
return (void* )retValue_acc;

# 4024 "mdriver.c"

}
 
#line 56 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memmove(void *__dest, const void *__src,  size_t __len)  
# 4030 "mdriver.c"
{
# 4032 "mdriver.c"
void* retValue_acc;




# 4038 "mdriver.c"
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4043 "mdriver.c"
retValue_acc = __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 4045 "mdriver.c"
return (void* )retValue_acc;
 
# 4048 "mdriver.c"

}

# 4052 "mdriver.c"
return (void* )retValue_acc;

# 4055 "mdriver.c"

}
 
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memset(void *__dest, int __ch,  size_t __len)  
# 4062 "mdriver.c"
{
# 4064 "mdriver.c"
void* retValue_acc;




# 4070 "mdriver.c"
{

#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_constant_p(__len) && __len == 0 && ((!__builtin_constant_p(__ch)) || __ch != 0)){
{ 
#line 81 "/usr/include/x86_64-linux-gnu/bits/string3.h"
__warn_memset_zero_len(); 
#line 82 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4080 "mdriver.c"
retValue_acc = __dest;
# 4082 "mdriver.c"
return (void* )retValue_acc;
 } }
#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4087 "mdriver.c"
retValue_acc = __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
# 4089 "mdriver.c"
return (void* )retValue_acc;
 
# 4092 "mdriver.c"

}

# 4096 "mdriver.c"
return (void* )retValue_acc;

# 4099 "mdriver.c"

}
 
#line 90 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bcopy(const void *__src, void *__dest,  size_t __len)  
# 4105 "mdriver.c"
{



# 4110 "mdriver.c"
{

#line 91 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0))); 
# 4115 "mdriver.c"

}

# 4119 "mdriver.c"

}
 
#line 96 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bzero(void *__dest,  size_t __len)  
# 4125 "mdriver.c"
{



# 4130 "mdriver.c"
{

#line 97 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memset_chk(__dest, '\0', __len, __builtin_object_size(__dest, 0))); 
# 4135 "mdriver.c"

}

# 4139 "mdriver.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcpy(char *__restrict __dest, const char *__restrict __src)  
# 4145 "mdriver.c"
{
# 4147 "mdriver.c"
char* retValue_acc;




# 4153 "mdriver.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4158 "mdriver.c"
retValue_acc = __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 4160 "mdriver.c"
return (char* )retValue_acc;
 
# 4163 "mdriver.c"

}

# 4167 "mdriver.c"
return (char* )retValue_acc;

# 4170 "mdriver.c"

}
 
#line 119 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 4176 "mdriver.c"
{
# 4178 "mdriver.c"
char* retValue_acc;




# 4184 "mdriver.c"
{

#line 120 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4189 "mdriver.c"
retValue_acc = __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 4191 "mdriver.c"
return (char* )retValue_acc;
 
# 4194 "mdriver.c"

}

# 4198 "mdriver.c"
return (char* )retValue_acc;

# 4201 "mdriver.c"

}
 
#line 125 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_chk(char *__dest, const char *__src,  size_t __n,  size_t __destlen) __attribute__  (( __nothrow__ )) ; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_alias(char *__dest, const char *__src,  size_t __n) __asm__ ("""stpncpy") __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) stpncpy(char *__dest, const char *__src,  size_t __n)  
# 4211 "mdriver.c"
{
# 4213 "mdriver.c"
char* retValue_acc;




# 4219 "mdriver.c"
{

#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_object_size(__dest, 2 > 1) != (( size_t )(-1)) && ((!__builtin_constant_p(__n)) || __n <= __builtin_object_size(__dest, 2 > 1))){

# 4225 "mdriver.c"
retValue_acc = __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1));
# 4227 "mdriver.c"
return (char* )retValue_acc;
 }
#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4232 "mdriver.c"
retValue_acc = __stpncpy_alias(__dest, __src, __n);
# 4234 "mdriver.c"
return (char* )retValue_acc;
 
# 4237 "mdriver.c"

}

# 4241 "mdriver.c"
return (char* )retValue_acc;

# 4244 "mdriver.c"

}
 
#line 141 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcat(char *__restrict __dest, const char *__restrict __src)  
# 4250 "mdriver.c"
{
# 4252 "mdriver.c"
char* retValue_acc;




# 4258 "mdriver.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4263 "mdriver.c"
retValue_acc = __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 4265 "mdriver.c"
return (char* )retValue_acc;
 
# 4268 "mdriver.c"

}

# 4272 "mdriver.c"
return (char* )retValue_acc;

# 4275 "mdriver.c"

}
 
#line 149 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncat(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 4281 "mdriver.c"
{
# 4283 "mdriver.c"
char* retValue_acc;




# 4289 "mdriver.c"
{

#line 150 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4294 "mdriver.c"
retValue_acc = __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 4296 "mdriver.c"
return (char* )retValue_acc;
 
# 4299 "mdriver.c"

}

# 4303 "mdriver.c"
return (char* )retValue_acc;

# 4306 "mdriver.c"

}
 
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 641 "/usr/include/string.h" 2 3 4
# 15 "mdriver.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 71 "/usr/include/assert.h" 3 4
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 76 "/usr/include/assert.h"
extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 82 "/usr/include/assert.h"
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 16 "mdriver.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/float.h" 1 3 4
# 17 "mdriver.c" 2
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
# 18 "mdriver.c" 2
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
# 112 "/usr/include/getopt.h" 3 4
struct option {const char *name; int has_arg; int *flag; int val; 
}; 
#line 151 "/usr/include/getopt.h"
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__  (( __nothrow__ )) ; 
# 150 "/usr/include/getopt.h" 3 4
# 176 "/usr/include/getopt.h" 3 4
extern int getopt_long(int ___argc, char *const *___argv, const char *__shortopts, const struct option *__longopts, int *__longind) __attribute__  (( __nothrow__ )) ; 
#line 180 "/usr/include/getopt.h"
extern int getopt_long_only(int ___argc, char *const *___argv, const char *__shortopts, const struct option *__longopts, int *__longind) __attribute__  (( __nothrow__ )) ; 
# 19 "mdriver.c" 2
# 3 "mm.h" 1
extern int mm_init(void ); 
#line 4 "mm.h"
extern void *mm_malloc( size_t size); 
#line 5 "mm.h"
extern void mm_free(void *ptr); 
#line 6 "mm.h"
extern void *mm_realloc(void *ptr,  size_t size); 
#line 20 "mm.h"
typedef struct {char *teamname; char *name1; char *id1; char *name2; char *id2; 
}team_t; 
#line 22 "mm.h"
extern  team_t team; 
# 22 "mdriver.c" 2
# 3 "memlib.h" 1
void mem_init(void ); 
#line 4 "memlib.h"
void mem_deinit(void ); 
#line 5 "memlib.h"
void *mem_sbrk(int incr); 
#line 6 "memlib.h"
void mem_reset_brk(void ); 
#line 7 "memlib.h"
void *mem_heap_lo(void ); 
#line 8 "memlib.h"
void *mem_heap_hi(void ); 
#line 9 "memlib.h"
 size_t mem_heapsize(void ); 
#line 10 "memlib.h"
 size_t mem_pagesize(void ); 
# 23 "mdriver.c" 2
# 1 "fsecs.h" 1
typedef void (*fsecs_test_funct)(void *); 
#line 3 "fsecs.h"
void init_fsecs(void ); 
#line 4 "fsecs.h"
double fsecs( fsecs_test_funct f, void *argp); 
# 24 "mdriver.c" 2
# 1 "config.h" 1
# 25 "mdriver.c" 2
# 1 "range.h" 1
# 1 "helper.h" 1
# 30 "helper.h" 
typedef struct range_t {int number; char *lo; char *hi; struct range_t *next; 
}range_t; 
#line 38 "helper.h"
typedef struct {enum {ALLOC,FREE,REALLOC}type; int index; int size; 
}traceop_t; 
#line 49 "helper.h"
typedef struct {int sugg_heapsize; int num_ids; int num_ops; int weight;  traceop_t *ops; char **blocks;  size_t *block_sizes; 
}trace_t; 
#line 59 "helper.h"
typedef struct { trace_t *trace;  range_t *ranges; 
}speed_t; 
#line 72 "helper.h"
typedef struct {double ops; int valid; double secs; double util; 
}stats_t; 
#line 76 "helper.h"
void printresults(int n,  stats_t *stats); 
#line 77 "helper.h"
void usage(void ); 
#line 78 "helper.h"
void unix_error(char *msg); 
#line 79 "helper.h"
void malloc_error(int tracenum, int opnum, char *msg); 
#line 80 "helper.h"
void app_error(char *msg); 
# 4 "range.h" 2
# 16 "range.h" 
int add_range( range_t **ranges, char *lo, int size, int tracenum, int opnum); 
#line 17 "range.h"
void remove_range( range_t **ranges, char *lo); 
#line 18 "range.h"
void clear_ranges( range_t **ranges); 
#line 21 "range.h"
void clear_ranges_r(); 
#line 22 "range.h"
void malloc_r(char *p,  size_t size); 
#line 23 "range.h"
void free_r(char *p); 
#line 24 "range.h"
void realloc_r(char *oldp,  size_t size, char *newp); 
#line 31 "mdriver.c"
int verbose = 1; 
#line 32 "mdriver.c"
int errors = 0; 
#line 33 "mdriver.c"
char msg[1024]; 
#line 36 "mdriver.c"
static char tracedir[1024] = "./traces/"; 
#line 41 "mdriver.c"
static char *default_tracefiles[] = {"random-bal.rep",(((void *)0))}; 
#line 49 "mdriver.c"
static  trace_t *read_trace(char *tracedir, char *filename); 
#line 50 "mdriver.c"
static void free_trace( trace_t *trace); 
#line 53 "mdriver.c"
static int eval_libc_valid( trace_t *trace, int tracenum); 
#line 54 "mdriver.c"
static void eval_libc_speed(void *ptr); 
#line 58 "mdriver.c"
static int eval_mm_valid( trace_t *trace, int tracenum,  range_t **ranges); 
#line 59 "mdriver.c"
static double eval_mm_util( trace_t *trace, int tracenum,  range_t **ranges); 
#line 60 "mdriver.c"
static void eval_mm_speed(void *ptr); 
#line 66 "mdriver.c"
int main(int argc, char **argv)  
# 4543 "mdriver.c"
{
# 4545 "mdriver.c"
int retValue_acc;




# 4551 "mdriver.c"
{

#line 67 "mdriver.c"

#line 67 "mdriver.c"
int i;
#line 68 "mdriver.c"

#line 68 "mdriver.c"
char c;
#line 69 "mdriver.c"

#line 69 "mdriver.c"
char **tracefiles = (((void *)0));
#line 70 "mdriver.c"

#line 70 "mdriver.c"
int num_tracefiles = 0;
#line 71 "mdriver.c"

#line 71 "mdriver.c"
 trace_t *trace = (((void *)0));
#line 72 "mdriver.c"

#line 72 "mdriver.c"
 range_t *ranges = (((void *)0));
#line 73 "mdriver.c"

#line 73 "mdriver.c"
 stats_t *libc_stats = (((void *)0));
#line 74 "mdriver.c"

#line 74 "mdriver.c"
 stats_t *mm_stats = (((void *)0));
#line 75 "mdriver.c"

#line 75 "mdriver.c"
 speed_t speed_params;
#line 77 "mdriver.c"

#line 77 "mdriver.c"
int team_check = 0;
#line 78 "mdriver.c"

#line 78 "mdriver.c"
int run_libc = 0;
#line 79 "mdriver.c"

#line 79 "mdriver.c"
int autograder = 0;
#line 82 "mdriver.c"

#line 82 "mdriver.c"
double secs,ops,util,avg_mm_util,avg_mm_throughput,p1,p2,perfindex;
#line 83 "mdriver.c"

#line 83 "mdriver.c"
int numcorrect;
#line 88 "mdriver.c"

#line 88 "mdriver.c"
extern char *optarg;
#line 89 "mdriver.c"
while((c = getopt(argc, argv, "f:t:hvVgal")) != ((-1))) { { 
#line 127 "mdriver.c"
switch(c){ { 
#line 92 "mdriver.c"
case 'g': autograder = 1; 
#line 93 "mdriver.c"
break; 
#line 94 "mdriver.c"
case 'f': num_tracefiles = 1; 
#line 96 "mdriver.c"
if ((tracefiles = realloc(tracefiles, 2 * sizeof (char *))) == (((void *)0))){
unix_error("ERROR: realloc failed in main"); }
#line 98 "mdriver.c"
strcpy(tracedir, "./"); 
#line 99 "mdriver.c"
tracefiles[0] = (__extension__ ((__builtin_constant_p(optarg) && ((( size_t )((const void *)((optarg) + 1))) - (( size_t )((const void *)(optarg))) == 1)?(((((const char *)(optarg)))[0] == '\0'?((char *)calloc((( size_t )1), (( size_t )1))):({ 
#line 99 "mdriver.c"

#line 99 "mdriver.c"
 size_t __len = strlen(optarg) + 1;
#line 99 "mdriver.c"

#line 99 "mdriver.c"
char *__retval = ((char *)malloc(__len));
#line 99 "mdriver.c"
if (__retval != (((void *)0))){
__retval = ((char *)memcpy(__retval, optarg, __len)); }
#line 99 "mdriver.c"
__retval; } ))):__strdup(optarg)))); 
#line 100 "mdriver.c"
tracefiles[1] = (((void *)0)); 
#line 101 "mdriver.c"
break; 
#line 102 "mdriver.c"
case 't': if (num_tracefiles == 1){
break; }
#line 105 "mdriver.c"
strcpy(tracedir, optarg); 
#line 106 "mdriver.c"
if (tracedir[strlen(tracedir) - 1] != '/'){
strcat(tracedir, "/"); }
#line 108 "mdriver.c"
break; 
#line 109 "mdriver.c"
case 'a': team_check = 0; 
#line 111 "mdriver.c"
break; 
#line 112 "mdriver.c"
case 'l': run_libc = 1; 
#line 114 "mdriver.c"
break; 
#line 115 "mdriver.c"
case 'v': verbose = 1; 
#line 117 "mdriver.c"
break; 
#line 118 "mdriver.c"
case 'V': verbose = 2; 
#line 120 "mdriver.c"
break; 
#line 121 "mdriver.c"
case 'h': usage(); 
#line 123 "mdriver.c"
exit(0); 
#line 124 "mdriver.c"
default: usage(); 
#line 126 "mdriver.c"
exit(1); } } } } 
#line 133 "mdriver.c"
if (team_check){
{ 
#line 139 "mdriver.c"
if ((!__extension__ ({ 
#line 135 "mdriver.c"

#line 135 "mdriver.c"
 size_t __s1_len,__s2_len;
#line 135 "mdriver.c"
((__builtin_constant_p(team.teamname) && __builtin_constant_p("") && (__s1_len = __builtin_strlen(team.teamname) , __s2_len = __builtin_strlen("") , ((!((( size_t )((const void *)((team.teamname) + 1))) - (( size_t )((const void *)(team.teamname))) == 1)) || __s1_len >= 4) && ((!((( size_t )((const void *)(("") + 1))) - (( size_t )((const void *)(""))) == 1)) || __s2_len >= 4))?__builtin_strcmp(team.teamname, ""):((__builtin_constant_p(team.teamname) && ((( size_t )((const void *)((team.teamname) + 1))) - (( size_t )((const void *)(team.teamname))) == 1) && (__s1_len = __builtin_strlen(team.teamname) , __s1_len < 4)?((__builtin_constant_p("") && ((( size_t )((const void *)(("") + 1))) - (( size_t )((const void *)(""))) == 1)?__builtin_strcmp(team.teamname, ""):(__extension__ ({ 
#line 135 "mdriver.c"

#line 135 "mdriver.c"
const unsigned char *__s2 = ((const unsigned char *)((const char *)("")));
#line 135 "mdriver.c"

#line 135 "mdriver.c"
int __result = ((((const unsigned char *)((const char *)(team.teamname))))[0] - __s2[0]);
#line 135 "mdriver.c"
if (__s1_len > 0 && __result == 0){
{ 
#line 135 "mdriver.c"
__result = ((((const unsigned char *)((const char *)(team.teamname))))[1] - __s2[1]); 
#line 135 "mdriver.c"
if (__s1_len > 1 && __result == 0){
{ 
#line 135 "mdriver.c"
__result = ((((const unsigned char *)((const char *)(team.teamname))))[2] - __s2[2]); 
#line 135 "mdriver.c"
if (__s1_len > 2 && __result == 0){
__result = ((((const unsigned char *)((const char *)(team.teamname))))[3] - __s2[3]); }} }} }
#line 135 "mdriver.c"
__result; } )))):((__builtin_constant_p("") && ((( size_t )((const void *)(("") + 1))) - (( size_t )((const void *)(""))) == 1) && (__s2_len = __builtin_strlen("") , __s2_len < 4)?((__builtin_constant_p(team.teamname) && ((( size_t )((const void *)((team.teamname) + 1))) - (( size_t )((const void *)(team.teamname))) == 1)?__builtin_strcmp(team.teamname, ""):((-(__extension__ ({ 
#line 135 "mdriver.c"

#line 135 "mdriver.c"
const unsigned char *__s2 = ((const unsigned char *)((const char *)(team.teamname)));
#line 135 "mdriver.c"

#line 135 "mdriver.c"
int __result = ((((const unsigned char *)((const char *)(""))))[0] - __s2[0]);
#line 135 "mdriver.c"
if (__s2_len > 0 && __result == 0){
{ 
#line 135 "mdriver.c"
__result = ((((const unsigned char *)((const char *)(""))))[1] - __s2[1]); 
#line 135 "mdriver.c"
if (__s2_len > 1 && __result == 0){
{ 
#line 135 "mdriver.c"
__result = ((((const unsigned char *)((const char *)(""))))[2] - __s2[2]); 
#line 135 "mdriver.c"
if (__s2_len > 2 && __result == 0){
__result = ((((const unsigned char *)((const char *)(""))))[3] - __s2[3]); }} }} }
#line 135 "mdriver.c"
__result; } )))))):__builtin_strcmp(team.teamname, ""))))))); } ))){
{ 
#line 136 "mdriver.c"
printf("ERROR: Please provide the information about your team in mm.c.\n"); 
#line 137 "mdriver.c"
exit(1); } }else{
printf("Team Name:%s\n", team.teamname); }
#line 140 "mdriver.c"
if (((*team.name1) == '\0') || ((*team.id1) == '\0')){
{ 
#line 141 "mdriver.c"
printf("ERROR.  You must fill in all team member 1 fields!\n"); 
#line 142 "mdriver.c"
exit(1); } }else{
printf("Member 1 :%s:%s\n", team.name1, team.id1); }
#line 147 "mdriver.c"
if ((((*team.name2) != '\0') && ((*team.id2) == '\0')) || (((*team.name2) == '\0') && ((*team.id2) != '\0'))){
{ 
#line 149 "mdriver.c"
printf("ERROR.  You must fill in all or none of the team member 2 ID fields!\n"); 
#line 150 "mdriver.c"
exit(1); } }else{
if ((*team.name2) != '\0'){
printf("Member 2 :%s:%s\n", team.name2, team.id2); }}} }
#line 160 "mdriver.c"
if (tracefiles == (((void *)0))){
{ 
#line 161 "mdriver.c"
tracefiles = default_tracefiles; 
#line 162 "mdriver.c"
num_tracefiles = sizeof (default_tracefiles) / sizeof (char *) - 1; } }
#line 167 "mdriver.c"
init_fsecs(); 
#line 172 "mdriver.c"
if (run_libc){
{ 
#line 177 "mdriver.c"
if (verbose > 1){
printf("\nTesting libc malloc\n"); }
#line 177 "mdriver.c"
libc_stats = (( stats_t *)calloc(num_tracefiles, sizeof ( stats_t ))); 
#line 178 "mdriver.c"
if (libc_stats == (((void *)0))){
unix_error("libc_stats calloc in main failed"); }
#line 182 "mdriver.c"
for(i = 0;i < num_tracefiles;i++) { { 
#line 183 "mdriver.c"
trace = read_trace(tracedir, tracefiles[i]); 
#line 184 "mdriver.c"
libc_stats[i].ops = (trace->num_ops); 
#line 185 "mdriver.c"
if (verbose > 1){
printf("Checking libc malloc for correctness, "); }
#line 187 "mdriver.c"
libc_stats[i].valid = eval_libc_valid(trace, i); 
#line 188 "mdriver.c"
if (libc_stats[i].valid){
{ 
#line 189 "mdriver.c"
speed_params.trace = trace; 
#line 190 "mdriver.c"
if (verbose > 1){
printf("and performance.\n"); }
#line 192 "mdriver.c"
libc_stats[i].secs = fsecs(eval_libc_speed, (&speed_params)); } }
#line 194 "mdriver.c"
free_trace(trace); } } 
#line 198 "mdriver.c"
if (verbose){
{ 
#line 199 "mdriver.c"
printf("\nResults for libc malloc:\n"); 
#line 200 "mdriver.c"
printresults(num_tracefiles, libc_stats); } }} }
#line 207 "mdriver.c"
if (verbose > 1){
printf("\nTesting mm malloc\n"); }
#line 211 "mdriver.c"
mm_stats = (( stats_t *)calloc(num_tracefiles, sizeof ( stats_t ))); 
#line 212 "mdriver.c"
if (mm_stats == (((void *)0))){
unix_error("mm_stats calloc in main failed"); }
#line 216 "mdriver.c"
mem_init(); 
#line 219 "mdriver.c"
for(i = 0;i < num_tracefiles;i++) { { 
#line 220 "mdriver.c"
trace = read_trace(tracedir, tracefiles[i]); 
#line 221 "mdriver.c"
mm_stats[i].ops = (trace->num_ops); 
#line 222 "mdriver.c"
if (verbose > 1){
printf("Checking mm_malloc for correctness, "); }
#line 224 "mdriver.c"
mm_stats[i].valid = eval_mm_valid(trace, i, (&ranges)); 
#line 225 "mdriver.c"
if (mm_stats[i].valid){
{ 
#line 228 "mdriver.c"
if (verbose > 1){
printf("efficiency, "); }
#line 228 "mdriver.c"
mm_stats[i].util = eval_mm_util(trace, i, (&ranges)); 
#line 229 "mdriver.c"
speed_params.trace = trace; 
#line 230 "mdriver.c"
speed_params.ranges = ranges; 
#line 231 "mdriver.c"
if (verbose > 1){
printf("and performance.\n"); }
#line 233 "mdriver.c"
mm_stats[i].secs = fsecs(eval_mm_speed, (&speed_params)); } }
#line 235 "mdriver.c"
free_trace(trace); } } 
#line 239 "mdriver.c"
if (verbose){
{ 
#line 240 "mdriver.c"
printf("\nResults for mm malloc:\n"); 
#line 241 "mdriver.c"
printresults(num_tracefiles, mm_stats); 
#line 242 "mdriver.c"
printf("\n"); } }
#line 248 "mdriver.c"
secs = 0; 
#line 249 "mdriver.c"
ops = 0; 
#line 250 "mdriver.c"
util = 0; 
#line 251 "mdriver.c"
numcorrect = 0; 
#line 252 "mdriver.c"
for(i = 0;i < num_tracefiles;i++) { { 
#line 253 "mdriver.c"
secs += mm_stats[i].secs; 
#line 254 "mdriver.c"
ops += mm_stats[i].ops; 
#line 255 "mdriver.c"
util += mm_stats[i].util; 
#line 256 "mdriver.c"
if (mm_stats[i].valid){
numcorrect++; }} } 
#line 259 "mdriver.c"
avg_mm_util = util / num_tracefiles; 
#line 264 "mdriver.c"
if (errors == 0){
{ 
#line 265 "mdriver.c"
avg_mm_throughput = ops / secs; 
#line 267 "mdriver.c"
p1 = 0.60 * avg_mm_util; 
#line 268 "mdriver.c"
if (avg_mm_throughput > 600E3){
{ 
#line 269 "mdriver.c"
p2 = ((double )(1.0 - 0.60)); } }else{
{ 
#line 273 "mdriver.c"
p2 = (((double )(1.0 - 0.60))) * (avg_mm_throughput / 600E3); } }
#line 276 "mdriver.c"
perfindex = (p1 + p2) * 100.0; 
#line 277 "mdriver.c"
printf("Perf index = %.0f (util) + %.0f (thru) = %.0f/100\n", p1 * 100, p2 * 100, perfindex); } }else{
{ 
#line 284 "mdriver.c"
perfindex = 0.0; 
#line 285 "mdriver.c"
printf("Terminated with %d errors\n", errors); } }
#line 288 "mdriver.c"
if (autograder){
{ 
#line 289 "mdriver.c"
printf("correct:%d\n", numcorrect); 
#line 290 "mdriver.c"
printf("perfidx:%.0f\n", perfindex); } }
#line 293 "mdriver.c"
exit(0); 
# 4915 "mdriver.c"

}

# 4919 "mdriver.c"
return (int )retValue_acc;

# 4922 "mdriver.c"

}
 
# 26 "mdriver.c" 2
# 304 "mdriver.c" 
static  trace_t *read_trace(char *tracedir, char *filename)  
# 4929 "mdriver.c"
{
# 4931 "mdriver.c"
trace_t* retValue_acc;




# 4937 "mdriver.c"
{

#line 305 "mdriver.c"

#line 305 "mdriver.c"
 FILE *tracefile;
#line 306 "mdriver.c"

#line 306 "mdriver.c"
 trace_t *trace;
#line 307 "mdriver.c"

#line 307 "mdriver.c"
char type[1024];
#line 308 "mdriver.c"

#line 308 "mdriver.c"
char path[1024];
#line 309 "mdriver.c"

#line 309 "mdriver.c"
unsigned index,size;
#line 310 "mdriver.c"

#line 310 "mdriver.c"
unsigned max_index = 0;
#line 311 "mdriver.c"

#line 311 "mdriver.c"
unsigned op_index;
#line 313 "mdriver.c"
if (verbose > 1){
printf("Reading tracefile: %s\n", filename); }
#line 317 "mdriver.c"
if ((trace = (( trace_t *)malloc(sizeof ( trace_t )))) == (((void *)0))){
unix_error("malloc 1 failed in read_trance"); }
#line 321 "mdriver.c"
strcpy(path, tracedir); 
#line 322 "mdriver.c"
strcat(path, filename); 
#line 323 "mdriver.c"
if ((tracefile = fopen(path, "r")) == (((void *)0))){
{ 
#line 324 "mdriver.c"
sprintf(msg, "Could not open %s in read_trace", path); 
#line 325 "mdriver.c"
unix_error(msg); } }
#line 327 "mdriver.c"
fscanf(tracefile, "%d", (&((trace->sugg_heapsize)))); 
#line 328 "mdriver.c"
fscanf(tracefile, "%d", (&((trace->num_ids)))); 
#line 329 "mdriver.c"
fscanf(tracefile, "%d", (&((trace->num_ops)))); 
#line 330 "mdriver.c"
fscanf(tracefile, "%d", (&((trace->weight)))); 
#line 333 "mdriver.c"
if (((trace->ops) = (( traceop_t *)malloc((trace->num_ops) * sizeof ( traceop_t )))) == (((void *)0))){
unix_error("malloc 2 failed in read_trace"); }
#line 338 "mdriver.c"
if (((trace->blocks) = ((char **)malloc((trace->num_ids) * sizeof (char *)))) == (((void *)0))){
unix_error("malloc 3 failed in read_trace"); }
#line 343 "mdriver.c"
if (((trace->block_sizes) = (( size_t *)malloc((trace->num_ids) * sizeof ( size_t )))) == (((void *)0))){
unix_error("malloc 4 failed in read_trace"); }
#line 348 "mdriver.c"
index = 0; 
#line 349 "mdriver.c"
op_index = 0; 
#line 350 "mdriver.c"
while(fscanf(tracefile, "%s", type) != ((-1))) { { 
#line 375 "mdriver.c"
switch(type[0]){ { 
#line 353 "mdriver.c"
case 'a': fscanf(tracefile, "%u %u", (&index), (&size)); 
#line 354 "mdriver.c"
(trace->ops)[op_index].type = ALLOC; 
#line 355 "mdriver.c"
(trace->ops)[op_index].index = index; 
#line 356 "mdriver.c"
(trace->ops)[op_index].size = size; 
#line 357 "mdriver.c"
max_index = ((index > max_index)?index:max_index); 
#line 358 "mdriver.c"
break; 
#line 359 "mdriver.c"
case 'r': fscanf(tracefile, "%u %u", (&index), (&size)); 
#line 361 "mdriver.c"
(trace->ops)[op_index].type = REALLOC; 
#line 362 "mdriver.c"
(trace->ops)[op_index].index = index; 
#line 363 "mdriver.c"
(trace->ops)[op_index].size = size; 
#line 364 "mdriver.c"
max_index = ((index > max_index)?index:max_index); 
#line 365 "mdriver.c"
break; 
#line 366 "mdriver.c"
case 'f': fscanf(tracefile, "%ud", (&index)); 
#line 368 "mdriver.c"
(trace->ops)[op_index].type = FREE; 
#line 369 "mdriver.c"
(trace->ops)[op_index].index = index; 
#line 370 "mdriver.c"
break; 
#line 371 "mdriver.c"
default: printf("Bogus type character (%c) in tracefile %s\n", type[0], path); 
#line 374 "mdriver.c"
exit(1); } } 
#line 376 "mdriver.c"
op_index++; } } 
#line 379 "mdriver.c"
fclose(tracefile); 
#line 380 "mdriver.c"
(((max_index == (trace->num_ids) - 1)?((void )(0)):__assert_fail("max_index == trace->num_ids - 1", "mdriver.c", 380, __PRETTY_FUNCTION__))); 
#line 381 "mdriver.c"
((((trace->num_ops) == op_index)?((void )(0)):__assert_fail("trace->num_ops == op_index", "mdriver.c", 381, __PRETTY_FUNCTION__))); 
#line 383 "mdriver.c"

# 5056 "mdriver.c"
retValue_acc = trace;
# 5058 "mdriver.c"
return (trace_t* )retValue_acc;
 
# 5061 "mdriver.c"

}

# 5065 "mdriver.c"
return (trace_t* )retValue_acc;

# 5068 "mdriver.c"

}
 
#line 391 "mdriver.c"
void free_trace( trace_t *trace)  
# 5074 "mdriver.c"
{



# 5079 "mdriver.c"
{

#line 392 "mdriver.c"
free((trace->ops)); 
#line 393 "mdriver.c"
free((trace->blocks)); 
#line 394 "mdriver.c"
free((trace->block_sizes)); 
#line 395 "mdriver.c"
free(trace); 
# 5090 "mdriver.c"

}

# 5094 "mdriver.c"

}
 
#line 407 "mdriver.c"
static int eval_mm_valid( trace_t *trace, int tracenum,  range_t **ranges)  
# 5100 "mdriver.c"
{
# 5102 "mdriver.c"
int retValue_acc;




# 5108 "mdriver.c"
{

#line 408 "mdriver.c"

#line 408 "mdriver.c"
int i,j;
#line 409 "mdriver.c"

#line 409 "mdriver.c"
int index;
#line 410 "mdriver.c"

#line 410 "mdriver.c"
int size;
#line 411 "mdriver.c"

#line 411 "mdriver.c"
int oldsize;
#line 412 "mdriver.c"

#line 412 "mdriver.c"
char *newp;
#line 413 "mdriver.c"

#line 413 "mdriver.c"
char *oldp;
#line 414 "mdriver.c"

#line 414 "mdriver.c"
char *p;
#line 417 "mdriver.c"
mem_reset_brk(); 
#line 418 "mdriver.c"
clear_ranges(ranges); 
#line 421 "mdriver.c"
if (mm_init() < 0){
{ 
#line 422 "mdriver.c"
malloc_error(tracenum, 0, "mm_init failed."); 
#line 423 "mdriver.c"

# 5150 "mdriver.c"
retValue_acc = 0;
# 5152 "mdriver.c"
return (int )retValue_acc;
 } }
#line 427 "mdriver.c"
for(i = 0;i < (trace->num_ops);i++) { { 
#line 428 "mdriver.c"
index = (trace->ops)[i].index; 
#line 429 "mdriver.c"
size = (trace->ops)[i].size; 
#line 431 "mdriver.c"
switch((trace->ops)[i].type){ { 
#line 441 "mdriver.c"
case ALLOC: if ((p = mm_malloc(size)) == (((void *)0))){
{ 
#line 437 "mdriver.c"
malloc_error(tracenum, i, "mm_malloc failed."); 
#line 438 "mdriver.c"

# 5170 "mdriver.c"
retValue_acc = 0;
# 5172 "mdriver.c"
return (int )retValue_acc;
 } }
#line 441 "mdriver.c"
if (0){
{ 
#line 443 "mdriver.c"
printf("[%6d] index:%6d size:%6x type:ALLOC   start:%p\n", i + 1, index, size, p); } }
#line 450 "mdriver.c"
if (add_range(ranges, p, size, tracenum, i) == 0){

# 5183 "mdriver.c"
retValue_acc = 0;
# 5185 "mdriver.c"
return (int )retValue_acc;
 }
#line 458 "mdriver.c"
memset(p, index & 0xFF, size); 
#line 461 "mdriver.c"
(trace->blocks)[index] = p; 
#line 462 "mdriver.c"
(trace->block_sizes)[index] = size; 
#line 463 "mdriver.c"
break; 
#line 465 "mdriver.c"
case REALLOC: oldp = (trace->blocks)[index]; 
#line 469 "mdriver.c"
if ((newp = mm_realloc(oldp, size)) == (((void *)0))){
{ 
#line 470 "mdriver.c"
malloc_error(tracenum, i, "mm_realloc failed."); 
#line 471 "mdriver.c"

# 5205 "mdriver.c"
retValue_acc = 0;
# 5207 "mdriver.c"
return (int )retValue_acc;
 } }
#line 474 "mdriver.c"
if (0){
{ 
#line 476 "mdriver.c"
printf("[%6d] index:%6d size:%6x type:REALLOC start:%p\n", i + 1, index, size, newp); } }
#line 480 "mdriver.c"
remove_range(ranges, oldp); 
#line 483 "mdriver.c"
if (add_range(ranges, newp, size, tracenum, i) == 0){

# 5220 "mdriver.c"
retValue_acc = 0;
# 5222 "mdriver.c"
return (int )retValue_acc;
 }
#line 491 "mdriver.c"
oldsize = (trace->block_sizes)[index]; 
#line 492 "mdriver.c"
if (size < oldsize){
oldsize = size; }
#line 493 "mdriver.c"
for(j = 0;j < oldsize;j++) { { 
#line 499 "mdriver.c"
if (newp[j] != (index & 0xFF)){
{ 
#line 496 "mdriver.c"
malloc_error(tracenum, i, "mm_realloc did not preserve the ""data from old block"); 
#line 497 "mdriver.c"

# 5239 "mdriver.c"
retValue_acc = 0;
# 5241 "mdriver.c"
return (int )retValue_acc;
 } }} } 
#line 500 "mdriver.c"
memset(newp, index & 0xFF, size); 
#line 503 "mdriver.c"
(trace->blocks)[index] = newp; 
#line 504 "mdriver.c"
(trace->block_sizes)[index] = size; 
#line 505 "mdriver.c"
break; 
#line 507 "mdriver.c"
case FREE: p = (trace->blocks)[index]; 
#line 511 "mdriver.c"
remove_range(ranges, p); 
#line 512 "mdriver.c"
mm_free(p); 
#line 513 "mdriver.c"
if (0){
{ 
#line 515 "mdriver.c"
printf("[%6d] index:%6d size:%6x type:FREE    start:%p\n", i + 1, index, size, p); } }
#line 517 "mdriver.c"
break; 
#line 519 "mdriver.c"
default: app_error("Nonexistent request type in eval_mm_valid"); } } } } 
#line 526 "mdriver.c"

# 5269 "mdriver.c"
retValue_acc = 1;
# 5271 "mdriver.c"
return (int )retValue_acc;
 
# 5274 "mdriver.c"

}

# 5278 "mdriver.c"
return (int )retValue_acc;

# 5281 "mdriver.c"

}
 
# 406 "mdriver.c" 
# 541 "mdriver.c" 
static double eval_mm_util( trace_t *trace, int tracenum,  range_t **ranges)  
# 5288 "mdriver.c"
{
# 5290 "mdriver.c"
double retValue_acc;




# 5296 "mdriver.c"
{

#line 542 "mdriver.c"

#line 542 "mdriver.c"
int i;
#line 543 "mdriver.c"

#line 543 "mdriver.c"
int index;
#line 544 "mdriver.c"

#line 544 "mdriver.c"
int size,newsize,oldsize;
#line 545 "mdriver.c"

#line 545 "mdriver.c"
int max_total_size = 0;
#line 546 "mdriver.c"

#line 546 "mdriver.c"
int total_size = 0;
#line 547 "mdriver.c"

#line 547 "mdriver.c"
char *p;
#line 548 "mdriver.c"

#line 548 "mdriver.c"
char *newp,*oldp;
#line 551 "mdriver.c"
mem_reset_brk(); 
#line 552 "mdriver.c"
if (mm_init() < 0){
app_error("mm_init failed in eval_mm_util"); }
#line 555 "mdriver.c"
for(i = 0;i < (trace->num_ops);i++) { { 
#line 616 "mdriver.c"
switch((trace->ops)[i].type){ { 
#line 559 "mdriver.c"
case ALLOC: index = (trace->ops)[i].index; 
#line 560 "mdriver.c"
size = (trace->ops)[i].size; 
#line 562 "mdriver.c"
if ((p = mm_malloc(size)) == (((void *)0))){
app_error("mm_malloc failed in eval_mm_util"); }
#line 566 "mdriver.c"
(trace->blocks)[index] = p; 
#line 567 "mdriver.c"
(trace->block_sizes)[index] = size; 
#line 571 "mdriver.c"
total_size += size; 
#line 574 "mdriver.c"
max_total_size = ((total_size > max_total_size)?total_size:max_total_size); 
#line 576 "mdriver.c"
break; 
#line 578 "mdriver.c"
case REALLOC: index = (trace->ops)[i].index; 
#line 580 "mdriver.c"
newsize = (trace->ops)[i].size; 
#line 581 "mdriver.c"
oldsize = (trace->block_sizes)[index]; 
#line 583 "mdriver.c"
oldp = (trace->blocks)[index]; 
#line 584 "mdriver.c"
if ((newp = mm_realloc(oldp, newsize)) == (((void *)0))){
app_error("mm_realloc failed in eval_mm_util"); }
#line 588 "mdriver.c"
(trace->blocks)[index] = newp; 
#line 589 "mdriver.c"
(trace->block_sizes)[index] = newsize; 
#line 593 "mdriver.c"
total_size += (newsize - oldsize); 
#line 596 "mdriver.c"
max_total_size = ((total_size > max_total_size)?total_size:max_total_size); 
#line 598 "mdriver.c"
break; 
#line 600 "mdriver.c"
case FREE: index = (trace->ops)[i].index; 
#line 602 "mdriver.c"
size = (trace->block_sizes)[index]; 
#line 603 "mdriver.c"
p = (trace->blocks)[index]; 
#line 605 "mdriver.c"
mm_free(p); 
#line 609 "mdriver.c"
total_size -= size; 
#line 611 "mdriver.c"
break; 
#line 613 "mdriver.c"
default: app_error("Nonexistent request type in eval_mm_util"); } } } } 
#line 619 "mdriver.c"

# 5390 "mdriver.c"
retValue_acc = (((double )max_total_size) / ((double )mem_heapsize()));
# 5392 "mdriver.c"
return (double )retValue_acc;
 
# 5395 "mdriver.c"

}

# 5399 "mdriver.c"
return (double )retValue_acc;

# 5402 "mdriver.c"

}
 
#line 628 "mdriver.c"
static void eval_mm_speed(void *ptr)  
# 5408 "mdriver.c"
{



# 5413 "mdriver.c"
{

#line 629 "mdriver.c"

#line 629 "mdriver.c"
int i,index,size,newsize;
#line 630 "mdriver.c"

#line 630 "mdriver.c"
char *p,*newp,*oldp,*block;
#line 631 "mdriver.c"

#line 631 "mdriver.c"
 trace_t *trace = (((( speed_t *)ptr))->trace);
#line 634 "mdriver.c"
mem_reset_brk(); 
#line 635 "mdriver.c"
if (mm_init() < 0){
app_error("mm_init failed in eval_mm_speed"); }
#line 639 "mdriver.c"
for(i = 0;i < (trace->num_ops);i++) { switch((trace->ops)[i].type){ { 
#line 643 "mdriver.c"
case ALLOC: index = (trace->ops)[i].index; 
#line 644 "mdriver.c"
size = (trace->ops)[i].size; 
#line 645 "mdriver.c"
if ((p = mm_malloc(size)) == (((void *)0))){
app_error("mm_malloc error in eval_mm_speed"); }
#line 647 "mdriver.c"
(trace->blocks)[index] = p; 
#line 648 "mdriver.c"
break; 
#line 650 "mdriver.c"
case REALLOC: index = (trace->ops)[i].index; 
#line 652 "mdriver.c"
newsize = (trace->ops)[i].size; 
#line 653 "mdriver.c"
oldp = (trace->blocks)[index]; 
#line 654 "mdriver.c"
if ((newp = mm_realloc(oldp, newsize)) == (((void *)0))){
app_error("mm_realloc error in eval_mm_speed"); }
#line 656 "mdriver.c"
(trace->blocks)[index] = newp; 
#line 657 "mdriver.c"
break; 
#line 659 "mdriver.c"
case FREE: index = (trace->ops)[i].index; 
#line 661 "mdriver.c"
block = (trace->blocks)[index]; 
#line 662 "mdriver.c"
mm_free(block); 
#line 663 "mdriver.c"
break; 
#line 665 "mdriver.c"
default: app_error("Nonexistent request type in eval_mm_valid"); } } } 
# 5469 "mdriver.c"

}

# 5473 "mdriver.c"

}
 
#line 677 "mdriver.c"
static int eval_libc_valid( trace_t *trace, int tracenum)  
# 5479 "mdriver.c"
{
# 5481 "mdriver.c"
int retValue_acc;




# 5487 "mdriver.c"
{

#line 678 "mdriver.c"

#line 678 "mdriver.c"
int i,newsize;
#line 679 "mdriver.c"

#line 679 "mdriver.c"
char *p,*newp,*oldp;
#line 681 "mdriver.c"
for(i = 0;i < (trace->num_ops);i++) { { 
#line 708 "mdriver.c"
switch((trace->ops)[i].type){ { 
#line 689 "mdriver.c"
case ALLOC: if ((p = malloc((trace->ops)[i].size)) == (((void *)0))){
{ 
#line 686 "mdriver.c"
malloc_error(tracenum, i, "libc malloc failed"); 
#line 687 "mdriver.c"
unix_error("System message"); } }
#line 689 "mdriver.c"
(trace->blocks)[(trace->ops)[i].index] = p; 
#line 690 "mdriver.c"
break; 
#line 692 "mdriver.c"
case REALLOC: newsize = (trace->ops)[i].size; 
#line 694 "mdriver.c"
oldp = (trace->blocks)[(trace->ops)[i].index]; 
#line 695 "mdriver.c"
if ((newp = realloc(oldp, newsize)) == (((void *)0))){
{ 
#line 696 "mdriver.c"
malloc_error(tracenum, i, "libc realloc failed"); 
#line 697 "mdriver.c"
unix_error("System message"); } }
#line 699 "mdriver.c"
(trace->blocks)[(trace->ops)[i].index] = newp; 
#line 700 "mdriver.c"
break; 
#line 702 "mdriver.c"
case FREE: free((trace->blocks)[(trace->ops)[i].index]); 
#line 704 "mdriver.c"
break; 
#line 706 "mdriver.c"
default: app_error("invalid operation type  in eval_libc_valid"); } } } } 
#line 711 "mdriver.c"

# 5536 "mdriver.c"
retValue_acc = 1;
# 5538 "mdriver.c"
return (int )retValue_acc;
 
# 5541 "mdriver.c"

}

# 5545 "mdriver.c"
return (int )retValue_acc;

# 5548 "mdriver.c"

}
 
#line 720 "mdriver.c"
static void eval_libc_speed(void *ptr)  
# 5554 "mdriver.c"
{



# 5559 "mdriver.c"
{

#line 721 "mdriver.c"

#line 721 "mdriver.c"
int i;
#line 722 "mdriver.c"

#line 722 "mdriver.c"
int index,size,newsize;
#line 723 "mdriver.c"

#line 723 "mdriver.c"
char *p,*newp,*oldp,*block;
#line 724 "mdriver.c"

#line 724 "mdriver.c"
 trace_t *trace = (((( speed_t *)ptr))->trace);
#line 726 "mdriver.c"
for(i = 0;i < (trace->num_ops);i++) { { 
#line 751 "mdriver.c"
switch((trace->ops)[i].type){ { 
#line 729 "mdriver.c"
case ALLOC: index = (trace->ops)[i].index; 
#line 730 "mdriver.c"
size = (trace->ops)[i].size; 
#line 731 "mdriver.c"
if ((p = malloc(size)) == (((void *)0))){
unix_error("malloc failed in eval_libc_speed"); }
#line 733 "mdriver.c"
(trace->blocks)[index] = p; 
#line 734 "mdriver.c"
break; 
#line 736 "mdriver.c"
case REALLOC: index = (trace->ops)[i].index; 
#line 738 "mdriver.c"
newsize = (trace->ops)[i].size; 
#line 739 "mdriver.c"
oldp = (trace->blocks)[index]; 
#line 740 "mdriver.c"
if ((newp = realloc(oldp, newsize)) == (((void *)0))){
unix_error("realloc failed in eval_libc_speed\n"); }
#line 743 "mdriver.c"
(trace->blocks)[index] = newp; 
#line 744 "mdriver.c"
break; 
#line 746 "mdriver.c"
case FREE: index = (trace->ops)[i].index; 
#line 748 "mdriver.c"
block = (trace->blocks)[index]; 
#line 749 "mdriver.c"
free(block); 
#line 750 "mdriver.c"
break; } } } } 
# 5614 "mdriver.c"

}

# 5618 "mdriver.c"

}
 
