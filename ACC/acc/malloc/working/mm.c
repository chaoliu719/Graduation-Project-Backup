
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


# 1 "mm.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "mm.c" 
# 1 "mm.h" 1
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
# 493 "mm.c"
{
# 495 "mm.c"
int retValue_acc;




# 501 "mm.c"
{

#line 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 506 "mm.c"
retValue_acc = _IO_getc(stdin);
# 508 "mm.c"
return (int )retValue_acc;
 
# 511 "mm.c"

}

# 515 "mm.c"
return (int )retValue_acc;

# 518 "mm.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fgetc_unlocked( FILE *__fp)  
# 524 "mm.c"
{
# 526 "mm.c"
int retValue_acc;




# 532 "mm.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 537 "mm.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 539 "mm.c"
return (int )retValue_acc;
 
# 542 "mm.c"

}

# 546 "mm.c"
return (int )retValue_acc;

# 549 "mm.c"

}
 
#line 64 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getc_unlocked( FILE *__fp)  
# 555 "mm.c"
{
# 557 "mm.c"
int retValue_acc;




# 563 "mm.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 568 "mm.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 570 "mm.c"
return (int )retValue_acc;
 
# 573 "mm.c"

}

# 577 "mm.c"
return (int )retValue_acc;

# 580 "mm.c"

}
 
#line 71 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getchar_unlocked(void )  
# 586 "mm.c"
{
# 588 "mm.c"
int retValue_acc;




# 594 "mm.c"
{

#line 72 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 599 "mm.c"
retValue_acc = ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++))));
# 601 "mm.c"
return (int )retValue_acc;
 
# 604 "mm.c"

}

# 608 "mm.c"
return (int )retValue_acc;

# 611 "mm.c"

}
 
#line 80 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar(int __c)  
# 617 "mm.c"
{
# 619 "mm.c"
int retValue_acc;




# 625 "mm.c"
{

#line 81 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 630 "mm.c"
retValue_acc = _IO_putc(__c, stdout);
# 632 "mm.c"
return (int )retValue_acc;
 
# 635 "mm.c"

}

# 639 "mm.c"
return (int )retValue_acc;

# 642 "mm.c"

}
 
#line 89 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fputc_unlocked(int __c,  FILE *__stream)  
# 648 "mm.c"
{
# 650 "mm.c"
int retValue_acc;




# 656 "mm.c"
{

#line 90 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 661 "mm.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 663 "mm.c"
return (int )retValue_acc;
 
# 666 "mm.c"

}

# 670 "mm.c"
return (int )retValue_acc;

# 673 "mm.c"

}
 
#line 99 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putc_unlocked(int __c,  FILE *__stream)  
# 679 "mm.c"
{
# 681 "mm.c"
int retValue_acc;




# 687 "mm.c"
{

#line 100 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 692 "mm.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 694 "mm.c"
return (int )retValue_acc;
 
# 697 "mm.c"

}

# 701 "mm.c"
return (int )retValue_acc;

# 704 "mm.c"

}
 
#line 106 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar_unlocked(int __c)  
# 710 "mm.c"
{
# 712 "mm.c"
int retValue_acc;




# 718 "mm.c"
{

#line 107 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 723 "mm.c"
retValue_acc = ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c)))));
# 725 "mm.c"
return (int )retValue_acc;
 
# 728 "mm.c"

}

# 732 "mm.c"
return (int )retValue_acc;

# 735 "mm.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  
# 741 "mm.c"
{
# 743 "mm.c"
int retValue_acc;




# 749 "mm.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 754 "mm.c"
retValue_acc = ((((__stream)->_flags) & 0x10) != 0);
# 756 "mm.c"
return (int )retValue_acc;
 
# 759 "mm.c"

}

# 763 "mm.c"
return (int )retValue_acc;

# 766 "mm.c"

}
 
#line 133 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  
# 772 "mm.c"
{
# 774 "mm.c"
int retValue_acc;




# 780 "mm.c"
{

#line 134 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 785 "mm.c"
retValue_acc = ((((__stream)->_flags) & 0x20) != 0);
# 787 "mm.c"
return (int )retValue_acc;
 
# 790 "mm.c"

}

# 794 "mm.c"
return (int )retValue_acc;

# 797 "mm.c"

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
# 810 "mm.c"
{
# 812 "mm.c"
int retValue_acc;




# 818 "mm.c"
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 823 "mm.c"
retValue_acc = __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 825 "mm.c"
return (int )retValue_acc;
 
# 828 "mm.c"

}

# 832 "mm.c"
return (int )retValue_acc;

# 835 "mm.c"

}
 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsprintf(char *__restrict __s, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 841 "mm.c"
{
# 843 "mm.c"
int retValue_acc;




# 849 "mm.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 854 "mm.c"
retValue_acc = __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 856 "mm.c"
return (int )retValue_acc;
 
# 859 "mm.c"

}

# 863 "mm.c"
return (int )retValue_acc;

# 866 "mm.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __snprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 57 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vsnprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format,  __gnuc_va_list __ap) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) snprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt, ...)  
# 876 "mm.c"
{
# 878 "mm.c"
int retValue_acc;




# 884 "mm.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 889 "mm.c"
retValue_acc = __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 891 "mm.c"
return (int )retValue_acc;
 
# 894 "mm.c"

}

# 898 "mm.c"
return (int )retValue_acc;

# 901 "mm.c"

}
 
#line 76 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsnprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 907 "mm.c"
{
# 909 "mm.c"
int retValue_acc;




# 915 "mm.c"
{

#line 78 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 920 "mm.c"
retValue_acc = __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 922 "mm.c"
return (int )retValue_acc;
 
# 925 "mm.c"

}

# 929 "mm.c"
return (int )retValue_acc;

# 932 "mm.c"

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
# 946 "mm.c"
{
# 948 "mm.c"
int retValue_acc;




# 954 "mm.c"
{

#line 98 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 959 "mm.c"
retValue_acc = __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack());
# 961 "mm.c"
return (int )retValue_acc;
 
# 964 "mm.c"

}

# 968 "mm.c"
return (int )retValue_acc;

# 971 "mm.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int printf(const char *__restrict __fmt, ...)  
# 977 "mm.c"
{
# 979 "mm.c"
int retValue_acc;




# 985 "mm.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 990 "mm.c"
retValue_acc = __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack());
# 992 "mm.c"
return (int )retValue_acc;
 
# 995 "mm.c"

}

# 999 "mm.c"
return (int )retValue_acc;

# 1002 "mm.c"

}
 
#line 115 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vprintf(const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1008 "mm.c"
{
# 1010 "mm.c"
int retValue_acc;




# 1016 "mm.c"
{

#line 117 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1021 "mm.c"
retValue_acc = __vfprintf_chk(stdout, 2 - 1, __fmt, __ap);
# 1023 "mm.c"
return (int )retValue_acc;
 
# 1026 "mm.c"

}

# 1030 "mm.c"
return (int )retValue_acc;

# 1033 "mm.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vfprintf( FILE *__restrict __stream, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1039 "mm.c"
{
# 1041 "mm.c"
int retValue_acc;




# 1047 "mm.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1052 "mm.c"
retValue_acc = __vfprintf_chk(__stream, 2 - 1, __fmt, __ap);
# 1054 "mm.c"
return (int )retValue_acc;
 
# 1057 "mm.c"

}

# 1061 "mm.c"
return (int )retValue_acc;

# 1064 "mm.c"

}
 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __dprintf_chk(int __fd, int __flag, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vdprintf_chk(int __fd, int __flag, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int dprintf(int __fd, const char *__restrict __fmt, ...)  
# 1074 "mm.c"
{
# 1076 "mm.c"
int retValue_acc;




# 1082 "mm.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1087 "mm.c"
retValue_acc = __dprintf_chk(__fd, 2 - 1, __fmt, __builtin_va_arg_pack());
# 1089 "mm.c"
return (int )retValue_acc;
 
# 1092 "mm.c"

}

# 1096 "mm.c"
return (int )retValue_acc;

# 1099 "mm.c"

}
 
#line 151 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1105 "mm.c"
{
# 1107 "mm.c"
int retValue_acc;




# 1113 "mm.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1118 "mm.c"
retValue_acc = __vdprintf_chk(__fd, 2 - 1, __fmt, __ap);
# 1120 "mm.c"
return (int )retValue_acc;
 
# 1123 "mm.c"

}

# 1127 "mm.c"
return (int )retValue_acc;

# 1130 "mm.c"

}
 
#line 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_chk(char *__str,  size_t ) __attribute__  (( __warn_unused_result__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_warn(char *__str) __asm__ ("""gets") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use fgets or getline instead, gets can't ""specify buffer size" )  )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *gets(char *__str)  
# 1140 "mm.c"
{
# 1142 "mm.c"
char* retValue_acc;




# 1148 "mm.c"
{

#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__str, 2 > 1) != (( size_t )(-1))){

# 1154 "mm.c"
retValue_acc = __gets_chk(__str, __builtin_object_size(__str, 2 > 1));
# 1156 "mm.c"
return (char* )retValue_acc;
 }
#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1161 "mm.c"
retValue_acc = __gets_warn(__str);
# 1163 "mm.c"
return (char* )retValue_acc;
 
# 1166 "mm.c"

}

# 1170 "mm.c"
return (char* )retValue_acc;

# 1173 "mm.c"

}
 
#line 242 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 243 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_alias(char *__restrict __s, int __n,  FILE *__restrict __stream) __asm__ ("""fgets") __attribute__  (( __warn_unused_result__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk_warn(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __asm__ ("""__fgets_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fgets called with bigger size than length ""of destination buffer" )  )) ; 
#line 254 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream)  
# 1185 "mm.c"
{
# 1187 "mm.c"
char* retValue_acc;




# 1193 "mm.c"
{

#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1))){
{ 
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__n)) || __n <= 0){

# 1202 "mm.c"
retValue_acc = __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 1204 "mm.c"
return (char* )retValue_acc;
 }
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((( size_t )__n) > __builtin_object_size(__s, 2 > 1)){

# 1210 "mm.c"
retValue_acc = __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 1212 "mm.c"
return (char* )retValue_acc;
 }} }
