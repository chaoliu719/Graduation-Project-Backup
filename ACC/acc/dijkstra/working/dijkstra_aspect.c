
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

# 1 "dijkstra_aspect.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "dijkstra_aspect.c" 
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
# 2 "dijkstra_aspect.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 71 "/usr/include/assert.h" 3 4
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 76 "/usr/include/assert.h"
extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 82 "/usr/include/assert.h"
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 3 "dijkstra_aspect.c" 2
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
# 51 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
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
static __inline unsigned int __bswap_32(unsigned int __bsx)  {

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap32(__bsx); }
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  {

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap64(__bsx); }
 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4
# 393 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern void *__rawmemchr(const void *__s, int __c); 
#line 945 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c1(const char *__s, int __reject); 
#line 947 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c1(const char *__s, int __reject)  {

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 949 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 951 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result; }
 
#line 955 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2); 
#line 957 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2)  {

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 959 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 962 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result; }
 
#line 966 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3); 
#line 969 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3)  {

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 971 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 974 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result; }
 
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept); 
#line 1023 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept)  {

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1026 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept) { (++__result); } 
#line 1028 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result; }
 
#line 1032 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2); 
#line 1034 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2)  {

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1037 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 1039 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result; }
 
#line 1043 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1045 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1048 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 1051 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result; }
 
#line 1098 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2); 
#line 1101 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2)  {

#line 1104 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 1105 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
#line 1109 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1112 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 1116 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 1117 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 1150 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  {

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
return __result; }
 
#line 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern char *__strsep_g(char **__stringp, const char *__delim); 
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject); 
#line 1200 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject)  {

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__retval = (*__s);
#line 1202 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 1204 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __retval; }
 
#line 1207 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 1210 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2)  {

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
return __retval; }
 
#line 1235 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 1238 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  {

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
return __retval; }
 
# 1273 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
# 968 "/usr/include/stdlib.h" 3 4
# 1278 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4
extern char *__strdup(const char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 1298 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern char *__strndup(const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
# 1297 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 636 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string3.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern void __warn_memset_zero_len(void ) __attribute__  (( __warning__ ( "memset used with constant zero length parameter; this could be due to transposed parameters" )  )) ; 
#line 50 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memcpy(void *__restrict __dest, const void *__restrict __src,  size_t __len)  {

#line 51 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); }
 
#line 56 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memmove(void *__dest, const void *__src,  size_t __len)  {

#line 57 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); }
 
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memset(void *__dest, int __ch,  size_t __len)  {

#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_constant_p(__len) && __len == 0 && ((!__builtin_constant_p(__ch)) || __ch != 0)){
{ 
#line 81 "/usr/include/x86_64-linux-gnu/bits/string3.h"
__warn_memset_zero_len(); 
#line 82 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __dest; } }
#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0)); }
 
#line 90 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bcopy(const void *__src, void *__dest,  size_t __len)  {

#line 91 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0))); }
 
#line 96 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bzero(void *__dest,  size_t __len)  {

#line 97 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memset_chk(__dest, '\0', __len, __builtin_object_size(__dest, 0))); }
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcpy(char *__restrict __dest, const char *__restrict __src)  {

#line 104 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); }
 
#line 119 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __len)  {

#line 120 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1)); }
 
#line 125 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_chk(char *__dest, const char *__src,  size_t __n,  size_t __destlen) __attribute__  (( __nothrow__ )) ; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_alias(char *__dest, const char *__src,  size_t __n) __asm__ ("""stpncpy") __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) stpncpy(char *__dest, const char *__src,  size_t __n)  {

#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_object_size(__dest, 2 > 1) != (( size_t )(-1)) && ((!__builtin_constant_p(__n)) || __n <= __builtin_object_size(__dest, 2 > 1))){
return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1)); }
#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __stpncpy_alias(__dest, __src, __n); }
 
#line 141 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcat(char *__restrict __dest, const char *__restrict __src)  {

#line 142 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); }
 
#line 149 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncat(char *__restrict __dest, const char *__restrict __src,  size_t __len)  {

#line 150 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1)); }
 
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 641 "/usr/include/string.h" 2 3 4
# 4 "dijkstra_aspect.c" 2
# 1 "dijkstra_advice.h" 1
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4
typedef  __time_t time_t; 
# 26 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; 
}; 
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
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
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
typedef  __suseconds_t suseconds_t; 
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask; 
#line 75 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct { __fd_mask __fds_bits[1024 / (8 * ((int )sizeof ( __fd_mask )))]; 
}fd_set; 
#line 82 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __fd_mask fd_mask; 
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
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
# 30 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
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
# 6 "dijkstra_advice.h" 2
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
# 232 "/usr/include/unistd.h" 2 3 4
typedef  __gid_t gid_t; 
#line 237 "/usr/include/unistd.h"
typedef  __uid_t uid_t; 
#line 255 "/usr/include/unistd.h"
typedef  __useconds_t useconds_t; 
#line 260 "/usr/include/unistd.h"
typedef  __pid_t pid_t; 
#line 267 "/usr/include/unistd.h"
typedef  __intptr_t intptr_t; 
#line 274 "/usr/include/unistd.h"
typedef  __socklen_t socklen_t; 
# 255 "/usr/include/unistd.h" 3 4
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
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  ssize_t read(int __fd, void *__buf,  size_t __nbytes)  {

#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 0) != (( size_t )(-1))){
{ 
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__nbytes))){
return __read_chk(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0)); }
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__nbytes > __builtin_object_size(__buf, 0)){
return __read_chk_warn(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0)); }} }
#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __read_alias(__fd, __buf, __nbytes); }
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_alias(const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlink") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk_warn(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlink_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlink called with bigger length ""than size of destination buffer" )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlink(const char *__restrict __path, char *__restrict __buf,  size_t __len)  {

#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){
return __readlink_chk(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1)); }
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){
return __readlink_chk_warn(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1)); }} }
#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __readlink_alias(__path, __buf, __len); }
 
