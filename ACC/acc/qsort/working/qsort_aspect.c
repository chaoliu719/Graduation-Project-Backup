
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

extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) ; 
extern void __utac__exception__cf_handler_free(void * exception);
extern void __utac__exception__cf_handler_reset(void * exception) ; 
extern void * __utac__error_stack_mgt(void * env , int mode, int count) ;

# 1 "qsort_aspect.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "qsort_aspect.c" 
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
extern __inline  __attribute__  (( __gnu_inline__ )) int getchar(void )  {

#line 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return _IO_getc(stdin); }
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fgetc_unlocked( FILE *__fp)  {

#line 55 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++)))); }
 
#line 64 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getc_unlocked( FILE *__fp)  {

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++)))); }
 
#line 71 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getchar_unlocked(void )  {

#line 72 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++)))); }
 
#line 80 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar(int __c)  {

#line 81 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return _IO_putc(__c, stdout); }
 
#line 89 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fputc_unlocked(int __c,  FILE *__stream)  {

#line 90 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 99 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putc_unlocked(int __c,  FILE *__stream)  {

#line 100 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 106 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar_unlocked(int __c)  {

#line 107 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c))))); }
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  {

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((((__stream)->_flags) & 0x10) != 0); }
 
#line 133 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  {

#line 134 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((((__stream)->_flags) & 0x20) != 0); }
 
# 124 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
# 935 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk(char *__restrict __s, int __flag,  size_t __slen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vsprintf_chk(char *__restrict __s, int __flag,  size_t __slen, const char *__restrict __format,  __gnuc_va_list __ap) __attribute__  (( __nothrow__ )) ; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) sprintf(char *__restrict __s, const char *__restrict __fmt, ...)  {

#line 34 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack()); }
 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsprintf(char *__restrict __s, const char *__restrict __fmt,  __gnuc_va_list __ap)  {

#line 47 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap); }
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __snprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 57 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vsnprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format,  __gnuc_va_list __ap) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) snprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt, ...)  {

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack()); }
 
#line 76 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsnprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt,  __gnuc_va_list __ap)  {

#line 78 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap); }
 
#line 86 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __fprintf_chk( FILE *__restrict __stream, int __flag, const char *__restrict __format, ...); 
#line 87 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __printf_chk(int __flag, const char *__restrict __format, ...); 
#line 89 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vfprintf_chk( FILE *__restrict __stream, int __flag, const char *__restrict __format,  __gnuc_va_list __ap); 
#line 91 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vprintf_chk(int __flag, const char *__restrict __format,  __gnuc_va_list __ap); 
#line 96 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int fprintf( FILE *__restrict __stream, const char *__restrict __fmt, ...)  {

#line 98 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack()); }
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int printf(const char *__restrict __fmt, ...)  {

#line 104 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack()); }
 
#line 115 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vprintf(const char *__restrict __fmt,  __gnuc_va_list __ap)  {

#line 117 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __vfprintf_chk(stdout, 2 - 1, __fmt, __ap); }
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vfprintf( FILE *__restrict __stream, const char *__restrict __fmt,  __gnuc_va_list __ap)  {

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __vfprintf_chk(__stream, 2 - 1, __fmt, __ap); }
 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __dprintf_chk(int __fd, int __flag, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vdprintf_chk(int __fd, int __flag, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int dprintf(int __fd, const char *__restrict __fmt, ...)  {

#line 142 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __dprintf_chk(__fd, 2 - 1, __fmt, __builtin_va_arg_pack()); }
 
#line 151 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __ap)  {

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __vdprintf_chk(__fd, 2 - 1, __fmt, __ap); }
 
#line 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_chk(char *__str,  size_t ) __attribute__  (( __warn_unused_result__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_warn(char *__str) __asm__ ("""gets") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use fgets or getline instead, gets can't ""specify buffer size" )  )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *gets(char *__str)  {

#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__str, 2 > 1) != (( size_t )(-1))){
return __gets_chk(__str, __builtin_object_size(__str, 2 > 1)); }
#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __gets_warn(__str); }
 
#line 242 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 243 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_alias(char *__restrict __s, int __n,  FILE *__restrict __stream) __asm__ ("""fgets") __attribute__  (( __warn_unused_result__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk_warn(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __asm__ ("""__fgets_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fgets called with bigger size than length ""of destination buffer" )  )) ; 
#line 254 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream)  {

#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1))){
{ 
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__n)) || __n <= 0){
return __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((( size_t )__n) > __builtin_object_size(__s, 2 > 1)){
return __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }} }
#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fgets_alias(__s, __n, __stream); }
 