#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1217 "mm.c"
retValue_acc = __fgets_alias(__s, __n, __stream);
# 1219 "mm.c"
return (char* )retValue_acc;
 
# 1222 "mm.c"

}

# 1226 "mm.c"
return (char* )retValue_acc;

# 1229 "mm.c"

}
 
#line 268 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 269 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_alias(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""fread") __attribute__  (( __warn_unused_result__ )) ; 
#line 278 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk_warn(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""__fread_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fread called with bigger size * nmemb than length ""of destination buffer" )  )) ; 
#line 283 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream)  
# 1241 "mm.c"
{
# 1243 "mm.c"
size_t retValue_acc;




# 1249 "mm.c"
{

#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 1258 "mm.c"
retValue_acc = __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1260 "mm.c"
return (size_t )retValue_acc;
 }
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 1266 "mm.c"
retValue_acc = __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1268 "mm.c"
return (size_t )retValue_acc;
 }} }
#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1273 "mm.c"
retValue_acc = __fread_alias(__ptr, __size, __n, __stream);
# 1275 "mm.c"
return (size_t )retValue_acc;
 
# 1278 "mm.c"

}

# 1282 "mm.c"
return (size_t )retValue_acc;

# 1285 "mm.c"

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
# 1298 "mm.c"
{
# 1300 "mm.c"
size_t retValue_acc;




# 1306 "mm.c"
{

#line 359 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 1315 "mm.c"
retValue_acc = __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1317 "mm.c"
return (size_t )retValue_acc;
 }
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 1323 "mm.c"
retValue_acc = __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 1325 "mm.c"
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

# 1342 "mm.c"
retValue_acc = 0;
# 1344 "mm.c"
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

# 1360 "mm.c"
retValue_acc = (__cptr - ((char *)__ptr)) / __size;
# 1362 "mm.c"
return (size_t )retValue_acc;
 } }
#line 379 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1367 "mm.c"
retValue_acc = __fread_unlocked_alias(__ptr, __size, __n, __stream);
# 1369 "mm.c"
return (size_t )retValue_acc;
 
# 1372 "mm.c"

}

# 1376 "mm.c"
return (size_t )retValue_acc;

# 1379 "mm.c"

}
 
# 938 "/usr/include/stdio.h" 2 3 4
# 3 "mm.h" 2
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
# 2 "mm.c" 2
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
# 1423 "mm.c"
{
# 1425 "mm.c"
unsigned int retValue_acc;




# 1431 "mm.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 1436 "mm.c"
retValue_acc = __builtin_bswap32(__bsx);
# 1438 "mm.c"
return (unsigned int )retValue_acc;
 
# 1441 "mm.c"

}

# 1445 "mm.c"
return (unsigned int )retValue_acc;

# 1448 "mm.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 1454 "mm.c"
{
# 1456 "mm.c"
__uint64_t retValue_acc;




# 1462 "mm.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 1467 "mm.c"
retValue_acc = __builtin_bswap64(__bsx);
# 1469 "mm.c"
return (__uint64_t )retValue_acc;
 
# 1472 "mm.c"

}

# 1476 "mm.c"
return (__uint64_t )retValue_acc;

# 1479 "mm.c"

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
# 1534 "mm.c"
{
# 1536 "mm.c"
int retValue_acc;




# 1542 "mm.c"
{

#line 280 "/usr/include/stdlib.h"

# 1547 "mm.c"
retValue_acc = ((int )strtol(__nptr, ((char **)(((void *)0))), 10));
# 1549 "mm.c"
return (int )retValue_acc;
 
# 1552 "mm.c"

}

# 1556 "mm.c"
return (int )retValue_acc;

# 1559 "mm.c"

}
 
#line 284 "/usr/include/stdlib.h"
extern __inline  __attribute__  (( __gnu_inline__ )) long int  __attribute__  (( __nothrow__ )) atol(const char *__nptr)  
# 1565 "mm.c"
{
# 1567 "mm.c"
long int retValue_acc;




# 1573 "mm.c"
{

#line 285 "/usr/include/stdlib.h"

# 1578 "mm.c"
retValue_acc = strtol(__nptr, ((char **)(((void *)0))), 10);
# 1580 "mm.c"
return (long int )retValue_acc;
 
# 1583 "mm.c"

}

# 1587 "mm.c"
return (long int )retValue_acc;

# 1590 "mm.c"

}
 
#line 293 "/usr/include/stdlib.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ )) long long int  __attribute__  (( __nothrow__ )) atoll(const char *__nptr)  
# 1596 "mm.c"
{
# 1598 "mm.c"
long long int retValue_acc;




# 1604 "mm.c"
{

#line 294 "/usr/include/stdlib.h"

# 1609 "mm.c"
retValue_acc = strtoll(__nptr, ((char **)(((void *)0))), 10);
# 1611 "mm.c"
return (long long int )retValue_acc;
 
# 1614 "mm.c"

}

# 1618 "mm.c"
return (long long int )retValue_acc;

# 1621 "mm.c"

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
# 1769 "mm.c"
{
# 1771 "mm.c"
unsigned int retValue_acc;




# 1777 "mm.c"
{

#line 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1782 "mm.c"
retValue_acc = ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff));
# 1784 "mm.c"
return (unsigned int )retValue_acc;
 
# 1787 "mm.c"

}

# 1791 "mm.c"
return (unsigned int )retValue_acc;

# 1794 "mm.c"

}
 
#line 46 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  
# 1800 "mm.c"
{
# 1802 "mm.c"
unsigned int retValue_acc;




# 1808 "mm.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1813 "mm.c"
retValue_acc = (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff));
# 1815 "mm.c"
return (unsigned int )retValue_acc;
 
# 1818 "mm.c"

}

# 1822 "mm.c"
return (unsigned int )retValue_acc;

# 1825 "mm.c"

}
 
#line 52 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  
# 1831 "mm.c"
{
# 1833 "mm.c"
unsigned long long int retValue_acc;




# 1839 "mm.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 1844 "mm.c"
retValue_acc = ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32));
# 1846 "mm.c"
return (unsigned long long int )retValue_acc;
 
# 1849 "mm.c"

}

# 1853 "mm.c"
return (unsigned long long int )retValue_acc;

# 1856 "mm.c"

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
# 2048 "mm.c"
{
# 2050 "mm.c"
void* retValue_acc;




# 2056 "mm.c"
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

# 2089 "mm.c"
retValue_acc = ((void *)__p);
# 2091 "mm.c"
return (void* )retValue_acc;
 }}} } 
#line 42 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

# 2096 "mm.c"
retValue_acc = (((void *)0));
# 2098 "mm.c"
return (void* )retValue_acc;
 
# 2101 "mm.c"

}

# 2105 "mm.c"
return (void* )retValue_acc;

# 2108 "mm.c"

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
# 2168 "mm.c"
{
# 2170 "mm.c"
double retValue_acc;




# 2176 "mm.c"
{

#line 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"

# 2181 "mm.c"
retValue_acc = strtod(__nptr, ((char **)(((void *)0))));
# 2183 "mm.c"
return (double )retValue_acc;
 
# 2186 "mm.c"

}

# 2190 "mm.c"
return (double )retValue_acc;

# 2193 "mm.c"

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
# 2207 "mm.c"
{
# 2209 "mm.c"
char* retValue_acc;




# 2215 "mm.c"
{

#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__resolved, 2 > 1) != (( size_t )(-1))){
{ 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2223 "mm.c"
retValue_acc = __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
# 2225 "mm.c"
return (char* )retValue_acc;
 } }
#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2230 "mm.c"
retValue_acc = __realpath_alias(__name, __resolved);
# 2232 "mm.c"
return (char* )retValue_acc;
 
# 2235 "mm.c"

}

# 2239 "mm.c"
return (char* )retValue_acc;

# 2242 "mm.c"

}
 
#line 53 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ptsname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ptsname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ptsname_r called with buflen bigger than ""size of buf" )  )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ptsname_r(int __fd, char *__buf,  size_t __buflen)  
# 2254 "mm.c"
{
# 2256 "mm.c"
int retValue_acc;




# 2262 "mm.c"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__buflen))){

# 2271 "mm.c"
retValue_acc = __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 2273 "mm.c"
return (int )retValue_acc;
 }
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 2279 "mm.c"
retValue_acc = __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 2281 "mm.c"
return (int )retValue_acc;
 }} }
#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2286 "mm.c"
retValue_acc = __ptsname_r_alias(__fd, __buf, __buflen);
# 2288 "mm.c"
return (int )retValue_acc;
 
# 2291 "mm.c"

}

# 2295 "mm.c"
return (int )retValue_acc;

# 2298 "mm.c"

}
 
#line 78 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_chk(char *__s,  wchar_t __wchar,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_alias(char *__s,  wchar_t __wchar) __asm__ ("""wctomb") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 84 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) int  __attribute__  (( __nothrow__ )) wctomb(char *__s,  wchar_t __wchar)  
# 2308 "mm.c"
{
# 2310 "mm.c"
int retValue_acc;




# 2316 "mm.c"
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1)) && 16 > __builtin_object_size(__s, 2 > 1)){

# 2322 "mm.c"
retValue_acc = __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1));
# 2324 "mm.c"
return (int )retValue_acc;
 }
#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2329 "mm.c"
retValue_acc = __wctomb_alias(__s, __wchar);
# 2331 "mm.c"
return (int )retValue_acc;
 