#line 157 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_alias(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlinkat") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk_warn(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlinkat_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlinkat called with bigger ""length than size of destination ""buffer" )  )) ; 
#line 173 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len)  {

#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){
return __readlinkat_chk(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1)); }
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){
return __readlinkat_chk_warn(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1)); }} }
#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __readlinkat_alias(__fd, __path, __buf, __len); }
 
#line 188 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk(char *__buf,  size_t __size,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_alias(char *__buf,  size_t __size) __asm__ ("""getcwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 194 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk_warn(char *__buf,  size_t __size,  size_t __buflen) __asm__ ("""__getcwd_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getcwd caller with bigger length than size of ""destination buffer" )  )) ; 
#line 199 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getcwd(char *__buf,  size_t __size)  {

#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size))){
return __getcwd_chk(__buf, __size, __builtin_object_size(__buf, 2 > 1)); }
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size > __builtin_object_size(__buf, 2 > 1)){
return __getcwd_chk_warn(__buf, __size, __builtin_object_size(__buf, 2 > 1)); }} }
#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __getcwd_alias(__buf, __size); }
 
#line 213 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_chk(char *__buf,  size_t buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 215 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_warn(char *__buf) __asm__ ("""getwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use getcwd instead, as getwd ""doesn't specify buffer size" )  )) ; 
#line 220 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getwd(char *__buf)  {

#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
return __getwd_chk(__buf, __builtin_object_size(__buf, 2 > 1)); }
#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __getwd_warn(__buf); }
 
#line 228 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk(int __name, char *__buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_alias(int __name, char *__buf,  size_t __len) __asm__ ("""confstr") __attribute__  (( __nothrow__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk_warn(int __name, char *__buf,  size_t __len,  size_t __buflen) __asm__ ("""__confstr_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "confstr called with bigger length than size of destination ""buffer" )  )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) confstr(int __name, char *__buf,  size_t __len)  {

#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){
return __confstr_chk(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1)); }
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) < __len){
return __confstr_chk_warn(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1)); }} }
#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __confstr_alias(__name, __buf, __len); }
 
#line 252 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk(int __size,  __gid_t __list[],  size_t __listlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 253 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_alias(int __size,  __gid_t __list[]) __asm__ ("""getgroups") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk_warn(int __size,  __gid_t __list[],  size_t __listlen) __asm__ ("""__getgroups_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getgroups called with bigger group count than what ""can fit into destination buffer" )  )) ; 
#line 263 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getgroups(int __size,  __gid_t __list[])  {

#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__list, 2 > 1) != (( size_t )(-1))){
{ 
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size)) || __size < 0){
return __getgroups_chk(__size, __list, __builtin_object_size(__list, 2 > 1)); }
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size * sizeof ( __gid_t ) > __builtin_object_size(__list, 2 > 1)){
return __getgroups_chk_warn(__size, __list, __builtin_object_size(__list, 2 > 1)); }} }
#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __getgroups_alias(__size, __list); }
 
#line 277 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 280 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ttyname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ttyname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ttyname_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 289 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ttyname_r(int __fd, char *__buf,  size_t __buflen)  {

#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){
return __ttyname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){
return __ttyname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }} }
#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __ttyname_r_alias(__fd, __buf, __buflen); }
 
#line 304 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_alias(char *__buf,  size_t __buflen) __asm__ ("""getlogin_r") __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 310 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getlogin_r_chk") __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "getlogin_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 315 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int getlogin_r(char *__buf,  size_t __buflen)  {

#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){
return __getlogin_r_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){
return __getlogin_r_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }} }
#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __getlogin_r_alias(__buf, __buflen); }
 