#line 268 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 269 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_alias(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""fread") __attribute__  (( __warn_unused_result__ )) ; 
#line 278 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk_warn(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""__fread_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fread called with bigger size * nmemb than length ""of destination buffer" )  )) ; 
#line 283 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream)  {

#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){
return __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){
return __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }} }
#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_alias(__ptr, __size, __n, __stream); }
 
# 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
# 329 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern  size_t __fread_unlocked_chk(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 330 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_unlocked_alias(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""fread_unlocked") __attribute__  (( __warn_unused_result__ )) ; 
#line 339 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_unlocked_chk_warn(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""__fread_unlocked_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fread_unlocked called with bigger size * nmemb than ""length of destination buffer" )  )) ; 
#line 344 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream)  {

#line 359 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){
return __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){
return __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }} }
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
return 0; }
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
return (__cptr - ((char *)__ptr)) / __size; } }
#line 379 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_unlocked_alias(__ptr, __size, __n, __stream); }
 
# 938 "/usr/include/stdio.h" 2 3 4
# 2 "qsort_aspect.c" 2
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
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) __signbitf(float __x)  {

#line 130 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

#line 130 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
int __m;
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
 __asm ("pmovmskb %1, %0" : "=r"(__m) : "x"(__x)); 
#line 132 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
return (__m & 0x8) != 0; }
 
#line 140 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) __signbit(double __x)  {

#line 142 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

#line 142 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
int __m;
#line 143 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
 __asm ("pmovmskb %1, %0" : "=r"(__m) : "x"(__x)); 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
return (__m & 0x80) != 0; }
 
#line 152 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) __signbitl(long double __x)  {

#line 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"

#line 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
 __extension__ union {long double __l; int __i[3]; 
}__u = {__l:__x};
#line 154 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
return (__u.__i[2] & 0x8000) != 0; }
 
# 427 "/usr/include/math.h" 2 3 4
# 488 "/usr/include/math.h" 3 4
# 4 "qsort_aspect.c" 2
static  size_t lines = 0; 
#line 5 "qsort_aspect.c"
static  size_t compare_cnt = 0; 
#line 8 "qsort_aspect.c"
 inline void __utac_acc__qsort_aspect__1(void) { 



#line 9 "qsort_aspect.c"
compare_cnt++; }

 
#line 13 "qsort_aspect.c"
 inline void __utac_acc__qsort_aspect__2( size_t nitems) {



#line 14 "qsort_aspect.c"
lines = nitems; }

 
#line 19 "qsort_aspect.c"
 inline void __utac_acc__qsort_aspect__3(void) { 



#line 20 "qsort_aspect.c"

#line 20 "qsort_aspect.c"
double x = ((double )compare_cnt);
#line 21 "qsort_aspect.c"

#line 21 "qsort_aspect.c"
double n = ((double )lines);
#line 23 "qsort_aspect.c"
if (n == 0){
{ 
#line 25 "qsort_aspect.c"
return ; } }
#line 28 "qsort_aspect.c"

#line 28 "qsort_aspect.c"
double lgn = log2(n);
#line 29 "qsort_aspect.c"

#line 29 "qsort_aspect.c"
double r = 100.0 - (x - n * lgn) * 100 / (n * (n - lgn));
#line 32 "qsort_aspect.c"
fprintf(stderr, "效率[%.3f], n[%ld], nlgn[%ld], n^2[%ld]\n", r, compare_cnt, (( size_t )(n * lgn)), lines * lines); }

 