# 2334 "mm.c"

}

# 2338 "mm.c"
return (int )retValue_acc;

# 2341 "mm.c"

}
 
#line 100 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 101 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_alias( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len) __asm__ ("""mbstowcs") __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk_warn( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__mbstowcs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "mbstowcs called with dst buffer smaller than len ""* sizeof (wchar_t)" )  )) ; 
#line 114 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) mbstowcs( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len)  
# 2353 "mm.c"
{
# 2355 "mm.c"
size_t retValue_acc;




# 2361 "mm.c"
{

#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 2370 "mm.c"
retValue_acc = __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 2372 "mm.c"
return (size_t )retValue_acc;
 }
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t )){

# 2378 "mm.c"
retValue_acc = __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 2380 "mm.c"
return (size_t )retValue_acc;
 }} }
#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2385 "mm.c"
retValue_acc = __mbstowcs_alias(__dst, __src, __len);
# 2387 "mm.c"
return (size_t )retValue_acc;
 
# 2390 "mm.c"

}

# 2394 "mm.c"
return (size_t )retValue_acc;

# 2397 "mm.c"

}
 
#line 131 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_alias(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len) __asm__ ("""wcstombs") __attribute__  (( __nothrow__ )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk_warn(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__wcstombs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "wcstombs called with dst buffer smaller than len" )  )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) wcstombs(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len)  
# 2409 "mm.c"
{
# 2411 "mm.c"
size_t retValue_acc;




# 2417 "mm.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 2426 "mm.c"
retValue_acc = __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 2428 "mm.c"
return (size_t )retValue_acc;
 }
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1)){

# 2434 "mm.c"
retValue_acc = __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 2436 "mm.c"
return (size_t )retValue_acc;
 }} }
#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 2441 "mm.c"
retValue_acc = __wcstombs_alias(__dst, __src, __len);
# 2443 "mm.c"
return (size_t )retValue_acc;
 
# 2446 "mm.c"

}

# 2450 "mm.c"
return (size_t )retValue_acc;

# 2453 "mm.c"

}
 
# 960 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 5 "mm.c" 2
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
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t; 
#line 122 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t; 
#line 134 "/usr/include/stdint.h"
typedef long int intmax_t; 
#line 135 "/usr/include/stdint.h"
typedef unsigned long int uintmax_t; 
# 134 "/usr/include/stdint.h" 3 4
# 6 "mm.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 71 "/usr/include/assert.h" 3 4
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 76 "/usr/include/assert.h"
extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 82 "/usr/include/assert.h"
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 7 "mm.c" 2
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
# 8 "mm.c" 2
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
#line 274 "/usr/include/unistd.h"
typedef  __socklen_t socklen_t; 
# 274 "/usr/include/unistd.h" 3 4
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
# 2817 "mm.c"
{
# 2819 "mm.c"
ssize_t retValue_acc;




# 2825 "mm.c"
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 0) != (( size_t )(-1))){
{ 
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__nbytes))){

# 2834 "mm.c"
retValue_acc = __read_chk(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2836 "mm.c"
return (ssize_t )retValue_acc;
 }
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__nbytes > __builtin_object_size(__buf, 0)){

# 2842 "mm.c"
retValue_acc = __read_chk_warn(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2844 "mm.c"
return (ssize_t )retValue_acc;
 }} }
#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2849 "mm.c"
retValue_acc = __read_alias(__fd, __buf, __nbytes);
# 2851 "mm.c"
return (ssize_t )retValue_acc;
 
# 2854 "mm.c"

}

# 2858 "mm.c"
return (ssize_t )retValue_acc;

# 2861 "mm.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_alias(const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlink") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk_warn(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlink_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlink called with bigger length ""than size of destination buffer" )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlink(const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2873 "mm.c"
{
# 2875 "mm.c"
ssize_t retValue_acc;




# 2881 "mm.c"
{

#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2890 "mm.c"
retValue_acc = __readlink_chk(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2892 "mm.c"
return (ssize_t )retValue_acc;
 }
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2898 "mm.c"
retValue_acc = __readlink_chk_warn(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2900 "mm.c"
return (ssize_t )retValue_acc;
 }} }
#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2905 "mm.c"
retValue_acc = __readlink_alias(__path, __buf, __len);
# 2907 "mm.c"
return (ssize_t )retValue_acc;
 
# 2910 "mm.c"

}

# 2914 "mm.c"
return (ssize_t )retValue_acc;

# 2917 "mm.c"

}
 
#line 157 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_alias(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlinkat") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk_warn(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlinkat_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlinkat called with bigger ""length than size of destination ""buffer" )  )) ; 
#line 173 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2929 "mm.c"
{
# 2931 "mm.c"
ssize_t retValue_acc;




# 2937 "mm.c"
{

#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2946 "mm.c"
retValue_acc = __readlinkat_chk(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2948 "mm.c"
return (ssize_t )retValue_acc;
 }
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2954 "mm.c"
retValue_acc = __readlinkat_chk_warn(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2956 "mm.c"
return (ssize_t )retValue_acc;
 }} }
#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2961 "mm.c"
retValue_acc = __readlinkat_alias(__fd, __path, __buf, __len);
# 2963 "mm.c"
return (ssize_t )retValue_acc;
 
# 2966 "mm.c"

}

# 2970 "mm.c"
return (ssize_t )retValue_acc;

# 2973 "mm.c"

}
 
#line 188 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk(char *__buf,  size_t __size,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_alias(char *__buf,  size_t __size) __asm__ ("""getcwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 194 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk_warn(char *__buf,  size_t __size,  size_t __buflen) __asm__ ("""__getcwd_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getcwd caller with bigger length than size of ""destination buffer" )  )) ; 
#line 199 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getcwd(char *__buf,  size_t __size)  
# 2985 "mm.c"
{
# 2987 "mm.c"
char* retValue_acc;




# 2993 "mm.c"
{

#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size))){

# 3002 "mm.c"
retValue_acc = __getcwd_chk(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 3004 "mm.c"
return (char* )retValue_acc;
 }
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size > __builtin_object_size(__buf, 2 > 1)){

# 3010 "mm.c"
retValue_acc = __getcwd_chk_warn(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 3012 "mm.c"
return (char* )retValue_acc;
 }} }
#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3017 "mm.c"
retValue_acc = __getcwd_alias(__buf, __size);
# 3019 "mm.c"
return (char* )retValue_acc;
 
# 3022 "mm.c"

}

# 3026 "mm.c"
return (char* )retValue_acc;

# 3029 "mm.c"

}
 
#line 213 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_chk(char *__buf,  size_t buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 215 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_warn(char *__buf) __asm__ ("""getwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use getcwd instead, as getwd ""doesn't specify buffer size" )  )) ; 
#line 220 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getwd(char *__buf)  
# 3039 "mm.c"
{
# 3041 "mm.c"
char* retValue_acc;




# 3047 "mm.c"
{

#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){

# 3053 "mm.c"
retValue_acc = __getwd_chk(__buf, __builtin_object_size(__buf, 2 > 1));
# 3055 "mm.c"
return (char* )retValue_acc;
 }
#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3060 "mm.c"
retValue_acc = __getwd_warn(__buf);
# 3062 "mm.c"
return (char* )retValue_acc;
 
# 3065 "mm.c"

}

# 3069 "mm.c"
return (char* )retValue_acc;

# 3072 "mm.c"

}
 
#line 228 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk(int __name, char *__buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_alias(int __name, char *__buf,  size_t __len) __asm__ ("""confstr") __attribute__  (( __nothrow__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk_warn(int __name, char *__buf,  size_t __len,  size_t __buflen) __asm__ ("""__confstr_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "confstr called with bigger length than size of destination ""buffer" )  )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) confstr(int __name, char *__buf,  size_t __len)  
# 3084 "mm.c"
{
# 3086 "mm.c"
size_t retValue_acc;




# 3092 "mm.c"
{

#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 3101 "mm.c"
retValue_acc = __confstr_chk(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3103 "mm.c"
return (size_t )retValue_acc;
 }
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) < __len){

# 3109 "mm.c"
retValue_acc = __confstr_chk_warn(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3111 "mm.c"
return (size_t )retValue_acc;
 }} }
#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3116 "mm.c"
retValue_acc = __confstr_alias(__name, __buf, __len);
# 3118 "mm.c"
return (size_t )retValue_acc;
 
# 3121 "mm.c"

}

# 3125 "mm.c"
return (size_t )retValue_acc;

# 3128 "mm.c"

}
 
#line 252 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk(int __size,  __gid_t __list[],  size_t __listlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 253 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_alias(int __size,  __gid_t __list[]) __asm__ ("""getgroups") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk_warn(int __size,  __gid_t __list[],  size_t __listlen) __asm__ ("""__getgroups_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getgroups called with bigger group count than what ""can fit into destination buffer" )  )) ; 
#line 263 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getgroups(int __size,  __gid_t __list[])  
# 3140 "mm.c"
{
# 3142 "mm.c"
int retValue_acc;




# 3148 "mm.c"
{

#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__list, 2 > 1) != (( size_t )(-1))){
{ 
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size)) || __size < 0){

# 3157 "mm.c"
retValue_acc = __getgroups_chk(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3159 "mm.c"
return (int )retValue_acc;
 }
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size * sizeof ( __gid_t ) > __builtin_object_size(__list, 2 > 1)){

# 3165 "mm.c"
retValue_acc = __getgroups_chk_warn(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3167 "mm.c"
return (int )retValue_acc;
 }} }
#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3172 "mm.c"
retValue_acc = __getgroups_alias(__size, __list);
# 3174 "mm.c"
return (int )retValue_acc;
 
# 3177 "mm.c"

}

# 3181 "mm.c"
return (int )retValue_acc;

# 3184 "mm.c"

}
 