#line 331 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 332 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_alias(char *__buf,  size_t __buflen) __asm__ ("""gethostname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__gethostname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "gethostname called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 342 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) gethostname(char *__buf,  size_t __buflen)  {

#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){
return __gethostname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){
return __gethostname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }} }
#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __gethostname_alias(__buf, __buflen); }
 
#line 358 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 359 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_alias(char *__buf,  size_t __buflen) __asm__ ("""getdomainname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 365 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getdomainname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getdomainname called with bigger ""buflen than size of destination ""buffer" )  )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getdomainname(char *__buf,  size_t __buflen)  {

#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){
return __getdomainname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){
return __getdomainname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }} }
#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
return __getdomainname_alias(__buf, __buflen); }
 
# 123 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
# 1149 "/usr/include/unistd.h" 2 3 4
# 16 "dijkstra_advice.h" 2
struct profiling {char func_name[32]; struct timeval total_time; int finish; int count; struct profiling *next; 
}; 
#line 18 "dijkstra_advice.h"
void __before_call(const char *func_name); 
#line 19 "dijkstra_advice.h"
void __after_call(const char *func_name); 
#line 20 "dijkstra_advice.h"
void __init_head(); 
#line 21 "dijkstra_advice.h"
void __print_profiling(); 
# 6 "dijkstra_aspect.c" 2
# 15 "dijkstra_aspect.c" 
static void join_on_entry(const char *name)  {

#line 23 "dijkstra_aspect.c"
if ((__extension__ ((__builtin_constant_p(4) && ((__builtin_constant_p("main") && strlen("main") < ((( size_t )(4)))) || (__builtin_constant_p(name) && strlen(name) < ((( size_t )(4)))))?__extension__ ({ 
#line 16 "dijkstra_aspect.c"

#line 16 "dijkstra_aspect.c"
 size_t __s1_len,__s2_len;
#line 16 "dijkstra_aspect.c"
((__builtin_constant_p("main") && __builtin_constant_p(name) && (__s1_len = __builtin_strlen("main") , __s2_len = __builtin_strlen(name) , ((!((( size_t )((const void *)(("main") + 1))) - (( size_t )((const void *)("main"))) == 1)) || __s1_len >= 4) && ((!((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1)) || __s2_len >= 4))?__builtin_strcmp("main", name):((__builtin_constant_p("main") && ((( size_t )((const void *)(("main") + 1))) - (( size_t )((const void *)("main"))) == 1) && (__s1_len = __builtin_strlen("main") , __s1_len < 4)?((__builtin_constant_p(name) && ((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1)?__builtin_strcmp("main", name):(__extension__ ({ 
#line 16 "dijkstra_aspect.c"

#line 16 "dijkstra_aspect.c"
const unsigned char *__s2 = ((const unsigned char *)((const char *)(name)));
#line 16 "dijkstra_aspect.c"

#line 16 "dijkstra_aspect.c"
int __result = ((((const unsigned char *)((const char *)("main"))))[0] - __s2[0]);
#line 16 "dijkstra_aspect.c"
if (__s1_len > 0 && __result == 0){
{ 
#line 16 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)("main"))))[1] - __s2[1]); 
#line 16 "dijkstra_aspect.c"
if (__s1_len > 1 && __result == 0){
{ 
#line 16 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)("main"))))[2] - __s2[2]); 
#line 16 "dijkstra_aspect.c"
if (__s1_len > 2 && __result == 0){
__result = ((((const unsigned char *)((const char *)("main"))))[3] - __s2[3]); }} }} }
#line 16 "dijkstra_aspect.c"
__result; } )))):((__builtin_constant_p(name) && ((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1) && (__s2_len = __builtin_strlen(name) , __s2_len < 4)?((__builtin_constant_p("main") && ((( size_t )((const void *)(("main") + 1))) - (( size_t )((const void *)("main"))) == 1)?__builtin_strcmp("main", name):((-(__extension__ ({ 
#line 16 "dijkstra_aspect.c"

#line 16 "dijkstra_aspect.c"
const unsigned char *__s2 = ((const unsigned char *)((const char *)("main")));
#line 16 "dijkstra_aspect.c"

#line 16 "dijkstra_aspect.c"
int __result = ((((const unsigned char *)((const char *)(name))))[0] - __s2[0]);
#line 16 "dijkstra_aspect.c"
if (__s2_len > 0 && __result == 0){
{ 
#line 16 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)(name))))[1] - __s2[1]); 
#line 16 "dijkstra_aspect.c"
if (__s2_len > 1 && __result == 0){
{ 
#line 16 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)(name))))[2] - __s2[2]); 
#line 16 "dijkstra_aspect.c"
if (__s2_len > 2 && __result == 0){
__result = ((((const unsigned char *)((const char *)(name))))[3] - __s2[3]); }} }} }
#line 16 "dijkstra_aspect.c"
__result; } )))))):__builtin_strcmp("main", name))))))); } ):strncmp("main", name, 4)))) == 0){
{ 
#line 18 "dijkstra_aspect.c"
__init_head(); } }else{
{ 
#line 22 "dijkstra_aspect.c"
__before_call(name); } }}
 
#line 27 "dijkstra_aspect.c"
static void join_on_exit(const char *name)  {

#line 35 "dijkstra_aspect.c"
if ((__extension__ ((__builtin_constant_p(4) && ((__builtin_constant_p("main") && strlen("main") < ((( size_t )(4)))) || (__builtin_constant_p(name) && strlen(name) < ((( size_t )(4)))))?__extension__ ({ 
#line 28 "dijkstra_aspect.c"

#line 28 "dijkstra_aspect.c"
 size_t __s1_len,__s2_len;
#line 28 "dijkstra_aspect.c"
((__builtin_constant_p("main") && __builtin_constant_p(name) && (__s1_len = __builtin_strlen("main") , __s2_len = __builtin_strlen(name) , ((!((( size_t )((const void *)(("main") + 1))) - (( size_t )((const void *)("main"))) == 1)) || __s1_len >= 4) && ((!((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1)) || __s2_len >= 4))?__builtin_strcmp("main", name):((__builtin_constant_p("main") && ((( size_t )((const void *)(("main") + 1))) - (( size_t )((const void *)("main"))) == 1) && (__s1_len = __builtin_strlen("main") , __s1_len < 4)?((__builtin_constant_p(name) && ((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1)?__builtin_strcmp("main", name):(__extension__ ({ 
#line 28 "dijkstra_aspect.c"

#line 28 "dijkstra_aspect.c"
const unsigned char *__s2 = ((const unsigned char *)((const char *)(name)));
#line 28 "dijkstra_aspect.c"

#line 28 "dijkstra_aspect.c"
int __result = ((((const unsigned char *)((const char *)("main"))))[0] - __s2[0]);
#line 28 "dijkstra_aspect.c"
if (__s1_len > 0 && __result == 0){
{ 
#line 28 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)("main"))))[1] - __s2[1]); 
#line 28 "dijkstra_aspect.c"
if (__s1_len > 1 && __result == 0){
{ 
#line 28 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)("main"))))[2] - __s2[2]); 
#line 28 "dijkstra_aspect.c"
if (__s1_len > 2 && __result == 0){
__result = ((((const unsigned char *)((const char *)("main"))))[3] - __s2[3]); }} }} }
#line 28 "dijkstra_aspect.c"
__result; } )))):((__builtin_constant_p(name) && ((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1) && (__s2_len = __builtin_strlen(name) , __s2_len < 4)?((__builtin_constant_p("main") && ((( size_t )((const void *)(("main") + 1))) - (( size_t )((const void *)("main"))) == 1)?__builtin_strcmp("main", name):((-(__extension__ ({ 
#line 28 "dijkstra_aspect.c"

#line 28 "dijkstra_aspect.c"
const unsigned char *__s2 = ((const unsigned char *)((const char *)("main")));
#line 28 "dijkstra_aspect.c"

#line 28 "dijkstra_aspect.c"
int __result = ((((const unsigned char *)((const char *)(name))))[0] - __s2[0]);
#line 28 "dijkstra_aspect.c"
if (__s2_len > 0 && __result == 0){
{ 
#line 28 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)(name))))[1] - __s2[1]); 
#line 28 "dijkstra_aspect.c"
if (__s2_len > 1 && __result == 0){
{ 
#line 28 "dijkstra_aspect.c"
__result = ((((const unsigned char *)((const char *)(name))))[2] - __s2[2]); 
#line 28 "dijkstra_aspect.c"
if (__s2_len > 2 && __result == 0){
__result = ((((const unsigned char *)((const char *)(name))))[3] - __s2[3]); }} }} }
#line 28 "dijkstra_aspect.c"
__result; } )))))):__builtin_strcmp("main", name))))))); } ):strncmp("main", name, 4)))) == 0){
{ 
#line 30 "dijkstra_aspect.c"
__print_profiling(); } }else{
{ 
#line 34 "dijkstra_aspect.c"
__after_call(name); } }}
 


#line 38 "dijkstra_aspect.c"
 inline void __utac_acc__dijkstra_aspect__1(   struct JoinPoint *  this  )  {
 


#line 39 "dijkstra_aspect.c"
join_on_entry((this->funcName)); }

 


#line 42 "dijkstra_aspect.c"
 inline void __utac_acc__dijkstra_aspect__2(   struct JoinPoint *  this  )  {
 


#line 43 "dijkstra_aspect.c"
join_on_exit((this->funcName)); }

 