#line 277 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 280 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ttyname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ttyname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ttyname_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 289 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ttyname_r(int __fd, char *__buf,  size_t __buflen)  
# 3196 "mm.c"
{
# 3198 "mm.c"
int retValue_acc;




# 3204 "mm.c"
{

#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3213 "mm.c"
retValue_acc = __ttyname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3215 "mm.c"
return (int )retValue_acc;
 }
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3221 "mm.c"
retValue_acc = __ttyname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3223 "mm.c"
return (int )retValue_acc;
 }} }
#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3228 "mm.c"
retValue_acc = __ttyname_r_alias(__fd, __buf, __buflen);
# 3230 "mm.c"
return (int )retValue_acc;
 
# 3233 "mm.c"

}

# 3237 "mm.c"
return (int )retValue_acc;

# 3240 "mm.c"

}
 
#line 304 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_alias(char *__buf,  size_t __buflen) __asm__ ("""getlogin_r") __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 310 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getlogin_r_chk") __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "getlogin_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 315 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int getlogin_r(char *__buf,  size_t __buflen)  
# 3252 "mm.c"
{
# 3254 "mm.c"
int retValue_acc;




# 3260 "mm.c"
{

#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3269 "mm.c"
retValue_acc = __getlogin_r_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3271 "mm.c"
return (int )retValue_acc;
 }
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3277 "mm.c"
retValue_acc = __getlogin_r_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3279 "mm.c"
return (int )retValue_acc;
 }} }
#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3284 "mm.c"
retValue_acc = __getlogin_r_alias(__buf, __buflen);
# 3286 "mm.c"
return (int )retValue_acc;
 
# 3289 "mm.c"

}

# 3293 "mm.c"
return (int )retValue_acc;

# 3296 "mm.c"

}
 
#line 331 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 332 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_alias(char *__buf,  size_t __buflen) __asm__ ("""gethostname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__gethostname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "gethostname called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 342 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) gethostname(char *__buf,  size_t __buflen)  
# 3308 "mm.c"
{
# 3310 "mm.c"
int retValue_acc;




# 3316 "mm.c"
{

#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3325 "mm.c"
retValue_acc = __gethostname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3327 "mm.c"
return (int )retValue_acc;
 }
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3333 "mm.c"
retValue_acc = __gethostname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3335 "mm.c"
return (int )retValue_acc;
 }} }
#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3340 "mm.c"
retValue_acc = __gethostname_alias(__buf, __buflen);
# 3342 "mm.c"
return (int )retValue_acc;
 
# 3345 "mm.c"

}

# 3349 "mm.c"
return (int )retValue_acc;

# 3352 "mm.c"

}
 
#line 358 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 359 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_alias(char *__buf,  size_t __buflen) __asm__ ("""getdomainname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 365 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getdomainname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getdomainname called with bigger ""buflen than size of destination ""buffer" )  )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getdomainname(char *__buf,  size_t __buflen)  
# 3364 "mm.c"
{
# 3366 "mm.c"
int retValue_acc;




# 3372 "mm.c"
{

#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3381 "mm.c"
retValue_acc = __getdomainname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3383 "mm.c"
return (int )retValue_acc;
 }
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3389 "mm.c"
retValue_acc = __getdomainname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3391 "mm.c"
return (int )retValue_acc;
 }} }
#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3396 "mm.c"
retValue_acc = __getdomainname_alias(__buf, __buflen);
# 3398 "mm.c"
return (int )retValue_acc;
 
# 3401 "mm.c"

}

# 3405 "mm.c"
return (int )retValue_acc;

# 3408 "mm.c"

}
 
# 123 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
# 1149 "/usr/include/unistd.h" 2 3 4
# 10 "mm.c" 2
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
# 3538 "mm.c"
{
# 3540 "mm.c"
size_t retValue_acc;




# 3546 "mm.c"
{

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 949 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 951 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3557 "mm.c"
retValue_acc = __result;
# 3559 "mm.c"
return (size_t )retValue_acc;
 
# 3562 "mm.c"

}

# 3566 "mm.c"
return (size_t )retValue_acc;

# 3569 "mm.c"

}
 
#line 955 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2); 
#line 957 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2)  
# 3577 "mm.c"
{
# 3579 "mm.c"
size_t retValue_acc;




# 3585 "mm.c"
{

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 959 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 962 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3596 "mm.c"
retValue_acc = __result;
# 3598 "mm.c"
return (size_t )retValue_acc;
 
# 3601 "mm.c"

}

# 3605 "mm.c"
return (size_t )retValue_acc;

# 3608 "mm.c"

}
 
#line 966 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3); 
#line 969 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3)  
# 3616 "mm.c"
{
# 3618 "mm.c"
size_t retValue_acc;




# 3624 "mm.c"
{

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 971 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 974 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3635 "mm.c"
retValue_acc = __result;
# 3637 "mm.c"
return (size_t )retValue_acc;
 
# 3640 "mm.c"

}

# 3644 "mm.c"
return (size_t )retValue_acc;

# 3647 "mm.c"

}
 
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept); 
#line 1023 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept)  
# 3656 "mm.c"
{
# 3658 "mm.c"
size_t retValue_acc;




# 3664 "mm.c"
{

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1026 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept) { (++__result); } 
#line 1028 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3675 "mm.c"
retValue_acc = __result;
# 3677 "mm.c"
return (size_t )retValue_acc;
 
# 3680 "mm.c"

}

# 3684 "mm.c"
return (size_t )retValue_acc;

# 3687 "mm.c"

}
 
#line 1032 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2); 
#line 1034 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2)  
# 3695 "mm.c"
{
# 3697 "mm.c"
size_t retValue_acc;




# 3703 "mm.c"
{

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1037 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 1039 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3714 "mm.c"
retValue_acc = __result;
# 3716 "mm.c"
return (size_t )retValue_acc;
 
# 3719 "mm.c"

}

# 3723 "mm.c"
return (size_t )retValue_acc;

# 3726 "mm.c"

}
 
#line 1043 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1045 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 3734 "mm.c"
{
# 3736 "mm.c"
size_t retValue_acc;




# 3742 "mm.c"
{

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1048 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 1051 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3753 "mm.c"
retValue_acc = __result;
# 3755 "mm.c"
return (size_t )retValue_acc;
 
# 3758 "mm.c"

}

# 3762 "mm.c"
return (size_t )retValue_acc;

# 3765 "mm.c"

}
 
#line 1098 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2); 
#line 1101 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2)  
# 3773 "mm.c"
{
# 3775 "mm.c"
char* retValue_acc;




# 3781 "mm.c"
{

#line 1104 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 1105 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3788 "mm.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 3790 "mm.c"
return (char* )retValue_acc;
 
# 3793 "mm.c"

}

# 3797 "mm.c"
return (char* )retValue_acc;

# 3800 "mm.c"

}
 
#line 1109 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1112 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 3808 "mm.c"
{
# 3810 "mm.c"
char* retValue_acc;




# 3816 "mm.c"
{

#line 1116 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 1117 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3823 "mm.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 3825 "mm.c"
return (char* )retValue_acc;
 
# 3828 "mm.c"

}

# 3832 "mm.c"
return (char* )retValue_acc;

# 3835 "mm.c"

}
 
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 1150 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  
# 3844 "mm.c"
{
# 3846 "mm.c"
char* retValue_acc;




# 3852 "mm.c"
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

# 3882 "mm.c"
retValue_acc = __result;
# 3884 "mm.c"
return (char* )retValue_acc;
 
# 3887 "mm.c"

}

# 3891 "mm.c"
return (char* )retValue_acc;

# 3894 "mm.c"

}
 
#line 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern char *__strsep_g(char **__stringp, const char *__delim); 
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject); 
#line 1200 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject)  
# 3905 "mm.c"
{
# 3907 "mm.c"
char* retValue_acc;




# 3913 "mm.c"
{

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__retval = (*__s);
#line 1202 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 1204 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 3925 "mm.c"
retValue_acc = __retval;
# 3927 "mm.c"
return (char* )retValue_acc;
 
# 3930 "mm.c"

}

# 3934 "mm.c"
return (char* )retValue_acc;

# 3937 "mm.c"

}
 
#line 1207 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 1210 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2)  
# 3945 "mm.c"
{
# 3947 "mm.c"
char* retValue_acc;




# 3953 "mm.c"
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

# 3989 "mm.c"
retValue_acc = __retval;
# 3991 "mm.c"
return (char* )retValue_acc;
 
# 3994 "mm.c"

}

# 3998 "mm.c"
return (char* )retValue_acc;

# 4001 "mm.c"

}
 
#line 1235 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 1238 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  
# 4009 "mm.c"
{
# 4011 "mm.c"
char* retValue_acc;




# 4017 "mm.c"
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

# 4053 "mm.c"
retValue_acc = __retval;
# 4055 "mm.c"
return (char* )retValue_acc;
 
# 4058 "mm.c"

}

# 4062 "mm.c"
return (char* )retValue_acc;

# 4065 "mm.c"

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
# 4080 "mm.c"
{
# 4082 "mm.c"
void* retValue_acc;




# 4088 "mm.c"
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4093 "mm.c"
retValue_acc = __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 4095 "mm.c"
return (void* )retValue_acc;
 
# 4098 "mm.c"

}

# 4102 "mm.c"
return (void* )retValue_acc;

# 4105 "mm.c"

}
 
#line 56 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memmove(void *__dest, const void *__src,  size_t __len)  
# 4111 "mm.c"
{
# 4113 "mm.c"
void* retValue_acc;




# 4119 "mm.c"
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4124 "mm.c"
retValue_acc = __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 4126 "mm.c"
return (void* )retValue_acc;
 
# 4129 "mm.c"

}

# 4133 "mm.c"
return (void* )retValue_acc;

# 4136 "mm.c"

}
 
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memset(void *__dest, int __ch,  size_t __len)  
# 4143 "mm.c"
{
# 4145 "mm.c"
void* retValue_acc;




# 4151 "mm.c"
{

#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_constant_p(__len) && __len == 0 && ((!__builtin_constant_p(__ch)) || __ch != 0)){
{ 
#line 81 "/usr/include/x86_64-linux-gnu/bits/string3.h"
__warn_memset_zero_len(); 
#line 82 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4161 "mm.c"
retValue_acc = __dest;
# 4163 "mm.c"
return (void* )retValue_acc;
 } }
#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4168 "mm.c"
retValue_acc = __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
# 4170 "mm.c"
return (void* )retValue_acc;
 
# 4173 "mm.c"

}

# 4177 "mm.c"
return (void* )retValue_acc;

# 4180 "mm.c"

}
 
#line 90 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bcopy(const void *__src, void *__dest,  size_t __len)  
# 4186 "mm.c"
{



# 4191 "mm.c"
{

#line 91 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0))); 
# 4196 "mm.c"

}

# 4200 "mm.c"

}
 
#line 96 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bzero(void *__dest,  size_t __len)  
# 4206 "mm.c"
{



# 4211 "mm.c"
{

#line 97 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memset_chk(__dest, '\0', __len, __builtin_object_size(__dest, 0))); 
# 4216 "mm.c"

}

# 4220 "mm.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcpy(char *__restrict __dest, const char *__restrict __src)  
# 4226 "mm.c"
{
# 4228 "mm.c"
char* retValue_acc;




# 4234 "mm.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4239 "mm.c"
retValue_acc = __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 4241 "mm.c"
return (char* )retValue_acc;
 
# 4244 "mm.c"

}

# 4248 "mm.c"
return (char* )retValue_acc;

# 4251 "mm.c"

}
 
#line 119 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 4257 "mm.c"
{
# 4259 "mm.c"
char* retValue_acc;




# 4265 "mm.c"
{

#line 120 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4270 "mm.c"
retValue_acc = __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 4272 "mm.c"
return (char* )retValue_acc;
 
# 4275 "mm.c"

}

# 4279 "mm.c"
return (char* )retValue_acc;

# 4282 "mm.c"

}
 
#line 125 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_chk(char *__dest, const char *__src,  size_t __n,  size_t __destlen) __attribute__  (( __nothrow__ )) ; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_alias(char *__dest, const char *__src,  size_t __n) __asm__ ("""stpncpy") __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) stpncpy(char *__dest, const char *__src,  size_t __n)  
# 4292 "mm.c"
{
# 4294 "mm.c"
char* retValue_acc;




# 4300 "mm.c"
{

#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_object_size(__dest, 2 > 1) != (( size_t )(-1)) && ((!__builtin_constant_p(__n)) || __n <= __builtin_object_size(__dest, 2 > 1))){

# 4306 "mm.c"
retValue_acc = __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1));
# 4308 "mm.c"
return (char* )retValue_acc;
 }
#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4313 "mm.c"
retValue_acc = __stpncpy_alias(__dest, __src, __n);
# 4315 "mm.c"
return (char* )retValue_acc;
 
# 4318 "mm.c"

}

# 4322 "mm.c"
return (char* )retValue_acc;

# 4325 "mm.c"

}
 
#line 141 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcat(char *__restrict __dest, const char *__restrict __src)  
# 4331 "mm.c"
{
# 4333 "mm.c"
char* retValue_acc;




# 4339 "mm.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4344 "mm.c"
retValue_acc = __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 4346 "mm.c"
return (char* )retValue_acc;
 
# 4349 "mm.c"

}

# 4353 "mm.c"
return (char* )retValue_acc;

# 4356 "mm.c"

}
 
#line 149 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncat(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 4362 "mm.c"
{
# 4364 "mm.c"
char* retValue_acc;




# 4370 "mm.c"
{

#line 150 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 4375 "mm.c"
retValue_acc = __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 4377 "mm.c"
return (char* )retValue_acc;
 
# 4380 "mm.c"

}

# 4384 "mm.c"
return (char* )retValue_acc;

# 4387 "mm.c"

}
 
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 641 "/usr/include/string.h" 2 3 4
# 11 "mm.c" 2
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
# 13 "mm.c" 2
# 1 "range.h" 1
# 1 "helper.h" 1
# 1 "config.h" 1
# 7 "helper.h" 2
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
#line 16 "mm.c"
 range_t *range_r = (((void *)0)); 
#line 17 "mm.c"
int range_i = 0; 
#line 35 "mm.c"
 team_t team = {"","","","",""}; 
# 14 "mm.c" 2
# 66 "mm.c" 
int debug = 0; 
#line 77 "mm.c"
typedef struct _list {char *head; char *tail;  size_t max_capacity;  size_t min_capacity;  size_t cnt; 
}List; 
#line 80 "mm.c"
void list_init( List *l,  size_t min,  size_t max)  
# 4469 "mm.c"
{



# 4474 "mm.c"
{

#line 81 "mm.c"
(l->head) = (((void *)0)); 
#line 82 "mm.c"
(l->tail) = (((void *)0)); 
#line 83 "mm.c"
(l->max_capacity) = max; 
#line 84 "mm.c"
(l->min_capacity) = min; 
#line 85 "mm.c"
(l->cnt) = 0; 
# 4487 "mm.c"

}

# 4491 "mm.c"

}
 
#line 92 "mm.c"
void *list_remove( List *free_list, void *block)  
# 4497 "mm.c"
{
# 4499 "mm.c"
void* retValue_acc;




# 4505 "mm.c"
{

#line 93 "mm.c"

#line 93 "mm.c"
 size_t *prev_free = (((void *)(*(( size_t *)(((void *)(((char *)(block)) + sizeof ( size_t ))))))));
#line 94 "mm.c"

#line 94 "mm.c"
 size_t *next_free = (((void *)(*(( size_t *)(((void *)(((char *)(block)) + sizeof ( size_t ) + sizeof ( size_t *))))))));
#line 96 "mm.c"
if ((((void *)0)) != prev_free){
{ 
#line 98 "mm.c"
{ 
#line 98 "mm.c"

#line 98 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(prev_free)) + sizeof ( size_t ) + sizeof ( size_t *)))));
#line 98 "mm.c"
(*tmp) = (( size_t *)(next_free)); } 
#line 98 "mm.c"
; } }
#line 101 "mm.c"
if ((((void *)0)) != next_free){
{ 
#line 103 "mm.c"
{ 
#line 103 "mm.c"

#line 103 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(next_free)) + sizeof ( size_t )))));
#line 103 "mm.c"
(*tmp) = (( size_t *)(prev_free)); } 
#line 103 "mm.c"
; } }
#line 106 "mm.c"
if ((free_list->head) == block){
{ 
#line 108 "mm.c"
(free_list->head) = ((char *)next_free); } }
#line 111 "mm.c"
if ((free_list->tail) == block){
{ 
#line 113 "mm.c"
(free_list->tail) = ((char *)prev_free); } }
#line 116 "mm.c"
(free_list->cnt) -= 1; 
#line 118 "mm.c"

# 4556 "mm.c"
retValue_acc = next_free;
# 4558 "mm.c"
return (void* )retValue_acc;
 
# 4561 "mm.c"

}

# 4565 "mm.c"
return (void* )retValue_acc;

# 4568 "mm.c"

}
 
#line 125 "mm.c"
void list_insert_after( List *free_list, void *prev_block, void *block)  
# 4574 "mm.c"
{



# 4579 "mm.c"
{

#line 159 "mm.c"
if (prev_block == (((void *)0))){
{ 
#line 129 "mm.c"
{ 
#line 129 "mm.c"

#line 129 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(block)) + sizeof ( size_t ) + sizeof ( size_t *)))));
#line 129 "mm.c"
(*tmp) = (( size_t *)((free_list->head))); } 
#line 129 "mm.c"
; 
#line 130 "mm.c"
{ 
#line 130 "mm.c"

#line 130 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(block)) + sizeof ( size_t )))));
#line 130 "mm.c"
(*tmp) = (( size_t *)((((void *)0)))); } 
#line 130 "mm.c"
; 
#line 132 "mm.c"
if (0 != (free_list->cnt)){
{ 
#line 134 "mm.c"
{ 
#line 134 "mm.c"

#line 134 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)((free_list->head))) + sizeof ( size_t )))));
#line 134 "mm.c"
(*tmp) = (( size_t *)(block)); } 
#line 134 "mm.c"
; } }else{
{ 
#line 138 "mm.c"
(free_list->tail) = block; } }
#line 141 "mm.c"
(free_list->head) = block; } }else{
{ 
#line 146 "mm.c"

#line 146 "mm.c"
void *next_free = (((void *)(*(( size_t *)(((void *)(((char *)(prev_block)) + sizeof ( size_t ) + sizeof ( size_t *))))))));
#line 147 "mm.c"
{ 
#line 147 "mm.c"

#line 147 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(block)) + sizeof ( size_t ) + sizeof ( size_t *)))));
#line 147 "mm.c"
(*tmp) = (( size_t *)(next_free)); } 
#line 147 "mm.c"
; 
#line 148 "mm.c"
{ 
#line 148 "mm.c"

#line 148 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(block)) + sizeof ( size_t )))));
#line 148 "mm.c"
(*tmp) = (( size_t *)(prev_block)); } 
#line 148 "mm.c"
; 
#line 149 "mm.c"
{ 
#line 149 "mm.c"

#line 149 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(prev_block)) + sizeof ( size_t ) + sizeof ( size_t *)))));
#line 149 "mm.c"
(*tmp) = (( size_t *)(block)); } 
#line 149 "mm.c"
; 
#line 150 "mm.c"
if (next_free != (((void *)0))){
{ 
#line 152 "mm.c"
{ 
#line 152 "mm.c"

#line 152 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(next_free)) + sizeof ( size_t )))));
#line 152 "mm.c"
(*tmp) = (( size_t *)(block)); } 
#line 152 "mm.c"
; } }else{
{ 
#line 156 "mm.c"
(free_list->tail) = block; } }} }
#line 161 "mm.c"
(free_list->cnt) += 1; 
# 4676 "mm.c"

}

# 4680 "mm.c"

}
 
#line 164 "mm.c"
 List g_free_list; 
#line 169 "mm.c"
void *get_new_block( List *free_list,  size_t new_size); 
#line 171 "mm.c"
void *split( List *free_list, void *block,  size_t new_size); 
#line 173 "mm.c"
void *recycle( List *free_list, void *block,  size_t new_size, void (*free)( List *, void *)); 
#line 175 "mm.c"
void *find_first_fit( List *free_list,  size_t new_size); 
#line 177 "mm.c"
void *find_best_fit( List *free_list,  size_t new_size); 
#line 179 "mm.c"
void lifo_free( List *free_list, void *new_block); 
#line 181 "mm.c"
void ao_free( List *free_list, void *new_block); 
#line 183 "mm.c"
void *_mm_malloc( List *free_list,  size_t new_size, void *(*list_find)( List *,  size_t )); 
#line 185 "mm.c"
void _mm_free(void *block, void (*free)( List *, void *)); 
#line 188 "mm.c"
void *_mm_realloc( List *free_list, void *old_block,  size_t new_size, void *(*list_find)( List *,  size_t ), void (*free)( List *, void *)); 
#line 190 "mm.c"
void print_space(); 
#line 192 "mm.c"
void display_progress(); 
  void __utac_acc__aop__1 (void);


  void __utac_acc__aop__1 (void);


#line 201 "mm.c"
int mm_init()  
# 4718 "mm.c"
{
# 4720 "mm.c"
int retValue_acc;




# 4726 "mm.c"
{

#line 202 "mm.c"
list_init((&g_free_list), 0, (( size_t )(-1))); 
#line 204 "mm.c"

# 4733 "mm.c"
retValue_acc = 0;
{
__utac_acc__aop__1();

}

# 4740 "mm.c"
return (int )retValue_acc;
 
# 4743 "mm.c"

}

{
__utac_acc__aop__1();

}

# 4752 "mm.c"
return (int )retValue_acc;

# 4755 "mm.c"

}
 
  void __utac_acc__aop__2 (size_t size ,void* newp  );


  void __utac_acc__aop__2 (size_t size ,void* newp  );


#line 212 "mm.c"
void *mm_malloc( size_t free_size)  
# 4767 "mm.c"
{
# 4769 "mm.c"
void* retValue_acc;




# 4775 "mm.c"
{

#line 213 "mm.c"
display_progress(); 
#line 215 "mm.c"

#line 215 "mm.c"
 size_t new_size = (((free_size + ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u)))) + (8 - 1)) & (~0x7u));
#line 217 "mm.c"

#line 217 "mm.c"
void *p = _mm_malloc((&g_free_list), new_size, find_first_fit);
#line 219 "mm.c"

# 4790 "mm.c"
retValue_acc = p;
{
size_t __utac__ad__arg1 = free_size ; 
void* __utac__ad__arg2 = retValue_acc ; 
__utac_acc__aop__2(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 4799 "mm.c"
return (void* )retValue_acc;
 
# 4802 "mm.c"

}

{
size_t __utac__ad__arg1 = free_size ; 
void* __utac__ad__arg2 = retValue_acc ; 
__utac_acc__aop__2(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 4813 "mm.c"
return (void* )retValue_acc;

# 4816 "mm.c"

}
 
  void __utac_acc__aop__3 (void* p  );


#line 226 "mm.c"
void mm_free(void *ptr)  
# 4825 "mm.c"
{



# 4830 "mm.c"
{

#line 227 "mm.c"
display_progress(); 
#line 229 "mm.c"
_mm_free(((void *)(((char *)(ptr)) - ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u))))), lifo_free); 
# 4837 "mm.c"

}

{
void* __utac__ad__arg1 = ptr ; 
__utac_acc__aop__3(__utac__ad__arg1 );

}

# 4847 "mm.c"

}
 
  void __utac_acc__aop__4 (void* oldp ,size_t size ,void* newp  );


  void __utac_acc__aop__4 (void* oldp ,size_t size ,void* newp  );


#line 237 "mm.c"
void *mm_realloc(void *ptr,  size_t free_size)  
# 4859 "mm.c"
{
# 4861 "mm.c"
void* retValue_acc;




# 4867 "mm.c"
{

#line 238 "mm.c"
display_progress(); 
#line 240 "mm.c"

#line 240 "mm.c"
 size_t new_size = (((free_size + ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u)))) + (8 - 1)) & (~0x7u));
#line 242 "mm.c"

#line 242 "mm.c"
 size_t *origin = ((void *)(((char *)(ptr)) - ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u)))));
#line 244 "mm.c"
if (new_size < ((*(( size_t *)(origin))) & (~0x7u))){
{ 
#line 250 "mm.c"
if (3 * new_size >= ((*(( size_t *)(origin))) & (~0x7u))){
{ 
#line 248 "mm.c"
new_size = ((*(( size_t *)(origin))) & (~0x7u)); } }} }else{
if (new_size > ((*(( size_t *)(origin))) & (~0x7u))){
{ 
#line 253 "mm.c"

#line 253 "mm.c"
 size_t os = ((*(( size_t *)(origin))) & (~0x7u));
#line 254 "mm.c"

#line 254 "mm.c"
 size_t half_os = (((((*(( size_t *)(origin))) & (~0x7u)) >> 1u) + (8 - 1)) & (~0x7u));
#line 255 "mm.c"
if (os + half_os > new_size){
{ 
#line 257 "mm.c"
new_size = os + half_os; } }else{
{ 
#line 261 "mm.c"
new_size = new_size + half_os; } }} }}
#line 265 "mm.c"

#line 265 "mm.c"
void *p = _mm_realloc((&g_free_list), origin, new_size, find_first_fit, lifo_free);
#line 267 "mm.c"

# 4912 "mm.c"
retValue_acc = p;
{
void* __utac__ad__arg1 = ptr ; 
size_t __utac__ad__arg2 = free_size ; 
void* __utac__ad__arg3 = retValue_acc ; 
__utac_acc__aop__4(__utac__ad__arg1 ,__utac__ad__arg2 ,__utac__ad__arg3 );

}

# 4922 "mm.c"
return (void* )retValue_acc;
 
# 4925 "mm.c"

}

{
void* __utac__ad__arg1 = ptr ; 
size_t __utac__ad__arg2 = free_size ; 
void* __utac__ad__arg3 = retValue_acc ; 
__utac_acc__aop__4(__utac__ad__arg1 ,__utac__ad__arg2 ,__utac__ad__arg3 );

}

# 4937 "mm.c"
return (void* )retValue_acc;

# 4940 "mm.c"

}
 
#line 271 "mm.c"
void *_mm_malloc( List *free_list,  size_t new_size, void *(*list_find)( List *,  size_t ))  
# 4946 "mm.c"
{
# 4948 "mm.c"
void* retValue_acc;




# 4954 "mm.c"
{

#line 273 "mm.c"

#line 273 "mm.c"
void *now_block = list_find(free_list, new_size);
#line 275 "mm.c"
if (now_block == (((void *)0))){
{ 
#line 277 "mm.c"
now_block = get_new_block(free_list, new_size); } }else{
{ 
#line 281 "mm.c"
list_remove(free_list, now_block); 
#line 282 "mm.c"
now_block = recycle(free_list, now_block, new_size, lifo_free); } }
#line 287 "mm.c"

# 4973 "mm.c"
retValue_acc = (((void *)(((char *)(now_block)) + ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u))))));
# 4975 "mm.c"
return (void* )retValue_acc;
 
# 4978 "mm.c"

}

# 4982 "mm.c"
return (void* )retValue_acc;

# 4985 "mm.c"

}
 
#line 291 "mm.c"
void _mm_free(void *block, void (*free)( List *, void *))  
# 4991 "mm.c"
{



# 4996 "mm.c"
{

#line 297 "mm.c"
if (block == (((void *)0))){
{ 
#line 294 "mm.c"
return ; 
 } }
#line 297 "mm.c"
free((&g_free_list), block); 
# 5007 "mm.c"

}

# 5011 "mm.c"

}
 
#line 302 "mm.c"
void *_mm_realloc( List *free_list, void *old_block,  size_t new_size, void *(*list_find)( List *,  size_t ), void (*free)( List *, void *))  
# 5017 "mm.c"
{
# 5019 "mm.c"
void* retValue_acc;




# 5025 "mm.c"
{

#line 308 "mm.c"
if (old_block == (((void *)0))){
{ 
#line 305 "mm.c"

# 5033 "mm.c"
retValue_acc = mm_malloc(new_size);
# 5035 "mm.c"
return (void* )retValue_acc;
 } }
#line 308 "mm.c"
if (new_size == 0){
{ 
#line 310 "mm.c"
mm_free(old_block); 
#line 311 "mm.c"

# 5045 "mm.c"
retValue_acc = (((void *)0));
# 5047 "mm.c"
return (void* )retValue_acc;
 } }
#line 314 "mm.c"
if (new_size == ((*(( size_t *)(old_block))) & (~0x7u))){
{ 
#line 317 "mm.c"

# 5055 "mm.c"
retValue_acc = (((void *)(((char *)(old_block)) + ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u))))));
# 5057 "mm.c"
return (void* )retValue_acc;
 } }else{
if (new_size < ((*(( size_t *)(old_block))) & (~0x7u))){
{ 
#line 322 "mm.c"
recycle(free_list, old_block, new_size, free); 
#line 324 "mm.c"

# 5066 "mm.c"
retValue_acc = (((void *)(((char *)(old_block)) + ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u))))));
# 5068 "mm.c"
return (void* )retValue_acc;
 } }else{
{ 
#line 330 "mm.c"

#line 330 "mm.c"
 size_t *stage_pointer[2] = {(((void *)(*(( size_t *)(((void *)(((char *)(old_block)) + sizeof ( size_t )))))))),(((void *)(*(( size_t *)(((void *)(((char *)(old_block)) + sizeof ( size_t ) + sizeof ( size_t *))))))))};
#line 331 "mm.c"

#line 331 "mm.c"
 size_t old_size = ((*(( size_t *)(old_block))) & (~0x7u));
#line 333 "mm.c"
_mm_free(old_block, free); 
#line 335 "mm.c"

#line 335 "mm.c"
void *new_block = list_find(free_list, new_size);
#line 337 "mm.c"
if (new_block == (((void *)0))){
{ 
#line 339 "mm.c"
new_block = get_new_block(free_list, new_size); 
#line 341 "mm.c"
if (new_block == (((void *)0))){
{ 
#line 343 "mm.c"

# 5096 "mm.c"
retValue_acc = (((void *)0));
# 5098 "mm.c"
return (void* )retValue_acc;
 } }} }else{
{ 
#line 348 "mm.c"
list_remove(free_list, new_block); } }
#line 351 "mm.c"

#line 351 "mm.c"
 size_t old_new_size = ((*(( size_t *)(new_block))) & (~0x7u));
#line 353 "mm.c"
if (old_block != new_block){
{ 
#line 355 "mm.c"
memmove(new_block, old_block, old_size); } }
#line 358 "mm.c"
((*(( size_t *)(new_block))) = (old_new_size)); 
#line 359 "mm.c"
{ 
#line 359 "mm.c"

#line 359 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(new_block)) + sizeof ( size_t )))));
#line 359 "mm.c"
(*tmp) = (( size_t *)(stage_pointer[0])); } 
#line 359 "mm.c"
; 
#line 360 "mm.c"
{ 
#line 360 "mm.c"

#line 360 "mm.c"
 size_t **tmp = (( size_t **)(((void *)(((char *)(new_block)) + sizeof ( size_t ) + sizeof ( size_t *)))));
#line 360 "mm.c"
(*tmp) = (( size_t *)(stage_pointer[1])); } 
#line 360 "mm.c"
; 
#line 362 "mm.c"
recycle(free_list, new_block, new_size, free); 
#line 364 "mm.c"

# 5139 "mm.c"
retValue_acc = (((void *)(((char *)(new_block)) + ((((sizeof ( size_t )) + (8 - 1)) & (~0x7u))))));
# 5141 "mm.c"
return (void* )retValue_acc;
 } }}
# 5144 "mm.c"

}

# 5148 "mm.c"
return (void* )retValue_acc;

# 5151 "mm.c"

}
 
#line 369 "mm.c"
void *find_first_fit( List *free_list,  size_t new_size)  
# 5157 "mm.c"
{
# 5159 "mm.c"
void* retValue_acc;




# 5165 "mm.c"
{

#line 370 "mm.c"

#line 370 "mm.c"
void *now_block;
#line 371 "mm.c"
for(now_block = (free_list->head);now_block != (((void *)0));now_block = (((void *)(*(( size_t *)(((void *)(((char *)(now_block)) + sizeof ( size_t ) + sizeof ( size_t *))))))))) { { 
#line 377 "mm.c"
if (((*(( size_t *)(now_block))) & (~0x7u)) >= new_size){
{ 
#line 375 "mm.c"

# 5179 "mm.c"
retValue_acc = now_block;
# 5181 "mm.c"
return (void* )retValue_acc;
 } }} } 
#line 379 "mm.c"

# 5186 "mm.c"
retValue_acc = (((void *)0));
# 5188 "mm.c"
return (void* )retValue_acc;
 
# 5191 "mm.c"

}

# 5195 "mm.c"
return (void* )retValue_acc;

# 5198 "mm.c"

}
 
#line 383 "mm.c"
void *find_best_fit( List *free_list,  size_t new_size)  
# 5204 "mm.c"
{
# 5206 "mm.c"
void* retValue_acc;




# 5212 "mm.c"
{

#line 384 "mm.c"

#line 384 "mm.c"
 size_t min_diff = (18446744073709551615UL);
#line 385 "mm.c"

#line 385 "mm.c"
void *min_diff_block = (((void *)0));
#line 386 "mm.c"

#line 386 "mm.c"
void *now_block;
#line 388 "mm.c"
for(now_block = (free_list->head);now_block != (((void *)0));now_block = (((void *)(*(( size_t *)(((void *)(((char *)(now_block)) + sizeof ( size_t ) + sizeof ( size_t *))))))))) { { 
#line 399 "mm.c"
if (((*(( size_t *)(now_block))) & (~0x7u)) == new_size){
{ 
#line 392 "mm.c"

# 5234 "mm.c"
retValue_acc = now_block;
# 5236 "mm.c"
return (void* )retValue_acc;
 } }else{
if (((*(( size_t *)(now_block))) & (~0x7u)) > new_size && min_diff > ((*(( size_t *)(now_block))) & (~0x7u)) - new_size){
{ 
#line 396 "mm.c"
min_diff = ((*(( size_t *)(now_block))) & (~0x7u)) - new_size; 
#line 397 "mm.c"
min_diff_block = now_block; } }}} } 
#line 401 "mm.c"
if (min_diff_block != (((void *)0))){
{ 
#line 403 "mm.c"

# 5250 "mm.c"
retValue_acc = min_diff_block;
# 5252 "mm.c"
return (void* )retValue_acc;
 } }
#line 406 "mm.c"

# 5257 "mm.c"
retValue_acc = (((void *)0));
# 5259 "mm.c"
return (void* )retValue_acc;
 
# 5262 "mm.c"

}

# 5266 "mm.c"
return (void* )retValue_acc;

# 5269 "mm.c"

}
 
#line 410 "mm.c"
void lifo_free( List *free_list, void *new_block)  
# 5275 "mm.c"
{



# 5280 "mm.c"
{

#line 411 "mm.c"

#line 411 "mm.c"
void *ultimate_block = new_block;
#line 412 "mm.c"

#line 412 "mm.c"
 size_t total_size = ((*(( size_t *)(new_block))) & (~0x7u));
#line 413 "mm.c"

#line 413 "mm.c"
void *next_block = ((char *)new_block) + ((*(( size_t *)(new_block))) & (~0x7u));
#line 414 "mm.c"

#line 414 "mm.c"
void *old_block;
#line 415 "mm.c"
for(old_block = (free_list->head);old_block != (((void *)0));) { { 
#line 433 "mm.c"
if (old_block == next_block){
{ 
#line 420 "mm.c"
total_size += ((*(( size_t *)(old_block))) & (~0x7u)); 
#line 421 "mm.c"
old_block = list_remove(free_list, old_block); } }else{
{ 
#line 432 "mm.c"
if (((char *)old_block) + ((*(( size_t *)(old_block))) & (~0x7u)) == new_block){
{ 
#line 428 "mm.c"
ultimate_block = old_block; 
#line 429 "mm.c"
total_size += ((*(( size_t *)(old_block))) & (~0x7u)); } }
#line 432 "mm.c"
old_block = (((void *)(*(( size_t *)(((void *)(((char *)(old_block)) + sizeof ( size_t ) + sizeof ( size_t *)))))))); } }} } 
#line 436 "mm.c"
((*(( size_t *)(ultimate_block))) = (total_size)); 
#line 438 "mm.c"
if (ultimate_block == new_block){
{ 
#line 440 "mm.c"
list_insert_after(free_list, (((void *)0)), new_block); } }
# 5325 "mm.c"

}

# 5329 "mm.c"

}
 
#line 445 "mm.c"
void ao_free( List *free_list, void *new_block)  
# 5335 "mm.c"
{



# 5340 "mm.c"
{

#line 446 "mm.c"

#line 446 "mm.c"
void *prev_block = (((void *)0));
#line 447 "mm.c"

#line 447 "mm.c"
void *ultimate_block = new_block;
#line 448 "mm.c"

#line 448 "mm.c"
 size_t total_size = ((*(( size_t *)(new_block))) & (~0x7u));
#line 449 "mm.c"

#line 449 "mm.c"
void *next_block = ((char *)new_block) + ((*(( size_t *)(new_block))) & (~0x7u));
#line 450 "mm.c"

#line 450 "mm.c"
void *old_block;
#line 452 "mm.c"
for(old_block = (free_list->head);old_block != (((void *)0));) { { 
#line 479 "mm.c"
if (old_block >= next_block){
{ 
#line 462 "mm.c"
if (old_block == next_block){
{ 
#line 459 "mm.c"
total_size += ((*(( size_t *)(old_block))) & (~0x7u)); 
#line 460 "mm.c"
old_block = list_remove(free_list, old_block); } }
#line 462 "mm.c"
break; } }else{
{ 
#line 478 "mm.c"
if (((char *)old_block) + ((*(( size_t *)(old_block))) & (~0x7u)) == new_block){
{ 
#line 469 "mm.c"
ultimate_block = old_block; 
#line 470 "mm.c"
total_size += ((*(( size_t *)(old_block))) & (~0x7u)); } }else{
if (prev_block == (((void *)0)) && (((void *)(*(( size_t *)(((void *)(((char *)(old_block)) + sizeof ( size_t ) + sizeof ( size_t *)))))))) > new_block){
{ 
#line 475 "mm.c"
prev_block = old_block; } }}
#line 478 "mm.c"
old_block = (((void *)(*(( size_t *)(((void *)(((char *)(old_block)) + sizeof ( size_t ) + sizeof ( size_t *)))))))); } }} } 
#line 482 "mm.c"
((*(( size_t *)(ultimate_block))) = (total_size)); 
#line 484 "mm.c"
if (ultimate_block == new_block){
{ 
#line 486 "mm.c"
list_insert_after(free_list, prev_block, new_block); } }
# 5398 "mm.c"

}

# 5402 "mm.c"

}
 
#line 491 "mm.c"
void *get_new_block( List *free_list,  size_t new_size)  
# 5408 "mm.c"
{
# 5410 "mm.c"
void* retValue_acc;




# 5416 "mm.c"
{

#line 492 "mm.c"

#line 492 "mm.c"
void *tail_free = (free_list->tail);
#line 495 "mm.c"
if (tail_free && ((char *)tail_free) + ((*(( size_t *)(tail_free))) & (~0x7u)) == ((char *)mem_heap_hi()) + 1){
{ 
#line 506 "mm.c"
if (mem_sbrk(new_size - ((*(( size_t *)(tail_free))) & (~0x7u))) == ((void *)(-1))){
{ 
#line 499 "mm.c"

# 5431 "mm.c"
retValue_acc = (((void *)0));
# 5433 "mm.c"
return (void* )retValue_acc;
 } }else{
{ 
#line 503 "mm.c"
((*(( size_t *)(tail_free))) = (new_size)); 
#line 504 "mm.c"
list_remove(free_list, tail_free); 
#line 505 "mm.c"

# 5443 "mm.c"
retValue_acc = tail_free;
# 5445 "mm.c"
return (void* )retValue_acc;
 } }} }else{
{ 
#line 510 "mm.c"

#line 510 "mm.c"
void *block = ((char *)mem_heap_hi()) + 1;
#line 512 "mm.c"
if (mem_sbrk(new_size) == ((void *)(-1))){
{ 
#line 514 "mm.c"

# 5458 "mm.c"
retValue_acc = (((void *)0));
# 5460 "mm.c"
return (void* )retValue_acc;
 } }else{
{ 
#line 518 "mm.c"
((*(( size_t *)(block))) = (new_size)); 
#line 519 "mm.c"

# 5468 "mm.c"
retValue_acc = block;
# 5470 "mm.c"
return (void* )retValue_acc;
 } }} }
# 5473 "mm.c"

}

# 5477 "mm.c"
return (void* )retValue_acc;

# 5480 "mm.c"

}
 
#line 528 "mm.c"
void *split( List *free_list, void *block,  size_t new_size)  
# 5486 "mm.c"
{
# 5488 "mm.c"
void* retValue_acc;




# 5494 "mm.c"
{

#line 546 "mm.c"
if (((*(( size_t *)(block))) & (~0x7u)) - new_size >= ((((sizeof ( size_t ) + 2 * sizeof ( size_t *)) + (8 - 1)) & (~0x7u)))){
{ 
#line 533 "mm.c"

#line 533 "mm.c"
 size_t remain = ((*(( size_t *)(block))) & (~0x7u)) - new_size;
#line 534 "mm.c"
((*(( size_t *)(block))) = (remain)); 
#line 537 "mm.c"

#line 537 "mm.c"
void *new_block = ((void *)(((char *)block) + remain));
#line 538 "mm.c"
((*(( size_t *)(new_block))) = (new_size)); 
#line 540 "mm.c"

# 5514 "mm.c"
retValue_acc = new_block;
# 5516 "mm.c"
return (void* )retValue_acc;
 } }else{
{ 
#line 544 "mm.c"
list_remove(free_list, block); 
#line 545 "mm.c"

# 5524 "mm.c"
retValue_acc = block;
# 5526 "mm.c"
return (void* )retValue_acc;
 } }
# 5529 "mm.c"

}

# 5533 "mm.c"
return (void* )retValue_acc;

# 5536 "mm.c"

}
 
#line 553 "mm.c"
void *recycle( List *free_list, void *block,  size_t new_size, void (*free)( List *, void *))  
# 5542 "mm.c"
{
# 5544 "mm.c"
void* retValue_acc;




# 5550 "mm.c"
{

#line 564 "mm.c"
if (new_size + ((((sizeof ( size_t ) + 2 * sizeof ( size_t *)) + (8 - 1)) & (~0x7u))) <= ((*(( size_t *)(block))) & (~0x7u))){
{ 
#line 556 "mm.c"

#line 556 "mm.c"
 size_t remain = ((*(( size_t *)(block))) & (~0x7u)) - new_size;
#line 557 "mm.c"
((*(( size_t *)(block))) = (new_size)); 
#line 559 "mm.c"

#line 559 "mm.c"
void *new_block = ((void *)(((char *)block) + new_size));
#line 560 "mm.c"
((*(( size_t *)(new_block))) = (remain + 1951594)); 
#line 562 "mm.c"
_mm_free(new_block, free); } }
#line 564 "mm.c"

# 5572 "mm.c"
retValue_acc = block;
# 5574 "mm.c"
return (void* )retValue_acc;
 
# 5577 "mm.c"

}

# 5581 "mm.c"
return (void* )retValue_acc;

# 5584 "mm.c"

}
 
#line 569 "mm.c"
void print_space()  
# 5590 "mm.c"
{



# 5595 "mm.c"
{

#line 570 "mm.c"

#line 570 "mm.c"
 List *free_list = (&g_free_list);
#line 571 "mm.c"

#line 571 "mm.c"
 size_t *min_p = 0,*prev_p,*tmp;
#line 572 "mm.c"

#line 572 "mm.c"
int flag = 0;
#line 574 "mm.c"
while(1) { { 
#line 576 "mm.c"
flag = 0; 
#line 578 "mm.c"
tmp = mem_heap_hi(); 
#line 579 "mm.c"

#line 579 "mm.c"
 size_t *p;
#line 580 "mm.c"
for(p = (( size_t *)(free_list->head));p != (((void *)0));p = (( size_t *)(((void *)(*(( size_t *)(((void *)(((char *)(p)) + sizeof ( size_t ) + sizeof ( size_t *)))))))))) { { 
#line 588 "mm.c"
if (p > min_p && p < tmp){
{ 
#line 584 "mm.c"
tmp = p; 
#line 585 "mm.c"
flag = 1; } }} } 
#line 590 "mm.c"
if (flag == 0){
{ 
#line 609 "mm.c"
if (min_p == (((void *)0))){
{ 
#line 594 "mm.c"
printf("status: %s, size: %lx\n\n", "busy", ((char *)tmp) - ((char *)mem_heap_lo())); } }else{
if (min_p != mem_heap_hi()){
{ 
#line 607 "mm.c"
if (((char *)mem_heap_hi()) - ((char *)min_p) - ((*(( size_t *)(min_p))) & (~0x7u)) != (-1)){
{ 
#line 601 "mm.c"
printf("status: %s, size: %lx\n\n", "busy", ((char *)mem_heap_hi()) - ((char *)min_p) - ((*(( size_t *)(min_p))) & (~0x7u)) + 1); } }else{
{ 
#line 606 "mm.c"
printf("\n"); } }} }}
#line 609 "mm.c"
fflush(stdout); 
#line 610 "mm.c"
return ; 
 } }
#line 613 "mm.c"
if (tmp != mem_heap_lo()){
{ 
#line 622 "mm.c"
if (min_p == (((void *)0))){
{ 
#line 617 "mm.c"
printf("status: %s, size: %lx\n", "busy", ((char *)tmp) - ((char *)mem_heap_lo())); } }else{
{ 
#line 621 "mm.c"
printf("status: %s, size: %lx\n", "busy", ((char *)tmp) - ((char *)prev_p) - ((*(( size_t *)(prev_p))) & (~0x7u))); } }} }
#line 626 "mm.c"
min_p = tmp; 
#line 628 "mm.c"
printf("status: %s, size: %lx\n", "free", ((*(( size_t *)(tmp))) & (~0x7u))); 
#line 631 "mm.c"
prev_p = min_p; } } 
# 5669 "mm.c"

}

# 5673 "mm.c"

}
 
#line 638 "mm.c"
void display_progress()  
# 5679 "mm.c"
{



# 5684 "mm.c"
{

#line 639 "mm.c"
debug++; 
#line 641 "mm.c"
if (0){
{ 
#line 648 "mm.c"
if (debug % 100 == 0){
{ 
#line 645 "mm.c"
printf("\r%d", debug); } }
#line 648 "mm.c"
if (debug == 1578816){
{ 
#line 649 "mm.c"
printf("\r-----completed-----\n"); } }
#line 650 "mm.c"
fflush(stdout); } }
#line 653 "mm.c"
if (0 && debug == 211){
{ 
#line 655 "mm.c"

#line 655 "mm.c"
int a = 1;} }
#line 658 "mm.c"
if (0 && 0 && debug < 1000){
{ 
#line 660 "mm.c"
print_space(); } }
#line 663 "mm.c"
if (0 && 0){
{ 
#line 665 "mm.c"

#line 665 "mm.c"
 size_t free = 0;
#line 666 "mm.c"

#line 666 "mm.c"
 size_t all = mem_heap_hi() - mem_heap_lo() + 1;
#line 667 "mm.c"

#line 667 "mm.c"
 size_t *p;
#line 668 "mm.c"
for(p = (( size_t *)g_free_list.head);p != (((void *)0));p = (( size_t *)(((void *)(*(( size_t *)(((void *)(((char *)(p)) + sizeof ( size_t ) + sizeof ( size_t *)))))))))) { { 
#line 670 "mm.c"
free += ((*(( size_t *)(p))) & (~0x7u)); } } 
#line 672 "mm.c"
printf("%.0f\n", ((double )(all - free)) * 100 / all); } }
# 5737 "mm.c"

}

# 5741 "mm.c"

}
 
