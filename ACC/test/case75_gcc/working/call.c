
# 1 "../.././gcc/cp/call.c" 
# 1 "/home/czhang/Desktop/gcc-4.1.1/host-i686-pc-linux-gnu/gcc//" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "../.././gcc/cp/call.c" 
# 27 "../.././gcc/cp/call.c" 
# 1 "./config.h" 1
# 1 "./auto-host.h" 1
# 4 "./config.h" 2
# 1 "../.././gcc/../include/ansidecl.h" 1
# 6 "./config.h" 2
# 28 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/system.h" 1
# 28 "../.././gcc/system.h" 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
#line 105 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stdarg.h"
typedef  __gnuc_va_list va_list; 
# 105 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stdarg.h" 3 4
# 29 "../.././gcc/system.h" 2
# 39 "../.././gcc/system.h" 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 214 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h"
typedef unsigned int size_t; 
# 214 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 3 4
# 326 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 3 4
typedef long int wchar_t; 
# 40 "../.././gcc/system.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 314 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 315 "/usr/include/features.h" 2 3 4
# 337 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4
# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 338 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 34 "/usr/include/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 35 "/usr/include/bits/types.h"
typedef unsigned short int __u_short; 
#line 36 "/usr/include/bits/types.h"
typedef unsigned int __u_int; 
#line 37 "/usr/include/bits/types.h"
typedef unsigned long int __u_long; 
#line 40 "/usr/include/bits/types.h"
typedef signed char __int8_t; 
#line 41 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t; 
#line 42 "/usr/include/bits/types.h"
typedef signed short int __int16_t; 
#line 43 "/usr/include/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 44 "/usr/include/bits/types.h"
typedef signed int __int32_t; 
#line 45 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t; 
#line 50 "/usr/include/bits/types.h"
 __extension__ typedef signed long long int __int64_t; 
#line 51 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long long int __uint64_t; 
#line 59 "/usr/include/bits/types.h"
 __extension__ typedef long long int __quad_t; 
#line 60 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long long int __u_quad_t; 
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 137 "/usr/include/bits/types.h" 2 3 4
 __extension__ typedef  __u_quad_t __dev_t; 
#line 138 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __uid_t; 
#line 139 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __gid_t; 
#line 140 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __ino_t; 
#line 141 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __ino64_t; 
#line 142 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __mode_t; 
#line 143 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __nlink_t; 
#line 144 "/usr/include/bits/types.h"
 __extension__ typedef long int __off_t; 
#line 145 "/usr/include/bits/types.h"
 __extension__ typedef  __quad_t __off64_t; 
#line 146 "/usr/include/bits/types.h"
 __extension__ typedef int __pid_t; 
#line 147 "/usr/include/bits/types.h"
 __extension__ typedef struct {int __val[2]; }__fsid_t; 
#line 148 "/usr/include/bits/types.h"
 __extension__ typedef long int __clock_t; 
#line 149 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __rlim_t; 
#line 150 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __rlim64_t; 
#line 151 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __id_t; 
#line 152 "/usr/include/bits/types.h"
 __extension__ typedef long int __time_t; 
#line 153 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __useconds_t; 
#line 154 "/usr/include/bits/types.h"
 __extension__ typedef long int __suseconds_t; 
#line 156 "/usr/include/bits/types.h"
 __extension__ typedef int __daddr_t; 
#line 157 "/usr/include/bits/types.h"
 __extension__ typedef long int __swblk_t; 
#line 158 "/usr/include/bits/types.h"
 __extension__ typedef int __key_t; 
#line 161 "/usr/include/bits/types.h"
 __extension__ typedef int __clockid_t; 
#line 164 "/usr/include/bits/types.h"
 __extension__ typedef void *__timer_t; 
#line 167 "/usr/include/bits/types.h"
 __extension__ typedef long int __blksize_t; 
#line 172 "/usr/include/bits/types.h"
 __extension__ typedef long int __blkcnt_t; 
#line 173 "/usr/include/bits/types.h"
 __extension__ typedef  __quad_t __blkcnt64_t; 
#line 176 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __fsblkcnt_t; 
#line 177 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __fsblkcnt64_t; 
#line 180 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __fsfilcnt_t; 
#line 181 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __fsfilcnt64_t; 
#line 183 "/usr/include/bits/types.h"
 __extension__ typedef int __ssize_t; 
#line 187 "/usr/include/bits/types.h"
typedef  __off64_t __loff_t; 
#line 188 "/usr/include/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 189 "/usr/include/bits/types.h"
typedef char *__caddr_t; 
#line 192 "/usr/include/bits/types.h"
 __extension__ typedef int __intptr_t; 
#line 195 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __socklen_t; 
#line 46 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE; 
# 37 "/usr/include/stdio.h" 2 3 4
# 62 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE; 
# 72 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 355 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 3 4
typedef unsigned int wint_t; 
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 84 "/usr/include/wchar.h" 3 4
typedef struct {int __count; union { wint_t __wch; char __wchb[4]; }__value; }__mbstate_t; 
#line 30 "/usr/include/_G_config.h"
typedef struct { __off_t __pos;  __mbstate_t __state; }_G_fpos_t; 
#line 35 "/usr/include/_G_config.h"
typedef struct { __off64_t __pos;  __mbstate_t __state; }_G_fpos64_t; 
# 25 "/usr/include/_G_config.h" 2 3 4
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 51 "/usr/include/gconv.h" 2 3 4
enum {__GCONV_OK=0,__GCONV_NOCONV,__GCONV_NODB,__GCONV_NOMEM,__GCONV_EMPTY_INPUT,__GCONV_FULL_OUTPUT,__GCONV_ILLEGAL_INPUT,__GCONV_INCOMPLETE_INPUT,__GCONV_ILLEGAL_DESCRIPTOR,__GCONV_INTERNAL_ERROR}; 
#line 59 "/usr/include/gconv.h"
enum {__GCONV_IS_LAST=0x0001,__GCONV_IGNORE_ERRORS=0x0002}; 
#line 63 "/usr/include/gconv.h"
struct __gconv_step ; 
#line 64 "/usr/include/gconv.h"
struct __gconv_step_data ; 
#line 65 "/usr/include/gconv.h"
struct __gconv_loaded_object ; 
#line 66 "/usr/include/gconv.h"
struct __gconv_trans_data ; 
#line 72 "/usr/include/gconv.h"
typedef int (*__gconv_fct)(struct __gconv_step *, struct __gconv_step_data *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *, int , int ); 
#line 75 "/usr/include/gconv.h"
typedef  wint_t (*__gconv_btowc_fct)(struct __gconv_step *, unsigned char ); 
#line 78 "/usr/include/gconv.h"
typedef int (*__gconv_init_fct)(struct __gconv_step *); 
#line 79 "/usr/include/gconv.h"
typedef void (*__gconv_end_fct)(struct __gconv_step *); 
#line 88 "/usr/include/gconv.h"
typedef int (*__gconv_trans_fct)(struct __gconv_step *, struct __gconv_step_data *, void *, __const unsigned char *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *); 
#line 93 "/usr/include/gconv.h"
typedef int (*__gconv_trans_context_fct)(void *, __const unsigned char *, __const unsigned char *, unsigned char *, unsigned char *); 
#line 97 "/usr/include/gconv.h"
typedef int (*__gconv_trans_query_fct)(__const char *, __const char ***,  size_t *); 
#line 100 "/usr/include/gconv.h"
typedef int (*__gconv_trans_init_fct)(void **, const char *); 
#line 101 "/usr/include/gconv.h"
typedef void (*__gconv_trans_end_fct)(void *); 
#line 111 "/usr/include/gconv.h"
struct __gconv_trans_data { __gconv_trans_fct __trans_fct;  __gconv_trans_context_fct __trans_context_fct;  __gconv_trans_end_fct __trans_end_fct; void *__data; struct __gconv_trans_data *__next; }; 
#line 141 "/usr/include/gconv.h"
struct __gconv_step {struct __gconv_loaded_object *__shlib_handle; __const char *__modname; int __counter; char *__from_name; char *__to_name;  __gconv_fct __fct;  __gconv_btowc_fct __btowc_fct;  __gconv_init_fct __init_fct;  __gconv_end_fct __end_fct; int __min_needed_from; int __max_needed_from; int __min_needed_to; int __max_needed_to; int __stateful; void *__data; }; 
#line 168 "/usr/include/gconv.h"
struct __gconv_step_data {unsigned char *__outbuf; unsigned char *__outbufend; int __flags; int __invocation_counter; int __internal_use;  __mbstate_t *__statep;  __mbstate_t __state; struct __gconv_trans_data *__trans; }; 
#line 177 "/usr/include/gconv.h"
typedef struct __gconv_info { size_t __nsteps; struct __gconv_step *__steps;  __extension__ struct __gconv_step_data __data[]; }*__gconv_t; 
#line 53 "/usr/include/_G_config.h"
typedef union {struct __gconv_info __cd; struct {struct __gconv_info __cd; struct __gconv_step_data __data; }__combined; }_G_iconv_t; 
#line 55 "/usr/include/_G_config.h"
typedef int _G_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 56 "/usr/include/_G_config.h"
typedef int _G_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 57 "/usr/include/_G_config.h"
typedef unsigned int _G_uint16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 58 "/usr/include/_G_config.h"
typedef unsigned int _G_uint32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
# 45 "/usr/include/_G_config.h" 2 3 4
# 33 "/usr/include/libio.h" 2 3 4
# 166 "/usr/include/libio.h" 3 4
struct _IO_jump_t ; 
#line 166 "/usr/include/libio.h"
struct _IO_FILE ; 
#line 176 "/usr/include/libio.h"
typedef void _IO_lock_t; 
# 176 "/usr/include/libio.h" 3 4
# 199 "/usr/include/libio.h" 3 4
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; }; 
#line 208 "/usr/include/libio.h"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
# 267 "/usr/include/libio.h" 3 4
# 328 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; int _mode; char _unused2[15 * sizeof (int ) - 2 * sizeof (void *)]; }; 
#line 331 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 334 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 336 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 337 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 338 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 354 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 363 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, __const char *__buf,  size_t __n); 
#line 371 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 374 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
#line 379 "/usr/include/libio.h"
typedef  __io_read_fn cookie_read_function_t; 
#line 380 "/usr/include/libio.h"
typedef  __io_write_fn cookie_write_function_t; 
#line 381 "/usr/include/libio.h"
typedef  __io_seek_fn cookie_seek_function_t; 
#line 382 "/usr/include/libio.h"
typedef  __io_close_fn cookie_close_function_t; 
#line 391 "/usr/include/libio.h"
typedef struct { __io_read_fn *read;  __io_write_fn *write;  __io_seek_fn *seek;  __io_close_fn *close; }_IO_cookie_io_functions_t; 
#line 392 "/usr/include/libio.h"
typedef  _IO_cookie_io_functions_t cookie_io_functions_t; 
#line 394 "/usr/include/libio.h"
struct _IO_cookie_file ; 
#line 398 "/usr/include/libio.h"
extern void _IO_cookie_init(struct _IO_cookie_file *__cfile, int __read_write, void *__cookie,  _IO_cookie_io_functions_t __fns); 
#line 406 "/usr/include/libio.h"
extern int __underflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 407 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 408 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ) __attribute__  (( __nothrow__ )) ; 
#line 409 "/usr/include/libio.h"
extern  wint_t __wunderflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 410 "/usr/include/libio.h"
extern  wint_t __wuflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 411 "/usr/include/libio.h"
extern  wint_t __woverflow( _IO_FILE *,  wint_t ) __attribute__  (( __nothrow__ )) ; 
# 354 "/usr/include/libio.h" 3 4
# 444 "/usr/include/libio.h" 3 4
extern int _IO_getc( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 445 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 446 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 447 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 449 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 455 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 456 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 457 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 475 "/usr/include/libio.h"
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ) __attribute__  (( __nothrow__ )) ; 
#line 477 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ) __attribute__  (( __nothrow__ )) ; 
#line 478 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ) __attribute__  (( __nothrow__ )) ; 
#line 479 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 481 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ) __attribute__  (( __nothrow__ )) ; 
#line 482 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ) __attribute__  (( __nothrow__ )) ; 
#line 484 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
# 474 "/usr/include/libio.h" 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 88 "/usr/include/stdio.h" 3 4
typedef  _G_fpos_t fpos_t; 
#line 94 "/usr/include/stdio.h"
typedef  _G_fpos64_t fpos64_t; 
# 138 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4
extern struct _IO_FILE *stdin; 
#line 143 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout; 
#line 144 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr; 
#line 154 "/usr/include/stdio.h"
extern int remove(__const char *__filename) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/stdio.h"
extern int rename(__const char *__old, __const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 166 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 176 "/usr/include/stdio.h"
extern  FILE *tmpfile64(void ); 
#line 180 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 186 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 
# 176 "/usr/include/stdio.h" 3 4
# 199 "/usr/include/stdio.h" 3 4
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 208 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 213 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 223 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 223 "/usr/include/stdio.h" 3 4
# 233 "/usr/include/stdio.h" 3 4
extern int fcloseall(void ); 
#line 244 "/usr/include/stdio.h"
extern  FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 251 "/usr/include/stdio.h"
extern  FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 267 "/usr/include/stdio.h"
extern  FILE *fopen64(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 270 "/usr/include/stdio.h"
extern  FILE *freopen64(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 275 "/usr/include/stdio.h"
extern  FILE *fdopen(int __fd, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 283 "/usr/include/stdio.h"
extern  FILE *fopencookie(void *__restrict __magic_cookie, __const char *__restrict __modes,  _IO_cookie_io_functions_t __io_funcs) __attribute__  (( __nothrow__ )) ; 
#line 286 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__restrict __bufloc,  size_t *__restrict __sizeloc) __attribute__  (( __nothrow__ )) ; 
#line 299 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 304 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 311 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 314 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 324 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 329 "/usr/include/stdio.h"
extern int printf(__const char *__restrict __format, ...); 
#line 332 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 339 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg); 
#line 344 "/usr/include/stdio.h"
extern int vprintf(__const char *__restrict __format,  __gnuc_va_list __arg); 
#line 347 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 355 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 359 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 368 "/usr/include/stdio.h"
extern int vasprintf(char **__restrict __ptr, __const char *__restrict __f,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 371 "/usr/include/stdio.h"
extern int __asprintf(char **__restrict __ptr, __const char *__restrict __fmt, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 374 "/usr/include/stdio.h"
extern int asprintf(char **__restrict __ptr, __const char *__restrict __fmt, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 384 "/usr/include/stdio.h"
extern int vdprintf(int __fd, __const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 386 "/usr/include/stdio.h"
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 396 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 401 "/usr/include/stdio.h"
extern int scanf(__const char *__restrict __format, ...); 
#line 404 "/usr/include/stdio.h"
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 415 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 422 "/usr/include/stdio.h"
extern int vscanf(__const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 427 "/usr/include/stdio.h"
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 437 "/usr/include/stdio.h"
extern int fgetc( FILE *__stream); 
#line 438 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 444 "/usr/include/stdio.h"
extern int getchar(void ); 
# 264 "/usr/include/stdio.h" 3 4
# 456 "/usr/include/stdio.h" 3 4
extern int getc_unlocked( FILE *__stream); 
#line 457 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
#line 467 "/usr/include/stdio.h"
extern int fgetc_unlocked( FILE *__stream); 
#line 479 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 480 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 486 "/usr/include/stdio.h"
extern int putchar(int __c); 
# 467 "/usr/include/stdio.h" 3 4
# 500 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 508 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 509 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 516 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 519 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 529 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
#line 536 "/usr/include/stdio.h"
extern char *gets(char *__s); 
#line 547 "/usr/include/stdio.h"
extern char *fgets_unlocked(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 546 "/usr/include/stdio.h" 3 4
# 564 "/usr/include/stdio.h" 3 4
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 567 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 577 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 586 "/usr/include/stdio.h"
extern int fputs(__const char *__restrict __s,  FILE *__restrict __stream); 
#line 592 "/usr/include/stdio.h"
extern int puts(__const char *__s); 
#line 599 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 607 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 613 "/usr/include/stdio.h"
extern  size_t fwrite(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
#line 624 "/usr/include/stdio.h"
extern int fputs_unlocked(__const char *__restrict __s,  FILE *__restrict __stream); 
# 623 "/usr/include/stdio.h" 3 4
# 635 "/usr/include/stdio.h" 3 4
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 637 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 646 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 651 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 656 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
#line 670 "/usr/include/stdio.h"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 675 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
# 670 "/usr/include/stdio.h" 3 4
# 695 "/usr/include/stdio.h" 3 4
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 700 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, __const  fpos_t *__pos); 
#line 715 "/usr/include/stdio.h"
extern int fseeko64( FILE *__stream,  __off64_t __off, int __whence); 
#line 716 "/usr/include/stdio.h"
extern  __off64_t ftello64( FILE *__stream); 
#line 717 "/usr/include/stdio.h"
extern int fgetpos64( FILE *__restrict __stream,  fpos64_t *__restrict __pos); 
#line 718 "/usr/include/stdio.h"
extern int fsetpos64( FILE *__stream, __const  fpos64_t *__pos); 
#line 723 "/usr/include/stdio.h"
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 725 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 727 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 732 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 733 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 734 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 743 "/usr/include/stdio.h"
extern void perror(__const char *__s); 
# 712 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 28 "/usr/include/bits/sys_errlist.h"
extern __const char *__const sys_errlist[]; 
#line 31 "/usr/include/bits/sys_errlist.h"
extern int _sys_nerr; 
#line 32 "/usr/include/bits/sys_errlist.h"
extern __const char *__const _sys_errlist[]; 
#line 755 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 760 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 751 "/usr/include/stdio.h" 2 3 4
# 770 "/usr/include/stdio.h" 3 4
extern  FILE *popen(__const char *__command, __const char *__modes); 
#line 776 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 782 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 788 "/usr/include/stdio.h"
extern char *cuserid(char *__s); 
#line 793 "/usr/include/stdio.h"
struct obstack ; 
#line 798 "/usr/include/stdio.h"
extern int obstack_printf(struct obstack *__restrict __obstack, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 802 "/usr/include/stdio.h"
extern int obstack_vprintf(struct obstack *__restrict __obstack, __const char *__restrict __format,  __gnuc_va_list __args) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 810 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 814 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 817 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 831 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 35 "/usr/include/bits/stdio.h" 3 4
extern __inline int vprintf(__const char *__restrict __fmt,  __gnuc_va_list __arg)  {

#line 36 "/usr/include/bits/stdio.h"
return vfprintf(stdout, __fmt, __arg); }
 
#line 42 "/usr/include/bits/stdio.h"
extern __inline int getchar(void )  {

#line 43 "/usr/include/bits/stdio.h"
return _IO_getc(stdin); }
 
#line 51 "/usr/include/bits/stdio.h"
extern __inline int getc_unlocked( FILE *__fp)  {

#line 52 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++)))); }
 
#line 58 "/usr/include/bits/stdio.h"
extern __inline int getchar_unlocked(void )  {

#line 59 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++)))); }
 
#line 67 "/usr/include/bits/stdio.h"
extern __inline int putchar(int __c)  {

#line 68 "/usr/include/bits/stdio.h"
return _IO_putc(__c, stdout); }
 
#line 76 "/usr/include/bits/stdio.h"
extern __inline int fputc_unlocked(int __c,  FILE *__stream)  {

#line 77 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 86 "/usr/include/bits/stdio.h"
extern __inline int putc_unlocked(int __c,  FILE *__stream)  {

#line 87 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 93 "/usr/include/bits/stdio.h"
extern __inline int putchar_unlocked(int __c)  {

#line 94 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c))))); }
 
#line 102 "/usr/include/bits/stdio.h"
extern __inline  __ssize_t getline(char **__lineptr,  size_t *__n,  FILE *__stream)  {

#line 103 "/usr/include/bits/stdio.h"
return __getdelim(__lineptr, __n, '\n', __stream); }
 
#line 112 "/usr/include/bits/stdio.h"
extern __inline int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  {

#line 113 "/usr/include/bits/stdio.h"
return ((((__stream)->_flags) & 0x10) != 0); }
 
#line 119 "/usr/include/bits/stdio.h"
extern __inline int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  {

#line 120 "/usr/include/bits/stdio.h"
return ((((__stream)->_flags) & 0x20) != 0); }
 
# 832 "/usr/include/stdio.h" 2 3 4
# 43 "../.././gcc/system.h" 2
# 180 "../.././gcc/system.h" 
# 1 "../.././gcc/../include/safe-ctype.h" 1
# 86 "../.././gcc/../include/safe-ctype.h" 
enum {_sch_isblank=0x0001,_sch_iscntrl=0x0002,_sch_isdigit=0x0004,_sch_islower=0x0008,_sch_isprint=0x0010,_sch_ispunct=0x0020,_sch_isspace=0x0040,_sch_isupper=0x0080,_sch_isxdigit=0x0100,_sch_isidst=0x0200,_sch_isvsp=0x0400,_sch_isnvsp=0x0800,_sch_isalpha=_sch_isupper | _sch_islower,_sch_isalnum=_sch_isalpha | _sch_isdigit,_sch_isidnum=_sch_isidst | _sch_isdigit,_sch_isgraph=_sch_isalnum | _sch_ispunct,_sch_iscppsp=_sch_isvsp | _sch_isnvsp,_sch_isbasic=_sch_isprint | _sch_iscppsp}; 
#line 89 "../.././gcc/../include/safe-ctype.h"
extern const unsigned short _sch_istable[256]; 
#line 114 "../.././gcc/../include/safe-ctype.h"
extern const unsigned char _sch_toupper[256]; 
#line 115 "../.././gcc/../include/safe-ctype.h"
extern const unsigned char _sch_tolower[256]; 
# 114 "../.././gcc/../include/safe-ctype.h" 
# 181 "../.././gcc/system.h" 2
# 1 "/usr/include/sys/types.h" 1 3 4
# 35 "/usr/include/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 36 "/usr/include/sys/types.h"
typedef  __u_short u_short; 
#line 37 "/usr/include/sys/types.h"
typedef  __u_int u_int; 
#line 38 "/usr/include/sys/types.h"
typedef  __u_long u_long; 
#line 39 "/usr/include/sys/types.h"
typedef  __quad_t quad_t; 
#line 40 "/usr/include/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 41 "/usr/include/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 46 "/usr/include/sys/types.h"
typedef  __loff_t loff_t; 
#line 50 "/usr/include/sys/types.h"
typedef  __ino_t ino_t; 
#line 57 "/usr/include/sys/types.h"
typedef  __ino64_t ino64_t; 
#line 62 "/usr/include/sys/types.h"
typedef  __dev_t dev_t; 
#line 67 "/usr/include/sys/types.h"
typedef  __gid_t gid_t; 
#line 72 "/usr/include/sys/types.h"
typedef  __mode_t mode_t; 
#line 77 "/usr/include/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 82 "/usr/include/sys/types.h"
typedef  __uid_t uid_t; 
#line 88 "/usr/include/sys/types.h"
typedef  __off_t off_t; 
#line 95 "/usr/include/sys/types.h"
typedef  __off64_t off64_t; 
#line 100 "/usr/include/sys/types.h"
typedef  __pid_t pid_t; 
#line 105 "/usr/include/sys/types.h"
typedef  __id_t id_t; 
#line 110 "/usr/include/sys/types.h"
typedef  __ssize_t ssize_t; 
#line 116 "/usr/include/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 117 "/usr/include/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 123 "/usr/include/sys/types.h"
typedef  __key_t key_t; 
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 60 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 76 "/usr/include/time.h"
typedef  __time_t time_t; 
# 74 "/usr/include/time.h" 3 4
# 92 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 104 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 104 "/usr/include/time.h" 3 4
# 137 "/usr/include/sys/types.h" 2 3 4
typedef  __useconds_t useconds_t; 
#line 141 "/usr/include/sys/types.h"
typedef  __suseconds_t suseconds_t; 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 151 "/usr/include/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 152 "/usr/include/sys/types.h"
typedef unsigned short int ushort; 
#line 153 "/usr/include/sys/types.h"
typedef unsigned int uint; 
#line 191 "/usr/include/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 192 "/usr/include/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 193 "/usr/include/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 194 "/usr/include/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 197 "/usr/include/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 198 "/usr/include/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 199 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 200 "/usr/include/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 202 "/usr/include/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 191 "/usr/include/sys/types.h" 3 4
# 213 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 214 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 31 "/usr/include/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; }__sigset_t; 
#line 38 "/usr/include/sys/select.h"
typedef  __sigset_t sigset_t; 
# 35 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 122 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec; long int tv_nsec; }; 
# 45 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 73 "/usr/include/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; }; 
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask; 
#line 78 "/usr/include/sys/select.h"
typedef struct { __fd_mask fds_bits[1024 / (8 * sizeof ( __fd_mask ))]; }fd_set; 
#line 85 "/usr/include/sys/select.h"
typedef  __fd_mask fd_mask; 
# 67 "/usr/include/sys/select.h" 3 4
# 99 "/usr/include/sys/select.h" 3 4
# 112 "/usr/include/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 125 "/usr/include/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 121 "/usr/include/sys/select.h" 3 4
# 217 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 31 "/usr/include/sys/sysmacros.h" 3 4
 __extension__ extern __inline unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 34 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 38 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ )) ; 
#line 43 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_major(unsigned long long int __dev)  {

#line 44 "/usr/include/sys/sysmacros.h"
return ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff)); }
 
#line 49 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  {

#line 50 "/usr/include/sys/sysmacros.h"
return (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff)); }
 
#line 55 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  {

#line 58 "/usr/include/sys/sysmacros.h"
return ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32)); }
 
#line 224 "/usr/include/sys/types.h"
typedef  __blksize_t blksize_t; 
#line 231 "/usr/include/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 235 "/usr/include/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 239 "/usr/include/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 220 "/usr/include/sys/types.h" 2 3 4
# 258 "/usr/include/sys/types.h" 3 4
typedef  __blkcnt64_t blkcnt64_t; 
#line 259 "/usr/include/sys/types.h"
typedef  __fsblkcnt64_t fsblkcnt64_t; 
#line 260 "/usr/include/sys/types.h"
typedef  __fsfilcnt64_t fsfilcnt64_t; 
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 43 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[36]; long int __align; }pthread_attr_t; 
#line 63 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __count; int __owner; int __kind; unsigned int __nusers; int __spins; }__data; char __size[24]; long int __align; }pthread_mutex_t; 
#line 69 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_mutexattr_t; 
#line 89 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; }__data; char __size[48];  __extension__ long long int __align; }pthread_cond_t; 
#line 95 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_condattr_t; 
#line 99 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 103 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 126 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; unsigned int __flags; int __writer; }__data; char __size[32]; long int __align; }pthread_rwlock_t; 
#line 132 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; }pthread_rwlockattr_t; 
#line 138 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 147 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[20]; long int __align; }pthread_barrier_t; 
#line 153 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; }pthread_barrierattr_t; 
# 267 "/usr/include/sys/types.h" 2 3 4
# 183 "../.././gcc/system.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4
# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 38 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name,*program_invocation_short_name; 
#line 69 "/usr/include/errno.h"
typedef int error_t; 
# 69 "/usr/include/errno.h" 3 4
# 185 "../.././gcc/system.h" 2
# 195 "../.././gcc/system.h" 
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 40 "/usr/include/string.h" 2 3 4
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 44 "/usr/include/string.h"
extern void *memmove(void *__dest, __const void *__src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 53 "/usr/include/string.h"
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 59 "/usr/include/string.h"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 63 "/usr/include/string.h"
extern int memcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 67 "/usr/include/string.h"
extern void *memchr(__const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 74 "/usr/include/string.h"
extern void *rawmemchr(__const void *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 78 "/usr/include/string.h"
extern void *memrchr(__const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 85 "/usr/include/string.h"
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 89 "/usr/include/string.h"
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 93 "/usr/include/string.h"
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 96 "/usr/include/string.h"
extern char *strncat(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 100 "/usr/include/string.h"
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 103 "/usr/include/string.h"
extern int strncmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 107 "/usr/include/string.h"
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 111 "/usr/include/string.h"
extern  size_t strxfrm(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 1 "/usr/include/xlocale.h" 1 3 4
# 40 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct {struct locale_data *__locales[13]; const unsigned short int *__ctype_b; const int *__ctype_tolower; const int *__ctype_toupper; const char *__names[13]; }*__locale_t; 
#line 122 "/usr/include/string.h"
extern int strcoll_l(__const char *__s1, __const char *__s2,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 125 "/usr/include/string.h"
extern  size_t strxfrm_l(char *__dest, __const char *__src,  size_t __n,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 131 "/usr/include/string.h"
extern char *strdup(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 139 "/usr/include/string.h"
extern char *strndup(__const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 119 "/usr/include/string.h" 2 3 4
# 168 "/usr/include/string.h" 3 4
extern char *strchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 171 "/usr/include/string.h"
extern char *strrchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 178 "/usr/include/string.h"
extern char *strchrnul(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/string.h"
extern  size_t strcspn(__const char *__s, __const char *__reject) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 189 "/usr/include/string.h"
extern  size_t strspn(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 192 "/usr/include/string.h"
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 195 "/usr/include/string.h"
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 200 "/usr/include/string.h"
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 208 "/usr/include/string.h"
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 212 "/usr/include/string.h"
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 218 "/usr/include/string.h"
extern char *strcasestr(__const char *__haystack, __const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 227 "/usr/include/string.h"
extern void *memmem(__const void *__haystack,  size_t __haystacklen, __const void *__needle,  size_t __needlelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 233 "/usr/include/string.h"
extern void *__mempcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 236 "/usr/include/string.h"
extern void *mempcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 243 "/usr/include/string.h"
extern  size_t strlen(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 250 "/usr/include/string.h"
extern  size_t strnlen(__const char *__string,  size_t __maxlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 256 "/usr/include/string.h"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/string.h"
extern char *strerror_r(int __errnum, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 288 "/usr/include/string.h"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/string.h"
extern void bcopy(__const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 296 "/usr/include/string.h"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 300 "/usr/include/string.h"
extern int bcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 304 "/usr/include/string.h"
extern char *index(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 308 "/usr/include/string.h"
extern char *rindex(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 312 "/usr/include/string.h"
extern int ffs(int __i) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 317 "/usr/include/string.h"
extern int ffsl(long int __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 320 "/usr/include/string.h"
 __extension__ extern int ffsll(long long int __ll) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 326 "/usr/include/string.h"
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 330 "/usr/include/string.h"
extern int strncasecmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 338 "/usr/include/string.h"
extern int strcasecmp_l(__const char *__s1, __const char *__s2,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 342 "/usr/include/string.h"
extern int strncasecmp_l(__const char *__s1, __const char *__s2,  size_t __n,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 4 )  )) ; 
#line 350 "/usr/include/string.h"
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 356 "/usr/include/string.h"
extern int strverscmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 359 "/usr/include/string.h"
extern char *strsignal(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 363 "/usr/include/string.h"
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 365 "/usr/include/string.h"
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 371 "/usr/include/string.h"
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 374 "/usr/include/string.h"
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 377 "/usr/include/string.h"
extern char *strfry(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 380 "/usr/include/string.h"
extern void *memfrob(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 387 "/usr/include/string.h"
extern char *basename(__const char *__filename) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 281 "/usr/include/string.h" 3 4
# 414 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 415 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/bits/string2.h" 1 3 4
# 418 "/usr/include/string.h" 2 3 4
# 426 "/usr/include/string.h" 3 4
# 196 "../.././gcc/system.h" 2
# 1 "/usr/include/strings.h" 1 3 4
# 197 "../.././gcc/system.h" 2
# 208 "../.././gcc/system.h" 
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 98 "/usr/include/bits/waitstatus.h" 3 4
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; }__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; }__wait_stopped; }; 
# 44 "/usr/include/stdlib.h" 2 3 4
# 72 "/usr/include/stdlib.h" 3 4
typedef union {union wait *__uptr; int *__iptr; }__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 102 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; }div_t; 
#line 110 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; }ldiv_t; 
#line 122 "/usr/include/stdlib.h"
 __extension__ typedef struct {long long int quot; long long int rem; }lldiv_t; 
# 96 "/usr/include/stdlib.h" 3 4
# 140 "/usr/include/stdlib.h" 3 4
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 
#line 146 "/usr/include/stdlib.h"
extern double atof(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 149 "/usr/include/stdlib.h"
extern int atoi(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 152 "/usr/include/stdlib.h"
extern long int atol(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 159 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 167 "/usr/include/stdlib.h"
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 174 "/usr/include/stdlib.h"
extern float strtof(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 178 "/usr/include/stdlib.h"
extern long double strtold(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 186 "/usr/include/stdlib.h"
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 190 "/usr/include/stdlib.h"
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 198 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 203 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 212 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 217 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 242 "/usr/include/stdlib.h"
extern long int strtol_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 247 "/usr/include/stdlib.h"
extern unsigned long int strtoul_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 253 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 259 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 263 "/usr/include/stdlib.h"
extern double strtod_l(__const char *__restrict __nptr, char **__restrict __endptr,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 267 "/usr/include/stdlib.h"
extern float strtof_l(__const char *__restrict __nptr, char **__restrict __endptr,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 272 "/usr/include/stdlib.h"
extern long double strtold_l(__const char *__restrict __nptr, char **__restrict __endptr,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 281 "/usr/include/stdlib.h"
extern double __strtod_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 284 "/usr/include/stdlib.h"
extern float __strtof_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 288 "/usr/include/stdlib.h"
extern long double __strtold_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/stdlib.h"
extern long int __strtol_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 300 "/usr/include/stdlib.h"
extern unsigned long int __strtoul_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 309 "/usr/include/stdlib.h"
 __extension__ extern long long int __strtoll_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 318 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int __strtoull_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 329 "/usr/include/stdlib.h"
extern __inline double  __attribute__  (( __nothrow__ )) strtod(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 330 "/usr/include/stdlib.h"
return __strtod_internal(__nptr, __endptr, 0); }
 
#line 335 "/usr/include/stdlib.h"
extern __inline long int  __attribute__  (( __nothrow__ )) strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 336 "/usr/include/stdlib.h"
return __strtol_internal(__nptr, __endptr, __base, 0); }
 
#line 341 "/usr/include/stdlib.h"
extern __inline unsigned long int  __attribute__  (( __nothrow__ )) strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 342 "/usr/include/stdlib.h"
return __strtoul_internal(__nptr, __endptr, __base, 0); }
 
#line 350 "/usr/include/stdlib.h"
extern __inline float  __attribute__  (( __nothrow__ )) strtof(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 351 "/usr/include/stdlib.h"
return __strtof_internal(__nptr, __endptr, 0); }
 
#line 355 "/usr/include/stdlib.h"
extern __inline long double  __attribute__  (( __nothrow__ )) strtold(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 356 "/usr/include/stdlib.h"
return __strtold_internal(__nptr, __endptr, 0); }
 
#line 365 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 366 "/usr/include/stdlib.h"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 371 "/usr/include/stdlib.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 372 "/usr/include/stdlib.h"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 381 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 382 "/usr/include/stdlib.h"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 387 "/usr/include/stdlib.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 388 "/usr/include/stdlib.h"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 396 "/usr/include/stdlib.h"
extern __inline double  __attribute__  (( __nothrow__ )) atof(__const char *__nptr)  {

#line 397 "/usr/include/stdlib.h"
return strtod(__nptr, ((char **)(((void *)0)))); }
 
#line 401 "/usr/include/stdlib.h"
extern __inline int  __attribute__  (( __nothrow__ )) atoi(__const char *__nptr)  {

#line 402 "/usr/include/stdlib.h"
return ((int )strtol(__nptr, ((char **)(((void *)0))), 10)); }
 
#line 406 "/usr/include/stdlib.h"
extern __inline long int  __attribute__  (( __nothrow__ )) atol(__const char *__nptr)  {

#line 407 "/usr/include/stdlib.h"
return strtol(__nptr, ((char **)(((void *)0))), 10); }
 
#line 415 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) atoll(__const char *__nptr)  {

#line 416 "/usr/include/stdlib.h"
return strtoll(__nptr, ((char **)(((void *)0))), 10); }
 
# 240 "/usr/include/stdlib.h" 3 4
# 427 "/usr/include/stdlib.h" 3 4
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 431 "/usr/include/stdlib.h"
extern long int a64l(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 443 "/usr/include/stdlib.h"
extern long int random(void ) __attribute__  (( __nothrow__ )) ; 
#line 446 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 453 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 457 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 474 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; }; 
#line 477 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 480 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 485 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 489 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 496 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ )) ; 
#line 498 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 503 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 
#line 511 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 512 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 515 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 517 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 520 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 522 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 525 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 
#line 527 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 528 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 541 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init; unsigned long long int __a; }; 
#line 545 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 548 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 553 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 557 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 562 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 566 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 570 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 573 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 577 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 587 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 590 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 599 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 601 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 606 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
# 443 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 33 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 615 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 621 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 626 "/usr/include/stdlib.h"
extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 630 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 637 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 644 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 651 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 658 "/usr/include/stdlib.h"
extern char *getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 664 "/usr/include/stdlib.h"
extern char *__secure_getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 670 "/usr/include/stdlib.h"
extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 677 "/usr/include/stdlib.h"
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 680 "/usr/include/stdlib.h"
extern int unsetenv(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 687 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 
# 611 "/usr/include/stdlib.h" 2 3 4
# 696 "/usr/include/stdlib.h" 3 4
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 707 "/usr/include/stdlib.h"
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 707 "/usr/include/stdlib.h" 3 4
# 717 "/usr/include/stdlib.h" 3 4
extern int mkstemp64(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 727 "/usr/include/stdlib.h"
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 736 "/usr/include/stdlib.h"
extern int system(__const char *__command); 
#line 745 "/usr/include/stdlib.h"
extern char *canonicalize_file_name(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 727 "/usr/include/stdlib.h" 3 4
# 756 "/usr/include/stdlib.h" 3 4
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 763 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(__const void *, __const void *); 
#line 766 "/usr/include/stdlib.h"
typedef  __compar_fn_t comparison_fn_t; 
#line 775 "/usr/include/stdlib.h"
extern void *bsearch(__const void *__key, __const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 780 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 784 "/usr/include/stdlib.h"
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 785 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 790 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 799 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 801 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 808 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 821 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 827 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 833 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 840 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 843 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 845 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 852 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 855 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 860 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 864 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 872 "/usr/include/stdlib.h"
extern int mblen(__const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 876 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 879 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 
#line 884 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 888 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, __const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 897 "/usr/include/stdlib.h"
extern int rpmatch(__const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 820 "/usr/include/stdlib.h" 3 4
# 911 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *__const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 917 "/usr/include/stdlib.h"
extern void setkey(__const char *__key) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 925 "/usr/include/stdlib.h"
extern int posix_openpt(int __oflag); 
#line 933 "/usr/include/stdlib.h"
extern int grantpt(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 937 "/usr/include/stdlib.h"
extern int unlockpt(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 942 "/usr/include/stdlib.h"
extern char *ptsname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 950 "/usr/include/stdlib.h"
extern int ptsname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 953 "/usr/include/stdlib.h"
extern int getpt(void ); 
#line 961 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 209 "../.././gcc/system.h" 2
# 231 "../.././gcc/system.h" 
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
# 171 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 172 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/bits/environments.h" 1 3 4
# 176 "/usr/include/unistd.h" 2 3 4
# 195 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 196 "/usr/include/unistd.h" 2 3 4
# 236 "/usr/include/unistd.h" 3 4
typedef  __intptr_t intptr_t; 
#line 243 "/usr/include/unistd.h"
typedef  __socklen_t socklen_t; 
#line 256 "/usr/include/unistd.h"
extern int access(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 262 "/usr/include/unistd.h"
extern int euidaccess(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 256 "/usr/include/unistd.h" 3 4
# 287 "/usr/include/unistd.h" 3 4
extern  __off_t lseek(int __fd,  __off_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 299 "/usr/include/unistd.h"
extern  __off64_t lseek64(int __fd,  __off64_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 306 "/usr/include/unistd.h"
extern int close(int __fd); 
#line 313 "/usr/include/unistd.h"
extern  ssize_t read(int __fd, void *__buf,  size_t __nbytes); 
#line 319 "/usr/include/unistd.h"
extern  ssize_t write(int __fd, __const void *__buf,  size_t __n); 
# 298 "/usr/include/unistd.h" 3 4
# 330 "/usr/include/unistd.h" 3 4
extern  ssize_t pread(int __fd, void *__buf,  size_t __nbytes,  __off_t __offset); 
#line 338 "/usr/include/unistd.h"
extern  ssize_t pwrite(int __fd, __const void *__buf,  size_t __n,  __off_t __offset); 
#line 358 "/usr/include/unistd.h"
extern  ssize_t pread64(int __fd, void *__buf,  size_t __nbytes,  __off64_t __offset); 
#line 362 "/usr/include/unistd.h"
extern  ssize_t pwrite64(int __fd, __const void *__buf,  size_t __n,  __off64_t __offset); 
#line 370 "/usr/include/unistd.h"
extern int pipe(int __pipedes[2]) __attribute__  (( __nothrow__ )) ; 
# 357 "/usr/include/unistd.h" 3 4
# 379 "/usr/include/unistd.h" 3 4
extern unsigned int alarm(unsigned int __seconds) __attribute__  (( __nothrow__ )) ; 
#line 391 "/usr/include/unistd.h"
extern unsigned int sleep(unsigned int __seconds); 
#line 399 "/usr/include/unistd.h"
extern  __useconds_t ualarm( __useconds_t __value,  __useconds_t __interval) __attribute__  (( __nothrow__ )) ; 
#line 406 "/usr/include/unistd.h"
extern int usleep( __useconds_t __useconds); 
# 391 "/usr/include/unistd.h" 3 4
# 415 "/usr/include/unistd.h" 3 4
extern int pause(void ); 
#line 420 "/usr/include/unistd.h"
extern int chown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 424 "/usr/include/unistd.h"
extern int fchown(int __fd,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ )) ; 
#line 430 "/usr/include/unistd.h"
extern int lchown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 435 "/usr/include/unistd.h"
extern int chdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 439 "/usr/include/unistd.h"
extern int fchdir(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 449 "/usr/include/unistd.h"
extern char *getcwd(char *__buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 455 "/usr/include/unistd.h"
extern char *get_current_dir_name(void ) __attribute__  (( __nothrow__ )) ; 
#line 463 "/usr/include/unistd.h"
extern char *getwd(char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ )) ; 
#line 468 "/usr/include/unistd.h"
extern int dup(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 471 "/usr/include/unistd.h"
extern int dup2(int __fd, int __fd2) __attribute__  (( __nothrow__ )) ; 
#line 474 "/usr/include/unistd.h"
extern char **__environ; 
#line 476 "/usr/include/unistd.h"
extern char **environ; 
#line 483 "/usr/include/unistd.h"
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 489 "/usr/include/unistd.h"
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__  (( __nothrow__ )) ; 
#line 495 "/usr/include/unistd.h"
extern int execv(__const char *__path, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 500 "/usr/include/unistd.h"
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 505 "/usr/include/unistd.h"
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 510 "/usr/include/unistd.h"
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 516 "/usr/include/unistd.h"
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 521 "/usr/include/unistd.h"
extern int nice(int __inc) __attribute__  (( __nothrow__ )) ; 
#line 526 "/usr/include/unistd.h"
extern void _exit(int __status) __attribute__  (( __noreturn__ )) ; 
# 449 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/confname.h" 1 3 4
# 70 "/usr/include/bits/confname.h" 3 4
enum {_PC_LINK_MAX,_PC_MAX_CANON,_PC_MAX_INPUT,_PC_NAME_MAX,_PC_PATH_MAX,_PC_PIPE_BUF,_PC_CHOWN_RESTRICTED,_PC_NO_TRUNC,_PC_VDISABLE,_PC_SYNC_IO,_PC_ASYNC_IO,_PC_PRIO_IO,_PC_SOCK_MAXBUF,_PC_FILESIZEBITS,_PC_REC_INCR_XFER_SIZE,_PC_REC_MAX_XFER_SIZE,_PC_REC_MIN_XFER_SIZE,_PC_REC_XFER_ALIGN,_PC_ALLOC_SIZE_MIN,_PC_SYMLINK_MAX,_PC_2_SYMLINKS}; 
#line 503 "/usr/include/bits/confname.h"
enum {_SC_ARG_MAX,_SC_CHILD_MAX,_SC_CLK_TCK,_SC_NGROUPS_MAX,_SC_OPEN_MAX,_SC_STREAM_MAX,_SC_TZNAME_MAX,_SC_JOB_CONTROL,_SC_SAVED_IDS,_SC_REALTIME_SIGNALS,_SC_PRIORITY_SCHEDULING,_SC_TIMERS,_SC_ASYNCHRONOUS_IO,_SC_PRIORITIZED_IO,_SC_SYNCHRONIZED_IO,_SC_FSYNC,_SC_MAPPED_FILES,_SC_MEMLOCK,_SC_MEMLOCK_RANGE,_SC_MEMORY_PROTECTION,_SC_MESSAGE_PASSING,_SC_SEMAPHORES,_SC_SHARED_MEMORY_OBJECTS,_SC_AIO_LISTIO_MAX,_SC_AIO_MAX,_SC_AIO_PRIO_DELTA_MAX,_SC_DELAYTIMER_MAX,_SC_MQ_OPEN_MAX,_SC_MQ_PRIO_MAX,_SC_VERSION,_SC_PAGESIZE,_SC_RTSIG_MAX,_SC_SEM_NSEMS_MAX,_SC_SEM_VALUE_MAX,_SC_SIGQUEUE_MAX,_SC_TIMER_MAX,_SC_BC_BASE_MAX,_SC_BC_DIM_MAX,_SC_BC_SCALE_MAX,_SC_BC_STRING_MAX,_SC_COLL_WEIGHTS_MAX,_SC_EQUIV_CLASS_MAX,_SC_EXPR_NEST_MAX,_SC_LINE_MAX,_SC_RE_DUP_MAX,_SC_CHARCLASS_NAME_MAX,_SC_2_VERSION,_SC_2_C_BIND,_SC_2_C_DEV,_SC_2_FORT_DEV,_SC_2_FORT_RUN,_SC_2_SW_DEV,_SC_2_LOCALEDEF,_SC_PII,_SC_PII_XTI,_SC_PII_SOCKET,_SC_PII_INTERNET,_SC_PII_OSI,_SC_POLL,_SC_SELECT,_SC_UIO_MAXIOV,_SC_IOV_MAX=_SC_UIO_MAXIOV,_SC_PII_INTERNET_STREAM,_SC_PII_INTERNET_DGRAM,_SC_PII_OSI_COTS,_SC_PII_OSI_CLTS,_SC_PII_OSI_M,_SC_T_IOV_MAX,_SC_THREADS,_SC_THREAD_SAFE_FUNCTIONS,_SC_GETGR_R_SIZE_MAX,_SC_GETPW_R_SIZE_MAX,_SC_LOGIN_NAME_MAX,_SC_TTY_NAME_MAX,_SC_THREAD_DESTRUCTOR_ITERATIONS,_SC_THREAD_KEYS_MAX,_SC_THREAD_STACK_MIN,_SC_THREAD_THREADS_MAX,_SC_THREAD_ATTR_STACKADDR,_SC_THREAD_ATTR_STACKSIZE,_SC_THREAD_PRIORITY_SCHEDULING,_SC_THREAD_PRIO_INHERIT,_SC_THREAD_PRIO_PROTECT,_SC_THREAD_PROCESS_SHARED,_SC_NPROCESSORS_CONF,_SC_NPROCESSORS_ONLN,_SC_PHYS_PAGES,_SC_AVPHYS_PAGES,_SC_ATEXIT_MAX,_SC_PASS_MAX,_SC_XOPEN_VERSION,_SC_XOPEN_XCU_VERSION,_SC_XOPEN_UNIX,_SC_XOPEN_CRYPT,_SC_XOPEN_ENH_I18N,_SC_XOPEN_SHM,_SC_2_CHAR_TERM,_SC_2_C_VERSION,_SC_2_UPE,_SC_XOPEN_XPG2,_SC_XOPEN_XPG3,_SC_XOPEN_XPG4,_SC_CHAR_BIT,_SC_CHAR_MAX,_SC_CHAR_MIN,_SC_INT_MAX,_SC_INT_MIN,_SC_LONG_BIT,_SC_WORD_BIT,_SC_MB_LEN_MAX,_SC_NZERO,_SC_SSIZE_MAX,_SC_SCHAR_MAX,_SC_SCHAR_MIN,_SC_SHRT_MAX,_SC_SHRT_MIN,_SC_UCHAR_MAX,_SC_UINT_MAX,_SC_ULONG_MAX,_SC_USHRT_MAX,_SC_NL_ARGMAX,_SC_NL_LANGMAX,_SC_NL_MSGMAX,_SC_NL_NMAX,_SC_NL_SETMAX,_SC_NL_TEXTMAX,_SC_XBS5_ILP32_OFF32,_SC_XBS5_ILP32_OFFBIG,_SC_XBS5_LP64_OFF64,_SC_XBS5_LPBIG_OFFBIG,_SC_XOPEN_LEGACY,_SC_XOPEN_REALTIME,_SC_XOPEN_REALTIME_THREADS,_SC_ADVISORY_INFO,_SC_BARRIERS,_SC_BASE,_SC_C_LANG_SUPPORT,_SC_C_LANG_SUPPORT_R,_SC_CLOCK_SELECTION,_SC_CPUTIME,_SC_THREAD_CPUTIME,_SC_DEVICE_IO,_SC_DEVICE_SPECIFIC,_SC_DEVICE_SPECIFIC_R,_SC_FD_MGMT,_SC_FIFO,_SC_PIPE,_SC_FILE_ATTRIBUTES,_SC_FILE_LOCKING,_SC_FILE_SYSTEM,_SC_MONOTONIC_CLOCK,_SC_MULTI_PROCESS,_SC_SINGLE_PROCESS,_SC_NETWORKING,_SC_READER_WRITER_LOCKS,_SC_SPIN_LOCKS,_SC_REGEXP,_SC_REGEX_VERSION,_SC_SHELL,_SC_SIGNALS,_SC_SPAWN,_SC_SPORADIC_SERVER,_SC_THREAD_SPORADIC_SERVER,_SC_SYSTEM_DATABASE,_SC_SYSTEM_DATABASE_R,_SC_TIMEOUTS,_SC_TYPED_MEMORY_OBJECTS,_SC_USER_GROUPS,_SC_USER_GROUPS_R,_SC_2_PBS,_SC_2_PBS_ACCOUNTING,_SC_2_PBS_LOCATE,_SC_2_PBS_MESSAGE,_SC_2_PBS_TRACK,_SC_SYMLOOP_MAX,_SC_STREAMS,_SC_2_PBS_CHECKPOINT,_SC_V6_ILP32_OFF32,_SC_V6_ILP32_OFFBIG,_SC_V6_LP64_OFF64,_SC_V6_LPBIG_OFFBIG,_SC_HOST_NAME_MAX,_SC_TRACE,_SC_TRACE_EVENT_FILTER,_SC_TRACE_INHERIT,_SC_TRACE_LOG,_SC_LEVEL1_ICACHE_SIZE,_SC_LEVEL1_ICACHE_ASSOC,_SC_LEVEL1_ICACHE_LINESIZE,_SC_LEVEL1_DCACHE_SIZE,_SC_LEVEL1_DCACHE_ASSOC,_SC_LEVEL1_DCACHE_LINESIZE,_SC_LEVEL2_CACHE_SIZE,_SC_LEVEL2_CACHE_ASSOC,_SC_LEVEL2_CACHE_LINESIZE,_SC_LEVEL3_CACHE_SIZE,_SC_LEVEL3_CACHE_ASSOC,_SC_LEVEL3_CACHE_LINESIZE,_SC_LEVEL4_CACHE_SIZE,_SC_LEVEL4_CACHE_ASSOC,_SC_LEVEL4_CACHE_LINESIZE,_SC_IPV6=_SC_LEVEL1_ICACHE_SIZE + 50,_SC_RAW_SOCKETS}; 
#line 601 "/usr/include/bits/confname.h"
enum {_CS_PATH,_CS_V6_WIDTH_RESTRICTED_ENVS,_CS_GNU_LIBC_VERSION,_CS_GNU_LIBPTHREAD_VERSION,_CS_LFS_CFLAGS=1000,_CS_LFS_LDFLAGS,_CS_LFS_LIBS,_CS_LFS_LINTFLAGS,_CS_LFS64_CFLAGS,_CS_LFS64_LDFLAGS,_CS_LFS64_LIBS,_CS_LFS64_LINTFLAGS,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,_CS_XBS5_ILP32_OFF32_LDFLAGS,_CS_XBS5_ILP32_OFF32_LIBS,_CS_XBS5_ILP32_OFF32_LINTFLAGS,_CS_XBS5_ILP32_OFFBIG_CFLAGS,_CS_XBS5_ILP32_OFFBIG_LDFLAGS,_CS_XBS5_ILP32_OFFBIG_LIBS,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,_CS_XBS5_LP64_OFF64_CFLAGS,_CS_XBS5_LP64_OFF64_LDFLAGS,_CS_XBS5_LP64_OFF64_LIBS,_CS_XBS5_LP64_OFF64_LINTFLAGS,_CS_XBS5_LPBIG_OFFBIG_CFLAGS,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,_CS_XBS5_LPBIG_OFFBIG_LIBS,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,_CS_POSIX_V6_ILP32_OFF32_CFLAGS,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,_CS_POSIX_V6_ILP32_OFF32_LIBS,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LIBS,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,_CS_POSIX_V6_LP64_OFF64_CFLAGS,_CS_POSIX_V6_LP64_OFF64_LDFLAGS,_CS_POSIX_V6_LP64_OFF64_LIBS,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS}; 
#line 536 "/usr/include/unistd.h"
extern long int pathconf(__const char *__path, int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 539 "/usr/include/unistd.h"
extern long int fpathconf(int __fd, int __name) __attribute__  (( __nothrow__ )) ; 
#line 542 "/usr/include/unistd.h"
extern long int sysconf(int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 546 "/usr/include/unistd.h"
extern  size_t confstr(int __name, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 551 "/usr/include/unistd.h"
extern  __pid_t getpid(void ) __attribute__  (( __nothrow__ )) ; 
#line 554 "/usr/include/unistd.h"
extern  __pid_t getppid(void ) __attribute__  (( __nothrow__ )) ; 
#line 559 "/usr/include/unistd.h"
extern  __pid_t getpgrp(void ) __attribute__  (( __nothrow__ )) ; 
# 533 "/usr/include/unistd.h" 2 3 4
# 569 "/usr/include/unistd.h" 3 4
extern  __pid_t __getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 571 "/usr/include/unistd.h"
extern  __pid_t getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 578 "/usr/include/unistd.h"
extern int setpgid( __pid_t __pid,  __pid_t __pgid) __attribute__  (( __nothrow__ )) ; 
#line 595 "/usr/include/unistd.h"
extern int setpgrp(void ) __attribute__  (( __nothrow__ )) ; 
# 595 "/usr/include/unistd.h" 3 4
# 612 "/usr/include/unistd.h" 3 4
extern  __pid_t setsid(void ) __attribute__  (( __nothrow__ )) ; 
#line 616 "/usr/include/unistd.h"
extern  __pid_t getsid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 620 "/usr/include/unistd.h"
extern  __uid_t getuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 623 "/usr/include/unistd.h"
extern  __uid_t geteuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 626 "/usr/include/unistd.h"
extern  __gid_t getgid(void ) __attribute__  (( __nothrow__ )) ; 
#line 629 "/usr/include/unistd.h"
extern  __gid_t getegid(void ) __attribute__  (( __nothrow__ )) ; 
#line 634 "/usr/include/unistd.h"
extern int getgroups(int __size,  __gid_t __list[]) __attribute__  (( __nothrow__ )) ; 
#line 638 "/usr/include/unistd.h"
extern int group_member( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 645 "/usr/include/unistd.h"
extern int setuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 650 "/usr/include/unistd.h"
extern int setreuid( __uid_t __ruid,  __uid_t __euid) __attribute__  (( __nothrow__ )) ; 
#line 655 "/usr/include/unistd.h"
extern int seteuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 662 "/usr/include/unistd.h"
extern int setgid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 667 "/usr/include/unistd.h"
extern int setregid( __gid_t __rgid,  __gid_t __egid) __attribute__  (( __nothrow__ )) ; 
#line 672 "/usr/include/unistd.h"
extern int setegid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 679 "/usr/include/unistd.h"
extern int getresuid( __uid_t *__euid,  __uid_t *__ruid,  __uid_t *__suid) __attribute__  (( __nothrow__ )) ; 
#line 684 "/usr/include/unistd.h"
extern int getresgid( __gid_t *__egid,  __gid_t *__rgid,  __gid_t *__sgid) __attribute__  (( __nothrow__ )) ; 
#line 689 "/usr/include/unistd.h"
extern int setresuid( __uid_t __euid,  __uid_t __ruid,  __uid_t __suid) __attribute__  (( __nothrow__ )) ; 
#line 694 "/usr/include/unistd.h"
extern int setresgid( __gid_t __egid,  __gid_t __rgid,  __gid_t __sgid) __attribute__  (( __nothrow__ )) ; 
#line 701 "/usr/include/unistd.h"
extern  __pid_t fork(void ) __attribute__  (( __nothrow__ )) ; 
#line 708 "/usr/include/unistd.h"
extern  __pid_t vfork(void ) __attribute__  (( __nothrow__ )) ; 
#line 714 "/usr/include/unistd.h"
extern char *ttyname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 719 "/usr/include/unistd.h"
extern int ttyname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 723 "/usr/include/unistd.h"
extern int isatty(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 729 "/usr/include/unistd.h"
extern int ttyslot(void ) __attribute__  (( __nothrow__ )) ; 
#line 735 "/usr/include/unistd.h"
extern int link(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 740 "/usr/include/unistd.h"
extern int symlink(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 746 "/usr/include/unistd.h"
extern int readlink(__const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 750 "/usr/include/unistd.h"
extern int unlink(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 753 "/usr/include/unistd.h"
extern int rmdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 757 "/usr/include/unistd.h"
extern  __pid_t tcgetpgrp(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 760 "/usr/include/unistd.h"
extern int tcsetpgrp(int __fd,  __pid_t __pgrp_id) __attribute__  (( __nothrow__ )) ; 
#line 767 "/usr/include/unistd.h"
extern char *getlogin(void ); 
#line 775 "/usr/include/unistd.h"
extern int getlogin_r(char *__name,  size_t __name_len) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 780 "/usr/include/unistd.h"
extern int setlogin(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 789 "/usr/include/unistd.h" 3 4
# 1 "../.././gcc/../include/getopt.h" 1 3 4
# 36 "../.././gcc/../include/getopt.h" 3 4
extern char *optarg; 
#line 50 "../.././gcc/../include/getopt.h"
extern int optind; 
#line 55 "../.././gcc/../include/getopt.h"
extern int opterr; 
#line 59 "../.././gcc/../include/getopt.h"
extern int optopt; 
# 50 "../.././gcc/../include/getopt.h" 3 4
# 94 "../.././gcc/../include/getopt.h" 3 4
struct option {const char *name; int has_arg; int *flag; int val; }; 
#line 113 "../.././gcc/../include/getopt.h"
extern int getopt(int argc, char *const *argv, const char *shortopts); 
#line 122 "../.././gcc/../include/getopt.h"
extern int getopt_long(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind); 
#line 125 "../.././gcc/../include/getopt.h"
extern int getopt_long_only(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind); 
#line 131 "../.././gcc/../include/getopt.h"
extern int _getopt_internal(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind, int long_only); 
# 113 "../.././gcc/../include/getopt.h" 3 4
# 797 "/usr/include/unistd.h" 2 3 4
extern int gethostname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 805 "/usr/include/unistd.h"
extern int sethostname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 809 "/usr/include/unistd.h"
extern int sethostid(long int __id) __attribute__  (( __nothrow__ )) ; 
#line 816 "/usr/include/unistd.h"
extern int getdomainname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 818 "/usr/include/unistd.h"
extern int setdomainname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 824 "/usr/include/unistd.h"
extern int vhangup(void ) __attribute__  (( __nothrow__ )) ; 
#line 827 "/usr/include/unistd.h"
extern int revoke(__const char *__file) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 837 "/usr/include/unistd.h"
extern int profil(unsigned short int *__sample_buffer,  size_t __size,  size_t __offset, unsigned int __scale) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 843 "/usr/include/unistd.h"
extern int acct(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 847 "/usr/include/unistd.h"
extern char *getusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 848 "/usr/include/unistd.h"
extern void endusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 849 "/usr/include/unistd.h"
extern void setusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 855 "/usr/include/unistd.h"
extern int daemon(int __nochdir, int __noclose) __attribute__  (( __nothrow__ )) ; 
#line 862 "/usr/include/unistd.h"
extern int chroot(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 866 "/usr/include/unistd.h"
extern char *getpass(__const char *__prompt) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 875 "/usr/include/unistd.h"
extern int fsync(int __fd); 
#line 882 "/usr/include/unistd.h"
extern long int gethostid(void ); 
#line 885 "/usr/include/unistd.h"
extern void sync(void ) __attribute__  (( __nothrow__ )) ; 
#line 890 "/usr/include/unistd.h"
extern int getpagesize(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 895 "/usr/include/unistd.h"
extern int getdtablesize(void ) __attribute__  (( __nothrow__ )) ; 
#line 901 "/usr/include/unistd.h"
extern int truncate(__const char *__file,  __off_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 875 "/usr/include/unistd.h" 3 4
# 913 "/usr/include/unistd.h" 3 4
extern int truncate64(__const char *__file,  __off64_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 922 "/usr/include/unistd.h"
extern int ftruncate(int __fd,  __off_t __length) __attribute__  (( __nothrow__ )) ; 
# 922 "/usr/include/unistd.h" 3 4
# 932 "/usr/include/unistd.h" 3 4
extern int ftruncate64(int __fd,  __off64_t __length) __attribute__  (( __nothrow__ )) ; 
#line 942 "/usr/include/unistd.h"
extern int brk(void *__addr) __attribute__  (( __nothrow__ )) ; 
#line 948 "/usr/include/unistd.h"
extern void *sbrk( intptr_t __delta) __attribute__  (( __nothrow__ )) ; 
# 942 "/usr/include/unistd.h" 3 4
# 963 "/usr/include/unistd.h" 3 4
extern long int syscall(long int __sysno, ...) __attribute__  (( __nothrow__ )) ; 
#line 986 "/usr/include/unistd.h"
extern int lockf(int __fd, int __cmd,  __off_t __len); 
# 986 "/usr/include/unistd.h" 3 4
# 996 "/usr/include/unistd.h" 3 4
extern int lockf64(int __fd, int __cmd,  __off64_t __len); 
#line 1017 "/usr/include/unistd.h"
extern int fdatasync(int __fildes) __attribute__  (( __nothrow__ )) ; 
#line 1026 "/usr/include/unistd.h"
extern char *crypt(__const char *__key, __const char *__salt) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1030 "/usr/include/unistd.h"
extern void encrypt(char *__block, int __edflag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1038 "/usr/include/unistd.h"
extern void swab(__const void *__restrict __from, void *__restrict __to,  ssize_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1046 "/usr/include/unistd.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 1017 "/usr/include/unistd.h" 3 4
# 1055 "/usr/include/unistd.h" 3 4
# 232 "../.././gcc/system.h" 2
# 1 "/usr/include/sys/param.h" 1 3 4
# 22 "/usr/include/sys/param.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 144 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 36 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 37 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 145 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 149 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 153 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/limits.h" 2 3 4
# 23 "/usr/include/sys/param.h" 2 3 4
# 1 "/usr/include/linux/param.h" 1 3 4
# 1 "/usr/include/asm/param.h" 1 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 25 "/usr/include/sys/param.h" 2 3 4
# 236 "../.././gcc/system.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/limits.h" 1 3 4
# 242 "../.././gcc/system.h" 2
# 1 "../.././gcc/hwint.h" 1
# 246 "../.././gcc/system.h" 2
# 274 "../.././gcc/system.h" 
# 1 "/usr/include/sys/time.h" 1 3 4
# 26 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 29 "/usr/include/sys/time.h" 2 3 4
# 38 "/usr/include/sys/time.h" 3 4
# 60 "/usr/include/sys/time.h" 3 4
struct timezone {int tz_minuteswest; int tz_dsttime; }; 
#line 62 "/usr/include/sys/time.h"
typedef struct timezone *__restrict __timezone_ptr_t; 
#line 73 "/usr/include/sys/time.h"
extern int gettimeofday(struct timeval *__restrict __tv,  __timezone_ptr_t __tz) __attribute__  (( __nothrow__ )) ; 
#line 79 "/usr/include/sys/time.h"
extern int settimeofday(__const struct timeval *__tv, __const struct timezone *__tz) __attribute__  (( __nothrow__ )) ; 
#line 86 "/usr/include/sys/time.h"
extern int adjtime(__const struct timeval *__delta, struct timeval *__olddelta) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/sys/time.h"
enum __itimer_which {ITIMER_REAL=0,ITIMER_VIRTUAL=1,ITIMER_PROF=2}; 
#line 113 "/usr/include/sys/time.h"
struct itimerval {struct timeval it_interval; struct timeval it_value; }; 
#line 118 "/usr/include/sys/time.h"
typedef enum __itimer_which __itimer_which_t; 
#line 126 "/usr/include/sys/time.h"
extern int getitimer( __itimer_which_t __which, struct itimerval *__value) __attribute__  (( __nothrow__ )) ; 
#line 133 "/usr/include/sys/time.h"
extern int setitimer( __itimer_which_t __which, __const struct itimerval *__restrict __new, struct itimerval *__restrict __old) __attribute__  (( __nothrow__ )) ; 
#line 139 "/usr/include/sys/time.h"
extern int utimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/sys/time.h"
extern int lutimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
#line 147 "/usr/include/sys/time.h"
extern int futimes(int __fd, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
# 72 "/usr/include/sys/time.h" 3 4
# 181 "/usr/include/sys/time.h" 3 4
# 275 "../.././gcc/system.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 150 "/usr/include/time.h" 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; __const char *tm_zone; }; 
#line 163 "/usr/include/time.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; }; 
#line 166 "/usr/include/time.h"
struct sigevent ; 
#line 181 "/usr/include/time.h"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ )) ; 
#line 184 "/usr/include/time.h"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 188 "/usr/include/time.h"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 191 "/usr/include/time.h"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 199 "/usr/include/time.h"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/time.h"
extern char *strptime(__const char *__restrict __s, __const char *__restrict __fmt, struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 218 "/usr/include/time.h"
extern  size_t strftime_l(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp,  __locale_t __loc) __attribute__  (( __nothrow__ )) ; 
#line 222 "/usr/include/time.h"
extern char *strptime_l(__const char *__restrict __s, __const char *__restrict __fmt, struct tm *__tp,  __locale_t __loc) __attribute__  (( __nothrow__ )) ; 
#line 229 "/usr/include/time.h"
extern struct tm *gmtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 233 "/usr/include/time.h"
extern struct tm *localtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/time.h"
extern struct tm *gmtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 245 "/usr/include/time.h"
extern struct tm *localtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/time.h"
extern char *asctime(__const struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 254 "/usr/include/time.h"
extern char *ctime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 263 "/usr/include/time.h"
extern char *asctime_r(__const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 267 "/usr/include/time.h"
extern char *ctime_r(__const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 272 "/usr/include/time.h"
extern char *__tzname[2]; 
#line 273 "/usr/include/time.h"
extern int __daylight; 
#line 274 "/usr/include/time.h"
extern long int __timezone; 
#line 279 "/usr/include/time.h"
extern char *tzname[2]; 
#line 283 "/usr/include/time.h"
extern void tzset(void ) __attribute__  (( __nothrow__ )) ; 
#line 287 "/usr/include/time.h"
extern int daylight; 
#line 288 "/usr/include/time.h"
extern long int timezone; 
#line 294 "/usr/include/time.h"
extern int stime(__const  time_t *__when) __attribute__  (( __nothrow__ )) ; 
# 178 "/usr/include/time.h" 3 4
# 309 "/usr/include/time.h" 3 4
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 312 "/usr/include/time.h"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 315 "/usr/include/time.h"
extern int dysize(int __year) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 325 "/usr/include/time.h"
extern int nanosleep(__const struct timespec *__requested_time, struct timespec *__remaining); 
#line 329 "/usr/include/time.h"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ )) ; 
#line 332 "/usr/include/time.h"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 336 "/usr/include/time.h"
extern int clock_settime( clockid_t __clock_id, __const struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 345 "/usr/include/time.h"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, __const struct timespec *__req, struct timespec *__rem); 
#line 348 "/usr/include/time.h"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ )) ; 
#line 355 "/usr/include/time.h"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ )) ; 
#line 358 "/usr/include/time.h"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 363 "/usr/include/time.h"
extern int timer_settime( timer_t __timerid, int __flags, __const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ )) ; 
#line 367 "/usr/include/time.h"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ )) ; 
#line 370 "/usr/include/time.h"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
# 324 "/usr/include/time.h" 3 4
# 386 "/usr/include/time.h" 3 4
extern int getdate_err; 
#line 395 "/usr/include/time.h"
extern struct tm *getdate(__const char *__string); 
# 395 "/usr/include/time.h" 3 4
# 410 "/usr/include/time.h" 3 4
extern int getdate_r(__const char *__restrict __string, struct tm *__restrict __resbufp); 
# 276 "../.././gcc/system.h" 2
# 287 "../.././gcc/system.h" 
# 1 "/usr/include/fcntl.h" 1 3 4
# 29 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 150 "/usr/include/bits/fcntl.h" 3 4
struct flock {short int l_type; short int l_whence;  __off_t l_start;  __off_t l_len;  __pid_t l_pid; }; 
#line 160 "/usr/include/bits/fcntl.h"
struct flock64 {short int l_type; short int l_whence;  __off64_t l_start;  __off64_t l_len;  __pid_t l_pid; }; 
#line 187 "/usr/include/bits/fcntl.h"
extern  ssize_t readahead(int __fd,  __off64_t __offset,  size_t __count) __attribute__  (( __nothrow__ )) ; 
# 183 "/usr/include/bits/fcntl.h" 3 4
# 34 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/sys/stat.h" 1 3 4
# 103 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 36 "/usr/include/bits/stat.h" 3 4
# 70 "/usr/include/bits/stat.h" 3 4
# 90 "/usr/include/bits/stat.h" 3 4
struct stat { __dev_t st_dev; unsigned short int __pad1;  __ino_t st_ino;  __mode_t st_mode;  __nlink_t st_nlink;  __uid_t st_uid;  __gid_t st_gid;  __dev_t st_rdev; unsigned short int __pad2;  __off_t st_size;  __blksize_t st_blksize;  __blkcnt_t st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim; unsigned long int __unused4; unsigned long int __unused5; }; 
#line 128 "/usr/include/bits/stat.h"
struct stat64 { __dev_t st_dev; unsigned int __pad1;  __ino_t __st_ino;  __mode_t st_mode;  __nlink_t st_nlink;  __uid_t st_uid;  __gid_t st_gid;  __dev_t st_rdev; unsigned int __pad2;  __off64_t st_size;  __blksize_t st_blksize;  __blkcnt64_t st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim;  __ino64_t st_ino; }; 
# 127 "/usr/include/bits/stat.h" 3 4
# 106 "/usr/include/sys/stat.h" 2 3 4
# 208 "/usr/include/sys/stat.h" 3 4
extern int stat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 212 "/usr/include/sys/stat.h"
extern int fstat(int __fd, struct stat *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 227 "/usr/include/sys/stat.h"
extern int stat64(__const char *__restrict __file, struct stat64 *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 228 "/usr/include/sys/stat.h"
extern int fstat64(int __fd, struct stat64 *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 236 "/usr/include/sys/stat.h"
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 226 "/usr/include/sys/stat.h" 3 4
# 250 "/usr/include/sys/stat.h" 3 4
extern int lstat64(__const char *__restrict __file, struct stat64 *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 257 "/usr/include/sys/stat.h"
extern int chmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 264 "/usr/include/sys/stat.h"
extern int lchmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 269 "/usr/include/sys/stat.h"
extern int fchmod(int __fd,  __mode_t __mode) __attribute__  (( __nothrow__ )) ; 
#line 275 "/usr/include/sys/stat.h"
extern  __mode_t umask( __mode_t __mask) __attribute__  (( __nothrow__ )) ; 
#line 280 "/usr/include/sys/stat.h"
extern  __mode_t getumask(void ) __attribute__  (( __nothrow__ )) ; 
#line 285 "/usr/include/sys/stat.h"
extern int mkdir(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 292 "/usr/include/sys/stat.h"
extern int mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 298 "/usr/include/sys/stat.h"
extern int mkfifo(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 325 "/usr/include/sys/stat.h"
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 327 "/usr/include/sys/stat.h"
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 329 "/usr/include/sys/stat.h"
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
# 324 "/usr/include/sys/stat.h" 3 4
# 351 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64(int __ver, int __fildes, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 353 "/usr/include/sys/stat.h"
extern int __xstat64(int __ver, __const char *__filename, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 355 "/usr/include/sys/stat.h"
extern int __lxstat64(int __ver, __const char *__filename, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 358 "/usr/include/sys/stat.h"
extern int __xmknod(int __ver, __const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 365 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) stat(__const char *__path, struct stat *__statbuf)  {

#line 366 "/usr/include/sys/stat.h"
return __xstat(3, __path, __statbuf); }
 
#line 372 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) lstat(__const char *__path, struct stat *__statbuf)  {

#line 373 "/usr/include/sys/stat.h"
return __lxstat(3, __path, __statbuf); }
 
#line 379 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstat(int __fd, struct stat *__statbuf)  {

#line 380 "/usr/include/sys/stat.h"
return __fxstat(3, __fd, __statbuf); }
 
#line 386 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev)  {

#line 387 "/usr/include/sys/stat.h"
return __xmknod(1, __path, __mode, (&__dev)); }
 
#line 396 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) stat64(__const char *__path, struct stat64 *__statbuf)  {

#line 397 "/usr/include/sys/stat.h"
return __xstat64(3, __path, __statbuf); }
 
#line 403 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) lstat64(__const char *__path, struct stat64 *__statbuf)  {

#line 404 "/usr/include/sys/stat.h"
return __lxstat64(3, __path, __statbuf); }
 
#line 410 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstat64(int __fd, struct stat64 *__statbuf)  {

#line 411 "/usr/include/sys/stat.h"
return __fxstat64(3, __fd, __statbuf); }
 
# 38 "/usr/include/fcntl.h" 2 3 4
# 63 "/usr/include/fcntl.h" 3 4
extern int fcntl(int __fd, int __cmd, ...); 
#line 72 "/usr/include/fcntl.h"
extern int open(__const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 72 "/usr/include/fcntl.h" 3 4
# 82 "/usr/include/fcntl.h" 3 4
extern int open64(__const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 91 "/usr/include/fcntl.h"
extern int creat(__const char *__file,  __mode_t __mode) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 91 "/usr/include/fcntl.h" 3 4
# 101 "/usr/include/fcntl.h" 3 4
extern int creat64(__const char *__file,  __mode_t __mode) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 138 "/usr/include/fcntl.h"
extern int posix_fadvise(int __fd,  __off_t __offset,  __off_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
# 137 "/usr/include/fcntl.h" 3 4
# 150 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64(int __fd,  __off64_t __offset,  __off64_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
#line 159 "/usr/include/fcntl.h"
extern int posix_fallocate(int __fd,  __off_t __offset,  __off_t __len); 
# 159 "/usr/include/fcntl.h" 3 4
# 170 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64(int __fd,  __off64_t __offset,  __off64_t __len); 
# 288 "../.././gcc/system.h" 2
# 325 "../.././gcc/system.h" 
# 1 "/usr/include/sys/wait.h" 1 3 4
# 28 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 103 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember(__const  __sigset_t *, int ); 
#line 104 "/usr/include/bits/sigset.h"
extern int __sigaddset( __sigset_t *, int ); 
#line 105 "/usr/include/bits/sigset.h"
extern int __sigdelset( __sigset_t *, int ); 
#line 117 "/usr/include/bits/sigset.h"
extern __inline int __sigismember(__const  __sigset_t *__set, int __sig)  {

#line 117 "/usr/include/bits/sigset.h"

#line 117 "/usr/include/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 117 "/usr/include/bits/sigset.h"

#line 117 "/usr/include/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 117 "/usr/include/bits/sigset.h"
return (((__set->__val)[__word] & __mask)?1:0); }
 
#line 118 "/usr/include/bits/sigset.h"
extern __inline int __sigaddset( __sigset_t *__set, int __sig)  {

#line 118 "/usr/include/bits/sigset.h"

#line 118 "/usr/include/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 118 "/usr/include/bits/sigset.h"

#line 118 "/usr/include/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 118 "/usr/include/bits/sigset.h"
return (((__set->__val)[__word] |= __mask) , 0); }
 
#line 119 "/usr/include/bits/sigset.h"
extern __inline int __sigdelset( __sigset_t *__set, int __sig)  {

#line 119 "/usr/include/bits/sigset.h"

#line 119 "/usr/include/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 119 "/usr/include/bits/sigset.h"

#line 119 "/usr/include/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 119 "/usr/include/bits/sigset.h"
return (((__set->__val)[__word] &= (~__mask)) , 0); }
 
# 117 "/usr/include/bits/sigset.h" 3 4
# 41 "/usr/include/signal.h" 2 3 4
typedef  __sig_atomic_t sig_atomic_t; 
# 58 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 59 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
typedef void (*__sighandler_t)(int ); 
#line 81 "/usr/include/signal.h"
extern  __sighandler_t __sysv_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 84 "/usr/include/signal.h"
extern  __sighandler_t sysv_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 93 "/usr/include/signal.h"
extern  __sighandler_t signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 110 "/usr/include/signal.h"
extern  __sighandler_t bsd_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 117 "/usr/include/signal.h"
extern int kill( __pid_t __pid, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 124 "/usr/include/signal.h"
extern int killpg( __pid_t __pgrp, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 129 "/usr/include/signal.h"
extern int raise(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 135 "/usr/include/signal.h"
extern  __sighandler_t ssignal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 136 "/usr/include/signal.h"
extern int gsignal(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/signal.h"
extern void psignal(int __sig, __const char *__s); 
# 104 "/usr/include/signal.h" 3 4
# 153 "/usr/include/signal.h" 3 4
extern int __sigpause(int __sig_or_mask, int __is_sig); 
#line 162 "/usr/include/signal.h"
extern int sigpause(int __sig) __asm__ ("__xpg_sigpause"); 
# 162 "/usr/include/signal.h" 3 4
# 181 "/usr/include/signal.h" 3 4
extern int sigblock(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 184 "/usr/include/signal.h"
extern int sigsetmask(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 187 "/usr/include/signal.h"
extern int siggetmask(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 196 "/usr/include/signal.h"
typedef  __sighandler_t sighandler_t; 
#line 201 "/usr/include/signal.h"
typedef  __sighandler_t sig_t; 
# 196 "/usr/include/signal.h" 3 4
# 212 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 37 "/usr/include/bits/siginfo.h" 2 3 4
typedef union sigval {int sival_int; void *sival_ptr; }sigval_t; 
#line 108 "/usr/include/bits/siginfo.h"
typedef struct siginfo {int si_signo; int si_errno; int si_code; union {int _pad[((128 / sizeof (int )) - 3)]; struct { __pid_t si_pid;  __uid_t si_uid; }_kill; struct {int si_tid; int si_overrun;  sigval_t si_sigval; }_timer; struct { __pid_t si_pid;  __uid_t si_uid;  sigval_t si_sigval; }_rt; struct { __pid_t si_pid;  __uid_t si_uid; int si_status;  __clock_t si_utime;  __clock_t si_stime; }_sigchld; struct {void *si_addr; }_sigfault; struct {long int si_band; int si_fd; }_sigpoll; }_sifields; }siginfo_t; 
# 51 "/usr/include/bits/siginfo.h" 3 4
# 149 "/usr/include/bits/siginfo.h" 3 4
enum {SI_ASYNCNL=(-60),SI_TKILL=(-6),SI_SIGIO,SI_ASYNCIO,SI_MESGQ,SI_TIMER,SI_QUEUE,SI_USER,SI_KERNEL=0x80}; 
#line 171 "/usr/include/bits/siginfo.h"
enum {ILL_ILLOPC=1,ILL_ILLOPN,ILL_ILLADR,ILL_ILLTRP,ILL_PRVOPC,ILL_PRVREG,ILL_COPROC,ILL_BADSTK}; 
#line 192 "/usr/include/bits/siginfo.h"
enum {FPE_INTDIV=1,FPE_INTOVF,FPE_FLTDIV,FPE_FLTOVF,FPE_FLTUND,FPE_FLTRES,FPE_FLTINV,FPE_FLTSUB}; 
#line 201 "/usr/include/bits/siginfo.h"
enum {SEGV_MAPERR=1,SEGV_ACCERR}; 
#line 212 "/usr/include/bits/siginfo.h"
enum {BUS_ADRALN=1,BUS_ADRERR,BUS_OBJERR}; 
#line 221 "/usr/include/bits/siginfo.h"
enum {TRAP_BRKPT=1,TRAP_TRACE}; 
#line 238 "/usr/include/bits/siginfo.h"
enum {CLD_EXITED=1,CLD_KILLED,CLD_DUMPED,CLD_TRAPPED,CLD_STOPPED,CLD_CONTINUED}; 
#line 255 "/usr/include/bits/siginfo.h"
enum {POLL_IN=1,POLL_OUT,POLL_MSG,POLL_ERR,POLL_PRI,POLL_HUP}; 
#line 293 "/usr/include/bits/siginfo.h"
typedef struct sigevent { sigval_t sigev_value; int sigev_signo; int sigev_notify; union {int _pad[((64 / sizeof (int )) - 3)];  __pid_t _tid; struct {void (*_function)( sigval_t ); void *_attribute; }_sigev_thread; }_sigev_un; }sigevent_t; 
#line 311 "/usr/include/bits/siginfo.h"
enum {SIGEV_SIGNAL=0,SIGEV_NONE,SIGEV_THREAD,SIGEV_THREAD_ID=4}; 
# 273 "/usr/include/bits/siginfo.h" 3 4
# 216 "/usr/include/signal.h" 2 3 4
extern int sigemptyset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 219 "/usr/include/signal.h"
extern int sigfillset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 222 "/usr/include/signal.h"
extern int sigaddset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 225 "/usr/include/signal.h"
extern int sigdelset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 229 "/usr/include/signal.h"
extern int sigismember(__const  sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 233 "/usr/include/signal.h"
extern int sigisemptyset(__const  sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 237 "/usr/include/signal.h"
extern int sigandset( sigset_t *__set, __const  sigset_t *__left, __const  sigset_t *__right) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 241 "/usr/include/signal.h"
extern int sigorset( sigset_t *__set, __const  sigset_t *__left, __const  sigset_t *__right) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 51 "/usr/include/bits/sigaction.h" 3 4
struct sigaction {union { __sighandler_t sa_handler; void (*sa_sigaction)(int ,  siginfo_t *, void *); }__sigaction_handler;  __sigset_t sa_mask; int sa_flags; void (*sa_restorer)(void ); }; 
#line 250 "/usr/include/signal.h"
extern int sigprocmask(int __how, __const  sigset_t *__restrict __set,  sigset_t *__restrict __oset) __attribute__  (( __nothrow__ )) ; 
#line 257 "/usr/include/signal.h"
extern int sigsuspend(__const  sigset_t *__set) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 261 "/usr/include/signal.h"
extern int sigaction(int __sig, __const struct sigaction *__restrict __act, struct sigaction *__restrict __oact) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/signal.h"
extern int sigpending( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 272 "/usr/include/signal.h"
extern int sigwait(__const  sigset_t *__restrict __set, int *__restrict __sig) __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 280 "/usr/include/signal.h"
extern int sigwaitinfo(__const  sigset_t *__restrict __set,  siginfo_t *__restrict __info) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 290 "/usr/include/signal.h"
extern int sigtimedwait(__const  sigset_t *__restrict __set,  siginfo_t *__restrict __info, __const struct timespec *__restrict __timeout) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 295 "/usr/include/signal.h"
extern int sigqueue( __pid_t __pid, int __sig, __const union sigval __val) __attribute__  (( __nothrow__ )) ; 
# 247 "/usr/include/signal.h" 2 3 4
# 304 "/usr/include/signal.h" 3 4
extern __const char *__const _sys_siglist[65]; 
#line 305 "/usr/include/signal.h"
extern __const char *__const sys_siglist[65]; 
#line 315 "/usr/include/signal.h"
struct sigvec { __sighandler_t sv_handler; int sv_mask; int sv_flags; }; 
#line 329 "/usr/include/signal.h"
extern int sigvec(int __sig, __const struct sigvec *__vec, struct sigvec *__ovec) __attribute__  (( __nothrow__ )) ; 
# 328 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/bits/sigcontext.h" 3 4
# 1 "/usr/include/asm/sigcontext.h" 1 3 4
# 21 "/usr/include/asm/sigcontext.h" 3 4
struct _fpreg {unsigned short significand[4]; unsigned short exponent; }; 
#line 27 "/usr/include/asm/sigcontext.h"
struct _fpxreg {unsigned short significand[4]; unsigned short exponent; unsigned short padding[3]; }; 
#line 31 "/usr/include/asm/sigcontext.h"
struct _xmmreg {unsigned long element[4]; }; 
#line 53 "/usr/include/asm/sigcontext.h"
struct _fpstate {unsigned long cw; unsigned long sw; unsigned long tag; unsigned long ipoff; unsigned long cssel; unsigned long dataoff; unsigned long datasel; struct _fpreg _st[8]; unsigned short status; unsigned short magic; unsigned long _fxsr_env[6]; unsigned long mxcsr; unsigned long reserved; struct _fpxreg _fxsr_st[8]; struct _xmmreg _xmm[8]; unsigned long padding[56]; }; 
#line 80 "/usr/include/asm/sigcontext.h"
struct sigcontext {unsigned short gs,__gsh; unsigned short fs,__fsh; unsigned short es,__esh; unsigned short ds,__dsh; unsigned long edi; unsigned long esi; unsigned long ebp; unsigned long esp; unsigned long ebx; unsigned long edx; unsigned long ecx; unsigned long eax; unsigned long trapno; unsigned long err; unsigned long eip; unsigned short cs,__csh; unsigned long eflags; unsigned long esp_at_signal; unsigned short ss,__ssh; struct _fpstate *fpstate; unsigned long oldmask; unsigned long cr2; }; 
# 29 "/usr/include/bits/sigcontext.h" 2 3 4
# 336 "/usr/include/signal.h" 2 3 4
extern int sigreturn(struct sigcontext *__scp) __attribute__  (( __nothrow__ )) ; 
#line 346 "/usr/include/signal.h"
extern int siginterrupt(int __sig, int __interrupt) __attribute__  (( __nothrow__ )) ; 
# 346 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 30 "/usr/include/bits/sigstack.h" 3 4
struct sigstack {void *ss_sp; int ss_onstack; }; 
#line 40 "/usr/include/bits/sigstack.h"
enum {SS_ONSTACK=1,SS_DISABLE}; 
#line 55 "/usr/include/bits/sigstack.h"
typedef struct sigaltstack {void *ss_sp; int ss_flags;  size_t ss_size; }stack_t; 
# 50 "/usr/include/bits/sigstack.h" 3 4
# 349 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 24 "/usr/include/sys/ucontext.h" 2 3 4
# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 31 "/usr/include/sys/ucontext.h" 2 3 4
typedef int greg_t; 
#line 37 "/usr/include/sys/ucontext.h"
typedef  greg_t gregset_t[19]; 
#line 81 "/usr/include/sys/ucontext.h"
enum {REG_GS=0,REG_FS,REG_ES,REG_DS,REG_EDI,REG_ESI,REG_EBP,REG_ESP,REG_EBX,REG_EDX,REG_ECX,REG_EAX,REG_TRAPNO,REG_ERR,REG_EIP,REG_CS,REG_EFL,REG_UESP,REG_SS}; 
#line 89 "/usr/include/sys/ucontext.h"
struct _libc_fpreg {unsigned short int significand[4]; unsigned short int exponent; }; 
#line 102 "/usr/include/sys/ucontext.h"
struct _libc_fpstate {unsigned long int cw; unsigned long int sw; unsigned long int tag; unsigned long int ipoff; unsigned long int cssel; unsigned long int dataoff; unsigned long int datasel; struct _libc_fpreg _st[8]; unsigned long int status; }; 
#line 105 "/usr/include/sys/ucontext.h"
typedef struct _libc_fpstate *fpregset_t; 
#line 116 "/usr/include/sys/ucontext.h"
typedef struct { gregset_t gregs;  fpregset_t fpregs; unsigned long int oldmask; unsigned long int cr2; }mcontext_t; 
#line 127 "/usr/include/sys/ucontext.h"
typedef struct ucontext {unsigned long int uc_flags; struct ucontext *uc_link;  stack_t uc_stack;  mcontext_t uc_mcontext;  __sigset_t uc_sigmask; struct _libc_fpstate __fpregs_mem; }ucontext_t; 
#line 358 "/usr/include/signal.h"
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 363 "/usr/include/signal.h"
extern int sigaltstack(__const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/signal.h"
extern int sighold(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 374 "/usr/include/signal.h"
extern int sigrelse(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 377 "/usr/include/signal.h"
extern int sigignore(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 380 "/usr/include/signal.h"
extern  __sighandler_t sigset(int __sig,  __sighandler_t __disp) __attribute__  (( __nothrow__ )) ; 
# 352 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 33 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask(int __how, __const  __sigset_t *__restrict __newmask,  __sigset_t *__restrict __oldmask) __attribute__  (( __nothrow__ )) ; 
#line 36 "/usr/include/bits/sigthread.h"
extern int pthread_kill( pthread_t __threadid, int __signo) __attribute__  (( __nothrow__ )) ; 
#line 394 "/usr/include/signal.h"
extern int __libc_current_sigrtmin(void ) __attribute__  (( __nothrow__ )) ; 
#line 396 "/usr/include/signal.h"
extern int __libc_current_sigrtmax(void ) __attribute__  (( __nothrow__ )) ; 
# 388 "/usr/include/signal.h" 2 3 4
# 31 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 25 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/bits/resource.h" 1 3 4
# 96 "/usr/include/bits/resource.h" 3 4
enum __rlimit_resource {RLIMIT_CPU=0,RLIMIT_FSIZE=1,RLIMIT_DATA=2,RLIMIT_STACK=3,RLIMIT_CORE=4,__RLIMIT_RSS=5,RLIMIT_NOFILE=7,__RLIMIT_OFILE=RLIMIT_NOFILE,RLIMIT_AS=9,__RLIMIT_NPROC=6,__RLIMIT_MEMLOCK=8,__RLIMIT_LOCKS=10,__RLIMIT_SIGPENDING=11,__RLIMIT_MSGQUEUE=12,__RLIMIT_NLIMITS=13,__RLIM_NLIMITS=__RLIMIT_NLIMITS}; 
#line 116 "/usr/include/bits/resource.h"
typedef  __rlim_t rlim_t; 
#line 121 "/usr/include/bits/resource.h"
typedef  __rlim64_t rlim64_t; 
#line 130 "/usr/include/bits/resource.h"
struct rlimit { rlim_t rlim_cur;  rlim_t rlim_max; }; 
#line 139 "/usr/include/bits/resource.h"
struct rlimit64 { rlim64_t rlim_cur;  rlim64_t rlim_max; }; 
#line 152 "/usr/include/bits/resource.h"
enum __rusage_who {RUSAGE_SELF=0,RUSAGE_CHILDREN=(-1)}; 
# 116 "/usr/include/bits/resource.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 198 "/usr/include/bits/resource.h" 2 3 4
struct rusage {struct timeval ru_utime; struct timeval ru_stime; long int ru_maxrss; long int ru_ixrss; long int ru_idrss; long int ru_isrss; long int ru_minflt; long int ru_majflt; long int ru_nswap; long int ru_inblock; long int ru_oublock; long int ru_msgsnd; long int ru_msgrcv; long int ru_nsignals; long int ru_nvcsw; long int ru_nivcsw; }; 
#line 214 "/usr/include/bits/resource.h"
enum __priority_which {PRIO_PROCESS=0,PRIO_PGRP=1,PRIO_USER=2}; 
#line 39 "/usr/include/sys/resource.h"
typedef enum __rlimit_resource __rlimit_resource_t; 
#line 40 "/usr/include/sys/resource.h"
typedef enum __rusage_who __rusage_who_t; 
#line 41 "/usr/include/sys/resource.h"
typedef enum __priority_which __priority_which_t; 
# 26 "/usr/include/sys/resource.h" 2 3 4
# 52 "/usr/include/sys/resource.h" 3 4
extern int getrlimit( __rlimit_resource_t __resource, struct rlimit *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/sys/resource.h"
extern int getrlimit64( __rlimit_resource_t __resource, struct rlimit64 *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 71 "/usr/include/sys/resource.h"
extern int setrlimit( __rlimit_resource_t __resource, __const struct rlimit *__rlimits) __attribute__  (( __nothrow__ )) ; 
# 62 "/usr/include/sys/resource.h" 3 4
# 83 "/usr/include/sys/resource.h" 3 4
extern int setrlimit64( __rlimit_resource_t __resource, __const struct rlimit64 *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/sys/resource.h"
extern int getrusage( __rusage_who_t __who, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 94 "/usr/include/sys/resource.h"
extern int getpriority( __priority_which_t __which,  id_t __who) __attribute__  (( __nothrow__ )) ; 
#line 99 "/usr/include/sys/resource.h"
extern int setpriority( __priority_which_t __which,  id_t __who, int __prio) __attribute__  (( __nothrow__ )) ; 
# 32 "/usr/include/sys/wait.h" 2 3 4
# 106 "/usr/include/sys/wait.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
#line 115 "/usr/include/sys/wait.h"
extern  __pid_t wait( __WAIT_STATUS __stat_loc); 
# 115 "/usr/include/sys/wait.h" 3 4
# 138 "/usr/include/sys/wait.h" 3 4
extern  __pid_t waitpid( __pid_t __pid, int *__stat_loc, int __options); 
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4
# 143 "/usr/include/sys/wait.h" 2 3 4
# 155 "/usr/include/sys/wait.h" 3 4
extern int waitid( idtype_t __idtype,  __id_t __id,  siginfo_t *__infop, int __options); 
#line 161 "/usr/include/sys/wait.h"
struct rusage ; 
#line 169 "/usr/include/sys/wait.h"
extern  __pid_t wait3( __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 175 "/usr/include/sys/wait.h"
struct rusage ; 
#line 179 "/usr/include/sys/wait.h"
extern  __pid_t wait4( __pid_t __pid,  __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
# 326 "../.././gcc/system.h" 2
# 376 "../.././gcc/system.h" 
extern int getopt(int , char *const *, const char *); 
# 396 "../.././gcc/system.h" 
# 1 "/usr/include/malloc.h" 1 3 4
# 24 "/usr/include/malloc.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 25 "/usr/include/malloc.h" 2 3 4
# 49 "/usr/include/malloc.h" 3 4
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 53 "/usr/include/malloc.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 58 "/usr/include/malloc.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 61 "/usr/include/malloc.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 64 "/usr/include/malloc.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 68 "/usr/include/malloc.h"
extern void *memalign( size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 72 "/usr/include/malloc.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 77 "/usr/include/malloc.h"
extern void *pvalloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 81 "/usr/include/malloc.h"
extern void *(*__morecore)( ptrdiff_t __size); 
#line 85 "/usr/include/malloc.h"
extern void *__default_morecore( ptrdiff_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 100 "/usr/include/malloc.h"
struct mallinfo {int arena; int ordblks; int smblks; int hblks; int hblkhd; int usmblks; int fsmblks; int uordblks; int fordblks; int keepcost; }; 
#line 103 "/usr/include/malloc.h"
extern struct mallinfo mallinfo(void ) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/malloc.h"
extern int mallopt(int __param, int __val) __attribute__  (( __nothrow__ )) ; 
#line 132 "/usr/include/malloc.h"
extern int malloc_trim( size_t __pad) __attribute__  (( __nothrow__ )) ; 
#line 136 "/usr/include/malloc.h"
extern  size_t malloc_usable_size(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 139 "/usr/include/malloc.h"
extern void malloc_stats(void ) __attribute__  (( __nothrow__ )) ; 
#line 142 "/usr/include/malloc.h"
extern void *malloc_get_state(void ) __attribute__  (( __nothrow__ )) ; 
#line 146 "/usr/include/malloc.h"
extern int malloc_set_state(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 151 "/usr/include/malloc.h"
extern void (*__malloc_initialize_hook)(void ); 
#line 153 "/usr/include/malloc.h"
extern void (*__free_hook)(void *__ptr, __const void *); 
#line 155 "/usr/include/malloc.h"
extern void *(*__malloc_hook)( size_t __size, __const void *); 
#line 157 "/usr/include/malloc.h"
extern void *(*__realloc_hook)(void *__ptr,  size_t __size, __const void *); 
#line 159 "/usr/include/malloc.h"
extern void *(*__memalign_hook)( size_t __alignment,  size_t __size, __const void *); 
#line 162 "/usr/include/malloc.h"
extern void (*__after_morecore_hook)(void ); 
#line 165 "/usr/include/malloc.h"
extern void __malloc_check_init(void ) __attribute__  (( __nothrow__ )) ; 
# 128 "/usr/include/malloc.h" 3 4
# 397 "../.././gcc/system.h" 2
# 520 "../.././gcc/system.h" 
# 1 "../.././gcc/../include/filenames.h" 1
# 521 "../.././gcc/system.h" 2
# 531 "../.././gcc/system.h" 
# 1 "../.././gcc/../include/libiberty.h" 1
# 42 "../.././gcc/../include/libiberty.h" 
# 1 "../.././gcc/../include/ansidecl.h" 1
# 43 "../.././gcc/../include/libiberty.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 46 "../.././gcc/../include/libiberty.h" 2
# 55 "../.././gcc/../include/libiberty.h" 
extern void unlock_stream( FILE *); 
#line 61 "../.././gcc/../include/libiberty.h"
extern void unlock_std_streams(void ); 
#line 67 "../.././gcc/../include/libiberty.h"
extern  FILE *fopen_unlocked(const char *, const char *); 
#line 68 "../.././gcc/../include/libiberty.h"
extern  FILE *fdopen_unlocked(int , const char *); 
#line 69 "../.././gcc/../include/libiberty.h"
extern  FILE *freopen_unlocked(const char *, const char *,  FILE *); 
#line 74 "../.././gcc/../include/libiberty.h"
extern char **buildargv(const char *) __attribute__  (( __malloc__ )) ; 
#line 78 "../.././gcc/../include/libiberty.h"
extern void freeargv(char **); 
#line 83 "../.././gcc/../include/libiberty.h"
extern char **dupargv(char **) __attribute__  (( __malloc__ )) ; 
#line 87 "../.././gcc/../include/libiberty.h"
extern void expandargv(int *, char ***); 
#line 112 "../.././gcc/../include/libiberty.h"
extern const char *lbasename(const char *); 
#line 116 "../.././gcc/../include/libiberty.h"
extern char *lrealpath(const char *); 
#line 122 "../.././gcc/../include/libiberty.h"
extern char *concat(const char *, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
# 112 "../.././gcc/../include/libiberty.h" 
# 131 "../.././gcc/../include/libiberty.h" 
extern char *reconcat(char *, const char *, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 137 "../.././gcc/../include/libiberty.h"
extern unsigned long concat_length(const char *, ...) __attribute__  (( __sentinel__ )) ; 
#line 144 "../.././gcc/../include/libiberty.h"
extern char *concat_copy(char *, const char *, ...) __attribute__  (( __sentinel__ )) ; 
#line 151 "../.././gcc/../include/libiberty.h"
extern char *concat_copy2(const char *, ...) __attribute__  (( __sentinel__ )) ; 
#line 155 "../.././gcc/../include/libiberty.h"
extern char *libiberty_concat_ptr; 
#line 167 "../.././gcc/../include/libiberty.h"
extern int fdmatch(int fd1, int fd2); 
# 167 "../.././gcc/../include/libiberty.h" 
# 179 "../.././gcc/../include/libiberty.h" 
extern char *getpwd(void ); 
#line 192 "../.././gcc/../include/libiberty.h"
extern long get_run_time(void ); 
#line 198 "../.././gcc/../include/libiberty.h"
extern char *make_relative_prefix(const char *, const char *, const char *) __attribute__  (( __malloc__ )) ; 
#line 202 "../.././gcc/../include/libiberty.h"
extern char *choose_temp_base(void ) __attribute__  (( __malloc__ )) ; 
#line 206 "../.././gcc/../include/libiberty.h"
extern char *make_temp_file(const char *) __attribute__  (( __malloc__ )) ; 
#line 210 "../.././gcc/../include/libiberty.h"
extern int unlink_if_ordinary(const char *); 
#line 214 "../.././gcc/../include/libiberty.h"
extern const char *spaces(int count); 
#line 219 "../.././gcc/../include/libiberty.h"
extern int errno_max(void ); 
#line 224 "../.././gcc/../include/libiberty.h"
extern const char *strerrno(int ); 
#line 228 "../.././gcc/../include/libiberty.h"
extern int strtoerrno(const char *); 
#line 232 "../.././gcc/../include/libiberty.h"
extern char *xstrerror(int ); 
#line 237 "../.././gcc/../include/libiberty.h"
extern int signo_max(void ); 
# 192 "../.././gcc/../include/libiberty.h" 
# 249 "../.././gcc/../include/libiberty.h" 
extern const char *strsigno(int ); 
#line 253 "../.././gcc/../include/libiberty.h"
extern int strtosigno(const char *); 
#line 257 "../.././gcc/../include/libiberty.h"
extern int xatexit(void (*fn)(void )); 
#line 261 "../.././gcc/../include/libiberty.h"
extern void xexit(int status) __attribute__  (( __noreturn__ )) ; 
#line 265 "../.././gcc/../include/libiberty.h"
extern void xmalloc_set_program_name(const char *); 
#line 268 "../.././gcc/../include/libiberty.h"
extern void xmalloc_failed( size_t ) __attribute__  (( __noreturn__ )) ; 
#line 274 "../.././gcc/../include/libiberty.h"
extern void *xmalloc( size_t ) __attribute__  (( __malloc__ )) ; 
#line 280 "../.././gcc/../include/libiberty.h"
extern void *xrealloc(void *,  size_t ); 
#line 285 "../.././gcc/../include/libiberty.h"
extern void *xcalloc( size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 289 "../.././gcc/../include/libiberty.h"
extern char *xstrdup(const char *) __attribute__  (( __malloc__ )) ; 
#line 293 "../.././gcc/../include/libiberty.h"
extern char *xstrndup(const char *,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 297 "../.././gcc/../include/libiberty.h"
extern void *xmemdup(const void *,  size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 300 "../.././gcc/../include/libiberty.h"
extern double physmem_total(void ); 
#line 301 "../.././gcc/../include/libiberty.h"
extern double physmem_available(void ); 
#line 338 "../.././gcc/../include/libiberty.h"
extern const unsigned char _hex_value[256]; 
#line 339 "../.././gcc/../include/libiberty.h"
extern void hex_init(void ); 
# 338 "../.././gcc/../include/libiberty.h" 
# 365 "../.././gcc/../include/libiberty.h" 
extern struct pex_obj *pex_init(int flags, const char *pname, const char *tempbase); 
#line 449 "../.././gcc/../include/libiberty.h"
extern const char *pex_run(struct pex_obj *obj, int flags, const char *executable, char *const *argv, const char *outname, const char *errname, int *err); 
#line 457 "../.././gcc/../include/libiberty.h"
extern  FILE *pex_read_output(struct pex_obj *, int binary); 
#line 463 "../.././gcc/../include/libiberty.h"
extern int pex_get_status(struct pex_obj *, int count, int *vector); 
#line 476 "../.././gcc/../include/libiberty.h"
struct pex_time {unsigned long user_seconds; unsigned long user_microseconds; unsigned long system_seconds; unsigned long system_microseconds; }; 
#line 479 "../.././gcc/../include/libiberty.h"
extern int pex_get_times(struct pex_obj *, int count, struct pex_time *vector); 
#line 483 "../.././gcc/../include/libiberty.h"
extern void pex_free(struct pex_obj *); 
# 446 "../.././gcc/../include/libiberty.h" 
# 499 "../.././gcc/../include/libiberty.h" 
extern const char *pex_one(int flags, const char *executable, char *const *argv, const char *pname, const char *outname, const char *errname, int *status, int *err); 
#line 516 "../.././gcc/../include/libiberty.h"
extern int pexecute(const char *, char *const *, const char *, const char *, char **, char **, int ); 
#line 520 "../.././gcc/../include/libiberty.h"
extern int pwait(int , int *, int ); 
# 515 "../.././gcc/../include/libiberty.h" 
# 559 "../.././gcc/../include/libiberty.h" 
extern void *C_alloca( size_t ) __attribute__  (( __malloc__ )) ; 
# 532 "../.././gcc/system.h" 2
# 569 "../.././gcc/system.h" 
extern void fancy_abort(const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
# 647 "../.././gcc/system.h" 
# 688 "../.././gcc/system.h" 
# 734 "../.././gcc/system.h" 
# 750 "../.././gcc/system.h" 
# 760 "../.././gcc/system.h" 
# 29 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/coretypes.h" 1
# 40 "../.././gcc/coretypes.h" 
struct rtx_def ; 
#line 41 "../.././gcc/coretypes.h"
typedef struct rtx_def *rtx; 
#line 42 "../.././gcc/coretypes.h"
struct rtvec_def ; 
#line 43 "../.././gcc/coretypes.h"
typedef struct rtvec_def *rtvec; 
#line 44 "../.././gcc/coretypes.h"
union tree_node ; 
#line 45 "../.././gcc/coretypes.h"
typedef union tree_node *tree; 
#line 51 "../.././gcc/coretypes.h"
struct cpp_reader ; 
#line 62 "../.././gcc/coretypes.h"
enum tls_model {TLS_MODEL_NONE,TLS_MODEL_GLOBAL_DYNAMIC,TLS_MODEL_LOCAL_DYNAMIC,TLS_MODEL_INITIAL_EXEC,TLS_MODEL_LOCAL_EXEC}; 
# 30 "../.././gcc/cp/call.c" 2
# 1 "./tm.h" 1
# 6 "./options.h" 1
extern int target_flags; 
#line 8 "./options.h"
extern int warn_abi; 
#line 9 "./options.h"
extern int warn_aggregate_return; 
#line 10 "./options.h"
extern int warn_assign_intercept; 
#line 11 "./options.h"
extern int warn_attributes; 
#line 12 "./options.h"
extern int warn_bad_function_cast; 
#line 13 "./options.h"
extern int warn_cxx_compat; 
#line 14 "./options.h"
extern int warn_cast_align; 
#line 15 "./options.h"
extern int warn_cast_qual; 
#line 16 "./options.h"
extern int warn_char_subscripts; 
#line 17 "./options.h"
extern int warn_conversion; 
#line 18 "./options.h"
extern int warn_ctor_dtor_privacy; 
#line 19 "./options.h"
extern int warn_declaration_after_statement; 
#line 20 "./options.h"
extern int warn_deprecated; 
#line 21 "./options.h"
extern int warn_deprecated; 
#line 22 "./options.h"
extern int warn_deprecated_decl; 
#line 23 "./options.h"
extern int warn_disabled_optimization; 
#line 24 "./options.h"
extern int warn_div_by_zero; 
#line 25 "./options.h"
extern int warn_ecpp; 
#line 26 "./options.h"
extern int warnings_are_errors; 
#line 27 "./options.h"
extern int flag_extraneous_semicolon; 
#line 28 "./options.h"
extern int flag_fatal_errors; 
#line 29 "./options.h"
extern int warn_float_equal; 
#line 30 "./options.h"
extern int warn_format_extra_args; 
#line 31 "./options.h"
extern int warn_format_nonliteral; 
#line 32 "./options.h"
extern int warn_format_security; 
#line 33 "./options.h"
extern int warn_format_y2k; 
#line 34 "./options.h"
extern int warn_format_zero_length; 
#line 35 "./options.h"
extern int mesg_implicit_function_declaration; 
#line 36 "./options.h"
extern int warn_implicit_int; 
#line 37 "./options.h"
extern int warn_init_self; 
#line 38 "./options.h"
extern int warn_inline; 
#line 39 "./options.h"
extern int warn_int_to_pointer_cast; 
#line 40 "./options.h"
extern int warn_invalid_offsetof; 
#line 41 "./options.h"
extern int warn_long_long; 
#line 42 "./options.h"
extern int warn_missing_braces; 
#line 43 "./options.h"
extern int warn_missing_declarations; 
#line 44 "./options.h"
extern int warn_missing_field_initializers; 
#line 45 "./options.h"
extern int warn_missing_format_attribute; 
#line 46 "./options.h"
extern int warn_missing_noreturn; 
#line 47 "./options.h"
extern int warn_missing_prototypes; 
#line 48 "./options.h"
extern int warn_nested_externs; 
#line 49 "./options.h"
extern int warn_nontemplate_friend; 
#line 50 "./options.h"
extern int warn_nonvdtor; 
#line 51 "./options.h"
extern int warn_nonnull; 
#line 52 "./options.h"
extern int warn_old_style_cast; 
#line 53 "./options.h"
extern int warn_old_style_definition; 
#line 54 "./options.h"
extern int flag_newer; 
#line 55 "./options.h"
extern int warn_overloaded_virtual; 
#line 56 "./options.h"
extern int warn_packed; 
#line 57 "./options.h"
extern int warn_padded; 
#line 58 "./options.h"
extern int warn_parentheses; 
#line 59 "./options.h"
extern int warn_pmf2ptr; 
#line 60 "./options.h"
extern int warn_pointer_arith; 
#line 61 "./options.h"
extern int warn_pointer_sign; 
#line 62 "./options.h"
extern int warn_pointer_to_int_cast; 
#line 63 "./options.h"
extern int warn_pragmas; 
#line 64 "./options.h"
extern int warn_protocol; 
#line 65 "./options.h"
extern int warn_redundant_decls; 
#line 66 "./options.h"
extern int flag_redundant; 
#line 67 "./options.h"
extern int warn_reorder; 
#line 68 "./options.h"
extern int warn_return_type; 
#line 69 "./options.h"
extern int warn_selector; 
#line 70 "./options.h"
extern int warn_sequence_point; 
#line 71 "./options.h"
extern int warn_shadow; 
#line 72 "./options.h"
extern int warn_sign_compare; 
#line 73 "./options.h"
extern int warn_sign_promo; 
#line 74 "./options.h"
extern int warn_stack_protect; 
#line 75 "./options.h"
extern int warn_strict_prototypes; 
#line 76 "./options.h"
extern int warn_strict_selector_match; 
#line 77 "./options.h"
extern int warn_switch; 
#line 78 "./options.h"
extern int warn_switch_default; 
#line 79 "./options.h"
extern int warn_switch_enum; 
#line 80 "./options.h"
extern int warn_synth; 
#line 81 "./options.h"
extern int warn_system_headers; 
#line 82 "./options.h"
extern int warn_traditional; 
#line 83 "./options.h"
extern int warn_undeclared_selector; 
#line 84 "./options.h"
extern int warn_uninitialized; 
#line 85 "./options.h"
extern int warn_notreached; 
#line 86 "./options.h"
extern int warn_unsafe_loop_optimizations; 
#line 87 "./options.h"
extern int warn_unused_function; 
#line 88 "./options.h"
extern int warn_unused_label; 
#line 89 "./options.h"
extern int warn_unused_parameter; 
#line 90 "./options.h"
extern int warn_unused_value; 
#line 91 "./options.h"
extern int warn_unused_variable; 
#line 92 "./options.h"
extern int warn_register_var; 
#line 93 "./options.h"
extern int flag_pic; 
#line 94 "./options.h"
extern int flag_pie; 
#line 95 "./options.h"
extern int flag_abi_version; 
#line 96 "./options.h"
extern int align_functions; 
#line 97 "./options.h"
extern int align_jumps; 
#line 98 "./options.h"
extern int align_labels; 
#line 99 "./options.h"
extern int align_loops; 
#line 100 "./options.h"
extern int flag_argument_noalias; 
#line 101 "./options.h"
extern int flag_argument_noalias; 
#line 102 "./options.h"
extern int flag_argument_noalias; 
#line 103 "./options.h"
extern int flag_assert; 
#line 104 "./options.h"
extern int flag_asynchronous_unwind_tables; 
#line 105 "./options.h"
extern int flag_bootstrap_classes; 
#line 106 "./options.h"
extern int flag_bounds_check; 
#line 107 "./options.h"
extern int flag_branch_on_count_reg; 
#line 108 "./options.h"
extern int flag_branch_probabilities; 
#line 109 "./options.h"
extern int flag_branch_target_load_optimize; 
#line 110 "./options.h"
extern int flag_branch_target_load_optimize2; 
#line 111 "./options.h"
extern int flag_btr_bb_exclusive; 
#line 112 "./options.h"
extern int flag_caller_saves; 
#line 113 "./options.h"
extern int flag_check_references; 
#line 114 "./options.h"
extern int flag_no_common; 
#line 115 "./options.h"
extern int flag_cprop_registers; 
#line 116 "./options.h"
extern int flag_crossjumping; 
#line 117 "./options.h"
extern int flag_cse_follow_jumps; 
#line 118 "./options.h"
extern int flag_cse_skip_blocks; 
#line 119 "./options.h"
extern int flag_cx_limited_range; 
#line 120 "./options.h"
extern int flag_data_sections; 
#line 121 "./options.h"
extern int flag_defer_pop; 
#line 122 "./options.h"
extern int flag_delayed_branch; 
#line 123 "./options.h"
extern int flag_delete_null_pointer_checks; 
#line 124 "./options.h"
extern int flag_dump_unnumbered; 
#line 125 "./options.h"
extern int flag_early_inlining; 
#line 126 "./options.h"
extern int flag_eliminate_dwarf2_dups; 
#line 127 "./options.h"
extern int flag_debug_only_used_symbols; 
#line 128 "./options.h"
extern int flag_eliminate_unused_debug_types; 
#line 129 "./options.h"
extern int flag_emit_class_files; 
#line 130 "./options.h"
extern int flag_emit_class_files; 
#line 131 "./options.h"
extern int flag_exceptions; 
#line 132 "./options.h"
extern int flag_expensive_optimizations; 
#line 133 "./options.h"
extern int flag_filelist_file; 
#line 134 "./options.h"
extern int flag_finite_math_only; 
#line 135 "./options.h"
extern int flag_float_store; 
#line 136 "./options.h"
extern int flag_force_addr; 
#line 137 "./options.h"
extern int flag_force_classes_archive_check; 
#line 138 "./options.h"
extern int flag_force_mem; 
#line 139 "./options.h"
extern int flag_friend_injection; 
#line 140 "./options.h"
extern int flag_no_function_cse; 
#line 141 "./options.h"
extern int flag_function_sections; 
#line 142 "./options.h"
extern int flag_gcse; 
#line 143 "./options.h"
extern int flag_gcse_after_reload; 
#line 144 "./options.h"
extern int flag_gcse_las; 
#line 145 "./options.h"
extern int flag_gcse_lm; 
#line 146 "./options.h"
extern int flag_gcse_sm; 
#line 147 "./options.h"
extern int flag_guess_branch_prob; 
#line 148 "./options.h"
extern int flag_hash_synchronization; 
#line 149 "./options.h"
extern int flag_no_ident; 
#line 150 "./options.h"
extern int flag_if_conversion; 
#line 151 "./options.h"
extern int flag_if_conversion2; 
#line 152 "./options.h"
extern int flag_indirect_dispatch; 
#line 153 "./options.h"
extern int flag_inhibit_size_directive; 
#line 154 "./options.h"
extern int flag_no_inline; 
#line 155 "./options.h"
extern int flag_inline_functions; 
#line 156 "./options.h"
extern int flag_inline_functions_called_once; 
#line 157 "./options.h"
extern int flag_instrument_function_entry_exit; 
#line 158 "./options.h"
extern int flag_ipa_cp; 
#line 159 "./options.h"
extern int flag_ipa_pure_const; 
#line 160 "./options.h"
extern int flag_ipa_reference; 
#line 161 "./options.h"
extern int flag_ipa_type_escape; 
#line 162 "./options.h"
extern int flag_ivopts; 
#line 163 "./options.h"
extern int flag_jni; 
#line 164 "./options.h"
extern int flag_jump_tables; 
#line 165 "./options.h"
extern int flag_keep_inline_functions; 
#line 166 "./options.h"
extern int flag_keep_static_consts; 
#line 167 "./options.h"
extern int flag_leading_underscore; 
#line 168 "./options.h"
extern int flag_loop_optimize; 
#line 169 "./options.h"
extern int flag_loop_optimize2; 
#line 170 "./options.h"
extern int flag_errno_math; 
#line 171 "./options.h"
extern int mem_report; 
#line 172 "./options.h"
extern int flag_merge_constants; 
#line 173 "./options.h"
extern int flag_merge_constants; 
#line 174 "./options.h"
extern int flag_modulo_sched; 
#line 175 "./options.h"
extern int flag_move_loop_invariants; 
#line 176 "./options.h"
extern int flag_mudflap; 
#line 177 "./options.h"
extern int flag_mudflap_ignore_reads; 
#line 178 "./options.h"
extern int flag_mudflap_threads; 
#line 179 "./options.h"
extern int flag_non_call_exceptions; 
#line 180 "./options.h"
extern int flag_objc_call_cxx_cdtors; 
#line 181 "./options.h"
extern int flag_objc_direct_dispatch; 
#line 182 "./options.h"
extern int flag_objc_exceptions; 
#line 183 "./options.h"
extern int flag_objc_gc; 
#line 184 "./options.h"
extern int flag_objc_sjlj_exceptions; 
#line 185 "./options.h"
extern int flag_omit_frame_pointer; 
#line 186 "./options.h"
extern int flag_regmove; 
#line 187 "./options.h"
extern int flag_optimize_sibling_calls; 
#line 188 "./options.h"
extern int flag_optimize_sci; 
#line 189 "./options.h"
extern int flag_pack_struct; 
#line 190 "./options.h"
extern int flag_pcc_struct_return; 
#line 191 "./options.h"
extern int flag_peel_loops; 
#line 192 "./options.h"
extern int flag_no_peephole; 
#line 193 "./options.h"
extern int flag_peephole2; 
#line 194 "./options.h"
extern int flag_pic; 
#line 195 "./options.h"
extern int flag_pie; 
#line 196 "./options.h"
extern int flag_prefetch_loop_arrays; 
#line 197 "./options.h"
extern int profile_flag; 
#line 198 "./options.h"
extern int profile_arc_flag; 
#line 199 "./options.h"
extern int flag_profile_values; 
#line 200 "./options.h"
extern int flag_pcc_struct_return; 
#line 201 "./options.h"
extern int flag_regmove; 
#line 202 "./options.h"
extern int flag_rename_registers; 
#line 203 "./options.h"
extern int flag_reorder_blocks; 
#line 204 "./options.h"
extern int flag_reorder_blocks_and_partition; 
#line 205 "./options.h"
extern int flag_reorder_functions; 
#line 206 "./options.h"
extern int flag_rerun_cse_after_loop; 
#line 207 "./options.h"
extern int flag_rerun_loop_opt; 
#line 208 "./options.h"
extern int flag_resched_modulo_sched; 
#line 209 "./options.h"
extern int flag_rounding_math; 
#line 210 "./options.h"
extern int flag_schedule_interblock; 
#line 211 "./options.h"
extern int flag_schedule_speculative; 
#line 212 "./options.h"
extern int flag_schedule_speculative_load; 
#line 213 "./options.h"
extern int flag_schedule_speculative_load_dangerous; 
#line 214 "./options.h"
extern int flag_sched_stalled_insns; 
#line 215 "./options.h"
extern int flag_sched_stalled_insns_dep; 
#line 216 "./options.h"
extern int flag_sched2_use_superblocks; 
#line 217 "./options.h"
extern int flag_sched2_use_traces; 
#line 218 "./options.h"
extern int flag_schedule_insns; 
#line 219 "./options.h"
extern int flag_schedule_insns_after_reload; 
#line 220 "./options.h"
extern int flag_shared_data; 
#line 221 "./options.h"
extern int flag_show_column; 
#line 222 "./options.h"
extern int flag_signaling_nans; 
#line 223 "./options.h"
extern int flag_single_precision_constant; 
#line 224 "./options.h"
extern int flag_split_ivs_in_unroller; 
#line 225 "./options.h"
extern int flag_stack_check; 
#line 226 "./options.h"
extern int flag_stack_protect; 
#line 227 "./options.h"
extern int flag_stack_protect; 
#line 228 "./options.h"
extern int flag_store_check; 
#line 229 "./options.h"
extern int flag_strength_reduce; 
#line 230 "./options.h"
extern int flag_strict_aliasing; 
#line 231 "./options.h"
extern int flag_syntax_only; 
#line 232 "./options.h"
extern int flag_test_coverage; 
#line 233 "./options.h"
extern int flag_thread_jumps; 
#line 234 "./options.h"
extern int time_report; 
#line 235 "./options.h"
extern int flag_tracer; 
#line 236 "./options.h"
extern int flag_trapping_math; 
#line 237 "./options.h"
extern int flag_trapv; 
#line 238 "./options.h"
extern int flag_tree_ccp; 
#line 239 "./options.h"
extern int flag_tree_ch; 
#line 240 "./options.h"
extern int flag_tree_combine_temps; 
#line 241 "./options.h"
extern int flag_tree_copy_prop; 
#line 242 "./options.h"
extern int flag_tree_copyrename; 
#line 243 "./options.h"
extern int flag_tree_dce; 
#line 244 "./options.h"
extern int flag_tree_dom; 
#line 245 "./options.h"
extern int flag_tree_dse; 
#line 246 "./options.h"
extern int flag_tree_fre; 
#line 247 "./options.h"
extern int flag_tree_loop_im; 
#line 248 "./options.h"
extern int flag_tree_loop_ivcanon; 
#line 249 "./options.h"
extern int flag_tree_loop_linear; 
#line 250 "./options.h"
extern int flag_tree_loop_optimize; 
#line 251 "./options.h"
extern int flag_tree_live_range_split; 
#line 252 "./options.h"
extern int flag_tree_pre; 
#line 253 "./options.h"
extern int flag_tree_salias; 
#line 254 "./options.h"
extern int flag_tree_sink; 
#line 255 "./options.h"
extern int flag_tree_sra; 
#line 256 "./options.h"
extern int flag_tree_store_ccp; 
#line 257 "./options.h"
extern int flag_tree_store_copy_prop; 
#line 258 "./options.h"
extern int flag_tree_ter; 
#line 259 "./options.h"
extern int flag_tree_vect_loop_version; 
#line 260 "./options.h"
extern int flag_tree_vectorize; 
#line 261 "./options.h"
extern int flag_tree_vrp; 
#line 262 "./options.h"
extern int flag_unit_at_a_time; 
#line 263 "./options.h"
extern int flag_unroll_all_loops; 
#line 264 "./options.h"
extern int flag_unroll_loops; 
#line 265 "./options.h"
extern int flag_unsafe_loop_optimizations; 
#line 266 "./options.h"
extern int flag_unsafe_math_optimizations; 
#line 267 "./options.h"
extern int flag_unswitch_loops; 
#line 268 "./options.h"
extern int flag_unwind_tables; 
#line 269 "./options.h"
extern int flag_use_boehm_gc; 
#line 270 "./options.h"
extern int flag_use_divide_subroutine; 
#line 271 "./options.h"
extern int flag_var_tracking; 
#line 272 "./options.h"
extern int flag_variable_expansion_in_unroller; 
#line 273 "./options.h"
extern int flag_verbose_asm; 
#line 274 "./options.h"
extern int flag_value_profile_transformations; 
#line 275 "./options.h"
extern int flag_web; 
#line 276 "./options.h"
extern int flag_whole_program; 
#line 277 "./options.h"
extern int flag_wrapv; 
#line 278 "./options.h"
extern int flag_zero_initialized_in_bss; 
#line 279 "./options.h"
extern const char *ix86_align_funcs_string; 
#line 280 "./options.h"
extern const char *ix86_align_jumps_string; 
#line 281 "./options.h"
extern const char *ix86_align_loops_string; 
#line 282 "./options.h"
extern const char *ix86_arch_string; 
#line 283 "./options.h"
extern const char *ix86_asm_string; 
#line 284 "./options.h"
extern const char *ix86_branch_cost_string; 
#line 285 "./options.h"
extern const char *ix86_cmodel_string; 
#line 286 "./options.h"
extern int TARGET_DEBUG_ADDR; 
#line 287 "./options.h"
extern int TARGET_DEBUG_ARG; 
#line 288 "./options.h"
extern const char *ix86_fpmath_string; 
#line 289 "./options.h"
extern const char *ix86_section_threshold_string; 
#line 290 "./options.h"
extern const char *ix86_preferred_stack_boundary_string; 
#line 291 "./options.h"
extern const char *ix86_regparm_string; 
#line 292 "./options.h"
extern const char *ix86_tls_dialect_string; 
#line 293 "./options.h"
extern const char *ix86_tune_string; 
#line 294 "./options.h"
extern int profile_flag; 
#line 295 "./options.h"
extern int pedantic; 
#line 296 "./options.h"
extern int quiet_flag; 
#line 297 "./options.h"
extern int version_flag; 
#line 298 "./options.h"
extern int inhibit_warnings; 
#line 962 "./options.h"
enum opt_code {OPT__help,OPT__output_pch_,OPT__param,OPT__target_help,OPT__version,OPT_A,OPT_C,OPT_CC,OPT_D,OPT_E,OPT_F,OPT_G,OPT_H,OPT_I,OPT_J,OPT_M,OPT_MD,OPT_MD_,OPT_MF,OPT_MG,OPT_MM,OPT_MMD,OPT_MMD_,OPT_MP,OPT_MQ,OPT_MT,OPT_O,OPT_Os,OPT_P,OPT_U,OPT_W,OPT_Wabi,OPT_Waggregate_return,OPT_Waliasing,OPT_Wall,OPT_Wampersand,OPT_Wassign_intercept,OPT_Wattributes,OPT_Wbad_function_cast,OPT_Wc___compat,OPT_Wcast_align,OPT_Wcast_qual,OPT_Wchar_subscripts,OPT_Wcomment,OPT_Wcomments,OPT_Wconversion,OPT_Wctor_dtor_privacy,OPT_Wdeclaration_after_statement,OPT_Wdeprecated,OPT_Wdeprecated_declarations,OPT_Wdisabled_optimization,OPT_Wdiv_by_zero,OPT_Weffc__,OPT_Wendif_labels,OPT_Werror,OPT_Werror_implicit_function_declaration,OPT_Wextra,OPT_Wextraneous_semicolon,OPT_Wfatal_errors,OPT_Wfloat_equal,OPT_Wformat,OPT_Wformat_extra_args,OPT_Wformat_nonliteral,OPT_Wformat_security,OPT_Wformat_y2k,OPT_Wformat_zero_length,OPT_Wformat_,OPT_Wimplicit,OPT_Wimplicit_function_declaration,OPT_Wimplicit_int,OPT_Wimplicit_interface,OPT_Wimport,OPT_Winit_self,OPT_Winline,OPT_Wint_to_pointer_cast,OPT_Winvalid_offsetof,OPT_Winvalid_pch,OPT_Wlarger_than_,OPT_Wline_truncation,OPT_Wlong_long,OPT_Wmain,OPT_Wmissing_braces,OPT_Wmissing_declarations,OPT_Wmissing_field_initializers,OPT_Wmissing_format_attribute,OPT_Wmissing_include_dirs,OPT_Wmissing_noreturn,OPT_Wmissing_prototypes,OPT_Wmultichar,OPT_Wnested_externs,OPT_Wnon_template_friend,OPT_Wnon_virtual_dtor,OPT_Wnonnull,OPT_Wnonstd_intrinsics,OPT_Wnormalized_,OPT_Wold_style_cast,OPT_Wold_style_definition,OPT_Wout_of_date,OPT_Woverloaded_virtual,OPT_Wpacked,OPT_Wpadded,OPT_Wparentheses,OPT_Wpmf_conversions,OPT_Wpointer_arith,OPT_Wpointer_sign,OPT_Wpointer_to_int_cast,OPT_Wpragmas,OPT_Wprotocol,OPT_Wredundant_decls,OPT_Wredundant_modifiers,OPT_Wreorder,OPT_Wreturn_type,OPT_Wselector,OPT_Wsequence_point,OPT_Wshadow,OPT_Wsign_compare,OPT_Wsign_promo,OPT_Wstack_protector,OPT_Wstrict_aliasing,OPT_Wstrict_aliasing_,OPT_Wstrict_null_sentinel,OPT_Wstrict_prototypes,OPT_Wstrict_selector_match,OPT_Wsurprising,OPT_Wswitch,OPT_Wswitch_default,OPT_Wswitch_enum,OPT_Wsynth,OPT_Wsystem_headers,OPT_Wtraditional,OPT_Wtrigraphs,OPT_Wundeclared_selector,OPT_Wundef,OPT_Wunderflow,OPT_Wuninitialized,OPT_Wunknown_pragmas,OPT_Wunreachable_code,OPT_Wunsafe_loop_optimizations,OPT_Wunused,OPT_Wunused_function,OPT_Wunused_label,OPT_Wunused_labels,OPT_Wunused_macros,OPT_Wunused_parameter,OPT_Wunused_value,OPT_Wunused_variable,OPT_Wvariadic_macros,OPT_Wvolatile_register_var,OPT_Wwrite_strings,OPT_ansi,OPT_aux_info,OPT_aux_info_,OPT_auxbase,OPT_auxbase_strip,OPT_d,OPT_dumpbase,OPT_fCLASSPATH_,OPT_fPIC,OPT_fPIE,OPT_fabi_version_,OPT_faccess_control,OPT_falign_functions,OPT_falign_functions_,OPT_falign_jumps,OPT_falign_jumps_,OPT_falign_labels,OPT_falign_labels_,OPT_falign_loops,OPT_falign_loops_,OPT_fall_virtual,OPT_falt_external_templates,OPT_fargument_alias,OPT_fargument_noalias,OPT_fargument_noalias_global,OPT_fasm,OPT_fassert,OPT_fassume_compiled,OPT_fassume_compiled_,OPT_fasynchronous_unwind_tables,OPT_fautomatic,OPT_fbackslash,OPT_fbootclasspath_,OPT_fbootstrap_classes,OPT_fbounds_check,OPT_fbranch_count_reg,OPT_fbranch_probabilities,OPT_fbranch_target_load_optimize,OPT_fbranch_target_load_optimize2,OPT_fbtr_bb_exclusive,OPT_fbuiltin,OPT_fbuiltin_,OPT_fcall_saved_,OPT_fcall_used_,OPT_fcaller_saves,OPT_fcheck_new,OPT_fcheck_references,OPT_fclasspath_,OPT_fcommon,OPT_fcompile_resource_,OPT_fcond_mismatch,OPT_fconserve_space,OPT_fconst_strings,OPT_fconstant_string_class_,OPT_fconvert_big_endian,OPT_fconvert_little_endian,OPT_fconvert_native,OPT_fconvert_swap,OPT_fcprop_registers,OPT_fcray_pointer,OPT_fcrossjumping,OPT_fcse_follow_jumps,OPT_fcse_skip_blocks,OPT_fcx_limited_range,OPT_fd_lines_as_code,OPT_fd_lines_as_comments,OPT_fdata_sections,OPT_fdefault_double_8,OPT_fdefault_inline,OPT_fdefault_integer_8,OPT_fdefault_real_8,OPT_fdefer_pop,OPT_fdelayed_branch,OPT_fdelete_null_pointer_checks,OPT_fdiagnostics_show_location_,OPT_fdiagnostics_show_option,OPT_fdisable_assertions,OPT_fdisable_assertions_,OPT_fdollar_ok,OPT_fdollars_in_identifiers,OPT_fdump_,OPT_fdump_parse_tree,OPT_fdump_unnumbered,OPT_fearly_inlining,OPT_felide_constructors,OPT_feliminate_dwarf2_dups,OPT_feliminate_unused_debug_symbols,OPT_feliminate_unused_debug_types,OPT_femit_class_file,OPT_femit_class_files,OPT_fenable_assertions,OPT_fenable_assertions_,OPT_fencoding_,OPT_fenforce_eh_specs,OPT_fenum_int_equiv,OPT_fexceptions,OPT_fexec_charset_,OPT_fexpensive_optimizations,OPT_fextdirs_,OPT_fextended_identifiers,OPT_fexternal_templates,OPT_ff2c,OPT_ffast_math,OPT_ffilelist_file,OPT_ffinite_math_only,OPT_ffixed_,OPT_ffixed_form,OPT_ffixed_line_length_,OPT_ffixed_line_length_none,OPT_ffloat_store,OPT_ffor_scope,OPT_fforce_addr,OPT_fforce_classes_archive_check,OPT_fforce_mem,OPT_ffpe_trap_,OPT_ffree_form,OPT_ffree_line_length_,OPT_ffree_line_length_none,OPT_ffreestanding,OPT_ffriend_injection,OPT_ffunction_cse,OPT_ffunction_sections,OPT_fgcse,OPT_fgcse_after_reload,OPT_fgcse_las,OPT_fgcse_lm,OPT_fgcse_sm,OPT_fgnu_keywords,OPT_fgnu_runtime,OPT_fguess_branch_probability,OPT_fguiding_decls,OPT_fhandle_exceptions,OPT_fhash_synchronization,OPT_fhonor_std,OPT_fhosted,OPT_fhuge_objects,OPT_fident,OPT_fif_conversion,OPT_fif_conversion2,OPT_fimplement_inlines,OPT_fimplicit_inline_templates,OPT_fimplicit_none,OPT_fimplicit_templates,OPT_findirect_dispatch,OPT_finhibit_size_directive,OPT_finline,OPT_finline_functions,OPT_finline_functions_called_once,OPT_finline_limit_,OPT_finline_limit_eq,OPT_finput_charset_,OPT_finstrument_functions,OPT_fipa_cp,OPT_fipa_pure_const,OPT_fipa_reference,OPT_fipa_type_escape,OPT_fivopts,OPT_fjni,OPT_fjump_tables,OPT_fkeep_inline_functions,OPT_fkeep_static_consts,OPT_flabels_ok,OPT_fleading_underscore,OPT_floop_optimize,OPT_floop_optimize2,OPT_fmath_errno,OPT_fmax_identifier_length_,OPT_fmax_stack_var_size_,OPT_fmem_report,OPT_fmerge_all_constants,OPT_fmerge_constants,OPT_fmessage_length_,OPT_fmodule_private,OPT_fmodulo_sched,OPT_fmove_loop_invariants,OPT_fms_extensions,OPT_fmudflap,OPT_fmudflapir,OPT_fmudflapth,OPT_fname_mangling_version_,OPT_fnew_abi,OPT_fnext_runtime,OPT_fnil_receivers,OPT_fno_backend,OPT_fnon_call_exceptions,OPT_fnonansi_builtins,OPT_fnonnull_objects,OPT_fobjc_call_cxx_cdtors,OPT_fobjc_direct_dispatch,OPT_fobjc_exceptions,OPT_fobjc_gc,OPT_fobjc_sjlj_exceptions,OPT_fomit_frame_pointer,OPT_foperator_names,OPT_foptimize_register_move,OPT_foptimize_sibling_calls,OPT_foptimize_static_class_initialization,OPT_foptional_diags,OPT_foutput_class_dir_,OPT_fpack_derived,OPT_fpack_struct,OPT_fpack_struct_,OPT_fpcc_struct_return,OPT_fpch_deps,OPT_fpch_preprocess,OPT_fpeel_loops,OPT_fpeephole,OPT_fpeephole2,OPT_fpermissive,OPT_fpic,OPT_fpie,OPT_fprefetch_loop_arrays,OPT_fpreprocessed,OPT_fprofile,OPT_fprofile_arcs,OPT_fprofile_generate,OPT_fprofile_use,OPT_fprofile_values,OPT_frandom_seed,OPT_frandom_seed_,OPT_frecord_marker_4,OPT_frecord_marker_8,OPT_freg_struct_return,OPT_fregmove,OPT_frename_registers,OPT_freorder_blocks,OPT_freorder_blocks_and_partition,OPT_freorder_functions,OPT_frepack_arrays,OPT_freplace_objc_classes,OPT_frepo,OPT_frerun_cse_after_loop,OPT_frerun_loop_opt,OPT_freschedule_modulo_scheduled_loops,OPT_frounding_math,OPT_frtti,OPT_fsched_interblock,OPT_fsched_spec,OPT_fsched_spec_load,OPT_fsched_spec_load_dangerous,OPT_fsched_stalled_insns,OPT_fsched_stalled_insns_dep,OPT_fsched_stalled_insns_dep_,OPT_fsched_stalled_insns_,OPT_fsched_verbose_,OPT_fsched2_use_superblocks,OPT_fsched2_use_traces,OPT_fschedule_insns,OPT_fschedule_insns2,OPT_fsecond_underscore,OPT_fshared_data,OPT_fshort_double,OPT_fshort_enums,OPT_fshort_wchar,OPT_fshow_column,OPT_fsignaling_nans,OPT_fsigned_bitfields,OPT_fsigned_char,OPT_fsingle_precision_constant,OPT_fsplit_ivs_in_unroller,OPT_fsquangle,OPT_fstack_check,OPT_fstack_limit,OPT_fstack_limit_register_,OPT_fstack_limit_symbol_,OPT_fstack_protector,OPT_fstack_protector_all,OPT_fstats,OPT_fstore_check,OPT_fstrength_reduce,OPT_fstrict_aliasing,OPT_fstrict_prototype,OPT_fsyntax_only,OPT_ftabstop_,OPT_ftemplate_depth_,OPT_ftest_coverage,OPT_fthis_is_variable,OPT_fthread_jumps,OPT_fthreadsafe_statics,OPT_ftime_report,OPT_ftls_model_,OPT_ftracer,OPT_ftrapping_math,OPT_ftrapv,OPT_ftree_ccp,OPT_ftree_ch,OPT_ftree_combine_temps,OPT_ftree_copy_prop,OPT_ftree_copyrename,OPT_ftree_dce,OPT_ftree_dominator_opts,OPT_ftree_dse,OPT_ftree_fre,OPT_ftree_loop_im,OPT_ftree_loop_ivcanon,OPT_ftree_loop_linear,OPT_ftree_loop_optimize,OPT_ftree_lrs,OPT_ftree_pre,OPT_ftree_salias,OPT_ftree_sink,OPT_ftree_sra,OPT_ftree_store_ccp,OPT_ftree_store_copy_prop,OPT_ftree_ter,OPT_ftree_vect_loop_version,OPT_ftree_vectorize,OPT_ftree_vectorizer_verbose_,OPT_ftree_vrp,OPT_funderscoring,OPT_funit_at_a_time,OPT_funroll_all_loops,OPT_funroll_loops,OPT_funsafe_loop_optimizations,OPT_funsafe_math_optimizations,OPT_funsigned_bitfields,OPT_funsigned_char,OPT_funswitch_loops,OPT_funwind_tables,OPT_fuse_boehm_gc,OPT_fuse_cxa_atexit,OPT_fuse_divide_subroutine,OPT_fvar_tracking,OPT_fvariable_expansion_in_unroller,OPT_fverbose_asm,OPT_fvisibility_inlines_hidden,OPT_fvisibility_,OPT_fvpt,OPT_fvtable_gc,OPT_fvtable_thunks,OPT_fweak,OPT_fweb,OPT_fwhole_program,OPT_fwide_exec_charset_,OPT_fworking_directory,OPT_fwrapv,OPT_fxref,OPT_fzero_initialized_in_bss,OPT_fzero_link,OPT_g,OPT_gcoff,OPT_gdwarf_2,OPT_gen_decls,OPT_ggdb,OPT_gstabs,OPT_gstabs_,OPT_gvms,OPT_gxcoff,OPT_gxcoff_,OPT_idirafter,OPT_imacros,OPT_include,OPT_iprefix,OPT_iquote,OPT_isysroot,OPT_isystem,OPT_iwithprefix,OPT_iwithprefixbefore,OPT_lang_asm,OPT_lang_fortran,OPT_lang_objc,OPT_m128bit_long_double,OPT_m32,OPT_m386,OPT_m3dnow,OPT_m486,OPT_m64,OPT_m80387,OPT_m96bit_long_double,OPT_maccumulate_outgoing_args,OPT_malign_double,OPT_malign_functions_,OPT_malign_jumps_,OPT_malign_loops_,OPT_malign_stringops,OPT_march_,OPT_masm_,OPT_mbranch_cost_,OPT_mcmodel_,OPT_mdebug_addr,OPT_mdebug_arg,OPT_mfancy_math_387,OPT_mfp_ret_in_387,OPT_mfpmath_,OPT_mhard_float,OPT_mieee_fp,OPT_minline_all_stringops,OPT_mintel_syntax,OPT_mlarge_data_threshold_,OPT_mmmx,OPT_mms_bitfields,OPT_mno_align_stringops,OPT_mno_fancy_math_387,OPT_mno_push_args,OPT_mno_red_zone,OPT_momit_leaf_frame_pointer,OPT_mpentium,OPT_mpentiumpro,OPT_mpreferred_stack_boundary_,OPT_mpush_args,OPT_mred_zone,OPT_mregparm_,OPT_mrtd,OPT_msoft_float,OPT_msse,OPT_msse2,OPT_msse3,OPT_msseregparm,OPT_mstack_arg_probe,OPT_msvr3_shlib,OPT_mtls_dialect_,OPT_mtls_direct_seg_refs,OPT_mtune_,OPT_nostdinc,OPT_nostdinc__,OPT_o,OPT_p,OPT_pedantic,OPT_pedantic_errors,OPT_print_objc_runtime_info,OPT_print_pch_checksum,OPT_qkind_,OPT_quiet,OPT_remap,OPT_std_c__98,OPT_std_c89,OPT_std_c99,OPT_std_c9x,OPT_std_f2003,OPT_std_f95,OPT_std_gnu,OPT_std_gnu__98,OPT_std_gnu89,OPT_std_gnu99,OPT_std_gnu9x,OPT_std_iso9899_1990,OPT_std_iso9899_199409,OPT_std_iso9899_1999,OPT_std_iso9899_199x,OPT_std_legacy,OPT_traditional_cpp,OPT_trigraphs,OPT_undef,OPT_v,OPT_version,OPT_w,N_OPTS}; 
# 364 "./options.h" 
# 5 "./tm.h" 2
# 1 "../.././gcc/config/i386/i386.h" 1
# 87 "../.././gcc/config/i386/i386.h" 
struct processor_costs {const int add; const int lea; const int shift_var; const int shift_const; const int mult_init[5]; const int mult_bit; const int divide[5]; int movsx; int movzx; const int large_insn; const int move_ratio; const int movzbl_load; const int int_load[3]; const int int_store[3]; const int fp_move; const int fp_load[3]; const int fp_store[3]; const int mmx_move; const int mmx_load[2]; const int mmx_store[2]; const int sse_move; const int sse_load[3]; const int sse_store[3]; const int mmxsse_to_integer; const int prefetch_block; const int simultaneous_prefetches; const int branch_cost; const int fadd; const int fmul; const int fdiv; const int fabs; const int fchs; const int fsqrt; }; 
#line 89 "../.././gcc/config/i386/i386.h"
extern const struct processor_costs *ix86_cost; 
#line 145 "../.././gcc/config/i386/i386.h"
extern const int x86_use_leave,x86_push_memory,x86_zero_extend_with_and; 
#line 146 "../.././gcc/config/i386/i386.h"
extern const int x86_use_bit_test,x86_cmove,x86_fisttp,x86_deep_branch; 
#line 147 "../.././gcc/config/i386/i386.h"
extern const int x86_branch_hints,x86_unroll_strlen; 
#line 148 "../.././gcc/config/i386/i386.h"
extern const int x86_double_with_add,x86_partial_reg_stall,x86_movx; 
#line 149 "../.././gcc/config/i386/i386.h"
extern const int x86_use_himode_fiop,x86_use_simode_fiop; 
#line 150 "../.././gcc/config/i386/i386.h"
extern const int x86_use_mov0,x86_use_cltd,x86_read_modify_write; 
#line 151 "../.././gcc/config/i386/i386.h"
extern const int x86_read_modify,x86_split_long_moves; 
#line 152 "../.././gcc/config/i386/i386.h"
extern const int x86_promote_QImode,x86_single_stringop,x86_fast_prefix; 
#line 153 "../.././gcc/config/i386/i386.h"
extern const int x86_himode_math,x86_qimode_math,x86_promote_qi_regs; 
#line 154 "../.././gcc/config/i386/i386.h"
extern const int x86_promote_hi_regs,x86_integer_DFmode_moves; 
#line 155 "../.././gcc/config/i386/i386.h"
extern const int x86_add_esp_4,x86_add_esp_8,x86_sub_esp_4,x86_sub_esp_8; 
#line 156 "../.././gcc/config/i386/i386.h"
extern const int x86_partial_reg_dependency,x86_memory_mismatch_stall; 
#line 157 "../.././gcc/config/i386/i386.h"
extern const int x86_accumulate_outgoing_args,x86_prologue_using_move; 
#line 158 "../.././gcc/config/i386/i386.h"
extern const int x86_epilogue_using_move,x86_decompose_lea; 
#line 159 "../.././gcc/config/i386/i386.h"
extern const int x86_arch_always_fancy_math_387,x86_shift1; 
#line 160 "../.././gcc/config/i386/i386.h"
extern const int x86_sse_partial_reg_dependency,x86_sse_split_regs; 
#line 161 "../.././gcc/config/i386/i386.h"
extern const int x86_sse_typeless_stores,x86_sse_load0_by_pxor; 
#line 162 "../.././gcc/config/i386/i386.h"
extern const int x86_use_ffreep; 
#line 163 "../.././gcc/config/i386/i386.h"
extern const int x86_inter_unit_moves,x86_schedule; 
#line 164 "../.././gcc/config/i386/i386.h"
extern const int x86_use_bt; 
#line 165 "../.././gcc/config/i386/i386.h"
extern const int x86_cmpxchg,x86_xadd; 
#line 166 "../.././gcc/config/i386/i386.h"
extern int x86_prefetch_sse; 
# 145 "../.././gcc/config/i386/i386.h" 
# 1045 "../.././gcc/config/i386/i386.h" 
enum reg_class {NO_REGS,AREG,DREG,CREG,BREG,SIREG,DIREG,AD_REGS,Q_REGS,NON_Q_REGS,INDEX_REGS,LEGACY_REGS,GENERAL_REGS,FP_TOP_REG,FP_SECOND_REG,FLOAT_REGS,SSE_REGS,MMX_REGS,FP_TOP_SSE_REGS,FP_SECOND_SSE_REGS,FLOAT_SSE_REGS,FLOAT_INT_REGS,INT_SSE_REGS,FLOAT_INT_SSE_REGS,ALL_REGS,LIM_REG_CLASSES}; 
#line 1481 "../.././gcc/config/i386/i386.h"
typedef struct ix86_args {int words; int nregs; int regno; int fastcall; int sse_words; int sse_nregs; int warn_sse; int warn_mmx; int sse_regno; int mmx_words; int mmx_nregs; int mmx_regno; int maybe_vaarg; int float_in_sse; }CUMULATIVE_ARGS; 
# 1465 "../.././gcc/config/i386/i386.h" 
# 1994 "../.././gcc/config/i386/i386.h" 
extern int const dbx_register_map[53]; 
#line 1995 "../.././gcc/config/i386/i386.h"
extern int const dbx64_register_map[53]; 
#line 1996 "../.././gcc/config/i386/i386.h"
extern int const svr4_dbx_register_map[53]; 
#line 2120 "../.././gcc/config/i386/i386.h"
enum processor_type {PROCESSOR_I386,PROCESSOR_I486,PROCESSOR_PENTIUM,PROCESSOR_PENTIUMPRO,PROCESSOR_K6,PROCESSOR_ATHLON,PROCESSOR_PENTIUM4,PROCESSOR_K8,PROCESSOR_NOCONA,PROCESSOR_max}; 
#line 2122 "../.././gcc/config/i386/i386.h"
extern enum processor_type ix86_tune; 
#line 2123 "../.././gcc/config/i386/i386.h"
extern enum processor_type ix86_arch; 
#line 2129 "../.././gcc/config/i386/i386.h"
enum fpmath_unit {FPMATH_387=1,FPMATH_SSE=2}; 
#line 2131 "../.././gcc/config/i386/i386.h"
extern enum fpmath_unit ix86_fpmath; 
#line 2137 "../.././gcc/config/i386/i386.h"
enum tls_dialect {TLS_DIALECT_GNU,TLS_DIALECT_SUN}; 
#line 2139 "../.././gcc/config/i386/i386.h"
extern enum tls_dialect ix86_tls_dialect; 
#line 2149 "../.././gcc/config/i386/i386.h"
enum cmodel {CM_32,CM_SMALL,CM_KERNEL,CM_MEDIUM,CM_LARGE,CM_SMALL_PIC,CM_MEDIUM_PIC}; 
#line 2151 "../.././gcc/config/i386/i386.h"
extern enum cmodel ix86_cmodel; 
#line 2161 "../.././gcc/config/i386/i386.h"
enum asm_dialect {ASM_ATT,ASM_INTEL}; 
#line 2163 "../.././gcc/config/i386/i386.h"
extern enum asm_dialect ix86_asm_dialect; 
#line 2164 "../.././gcc/config/i386/i386.h"
extern unsigned int ix86_preferred_stack_boundary; 
#line 2165 "../.././gcc/config/i386/i386.h"
extern int ix86_branch_cost,ix86_section_threshold; 
#line 2168 "../.././gcc/config/i386/i386.h"
extern enum reg_class const regclass_map[53]; 
#line 2170 "../.././gcc/config/i386/i386.h"
extern  rtx ix86_compare_op0; 
#line 2171 "../.././gcc/config/i386/i386.h"
extern  rtx ix86_compare_op1; 
#line 2172 "../.././gcc/config/i386/i386.h"
extern  rtx ix86_compare_emitted; 
# 2108 "../.././gcc/config/i386/i386.h" 
# 2196 "../.././gcc/config/i386/i386.h" 
enum ix86_entity {I387_TRUNC=0,I387_FLOOR,I387_CEIL,I387_MASK_PM,MAX_386_ENTITIES}; 
#line 2207 "../.././gcc/config/i386/i386.h"
enum ix86_stack_slot {SLOT_TEMP=0,SLOT_CW_STORED,SLOT_CW_TRUNC,SLOT_CW_FLOOR,SLOT_CW_CEIL,SLOT_CW_MASK_PM,MAX_386_STACK_LOCALS}; 
#line 2277 "../.././gcc/config/i386/i386.h"
struct machine_function {struct stack_local_entry *stack_locals; const char *some_ld_name;  rtx force_align_arg_pointer; int save_varrargs_registers; int accesses_prev_frame; int optimize_mode_switching[MAX_386_ENTITIES]; int use_fast_prologue_epilogue; int use_fast_prologue_epilogue_nregs; }; 
# 2263 "../.././gcc/config/i386/i386.h" 
# 6 "./tm.h" 2
# 1 "../.././gcc/config/i386/unix.h" 1
# 7 "./tm.h" 2
# 1 "../.././gcc/config/i386/att.h" 1
# 8 "./tm.h" 2
# 1 "../.././gcc/config/dbxelf.h" 1
# 9 "./tm.h" 2
# 1 "../.././gcc/config/elfos.h" 1
# 10 "./tm.h" 2
# 1 "../.././gcc/config/svr4.h" 1
# 11 "./tm.h" 2
# 1 "../.././gcc/config/linux.h" 1
# 12 "./tm.h" 2
# 1 "../.././gcc/config/i386/linux.h" 1
# 13 "./tm.h" 2
# 1 "../.././gcc/defaults.h" 1
# 14 "./tm.h" 2
# 1 "./insn-constants.h" 1
# 17 "./tm.h" 2
# 1 "./insn-flags.h" 1
# 1095 "./insn-flags.h" 
static __inline__  rtx gen_cmpdi_ccno_1_rex64( rtx ,  rtx ); 
#line 1097 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_ccno_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1098 "./insn-flags.h"
return 0; }
 
#line 1100 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_insn_rex64( rtx ,  rtx ); 
#line 1102 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_insn_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1103 "./insn-flags.h"
return 0; }
 
#line 1105 "./insn-flags.h"
extern  rtx gen_cmpqi_ext_3_insn( rtx ,  rtx ); 
#line 1106 "./insn-flags.h"
static __inline__  rtx gen_cmpqi_ext_3_insn_rex64( rtx ,  rtx ); 
#line 1108 "./insn-flags.h"
static __inline__  rtx gen_cmpqi_ext_3_insn_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1109 "./insn-flags.h"
return 0; }
 
#line 1111 "./insn-flags.h"
extern  rtx gen_x86_fnstsw_1( rtx ); 
#line 1112 "./insn-flags.h"
extern  rtx gen_x86_sahf_1( rtx ); 
#line 1113 "./insn-flags.h"
extern  rtx gen_popsi1( rtx ); 
#line 1114 "./insn-flags.h"
extern  rtx gen_movsi_insv_1( rtx ,  rtx ); 
#line 1115 "./insn-flags.h"
static __inline__  rtx gen_movdi_insv_1_rex64( rtx ,  rtx ); 
#line 1117 "./insn-flags.h"
static __inline__  rtx gen_movdi_insv_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1118 "./insn-flags.h"
return 0; }
 
#line 1120 "./insn-flags.h"
static __inline__  rtx gen_popdi1( rtx ); 
#line 1122 "./insn-flags.h"
static __inline__  rtx gen_popdi1( rtx a __attribute__  (( __unused__ )) )  {

#line 1123 "./insn-flags.h"
return 0; }
 
#line 1125 "./insn-flags.h"
extern  rtx gen_swapxf( rtx ,  rtx ); 
#line 1126 "./insn-flags.h"
extern  rtx gen_zero_extendhisi2_and( rtx ,  rtx ); 
#line 1127 "./insn-flags.h"
extern  rtx gen_zero_extendsidi2_32( rtx ,  rtx ); 
#line 1128 "./insn-flags.h"
static __inline__  rtx gen_zero_extendsidi2_rex64( rtx ,  rtx ); 
#line 1130 "./insn-flags.h"
static __inline__  rtx gen_zero_extendsidi2_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1131 "./insn-flags.h"
return 0; }
 
#line 1133 "./insn-flags.h"
static __inline__  rtx gen_zero_extendhidi2( rtx ,  rtx ); 
#line 1135 "./insn-flags.h"
static __inline__  rtx gen_zero_extendhidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1136 "./insn-flags.h"
return 0; }
 
#line 1138 "./insn-flags.h"
static __inline__  rtx gen_zero_extendqidi2( rtx ,  rtx ); 
#line 1140 "./insn-flags.h"
static __inline__  rtx gen_zero_extendqidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1141 "./insn-flags.h"
return 0; }
 
#line 1143 "./insn-flags.h"
static __inline__  rtx gen_extendsidi2_rex64( rtx ,  rtx ); 
#line 1145 "./insn-flags.h"
static __inline__  rtx gen_extendsidi2_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1146 "./insn-flags.h"
return 0; }
 
#line 1148 "./insn-flags.h"
static __inline__  rtx gen_extendhidi2( rtx ,  rtx ); 
#line 1150 "./insn-flags.h"
static __inline__  rtx gen_extendhidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1151 "./insn-flags.h"
return 0; }
 
#line 1153 "./insn-flags.h"
static __inline__  rtx gen_extendqidi2( rtx ,  rtx ); 
#line 1155 "./insn-flags.h"
static __inline__  rtx gen_extendqidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1156 "./insn-flags.h"
return 0; }
 
#line 1158 "./insn-flags.h"
extern  rtx gen_extendhisi2( rtx ,  rtx ); 
#line 1159 "./insn-flags.h"
extern  rtx gen_extendqihi2( rtx ,  rtx ); 
#line 1160 "./insn-flags.h"
extern  rtx gen_extendqisi2( rtx ,  rtx ); 
#line 1161 "./insn-flags.h"
extern  rtx gen_truncxfsf2_i387_noop( rtx ,  rtx ); 
#line 1162 "./insn-flags.h"
extern  rtx gen_truncxfdf2_i387_noop( rtx ,  rtx ); 
#line 1163 "./insn-flags.h"
static __inline__  rtx gen_fix_truncsfdi_sse( rtx ,  rtx ); 
#line 1165 "./insn-flags.h"
static __inline__  rtx gen_fix_truncsfdi_sse( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1166 "./insn-flags.h"
return 0; }
 
#line 1168 "./insn-flags.h"
static __inline__  rtx gen_fix_truncdfdi_sse( rtx ,  rtx ); 
#line 1170 "./insn-flags.h"
static __inline__  rtx gen_fix_truncdfdi_sse( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1171 "./insn-flags.h"
return 0; }
 
#line 1173 "./insn-flags.h"
extern  rtx gen_fix_truncsfsi_sse( rtx ,  rtx ); 
#line 1174 "./insn-flags.h"
extern  rtx gen_fix_truncdfsi_sse( rtx ,  rtx ); 
#line 1175 "./insn-flags.h"
extern  rtx gen_fix_trunchi_fisttp_i387_1( rtx ,  rtx ); 
#line 1176 "./insn-flags.h"
extern  rtx gen_fix_truncsi_fisttp_i387_1( rtx ,  rtx ); 
#line 1177 "./insn-flags.h"
extern  rtx gen_fix_truncdi_fisttp_i387_1( rtx ,  rtx ); 
#line 1178 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387_fisttp( rtx ,  rtx ); 
#line 1179 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387_fisttp( rtx ,  rtx ); 
#line 1180 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387_fisttp( rtx ,  rtx ); 
#line 1181 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387_fisttp_with_temp( rtx ,  rtx ,  rtx ); 
#line 1182 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387_fisttp_with_temp( rtx ,  rtx ,  rtx ); 
#line 1183 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387_fisttp_with_temp( rtx ,  rtx ,  rtx ); 
#line 1184 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1185 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1186 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1187 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1188 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1189 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1190 "./insn-flags.h"
extern  rtx gen_x86_fnstcw_1( rtx ); 
#line 1191 "./insn-flags.h"
extern  rtx gen_x86_fldcw_1( rtx ); 
#line 1192 "./insn-flags.h"
extern  rtx gen_floathixf2( rtx ,  rtx ); 
#line 1193 "./insn-flags.h"
extern  rtx gen_floatsixf2( rtx ,  rtx ); 
#line 1194 "./insn-flags.h"
extern  rtx gen_floatdixf2( rtx ,  rtx ); 
#line 1195 "./insn-flags.h"
static __inline__  rtx gen_adddi3_carry_rex64( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1197 "./insn-flags.h"
static __inline__  rtx gen_adddi3_carry_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1198 "./insn-flags.h"
return 0; }
 
#line 1200 "./insn-flags.h"
extern  rtx gen_addqi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1201 "./insn-flags.h"
extern  rtx gen_addhi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1202 "./insn-flags.h"
extern  rtx gen_addsi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1203 "./insn-flags.h"
extern  rtx gen_addqi3_cc( rtx ,  rtx ,  rtx ); 
#line 1204 "./insn-flags.h"
static __inline__  rtx gen_addsi_1_zext( rtx ,  rtx ,  rtx ); 
#line 1206 "./insn-flags.h"
static __inline__  rtx gen_addsi_1_zext( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1207 "./insn-flags.h"
return 0; }
 
#line 1209 "./insn-flags.h"
extern  rtx gen_addqi_ext_1( rtx ,  rtx ,  rtx ); 
#line 1210 "./insn-flags.h"
static __inline__  rtx gen_subdi3_carry_rex64( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1212 "./insn-flags.h"
static __inline__  rtx gen_subdi3_carry_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1213 "./insn-flags.h"
return 0; }
 
#line 1215 "./insn-flags.h"
extern  rtx gen_subqi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1216 "./insn-flags.h"
extern  rtx gen_subhi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1217 "./insn-flags.h"
extern  rtx gen_subsi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1218 "./insn-flags.h"
static __inline__  rtx gen_subsi3_carry_zext( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1220 "./insn-flags.h"
static __inline__  rtx gen_subsi3_carry_zext( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1221 "./insn-flags.h"
return 0; }
 
#line 1223 "./insn-flags.h"
extern  rtx gen_divqi3( rtx ,  rtx ,  rtx ); 
#line 1224 "./insn-flags.h"
extern  rtx gen_udivqi3( rtx ,  rtx ,  rtx ); 
#line 1225 "./insn-flags.h"
extern  rtx gen_divmodhi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1226 "./insn-flags.h"
static __inline__  rtx gen_udivmoddi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1228 "./insn-flags.h"
static __inline__  rtx gen_udivmoddi4( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1229 "./insn-flags.h"
return 0; }
 
#line 1231 "./insn-flags.h"
extern  rtx gen_udivmodsi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1232 "./insn-flags.h"
extern  rtx gen_testsi_1( rtx ,  rtx ); 
#line 1233 "./insn-flags.h"
extern  rtx gen_andqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 1234 "./insn-flags.h"
extern  rtx gen_iorqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 1235 "./insn-flags.h"
extern  rtx gen_xorqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 1236 "./insn-flags.h"
extern  rtx gen_copysignsf3_const( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1237 "./insn-flags.h"
extern  rtx gen_copysignsf3_var( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1238 "./insn-flags.h"
extern  rtx gen_copysigndf3_const( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1239 "./insn-flags.h"
extern  rtx gen_copysigndf3_var( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1240 "./insn-flags.h"
static __inline__  rtx gen_ashlti3_1( rtx ,  rtx ,  rtx ); 
#line 1242 "./insn-flags.h"
static __inline__  rtx gen_ashlti3_1( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1243 "./insn-flags.h"
return 0; }
 
#line 1245 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shld( rtx ,  rtx ,  rtx ); 
#line 1247 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shld( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1248 "./insn-flags.h"
return 0; }
 
#line 1250 "./insn-flags.h"
extern  rtx gen_x86_shld_1( rtx ,  rtx ,  rtx ); 
#line 1251 "./insn-flags.h"
static __inline__  rtx gen_ashrti3_1( rtx ,  rtx ,  rtx ); 
#line 1253 "./insn-flags.h"
static __inline__  rtx gen_ashrti3_1( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1254 "./insn-flags.h"
return 0; }
 
#line 1256 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shrd( rtx ,  rtx ,  rtx ); 
#line 1258 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shrd( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1259 "./insn-flags.h"
return 0; }
 
#line 1261 "./insn-flags.h"
extern  rtx gen_x86_shrd_1( rtx ,  rtx ,  rtx ); 
#line 1262 "./insn-flags.h"
extern  rtx gen_ashrsi3_31( rtx ,  rtx ,  rtx ); 
#line 1263 "./insn-flags.h"
static __inline__  rtx gen_lshrti3_1( rtx ,  rtx ,  rtx ); 
#line 1265 "./insn-flags.h"
static __inline__  rtx gen_lshrti3_1( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1266 "./insn-flags.h"
return 0; }
 
#line 1268 "./insn-flags.h"
extern  rtx gen_ix86_rotldi3( rtx ,  rtx ,  rtx ); 
#line 1269 "./insn-flags.h"
extern  rtx gen_ix86_rotrdi3( rtx ,  rtx ,  rtx ); 
#line 1270 "./insn-flags.h"
extern  rtx gen_jump( rtx ); 
#line 1271 "./insn-flags.h"
extern  rtx gen_blockage( rtx ); 
#line 1272 "./insn-flags.h"
extern  rtx gen_return_internal(void ); 
#line 1273 "./insn-flags.h"
extern  rtx gen_return_internal_long(void ); 
#line 1274 "./insn-flags.h"
extern  rtx gen_return_pop_internal( rtx ); 
#line 1275 "./insn-flags.h"
extern  rtx gen_return_indirect_internal( rtx ); 
#line 1276 "./insn-flags.h"
extern  rtx gen_nop(void ); 
#line 1277 "./insn-flags.h"
extern  rtx gen_align( rtx ); 
#line 1278 "./insn-flags.h"
extern  rtx gen_set_got( rtx ); 
#line 1279 "./insn-flags.h"
static __inline__  rtx gen_set_got_rex64( rtx ); 
#line 1281 "./insn-flags.h"
static __inline__  rtx gen_set_got_rex64( rtx a __attribute__  (( __unused__ )) )  {

#line 1282 "./insn-flags.h"
return 0; }
 
#line 1284 "./insn-flags.h"
extern  rtx gen_eh_return_si( rtx ); 
#line 1285 "./insn-flags.h"
static __inline__  rtx gen_eh_return_di( rtx ); 
#line 1287 "./insn-flags.h"
static __inline__  rtx gen_eh_return_di( rtx a __attribute__  (( __unused__ )) )  {

#line 1288 "./insn-flags.h"
return 0; }
 
#line 1290 "./insn-flags.h"
extern  rtx gen_leave(void ); 
#line 1291 "./insn-flags.h"
static __inline__  rtx gen_leave_rex64(void ); 
#line 1293 "./insn-flags.h"
static __inline__  rtx gen_leave_rex64(void )  {

#line 1294 "./insn-flags.h"
return 0; }
 
#line 1296 "./insn-flags.h"
extern  rtx gen_ctzsi2( rtx ,  rtx ); 
#line 1297 "./insn-flags.h"
static __inline__  rtx gen_ctzdi2( rtx ,  rtx ); 
#line 1299 "./insn-flags.h"
static __inline__  rtx gen_ctzdi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1300 "./insn-flags.h"
return 0; }
 
#line 1302 "./insn-flags.h"
extern  rtx gen_sqrtxf2( rtx ,  rtx ); 
#line 1303 "./insn-flags.h"
extern  rtx gen_fpremxf4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1304 "./insn-flags.h"
extern  rtx gen_fprem1xf4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1305 "./insn-flags.h"
extern  rtx gen_sincosdf3( rtx ,  rtx ,  rtx ); 
#line 1306 "./insn-flags.h"
extern  rtx gen_sincossf3( rtx ,  rtx ,  rtx ); 
#line 1307 "./insn-flags.h"
extern  rtx gen_sincosxf3( rtx ,  rtx ,  rtx ); 
#line 1308 "./insn-flags.h"
extern  rtx gen_atan2df3_1( rtx ,  rtx ,  rtx ); 
#line 1309 "./insn-flags.h"
extern  rtx gen_atan2sf3_1( rtx ,  rtx ,  rtx ); 
#line 1310 "./insn-flags.h"
extern  rtx gen_atan2xf3_1( rtx ,  rtx ,  rtx ); 
#line 1311 "./insn-flags.h"
extern  rtx gen_fyl2x_xf3( rtx ,  rtx ,  rtx ); 
#line 1312 "./insn-flags.h"
extern  rtx gen_fyl2xp1_xf3( rtx ,  rtx ,  rtx ); 
#line 1313 "./insn-flags.h"
extern  rtx gen_frndintxf2( rtx ,  rtx ); 
#line 1314 "./insn-flags.h"
extern  rtx gen_fistdi2( rtx ,  rtx ); 
#line 1315 "./insn-flags.h"
extern  rtx gen_fistdi2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1316 "./insn-flags.h"
extern  rtx gen_fisthi2( rtx ,  rtx ); 
#line 1317 "./insn-flags.h"
extern  rtx gen_fistsi2( rtx ,  rtx ); 
#line 1318 "./insn-flags.h"
extern  rtx gen_fisthi2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1319 "./insn-flags.h"
extern  rtx gen_fistsi2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1320 "./insn-flags.h"
extern  rtx gen_frndintxf2_floor( rtx ,  rtx ); 
#line 1321 "./insn-flags.h"
extern  rtx gen_frndintxf2_floor_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1322 "./insn-flags.h"
extern  rtx gen_fistdi2_floor( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1323 "./insn-flags.h"
extern  rtx gen_fistdi2_floor_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1324 "./insn-flags.h"
extern  rtx gen_fisthi2_floor( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1325 "./insn-flags.h"
extern  rtx gen_fistsi2_floor( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1326 "./insn-flags.h"
extern  rtx gen_fisthi2_floor_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1327 "./insn-flags.h"
extern  rtx gen_fistsi2_floor_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1328 "./insn-flags.h"
extern  rtx gen_frndintxf2_ceil( rtx ,  rtx ); 
#line 1329 "./insn-flags.h"
extern  rtx gen_frndintxf2_ceil_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1330 "./insn-flags.h"
extern  rtx gen_fistdi2_ceil( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1331 "./insn-flags.h"
extern  rtx gen_fistdi2_ceil_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1332 "./insn-flags.h"
extern  rtx gen_fisthi2_ceil( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1333 "./insn-flags.h"
extern  rtx gen_fistsi2_ceil( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1334 "./insn-flags.h"
extern  rtx gen_fisthi2_ceil_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1335 "./insn-flags.h"
extern  rtx gen_fistsi2_ceil_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1336 "./insn-flags.h"
extern  rtx gen_frndintxf2_trunc( rtx ,  rtx ); 
#line 1337 "./insn-flags.h"
extern  rtx gen_frndintxf2_trunc_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1338 "./insn-flags.h"
extern  rtx gen_frndintxf2_mask_pm( rtx ,  rtx ); 
#line 1339 "./insn-flags.h"
extern  rtx gen_frndintxf2_mask_pm_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1340 "./insn-flags.h"
extern  rtx gen_cld(void ); 
#line 1341 "./insn-flags.h"
static __inline__  rtx gen_x86_movdicc_0_m1_rex64( rtx ,  rtx ); 
#line 1343 "./insn-flags.h"
static __inline__  rtx gen_x86_movdicc_0_m1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1344 "./insn-flags.h"
return 0; }
 
#line 1346 "./insn-flags.h"
extern  rtx gen_x86_movsicc_0_m1( rtx ,  rtx ); 
#line 1347 "./insn-flags.h"
extern  rtx gen_sminsf3( rtx ,  rtx ,  rtx ); 
#line 1348 "./insn-flags.h"
extern  rtx gen_smaxsf3( rtx ,  rtx ,  rtx ); 
#line 1349 "./insn-flags.h"
extern  rtx gen_smindf3( rtx ,  rtx ,  rtx ); 
#line 1350 "./insn-flags.h"
extern  rtx gen_smaxdf3( rtx ,  rtx ,  rtx ); 
#line 1351 "./insn-flags.h"
extern  rtx gen_pro_epilogue_adjust_stack_1( rtx ,  rtx ,  rtx ); 
#line 1352 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64( rtx ,  rtx ,  rtx ); 
#line 1354 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1355 "./insn-flags.h"
return 0; }
 
#line 1357 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64_2( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1359 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64_2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1360 "./insn-flags.h"
return 0; }
 
#line 1362 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker_1( rtx ); 
#line 1363 "./insn-flags.h"
static __inline__  rtx gen_allocate_stack_worker_rex64( rtx ); 
#line 1365 "./insn-flags.h"
static __inline__  rtx gen_allocate_stack_worker_rex64( rtx a __attribute__  (( __unused__ )) )  {

#line 1366 "./insn-flags.h"
return 0; }
 
#line 1368 "./insn-flags.h"
extern  rtx gen_trap(void ); 
#line 1369 "./insn-flags.h"
extern  rtx gen_stack_protect_set_si( rtx ,  rtx ); 
#line 1370 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_set_di( rtx ,  rtx ); 
#line 1372 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_set_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1373 "./insn-flags.h"
return 0; }
 
#line 1375 "./insn-flags.h"
extern  rtx gen_stack_tls_protect_set_si( rtx ,  rtx ); 
#line 1376 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_set_di( rtx ,  rtx ); 
#line 1378 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_set_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1379 "./insn-flags.h"
return 0; }
 
#line 1381 "./insn-flags.h"
extern  rtx gen_stack_protect_test_si( rtx ,  rtx ,  rtx ); 
#line 1382 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_test_di( rtx ,  rtx ,  rtx ); 
#line 1384 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_test_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1385 "./insn-flags.h"
return 0; }
 
#line 1387 "./insn-flags.h"
extern  rtx gen_stack_tls_protect_test_si( rtx ,  rtx ,  rtx ); 
#line 1388 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_test_di( rtx ,  rtx ,  rtx ); 
#line 1390 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_test_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1391 "./insn-flags.h"
return 0; }
 
#line 1393 "./insn-flags.h"
extern  rtx gen_sse_movups( rtx ,  rtx ); 
#line 1394 "./insn-flags.h"
extern  rtx gen_sse2_movupd( rtx ,  rtx ); 
#line 1395 "./insn-flags.h"
extern  rtx gen_sse2_movdqu( rtx ,  rtx ); 
#line 1396 "./insn-flags.h"
extern  rtx gen_sse_movntv4sf( rtx ,  rtx ); 
#line 1397 "./insn-flags.h"
extern  rtx gen_sse2_movntv2df( rtx ,  rtx ); 
#line 1398 "./insn-flags.h"
extern  rtx gen_sse2_movntv2di( rtx ,  rtx ); 
#line 1399 "./insn-flags.h"
extern  rtx gen_sse2_movntsi( rtx ,  rtx ); 
#line 1400 "./insn-flags.h"
extern  rtx gen_sse3_lddqu( rtx ,  rtx ); 
#line 1401 "./insn-flags.h"
extern  rtx gen_sse_vmaddv4sf3( rtx ,  rtx ,  rtx ); 
#line 1402 "./insn-flags.h"
extern  rtx gen_sse_vmsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1403 "./insn-flags.h"
extern  rtx gen_sse_vmmulv4sf3( rtx ,  rtx ,  rtx ); 
#line 1404 "./insn-flags.h"
extern  rtx gen_sse_vmdivv4sf3( rtx ,  rtx ,  rtx ); 
#line 1405 "./insn-flags.h"
extern  rtx gen_sse_rcpv4sf2( rtx ,  rtx ); 
#line 1406 "./insn-flags.h"
extern  rtx gen_sse_vmrcpv4sf2( rtx ,  rtx ,  rtx ); 
#line 1407 "./insn-flags.h"
extern  rtx gen_sse_rsqrtv4sf2( rtx ,  rtx ); 
#line 1408 "./insn-flags.h"
extern  rtx gen_sse_vmrsqrtv4sf2( rtx ,  rtx ,  rtx ); 
#line 1409 "./insn-flags.h"
extern  rtx gen_sqrtv4sf2( rtx ,  rtx ); 
#line 1410 "./insn-flags.h"
extern  rtx gen_sse_vmsqrtv4sf2( rtx ,  rtx ,  rtx ); 
#line 1411 "./insn-flags.h"
extern  rtx gen_sse_vmsmaxv4sf3( rtx ,  rtx ,  rtx ); 
#line 1412 "./insn-flags.h"
extern  rtx gen_sse_vmsminv4sf3( rtx ,  rtx ,  rtx ); 
#line 1413 "./insn-flags.h"
extern  rtx gen_sse3_addsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1414 "./insn-flags.h"
extern  rtx gen_sse3_haddv4sf3( rtx ,  rtx ,  rtx ); 
#line 1415 "./insn-flags.h"
extern  rtx gen_sse3_hsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1416 "./insn-flags.h"
extern  rtx gen_sse_maskcmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1417 "./insn-flags.h"
extern  rtx gen_sse_vmmaskcmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1418 "./insn-flags.h"
extern  rtx gen_sse_comi( rtx ,  rtx ); 
#line 1419 "./insn-flags.h"
extern  rtx gen_sse_ucomi( rtx ,  rtx ); 
#line 1420 "./insn-flags.h"
extern  rtx gen_sse_nandv4sf3( rtx ,  rtx ,  rtx ); 
#line 1421 "./insn-flags.h"
extern  rtx gen_sse_cvtpi2ps( rtx ,  rtx ,  rtx ); 
#line 1422 "./insn-flags.h"
extern  rtx gen_sse_cvtps2pi( rtx ,  rtx ); 
#line 1423 "./insn-flags.h"
extern  rtx gen_sse_cvttps2pi( rtx ,  rtx ); 
#line 1424 "./insn-flags.h"
extern  rtx gen_sse_cvtsi2ss( rtx ,  rtx ,  rtx ); 
#line 1425 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtsi2ssq( rtx ,  rtx ,  rtx ); 
#line 1427 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtsi2ssq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1428 "./insn-flags.h"
return 0; }
 
#line 1430 "./insn-flags.h"
extern  rtx gen_sse_cvtss2si( rtx ,  rtx ); 
#line 1431 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtss2siq( rtx ,  rtx ); 
#line 1433 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtss2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1434 "./insn-flags.h"
return 0; }
 
#line 1436 "./insn-flags.h"
extern  rtx gen_sse_cvttss2si( rtx ,  rtx ); 
#line 1437 "./insn-flags.h"
static __inline__  rtx gen_sse_cvttss2siq( rtx ,  rtx ); 
#line 1439 "./insn-flags.h"
static __inline__  rtx gen_sse_cvttss2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1440 "./insn-flags.h"
return 0; }
 
#line 1442 "./insn-flags.h"
extern  rtx gen_sse2_cvtdq2ps( rtx ,  rtx ); 
#line 1443 "./insn-flags.h"
extern  rtx gen_sse2_cvtps2dq( rtx ,  rtx ); 
#line 1444 "./insn-flags.h"
extern  rtx gen_sse2_cvttps2dq( rtx ,  rtx ); 
#line 1445 "./insn-flags.h"
extern  rtx gen_sse_movhlps( rtx ,  rtx ,  rtx ); 
#line 1446 "./insn-flags.h"
extern  rtx gen_sse_movlhps( rtx ,  rtx ,  rtx ); 
#line 1447 "./insn-flags.h"
extern  rtx gen_sse_unpckhps( rtx ,  rtx ,  rtx ); 
#line 1448 "./insn-flags.h"
extern  rtx gen_sse_unpcklps( rtx ,  rtx ,  rtx ); 
#line 1449 "./insn-flags.h"
extern  rtx gen_sse3_movshdup( rtx ,  rtx ); 
#line 1450 "./insn-flags.h"
extern  rtx gen_sse3_movsldup( rtx ,  rtx ); 
#line 1451 "./insn-flags.h"
extern  rtx gen_sse_shufps_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1452 "./insn-flags.h"
extern  rtx gen_sse_storehps( rtx ,  rtx ); 
#line 1453 "./insn-flags.h"
extern  rtx gen_sse_loadhps( rtx ,  rtx ,  rtx ); 
#line 1454 "./insn-flags.h"
extern  rtx gen_sse_storelps( rtx ,  rtx ); 
#line 1455 "./insn-flags.h"
extern  rtx gen_sse_loadlps( rtx ,  rtx ,  rtx ); 
#line 1456 "./insn-flags.h"
extern  rtx gen_sse_movss( rtx ,  rtx ,  rtx ); 
#line 1457 "./insn-flags.h"
extern  rtx gen_sse2_vmaddv2df3( rtx ,  rtx ,  rtx ); 
#line 1458 "./insn-flags.h"
extern  rtx gen_sse2_vmsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1459 "./insn-flags.h"
extern  rtx gen_sse2_vmmulv2df3( rtx ,  rtx ,  rtx ); 
#line 1460 "./insn-flags.h"
extern  rtx gen_sse2_vmdivv2df3( rtx ,  rtx ,  rtx ); 
#line 1461 "./insn-flags.h"
extern  rtx gen_sqrtv2df2( rtx ,  rtx ); 
#line 1462 "./insn-flags.h"
extern  rtx gen_sse2_vmsqrtv2df2( rtx ,  rtx ,  rtx ); 
#line 1463 "./insn-flags.h"
extern  rtx gen_sse2_vmsmaxv2df3( rtx ,  rtx ,  rtx ); 
#line 1464 "./insn-flags.h"
extern  rtx gen_sse2_vmsminv2df3( rtx ,  rtx ,  rtx ); 
#line 1465 "./insn-flags.h"
extern  rtx gen_sse3_addsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1466 "./insn-flags.h"
extern  rtx gen_sse3_haddv2df3( rtx ,  rtx ,  rtx ); 
#line 1467 "./insn-flags.h"
extern  rtx gen_sse3_hsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1468 "./insn-flags.h"
extern  rtx gen_sse2_maskcmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1469 "./insn-flags.h"
extern  rtx gen_sse2_vmmaskcmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1470 "./insn-flags.h"
extern  rtx gen_sse2_comi( rtx ,  rtx ); 
#line 1471 "./insn-flags.h"
extern  rtx gen_sse2_ucomi( rtx ,  rtx ); 
#line 1472 "./insn-flags.h"
extern  rtx gen_sse2_nandv2df3( rtx ,  rtx ,  rtx ); 
#line 1473 "./insn-flags.h"
extern  rtx gen_sse2_cvtpi2pd( rtx ,  rtx ); 
#line 1474 "./insn-flags.h"
extern  rtx gen_sse2_cvtpd2pi( rtx ,  rtx ); 
#line 1475 "./insn-flags.h"
extern  rtx gen_sse2_cvttpd2pi( rtx ,  rtx ); 
#line 1476 "./insn-flags.h"
extern  rtx gen_sse2_cvtsi2sd( rtx ,  rtx ,  rtx ); 
#line 1477 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsi2sdq( rtx ,  rtx ,  rtx ); 
#line 1479 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsi2sdq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1480 "./insn-flags.h"
return 0; }
 
#line 1482 "./insn-flags.h"
extern  rtx gen_sse2_cvtsd2si( rtx ,  rtx ); 
#line 1483 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsd2siq( rtx ,  rtx ); 
#line 1485 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsd2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1486 "./insn-flags.h"
return 0; }
 
#line 1488 "./insn-flags.h"
extern  rtx gen_sse2_cvttsd2si( rtx ,  rtx ); 
#line 1489 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvttsd2siq( rtx ,  rtx ); 
#line 1491 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvttsd2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1492 "./insn-flags.h"
return 0; }
 
#line 1494 "./insn-flags.h"
extern  rtx gen_sse2_cvtdq2pd( rtx ,  rtx ); 
#line 1495 "./insn-flags.h"
extern  rtx gen_sse2_cvtsd2ss( rtx ,  rtx ,  rtx ); 
#line 1496 "./insn-flags.h"
extern  rtx gen_sse2_cvtss2sd( rtx ,  rtx ,  rtx ); 
#line 1497 "./insn-flags.h"
extern  rtx gen_sse2_cvtps2pd( rtx ,  rtx ); 
#line 1498 "./insn-flags.h"
extern  rtx gen_sse2_unpckhpd( rtx ,  rtx ,  rtx ); 
#line 1499 "./insn-flags.h"
extern  rtx gen_sse2_unpcklpd( rtx ,  rtx ,  rtx ); 
#line 1500 "./insn-flags.h"
extern  rtx gen_sse2_shufpd_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1501 "./insn-flags.h"
extern  rtx gen_sse2_storehpd( rtx ,  rtx ); 
#line 1502 "./insn-flags.h"
extern  rtx gen_sse2_storelpd( rtx ,  rtx ); 
#line 1503 "./insn-flags.h"
extern  rtx gen_sse2_loadhpd( rtx ,  rtx ,  rtx ); 
#line 1504 "./insn-flags.h"
extern  rtx gen_sse2_loadlpd( rtx ,  rtx ,  rtx ); 
#line 1505 "./insn-flags.h"
extern  rtx gen_sse2_movsd( rtx ,  rtx ,  rtx ); 
#line 1506 "./insn-flags.h"
extern  rtx gen_sse2_ssaddv16qi3( rtx ,  rtx ,  rtx ); 
#line 1507 "./insn-flags.h"
extern  rtx gen_sse2_ssaddv8hi3( rtx ,  rtx ,  rtx ); 
#line 1508 "./insn-flags.h"
extern  rtx gen_sse2_usaddv16qi3( rtx ,  rtx ,  rtx ); 
#line 1509 "./insn-flags.h"
extern  rtx gen_sse2_usaddv8hi3( rtx ,  rtx ,  rtx ); 
#line 1510 "./insn-flags.h"
extern  rtx gen_sse2_sssubv16qi3( rtx ,  rtx ,  rtx ); 
#line 1511 "./insn-flags.h"
extern  rtx gen_sse2_sssubv8hi3( rtx ,  rtx ,  rtx ); 
#line 1512 "./insn-flags.h"
extern  rtx gen_sse2_ussubv16qi3( rtx ,  rtx ,  rtx ); 
#line 1513 "./insn-flags.h"
extern  rtx gen_sse2_ussubv8hi3( rtx ,  rtx ,  rtx ); 
#line 1514 "./insn-flags.h"
extern  rtx gen_sse2_smulv8hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1515 "./insn-flags.h"
extern  rtx gen_sse2_umulv8hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1516 "./insn-flags.h"
extern  rtx gen_sse2_umulv2siv2di3( rtx ,  rtx ,  rtx ); 
#line 1517 "./insn-flags.h"
extern  rtx gen_sse2_pmaddwd( rtx ,  rtx ,  rtx ); 
#line 1518 "./insn-flags.h"
extern  rtx gen_ashrv8hi3( rtx ,  rtx ,  rtx ); 
#line 1519 "./insn-flags.h"
extern  rtx gen_ashrv4si3( rtx ,  rtx ,  rtx ); 
#line 1520 "./insn-flags.h"
extern  rtx gen_lshrv8hi3( rtx ,  rtx ,  rtx ); 
#line 1521 "./insn-flags.h"
extern  rtx gen_lshrv4si3( rtx ,  rtx ,  rtx ); 
#line 1522 "./insn-flags.h"
extern  rtx gen_lshrv2di3( rtx ,  rtx ,  rtx ); 
#line 1523 "./insn-flags.h"
extern  rtx gen_ashlv8hi3( rtx ,  rtx ,  rtx ); 
#line 1524 "./insn-flags.h"
extern  rtx gen_ashlv4si3( rtx ,  rtx ,  rtx ); 
#line 1525 "./insn-flags.h"
extern  rtx gen_ashlv2di3( rtx ,  rtx ,  rtx ); 
#line 1526 "./insn-flags.h"
extern  rtx gen_sse2_ashlti3( rtx ,  rtx ,  rtx ); 
#line 1527 "./insn-flags.h"
extern  rtx gen_sse2_lshrti3( rtx ,  rtx ,  rtx ); 
#line 1528 "./insn-flags.h"
extern  rtx gen_sse2_eqv16qi3( rtx ,  rtx ,  rtx ); 
#line 1529 "./insn-flags.h"
extern  rtx gen_sse2_eqv8hi3( rtx ,  rtx ,  rtx ); 
#line 1530 "./insn-flags.h"
extern  rtx gen_sse2_eqv4si3( rtx ,  rtx ,  rtx ); 
#line 1531 "./insn-flags.h"
extern  rtx gen_sse2_gtv16qi3( rtx ,  rtx ,  rtx ); 
#line 1532 "./insn-flags.h"
extern  rtx gen_sse2_gtv8hi3( rtx ,  rtx ,  rtx ); 
#line 1533 "./insn-flags.h"
extern  rtx gen_sse2_gtv4si3( rtx ,  rtx ,  rtx ); 
#line 1534 "./insn-flags.h"
extern  rtx gen_sse2_nandv16qi3( rtx ,  rtx ,  rtx ); 
#line 1535 "./insn-flags.h"
extern  rtx gen_sse2_nandv8hi3( rtx ,  rtx ,  rtx ); 
#line 1536 "./insn-flags.h"
extern  rtx gen_sse2_nandv4si3( rtx ,  rtx ,  rtx ); 
#line 1537 "./insn-flags.h"
extern  rtx gen_sse2_nandv2di3( rtx ,  rtx ,  rtx ); 
#line 1538 "./insn-flags.h"
extern  rtx gen_sse2_packsswb( rtx ,  rtx ,  rtx ); 
#line 1539 "./insn-flags.h"
extern  rtx gen_sse2_packssdw( rtx ,  rtx ,  rtx ); 
#line 1540 "./insn-flags.h"
extern  rtx gen_sse2_packuswb( rtx ,  rtx ,  rtx ); 
#line 1541 "./insn-flags.h"
extern  rtx gen_sse2_punpckhbw( rtx ,  rtx ,  rtx ); 
#line 1542 "./insn-flags.h"
extern  rtx gen_sse2_punpcklbw( rtx ,  rtx ,  rtx ); 
#line 1543 "./insn-flags.h"
extern  rtx gen_sse2_punpckhwd( rtx ,  rtx ,  rtx ); 
#line 1544 "./insn-flags.h"
extern  rtx gen_sse2_punpcklwd( rtx ,  rtx ,  rtx ); 
#line 1545 "./insn-flags.h"
extern  rtx gen_sse2_punpckhdq( rtx ,  rtx ,  rtx ); 
#line 1546 "./insn-flags.h"
extern  rtx gen_sse2_punpckldq( rtx ,  rtx ,  rtx ); 
#line 1547 "./insn-flags.h"
extern  rtx gen_sse2_punpckhqdq( rtx ,  rtx ,  rtx ); 
#line 1548 "./insn-flags.h"
extern  rtx gen_sse2_punpcklqdq( rtx ,  rtx ,  rtx ); 
#line 1549 "./insn-flags.h"
extern  rtx gen_sse2_pextrw( rtx ,  rtx ,  rtx ); 
#line 1550 "./insn-flags.h"
extern  rtx gen_sse2_pshufd_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1551 "./insn-flags.h"
extern  rtx gen_sse2_pshuflw_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1552 "./insn-flags.h"
extern  rtx gen_sse2_pshufhw_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1553 "./insn-flags.h"
extern  rtx gen_sse2_loadld( rtx ,  rtx ,  rtx ); 
#line 1554 "./insn-flags.h"
extern  rtx gen_sse2_stored( rtx ,  rtx ); 
#line 1555 "./insn-flags.h"
extern  rtx gen_sse2_uavgv16qi3( rtx ,  rtx ,  rtx ); 
#line 1556 "./insn-flags.h"
extern  rtx gen_sse2_uavgv8hi3( rtx ,  rtx ,  rtx ); 
#line 1557 "./insn-flags.h"
extern  rtx gen_sse2_psadbw( rtx ,  rtx ,  rtx ); 
#line 1558 "./insn-flags.h"
extern  rtx gen_sse_movmskps( rtx ,  rtx ); 
#line 1559 "./insn-flags.h"
extern  rtx gen_sse2_movmskpd( rtx ,  rtx ); 
#line 1560 "./insn-flags.h"
extern  rtx gen_sse2_pmovmskb( rtx ,  rtx ); 
#line 1561 "./insn-flags.h"
extern  rtx gen_sse_ldmxcsr( rtx ); 
#line 1562 "./insn-flags.h"
extern  rtx gen_sse_stmxcsr( rtx ); 
#line 1563 "./insn-flags.h"
extern  rtx gen_sse2_clflush( rtx ); 
#line 1564 "./insn-flags.h"
extern  rtx gen_sse3_mwait( rtx ,  rtx ); 
#line 1565 "./insn-flags.h"
extern  rtx gen_sse3_monitor( rtx ,  rtx ,  rtx ); 
#line 1566 "./insn-flags.h"
extern  rtx gen_sse_movntdi( rtx ,  rtx ); 
#line 1567 "./insn-flags.h"
extern  rtx gen_mmx_addv2sf3( rtx ,  rtx ,  rtx ); 
#line 1568 "./insn-flags.h"
extern  rtx gen_mmx_subv2sf3( rtx ,  rtx ,  rtx ); 
#line 1569 "./insn-flags.h"
extern  rtx gen_mmx_mulv2sf3( rtx ,  rtx ,  rtx ); 
#line 1570 "./insn-flags.h"
extern  rtx gen_mmx_smaxv2sf3( rtx ,  rtx ,  rtx ); 
#line 1571 "./insn-flags.h"
extern  rtx gen_mmx_sminv2sf3( rtx ,  rtx ,  rtx ); 
#line 1572 "./insn-flags.h"
extern  rtx gen_mmx_rcpv2sf2( rtx ,  rtx ); 
#line 1573 "./insn-flags.h"
extern  rtx gen_mmx_rcpit1v2sf3( rtx ,  rtx ,  rtx ); 
#line 1574 "./insn-flags.h"
extern  rtx gen_mmx_rcpit2v2sf3( rtx ,  rtx ,  rtx ); 
#line 1575 "./insn-flags.h"
extern  rtx gen_mmx_rsqrtv2sf2( rtx ,  rtx ); 
#line 1576 "./insn-flags.h"
extern  rtx gen_mmx_rsqit1v2sf3( rtx ,  rtx ,  rtx ); 
#line 1577 "./insn-flags.h"
extern  rtx gen_mmx_haddv2sf3( rtx ,  rtx ,  rtx ); 
#line 1578 "./insn-flags.h"
extern  rtx gen_mmx_hsubv2sf3( rtx ,  rtx ,  rtx ); 
#line 1579 "./insn-flags.h"
extern  rtx gen_mmx_addsubv2sf3( rtx ,  rtx ,  rtx ); 
#line 1580 "./insn-flags.h"
extern  rtx gen_mmx_gtv2sf3( rtx ,  rtx ,  rtx ); 
#line 1581 "./insn-flags.h"
extern  rtx gen_mmx_gev2sf3( rtx ,  rtx ,  rtx ); 
#line 1582 "./insn-flags.h"
extern  rtx gen_mmx_eqv2sf3( rtx ,  rtx ,  rtx ); 
#line 1583 "./insn-flags.h"
extern  rtx gen_mmx_pf2id( rtx ,  rtx ); 
#line 1584 "./insn-flags.h"
extern  rtx gen_mmx_pf2iw( rtx ,  rtx ); 
#line 1585 "./insn-flags.h"
extern  rtx gen_mmx_pi2fw( rtx ,  rtx ); 
#line 1586 "./insn-flags.h"
extern  rtx gen_mmx_floatv2si2( rtx ,  rtx ); 
#line 1587 "./insn-flags.h"
extern  rtx gen_mmx_pswapdv2sf2( rtx ,  rtx ); 
#line 1588 "./insn-flags.h"
extern  rtx gen_mmx_addv8qi3( rtx ,  rtx ,  rtx ); 
#line 1589 "./insn-flags.h"
extern  rtx gen_mmx_addv4hi3( rtx ,  rtx ,  rtx ); 
#line 1590 "./insn-flags.h"
extern  rtx gen_mmx_addv2si3( rtx ,  rtx ,  rtx ); 
#line 1591 "./insn-flags.h"
extern  rtx gen_mmx_adddi3( rtx ,  rtx ,  rtx ); 
#line 1592 "./insn-flags.h"
extern  rtx gen_mmx_ssaddv8qi3( rtx ,  rtx ,  rtx ); 
#line 1593 "./insn-flags.h"
extern  rtx gen_mmx_ssaddv4hi3( rtx ,  rtx ,  rtx ); 
#line 1594 "./insn-flags.h"
extern  rtx gen_mmx_usaddv8qi3( rtx ,  rtx ,  rtx ); 
#line 1595 "./insn-flags.h"
extern  rtx gen_mmx_usaddv4hi3( rtx ,  rtx ,  rtx ); 
#line 1596 "./insn-flags.h"
extern  rtx gen_mmx_subv8qi3( rtx ,  rtx ,  rtx ); 
#line 1597 "./insn-flags.h"
extern  rtx gen_mmx_subv4hi3( rtx ,  rtx ,  rtx ); 
#line 1598 "./insn-flags.h"
extern  rtx gen_mmx_subv2si3( rtx ,  rtx ,  rtx ); 
#line 1599 "./insn-flags.h"
extern  rtx gen_mmx_subdi3( rtx ,  rtx ,  rtx ); 
#line 1600 "./insn-flags.h"
extern  rtx gen_mmx_sssubv8qi3( rtx ,  rtx ,  rtx ); 
#line 1601 "./insn-flags.h"
extern  rtx gen_mmx_sssubv4hi3( rtx ,  rtx ,  rtx ); 
#line 1602 "./insn-flags.h"
extern  rtx gen_mmx_ussubv8qi3( rtx ,  rtx ,  rtx ); 
#line 1603 "./insn-flags.h"
extern  rtx gen_mmx_ussubv4hi3( rtx ,  rtx ,  rtx ); 
#line 1604 "./insn-flags.h"
extern  rtx gen_mmx_mulv4hi3( rtx ,  rtx ,  rtx ); 
#line 1605 "./insn-flags.h"
extern  rtx gen_mmx_smulv4hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1606 "./insn-flags.h"
extern  rtx gen_mmx_umulv4hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1607 "./insn-flags.h"
extern  rtx gen_mmx_pmaddwd( rtx ,  rtx ,  rtx ); 
#line 1608 "./insn-flags.h"
extern  rtx gen_mmx_pmulhrwv4hi3( rtx ,  rtx ,  rtx ); 
#line 1609 "./insn-flags.h"
extern  rtx gen_sse2_umulsidi3( rtx ,  rtx ,  rtx ); 
#line 1610 "./insn-flags.h"
extern  rtx gen_mmx_umaxv8qi3( rtx ,  rtx ,  rtx ); 
#line 1611 "./insn-flags.h"
extern  rtx gen_mmx_smaxv4hi3( rtx ,  rtx ,  rtx ); 
#line 1612 "./insn-flags.h"
extern  rtx gen_mmx_uminv8qi3( rtx ,  rtx ,  rtx ); 
#line 1613 "./insn-flags.h"
extern  rtx gen_mmx_sminv4hi3( rtx ,  rtx ,  rtx ); 
#line 1614 "./insn-flags.h"
extern  rtx gen_mmx_ashrv4hi3( rtx ,  rtx ,  rtx ); 
#line 1615 "./insn-flags.h"
extern  rtx gen_mmx_ashrv2si3( rtx ,  rtx ,  rtx ); 
#line 1616 "./insn-flags.h"
extern  rtx gen_mmx_lshrv4hi3( rtx ,  rtx ,  rtx ); 
#line 1617 "./insn-flags.h"
extern  rtx gen_mmx_lshrv2si3( rtx ,  rtx ,  rtx ); 
#line 1618 "./insn-flags.h"
extern  rtx gen_mmx_lshrdi3( rtx ,  rtx ,  rtx ); 
#line 1619 "./insn-flags.h"
extern  rtx gen_mmx_ashlv4hi3( rtx ,  rtx ,  rtx ); 
#line 1620 "./insn-flags.h"
extern  rtx gen_mmx_ashlv2si3( rtx ,  rtx ,  rtx ); 
#line 1621 "./insn-flags.h"
extern  rtx gen_mmx_ashldi3( rtx ,  rtx ,  rtx ); 
#line 1622 "./insn-flags.h"
extern  rtx gen_mmx_eqv8qi3( rtx ,  rtx ,  rtx ); 
#line 1623 "./insn-flags.h"
extern  rtx gen_mmx_eqv4hi3( rtx ,  rtx ,  rtx ); 
#line 1624 "./insn-flags.h"
extern  rtx gen_mmx_eqv2si3( rtx ,  rtx ,  rtx ); 
#line 1625 "./insn-flags.h"
extern  rtx gen_mmx_gtv8qi3( rtx ,  rtx ,  rtx ); 
#line 1626 "./insn-flags.h"
extern  rtx gen_mmx_gtv4hi3( rtx ,  rtx ,  rtx ); 
#line 1627 "./insn-flags.h"
extern  rtx gen_mmx_gtv2si3( rtx ,  rtx ,  rtx ); 
#line 1628 "./insn-flags.h"
extern  rtx gen_mmx_andv8qi3( rtx ,  rtx ,  rtx ); 
#line 1629 "./insn-flags.h"
extern  rtx gen_mmx_andv4hi3( rtx ,  rtx ,  rtx ); 
#line 1630 "./insn-flags.h"
extern  rtx gen_mmx_andv2si3( rtx ,  rtx ,  rtx ); 
#line 1631 "./insn-flags.h"
extern  rtx gen_mmx_nandv8qi3( rtx ,  rtx ,  rtx ); 
#line 1632 "./insn-flags.h"
extern  rtx gen_mmx_nandv4hi3( rtx ,  rtx ,  rtx ); 
#line 1633 "./insn-flags.h"
extern  rtx gen_mmx_nandv2si3( rtx ,  rtx ,  rtx ); 
#line 1634 "./insn-flags.h"
extern  rtx gen_mmx_iorv8qi3( rtx ,  rtx ,  rtx ); 
#line 1635 "./insn-flags.h"
extern  rtx gen_mmx_iorv4hi3( rtx ,  rtx ,  rtx ); 
#line 1636 "./insn-flags.h"
extern  rtx gen_mmx_iorv2si3( rtx ,  rtx ,  rtx ); 
#line 1637 "./insn-flags.h"
extern  rtx gen_mmx_xorv8qi3( rtx ,  rtx ,  rtx ); 
#line 1638 "./insn-flags.h"
extern  rtx gen_mmx_xorv4hi3( rtx ,  rtx ,  rtx ); 
#line 1639 "./insn-flags.h"
extern  rtx gen_mmx_xorv2si3( rtx ,  rtx ,  rtx ); 
#line 1640 "./insn-flags.h"
extern  rtx gen_mmx_packsswb( rtx ,  rtx ,  rtx ); 
#line 1641 "./insn-flags.h"
extern  rtx gen_mmx_packssdw( rtx ,  rtx ,  rtx ); 
#line 1642 "./insn-flags.h"
extern  rtx gen_mmx_packuswb( rtx ,  rtx ,  rtx ); 
#line 1643 "./insn-flags.h"
extern  rtx gen_mmx_punpckhbw( rtx ,  rtx ,  rtx ); 
#line 1644 "./insn-flags.h"
extern  rtx gen_mmx_punpcklbw( rtx ,  rtx ,  rtx ); 
#line 1645 "./insn-flags.h"
extern  rtx gen_mmx_punpckhwd( rtx ,  rtx ,  rtx ); 
#line 1646 "./insn-flags.h"
extern  rtx gen_mmx_punpcklwd( rtx ,  rtx ,  rtx ); 
#line 1647 "./insn-flags.h"
extern  rtx gen_mmx_punpckhdq( rtx ,  rtx ,  rtx ); 
#line 1648 "./insn-flags.h"
extern  rtx gen_mmx_punpckldq( rtx ,  rtx ,  rtx ); 
#line 1649 "./insn-flags.h"
extern  rtx gen_mmx_pextrw( rtx ,  rtx ,  rtx ); 
#line 1650 "./insn-flags.h"
extern  rtx gen_mmx_pshufw_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1651 "./insn-flags.h"
extern  rtx gen_mmx_pswapdv2si2( rtx ,  rtx ); 
#line 1652 "./insn-flags.h"
extern  rtx gen_mmx_uavgv8qi3( rtx ,  rtx ,  rtx ); 
#line 1653 "./insn-flags.h"
extern  rtx gen_mmx_uavgv4hi3( rtx ,  rtx ,  rtx ); 
#line 1654 "./insn-flags.h"
extern  rtx gen_mmx_psadbw( rtx ,  rtx ,  rtx ); 
#line 1655 "./insn-flags.h"
extern  rtx gen_mmx_pmovmskb( rtx ,  rtx ); 
#line 1656 "./insn-flags.h"
extern  rtx gen_mmx_emms(void ); 
#line 1657 "./insn-flags.h"
extern  rtx gen_mmx_femms(void ); 
#line 1658 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swapqi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1659 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swaphi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1660 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swapsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1661 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swapdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1663 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swapdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1664 "./insn-flags.h"
return 0; }
 
#line 1666 "./insn-flags.h"
extern  rtx gen_sync_old_addqi( rtx ,  rtx ,  rtx ); 
#line 1667 "./insn-flags.h"
extern  rtx gen_sync_old_addhi( rtx ,  rtx ,  rtx ); 
#line 1668 "./insn-flags.h"
extern  rtx gen_sync_old_addsi( rtx ,  rtx ,  rtx ); 
#line 1669 "./insn-flags.h"
static __inline__  rtx gen_sync_old_adddi( rtx ,  rtx ,  rtx ); 
#line 1671 "./insn-flags.h"
static __inline__  rtx gen_sync_old_adddi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1672 "./insn-flags.h"
return 0; }
 
#line 1674 "./insn-flags.h"
extern  rtx gen_sync_lock_test_and_setqi( rtx ,  rtx ,  rtx ); 
#line 1675 "./insn-flags.h"
extern  rtx gen_sync_lock_test_and_sethi( rtx ,  rtx ,  rtx ); 
#line 1676 "./insn-flags.h"
extern  rtx gen_sync_lock_test_and_setsi( rtx ,  rtx ,  rtx ); 
#line 1677 "./insn-flags.h"
static __inline__  rtx gen_sync_lock_test_and_setdi( rtx ,  rtx ,  rtx ); 
#line 1679 "./insn-flags.h"
static __inline__  rtx gen_sync_lock_test_and_setdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1680 "./insn-flags.h"
return 0; }
 
#line 1682 "./insn-flags.h"
extern  rtx gen_sync_addqi( rtx ,  rtx ); 
#line 1683 "./insn-flags.h"
extern  rtx gen_sync_addhi( rtx ,  rtx ); 
#line 1684 "./insn-flags.h"
extern  rtx gen_sync_addsi( rtx ,  rtx ); 
#line 1685 "./insn-flags.h"
static __inline__  rtx gen_sync_adddi( rtx ,  rtx ); 
#line 1687 "./insn-flags.h"
static __inline__  rtx gen_sync_adddi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1688 "./insn-flags.h"
return 0; }
 
#line 1690 "./insn-flags.h"
extern  rtx gen_sync_subqi( rtx ,  rtx ); 
#line 1691 "./insn-flags.h"
extern  rtx gen_sync_subhi( rtx ,  rtx ); 
#line 1692 "./insn-flags.h"
extern  rtx gen_sync_subsi( rtx ,  rtx ); 
#line 1693 "./insn-flags.h"
static __inline__  rtx gen_sync_subdi( rtx ,  rtx ); 
#line 1695 "./insn-flags.h"
static __inline__  rtx gen_sync_subdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1696 "./insn-flags.h"
return 0; }
 
#line 1698 "./insn-flags.h"
extern  rtx gen_sync_iorqi( rtx ,  rtx ); 
#line 1699 "./insn-flags.h"
extern  rtx gen_sync_iorhi( rtx ,  rtx ); 
#line 1700 "./insn-flags.h"
extern  rtx gen_sync_iorsi( rtx ,  rtx ); 
#line 1701 "./insn-flags.h"
static __inline__  rtx gen_sync_iordi( rtx ,  rtx ); 
#line 1703 "./insn-flags.h"
static __inline__  rtx gen_sync_iordi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1704 "./insn-flags.h"
return 0; }
 
#line 1706 "./insn-flags.h"
extern  rtx gen_sync_andqi( rtx ,  rtx ); 
#line 1707 "./insn-flags.h"
extern  rtx gen_sync_andhi( rtx ,  rtx ); 
#line 1708 "./insn-flags.h"
extern  rtx gen_sync_andsi( rtx ,  rtx ); 
#line 1709 "./insn-flags.h"
static __inline__  rtx gen_sync_anddi( rtx ,  rtx ); 
#line 1711 "./insn-flags.h"
static __inline__  rtx gen_sync_anddi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1712 "./insn-flags.h"
return 0; }
 
#line 1714 "./insn-flags.h"
extern  rtx gen_sync_xorqi( rtx ,  rtx ); 
#line 1715 "./insn-flags.h"
extern  rtx gen_sync_xorhi( rtx ,  rtx ); 
#line 1716 "./insn-flags.h"
extern  rtx gen_sync_xorsi( rtx ,  rtx ); 
#line 1717 "./insn-flags.h"
static __inline__  rtx gen_sync_xordi( rtx ,  rtx ); 
#line 1719 "./insn-flags.h"
static __inline__  rtx gen_sync_xordi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1720 "./insn-flags.h"
return 0; }
 
#line 1722 "./insn-flags.h"
static __inline__  rtx gen_cmpti( rtx ,  rtx ); 
#line 1724 "./insn-flags.h"
static __inline__  rtx gen_cmpti( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1725 "./insn-flags.h"
return 0; }
 
#line 1727 "./insn-flags.h"
extern  rtx gen_cmpdi( rtx ,  rtx ); 
#line 1728 "./insn-flags.h"
extern  rtx gen_cmpsi( rtx ,  rtx ); 
#line 1729 "./insn-flags.h"
extern  rtx gen_cmphi( rtx ,  rtx ); 
#line 1730 "./insn-flags.h"
extern  rtx gen_cmpqi( rtx ,  rtx ); 
#line 1731 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_rex64( rtx ,  rtx ); 
#line 1733 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1734 "./insn-flags.h"
return 0; }
 
#line 1736 "./insn-flags.h"
extern  rtx gen_cmpsi_1( rtx ,  rtx ); 
#line 1737 "./insn-flags.h"
extern  rtx gen_cmpqi_ext_3( rtx ,  rtx ); 
#line 1738 "./insn-flags.h"
extern  rtx gen_cmpxf( rtx ,  rtx ); 
#line 1739 "./insn-flags.h"
extern  rtx gen_cmpdf( rtx ,  rtx ); 
#line 1740 "./insn-flags.h"
extern  rtx gen_cmpsf( rtx ,  rtx ); 
#line 1741 "./insn-flags.h"
extern  rtx gen_movsi( rtx ,  rtx ); 
#line 1742 "./insn-flags.h"
extern  rtx gen_movhi( rtx ,  rtx ); 
#line 1743 "./insn-flags.h"
extern  rtx gen_movstricthi( rtx ,  rtx ); 
#line 1744 "./insn-flags.h"
extern  rtx gen_movqi( rtx ,  rtx ); 
#line 1745 "./insn-flags.h"
extern  rtx gen_reload_outqi( rtx ,  rtx ,  rtx ); 
#line 1746 "./insn-flags.h"
extern  rtx gen_movstrictqi( rtx ,  rtx ); 
#line 1747 "./insn-flags.h"
extern  rtx gen_movdi( rtx ,  rtx ); 
#line 1748 "./insn-flags.h"
extern  rtx gen_movti( rtx ,  rtx ); 
#line 1749 "./insn-flags.h"
extern  rtx gen_movsf( rtx ,  rtx ); 
#line 1750 "./insn-flags.h"
extern  rtx gen_movdf( rtx ,  rtx ); 
#line 1751 "./insn-flags.h"
extern  rtx gen_movxf( rtx ,  rtx ); 
#line 1752 "./insn-flags.h"
static __inline__  rtx gen_movtf( rtx ,  rtx ); 
#line 1754 "./insn-flags.h"
static __inline__  rtx gen_movtf( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1755 "./insn-flags.h"
return 0; }
 
#line 1757 "./insn-flags.h"
extern  rtx gen_zero_extendhisi2( rtx ,  rtx ); 
#line 1758 "./insn-flags.h"
extern  rtx gen_zero_extendqihi2( rtx ,  rtx ); 
#line 1759 "./insn-flags.h"
extern  rtx gen_zero_extendqisi2( rtx ,  rtx ); 
#line 1760 "./insn-flags.h"
extern  rtx gen_zero_extendsidi2( rtx ,  rtx ); 
#line 1761 "./insn-flags.h"
extern  rtx gen_extendsidi2( rtx ,  rtx ); 
#line 1762 "./insn-flags.h"
extern  rtx gen_extendsfdf2( rtx ,  rtx ); 
#line 1763 "./insn-flags.h"
extern  rtx gen_extendsfxf2( rtx ,  rtx ); 
#line 1764 "./insn-flags.h"
extern  rtx gen_extenddfxf2( rtx ,  rtx ); 
#line 1765 "./insn-flags.h"
extern  rtx gen_truncdfsf2( rtx ,  rtx ); 
#line 1766 "./insn-flags.h"
extern  rtx gen_truncdfsf2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1767 "./insn-flags.h"
extern  rtx gen_truncxfsf2( rtx ,  rtx ); 
#line 1768 "./insn-flags.h"
extern  rtx gen_truncxfdf2( rtx ,  rtx ); 
#line 1769 "./insn-flags.h"
extern  rtx gen_fix_truncxfdi2( rtx ,  rtx ); 
#line 1770 "./insn-flags.h"
extern  rtx gen_fix_truncsfdi2( rtx ,  rtx ); 
#line 1771 "./insn-flags.h"
extern  rtx gen_fix_truncdfdi2( rtx ,  rtx ); 
#line 1772 "./insn-flags.h"
extern  rtx gen_fix_truncxfsi2( rtx ,  rtx ); 
#line 1773 "./insn-flags.h"
extern  rtx gen_fix_truncsfsi2( rtx ,  rtx ); 
#line 1774 "./insn-flags.h"
extern  rtx gen_fix_truncdfsi2( rtx ,  rtx ); 
#line 1775 "./insn-flags.h"
extern  rtx gen_fix_truncsfhi2( rtx ,  rtx ); 
#line 1776 "./insn-flags.h"
extern  rtx gen_fix_truncdfhi2( rtx ,  rtx ); 
#line 1777 "./insn-flags.h"
extern  rtx gen_fix_truncxfhi2( rtx ,  rtx ); 
#line 1778 "./insn-flags.h"
extern  rtx gen_floathisf2( rtx ,  rtx ); 
#line 1779 "./insn-flags.h"
extern  rtx gen_floatsisf2( rtx ,  rtx ); 
#line 1780 "./insn-flags.h"
extern  rtx gen_floatdisf2( rtx ,  rtx ); 
#line 1781 "./insn-flags.h"
extern  rtx gen_floathidf2( rtx ,  rtx ); 
#line 1782 "./insn-flags.h"
extern  rtx gen_floatsidf2( rtx ,  rtx ); 
#line 1783 "./insn-flags.h"
extern  rtx gen_floatdidf2( rtx ,  rtx ); 
#line 1784 "./insn-flags.h"
extern  rtx gen_floatunssisf2( rtx ,  rtx ); 
#line 1785 "./insn-flags.h"
static __inline__  rtx gen_floatunsdisf2( rtx ,  rtx ); 
#line 1787 "./insn-flags.h"
static __inline__  rtx gen_floatunsdisf2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1788 "./insn-flags.h"
return 0; }
 
#line 1790 "./insn-flags.h"
static __inline__  rtx gen_floatunsdidf2( rtx ,  rtx ); 
#line 1792 "./insn-flags.h"
static __inline__  rtx gen_floatunsdidf2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1793 "./insn-flags.h"
return 0; }
 
#line 1795 "./insn-flags.h"
static __inline__  rtx gen_addti3( rtx ,  rtx ,  rtx ); 
#line 1797 "./insn-flags.h"
static __inline__  rtx gen_addti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1798 "./insn-flags.h"
return 0; }
 
#line 1800 "./insn-flags.h"
extern  rtx gen_adddi3( rtx ,  rtx ,  rtx ); 
#line 1801 "./insn-flags.h"
extern  rtx gen_addsi3( rtx ,  rtx ,  rtx ); 
#line 1802 "./insn-flags.h"
extern  rtx gen_addhi3( rtx ,  rtx ,  rtx ); 
#line 1803 "./insn-flags.h"
extern  rtx gen_addqi3( rtx ,  rtx ,  rtx ); 
#line 1804 "./insn-flags.h"
extern  rtx gen_addxf3( rtx ,  rtx ,  rtx ); 
#line 1805 "./insn-flags.h"
extern  rtx gen_adddf3( rtx ,  rtx ,  rtx ); 
#line 1806 "./insn-flags.h"
extern  rtx gen_addsf3( rtx ,  rtx ,  rtx ); 
#line 1807 "./insn-flags.h"
static __inline__  rtx gen_subti3( rtx ,  rtx ,  rtx ); 
#line 1809 "./insn-flags.h"
static __inline__  rtx gen_subti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1810 "./insn-flags.h"
return 0; }
 
#line 1812 "./insn-flags.h"
extern  rtx gen_subdi3( rtx ,  rtx ,  rtx ); 
#line 1813 "./insn-flags.h"
extern  rtx gen_subsi3( rtx ,  rtx ,  rtx ); 
#line 1814 "./insn-flags.h"
extern  rtx gen_subhi3( rtx ,  rtx ,  rtx ); 
#line 1815 "./insn-flags.h"
extern  rtx gen_subqi3( rtx ,  rtx ,  rtx ); 
#line 1816 "./insn-flags.h"
extern  rtx gen_subxf3( rtx ,  rtx ,  rtx ); 
#line 1817 "./insn-flags.h"
extern  rtx gen_subdf3( rtx ,  rtx ,  rtx ); 
#line 1818 "./insn-flags.h"
extern  rtx gen_subsf3( rtx ,  rtx ,  rtx ); 
#line 1819 "./insn-flags.h"
static __inline__  rtx gen_muldi3( rtx ,  rtx ,  rtx ); 
#line 1821 "./insn-flags.h"
static __inline__  rtx gen_muldi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1822 "./insn-flags.h"
return 0; }
 
#line 1824 "./insn-flags.h"
extern  rtx gen_mulsi3( rtx ,  rtx ,  rtx ); 
#line 1825 "./insn-flags.h"
extern  rtx gen_mulhi3( rtx ,  rtx ,  rtx ); 
#line 1826 "./insn-flags.h"
extern  rtx gen_mulqi3( rtx ,  rtx ,  rtx ); 
#line 1827 "./insn-flags.h"
extern  rtx gen_umulqihi3( rtx ,  rtx ,  rtx ); 
#line 1828 "./insn-flags.h"
extern  rtx gen_mulqihi3( rtx ,  rtx ,  rtx ); 
#line 1829 "./insn-flags.h"
static __inline__  rtx gen_umulditi3( rtx ,  rtx ,  rtx ); 
#line 1831 "./insn-flags.h"
static __inline__  rtx gen_umulditi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1832 "./insn-flags.h"
return 0; }
 
#line 1834 "./insn-flags.h"
extern  rtx gen_umulsidi3( rtx ,  rtx ,  rtx ); 
#line 1835 "./insn-flags.h"
static __inline__  rtx gen_mulditi3( rtx ,  rtx ,  rtx ); 
#line 1837 "./insn-flags.h"
static __inline__  rtx gen_mulditi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1838 "./insn-flags.h"
return 0; }
 
#line 1840 "./insn-flags.h"
extern  rtx gen_mulsidi3( rtx ,  rtx ,  rtx ); 
#line 1841 "./insn-flags.h"
static __inline__  rtx gen_umuldi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1843 "./insn-flags.h"
static __inline__  rtx gen_umuldi3_highpart( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1844 "./insn-flags.h"
return 0; }
 
#line 1846 "./insn-flags.h"
extern  rtx gen_umulsi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1847 "./insn-flags.h"
static __inline__  rtx gen_smuldi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1849 "./insn-flags.h"
static __inline__  rtx gen_smuldi3_highpart( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1850 "./insn-flags.h"
return 0; }
 
#line 1852 "./insn-flags.h"
extern  rtx gen_smulsi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1853 "./insn-flags.h"
extern  rtx gen_mulxf3( rtx ,  rtx ,  rtx ); 
#line 1854 "./insn-flags.h"
extern  rtx gen_muldf3( rtx ,  rtx ,  rtx ); 
#line 1855 "./insn-flags.h"
extern  rtx gen_mulsf3( rtx ,  rtx ,  rtx ); 
#line 1856 "./insn-flags.h"
extern  rtx gen_divxf3( rtx ,  rtx ,  rtx ); 
#line 1857 "./insn-flags.h"
extern  rtx gen_divdf3( rtx ,  rtx ,  rtx ); 
#line 1858 "./insn-flags.h"
extern  rtx gen_divsf3( rtx ,  rtx ,  rtx ); 
#line 1859 "./insn-flags.h"
static __inline__  rtx gen_divmoddi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1861 "./insn-flags.h"
static __inline__  rtx gen_divmoddi4( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1862 "./insn-flags.h"
return 0; }
 
#line 1864 "./insn-flags.h"
extern  rtx gen_divmodsi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1865 "./insn-flags.h"
extern  rtx gen_udivmodhi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1866 "./insn-flags.h"
extern  rtx gen_testsi_ccno_1( rtx ,  rtx ); 
#line 1867 "./insn-flags.h"
extern  rtx gen_testqi_ccz_1( rtx ,  rtx ); 
#line 1868 "./insn-flags.h"
extern  rtx gen_testqi_ext_ccno_0( rtx ,  rtx ); 
#line 1869 "./insn-flags.h"
static __inline__  rtx gen_anddi3( rtx ,  rtx ,  rtx ); 
#line 1871 "./insn-flags.h"
static __inline__  rtx gen_anddi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1872 "./insn-flags.h"
return 0; }
 
#line 1874 "./insn-flags.h"
extern  rtx gen_andsi3( rtx ,  rtx ,  rtx ); 
#line 1875 "./insn-flags.h"
extern  rtx gen_andhi3( rtx ,  rtx ,  rtx ); 
#line 1876 "./insn-flags.h"
extern  rtx gen_andqi3( rtx ,  rtx ,  rtx ); 
#line 1877 "./insn-flags.h"
static __inline__  rtx gen_iordi3( rtx ,  rtx ,  rtx ); 
#line 1879 "./insn-flags.h"
static __inline__  rtx gen_iordi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1880 "./insn-flags.h"
return 0; }
 
#line 1882 "./insn-flags.h"
extern  rtx gen_iorsi3( rtx ,  rtx ,  rtx ); 
#line 1883 "./insn-flags.h"
extern  rtx gen_iorhi3( rtx ,  rtx ,  rtx ); 
#line 1884 "./insn-flags.h"
extern  rtx gen_iorqi3( rtx ,  rtx ,  rtx ); 
#line 1885 "./insn-flags.h"
static __inline__  rtx gen_xordi3( rtx ,  rtx ,  rtx ); 
#line 1887 "./insn-flags.h"
static __inline__  rtx gen_xordi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1888 "./insn-flags.h"
return 0; }
 
#line 1890 "./insn-flags.h"
extern  rtx gen_xorsi3( rtx ,  rtx ,  rtx ); 
#line 1891 "./insn-flags.h"
extern  rtx gen_xorhi3( rtx ,  rtx ,  rtx ); 
#line 1892 "./insn-flags.h"
extern  rtx gen_xorqi3( rtx ,  rtx ,  rtx ); 
#line 1893 "./insn-flags.h"
extern  rtx gen_xorqi_cc_ext_1( rtx ,  rtx ,  rtx ); 
#line 1894 "./insn-flags.h"
static __inline__  rtx gen_negti2( rtx ,  rtx ); 
#line 1896 "./insn-flags.h"
static __inline__  rtx gen_negti2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1897 "./insn-flags.h"
return 0; }
 
#line 1899 "./insn-flags.h"
extern  rtx gen_negdi2( rtx ,  rtx ); 
#line 1900 "./insn-flags.h"
extern  rtx gen_negsi2( rtx ,  rtx ); 
#line 1901 "./insn-flags.h"
extern  rtx gen_neghi2( rtx ,  rtx ); 
#line 1902 "./insn-flags.h"
extern  rtx gen_negqi2( rtx ,  rtx ); 
#line 1903 "./insn-flags.h"
extern  rtx gen_negsf2( rtx ,  rtx ); 
#line 1904 "./insn-flags.h"
extern  rtx gen_abssf2( rtx ,  rtx ); 
#line 1905 "./insn-flags.h"
extern  rtx gen_copysignsf3( rtx ,  rtx ,  rtx ); 
#line 1906 "./insn-flags.h"
extern  rtx gen_negdf2( rtx ,  rtx ); 
#line 1907 "./insn-flags.h"
extern  rtx gen_absdf2( rtx ,  rtx ); 
#line 1908 "./insn-flags.h"
extern  rtx gen_copysigndf3( rtx ,  rtx ,  rtx ); 
#line 1909 "./insn-flags.h"
extern  rtx gen_negxf2( rtx ,  rtx ); 
#line 1910 "./insn-flags.h"
extern  rtx gen_absxf2( rtx ,  rtx ); 
#line 1911 "./insn-flags.h"
static __inline__  rtx gen_one_cmpldi2( rtx ,  rtx ); 
#line 1913 "./insn-flags.h"
static __inline__  rtx gen_one_cmpldi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1914 "./insn-flags.h"
return 0; }
 
#line 1916 "./insn-flags.h"
extern  rtx gen_one_cmplsi2( rtx ,  rtx ); 
#line 1917 "./insn-flags.h"
extern  rtx gen_one_cmplhi2( rtx ,  rtx ); 
#line 1918 "./insn-flags.h"
extern  rtx gen_one_cmplqi2( rtx ,  rtx ); 
#line 1919 "./insn-flags.h"
static __inline__  rtx gen_ashlti3( rtx ,  rtx ,  rtx ); 
#line 1921 "./insn-flags.h"
static __inline__  rtx gen_ashlti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1922 "./insn-flags.h"
return 0; }
 
#line 1924 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shift_adj( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1926 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shift_adj( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1927 "./insn-flags.h"
return 0; }
 
#line 1929 "./insn-flags.h"
extern  rtx gen_ashldi3( rtx ,  rtx ,  rtx ); 
#line 1930 "./insn-flags.h"
extern  rtx gen_x86_shift_adj_1( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1931 "./insn-flags.h"
extern  rtx gen_x86_shift_adj_2( rtx ,  rtx ,  rtx ); 
#line 1932 "./insn-flags.h"
extern  rtx gen_ashlsi3( rtx ,  rtx ,  rtx ); 
#line 1933 "./insn-flags.h"
extern  rtx gen_ashlhi3( rtx ,  rtx ,  rtx ); 
#line 1934 "./insn-flags.h"
extern  rtx gen_ashlqi3( rtx ,  rtx ,  rtx ); 
#line 1935 "./insn-flags.h"
static __inline__  rtx gen_ashrti3( rtx ,  rtx ,  rtx ); 
#line 1937 "./insn-flags.h"
static __inline__  rtx gen_ashrti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1938 "./insn-flags.h"
return 0; }
 
#line 1940 "./insn-flags.h"
extern  rtx gen_ashrdi3( rtx ,  rtx ,  rtx ); 
#line 1941 "./insn-flags.h"
extern  rtx gen_x86_shift_adj_3( rtx ,  rtx ,  rtx ); 
#line 1942 "./insn-flags.h"
extern  rtx gen_ashrsi3( rtx ,  rtx ,  rtx ); 
#line 1943 "./insn-flags.h"
extern  rtx gen_ashrhi3( rtx ,  rtx ,  rtx ); 
#line 1944 "./insn-flags.h"
extern  rtx gen_ashrqi3( rtx ,  rtx ,  rtx ); 
#line 1945 "./insn-flags.h"
static __inline__  rtx gen_lshrti3( rtx ,  rtx ,  rtx ); 
#line 1947 "./insn-flags.h"
static __inline__  rtx gen_lshrti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1948 "./insn-flags.h"
return 0; }
 
#line 1950 "./insn-flags.h"
extern  rtx gen_lshrdi3( rtx ,  rtx ,  rtx ); 
#line 1951 "./insn-flags.h"
extern  rtx gen_lshrsi3( rtx ,  rtx ,  rtx ); 
#line 1952 "./insn-flags.h"
extern  rtx gen_lshrhi3( rtx ,  rtx ,  rtx ); 
#line 1953 "./insn-flags.h"
extern  rtx gen_lshrqi3( rtx ,  rtx ,  rtx ); 
#line 1954 "./insn-flags.h"
extern  rtx gen_rotldi3( rtx ,  rtx ,  rtx ); 
#line 1955 "./insn-flags.h"
extern  rtx gen_rotlsi3( rtx ,  rtx ,  rtx ); 
#line 1956 "./insn-flags.h"
extern  rtx gen_rotlhi3( rtx ,  rtx ,  rtx ); 
#line 1957 "./insn-flags.h"
extern  rtx gen_rotlqi3( rtx ,  rtx ,  rtx ); 
#line 1958 "./insn-flags.h"
extern  rtx gen_rotrdi3( rtx ,  rtx ,  rtx ); 
#line 1959 "./insn-flags.h"
extern  rtx gen_rotrsi3( rtx ,  rtx ,  rtx ); 
#line 1960 "./insn-flags.h"
extern  rtx gen_rotrhi3( rtx ,  rtx ,  rtx ); 
#line 1961 "./insn-flags.h"
extern  rtx gen_rotrqi3( rtx ,  rtx ,  rtx ); 
#line 1962 "./insn-flags.h"
extern  rtx gen_extv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1963 "./insn-flags.h"
extern  rtx gen_extzv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1964 "./insn-flags.h"
extern  rtx gen_insv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1965 "./insn-flags.h"
extern  rtx gen_seq( rtx ); 
#line 1966 "./insn-flags.h"
extern  rtx gen_sne( rtx ); 
#line 1967 "./insn-flags.h"
extern  rtx gen_sgt( rtx ); 
#line 1968 "./insn-flags.h"
extern  rtx gen_sgtu( rtx ); 
#line 1969 "./insn-flags.h"
extern  rtx gen_slt( rtx ); 
#line 1970 "./insn-flags.h"
extern  rtx gen_sltu( rtx ); 
#line 1971 "./insn-flags.h"
extern  rtx gen_sge( rtx ); 
#line 1972 "./insn-flags.h"
extern  rtx gen_sgeu( rtx ); 
#line 1973 "./insn-flags.h"
extern  rtx gen_sle( rtx ); 
#line 1974 "./insn-flags.h"
extern  rtx gen_sleu( rtx ); 
#line 1975 "./insn-flags.h"
extern  rtx gen_sunordered( rtx ); 
#line 1976 "./insn-flags.h"
extern  rtx gen_sordered( rtx ); 
#line 1977 "./insn-flags.h"
extern  rtx gen_suneq( rtx ); 
#line 1978 "./insn-flags.h"
extern  rtx gen_sunge( rtx ); 
#line 1979 "./insn-flags.h"
extern  rtx gen_sungt( rtx ); 
#line 1980 "./insn-flags.h"
extern  rtx gen_sunle( rtx ); 
#line 1981 "./insn-flags.h"
extern  rtx gen_sunlt( rtx ); 
#line 1982 "./insn-flags.h"
extern  rtx gen_sltgt( rtx ); 
#line 1983 "./insn-flags.h"
extern  rtx gen_beq( rtx ); 
#line 1984 "./insn-flags.h"
extern  rtx gen_bne( rtx ); 
#line 1985 "./insn-flags.h"
extern  rtx gen_bgt( rtx ); 
#line 1986 "./insn-flags.h"
extern  rtx gen_bgtu( rtx ); 
#line 1987 "./insn-flags.h"
extern  rtx gen_blt( rtx ); 
#line 1988 "./insn-flags.h"
extern  rtx gen_bltu( rtx ); 
#line 1989 "./insn-flags.h"
extern  rtx gen_bge( rtx ); 
#line 1990 "./insn-flags.h"
extern  rtx gen_bgeu( rtx ); 
#line 1991 "./insn-flags.h"
extern  rtx gen_ble( rtx ); 
#line 1992 "./insn-flags.h"
extern  rtx gen_bleu( rtx ); 
#line 1993 "./insn-flags.h"
extern  rtx gen_bunordered( rtx ); 
#line 1994 "./insn-flags.h"
extern  rtx gen_bordered( rtx ); 
#line 1995 "./insn-flags.h"
extern  rtx gen_buneq( rtx ); 
#line 1996 "./insn-flags.h"
extern  rtx gen_bunge( rtx ); 
#line 1997 "./insn-flags.h"
extern  rtx gen_bungt( rtx ); 
#line 1998 "./insn-flags.h"
extern  rtx gen_bunle( rtx ); 
#line 1999 "./insn-flags.h"
extern  rtx gen_bunlt( rtx ); 
#line 2000 "./insn-flags.h"
extern  rtx gen_bltgt( rtx ); 
#line 2001 "./insn-flags.h"
extern  rtx gen_indirect_jump( rtx ); 
#line 2002 "./insn-flags.h"
extern  rtx gen_tablejump( rtx ,  rtx ); 
#line 2004 "./insn-flags.h"
extern  rtx gen_call_pop( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2006 "./insn-flags.h"
extern  rtx gen_call( rtx ,  rtx ,  rtx ); 
#line 2008 "./insn-flags.h"
extern  rtx gen_sibcall( rtx ,  rtx ,  rtx ); 
#line 2010 "./insn-flags.h"
extern  rtx gen_call_value_pop( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2012 "./insn-flags.h"
extern  rtx gen_call_value( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2014 "./insn-flags.h"
extern  rtx gen_sibcall_value( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2015 "./insn-flags.h"
extern  rtx gen_untyped_call( rtx ,  rtx ,  rtx ); 
#line 2016 "./insn-flags.h"
extern  rtx gen_return(void ); 
#line 2017 "./insn-flags.h"
extern  rtx gen_prologue(void ); 
#line 2018 "./insn-flags.h"
extern  rtx gen_epilogue(void ); 
#line 2019 "./insn-flags.h"
extern  rtx gen_sibcall_epilogue(void ); 
#line 2020 "./insn-flags.h"
extern  rtx gen_eh_return( rtx ); 
#line 2021 "./insn-flags.h"
extern  rtx gen_ffssi2( rtx ,  rtx ); 
#line 2022 "./insn-flags.h"
static __inline__  rtx gen_ffsdi2( rtx ,  rtx ); 
#line 2024 "./insn-flags.h"
static __inline__  rtx gen_ffsdi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 2025 "./insn-flags.h"
return 0; }
 
#line 2027 "./insn-flags.h"
extern  rtx gen_clzsi2( rtx ,  rtx ); 
#line 2028 "./insn-flags.h"
static __inline__  rtx gen_clzdi2( rtx ,  rtx ); 
#line 2030 "./insn-flags.h"
static __inline__  rtx gen_clzdi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 2031 "./insn-flags.h"
return 0; }
 
#line 2033 "./insn-flags.h"
extern  rtx gen_tls_global_dynamic_32( rtx ,  rtx ); 
#line 2034 "./insn-flags.h"
extern  rtx gen_tls_global_dynamic_64( rtx ,  rtx ); 
#line 2035 "./insn-flags.h"
extern  rtx gen_tls_local_dynamic_base_32( rtx ); 
#line 2036 "./insn-flags.h"
extern  rtx gen_tls_local_dynamic_base_64( rtx ); 
#line 2037 "./insn-flags.h"
extern  rtx gen_sqrtsf2( rtx ,  rtx ); 
#line 2038 "./insn-flags.h"
extern  rtx gen_sqrtdf2( rtx ,  rtx ); 
#line 2039 "./insn-flags.h"
extern  rtx gen_fmodsf3( rtx ,  rtx ,  rtx ); 
#line 2040 "./insn-flags.h"
extern  rtx gen_fmoddf3( rtx ,  rtx ,  rtx ); 
#line 2041 "./insn-flags.h"
extern  rtx gen_fmodxf3( rtx ,  rtx ,  rtx ); 
#line 2042 "./insn-flags.h"
extern  rtx gen_dremsf3( rtx ,  rtx ,  rtx ); 
#line 2043 "./insn-flags.h"
extern  rtx gen_dremdf3( rtx ,  rtx ,  rtx ); 
#line 2044 "./insn-flags.h"
extern  rtx gen_dremxf3( rtx ,  rtx ,  rtx ); 
#line 2045 "./insn-flags.h"
extern  rtx gen_tandf2( rtx ,  rtx ); 
#line 2046 "./insn-flags.h"
extern  rtx gen_tansf2( rtx ,  rtx ); 
#line 2047 "./insn-flags.h"
extern  rtx gen_tanxf2( rtx ,  rtx ); 
#line 2048 "./insn-flags.h"
extern  rtx gen_atan2df3( rtx ,  rtx ,  rtx ); 
#line 2049 "./insn-flags.h"
extern  rtx gen_atandf2( rtx ,  rtx ); 
#line 2050 "./insn-flags.h"
extern  rtx gen_atan2sf3( rtx ,  rtx ,  rtx ); 
#line 2051 "./insn-flags.h"
extern  rtx gen_atansf2( rtx ,  rtx ); 
#line 2052 "./insn-flags.h"
extern  rtx gen_atan2xf3( rtx ,  rtx ,  rtx ); 
#line 2053 "./insn-flags.h"
extern  rtx gen_atanxf2( rtx ,  rtx ); 
#line 2054 "./insn-flags.h"
extern  rtx gen_asindf2( rtx ,  rtx ); 
#line 2055 "./insn-flags.h"
extern  rtx gen_asinsf2( rtx ,  rtx ); 
#line 2056 "./insn-flags.h"
extern  rtx gen_asinxf2( rtx ,  rtx ); 
#line 2057 "./insn-flags.h"
extern  rtx gen_acosdf2( rtx ,  rtx ); 
#line 2058 "./insn-flags.h"
extern  rtx gen_acossf2( rtx ,  rtx ); 
#line 2059 "./insn-flags.h"
extern  rtx gen_acosxf2( rtx ,  rtx ); 
#line 2060 "./insn-flags.h"
extern  rtx gen_logsf2( rtx ,  rtx ); 
#line 2061 "./insn-flags.h"
extern  rtx gen_logdf2( rtx ,  rtx ); 
#line 2062 "./insn-flags.h"
extern  rtx gen_logxf2( rtx ,  rtx ); 
#line 2063 "./insn-flags.h"
extern  rtx gen_log10sf2( rtx ,  rtx ); 
#line 2064 "./insn-flags.h"
extern  rtx gen_log10df2( rtx ,  rtx ); 
#line 2065 "./insn-flags.h"
extern  rtx gen_log10xf2( rtx ,  rtx ); 
#line 2066 "./insn-flags.h"
extern  rtx gen_log2sf2( rtx ,  rtx ); 
#line 2067 "./insn-flags.h"
extern  rtx gen_log2df2( rtx ,  rtx ); 
#line 2068 "./insn-flags.h"
extern  rtx gen_log2xf2( rtx ,  rtx ); 
#line 2069 "./insn-flags.h"
extern  rtx gen_log1psf2( rtx ,  rtx ); 
#line 2070 "./insn-flags.h"
extern  rtx gen_log1pdf2( rtx ,  rtx ); 
#line 2071 "./insn-flags.h"
extern  rtx gen_log1pxf2( rtx ,  rtx ); 
#line 2072 "./insn-flags.h"
extern  rtx gen_logbsf2( rtx ,  rtx ); 
#line 2073 "./insn-flags.h"
extern  rtx gen_logbdf2( rtx ,  rtx ); 
#line 2074 "./insn-flags.h"
extern  rtx gen_logbxf2( rtx ,  rtx ); 
#line 2075 "./insn-flags.h"
extern  rtx gen_ilogbsi2( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2076 "./insn-flags.h"
extern  rtx gen_expsf2( rtx ,  rtx ); 
#line 2077 "./insn-flags.h"
extern  rtx gen_expdf2( rtx ,  rtx ); 
#line 2078 "./insn-flags.h"
extern  rtx gen_expxf2( rtx ,  rtx ); 
#line 2079 "./insn-flags.h"
extern  rtx gen_exp10sf2( rtx ,  rtx ); 
#line 2080 "./insn-flags.h"
extern  rtx gen_exp10df2( rtx ,  rtx ); 
#line 2081 "./insn-flags.h"
extern  rtx gen_exp10xf2( rtx ,  rtx ); 
#line 2082 "./insn-flags.h"
extern  rtx gen_exp2sf2( rtx ,  rtx ); 
#line 2083 "./insn-flags.h"
extern  rtx gen_exp2df2( rtx ,  rtx ); 
#line 2084 "./insn-flags.h"
extern  rtx gen_exp2xf2( rtx ,  rtx ); 
#line 2085 "./insn-flags.h"
extern  rtx gen_expm1df2( rtx ,  rtx ); 
#line 2086 "./insn-flags.h"
extern  rtx gen_expm1sf2( rtx ,  rtx ); 
#line 2087 "./insn-flags.h"
extern  rtx gen_expm1xf2( rtx ,  rtx ); 
#line 2088 "./insn-flags.h"
extern  rtx gen_ldexpdf3( rtx ,  rtx ,  rtx ); 
#line 2089 "./insn-flags.h"
extern  rtx gen_ldexpsf3( rtx ,  rtx ,  rtx ); 
#line 2090 "./insn-flags.h"
extern  rtx gen_ldexpxf3( rtx ,  rtx ,  rtx ); 
#line 2091 "./insn-flags.h"
extern  rtx gen_rintdf2( rtx ,  rtx ); 
#line 2092 "./insn-flags.h"
extern  rtx gen_rintsf2( rtx ,  rtx ); 
#line 2093 "./insn-flags.h"
extern  rtx gen_rintxf2( rtx ,  rtx ); 
#line 2094 "./insn-flags.h"
extern  rtx gen_lrinthi2( rtx ,  rtx ); 
#line 2095 "./insn-flags.h"
extern  rtx gen_lrintsi2( rtx ,  rtx ); 
#line 2096 "./insn-flags.h"
extern  rtx gen_lrintdi2( rtx ,  rtx ); 
#line 2097 "./insn-flags.h"
extern  rtx gen_floorxf2( rtx ,  rtx ); 
#line 2098 "./insn-flags.h"
extern  rtx gen_floordf2( rtx ,  rtx ); 
#line 2099 "./insn-flags.h"
extern  rtx gen_floorsf2( rtx ,  rtx ); 
#line 2100 "./insn-flags.h"
extern  rtx gen_lfloorhi2( rtx ,  rtx ); 
#line 2101 "./insn-flags.h"
extern  rtx gen_lfloorsi2( rtx ,  rtx ); 
#line 2102 "./insn-flags.h"
extern  rtx gen_lfloordi2( rtx ,  rtx ); 
#line 2103 "./insn-flags.h"
extern  rtx gen_ceilxf2( rtx ,  rtx ); 
#line 2104 "./insn-flags.h"
extern  rtx gen_ceildf2( rtx ,  rtx ); 
#line 2105 "./insn-flags.h"
extern  rtx gen_ceilsf2( rtx ,  rtx ); 
#line 2106 "./insn-flags.h"
extern  rtx gen_lceilhi2( rtx ,  rtx ); 
#line 2107 "./insn-flags.h"
extern  rtx gen_lceilsi2( rtx ,  rtx ); 
#line 2108 "./insn-flags.h"
extern  rtx gen_lceildi2( rtx ,  rtx ); 
#line 2109 "./insn-flags.h"
extern  rtx gen_btruncxf2( rtx ,  rtx ); 
#line 2110 "./insn-flags.h"
extern  rtx gen_btruncdf2( rtx ,  rtx ); 
#line 2111 "./insn-flags.h"
extern  rtx gen_btruncsf2( rtx ,  rtx ); 
#line 2112 "./insn-flags.h"
extern  rtx gen_nearbyintxf2( rtx ,  rtx ); 
#line 2113 "./insn-flags.h"
extern  rtx gen_nearbyintdf2( rtx ,  rtx ); 
#line 2114 "./insn-flags.h"
extern  rtx gen_nearbyintsf2( rtx ,  rtx ); 
#line 2115 "./insn-flags.h"
extern  rtx gen_movmemsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2116 "./insn-flags.h"
static __inline__  rtx gen_movmemdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2118 "./insn-flags.h"
static __inline__  rtx gen_movmemdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2119 "./insn-flags.h"
return 0; }
 
#line 2121 "./insn-flags.h"
extern  rtx gen_strmov( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2122 "./insn-flags.h"
extern  rtx gen_strmov_singleop( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2123 "./insn-flags.h"
extern  rtx gen_rep_mov( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2124 "./insn-flags.h"
extern  rtx gen_setmemsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2125 "./insn-flags.h"
static __inline__  rtx gen_setmemdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2127 "./insn-flags.h"
static __inline__  rtx gen_setmemdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2128 "./insn-flags.h"
return 0; }
 
#line 2130 "./insn-flags.h"
extern  rtx gen_strset( rtx ,  rtx ,  rtx ); 
#line 2131 "./insn-flags.h"
extern  rtx gen_strset_singleop( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2132 "./insn-flags.h"
extern  rtx gen_rep_stos( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2133 "./insn-flags.h"
extern  rtx gen_cmpstrnsi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2134 "./insn-flags.h"
extern  rtx gen_cmpintqi( rtx ); 
#line 2135 "./insn-flags.h"
extern  rtx gen_cmpstrnqi_nz_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2136 "./insn-flags.h"
extern  rtx gen_cmpstrnqi_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2137 "./insn-flags.h"
extern  rtx gen_strlensi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2138 "./insn-flags.h"
extern  rtx gen_strlendi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2139 "./insn-flags.h"
extern  rtx gen_strlenqi_1( rtx ,  rtx ,  rtx ); 
#line 2140 "./insn-flags.h"
static __inline__  rtx gen_movdicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2142 "./insn-flags.h"
static __inline__  rtx gen_movdicc( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2143 "./insn-flags.h"
return 0; }
 
#line 2145 "./insn-flags.h"
extern  rtx gen_movsicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2146 "./insn-flags.h"
extern  rtx gen_movhicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2147 "./insn-flags.h"
extern  rtx gen_movqicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2148 "./insn-flags.h"
extern  rtx gen_movsfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2149 "./insn-flags.h"
extern  rtx gen_movdfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2150 "./insn-flags.h"
extern  rtx gen_movxfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2151 "./insn-flags.h"
extern  rtx gen_addqicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2152 "./insn-flags.h"
extern  rtx gen_addhicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2153 "./insn-flags.h"
extern  rtx gen_addsicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2154 "./insn-flags.h"
static __inline__  rtx gen_adddicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2156 "./insn-flags.h"
static __inline__  rtx gen_adddicc( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2157 "./insn-flags.h"
return 0; }
 
#line 2159 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker( rtx ); 
#line 2160 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker_postreload( rtx ); 
#line 2161 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker_rex64_postreload( rtx ); 
#line 2162 "./insn-flags.h"
extern  rtx gen_allocate_stack( rtx ,  rtx ); 
#line 2163 "./insn-flags.h"
extern  rtx gen_builtin_setjmp_receiver( rtx ); 
#line 2164 "./insn-flags.h"
static __inline__  rtx gen_sse_prologue_save( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2166 "./insn-flags.h"
static __inline__  rtx gen_sse_prologue_save( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2167 "./insn-flags.h"
return 0; }
 
#line 2169 "./insn-flags.h"
extern  rtx gen_prefetch( rtx ,  rtx ,  rtx ); 
#line 2170 "./insn-flags.h"
extern  rtx gen_stack_protect_set( rtx ,  rtx ); 
#line 2171 "./insn-flags.h"
extern  rtx gen_stack_protect_test( rtx ,  rtx ,  rtx ); 
#line 2172 "./insn-flags.h"
extern  rtx gen_movv16qi( rtx ,  rtx ); 
#line 2173 "./insn-flags.h"
extern  rtx gen_movv8hi( rtx ,  rtx ); 
#line 2174 "./insn-flags.h"
extern  rtx gen_movv4si( rtx ,  rtx ); 
#line 2175 "./insn-flags.h"
extern  rtx gen_movv2di( rtx ,  rtx ); 
#line 2176 "./insn-flags.h"
extern  rtx gen_movv4sf( rtx ,  rtx ); 
#line 2177 "./insn-flags.h"
extern  rtx gen_movv2df( rtx ,  rtx ); 
#line 2178 "./insn-flags.h"
extern  rtx gen_pushv16qi1( rtx ); 
#line 2179 "./insn-flags.h"
extern  rtx gen_pushv8hi1( rtx ); 
#line 2180 "./insn-flags.h"
extern  rtx gen_pushv4si1( rtx ); 
#line 2181 "./insn-flags.h"
extern  rtx gen_pushv2di1( rtx ); 
#line 2182 "./insn-flags.h"
extern  rtx gen_pushv4sf1( rtx ); 
#line 2183 "./insn-flags.h"
extern  rtx gen_pushv2df1( rtx ); 
#line 2184 "./insn-flags.h"
extern  rtx gen_movmisalignv16qi( rtx ,  rtx ); 
#line 2185 "./insn-flags.h"
extern  rtx gen_movmisalignv8hi( rtx ,  rtx ); 
#line 2186 "./insn-flags.h"
extern  rtx gen_movmisalignv4si( rtx ,  rtx ); 
#line 2187 "./insn-flags.h"
extern  rtx gen_movmisalignv2di( rtx ,  rtx ); 
#line 2188 "./insn-flags.h"
extern  rtx gen_movmisalignv4sf( rtx ,  rtx ); 
#line 2189 "./insn-flags.h"
extern  rtx gen_movmisalignv2df( rtx ,  rtx ); 
#line 2190 "./insn-flags.h"
extern  rtx gen_negv4sf2( rtx ,  rtx ); 
#line 2191 "./insn-flags.h"
extern  rtx gen_absv4sf2( rtx ,  rtx ); 
#line 2192 "./insn-flags.h"
extern  rtx gen_addv4sf3( rtx ,  rtx ,  rtx ); 
#line 2193 "./insn-flags.h"
extern  rtx gen_subv4sf3( rtx ,  rtx ,  rtx ); 
#line 2194 "./insn-flags.h"
extern  rtx gen_mulv4sf3( rtx ,  rtx ,  rtx ); 
#line 2195 "./insn-flags.h"
extern  rtx gen_divv4sf3( rtx ,  rtx ,  rtx ); 
#line 2196 "./insn-flags.h"
extern  rtx gen_smaxv4sf3( rtx ,  rtx ,  rtx ); 
#line 2197 "./insn-flags.h"
extern  rtx gen_sminv4sf3( rtx ,  rtx ,  rtx ); 
#line 2198 "./insn-flags.h"
extern  rtx gen_reduc_splus_v4sf( rtx ,  rtx ); 
#line 2199 "./insn-flags.h"
extern  rtx gen_reduc_smax_v4sf( rtx ,  rtx ); 
#line 2200 "./insn-flags.h"
extern  rtx gen_reduc_smin_v4sf( rtx ,  rtx ); 
#line 2201 "./insn-flags.h"
extern  rtx gen_vcondv4sf( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2202 "./insn-flags.h"
extern  rtx gen_andv4sf3( rtx ,  rtx ,  rtx ); 
#line 2203 "./insn-flags.h"
extern  rtx gen_iorv4sf3( rtx ,  rtx ,  rtx ); 
#line 2204 "./insn-flags.h"
extern  rtx gen_xorv4sf3( rtx ,  rtx ,  rtx ); 
#line 2205 "./insn-flags.h"
extern  rtx gen_sse_shufps( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2206 "./insn-flags.h"
extern  rtx gen_vec_initv4sf( rtx ,  rtx ); 
#line 2207 "./insn-flags.h"
extern  rtx gen_vec_setv4sf( rtx ,  rtx ,  rtx ); 
#line 2208 "./insn-flags.h"
extern  rtx gen_vec_extractv4sf( rtx ,  rtx ,  rtx ); 
#line 2209 "./insn-flags.h"
extern  rtx gen_negv2df2( rtx ,  rtx ); 
#line 2210 "./insn-flags.h"
extern  rtx gen_absv2df2( rtx ,  rtx ); 
#line 2211 "./insn-flags.h"
extern  rtx gen_addv2df3( rtx ,  rtx ,  rtx ); 
#line 2212 "./insn-flags.h"
extern  rtx gen_subv2df3( rtx ,  rtx ,  rtx ); 
#line 2213 "./insn-flags.h"
extern  rtx gen_mulv2df3( rtx ,  rtx ,  rtx ); 
#line 2214 "./insn-flags.h"
extern  rtx gen_divv2df3( rtx ,  rtx ,  rtx ); 
#line 2215 "./insn-flags.h"
extern  rtx gen_smaxv2df3( rtx ,  rtx ,  rtx ); 
#line 2216 "./insn-flags.h"
extern  rtx gen_sminv2df3( rtx ,  rtx ,  rtx ); 
#line 2217 "./insn-flags.h"
extern  rtx gen_reduc_splus_v2df( rtx ,  rtx ); 
#line 2218 "./insn-flags.h"
extern  rtx gen_vcondv2df( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2219 "./insn-flags.h"
extern  rtx gen_andv2df3( rtx ,  rtx ,  rtx ); 
#line 2220 "./insn-flags.h"
extern  rtx gen_iorv2df3( rtx ,  rtx ,  rtx ); 
#line 2221 "./insn-flags.h"
extern  rtx gen_xorv2df3( rtx ,  rtx ,  rtx ); 
#line 2222 "./insn-flags.h"
extern  rtx gen_sse2_cvtpd2dq( rtx ,  rtx ); 
#line 2223 "./insn-flags.h"
extern  rtx gen_sse2_cvttpd2dq( rtx ,  rtx ); 
#line 2224 "./insn-flags.h"
extern  rtx gen_sse2_cvtpd2ps( rtx ,  rtx ); 
#line 2225 "./insn-flags.h"
extern  rtx gen_sse2_shufpd( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2226 "./insn-flags.h"
extern  rtx gen_vec_setv2df( rtx ,  rtx ,  rtx ); 
#line 2227 "./insn-flags.h"
extern  rtx gen_vec_extractv2df( rtx ,  rtx ,  rtx ); 
#line 2228 "./insn-flags.h"
extern  rtx gen_vec_initv2df( rtx ,  rtx ); 
#line 2229 "./insn-flags.h"
extern  rtx gen_negv16qi2( rtx ,  rtx ); 
#line 2230 "./insn-flags.h"
extern  rtx gen_negv8hi2( rtx ,  rtx ); 
#line 2231 "./insn-flags.h"
extern  rtx gen_negv4si2( rtx ,  rtx ); 
#line 2232 "./insn-flags.h"
extern  rtx gen_negv2di2( rtx ,  rtx ); 
#line 2233 "./insn-flags.h"
extern  rtx gen_addv16qi3( rtx ,  rtx ,  rtx ); 
#line 2234 "./insn-flags.h"
extern  rtx gen_addv8hi3( rtx ,  rtx ,  rtx ); 
#line 2235 "./insn-flags.h"
extern  rtx gen_addv4si3( rtx ,  rtx ,  rtx ); 
#line 2236 "./insn-flags.h"
extern  rtx gen_addv2di3( rtx ,  rtx ,  rtx ); 
#line 2237 "./insn-flags.h"
extern  rtx gen_subv16qi3( rtx ,  rtx ,  rtx ); 
#line 2238 "./insn-flags.h"
extern  rtx gen_subv8hi3( rtx ,  rtx ,  rtx ); 
#line 2239 "./insn-flags.h"
extern  rtx gen_subv4si3( rtx ,  rtx ,  rtx ); 
#line 2240 "./insn-flags.h"
extern  rtx gen_subv2di3( rtx ,  rtx ,  rtx ); 
#line 2241 "./insn-flags.h"
extern  rtx gen_mulv16qi3( rtx ,  rtx ,  rtx ); 
#line 2242 "./insn-flags.h"
extern  rtx gen_mulv8hi3( rtx ,  rtx ,  rtx ); 
#line 2243 "./insn-flags.h"
extern  rtx gen_mulv4si3( rtx ,  rtx ,  rtx ); 
#line 2244 "./insn-flags.h"
extern  rtx gen_mulv2di3( rtx ,  rtx ,  rtx ); 
#line 2245 "./insn-flags.h"
extern  rtx gen_vec_shl_v16qi( rtx ,  rtx ,  rtx ); 
#line 2246 "./insn-flags.h"
extern  rtx gen_vec_shl_v8hi( rtx ,  rtx ,  rtx ); 
#line 2247 "./insn-flags.h"
extern  rtx gen_vec_shl_v4si( rtx ,  rtx ,  rtx ); 
#line 2248 "./insn-flags.h"
extern  rtx gen_vec_shl_v2di( rtx ,  rtx ,  rtx ); 
#line 2249 "./insn-flags.h"
extern  rtx gen_vec_shr_v16qi( rtx ,  rtx ,  rtx ); 
#line 2250 "./insn-flags.h"
extern  rtx gen_vec_shr_v8hi( rtx ,  rtx ,  rtx ); 
#line 2251 "./insn-flags.h"
extern  rtx gen_vec_shr_v4si( rtx ,  rtx ,  rtx ); 
#line 2252 "./insn-flags.h"
extern  rtx gen_vec_shr_v2di( rtx ,  rtx ,  rtx ); 
#line 2253 "./insn-flags.h"
extern  rtx gen_umaxv16qi3( rtx ,  rtx ,  rtx ); 
#line 2254 "./insn-flags.h"
extern  rtx gen_smaxv8hi3( rtx ,  rtx ,  rtx ); 
#line 2255 "./insn-flags.h"
extern  rtx gen_umaxv8hi3( rtx ,  rtx ,  rtx ); 
#line 2256 "./insn-flags.h"
extern  rtx gen_smaxv16qi3( rtx ,  rtx ,  rtx ); 
#line 2257 "./insn-flags.h"
extern  rtx gen_smaxv4si3( rtx ,  rtx ,  rtx ); 
#line 2258 "./insn-flags.h"
extern  rtx gen_umaxv4si3( rtx ,  rtx ,  rtx ); 
#line 2259 "./insn-flags.h"
extern  rtx gen_uminv16qi3( rtx ,  rtx ,  rtx ); 
#line 2260 "./insn-flags.h"
extern  rtx gen_sminv8hi3( rtx ,  rtx ,  rtx ); 
#line 2261 "./insn-flags.h"
extern  rtx gen_sminv16qi3( rtx ,  rtx ,  rtx ); 
#line 2262 "./insn-flags.h"
extern  rtx gen_sminv4si3( rtx ,  rtx ,  rtx ); 
#line 2263 "./insn-flags.h"
extern  rtx gen_uminv8hi3( rtx ,  rtx ,  rtx ); 
#line 2264 "./insn-flags.h"
extern  rtx gen_uminv4si3( rtx ,  rtx ,  rtx ); 
#line 2265 "./insn-flags.h"
extern  rtx gen_vcondv16qi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2266 "./insn-flags.h"
extern  rtx gen_vcondv8hi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2267 "./insn-flags.h"
extern  rtx gen_vcondv4si( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2268 "./insn-flags.h"
extern  rtx gen_vconduv16qi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2269 "./insn-flags.h"
extern  rtx gen_vconduv8hi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2270 "./insn-flags.h"
extern  rtx gen_vconduv4si( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2271 "./insn-flags.h"
extern  rtx gen_one_cmplv16qi2( rtx ,  rtx ); 
#line 2272 "./insn-flags.h"
extern  rtx gen_one_cmplv8hi2( rtx ,  rtx ); 
#line 2273 "./insn-flags.h"
extern  rtx gen_one_cmplv4si2( rtx ,  rtx ); 
#line 2274 "./insn-flags.h"
extern  rtx gen_one_cmplv2di2( rtx ,  rtx ); 
#line 2275 "./insn-flags.h"
extern  rtx gen_andv16qi3( rtx ,  rtx ,  rtx ); 
#line 2276 "./insn-flags.h"
extern  rtx gen_andv8hi3( rtx ,  rtx ,  rtx ); 
#line 2277 "./insn-flags.h"
extern  rtx gen_andv4si3( rtx ,  rtx ,  rtx ); 
#line 2278 "./insn-flags.h"
extern  rtx gen_andv2di3( rtx ,  rtx ,  rtx ); 
#line 2279 "./insn-flags.h"
extern  rtx gen_iorv16qi3( rtx ,  rtx ,  rtx ); 
#line 2280 "./insn-flags.h"
extern  rtx gen_iorv8hi3( rtx ,  rtx ,  rtx ); 
#line 2281 "./insn-flags.h"
extern  rtx gen_iorv4si3( rtx ,  rtx ,  rtx ); 
#line 2282 "./insn-flags.h"
extern  rtx gen_iorv2di3( rtx ,  rtx ,  rtx ); 
#line 2283 "./insn-flags.h"
extern  rtx gen_xorv16qi3( rtx ,  rtx ,  rtx ); 
#line 2284 "./insn-flags.h"
extern  rtx gen_xorv8hi3( rtx ,  rtx ,  rtx ); 
#line 2285 "./insn-flags.h"
extern  rtx gen_xorv4si3( rtx ,  rtx ,  rtx ); 
#line 2286 "./insn-flags.h"
extern  rtx gen_xorv2di3( rtx ,  rtx ,  rtx ); 
#line 2287 "./insn-flags.h"
extern  rtx gen_sse2_pinsrw( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2288 "./insn-flags.h"
extern  rtx gen_sse2_pshufd( rtx ,  rtx ,  rtx ); 
#line 2289 "./insn-flags.h"
extern  rtx gen_sse2_pshuflw( rtx ,  rtx ,  rtx ); 
#line 2290 "./insn-flags.h"
extern  rtx gen_sse2_pshufhw( rtx ,  rtx ,  rtx ); 
#line 2291 "./insn-flags.h"
extern  rtx gen_sse2_loadd( rtx ,  rtx ); 
#line 2292 "./insn-flags.h"
extern  rtx gen_sse_storeq( rtx ,  rtx ); 
#line 2293 "./insn-flags.h"
extern  rtx gen_vec_setv2di( rtx ,  rtx ,  rtx ); 
#line 2294 "./insn-flags.h"
extern  rtx gen_vec_extractv2di( rtx ,  rtx ,  rtx ); 
#line 2295 "./insn-flags.h"
extern  rtx gen_vec_initv2di( rtx ,  rtx ); 
#line 2296 "./insn-flags.h"
extern  rtx gen_vec_setv4si( rtx ,  rtx ,  rtx ); 
#line 2297 "./insn-flags.h"
extern  rtx gen_vec_extractv4si( rtx ,  rtx ,  rtx ); 
#line 2298 "./insn-flags.h"
extern  rtx gen_vec_initv4si( rtx ,  rtx ); 
#line 2299 "./insn-flags.h"
extern  rtx gen_vec_setv8hi( rtx ,  rtx ,  rtx ); 
#line 2300 "./insn-flags.h"
extern  rtx gen_vec_extractv8hi( rtx ,  rtx ,  rtx ); 
#line 2301 "./insn-flags.h"
extern  rtx gen_vec_initv8hi( rtx ,  rtx ); 
#line 2302 "./insn-flags.h"
extern  rtx gen_vec_setv16qi( rtx ,  rtx ,  rtx ); 
#line 2303 "./insn-flags.h"
extern  rtx gen_vec_extractv16qi( rtx ,  rtx ,  rtx ); 
#line 2304 "./insn-flags.h"
extern  rtx gen_vec_initv16qi( rtx ,  rtx ); 
#line 2305 "./insn-flags.h"
extern  rtx gen_sse2_maskmovdqu( rtx ,  rtx ,  rtx ); 
#line 2306 "./insn-flags.h"
extern  rtx gen_sse_sfence(void ); 
#line 2307 "./insn-flags.h"
extern  rtx gen_sse2_mfence(void ); 
#line 2308 "./insn-flags.h"
extern  rtx gen_sse2_lfence(void ); 
#line 2309 "./insn-flags.h"
extern  rtx gen_movv8qi( rtx ,  rtx ); 
#line 2310 "./insn-flags.h"
extern  rtx gen_movv4hi( rtx ,  rtx ); 
#line 2311 "./insn-flags.h"
extern  rtx gen_movv2si( rtx ,  rtx ); 
#line 2312 "./insn-flags.h"
extern  rtx gen_movv2sf( rtx ,  rtx ); 
#line 2313 "./insn-flags.h"
extern  rtx gen_pushv8qi1( rtx ); 
#line 2314 "./insn-flags.h"
extern  rtx gen_pushv4hi1( rtx ); 
#line 2315 "./insn-flags.h"
extern  rtx gen_pushv2si1( rtx ); 
#line 2316 "./insn-flags.h"
extern  rtx gen_pushv2sf1( rtx ); 
#line 2317 "./insn-flags.h"
extern  rtx gen_movmisalignv8qi( rtx ,  rtx ); 
#line 2318 "./insn-flags.h"
extern  rtx gen_movmisalignv4hi( rtx ,  rtx ); 
#line 2319 "./insn-flags.h"
extern  rtx gen_movmisalignv2si( rtx ,  rtx ); 
#line 2320 "./insn-flags.h"
extern  rtx gen_movmisalignv2sf( rtx ,  rtx ); 
#line 2321 "./insn-flags.h"
extern  rtx gen_mmx_subrv2sf3( rtx ,  rtx ,  rtx ); 
#line 2322 "./insn-flags.h"
extern  rtx gen_vec_setv2sf( rtx ,  rtx ,  rtx ); 
#line 2323 "./insn-flags.h"
extern  rtx gen_vec_extractv2sf( rtx ,  rtx ,  rtx ); 
#line 2324 "./insn-flags.h"
extern  rtx gen_vec_initv2sf( rtx ,  rtx ); 
#line 2325 "./insn-flags.h"
extern  rtx gen_mmx_pinsrw( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2326 "./insn-flags.h"
extern  rtx gen_mmx_pshufw( rtx ,  rtx ,  rtx ); 
#line 2327 "./insn-flags.h"
extern  rtx gen_vec_setv2si( rtx ,  rtx ,  rtx ); 
#line 2328 "./insn-flags.h"
extern  rtx gen_vec_extractv2si( rtx ,  rtx ,  rtx ); 
#line 2329 "./insn-flags.h"
extern  rtx gen_vec_initv2si( rtx ,  rtx ); 
#line 2330 "./insn-flags.h"
extern  rtx gen_vec_setv4hi( rtx ,  rtx ,  rtx ); 
#line 2331 "./insn-flags.h"
extern  rtx gen_vec_extractv4hi( rtx ,  rtx ,  rtx ); 
#line 2332 "./insn-flags.h"
extern  rtx gen_vec_initv4hi( rtx ,  rtx ); 
#line 2333 "./insn-flags.h"
extern  rtx gen_vec_setv8qi( rtx ,  rtx ,  rtx ); 
#line 2334 "./insn-flags.h"
extern  rtx gen_vec_extractv8qi( rtx ,  rtx ,  rtx ); 
#line 2335 "./insn-flags.h"
extern  rtx gen_vec_initv8qi( rtx ,  rtx ); 
#line 2336 "./insn-flags.h"
extern  rtx gen_mmx_maskmovq( rtx ,  rtx ,  rtx ); 
#line 2337 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swap_ccqi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2338 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swap_cchi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2339 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swap_ccsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2340 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swap_ccdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2342 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swap_ccdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2343 "./insn-flags.h"
return 0; }
 
# 18 "./tm.h" 2
# 31 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/tree.h" 1
# 25 "../.././gcc/tree.h" 
# 1 "../.././gcc/machmode.h" 1
# 26 "../.././gcc/machmode.h" 
# 85 "./insn-modes.h" 1
enum machine_mode {VOIDmode,BLKmode,CCmode,CCGCmode,CCGOCmode,CCNOmode,CCZmode,CCFPmode,CCFPUmode,BImode,QImode,HImode,SImode,DImode,TImode,SFmode,DFmode,XFmode,TFmode,CQImode,CHImode,CSImode,CDImode,CTImode,SCmode,DCmode,XCmode,TCmode,V4QImode,V2HImode,V8QImode,V4HImode,V2SImode,V16QImode,V8HImode,V4SImode,V2DImode,V32QImode,V16HImode,V8SImode,V4DImode,V2SFmode,V4SFmode,V2DFmode,V8SFmode,V4DFmode,MAX_MACHINE_MODE,MIN_MODE_RANDOM=VOIDmode,MAX_MODE_RANDOM=BLKmode,MIN_MODE_CC=CCmode,MAX_MODE_CC=CCFPUmode,MIN_MODE_INT=QImode,MAX_MODE_INT=TImode,MIN_MODE_PARTIAL_INT=VOIDmode,MAX_MODE_PARTIAL_INT=VOIDmode,MIN_MODE_FLOAT=SFmode,MAX_MODE_FLOAT=TFmode,MIN_MODE_COMPLEX_INT=CQImode,MAX_MODE_COMPLEX_INT=CTImode,MIN_MODE_COMPLEX_FLOAT=SCmode,MAX_MODE_COMPLEX_FLOAT=TCmode,MIN_MODE_VECTOR_INT=V4QImode,MAX_MODE_VECTOR_INT=V4DImode,MIN_MODE_VECTOR_FLOAT=V2SFmode,MAX_MODE_VECTOR_FLOAT=V4DFmode,NUM_MACHINE_MODES=MAX_MACHINE_MODE}; 
#line 30 "../.././gcc/machmode.h"
extern const char *const mode_name[NUM_MACHINE_MODES]; 
# 27 "../.././gcc/machmode.h" 2
# 1 "../.././gcc/mode-classes.def" 1
# 37 "../.././gcc/machmode.h" 2
enum mode_class {MODE_RANDOM,MODE_CC,MODE_INT,MODE_PARTIAL_INT,MODE_FLOAT,MODE_COMPLEX_INT,MODE_COMPLEX_FLOAT,MODE_VECTOR_INT,MODE_VECTOR_FLOAT,MAX_MODE_CLASS}; 
#line 44 "../.././gcc/machmode.h"
extern const unsigned char mode_class[NUM_MACHINE_MODES]; 
#line 81 "../.././gcc/machmode.h"
extern unsigned char mode_size[NUM_MACHINE_MODES]; 
#line 86 "../.././gcc/machmode.h"
extern const unsigned short mode_precision[NUM_MACHINE_MODES]; 
#line 92 "../.././gcc/machmode.h"
extern const unsigned long mode_mask_array[NUM_MACHINE_MODES]; 
#line 98 "../.././gcc/machmode.h"
extern const unsigned char mode_inner[NUM_MACHINE_MODES]; 
# 81 "../.././gcc/machmode.h" 
# 110 "../.././gcc/machmode.h" 
extern const unsigned char mode_nunits[NUM_MACHINE_MODES]; 
#line 115 "../.././gcc/machmode.h"
extern const unsigned char mode_wider[NUM_MACHINE_MODES]; 
#line 118 "../.././gcc/machmode.h"
extern const unsigned char mode_2xwider[NUM_MACHINE_MODES]; 
#line 125 "../.././gcc/machmode.h"
extern enum machine_mode mode_for_size(unsigned int , enum mode_class , int ); 
#line 130 "../.././gcc/machmode.h"
extern enum machine_mode smallest_mode_for_size(unsigned int , enum mode_class ); 
#line 136 "../.././gcc/machmode.h"
extern enum machine_mode int_mode_for_mode(enum machine_mode ); 
#line 141 "../.././gcc/machmode.h"
extern enum machine_mode get_best_mode(int , int , unsigned int , enum machine_mode , int ); 
#line 145 "../.././gcc/machmode.h"
extern unsigned char mode_base_align[NUM_MACHINE_MODES]; 
#line 147 "../.././gcc/machmode.h"
extern unsigned get_mode_alignment(enum machine_mode ); 
#line 153 "../.././gcc/machmode.h"
extern const unsigned char class_narrowest_mode[MAX_MODE_CLASS]; 
#line 159 "../.././gcc/machmode.h"
extern enum machine_mode byte_mode; 
#line 160 "../.././gcc/machmode.h"
extern enum machine_mode word_mode; 
#line 161 "../.././gcc/machmode.h"
extern enum machine_mode ptr_mode; 
#line 164 "../.././gcc/machmode.h"
extern void init_adjust_machine_modes(void ); 
# 26 "../.././gcc/tree.h" 2
# 1 "../.././gcc/input.h" 1
# 25 "../.././gcc/input.h" 
# 1 "../.././gcc/../libcpp/include/line-map.h" 1
# 31 "../.././gcc/../libcpp/include/line-map.h" 
enum lc_reason {LC_ENTER=0,LC_LEAVE,LC_RENAME}; 
#line 36 "../.././gcc/../libcpp/include/line-map.h"
typedef unsigned int source_location; 
#line 61 "../.././gcc/../libcpp/include/line-map.h"
struct line_map {const char *to_file; unsigned int to_line;  source_location start_location; int included_from;  __extension__ enum lc_reason reason:8; unsigned char sysp; unsigned int column_bits:8; }; 
#line 92 "../.././gcc/../libcpp/include/line-map.h"
struct line_maps {struct line_map *maps; unsigned int allocated; unsigned int used; unsigned int cache; int last_listed; unsigned int depth; unsigned char trace_includes;  source_location highest_location;  source_location highest_line; unsigned int max_column_hint; }; 
#line 95 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_init(struct line_maps *); 
#line 98 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_free(struct line_maps *); 
#line 102 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_check_files_exited(struct line_maps *); 
#line 111 "../.././gcc/../libcpp/include/line-map.h"
extern  source_location linemap_line_start(struct line_maps *set, unsigned int to_line, unsigned int max_column_hint); 
# 50 "../.././gcc/../libcpp/include/line-map.h" 
# 126 "../.././gcc/../libcpp/include/line-map.h" 
extern const struct line_map *linemap_add(struct line_maps *, enum lc_reason , unsigned int sysp, const char *to_file, unsigned int to_line); 
#line 131 "../.././gcc/../libcpp/include/line-map.h"
extern const struct line_map *linemap_lookup(struct line_maps *,  source_location ); 
#line 137 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_print_containing_files(struct line_maps *, const struct line_map *); 
#line 178 "../.././gcc/../libcpp/include/line-map.h"
extern  source_location linemap_position_for_column(struct line_maps *set, unsigned int to_column); 
# 178 "../.././gcc/../libcpp/include/line-map.h" 
# 26 "../.././gcc/input.h" 2
extern struct line_maps line_table; 
#line 59 "../.././gcc/input.h"
struct location_s {const char *file; int line; }; 
#line 61 "../.././gcc/input.h"
typedef struct location_s expanded_location; 
#line 62 "../.././gcc/input.h"
typedef struct location_s location_t; 
#line 63 "../.././gcc/input.h"
typedef  location_t *source_locus; 
#line 66 "../.././gcc/input.h"
extern  location_t unknown_location; 
#line 75 "../.././gcc/input.h"
struct file_stack {struct file_stack *next;  location_t location; }; 
#line 78 "../.././gcc/input.h"
extern const char *main_input_filename; 
#line 80 "../.././gcc/input.h"
extern  location_t input_location; 
#line 84 "../.././gcc/input.h"
extern void push_srcloc(const char *name, int line); 
#line 86 "../.././gcc/input.h"
extern void pop_srcloc(void ); 
# 52 "../.././gcc/input.h" 
# 96 "../.././gcc/input.h" 
extern struct file_stack *input_file_stack; 
#line 99 "../.././gcc/input.h"
extern int input_file_stack_tick; 
# 27 "../.././gcc/tree.h" 2
# 1 "../.././gcc/statistics.h" 1
# 28 "../.././gcc/tree.h" 2
# 1 "../.././gcc/vec.h" 1
# 394 "../.././gcc/vec.h" 
extern void *vec_gc_p_reserve(void *, int ); 
#line 395 "../.././gcc/vec.h"
extern void *vec_gc_o_reserve(void *, int ,  size_t ,  size_t ); 
#line 396 "../.././gcc/vec.h"
extern void ggc_free(void *); 
#line 398 "../.././gcc/vec.h"
extern void *vec_heap_p_reserve(void *, int ); 
#line 399 "../.././gcc/vec.h"
extern void *vec_heap_o_reserve(void *, int ,  size_t ,  size_t ); 
# 29 "../.././gcc/tree.h" 2
# 1 "../.././gcc/tree.def" 1
# 43 "../.././gcc/tree.def" 
# 81 "../.././gcc/tree.def" 
# 135 "../.././gcc/tree.def" 
# 148 "../.././gcc/tree.def" 
# 165 "../.././gcc/tree.def" 
# 178 "../.././gcc/tree.def" 
# 211 "../.././gcc/tree.def" 
# 221 "../.././gcc/tree.def" 
# 275 "../.././gcc/tree.def" 
# 348 "../.././gcc/tree.def" 
# 377 "../.././gcc/tree.def" 
# 386 "../.././gcc/tree.def" 
# 428 "../.././gcc/tree.def" 
# 450 "../.././gcc/tree.def" 
# 460 "../.././gcc/tree.def" 
# 486 "../.././gcc/tree.def" 
# 498 "../.././gcc/tree.def" 
# 521 "../.././gcc/tree.def" 
# 551 "../.././gcc/tree.def" 
# 603 "../.././gcc/tree.def" 
# 670 "../.././gcc/tree.def" 
# 690 "../.././gcc/tree.def" 
# 747 "../.././gcc/tree.def" 
# 840 "../.././gcc/tree.def" 
# 915 "../.././gcc/tree.def" 
# 937 "../.././gcc/tree.def" 
# 949 "../.././gcc/tree.def" 
# 39 "../.././gcc/tree.h" 2
enum tree_code {ERROR_MARK,IDENTIFIER_NODE,TREE_LIST,TREE_VEC,BLOCK,OFFSET_TYPE,ENUMERAL_TYPE,BOOLEAN_TYPE,CHAR_TYPE,INTEGER_TYPE,REAL_TYPE,POINTER_TYPE,REFERENCE_TYPE,COMPLEX_TYPE,VECTOR_TYPE,ARRAY_TYPE,RECORD_TYPE,UNION_TYPE,QUAL_UNION_TYPE,VOID_TYPE,FUNCTION_TYPE,METHOD_TYPE,LANG_TYPE,INTEGER_CST,REAL_CST,COMPLEX_CST,VECTOR_CST,STRING_CST,FUNCTION_DECL,LABEL_DECL,FIELD_DECL,VAR_DECL,CONST_DECL,PARM_DECL,TYPE_DECL,RESULT_DECL,NAMESPACE_DECL,TRANSLATION_UNIT_DECL,COMPONENT_REF,BIT_FIELD_REF,INDIRECT_REF,ALIGN_INDIRECT_REF,MISALIGNED_INDIRECT_REF,ARRAY_REF,ARRAY_RANGE_REF,OBJ_TYPE_REF,EXC_PTR_EXPR,FILTER_EXPR,CONSTRUCTOR,COMPOUND_EXPR,MODIFY_EXPR,INIT_EXPR,TARGET_EXPR,COND_EXPR,VEC_COND_EXPR,BIND_EXPR,CALL_EXPR,WITH_CLEANUP_EXPR,CLEANUP_POINT_EXPR,PLACEHOLDER_EXPR,PLUS_EXPR,MINUS_EXPR,MULT_EXPR,TRUNC_DIV_EXPR,CEIL_DIV_EXPR,FLOOR_DIV_EXPR,ROUND_DIV_EXPR,TRUNC_MOD_EXPR,CEIL_MOD_EXPR,FLOOR_MOD_EXPR,ROUND_MOD_EXPR,RDIV_EXPR,EXACT_DIV_EXPR,FIX_TRUNC_EXPR,FIX_CEIL_EXPR,FIX_FLOOR_EXPR,FIX_ROUND_EXPR,FLOAT_EXPR,NEGATE_EXPR,MIN_EXPR,MAX_EXPR,ABS_EXPR,LSHIFT_EXPR,RSHIFT_EXPR,LROTATE_EXPR,RROTATE_EXPR,BIT_IOR_EXPR,BIT_XOR_EXPR,BIT_AND_EXPR,BIT_NOT_EXPR,TRUTH_ANDIF_EXPR,TRUTH_ORIF_EXPR,TRUTH_AND_EXPR,TRUTH_OR_EXPR,TRUTH_XOR_EXPR,TRUTH_NOT_EXPR,LT_EXPR,LE_EXPR,GT_EXPR,GE_EXPR,EQ_EXPR,NE_EXPR,UNORDERED_EXPR,ORDERED_EXPR,UNLT_EXPR,UNLE_EXPR,UNGT_EXPR,UNGE_EXPR,UNEQ_EXPR,LTGT_EXPR,RANGE_EXPR,CONVERT_EXPR,NOP_EXPR,NON_LVALUE_EXPR,VIEW_CONVERT_EXPR,SAVE_EXPR,ADDR_EXPR,FDESC_EXPR,COMPLEX_EXPR,CONJ_EXPR,REALPART_EXPR,IMAGPART_EXPR,PREDECREMENT_EXPR,PREINCREMENT_EXPR,POSTDECREMENT_EXPR,POSTINCREMENT_EXPR,VA_ARG_EXPR,TRY_CATCH_EXPR,TRY_FINALLY_EXPR,DECL_EXPR,LABEL_EXPR,GOTO_EXPR,RETURN_EXPR,EXIT_EXPR,LOOP_EXPR,SWITCH_EXPR,CASE_LABEL_EXPR,RESX_EXPR,ASM_EXPR,SSA_NAME,PHI_NODE,CATCH_EXPR,EH_FILTER_EXPR,SCEV_KNOWN,SCEV_NOT_KNOWN,POLYNOMIAL_CHREC,STATEMENT_LIST,VALUE_HANDLE,ASSERT_EXPR,TREE_BINFO,WITH_SIZE_EXPR,REALIGN_LOAD_EXPR,TARGET_MEM_REF,REDUC_MAX_EXPR,REDUC_MIN_EXPR,REDUC_PLUS_EXPR,VEC_LSHIFT_EXPR,VEC_RSHIFT_EXPR,LAST_AND_UNUSED_TREE_CODE}; 
#line 43 "../.././gcc/tree.h"
extern unsigned char tree_contains_struct[256][64]; 
#line 67 "../.././gcc/tree.h"
enum tree_code_class {tcc_exceptional,tcc_constant,tcc_type,tcc_declaration,tcc_reference,tcc_comparison,tcc_unary,tcc_binary,tcc_statement,tcc_expression}; 
#line 72 "../.././gcc/tree.h"
extern const char *const tree_code_class_strings[]; 
#line 80 "../.././gcc/tree.h"
extern const enum tree_code_class tree_code_type[]; 
# 54 "../.././gcc/tree.h" 
# 163 "../.././gcc/tree.h" 
extern const unsigned char tree_code_length[]; 
#line 168 "../.././gcc/tree.h"
extern const char *const tree_code_name[]; 
#line 171 "../.././gcc/tree.h"
static __inline__ void VEC_tree_must_be_pointer_type(void )  {

#line 171 "../.././gcc/tree.h"
((void )((( tree )1) == ((void *)1))); }
 
#line 171 "../.././gcc/tree.h"
typedef struct VEC_tree_base {unsigned num; unsigned alloc;  tree vec[1]; }VEC_tree_base; 
#line 171 "../.././gcc/tree.h"
typedef struct VEC_tree_none { VEC_tree_base base; }VEC_tree_none; 
#line 171 "../.././gcc/tree.h"
static __inline__ unsigned VEC_tree_base_length(const  VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"
return (vec_?(vec_->num):0); }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_last(const  VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"
((void )(vec_ && (vec_->num))); 
#line 171 "../.././gcc/tree.h"
return (vec_->vec)[(vec_->num) - 1]; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_index(const  VEC_tree_base *vec_, unsigned ix_)  {

#line 171 "../.././gcc/tree.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
return (vec_->vec)[ix_]; }
 
#line 171 "../.././gcc/tree.h"
static __inline__ int VEC_tree_base_iterate(const  VEC_tree_base *vec_, unsigned ix_,  tree *ptr)  {

#line 171 "../.././gcc/tree.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 171 "../.././gcc/tree.h"
(*ptr) = (vec_->vec)[ix_]; 
#line 171 "../.././gcc/tree.h"
return 1; } }else{
{ 
#line 171 "../.././gcc/tree.h"
(*ptr) = 0; 
#line 171 "../.././gcc/tree.h"
return 0; } }}
 
#line 171 "../.././gcc/tree.h"
static __inline__  size_t VEC_tree_base_embedded_size(int alloc_)  {

#line 171 "../.././gcc/tree.h"
return __builtin_offsetof ( VEC_tree_base  , vec) + alloc_ * sizeof ( tree ); }
 
#line 171 "../.././gcc/tree.h"
static __inline__ void VEC_tree_base_embedded_init( VEC_tree_base *vec_, int alloc_)  {

#line 171 "../.././gcc/tree.h"
(vec_->num) = 0; 
#line 171 "../.././gcc/tree.h"
(vec_->alloc) = alloc_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__ int VEC_tree_base_space( VEC_tree_base *vec_, int alloc_)  {

#line 171 "../.././gcc/tree.h"
((void )(alloc_ >= 0)); 
#line 171 "../.././gcc/tree.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_base_quick_push( VEC_tree_base *vec_,  tree obj_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 171 "../.././gcc/tree.h"
(*slot_) = obj_; 
#line 171 "../.././gcc/tree.h"
return slot_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_pop( VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree obj_;
#line 171 "../.././gcc/tree.h"
((void )((vec_->num))); 
#line 171 "../.././gcc/tree.h"
obj_ = (vec_->vec)[(--(vec_->num))]; 
#line 171 "../.././gcc/tree.h"
return obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__ void VEC_tree_base_truncate( VEC_tree_base *vec_, unsigned size_)  {

#line 171 "../.././gcc/tree.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 171 "../.././gcc/tree.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_replace( VEC_tree_base *vec_, unsigned ix_,  tree obj_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree old_obj_;
#line 171 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
old_obj_ = (vec_->vec)[ix_]; 
#line 171 "../.././gcc/tree.h"
(vec_->vec)[ix_] = obj_; 
#line 171 "../.././gcc/tree.h"
return old_obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_base_quick_insert( VEC_tree_base *vec_, unsigned ix_,  tree obj_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 171 "../.././gcc/tree.h"
((void )(ix_ <= (vec_->num))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 171 "../.././gcc/tree.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( tree )); 
#line 171 "../.././gcc/tree.h"
(*slot_) = obj_; 
#line 171 "../.././gcc/tree.h"
return slot_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_ordered_remove( VEC_tree_base *vec_, unsigned ix_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree obj_;
#line 171 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 171 "../.././gcc/tree.h"
obj_ = (*slot_); 
#line 171 "../.././gcc/tree.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( tree )); 
#line 171 "../.././gcc/tree.h"
return obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_unordered_remove( VEC_tree_base *vec_, unsigned ix_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree obj_;
#line 171 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 171 "../.././gcc/tree.h"
obj_ = (*slot_); 
#line 171 "../.././gcc/tree.h"
(*slot_) = (vec_->vec)[(--(vec_->num))]; 
#line 171 "../.././gcc/tree.h"
return obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_base_address( VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"
return (vec_?(vec_->vec):0); }
 
#line 171 "../.././gcc/tree.h"
static __inline__ unsigned VEC_tree_base_lower_bound( VEC_tree_base *vec_, const  tree obj_, unsigned char (*lessthan_)(const  tree , const  tree ))  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
unsigned int len_ = VEC_tree_base_length(vec_);
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
unsigned int half_,middle_;
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
unsigned int first_ = 0;
#line 171 "../.././gcc/tree.h"
while(len_ > 0) { { 
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree middle_elem_;
#line 171 "../.././gcc/tree.h"
half_ = len_ >> 1; 
#line 171 "../.././gcc/tree.h"
middle_ = first_; 
#line 171 "../.././gcc/tree.h"
middle_ += half_; 
#line 171 "../.././gcc/tree.h"
middle_elem_ = VEC_tree_base_index(vec_, middle_); 
#line 171 "../.././gcc/tree.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 171 "../.././gcc/tree.h"
first_ = middle_; 
#line 171 "../.././gcc/tree.h"
(++first_); 
#line 171 "../.././gcc/tree.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 171 "../.././gcc/tree.h"
return first_; }
 
#line 171 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 172 "../.././gcc/tree.h"
typedef struct VEC_tree_gc { VEC_tree_base base; }VEC_tree_gc; 
#line 172 "../.././gcc/tree.h"
static __inline__  VEC_tree_gc *VEC_tree_gc_alloc(int alloc_)  {

#line 172 "../.././gcc/tree.h"
return (( VEC_tree_gc *)vec_gc_p_reserve((((void *)0)), (-alloc_))); }
 
#line 172 "../.././gcc/tree.h"
static __inline__ void VEC_tree_gc_free( VEC_tree_gc **vec_)  {

#line 172 "../.././gcc/tree.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 172 "../.././gcc/tree.h"
(*vec_) = (((void *)0)); }
 
#line 172 "../.././gcc/tree.h"
static __inline__  VEC_tree_gc *VEC_tree_gc_copy( VEC_tree_base *vec_)  {

#line 172 "../.././gcc/tree.h"

#line 172 "../.././gcc/tree.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 172 "../.././gcc/tree.h"

#line 172 "../.././gcc/tree.h"
 VEC_tree_gc *new_vec_ = (((void *)0));
#line 172 "../.././gcc/tree.h"
if (len_){
{ 
#line 172 "../.././gcc/tree.h"
new_vec_ = (( VEC_tree_gc *)(vec_gc_p_reserve((((void *)0)), (-len_)))); 
#line 172 "../.././gcc/tree.h"
(new_vec_->base).num = len_; 
#line 172 "../.././gcc/tree.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( tree ) * len_); } }
#line 172 "../.././gcc/tree.h"
return new_vec_; }
 
#line 172 "../.././gcc/tree.h"
static __inline__ int VEC_tree_gc_reserve( VEC_tree_gc **vec_, int alloc_)  {

#line 172 "../.././gcc/tree.h"

#line 172 "../.././gcc/tree.h"
int extend = (!VEC_tree_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 172 "../.././gcc/tree.h"
if (extend){
(*vec_) = (( VEC_tree_gc *)vec_gc_p_reserve((*vec_), alloc_)); }
#line 172 "../.././gcc/tree.h"
return extend; }
 
#line 172 "../.././gcc/tree.h"
static __inline__ void VEC_tree_gc_safe_grow( VEC_tree_gc **vec_, int size_)  {

#line 172 "../.././gcc/tree.h"
((void )(size_ >= 0 && VEC_tree_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 172 "../.././gcc/tree.h"
VEC_tree_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 172 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 172 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_gc_safe_push( VEC_tree_gc **vec_,  tree obj_)  {

#line 172 "../.././gcc/tree.h"
VEC_tree_gc_reserve(vec_, 1); 
#line 172 "../.././gcc/tree.h"
return VEC_tree_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 172 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_gc_safe_insert( VEC_tree_gc **vec_, unsigned ix_,  tree obj_)  {

#line 172 "../.././gcc/tree.h"
VEC_tree_gc_reserve(vec_, 1); 
#line 172 "../.././gcc/tree.h"
return VEC_tree_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 172 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 173 "../.././gcc/tree.h"
typedef struct VEC_tree_heap { VEC_tree_base base; }VEC_tree_heap; 
#line 173 "../.././gcc/tree.h"
static __inline__  VEC_tree_heap *VEC_tree_heap_alloc(int alloc_)  {

#line 173 "../.././gcc/tree.h"
return (( VEC_tree_heap *)vec_heap_p_reserve((((void *)0)), (-alloc_))); }
 
#line 173 "../.././gcc/tree.h"
static __inline__ void VEC_tree_heap_free( VEC_tree_heap **vec_)  {

#line 173 "../.././gcc/tree.h"
if ((*vec_)){
free((*vec_)); }
#line 173 "../.././gcc/tree.h"
(*vec_) = (((void *)0)); }
 
#line 173 "../.././gcc/tree.h"
static __inline__  VEC_tree_heap *VEC_tree_heap_copy( VEC_tree_base *vec_)  {

#line 173 "../.././gcc/tree.h"

#line 173 "../.././gcc/tree.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 173 "../.././gcc/tree.h"

#line 173 "../.././gcc/tree.h"
 VEC_tree_heap *new_vec_ = (((void *)0));
#line 173 "../.././gcc/tree.h"
if (len_){
{ 
#line 173 "../.././gcc/tree.h"
new_vec_ = (( VEC_tree_heap *)(vec_heap_p_reserve((((void *)0)), (-len_)))); 
#line 173 "../.././gcc/tree.h"
(new_vec_->base).num = len_; 
#line 173 "../.././gcc/tree.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( tree ) * len_); } }
#line 173 "../.././gcc/tree.h"
return new_vec_; }
 
#line 173 "../.././gcc/tree.h"
static __inline__ int VEC_tree_heap_reserve( VEC_tree_heap **vec_, int alloc_)  {

#line 173 "../.././gcc/tree.h"

#line 173 "../.././gcc/tree.h"
int extend = (!VEC_tree_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 173 "../.././gcc/tree.h"
if (extend){
(*vec_) = (( VEC_tree_heap *)vec_heap_p_reserve((*vec_), alloc_)); }
#line 173 "../.././gcc/tree.h"
return extend; }
 
#line 173 "../.././gcc/tree.h"
static __inline__ void VEC_tree_heap_safe_grow( VEC_tree_heap **vec_, int size_)  {

#line 173 "../.././gcc/tree.h"
((void )(size_ >= 0 && VEC_tree_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 173 "../.././gcc/tree.h"
VEC_tree_heap_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 173 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 173 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_heap_safe_push( VEC_tree_heap **vec_,  tree obj_)  {

#line 173 "../.././gcc/tree.h"
VEC_tree_heap_reserve(vec_, 1); 
#line 173 "../.././gcc/tree.h"
return VEC_tree_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 173 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_heap_safe_insert( VEC_tree_heap **vec_, unsigned ix_,  tree obj_)  {

#line 173 "../.././gcc/tree.h"
VEC_tree_heap_reserve(vec_, 1); 
#line 173 "../.././gcc/tree.h"
return VEC_tree_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 173 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 184 "../.././gcc/tree.h"
enum built_in_class {NOT_BUILT_IN=0,BUILT_IN_FRONTEND,BUILT_IN_MD,BUILT_IN_NORMAL}; 
#line 187 "../.././gcc/tree.h"
extern const char *const built_in_class_names[4]; 
# 1 "../.././gcc/builtins.def" 1
# 168 "../.././gcc/builtins.def" 
# 213 "../.././gcc/tree.h" 2
enum built_in_function {BUILT_IN_ACOS,BUILT_IN_ACOSF,BUILT_IN_ACOSH,BUILT_IN_ACOSHF,BUILT_IN_ACOSHL,BUILT_IN_ACOSL,BUILT_IN_ASIN,BUILT_IN_ASINF,BUILT_IN_ASINH,BUILT_IN_ASINHF,BUILT_IN_ASINHL,BUILT_IN_ASINL,BUILT_IN_ATAN,BUILT_IN_ATAN2,BUILT_IN_ATAN2F,BUILT_IN_ATAN2L,BUILT_IN_ATANF,BUILT_IN_ATANH,BUILT_IN_ATANHF,BUILT_IN_ATANHL,BUILT_IN_ATANL,BUILT_IN_CBRT,BUILT_IN_CBRTF,BUILT_IN_CBRTL,BUILT_IN_CEIL,BUILT_IN_CEILF,BUILT_IN_CEILL,BUILT_IN_COPYSIGN,BUILT_IN_COPYSIGNF,BUILT_IN_COPYSIGNL,BUILT_IN_COS,BUILT_IN_COSF,BUILT_IN_COSH,BUILT_IN_COSHF,BUILT_IN_COSHL,BUILT_IN_COSL,BUILT_IN_DREM,BUILT_IN_DREMF,BUILT_IN_DREML,BUILT_IN_ERF,BUILT_IN_ERFC,BUILT_IN_ERFCF,BUILT_IN_ERFCL,BUILT_IN_ERFF,BUILT_IN_ERFL,BUILT_IN_EXP,BUILT_IN_EXP10,BUILT_IN_EXP10F,BUILT_IN_EXP10L,BUILT_IN_EXP2,BUILT_IN_EXP2F,BUILT_IN_EXP2L,BUILT_IN_EXPF,BUILT_IN_EXPL,BUILT_IN_EXPM1,BUILT_IN_EXPM1F,BUILT_IN_EXPM1L,BUILT_IN_FABS,BUILT_IN_FABSF,BUILT_IN_FABSL,BUILT_IN_FDIM,BUILT_IN_FDIMF,BUILT_IN_FDIML,BUILT_IN_FLOOR,BUILT_IN_FLOORF,BUILT_IN_FLOORL,BUILT_IN_FMA,BUILT_IN_FMAF,BUILT_IN_FMAL,BUILT_IN_FMAX,BUILT_IN_FMAXF,BUILT_IN_FMAXL,BUILT_IN_FMIN,BUILT_IN_FMINF,BUILT_IN_FMINL,BUILT_IN_FMOD,BUILT_IN_FMODF,BUILT_IN_FMODL,BUILT_IN_FREXP,BUILT_IN_FREXPF,BUILT_IN_FREXPL,BUILT_IN_GAMMA,BUILT_IN_GAMMAF,BUILT_IN_GAMMAL,BUILT_IN_HUGE_VAL,BUILT_IN_HUGE_VALF,BUILT_IN_HUGE_VALL,BUILT_IN_HYPOT,BUILT_IN_HYPOTF,BUILT_IN_HYPOTL,BUILT_IN_ILOGB,BUILT_IN_ILOGBF,BUILT_IN_ILOGBL,BUILT_IN_INF,BUILT_IN_INFF,BUILT_IN_INFL,BUILT_IN_J0,BUILT_IN_J0F,BUILT_IN_J0L,BUILT_IN_J1,BUILT_IN_J1F,BUILT_IN_J1L,BUILT_IN_JN,BUILT_IN_JNF,BUILT_IN_JNL,BUILT_IN_LCEIL,BUILT_IN_LCEILF,BUILT_IN_LCEILL,BUILT_IN_LDEXP,BUILT_IN_LDEXPF,BUILT_IN_LDEXPL,BUILT_IN_LFLOOR,BUILT_IN_LFLOORF,BUILT_IN_LFLOORL,BUILT_IN_LGAMMA,BUILT_IN_LGAMMAF,BUILT_IN_LGAMMAL,BUILT_IN_LLCEIL,BUILT_IN_LLCEILF,BUILT_IN_LLCEILL,BUILT_IN_LLFLOOR,BUILT_IN_LLFLOORF,BUILT_IN_LLFLOORL,BUILT_IN_LLRINT,BUILT_IN_LLRINTF,BUILT_IN_LLRINTL,BUILT_IN_LLROUND,BUILT_IN_LLROUNDF,BUILT_IN_LLROUNDL,BUILT_IN_LOG,BUILT_IN_LOG10,BUILT_IN_LOG10F,BUILT_IN_LOG10L,BUILT_IN_LOG1P,BUILT_IN_LOG1PF,BUILT_IN_LOG1PL,BUILT_IN_LOG2,BUILT_IN_LOG2F,BUILT_IN_LOG2L,BUILT_IN_LOGB,BUILT_IN_LOGBF,BUILT_IN_LOGBL,BUILT_IN_LOGF,BUILT_IN_LOGL,BUILT_IN_LRINT,BUILT_IN_LRINTF,BUILT_IN_LRINTL,BUILT_IN_LROUND,BUILT_IN_LROUNDF,BUILT_IN_LROUNDL,BUILT_IN_MODF,BUILT_IN_MODFF,BUILT_IN_MODFL,BUILT_IN_NAN,BUILT_IN_NANF,BUILT_IN_NANL,BUILT_IN_NANS,BUILT_IN_NANSF,BUILT_IN_NANSL,BUILT_IN_NEARBYINT,BUILT_IN_NEARBYINTF,BUILT_IN_NEARBYINTL,BUILT_IN_NEXTAFTER,BUILT_IN_NEXTAFTERF,BUILT_IN_NEXTAFTERL,BUILT_IN_NEXTTOWARD,BUILT_IN_NEXTTOWARDF,BUILT_IN_NEXTTOWARDL,BUILT_IN_POW,BUILT_IN_POW10,BUILT_IN_POW10F,BUILT_IN_POW10L,BUILT_IN_POWF,BUILT_IN_POWI,BUILT_IN_POWIF,BUILT_IN_POWIL,BUILT_IN_POWL,BUILT_IN_REMAINDER,BUILT_IN_REMAINDERF,BUILT_IN_REMAINDERL,BUILT_IN_REMQUO,BUILT_IN_REMQUOF,BUILT_IN_REMQUOL,BUILT_IN_RINT,BUILT_IN_RINTF,BUILT_IN_RINTL,BUILT_IN_ROUND,BUILT_IN_ROUNDF,BUILT_IN_ROUNDL,BUILT_IN_SCALB,BUILT_IN_SCALBF,BUILT_IN_SCALBL,BUILT_IN_SCALBLN,BUILT_IN_SCALBLNF,BUILT_IN_SCALBLNL,BUILT_IN_SCALBN,BUILT_IN_SCALBNF,BUILT_IN_SCALBNL,BUILT_IN_SIGNBIT,BUILT_IN_SIGNBITF,BUILT_IN_SIGNBITL,BUILT_IN_SIGNIFICAND,BUILT_IN_SIGNIFICANDF,BUILT_IN_SIGNIFICANDL,BUILT_IN_SIN,BUILT_IN_SINCOS,BUILT_IN_SINCOSF,BUILT_IN_SINCOSL,BUILT_IN_SINF,BUILT_IN_SINH,BUILT_IN_SINHF,BUILT_IN_SINHL,BUILT_IN_SINL,BUILT_IN_SQRT,BUILT_IN_SQRTF,BUILT_IN_SQRTL,BUILT_IN_TAN,BUILT_IN_TANF,BUILT_IN_TANH,BUILT_IN_TANHF,BUILT_IN_TANHL,BUILT_IN_TANL,BUILT_IN_TGAMMA,BUILT_IN_TGAMMAF,BUILT_IN_TGAMMAL,BUILT_IN_TRUNC,BUILT_IN_TRUNCF,BUILT_IN_TRUNCL,BUILT_IN_Y0,BUILT_IN_Y0F,BUILT_IN_Y0L,BUILT_IN_Y1,BUILT_IN_Y1F,BUILT_IN_Y1L,BUILT_IN_YN,BUILT_IN_YNF,BUILT_IN_YNL,BUILT_IN_CABS,BUILT_IN_CABSF,BUILT_IN_CABSL,BUILT_IN_CACOS,BUILT_IN_CACOSF,BUILT_IN_CACOSH,BUILT_IN_CACOSHF,BUILT_IN_CACOSHL,BUILT_IN_CACOSL,BUILT_IN_CARG,BUILT_IN_CARGF,BUILT_IN_CARGL,BUILT_IN_CASIN,BUILT_IN_CASINF,BUILT_IN_CASINH,BUILT_IN_CASINHF,BUILT_IN_CASINHL,BUILT_IN_CASINL,BUILT_IN_CATAN,BUILT_IN_CATANF,BUILT_IN_CATANH,BUILT_IN_CATANHF,BUILT_IN_CATANHL,BUILT_IN_CATANL,BUILT_IN_CCOS,BUILT_IN_CCOSF,BUILT_IN_CCOSH,BUILT_IN_CCOSHF,BUILT_IN_CCOSHL,BUILT_IN_CCOSL,BUILT_IN_CEXP,BUILT_IN_CEXPF,BUILT_IN_CEXPL,BUILT_IN_CIMAG,BUILT_IN_CIMAGF,BUILT_IN_CIMAGL,BUILT_IN_CLOG,BUILT_IN_CLOGF,BUILT_IN_CLOGL,BUILT_IN_CLOG10,BUILT_IN_CLOG10F,BUILT_IN_CLOG10L,BUILT_IN_CONJ,BUILT_IN_CONJF,BUILT_IN_CONJL,BUILT_IN_CPOW,BUILT_IN_CPOWF,BUILT_IN_CPOWL,BUILT_IN_CPROJ,BUILT_IN_CPROJF,BUILT_IN_CPROJL,BUILT_IN_CREAL,BUILT_IN_CREALF,BUILT_IN_CREALL,BUILT_IN_CSIN,BUILT_IN_CSINF,BUILT_IN_CSINH,BUILT_IN_CSINHF,BUILT_IN_CSINHL,BUILT_IN_CSINL,BUILT_IN_CSQRT,BUILT_IN_CSQRTF,BUILT_IN_CSQRTL,BUILT_IN_CTAN,BUILT_IN_CTANF,BUILT_IN_CTANH,BUILT_IN_CTANHF,BUILT_IN_CTANHL,BUILT_IN_CTANL,BUILT_IN_BCMP,BUILT_IN_BCOPY,BUILT_IN_BZERO,BUILT_IN_INDEX,BUILT_IN_MEMCMP,BUILT_IN_MEMCPY,BUILT_IN_MEMMOVE,BUILT_IN_MEMPCPY,BUILT_IN_MEMSET,BUILT_IN_RINDEX,BUILT_IN_STPCPY,BUILT_IN_STPNCPY,BUILT_IN_STRCASECMP,BUILT_IN_STRCAT,BUILT_IN_STRCHR,BUILT_IN_STRCMP,BUILT_IN_STRCPY,BUILT_IN_STRCSPN,BUILT_IN_STRDUP,BUILT_IN_STRNDUP,BUILT_IN_STRLEN,BUILT_IN_STRNCASECMP,BUILT_IN_STRNCAT,BUILT_IN_STRNCMP,BUILT_IN_STRNCPY,BUILT_IN_STRPBRK,BUILT_IN_STRRCHR,BUILT_IN_STRSPN,BUILT_IN_STRSTR,BUILT_IN_FPRINTF,BUILT_IN_FPRINTF_UNLOCKED,BUILT_IN_FPUTC,BUILT_IN_FPUTC_UNLOCKED,BUILT_IN_FPUTS,BUILT_IN_FPUTS_UNLOCKED,BUILT_IN_FSCANF,BUILT_IN_FWRITE,BUILT_IN_FWRITE_UNLOCKED,BUILT_IN_PRINTF,BUILT_IN_PRINTF_UNLOCKED,BUILT_IN_PUTCHAR,BUILT_IN_PUTCHAR_UNLOCKED,BUILT_IN_PUTS,BUILT_IN_PUTS_UNLOCKED,BUILT_IN_SCANF,BUILT_IN_SNPRINTF,BUILT_IN_SPRINTF,BUILT_IN_SSCANF,BUILT_IN_VFPRINTF,BUILT_IN_VFSCANF,BUILT_IN_VPRINTF,BUILT_IN_VSCANF,BUILT_IN_VSNPRINTF,BUILT_IN_VSPRINTF,BUILT_IN_VSSCANF,BUILT_IN_ISALNUM,BUILT_IN_ISALPHA,BUILT_IN_ISASCII,BUILT_IN_ISBLANK,BUILT_IN_ISCNTRL,BUILT_IN_ISDIGIT,BUILT_IN_ISGRAPH,BUILT_IN_ISLOWER,BUILT_IN_ISPRINT,BUILT_IN_ISPUNCT,BUILT_IN_ISSPACE,BUILT_IN_ISUPPER,BUILT_IN_ISXDIGIT,BUILT_IN_TOASCII,BUILT_IN_TOLOWER,BUILT_IN_TOUPPER,BUILT_IN_ISWALNUM,BUILT_IN_ISWALPHA,BUILT_IN_ISWBLANK,BUILT_IN_ISWCNTRL,BUILT_IN_ISWDIGIT,BUILT_IN_ISWGRAPH,BUILT_IN_ISWLOWER,BUILT_IN_ISWPRINT,BUILT_IN_ISWPUNCT,BUILT_IN_ISWSPACE,BUILT_IN_ISWUPPER,BUILT_IN_ISWXDIGIT,BUILT_IN_TOWLOWER,BUILT_IN_TOWUPPER,BUILT_IN_ABORT,BUILT_IN_ABS,BUILT_IN_AGGREGATE_INCOMING_ADDRESS,BUILT_IN_ALLOCA,BUILT_IN_APPLY,BUILT_IN_APPLY_ARGS,BUILT_IN_ARGS_INFO,BUILT_IN_CALLOC,BUILT_IN_CLASSIFY_TYPE,BUILT_IN_CLZ,BUILT_IN_CLZIMAX,BUILT_IN_CLZL,BUILT_IN_CLZLL,BUILT_IN_CONSTANT_P,BUILT_IN_CTZ,BUILT_IN_CTZIMAX,BUILT_IN_CTZL,BUILT_IN_CTZLL,BUILT_IN_DCGETTEXT,BUILT_IN_DGETTEXT,BUILT_IN_DWARF_CFA,BUILT_IN_DWARF_SP_COLUMN,BUILT_IN_EH_RETURN,BUILT_IN_EH_RETURN_DATA_REGNO,BUILT_IN_EXECL,BUILT_IN_EXECLP,BUILT_IN_EXECLE,BUILT_IN_EXECV,BUILT_IN_EXECVP,BUILT_IN_EXECVE,BUILT_IN_EXIT,BUILT_IN_EXPECT,BUILT_IN_EXTEND_POINTER,BUILT_IN_EXTRACT_RETURN_ADDR,BUILT_IN_FFS,BUILT_IN_FFSIMAX,BUILT_IN_FFSL,BUILT_IN_FFSLL,BUILT_IN_FORK,BUILT_IN_FRAME_ADDRESS,BUILT_IN_FROB_RETURN_ADDR,BUILT_IN_GETTEXT,BUILT_IN_IMAXABS,BUILT_IN_INIT_DWARF_REG_SIZES,BUILT_IN_FINITE,BUILT_IN_FINITEF,BUILT_IN_FINITEL,BUILT_IN_ISINF,BUILT_IN_ISINFF,BUILT_IN_ISINFL,BUILT_IN_ISNAN,BUILT_IN_ISNANF,BUILT_IN_ISNANL,BUILT_IN_ISGREATER,BUILT_IN_ISGREATEREQUAL,BUILT_IN_ISLESS,BUILT_IN_ISLESSEQUAL,BUILT_IN_ISLESSGREATER,BUILT_IN_ISUNORDERED,BUILT_IN_LABS,BUILT_IN_LLABS,BUILT_IN_LONGJMP,BUILT_IN_MALLOC,BUILT_IN_NEXT_ARG,BUILT_IN_PARITY,BUILT_IN_PARITYIMAX,BUILT_IN_PARITYL,BUILT_IN_PARITYLL,BUILT_IN_POPCOUNT,BUILT_IN_POPCOUNTIMAX,BUILT_IN_POPCOUNTL,BUILT_IN_POPCOUNTLL,BUILT_IN_PREFETCH,BUILT_IN_RETURN,BUILT_IN_RETURN_ADDRESS,BUILT_IN_SAVEREGS,BUILT_IN_SETJMP,BUILT_IN_STDARG_START,BUILT_IN_STRFMON,BUILT_IN_STRFTIME,BUILT_IN_TRAP,BUILT_IN_UNWIND_INIT,BUILT_IN_UPDATE_SETJMP_BUF,BUILT_IN_VA_COPY,BUILT_IN_VA_END,BUILT_IN_VA_START,BUILT_IN__EXIT,BUILT_IN__EXIT2,BUILT_IN_INIT_TRAMPOLINE,BUILT_IN_ADJUST_TRAMPOLINE,BUILT_IN_NONLOCAL_GOTO,BUILT_IN_STACK_SAVE,BUILT_IN_STACK_RESTORE,BUILT_IN_OBJECT_SIZE,BUILT_IN_MEMCPY_CHK,BUILT_IN_MEMMOVE_CHK,BUILT_IN_MEMPCPY_CHK,BUILT_IN_MEMSET_CHK,BUILT_IN_STPCPY_CHK,BUILT_IN_STRCAT_CHK,BUILT_IN_STRCPY_CHK,BUILT_IN_STRNCAT_CHK,BUILT_IN_STRNCPY_CHK,BUILT_IN_SNPRINTF_CHK,BUILT_IN_SPRINTF_CHK,BUILT_IN_VSNPRINTF_CHK,BUILT_IN_VSPRINTF_CHK,BUILT_IN_FPRINTF_CHK,BUILT_IN_PRINTF_CHK,BUILT_IN_VFPRINTF_CHK,BUILT_IN_VPRINTF_CHK,BUILT_IN_PROFILE_FUNC_ENTER,BUILT_IN_PROFILE_FUNC_EXIT,BUILT_IN_FETCH_AND_ADD_N,BUILT_IN_FETCH_AND_ADD_1,BUILT_IN_FETCH_AND_ADD_2,BUILT_IN_FETCH_AND_ADD_4,BUILT_IN_FETCH_AND_ADD_8,BUILT_IN_FETCH_AND_SUB_N,BUILT_IN_FETCH_AND_SUB_1,BUILT_IN_FETCH_AND_SUB_2,BUILT_IN_FETCH_AND_SUB_4,BUILT_IN_FETCH_AND_SUB_8,BUILT_IN_FETCH_AND_OR_N,BUILT_IN_FETCH_AND_OR_1,BUILT_IN_FETCH_AND_OR_2,BUILT_IN_FETCH_AND_OR_4,BUILT_IN_FETCH_AND_OR_8,BUILT_IN_FETCH_AND_AND_N,BUILT_IN_FETCH_AND_AND_1,BUILT_IN_FETCH_AND_AND_2,BUILT_IN_FETCH_AND_AND_4,BUILT_IN_FETCH_AND_AND_8,BUILT_IN_FETCH_AND_XOR_N,BUILT_IN_FETCH_AND_XOR_1,BUILT_IN_FETCH_AND_XOR_2,BUILT_IN_FETCH_AND_XOR_4,BUILT_IN_FETCH_AND_XOR_8,BUILT_IN_FETCH_AND_NAND_N,BUILT_IN_FETCH_AND_NAND_1,BUILT_IN_FETCH_AND_NAND_2,BUILT_IN_FETCH_AND_NAND_4,BUILT_IN_FETCH_AND_NAND_8,BUILT_IN_ADD_AND_FETCH_N,BUILT_IN_ADD_AND_FETCH_1,BUILT_IN_ADD_AND_FETCH_2,BUILT_IN_ADD_AND_FETCH_4,BUILT_IN_ADD_AND_FETCH_8,BUILT_IN_SUB_AND_FETCH_N,BUILT_IN_SUB_AND_FETCH_1,BUILT_IN_SUB_AND_FETCH_2,BUILT_IN_SUB_AND_FETCH_4,BUILT_IN_SUB_AND_FETCH_8,BUILT_IN_OR_AND_FETCH_N,BUILT_IN_OR_AND_FETCH_1,BUILT_IN_OR_AND_FETCH_2,BUILT_IN_OR_AND_FETCH_4,BUILT_IN_OR_AND_FETCH_8,BUILT_IN_AND_AND_FETCH_N,BUILT_IN_AND_AND_FETCH_1,BUILT_IN_AND_AND_FETCH_2,BUILT_IN_AND_AND_FETCH_4,BUILT_IN_AND_AND_FETCH_8,BUILT_IN_XOR_AND_FETCH_N,BUILT_IN_XOR_AND_FETCH_1,BUILT_IN_XOR_AND_FETCH_2,BUILT_IN_XOR_AND_FETCH_4,BUILT_IN_XOR_AND_FETCH_8,BUILT_IN_NAND_AND_FETCH_N,BUILT_IN_NAND_AND_FETCH_1,BUILT_IN_NAND_AND_FETCH_2,BUILT_IN_NAND_AND_FETCH_4,BUILT_IN_NAND_AND_FETCH_8,BUILT_IN_BOOL_COMPARE_AND_SWAP_N,BUILT_IN_BOOL_COMPARE_AND_SWAP_1,BUILT_IN_BOOL_COMPARE_AND_SWAP_2,BUILT_IN_BOOL_COMPARE_AND_SWAP_4,BUILT_IN_BOOL_COMPARE_AND_SWAP_8,BUILT_IN_VAL_COMPARE_AND_SWAP_N,BUILT_IN_VAL_COMPARE_AND_SWAP_1,BUILT_IN_VAL_COMPARE_AND_SWAP_2,BUILT_IN_VAL_COMPARE_AND_SWAP_4,BUILT_IN_VAL_COMPARE_AND_SWAP_8,BUILT_IN_LOCK_TEST_AND_SET_N,BUILT_IN_LOCK_TEST_AND_SET_1,BUILT_IN_LOCK_TEST_AND_SET_2,BUILT_IN_LOCK_TEST_AND_SET_4,BUILT_IN_LOCK_TEST_AND_SET_8,BUILT_IN_LOCK_RELEASE_N,BUILT_IN_LOCK_RELEASE_1,BUILT_IN_LOCK_RELEASE_2,BUILT_IN_LOCK_RELEASE_4,BUILT_IN_LOCK_RELEASE_8,BUILT_IN_SYNCHRONIZE,BUILT_IN_COMPLEX_MUL_MIN,BUILT_IN_COMPLEX_MUL_MAX=BUILT_IN_COMPLEX_MUL_MIN + MAX_MODE_COMPLEX_FLOAT - MIN_MODE_COMPLEX_FLOAT,BUILT_IN_COMPLEX_DIV_MIN,BUILT_IN_COMPLEX_DIV_MAX=BUILT_IN_COMPLEX_DIV_MIN + MAX_MODE_COMPLEX_FLOAT - MIN_MODE_COMPLEX_FLOAT,END_BUILTINS}; 
#line 217 "../.././gcc/tree.h"
extern const char *built_in_names[((int )END_BUILTINS)]; 
#line 238 "../.././gcc/tree.h"
extern  tree built_in_decls[((int )END_BUILTINS)]; 
#line 239 "../.././gcc/tree.h"
extern  tree implicit_built_in_decls[((int )END_BUILTINS)]; 
# 238 "../.././gcc/tree.h" 
# 262 "../.././gcc/tree.h" 
union tree_ann_d ; 
#line 298 "../.././gcc/tree.h"
struct tree_common { tree chain;  tree type; union tree_ann_d *ann;  __extension__ enum tree_code code:8; unsigned side_effects_flag:1; unsigned constant_flag:1; unsigned addressable_flag:1; unsigned volatile_flag:1; unsigned readonly_flag:1; unsigned unsigned_flag:1; unsigned asm_written_flag:1; unsigned nowarning_flag:1; unsigned used_flag:1; unsigned nothrow_flag:1; unsigned static_flag:1; unsigned public_flag:1; unsigned private_flag:1; unsigned protected_flag:1; unsigned deprecated_flag:1; unsigned invariant_flag:1; unsigned lang_flag_0:1; unsigned lang_flag_1:1; unsigned lang_flag_2:1; unsigned lang_flag_3:1; unsigned lang_flag_4:1; unsigned lang_flag_5:1; unsigned lang_flag_6:1; unsigned visited:1; }; 
# 450 "../.././gcc/tree.h" 
# 1 "../.././gcc/treestruct.def" 1
# 31 "../.././gcc/treestruct.def" 
# 453 "../.././gcc/tree.h" 2
enum tree_node_structure_enum {TS_COMMON,TS_INT_CST,TS_REAL_CST,TS_VECTOR,TS_STRING,TS_COMPLEX,TS_IDENTIFIER,TS_DECL_MINIMAL,TS_DECL_COMMON,TS_DECL_WRTL,TS_DECL_NON_COMMON,TS_DECL_WITH_VIS,TS_FIELD_DECL,TS_VAR_DECL,TS_PARM_DECL,TS_LABEL_DECL,TS_RESULT_DECL,TS_CONST_DECL,TS_TYPE_DECL,TS_FUNCTION_DECL,TS_TYPE,TS_LIST,TS_VEC,TS_EXP,TS_SSA_NAME,TS_PHI_NODE,TS_BLOCK,TS_BINFO,TS_STATEMENT_LIST,TS_VALUE_HANDLE,TS_CONSTRUCTOR,LAST_TS_ENUM}; 
# 689 "../.././gcc/tree.h" 
# 1 "./tree-check.h" 1
# 690 "../.././gcc/tree.h" 2
# 1105 "../.././gcc/tree.h" 
struct tree_int_cst {struct tree_common common; struct tree_int_cst_lowhi {unsigned long low; long high; }int_cst; }; 
#line 1110 "../.././gcc/tree.h"
struct real_value ; 
#line 1119 "../.././gcc/tree.h"
struct tree_real_cst {struct tree_common common; struct real_value *real_cst_ptr; }; 
#line 1131 "../.././gcc/tree.h"
struct tree_string {struct tree_common common; int length; char str[1]; }; 
#line 1142 "../.././gcc/tree.h"
struct tree_complex {struct tree_common common;  tree real;  tree imag; }; 
#line 1151 "../.././gcc/tree.h"
struct tree_vector {struct tree_common common;  tree elements; }; 
# 1 "../.././gcc/../libcpp/include/symtab.h" 1
# 21 "../.././gcc/../libcpp/include/symtab.h" 
# 1 "../.././gcc/../include/obstack.h" 1
# 162 "../.././gcc/../include/obstack.h" 
struct _obstack_chunk {char *limit; struct _obstack_chunk *prev; char contents[4]; }; 
#line 187 "../.././gcc/../include/obstack.h"
struct obstack {long chunk_size; struct _obstack_chunk *chunk; char *object_base; char *next_free; char *chunk_limit; int temp; int alignment_mask; struct _obstack_chunk *(*chunkfun)(void *, long ); void (*freefun)(void *, struct _obstack_chunk *); void *extra_arg; unsigned use_extra_arg:1; unsigned maybe_empty_object:1; unsigned alloc_failed:1; }; 
#line 191 "../.././gcc/../include/obstack.h"
extern void _obstack_newchunk(struct obstack *, int ); 
#line 192 "../.././gcc/../include/obstack.h"
extern void _obstack_free(struct obstack *, void *); 
#line 194 "../.././gcc/../include/obstack.h"
extern int _obstack_begin(struct obstack *, int , int , void *(*)(long ), void (*)(void *)); 
#line 197 "../.././gcc/../include/obstack.h"
extern int _obstack_begin_1(struct obstack *, int , int , void *(*)(void *, long ), void (*)(void *, void *), void *); 
#line 198 "../.././gcc/../include/obstack.h"
extern int _obstack_memory_used(struct obstack *); 
#line 203 "../.././gcc/../include/obstack.h"
void obstack_init(struct obstack *obstack); 
#line 205 "../.././gcc/../include/obstack.h"
void *obstack_alloc(struct obstack *obstack, int size); 
#line 207 "../.././gcc/../include/obstack.h"
void *obstack_copy(struct obstack *obstack, void *address, int size); 
#line 208 "../.././gcc/../include/obstack.h"
void *obstack_copy0(struct obstack *obstack, void *address, int size); 
#line 210 "../.././gcc/../include/obstack.h"
void obstack_free(struct obstack *obstack, void *block); 
#line 212 "../.././gcc/../include/obstack.h"
void obstack_blank(struct obstack *obstack, int size); 
#line 214 "../.././gcc/../include/obstack.h"
void obstack_grow(struct obstack *obstack, void *data, int size); 
#line 215 "../.././gcc/../include/obstack.h"
void obstack_grow0(struct obstack *obstack, void *data, int size); 
#line 217 "../.././gcc/../include/obstack.h"
void obstack_1grow(struct obstack *obstack, int data_char); 
#line 218 "../.././gcc/../include/obstack.h"
void obstack_ptr_grow(struct obstack *obstack, void *data); 
#line 219 "../.././gcc/../include/obstack.h"
void obstack_int_grow(struct obstack *obstack, int data); 
#line 221 "../.././gcc/../include/obstack.h"
void *obstack_finish(struct obstack *obstack); 
#line 223 "../.././gcc/../include/obstack.h"
int obstack_object_size(struct obstack *obstack); 
#line 225 "../.././gcc/../include/obstack.h"
int obstack_room(struct obstack *obstack); 
#line 226 "../.././gcc/../include/obstack.h"
void obstack_make_room(struct obstack *obstack, int size); 
#line 227 "../.././gcc/../include/obstack.h"
void obstack_1grow_fast(struct obstack *obstack, int data_char); 
#line 228 "../.././gcc/../include/obstack.h"
void obstack_ptr_grow_fast(struct obstack *obstack, void *data); 
#line 229 "../.././gcc/../include/obstack.h"
void obstack_int_grow_fast(struct obstack *obstack, int data); 
#line 230 "../.././gcc/../include/obstack.h"
void obstack_blank_fast(struct obstack *obstack, int size); 
#line 232 "../.././gcc/../include/obstack.h"
void *obstack_base(struct obstack *obstack); 
#line 233 "../.././gcc/../include/obstack.h"
void *obstack_next_free(struct obstack *obstack); 
#line 234 "../.././gcc/../include/obstack.h"
int obstack_alignment_mask(struct obstack *obstack); 
#line 235 "../.././gcc/../include/obstack.h"
int obstack_chunk_size(struct obstack *obstack); 
#line 236 "../.././gcc/../include/obstack.h"
int obstack_memory_used(struct obstack *obstack); 
#line 241 "../.././gcc/../include/obstack.h"
extern void (*obstack_alloc_failed_handler)(void ); 
#line 244 "../.././gcc/../include/obstack.h"
extern int obstack_exit_failure; 
#line 26 "../.././gcc/../libcpp/include/symtab.h"
typedef struct ht_identifier ht_identifier; 
#line 32 "../.././gcc/../libcpp/include/symtab.h"
struct ht_identifier {const unsigned char *str; unsigned int len; unsigned int hash_value; }; 
#line 37 "../.././gcc/../libcpp/include/symtab.h"
typedef struct ht hash_table; 
#line 38 "../.././gcc/../libcpp/include/symtab.h"
typedef struct ht_identifier *hashnode; 
#line 40 "../.././gcc/../libcpp/include/symtab.h"
enum ht_lookup_option {HT_NO_INSERT=0,HT_ALLOC,HT_ALLOCED}; 
#line 67 "../.././gcc/../libcpp/include/symtab.h"
struct ht {struct obstack stack;  hashnode *entries;  hashnode (*alloc_node)( hash_table *); void *(*alloc_subobject)( size_t ); unsigned int nslots; unsigned int nelements; struct cpp_reader *pfile; unsigned int searches; unsigned int collisions; unsigned char entries_owned; }; 
#line 70 "../.././gcc/../libcpp/include/symtab.h"
extern  hash_table *ht_create(unsigned int order); 
#line 73 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_destroy( hash_table *); 
#line 76 "../.././gcc/../libcpp/include/symtab.h"
extern  hashnode ht_lookup( hash_table *, const unsigned char *,  size_t , enum ht_lookup_option ); 
#line 79 "../.././gcc/../libcpp/include/symtab.h"
extern  hashnode ht_lookup_with_hash( hash_table *, const unsigned char *,  size_t , unsigned int , enum ht_lookup_option ); 
#line 86 "../.././gcc/../libcpp/include/symtab.h"
typedef int (*ht_cb)(struct cpp_reader *,  hashnode , const void *); 
#line 87 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_forall( hash_table *,  ht_cb , const void *); 
#line 91 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_load( hash_table *ht,  hashnode *entries, unsigned int nslots, unsigned int nelements, unsigned char own); 
#line 94 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_dump_statistics( hash_table *); 
# 22 "../.././gcc/../libcpp/include/symtab.h" 2
# 1154 "../.././gcc/tree.h" 2
# 1175 "../.././gcc/tree.h" 
struct tree_identifier {struct tree_common common; struct ht_identifier id; }; 
#line 1186 "../.././gcc/tree.h"
struct tree_list {struct tree_common common;  tree purpose;  tree value; }; 
#line 1200 "../.././gcc/tree.h"
struct tree_vec {struct tree_common common; int length;  tree a[1]; }; 
# 1195 "../.././gcc/tree.h" 
# 1242 "../.././gcc/tree.h" 
typedef struct constructor_elt_d { tree index;  tree value; }constructor_elt; 
#line 1244 "../.././gcc/tree.h"
typedef struct VEC_constructor_elt_base {unsigned num; unsigned alloc;  constructor_elt vec[1]; }VEC_constructor_elt_base; 
#line 1244 "../.././gcc/tree.h"
typedef struct VEC_constructor_elt_none { VEC_constructor_elt_base base; }VEC_constructor_elt_none; 
#line 1244 "../.././gcc/tree.h"
static __inline__ unsigned VEC_constructor_elt_base_length(const  VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
return (vec_?(vec_->num):0); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_last( VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
((void )(vec_ && (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
return (&(vec_->vec)[(vec_->num) - 1]); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_index( VEC_constructor_elt_base *vec_, unsigned ix_)  {

#line 1244 "../.././gcc/tree.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
return (&(vec_->vec)[ix_]); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ int VEC_constructor_elt_base_iterate( VEC_constructor_elt_base *vec_, unsigned ix_,  constructor_elt **ptr)  {

#line 1244 "../.././gcc/tree.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 1244 "../.././gcc/tree.h"
(*ptr) = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
return 1; } }else{
{ 
#line 1244 "../.././gcc/tree.h"
(*ptr) = 0; 
#line 1244 "../.././gcc/tree.h"
return 0; } }}
 
#line 1244 "../.././gcc/tree.h"
static __inline__  size_t VEC_constructor_elt_base_embedded_size(int alloc_)  {

#line 1244 "../.././gcc/tree.h"
return __builtin_offsetof ( VEC_constructor_elt_base  , vec) + alloc_ * sizeof ( constructor_elt ); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_embedded_init( VEC_constructor_elt_base *vec_, int alloc_)  {

#line 1244 "../.././gcc/tree.h"
(vec_->num) = 0; 
#line 1244 "../.././gcc/tree.h"
(vec_->alloc) = alloc_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ int VEC_constructor_elt_base_space( VEC_constructor_elt_base *vec_, int alloc_)  {

#line 1244 "../.././gcc/tree.h"
((void )(alloc_ >= 0)); 
#line 1244 "../.././gcc/tree.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_quick_push( VEC_constructor_elt_base *vec_, const  constructor_elt *obj_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 1244 "../.././gcc/tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 1244 "../.././gcc/tree.h"
return slot_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_pop( VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
((void )((vec_->num))); 
#line 1244 "../.././gcc/tree.h"
(--(vec_->num)); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_truncate( VEC_constructor_elt_base *vec_, unsigned size_)  {

#line 1244 "../.././gcc/tree.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 1244 "../.././gcc/tree.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_replace( VEC_constructor_elt_base *vec_, unsigned ix_, const  constructor_elt *obj_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 1244 "../.././gcc/tree.h"
return slot_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_quick_insert( VEC_constructor_elt_base *vec_, unsigned ix_, const  constructor_elt *obj_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 1244 "../.././gcc/tree.h"
((void )(ix_ <= (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( constructor_elt )); 
#line 1244 "../.././gcc/tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 1244 "../.././gcc/tree.h"
return slot_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_ordered_remove( VEC_constructor_elt_base *vec_, unsigned ix_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( constructor_elt )); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_unordered_remove( VEC_constructor_elt_base *vec_, unsigned ix_)  {

#line 1244 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
(vec_->vec)[ix_] = (vec_->vec)[(--(vec_->num))]; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_address( VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
return (vec_?(vec_->vec):0); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ unsigned VEC_constructor_elt_base_lower_bound( VEC_constructor_elt_base *vec_, const  constructor_elt *obj_, unsigned char (*lessthan_)(const  constructor_elt *, const  constructor_elt *))  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
unsigned int len_ = VEC_constructor_elt_base_length(vec_);
#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
unsigned int half_,middle_;
#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
unsigned int first_ = 0;
#line 1244 "../.././gcc/tree.h"
while(len_ > 0) { { 
#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *middle_elem_;
#line 1244 "../.././gcc/tree.h"
half_ = len_ >> 1; 
#line 1244 "../.././gcc/tree.h"
middle_ = first_; 
#line 1244 "../.././gcc/tree.h"
middle_ += half_; 
#line 1244 "../.././gcc/tree.h"
middle_elem_ = VEC_constructor_elt_base_index(vec_, middle_); 
#line 1244 "../.././gcc/tree.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 1244 "../.././gcc/tree.h"
first_ = middle_; 
#line 1244 "../.././gcc/tree.h"
(++first_); 
#line 1244 "../.././gcc/tree.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 1244 "../.././gcc/tree.h"
return first_; }
 
#line 1244 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 1245 "../.././gcc/tree.h"
typedef struct VEC_constructor_elt_gc { VEC_constructor_elt_base base; }VEC_constructor_elt_gc; 
#line 1245 "../.././gcc/tree.h"
static __inline__  VEC_constructor_elt_gc *VEC_constructor_elt_gc_alloc(int alloc_)  {

#line 1245 "../.././gcc/tree.h"
return (( VEC_constructor_elt_gc *)vec_gc_o_reserve((((void *)0)), (-alloc_), __builtin_offsetof ( VEC_constructor_elt_gc  , base.vec), sizeof ( constructor_elt ))); }
 
#line 1245 "../.././gcc/tree.h"
static __inline__  VEC_constructor_elt_gc *VEC_constructor_elt_gc_copy( VEC_constructor_elt_base *vec_)  {

#line 1245 "../.././gcc/tree.h"

#line 1245 "../.././gcc/tree.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 1245 "../.././gcc/tree.h"

#line 1245 "../.././gcc/tree.h"
 VEC_constructor_elt_gc *new_vec_ = (((void *)0));
#line 1245 "../.././gcc/tree.h"
if (len_){
{ 
#line 1245 "../.././gcc/tree.h"
new_vec_ = (( VEC_constructor_elt_gc *)(vec_gc_o_reserve((((void *)0)), (-len_), __builtin_offsetof ( VEC_constructor_elt_gc  , base.vec), sizeof ( constructor_elt )))); 
#line 1245 "../.././gcc/tree.h"
(new_vec_->base).num = len_; 
#line 1245 "../.././gcc/tree.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( constructor_elt ) * len_); } }
#line 1245 "../.././gcc/tree.h"
return new_vec_; }
 
#line 1245 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_gc_free( VEC_constructor_elt_gc **vec_)  {

#line 1245 "../.././gcc/tree.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 1245 "../.././gcc/tree.h"
(*vec_) = (((void *)0)); }
 
#line 1245 "../.././gcc/tree.h"
static __inline__ int VEC_constructor_elt_gc_reserve( VEC_constructor_elt_gc **vec_, int alloc_)  {

#line 1245 "../.././gcc/tree.h"

#line 1245 "../.././gcc/tree.h"
int extend = (!VEC_constructor_elt_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 1245 "../.././gcc/tree.h"
if (extend){
(*vec_) = (( VEC_constructor_elt_gc *)vec_gc_o_reserve((*vec_), alloc_, __builtin_offsetof ( VEC_constructor_elt_gc  , base.vec), sizeof ( constructor_elt ))); }
#line 1245 "../.././gcc/tree.h"
return extend; }
 
#line 1245 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_gc_safe_grow( VEC_constructor_elt_gc **vec_, int size_)  {

#line 1245 "../.././gcc/tree.h"
((void )(size_ >= 0 && VEC_constructor_elt_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 1245 "../.././gcc/tree.h"
VEC_constructor_elt_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 1245 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; 
#line 1245 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 1245 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_gc_safe_push( VEC_constructor_elt_gc **vec_, const  constructor_elt *obj_)  {

#line 1245 "../.././gcc/tree.h"
VEC_constructor_elt_gc_reserve(vec_, 1); 
#line 1245 "../.././gcc/tree.h"
return VEC_constructor_elt_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 1245 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_gc_safe_insert( VEC_constructor_elt_gc **vec_, unsigned ix_, const  constructor_elt *obj_)  {

#line 1245 "../.././gcc/tree.h"
VEC_constructor_elt_gc_reserve(vec_, 1); 
#line 1245 "../.././gcc/tree.h"
return VEC_constructor_elt_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 1245 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 1251 "../.././gcc/tree.h"
struct tree_constructor {struct tree_common common;  VEC_constructor_elt_gc *elts; }; 
#line 1397 "../.././gcc/tree.h"
struct tree_exp {struct tree_common common;  source_locus locus; int complexity;  tree block;  tree operands[1]; }; 
# 1390 "../.././gcc/tree.h" 
# 1441 "../.././gcc/tree.h" 
struct ptr_info_def ; 
#line 1454 "../.././gcc/tree.h"
typedef struct ssa_use_operand_d {struct ssa_use_operand_d *prev; struct ssa_use_operand_d *next;  tree stmt;  tree *use; }ssa_use_operand_t; 
#line 1484 "../.././gcc/tree.h"
struct tree_ssa_name {struct tree_common common;  tree var; unsigned int version; struct ptr_info_def *ptr_info;  tree value_handle; void *aux; struct ssa_use_operand_d imm_uses; }; 
#line 1517 "../.././gcc/tree.h"
struct phi_arg_d {struct ssa_use_operand_d imm_use;  tree def; unsigned char nonzero; }; 
#line 1532 "../.././gcc/tree.h"
struct tree_phi_node {struct tree_common common;  tree result; int num_args; int capacity; struct basic_block_def *bb; struct phi_arg_d a[1]; }; 
#line 1535 "../.././gcc/tree.h"
struct varray_head_tag ; 
# 1510 "../.././gcc/tree.h" 
# 1603 "../.././gcc/tree.h" 
struct tree_block {struct tree_common common; unsigned handler_block_flag:1; unsigned abstract_flag:1; unsigned block_num:30;  tree vars;  tree subblocks;  tree supercontext;  tree abstract_origin;  tree fragment_origin;  tree fragment_chain;  location_t locus; }; 
#line 1799 "../.././gcc/tree.h"
struct die_struct ; 
#line 1849 "../.././gcc/tree.h"
struct tree_type {struct tree_common common;  tree values;  tree size;  tree size_unit;  tree attributes; unsigned int uid; unsigned int precision:9;  __extension__ enum machine_mode mode:7; unsigned string_flag:1; unsigned no_force_blk_flag:1; unsigned needs_constructing_flag:1; unsigned transparent_union_flag:1; unsigned packed_flag:1; unsigned restrict_flag:1; unsigned contains_placeholder_bits:2; unsigned lang_flag_0:1; unsigned lang_flag_1:1; unsigned lang_flag_2:1; unsigned lang_flag_3:1; unsigned lang_flag_4:1; unsigned lang_flag_5:1; unsigned lang_flag_6:1; unsigned user_align:1; unsigned int align;  tree pointer_to;  tree reference_to; union tree_type_symtab {int address; char *pointer; struct die_struct *die; }symtab;  tree name;  tree minval;  tree maxval;  tree next_variant;  tree main_variant;  tree binfo;  tree context; long alias_set; struct lang_type *lang_specific; }; 
# 1799 "../.././gcc/tree.h" 
# 1969 "../.././gcc/tree.h" 
struct tree_binfo {struct tree_common common;  tree offset;  tree vtable;  tree virtuals;  tree vptr_field;  VEC_tree_gc *base_accesses;  tree inheritance;  tree vtt_subvtt;  tree vtt_vptr;  VEC_tree_none base_binfos; }; 
#line 1996 "../.././gcc/tree.h"
enum symbol_visibility {VISIBILITY_DEFAULT,VISIBILITY_INTERNAL,VISIBILITY_HIDDEN,VISIBILITY_PROTECTED}; 
#line 1999 "../.././gcc/tree.h"
struct function ; 
# 1990 "../.././gcc/tree.h" 
# 2039 "../.././gcc/tree.h" 
struct tree_decl_minimal {struct tree_common common;  location_t locus; unsigned int uid;  tree name;  tree context; }; 
#line 2247 "../.././gcc/tree.h"
struct tree_decl_common {struct tree_decl_minimal common;  tree size;  __extension__ enum machine_mode mode:8; unsigned nonlocal_flag:1; unsigned virtual_flag:1; unsigned ignored_flag:1; unsigned abstract_flag:1; unsigned artificial_flag:1; unsigned user_align:1; unsigned preserve_flag:1; unsigned debug_expr_is_from:1; unsigned lang_flag_0:1; unsigned lang_flag_1:1; unsigned lang_flag_2:1; unsigned lang_flag_3:1; unsigned lang_flag_4:1; unsigned lang_flag_5:1; unsigned lang_flag_6:1; unsigned lang_flag_7:1; unsigned decl_flag_0:1; unsigned decl_flag_1:1; unsigned decl_flag_2:1; unsigned decl_flag_3:1; unsigned gimple_reg_flag:1; union tree_decl_u1 {enum built_in_function f; long i; struct tree_decl_u1_a {unsigned int align:24; unsigned int off_align:8; }a; }u1;  tree size_unit;  tree initial;  tree attributes;  tree abstract_origin; long pointer_alias_set; struct lang_decl *lang_specific; }; 
#line 2249 "../.././gcc/tree.h"
extern  tree decl_value_expr_lookup( tree ); 
#line 2250 "../.././gcc/tree.h"
extern void decl_value_expr_insert( tree ,  tree ); 
# 2183 "../.././gcc/tree.h" 
# 2295 "../.././gcc/tree.h" 
struct tree_decl_with_rtl {struct tree_decl_common common;  rtx rtl; }; 
#line 2354 "../.././gcc/tree.h"
struct tree_field_decl {struct tree_decl_common common;  tree offset;  tree bit_field_type;  tree qualifier;  tree bit_offset;  tree fcontext; }; 
# 2344 "../.././gcc/tree.h" 
# 2377 "../.././gcc/tree.h" 
struct tree_label_decl {struct tree_decl_with_rtl common;  tree java_field_1;  tree java_field_2;  tree java_field_3; unsigned int java_field_4; }; 
#line 2382 "../.././gcc/tree.h"
struct tree_result_decl {struct tree_decl_with_rtl common; }; 
#line 2387 "../.././gcc/tree.h"
struct tree_const_decl {struct tree_decl_with_rtl common; }; 
#line 2401 "../.././gcc/tree.h"
struct tree_parm_decl {struct tree_decl_with_rtl common;  rtx incoming_rtl; }; 
# 2397 "../.././gcc/tree.h" 
# 2441 "../.././gcc/tree.h" 
extern  tree decl_restrict_base_lookup( tree ); 
#line 2442 "../.././gcc/tree.h"
extern void decl_restrict_base_insert( tree ,  tree ); 
#line 2537 "../.././gcc/tree.h"
struct tree_decl_with_vis {struct tree_decl_with_rtl common;  tree assembler_name;  tree section_name; unsigned defer_output:1; unsigned hard_register:1; unsigned thread_local:1; unsigned common_flag:1; unsigned in_text_section:1; unsigned gimple_formal_temp:1; unsigned dllimport_flag:1; unsigned based_on_restrict_p:1; unsigned shadowed_for_var_p:1; unsigned in_system_header_flag:1; unsigned weak_flag:1; unsigned seen_in_bind_expr:1; unsigned comdat_flag:1;  __extension__ enum symbol_visibility visibility:2; unsigned visibility_specified:1; unsigned one_only:1; unsigned init_priority_p:1;  __extension__ enum tls_model tls_model:3; }; 
# 2505 "../.././gcc/tree.h" 
# 2552 "../.././gcc/tree.h" 
extern  tree decl_debug_expr_lookup( tree ); 
#line 2553 "../.././gcc/tree.h"
extern void decl_debug_expr_insert( tree ,  tree ); 
#line 2564 "../.././gcc/tree.h"
extern unsigned short decl_init_priority_lookup( tree ); 
#line 2565 "../.././gcc/tree.h"
extern void decl_init_priority_insert( tree , unsigned short ); 
# 2564 "../.././gcc/tree.h" 
# 2590 "../.././gcc/tree.h" 
struct tree_var_decl {struct tree_decl_with_vis common; }; 
#line 2619 "../.././gcc/tree.h"
struct tree_decl_non_common {struct tree_decl_with_vis common;  tree saved_tree;  tree arguments;  tree result;  tree vindex; }; 
# 2607 "../.././gcc/tree.h" 
# 2733 "../.././gcc/tree.h" 
struct tree_function_decl {struct tree_decl_non_common common; unsigned static_ctor_flag:1; unsigned static_dtor_flag:1; unsigned uninlinable:1; unsigned possibly_inlined:1; unsigned novops_flag:1; unsigned returns_twice_flag:1; unsigned malloc_flag:1; unsigned pure_flag:1; unsigned declared_inline_flag:1; unsigned regdecl_flag:1; unsigned inline_flag:1; unsigned no_instrument_function_entry_exit:1; unsigned no_limit_stack:1;  __extension__ enum built_in_class built_in_class:2; struct function *f; }; 
#line 2748 "../.././gcc/tree.h"
struct tree_type_decl {struct tree_decl_non_common common; }; 
# 2744 "../.././gcc/tree.h" 
# 2767 "../.././gcc/tree.h" 
struct tree_statement_list_node {struct tree_statement_list_node *prev; struct tree_statement_list_node *next;  tree stmt; }; 
#line 2775 "../.././gcc/tree.h"
struct tree_statement_list {struct tree_common common; struct tree_statement_list_node *head; struct tree_statement_list_node *tail; }; 
#line 2784 "../.././gcc/tree.h"
struct value_set ; 
#line 2797 "../.././gcc/tree.h"
struct tree_value_handle {struct tree_common common; struct value_set *expr_set; unsigned int id; }; 
#line 2837 "../.././gcc/tree.h"
union tree_node {struct tree_common common; struct tree_int_cst int_cst; struct tree_real_cst real_cst; struct tree_vector vector; struct tree_string string; struct tree_complex complex; struct tree_identifier identifier; struct tree_decl_minimal decl_minimal; struct tree_decl_common decl_common; struct tree_decl_with_rtl decl_with_rtl; struct tree_decl_non_common decl_non_common; struct tree_parm_decl parm_decl; struct tree_decl_with_vis decl_with_vis; struct tree_var_decl var_decl; struct tree_field_decl field_decl; struct tree_label_decl label_decl; struct tree_result_decl result_decl; struct tree_const_decl const_decl; struct tree_type_decl type_decl; struct tree_function_decl function_decl; struct tree_type type; struct tree_list list; struct tree_vec vec; struct tree_exp exp; struct tree_ssa_name ssa_name; struct tree_phi_node phi; struct tree_block block; struct tree_binfo binfo; struct tree_statement_list stmt_list; struct tree_value_handle value_handle; struct tree_constructor constructor; }; 
#line 2906 "../.././gcc/tree.h"
enum tree_index {TI_ERROR_MARK,TI_INTQI_TYPE,TI_INTHI_TYPE,TI_INTSI_TYPE,TI_INTDI_TYPE,TI_INTTI_TYPE,TI_UINTQI_TYPE,TI_UINTHI_TYPE,TI_UINTSI_TYPE,TI_UINTDI_TYPE,TI_UINTTI_TYPE,TI_INTEGER_ZERO,TI_INTEGER_ONE,TI_INTEGER_MINUS_ONE,TI_NULL_POINTER,TI_SIZE_ZERO,TI_SIZE_ONE,TI_BITSIZE_ZERO,TI_BITSIZE_ONE,TI_BITSIZE_UNIT,TI_PUBLIC,TI_PROTECTED,TI_PRIVATE,TI_BOOLEAN_FALSE,TI_BOOLEAN_TRUE,TI_COMPLEX_INTEGER_TYPE,TI_COMPLEX_FLOAT_TYPE,TI_COMPLEX_DOUBLE_TYPE,TI_COMPLEX_LONG_DOUBLE_TYPE,TI_FLOAT_TYPE,TI_DOUBLE_TYPE,TI_LONG_DOUBLE_TYPE,TI_FLOAT_PTR_TYPE,TI_DOUBLE_PTR_TYPE,TI_LONG_DOUBLE_PTR_TYPE,TI_INTEGER_PTR_TYPE,TI_VOID_TYPE,TI_PTR_TYPE,TI_CONST_PTR_TYPE,TI_SIZE_TYPE,TI_PID_TYPE,TI_PTRDIFF_TYPE,TI_VA_LIST_TYPE,TI_VA_LIST_GPR_COUNTER_FIELD,TI_VA_LIST_FPR_COUNTER_FIELD,TI_BOOLEAN_TYPE,TI_FILEPTR_TYPE,TI_VOID_LIST_NODE,TI_MAIN_IDENTIFIER,TI_MAX}; 
#line 2908 "../.././gcc/tree.h"
extern  tree global_trees[TI_MAX]; 
# 2784 "../.././gcc/tree.h" 
# 3001 "../.././gcc/tree.h" 
enum integer_type_kind {itk_char,itk_signed_char,itk_unsigned_char,itk_short,itk_unsigned_short,itk_int,itk_unsigned_int,itk_long,itk_unsigned_long,itk_long_long,itk_unsigned_long_long,itk_none}; 
#line 3003 "../.././gcc/tree.h"
typedef enum integer_type_kind integer_type_kind; 
#line 3007 "../.././gcc/tree.h"
extern  tree integer_types[itk_none]; 
#line 3023 "../.././gcc/tree.h"
extern enum tls_model flag_tls_default; 
# 3023 "../.././gcc/tree.h" 
# 3051 "../.././gcc/tree.h" 
enum ptrmemfunc_vbit_where_t {ptrmemfunc_vbit_in_pfn,ptrmemfunc_vbit_in_delta}; 
#line 3055 "../.././gcc/tree.h"
extern  tree decl_assembler_name( tree ); 
#line 3060 "../.././gcc/tree.h"
extern  size_t tree_size( tree ); 
#line 3065 "../.././gcc/tree.h"
extern  size_t tree_code_size(enum tree_code ); 
#line 3071 "../.././gcc/tree.h"
extern  tree make_node_stat(enum tree_code ); 
#line 3076 "../.././gcc/tree.h"
extern  tree copy_node_stat( tree ); 
#line 3081 "../.././gcc/tree.h"
extern  tree copy_list( tree ); 
#line 3084 "../.././gcc/tree.h"
extern  tree make_tree_binfo_stat(unsigned ); 
#line 3089 "../.././gcc/tree.h"
extern  tree make_tree_vec_stat(int ); 
#line 3094 "../.././gcc/tree.h"
extern void init_phinodes(void ); 
#line 3095 "../.././gcc/tree.h"
extern void fini_phinodes(void ); 
#line 3096 "../.././gcc/tree.h"
extern void release_phi_node( tree ); 
#line 3101 "../.././gcc/tree.h"
extern void init_ssanames(void ); 
#line 3102 "../.././gcc/tree.h"
extern void fini_ssanames(void ); 
#line 3103 "../.././gcc/tree.h"
extern  tree make_ssa_name( tree ,  tree ); 
#line 3104 "../.././gcc/tree.h"
extern  tree duplicate_ssa_name( tree ,  tree ); 
#line 3105 "../.././gcc/tree.h"
extern void duplicate_ssa_name_ptr_info( tree , struct ptr_info_def *); 
#line 3106 "../.././gcc/tree.h"
extern void release_ssa_name( tree ); 
#line 3107 "../.././gcc/tree.h"
extern void release_defs( tree ); 
#line 3108 "../.././gcc/tree.h"
extern void replace_ssa_name_symbol( tree ,  tree ); 
#line 3117 "../.././gcc/tree.h"
extern  tree get_identifier(const char *); 
# 3117 "../.././gcc/tree.h" 
# 3130 "../.././gcc/tree.h" 
extern  tree get_identifier_with_length(const char *,  size_t ); 
#line 3136 "../.././gcc/tree.h"
extern  tree maybe_get_identifier(const char *); 
#line 3140 "../.././gcc/tree.h"
extern  tree build(enum tree_code ,  tree , ...); 
#line 3141 "../.././gcc/tree.h"
extern  tree build_nt(enum tree_code , ...); 
#line 3155 "../.././gcc/tree.h"
extern  tree build0_stat(enum tree_code ,  tree ); 
#line 3157 "../.././gcc/tree.h"
extern  tree build1_stat(enum tree_code ,  tree ,  tree ); 
#line 3159 "../.././gcc/tree.h"
extern  tree build2_stat(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3161 "../.././gcc/tree.h"
extern  tree build3_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3164 "../.././gcc/tree.h"
extern  tree build4_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ,  tree ); 
#line 3167 "../.././gcc/tree.h"
extern  tree build7_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ); 
#line 3171 "../.././gcc/tree.h"
extern  tree build_int_cst( tree , long ); 
#line 3172 "../.././gcc/tree.h"
extern  tree build_int_cst_type( tree , long ); 
#line 3173 "../.././gcc/tree.h"
extern  tree build_int_cstu( tree , unsigned long ); 
#line 3174 "../.././gcc/tree.h"
extern  tree build_int_cst_wide( tree , unsigned long , long ); 
#line 3175 "../.././gcc/tree.h"
extern  tree build_vector( tree ,  tree ); 
#line 3176 "../.././gcc/tree.h"
extern  tree build_vector_from_ctor( tree ,  VEC_constructor_elt_gc *); 
#line 3177 "../.././gcc/tree.h"
extern  tree build_constructor( tree ,  VEC_constructor_elt_gc *); 
#line 3178 "../.././gcc/tree.h"
extern  tree build_constructor_single( tree ,  tree ,  tree ); 
#line 3179 "../.././gcc/tree.h"
extern  tree build_constructor_from_list( tree ,  tree ); 
#line 3180 "../.././gcc/tree.h"
extern  tree build_real_from_int_cst( tree ,  tree ); 
#line 3181 "../.././gcc/tree.h"
extern  tree build_complex( tree ,  tree ,  tree ); 
#line 3182 "../.././gcc/tree.h"
extern  tree build_string(int , const char *); 
#line 3183 "../.././gcc/tree.h"
extern  tree build_tree_list_stat( tree ,  tree ); 
#line 3185 "../.././gcc/tree.h"
extern  tree build_decl_stat(enum tree_code ,  tree ,  tree ); 
#line 3186 "../.././gcc/tree.h"
extern  tree build_fn_decl(const char *,  tree ); 
#line 3188 "../.././gcc/tree.h"
extern  tree build_block( tree ,  tree ,  tree ,  tree ); 
#line 3190 "../.././gcc/tree.h"
extern void annotate_with_file_line( tree , const char *, int ); 
#line 3191 "../.././gcc/tree.h"
extern void annotate_with_locus( tree ,  location_t ); 
#line 3193 "../.././gcc/tree.h"
extern  tree build_empty_stmt(void ); 
#line 3197 "../.././gcc/tree.h"
extern  tree make_signed_type(int ); 
#line 3198 "../.././gcc/tree.h"
extern  tree make_unsigned_type(int ); 
#line 3199 "../.././gcc/tree.h"
extern  tree signed_type_for( tree ); 
#line 3200 "../.././gcc/tree.h"
extern  tree unsigned_type_for( tree ); 
#line 3201 "../.././gcc/tree.h"
extern void initialize_sizetypes(unsigned char ); 
#line 3202 "../.././gcc/tree.h"
extern void set_sizetype( tree ); 
#line 3203 "../.././gcc/tree.h"
extern void fixup_unsigned_type( tree ); 
#line 3204 "../.././gcc/tree.h"
extern  tree build_pointer_type_for_mode( tree , enum machine_mode , unsigned char ); 
#line 3205 "../.././gcc/tree.h"
extern  tree build_pointer_type( tree ); 
#line 3206 "../.././gcc/tree.h"
extern  tree build_reference_type_for_mode( tree , enum machine_mode , unsigned char ); 
#line 3207 "../.././gcc/tree.h"
extern  tree build_reference_type( tree ); 
#line 3208 "../.././gcc/tree.h"
extern  tree build_vector_type_for_mode( tree , enum machine_mode ); 
#line 3209 "../.././gcc/tree.h"
extern  tree build_vector_type( tree innertype, int nunits); 
#line 3210 "../.././gcc/tree.h"
extern  tree build_type_no_quals( tree ); 
#line 3211 "../.././gcc/tree.h"
extern  tree build_index_type( tree ); 
#line 3212 "../.././gcc/tree.h"
extern  tree build_index_2_type( tree ,  tree ); 
#line 3213 "../.././gcc/tree.h"
extern  tree build_array_type( tree ,  tree ); 
#line 3214 "../.././gcc/tree.h"
extern  tree build_function_type( tree ,  tree ); 
#line 3215 "../.././gcc/tree.h"
extern  tree build_function_type_list( tree , ...); 
#line 3216 "../.././gcc/tree.h"
extern  tree build_method_type_directly( tree ,  tree ,  tree ); 
#line 3217 "../.././gcc/tree.h"
extern  tree build_method_type( tree ,  tree ); 
#line 3218 "../.././gcc/tree.h"
extern  tree build_offset_type( tree ,  tree ); 
#line 3219 "../.././gcc/tree.h"
extern  tree build_complex_type( tree ); 
#line 3220 "../.././gcc/tree.h"
extern  tree build_resx(int ); 
#line 3221 "../.././gcc/tree.h"
extern  tree array_type_nelts( tree ); 
#line 3222 "../.././gcc/tree.h"
extern unsigned char in_array_bounds_p( tree ); 
#line 3224 "../.././gcc/tree.h"
extern  tree value_member( tree ,  tree ); 
#line 3225 "../.././gcc/tree.h"
extern  tree purpose_member( tree ,  tree ); 
#line 3227 "../.././gcc/tree.h"
extern int attribute_list_equal( tree ,  tree ); 
#line 3228 "../.././gcc/tree.h"
extern int attribute_list_contained( tree ,  tree ); 
#line 3229 "../.././gcc/tree.h"
extern int tree_int_cst_equal( tree ,  tree ); 
#line 3230 "../.././gcc/tree.h"
extern int tree_int_cst_lt( tree ,  tree ); 
#line 3231 "../.././gcc/tree.h"
extern int tree_int_cst_compare( tree ,  tree ); 
#line 3232 "../.././gcc/tree.h"
extern int host_integerp( tree , int ); 
#line 3233 "../.././gcc/tree.h"
extern long tree_low_cst( tree , int ); 
#line 3234 "../.././gcc/tree.h"
extern int tree_int_cst_msb( tree ); 
#line 3235 "../.././gcc/tree.h"
extern int tree_int_cst_sgn( tree ); 
#line 3236 "../.././gcc/tree.h"
extern int tree_int_cst_sign_bit( tree ); 
#line 3237 "../.././gcc/tree.h"
extern int tree_expr_nonnegative_p( tree ); 
#line 3238 "../.././gcc/tree.h"
extern unsigned char may_negate_without_overflow_p( tree ); 
#line 3239 "../.././gcc/tree.h"
extern  tree get_inner_array_type( tree ); 
#line 3245 "../.././gcc/tree.h"
extern  tree make_tree( tree ,  rtx ); 
#line 3253 "../.././gcc/tree.h"
extern  tree build_type_attribute_variant( tree ,  tree ); 
#line 3254 "../.././gcc/tree.h"
extern  tree build_decl_attribute_variant( tree ,  tree ); 
# 3155 "../.././gcc/tree.h" 
# 3299 "../.././gcc/tree.h" 
struct attribute_spec {const char *const name; const int min_length; const int max_length; const unsigned char decl_required; const unsigned char type_required; const unsigned char function_type_required;  tree (*const handler)( tree *node,  tree name,  tree args, int flags, unsigned char *no_add_attrs); }; 
#line 3324 "../.././gcc/tree.h"
enum attribute_flags {ATTR_FLAG_DECL_NEXT=1,ATTR_FLAG_FUNCTION_NEXT=2,ATTR_FLAG_ARRAY_NEXT=4,ATTR_FLAG_TYPE_IN_PLACE=8,ATTR_FLAG_BUILT_IN=16}; 
#line 3328 "../.././gcc/tree.h"
extern  tree merge_decl_attributes( tree ,  tree ); 
#line 3329 "../.././gcc/tree.h"
extern  tree merge_type_attributes( tree ,  tree ); 
#line 3334 "../.././gcc/tree.h"
extern int is_attribute_p(const char *,  tree ); 
#line 3339 "../.././gcc/tree.h"
extern  tree lookup_attribute(const char *,  tree ); 
#line 3343 "../.././gcc/tree.h"
extern  tree merge_attributes( tree ,  tree ); 
#line 3357 "../.././gcc/tree.h"
extern unsigned char check_qualified_type( tree ,  tree , int ); 
#line 3363 "../.././gcc/tree.h"
extern  tree get_qualified_type( tree , int ); 
#line 3368 "../.././gcc/tree.h"
extern  tree build_qualified_type( tree , int ); 
# 3357 "../.././gcc/tree.h" 
# 3382 "../.././gcc/tree.h" 
extern  tree build_distinct_type_copy( tree ); 
#line 3383 "../.././gcc/tree.h"
extern  tree build_variant_type_copy( tree ); 
#line 3389 "../.././gcc/tree.h"
extern void finish_builtin_struct( tree , const char *,  tree ,  tree ); 
#line 3395 "../.././gcc/tree.h"
extern void layout_type( tree ); 
#line 3433 "../.././gcc/tree.h"
typedef struct record_layout_info_s { tree t;  tree offset; unsigned int offset_align;  tree bitpos; unsigned int record_align; unsigned int unpacked_align;  tree prev_field;  tree pending_statics; int remaining_in_alignment; int prev_packed; int packed_maybe_necessary; }*record_layout_info; 
#line 3435 "../.././gcc/tree.h"
extern void set_lang_adjust_rli(void (*)( record_layout_info )); 
#line 3436 "../.././gcc/tree.h"
extern  record_layout_info start_record_layout( tree ); 
#line 3437 "../.././gcc/tree.h"
extern  tree bit_from_pos( tree ,  tree ); 
#line 3438 "../.././gcc/tree.h"
extern  tree byte_from_pos( tree ,  tree ); 
#line 3439 "../.././gcc/tree.h"
extern void pos_from_bit( tree *,  tree *, unsigned int ,  tree ); 
#line 3440 "../.././gcc/tree.h"
extern void normalize_offset( tree *,  tree *, unsigned int ); 
#line 3441 "../.././gcc/tree.h"
extern  tree rli_size_unit_so_far( record_layout_info ); 
#line 3442 "../.././gcc/tree.h"
extern  tree rli_size_so_far( record_layout_info ); 
#line 3443 "../.././gcc/tree.h"
extern void normalize_rli( record_layout_info ); 
#line 3444 "../.././gcc/tree.h"
extern void place_field( record_layout_info ,  tree ); 
#line 3445 "../.././gcc/tree.h"
extern void compute_record_mode( tree ); 
#line 3446 "../.././gcc/tree.h"
extern void finish_record_layout( record_layout_info , int ); 
#line 3453 "../.././gcc/tree.h"
extern  tree type_hash_canon(unsigned int ,  tree ); 
# 3404 "../.././gcc/tree.h" 
# 3463 "../.././gcc/tree.h" 
extern void layout_decl( tree , unsigned ); 
#line 3468 "../.././gcc/tree.h"
extern void relayout_decl( tree ); 
#line 3475 "../.././gcc/tree.h"
extern enum machine_mode mode_for_size_tree( tree , enum mode_class , int ); 
#line 3479 "../.././gcc/tree.h"
extern  tree non_lvalue( tree ); 
#line 3481 "../.././gcc/tree.h"
extern  tree convert( tree ,  tree ); 
#line 3482 "../.././gcc/tree.h"
extern unsigned int expr_align( tree ); 
#line 3483 "../.././gcc/tree.h"
extern  tree expr_first( tree ); 
#line 3484 "../.././gcc/tree.h"
extern  tree expr_last( tree ); 
#line 3485 "../.././gcc/tree.h"
extern  tree expr_only( tree ); 
#line 3486 "../.././gcc/tree.h"
extern  tree size_in_bytes( tree ); 
#line 3487 "../.././gcc/tree.h"
extern long int_size_in_bytes( tree ); 
#line 3488 "../.././gcc/tree.h"
extern  tree bit_position( tree ); 
#line 3489 "../.././gcc/tree.h"
extern long int_bit_position( tree ); 
#line 3490 "../.././gcc/tree.h"
extern  tree byte_position( tree ); 
#line 3491 "../.././gcc/tree.h"
extern long int_byte_position( tree ); 
#line 3502 "../.././gcc/tree.h"
enum size_type_kind {SIZETYPE,SSIZETYPE,BITSIZETYPE,SBITSIZETYPE,TYPE_KIND_LAST}; 
#line 3504 "../.././gcc/tree.h"
extern  tree sizetype_tab[((int )TYPE_KIND_LAST)]; 
#line 3511 "../.././gcc/tree.h"
extern  tree size_int_kind(long , enum size_type_kind ); 
#line 3512 "../.././gcc/tree.h"
extern  tree size_binop(enum tree_code ,  tree ,  tree ); 
#line 3513 "../.././gcc/tree.h"
extern  tree size_diffop( tree ,  tree ); 
#line 3520 "../.././gcc/tree.h"
extern  tree round_up( tree , int ); 
#line 3521 "../.././gcc/tree.h"
extern  tree round_down( tree , int ); 
#line 3522 "../.././gcc/tree.h"
extern  tree get_pending_sizes(void ); 
#line 3523 "../.././gcc/tree.h"
extern void put_pending_size( tree ); 
#line 3524 "../.././gcc/tree.h"
extern void put_pending_sizes( tree ); 
#line 3534 "../.././gcc/tree.h"
extern unsigned int maximum_field_alignment; 
#line 3536 "../.././gcc/tree.h"
extern unsigned int initial_max_fld_align; 
#line 3542 "../.././gcc/tree.h"
extern  tree chainon( tree ,  tree ); 
#line 3546 "../.././gcc/tree.h"
extern  tree tree_cons_stat( tree ,  tree ,  tree ); 
#line 3551 "../.././gcc/tree.h"
extern  tree tree_last( tree ); 
#line 3555 "../.././gcc/tree.h"
extern  tree nreverse( tree ); 
#line 3560 "../.././gcc/tree.h"
extern int list_length( tree ); 
#line 3564 "../.././gcc/tree.h"
extern int fields_length( tree ); 
#line 3569 "../.././gcc/tree.h"
extern unsigned char initializer_zerop( tree ); 
#line 3572 "../.././gcc/tree.h"
extern void categorize_ctor_elements( tree , long *, long *, long *, unsigned char *); 
#line 3573 "../.././gcc/tree.h"
extern long count_type_elements( tree , unsigned char ); 
#line 3577 "../.././gcc/tree.h"
extern void add_var_to_bind_expr( tree ,  tree ); 
#line 3581 "../.././gcc/tree.h"
extern int integer_zerop( tree ); 
#line 3585 "../.././gcc/tree.h"
extern int integer_onep( tree ); 
#line 3590 "../.././gcc/tree.h"
extern int integer_all_onesp( tree ); 
#line 3595 "../.././gcc/tree.h"
extern int integer_pow2p( tree ); 
#line 3600 "../.././gcc/tree.h"
extern int integer_nonzerop( tree ); 
#line 3602 "../.././gcc/tree.h"
extern unsigned char zero_p( tree ); 
#line 3603 "../.././gcc/tree.h"
extern unsigned char cst_and_fits_in_hwi( tree ); 
#line 3604 "../.././gcc/tree.h"
extern  tree num_ending_zeros( tree ); 
#line 3609 "../.././gcc/tree.h"
extern  tree staticp( tree ); 
#line 3615 "../.././gcc/tree.h"
extern  tree save_expr( tree ); 
#line 3620 "../.././gcc/tree.h"
extern  tree skip_simple_arithmetic( tree ); 
#line 3624 "../.././gcc/tree.h"
enum tree_node_structure_enum tree_node_structure( tree ); 
#line 3632 "../.././gcc/tree.h"
extern unsigned char contains_placeholder_p( tree ); 
# 3534 "../.././gcc/tree.h" 
# 3644 "../.././gcc/tree.h" 
extern unsigned char type_contains_placeholder_p( tree ); 
#line 3651 "../.././gcc/tree.h"
extern  tree substitute_in_expr( tree ,  tree ,  tree ); 
#line 3662 "../.././gcc/tree.h"
extern  tree substitute_placeholder_in_expr( tree ,  tree ); 
# 3662 "../.././gcc/tree.h" 
# 3677 "../.././gcc/tree.h" 
extern  tree variable_size( tree ); 
#line 3683 "../.././gcc/tree.h"
extern  tree stabilize_reference( tree ); 
#line 3689 "../.././gcc/tree.h"
extern  tree stabilize_reference_1( tree ); 
#line 3696 "../.././gcc/tree.h"
extern  tree get_unwidened( tree ,  tree ); 
#line 3703 "../.././gcc/tree.h"
extern  tree get_narrower( tree , int *); 
#line 3711 "../.././gcc/tree.h"
extern  tree get_inner_reference( tree , long *, long *,  tree *, enum machine_mode *, int *, int *, unsigned char ); 
#line 3715 "../.././gcc/tree.h"
extern int handled_component_p( tree ); 
#line 3720 "../.././gcc/tree.h"
extern  tree array_ref_element_size( tree ); 
#line 3725 "../.././gcc/tree.h"
extern  tree array_ref_low_bound( tree ); 
#line 3730 "../.././gcc/tree.h"
extern  tree array_ref_up_bound( tree ); 
#line 3735 "../.././gcc/tree.h"
extern  tree component_ref_field_offset( tree ); 
#line 3740 "../.././gcc/tree.h"
extern  tree get_containing_scope( tree ); 
#line 3744 "../.././gcc/tree.h"
extern  tree decl_function_context( tree ); 
#line 3748 "../.././gcc/tree.h"
extern  tree decl_type_context( tree ); 
#line 3751 "../.././gcc/tree.h"
extern int real_zerop( tree ); 
#line 3758 "../.././gcc/tree.h"
extern int pedantic_lvalues; 
#line 3762 "../.././gcc/tree.h"
extern  tree current_function_decl; 
#line 3765 "../.././gcc/tree.h"
extern const char *current_function_func_begin_label; 
#line 3768 "../.././gcc/tree.h"
extern unsigned crc32_string(unsigned , const char *); 
#line 3769 "../.././gcc/tree.h"
extern void clean_symbol_name(char *); 
#line 3770 "../.././gcc/tree.h"
extern  tree get_file_function_name_long(const char *); 
#line 3771 "../.././gcc/tree.h"
extern  tree get_callee_fndecl( tree ); 
#line 3772 "../.././gcc/tree.h"
extern void change_decl_assembler_name( tree ,  tree ); 
#line 3773 "../.././gcc/tree.h"
extern int type_num_arguments( tree ); 
#line 3774 "../.././gcc/tree.h"
extern unsigned char associative_tree_code(enum tree_code ); 
#line 3775 "../.././gcc/tree.h"
extern unsigned char commutative_tree_code(enum tree_code ); 
#line 3776 "../.././gcc/tree.h"
extern  tree upper_bound_in_type( tree ,  tree ); 
#line 3777 "../.././gcc/tree.h"
extern  tree lower_bound_in_type( tree ,  tree ); 
#line 3778 "../.././gcc/tree.h"
extern int operand_equal_for_phi_arg_p( tree ,  tree ); 
#line 3782 "../.././gcc/tree.h"
extern void expand_expr_stmt( tree ); 
#line 3783 "../.././gcc/tree.h"
extern int warn_if_unused_value( tree ,  location_t ); 
#line 3784 "../.././gcc/tree.h"
extern void expand_label( tree ); 
#line 3785 "../.././gcc/tree.h"
extern void expand_goto( tree ); 
#line 3787 "../.././gcc/tree.h"
extern  rtx expand_stack_save(void ); 
#line 3788 "../.././gcc/tree.h"
extern void expand_stack_restore( tree ); 
#line 3789 "../.././gcc/tree.h"
extern void expand_return( tree ); 
#line 3790 "../.././gcc/tree.h"
extern int is_body_block( tree ); 
#line 3793 "../.././gcc/tree.h"
extern void using_eh_for_cleanups(void ); 
#line 3803 "../.././gcc/tree.h"
extern  tree fold( tree ); 
#line 3804 "../.././gcc/tree.h"
extern  tree fold_unary(enum tree_code ,  tree ,  tree ); 
#line 3805 "../.././gcc/tree.h"
extern  tree fold_binary(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3806 "../.././gcc/tree.h"
extern  tree fold_ternary(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3807 "../.././gcc/tree.h"
extern  tree fold_build1_stat(enum tree_code ,  tree ,  tree ); 
#line 3809 "../.././gcc/tree.h"
extern  tree fold_build2_stat(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3811 "../.././gcc/tree.h"
extern  tree fold_build3_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3813 "../.././gcc/tree.h"
extern  tree fold_build1_initializer(enum tree_code ,  tree ,  tree ); 
#line 3814 "../.././gcc/tree.h"
extern  tree fold_build2_initializer(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3815 "../.././gcc/tree.h"
extern  tree fold_build3_initializer(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3816 "../.././gcc/tree.h"
extern  tree fold_convert( tree ,  tree ); 
#line 3817 "../.././gcc/tree.h"
extern  tree fold_single_bit_test(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3818 "../.././gcc/tree.h"
extern  tree fold_ignored_result( tree ); 
#line 3819 "../.././gcc/tree.h"
extern  tree fold_abs_const( tree ,  tree ); 
#line 3820 "../.././gcc/tree.h"
extern  tree fold_indirect_ref_1( tree ,  tree ); 
#line 3822 "../.././gcc/tree.h"
extern  tree force_fit_type( tree , int , unsigned char , unsigned char ); 
#line 3826 "../.././gcc/tree.h"
extern int add_double(unsigned long , long , unsigned long , long , unsigned long *, long *); 
#line 3828 "../.././gcc/tree.h"
extern int neg_double(unsigned long , long , unsigned long *, long *); 
#line 3831 "../.././gcc/tree.h"
extern int mul_double(unsigned long , long , unsigned long , long , unsigned long *, long *); 
#line 3834 "../.././gcc/tree.h"
extern void lshift_double(unsigned long , long , long , unsigned int , unsigned long *, long *, int ); 
#line 3837 "../.././gcc/tree.h"
extern void rshift_double(unsigned long , long , long , unsigned int , unsigned long *, long *, int ); 
#line 3840 "../.././gcc/tree.h"
extern void lrotate_double(unsigned long , long , long , unsigned int , unsigned long *, long *); 
#line 3843 "../.././gcc/tree.h"
extern void rrotate_double(unsigned long , long , long , unsigned int , unsigned long *, long *); 
#line 3849 "../.././gcc/tree.h"
extern int div_and_round_double(enum tree_code , int , unsigned long , long , unsigned long , long , unsigned long *, long *, unsigned long *, long *); 
#line 3855 "../.././gcc/tree.h"
enum operand_equal_flag {OEP_ONLY_CONST=1,OEP_PURE_SAME=2}; 
#line 3857 "../.././gcc/tree.h"
extern int operand_equal_p( tree ,  tree , unsigned int ); 
#line 3859 "../.././gcc/tree.h"
extern  tree omit_one_operand( tree ,  tree ,  tree ); 
#line 3860 "../.././gcc/tree.h"
extern  tree omit_two_operands( tree ,  tree ,  tree ,  tree ); 
#line 3861 "../.././gcc/tree.h"
extern  tree invert_truthvalue( tree ); 
#line 3862 "../.././gcc/tree.h"
extern  tree fold_unary_to_constant(enum tree_code ,  tree ,  tree ); 
#line 3863 "../.././gcc/tree.h"
extern  tree fold_binary_to_constant(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3864 "../.././gcc/tree.h"
extern  tree fold_read_from_constant_string( tree ); 
#line 3865 "../.././gcc/tree.h"
extern  tree int_const_binop(enum tree_code ,  tree ,  tree , int ); 
#line 3866 "../.././gcc/tree.h"
extern  tree build_fold_addr_expr( tree ); 
#line 3867 "../.././gcc/tree.h"
extern  tree fold_build_cleanup_point_expr( tree type,  tree expr); 
#line 3868 "../.././gcc/tree.h"
extern  tree fold_strip_sign_ops( tree ); 
#line 3869 "../.././gcc/tree.h"
extern  tree build_fold_addr_expr_with_type( tree ,  tree ); 
#line 3870 "../.././gcc/tree.h"
extern  tree build_fold_indirect_ref( tree ); 
#line 3871 "../.././gcc/tree.h"
extern  tree fold_indirect_ref( tree ); 
#line 3872 "../.././gcc/tree.h"
extern  tree constant_boolean_node(int ,  tree ); 
#line 3873 "../.././gcc/tree.h"
extern  tree build_low_bits_mask( tree , unsigned ); 
#line 3875 "../.././gcc/tree.h"
extern unsigned char tree_swap_operands_p( tree ,  tree , unsigned char ); 
#line 3876 "../.././gcc/tree.h"
extern void swap_tree_operands( tree ,  tree *,  tree *); 
#line 3877 "../.././gcc/tree.h"
extern enum tree_code swap_tree_comparison(enum tree_code ); 
#line 3879 "../.././gcc/tree.h"
extern unsigned char ptr_difference_const( tree ,  tree , long *); 
#line 3880 "../.././gcc/tree.h"
extern enum tree_code invert_tree_comparison(enum tree_code , unsigned char ); 
#line 3882 "../.././gcc/tree.h"
extern unsigned char tree_expr_nonzero_p( tree ); 
#line 3885 "../.././gcc/tree.h"
extern  tree fold_builtin( tree ,  tree , unsigned char ); 
#line 3886 "../.././gcc/tree.h"
extern  tree fold_builtin_fputs( tree , unsigned char , unsigned char ,  tree ); 
#line 3887 "../.././gcc/tree.h"
extern  tree fold_builtin_strcpy( tree ,  tree ,  tree ); 
#line 3888 "../.././gcc/tree.h"
extern  tree fold_builtin_strncpy( tree ,  tree ,  tree ); 
#line 3890 "../.././gcc/tree.h"
extern  tree fold_builtin_memory_chk( tree ,  tree ,  tree , unsigned char , enum built_in_function ); 
#line 3892 "../.././gcc/tree.h"
extern  tree fold_builtin_stxcpy_chk( tree ,  tree ,  tree , unsigned char , enum built_in_function ); 
#line 3893 "../.././gcc/tree.h"
extern  tree fold_builtin_strncpy_chk( tree ,  tree ); 
#line 3894 "../.././gcc/tree.h"
extern  tree fold_builtin_snprintf_chk( tree ,  tree , enum built_in_function ); 
#line 3895 "../.././gcc/tree.h"
extern unsigned char fold_builtin_next_arg( tree ); 
#line 3896 "../.././gcc/tree.h"
extern enum built_in_function builtin_mathfn_code( tree ); 
#line 3897 "../.././gcc/tree.h"
extern  tree build_function_call_expr( tree ,  tree ); 
#line 3898 "../.././gcc/tree.h"
extern  tree mathfn_built_in( tree , enum built_in_function fn); 
#line 3899 "../.././gcc/tree.h"
extern  tree strip_float_extensions( tree ); 
#line 3900 "../.././gcc/tree.h"
extern  tree c_strlen( tree , int ); 
#line 3901 "../.././gcc/tree.h"
extern  tree std_gimplify_va_arg_expr( tree ,  tree ,  tree *,  tree *); 
#line 3902 "../.././gcc/tree.h"
extern  tree build_va_arg_indirect_ref( tree ); 
#line 3905 "../.././gcc/tree.h"
extern  tree strip_float_extensions( tree ); 
#line 3908 "../.././gcc/tree.h"
extern void record_component_aliases( tree ); 
#line 3909 "../.././gcc/tree.h"
extern long get_alias_set( tree ); 
#line 3910 "../.././gcc/tree.h"
extern int alias_sets_conflict_p(long , long ); 
#line 3911 "../.././gcc/tree.h"
extern int alias_sets_might_conflict_p(long , long ); 
#line 3912 "../.././gcc/tree.h"
extern int objects_must_conflict_p( tree ,  tree ); 
#line 3915 "../.././gcc/tree.h"
extern int really_constant_p( tree ); 
#line 3916 "../.././gcc/tree.h"
extern int int_fits_type_p( tree ,  tree ); 
#line 3917 "../.././gcc/tree.h"
extern unsigned char variably_modified_type_p( tree ,  tree ); 
#line 3918 "../.././gcc/tree.h"
extern int tree_log2( tree ); 
#line 3919 "../.././gcc/tree.h"
extern int tree_floor_log2( tree ); 
#line 3920 "../.././gcc/tree.h"
extern int simple_cst_equal( tree ,  tree ); 
#line 3921 "../.././gcc/tree.h"
extern unsigned int iterative_hash_expr( tree , unsigned int ); 
#line 3922 "../.././gcc/tree.h"
extern int compare_tree_int( tree , unsigned long ); 
#line 3923 "../.././gcc/tree.h"
extern int type_list_equal( tree ,  tree ); 
#line 3924 "../.././gcc/tree.h"
extern int chain_member( tree ,  tree ); 
#line 3925 "../.././gcc/tree.h"
extern  tree type_hash_lookup(unsigned int ,  tree ); 
#line 3926 "../.././gcc/tree.h"
extern void type_hash_add(unsigned int ,  tree ); 
#line 3927 "../.././gcc/tree.h"
extern int simple_cst_list_equal( tree ,  tree ); 
#line 3928 "../.././gcc/tree.h"
extern void dump_tree_statistics(void ); 
#line 3929 "../.././gcc/tree.h"
extern void expand_function_end(void ); 
#line 3930 "../.././gcc/tree.h"
extern void expand_function_start( tree ); 
#line 3931 "../.././gcc/tree.h"
extern void stack_protect_prologue(void ); 
#line 3932 "../.././gcc/tree.h"
extern void stack_protect_epilogue(void ); 
#line 3933 "../.././gcc/tree.h"
extern void recompute_tree_invarant_for_addr_expr( tree ); 
#line 3934 "../.././gcc/tree.h"
extern unsigned char is_global_var( tree t); 
#line 3935 "../.././gcc/tree.h"
extern unsigned char needs_to_live_in_memory( tree ); 
#line 3936 "../.././gcc/tree.h"
extern  tree reconstruct_complex_type( tree ,  tree ); 
#line 3938 "../.././gcc/tree.h"
extern int real_onep( tree ); 
#line 3939 "../.././gcc/tree.h"
extern int real_twop( tree ); 
#line 3940 "../.././gcc/tree.h"
extern int real_minus_onep( tree ); 
#line 3941 "../.././gcc/tree.h"
extern void init_ttree(void ); 
#line 3942 "../.././gcc/tree.h"
extern void build_common_tree_nodes(unsigned char , unsigned char ); 
#line 3943 "../.././gcc/tree.h"
extern void build_common_tree_nodes_2(int ); 
#line 3944 "../.././gcc/tree.h"
extern void build_common_builtin_nodes(void ); 
#line 3945 "../.././gcc/tree.h"
extern  tree build_nonstandard_integer_type(unsigned long , int ); 
#line 3946 "../.././gcc/tree.h"
extern  tree build_range_type( tree ,  tree ,  tree ); 
#line 3947 "../.././gcc/tree.h"
extern long int_cst_value( tree ); 
#line 3948 "../.././gcc/tree.h"
extern  tree tree_fold_gcd( tree ,  tree ); 
#line 3949 "../.././gcc/tree.h"
extern  tree build_addr( tree ,  tree ); 
#line 3951 "../.././gcc/tree.h"
extern unsigned char fields_compatible_p( tree ,  tree ); 
#line 3952 "../.././gcc/tree.h"
extern  tree find_compatible_field( tree ,  tree ); 
#line 3955 "../.././gcc/tree.h"
extern void expand_main_function(void ); 
#line 3956 "../.././gcc/tree.h"
extern void init_dummy_function_start(void ); 
#line 3957 "../.././gcc/tree.h"
extern void expand_dummy_function_end(void ); 
#line 3958 "../.././gcc/tree.h"
extern void init_function_for_compilation(void ); 
#line 3959 "../.././gcc/tree.h"
extern void allocate_struct_function( tree ); 
#line 3960 "../.././gcc/tree.h"
extern void init_function_start( tree ); 
#line 3961 "../.././gcc/tree.h"
extern unsigned char use_register_for_decl( tree ); 
#line 3962 "../.././gcc/tree.h"
extern void setjmp_vars_warning( tree ); 
#line 3963 "../.././gcc/tree.h"
extern void setjmp_args_warning(void ); 
#line 3964 "../.././gcc/tree.h"
extern void init_temp_slots(void ); 
#line 3965 "../.././gcc/tree.h"
extern void free_temp_slots(void ); 
#line 3966 "../.././gcc/tree.h"
extern void pop_temp_slots(void ); 
#line 3967 "../.././gcc/tree.h"
extern void push_temp_slots(void ); 
#line 3968 "../.././gcc/tree.h"
extern void preserve_temp_slots( rtx ); 
#line 3969 "../.././gcc/tree.h"
extern int aggregate_value_p( tree ,  tree ); 
#line 3970 "../.././gcc/tree.h"
extern void push_function_context(void ); 
#line 3971 "../.././gcc/tree.h"
extern void pop_function_context(void ); 
#line 3972 "../.././gcc/tree.h"
extern void push_function_context_to( tree ); 
#line 3973 "../.././gcc/tree.h"
extern void pop_function_context_from( tree ); 
#line 3974 "../.././gcc/tree.h"
extern  tree gimplify_parameters(void ); 
#line 3978 "../.././gcc/tree.h"
extern void print_rtl( FILE *,  rtx ); 
#line 3982 "../.././gcc/tree.h"
extern void debug_tree( tree ); 
#line 3984 "../.././gcc/tree.h"
extern void print_node( FILE *, const char *,  tree , int ); 
#line 3985 "../.././gcc/tree.h"
extern void print_node_brief( FILE *, const char *,  tree , int ); 
#line 3986 "../.././gcc/tree.h"
extern void indent_to( FILE *, int ); 
#line 3990 "../.././gcc/tree.h"
extern unsigned char debug_find_tree( tree ,  tree ); 
#line 3993 "../.././gcc/tree.h"
extern  tree unsave_expr_now( tree ); 
#line 3994 "../.././gcc/tree.h"
extern  tree build_duplicate_type( tree ); 
#line 3997 "../.././gcc/tree.h"
extern  rtx emit_line_note( location_t ); 
# 3803 "../.././gcc/tree.h" 
# 4029 "../.././gcc/tree.h" 
extern int flags_from_decl_or_type( tree ); 
#line 4030 "../.././gcc/tree.h"
extern int call_expr_flags( tree ); 
#line 4032 "../.././gcc/tree.h"
extern int setjmp_call_p( tree ); 
#line 4033 "../.././gcc/tree.h"
extern unsigned char alloca_call_p( tree ); 
#line 4034 "../.././gcc/tree.h"
extern unsigned char must_pass_in_stack_var_size(enum machine_mode ,  tree ); 
#line 4035 "../.././gcc/tree.h"
extern unsigned char must_pass_in_stack_var_size_or_pad(enum machine_mode ,  tree ); 
#line 4047 "../.././gcc/tree.h"
extern  tree decl_attributes( tree *,  tree , int ); 
#line 4050 "../.././gcc/tree.h"
extern void set_decl_abstract_flags( tree , int ); 
#line 4051 "../.././gcc/tree.h"
extern void set_decl_origin_self( tree ); 
#line 4054 "../.././gcc/tree.h"
extern void set_min_and_max_values_for_integral_type( tree , int , unsigned char ); 
#line 4055 "../.././gcc/tree.h"
extern void fixup_signed_type( tree ); 
#line 4056 "../.././gcc/tree.h"
extern void internal_reference_types(void ); 
#line 4058 "../.././gcc/tree.h"
extern unsigned int update_alignment_for_field( record_layout_info ,  tree , unsigned int ); 
#line 4060 "../.././gcc/tree.h"
extern void make_decl_rtl( tree ); 
#line 4061 "../.././gcc/tree.h"
extern void make_decl_one_only( tree ); 
#line 4062 "../.././gcc/tree.h"
extern int supports_one_only(void ); 
#line 4063 "../.././gcc/tree.h"
extern void variable_section( tree , int ); 
#line 4064 "../.././gcc/tree.h"
extern void resolve_unique_section( tree , int , int ); 
#line 4065 "../.././gcc/tree.h"
extern void mark_referenced( tree ); 
#line 4066 "../.././gcc/tree.h"
extern void mark_decl_referenced( tree ); 
#line 4067 "../.././gcc/tree.h"
extern void notice_global_symbol( tree ); 
#line 4068 "../.././gcc/tree.h"
extern void set_user_assembler_name( tree , const char *); 
#line 4069 "../.././gcc/tree.h"
extern void process_pending_assemble_externals(void ); 
#line 4070 "../.././gcc/tree.h"
extern void finish_aliases_1(void ); 
#line 4071 "../.././gcc/tree.h"
extern void finish_aliases_2(void ); 
#line 4074 "../.././gcc/tree.h"
extern void expand_computed_goto( tree ); 
#line 4076 "../.././gcc/tree.h"
extern unsigned char parse_output_constraint(const char **, int , int , int , unsigned char *, unsigned char *, unsigned char *); 
#line 4078 "../.././gcc/tree.h"
extern unsigned char parse_input_constraint(const char **, int , int , int , int , const char *const *, unsigned char *, unsigned char *); 
#line 4079 "../.././gcc/tree.h"
extern void expand_asm_expr( tree ); 
#line 4080 "../.././gcc/tree.h"
extern  tree resolve_asm_operand_names( tree ,  tree ,  tree ); 
#line 4081 "../.././gcc/tree.h"
extern void expand_case( tree ); 
#line 4082 "../.././gcc/tree.h"
extern void expand_decl( tree ); 
#line 4083 "../.././gcc/tree.h"
extern void expand_anon_union_decl( tree ,  tree ,  tree ); 
#line 4090 "../.././gcc/tree.h"
extern  tree create_artificial_label(void ); 
#line 4091 "../.././gcc/tree.h"
extern void gimplify_function_tree( tree ); 
#line 4092 "../.././gcc/tree.h"
extern const char *get_name( tree ); 
#line 4093 "../.././gcc/tree.h"
extern  tree unshare_expr( tree ); 
#line 4094 "../.././gcc/tree.h"
extern void sort_case_labels( tree ); 
#line 4098 "../.././gcc/tree.h"
extern  tree get_file_function_name(int ); 
#line 4104 "../.././gcc/tree.h"
extern char *dwarf2out_cfi_label(void ); 
#line 4108 "../.././gcc/tree.h"
extern void dwarf2out_def_cfa(const char *, unsigned , long ); 
#line 4112 "../.././gcc/tree.h"
extern void dwarf2out_window_save(const char *); 
#line 4117 "../.././gcc/tree.h"
extern void dwarf2out_args_size(const char *, long ); 
#line 4121 "../.././gcc/tree.h"
extern void dwarf2out_reg_save(const char *, unsigned , long ); 
#line 4125 "../.././gcc/tree.h"
extern void dwarf2out_return_save(const char *, long ); 
#line 4129 "../.././gcc/tree.h"
extern void dwarf2out_return_reg(const char *, unsigned ); 
#line 4133 "../.././gcc/tree.h"
extern void dwarf2out_reg_save_reg(const char *,  rtx ,  rtx ); 
#line 4139 "../.././gcc/tree.h"
struct pointer_set_t ; 
#line 4143 "../.././gcc/tree.h"
typedef  tree (*walk_tree_fn)( tree *, int *, void *); 
#line 4144 "../.././gcc/tree.h"
extern  tree walk_tree( tree *,  walk_tree_fn , void *, struct pointer_set_t *); 
#line 4145 "../.././gcc/tree.h"
extern  tree walk_tree_without_duplicates( tree *,  walk_tree_fn , void *); 
#line 4149 "../.././gcc/tree.h"
extern void set_decl_rtl( tree ,  rtx ); 
#line 4150 "../.././gcc/tree.h"
extern void set_decl_incoming_rtl( tree ,  rtx ); 
#line 4175 "../.././gcc/tree.h"
typedef enum {d_kind,t_kind,b_kind,s_kind,r_kind,e_kind,c_kind,id_kind,perm_list_kind,temp_list_kind,vec_kind,binfo_kind,phi_kind,ssa_name_kind,constr_kind,x_kind,lang_decl,lang_type,all_kinds}tree_node_kind; 
#line 4177 "../.././gcc/tree.h"
extern int tree_node_counts[]; 
#line 4178 "../.././gcc/tree.h"
extern int tree_node_sizes[]; 
#line 4183 "../.././gcc/tree.h"
extern unsigned char in_gimple_form; 
#line 4186 "../.././gcc/tree.h"
extern  tree get_base_address( tree t); 
#line 4189 "../.././gcc/tree.h"
extern void vect_set_verbosity_level(const char *); 
#line 4196 "../.././gcc/tree.h"
struct tree_map {unsigned int hash;  tree from;  tree to; }; 
#line 4198 "../.././gcc/tree.h"
extern unsigned int tree_map_hash(const void *); 
#line 4199 "../.././gcc/tree.h"
extern int tree_map_marked_p(const void *); 
#line 4200 "../.././gcc/tree.h"
extern int tree_map_eq(const void *, const void *); 
#line 4203 "../.././gcc/tree.h"
extern  tree tree_mem_ref_addr( tree ,  tree ); 
#line 4204 "../.././gcc/tree.h"
extern void copy_mem_ref_info( tree ,  tree ); 
#line 4207 "../.././gcc/tree.h"
extern void init_object_sizes(void ); 
#line 4208 "../.././gcc/tree.h"
extern void fini_object_sizes(void ); 
#line 4209 "../.././gcc/tree.h"
extern unsigned long compute_builtin_object_size( tree , int ); 
#line 4212 "../.././gcc/tree.h"
extern unsigned long highest_pow2_factor( tree ); 
# 4047 "../.././gcc/tree.h" 
# 32 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/cp/cp-tree.h" 1
# 26 "../.././gcc/cp/cp-tree.h" 
# 1 "../.././gcc/ggc.h" 1
# 30 "../.././gcc/ggc.h" 
extern const char empty_string[]; 
#line 31 "../.././gcc/ggc.h"
extern const char digit_vector[]; 
#line 38 "../.././gcc/ggc.h"
typedef void (*gt_pointer_operator)(void *, void *); 
# 1 "./gtype-desc.h" 1
# 191 "./gtype-desc.h" 
enum gt_types_enum {gt_ggc_e_15interface_tuple,gt_ggc_e_16volatilized_type,gt_ggc_e_17string_descriptor,gt_ggc_e_7c_scope,gt_ggc_e_9c_binding,gt_ggc_e_9imp_entry,gt_ggc_e_16hashed_attribute,gt_ggc_e_12hashed_entry,gt_ggc_e_8eh_range,gt_ggc_e_11parser_ctxt,gt_ggc_e_10jdeplist_s,gt_ggc_e_10java_lexer,gt_ggc_e_12ZipDirectory,gt_ggc_e_14type_assertion,gt_ggc_e_18treetreehash_entry,gt_ggc_e_5CPool,gt_ggc_e_3JCF,gt_ggc_e_13binding_level,gt_ggc_e_11align_stack,gt_ggc_e_21pending_abstract_type,gt_ggc_e_9cp_parser,gt_ggc_e_17cp_parser_context,gt_ggc_e_8cp_lexer,gt_ggc_e_26VEC_cp_token_position_heap,gt_ggc_e_8cp_token,gt_ggc_e_22VEC_deferred_access_gc,gt_ggc_e_18VEC_tree_pair_s_gc,gt_ggc_e_16named_label_list,gt_ggc_e_20named_label_use_list,gt_ggc_e_11saved_scope,gt_ggc_e_14cp_token_cache,gt_ggc_e_23VEC_cp_class_binding_gc,gt_ggc_e_24VEC_cxx_saved_binding_gc,gt_ggc_e_16cp_binding_level,gt_ggc_e_11cxx_binding,gt_ggc_e_15binding_entry_s,gt_ggc_e_15binding_table_s,gt_ggc_e_14VEC_tinfo_s_gc,gt_ggc_e_12nesting_info,gt_ggc_e_11var_map_elt,gt_ggc_e_20ssa_operand_memory_d,gt_ggc_e_8c_parser,gt_ggc_e_12int_tree_map,gt_ggc_e_6subvar,gt_ggc_e_17VEC_alias_pair_gc,gt_ggc_e_23constant_descriptor_rtx,gt_ggc_e_24constant_descriptor_tree,gt_ggc_e_14in_named_entry,gt_ggc_e_17rtx_constant_pool,gt_ggc_e_12tree_int_map,gt_ggc_e_9type_hash,gt_ggc_e_16string_pool_data,gt_ggc_e_15throw_stmt_node,gt_ggc_e_16VEC_eh_region_gc,gt_ggc_e_9eh_region,gt_ggc_e_13ehl_map_entry,gt_ggc_e_16var_loc_list_def,gt_ggc_e_12var_loc_node,gt_ggc_e_16limbo_die_struct,gt_ggc_e_16dw_ranges_struct,gt_ggc_e_14pubname_struct,gt_ggc_e_28dw_separate_line_info_struct,gt_ggc_e_19dw_line_info_struct,gt_ggc_e_14dw_attr_struct,gt_ggc_e_18dw_loc_list_struct,gt_ggc_e_15queued_reg_save,gt_ggc_e_20indirect_string_node,gt_ggc_e_19dw_loc_descr_struct,gt_ggc_e_13dw_fde_struct,gt_ggc_e_13dw_cfi_struct,gt_ggc_e_10VEC_rtx_gc,gt_ggc_e_8typeinfo,gt_ggc_e_15alias_set_entry,gt_ggc_e_10c_arg_info,gt_ggc_e_8c_switch,gt_ggc_e_18sorted_fields_type,gt_ggc_e_19cgraph_varpool_node,gt_ggc_e_11cgraph_edge,gt_ggc_e_11cgraph_node,gt_ggc_e_15edge_prediction,gt_ggc_e_11rtl_bb_info,gt_ggc_e_7et_node,gt_ggc_e_4loop,gt_ggc_e_11VEC_edge_gc,gt_ggc_e_12elt_loc_list,gt_ggc_e_17cselib_val_struct,gt_ggc_e_25ipa_reference_vars_info_d,gt_ggc_e_8edge_def,gt_ggc_e_8elt_list,gt_ggc_e_12reg_info_def,gt_ggc_e_8tree_map,gt_ggc_e_14lang_tree_node,gt_ggc_e_9value_set,gt_ggc_e_24tree_statement_list_node,gt_ggc_e_9lang_decl,gt_ggc_e_9lang_type,gt_ggc_e_10die_struct,gt_ggc_e_12ptr_info_def,gt_ggc_e_17ssa_use_operand_d,gt_ggc_e_22VEC_constructor_elt_gc,gt_ggc_e_10tree_ann_d,gt_ggc_e_11VEC_tree_gc,gt_ggc_e_13convert_optab,gt_ggc_e_5optab,gt_ggc_e_15basic_block_def,gt_ggc_e_10real_value,gt_ggc_e_9reg_attrs,gt_ggc_e_9mem_attrs,gt_ggc_e_17language_function,gt_ggc_e_9temp_slot,gt_ggc_e_15varray_head_tag,gt_ggc_e_20initial_value_struct,gt_ggc_e_18control_flow_graph,gt_ggc_e_13varasm_status,gt_ggc_e_9eh_status,gt_ggc_e_8function,gt_ggc_e_11expr_status,gt_ggc_e_11emit_status,gt_ggc_e_14sequence_stack,gt_ggc_e_14var_refs_queue,gt_ggc_e_15bitmap_head_def,gt_ggc_e_18bitmap_element_def,gt_ggc_e_14bitmap_obstack,gt_ggc_e_17stack_local_entry,gt_ggc_e_16machine_function,gt_ggc_e_6answer,gt_ggc_e_9cpp_macro,gt_ggc_e_9cpp_token,gt_ggc_e_9tree_node,gt_ggc_e_9rtvec_def,gt_ggc_e_7rtx_def,gt_ggc_e_10location_s,gt_e_II17splay_tree_node_s,gt_e_SP9tree_node17splay_tree_node_s,gt_e_IP9tree_node17splay_tree_node_s,gt_e_P15interface_tuple4htab,gt_e_P16volatilized_type4htab,gt_e_P17string_descriptor4htab,gt_e_P14type_assertion4htab,gt_e_P18treetreehash_entry4htab,gt_e_P21pending_abstract_type4htab,gt_e_IP9tree_node12splay_tree_s,gt_e_P11var_map_elt4htab,gt_e_P12int_tree_map4htab,gt_e_P23constant_descriptor_rtx4htab,gt_e_P24constant_descriptor_tree4htab,gt_e_P14in_named_entry4htab,gt_e_P12tree_int_map4htab,gt_e_P8tree_map4htab,gt_e_P9type_hash4htab,gt_e_P13ehl_map_entry4htab,gt_e_P15throw_stmt_node4htab,gt_e_P9tree_node4htab,gt_e_P9reg_attrs4htab,gt_e_P9mem_attrs4htab,gt_e_P7rtx_def4htab,gt_e_SP9tree_node12splay_tree_s,gt_e_P16var_loc_list_def4htab,gt_e_P10die_struct4htab,gt_e_P20indirect_string_node4htab,gt_e_P19cgraph_varpool_node4htab,gt_e_P11cgraph_node4htab,gt_e_P15alias_set_entry15varray_head_tag,gt_e_II12splay_tree_s,gt_e_P9temp_slot15varray_head_tag,gt_types_enum_last}; 
#line 197 "./gtype-desc.h"
extern void gt_ggc_mx_interface_tuple(void *); 
#line 201 "./gtype-desc.h"
extern void gt_ggc_mx_volatilized_type(void *); 
#line 205 "./gtype-desc.h"
extern void gt_ggc_mx_string_descriptor(void *); 
#line 209 "./gtype-desc.h"
extern void gt_ggc_mx_c_scope(void *); 
#line 213 "./gtype-desc.h"
extern void gt_ggc_mx_c_binding(void *); 
#line 217 "./gtype-desc.h"
extern void gt_ggc_mx_imp_entry(void *); 
#line 221 "./gtype-desc.h"
extern void gt_ggc_mx_hashed_attribute(void *); 
#line 225 "./gtype-desc.h"
extern void gt_ggc_mx_hashed_entry(void *); 
#line 229 "./gtype-desc.h"
extern void gt_ggc_mx_eh_range(void *); 
#line 233 "./gtype-desc.h"
extern void gt_ggc_mx_parser_ctxt(void *); 
#line 237 "./gtype-desc.h"
extern void gt_ggc_mx_jdeplist_s(void *); 
#line 241 "./gtype-desc.h"
extern void gt_ggc_mx_java_lexer(void *); 
#line 245 "./gtype-desc.h"
extern void gt_ggc_mx_ZipDirectory(void *); 
#line 249 "./gtype-desc.h"
extern void gt_ggc_mx_type_assertion(void *); 
#line 253 "./gtype-desc.h"
extern void gt_ggc_mx_treetreehash_entry(void *); 
#line 257 "./gtype-desc.h"
extern void gt_ggc_mx_CPool(void *); 
#line 261 "./gtype-desc.h"
extern void gt_ggc_mx_JCF(void *); 
#line 265 "./gtype-desc.h"
extern void gt_ggc_mx_binding_level(void *); 
#line 269 "./gtype-desc.h"
extern void gt_ggc_mx_align_stack(void *); 
#line 273 "./gtype-desc.h"
extern void gt_ggc_mx_pending_abstract_type(void *); 
#line 277 "./gtype-desc.h"
extern void gt_ggc_mx_cp_parser(void *); 
#line 281 "./gtype-desc.h"
extern void gt_ggc_mx_cp_parser_context(void *); 
#line 285 "./gtype-desc.h"
extern void gt_ggc_mx_cp_lexer(void *); 
#line 289 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_cp_token_position_heap(void *); 
#line 293 "./gtype-desc.h"
extern void gt_ggc_mx_cp_token(void *); 
#line 297 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_deferred_access_gc(void *); 
#line 301 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_tree_pair_s_gc(void *); 
#line 305 "./gtype-desc.h"
extern void gt_ggc_mx_named_label_list(void *); 
#line 309 "./gtype-desc.h"
extern void gt_ggc_mx_named_label_use_list(void *); 
#line 313 "./gtype-desc.h"
extern void gt_ggc_mx_saved_scope(void *); 
#line 317 "./gtype-desc.h"
extern void gt_ggc_mx_cp_token_cache(void *); 
#line 321 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_cp_class_binding_gc(void *); 
#line 325 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_cxx_saved_binding_gc(void *); 
#line 329 "./gtype-desc.h"
extern void gt_ggc_mx_cp_binding_level(void *); 
#line 333 "./gtype-desc.h"
extern void gt_ggc_mx_cxx_binding(void *); 
#line 337 "./gtype-desc.h"
extern void gt_ggc_mx_binding_entry_s(void *); 
#line 341 "./gtype-desc.h"
extern void gt_ggc_mx_binding_table_s(void *); 
#line 345 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_tinfo_s_gc(void *); 
#line 349 "./gtype-desc.h"
extern void gt_ggc_mx_nesting_info(void *); 
#line 353 "./gtype-desc.h"
extern void gt_ggc_mx_var_map_elt(void *); 
#line 357 "./gtype-desc.h"
extern void gt_ggc_mx_ssa_operand_memory_d(void *); 
#line 361 "./gtype-desc.h"
extern void gt_ggc_mx_c_parser(void *); 
#line 365 "./gtype-desc.h"
extern void gt_ggc_mx_int_tree_map(void *); 
#line 369 "./gtype-desc.h"
extern void gt_ggc_mx_subvar(void *); 
#line 373 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_alias_pair_gc(void *); 
#line 377 "./gtype-desc.h"
extern void gt_ggc_mx_constant_descriptor_rtx(void *); 
#line 381 "./gtype-desc.h"
extern void gt_ggc_mx_constant_descriptor_tree(void *); 
#line 385 "./gtype-desc.h"
extern void gt_ggc_mx_in_named_entry(void *); 
#line 389 "./gtype-desc.h"
extern void gt_ggc_mx_rtx_constant_pool(void *); 
#line 393 "./gtype-desc.h"
extern void gt_ggc_mx_tree_int_map(void *); 
#line 397 "./gtype-desc.h"
extern void gt_ggc_mx_type_hash(void *); 
#line 401 "./gtype-desc.h"
extern void gt_ggc_mx_string_pool_data(void *); 
#line 405 "./gtype-desc.h"
extern void gt_ggc_mx_throw_stmt_node(void *); 
#line 409 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_eh_region_gc(void *); 
#line 413 "./gtype-desc.h"
extern void gt_ggc_mx_eh_region(void *); 
#line 417 "./gtype-desc.h"
extern void gt_ggc_mx_ehl_map_entry(void *); 
#line 421 "./gtype-desc.h"
extern void gt_ggc_mx_var_loc_list_def(void *); 
#line 425 "./gtype-desc.h"
extern void gt_ggc_mx_var_loc_node(void *); 
#line 429 "./gtype-desc.h"
extern void gt_ggc_mx_limbo_die_struct(void *); 
#line 433 "./gtype-desc.h"
extern void gt_ggc_mx_dw_ranges_struct(void *); 
#line 437 "./gtype-desc.h"
extern void gt_ggc_mx_pubname_struct(void *); 
#line 441 "./gtype-desc.h"
extern void gt_ggc_mx_dw_separate_line_info_struct(void *); 
#line 445 "./gtype-desc.h"
extern void gt_ggc_mx_dw_line_info_struct(void *); 
#line 449 "./gtype-desc.h"
extern void gt_ggc_mx_dw_attr_struct(void *); 
#line 453 "./gtype-desc.h"
extern void gt_ggc_mx_dw_loc_list_struct(void *); 
#line 457 "./gtype-desc.h"
extern void gt_ggc_mx_queued_reg_save(void *); 
#line 461 "./gtype-desc.h"
extern void gt_ggc_mx_indirect_string_node(void *); 
#line 465 "./gtype-desc.h"
extern void gt_ggc_mx_dw_loc_descr_struct(void *); 
#line 469 "./gtype-desc.h"
extern void gt_ggc_mx_dw_fde_struct(void *); 
#line 473 "./gtype-desc.h"
extern void gt_ggc_mx_dw_cfi_struct(void *); 
#line 477 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_rtx_gc(void *); 
#line 481 "./gtype-desc.h"
extern void gt_ggc_mx_typeinfo(void *); 
#line 485 "./gtype-desc.h"
extern void gt_ggc_mx_alias_set_entry(void *); 
#line 489 "./gtype-desc.h"
extern void gt_ggc_mx_c_arg_info(void *); 
#line 493 "./gtype-desc.h"
extern void gt_ggc_mx_c_switch(void *); 
#line 497 "./gtype-desc.h"
extern void gt_ggc_mx_sorted_fields_type(void *); 
#line 501 "./gtype-desc.h"
extern void gt_ggc_mx_cgraph_varpool_node(void *); 
#line 505 "./gtype-desc.h"
extern void gt_ggc_mx_cgraph_edge(void *); 
#line 509 "./gtype-desc.h"
extern void gt_ggc_mx_cgraph_node(void *); 
#line 513 "./gtype-desc.h"
extern void gt_ggc_mx_edge_prediction(void *); 
#line 517 "./gtype-desc.h"
extern void gt_ggc_mx_rtl_bb_info(void *); 
#line 521 "./gtype-desc.h"
extern void gt_ggc_mx_et_node(void *); 
#line 525 "./gtype-desc.h"
extern void gt_ggc_mx_loop(void *); 
#line 529 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_edge_gc(void *); 
#line 533 "./gtype-desc.h"
extern void gt_ggc_mx_elt_loc_list(void *); 
#line 537 "./gtype-desc.h"
extern void gt_ggc_mx_cselib_val_struct(void *); 
#line 541 "./gtype-desc.h"
extern void gt_ggc_mx_ipa_reference_vars_info_d(void *); 
#line 545 "./gtype-desc.h"
extern void gt_ggc_mx_edge_def(void *); 
#line 549 "./gtype-desc.h"
extern void gt_ggc_mx_elt_list(void *); 
#line 553 "./gtype-desc.h"
extern void gt_ggc_mx_reg_info_def(void *); 
#line 557 "./gtype-desc.h"
extern void gt_ggc_mx_tree_map(void *); 
#line 561 "./gtype-desc.h"
extern void gt_ggc_mx_lang_tree_node(void *); 
#line 565 "./gtype-desc.h"
extern void gt_ggc_mx_value_set(void *); 
#line 569 "./gtype-desc.h"
extern void gt_ggc_mx_tree_statement_list_node(void *); 
#line 573 "./gtype-desc.h"
extern void gt_ggc_mx_lang_decl(void *); 
#line 577 "./gtype-desc.h"
extern void gt_ggc_mx_lang_type(void *); 
#line 581 "./gtype-desc.h"
extern void gt_ggc_mx_die_struct(void *); 
#line 585 "./gtype-desc.h"
extern void gt_ggc_mx_ptr_info_def(void *); 
#line 589 "./gtype-desc.h"
extern void gt_ggc_mx_ssa_use_operand_d(void *); 
#line 593 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_constructor_elt_gc(void *); 
#line 597 "./gtype-desc.h"
extern void gt_ggc_mx_tree_ann_d(void *); 
#line 601 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_tree_gc(void *); 
#line 605 "./gtype-desc.h"
extern void gt_ggc_mx_convert_optab(void *); 
#line 609 "./gtype-desc.h"
extern void gt_ggc_mx_optab(void *); 
#line 613 "./gtype-desc.h"
extern void gt_ggc_mx_basic_block_def(void *); 
#line 617 "./gtype-desc.h"
extern void gt_ggc_mx_real_value(void *); 
#line 621 "./gtype-desc.h"
extern void gt_ggc_mx_reg_attrs(void *); 
#line 625 "./gtype-desc.h"
extern void gt_ggc_mx_mem_attrs(void *); 
#line 629 "./gtype-desc.h"
extern void gt_ggc_mx_language_function(void *); 
#line 633 "./gtype-desc.h"
extern void gt_ggc_mx_temp_slot(void *); 
#line 637 "./gtype-desc.h"
extern void gt_ggc_mx_varray_head_tag(void *); 
#line 641 "./gtype-desc.h"
extern void gt_ggc_mx_initial_value_struct(void *); 
#line 645 "./gtype-desc.h"
extern void gt_ggc_mx_control_flow_graph(void *); 
#line 649 "./gtype-desc.h"
extern void gt_ggc_mx_varasm_status(void *); 
#line 653 "./gtype-desc.h"
extern void gt_ggc_mx_eh_status(void *); 
#line 657 "./gtype-desc.h"
extern void gt_ggc_mx_function(void *); 
#line 661 "./gtype-desc.h"
extern void gt_ggc_mx_expr_status(void *); 
#line 665 "./gtype-desc.h"
extern void gt_ggc_mx_emit_status(void *); 
#line 669 "./gtype-desc.h"
extern void gt_ggc_mx_sequence_stack(void *); 
#line 673 "./gtype-desc.h"
extern void gt_ggc_mx_var_refs_queue(void *); 
#line 677 "./gtype-desc.h"
extern void gt_ggc_mx_bitmap_head_def(void *); 
#line 681 "./gtype-desc.h"
extern void gt_ggc_mx_bitmap_element_def(void *); 
#line 685 "./gtype-desc.h"
extern void gt_ggc_mx_bitmap_obstack(void *); 
#line 689 "./gtype-desc.h"
extern void gt_ggc_mx_stack_local_entry(void *); 
#line 693 "./gtype-desc.h"
extern void gt_ggc_mx_machine_function(void *); 
#line 697 "./gtype-desc.h"
extern void gt_ggc_mx_answer(void *); 
#line 701 "./gtype-desc.h"
extern void gt_ggc_mx_cpp_macro(void *); 
#line 705 "./gtype-desc.h"
extern void gt_ggc_mx_cpp_token(void *); 
#line 713 "./gtype-desc.h"
extern void gt_ggc_mx_rtvec_def(void *); 
#line 717 "./gtype-desc.h"
extern void gt_ggc_mx_rtx_def(void *); 
#line 721 "./gtype-desc.h"
extern void gt_ggc_mx_location_s(void *); 
#line 722 "./gtype-desc.h"
extern void gt_ggc_m_II17splay_tree_node_s(void *); 
#line 723 "./gtype-desc.h"
extern void gt_ggc_m_SP9tree_node17splay_tree_node_s(void *); 
#line 724 "./gtype-desc.h"
extern void gt_ggc_m_IP9tree_node17splay_tree_node_s(void *); 
#line 725 "./gtype-desc.h"
extern void gt_ggc_m_P15interface_tuple4htab(void *); 
#line 726 "./gtype-desc.h"
extern void gt_ggc_m_P16volatilized_type4htab(void *); 
#line 727 "./gtype-desc.h"
extern void gt_ggc_m_P17string_descriptor4htab(void *); 
#line 728 "./gtype-desc.h"
extern void gt_ggc_m_P14type_assertion4htab(void *); 
#line 729 "./gtype-desc.h"
extern void gt_ggc_m_P18treetreehash_entry4htab(void *); 
#line 730 "./gtype-desc.h"
extern void gt_ggc_m_P21pending_abstract_type4htab(void *); 
#line 731 "./gtype-desc.h"
extern void gt_ggc_m_IP9tree_node12splay_tree_s(void *); 
#line 732 "./gtype-desc.h"
extern void gt_ggc_m_P11var_map_elt4htab(void *); 
#line 733 "./gtype-desc.h"
extern void gt_ggc_m_P12int_tree_map4htab(void *); 
#line 734 "./gtype-desc.h"
extern void gt_ggc_m_P23constant_descriptor_rtx4htab(void *); 
#line 735 "./gtype-desc.h"
extern void gt_ggc_m_P24constant_descriptor_tree4htab(void *); 
#line 736 "./gtype-desc.h"
extern void gt_ggc_m_P14in_named_entry4htab(void *); 
#line 737 "./gtype-desc.h"
extern void gt_ggc_m_P12tree_int_map4htab(void *); 
#line 738 "./gtype-desc.h"
extern void gt_ggc_m_P8tree_map4htab(void *); 
#line 739 "./gtype-desc.h"
extern void gt_ggc_m_P9type_hash4htab(void *); 
#line 740 "./gtype-desc.h"
extern void gt_ggc_m_P13ehl_map_entry4htab(void *); 
#line 741 "./gtype-desc.h"
extern void gt_ggc_m_P15throw_stmt_node4htab(void *); 
#line 742 "./gtype-desc.h"
extern void gt_ggc_m_P9tree_node4htab(void *); 
#line 743 "./gtype-desc.h"
extern void gt_ggc_m_P9reg_attrs4htab(void *); 
#line 744 "./gtype-desc.h"
extern void gt_ggc_m_P9mem_attrs4htab(void *); 
#line 745 "./gtype-desc.h"
extern void gt_ggc_m_P7rtx_def4htab(void *); 
#line 746 "./gtype-desc.h"
extern void gt_ggc_m_SP9tree_node12splay_tree_s(void *); 
#line 747 "./gtype-desc.h"
extern void gt_ggc_m_P16var_loc_list_def4htab(void *); 
#line 748 "./gtype-desc.h"
extern void gt_ggc_m_P10die_struct4htab(void *); 
#line 749 "./gtype-desc.h"
extern void gt_ggc_m_P20indirect_string_node4htab(void *); 
#line 750 "./gtype-desc.h"
extern void gt_ggc_m_P19cgraph_varpool_node4htab(void *); 
#line 751 "./gtype-desc.h"
extern void gt_ggc_m_P11cgraph_node4htab(void *); 
#line 752 "./gtype-desc.h"
extern void gt_ggc_m_P15alias_set_entry15varray_head_tag(void *); 
#line 753 "./gtype-desc.h"
extern void gt_ggc_m_II12splay_tree_s(void *); 
#line 754 "./gtype-desc.h"
extern void gt_ggc_m_P9temp_slot15varray_head_tag(void *); 
#line 760 "./gtype-desc.h"
extern void gt_pch_nx_interface_tuple(void *); 
#line 764 "./gtype-desc.h"
extern void gt_pch_nx_volatilized_type(void *); 
#line 768 "./gtype-desc.h"
extern void gt_pch_nx_string_descriptor(void *); 
#line 772 "./gtype-desc.h"
extern void gt_pch_nx_c_scope(void *); 
#line 776 "./gtype-desc.h"
extern void gt_pch_nx_c_binding(void *); 
#line 780 "./gtype-desc.h"
extern void gt_pch_nx_imp_entry(void *); 
#line 784 "./gtype-desc.h"
extern void gt_pch_nx_hashed_attribute(void *); 
#line 788 "./gtype-desc.h"
extern void gt_pch_nx_hashed_entry(void *); 
#line 792 "./gtype-desc.h"
extern void gt_pch_nx_eh_range(void *); 
#line 796 "./gtype-desc.h"
extern void gt_pch_nx_parser_ctxt(void *); 
#line 800 "./gtype-desc.h"
extern void gt_pch_nx_jdeplist_s(void *); 
#line 804 "./gtype-desc.h"
extern void gt_pch_nx_java_lexer(void *); 
#line 808 "./gtype-desc.h"
extern void gt_pch_nx_ZipDirectory(void *); 
#line 812 "./gtype-desc.h"
extern void gt_pch_nx_type_assertion(void *); 
#line 816 "./gtype-desc.h"
extern void gt_pch_nx_treetreehash_entry(void *); 
#line 820 "./gtype-desc.h"
extern void gt_pch_nx_CPool(void *); 
#line 824 "./gtype-desc.h"
extern void gt_pch_nx_JCF(void *); 
#line 828 "./gtype-desc.h"
extern void gt_pch_nx_binding_level(void *); 
#line 832 "./gtype-desc.h"
extern void gt_pch_nx_align_stack(void *); 
#line 836 "./gtype-desc.h"
extern void gt_pch_nx_pending_abstract_type(void *); 
#line 840 "./gtype-desc.h"
extern void gt_pch_nx_cp_parser(void *); 
#line 844 "./gtype-desc.h"
extern void gt_pch_nx_cp_parser_context(void *); 
#line 848 "./gtype-desc.h"
extern void gt_pch_nx_cp_lexer(void *); 
#line 852 "./gtype-desc.h"
extern void gt_pch_nx_VEC_cp_token_position_heap(void *); 
#line 856 "./gtype-desc.h"
extern void gt_pch_nx_cp_token(void *); 
#line 860 "./gtype-desc.h"
extern void gt_pch_nx_VEC_deferred_access_gc(void *); 
#line 864 "./gtype-desc.h"
extern void gt_pch_nx_VEC_tree_pair_s_gc(void *); 
#line 868 "./gtype-desc.h"
extern void gt_pch_nx_named_label_list(void *); 
#line 872 "./gtype-desc.h"
extern void gt_pch_nx_named_label_use_list(void *); 
#line 876 "./gtype-desc.h"
extern void gt_pch_nx_saved_scope(void *); 
#line 880 "./gtype-desc.h"
extern void gt_pch_nx_cp_token_cache(void *); 
#line 884 "./gtype-desc.h"
extern void gt_pch_nx_VEC_cp_class_binding_gc(void *); 
#line 888 "./gtype-desc.h"
extern void gt_pch_nx_VEC_cxx_saved_binding_gc(void *); 
#line 892 "./gtype-desc.h"
extern void gt_pch_nx_cp_binding_level(void *); 
#line 896 "./gtype-desc.h"
extern void gt_pch_nx_cxx_binding(void *); 
#line 900 "./gtype-desc.h"
extern void gt_pch_nx_binding_entry_s(void *); 
#line 904 "./gtype-desc.h"
extern void gt_pch_nx_binding_table_s(void *); 
#line 908 "./gtype-desc.h"
extern void gt_pch_nx_VEC_tinfo_s_gc(void *); 
#line 912 "./gtype-desc.h"
extern void gt_pch_nx_nesting_info(void *); 
#line 916 "./gtype-desc.h"
extern void gt_pch_nx_var_map_elt(void *); 
#line 920 "./gtype-desc.h"
extern void gt_pch_nx_ssa_operand_memory_d(void *); 
#line 924 "./gtype-desc.h"
extern void gt_pch_nx_c_parser(void *); 
#line 928 "./gtype-desc.h"
extern void gt_pch_nx_int_tree_map(void *); 
#line 932 "./gtype-desc.h"
extern void gt_pch_nx_subvar(void *); 
#line 936 "./gtype-desc.h"
extern void gt_pch_nx_VEC_alias_pair_gc(void *); 
#line 940 "./gtype-desc.h"
extern void gt_pch_nx_constant_descriptor_rtx(void *); 
#line 944 "./gtype-desc.h"
extern void gt_pch_nx_constant_descriptor_tree(void *); 
#line 948 "./gtype-desc.h"
extern void gt_pch_nx_in_named_entry(void *); 
#line 952 "./gtype-desc.h"
extern void gt_pch_nx_rtx_constant_pool(void *); 
#line 956 "./gtype-desc.h"
extern void gt_pch_nx_tree_int_map(void *); 
#line 960 "./gtype-desc.h"
extern void gt_pch_nx_type_hash(void *); 
#line 964 "./gtype-desc.h"
extern void gt_pch_nx_string_pool_data(void *); 
#line 968 "./gtype-desc.h"
extern void gt_pch_nx_throw_stmt_node(void *); 
#line 972 "./gtype-desc.h"
extern void gt_pch_nx_VEC_eh_region_gc(void *); 
#line 976 "./gtype-desc.h"
extern void gt_pch_nx_eh_region(void *); 
#line 980 "./gtype-desc.h"
extern void gt_pch_nx_ehl_map_entry(void *); 
#line 984 "./gtype-desc.h"
extern void gt_pch_nx_var_loc_list_def(void *); 
#line 988 "./gtype-desc.h"
extern void gt_pch_nx_var_loc_node(void *); 
#line 992 "./gtype-desc.h"
extern void gt_pch_nx_limbo_die_struct(void *); 
#line 996 "./gtype-desc.h"
extern void gt_pch_nx_dw_ranges_struct(void *); 
#line 1000 "./gtype-desc.h"
extern void gt_pch_nx_pubname_struct(void *); 
#line 1004 "./gtype-desc.h"
extern void gt_pch_nx_dw_separate_line_info_struct(void *); 
#line 1008 "./gtype-desc.h"
extern void gt_pch_nx_dw_line_info_struct(void *); 
#line 1012 "./gtype-desc.h"
extern void gt_pch_nx_dw_attr_struct(void *); 
#line 1016 "./gtype-desc.h"
extern void gt_pch_nx_dw_loc_list_struct(void *); 
#line 1020 "./gtype-desc.h"
extern void gt_pch_nx_queued_reg_save(void *); 
#line 1024 "./gtype-desc.h"
extern void gt_pch_nx_indirect_string_node(void *); 
#line 1028 "./gtype-desc.h"
extern void gt_pch_nx_dw_loc_descr_struct(void *); 
#line 1032 "./gtype-desc.h"
extern void gt_pch_nx_dw_fde_struct(void *); 
#line 1036 "./gtype-desc.h"
extern void gt_pch_nx_dw_cfi_struct(void *); 
#line 1040 "./gtype-desc.h"
extern void gt_pch_nx_VEC_rtx_gc(void *); 
#line 1044 "./gtype-desc.h"
extern void gt_pch_nx_typeinfo(void *); 
#line 1048 "./gtype-desc.h"
extern void gt_pch_nx_alias_set_entry(void *); 
#line 1052 "./gtype-desc.h"
extern void gt_pch_nx_c_arg_info(void *); 
#line 1056 "./gtype-desc.h"
extern void gt_pch_nx_c_switch(void *); 
#line 1060 "./gtype-desc.h"
extern void gt_pch_nx_sorted_fields_type(void *); 
#line 1064 "./gtype-desc.h"
extern void gt_pch_nx_cgraph_varpool_node(void *); 
#line 1068 "./gtype-desc.h"
extern void gt_pch_nx_cgraph_edge(void *); 
#line 1072 "./gtype-desc.h"
extern void gt_pch_nx_cgraph_node(void *); 
#line 1076 "./gtype-desc.h"
extern void gt_pch_nx_edge_prediction(void *); 
#line 1080 "./gtype-desc.h"
extern void gt_pch_nx_rtl_bb_info(void *); 
#line 1084 "./gtype-desc.h"
extern void gt_pch_nx_et_node(void *); 
#line 1088 "./gtype-desc.h"
extern void gt_pch_nx_loop(void *); 
#line 1092 "./gtype-desc.h"
extern void gt_pch_nx_VEC_edge_gc(void *); 
#line 1096 "./gtype-desc.h"
extern void gt_pch_nx_elt_loc_list(void *); 
#line 1100 "./gtype-desc.h"
extern void gt_pch_nx_cselib_val_struct(void *); 
#line 1104 "./gtype-desc.h"
extern void gt_pch_nx_ipa_reference_vars_info_d(void *); 
#line 1108 "./gtype-desc.h"
extern void gt_pch_nx_edge_def(void *); 
#line 1112 "./gtype-desc.h"
extern void gt_pch_nx_elt_list(void *); 
#line 1116 "./gtype-desc.h"
extern void gt_pch_nx_reg_info_def(void *); 
#line 1120 "./gtype-desc.h"
extern void gt_pch_nx_tree_map(void *); 
#line 1124 "./gtype-desc.h"
extern void gt_pch_nx_lang_tree_node(void *); 
#line 1128 "./gtype-desc.h"
extern void gt_pch_nx_value_set(void *); 
#line 1132 "./gtype-desc.h"
extern void gt_pch_nx_tree_statement_list_node(void *); 
#line 1136 "./gtype-desc.h"
extern void gt_pch_nx_lang_decl(void *); 
#line 1140 "./gtype-desc.h"
extern void gt_pch_nx_lang_type(void *); 
#line 1144 "./gtype-desc.h"
extern void gt_pch_nx_die_struct(void *); 
#line 1148 "./gtype-desc.h"
extern void gt_pch_nx_ptr_info_def(void *); 
#line 1152 "./gtype-desc.h"
extern void gt_pch_nx_ssa_use_operand_d(void *); 
#line 1156 "./gtype-desc.h"
extern void gt_pch_nx_VEC_constructor_elt_gc(void *); 
#line 1160 "./gtype-desc.h"
extern void gt_pch_nx_tree_ann_d(void *); 
#line 1164 "./gtype-desc.h"
extern void gt_pch_nx_VEC_tree_gc(void *); 
#line 1168 "./gtype-desc.h"
extern void gt_pch_nx_convert_optab(void *); 
#line 1172 "./gtype-desc.h"
extern void gt_pch_nx_optab(void *); 
#line 1176 "./gtype-desc.h"
extern void gt_pch_nx_basic_block_def(void *); 
#line 1180 "./gtype-desc.h"
extern void gt_pch_nx_real_value(void *); 
#line 1184 "./gtype-desc.h"
extern void gt_pch_nx_reg_attrs(void *); 
#line 1188 "./gtype-desc.h"
extern void gt_pch_nx_mem_attrs(void *); 
#line 1192 "./gtype-desc.h"
extern void gt_pch_nx_language_function(void *); 
#line 1196 "./gtype-desc.h"
extern void gt_pch_nx_temp_slot(void *); 
#line 1200 "./gtype-desc.h"
extern void gt_pch_nx_varray_head_tag(void *); 
#line 1204 "./gtype-desc.h"
extern void gt_pch_nx_initial_value_struct(void *); 
#line 1208 "./gtype-desc.h"
extern void gt_pch_nx_control_flow_graph(void *); 
#line 1212 "./gtype-desc.h"
extern void gt_pch_nx_varasm_status(void *); 
#line 1216 "./gtype-desc.h"
extern void gt_pch_nx_eh_status(void *); 
#line 1220 "./gtype-desc.h"
extern void gt_pch_nx_function(void *); 
#line 1224 "./gtype-desc.h"
extern void gt_pch_nx_expr_status(void *); 
#line 1228 "./gtype-desc.h"
extern void gt_pch_nx_emit_status(void *); 
#line 1232 "./gtype-desc.h"
extern void gt_pch_nx_sequence_stack(void *); 
#line 1236 "./gtype-desc.h"
extern void gt_pch_nx_var_refs_queue(void *); 
#line 1240 "./gtype-desc.h"
extern void gt_pch_nx_bitmap_head_def(void *); 
#line 1244 "./gtype-desc.h"
extern void gt_pch_nx_bitmap_element_def(void *); 
#line 1248 "./gtype-desc.h"
extern void gt_pch_nx_bitmap_obstack(void *); 
#line 1252 "./gtype-desc.h"
extern void gt_pch_nx_stack_local_entry(void *); 
#line 1256 "./gtype-desc.h"
extern void gt_pch_nx_machine_function(void *); 
#line 1260 "./gtype-desc.h"
extern void gt_pch_nx_answer(void *); 
#line 1264 "./gtype-desc.h"
extern void gt_pch_nx_cpp_macro(void *); 
#line 1268 "./gtype-desc.h"
extern void gt_pch_nx_cpp_token(void *); 
#line 1276 "./gtype-desc.h"
extern void gt_pch_nx_rtvec_def(void *); 
#line 1280 "./gtype-desc.h"
extern void gt_pch_nx_rtx_def(void *); 
#line 1284 "./gtype-desc.h"
extern void gt_pch_nx_location_s(void *); 
#line 1285 "./gtype-desc.h"
extern void gt_pch_n_II17splay_tree_node_s(void *); 
#line 1286 "./gtype-desc.h"
extern void gt_pch_n_SP9tree_node17splay_tree_node_s(void *); 
#line 1287 "./gtype-desc.h"
extern void gt_pch_n_IP9tree_node17splay_tree_node_s(void *); 
#line 1288 "./gtype-desc.h"
extern void gt_pch_n_P15interface_tuple4htab(void *); 
#line 1289 "./gtype-desc.h"
extern void gt_pch_n_P16volatilized_type4htab(void *); 
#line 1290 "./gtype-desc.h"
extern void gt_pch_n_P17string_descriptor4htab(void *); 
#line 1291 "./gtype-desc.h"
extern void gt_pch_n_P14type_assertion4htab(void *); 
#line 1292 "./gtype-desc.h"
extern void gt_pch_n_P18treetreehash_entry4htab(void *); 
#line 1293 "./gtype-desc.h"
extern void gt_pch_n_P21pending_abstract_type4htab(void *); 
#line 1294 "./gtype-desc.h"
extern void gt_pch_n_IP9tree_node12splay_tree_s(void *); 
#line 1295 "./gtype-desc.h"
extern void gt_pch_n_P11var_map_elt4htab(void *); 
#line 1296 "./gtype-desc.h"
extern void gt_pch_n_P12int_tree_map4htab(void *); 
#line 1297 "./gtype-desc.h"
extern void gt_pch_n_P23constant_descriptor_rtx4htab(void *); 
#line 1298 "./gtype-desc.h"
extern void gt_pch_n_P24constant_descriptor_tree4htab(void *); 
#line 1299 "./gtype-desc.h"
extern void gt_pch_n_P14in_named_entry4htab(void *); 
#line 1300 "./gtype-desc.h"
extern void gt_pch_n_P12tree_int_map4htab(void *); 
#line 1301 "./gtype-desc.h"
extern void gt_pch_n_P8tree_map4htab(void *); 
#line 1302 "./gtype-desc.h"
extern void gt_pch_n_P9type_hash4htab(void *); 
#line 1303 "./gtype-desc.h"
extern void gt_pch_n_P13ehl_map_entry4htab(void *); 
#line 1304 "./gtype-desc.h"
extern void gt_pch_n_P15throw_stmt_node4htab(void *); 
#line 1305 "./gtype-desc.h"
extern void gt_pch_n_P9tree_node4htab(void *); 
#line 1306 "./gtype-desc.h"
extern void gt_pch_n_P9reg_attrs4htab(void *); 
#line 1307 "./gtype-desc.h"
extern void gt_pch_n_P9mem_attrs4htab(void *); 
#line 1308 "./gtype-desc.h"
extern void gt_pch_n_P7rtx_def4htab(void *); 
#line 1309 "./gtype-desc.h"
extern void gt_pch_n_SP9tree_node12splay_tree_s(void *); 
#line 1310 "./gtype-desc.h"
extern void gt_pch_n_P16var_loc_list_def4htab(void *); 
#line 1311 "./gtype-desc.h"
extern void gt_pch_n_P10die_struct4htab(void *); 
#line 1312 "./gtype-desc.h"
extern void gt_pch_n_P20indirect_string_node4htab(void *); 
#line 1313 "./gtype-desc.h"
extern void gt_pch_n_P19cgraph_varpool_node4htab(void *); 
#line 1314 "./gtype-desc.h"
extern void gt_pch_n_P11cgraph_node4htab(void *); 
#line 1315 "./gtype-desc.h"
extern void gt_pch_n_P15alias_set_entry15varray_head_tag(void *); 
#line 1316 "./gtype-desc.h"
extern void gt_pch_n_II12splay_tree_s(void *); 
#line 1317 "./gtype-desc.h"
extern void gt_pch_n_P9temp_slot15varray_head_tag(void *); 
#line 1321 "./gtype-desc.h"
extern void gt_pch_p_15interface_tuple(void *, void *,  gt_pointer_operator , void *); 
#line 1323 "./gtype-desc.h"
extern void gt_pch_p_16volatilized_type(void *, void *,  gt_pointer_operator , void *); 
#line 1325 "./gtype-desc.h"
extern void gt_pch_p_17string_descriptor(void *, void *,  gt_pointer_operator , void *); 
#line 1327 "./gtype-desc.h"
extern void gt_pch_p_7c_scope(void *, void *,  gt_pointer_operator , void *); 
#line 1329 "./gtype-desc.h"
extern void gt_pch_p_9c_binding(void *, void *,  gt_pointer_operator , void *); 
#line 1331 "./gtype-desc.h"
extern void gt_pch_p_9imp_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1333 "./gtype-desc.h"
extern void gt_pch_p_16hashed_attribute(void *, void *,  gt_pointer_operator , void *); 
#line 1335 "./gtype-desc.h"
extern void gt_pch_p_12hashed_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1337 "./gtype-desc.h"
extern void gt_pch_p_11parser_ctxt(void *, void *,  gt_pointer_operator , void *); 
#line 1339 "./gtype-desc.h"
extern void gt_pch_p_14type_assertion(void *, void *,  gt_pointer_operator , void *); 
#line 1341 "./gtype-desc.h"
extern void gt_pch_p_18treetreehash_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1343 "./gtype-desc.h"
extern void gt_pch_p_5CPool(void *, void *,  gt_pointer_operator , void *); 
#line 1345 "./gtype-desc.h"
extern void gt_pch_p_3JCF(void *, void *,  gt_pointer_operator , void *); 
#line 1347 "./gtype-desc.h"
extern void gt_pch_p_13binding_level(void *, void *,  gt_pointer_operator , void *); 
#line 1349 "./gtype-desc.h"
extern void gt_pch_p_11align_stack(void *, void *,  gt_pointer_operator , void *); 
#line 1351 "./gtype-desc.h"
extern void gt_pch_p_21pending_abstract_type(void *, void *,  gt_pointer_operator , void *); 
#line 1353 "./gtype-desc.h"
extern void gt_pch_p_9cp_parser(void *, void *,  gt_pointer_operator , void *); 
#line 1355 "./gtype-desc.h"
extern void gt_pch_p_17cp_parser_context(void *, void *,  gt_pointer_operator , void *); 
#line 1357 "./gtype-desc.h"
extern void gt_pch_p_8cp_lexer(void *, void *,  gt_pointer_operator , void *); 
#line 1359 "./gtype-desc.h"
extern void gt_pch_p_8cp_token(void *, void *,  gt_pointer_operator , void *); 
#line 1361 "./gtype-desc.h"
extern void gt_pch_p_22VEC_deferred_access_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1363 "./gtype-desc.h"
extern void gt_pch_p_18VEC_tree_pair_s_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1365 "./gtype-desc.h"
extern void gt_pch_p_16named_label_list(void *, void *,  gt_pointer_operator , void *); 
#line 1367 "./gtype-desc.h"
extern void gt_pch_p_20named_label_use_list(void *, void *,  gt_pointer_operator , void *); 
#line 1369 "./gtype-desc.h"
extern void gt_pch_p_11saved_scope(void *, void *,  gt_pointer_operator , void *); 
#line 1371 "./gtype-desc.h"
extern void gt_pch_p_14cp_token_cache(void *, void *,  gt_pointer_operator , void *); 
#line 1373 "./gtype-desc.h"
extern void gt_pch_p_23VEC_cp_class_binding_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1375 "./gtype-desc.h"
extern void gt_pch_p_24VEC_cxx_saved_binding_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1377 "./gtype-desc.h"
extern void gt_pch_p_16cp_binding_level(void *, void *,  gt_pointer_operator , void *); 
#line 1379 "./gtype-desc.h"
extern void gt_pch_p_11cxx_binding(void *, void *,  gt_pointer_operator , void *); 
#line 1381 "./gtype-desc.h"
extern void gt_pch_p_15binding_entry_s(void *, void *,  gt_pointer_operator , void *); 
#line 1383 "./gtype-desc.h"
extern void gt_pch_p_15binding_table_s(void *, void *,  gt_pointer_operator , void *); 
#line 1385 "./gtype-desc.h"
extern void gt_pch_p_14VEC_tinfo_s_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1387 "./gtype-desc.h"
extern void gt_pch_p_12nesting_info(void *, void *,  gt_pointer_operator , void *); 
#line 1389 "./gtype-desc.h"
extern void gt_pch_p_11var_map_elt(void *, void *,  gt_pointer_operator , void *); 
#line 1391 "./gtype-desc.h"
extern void gt_pch_p_20ssa_operand_memory_d(void *, void *,  gt_pointer_operator , void *); 
#line 1393 "./gtype-desc.h"
extern void gt_pch_p_8c_parser(void *, void *,  gt_pointer_operator , void *); 
#line 1395 "./gtype-desc.h"
extern void gt_pch_p_12int_tree_map(void *, void *,  gt_pointer_operator , void *); 
#line 1397 "./gtype-desc.h"
extern void gt_pch_p_6subvar(void *, void *,  gt_pointer_operator , void *); 
#line 1399 "./gtype-desc.h"
extern void gt_pch_p_17VEC_alias_pair_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1401 "./gtype-desc.h"
extern void gt_pch_p_23constant_descriptor_rtx(void *, void *,  gt_pointer_operator , void *); 
#line 1403 "./gtype-desc.h"
extern void gt_pch_p_24constant_descriptor_tree(void *, void *,  gt_pointer_operator , void *); 
#line 1405 "./gtype-desc.h"
extern void gt_pch_p_14in_named_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1407 "./gtype-desc.h"
extern void gt_pch_p_17rtx_constant_pool(void *, void *,  gt_pointer_operator , void *); 
#line 1409 "./gtype-desc.h"
extern void gt_pch_p_12tree_int_map(void *, void *,  gt_pointer_operator , void *); 
#line 1411 "./gtype-desc.h"
extern void gt_pch_p_9type_hash(void *, void *,  gt_pointer_operator , void *); 
#line 1413 "./gtype-desc.h"
extern void gt_pch_p_16string_pool_data(void *, void *,  gt_pointer_operator , void *); 
#line 1415 "./gtype-desc.h"
extern void gt_pch_p_15throw_stmt_node(void *, void *,  gt_pointer_operator , void *); 
#line 1417 "./gtype-desc.h"
extern void gt_pch_p_16VEC_eh_region_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1419 "./gtype-desc.h"
extern void gt_pch_p_9eh_region(void *, void *,  gt_pointer_operator , void *); 
#line 1421 "./gtype-desc.h"
extern void gt_pch_p_13ehl_map_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1423 "./gtype-desc.h"
extern void gt_pch_p_16var_loc_list_def(void *, void *,  gt_pointer_operator , void *); 
#line 1425 "./gtype-desc.h"
extern void gt_pch_p_12var_loc_node(void *, void *,  gt_pointer_operator , void *); 
#line 1427 "./gtype-desc.h"
extern void gt_pch_p_16limbo_die_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1429 "./gtype-desc.h"
extern void gt_pch_p_16dw_ranges_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1431 "./gtype-desc.h"
extern void gt_pch_p_14pubname_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1433 "./gtype-desc.h"
extern void gt_pch_p_28dw_separate_line_info_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1435 "./gtype-desc.h"
extern void gt_pch_p_19dw_line_info_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1437 "./gtype-desc.h"
extern void gt_pch_p_14dw_attr_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1439 "./gtype-desc.h"
extern void gt_pch_p_18dw_loc_list_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1441 "./gtype-desc.h"
extern void gt_pch_p_15queued_reg_save(void *, void *,  gt_pointer_operator , void *); 
#line 1443 "./gtype-desc.h"
extern void gt_pch_p_20indirect_string_node(void *, void *,  gt_pointer_operator , void *); 
#line 1445 "./gtype-desc.h"
extern void gt_pch_p_19dw_loc_descr_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1447 "./gtype-desc.h"
extern void gt_pch_p_13dw_fde_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1449 "./gtype-desc.h"
extern void gt_pch_p_13dw_cfi_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1451 "./gtype-desc.h"
extern void gt_pch_p_10VEC_rtx_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1453 "./gtype-desc.h"
extern void gt_pch_p_8typeinfo(void *, void *,  gt_pointer_operator , void *); 
#line 1455 "./gtype-desc.h"
extern void gt_pch_p_15alias_set_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1457 "./gtype-desc.h"
extern void gt_pch_p_18sorted_fields_type(void *, void *,  gt_pointer_operator , void *); 
#line 1459 "./gtype-desc.h"
extern void gt_pch_p_19cgraph_varpool_node(void *, void *,  gt_pointer_operator , void *); 
#line 1461 "./gtype-desc.h"
extern void gt_pch_p_11cgraph_edge(void *, void *,  gt_pointer_operator , void *); 
#line 1463 "./gtype-desc.h"
extern void gt_pch_p_11cgraph_node(void *, void *,  gt_pointer_operator , void *); 
#line 1465 "./gtype-desc.h"
extern void gt_pch_p_15edge_prediction(void *, void *,  gt_pointer_operator , void *); 
#line 1467 "./gtype-desc.h"
extern void gt_pch_p_11rtl_bb_info(void *, void *,  gt_pointer_operator , void *); 
#line 1469 "./gtype-desc.h"
extern void gt_pch_p_11VEC_edge_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1471 "./gtype-desc.h"
extern void gt_pch_p_12elt_loc_list(void *, void *,  gt_pointer_operator , void *); 
#line 1473 "./gtype-desc.h"
extern void gt_pch_p_17cselib_val_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1475 "./gtype-desc.h"
extern void gt_pch_p_8edge_def(void *, void *,  gt_pointer_operator , void *); 
#line 1477 "./gtype-desc.h"
extern void gt_pch_p_8elt_list(void *, void *,  gt_pointer_operator , void *); 
#line 1479 "./gtype-desc.h"
extern void gt_pch_p_8tree_map(void *, void *,  gt_pointer_operator , void *); 
#line 1481 "./gtype-desc.h"
extern void gt_pch_p_14lang_tree_node(void *, void *,  gt_pointer_operator , void *); 
#line 1483 "./gtype-desc.h"
extern void gt_pch_p_24tree_statement_list_node(void *, void *,  gt_pointer_operator , void *); 
#line 1485 "./gtype-desc.h"
extern void gt_pch_p_9lang_decl(void *, void *,  gt_pointer_operator , void *); 
#line 1487 "./gtype-desc.h"
extern void gt_pch_p_9lang_type(void *, void *,  gt_pointer_operator , void *); 
#line 1489 "./gtype-desc.h"
extern void gt_pch_p_10die_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1491 "./gtype-desc.h"
extern void gt_pch_p_12ptr_info_def(void *, void *,  gt_pointer_operator , void *); 
#line 1493 "./gtype-desc.h"
extern void gt_pch_p_17ssa_use_operand_d(void *, void *,  gt_pointer_operator , void *); 
#line 1495 "./gtype-desc.h"
extern void gt_pch_p_22VEC_constructor_elt_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1497 "./gtype-desc.h"
extern void gt_pch_p_10tree_ann_d(void *, void *,  gt_pointer_operator , void *); 
#line 1499 "./gtype-desc.h"
extern void gt_pch_p_11VEC_tree_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1501 "./gtype-desc.h"
extern void gt_pch_p_13convert_optab(void *, void *,  gt_pointer_operator , void *); 
#line 1503 "./gtype-desc.h"
extern void gt_pch_p_5optab(void *, void *,  gt_pointer_operator , void *); 
#line 1505 "./gtype-desc.h"
extern void gt_pch_p_15basic_block_def(void *, void *,  gt_pointer_operator , void *); 
#line 1507 "./gtype-desc.h"
extern void gt_pch_p_10real_value(void *, void *,  gt_pointer_operator , void *); 
#line 1509 "./gtype-desc.h"
extern void gt_pch_p_9reg_attrs(void *, void *,  gt_pointer_operator , void *); 
#line 1511 "./gtype-desc.h"
extern void gt_pch_p_9mem_attrs(void *, void *,  gt_pointer_operator , void *); 
#line 1513 "./gtype-desc.h"
extern void gt_pch_p_17language_function(void *, void *,  gt_pointer_operator , void *); 
#line 1515 "./gtype-desc.h"
extern void gt_pch_p_9temp_slot(void *, void *,  gt_pointer_operator , void *); 
#line 1517 "./gtype-desc.h"
extern void gt_pch_p_15varray_head_tag(void *, void *,  gt_pointer_operator , void *); 
#line 1519 "./gtype-desc.h"
extern void gt_pch_p_20initial_value_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1521 "./gtype-desc.h"
extern void gt_pch_p_18control_flow_graph(void *, void *,  gt_pointer_operator , void *); 
#line 1523 "./gtype-desc.h"
extern void gt_pch_p_13varasm_status(void *, void *,  gt_pointer_operator , void *); 
#line 1525 "./gtype-desc.h"
extern void gt_pch_p_9eh_status(void *, void *,  gt_pointer_operator , void *); 
#line 1527 "./gtype-desc.h"
extern void gt_pch_p_8function(void *, void *,  gt_pointer_operator , void *); 
#line 1529 "./gtype-desc.h"
extern void gt_pch_p_11expr_status(void *, void *,  gt_pointer_operator , void *); 
#line 1531 "./gtype-desc.h"
extern void gt_pch_p_11emit_status(void *, void *,  gt_pointer_operator , void *); 
#line 1533 "./gtype-desc.h"
extern void gt_pch_p_14sequence_stack(void *, void *,  gt_pointer_operator , void *); 
#line 1535 "./gtype-desc.h"
extern void gt_pch_p_14var_refs_queue(void *, void *,  gt_pointer_operator , void *); 
#line 1537 "./gtype-desc.h"
extern void gt_pch_p_15bitmap_head_def(void *, void *,  gt_pointer_operator , void *); 
#line 1539 "./gtype-desc.h"
extern void gt_pch_p_18bitmap_element_def(void *, void *,  gt_pointer_operator , void *); 
#line 1541 "./gtype-desc.h"
extern void gt_pch_p_14bitmap_obstack(void *, void *,  gt_pointer_operator , void *); 
#line 1543 "./gtype-desc.h"
extern void gt_pch_p_17stack_local_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1545 "./gtype-desc.h"
extern void gt_pch_p_16machine_function(void *, void *,  gt_pointer_operator , void *); 
#line 1547 "./gtype-desc.h"
extern void gt_pch_p_6answer(void *, void *,  gt_pointer_operator , void *); 
#line 1549 "./gtype-desc.h"
extern void gt_pch_p_9cpp_macro(void *, void *,  gt_pointer_operator , void *); 
#line 1551 "./gtype-desc.h"
extern void gt_pch_p_9cpp_token(void *, void *,  gt_pointer_operator , void *); 
#line 1554 "./gtype-desc.h"
extern void gt_pch_p_9rtvec_def(void *, void *,  gt_pointer_operator , void *); 
#line 1556 "./gtype-desc.h"
extern void gt_pch_p_7rtx_def(void *, void *,  gt_pointer_operator , void *); 
#line 1558 "./gtype-desc.h"
extern void gt_pch_p_10location_s(void *, void *,  gt_pointer_operator , void *); 
#line 1560 "./gtype-desc.h"
extern void gt_pch_p_II17splay_tree_node_s(void *, void *,  gt_pointer_operator , void *); 
#line 1562 "./gtype-desc.h"
extern void gt_pch_p_SP9tree_node17splay_tree_node_s(void *, void *,  gt_pointer_operator , void *); 
#line 1564 "./gtype-desc.h"
extern void gt_pch_p_IP9tree_node17splay_tree_node_s(void *, void *,  gt_pointer_operator , void *); 
#line 1566 "./gtype-desc.h"
extern void gt_pch_p_P15interface_tuple4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1568 "./gtype-desc.h"
extern void gt_pch_p_P16volatilized_type4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1570 "./gtype-desc.h"
extern void gt_pch_p_P17string_descriptor4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1572 "./gtype-desc.h"
extern void gt_pch_p_P14type_assertion4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1574 "./gtype-desc.h"
extern void gt_pch_p_P18treetreehash_entry4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1576 "./gtype-desc.h"
extern void gt_pch_p_P21pending_abstract_type4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1578 "./gtype-desc.h"
extern void gt_pch_p_IP9tree_node12splay_tree_s(void *, void *,  gt_pointer_operator , void *); 
#line 1580 "./gtype-desc.h"
extern void gt_pch_p_P11var_map_elt4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1582 "./gtype-desc.h"
extern void gt_pch_p_P12int_tree_map4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1584 "./gtype-desc.h"
extern void gt_pch_p_P23constant_descriptor_rtx4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1586 "./gtype-desc.h"
extern void gt_pch_p_P24constant_descriptor_tree4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1588 "./gtype-desc.h"
extern void gt_pch_p_P14in_named_entry4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1590 "./gtype-desc.h"
extern void gt_pch_p_P12tree_int_map4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1592 "./gtype-desc.h"
extern void gt_pch_p_P8tree_map4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1594 "./gtype-desc.h"
extern void gt_pch_p_P9type_hash4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1596 "./gtype-desc.h"
extern void gt_pch_p_P13ehl_map_entry4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1598 "./gtype-desc.h"
extern void gt_pch_p_P15throw_stmt_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1600 "./gtype-desc.h"
extern void gt_pch_p_P9tree_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1602 "./gtype-desc.h"
extern void gt_pch_p_P9reg_attrs4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1604 "./gtype-desc.h"
extern void gt_pch_p_P9mem_attrs4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1606 "./gtype-desc.h"
extern void gt_pch_p_P7rtx_def4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1608 "./gtype-desc.h"
extern void gt_pch_p_SP9tree_node12splay_tree_s(void *, void *,  gt_pointer_operator , void *); 
#line 1610 "./gtype-desc.h"
extern void gt_pch_p_P16var_loc_list_def4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1612 "./gtype-desc.h"
extern void gt_pch_p_P10die_struct4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1614 "./gtype-desc.h"
extern void gt_pch_p_P20indirect_string_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1616 "./gtype-desc.h"
extern void gt_pch_p_P19cgraph_varpool_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1618 "./gtype-desc.h"
extern void gt_pch_p_P11cgraph_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1620 "./gtype-desc.h"
extern void gt_pch_p_P15alias_set_entry15varray_head_tag(void *, void *,  gt_pointer_operator , void *); 
#line 1622 "./gtype-desc.h"
extern void gt_pch_p_II12splay_tree_s(void *, void *,  gt_pointer_operator , void *); 
#line 1624 "./gtype-desc.h"
extern void gt_pch_p_P9temp_slot15varray_head_tag(void *, void *,  gt_pointer_operator , void *); 
#line 46 "../.././gcc/ggc.h"
typedef void (*gt_note_pointers)(void *, void *,  gt_pointer_operator , void *); 
#line 54 "../.././gcc/ggc.h"
typedef void (*gt_handle_reorder)(void *, void *,  gt_pointer_operator , void *); 
#line 58 "../.././gcc/ggc.h"
extern int gt_pch_note_object(void *, void *,  gt_note_pointers , enum gt_types_enum ); 
#line 62 "../.././gcc/ggc.h"
extern void gt_pch_note_reorder(void *, void *,  gt_handle_reorder ); 
#line 65 "../.././gcc/ggc.h"
typedef void (*gt_pointer_walker)(void *); 
#line 75 "../.././gcc/ggc.h"
struct ggc_root_tab {void *base;  size_t nelt;  size_t stride;  gt_pointer_walker cb;  gt_pointer_walker pchw; }; 
#line 78 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_ggc_rtab[]; 
#line 79 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_ggc_deletable_rtab[]; 
#line 80 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_pch_cache_rtab[]; 
#line 81 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_pch_scalar_rtab[]; 
#line 84 "../.././gcc/ggc.h"
struct htab ; 
#line 92 "../.././gcc/ggc.h"
struct ggc_cache_tab {struct htab **base;  size_t nelt;  size_t stride;  gt_pointer_walker cb;  gt_pointer_walker pchw; int (*marked_p)(const void *); }; 
#line 95 "../.././gcc/ggc.h"
extern const struct ggc_cache_tab *const gt_ggc_cache_rtab[]; 
# 41 "../.././gcc/ggc.h" 2
# 114 "../.././gcc/ggc.h" 
extern int ggc_set_mark(const void *); 
#line 119 "../.././gcc/ggc.h"
extern int ggc_marked_p(const void *); 
#line 122 "../.././gcc/ggc.h"
extern void ggc_mark_stringpool(void ); 
#line 126 "../.././gcc/ggc.h"
extern void ggc_mark_roots(void ); 
#line 130 "../.././gcc/ggc.h"
extern void gt_pch_save_stringpool(void ); 
#line 131 "../.././gcc/ggc.h"
extern void gt_pch_fixup_stringpool(void ); 
#line 132 "../.././gcc/ggc.h"
extern void gt_pch_restore_stringpool(void ); 
#line 136 "../.././gcc/ggc.h"
extern void gt_pch_p_S(void *, void *,  gt_pointer_operator , void *); 
#line 137 "../.././gcc/ggc.h"
extern void gt_pch_n_S(const void *); 
#line 138 "../.././gcc/ggc.h"
extern void gt_ggc_m_S(void *); 
#line 141 "../.././gcc/ggc.h"
extern void init_stringpool(void ); 
#line 147 "../.././gcc/ggc.h"
struct alloc_zone ; 
#line 150 "../.././gcc/ggc.h"
extern void init_ggc(void ); 
#line 153 "../.././gcc/ggc.h"
extern struct alloc_zone *new_ggc_zone(const char *); 
#line 156 "../.././gcc/ggc.h"
extern void destroy_ggc_zone(struct alloc_zone *); 
#line 158 "../.././gcc/ggc.h"
struct ggc_pch_data ; 
#line 161 "../.././gcc/ggc.h"
extern struct ggc_pch_data *init_ggc_pch(void ); 
#line 168 "../.././gcc/ggc.h"
extern void ggc_pch_count_object(struct ggc_pch_data *, void *,  size_t , unsigned char , enum gt_types_enum ); 
#line 172 "../.././gcc/ggc.h"
extern  size_t ggc_pch_total_size(struct ggc_pch_data *); 
#line 176 "../.././gcc/ggc.h"
extern void ggc_pch_this_base(struct ggc_pch_data *, void *); 
#line 182 "../.././gcc/ggc.h"
extern char *ggc_pch_alloc_object(struct ggc_pch_data *, void *,  size_t , unsigned char , enum gt_types_enum ); 
#line 185 "../.././gcc/ggc.h"
extern void ggc_pch_prepare_write(struct ggc_pch_data *,  FILE *); 
#line 189 "../.././gcc/ggc.h"
extern void ggc_pch_write_object(struct ggc_pch_data *,  FILE *, void *, void *,  size_t , unsigned char ); 
#line 192 "../.././gcc/ggc.h"
extern void ggc_pch_finish(struct ggc_pch_data *,  FILE *); 
#line 196 "../.././gcc/ggc.h"
extern void ggc_pch_read( FILE *, void *); 
#line 202 "../.././gcc/ggc.h"
extern unsigned char ggc_force_collect; 
#line 205 "../.././gcc/ggc.h"
extern void *ggc_alloc_stat( size_t ); 
#line 208 "../.././gcc/ggc.h"
extern void *ggc_alloc_typed_stat(enum gt_types_enum ,  size_t ); 
#line 211 "../.././gcc/ggc.h"
extern void *ggc_alloc_cleared_stat( size_t ); 
#line 214 "../.././gcc/ggc.h"
extern void *ggc_realloc_stat(void *,  size_t ); 
#line 217 "../.././gcc/ggc.h"
extern void *ggc_calloc( size_t ,  size_t ); 
#line 219 "../.././gcc/ggc.h"
extern void ggc_free(void *); 
#line 221 "../.././gcc/ggc.h"
extern void ggc_record_overhead( size_t ,  size_t , void *); 
#line 222 "../.././gcc/ggc.h"
extern void ggc_free_overhead(void *); 
#line 223 "../.././gcc/ggc.h"
extern void ggc_prune_overhead_list(void ); 
#line 225 "../.././gcc/ggc.h"
extern void dump_ggc_loc_statistics(void ); 
#line 248 "../.././gcc/ggc.h"
extern void *ggc_splay_alloc(int , void *); 
#line 249 "../.././gcc/ggc.h"
extern void ggc_splay_dont_free(void *, void *); 
#line 254 "../.././gcc/ggc.h"
extern const char *ggc_alloc_string(const char *contents, int length); 
#line 261 "../.././gcc/ggc.h"
extern void ggc_collect(void ); 
#line 264 "../.././gcc/ggc.h"
extern  size_t ggc_get_size(const void *); 
#line 267 "../.././gcc/ggc.h"
extern void gt_pch_save( FILE *f); 
#line 270 "../.././gcc/ggc.h"
extern void gt_pch_restore( FILE *f); 
#line 280 "../.././gcc/ggc.h"
typedef struct ggc_statistics {int unused; }ggc_statistics; 
#line 284 "../.././gcc/ggc.h"
extern void ggc_print_common_statistics( FILE *,  ggc_statistics *); 
#line 287 "../.././gcc/ggc.h"
extern void ggc_print_statistics(void ); 
#line 288 "../.././gcc/ggc.h"
extern void stringpool_statistics(void ); 
#line 291 "../.././gcc/ggc.h"
extern int ggc_min_expand_heuristic(void ); 
#line 292 "../.././gcc/ggc.h"
extern int ggc_min_heapsize_heuristic(void ); 
#line 293 "../.././gcc/ggc.h"
extern void init_ggc_heuristics(void ); 
# 248 "../.././gcc/ggc.h" 
# 27 "../.././gcc/cp/cp-tree.h" 2
# 1 "../.././gcc/function.h" 1
# 31 "../.././gcc/function.h" 
struct var_refs_queue { rtx modified; enum machine_mode promoted_mode; int unsignedp; struct var_refs_queue *next; }; 
#line 44 "../.././gcc/function.h"
struct sequence_stack { rtx first;  rtx last; struct sequence_stack *next; }; 
#line 46 "../.././gcc/function.h"
extern struct sequence_stack *sequence_stack; 
#line 54 "../.././gcc/function.h"
struct simple_obstack_stack {struct obstack *obstack; struct simple_obstack_stack *next; }; 
#line 102 "../.././gcc/function.h"
struct emit_status {int x_reg_rtx_no; int x_first_label_num;  rtx x_first_insn;  rtx x_last_insn; struct sequence_stack *sequence_stack; int x_cur_insn_uid;  location_t x_last_location; int regno_pointer_align_length; unsigned char *regno_pointer_align;  rtx *x_regno_reg_rtx; }; 
# 111 "../.././gcc/function.h" 
# 150 "../.././gcc/function.h" 
struct expr_status {int x_pending_stack_adjust; int x_inhibit_defer_pop; int x_stack_pointer_delta;  rtx x_saveregs_value;  rtx x_apply_args_value;  rtx x_forced_labels; }; 
# 162 "../.././gcc/function.h" 
# 464 "../.././gcc/function.h" 
struct function {struct eh_status *eh; struct eh_status *saved_eh; struct expr_status *expr; struct emit_status *emit; struct varasm_status *varasm; struct control_flow_graph *cfg; struct control_flow_graph *saved_cfg; unsigned char after_inlining;  tree saved_args;  tree saved_static_chain_decl;  tree saved_blocks;  tree saved_unexpanded_var_list;  tree decl; struct function *outer; int pops_args; int args_size; int pretend_args_size; int outgoing_args_size;  rtx arg_offset_rtx;  CUMULATIVE_ARGS args_info;  rtx return_rtx;  rtx internal_arg_pointer; struct initial_value_struct *hard_reg_initial_vals;  rtx x_nonlocal_goto_handler_labels;  rtx x_return_label;  rtx x_naked_return_label;  rtx x_stack_slot_list;  rtx x_tail_recursion_reentry;  rtx x_arg_pointer_save_area; long x_frame_offset;  tree static_chain_decl;  tree nonlocal_goto_save_area;  rtx x_parm_birth_insn; struct varray_head_tag *x_used_temp_slots; struct temp_slot *x_avail_temp_slots; int x_temp_slot_level; struct var_refs_queue *fixup_var_refs_queue; int inlinable; int no_debugging_symbols;  rtvec original_arg_vector;  tree original_decl_initial; int inl_max_label_num; int funcdef_no; int max_loop_depth; struct machine_function *machine; unsigned int stack_alignment_needed; unsigned int preferred_stack_boundary; unsigned char recursive_call_emit; unsigned char tail_call_emit; struct language_function *language;  rtx epilogue_delay_list; enum function_frequency {FUNCTION_FREQUENCY_UNLIKELY_EXECUTED,FUNCTION_FREQUENCY_NORMAL,FUNCTION_FREQUENCY_HOT}function_frequency; int max_jumptable_ents; int last_label_uid;  location_t function_end_locus; struct varray_head_tag *ib_boundaries_block;  tree unexpanded_var_list; const char *hot_section_label; const char *cold_section_label; const char *hot_section_end_label; const char *cold_section_end_label; const char *unlikely_text_section_name;  tree stack_protect_guard; unsigned int returns_struct:1; unsigned int returns_pcc_struct:1; unsigned int returns_pointer:1; unsigned int calls_setjmp:1; unsigned int calls_alloca:1; unsigned int accesses_prior_frames:1; unsigned int calls_eh_return:1; unsigned int has_nonlocal_label:1; unsigned int has_nonlocal_goto:1; unsigned int is_thunk:1; unsigned int all_throwers_are_sibcalls:1; unsigned int profile:1; unsigned int limit_stack:1; unsigned int stdarg:1; unsigned int x_dont_save_pending_sizes_p:1; unsigned int uses_const_pool:1; unsigned int uses_pic_offset_table:1; unsigned int uses_eh_lsda:1; unsigned int arg_pointer_save_area_init:1; unsigned int va_list_gpr_size:8; unsigned int va_list_fpr_size:8; }; 
#line 472 "../.././gcc/function.h"
extern struct function *cfun; 
#line 475 "../.././gcc/function.h"
extern struct function *outer_function_chain; 
#line 478 "../.././gcc/function.h"
extern int virtuals_instantiated; 
#line 481 "../.././gcc/function.h"
extern int trampolines_created; 
#line 524 "../.././gcc/function.h"
struct function *find_function_data( tree ); 
#line 528 "../.././gcc/function.h"
extern void reorder_blocks(void ); 
#line 531 "../.././gcc/function.h"
extern void number_blocks( tree ); 
#line 533 "../.././gcc/function.h"
extern void clear_block_marks( tree ); 
#line 534 "../.././gcc/function.h"
extern  tree blocks_nreverse( tree ); 
#line 535 "../.././gcc/function.h"
extern void reset_block_changes(void ); 
#line 536 "../.././gcc/function.h"
extern void record_block_change( tree ); 
#line 537 "../.././gcc/function.h"
extern void finalize_block_changes(void ); 
#line 538 "../.././gcc/function.h"
extern void check_block_change( rtx ,  tree *); 
#line 539 "../.././gcc/function.h"
extern void free_block_changes(void ); 
#line 544 "../.././gcc/function.h"
extern long get_frame_size(void ); 
#line 548 "../.././gcc/function.h"
extern struct machine_function *(*init_machine_status)(void ); 
#line 551 "../.././gcc/function.h"
extern void free_after_parsing(struct function *); 
#line 552 "../.././gcc/function.h"
extern void free_after_compilation(struct function *); 
#line 554 "../.././gcc/function.h"
extern void init_varasm_status(struct function *); 
#line 562 "../.././gcc/function.h"
extern  rtx get_arg_pointer_save_area(struct function *); 
#line 564 "../.././gcc/function.h"
extern void init_virtual_regs(struct emit_status *); 
#line 565 "../.././gcc/function.h"
extern void instantiate_virtual_regs(void ); 
#line 568 "../.././gcc/function.h"
extern const char *current_function_name(void ); 
#line 570 "../.././gcc/function.h"
extern void do_warn_unused_parameter( tree ); 
#line 573 "../.././gcc/function.h"
extern unsigned char pass_by_reference( CUMULATIVE_ARGS *, enum machine_mode ,  tree , unsigned char ); 
#line 575 "../.././gcc/function.h"
extern unsigned char reference_callee_copied( CUMULATIVE_ARGS *, enum machine_mode ,  tree , unsigned char ); 
# 524 "../.././gcc/function.h" 
# 28 "../.././gcc/cp/cp-tree.h" 2
# 1 "../.././gcc/../include/hashtab.h" 1
# 46 "../.././gcc/../include/hashtab.h" 
typedef unsigned int hashval_t; 
#line 51 "../.././gcc/../include/hashtab.h"
typedef  hashval_t (*htab_hash)(const void *); 
#line 58 "../.././gcc/../include/hashtab.h"
typedef int (*htab_eq)(const void *, const void *); 
#line 62 "../.././gcc/../include/hashtab.h"
typedef void (*htab_del)(void *); 
#line 68 "../.././gcc/../include/hashtab.h"
typedef int (*htab_trav)(void **, void *); 
#line 74 "../.././gcc/../include/hashtab.h"
typedef void *(*htab_alloc)( size_t ,  size_t ); 
#line 77 "../.././gcc/../include/hashtab.h"
typedef void (*htab_free)(void *); 
#line 81 "../.././gcc/../include/hashtab.h"
typedef void *(*htab_alloc_with_arg)(void *,  size_t ,  size_t ); 
#line 82 "../.././gcc/../include/hashtab.h"
typedef void (*htab_free_with_arg)(void *, void *); 
#line 142 "../.././gcc/../include/hashtab.h"
struct htab { htab_hash hash_f;  htab_eq eq_f;  htab_del del_f; void **entries;  size_t size;  size_t n_elements;  size_t n_deleted; unsigned int searches; unsigned int collisions;  htab_alloc alloc_f;  htab_free free_f; void *alloc_arg;  htab_alloc_with_arg alloc_with_arg_f;  htab_free_with_arg free_with_arg_f; unsigned int size_prime_index; }; 
#line 144 "../.././gcc/../include/hashtab.h"
typedef struct htab *htab_t; 
#line 147 "../.././gcc/../include/hashtab.h"
enum insert_option {NO_INSERT,INSERT}; 
#line 153 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_create_alloc( size_t ,  htab_hash ,  htab_eq ,  htab_del ,  htab_alloc ,  htab_free ); 
#line 158 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_create_alloc_ex( size_t ,  htab_hash ,  htab_eq ,  htab_del , void *,  htab_alloc_with_arg ,  htab_free_with_arg ); 
#line 161 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_create( size_t ,  htab_hash ,  htab_eq ,  htab_del ); 
#line 162 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_try_create( size_t ,  htab_hash ,  htab_eq ,  htab_del ); 
#line 167 "../.././gcc/../include/hashtab.h"
extern void htab_set_functions_ex( htab_t ,  htab_hash ,  htab_eq ,  htab_del , void *,  htab_alloc_with_arg ,  htab_free_with_arg ); 
#line 169 "../.././gcc/../include/hashtab.h"
extern void htab_delete( htab_t ); 
#line 170 "../.././gcc/../include/hashtab.h"
extern void htab_empty( htab_t ); 
#line 172 "../.././gcc/../include/hashtab.h"
extern void *htab_find( htab_t , const void *); 
#line 173 "../.././gcc/../include/hashtab.h"
extern void **htab_find_slot( htab_t , const void *, enum insert_option ); 
#line 174 "../.././gcc/../include/hashtab.h"
extern void *htab_find_with_hash( htab_t , const void *,  hashval_t ); 
#line 176 "../.././gcc/../include/hashtab.h"
extern void **htab_find_slot_with_hash( htab_t , const void *,  hashval_t , enum insert_option ); 
#line 177 "../.././gcc/../include/hashtab.h"
extern void htab_clear_slot( htab_t , void **); 
#line 178 "../.././gcc/../include/hashtab.h"
extern void htab_remove_elt( htab_t , void *); 
#line 179 "../.././gcc/../include/hashtab.h"
extern void htab_remove_elt_with_hash( htab_t , void *,  hashval_t ); 
#line 181 "../.././gcc/../include/hashtab.h"
extern void htab_traverse( htab_t ,  htab_trav , void *); 
#line 182 "../.././gcc/../include/hashtab.h"
extern void htab_traverse_noresize( htab_t ,  htab_trav , void *); 
#line 184 "../.././gcc/../include/hashtab.h"
extern  size_t htab_size( htab_t ); 
#line 185 "../.././gcc/../include/hashtab.h"
extern  size_t htab_elements( htab_t ); 
#line 186 "../.././gcc/../include/hashtab.h"
extern double htab_collisions( htab_t ); 
#line 189 "../.././gcc/../include/hashtab.h"
extern  htab_hash htab_hash_pointer; 
#line 192 "../.././gcc/../include/hashtab.h"
extern  htab_eq htab_eq_pointer; 
#line 195 "../.././gcc/../include/hashtab.h"
extern  hashval_t htab_hash_string(const void *); 
#line 198 "../.././gcc/../include/hashtab.h"
extern  hashval_t iterative_hash(const void *,  size_t ,  hashval_t ); 
# 99 "../.././gcc/../include/hashtab.h" 
# 29 "../.././gcc/cp/cp-tree.h" 2
# 1 "../.././gcc/../include/splay-tree.h" 1
# 47 "../.././gcc/../include/splay-tree.h" 
typedef unsigned long int splay_tree_key; 
#line 48 "../.././gcc/../include/splay-tree.h"
typedef unsigned long int splay_tree_value; 
#line 51 "../.././gcc/../include/splay-tree.h"
typedef struct splay_tree_node_s *splay_tree_node; 
#line 55 "../.././gcc/../include/splay-tree.h"
typedef int (*splay_tree_compare_fn)( splay_tree_key ,  splay_tree_key ); 
#line 59 "../.././gcc/../include/splay-tree.h"
typedef void (*splay_tree_delete_key_fn)( splay_tree_key ); 
#line 63 "../.././gcc/../include/splay-tree.h"
typedef void (*splay_tree_delete_value_fn)( splay_tree_value ); 
#line 66 "../.././gcc/../include/splay-tree.h"
typedef int (*splay_tree_foreach_fn)( splay_tree_node , void *); 
#line 72 "../.././gcc/../include/splay-tree.h"
typedef void *(*splay_tree_allocate_fn)(int , void *); 
#line 78 "../.././gcc/../include/splay-tree.h"
typedef void (*splay_tree_deallocate_fn)(void *, void *); 
#line 92 "../.././gcc/../include/splay-tree.h"
struct splay_tree_node_s { splay_tree_key key;  splay_tree_value value;  splay_tree_node left;  splay_tree_node right; }; 
#line 114 "../.././gcc/../include/splay-tree.h"
struct splay_tree_s { splay_tree_node root;  splay_tree_compare_fn comp;  splay_tree_delete_key_fn delete_key;  splay_tree_delete_value_fn delete_value;  splay_tree_allocate_fn allocate;  splay_tree_deallocate_fn deallocate; void *allocate_data; }; 
#line 115 "../.././gcc/../include/splay-tree.h"
typedef struct splay_tree_s *splay_tree; 
#line 119 "../.././gcc/../include/splay-tree.h"
extern  splay_tree splay_tree_new( splay_tree_compare_fn ,  splay_tree_delete_key_fn ,  splay_tree_delete_value_fn ); 
#line 125 "../.././gcc/../include/splay-tree.h"
extern  splay_tree splay_tree_new_with_allocator( splay_tree_compare_fn ,  splay_tree_delete_key_fn ,  splay_tree_delete_value_fn ,  splay_tree_allocate_fn ,  splay_tree_deallocate_fn , void *); 
#line 126 "../.././gcc/../include/splay-tree.h"
extern void splay_tree_delete( splay_tree ); 
#line 129 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_insert( splay_tree ,  splay_tree_key ,  splay_tree_value ); 
#line 130 "../.././gcc/../include/splay-tree.h"
extern void splay_tree_remove( splay_tree ,  splay_tree_key ); 
#line 131 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_lookup( splay_tree ,  splay_tree_key ); 
#line 132 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_predecessor( splay_tree ,  splay_tree_key ); 
#line 133 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_successor( splay_tree ,  splay_tree_key ); 
#line 134 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_max( splay_tree ); 
#line 135 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_min( splay_tree ); 
#line 136 "../.././gcc/../include/splay-tree.h"
extern int splay_tree_foreach( splay_tree ,  splay_tree_foreach_fn , void *); 
#line 137 "../.././gcc/../include/splay-tree.h"
extern int splay_tree_compare_ints( splay_tree_key ,  splay_tree_key ); 
#line 138 "../.././gcc/../include/splay-tree.h"
extern int splay_tree_compare_pointers( splay_tree_key ,  splay_tree_key ); 
# 30 "../.././gcc/cp/cp-tree.h" 2
# 1 "../.././gcc/vec.h" 1
# 31 "../.././gcc/cp/cp-tree.h" 2
# 1 "../.././gcc/varray.h" 1
# 63 "../.././gcc/varray.h" 
enum varray_data_enum {VARRAY_DATA_C,VARRAY_DATA_UC,VARRAY_DATA_S,VARRAY_DATA_US,VARRAY_DATA_I,VARRAY_DATA_U,VARRAY_DATA_L,VARRAY_DATA_UL,VARRAY_DATA_HINT,VARRAY_DATA_UHINT,VARRAY_DATA_GENERIC,VARRAY_DATA_GENERIC_NOGC,VARRAY_DATA_CPTR,VARRAY_DATA_RTX,VARRAY_DATA_RTVEC,VARRAY_DATA_TREE,VARRAY_DATA_BITMAP,VARRAY_DATA_REG,VARRAY_DATA_BB,VARRAY_DATA_TE,VARRAY_DATA_EDGE,VARRAY_DATA_TREE_PTR,NUM_VARRAY_DATA}; 
#line 111 "../.././gcc/varray.h"
typedef union varray_data_tag {char c[1]; unsigned char uc[1]; short s[1]; unsigned short us[1]; int i[1]; unsigned int u[1]; long l[1]; unsigned long ul[1]; long hint[1]; unsigned long uhint[1]; void *generic[1]; void *generic_nogc[1]; char *cptr[1];  rtx rtx[1];  rtvec rtvec[1];  tree tree[1]; struct bitmap_head_def *bitmap[1]; struct reg_info_def *reg[1]; struct basic_block_def *bb[1]; struct elt_list *te[1]; struct edge_def *e[1];  tree *tp[1]; }varray_data; 
#line 122 "../.././gcc/varray.h"
struct varray_head_tag { size_t num_elements;  size_t elements_used; enum varray_data_enum type; const char *name;  varray_data data; }; 
#line 123 "../.././gcc/varray.h"
typedef struct varray_head_tag *varray_type; 
#line 127 "../.././gcc/varray.h"
extern  varray_type varray_init( size_t , enum varray_data_enum , const char *); 
#line 201 "../.././gcc/varray.h"
extern  varray_type varray_grow( varray_type ,  size_t ); 
# 201 "../.././gcc/varray.h" 
# 212 "../.././gcc/varray.h" 
extern void varray_clear( varray_type ); 
#line 213 "../.././gcc/varray.h"
extern void dump_varray_statistics(void ); 
# 32 "../.././gcc/cp/cp-tree.h" 2
# 1 "../.././gcc/c-common.h" 1
# 25 "../.././gcc/c-common.h" 
# 1 "../.././gcc/../include/splay-tree.h" 1
# 26 "../.././gcc/c-common.h" 2
# 1 "../.././gcc/../libcpp/include/cpplib.h" 1
# 28 "../.././gcc/../libcpp/include/cpplib.h" 
# 1 "../.././gcc/../libcpp/include/symtab.h" 1
# 29 "../.././gcc/../libcpp/include/cpplib.h" 2
# 1 "../.././gcc/../libcpp/include/line-map.h" 1
# 35 "../.././gcc/../libcpp/include/cpplib.h" 2
typedef struct cpp_reader cpp_reader; 
#line 36 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_buffer cpp_buffer; 
#line 37 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_options cpp_options; 
#line 38 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_token cpp_token; 
#line 39 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_string cpp_string; 
#line 40 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_hashnode cpp_hashnode; 
#line 41 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_macro cpp_macro; 
#line 42 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_callbacks cpp_callbacks; 
#line 43 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_dir cpp_dir; 
#line 45 "../.././gcc/../libcpp/include/cpplib.h"
struct answer ; 
#line 46 "../.././gcc/../libcpp/include/cpplib.h"
struct _cpp_file ; 
#line 152 "../.././gcc/../libcpp/include/cpplib.h"
enum cpp_ttype {CPP_EQ,CPP_NOT,CPP_GREATER,CPP_LESS,CPP_PLUS,CPP_MINUS,CPP_MULT,CPP_DIV,CPP_MOD,CPP_AND,CPP_OR,CPP_XOR,CPP_RSHIFT,CPP_LSHIFT,CPP_MIN,CPP_MAX,CPP_COMPL,CPP_AND_AND,CPP_OR_OR,CPP_QUERY,CPP_COLON,CPP_COMMA,CPP_OPEN_PAREN,CPP_CLOSE_PAREN,CPP_EOF,CPP_EQ_EQ,CPP_NOT_EQ,CPP_GREATER_EQ,CPP_LESS_EQ,CPP_PLUS_EQ,CPP_MINUS_EQ,CPP_MULT_EQ,CPP_DIV_EQ,CPP_MOD_EQ,CPP_AND_EQ,CPP_OR_EQ,CPP_XOR_EQ,CPP_RSHIFT_EQ,CPP_LSHIFT_EQ,CPP_MIN_EQ,CPP_MAX_EQ,CPP_HASH,CPP_PASTE,CPP_OPEN_SQUARE,CPP_CLOSE_SQUARE,CPP_OPEN_BRACE,CPP_CLOSE_BRACE,CPP_SEMICOLON,CPP_ELLIPSIS,CPP_PLUS_PLUS,CPP_MINUS_MINUS,CPP_DEREF,CPP_DOT,CPP_SCOPE,CPP_DEREF_STAR,CPP_DOT_STAR,CPP_ATSIGN,CPP_NAME,CPP_AT_NAME,CPP_NUMBER,CPP_CHAR,CPP_WCHAR,CPP_OTHER,CPP_STRING,CPP_WSTRING,CPP_OBJC_STRING,CPP_HEADER_NAME,CPP_COMMENT,CPP_MACRO_ARG,CPP_PRAGMA,CPP_PADDING,N_TTYPES,CPP_LAST_EQ=CPP_MAX,CPP_FIRST_DIGRAPH=CPP_HASH,CPP_LAST_PUNCTUATOR=CPP_DOT_STAR,CPP_LAST_CPP_OP=CPP_LESS_EQ}; 
#line 158 "../.././gcc/../libcpp/include/cpplib.h"
enum c_lang {CLK_GNUC89=0,CLK_GNUC99,CLK_STDC89,CLK_STDC94,CLK_STDC99,CLK_GNUCXX,CLK_CXX98,CLK_ASM}; 
#line 165 "../.././gcc/../libcpp/include/cpplib.h"
struct cpp_string {unsigned int len; const unsigned char *text; }; 
# 142 "../.././gcc/../libcpp/include/cpplib.h" 
# 184 "../.././gcc/../libcpp/include/cpplib.h" 
enum cpp_token_fld_kind {CPP_TOKEN_FLD_NODE,CPP_TOKEN_FLD_SOURCE,CPP_TOKEN_FLD_STR,CPP_TOKEN_FLD_ARG_NO,CPP_TOKEN_FLD_NONE}; 
#line 213 "../.././gcc/../libcpp/include/cpplib.h"
struct cpp_token { source_location src_loc;  __extension__ enum cpp_ttype type:8; unsigned char flags; union cpp_token_u { cpp_hashnode *node;  cpp_token *source; struct cpp_string str; unsigned int arg_no; }val; }; 
#line 216 "../.././gcc/../libcpp/include/cpplib.h"
extern enum cpp_token_fld_kind cpp_token_val_index( cpp_token *tok); 
#line 233 "../.././gcc/../libcpp/include/cpplib.h"
typedef unsigned int cppchar_t; 
#line 234 "../.././gcc/../libcpp/include/cpplib.h"
typedef int cppchar_signed_t; 
#line 237 "../.././gcc/../libcpp/include/cpplib.h"
enum cpp_deps_style {DEPS_NONE=0,DEPS_USER,DEPS_SYSTEM}; 
#line 250 "../.././gcc/../libcpp/include/cpplib.h"
enum cpp_normalize_level {normalized_KC=0,normalized_C,normalized_identifier_C,normalized_none}; 
#line 441 "../.././gcc/../libcpp/include/cpplib.h"
struct cpp_options {unsigned int tabstop; enum c_lang lang; unsigned char cplusplus; unsigned char cplusplus_comments; unsigned char objc; unsigned char discard_comments; unsigned char discard_comments_in_macro_exp; unsigned char trigraphs; unsigned char digraphs; unsigned char extended_numbers; unsigned char print_include_names; unsigned char pedantic_errors; unsigned char inhibit_warnings; unsigned char warn_deprecated; unsigned char warn_system_headers; unsigned char inhibit_errors; unsigned char warn_comments; unsigned char warn_missing_include_dirs; unsigned char warn_trigraphs; unsigned char warn_multichar; unsigned char warn_traditional; unsigned char warn_long_long; unsigned char warn_endif_labels; unsigned char warn_num_sign_change; unsigned char warn_variadic_macros; unsigned char warnings_are_errors; unsigned char remap; unsigned char dollars_in_ident; unsigned char extended_identifiers; unsigned char warn_dollars; unsigned char warn_undef; unsigned char warn_unused_macros; unsigned char c99; unsigned char std; unsigned char pedantic; unsigned char preprocessed; unsigned char show_column; unsigned char operator_names; unsigned char traditional; const char *narrow_charset; const char *wide_charset; const char *input_charset; enum cpp_normalize_level warn_normalize; unsigned char warn_invalid_pch; unsigned char restore_pch_deps; struct {enum cpp_deps_style style; unsigned char missing_files; unsigned char phony_targets; unsigned char ignore_main_file; }deps;  size_t precision,char_precision,int_precision,wchar_precision; unsigned char unsigned_char,unsigned_wchar; unsigned char bytes_big_endian; unsigned char stdc_0_in_system_headers; unsigned char defer_pragmas; unsigned char client_diagnostic; }; 
#line 449 "../.././gcc/../libcpp/include/cpplib.h"
typedef const char *(*missing_header_cb)( cpp_reader *, const char *header,  cpp_dir **); 
#line 478 "../.././gcc/../libcpp/include/cpplib.h"
struct cpp_callbacks {void (*line_change)( cpp_reader *, const  cpp_token *, int ); void (*file_change)( cpp_reader *, const struct line_map *); void (*dir_change)( cpp_reader *, const char *); void (*include)( cpp_reader *, unsigned int , const unsigned char *, const char *, int , const  cpp_token **); void (*define)( cpp_reader *, unsigned int ,  cpp_hashnode *); void (*undef)( cpp_reader *, unsigned int ,  cpp_hashnode *); void (*ident)( cpp_reader *, unsigned int , const  cpp_string *); void (*def_pragma)( cpp_reader *, unsigned int ); int (*valid_pch)( cpp_reader *, const char *, int ); void (*read_pch)( cpp_reader *, const char *, int , const char *);  missing_header_cb missing_header; void (*error)( cpp_reader *, int , const char *,  va_list *) __attribute__  (( __format__ ( __printf__, 3, 0 )  ))  __attribute__  (( __nonnull__ ( 3 )  )) ; }; 
#line 511 "../.././gcc/../libcpp/include/cpplib.h"
struct cpp_dir {struct cpp_dir *next; char *name; unsigned int len; unsigned char sysp; const char **name_map; char *(*construct)(const char *header,  cpp_dir *dir);  ino_t ino;  dev_t dev; unsigned char user_supplied_p; }; 
#line 514 "../.././gcc/../libcpp/include/cpplib.h"
extern const char *progname; 
# 233 "../.././gcc/../libcpp/include/cpplib.h" 
# 542 "../.././gcc/../libcpp/include/cpplib.h" 
enum node_type {NT_VOID=0,NT_MACRO,NT_ASSERTION}; 
#line 556 "../.././gcc/../libcpp/include/cpplib.h"
enum builtin_type {BT_SPECLINE=0,BT_DATE,BT_FILE,BT_BASE_FILE,BT_INCLUDE_LEVEL,BT_TIME,BT_STDC,BT_PRAGMA}; 
#line 571 "../.././gcc/../libcpp/include/cpplib.h"
enum {NTV_MACRO,NTV_ANSWER,NTV_BUILTIN,NTV_ARGUMENT,NTV_NONE}; 
# 565 "../.././gcc/../libcpp/include/cpplib.h" 
# 594 "../.././gcc/../libcpp/include/cpplib.h" 
union _cpp_hashnode_value { cpp_macro *macro; struct answer *answers; enum builtin_type builtin; unsigned short arg_index; }; 
#line 608 "../.././gcc/../libcpp/include/cpplib.h"
struct cpp_hashnode {struct ht_identifier ident; unsigned int is_directive:1; unsigned int directive_index:7; unsigned char rid_code;  __extension__ enum node_type type:8; unsigned char flags; union _cpp_hashnode_value value; }; 
#line 617 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_reader *cpp_create_reader(enum c_lang , struct ht *, struct line_maps *); 
#line 621 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_set_lang( cpp_reader *, enum c_lang ); 
#line 624 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_set_include_chains( cpp_reader *,  cpp_dir *,  cpp_dir *, int ); 
#line 631 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_options *cpp_get_options( cpp_reader *); 
#line 632 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_callbacks *cpp_get_callbacks( cpp_reader *); 
#line 633 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_set_callbacks( cpp_reader *,  cpp_callbacks *); 
#line 634 "../.././gcc/../libcpp/include/cpplib.h"
extern struct deps *cpp_get_deps( cpp_reader *); 
#line 641 "../.././gcc/../libcpp/include/cpplib.h"
extern const char *cpp_read_main_file( cpp_reader *, const char *); 
#line 644 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_init_builtins( cpp_reader *, int ); 
#line 648 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_post_options( cpp_reader *); 
#line 651 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_init_iconv( cpp_reader *); 
#line 658 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_finish( cpp_reader *,  FILE *deps_stream); 
#line 663 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_destroy( cpp_reader *); 
#line 666 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned int cpp_errors( cpp_reader *); 
#line 668 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned int cpp_token_len(const  cpp_token *); 
#line 669 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned char *cpp_token_as_text( cpp_reader *, const  cpp_token *); 
#line 671 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned char *cpp_spell_token( cpp_reader *, const  cpp_token *, unsigned char *, unsigned char ); 
#line 673 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_register_pragma( cpp_reader *, const char *, const char *, void (*)( cpp_reader *), unsigned char ); 
#line 674 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_handle_deferred_pragma( cpp_reader *, const  cpp_string *); 
#line 676 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_avoid_paste( cpp_reader *, const  cpp_token *, const  cpp_token *); 
#line 677 "../.././gcc/../libcpp/include/cpplib.h"
extern const  cpp_token *cpp_get_token( cpp_reader *); 
#line 679 "../.././gcc/../libcpp/include/cpplib.h"
extern const unsigned char *cpp_macro_definition( cpp_reader *, const  cpp_hashnode *); 
#line 680 "../.././gcc/../libcpp/include/cpplib.h"
extern void _cpp_backup_tokens( cpp_reader *, unsigned int ); 
#line 684 "../.././gcc/../libcpp/include/cpplib.h"
extern  cppchar_t cpp_interpret_charconst( cpp_reader *, const  cpp_token *, unsigned int *, int *); 
#line 688 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned char cpp_interpret_string( cpp_reader *, const  cpp_string *,  size_t ,  cpp_string *, unsigned char ); 
#line 691 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned char cpp_interpret_string_notranslate( cpp_reader *, const  cpp_string *,  size_t ,  cpp_string *, unsigned char ); 
#line 694 "../.././gcc/../libcpp/include/cpplib.h"
extern  cppchar_t cpp_host_to_exec_charset( cpp_reader *,  cppchar_t ); 
#line 698 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_define( cpp_reader *, const char *); 
#line 699 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_assert( cpp_reader *, const char *); 
#line 700 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_undef( cpp_reader *, const char *); 
#line 701 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_unassert( cpp_reader *, const char *); 
#line 704 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_undef_all( cpp_reader *); 
#line 707 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_buffer *cpp_push_buffer( cpp_reader *, const unsigned char *,  size_t , int ); 
#line 708 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_defined( cpp_reader *, const unsigned char *, int ); 
#line 712 "../.././gcc/../libcpp/include/cpplib.h"
typedef unsigned long cpp_num_part; 
#line 713 "../.././gcc/../libcpp/include/cpplib.h"
typedef struct cpp_num cpp_num; 
#line 720 "../.././gcc/../libcpp/include/cpplib.h"
struct cpp_num { cpp_num_part high;  cpp_num_part low; unsigned char unsignedp; unsigned char overflow; }; 
#line 749 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned cpp_classify_number( cpp_reader *, const  cpp_token *); 
#line 753 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_num cpp_interpret_integer( cpp_reader *, const  cpp_token *, unsigned int type); 
#line 757 "../.././gcc/../libcpp/include/cpplib.h"
 cpp_num cpp_num_sign_extend( cpp_num ,  size_t ); 
# 749 "../.././gcc/../libcpp/include/cpplib.h" 
# 782 "../.././gcc/../libcpp/include/cpplib.h" 
extern void cpp_error( cpp_reader *, int , const char *msgid, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 786 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_errno( cpp_reader *, int , const char *msgid); 
#line 792 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_error_with_line( cpp_reader *, int ,  source_location , unsigned , const char *msgid, ...) __attribute__  (( __format__ ( __printf__, 5, 6 )  ))  __attribute__  (( __nonnull__ ( 5 )  )) ; 
#line 795 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_ideq(const  cpp_token *, const char *); 
#line 796 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_output_line( cpp_reader *,  FILE *); 
#line 797 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_output_token(const  cpp_token *,  FILE *); 
#line 798 "../.././gcc/../libcpp/include/cpplib.h"
extern const char *cpp_type2name(enum cpp_ttype ); 
#line 805 "../.././gcc/../libcpp/include/cpplib.h"
extern  cppchar_t cpp_parse_escape( cpp_reader *, const unsigned char **pstr, const unsigned char *limit, int wide); 
#line 812 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_hashnode *cpp_lookup( cpp_reader *, const unsigned char *, unsigned int ); 
#line 814 "../.././gcc/../libcpp/include/cpplib.h"
typedef int (*cpp_cb)( cpp_reader *,  cpp_hashnode *, void *); 
#line 815 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_forall_identifiers( cpp_reader *,  cpp_cb , void *); 
#line 818 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_scan_nooutput( cpp_reader *); 
#line 819 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_sys_macro_p( cpp_reader *); 
#line 821 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned char *cpp_quote_string(unsigned char *, const unsigned char *, unsigned int ); 
#line 824 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned char cpp_included( cpp_reader *, const char *); 
#line 825 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_make_system_header( cpp_reader *, int , int ); 
#line 826 "../.././gcc/../libcpp/include/cpplib.h"
extern unsigned char cpp_push_include( cpp_reader *, const char *); 
#line 827 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_change_file( cpp_reader *, enum lc_reason , const char *); 
#line 828 "../.././gcc/../libcpp/include/cpplib.h"
extern const char *cpp_get_path(struct _cpp_file *); 
#line 829 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_dir *cpp_get_dir(struct _cpp_file *); 
#line 830 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_buffer *cpp_get_buffer( cpp_reader *); 
#line 831 "../.././gcc/../libcpp/include/cpplib.h"
extern struct _cpp_file *cpp_get_file( cpp_buffer *); 
#line 832 "../.././gcc/../libcpp/include/cpplib.h"
extern  cpp_buffer *cpp_get_prev( cpp_buffer *); 
#line 835 "../.././gcc/../libcpp/include/cpplib.h"
struct save_macro_data ; 
#line 836 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_save_state( cpp_reader *,  FILE *); 
#line 837 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_write_pch_deps( cpp_reader *,  FILE *); 
#line 838 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_write_pch_state( cpp_reader *,  FILE *); 
#line 839 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_valid_state( cpp_reader *, const char *, int ); 
#line 840 "../.././gcc/../libcpp/include/cpplib.h"
extern void cpp_prepare_state( cpp_reader *, struct save_macro_data **); 
#line 842 "../.././gcc/../libcpp/include/cpplib.h"
extern int cpp_read_state( cpp_reader *, const char *,  FILE *, struct save_macro_data *); 
# 27 "../.././gcc/c-common.h" 2
# 1 "../.././gcc/ggc.h" 1
# 28 "../.././gcc/c-common.h" 2
# 111 "../.././gcc/c-common.h" 
enum rid {RID_STATIC=0,RID_UNSIGNED,RID_LONG,RID_CONST,RID_EXTERN,RID_REGISTER,RID_TYPEDEF,RID_SHORT,RID_INLINE,RID_VOLATILE,RID_SIGNED,RID_AUTO,RID_RESTRICT,RID_COMPLEX,RID_THREAD,RID_FRIEND,RID_VIRTUAL,RID_EXPLICIT,RID_EXPORT,RID_MUTABLE,RID_IN,RID_OUT,RID_INOUT,RID_BYCOPY,RID_BYREF,RID_ONEWAY,RID_INT,RID_CHAR,RID_FLOAT,RID_DOUBLE,RID_VOID,RID_ENUM,RID_STRUCT,RID_UNION,RID_IF,RID_ELSE,RID_WHILE,RID_DO,RID_FOR,RID_SWITCH,RID_CASE,RID_DEFAULT,RID_BREAK,RID_CONTINUE,RID_RETURN,RID_GOTO,RID_SIZEOF,RID_ASM,RID_TYPEOF,RID_ALIGNOF,RID_ATTRIBUTE,RID_VA_ARG,RID_EXTENSION,RID_IMAGPART,RID_REALPART,RID_LABEL,RID_CHOOSE_EXPR,RID_TYPES_COMPATIBLE_P,RID_FUNCTION_NAME,RID_PRETTY_FUNCTION_NAME,RID_C99_FUNCTION_NAME,RID_BOOL,RID_WCHAR,RID_CLASS,RID_PUBLIC,RID_PRIVATE,RID_PROTECTED,RID_TEMPLATE,RID_NULL,RID_CATCH,RID_DELETE,RID_FALSE,RID_NAMESPACE,RID_NEW,RID_OFFSETOF,RID_OPERATOR,RID_THIS,RID_THROW,RID_TRUE,RID_TRY,RID_TYPENAME,RID_TYPEID,RID_USING,RID_CONSTCAST,RID_DYNCAST,RID_REINTCAST,RID_STATCAST,RID_AT_ENCODE,RID_AT_END,RID_AT_CLASS,RID_AT_ALIAS,RID_AT_DEFS,RID_AT_PRIVATE,RID_AT_PROTECTED,RID_AT_PUBLIC,RID_AT_PROTOCOL,RID_AT_SELECTOR,RID_AT_THROW,RID_AT_TRY,RID_AT_CATCH,RID_AT_FINALLY,RID_AT_SYNCHRONIZED,RID_AT_INTERFACE,RID_AT_IMPLEMENTATION,RID_MAX,RID_FIRST_MODIFIER=RID_STATIC,RID_LAST_MODIFIER=RID_ONEWAY,RID_FIRST_AT=RID_AT_ENCODE,RID_LAST_AT=RID_AT_IMPLEMENTATION,RID_FIRST_PQ=RID_IN,RID_LAST_PQ=RID_ONEWAY}; 
#line 123 "../.././gcc/c-common.h"
extern  tree *ridpointers; 
#line 164 "../.././gcc/c-common.h"
enum c_tree_index {CTI_WCHAR_TYPE,CTI_SIGNED_WCHAR_TYPE,CTI_UNSIGNED_WCHAR_TYPE,CTI_WINT_TYPE,CTI_SIGNED_SIZE_TYPE,CTI_UNSIGNED_PTRDIFF_TYPE,CTI_INTMAX_TYPE,CTI_UINTMAX_TYPE,CTI_WIDEST_INT_LIT_TYPE,CTI_WIDEST_UINT_LIT_TYPE,CTI_CHAR_ARRAY_TYPE,CTI_WCHAR_ARRAY_TYPE,CTI_INT_ARRAY_TYPE,CTI_STRING_TYPE,CTI_CONST_STRING_TYPE,CTI_TRUTHVALUE_TYPE,CTI_TRUTHVALUE_TRUE,CTI_TRUTHVALUE_FALSE,CTI_DEFAULT_FUNCTION_TYPE,CTI_FUNCTION_NAME_DECL,CTI_PRETTY_FUNCTION_NAME_DECL,CTI_C99_FUNCTION_NAME_DECL,CTI_SAVED_FUNCTION_NAME_DECLS,CTI_VOID_ZERO,CTI_NULL,CTI_MAX}; 
#line 174 "../.././gcc/c-common.h"
struct c_common_identifier {struct tree_common common; struct cpp_hashnode node; }; 
# 123 "../.././gcc/c-common.h" 
# 210 "../.././gcc/c-common.h" 
extern  tree c_global_trees[CTI_MAX]; 
#line 218 "../.././gcc/c-common.h"
struct sorted_fields_type {int len;  tree elts[1]; }; 
#line 231 "../.././gcc/c-common.h"
typedef enum c_language_kind {clk_c=0,clk_objc=1,clk_cxx=2,clk_objcxx=3}c_language_kind; 
#line 235 "../.././gcc/c-common.h"
extern  c_language_kind c_language; 
#line 261 "../.././gcc/c-common.h"
struct stmt_tree_s { tree x_cur_stmt_list; int stmts_are_full_exprs_p; }; 
#line 263 "../.././gcc/c-common.h"
typedef struct stmt_tree_s *stmt_tree; 
#line 272 "../.././gcc/c-common.h"
struct c_language_function {struct stmt_tree_s x_stmt_tree; }; 
# 260 "../.././gcc/c-common.h" 
# 284 "../.././gcc/c-common.h" 
extern int (*lang_missing_noreturn_ok_p)( tree ); 
#line 288 "../.././gcc/c-common.h"
extern void (*lang_post_pch_load)(void ); 
#line 290 "../.././gcc/c-common.h"
extern void push_file_scope(void ); 
#line 291 "../.././gcc/c-common.h"
extern void pop_file_scope(void ); 
#line 292 "../.././gcc/c-common.h"
extern int yyparse(void ); 
#line 293 "../.././gcc/c-common.h"
extern  stmt_tree current_stmt_tree(void ); 
#line 294 "../.././gcc/c-common.h"
extern  tree push_stmt_list(void ); 
#line 295 "../.././gcc/c-common.h"
extern  tree pop_stmt_list( tree ); 
#line 296 "../.././gcc/c-common.h"
extern  tree add_stmt( tree ); 
#line 297 "../.././gcc/c-common.h"
extern void push_cleanup( tree ,  tree , unsigned char ); 
#line 299 "../.././gcc/c-common.h"
extern int c_expand_decl( tree ); 
#line 301 "../.././gcc/c-common.h"
extern int field_decl_cmp(const void *, const void *); 
#line 303 "../.././gcc/c-common.h"
extern void resort_sorted_fields(void *, void *,  gt_pointer_operator , void *); 
#line 304 "../.././gcc/c-common.h"
extern unsigned char has_c_linkage( tree decl); 
#line 310 "../.././gcc/c-common.h"
extern int flag_preprocess_only; 
#line 315 "../.././gcc/c-common.h"
extern int flag_nil_receivers; 
#line 319 "../.././gcc/c-common.h"
extern int flag_objc_exceptions; 
#line 322 "../.././gcc/c-common.h"
extern int flag_objc_sjlj_exceptions; 
#line 327 "../.././gcc/c-common.h"
extern int flag_zero_link; 
#line 332 "../.././gcc/c-common.h"
extern int flag_replace_objc_classes; 
#line 336 "../.././gcc/c-common.h"
extern char flag_no_line_commands; 
#line 341 "../.././gcc/c-common.h"
extern char flag_no_output; 
#line 346 "../.././gcc/c-common.h"
extern char flag_dump_macros; 
#line 350 "../.././gcc/c-common.h"
extern char flag_dump_includes; 
#line 354 "../.././gcc/c-common.h"
extern unsigned char flag_pch_preprocess; 
#line 359 "../.././gcc/c-common.h"
extern const char *pch_file; 
#line 364 "../.././gcc/c-common.h"
extern int flag_iso; 
#line 369 "../.././gcc/c-common.h"
extern int flag_undef; 
#line 373 "../.././gcc/c-common.h"
extern int flag_no_builtin; 
#line 378 "../.././gcc/c-common.h"
extern int flag_no_nonansi_builtin; 
#line 382 "../.././gcc/c-common.h"
extern int flag_short_double; 
#line 386 "../.././gcc/c-common.h"
extern int flag_short_wchar; 
#line 389 "../.././gcc/c-common.h"
extern int flag_ms_extensions; 
#line 393 "../.././gcc/c-common.h"
extern int flag_no_asm; 
#line 398 "../.././gcc/c-common.h"
extern int flag_const_strings; 
#line 402 "../.././gcc/c-common.h"
extern int flag_signed_bitfields; 
#line 407 "../.././gcc/c-common.h"
extern int warn_write_strings; 
#line 411 "../.././gcc/c-common.h"
extern int warn_unknown_pragmas; 
#line 416 "../.././gcc/c-common.h"
extern int warn_format; 
#line 425 "../.././gcc/c-common.h"
extern int flag_cond_mismatch; 
#line 429 "../.././gcc/c-common.h"
extern int flag_isoc94; 
#line 433 "../.././gcc/c-common.h"
extern int flag_isoc99; 
#line 437 "../.././gcc/c-common.h"
extern int flag_hosted; 
#line 441 "../.././gcc/c-common.h"
extern int warn_main; 
# 425 "../.././gcc/c-common.h" 
# 450 "../.././gcc/c-common.h" 
extern int flag_gen_declaration; 
#line 456 "../.././gcc/c-common.h"
extern int print_struct_values; 
#line 460 "../.././gcc/c-common.h"
extern const char *constant_string_class_name; 
#line 468 "../.././gcc/c-common.h"
extern int flag_no_gnu_keywords; 
#line 473 "../.././gcc/c-common.h"
extern int flag_implement_inlines; 
#line 477 "../.././gcc/c-common.h"
extern int flag_implicit_templates; 
#line 483 "../.././gcc/c-common.h"
extern int flag_implicit_inline_templates; 
#line 488 "../.././gcc/c-common.h"
extern int flag_use_repository; 
#line 493 "../.././gcc/c-common.h"
extern int flag_optional_diags; 
#line 497 "../.././gcc/c-common.h"
extern int flag_elide_constructors; 
#line 502 "../.././gcc/c-common.h"
extern int flag_default_inline; 
#line 507 "../.././gcc/c-common.h"
extern int flag_rtti; 
#line 514 "../.././gcc/c-common.h"
extern int flag_conserve_space; 
#line 518 "../.././gcc/c-common.h"
extern int flag_access_control; 
#line 523 "../.././gcc/c-common.h"
extern int flag_check_new; 
#line 532 "../.././gcc/c-common.h"
extern int flag_new_for_scope; 
#line 538 "../.././gcc/c-common.h"
extern int flag_weak; 
#line 545 "../.././gcc/c-common.h"
extern int flag_working_directory; 
#line 550 "../.././gcc/c-common.h"
extern int flag_use_cxa_atexit; 
#line 555 "../.././gcc/c-common.h"
extern int flag_permissive; 
#line 562 "../.././gcc/c-common.h"
extern int flag_enforce_eh_specs; 
#line 567 "../.././gcc/c-common.h"
extern int flag_threadsafe_statics; 
#line 571 "../.././gcc/c-common.h"
extern int warn_implicit; 
#line 577 "../.././gcc/c-common.h"
extern int warn_strict_null_sentinel; 
#line 583 "../.././gcc/c-common.h"
extern int max_tinst_depth; 
#line 588 "../.././gcc/c-common.h"
extern int skip_evaluation; 
# 532 "../.././gcc/c-common.h" 
# 607 "../.././gcc/c-common.h" 
extern const struct attribute_spec c_common_attribute_table[]; 
#line 608 "../.././gcc/c-common.h"
extern const struct attribute_spec c_common_format_attribute_table[]; 
#line 615 "../.././gcc/c-common.h"
extern  tree (*make_fname_decl)( tree , int ); 
#line 617 "../.././gcc/c-common.h"
extern  tree identifier_global_value( tree ); 
#line 618 "../.././gcc/c-common.h"
extern void record_builtin_type(enum rid , const char *,  tree ); 
#line 619 "../.././gcc/c-common.h"
extern  tree build_void_list_node(void ); 
#line 620 "../.././gcc/c-common.h"
extern void start_fname_decls(void ); 
#line 621 "../.././gcc/c-common.h"
extern void finish_fname_decls(void ); 
#line 622 "../.././gcc/c-common.h"
extern const char *fname_as_string(int ); 
#line 623 "../.././gcc/c-common.h"
extern  tree fname_decl(unsigned ,  tree ); 
#line 625 "../.././gcc/c-common.h"
extern void check_function_arguments( tree ,  tree ,  tree ); 
#line 630 "../.././gcc/c-common.h"
extern void check_function_arguments_recurse(void (*)(void *,  tree , unsigned long ), void *,  tree , unsigned long ); 
#line 631 "../.././gcc/c-common.h"
extern void check_function_format( tree ,  tree ); 
#line 632 "../.././gcc/c-common.h"
extern void set_Wformat(int ); 
#line 633 "../.././gcc/c-common.h"
extern  tree handle_format_attribute( tree *,  tree ,  tree , int , unsigned char *); 
#line 634 "../.././gcc/c-common.h"
extern  tree handle_format_arg_attribute( tree *,  tree ,  tree , int , unsigned char *); 
#line 635 "../.././gcc/c-common.h"
extern int c_common_handle_option( size_t code, const char *arg, int value); 
#line 636 "../.././gcc/c-common.h"
extern unsigned char c_common_missing_argument(const char *opt,  size_t code); 
#line 637 "../.././gcc/c-common.h"
extern  tree c_common_type_for_mode(enum machine_mode , int ); 
#line 638 "../.././gcc/c-common.h"
extern  tree c_common_type_for_size(unsigned int , int ); 
#line 639 "../.././gcc/c-common.h"
extern  tree c_common_unsigned_type( tree ); 
#line 640 "../.././gcc/c-common.h"
extern  tree c_common_signed_type( tree ); 
#line 641 "../.././gcc/c-common.h"
extern  tree c_common_signed_or_unsigned_type(int ,  tree ); 
#line 642 "../.././gcc/c-common.h"
extern  tree c_common_truthvalue_conversion( tree ); 
#line 643 "../.././gcc/c-common.h"
extern void c_apply_type_quals_to_decl(int ,  tree ); 
#line 644 "../.././gcc/c-common.h"
extern  tree c_sizeof_or_alignof_type( tree , unsigned char , int ); 
#line 645 "../.././gcc/c-common.h"
extern  tree c_alignof_expr( tree ); 
#line 648 "../.././gcc/c-common.h"
extern void binary_op_error(enum tree_code ); 
#line 649 "../.././gcc/c-common.h"
extern  tree fix_string_type( tree ); 
#line 650 "../.././gcc/c-common.h"
struct varray_head_tag ; 
#line 651 "../.././gcc/c-common.h"
extern void constant_expression_warning( tree ); 
#line 652 "../.././gcc/c-common.h"
extern void strict_aliasing_warning( tree ,  tree ,  tree ); 
#line 653 "../.././gcc/c-common.h"
extern  tree convert_and_check( tree ,  tree ); 
#line 654 "../.././gcc/c-common.h"
extern void overflow_warning( tree ); 
#line 655 "../.././gcc/c-common.h"
extern void unsigned_conversion_warning( tree ,  tree ); 
#line 656 "../.././gcc/c-common.h"
extern unsigned char c_determine_visibility( tree ); 
#line 657 "../.././gcc/c-common.h"
extern unsigned char same_scalar_type_ignoring_signedness( tree ,  tree ); 
#line 665 "../.././gcc/c-common.h"
extern  tree shorten_compare( tree *,  tree *,  tree *, enum tree_code *); 
#line 667 "../.././gcc/c-common.h"
extern  tree pointer_int_sum(enum tree_code ,  tree ,  tree ); 
#line 668 "../.././gcc/c-common.h"
extern unsigned int min_precision( tree , int ); 
#line 671 "../.././gcc/c-common.h"
extern  tree c_build_qualified_type( tree , int ); 
#line 675 "../.././gcc/c-common.h"
extern void c_common_nodes_and_builtins(void ); 
#line 677 "../.././gcc/c-common.h"
extern void set_builtin_user_assembler_name( tree decl, const char *asmspec); 
#line 679 "../.././gcc/c-common.h"
extern void disable_builtin_function(const char *); 
#line 681 "../.././gcc/c-common.h"
extern void set_compound_literal_name( tree decl); 
#line 683 "../.././gcc/c-common.h"
extern  tree build_va_arg( tree ,  tree ); 
#line 685 "../.././gcc/c-common.h"
extern unsigned int c_common_init_options(unsigned int , const char **); 
#line 686 "../.././gcc/c-common.h"
extern unsigned char c_common_post_options(const char **); 
#line 687 "../.././gcc/c-common.h"
extern unsigned char c_common_init(void ); 
#line 688 "../.././gcc/c-common.h"
extern void c_common_finish(void ); 
#line 689 "../.././gcc/c-common.h"
extern void c_common_parse_file(int ); 
#line 690 "../.././gcc/c-common.h"
extern long c_common_get_alias_set( tree ); 
#line 691 "../.././gcc/c-common.h"
extern void c_register_builtin_type( tree , const char *); 
#line 692 "../.././gcc/c-common.h"
extern unsigned char c_promoting_integer_type_p( tree ); 
#line 693 "../.././gcc/c-common.h"
extern int self_promoting_args_p( tree ); 
#line 694 "../.././gcc/c-common.h"
extern  tree strip_array_types( tree ); 
#line 695 "../.././gcc/c-common.h"
extern  tree strip_pointer_operator( tree ); 
#line 696 "../.././gcc/c-common.h"
extern long c_common_to_target_charset(long ); 
#line 699 "../.././gcc/c-common.h"
extern void c_parse_file(void ); 
#line 701 "../.././gcc/c-common.h"
extern void finish_file(void ); 
# 723 "../.././gcc/c-common.h" 
# 1 "../.././gcc/c-common.def" 1
# 33 "../.././gcc/c-common.def" 
# 727 "../.././gcc/c-common.h" 2
enum c_tree_code {C_DUMMY_TREE_CODE=LAST_AND_UNUSED_TREE_CODE,COMPOUND_LITERAL_EXPR,LAST_C_TREE_CODE}; 
#line 731 "../.././gcc/c-common.h"
extern int anon_aggr_type_p( tree ); 
#line 745 "../.././gcc/c-common.h"
extern void emit_local_var( tree ); 
#line 746 "../.././gcc/c-common.h"
extern  tree do_case( tree ,  tree ); 
#line 747 "../.././gcc/c-common.h"
extern  tree build_stmt(enum tree_code , ...); 
#line 748 "../.././gcc/c-common.h"
extern  tree build_case_label( tree ,  tree ,  tree ); 
#line 753 "../.././gcc/c-common.h"
extern  tree build_unary_op(enum tree_code ,  tree , int ); 
#line 754 "../.././gcc/c-common.h"
extern  tree build_binary_op(enum tree_code ,  tree ,  tree , int ); 
#line 755 "../.././gcc/c-common.h"
extern  tree perform_integral_promotions( tree ); 
#line 760 "../.././gcc/c-common.h"
extern  tree common_type( tree ,  tree ); 
#line 762 "../.././gcc/c-common.h"
extern  tree decl_constant_value( tree ); 
#line 765 "../.././gcc/c-common.h"
extern  tree boolean_increment(enum tree_code ,  tree ); 
#line 767 "../.././gcc/c-common.h"
extern int case_compare( splay_tree_key ,  splay_tree_key ); 
#line 769 "../.././gcc/c-common.h"
extern  tree c_add_case_label( splay_tree ,  tree ,  tree ,  tree ,  tree ); 
#line 771 "../.././gcc/c-common.h"
extern void c_do_switch_warnings( splay_tree ,  location_t ,  tree ,  tree ); 
#line 773 "../.././gcc/c-common.h"
extern  tree build_function_call( tree ,  tree ); 
#line 775 "../.././gcc/c-common.h"
extern  tree resolve_overloaded_builtin( tree ,  tree ); 
#line 777 "../.././gcc/c-common.h"
extern  tree finish_label_address_expr( tree ); 
#line 781 "../.././gcc/c-common.h"
extern  tree lookup_label( tree ); 
#line 783 "../.././gcc/c-common.h"
extern int vector_types_convertible_p( tree t1,  tree t2); 
#line 785 "../.././gcc/c-common.h"
extern  rtx c_expand_expr( tree ,  rtx , enum machine_mode , int ,  rtx *); 
#line 787 "../.././gcc/c-common.h"
extern  tree c_staticp( tree ); 
#line 789 "../.././gcc/c-common.h"
extern void init_c_lex(void ); 
#line 791 "../.././gcc/c-common.h"
extern void c_cpp_builtins( cpp_reader *); 
#line 795 "../.././gcc/c-common.h"
extern int pending_lang_change; 
#line 811 "../.././gcc/c-common.h"
struct c_fileinfo {int time; short interface_only; short interface_unknown; }; 
#line 813 "../.././gcc/c-common.h"
struct c_fileinfo *get_fileinfo(const char *); 
#line 814 "../.././gcc/c-common.h"
extern void dump_time_statistics(void ); 
#line 816 "../.././gcc/c-common.h"
extern unsigned char c_dump_tree(void *,  tree ); 
#line 818 "../.././gcc/c-common.h"
extern void c_warn_unused_result( tree *); 
#line 820 "../.././gcc/c-common.h"
extern void verify_sequence_points( tree ); 
#line 822 "../.././gcc/c-common.h"
extern  tree fold_offsetof( tree ); 
#line 833 "../.././gcc/c-common.h"
enum lvalue_use {lv_assign,lv_increment,lv_decrement,lv_addressof,lv_asm}; 
#line 835 "../.././gcc/c-common.h"
extern void lvalue_error(enum lvalue_use ); 
#line 837 "../.././gcc/c-common.h"
extern int complete_array_type( tree *,  tree , unsigned char ); 
#line 839 "../.././gcc/c-common.h"
extern  tree builtin_type_for_size(int , unsigned char ); 
#line 842 "../.././gcc/c-common.h"
extern void c_genericize( tree ); 
#line 843 "../.././gcc/c-common.h"
extern int c_gimplify_expr( tree *,  tree *,  tree *); 
#line 844 "../.././gcc/c-common.h"
extern  tree c_build_bind_expr( tree ,  tree ); 
#line 847 "../.././gcc/c-common.h"
extern void pch_init(void ); 
#line 848 "../.././gcc/c-common.h"
extern int c_common_valid_pch( cpp_reader *pfile, const char *name, int fd); 
#line 850 "../.././gcc/c-common.h"
extern void c_common_read_pch( cpp_reader *pfile, const char *name, int fd, const char *orig); 
#line 851 "../.././gcc/c-common.h"
extern void c_common_write_pch(void ); 
#line 852 "../.././gcc/c-common.h"
extern void c_common_no_more_pch(void ); 
#line 853 "../.././gcc/c-common.h"
extern void c_common_pch_pragma( cpp_reader *pfile); 
#line 854 "../.././gcc/c-common.h"
extern void c_common_print_pch_checksum( FILE *f); 
#line 857 "../.././gcc/c-common.h"
extern const unsigned char executable_checksum[16]; 
#line 859 "../.././gcc/c-common.h"
extern void builtin_define_with_value(const char *, const char *, int ); 
#line 860 "../.././gcc/c-common.h"
extern void c_stddef_cpp_builtins(void ); 
#line 861 "../.././gcc/c-common.h"
extern void fe_file_change(const struct line_map *); 
#line 862 "../.././gcc/c-common.h"
extern void c_parse_error(const char *, enum cpp_ttype ,  tree ); 
#line 868 "../.././gcc/c-common.h"
extern  tree objc_is_class_name( tree ); 
#line 869 "../.././gcc/c-common.h"
extern  tree objc_is_object_ptr( tree ); 
#line 870 "../.././gcc/c-common.h"
extern void objc_check_decl( tree ); 
#line 871 "../.././gcc/c-common.h"
extern int objc_is_reserved_word( tree ); 
#line 872 "../.././gcc/c-common.h"
extern unsigned char objc_compare_types( tree ,  tree , int ,  tree ); 
#line 873 "../.././gcc/c-common.h"
extern void objc_volatilize_decl( tree ); 
#line 874 "../.././gcc/c-common.h"
extern unsigned char objc_type_quals_match( tree ,  tree ); 
#line 875 "../.././gcc/c-common.h"
extern  tree objc_rewrite_function_call( tree ,  tree ); 
#line 876 "../.././gcc/c-common.h"
extern  tree objc_message_selector(void ); 
#line 877 "../.././gcc/c-common.h"
extern  tree objc_lookup_ivar( tree ,  tree ); 
#line 878 "../.././gcc/c-common.h"
extern void objc_clear_super_receiver(void ); 
#line 879 "../.././gcc/c-common.h"
extern int objc_is_public( tree ,  tree ); 
#line 880 "../.././gcc/c-common.h"
extern  tree objc_is_id( tree ); 
#line 881 "../.././gcc/c-common.h"
extern void objc_declare_alias( tree ,  tree ); 
#line 882 "../.././gcc/c-common.h"
extern void objc_declare_class( tree ); 
#line 883 "../.././gcc/c-common.h"
extern void objc_declare_protocols( tree ); 
#line 884 "../.././gcc/c-common.h"
extern  tree objc_build_message_expr( tree ); 
#line 885 "../.././gcc/c-common.h"
extern  tree objc_finish_message_expr( tree ,  tree ,  tree ); 
#line 886 "../.././gcc/c-common.h"
extern  tree objc_build_selector_expr( tree ); 
#line 887 "../.././gcc/c-common.h"
extern  tree objc_build_protocol_expr( tree ); 
#line 888 "../.././gcc/c-common.h"
extern  tree objc_build_encode_expr( tree ); 
#line 889 "../.././gcc/c-common.h"
extern  tree objc_build_string_object( tree ); 
#line 890 "../.././gcc/c-common.h"
extern  tree objc_get_protocol_qualified_type( tree ,  tree ); 
#line 891 "../.././gcc/c-common.h"
extern  tree objc_get_class_reference( tree ); 
#line 892 "../.././gcc/c-common.h"
extern  tree objc_get_class_ivars( tree ); 
#line 893 "../.././gcc/c-common.h"
extern void objc_start_class_interface( tree ,  tree ,  tree ); 
#line 894 "../.././gcc/c-common.h"
extern void objc_start_category_interface( tree ,  tree ,  tree ); 
#line 895 "../.././gcc/c-common.h"
extern void objc_start_protocol( tree ,  tree ); 
#line 896 "../.././gcc/c-common.h"
extern void objc_continue_interface(void ); 
#line 897 "../.././gcc/c-common.h"
extern void objc_finish_interface(void ); 
#line 898 "../.././gcc/c-common.h"
extern void objc_start_class_implementation( tree ,  tree ); 
#line 899 "../.././gcc/c-common.h"
extern void objc_start_category_implementation( tree ,  tree ); 
#line 900 "../.././gcc/c-common.h"
extern void objc_continue_implementation(void ); 
#line 901 "../.././gcc/c-common.h"
extern void objc_finish_implementation(void ); 
#line 902 "../.././gcc/c-common.h"
extern void objc_set_visibility(int ); 
#line 903 "../.././gcc/c-common.h"
extern void objc_set_method_type(enum tree_code ); 
#line 904 "../.././gcc/c-common.h"
extern  tree objc_build_method_signature( tree ,  tree ,  tree , unsigned char ); 
#line 905 "../.././gcc/c-common.h"
extern void objc_add_method_declaration( tree ); 
#line 906 "../.././gcc/c-common.h"
extern void objc_start_method_definition( tree ); 
#line 907 "../.././gcc/c-common.h"
extern void objc_finish_method_definition( tree ); 
#line 908 "../.././gcc/c-common.h"
extern void objc_add_instance_variable( tree ); 
#line 909 "../.././gcc/c-common.h"
extern  tree objc_build_keyword_decl( tree ,  tree ,  tree ); 
#line 910 "../.././gcc/c-common.h"
extern  tree objc_build_throw_stmt( tree ); 
#line 911 "../.././gcc/c-common.h"
extern void objc_begin_try_stmt( location_t ,  tree ); 
#line 912 "../.././gcc/c-common.h"
extern  tree objc_finish_try_stmt(void ); 
#line 913 "../.././gcc/c-common.h"
extern void objc_begin_catch_clause( tree ); 
#line 914 "../.././gcc/c-common.h"
extern void objc_finish_catch_clause(void ); 
#line 915 "../.././gcc/c-common.h"
extern void objc_build_finally_clause( location_t ,  tree ); 
#line 916 "../.././gcc/c-common.h"
extern  tree objc_build_synchronized( location_t ,  tree ,  tree ); 
#line 917 "../.././gcc/c-common.h"
extern int objc_static_init_needed_p(void ); 
#line 918 "../.././gcc/c-common.h"
extern  tree objc_generate_static_init_call( tree ); 
#line 919 "../.././gcc/c-common.h"
extern  tree objc_generate_write_barrier( tree , enum tree_code ,  tree ); 
#line 923 "../.././gcc/c-common.h"
extern void *objc_get_current_scope(void ); 
#line 924 "../.././gcc/c-common.h"
extern void objc_mark_locals_volatile(void *); 
#line 927 "../.././gcc/c-common.h"
extern void init_pp_output( FILE *); 
#line 928 "../.././gcc/c-common.h"
extern void preprocess_file( cpp_reader *); 
#line 929 "../.././gcc/c-common.h"
extern void pp_file_change(const struct line_map *); 
#line 930 "../.././gcc/c-common.h"
extern void pp_dir_change( cpp_reader *, const char *); 
#line 931 "../.././gcc/c-common.h"
extern unsigned char check_missing_format_attribute( tree ,  tree ); 
# 745 "../.././gcc/c-common.h" 
# 33 "../.././gcc/cp/cp-tree.h" 2
# 1 "../.././gcc/cp/name-lookup.h" 1
# 29 "../.././gcc/cp/name-lookup.h" 
typedef struct binding_table_s *binding_table; 
#line 30 "../.././gcc/cp/name-lookup.h"
typedef struct binding_entry_s *binding_entry; 
#line 33 "../.././gcc/cp/name-lookup.h"
typedef void (*bt_foreach_proc)( binding_entry , void *); 
#line 40 "../.././gcc/cp/name-lookup.h"
struct binding_entry_s { binding_entry chain;  tree name;  tree type; }; 
#line 49 "../.././gcc/cp/name-lookup.h"
extern void binding_table_foreach( binding_table ,  bt_foreach_proc , void *); 
#line 50 "../.././gcc/cp/name-lookup.h"
extern  binding_entry binding_table_find( binding_table ,  tree ); 
#line 54 "../.././gcc/cp/name-lookup.h"
typedef struct cxx_binding cxx_binding; 
#line 57 "../.././gcc/cp/name-lookup.h"
typedef struct cp_binding_level cxx_scope; 
# 49 "../.././gcc/cp/name-lookup.h" 
# 79 "../.././gcc/cp/name-lookup.h" 
struct cxx_binding { cxx_binding *previous;  tree value;  tree type;  cxx_scope *scope; unsigned value_is_inherited:1; unsigned is_local:1; }; 
#line 90 "../.././gcc/cp/name-lookup.h"
typedef struct cxx_saved_binding { tree identifier;  cxx_binding *binding;  tree real_type_value; }cxx_saved_binding; 
#line 92 "../.././gcc/cp/name-lookup.h"
typedef struct VEC_cxx_saved_binding_base {unsigned num; unsigned alloc;  cxx_saved_binding vec[1]; }VEC_cxx_saved_binding_base; 
#line 92 "../.././gcc/cp/name-lookup.h"
typedef struct VEC_cxx_saved_binding_none { VEC_cxx_saved_binding_base base; }VEC_cxx_saved_binding_none; 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ unsigned VEC_cxx_saved_binding_base_length(const  VEC_cxx_saved_binding_base *vec_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
return (vec_?(vec_->num):0); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_base_last( VEC_cxx_saved_binding_base *vec_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
((void )(vec_ && (vec_->num))); 
#line 92 "../.././gcc/cp/name-lookup.h"
return (&(vec_->vec)[(vec_->num) - 1]); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_base_index( VEC_cxx_saved_binding_base *vec_, unsigned ix_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 92 "../.././gcc/cp/name-lookup.h"
return (&(vec_->vec)[ix_]); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ int VEC_cxx_saved_binding_base_iterate( VEC_cxx_saved_binding_base *vec_, unsigned ix_,  cxx_saved_binding **ptr)  {

#line 92 "../.././gcc/cp/name-lookup.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 92 "../.././gcc/cp/name-lookup.h"
(*ptr) = (&(vec_->vec)[ix_]); 
#line 92 "../.././gcc/cp/name-lookup.h"
return 1; } }else{
{ 
#line 92 "../.././gcc/cp/name-lookup.h"
(*ptr) = 0; 
#line 92 "../.././gcc/cp/name-lookup.h"
return 0; } }}
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__  size_t VEC_cxx_saved_binding_base_embedded_size(int alloc_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
return __builtin_offsetof ( VEC_cxx_saved_binding_base  , vec) + alloc_ * sizeof ( cxx_saved_binding ); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cxx_saved_binding_base_embedded_init( VEC_cxx_saved_binding_base *vec_, int alloc_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
(vec_->num) = 0; 
#line 92 "../.././gcc/cp/name-lookup.h"
(vec_->alloc) = alloc_; }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ int VEC_cxx_saved_binding_base_space( VEC_cxx_saved_binding_base *vec_, int alloc_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
((void )(alloc_ >= 0)); 
#line 92 "../.././gcc/cp/name-lookup.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_base_quick_push( VEC_cxx_saved_binding_base *vec_, const  cxx_saved_binding *obj_)  {

#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
 cxx_saved_binding *slot_;
#line 92 "../.././gcc/cp/name-lookup.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 92 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 92 "../.././gcc/cp/name-lookup.h"
if (obj_){
(*slot_) = (*obj_); }
#line 92 "../.././gcc/cp/name-lookup.h"
return slot_; }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cxx_saved_binding_base_pop( VEC_cxx_saved_binding_base *vec_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
((void )((vec_->num))); 
#line 92 "../.././gcc/cp/name-lookup.h"
(--(vec_->num)); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cxx_saved_binding_base_truncate( VEC_cxx_saved_binding_base *vec_, unsigned size_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 92 "../.././gcc/cp/name-lookup.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_base_replace( VEC_cxx_saved_binding_base *vec_, unsigned ix_, const  cxx_saved_binding *obj_)  {

#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
 cxx_saved_binding *slot_;
#line 92 "../.././gcc/cp/name-lookup.h"
((void )(ix_ < (vec_->num))); 
#line 92 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 92 "../.././gcc/cp/name-lookup.h"
if (obj_){
(*slot_) = (*obj_); }
#line 92 "../.././gcc/cp/name-lookup.h"
return slot_; }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_base_quick_insert( VEC_cxx_saved_binding_base *vec_, unsigned ix_, const  cxx_saved_binding *obj_)  {

#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
 cxx_saved_binding *slot_;
#line 92 "../.././gcc/cp/name-lookup.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 92 "../.././gcc/cp/name-lookup.h"
((void )(ix_ <= (vec_->num))); 
#line 92 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 92 "../.././gcc/cp/name-lookup.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( cxx_saved_binding )); 
#line 92 "../.././gcc/cp/name-lookup.h"
if (obj_){
(*slot_) = (*obj_); }
#line 92 "../.././gcc/cp/name-lookup.h"
return slot_; }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cxx_saved_binding_base_ordered_remove( VEC_cxx_saved_binding_base *vec_, unsigned ix_)  {

#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
 cxx_saved_binding *slot_;
#line 92 "../.././gcc/cp/name-lookup.h"
((void )(ix_ < (vec_->num))); 
#line 92 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 92 "../.././gcc/cp/name-lookup.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( cxx_saved_binding )); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cxx_saved_binding_base_unordered_remove( VEC_cxx_saved_binding_base *vec_, unsigned ix_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
((void )(ix_ < (vec_->num))); 
#line 92 "../.././gcc/cp/name-lookup.h"
(vec_->vec)[ix_] = (vec_->vec)[(--(vec_->num))]; }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_base_address( VEC_cxx_saved_binding_base *vec_)  {

#line 92 "../.././gcc/cp/name-lookup.h"
return (vec_?(vec_->vec):0); }
 
#line 92 "../.././gcc/cp/name-lookup.h"
static __inline__ unsigned VEC_cxx_saved_binding_base_lower_bound( VEC_cxx_saved_binding_base *vec_, const  cxx_saved_binding *obj_, unsigned char (*lessthan_)(const  cxx_saved_binding *, const  cxx_saved_binding *))  {

#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
unsigned int len_ = VEC_cxx_saved_binding_base_length(vec_);
#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
unsigned int half_,middle_;
#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
unsigned int first_ = 0;
#line 92 "../.././gcc/cp/name-lookup.h"
while(len_ > 0) { { 
#line 92 "../.././gcc/cp/name-lookup.h"

#line 92 "../.././gcc/cp/name-lookup.h"
 cxx_saved_binding *middle_elem_;
#line 92 "../.././gcc/cp/name-lookup.h"
half_ = len_ >> 1; 
#line 92 "../.././gcc/cp/name-lookup.h"
middle_ = first_; 
#line 92 "../.././gcc/cp/name-lookup.h"
middle_ += half_; 
#line 92 "../.././gcc/cp/name-lookup.h"
middle_elem_ = VEC_cxx_saved_binding_base_index(vec_, middle_); 
#line 92 "../.././gcc/cp/name-lookup.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 92 "../.././gcc/cp/name-lookup.h"
first_ = middle_; 
#line 92 "../.././gcc/cp/name-lookup.h"
(++first_); 
#line 92 "../.././gcc/cp/name-lookup.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 92 "../.././gcc/cp/name-lookup.h"
return first_; }
 
#line 92 "../.././gcc/cp/name-lookup.h"
struct vec_swallow_trailing_semi ; 
#line 93 "../.././gcc/cp/name-lookup.h"
typedef struct VEC_cxx_saved_binding_gc { VEC_cxx_saved_binding_base base; }VEC_cxx_saved_binding_gc; 
#line 93 "../.././gcc/cp/name-lookup.h"
static __inline__  VEC_cxx_saved_binding_gc *VEC_cxx_saved_binding_gc_alloc(int alloc_)  {

#line 93 "../.././gcc/cp/name-lookup.h"
return (( VEC_cxx_saved_binding_gc *)vec_gc_o_reserve((((void *)0)), (-alloc_), __builtin_offsetof ( VEC_cxx_saved_binding_gc  , base.vec), sizeof ( cxx_saved_binding ))); }
 
#line 93 "../.././gcc/cp/name-lookup.h"
static __inline__  VEC_cxx_saved_binding_gc *VEC_cxx_saved_binding_gc_copy( VEC_cxx_saved_binding_base *vec_)  {

#line 93 "../.././gcc/cp/name-lookup.h"

#line 93 "../.././gcc/cp/name-lookup.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 93 "../.././gcc/cp/name-lookup.h"

#line 93 "../.././gcc/cp/name-lookup.h"
 VEC_cxx_saved_binding_gc *new_vec_ = (((void *)0));
#line 93 "../.././gcc/cp/name-lookup.h"
if (len_){
{ 
#line 93 "../.././gcc/cp/name-lookup.h"
new_vec_ = (( VEC_cxx_saved_binding_gc *)(vec_gc_o_reserve((((void *)0)), (-len_), __builtin_offsetof ( VEC_cxx_saved_binding_gc  , base.vec), sizeof ( cxx_saved_binding )))); 
#line 93 "../.././gcc/cp/name-lookup.h"
(new_vec_->base).num = len_; 
#line 93 "../.././gcc/cp/name-lookup.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( cxx_saved_binding ) * len_); } }
#line 93 "../.././gcc/cp/name-lookup.h"
return new_vec_; }
 
#line 93 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cxx_saved_binding_gc_free( VEC_cxx_saved_binding_gc **vec_)  {

#line 93 "../.././gcc/cp/name-lookup.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 93 "../.././gcc/cp/name-lookup.h"
(*vec_) = (((void *)0)); }
 
#line 93 "../.././gcc/cp/name-lookup.h"
static __inline__ int VEC_cxx_saved_binding_gc_reserve( VEC_cxx_saved_binding_gc **vec_, int alloc_)  {

#line 93 "../.././gcc/cp/name-lookup.h"

#line 93 "../.././gcc/cp/name-lookup.h"
int extend = (!VEC_cxx_saved_binding_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 93 "../.././gcc/cp/name-lookup.h"
if (extend){
(*vec_) = (( VEC_cxx_saved_binding_gc *)vec_gc_o_reserve((*vec_), alloc_, __builtin_offsetof ( VEC_cxx_saved_binding_gc  , base.vec), sizeof ( cxx_saved_binding ))); }
#line 93 "../.././gcc/cp/name-lookup.h"
return extend; }
 
#line 93 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cxx_saved_binding_gc_safe_grow( VEC_cxx_saved_binding_gc **vec_, int size_)  {

#line 93 "../.././gcc/cp/name-lookup.h"
((void )(size_ >= 0 && VEC_cxx_saved_binding_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 93 "../.././gcc/cp/name-lookup.h"
VEC_cxx_saved_binding_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 93 "../.././gcc/cp/name-lookup.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; 
#line 93 "../.././gcc/cp/name-lookup.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 93 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_gc_safe_push( VEC_cxx_saved_binding_gc **vec_, const  cxx_saved_binding *obj_)  {

#line 93 "../.././gcc/cp/name-lookup.h"
VEC_cxx_saved_binding_gc_reserve(vec_, 1); 
#line 93 "../.././gcc/cp/name-lookup.h"
return VEC_cxx_saved_binding_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 93 "../.././gcc/cp/name-lookup.h"
static __inline__  cxx_saved_binding *VEC_cxx_saved_binding_gc_safe_insert( VEC_cxx_saved_binding_gc **vec_, unsigned ix_, const  cxx_saved_binding *obj_)  {

#line 93 "../.././gcc/cp/name-lookup.h"
VEC_cxx_saved_binding_gc_reserve(vec_, 1); 
#line 93 "../.././gcc/cp/name-lookup.h"
return VEC_cxx_saved_binding_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 93 "../.././gcc/cp/name-lookup.h"
struct vec_swallow_trailing_semi ; 
#line 95 "../.././gcc/cp/name-lookup.h"
extern  tree identifier_type_value( tree ); 
#line 96 "../.././gcc/cp/name-lookup.h"
extern void set_identifier_type_value( tree ,  tree ); 
#line 97 "../.././gcc/cp/name-lookup.h"
extern void pop_binding( tree ,  tree ); 
#line 98 "../.././gcc/cp/name-lookup.h"
extern  tree constructor_name( tree ); 
#line 99 "../.././gcc/cp/name-lookup.h"
extern unsigned char constructor_name_p( tree ,  tree ); 
#line 124 "../.././gcc/cp/name-lookup.h"
typedef enum scope_kind {sk_block=0,sk_cleanup,sk_try,sk_catch,sk_for,sk_function_parms,sk_class,sk_namespace,sk_template_parms,sk_template_spec}scope_kind; 
#line 140 "../.././gcc/cp/name-lookup.h"
typedef enum tag_scope {ts_current=0,ts_global=1,ts_within_enclosing_non_class=2}tag_scope; 
#line 147 "../.././gcc/cp/name-lookup.h"
typedef struct cp_class_binding { cxx_binding base;  tree identifier; }cp_class_binding; 
#line 149 "../.././gcc/cp/name-lookup.h"
typedef struct VEC_cp_class_binding_base {unsigned num; unsigned alloc;  cp_class_binding vec[1]; }VEC_cp_class_binding_base; 
#line 149 "../.././gcc/cp/name-lookup.h"
typedef struct VEC_cp_class_binding_none { VEC_cp_class_binding_base base; }VEC_cp_class_binding_none; 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ unsigned VEC_cp_class_binding_base_length(const  VEC_cp_class_binding_base *vec_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
return (vec_?(vec_->num):0); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_base_last( VEC_cp_class_binding_base *vec_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
((void )(vec_ && (vec_->num))); 
#line 149 "../.././gcc/cp/name-lookup.h"
return (&(vec_->vec)[(vec_->num) - 1]); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_base_index( VEC_cp_class_binding_base *vec_, unsigned ix_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 149 "../.././gcc/cp/name-lookup.h"
return (&(vec_->vec)[ix_]); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ int VEC_cp_class_binding_base_iterate( VEC_cp_class_binding_base *vec_, unsigned ix_,  cp_class_binding **ptr)  {

#line 149 "../.././gcc/cp/name-lookup.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 149 "../.././gcc/cp/name-lookup.h"
(*ptr) = (&(vec_->vec)[ix_]); 
#line 149 "../.././gcc/cp/name-lookup.h"
return 1; } }else{
{ 
#line 149 "../.././gcc/cp/name-lookup.h"
(*ptr) = 0; 
#line 149 "../.././gcc/cp/name-lookup.h"
return 0; } }}
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__  size_t VEC_cp_class_binding_base_embedded_size(int alloc_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
return __builtin_offsetof ( VEC_cp_class_binding_base  , vec) + alloc_ * sizeof ( cp_class_binding ); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cp_class_binding_base_embedded_init( VEC_cp_class_binding_base *vec_, int alloc_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
(vec_->num) = 0; 
#line 149 "../.././gcc/cp/name-lookup.h"
(vec_->alloc) = alloc_; }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ int VEC_cp_class_binding_base_space( VEC_cp_class_binding_base *vec_, int alloc_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
((void )(alloc_ >= 0)); 
#line 149 "../.././gcc/cp/name-lookup.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_base_quick_push( VEC_cp_class_binding_base *vec_, const  cp_class_binding *obj_)  {

#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
 cp_class_binding *slot_;
#line 149 "../.././gcc/cp/name-lookup.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 149 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 149 "../.././gcc/cp/name-lookup.h"
if (obj_){
(*slot_) = (*obj_); }
#line 149 "../.././gcc/cp/name-lookup.h"
return slot_; }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cp_class_binding_base_pop( VEC_cp_class_binding_base *vec_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
((void )((vec_->num))); 
#line 149 "../.././gcc/cp/name-lookup.h"
(--(vec_->num)); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cp_class_binding_base_truncate( VEC_cp_class_binding_base *vec_, unsigned size_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 149 "../.././gcc/cp/name-lookup.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_base_replace( VEC_cp_class_binding_base *vec_, unsigned ix_, const  cp_class_binding *obj_)  {

#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
 cp_class_binding *slot_;
#line 149 "../.././gcc/cp/name-lookup.h"
((void )(ix_ < (vec_->num))); 
#line 149 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 149 "../.././gcc/cp/name-lookup.h"
if (obj_){
(*slot_) = (*obj_); }
#line 149 "../.././gcc/cp/name-lookup.h"
return slot_; }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_base_quick_insert( VEC_cp_class_binding_base *vec_, unsigned ix_, const  cp_class_binding *obj_)  {

#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
 cp_class_binding *slot_;
#line 149 "../.././gcc/cp/name-lookup.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 149 "../.././gcc/cp/name-lookup.h"
((void )(ix_ <= (vec_->num))); 
#line 149 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 149 "../.././gcc/cp/name-lookup.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( cp_class_binding )); 
#line 149 "../.././gcc/cp/name-lookup.h"
if (obj_){
(*slot_) = (*obj_); }
#line 149 "../.././gcc/cp/name-lookup.h"
return slot_; }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cp_class_binding_base_ordered_remove( VEC_cp_class_binding_base *vec_, unsigned ix_)  {

#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
 cp_class_binding *slot_;
#line 149 "../.././gcc/cp/name-lookup.h"
((void )(ix_ < (vec_->num))); 
#line 149 "../.././gcc/cp/name-lookup.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 149 "../.././gcc/cp/name-lookup.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( cp_class_binding )); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cp_class_binding_base_unordered_remove( VEC_cp_class_binding_base *vec_, unsigned ix_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
((void )(ix_ < (vec_->num))); 
#line 149 "../.././gcc/cp/name-lookup.h"
(vec_->vec)[ix_] = (vec_->vec)[(--(vec_->num))]; }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_base_address( VEC_cp_class_binding_base *vec_)  {

#line 149 "../.././gcc/cp/name-lookup.h"
return (vec_?(vec_->vec):0); }
 
#line 149 "../.././gcc/cp/name-lookup.h"
static __inline__ unsigned VEC_cp_class_binding_base_lower_bound( VEC_cp_class_binding_base *vec_, const  cp_class_binding *obj_, unsigned char (*lessthan_)(const  cp_class_binding *, const  cp_class_binding *))  {

#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
unsigned int len_ = VEC_cp_class_binding_base_length(vec_);
#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
unsigned int half_,middle_;
#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
unsigned int first_ = 0;
#line 149 "../.././gcc/cp/name-lookup.h"
while(len_ > 0) { { 
#line 149 "../.././gcc/cp/name-lookup.h"

#line 149 "../.././gcc/cp/name-lookup.h"
 cp_class_binding *middle_elem_;
#line 149 "../.././gcc/cp/name-lookup.h"
half_ = len_ >> 1; 
#line 149 "../.././gcc/cp/name-lookup.h"
middle_ = first_; 
#line 149 "../.././gcc/cp/name-lookup.h"
middle_ += half_; 
#line 149 "../.././gcc/cp/name-lookup.h"
middle_elem_ = VEC_cp_class_binding_base_index(vec_, middle_); 
#line 149 "../.././gcc/cp/name-lookup.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 149 "../.././gcc/cp/name-lookup.h"
first_ = middle_; 
#line 149 "../.././gcc/cp/name-lookup.h"
(++first_); 
#line 149 "../.././gcc/cp/name-lookup.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 149 "../.././gcc/cp/name-lookup.h"
return first_; }
 
#line 149 "../.././gcc/cp/name-lookup.h"
struct vec_swallow_trailing_semi ; 
#line 150 "../.././gcc/cp/name-lookup.h"
typedef struct VEC_cp_class_binding_gc { VEC_cp_class_binding_base base; }VEC_cp_class_binding_gc; 
#line 150 "../.././gcc/cp/name-lookup.h"
static __inline__  VEC_cp_class_binding_gc *VEC_cp_class_binding_gc_alloc(int alloc_)  {

#line 150 "../.././gcc/cp/name-lookup.h"
return (( VEC_cp_class_binding_gc *)vec_gc_o_reserve((((void *)0)), (-alloc_), __builtin_offsetof ( VEC_cp_class_binding_gc  , base.vec), sizeof ( cp_class_binding ))); }
 
#line 150 "../.././gcc/cp/name-lookup.h"
static __inline__  VEC_cp_class_binding_gc *VEC_cp_class_binding_gc_copy( VEC_cp_class_binding_base *vec_)  {

#line 150 "../.././gcc/cp/name-lookup.h"

#line 150 "../.././gcc/cp/name-lookup.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 150 "../.././gcc/cp/name-lookup.h"

#line 150 "../.././gcc/cp/name-lookup.h"
 VEC_cp_class_binding_gc *new_vec_ = (((void *)0));
#line 150 "../.././gcc/cp/name-lookup.h"
if (len_){
{ 
#line 150 "../.././gcc/cp/name-lookup.h"
new_vec_ = (( VEC_cp_class_binding_gc *)(vec_gc_o_reserve((((void *)0)), (-len_), __builtin_offsetof ( VEC_cp_class_binding_gc  , base.vec), sizeof ( cp_class_binding )))); 
#line 150 "../.././gcc/cp/name-lookup.h"
(new_vec_->base).num = len_; 
#line 150 "../.././gcc/cp/name-lookup.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( cp_class_binding ) * len_); } }
#line 150 "../.././gcc/cp/name-lookup.h"
return new_vec_; }
 
#line 150 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cp_class_binding_gc_free( VEC_cp_class_binding_gc **vec_)  {

#line 150 "../.././gcc/cp/name-lookup.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 150 "../.././gcc/cp/name-lookup.h"
(*vec_) = (((void *)0)); }
 
#line 150 "../.././gcc/cp/name-lookup.h"
static __inline__ int VEC_cp_class_binding_gc_reserve( VEC_cp_class_binding_gc **vec_, int alloc_)  {

#line 150 "../.././gcc/cp/name-lookup.h"

#line 150 "../.././gcc/cp/name-lookup.h"
int extend = (!VEC_cp_class_binding_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 150 "../.././gcc/cp/name-lookup.h"
if (extend){
(*vec_) = (( VEC_cp_class_binding_gc *)vec_gc_o_reserve((*vec_), alloc_, __builtin_offsetof ( VEC_cp_class_binding_gc  , base.vec), sizeof ( cp_class_binding ))); }
#line 150 "../.././gcc/cp/name-lookup.h"
return extend; }
 
#line 150 "../.././gcc/cp/name-lookup.h"
static __inline__ void VEC_cp_class_binding_gc_safe_grow( VEC_cp_class_binding_gc **vec_, int size_)  {

#line 150 "../.././gcc/cp/name-lookup.h"
((void )(size_ >= 0 && VEC_cp_class_binding_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 150 "../.././gcc/cp/name-lookup.h"
VEC_cp_class_binding_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 150 "../.././gcc/cp/name-lookup.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; 
#line 150 "../.././gcc/cp/name-lookup.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 150 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_gc_safe_push( VEC_cp_class_binding_gc **vec_, const  cp_class_binding *obj_)  {

#line 150 "../.././gcc/cp/name-lookup.h"
VEC_cp_class_binding_gc_reserve(vec_, 1); 
#line 150 "../.././gcc/cp/name-lookup.h"
return VEC_cp_class_binding_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 150 "../.././gcc/cp/name-lookup.h"
static __inline__  cp_class_binding *VEC_cp_class_binding_gc_safe_insert( VEC_cp_class_binding_gc **vec_, unsigned ix_, const  cp_class_binding *obj_)  {

#line 150 "../.././gcc/cp/name-lookup.h"
VEC_cp_class_binding_gc_reserve(vec_, 1); 
#line 150 "../.././gcc/cp/name-lookup.h"
return VEC_cp_class_binding_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 150 "../.././gcc/cp/name-lookup.h"
struct vec_swallow_trailing_semi ; 
#line 262 "../.././gcc/cp/name-lookup.h"
struct cp_binding_level { tree names;  size_t names_size;  tree namespaces;  VEC_tree_gc *static_decls;  tree vtables;  tree usings;  tree using_directives;  VEC_cp_class_binding_gc *class_shadowed;  tree type_shadowed;  tree shadowed_labels;  tree blocks;  tree this_entity; struct cp_binding_level *level_chain;  tree dead_vars_from_for;  tree statement_list; int binding_depth;  __extension__ enum scope_kind kind:4; unsigned int explicit_spec_p:1; unsigned keep:1; unsigned more_cleanups_ok:1; unsigned have_cleanups:1; }; 
# 176 "../.././gcc/cp/name-lookup.h" 
# 276 "../.././gcc/cp/name-lookup.h" 
extern  tree global_namespace; 
#line 277 "../.././gcc/cp/name-lookup.h"
extern  tree global_scope_name; 
#line 282 "../.././gcc/cp/name-lookup.h"
extern  tree global_type_node; 
#line 288 "../.././gcc/cp/name-lookup.h"
extern  cxx_scope *leave_scope(void ); 
#line 289 "../.././gcc/cp/name-lookup.h"
extern unsigned char kept_level_p(void ); 
#line 290 "../.././gcc/cp/name-lookup.h"
extern int global_bindings_p(void ); 
#line 291 "../.././gcc/cp/name-lookup.h"
extern unsigned char toplevel_bindings_p(void ); 
#line 292 "../.././gcc/cp/name-lookup.h"
extern unsigned char namespace_bindings_p(void ); 
#line 293 "../.././gcc/cp/name-lookup.h"
extern unsigned char template_parm_scope_p(void ); 
#line 294 "../.././gcc/cp/name-lookup.h"
extern  scope_kind innermost_scope_kind(void ); 
#line 295 "../.././gcc/cp/name-lookup.h"
extern  cxx_scope *begin_scope( scope_kind ,  tree ); 
#line 296 "../.././gcc/cp/name-lookup.h"
extern void print_binding_stack(void ); 
#line 297 "../.././gcc/cp/name-lookup.h"
extern void push_to_top_level(void ); 
#line 298 "../.././gcc/cp/name-lookup.h"
extern void pop_from_top_level(void ); 
#line 299 "../.././gcc/cp/name-lookup.h"
extern void pop_everything(void ); 
#line 300 "../.././gcc/cp/name-lookup.h"
extern void keep_next_level(unsigned char ); 
#line 301 "../.././gcc/cp/name-lookup.h"
extern unsigned char is_ancestor( tree ,  tree ); 
#line 302 "../.././gcc/cp/name-lookup.h"
extern  tree push_scope( tree ); 
#line 303 "../.././gcc/cp/name-lookup.h"
extern void pop_scope( tree ); 
#line 304 "../.././gcc/cp/name-lookup.h"
extern  tree push_inner_scope( tree ); 
#line 305 "../.././gcc/cp/name-lookup.h"
extern void pop_inner_scope( tree ,  tree ); 
#line 306 "../.././gcc/cp/name-lookup.h"
extern void push_binding_level(struct cp_binding_level *); 
#line 308 "../.././gcc/cp/name-lookup.h"
extern void push_namespace( tree ); 
#line 309 "../.././gcc/cp/name-lookup.h"
extern void pop_namespace(void ); 
#line 310 "../.././gcc/cp/name-lookup.h"
extern void push_nested_namespace( tree ); 
#line 311 "../.././gcc/cp/name-lookup.h"
extern void pop_nested_namespace( tree ); 
#line 312 "../.././gcc/cp/name-lookup.h"
extern void pushlevel_class(void ); 
#line 313 "../.././gcc/cp/name-lookup.h"
extern void poplevel_class(void ); 
#line 314 "../.././gcc/cp/name-lookup.h"
extern  tree pushdecl_with_scope( tree ,  cxx_scope *, unsigned char ); 
#line 315 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_name( tree , int ); 
#line 316 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_name_one( tree ); 
#line 317 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_name_real( tree , int , int , unsigned char , int , int ); 
#line 318 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_type_scope( tree ,  tag_scope ); 
#line 319 "../.././gcc/cp/name-lookup.h"
extern  tree namespace_binding( tree ,  tree ); 
#line 320 "../.././gcc/cp/name-lookup.h"
extern void set_namespace_binding( tree ,  tree ,  tree ); 
#line 321 "../.././gcc/cp/name-lookup.h"
extern unsigned char hidden_name_p( tree ); 
#line 322 "../.././gcc/cp/name-lookup.h"
extern  tree remove_hidden_names( tree ); 
#line 323 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_namespace_name( tree ,  tree ); 
#line 324 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_qualified_name( tree ,  tree , unsigned char , unsigned char ); 
#line 325 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_name_nonclass( tree ); 
#line 326 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_function_nonclass( tree ,  tree , unsigned char ); 
#line 327 "../.././gcc/cp/name-lookup.h"
extern void push_local_binding( tree ,  tree , int ); 
#line 328 "../.././gcc/cp/name-lookup.h"
extern unsigned char pushdecl_class_level( tree ); 
#line 329 "../.././gcc/cp/name-lookup.h"
extern  tree pushdecl_namespace_level( tree , unsigned char ); 
#line 330 "../.././gcc/cp/name-lookup.h"
extern unsigned char push_class_level_binding( tree ,  tree ); 
#line 331 "../.././gcc/cp/name-lookup.h"
extern  tree getdecls(void ); 
#line 332 "../.././gcc/cp/name-lookup.h"
extern  tree cp_namespace_decls( tree ); 
#line 333 "../.././gcc/cp/name-lookup.h"
extern void set_decl_namespace( tree ,  tree , unsigned char ); 
#line 334 "../.././gcc/cp/name-lookup.h"
extern void push_decl_namespace( tree ); 
#line 335 "../.././gcc/cp/name-lookup.h"
extern void pop_decl_namespace(void ); 
#line 336 "../.././gcc/cp/name-lookup.h"
extern void do_namespace_alias( tree ,  tree ); 
#line 337 "../.././gcc/cp/name-lookup.h"
extern void do_toplevel_using_decl( tree ,  tree ,  tree ); 
#line 338 "../.././gcc/cp/name-lookup.h"
extern void do_local_using_decl( tree ,  tree ,  tree ); 
#line 339 "../.././gcc/cp/name-lookup.h"
extern  tree do_class_using_decl( tree ,  tree ); 
#line 340 "../.././gcc/cp/name-lookup.h"
extern void do_using_directive( tree ); 
#line 341 "../.././gcc/cp/name-lookup.h"
extern  tree lookup_arg_dependent( tree ,  tree ,  tree ); 
#line 342 "../.././gcc/cp/name-lookup.h"
extern unsigned char is_associated_namespace( tree ,  tree ); 
#line 343 "../.././gcc/cp/name-lookup.h"
extern void parse_using_directive( tree ,  tree ); 
#line 344 "../.././gcc/cp/name-lookup.h"
extern  tree innermost_non_namespace_value( tree ); 
#line 345 "../.././gcc/cp/name-lookup.h"
extern  cxx_binding *outer_binding( tree ,  cxx_binding *, unsigned char ); 
#line 346 "../.././gcc/cp/name-lookup.h"
extern void cp_emit_debug_info_for_using( tree ,  tree ); 
#line 353 "../.././gcc/cp/name-lookup.h"
static __inline__ unsigned char get_global_value_if_present( tree id,  tree *decl)  {

#line 354 "../.././gcc/cp/name-lookup.h"

#line 354 "../.././gcc/cp/name-lookup.h"
 tree global_value = namespace_binding(id, global_namespace);
#line 355 "../.././gcc/cp/name-lookup.h"
if (global_value){
(*decl) = global_value; }
#line 357 "../.././gcc/cp/name-lookup.h"
return global_value != (((void *)0)); }
 
#line 364 "../.././gcc/cp/name-lookup.h"
static __inline__ unsigned char is_typename_at_global_scope( tree id)  {

#line 365 "../.././gcc/cp/name-lookup.h"

#line 365 "../.././gcc/cp/name-lookup.h"
 tree global_value = namespace_binding(id, global_namespace);
#line 367 "../.././gcc/cp/name-lookup.h"
return global_value && (((enum tree_code )((global_value)->common).code)) == TYPE_DECL; }
 
#line 34 "../.././gcc/cp/cp-tree.h"
struct diagnostic_context ; 
# 34 "../.././gcc/cp/cp-tree.h" 2
# 204 "../.././gcc/cp/cp-tree.h" 
struct lang_identifier {struct c_common_identifier c_common;  cxx_binding *namespace_bindings;  cxx_binding *bindings;  tree class_template_info;  tree label_value; }; 
#line 222 "../.././gcc/cp/cp-tree.h"
struct template_parm_index_s {struct tree_common common; long index; long level; long orig_level;  tree decl; }; 
#line 223 "../.././gcc/cp/cp-tree.h"
typedef struct template_parm_index_s template_parm_index; 
#line 231 "../.././gcc/cp/cp-tree.h"
struct tinst_level_s {struct tree_common common;  tree decl;  location_t locus; int in_system_header_p; }; 
#line 232 "../.././gcc/cp/cp-tree.h"
typedef struct tinst_level_s *tinst_level_t; 
#line 241 "../.././gcc/cp/cp-tree.h"
struct ptrmem_cst {struct tree_common common;  rtx rtl;  tree member; }; 
#line 242 "../.././gcc/cp/cp-tree.h"
typedef struct ptrmem_cst *ptrmem_cst_t; 
# 215 "../.././gcc/cp/cp-tree.h" 
# 321 "../.././gcc/cp/cp-tree.h" 
struct tree_overload {struct tree_common common;  tree function; }; 
#line 355 "../.././gcc/cp/cp-tree.h"
struct tree_baselink {struct tree_common common;  tree binfo;  tree functions;  tree access_binfo; }; 
#line 371 "../.././gcc/cp/cp-tree.h"
typedef enum cp_id_kind {CP_ID_KIND_NONE,CP_ID_KIND_UNQUALIFIED,CP_ID_KIND_UNQUALIFIED_DEPENDENT,CP_ID_KIND_TEMPLATE_ID,CP_ID_KIND_QUALIFIED}cp_id_kind; 
# 349 "../.././gcc/cp/cp-tree.h" 
# 444 "../.././gcc/cp/cp-tree.h" 
struct tree_default_arg {struct tree_common common; struct cp_token_cache *tokens;  VEC_tree_gc *instantiations; }; 
#line 458 "../.././gcc/cp/cp-tree.h"
enum cp_tree_node_structure_enum {TS_CP_GENERIC,TS_CP_IDENTIFIER,TS_CP_TPI,TS_CP_TINST_LEVEL,TS_CP_PTRMEM,TS_CP_BINDING,TS_CP_OVERLOAD,TS_CP_BASELINK,TS_CP_WRAPPER,TS_CP_DEFAULT_ARG,LAST_TS_CP_ENUM}; 
#line 473 "../.././gcc/cp/cp-tree.h"
union lang_tree_node {union tree_node generic; struct template_parm_index_s tpi; struct tinst_level_s tinst_level; struct ptrmem_cst ptrmem; struct tree_overload overload; struct tree_baselink baselink; struct tree_default_arg default_arg; struct lang_identifier identifier; }; 
#line 537 "../.././gcc/cp/cp-tree.h"
enum cp_tree_index {CPTI_JAVA_BYTE_TYPE,CPTI_JAVA_SHORT_TYPE,CPTI_JAVA_INT_TYPE,CPTI_JAVA_LONG_TYPE,CPTI_JAVA_FLOAT_TYPE,CPTI_JAVA_DOUBLE_TYPE,CPTI_JAVA_CHAR_TYPE,CPTI_JAVA_BOOLEAN_TYPE,CPTI_WCHAR_DECL,CPTI_VTABLE_ENTRY_TYPE,CPTI_DELTA_TYPE,CPTI_VTABLE_INDEX_TYPE,CPTI_CLEANUP_TYPE,CPTI_VTT_PARM_TYPE,CPTI_CLASS_TYPE,CPTI_UNKNOWN_TYPE,CPTI_VTBL_TYPE,CPTI_VTBL_PTR_TYPE,CPTI_STD,CPTI_ABI,CPTI_CONST_TYPE_INFO_TYPE,CPTI_TYPE_INFO_PTR_TYPE,CPTI_ABORT_FNDECL,CPTI_GLOBAL_DELETE_FNDECL,CPTI_AGGR_TAG,CPTI_CTOR_IDENTIFIER,CPTI_COMPLETE_CTOR_IDENTIFIER,CPTI_BASE_CTOR_IDENTIFIER,CPTI_DTOR_IDENTIFIER,CPTI_COMPLETE_DTOR_IDENTIFIER,CPTI_BASE_DTOR_IDENTIFIER,CPTI_DELETING_DTOR_IDENTIFIER,CPTI_DELTA_IDENTIFIER,CPTI_IN_CHARGE_IDENTIFIER,CPTI_VTT_PARM_IDENTIFIER,CPTI_NELTS_IDENTIFIER,CPTI_THIS_IDENTIFIER,CPTI_PFN_IDENTIFIER,CPTI_VPTR_IDENTIFIER,CPTI_STD_IDENTIFIER,CPTI_LANG_NAME_C,CPTI_LANG_NAME_CPLUSPLUS,CPTI_LANG_NAME_JAVA,CPTI_EMPTY_EXCEPT_SPEC,CPTI_JCLASS,CPTI_TERMINATE,CPTI_CALL_UNEXPECTED,CPTI_ATEXIT,CPTI_DSO_HANDLE,CPTI_DCAST,CPTI_KEYED_CLASSES,CPTI_MAX}; 
#line 539 "../.././gcc/cp/cp-tree.h"
extern  tree cp_global_trees[CPTI_MAX]; 
#line 674 "../.././gcc/cp/cp-tree.h"
struct saved_scope { VEC_cxx_saved_binding_gc *old_bindings;  tree old_namespace;  tree decl_ns_list;  tree class_name;  tree class_type;  tree access_specifier;  tree function_decl;  VEC_tree_gc *lang_base;  tree lang_name;  tree template_parms; struct cp_binding_level *x_previous_class_level;  tree x_saved_tree; long x_processing_template_decl; int x_processing_specialization; unsigned char x_processing_explicit_instantiation; int need_pop_function_context; unsigned char skip_evaluation; struct stmt_tree_s x_stmt_tree; struct cp_binding_level *class_bindings; struct cp_binding_level *bindings; struct saved_scope *prev; }; 
# 647 "../.././gcc/cp/cp-tree.h" 
# 720 "../.././gcc/cp/cp-tree.h" 
extern struct saved_scope *scope_chain; 
#line 749 "../.././gcc/cp/cp-tree.h"
struct language_function {struct c_language_function base;  tree x_cdtor_label;  tree x_current_class_ptr;  tree x_current_class_ref;  tree x_eh_spec_block;  tree x_in_charge_parm;  tree x_vtt_parm;  tree x_return_value; int returns_value; int returns_null; int returns_abnormally; int in_function_try_handler; int in_base_initializer; unsigned int can_throw:1; struct named_label_use_list *x_named_label_uses; struct named_label_list *x_named_labels; struct cp_binding_level *bindings;  VEC_tree_gc *x_local_names; }; 
# 834 "../.././gcc/cp/cp-tree.h" 
# 1 "../.././gcc/cp/cp-tree.def" 1
# 43 "../.././gcc/cp/cp-tree.def" 
# 102 "../.././gcc/cp/cp-tree.def" 
# 119 "../.././gcc/cp/cp-tree.def" 
# 154 "../.././gcc/cp/cp-tree.def" 
# 163 "../.././gcc/cp/cp-tree.def" 
# 172 "../.././gcc/cp/cp-tree.def" 
# 231 "../.././gcc/cp/cp-tree.def" 
# 253 "../.././gcc/cp/cp-tree.def" 
# 321 "../.././gcc/cp/cp-tree.def" 
# 838 "../.././gcc/cp/cp-tree.h" 2
enum cplus_tree_code {CP_DUMMY_TREE_CODE=LAST_C_TREE_CODE,OFFSET_REF,PTRMEM_CST,NEW_EXPR,VEC_NEW_EXPR,DELETE_EXPR,VEC_DELETE_EXPR,SCOPE_REF,MEMBER_REF,TYPE_EXPR,AGGR_INIT_EXPR,THROW_EXPR,EMPTY_CLASS_EXPR,BASELINK,TEMPLATE_DECL,TEMPLATE_PARM_INDEX,TEMPLATE_TEMPLATE_PARM,TEMPLATE_TYPE_PARM,TYPENAME_TYPE,TYPEOF_TYPE,BOUND_TEMPLATE_TEMPLATE_PARM,UNBOUND_CLASS_TEMPLATE,USING_DECL,USING_STMT,DEFAULT_ARG,TEMPLATE_ID_EXPR,OVERLOAD,PSEUDO_DTOR_EXPR,MODOP_EXPR,CAST_EXPR,REINTERPRET_CAST_EXPR,CONST_CAST_EXPR,STATIC_CAST_EXPR,DYNAMIC_CAST_EXPR,DOTSTAR_EXPR,TYPEID_EXPR,NON_DEPENDENT_EXPR,CTOR_INITIALIZER,TRY_BLOCK,EH_SPEC_BLOCK,HANDLER,MUST_NOT_THROW_EXPR,CLEANUP_STMT,IF_STMT,FOR_STMT,WHILE_STMT,DO_STMT,BREAK_STMT,CONTINUE_STMT,SWITCH_STMT,EXPR_STMT,TAG_DEFN,TINST_LEVEL,OFFSETOF_EXPR,SIZEOF_EXPR,ARROW_EXPR,ALIGNOF_EXPR,STMT_EXPR,UNARY_PLUS_EXPR,LAST_CPLUS_TREE_CODE}; 
#line 842 "../.././gcc/cp/cp-tree.h"
extern unsigned char statement_code_p[256]; 
#line 846 "../.././gcc/cp/cp-tree.h"
enum languages {lang_c,lang_cplusplus,lang_java}; 
#line 963 "../.././gcc/cp/cp-tree.h"
typedef struct tree_pair_s { tree purpose;  tree value; }tree_pair_s; 
#line 964 "../.././gcc/cp/cp-tree.h"
typedef  tree_pair_s *tree_pair_p; 
#line 965 "../.././gcc/cp/cp-tree.h"
typedef struct VEC_tree_pair_s_base {unsigned num; unsigned alloc;  tree_pair_s vec[1]; }VEC_tree_pair_s_base; 
#line 965 "../.././gcc/cp/cp-tree.h"
typedef struct VEC_tree_pair_s_none { VEC_tree_pair_s_base base; }VEC_tree_pair_s_none; 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ unsigned VEC_tree_pair_s_base_length(const  VEC_tree_pair_s_base *vec_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
return (vec_?(vec_->num):0); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_base_last( VEC_tree_pair_s_base *vec_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
((void )(vec_ && (vec_->num))); 
#line 965 "../.././gcc/cp/cp-tree.h"
return (&(vec_->vec)[(vec_->num) - 1]); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_base_index( VEC_tree_pair_s_base *vec_, unsigned ix_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 965 "../.././gcc/cp/cp-tree.h"
return (&(vec_->vec)[ix_]); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ int VEC_tree_pair_s_base_iterate( VEC_tree_pair_s_base *vec_, unsigned ix_,  tree_pair_s **ptr)  {

#line 965 "../.././gcc/cp/cp-tree.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 965 "../.././gcc/cp/cp-tree.h"
(*ptr) = (&(vec_->vec)[ix_]); 
#line 965 "../.././gcc/cp/cp-tree.h"
return 1; } }else{
{ 
#line 965 "../.././gcc/cp/cp-tree.h"
(*ptr) = 0; 
#line 965 "../.././gcc/cp/cp-tree.h"
return 0; } }}
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__  size_t VEC_tree_pair_s_base_embedded_size(int alloc_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
return __builtin_offsetof ( VEC_tree_pair_s_base  , vec) + alloc_ * sizeof ( tree_pair_s ); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ void VEC_tree_pair_s_base_embedded_init( VEC_tree_pair_s_base *vec_, int alloc_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
(vec_->num) = 0; 
#line 965 "../.././gcc/cp/cp-tree.h"
(vec_->alloc) = alloc_; }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ int VEC_tree_pair_s_base_space( VEC_tree_pair_s_base *vec_, int alloc_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
((void )(alloc_ >= 0)); 
#line 965 "../.././gcc/cp/cp-tree.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_base_quick_push( VEC_tree_pair_s_base *vec_, const  tree_pair_s *obj_)  {

#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
 tree_pair_s *slot_;
#line 965 "../.././gcc/cp/cp-tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 965 "../.././gcc/cp/cp-tree.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 965 "../.././gcc/cp/cp-tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 965 "../.././gcc/cp/cp-tree.h"
return slot_; }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ void VEC_tree_pair_s_base_pop( VEC_tree_pair_s_base *vec_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
((void )((vec_->num))); 
#line 965 "../.././gcc/cp/cp-tree.h"
(--(vec_->num)); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ void VEC_tree_pair_s_base_truncate( VEC_tree_pair_s_base *vec_, unsigned size_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 965 "../.././gcc/cp/cp-tree.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_base_replace( VEC_tree_pair_s_base *vec_, unsigned ix_, const  tree_pair_s *obj_)  {

#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
 tree_pair_s *slot_;
#line 965 "../.././gcc/cp/cp-tree.h"
((void )(ix_ < (vec_->num))); 
#line 965 "../.././gcc/cp/cp-tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 965 "../.././gcc/cp/cp-tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 965 "../.././gcc/cp/cp-tree.h"
return slot_; }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_base_quick_insert( VEC_tree_pair_s_base *vec_, unsigned ix_, const  tree_pair_s *obj_)  {

#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
 tree_pair_s *slot_;
#line 965 "../.././gcc/cp/cp-tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 965 "../.././gcc/cp/cp-tree.h"
((void )(ix_ <= (vec_->num))); 
#line 965 "../.././gcc/cp/cp-tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 965 "../.././gcc/cp/cp-tree.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( tree_pair_s )); 
#line 965 "../.././gcc/cp/cp-tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 965 "../.././gcc/cp/cp-tree.h"
return slot_; }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ void VEC_tree_pair_s_base_ordered_remove( VEC_tree_pair_s_base *vec_, unsigned ix_)  {

#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
 tree_pair_s *slot_;
#line 965 "../.././gcc/cp/cp-tree.h"
((void )(ix_ < (vec_->num))); 
#line 965 "../.././gcc/cp/cp-tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 965 "../.././gcc/cp/cp-tree.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( tree_pair_s )); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ void VEC_tree_pair_s_base_unordered_remove( VEC_tree_pair_s_base *vec_, unsigned ix_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
((void )(ix_ < (vec_->num))); 
#line 965 "../.././gcc/cp/cp-tree.h"
(vec_->vec)[ix_] = (vec_->vec)[(--(vec_->num))]; }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_base_address( VEC_tree_pair_s_base *vec_)  {

#line 965 "../.././gcc/cp/cp-tree.h"
return (vec_?(vec_->vec):0); }
 
#line 965 "../.././gcc/cp/cp-tree.h"
static __inline__ unsigned VEC_tree_pair_s_base_lower_bound( VEC_tree_pair_s_base *vec_, const  tree_pair_s *obj_, unsigned char (*lessthan_)(const  tree_pair_s *, const  tree_pair_s *))  {

#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
unsigned int len_ = VEC_tree_pair_s_base_length(vec_);
#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
unsigned int half_,middle_;
#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
unsigned int first_ = 0;
#line 965 "../.././gcc/cp/cp-tree.h"
while(len_ > 0) { { 
#line 965 "../.././gcc/cp/cp-tree.h"

#line 965 "../.././gcc/cp/cp-tree.h"
 tree_pair_s *middle_elem_;
#line 965 "../.././gcc/cp/cp-tree.h"
half_ = len_ >> 1; 
#line 965 "../.././gcc/cp/cp-tree.h"
middle_ = first_; 
#line 965 "../.././gcc/cp/cp-tree.h"
middle_ += half_; 
#line 965 "../.././gcc/cp/cp-tree.h"
middle_elem_ = VEC_tree_pair_s_base_index(vec_, middle_); 
#line 965 "../.././gcc/cp/cp-tree.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 965 "../.././gcc/cp/cp-tree.h"
first_ = middle_; 
#line 965 "../.././gcc/cp/cp-tree.h"
(++first_); 
#line 965 "../.././gcc/cp/cp-tree.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 965 "../.././gcc/cp/cp-tree.h"
return first_; }
 
#line 965 "../.././gcc/cp/cp-tree.h"
struct vec_swallow_trailing_semi ; 
#line 966 "../.././gcc/cp/cp-tree.h"
typedef struct VEC_tree_pair_s_gc { VEC_tree_pair_s_base base; }VEC_tree_pair_s_gc; 
#line 966 "../.././gcc/cp/cp-tree.h"
static __inline__  VEC_tree_pair_s_gc *VEC_tree_pair_s_gc_alloc(int alloc_)  {

#line 966 "../.././gcc/cp/cp-tree.h"
return (( VEC_tree_pair_s_gc *)vec_gc_o_reserve((((void *)0)), (-alloc_), __builtin_offsetof ( VEC_tree_pair_s_gc  , base.vec), sizeof ( tree_pair_s ))); }
 
#line 966 "../.././gcc/cp/cp-tree.h"
static __inline__  VEC_tree_pair_s_gc *VEC_tree_pair_s_gc_copy( VEC_tree_pair_s_base *vec_)  {

#line 966 "../.././gcc/cp/cp-tree.h"

#line 966 "../.././gcc/cp/cp-tree.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 966 "../.././gcc/cp/cp-tree.h"

#line 966 "../.././gcc/cp/cp-tree.h"
 VEC_tree_pair_s_gc *new_vec_ = (((void *)0));
#line 966 "../.././gcc/cp/cp-tree.h"
if (len_){
{ 
#line 966 "../.././gcc/cp/cp-tree.h"
new_vec_ = (( VEC_tree_pair_s_gc *)(vec_gc_o_reserve((((void *)0)), (-len_), __builtin_offsetof ( VEC_tree_pair_s_gc  , base.vec), sizeof ( tree_pair_s )))); 
#line 966 "../.././gcc/cp/cp-tree.h"
(new_vec_->base).num = len_; 
#line 966 "../.././gcc/cp/cp-tree.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( tree_pair_s ) * len_); } }
#line 966 "../.././gcc/cp/cp-tree.h"
return new_vec_; }
 
#line 966 "../.././gcc/cp/cp-tree.h"
static __inline__ void VEC_tree_pair_s_gc_free( VEC_tree_pair_s_gc **vec_)  {

#line 966 "../.././gcc/cp/cp-tree.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 966 "../.././gcc/cp/cp-tree.h"
(*vec_) = (((void *)0)); }
 
#line 966 "../.././gcc/cp/cp-tree.h"
static __inline__ int VEC_tree_pair_s_gc_reserve( VEC_tree_pair_s_gc **vec_, int alloc_)  {

#line 966 "../.././gcc/cp/cp-tree.h"

#line 966 "../.././gcc/cp/cp-tree.h"
int extend = (!VEC_tree_pair_s_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 966 "../.././gcc/cp/cp-tree.h"
if (extend){
(*vec_) = (( VEC_tree_pair_s_gc *)vec_gc_o_reserve((*vec_), alloc_, __builtin_offsetof ( VEC_tree_pair_s_gc  , base.vec), sizeof ( tree_pair_s ))); }
#line 966 "../.././gcc/cp/cp-tree.h"
return extend; }
 
#line 966 "../.././gcc/cp/cp-tree.h"
static __inline__ void VEC_tree_pair_s_gc_safe_grow( VEC_tree_pair_s_gc **vec_, int size_)  {

#line 966 "../.././gcc/cp/cp-tree.h"
((void )(size_ >= 0 && VEC_tree_pair_s_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 966 "../.././gcc/cp/cp-tree.h"
VEC_tree_pair_s_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 966 "../.././gcc/cp/cp-tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; 
#line 966 "../.././gcc/cp/cp-tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 966 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_gc_safe_push( VEC_tree_pair_s_gc **vec_, const  tree_pair_s *obj_)  {

#line 966 "../.././gcc/cp/cp-tree.h"
VEC_tree_pair_s_gc_reserve(vec_, 1); 
#line 966 "../.././gcc/cp/cp-tree.h"
return VEC_tree_pair_s_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 966 "../.././gcc/cp/cp-tree.h"
static __inline__  tree_pair_s *VEC_tree_pair_s_gc_safe_insert( VEC_tree_pair_s_gc **vec_, unsigned ix_, const  tree_pair_s *obj_)  {

#line 966 "../.././gcc/cp/cp-tree.h"
VEC_tree_pair_s_gc_reserve(vec_, 1); 
#line 966 "../.././gcc/cp/cp-tree.h"
return VEC_tree_pair_s_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 966 "../.././gcc/cp/cp-tree.h"
struct vec_swallow_trailing_semi ; 
#line 983 "../.././gcc/cp/cp-tree.h"
struct lang_type_header {unsigned int is_lang_type_class:1; unsigned int has_type_conversion:1; unsigned int has_init_ref:1; unsigned int has_default_ctor:1; unsigned int const_needs_init:1; unsigned int ref_needs_init:1; unsigned int has_const_assign_ref:1; unsigned int spare:1; }; 
# 959 "../.././gcc/cp/cp-tree.h" 
# 998 "../.././gcc/cp/cp-tree.h" 
# 1070 "../.././gcc/cp/cp-tree.h" 
struct lang_type_class {struct lang_type_header h; unsigned char align; unsigned has_mutable:1; unsigned com_interface:1; unsigned non_pod_class:1; unsigned nearly_empty_p:1; unsigned user_align:1; unsigned has_assign_ref:1; unsigned has_new:1; unsigned has_array_new:1; unsigned gets_delete:2; unsigned interface_only:1; unsigned interface_unknown:1; unsigned contains_empty_class_p:1; unsigned anon_aggr:1; unsigned non_zero_init:1; unsigned empty_p:1; unsigned vec_new_uses_cookie:1; unsigned declared_class:1; unsigned diamond_shaped:1; unsigned repeated_base:1; unsigned being_defined:1; unsigned java_interface:1; unsigned debug_requested:1; unsigned fields_readonly:1; unsigned use_template:2; unsigned ptrmemfunc_flag:1; unsigned was_anonymous:1; unsigned lazy_default_ctor:1; unsigned lazy_copy_ctor:1; unsigned lazy_assignment_op:1; unsigned lazy_destructor:1; unsigned has_const_init_ref:1; unsigned has_complex_init_ref:1; unsigned has_complex_assign_ref:1; unsigned non_aggregate:1; unsigned dummy:12;  tree primary_base;  VEC_tree_pair_s_gc *vcall_indices;  tree vtables;  tree typeinfo_var;  VEC_tree_gc *vbases;  binding_table nested_udts;  tree as_base;  VEC_tree_gc *pure_virtuals;  tree friend_classes;  VEC_tree_gc *methods;  tree key_method;  tree decl_list;  tree template_info;  tree befriending_classes;  tree objc_info; }; 
#line 1076 "../.././gcc/cp/cp-tree.h"
struct lang_type_ptrmem {struct lang_type_header h;  tree record; }; 
#line 1086 "../.././gcc/cp/cp-tree.h"
struct lang_type {union lang_type_u {struct lang_type_header h; struct lang_type_class c; struct lang_type_ptrmem ptrmem; }u; }; 
#line 1547 "../.././gcc/cp/cp-tree.h"
struct lang_decl_flags { __extension__ enum languages language:4; unsigned global_ctor_p:1; unsigned global_dtor_p:1; unsigned anticipated_p:1; unsigned template_conv_p:1; unsigned operator_attr:1; unsigned constructor_attr:1; unsigned destructor_attr:1; unsigned friend_attr:1; unsigned static_function:1; unsigned pure_virtual:1; unsigned has_in_charge_parm_p:1; unsigned has_vtt_parm_p:1; unsigned deferred:1; unsigned use_template:2; unsigned nonconverting:1; unsigned not_really_extern:1; unsigned initialized_in_class:1; unsigned assignment_operator_p:1; unsigned u1sel:1; unsigned u2sel:1; unsigned can_be_full:1; unsigned thunk_p:1; unsigned this_thunk_p:1; unsigned repo_available_p:1; unsigned hidden_friend_p:1; unsigned dummy:2; union lang_decl_u { tree template_info; struct cp_binding_level *level; }u; union lang_decl_u2 { tree access; int discriminator; }u2; }; 
#line 1602 "../.././gcc/cp/cp-tree.h"
struct lang_decl {struct lang_decl_flags decl_flags; union lang_decl_u4 {struct full_lang_decl { __extension__ enum tree_code operator_code:8; unsigned u3sel:1; unsigned pending_inline_p:1; unsigned spare:22;  tree befriending_classes;  tree context; union lang_decl_u5 { tree cloned_function; long fixed_offset; }u5; union lang_decl_u3 {struct sorted_fields_type *sorted_fields; struct cp_token_cache *pending_inline_info; struct language_function *saved_language_function; }u; }f; }u; }; 
# 1493 "../.././gcc/cp/cp-tree.h" 
# 2029 "../.././gcc/cp/cp-tree.h" 
extern  tree decl_shadowed_for_var_lookup( tree ); 
#line 2030 "../.././gcc/cp/cp-tree.h"
extern void decl_shadowed_for_var_insert( tree ,  tree ); 
#line 3018 "../.././gcc/cp/cp-tree.h"
enum tag_types {none_type=0,record_type,class_type,union_type,enum_type,typename_type}; 
#line 3027 "../.././gcc/cp/cp-tree.h"
typedef enum cp_lvalue_kind {clk_none=0,clk_ordinary=1,clk_class=2,clk_bitfield=4,clk_packed=8}cp_lvalue_kind; 
#line 3045 "../.././gcc/cp/cp-tree.h"
typedef enum tmpl_spec_kind {tsk_none,tsk_invalid_member_spec,tsk_invalid_expl_inst,tsk_excessive_parms,tsk_insufficient_parms,tsk_template,tsk_expl_spec,tsk_expl_inst}tmpl_spec_kind; 
#line 3056 "../.././gcc/cp/cp-tree.h"
typedef enum access_kind {ak_none=0,ak_public=1,ak_protected=2,ak_private=3}access_kind; 
#line 3074 "../.././gcc/cp/cp-tree.h"
typedef enum special_function_kind {sfk_none=0,sfk_constructor,sfk_copy_constructor,sfk_assignment_operator,sfk_destructor,sfk_complete_destructor,sfk_base_destructor,sfk_deleting_destructor,sfk_conversion}special_function_kind; 
# 3011 "../.././gcc/cp/cp-tree.h" 
# 3097 "../.././gcc/cp/cp-tree.h" 
typedef enum linkage_kind {lk_none,lk_internal,lk_external}linkage_kind; 
#line 3115 "../.././gcc/cp/cp-tree.h"
typedef enum tsubst_flags_t {tf_none=0,tf_error=1 << 0,tf_warning=1 << 1,tf_ignore_bad_quals=1 << 2,tf_keep_type_decl=1 << 3,tf_ptrmem_ok=1 << 4,tf_user=1 << 5,tf_conv=1 << 6}tsubst_flags_t; 
#line 3126 "../.././gcc/cp/cp-tree.h"
typedef enum base_access {ba_any=0,ba_unique=1 << 0,ba_check_bit=1 << 1,ba_check=ba_unique | ba_check_bit,ba_ignore_scope=1 << 2,ba_quiet=1 << 3}base_access; 
#line 3133 "../.././gcc/cp/cp-tree.h"
typedef enum deferring_kind {dk_no_deferred=0,dk_deferred=1,dk_no_check=2}deferring_kind; 
#line 3146 "../.././gcc/cp/cp-tree.h"
typedef enum base_kind {bk_inaccessible=(-3),bk_ambig=(-2),bk_not_base=(-1),bk_same_type=0,bk_proper_base=1,bk_via_virtual=2}base_kind; 
#line 3154 "../.././gcc/cp/cp-tree.h"
extern  tree integer_two_node; 
#line 3155 "../.././gcc/cp/cp-tree.h"
extern  tree integer_three_node; 
#line 3160 "../.././gcc/cp/cp-tree.h"
extern int function_depth; 
#line 3172 "../.././gcc/cp/cp-tree.h"
typedef enum unification_kind_t {DEDUCE_CALL,DEDUCE_CONV,DEDUCE_EXACT}unification_kind_t; 
#line 3185 "../.././gcc/cp/cp-tree.h"
extern int current_class_depth; 
#line 3189 "../.././gcc/cp/cp-tree.h"
extern  VEC_tree_gc *local_classes; 
# 3185 "../.././gcc/cp/cp-tree.h" 
# 3289 "../.././gcc/cp/cp-tree.h" 
extern int at_eof; 
#line 3295 "../.././gcc/cp/cp-tree.h"
extern  tree static_aggregates; 
#line 3299 "../.././gcc/cp/cp-tree.h"
extern  tree static_ctors; 
#line 3300 "../.././gcc/cp/cp-tree.h"
extern  tree static_dtors; 
#line 3302 "../.././gcc/cp/cp-tree.h"
enum overload_flags {NO_SPECIAL=0,DTOR_FLAG,OP_FLAG,TYPENAME_FLAG}; 
#line 3479 "../.././gcc/cp/cp-tree.h"
extern void init_reswords(void ); 
#line 3484 "../.././gcc/cp/cp-tree.h"
extern const char **opname_tab,**assignop_tab; 
#line 3496 "../.././gcc/cp/cp-tree.h"
typedef struct operator_name_info_t { tree identifier; const char *name; const char *mangled_name; int arity; }operator_name_info_t; 
#line 3500 "../.././gcc/cp/cp-tree.h"
extern  operator_name_info_t operator_name_info[((int )LAST_CPLUS_TREE_CODE)]; 
#line 3503 "../.././gcc/cp/cp-tree.h"
extern  operator_name_info_t assignment_operator_name_info[((int )LAST_CPLUS_TREE_CODE)]; 
#line 3508 "../.././gcc/cp/cp-tree.h"
typedef int cp_cv_quals; 
#line 3521 "../.././gcc/cp/cp-tree.h"
typedef enum cp_storage_class {sc_none=0,sc_auto,sc_register,sc_static,sc_extern,sc_mutable}cp_storage_class; 
#line 3542 "../.././gcc/cp/cp-tree.h"
typedef enum cp_decl_spec {ds_first,ds_signed=ds_first,ds_unsigned,ds_short,ds_long,ds_const,ds_volatile,ds_restrict,ds_inline,ds_virtual,ds_explicit,ds_friend,ds_typedef,ds_complex,ds_thread,ds_last}cp_decl_spec; 
#line 3576 "../.././gcc/cp/cp-tree.h"
typedef struct cp_decl_specifier_seq {unsigned specs[((int )ds_last)];  tree type;  tree attributes;  tree redefined_builtin_type;  cp_storage_class storage_class; unsigned int user_defined_type_p:1; unsigned int multiple_types_p:1; unsigned int multiple_storage_classes_p:1; unsigned int any_specifiers_p:1; unsigned int explicit_int_p:1; unsigned int explicit_char_p:1; }cp_decl_specifier_seq; 
#line 3588 "../.././gcc/cp/cp-tree.h"
typedef enum cp_declarator_kind {cdk_id,cdk_function,cdk_array,cdk_pointer,cdk_reference,cdk_ptrmem,cdk_error}cp_declarator_kind; 
#line 3592 "../.././gcc/cp/cp-tree.h"
typedef struct cp_declarator cp_declarator; 
#line 3594 "../.././gcc/cp/cp-tree.h"
typedef struct cp_parameter_declarator cp_parameter_declarator; 
#line 3609 "../.././gcc/cp/cp-tree.h"
struct cp_parameter_declarator { cp_parameter_declarator *next;  cp_decl_specifier_seq decl_specifiers;  cp_declarator *declarator;  tree default_argument; unsigned char ellipsis_p; }; 
#line 3656 "../.././gcc/cp/cp-tree.h"
struct cp_declarator { cp_declarator_kind kind;  tree attributes;  cp_declarator *declarator;  location_t id_loc; union {struct { tree qualifying_scope;  tree unqualified_name;  special_function_kind sfk; }id; struct { cp_parameter_declarator *parameters;  cp_cv_quals qualifiers;  tree exception_specification; }function; struct { tree bounds; }array; struct { cp_cv_quals qualifiers;  tree class_type; }pointer; }u; }; 
#line 3659 "../.././gcc/cp/cp-tree.h"
extern  cp_declarator *cp_error_declarator; 
#line 3663 "../.././gcc/cp/cp-tree.h"
extern  cp_parameter_declarator *no_parameters; 
#line 3666 "../.././gcc/cp/cp-tree.h"
extern unsigned char check_dtor_name( tree ,  tree ); 
#line 3668 "../.././gcc/cp/cp-tree.h"
extern  tree build_vfield_ref( tree ,  tree ); 
#line 3669 "../.././gcc/cp/cp-tree.h"
extern  tree build_conditional_expr( tree ,  tree ,  tree ); 
#line 3670 "../.././gcc/cp/cp-tree.h"
extern  tree build_addr_func( tree ); 
#line 3671 "../.././gcc/cp/cp-tree.h"
extern  tree build_call( tree ,  tree ); 
#line 3672 "../.././gcc/cp/cp-tree.h"
extern unsigned char null_ptr_cst_p( tree ); 
#line 3673 "../.././gcc/cp/cp-tree.h"
extern unsigned char sufficient_parms_p( tree ); 
#line 3674 "../.././gcc/cp/cp-tree.h"
extern  tree type_decays_to( tree ); 
#line 3675 "../.././gcc/cp/cp-tree.h"
extern  tree build_user_type_conversion( tree ,  tree , int ); 
#line 3676 "../.././gcc/cp/cp-tree.h"
extern  tree build_new_function_call( tree ,  tree , unsigned char ); 
#line 3677 "../.././gcc/cp/cp-tree.h"
extern  tree build_operator_new_call( tree ,  tree ,  tree *,  tree *); 
#line 3678 "../.././gcc/cp/cp-tree.h"
extern  tree build_new_method_call( tree ,  tree ,  tree ,  tree , int ); 
#line 3679 "../.././gcc/cp/cp-tree.h"
extern  tree build_special_member_call( tree ,  tree ,  tree ,  tree , int ); 
#line 3680 "../.././gcc/cp/cp-tree.h"
extern  tree build_new_op(enum tree_code , int ,  tree ,  tree ,  tree , unsigned char *); 
#line 3681 "../.././gcc/cp/cp-tree.h"
extern  tree build_op_delete_call(enum tree_code ,  tree ,  tree , unsigned char ,  tree ); 
#line 3682 "../.././gcc/cp/cp-tree.h"
extern unsigned char can_convert( tree ,  tree ); 
#line 3683 "../.././gcc/cp/cp-tree.h"
extern unsigned char can_convert_arg( tree ,  tree ,  tree , int ); 
#line 3684 "../.././gcc/cp/cp-tree.h"
extern unsigned char can_convert_arg_bad( tree ,  tree ,  tree ); 
#line 3685 "../.././gcc/cp/cp-tree.h"
extern unsigned char enforce_access( tree ,  tree ); 
#line 3686 "../.././gcc/cp/cp-tree.h"
extern  tree convert_default_arg( tree ,  tree ,  tree , int ); 
#line 3687 "../.././gcc/cp/cp-tree.h"
extern  tree convert_arg_to_ellipsis( tree ); 
#line 3688 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_va_arg( tree ,  tree ); 
#line 3689 "../.././gcc/cp/cp-tree.h"
extern  tree cxx_type_promotes_to( tree ); 
#line 3690 "../.././gcc/cp/cp-tree.h"
extern  tree type_passed_as( tree ); 
#line 3691 "../.././gcc/cp/cp-tree.h"
extern  tree convert_for_arg_passing( tree ,  tree ); 
#line 3692 "../.././gcc/cp/cp-tree.h"
extern unsigned char is_properly_derived_from( tree ,  tree ); 
#line 3693 "../.././gcc/cp/cp-tree.h"
extern  tree initialize_reference( tree ,  tree ,  tree ,  tree *); 
#line 3694 "../.././gcc/cp/cp-tree.h"
extern  tree make_temporary_var_for_ref_to_temp( tree ,  tree ); 
#line 3695 "../.././gcc/cp/cp-tree.h"
extern  tree strip_top_quals( tree ); 
#line 3696 "../.././gcc/cp/cp-tree.h"
extern  tree perform_implicit_conversion( tree ,  tree ); 
#line 3697 "../.././gcc/cp/cp-tree.h"
extern  tree perform_direct_initialization_if_possible( tree ,  tree , unsigned char ); 
#line 3698 "../.././gcc/cp/cp-tree.h"
extern  tree in_charge_arg_for_name( tree ); 
#line 3699 "../.././gcc/cp/cp-tree.h"
extern  tree build_cxx_call( tree ,  tree ); 
#line 3706 "../.././gcc/cp/cp-tree.h"
extern  tree build_base_path(enum tree_code ,  tree ,  tree , int ); 
#line 3707 "../.././gcc/cp/cp-tree.h"
extern  tree convert_to_base( tree ,  tree , unsigned char , unsigned char ); 
#line 3708 "../.././gcc/cp/cp-tree.h"
extern  tree convert_to_base_statically( tree ,  tree ); 
#line 3709 "../.././gcc/cp/cp-tree.h"
extern  tree build_vtbl_ref( tree ,  tree ); 
#line 3710 "../.././gcc/cp/cp-tree.h"
extern  tree build_vfn_ref( tree ,  tree ); 
#line 3711 "../.././gcc/cp/cp-tree.h"
extern  tree get_vtable_decl( tree , int ); 
#line 3713 "../.././gcc/cp/cp-tree.h"
extern void resort_type_method_vec(void *, void *,  gt_pointer_operator , void *); 
#line 3714 "../.././gcc/cp/cp-tree.h"
extern unsigned char add_method( tree ,  tree ,  tree ); 
#line 3715 "../.././gcc/cp/cp-tree.h"
extern int currently_open_class( tree ); 
#line 3716 "../.././gcc/cp/cp-tree.h"
extern  tree currently_open_derived_class( tree ); 
#line 3717 "../.././gcc/cp/cp-tree.h"
extern  tree finish_struct( tree ,  tree ); 
#line 3718 "../.././gcc/cp/cp-tree.h"
extern void finish_struct_1( tree ); 
#line 3719 "../.././gcc/cp/cp-tree.h"
extern int resolves_to_fixed_type_p( tree , int *); 
#line 3720 "../.././gcc/cp/cp-tree.h"
extern void init_class_processing(void ); 
#line 3721 "../.././gcc/cp/cp-tree.h"
extern int is_empty_class( tree ); 
#line 3722 "../.././gcc/cp/cp-tree.h"
extern void pushclass( tree ); 
#line 3723 "../.././gcc/cp/cp-tree.h"
extern void popclass(void ); 
#line 3724 "../.././gcc/cp/cp-tree.h"
extern void push_nested_class( tree ); 
#line 3725 "../.././gcc/cp/cp-tree.h"
extern void pop_nested_class(void ); 
#line 3726 "../.././gcc/cp/cp-tree.h"
extern int current_lang_depth(void ); 
#line 3727 "../.././gcc/cp/cp-tree.h"
extern void push_lang_context( tree ); 
#line 3728 "../.././gcc/cp/cp-tree.h"
extern void pop_lang_context(void ); 
#line 3729 "../.././gcc/cp/cp-tree.h"
extern  tree instantiate_type( tree ,  tree ,  tsubst_flags_t ); 
#line 3730 "../.././gcc/cp/cp-tree.h"
extern void print_class_statistics(void ); 
#line 3731 "../.././gcc/cp/cp-tree.h"
extern void cxx_print_statistics(void ); 
#line 3732 "../.././gcc/cp/cp-tree.h"
extern void cxx_print_xnode( FILE *,  tree , int ); 
#line 3733 "../.././gcc/cp/cp-tree.h"
extern void cxx_print_decl( FILE *,  tree , int ); 
#line 3734 "../.././gcc/cp/cp-tree.h"
extern void cxx_print_type( FILE *,  tree , int ); 
#line 3735 "../.././gcc/cp/cp-tree.h"
extern void cxx_print_identifier( FILE *,  tree , int ); 
#line 3737 "../.././gcc/cp/cp-tree.h"
extern void cxx_print_error_function(struct diagnostic_context *, const char *); 
#line 3738 "../.././gcc/cp/cp-tree.h"
extern void build_self_reference(void ); 
#line 3739 "../.././gcc/cp/cp-tree.h"
extern int same_signature_p( tree ,  tree ); 
#line 3740 "../.././gcc/cp/cp-tree.h"
extern void warn_hidden( tree ); 
#line 3741 "../.././gcc/cp/cp-tree.h"
extern void maybe_add_class_template_decl_list( tree ,  tree , int ); 
#line 3742 "../.././gcc/cp/cp-tree.h"
extern void unreverse_member_declarations( tree ); 
#line 3743 "../.././gcc/cp/cp-tree.h"
extern void invalidate_class_lookup_cache(void ); 
#line 3744 "../.././gcc/cp/cp-tree.h"
extern void maybe_note_name_used_in_class( tree ,  tree ); 
#line 3745 "../.././gcc/cp/cp-tree.h"
extern void note_name_declared_in_class( tree ,  tree ); 
#line 3746 "../.././gcc/cp/cp-tree.h"
extern  tree get_vtbl_decl_for_binfo( tree ); 
#line 3747 "../.././gcc/cp/cp-tree.h"
extern  tree get_vtt_name( tree ); 
#line 3748 "../.././gcc/cp/cp-tree.h"
extern  tree get_primary_binfo( tree ); 
#line 3749 "../.././gcc/cp/cp-tree.h"
extern void debug_class( tree ); 
#line 3750 "../.././gcc/cp/cp-tree.h"
extern void debug_thunks( tree ); 
#line 3751 "../.././gcc/cp/cp-tree.h"
extern  tree cp_fold_obj_type_ref( tree ,  tree ); 
#line 3752 "../.././gcc/cp/cp-tree.h"
extern void set_linkage_according_to_type( tree ,  tree ); 
#line 3753 "../.././gcc/cp/cp-tree.h"
extern void determine_key_method( tree ); 
#line 3754 "../.././gcc/cp/cp-tree.h"
extern void check_for_override( tree ,  tree ); 
#line 3755 "../.././gcc/cp/cp-tree.h"
extern void push_class_stack(void ); 
#line 3756 "../.././gcc/cp/cp-tree.h"
extern void pop_class_stack(void ); 
#line 3759 "../.././gcc/cp/cp-tree.h"
extern  tree convert_to_reference( tree ,  tree , int , int ,  tree ); 
#line 3760 "../.././gcc/cp/cp-tree.h"
extern  tree convert_from_reference( tree ); 
#line 3761 "../.././gcc/cp/cp-tree.h"
extern  tree force_rvalue( tree ); 
#line 3762 "../.././gcc/cp/cp-tree.h"
extern  tree ocp_convert( tree ,  tree , int , int ); 
#line 3763 "../.././gcc/cp/cp-tree.h"
extern  tree cp_convert( tree ,  tree ); 
#line 3764 "../.././gcc/cp/cp-tree.h"
extern  tree convert_to_void( tree , const char *); 
#line 3765 "../.././gcc/cp/cp-tree.h"
extern  tree convert_force( tree ,  tree , int ); 
#line 3766 "../.././gcc/cp/cp-tree.h"
extern  tree build_type_conversion( tree ,  tree ); 
#line 3767 "../.././gcc/cp/cp-tree.h"
extern  tree build_expr_type_conversion(int ,  tree , unsigned char ); 
#line 3768 "../.././gcc/cp/cp-tree.h"
extern  tree type_promotes_to( tree ); 
#line 3769 "../.././gcc/cp/cp-tree.h"
extern  tree perform_qualification_conversions( tree ,  tree ); 
#line 3770 "../.././gcc/cp/cp-tree.h"
extern void clone_function_decl( tree , int ); 
#line 3771 "../.././gcc/cp/cp-tree.h"
extern void adjust_clone_args( tree ); 
#line 3774 "../.././gcc/cp/cp-tree.h"
extern  tree poplevel(int , int , int ); 
#line 3775 "../.././gcc/cp/cp-tree.h"
extern void insert_block( tree ); 
#line 3776 "../.././gcc/cp/cp-tree.h"
extern  tree pushdecl( tree ); 
#line 3777 "../.././gcc/cp/cp-tree.h"
extern  tree pushdecl_maybe_friend( tree , unsigned char ); 
#line 3778 "../.././gcc/cp/cp-tree.h"
extern void cxx_init_decl_processing(void ); 
#line 3780 "../.././gcc/cp/cp-tree.h"
enum cp_tree_node_structure_enum cp_tree_node_structure(union lang_tree_node *); 
#line 3781 "../.././gcc/cp/cp-tree.h"
extern unsigned char cxx_mark_addressable( tree ); 
#line 3782 "../.././gcc/cp/cp-tree.h"
extern void cxx_push_function_context(struct function *); 
#line 3783 "../.././gcc/cp/cp-tree.h"
extern void cxx_pop_function_context(struct function *); 
#line 3784 "../.././gcc/cp/cp-tree.h"
extern void maybe_push_cleanup_level( tree ); 
#line 3785 "../.././gcc/cp/cp-tree.h"
extern void finish_scope(void ); 
#line 3786 "../.././gcc/cp/cp-tree.h"
extern void push_switch( tree ); 
#line 3787 "../.././gcc/cp/cp-tree.h"
extern void pop_switch(void ); 
#line 3788 "../.././gcc/cp/cp-tree.h"
extern  tree pushtag( tree ,  tree ,  tag_scope ); 
#line 3789 "../.././gcc/cp/cp-tree.h"
extern  tree make_anon_name(void ); 
#line 3790 "../.././gcc/cp/cp-tree.h"
extern int decls_match( tree ,  tree ); 
#line 3791 "../.././gcc/cp/cp-tree.h"
extern  tree duplicate_decls( tree ,  tree , unsigned char ); 
#line 3792 "../.././gcc/cp/cp-tree.h"
extern  tree pushdecl_top_level( tree ); 
#line 3793 "../.././gcc/cp/cp-tree.h"
extern  tree pushdecl_top_level_maybe_friend( tree , unsigned char ); 
#line 3794 "../.././gcc/cp/cp-tree.h"
extern  tree pushdecl_top_level_and_finish( tree ,  tree ); 
#line 3795 "../.././gcc/cp/cp-tree.h"
extern  tree push_using_decl( tree ,  tree ); 
#line 3796 "../.././gcc/cp/cp-tree.h"
extern  tree declare_local_label( tree ); 
#line 3797 "../.././gcc/cp/cp-tree.h"
extern  tree define_label( location_t ,  tree ); 
#line 3798 "../.././gcc/cp/cp-tree.h"
extern void check_goto( tree ); 
#line 3799 "../.././gcc/cp/cp-tree.h"
extern  tree make_typename_type( tree ,  tree , enum tag_types ,  tsubst_flags_t ); 
#line 3800 "../.././gcc/cp/cp-tree.h"
extern  tree make_unbound_class_template( tree ,  tree ,  tree ,  tsubst_flags_t ); 
#line 3801 "../.././gcc/cp/cp-tree.h"
extern  tree check_for_out_of_scope_variable( tree ); 
#line 3802 "../.././gcc/cp/cp-tree.h"
extern  tree build_library_fn( tree ,  tree ); 
#line 3803 "../.././gcc/cp/cp-tree.h"
extern  tree build_library_fn_ptr(const char *,  tree ); 
#line 3804 "../.././gcc/cp/cp-tree.h"
extern  tree build_cp_library_fn_ptr(const char *,  tree ); 
#line 3805 "../.././gcc/cp/cp-tree.h"
extern  tree push_library_fn( tree ,  tree ); 
#line 3806 "../.././gcc/cp/cp-tree.h"
extern  tree push_void_library_fn( tree ,  tree ); 
#line 3807 "../.././gcc/cp/cp-tree.h"
extern  tree push_throw_library_fn( tree ,  tree ); 
#line 3808 "../.././gcc/cp/cp-tree.h"
extern  tree check_tag_decl( cp_decl_specifier_seq *); 
#line 3809 "../.././gcc/cp/cp-tree.h"
extern  tree shadow_tag( cp_decl_specifier_seq *); 
#line 3810 "../.././gcc/cp/cp-tree.h"
extern  tree groktypename( cp_decl_specifier_seq *, const  cp_declarator *); 
#line 3811 "../.././gcc/cp/cp-tree.h"
extern  tree start_decl(const  cp_declarator *,  cp_decl_specifier_seq *, int ,  tree ,  tree ,  tree *); 
#line 3812 "../.././gcc/cp/cp-tree.h"
extern void start_decl_1( tree ); 
#line 3813 "../.././gcc/cp/cp-tree.h"
extern void cp_finish_decl( tree ,  tree , unsigned char ,  tree , int ); 
#line 3814 "../.././gcc/cp/cp-tree.h"
extern void finish_decl( tree ,  tree ,  tree ); 
#line 3815 "../.././gcc/cp/cp-tree.h"
extern int cp_complete_array_type( tree *,  tree , unsigned char ); 
#line 3816 "../.././gcc/cp/cp-tree.h"
extern  tree build_ptrmemfunc_type( tree ); 
#line 3817 "../.././gcc/cp/cp-tree.h"
extern  tree build_ptrmem_type( tree ,  tree ); 
#line 3819 "../.././gcc/cp/cp-tree.h"
extern int copy_fn_p( tree ); 
#line 3820 "../.././gcc/cp/cp-tree.h"
extern  tree get_scope_of_declarator(const  cp_declarator *); 
#line 3821 "../.././gcc/cp/cp-tree.h"
extern void grok_special_member_properties( tree ); 
#line 3822 "../.././gcc/cp/cp-tree.h"
extern int grok_ctor_properties( tree ,  tree ); 
#line 3823 "../.././gcc/cp/cp-tree.h"
extern void grok_op_properties( tree , unsigned char ); 
#line 3824 "../.././gcc/cp/cp-tree.h"
extern  tree xref_tag(enum tag_types ,  tree ,  tag_scope , unsigned char ); 
#line 3825 "../.././gcc/cp/cp-tree.h"
extern  tree xref_tag_from_type( tree ,  tree ,  tag_scope ); 
#line 3826 "../.././gcc/cp/cp-tree.h"
extern void xref_basetypes( tree ,  tree ); 
#line 3827 "../.././gcc/cp/cp-tree.h"
extern  tree start_enum( tree ); 
#line 3828 "../.././gcc/cp/cp-tree.h"
extern void finish_enum( tree ); 
#line 3829 "../.././gcc/cp/cp-tree.h"
extern void build_enumerator( tree ,  tree ,  tree ); 
#line 3830 "../.././gcc/cp/cp-tree.h"
extern void start_preparsed_function( tree ,  tree , int ); 
#line 3831 "../.././gcc/cp/cp-tree.h"
extern int start_function( cp_decl_specifier_seq *, const  cp_declarator *,  tree ); 
#line 3832 "../.././gcc/cp/cp-tree.h"
extern  tree begin_function_body(void ); 
#line 3833 "../.././gcc/cp/cp-tree.h"
extern void finish_function_body( tree ); 
#line 3834 "../.././gcc/cp/cp-tree.h"
extern  tree finish_function(int ); 
#line 3835 "../.././gcc/cp/cp-tree.h"
extern  tree start_method( cp_decl_specifier_seq *, const  cp_declarator *,  tree ); 
#line 3836 "../.././gcc/cp/cp-tree.h"
extern  tree finish_method( tree ); 
#line 3837 "../.././gcc/cp/cp-tree.h"
extern void maybe_register_incomplete_var( tree ); 
#line 3838 "../.././gcc/cp/cp-tree.h"
extern void complete_vars( tree ); 
#line 3839 "../.././gcc/cp/cp-tree.h"
extern void finish_stmt(void ); 
#line 3840 "../.././gcc/cp/cp-tree.h"
extern void print_other_binding_stack(struct cp_binding_level *); 
#line 3841 "../.././gcc/cp/cp-tree.h"
extern void revert_static_member_fn( tree ); 
#line 3842 "../.././gcc/cp/cp-tree.h"
extern void fixup_anonymous_aggr( tree ); 
#line 3843 "../.././gcc/cp/cp-tree.h"
extern int check_static_variable_definition( tree ,  tree ); 
#line 3844 "../.././gcc/cp/cp-tree.h"
extern  tree compute_array_index_type( tree ,  tree ); 
#line 3845 "../.././gcc/cp/cp-tree.h"
extern  tree check_default_argument( tree ,  tree ); 
#line 3846 "../.././gcc/cp/cp-tree.h"
typedef int (*walk_namespaces_fn)( tree , void *); 
#line 3848 "../.././gcc/cp/cp-tree.h"
extern int walk_namespaces( walk_namespaces_fn , void *); 
#line 3849 "../.././gcc/cp/cp-tree.h"
extern int wrapup_globals_for_namespace( tree , void *); 
#line 3850 "../.././gcc/cp/cp-tree.h"
extern  tree create_implicit_typedef( tree ,  tree ); 
#line 3851 "../.././gcc/cp/cp-tree.h"
extern  tree maybe_push_decl( tree ); 
#line 3852 "../.././gcc/cp/cp-tree.h"
extern  tree force_target_expr( tree ,  tree ); 
#line 3853 "../.././gcc/cp/cp-tree.h"
extern  tree build_target_expr_with_type( tree ,  tree ); 
#line 3854 "../.././gcc/cp/cp-tree.h"
extern int local_variable_p( tree ); 
#line 3855 "../.././gcc/cp/cp-tree.h"
extern int nonstatic_local_decl_p( tree ); 
#line 3856 "../.././gcc/cp/cp-tree.h"
extern  tree declare_global_var( tree ,  tree ); 
#line 3857 "../.././gcc/cp/cp-tree.h"
extern  tree register_dtor_fn( tree ); 
#line 3858 "../.././gcc/cp/cp-tree.h"
extern  tmpl_spec_kind current_tmpl_spec_kind(int ); 
#line 3859 "../.././gcc/cp/cp-tree.h"
extern  tree cp_fname_init(const char *,  tree *); 
#line 3864 "../.././gcc/cp/cp-tree.h"
extern  tree builtin_function(const char *name,  tree type, int code, enum built_in_class cl, const char *libname,  tree attrs); 
#line 3865 "../.././gcc/cp/cp-tree.h"
extern  tree check_elaborated_type_specifier(enum tag_types ,  tree , unsigned char ); 
#line 3866 "../.././gcc/cp/cp-tree.h"
extern void warn_extern_redeclared_static( tree ,  tree ); 
#line 3867 "../.././gcc/cp/cp-tree.h"
extern const char *cxx_comdat_group( tree ); 
#line 3868 "../.././gcc/cp/cp-tree.h"
extern unsigned char cp_missing_noreturn_ok_p( tree ); 
#line 3869 "../.././gcc/cp/cp-tree.h"
extern void initialize_artificial_var( tree ,  tree ); 
#line 3870 "../.././gcc/cp/cp-tree.h"
extern  tree check_var_type( tree ,  tree ); 
#line 3871 "../.././gcc/cp/cp-tree.h"
extern  tree reshape_init( tree ,  tree ); 
#line 3873 "../.././gcc/cp/cp-tree.h"
extern unsigned char have_extern_spec; 
#line 3876 "../.././gcc/cp/cp-tree.h"
extern unsigned char check_java_method( tree ); 
#line 3877 "../.././gcc/cp/cp-tree.h"
extern  cp_cv_quals grok_method_quals( tree ,  tree ,  cp_cv_quals ); 
#line 3878 "../.././gcc/cp/cp-tree.h"
extern void maybe_retrofit_in_chrg( tree ); 
#line 3879 "../.././gcc/cp/cp-tree.h"
extern void maybe_make_one_only( tree ); 
#line 3882 "../.././gcc/cp/cp-tree.h"
extern void grokclassfn( tree ,  tree , enum overload_flags ,  cp_cv_quals ); 
#line 3883 "../.././gcc/cp/cp-tree.h"
extern  tree grok_array_decl( tree ,  tree ); 
#line 3884 "../.././gcc/cp/cp-tree.h"
extern  tree delete_sanity( tree ,  tree , unsigned char , int ); 
#line 3885 "../.././gcc/cp/cp-tree.h"
extern  tree check_classfn( tree ,  tree ,  tree ); 
#line 3886 "../.././gcc/cp/cp-tree.h"
extern void check_member_template( tree ); 
#line 3888 "../.././gcc/cp/cp-tree.h"
extern  tree grokfield(const  cp_declarator *,  cp_decl_specifier_seq *,  tree , unsigned char ,  tree ,  tree ); 
#line 3890 "../.././gcc/cp/cp-tree.h"
extern  tree grokbitfield(const  cp_declarator *,  cp_decl_specifier_seq *,  tree ); 
#line 3891 "../.././gcc/cp/cp-tree.h"
extern void cplus_decl_attributes( tree *,  tree , int ); 
#line 3892 "../.././gcc/cp/cp-tree.h"
extern void finish_anon_union( tree ); 
#line 3893 "../.././gcc/cp/cp-tree.h"
extern void cp_finish_file(void ); 
#line 3894 "../.././gcc/cp/cp-tree.h"
extern  tree coerce_new_type( tree ); 
#line 3895 "../.././gcc/cp/cp-tree.h"
extern  tree coerce_delete_type( tree ); 
#line 3896 "../.././gcc/cp/cp-tree.h"
extern void comdat_linkage( tree ); 
#line 3897 "../.././gcc/cp/cp-tree.h"
extern void determine_visibility( tree ); 
#line 3898 "../.././gcc/cp/cp-tree.h"
extern void import_export_decl( tree ); 
#line 3899 "../.././gcc/cp/cp-tree.h"
extern  tree build_cleanup( tree ); 
#line 3900 "../.././gcc/cp/cp-tree.h"
extern  tree build_offset_ref_call_from_tree( tree ,  tree ); 
#line 3901 "../.././gcc/cp/cp-tree.h"
extern void check_default_args( tree ); 
#line 3902 "../.././gcc/cp/cp-tree.h"
extern void mark_used( tree ); 
#line 3903 "../.././gcc/cp/cp-tree.h"
extern void finish_static_data_member_decl( tree ,  tree , unsigned char ,  tree , int ); 
#line 3904 "../.././gcc/cp/cp-tree.h"
extern  tree cp_build_parm_decl( tree ,  tree ); 
#line 3905 "../.././gcc/cp/cp-tree.h"
extern  tree get_guard( tree ); 
#line 3906 "../.././gcc/cp/cp-tree.h"
extern  tree get_guard_cond( tree ); 
#line 3907 "../.././gcc/cp/cp-tree.h"
extern  tree set_guard( tree ); 
#line 3908 "../.././gcc/cp/cp-tree.h"
extern  tree cxx_callgraph_analyze_expr( tree *, int *,  tree ); 
#line 3909 "../.././gcc/cp/cp-tree.h"
extern void mark_needed( tree ); 
#line 3910 "../.././gcc/cp/cp-tree.h"
extern unsigned char decl_needed_p( tree ); 
#line 3911 "../.././gcc/cp/cp-tree.h"
extern void note_vague_linkage_fn( tree ); 
#line 3914 "../.././gcc/cp/cp-tree.h"
extern void init_error(void ); 
#line 3915 "../.././gcc/cp/cp-tree.h"
extern const char *type_as_string( tree , int ); 
#line 3916 "../.././gcc/cp/cp-tree.h"
extern const char *decl_as_string( tree , int ); 
#line 3917 "../.././gcc/cp/cp-tree.h"
extern const char *expr_as_string( tree , int ); 
#line 3918 "../.././gcc/cp/cp-tree.h"
extern const char *lang_decl_name( tree , int ); 
#line 3919 "../.././gcc/cp/cp-tree.h"
extern const char *language_to_string(enum languages ); 
#line 3920 "../.././gcc/cp/cp-tree.h"
extern const char *class_key_or_enum_as_string( tree ); 
#line 3921 "../.././gcc/cp/cp-tree.h"
extern void print_instantiation_context(void ); 
#line 3924 "../.././gcc/cp/cp-tree.h"
extern void init_exception_processing(void ); 
#line 3925 "../.././gcc/cp/cp-tree.h"
extern  tree expand_start_catch_block( tree ); 
#line 3926 "../.././gcc/cp/cp-tree.h"
extern void expand_end_catch_block(void ); 
#line 3927 "../.././gcc/cp/cp-tree.h"
extern  tree build_exc_ptr(void ); 
#line 3928 "../.././gcc/cp/cp-tree.h"
extern  tree build_throw( tree ); 
#line 3929 "../.././gcc/cp/cp-tree.h"
extern int nothrow_libfn_p( tree ); 
#line 3930 "../.././gcc/cp/cp-tree.h"
extern void check_handlers( tree ); 
#line 3931 "../.././gcc/cp/cp-tree.h"
extern void choose_personality_routine(enum languages ); 
#line 3932 "../.././gcc/cp/cp-tree.h"
extern  tree eh_type_info( tree ); 
#line 3937 "../.././gcc/cp/cp-tree.h"
extern  rtx cxx_expand_expr( tree ,  rtx , enum machine_mode , int ,  rtx *); 
#line 3938 "../.././gcc/cp/cp-tree.h"
extern  tree cplus_expand_constant( tree ); 
#line 3941 "../.././gcc/cp/cp-tree.h"
extern int is_friend( tree ,  tree ); 
#line 3942 "../.././gcc/cp/cp-tree.h"
extern void make_friend_class( tree ,  tree , unsigned char ); 
#line 3943 "../.././gcc/cp/cp-tree.h"
extern void add_friend( tree ,  tree , unsigned char ); 
#line 3944 "../.././gcc/cp/cp-tree.h"
extern  tree do_friend( tree ,  tree ,  tree ,  tree , enum overload_flags ,  cp_cv_quals , int ); 
#line 3947 "../.././gcc/cp/cp-tree.h"
extern  tree expand_member_init( tree ); 
#line 3948 "../.././gcc/cp/cp-tree.h"
extern void emit_mem_initializers( tree ); 
#line 3949 "../.././gcc/cp/cp-tree.h"
extern  tree build_aggr_init( tree ,  tree , int ); 
#line 3950 "../.././gcc/cp/cp-tree.h"
extern  tree build_init( tree ,  tree , int ); 
#line 3951 "../.././gcc/cp/cp-tree.h"
extern int is_aggr_type( tree , int ); 
#line 3952 "../.././gcc/cp/cp-tree.h"
extern  tree get_type_value( tree ); 
#line 3953 "../.././gcc/cp/cp-tree.h"
extern  tree build_zero_init( tree ,  tree , unsigned char ); 
#line 3954 "../.././gcc/cp/cp-tree.h"
extern  tree build_offset_ref( tree ,  tree , unsigned char ); 
#line 3955 "../.././gcc/cp/cp-tree.h"
extern  tree build_new( tree ,  tree ,  tree ,  tree , int ); 
#line 3956 "../.././gcc/cp/cp-tree.h"
extern  tree build_vec_init( tree ,  tree ,  tree , unsigned char , int ); 
#line 3957 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_delete( tree , int ,  tree ); 
#line 3960 "../.././gcc/cp/cp-tree.h"
extern  tree build_delete( tree ,  tree ,  special_function_kind , int , int ); 
#line 3961 "../.././gcc/cp/cp-tree.h"
extern void push_base_cleanups(void ); 
#line 3963 "../.././gcc/cp/cp-tree.h"
extern  tree build_vec_delete( tree ,  tree ,  special_function_kind , int ); 
#line 3964 "../.././gcc/cp/cp-tree.h"
extern  tree create_temporary_var( tree ); 
#line 3965 "../.././gcc/cp/cp-tree.h"
extern void initialize_vtbl_ptrs( tree ); 
#line 3966 "../.././gcc/cp/cp-tree.h"
extern  tree build_java_class_ref( tree ); 
#line 3967 "../.././gcc/cp/cp-tree.h"
extern  tree integral_constant_value( tree ); 
#line 3970 "../.././gcc/cp/cp-tree.h"
extern void cxx_dup_lang_specific_decl( tree ); 
#line 3971 "../.././gcc/cp/cp-tree.h"
extern void yyungetc(int , int ); 
#line 3973 "../.././gcc/cp/cp-tree.h"
extern  tree unqualified_name_lookup_error( tree ); 
#line 3974 "../.././gcc/cp/cp-tree.h"
extern  tree unqualified_fn_lookup_error( tree ); 
#line 3975 "../.././gcc/cp/cp-tree.h"
extern  tree build_lang_decl(enum tree_code ,  tree ,  tree ); 
#line 3976 "../.././gcc/cp/cp-tree.h"
extern void retrofit_lang_decl( tree ); 
#line 3977 "../.././gcc/cp/cp-tree.h"
extern  tree copy_decl( tree ); 
#line 3978 "../.././gcc/cp/cp-tree.h"
extern  tree copy_type( tree ); 
#line 3979 "../.././gcc/cp/cp-tree.h"
extern  tree cxx_make_type(enum tree_code ); 
#line 3980 "../.././gcc/cp/cp-tree.h"
extern  tree make_aggr_type(enum tree_code ); 
#line 3981 "../.././gcc/cp/cp-tree.h"
extern void yyerror(const char *); 
#line 3982 "../.././gcc/cp/cp-tree.h"
extern void yyhook(int ); 
#line 3983 "../.././gcc/cp/cp-tree.h"
extern unsigned char cxx_init(void ); 
#line 3984 "../.././gcc/cp/cp-tree.h"
extern void cxx_finish(void ); 
#line 3987 "../.././gcc/cp/cp-tree.h"
extern void init_method(void ); 
#line 3988 "../.././gcc/cp/cp-tree.h"
extern  tree make_thunk( tree , unsigned char ,  tree ,  tree ); 
#line 3989 "../.././gcc/cp/cp-tree.h"
extern void finish_thunk( tree ); 
#line 3990 "../.././gcc/cp/cp-tree.h"
extern void use_thunk( tree , unsigned char ); 
#line 3991 "../.././gcc/cp/cp-tree.h"
extern void synthesize_method( tree ); 
#line 3993 "../.././gcc/cp/cp-tree.h"
extern  tree implicitly_declare_fn( special_function_kind ,  tree , unsigned char ); 
#line 3995 "../.././gcc/cp/cp-tree.h"
extern  tree lazily_declare_fn( special_function_kind ,  tree ); 
#line 3996 "../.././gcc/cp/cp-tree.h"
extern  tree skip_artificial_parms_for( tree ,  tree ); 
#line 3997 "../.././gcc/cp/cp-tree.h"
extern  tree make_alias_for( tree ,  tree ); 
#line 4000 "../.././gcc/cp/cp-tree.h"
extern unsigned char maybe_clone_body( tree ); 
#line 4003 "../.././gcc/cp/cp-tree.h"
extern void check_template_shadow( tree ); 
#line 4004 "../.././gcc/cp/cp-tree.h"
extern  tree get_innermost_template_args( tree , int ); 
#line 4005 "../.././gcc/cp/cp-tree.h"
extern void maybe_begin_member_template_processing( tree ); 
#line 4006 "../.././gcc/cp/cp-tree.h"
extern void maybe_end_member_template_processing(void ); 
#line 4007 "../.././gcc/cp/cp-tree.h"
extern  tree finish_member_template_decl( tree ); 
#line 4008 "../.././gcc/cp/cp-tree.h"
extern void begin_template_parm_list(void ); 
#line 4009 "../.././gcc/cp/cp-tree.h"
extern void begin_specialization(void ); 
#line 4010 "../.././gcc/cp/cp-tree.h"
extern void reset_specialization(void ); 
#line 4011 "../.././gcc/cp/cp-tree.h"
extern void end_specialization(void ); 
#line 4012 "../.././gcc/cp/cp-tree.h"
extern void begin_explicit_instantiation(void ); 
#line 4013 "../.././gcc/cp/cp-tree.h"
extern void end_explicit_instantiation(void ); 
#line 4014 "../.././gcc/cp/cp-tree.h"
extern  tree check_explicit_specialization( tree ,  tree , int , int ); 
#line 4015 "../.././gcc/cp/cp-tree.h"
extern  tree process_template_parm( tree ,  tree , unsigned char ); 
#line 4016 "../.././gcc/cp/cp-tree.h"
extern  tree end_template_parm_list( tree ); 
#line 4017 "../.././gcc/cp/cp-tree.h"
extern void end_template_decl(void ); 
#line 4018 "../.././gcc/cp/cp-tree.h"
extern  tree current_template_args(void ); 
#line 4019 "../.././gcc/cp/cp-tree.h"
extern  tree push_template_decl( tree ); 
#line 4020 "../.././gcc/cp/cp-tree.h"
extern  tree push_template_decl_real( tree , unsigned char ); 
#line 4021 "../.././gcc/cp/cp-tree.h"
extern void redeclare_class_template( tree ,  tree ); 
#line 4023 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_template_class( tree ,  tree ,  tree ,  tree , int ,  tsubst_flags_t ); 
#line 4024 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_template_function( tree ,  tree ); 
#line 4025 "../.././gcc/cp/cp-tree.h"
extern int uses_template_parms( tree ); 
#line 4026 "../.././gcc/cp/cp-tree.h"
extern int uses_template_parms_level( tree , int ); 
#line 4027 "../.././gcc/cp/cp-tree.h"
extern  tree instantiate_class_template( tree ); 
#line 4028 "../.././gcc/cp/cp-tree.h"
extern  tree instantiate_template( tree ,  tree ,  tsubst_flags_t ); 
#line 4030 "../.././gcc/cp/cp-tree.h"
extern int fn_type_unification( tree ,  tree ,  tree ,  tree ,  tree ,  unification_kind_t , int ); 
#line 4031 "../.././gcc/cp/cp-tree.h"
extern void mark_decl_instantiated( tree , int ); 
#line 4032 "../.././gcc/cp/cp-tree.h"
extern int more_specialized_fn( tree ,  tree , int ); 
#line 4033 "../.././gcc/cp/cp-tree.h"
extern void mark_class_instantiated( tree , int ); 
#line 4034 "../.././gcc/cp/cp-tree.h"
extern void do_decl_instantiation( tree ,  tree ); 
#line 4035 "../.././gcc/cp/cp-tree.h"
extern void do_type_instantiation( tree ,  tree ,  tsubst_flags_t ); 
#line 4036 "../.././gcc/cp/cp-tree.h"
extern  tree instantiate_decl( tree , int , unsigned char ); 
#line 4037 "../.././gcc/cp/cp-tree.h"
extern int push_tinst_level( tree ); 
#line 4038 "../.././gcc/cp/cp-tree.h"
extern void pop_tinst_level(void ); 
#line 4039 "../.././gcc/cp/cp-tree.h"
extern int more_specialized_class( tree ,  tree ); 
#line 4040 "../.././gcc/cp/cp-tree.h"
extern int comp_template_parms( tree ,  tree ); 
#line 4041 "../.././gcc/cp/cp-tree.h"
extern int template_class_depth( tree ); 
#line 4042 "../.././gcc/cp/cp-tree.h"
extern int is_specialization_of( tree ,  tree ); 
#line 4043 "../.././gcc/cp/cp-tree.h"
extern unsigned char is_specialization_of_friend( tree ,  tree ); 
#line 4044 "../.././gcc/cp/cp-tree.h"
extern int comp_template_args( tree ,  tree ); 
#line 4045 "../.././gcc/cp/cp-tree.h"
extern void maybe_process_partial_specialization( tree ); 
#line 4046 "../.././gcc/cp/cp-tree.h"
extern  tree most_specialized_instantiation( tree ); 
#line 4047 "../.././gcc/cp/cp-tree.h"
extern void print_candidates( tree ); 
#line 4048 "../.././gcc/cp/cp-tree.h"
extern void instantiate_pending_templates(int ); 
#line 4049 "../.././gcc/cp/cp-tree.h"
extern  tree tsubst_default_argument( tree ,  tree ,  tree ); 
#line 4051 "../.././gcc/cp/cp-tree.h"
extern  tree tsubst_copy_and_build( tree ,  tree ,  tsubst_flags_t ,  tree , unsigned char ); 
#line 4052 "../.././gcc/cp/cp-tree.h"
extern  tree most_general_template( tree ); 
#line 4053 "../.././gcc/cp/cp-tree.h"
extern  tree get_mostly_instantiated_function_type( tree ); 
#line 4054 "../.././gcc/cp/cp-tree.h"
extern int problematic_instantiation_changed(void ); 
#line 4055 "../.././gcc/cp/cp-tree.h"
extern void record_last_problematic_instantiation(void ); 
#line 4056 "../.././gcc/cp/cp-tree.h"
extern  tree current_instantiation(void ); 
#line 4057 "../.././gcc/cp/cp-tree.h"
extern  tree maybe_get_template_decl_from_type_decl( tree ); 
#line 4058 "../.././gcc/cp/cp-tree.h"
extern int processing_template_parmlist; 
#line 4059 "../.././gcc/cp/cp-tree.h"
extern unsigned char dependent_type_p( tree ); 
#line 4060 "../.././gcc/cp/cp-tree.h"
extern unsigned char any_dependent_template_arguments_p( tree ); 
#line 4061 "../.././gcc/cp/cp-tree.h"
extern unsigned char dependent_template_p( tree ); 
#line 4062 "../.././gcc/cp/cp-tree.h"
extern unsigned char dependent_template_id_p( tree ,  tree ); 
#line 4063 "../.././gcc/cp/cp-tree.h"
extern unsigned char type_dependent_expression_p( tree ); 
#line 4064 "../.././gcc/cp/cp-tree.h"
extern unsigned char any_type_dependent_arguments_p( tree ); 
#line 4065 "../.././gcc/cp/cp-tree.h"
extern unsigned char value_dependent_expression_p( tree ); 
#line 4066 "../.././gcc/cp/cp-tree.h"
extern  tree resolve_typename_type( tree , unsigned char ); 
#line 4067 "../.././gcc/cp/cp-tree.h"
extern  tree template_for_substitution( tree ); 
#line 4068 "../.././gcc/cp/cp-tree.h"
extern  tree build_non_dependent_expr( tree ); 
#line 4069 "../.././gcc/cp/cp-tree.h"
extern  tree build_non_dependent_args( tree ); 
#line 4070 "../.././gcc/cp/cp-tree.h"
extern unsigned char reregister_specialization( tree ,  tree ,  tree ); 
#line 4071 "../.././gcc/cp/cp-tree.h"
extern  tree fold_non_dependent_expr( tree ); 
#line 4072 "../.././gcc/cp/cp-tree.h"
extern  tree fold_decl_constant_value( tree ); 
#line 4075 "../.././gcc/cp/cp-tree.h"
extern void init_repo(void ); 
#line 4076 "../.././gcc/cp/cp-tree.h"
extern int repo_emit_p( tree ); 
#line 4077 "../.././gcc/cp/cp-tree.h"
extern unsigned char repo_export_class_p( tree ); 
#line 4078 "../.././gcc/cp/cp-tree.h"
extern void finish_repo(void ); 
#line 4082 "../.././gcc/cp/cp-tree.h"
extern  VEC_tree_gc *unemitted_tinfo_decls; 
#line 4084 "../.././gcc/cp/cp-tree.h"
extern void init_rtti_processing(void ); 
#line 4085 "../.././gcc/cp/cp-tree.h"
extern  tree build_typeid( tree ); 
#line 4086 "../.././gcc/cp/cp-tree.h"
extern  tree get_tinfo_decl( tree ); 
#line 4087 "../.././gcc/cp/cp-tree.h"
extern  tree get_typeid( tree ); 
#line 4088 "../.././gcc/cp/cp-tree.h"
extern  tree build_dynamic_cast( tree ,  tree ); 
#line 4089 "../.././gcc/cp/cp-tree.h"
extern void emit_support_tinfos(void ); 
#line 4090 "../.././gcc/cp/cp-tree.h"
extern unsigned char emit_tinfo_decl( tree ); 
#line 4093 "../.././gcc/cp/cp-tree.h"
extern unsigned char accessible_base_p( tree ,  tree , unsigned char ); 
#line 4095 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_base( tree ,  tree ,  base_access ,  base_kind *); 
#line 4096 "../.././gcc/cp/cp-tree.h"
extern  tree dcast_base_hint( tree ,  tree ); 
#line 4097 "../.././gcc/cp/cp-tree.h"
extern int accessible_p( tree ,  tree , unsigned char ); 
#line 4098 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_field_1( tree ,  tree , unsigned char ); 
#line 4099 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_field( tree ,  tree , int , unsigned char ); 
#line 4100 "../.././gcc/cp/cp-tree.h"
extern int lookup_fnfields_1( tree ,  tree ); 
#line 4101 "../.././gcc/cp/cp-tree.h"
extern int class_method_index_for_fn( tree ,  tree ); 
#line 4102 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_fnfields( tree ,  tree , int ); 
#line 4103 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_member( tree ,  tree , int , unsigned char ); 
#line 4104 "../.././gcc/cp/cp-tree.h"
extern int look_for_overrides( tree ,  tree ); 
#line 4105 "../.././gcc/cp/cp-tree.h"
extern void get_pure_virtuals( tree ); 
#line 4106 "../.././gcc/cp/cp-tree.h"
extern void maybe_suppress_debug_info( tree ); 
#line 4107 "../.././gcc/cp/cp-tree.h"
extern void note_debug_info_needed( tree ); 
#line 4108 "../.././gcc/cp/cp-tree.h"
extern void print_search_statistics(void ); 
#line 4109 "../.././gcc/cp/cp-tree.h"
extern void reinit_search_statistics(void ); 
#line 4110 "../.././gcc/cp/cp-tree.h"
extern  tree current_scope(void ); 
#line 4111 "../.././gcc/cp/cp-tree.h"
extern int at_function_scope_p(void ); 
#line 4112 "../.././gcc/cp/cp-tree.h"
extern unsigned char at_class_scope_p(void ); 
#line 4113 "../.././gcc/cp/cp-tree.h"
extern unsigned char at_namespace_scope_p(void ); 
#line 4114 "../.././gcc/cp/cp-tree.h"
extern  tree context_for_name_lookup( tree ); 
#line 4115 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_conversions( tree ); 
#line 4116 "../.././gcc/cp/cp-tree.h"
extern  tree binfo_from_vbase( tree ); 
#line 4117 "../.././gcc/cp/cp-tree.h"
extern  tree binfo_for_vbase( tree ,  tree ); 
#line 4118 "../.././gcc/cp/cp-tree.h"
extern  tree look_for_overrides_here( tree ,  tree ); 
#line 4121 "../.././gcc/cp/cp-tree.h"
extern  tree dfs_walk_all( tree ,  tree (*)( tree , void *),  tree (*)( tree , void *), void *); 
#line 4123 "../.././gcc/cp/cp-tree.h"
extern  tree dfs_walk_once( tree ,  tree (*)( tree , void *),  tree (*)( tree , void *), void *); 
#line 4124 "../.././gcc/cp/cp-tree.h"
extern  tree binfo_via_virtual( tree ,  tree ); 
#line 4125 "../.././gcc/cp/cp-tree.h"
extern  tree build_baselink( tree ,  tree ,  tree ,  tree ); 
#line 4127 "../.././gcc/cp/cp-tree.h"
extern  tree adjust_result_of_qualified_name_lookup( tree ,  tree ,  tree ); 
#line 4128 "../.././gcc/cp/cp-tree.h"
extern  tree copied_binfo( tree ,  tree ); 
#line 4129 "../.././gcc/cp/cp-tree.h"
extern  tree original_binfo( tree ,  tree ); 
#line 4130 "../.././gcc/cp/cp-tree.h"
extern int shared_member_p( tree ); 
#line 4133 "../.././gcc/cp/cp-tree.h"
extern void push_deferring_access_checks( deferring_kind ); 
#line 4134 "../.././gcc/cp/cp-tree.h"
extern void resume_deferring_access_checks(void ); 
#line 4135 "../.././gcc/cp/cp-tree.h"
extern void stop_deferring_access_checks(void ); 
#line 4136 "../.././gcc/cp/cp-tree.h"
extern void pop_deferring_access_checks(void ); 
#line 4137 "../.././gcc/cp/cp-tree.h"
extern  tree get_deferred_access_checks(void ); 
#line 4138 "../.././gcc/cp/cp-tree.h"
extern void pop_to_parent_deferring_access_checks(void ); 
#line 4139 "../.././gcc/cp/cp-tree.h"
extern void perform_access_checks( tree ); 
#line 4140 "../.././gcc/cp/cp-tree.h"
extern void perform_deferred_access_checks(void ); 
#line 4141 "../.././gcc/cp/cp-tree.h"
extern void perform_or_defer_access_check( tree ,  tree ); 
#line 4142 "../.././gcc/cp/cp-tree.h"
extern int stmts_are_full_exprs_p(void ); 
#line 4143 "../.././gcc/cp/cp-tree.h"
extern void init_cp_semantics(void ); 
#line 4144 "../.././gcc/cp/cp-tree.h"
extern  tree do_poplevel( tree ); 
#line 4145 "../.././gcc/cp/cp-tree.h"
extern void add_decl_expr( tree ); 
#line 4146 "../.././gcc/cp/cp-tree.h"
extern  tree finish_expr_stmt( tree ); 
#line 4147 "../.././gcc/cp/cp-tree.h"
extern  tree begin_if_stmt(void ); 
#line 4148 "../.././gcc/cp/cp-tree.h"
extern void finish_if_stmt_cond( tree ,  tree ); 
#line 4149 "../.././gcc/cp/cp-tree.h"
extern  tree finish_then_clause( tree ); 
#line 4150 "../.././gcc/cp/cp-tree.h"
extern void begin_else_clause( tree ); 
#line 4151 "../.././gcc/cp/cp-tree.h"
extern void finish_else_clause( tree ); 
#line 4152 "../.././gcc/cp/cp-tree.h"
extern void finish_if_stmt( tree ); 
#line 4153 "../.././gcc/cp/cp-tree.h"
extern  tree begin_while_stmt(void ); 
#line 4154 "../.././gcc/cp/cp-tree.h"
extern void finish_while_stmt_cond( tree ,  tree ); 
#line 4155 "../.././gcc/cp/cp-tree.h"
extern void finish_while_stmt( tree ); 
#line 4156 "../.././gcc/cp/cp-tree.h"
extern  tree begin_do_stmt(void ); 
#line 4157 "../.././gcc/cp/cp-tree.h"
extern void finish_do_body( tree ); 
#line 4158 "../.././gcc/cp/cp-tree.h"
extern void finish_do_stmt( tree ,  tree ); 
#line 4159 "../.././gcc/cp/cp-tree.h"
extern  tree finish_return_stmt( tree ); 
#line 4160 "../.././gcc/cp/cp-tree.h"
extern  tree begin_for_stmt(void ); 
#line 4161 "../.././gcc/cp/cp-tree.h"
extern void finish_for_init_stmt( tree ); 
#line 4162 "../.././gcc/cp/cp-tree.h"
extern void finish_for_cond( tree ,  tree ); 
#line 4163 "../.././gcc/cp/cp-tree.h"
extern void finish_for_expr( tree ,  tree ); 
#line 4164 "../.././gcc/cp/cp-tree.h"
extern void finish_for_stmt( tree ); 
#line 4165 "../.././gcc/cp/cp-tree.h"
extern  tree finish_break_stmt(void ); 
#line 4166 "../.././gcc/cp/cp-tree.h"
extern  tree finish_continue_stmt(void ); 
#line 4167 "../.././gcc/cp/cp-tree.h"
extern  tree begin_switch_stmt(void ); 
#line 4168 "../.././gcc/cp/cp-tree.h"
extern void finish_switch_cond( tree ,  tree ); 
#line 4169 "../.././gcc/cp/cp-tree.h"
extern void finish_switch_stmt( tree ); 
#line 4170 "../.././gcc/cp/cp-tree.h"
extern  tree finish_case_label( tree ,  tree ); 
#line 4171 "../.././gcc/cp/cp-tree.h"
extern  tree finish_goto_stmt( tree ); 
#line 4172 "../.././gcc/cp/cp-tree.h"
extern  tree begin_try_block(void ); 
#line 4173 "../.././gcc/cp/cp-tree.h"
extern void finish_try_block( tree ); 
#line 4174 "../.././gcc/cp/cp-tree.h"
extern  tree begin_eh_spec_block(void ); 
#line 4175 "../.././gcc/cp/cp-tree.h"
extern void finish_eh_spec_block( tree ,  tree ); 
#line 4176 "../.././gcc/cp/cp-tree.h"
extern void finish_handler_sequence( tree ); 
#line 4177 "../.././gcc/cp/cp-tree.h"
extern  tree begin_function_try_block(void ); 
#line 4178 "../.././gcc/cp/cp-tree.h"
extern void finish_function_try_block( tree ); 
#line 4179 "../.././gcc/cp/cp-tree.h"
extern void finish_function_handler_sequence( tree ); 
#line 4180 "../.././gcc/cp/cp-tree.h"
extern void finish_cleanup_try_block( tree ); 
#line 4181 "../.././gcc/cp/cp-tree.h"
extern  tree begin_handler(void ); 
#line 4182 "../.././gcc/cp/cp-tree.h"
extern void finish_handler_parms( tree ,  tree ); 
#line 4183 "../.././gcc/cp/cp-tree.h"
extern void finish_handler( tree ); 
#line 4184 "../.././gcc/cp/cp-tree.h"
extern void finish_cleanup( tree ,  tree ); 
#line 4190 "../.././gcc/cp/cp-tree.h"
enum {BCS_NO_SCOPE=1,BCS_TRY_BLOCK=2,BCS_FN_BODY=4}; 
#line 4191 "../.././gcc/cp/cp-tree.h"
extern  tree begin_compound_stmt(unsigned int ); 
#line 4193 "../.././gcc/cp/cp-tree.h"
extern void finish_compound_stmt( tree ); 
#line 4194 "../.././gcc/cp/cp-tree.h"
extern  tree finish_asm_stmt(int ,  tree ,  tree ,  tree ,  tree ); 
#line 4195 "../.././gcc/cp/cp-tree.h"
extern  tree finish_label_stmt( tree ); 
#line 4196 "../.././gcc/cp/cp-tree.h"
extern void finish_label_decl( tree ); 
#line 4197 "../.././gcc/cp/cp-tree.h"
extern  tree finish_parenthesized_expr( tree ); 
#line 4198 "../.././gcc/cp/cp-tree.h"
extern  tree finish_non_static_data_member( tree ,  tree ,  tree ); 
#line 4199 "../.././gcc/cp/cp-tree.h"
extern  tree begin_stmt_expr(void ); 
#line 4200 "../.././gcc/cp/cp-tree.h"
extern  tree finish_stmt_expr_expr( tree ,  tree ); 
#line 4201 "../.././gcc/cp/cp-tree.h"
extern  tree finish_stmt_expr( tree , unsigned char ); 
#line 4202 "../.././gcc/cp/cp-tree.h"
extern  tree perform_koenig_lookup( tree ,  tree ); 
#line 4203 "../.././gcc/cp/cp-tree.h"
extern  tree finish_call_expr( tree ,  tree , unsigned char , unsigned char ); 
#line 4204 "../.././gcc/cp/cp-tree.h"
extern  tree finish_increment_expr( tree , enum tree_code ); 
#line 4205 "../.././gcc/cp/cp-tree.h"
extern  tree finish_this_expr(void ); 
#line 4206 "../.././gcc/cp/cp-tree.h"
extern  tree finish_pseudo_destructor_expr( tree ,  tree ,  tree ); 
#line 4207 "../.././gcc/cp/cp-tree.h"
extern  tree finish_unary_op_expr(enum tree_code ,  tree ); 
#line 4208 "../.././gcc/cp/cp-tree.h"
extern  tree finish_compound_literal( tree ,  VEC_constructor_elt_gc *); 
#line 4209 "../.././gcc/cp/cp-tree.h"
extern  tree finish_fname( tree ); 
#line 4210 "../.././gcc/cp/cp-tree.h"
extern void finish_translation_unit(void ); 
#line 4211 "../.././gcc/cp/cp-tree.h"
extern  tree finish_template_type_parm( tree ,  tree ); 
#line 4212 "../.././gcc/cp/cp-tree.h"
extern  tree finish_template_template_parm( tree ,  tree ); 
#line 4213 "../.././gcc/cp/cp-tree.h"
extern  tree begin_class_definition( tree ); 
#line 4214 "../.././gcc/cp/cp-tree.h"
extern void finish_template_decl( tree ); 
#line 4215 "../.././gcc/cp/cp-tree.h"
extern  tree finish_template_type( tree ,  tree , int ); 
#line 4216 "../.././gcc/cp/cp-tree.h"
extern  tree finish_base_specifier( tree ,  tree , unsigned char ); 
#line 4217 "../.././gcc/cp/cp-tree.h"
extern void finish_member_declaration( tree ); 
#line 4218 "../.././gcc/cp/cp-tree.h"
extern void qualified_name_lookup_error( tree ,  tree ,  tree ); 
#line 4219 "../.././gcc/cp/cp-tree.h"
extern void check_template_keyword( tree ); 
#line 4224 "../.././gcc/cp/cp-tree.h"
extern  tree finish_id_expression( tree ,  tree ,  tree ,  cp_id_kind *, unsigned char , unsigned char , unsigned char *, unsigned char , unsigned char , unsigned char , unsigned char , const char **); 
#line 4225 "../.././gcc/cp/cp-tree.h"
extern  tree finish_typeof( tree ); 
#line 4226 "../.././gcc/cp/cp-tree.h"
extern void finish_decl_cleanup( tree ,  tree ); 
#line 4227 "../.././gcc/cp/cp-tree.h"
extern void finish_eh_cleanup( tree ); 
#line 4228 "../.././gcc/cp/cp-tree.h"
extern void expand_body( tree ); 
#line 4229 "../.././gcc/cp/cp-tree.h"
extern void finish_mem_initializers( tree ); 
#line 4230 "../.././gcc/cp/cp-tree.h"
extern  tree check_template_template_default_arg( tree ); 
#line 4231 "../.././gcc/cp/cp-tree.h"
extern void expand_or_defer_fn( tree ); 
#line 4232 "../.././gcc/cp/cp-tree.h"
extern void check_accessibility_of_qualified_id( tree ,  tree ,  tree ); 
#line 4234 "../.././gcc/cp/cp-tree.h"
extern  tree finish_qualified_id_expr( tree ,  tree , unsigned char , unsigned char , unsigned char , unsigned char ); 
#line 4235 "../.././gcc/cp/cp-tree.h"
extern void simplify_aggr_init_expr( tree *); 
#line 4236 "../.././gcc/cp/cp-tree.h"
extern void finalize_nrv( tree *,  tree ,  tree ); 
#line 4237 "../.././gcc/cp/cp-tree.h"
extern void note_decl_for_pch( tree ); 
#line 4241 "../.././gcc/cp/cp-tree.h"
extern void lang_check_failed(const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 4242 "../.././gcc/cp/cp-tree.h"
extern  tree stabilize_expr( tree ,  tree *); 
#line 4243 "../.././gcc/cp/cp-tree.h"
extern void stabilize_call( tree ,  tree *); 
#line 4244 "../.././gcc/cp/cp-tree.h"
extern unsigned char stabilize_init( tree ,  tree *); 
#line 4245 "../.././gcc/cp/cp-tree.h"
extern  tree add_stmt_to_compound( tree ,  tree ); 
#line 4246 "../.././gcc/cp/cp-tree.h"
extern  tree cxx_maybe_build_cleanup( tree ); 
#line 4247 "../.././gcc/cp/cp-tree.h"
extern void init_tree(void ); 
#line 4248 "../.././gcc/cp/cp-tree.h"
extern int pod_type_p( tree ); 
#line 4249 "../.././gcc/cp/cp-tree.h"
extern int zero_init_p( tree ); 
#line 4250 "../.././gcc/cp/cp-tree.h"
extern  tree canonical_type_variant( tree ); 
#line 4252 "../.././gcc/cp/cp-tree.h"
extern  tree copy_binfo( tree ,  tree ,  tree ,  tree *, int ); 
#line 4253 "../.././gcc/cp/cp-tree.h"
extern int member_p( tree ); 
#line 4254 "../.././gcc/cp/cp-tree.h"
extern  cp_lvalue_kind real_lvalue_p( tree ); 
#line 4255 "../.././gcc/cp/cp-tree.h"
extern unsigned char builtin_valid_in_constant_expr_p( tree ); 
#line 4256 "../.././gcc/cp/cp-tree.h"
extern  tree build_min(enum tree_code ,  tree , ...); 
#line 4257 "../.././gcc/cp/cp-tree.h"
extern  tree build_min_nt(enum tree_code , ...); 
#line 4258 "../.././gcc/cp/cp-tree.h"
extern  tree build_min_non_dep(enum tree_code ,  tree , ...); 
#line 4259 "../.././gcc/cp/cp-tree.h"
extern  tree build_cplus_new( tree ,  tree ); 
#line 4260 "../.././gcc/cp/cp-tree.h"
extern  tree get_target_expr( tree ); 
#line 4261 "../.././gcc/cp/cp-tree.h"
extern  tree build_cplus_array_type( tree ,  tree ); 
#line 4262 "../.././gcc/cp/cp-tree.h"
extern  tree hash_tree_cons( tree ,  tree ,  tree ); 
#line 4263 "../.././gcc/cp/cp-tree.h"
extern  tree hash_tree_chain( tree ,  tree ); 
#line 4264 "../.././gcc/cp/cp-tree.h"
extern  tree build_qualified_name( tree ,  tree ,  tree , unsigned char ); 
#line 4265 "../.././gcc/cp/cp-tree.h"
extern int is_overloaded_fn( tree ); 
#line 4266 "../.././gcc/cp/cp-tree.h"
extern  tree get_first_fn( tree ); 
#line 4267 "../.././gcc/cp/cp-tree.h"
extern  tree ovl_cons( tree ,  tree ); 
#line 4268 "../.././gcc/cp/cp-tree.h"
extern  tree build_overload( tree ,  tree ); 
#line 4269 "../.././gcc/cp/cp-tree.h"
extern const char *cxx_printable_name( tree , int ); 
#line 4270 "../.././gcc/cp/cp-tree.h"
extern  tree build_exception_variant( tree ,  tree ); 
#line 4271 "../.././gcc/cp/cp-tree.h"
extern  tree bind_template_template_parm( tree ,  tree ); 
#line 4272 "../.././gcc/cp/cp-tree.h"
extern  tree array_type_nelts_total( tree ); 
#line 4273 "../.././gcc/cp/cp-tree.h"
extern  tree array_type_nelts_top( tree ); 
#line 4274 "../.././gcc/cp/cp-tree.h"
extern  tree break_out_target_exprs( tree ); 
#line 4275 "../.././gcc/cp/cp-tree.h"
extern  tree get_type_decl( tree ); 
#line 4276 "../.././gcc/cp/cp-tree.h"
extern  tree decl_namespace_context( tree ); 
#line 4277 "../.././gcc/cp/cp-tree.h"
extern  tree lvalue_type( tree ); 
#line 4278 "../.././gcc/cp/cp-tree.h"
extern  tree error_type( tree ); 
#line 4279 "../.././gcc/cp/cp-tree.h"
extern int varargs_function_p( tree ); 
#line 4280 "../.././gcc/cp/cp-tree.h"
extern int really_overloaded_fn( tree ); 
#line 4281 "../.././gcc/cp/cp-tree.h"
extern unsigned char cp_tree_equal( tree ,  tree ); 
#line 4282 "../.././gcc/cp/cp-tree.h"
extern  tree no_linkage_check( tree , unsigned char ); 
#line 4283 "../.././gcc/cp/cp-tree.h"
extern void debug_binfo( tree ); 
#line 4284 "../.././gcc/cp/cp-tree.h"
extern  tree build_dummy_object( tree ); 
#line 4285 "../.././gcc/cp/cp-tree.h"
extern  tree maybe_dummy_object( tree ,  tree *); 
#line 4286 "../.././gcc/cp/cp-tree.h"
extern int is_dummy_object( tree ); 
#line 4287 "../.././gcc/cp/cp-tree.h"
extern const struct attribute_spec cxx_attribute_table[]; 
#line 4288 "../.././gcc/cp/cp-tree.h"
extern  tree make_ptrmem_cst( tree ,  tree ); 
#line 4289 "../.././gcc/cp/cp-tree.h"
extern  tree cp_build_type_attribute_variant( tree ,  tree ); 
#line 4290 "../.././gcc/cp/cp-tree.h"
extern  tree cp_build_qualified_type_real( tree , int ,  tsubst_flags_t ); 
#line 4293 "../.././gcc/cp/cp-tree.h"
extern  special_function_kind special_function_p( tree ); 
#line 4294 "../.././gcc/cp/cp-tree.h"
extern int count_trees( tree ); 
#line 4295 "../.././gcc/cp/cp-tree.h"
extern int char_type_p( tree ); 
#line 4296 "../.././gcc/cp/cp-tree.h"
extern void verify_stmt_tree( tree ); 
#line 4297 "../.././gcc/cp/cp-tree.h"
extern  tree find_tree( tree ,  tree ); 
#line 4298 "../.././gcc/cp/cp-tree.h"
extern  linkage_kind decl_linkage( tree ); 
#line 4300 "../.././gcc/cp/cp-tree.h"
extern  tree cp_walk_subtrees( tree *, int *,  walk_tree_fn , void *, struct pointer_set_t *); 
#line 4301 "../.././gcc/cp/cp-tree.h"
extern int cp_cannot_inline_tree_fn( tree *); 
#line 4302 "../.././gcc/cp/cp-tree.h"
extern  tree cp_add_pending_fn_decls(void *,  tree ); 
#line 4303 "../.././gcc/cp/cp-tree.h"
extern int cp_auto_var_in_fn_p( tree ,  tree ); 
#line 4304 "../.././gcc/cp/cp-tree.h"
extern  tree fold_if_not_in_template( tree ); 
#line 4305 "../.././gcc/cp/cp-tree.h"
extern  tree rvalue( tree ); 
#line 4308 "../.././gcc/cp/cp-tree.h"
extern int string_conv_p( tree ,  tree , int ); 
#line 4309 "../.././gcc/cp/cp-tree.h"
extern  tree cp_truthvalue_conversion( tree ); 
#line 4310 "../.././gcc/cp/cp-tree.h"
extern  tree condition_conversion( tree ); 
#line 4311 "../.././gcc/cp/cp-tree.h"
extern  tree require_complete_type( tree ); 
#line 4312 "../.././gcc/cp/cp-tree.h"
extern  tree complete_type( tree ); 
#line 4313 "../.././gcc/cp/cp-tree.h"
extern  tree complete_type_or_else( tree ,  tree ); 
#line 4314 "../.././gcc/cp/cp-tree.h"
extern int type_unknown_p( tree ); 
#line 4315 "../.././gcc/cp/cp-tree.h"
extern  tree original_type( tree ); 
#line 4316 "../.././gcc/cp/cp-tree.h"
extern unsigned char comp_except_specs( tree ,  tree , unsigned char ); 
#line 4317 "../.././gcc/cp/cp-tree.h"
extern unsigned char comptypes( tree ,  tree , int ); 
#line 4318 "../.././gcc/cp/cp-tree.h"
extern unsigned char compparms( tree ,  tree ); 
#line 4319 "../.././gcc/cp/cp-tree.h"
extern int comp_cv_qualification( tree ,  tree ); 
#line 4320 "../.././gcc/cp/cp-tree.h"
extern int comp_cv_qual_signature( tree ,  tree ); 
#line 4321 "../.././gcc/cp/cp-tree.h"
extern  tree cxx_sizeof_or_alignof_expr( tree , enum tree_code ); 
#line 4322 "../.././gcc/cp/cp-tree.h"
extern  tree cxx_sizeof_or_alignof_type( tree , enum tree_code , unsigned char ); 
#line 4324 "../.././gcc/cp/cp-tree.h"
extern  tree inline_conversion( tree ); 
#line 4325 "../.././gcc/cp/cp-tree.h"
extern  tree decay_conversion( tree ); 
#line 4326 "../.././gcc/cp/cp-tree.h"
extern  tree default_conversion( tree ); 
#line 4327 "../.././gcc/cp/cp-tree.h"
extern  tree build_class_member_access_expr( tree ,  tree ,  tree , unsigned char ); 
#line 4328 "../.././gcc/cp/cp-tree.h"
extern  tree finish_class_member_access_expr( tree ,  tree , unsigned char ); 
#line 4329 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_indirect_ref( tree , const char *); 
#line 4330 "../.././gcc/cp/cp-tree.h"
extern  tree build_indirect_ref( tree , const char *); 
#line 4331 "../.././gcc/cp/cp-tree.h"
extern  tree build_array_ref( tree ,  tree ); 
#line 4332 "../.././gcc/cp/cp-tree.h"
extern  tree get_member_function_from_ptrfunc( tree *,  tree ); 
#line 4334 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_binary_op(enum tree_code ,  tree ,  tree , unsigned char *); 
#line 4335 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_unary_op(enum tree_code ,  tree ); 
#line 4336 "../.././gcc/cp/cp-tree.h"
extern  tree unary_complex_lvalue(enum tree_code ,  tree ); 
#line 4337 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_conditional_expr( tree ,  tree ,  tree ); 
#line 4338 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_compound_expr_from_list( tree , const char *); 
#line 4339 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_compound_expr( tree ,  tree ); 
#line 4340 "../.././gcc/cp/cp-tree.h"
extern  tree build_compound_expr( tree ,  tree ); 
#line 4341 "../.././gcc/cp/cp-tree.h"
extern  tree build_static_cast( tree ,  tree ); 
#line 4342 "../.././gcc/cp/cp-tree.h"
extern  tree build_reinterpret_cast( tree ,  tree ); 
#line 4343 "../.././gcc/cp/cp-tree.h"
extern  tree build_const_cast( tree ,  tree ); 
#line 4344 "../.././gcc/cp/cp-tree.h"
extern  tree build_c_cast( tree ,  tree ); 
#line 4345 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_modify_expr( tree , enum tree_code ,  tree ); 
#line 4346 "../.././gcc/cp/cp-tree.h"
extern  tree build_modify_expr( tree , enum tree_code ,  tree ); 
#line 4348 "../.././gcc/cp/cp-tree.h"
extern  tree convert_for_initialization( tree ,  tree ,  tree , int , const char *,  tree , int ); 
#line 4349 "../.././gcc/cp/cp-tree.h"
extern int comp_ptr_ttypes( tree ,  tree ); 
#line 4350 "../.././gcc/cp/cp-tree.h"
extern unsigned char comp_ptr_ttypes_const( tree ,  tree ); 
#line 4351 "../.././gcc/cp/cp-tree.h"
extern int ptr_reasonably_similar( tree ,  tree ); 
#line 4352 "../.././gcc/cp/cp-tree.h"
extern  tree build_ptrmemfunc( tree ,  tree , int , unsigned char ); 
#line 4353 "../.././gcc/cp/cp-tree.h"
extern int cp_type_quals( tree ); 
#line 4354 "../.././gcc/cp/cp-tree.h"
extern unsigned char cp_has_mutable_p( tree ); 
#line 4355 "../.././gcc/cp/cp-tree.h"
extern unsigned char at_least_as_qualified_p( tree ,  tree ); 
#line 4356 "../.././gcc/cp/cp-tree.h"
extern void cp_apply_type_quals_to_decl(int ,  tree ); 
#line 4357 "../.././gcc/cp/cp-tree.h"
extern  tree build_ptrmemfunc1( tree ,  tree ,  tree ); 
#line 4358 "../.././gcc/cp/cp-tree.h"
extern void expand_ptrmemfunc_cst( tree ,  tree *,  tree *); 
#line 4359 "../.././gcc/cp/cp-tree.h"
extern  tree pfn_from_ptrmemfunc( tree ); 
#line 4360 "../.././gcc/cp/cp-tree.h"
extern  tree type_after_usual_arithmetic_conversions( tree ,  tree ); 
#line 4362 "../.././gcc/cp/cp-tree.h"
extern  tree composite_pointer_type( tree ,  tree ,  tree ,  tree , const char *); 
#line 4363 "../.././gcc/cp/cp-tree.h"
extern  tree merge_types( tree ,  tree ); 
#line 4364 "../.././gcc/cp/cp-tree.h"
extern  tree check_return_expr( tree , unsigned char *); 
#line 4368 "../.././gcc/cp/cp-tree.h"
extern  tree build_ptrmemfunc_access_expr( tree ,  tree ); 
#line 4369 "../.././gcc/cp/cp-tree.h"
extern  tree build_address( tree ); 
#line 4370 "../.././gcc/cp/cp-tree.h"
extern  tree build_nop( tree ,  tree ); 
#line 4371 "../.././gcc/cp/cp-tree.h"
extern  tree non_reference( tree ); 
#line 4372 "../.././gcc/cp/cp-tree.h"
extern  tree lookup_anon_field( tree ,  tree ); 
#line 4373 "../.././gcc/cp/cp-tree.h"
extern unsigned char invalid_nonstatic_memfn_p( tree ); 
#line 4374 "../.././gcc/cp/cp-tree.h"
extern  tree convert_member_func_to_ptr( tree ,  tree ); 
#line 4375 "../.././gcc/cp/cp-tree.h"
extern  tree convert_ptrmem( tree ,  tree , unsigned char , unsigned char ); 
#line 4376 "../.././gcc/cp/cp-tree.h"
extern int lvalue_or_else( tree , enum lvalue_use ); 
#line 4377 "../.././gcc/cp/cp-tree.h"
extern int lvalue_p( tree ); 
#line 4380 "../.././gcc/cp/cp-tree.h"
extern void require_complete_eh_spec_types( tree ,  tree ); 
#line 4381 "../.././gcc/cp/cp-tree.h"
extern void cxx_incomplete_type_diagnostic( tree ,  tree , int ); 
#line 4383 "../.././gcc/cp/cp-tree.h"
extern void cxx_incomplete_type_error( tree ,  tree ); 
#line 4386 "../.././gcc/cp/cp-tree.h"
extern  tree error_not_base_type( tree ,  tree ); 
#line 4387 "../.././gcc/cp/cp-tree.h"
extern  tree binfo_or_else( tree ,  tree ); 
#line 4388 "../.././gcc/cp/cp-tree.h"
extern void readonly_error( tree , const char *, int ); 
#line 4389 "../.././gcc/cp/cp-tree.h"
extern void complete_type_check_abstract( tree ); 
#line 4390 "../.././gcc/cp/cp-tree.h"
extern int abstract_virtuals_error( tree ,  tree ); 
#line 4392 "../.././gcc/cp/cp-tree.h"
extern  tree store_init_value( tree ,  tree ); 
#line 4393 "../.././gcc/cp/cp-tree.h"
extern  tree adjust_bitfield_initializer( tree ,  tree ); 
#line 4394 "../.././gcc/cp/cp-tree.h"
extern  tree digest_init( tree ,  tree ); 
#line 4395 "../.././gcc/cp/cp-tree.h"
extern  tree build_scoped_ref( tree ,  tree ,  tree *); 
#line 4396 "../.././gcc/cp/cp-tree.h"
extern  tree build_x_arrow( tree ); 
#line 4397 "../.././gcc/cp/cp-tree.h"
extern  tree build_m_component_ref( tree ,  tree ); 
#line 4398 "../.././gcc/cp/cp-tree.h"
extern  tree build_functional_cast( tree ,  tree ); 
#line 4399 "../.././gcc/cp/cp-tree.h"
extern  tree add_exception_specifier( tree ,  tree , int ); 
#line 4400 "../.././gcc/cp/cp-tree.h"
extern  tree merge_exception_specifiers( tree ,  tree ); 
#line 4403 "../.././gcc/cp/cp-tree.h"
extern void init_mangle(void ); 
#line 4404 "../.././gcc/cp/cp-tree.h"
extern void mangle_decl( tree ); 
#line 4405 "../.././gcc/cp/cp-tree.h"
extern const char *mangle_type_string( tree ); 
#line 4406 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_typeinfo_for_type( tree ); 
#line 4407 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_typeinfo_string_for_type( tree ); 
#line 4408 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_vtbl_for_type( tree ); 
#line 4409 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_vtt_for_type( tree ); 
#line 4410 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_ctor_vtbl_for_type( tree ,  tree ); 
#line 4411 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_thunk( tree , int ,  tree ,  tree ); 
#line 4412 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_conv_op_name_for_type( tree ); 
#line 4413 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_guard_variable( tree ); 
#line 4414 "../.././gcc/cp/cp-tree.h"
extern  tree mangle_ref_init_variable( tree ); 
#line 4417 "../.././gcc/cp/cp-tree.h"
extern unsigned char cp_dump_tree(void *,  tree ); 
#line 4421 "../.././gcc/cp/cp-tree.h"
extern long cxx_get_alias_set( tree ); 
#line 4422 "../.././gcc/cp/cp-tree.h"
extern unsigned char cxx_warn_unused_global_decl( tree ); 
#line 4423 "../.././gcc/cp/cp-tree.h"
extern  tree cp_expr_size( tree ); 
#line 4424 "../.././gcc/cp/cp-tree.h"
extern  size_t cp_tree_size(enum tree_code ); 
#line 4425 "../.././gcc/cp/cp-tree.h"
extern unsigned char cp_var_mod_type_p( tree ,  tree ); 
#line 4426 "../.././gcc/cp/cp-tree.h"
extern void cxx_initialize_diagnostics(struct diagnostic_context *); 
#line 4427 "../.././gcc/cp/cp-tree.h"
extern int cxx_types_compatible_p( tree ,  tree ); 
#line 4428 "../.././gcc/cp/cp-tree.h"
extern void init_shadowed_var_for_decl(void ); 
#line 4431 "../.././gcc/cp/cp-tree.h"
extern int cp_gimplify_expr( tree *,  tree *,  tree *); 
#line 4432 "../.././gcc/cp/cp-tree.h"
extern void cp_genericize( tree ); 
# 3479 "../.././gcc/cp/cp-tree.h" 
# 4449 "../.././gcc/cp/cp-tree.h" 
extern void cp_cpp_error( cpp_reader *, int , const char *,  va_list *) __attribute__  (( __nonnull__ ( 3 )  )) ; 
# 33 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/output.h" 1
# 27 "../.././gcc/output.h" 
extern void compute_alignments(void ); 
#line 30 "../.././gcc/output.h"
extern void init_final(const char *); 
#line 34 "../.././gcc/output.h"
extern void app_enable(void ); 
#line 38 "../.././gcc/output.h"
extern void app_disable(void ); 
#line 43 "../.././gcc/output.h"
extern int dbr_sequence_length(void ); 
#line 46 "../.././gcc/output.h"
extern void init_insn_lengths(void ); 
#line 50 "../.././gcc/output.h"
extern int get_attr_length( rtx ); 
#line 54 "../.././gcc/output.h"
extern int get_attr_min_length( rtx ); 
#line 58 "../.././gcc/output.h"
extern void shorten_branches( rtx ); 
#line 65 "../.././gcc/output.h"
extern void final_start_function( rtx ,  FILE *, int ); 
#line 70 "../.././gcc/output.h"
extern void final_end_function(void ); 
#line 73 "../.././gcc/output.h"
extern void final( rtx ,  FILE *, int ); 
#line 78 "../.././gcc/output.h"
extern  rtx final_scan_insn( rtx ,  FILE *, int , int , int *); 
#line 82 "../.././gcc/output.h"
extern  rtx alter_subreg( rtx *); 
#line 86 "../.././gcc/output.h"
extern void output_operand_lossage(const char *, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 90 "../.././gcc/output.h"
extern void output_asm_insn(const char *,  rtx *); 
#line 95 "../.././gcc/output.h"
extern int insn_current_reference_address( rtx ); 
#line 99 "../.././gcc/output.h"
extern int label_to_alignment( rtx ); 
#line 102 "../.././gcc/output.h"
extern void output_asm_label( rtx ); 
#line 106 "../.././gcc/output.h"
extern void output_address( rtx ); 
#line 111 "../.././gcc/output.h"
extern void output_addr_const( FILE *,  rtx ); 
#line 120 "../.././gcc/output.h"
typedef long __gcc_host_wide_int__; 
#line 126 "../.././gcc/output.h"
extern void asm_fprintf( FILE *file, const char *p, ...) __attribute__  (( __format__ ( __asm_fprintf__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 130 "../.././gcc/output.h"
extern void split_double( rtx ,  rtx *,  rtx *); 
#line 133 "../.././gcc/output.h"
extern int leaf_function_p(void ); 
#line 138 "../.././gcc/output.h"
extern int final_forward_branch_p( rtx ); 
#line 142 "../.././gcc/output.h"
extern int only_leaf_regs_used(void ); 
#line 146 "../.././gcc/output.h"
extern void leaf_renumber_regs_insn( rtx ); 
#line 149 "../.././gcc/output.h"
extern const char *get_insn_template(int ,  rtx ); 
#line 152 "../.././gcc/output.h"
extern int regno_clobbered_at_setjmp(int ); 
#line 157 "../.././gcc/output.h"
extern void text_section(void ); 
#line 160 "../.././gcc/output.h"
extern void unlikely_text_section(void ); 
#line 163 "../.././gcc/output.h"
extern void data_section(void ); 
#line 167 "../.././gcc/output.h"
extern void readonly_data_section(void ); 
#line 170 "../.././gcc/output.h"
extern int in_text_section(void ); 
#line 173 "../.././gcc/output.h"
extern int in_unlikely_text_section(void ); 
# 120 "../.././gcc/output.h" 
# 184 "../.././gcc/output.h" 
extern void bss_section(void ); 
#line 188 "../.././gcc/output.h"
extern void init_section(void ); 
#line 192 "../.././gcc/output.h"
extern void fini_section(void ); 
#line 211 "../.././gcc/output.h"
extern void named_section( tree , const char *, int ); 
#line 214 "../.././gcc/output.h"
extern void function_section( tree ); 
#line 217 "../.././gcc/output.h"
extern void current_function_section( tree ); 
#line 221 "../.././gcc/output.h"
extern void mergeable_string_section( tree , unsigned long , unsigned int ); 
#line 225 "../.././gcc/output.h"
extern void mergeable_constant_section(enum machine_mode , unsigned long , unsigned int ); 
#line 228 "../.././gcc/output.h"
extern void declare_weak( tree ); 
#line 230 "../.././gcc/output.h"
extern void merge_weak( tree ,  tree ); 
#line 233 "../.././gcc/output.h"
extern void weak_finish(void ); 
# 211 "../.././gcc/output.h" 
# 242 "../.././gcc/output.h" 
extern int decode_reg_name(const char *); 
#line 246 "../.././gcc/output.h"
extern void make_var_volatile( tree ); 
#line 248 "../.././gcc/output.h"
extern void assemble_alias( tree ,  tree ); 
#line 250 "../.././gcc/output.h"
extern void default_assemble_visibility( tree , int ); 
#line 254 "../.././gcc/output.h"
extern void assemble_asm( tree ); 
#line 260 "../.././gcc/output.h"
extern void assemble_start_function( tree , const char *); 
#line 264 "../.././gcc/output.h"
extern void assemble_end_function( tree , const char *); 
#line 275 "../.././gcc/output.h"
extern void assemble_variable( tree , int , int , int ); 
#line 280 "../.././gcc/output.h"
extern void assemble_external( tree ); 
#line 283 "../.././gcc/output.h"
extern void assemble_zeros(unsigned long ); 
#line 286 "../.././gcc/output.h"
extern void assemble_align(int ); 
#line 289 "../.././gcc/output.h"
extern void assemble_string(const char *, int ); 
#line 292 "../.././gcc/output.h"
extern void assemble_external_libcall( rtx ); 
#line 295 "../.././gcc/output.h"
extern void assemble_label(const char *); 
#line 301 "../.././gcc/output.h"
extern void assemble_name_raw( FILE *, const char *); 
#line 307 "../.././gcc/output.h"
extern void assemble_name( FILE *, const char *); 
# 275 "../.././gcc/output.h" 
# 316 "../.././gcc/output.h" 
extern const char *integer_asm_op(int , int ); 
#line 320 "../.././gcc/output.h"
extern void assemble_integer_with_op(const char *,  rtx ); 
#line 323 "../.././gcc/output.h"
extern unsigned char default_assemble_integer( rtx , unsigned int , int ); 
#line 329 "../.././gcc/output.h"
extern unsigned char assemble_integer( rtx , unsigned , unsigned , int ); 
#line 343 "../.././gcc/output.h"
extern int get_pool_size(void ); 
#line 350 "../.././gcc/output.h"
extern void output_constant_pool(const char *,  tree ); 
# 343 "../.././gcc/output.h" 
# 361 "../.././gcc/output.h" 
extern  tree initializer_constant_valid_p( tree ,  tree ); 
#line 371 "../.././gcc/output.h"
extern void output_constant( tree , unsigned long , unsigned int ); 
#line 379 "../.././gcc/output.h"
extern  rtx final_sequence; 
# 371 "../.././gcc/output.h" 
# 391 "../.././gcc/output.h" 
extern  FILE *asm_out_file; 
#line 395 "../.././gcc/output.h"
extern const char *first_global_object_name; 
#line 398 "../.././gcc/output.h"
extern const char *weak_global_object_name; 
#line 405 "../.././gcc/output.h"
extern int current_function_is_leaf; 
#line 411 "../.././gcc/output.h"
extern int current_function_sp_is_unchanging; 
#line 417 "../.././gcc/output.h"
extern int current_function_uses_only_leaf_regs; 
#line 422 "../.././gcc/output.h"
extern  FILE *dump_file; 
#line 426 "../.././gcc/output.h"
extern  rtx current_insn_predicate; 
#line 429 "../.././gcc/output.h"
extern  rtx current_output_insn; 
#line 434 "../.././gcc/output.h"
extern  rtx this_is_asm_operands; 
#line 438 "../.././gcc/output.h"
extern int size_directive_output; 
#line 439 "../.././gcc/output.h"
extern  tree last_assemble_variable_decl; 
#line 458 "../.././gcc/output.h"
enum in_section {no_section,in_text,in_unlikely_executed_text,in_data,in_named,in_bss,in_readonly_data}; 
#line 460 "../.././gcc/output.h"
extern const char *last_text_section_name; 
#line 461 "../.././gcc/output.h"
extern enum in_section last_text_section; 
#line 462 "../.././gcc/output.h"
extern unsigned char first_function_block_is_cold; 
#line 466 "../.././gcc/output.h"
extern unsigned char decl_readonly_section( tree , int ); 
#line 467 "../.././gcc/output.h"
extern unsigned char decl_readonly_section_1( tree , int , int ); 
#line 471 "../.././gcc/output.h"
extern int compute_reloc_for_constant( tree ); 
#line 474 "../.././gcc/output.h"
extern const char *user_label_prefix; 
#line 477 "../.././gcc/output.h"
extern void default_function_pro_epilogue( FILE *, long ); 
#line 480 "../.././gcc/output.h"
extern void default_exception_section(void ); 
#line 483 "../.././gcc/output.h"
extern void named_section_eh_frame_section(void ); 
#line 484 "../.././gcc/output.h"
extern void collect2_eh_frame_section(void ); 
#line 485 "../.././gcc/output.h"
extern void default_eh_frame_section(void ); 
#line 488 "../.././gcc/output.h"
extern void no_asm_to_stream( FILE *); 
# 453 "../.././gcc/output.h" 
# 510 "../.././gcc/output.h" 
# 542 "../.././gcc/output.h" 
enum section_category {SECCAT_TEXT,SECCAT_RODATA,SECCAT_RODATA_MERGE_STR,SECCAT_RODATA_MERGE_STR_INIT,SECCAT_RODATA_MERGE_CONST,SECCAT_SRODATA,SECCAT_DATA,SECCAT_DATA_REL,SECCAT_DATA_REL_LOCAL,SECCAT_DATA_REL_RO,SECCAT_DATA_REL_RO_LOCAL,SECCAT_SDATA,SECCAT_TDATA,SECCAT_BSS,SECCAT_SBSS,SECCAT_TBSS}; 
#line 545 "../.././gcc/output.h"
extern unsigned char set_named_section_flags(const char *, unsigned int ); 
#line 548 "../.././gcc/output.h"
extern void named_section_real(const char *, unsigned int ,  tree ); 
#line 549 "../.././gcc/output.h"
extern unsigned char named_section_first_declaration(const char *); 
#line 550 "../.././gcc/output.h"
extern unsigned int default_section_type_flags( tree , const char *, int ); 
#line 551 "../.././gcc/output.h"
extern unsigned int default_section_type_flags_1( tree , const char *, int , int ); 
#line 553 "../.././gcc/output.h"
extern void default_no_named_section(const char *, unsigned int ,  tree ); 
#line 554 "../.././gcc/output.h"
extern void default_elf_asm_named_section(const char *, unsigned int ,  tree ); 
#line 555 "../.././gcc/output.h"
extern enum section_category categorize_decl_for_section( tree , int , int ); 
#line 556 "../.././gcc/output.h"
extern void default_coff_asm_named_section(const char *, unsigned int ,  tree ); 
#line 557 "../.././gcc/output.h"
extern void default_pe_asm_named_section(const char *, unsigned int ,  tree ); 
#line 559 "../.././gcc/output.h"
extern void default_stabs_asm_out_destructor( rtx , int ); 
#line 560 "../.././gcc/output.h"
extern void default_named_section_asm_out_destructor( rtx , int ); 
#line 561 "../.././gcc/output.h"
extern void default_dtor_section_asm_out_destructor( rtx , int ); 
#line 562 "../.././gcc/output.h"
extern void default_stabs_asm_out_constructor( rtx , int ); 
#line 563 "../.././gcc/output.h"
extern void default_named_section_asm_out_constructor( rtx , int ); 
#line 564 "../.././gcc/output.h"
extern void default_ctor_section_asm_out_constructor( rtx , int ); 
#line 566 "../.././gcc/output.h"
extern void default_select_section( tree , int , unsigned long ); 
#line 567 "../.././gcc/output.h"
extern void default_elf_select_section( tree , int , unsigned long ); 
#line 569 "../.././gcc/output.h"
extern void default_elf_select_section_1( tree , int , unsigned long , int ); 
#line 570 "../.././gcc/output.h"
extern void default_unique_section( tree , int ); 
#line 571 "../.././gcc/output.h"
extern void default_unique_section_1( tree , int , int ); 
#line 572 "../.././gcc/output.h"
extern void default_function_rodata_section( tree ); 
#line 573 "../.././gcc/output.h"
extern void default_no_function_rodata_section( tree ); 
#line 575 "../.././gcc/output.h"
extern void default_select_rtx_section(enum machine_mode ,  rtx , unsigned long ); 
#line 577 "../.././gcc/output.h"
extern void default_elf_select_rtx_section(enum machine_mode ,  rtx , unsigned long ); 
#line 578 "../.././gcc/output.h"
extern void default_encode_section_info( tree ,  rtx , int ); 
#line 579 "../.././gcc/output.h"
extern const char *default_strip_name_encoding(const char *); 
#line 580 "../.././gcc/output.h"
extern unsigned char default_binds_local_p( tree ); 
#line 581 "../.././gcc/output.h"
extern unsigned char default_binds_local_p_1( tree , int ); 
#line 582 "../.././gcc/output.h"
extern void default_globalize_label( FILE *, const char *); 
#line 583 "../.././gcc/output.h"
extern void default_emit_unwind_label( FILE *,  tree , int , int ); 
#line 584 "../.././gcc/output.h"
extern void default_internal_label( FILE *, const char *, unsigned long ); 
#line 585 "../.././gcc/output.h"
extern void default_file_start(void ); 
#line 586 "../.././gcc/output.h"
extern void file_end_indicate_exec_stack(void ); 
#line 587 "../.././gcc/output.h"
extern unsigned char default_valid_pointer_mode(enum machine_mode ); 
#line 589 "../.././gcc/output.h"
extern int default_address_cost( rtx ); 
#line 594 "../.././gcc/output.h"
extern void dbxout_int(int ); 
#line 595 "../.././gcc/output.h"
extern void dbxout_stabd(int , int ); 
#line 596 "../.././gcc/output.h"
extern void dbxout_begin_stabn(int ); 
#line 597 "../.././gcc/output.h"
extern void dbxout_begin_stabn_sline(int ); 
#line 598 "../.././gcc/output.h"
extern void dbxout_begin_empty_stabs(int ); 
#line 599 "../.././gcc/output.h"
extern void dbxout_begin_simple_stabs(const char *, int ); 
#line 600 "../.././gcc/output.h"
extern void dbxout_begin_simple_stabs_desc(const char *, int , int ); 
#line 602 "../.././gcc/output.h"
extern void dbxout_stab_value_zero(void ); 
#line 603 "../.././gcc/output.h"
extern void dbxout_stab_value_label(const char *); 
#line 604 "../.././gcc/output.h"
extern void dbxout_stab_value_label_diff(const char *, const char *); 
#line 605 "../.././gcc/output.h"
extern void dbxout_stab_value_internal_label(const char *, int *); 
#line 607 "../.././gcc/output.h"
extern void dbxout_stab_value_internal_label_diff(const char *, int *, const char *); 
# 34 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/flags.h" 1
# 26 "../.././gcc/flags.h" 
# 1 "./options.h" 1
# 38 "../.././gcc/flags.h" 2
enum debug_info_type {NO_DEBUG,DBX_DEBUG,SDB_DEBUG,DWARF2_DEBUG,XCOFF_DEBUG,VMS_DEBUG,VMS_AND_DWARF2_DEBUG}; 
#line 41 "../.././gcc/flags.h"
extern enum debug_info_type write_symbols; 
#line 44 "../.././gcc/flags.h"
extern const char *const debug_type_names[]; 
#line 52 "../.././gcc/flags.h"
enum debug_info_level {DINFO_LEVEL_NONE,DINFO_LEVEL_TERSE,DINFO_LEVEL_NORMAL,DINFO_LEVEL_VERBOSE}; 
#line 55 "../.././gcc/flags.h"
extern enum debug_info_level debug_info_level; 
#line 59 "../.././gcc/flags.h"
extern unsigned char use_gnu_debug_info_extensions; 
#line 74 "../.././gcc/flags.h"
extern enum symbol_visibility default_visibility; 
#line 80 "../.././gcc/flags.h"
struct visibility_flags {unsigned inpragma:1; unsigned inlines_hidden:1; }; 
#line 83 "../.././gcc/flags.h"
extern struct visibility_flags visibility_options; 
#line 87 "../.././gcc/flags.h"
extern int optimize; 
#line 91 "../.././gcc/flags.h"
extern int optimize_size; 
#line 96 "../.././gcc/flags.h"
extern unsigned char extra_warnings; 
#line 102 "../.././gcc/flags.h"
extern void set_Wunused(int setting); 
#line 108 "../.././gcc/flags.h"
extern unsigned char warn_larger_than; 
#line 109 "../.././gcc/flags.h"
extern long larger_than_size; 
#line 114 "../.././gcc/flags.h"
extern int warn_strict_aliasing; 
#line 119 "../.././gcc/flags.h"
extern int in_system_header; 
#line 124 "../.././gcc/flags.h"
extern int flag_print_asm_name; 
#line 130 "../.././gcc/flags.h"
extern int flag_signed_char; 
#line 135 "../.././gcc/flags.h"
extern int flag_short_enums; 
#line 139 "../.././gcc/flags.h"
extern int flag_pcc_struct_return; 
#line 145 "../.././gcc/flags.h"
extern int flag_complex_method; 
#line 150 "../.././gcc/flags.h"
extern int flag_really_no_inline; 
#line 154 "../.././gcc/flags.h"
extern int rtl_dump_and_exit; 
#line 158 "../.././gcc/flags.h"
extern int flag_gen_aux_info; 
#line 163 "../.././gcc/flags.h"
extern int flag_dump_unnumbered; 
#line 168 "../.././gcc/flags.h"
extern int flag_pedantic_errors; 
#line 173 "../.././gcc/flags.h"
extern int flag_shlib; 
# 74 "../.././gcc/flags.h" 
# 182 "../.././gcc/flags.h" 
extern int flag_debug_asm; 
#line 186 "../.././gcc/flags.h"
extern int flag_next_runtime; 
#line 188 "../.././gcc/flags.h"
extern int flag_dump_rtl_in_asm; 
#line 193 "../.././gcc/flags.h"
extern int flag_renumber_insns; 
#line 201 "../.././gcc/flags.h"
extern int frame_pointer_needed; 
#line 204 "../.././gcc/flags.h"
extern int flag_evaluation_order; 
#line 207 "../.././gcc/flags.h"
extern unsigned long g_switch_value; 
#line 208 "../.././gcc/flags.h"
extern unsigned char g_switch_set; 
#line 215 "../.././gcc/flags.h"
extern int align_loops_log; 
#line 216 "../.././gcc/flags.h"
extern int align_loops_max_skip; 
#line 217 "../.././gcc/flags.h"
extern int align_jumps_log; 
#line 218 "../.././gcc/flags.h"
extern int align_jumps_max_skip; 
#line 219 "../.././gcc/flags.h"
extern int align_labels_log; 
#line 220 "../.././gcc/flags.h"
extern int align_labels_max_skip; 
#line 221 "../.././gcc/flags.h"
extern int align_functions_log; 
#line 225 "../.././gcc/flags.h"
extern int force_align_functions_log; 
#line 228 "../.././gcc/flags.h"
extern int dump_for_graph; 
#line 235 "../.././gcc/flags.h"
enum graph_dump_types {no_graph=0,vcg}; 
#line 236 "../.././gcc/flags.h"
extern enum graph_dump_types graph_dump_format; 
#line 240 "../.././gcc/flags.h"
extern int flag_detailed_statistics; 
#line 244 "../.././gcc/flags.h"
extern int flag_remove_unreachable_functions; 
#line 247 "../.././gcc/flags.h"
extern int flag_var_tracking; 
#line 251 "../.././gcc/flags.h"
extern unsigned char flag_speculative_prefetching_set; 
#line 256 "../.././gcc/flags.h"
extern const char *flag_random_seed; 
# 35 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/rtl.h" 1
# 28 "../.././gcc/rtl.h" 
# 1 "../.././gcc/real.h" 1
# 35 "../.././gcc/real.h" 
enum real_value_class {rvc_zero,rvc_normal,rvc_inf,rvc_nan}; 
#line 54 "../.././gcc/real.h"
struct real_value {unsigned int cl:2; unsigned int sign:1; unsigned int signalling:1; unsigned int canonical:1; unsigned int uexp:(32 - 5); unsigned long sig[((128 + (8 * 4)) / (8 * 4))]; }; 
#line 78 "../.././gcc/real.h"
extern char test_real_width[(sizeof (struct real_value ) <= (((128 + (8 * 4)) + 32) / (8 * 4) + ((((128 + (8 * 4)) + 32) % (8 * 4)?1:0))) * sizeof (long )?1:(-1))]; 
# 77 "../.././gcc/real.h" 
# 155 "../.././gcc/real.h" 
struct real_format {void (*encode)(const struct real_format *, long *, const struct real_value *); void (*decode)(const struct real_format *, struct real_value *, const long *); int b; int log2_b; int p; int pnan; int emin; int emax; int signbit_ro; int signbit_rw; unsigned char has_nans; unsigned char has_inf; unsigned char has_denorm; unsigned char has_signed_zero; unsigned char qnan_msb_set; }; 
#line 161 "../.././gcc/real.h"
extern const struct real_format *real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1]; 
#line 175 "../.././gcc/real.h"
extern unsigned char real_arithmetic(struct real_value *, int , const struct real_value *, const struct real_value *); 
#line 178 "../.././gcc/real.h"
extern unsigned char real_compare(int , const struct real_value *, const struct real_value *); 
#line 181 "../.././gcc/real.h"
extern unsigned char real_isinf(const struct real_value *); 
#line 184 "../.././gcc/real.h"
extern unsigned char real_isnan(const struct real_value *); 
#line 187 "../.././gcc/real.h"
extern unsigned char real_isneg(const struct real_value *); 
#line 190 "../.././gcc/real.h"
extern unsigned char real_isnegzero(const struct real_value *); 
#line 193 "../.././gcc/real.h"
extern unsigned char real_identical(const struct real_value *, const struct real_value *); 
#line 197 "../.././gcc/real.h"
extern void real_convert(struct real_value *, enum machine_mode , const struct real_value *); 
#line 200 "../.././gcc/real.h"
extern unsigned char exact_real_truncate(enum machine_mode , const struct real_value *); 
#line 204 "../.././gcc/real.h"
extern void real_to_decimal(char *, const struct real_value *,  size_t ,  size_t , int ); 
#line 208 "../.././gcc/real.h"
extern void real_to_hexadecimal(char *, const struct real_value *,  size_t ,  size_t , int ); 
#line 211 "../.././gcc/real.h"
extern long real_to_integer(const struct real_value *); 
#line 213 "../.././gcc/real.h"
extern void real_to_integer2(long *, long *, const struct real_value *); 
#line 216 "../.././gcc/real.h"
extern void real_from_string(struct real_value *, const char *); 
#line 220 "../.././gcc/real.h"
extern void real_from_integer(struct real_value *, enum machine_mode , unsigned long , long , int ); 
#line 223 "../.././gcc/real.h"
extern long real_to_target_fmt(long *, const struct real_value *, const struct real_format *); 
#line 224 "../.././gcc/real.h"
extern long real_to_target(long *, const struct real_value *, enum machine_mode ); 
#line 227 "../.././gcc/real.h"
extern void real_from_target_fmt(struct real_value *, const long *, const struct real_format *); 
#line 229 "../.././gcc/real.h"
extern void real_from_target(struct real_value *, const long *, enum machine_mode ); 
#line 231 "../.././gcc/real.h"
extern void real_inf(struct real_value *); 
#line 233 "../.././gcc/real.h"
extern unsigned char real_nan(struct real_value *, const char *, int , enum machine_mode ); 
#line 235 "../.././gcc/real.h"
extern void real_maxval(struct real_value *, int , enum machine_mode ); 
#line 237 "../.././gcc/real.h"
extern void real_2expN(struct real_value *, int ); 
#line 239 "../.././gcc/real.h"
extern unsigned int real_hash(const struct real_value *); 
#line 243 "../.././gcc/real.h"
extern const struct real_format ieee_single_format; 
#line 244 "../.././gcc/real.h"
extern const struct real_format mips_single_format; 
#line 245 "../.././gcc/real.h"
extern const struct real_format ieee_double_format; 
#line 246 "../.././gcc/real.h"
extern const struct real_format mips_double_format; 
#line 247 "../.././gcc/real.h"
extern const struct real_format ieee_extended_motorola_format; 
#line 248 "../.././gcc/real.h"
extern const struct real_format ieee_extended_intel_96_format; 
#line 249 "../.././gcc/real.h"
extern const struct real_format ieee_extended_intel_96_round_53_format; 
#line 250 "../.././gcc/real.h"
extern const struct real_format ieee_extended_intel_128_format; 
#line 251 "../.././gcc/real.h"
extern const struct real_format ibm_extended_format; 
#line 252 "../.././gcc/real.h"
extern const struct real_format mips_extended_format; 
#line 253 "../.././gcc/real.h"
extern const struct real_format ieee_quad_format; 
#line 254 "../.././gcc/real.h"
extern const struct real_format mips_quad_format; 
#line 255 "../.././gcc/real.h"
extern const struct real_format vax_f_format; 
#line 256 "../.././gcc/real.h"
extern const struct real_format vax_d_format; 
#line 257 "../.././gcc/real.h"
extern const struct real_format vax_g_format; 
#line 258 "../.././gcc/real.h"
extern const struct real_format i370_single_format; 
#line 259 "../.././gcc/real.h"
extern const struct real_format i370_double_format; 
#line 260 "../.././gcc/real.h"
extern const struct real_format c4x_single_format; 
#line 261 "../.././gcc/real.h"
extern const struct real_format c4x_extended_format; 
#line 262 "../.././gcc/real.h"
extern const struct real_format real_internal_format; 
# 174 "../.././gcc/real.h" 
# 306 "../.././gcc/real.h" 
extern struct real_value real_value_truncate(enum machine_mode , struct real_value ); 
#line 312 "../.././gcc/real.h"
extern struct real_value real_arithmetic2(int , const struct real_value *, const struct real_value *); 
#line 320 "../.././gcc/real.h"
extern int significand_size(enum machine_mode ); 
#line 322 "../.././gcc/real.h"
extern struct real_value real_from_string2(const char *, enum machine_mode ); 
#line 340 "../.././gcc/real.h"
extern int real_exponent(const struct real_value *); 
#line 343 "../.././gcc/real.h"
extern void real_ldexp(struct real_value *, const struct real_value *, int ); 
#line 349 "../.././gcc/real.h"
extern struct real_value dconst0; 
#line 350 "../.././gcc/real.h"
extern struct real_value dconst1; 
#line 351 "../.././gcc/real.h"
extern struct real_value dconst2; 
#line 352 "../.././gcc/real.h"
extern struct real_value dconst3; 
#line 353 "../.././gcc/real.h"
extern struct real_value dconst10; 
#line 354 "../.././gcc/real.h"
extern struct real_value dconstm1; 
#line 355 "../.././gcc/real.h"
extern struct real_value dconstm2; 
#line 356 "../.././gcc/real.h"
extern struct real_value dconsthalf; 
#line 357 "../.././gcc/real.h"
extern struct real_value dconstthird; 
#line 358 "../.././gcc/real.h"
extern struct real_value dconstpi; 
#line 359 "../.././gcc/real.h"
extern struct real_value dconste; 
#line 363 "../.././gcc/real.h"
struct real_value real_value_from_int_cst( tree ,  tree ); 
# 340 "../.././gcc/real.h" 
# 372 "../.././gcc/real.h" 
extern  rtx const_double_from_real_value(struct real_value , enum machine_mode ); 
#line 375 "../.././gcc/real.h"
extern unsigned char exact_real_inverse(enum machine_mode , struct real_value *); 
#line 378 "../.././gcc/real.h"
extern  tree build_real( tree , struct real_value ); 
#line 382 "../.././gcc/real.h"
extern unsigned char real_sqrt(struct real_value *, enum machine_mode , const struct real_value *); 
#line 386 "../.././gcc/real.h"
extern unsigned char real_powi(struct real_value *, enum machine_mode , const struct real_value *, long ); 
#line 390 "../.././gcc/real.h"
extern void real_trunc(struct real_value *, enum machine_mode , const struct real_value *); 
#line 392 "../.././gcc/real.h"
extern void real_floor(struct real_value *, enum machine_mode , const struct real_value *); 
#line 394 "../.././gcc/real.h"
extern void real_ceil(struct real_value *, enum machine_mode , const struct real_value *); 
#line 396 "../.././gcc/real.h"
extern void real_round(struct real_value *, enum machine_mode , const struct real_value *); 
#line 399 "../.././gcc/real.h"
extern void real_copysign(struct real_value *, const struct real_value *); 
# 29 "../.././gcc/rtl.h" 2
# 42 "../.././gcc/rtl.h" 
# 1 "../.././gcc/rtl.def" 1
# 83 "../.././gcc/rtl.def" 
# 116 "../.././gcc/rtl.def" 
# 153 "../.././gcc/rtl.def" 
# 166 "../.././gcc/rtl.def" 
# 205 "../.././gcc/rtl.def" 
# 217 "../.././gcc/rtl.def" 
# 249 "../.././gcc/rtl.def" 
# 260 "../.././gcc/rtl.def" 
# 272 "../.././gcc/rtl.def" 
# 348 "../.././gcc/rtl.def" 
# 365 "../.././gcc/rtl.def" 
# 378 "../.././gcc/rtl.def" 
# 420 "../.././gcc/rtl.def" 
# 467 "../.././gcc/rtl.def" 
# 479 "../.././gcc/rtl.def" 
# 496 "../.././gcc/rtl.def" 
# 593 "../.././gcc/rtl.def" 
# 48 "../.././gcc/rtl.h" 2
enum rtx_code {UNKNOWN,EXPR_LIST,INSN_LIST,SEQUENCE,ADDRESS,INSN,JUMP_INSN,CALL_INSN,BARRIER,CODE_LABEL,NOTE,COND_EXEC,PARALLEL,ASM_INPUT,ASM_OPERANDS,UNSPEC,UNSPEC_VOLATILE,ADDR_VEC,ADDR_DIFF_VEC,PREFETCH,SET,USE,CLOBBER,CALL,RETURN,TRAP_IF,RESX,CONST_INT,CONST_DOUBLE,CONST_VECTOR,CONST_STRING,CONST,PC,VALUE,REG,SCRATCH,SUBREG,STRICT_LOW_PART,CONCAT,MEM,LABEL_REF,SYMBOL_REF,CC0,IF_THEN_ELSE,COMPARE,PLUS,MINUS,NEG,MULT,DIV,MOD,UDIV,UMOD,AND,IOR,XOR,NOT,ASHIFT,ROTATE,ASHIFTRT,LSHIFTRT,ROTATERT,SMIN,SMAX,UMIN,UMAX,PRE_DEC,PRE_INC,POST_DEC,POST_INC,PRE_MODIFY,POST_MODIFY,NE,EQ,GE,GT,LE,LT,GEU,GTU,LEU,LTU,UNORDERED,ORDERED,UNEQ,UNGE,UNGT,UNLE,UNLT,LTGT,SIGN_EXTEND,ZERO_EXTEND,TRUNCATE,FLOAT_EXTEND,FLOAT_TRUNCATE,FLOAT,FIX,UNSIGNED_FLOAT,UNSIGNED_FIX,ABS,SQRT,FFS,CLZ,CTZ,POPCOUNT,PARITY,SIGN_EXTRACT,ZERO_EXTRACT,HIGH,LO_SUM,VEC_MERGE,VEC_SELECT,VEC_CONCAT,VEC_DUPLICATE,SS_PLUS,US_PLUS,SS_MINUS,US_MINUS,SS_TRUNCATE,US_TRUNCATE,VAR_LOCATION,LAST_AND_UNUSED_RTX_CODE}; 
#line 81 "../.././gcc/rtl.h"
enum rtx_class {RTX_COMPARE,RTX_COMM_COMPARE,RTX_BIN_ARITH,RTX_COMM_ARITH,RTX_UNARY,RTX_EXTRA,RTX_MATCH,RTX_INSN,RTX_OBJ,RTX_CONST_OBJ,RTX_TERNARY,RTX_BITFIELD_OPS,RTX_AUTOINC}; 
# 57 "../.././gcc/rtl.h" 
# 95 "../.././gcc/rtl.h" 
extern const unsigned char rtx_length[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 98 "../.././gcc/rtl.h"
extern const char *const rtx_name[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 101 "../.././gcc/rtl.h"
extern const char *const rtx_format[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 104 "../.././gcc/rtl.h"
extern const enum rtx_class rtx_class[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 107 "../.././gcc/rtl.h"
extern const unsigned char rtx_size[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 108 "../.././gcc/rtl.h"
extern const unsigned char rtx_next[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 130 "../.././gcc/rtl.h"
typedef struct {unsigned min_align:8; unsigned base_after_vec:1; unsigned min_after_vec:1; unsigned max_after_vec:1; unsigned min_after_base:1; unsigned max_after_base:1; unsigned offset_unsigned:1; unsigned :2; unsigned scale:8; }addr_diff_vec_flags; 
#line 146 "../.././gcc/rtl.h"
typedef struct mem_attrs {long alias;  tree expr;  rtx offset;  rtx size; unsigned int align; }mem_attrs; 
#line 155 "../.././gcc/rtl.h"
typedef struct reg_attrs { tree decl; long offset; }reg_attrs; 
#line 174 "../.././gcc/rtl.h"
union rtunion_def {int rt_int; unsigned int rt_uint; const char *rt_str;  rtx rt_rtx;  rtvec rt_rtvec; enum machine_mode rt_type;  addr_diff_vec_flags rt_addr_diff_vec_flags; struct cselib_val_struct *rt_cselib; struct bitmap_head_def *rt_bit;  tree rt_tree; struct basic_block_def *rt_bb;  mem_attrs *rt_mem;  reg_attrs *rt_reg; }; 
#line 175 "../.././gcc/rtl.h"
typedef union rtunion_def rtunion; 
# 139 "../.././gcc/rtl.h" 
# 213 "../.././gcc/rtl.h" 
# 255 "../.././gcc/rtl.h" 
struct rtx_def { __extension__ enum rtx_code code:16;  __extension__ enum machine_mode mode:8; unsigned int jump:1; unsigned int call:1; unsigned int unchanging:1; unsigned int volatil:1; unsigned int in_struct:1; unsigned int used:1; unsigned frame_related:1; unsigned return_val:1; union u { rtunion fld[1]; long hwint[1]; struct real_value rv; }u; }; 
#line 295 "../.././gcc/rtl.h"
struct rtvec_def {int num_elem;  rtx elem[1]; }; 
# 292 "../.././gcc/rtl.h" 
# 723 "../.././gcc/rtl.h" 
# 1 "../.././gcc/reg-notes.def" 1
# 33 "../.././gcc/reg-notes.def" 
# 52 "../.././gcc/reg-notes.def" 
# 92 "../.././gcc/reg-notes.def" 
# 729 "../.././gcc/rtl.h" 2
enum reg_note {REG_DEP_TRUE,REG_DEAD,REG_INC,REG_EQUIV,REG_EQUAL,REG_RETVAL,REG_LIBCALL,REG_NONNEG,REG_NO_CONFLICT,REG_UNUSED,REG_CC_SETTER,REG_CC_USER,REG_LABEL,REG_DEP_ANTI,REG_DEP_OUTPUT,REG_BR_PROB,REG_VALUE_PROFILE,REG_NOALIAS,REG_BR_PRED,REG_FRAME_RELATED_EXPR,REG_EH_CONTEXT,REG_EH_REGION,REG_SAVE_NOTE,REG_MAYBE_DEAD,REG_NORETURN,REG_NON_LOCAL_GOTO,REG_CROSSING_JUMP,REG_SETJMP,REG_NOTE_MAX}; 
#line 738 "../.././gcc/rtl.h"
extern const char *const reg_note_name[]; 
# 738 "../.././gcc/rtl.h" 
# 809 "../.././gcc/rtl.h" 
# 1 "../.././gcc/insn-notes.def" 1
# 36 "../.././gcc/insn-notes.def" 
# 819 "../.././gcc/rtl.h" 2
enum insn_note {NOTE_INSN_BIAS=(-100),NOTE_INSN_DELETED,NOTE_INSN_DELETED_LABEL,NOTE_INSN_BLOCK_BEG,NOTE_INSN_BLOCK_END,NOTE_INSN_LOOP_BEG,NOTE_INSN_LOOP_END,NOTE_INSN_FUNCTION_BEG,NOTE_INSN_FUNCTION_END,NOTE_INSN_PROLOGUE_END,NOTE_INSN_EPILOGUE_BEG,NOTE_INSN_EH_REGION_BEG,NOTE_INSN_EH_REGION_END,NOTE_INSN_REPEATED_LINE_NUMBER,NOTE_INSN_VAR_LOCATION,NOTE_INSN_EXPECTED_VALUE,NOTE_INSN_BASIC_BLOCK,NOTE_INSN_SWITCH_TEXT_SECTIONS,NOTE_INSN_MAX}; 
#line 823 "../.././gcc/rtl.h"
extern const char *const note_insn_name[NOTE_INSN_MAX - NOTE_INSN_BIAS]; 
#line 844 "../.././gcc/rtl.h"
enum label_kind {LABEL_NORMAL=0,LABEL_STATIC_ENTRY,LABEL_GLOBAL_ENTRY,LABEL_WEAK_ENTRY}; 
# 838 "../.././gcc/rtl.h" 
# 968 "../.././gcc/rtl.h" 
extern void init_rtlanal(void ); 
#line 969 "../.././gcc/rtl.h"
extern int rtx_cost( rtx , enum rtx_code ); 
#line 970 "../.././gcc/rtl.h"
extern int address_cost( rtx , enum machine_mode ); 
#line 971 "../.././gcc/rtl.h"
extern unsigned int subreg_lsb( rtx ); 
#line 973 "../.././gcc/rtl.h"
extern unsigned int subreg_lsb_1(enum machine_mode , enum machine_mode , unsigned int ); 
#line 975 "../.././gcc/rtl.h"
extern unsigned int subreg_regno_offset(unsigned int , enum machine_mode , unsigned int , enum machine_mode ); 
#line 977 "../.././gcc/rtl.h"
extern unsigned char subreg_offset_representable_p(unsigned int , enum machine_mode , unsigned int , enum machine_mode ); 
#line 978 "../.././gcc/rtl.h"
extern unsigned int subreg_regno( rtx ); 
#line 979 "../.././gcc/rtl.h"
extern unsigned long nonzero_bits( rtx , enum machine_mode ); 
#line 980 "../.././gcc/rtl.h"
extern unsigned int num_sign_bit_copies( rtx , enum machine_mode ); 
#line 1326 "../.././gcc/rtl.h"
extern int generating_concat_p; 
#line 1329 "../.././gcc/rtl.h"
extern int currently_expanding_to_rtl; 
#line 1334 "../.././gcc/rtl.h"
extern int ceil_log2(unsigned long ); 
#line 1337 "../.././gcc/rtl.h"
extern  rtx expand_builtin_expect_jump( tree ,  rtx ,  rtx ); 
#line 1340 "../.././gcc/rtl.h"
extern void set_stack_check_libfunc( rtx ); 
#line 1341 "../.././gcc/rtl.h"
extern long trunc_int_for_mode(long , enum machine_mode ); 
#line 1342 "../.././gcc/rtl.h"
extern  rtx plus_constant( rtx , long ); 
#line 1345 "../.././gcc/rtl.h"
extern  rtvec gen_rtvec(int , ...); 
#line 1346 "../.././gcc/rtl.h"
extern  rtx copy_insn_1( rtx ); 
#line 1347 "../.././gcc/rtl.h"
extern  rtx copy_insn( rtx ); 
#line 1348 "../.././gcc/rtl.h"
extern  rtx gen_int_mode(long , enum machine_mode ); 
#line 1349 "../.././gcc/rtl.h"
extern  rtx emit_copy_of_insn_after( rtx ,  rtx ); 
#line 1350 "../.././gcc/rtl.h"
extern void set_reg_attrs_from_mem( rtx ,  rtx ); 
#line 1351 "../.././gcc/rtl.h"
extern void set_mem_attrs_from_reg( rtx ,  rtx ); 
#line 1352 "../.././gcc/rtl.h"
extern void set_reg_attrs_for_parm( rtx ,  rtx ); 
#line 1353 "../.././gcc/rtl.h"
extern int mem_expr_equal_p( tree ,  tree ); 
#line 1356 "../.././gcc/rtl.h"
extern  rtx rtx_alloc_stat(enum rtx_code ); 
#line 1359 "../.././gcc/rtl.h"
extern  rtvec rtvec_alloc(int ); 
#line 1360 "../.././gcc/rtl.h"
extern  rtx copy_rtx( rtx ); 
#line 1361 "../.././gcc/rtl.h"
extern void dump_rtx_statistics(void ); 
#line 1364 "../.././gcc/rtl.h"
extern  rtx copy_rtx_if_shared( rtx ); 
#line 1367 "../.././gcc/rtl.h"
extern  rtx shallow_copy_rtx_stat( rtx ); 
#line 1369 "../.././gcc/rtl.h"
extern int rtx_equal_p( rtx ,  rtx ); 
#line 1372 "../.././gcc/rtl.h"
extern  rtvec gen_rtvec_v(int ,  rtx *); 
#line 1373 "../.././gcc/rtl.h"
extern  rtx gen_reg_rtx(enum machine_mode ); 
#line 1374 "../.././gcc/rtl.h"
extern  rtx gen_rtx_REG_offset( rtx , enum machine_mode , unsigned int , int ); 
#line 1375 "../.././gcc/rtl.h"
extern  rtx gen_label_rtx(void ); 
#line 1376 "../.././gcc/rtl.h"
extern  rtx gen_lowpart_common(enum machine_mode ,  rtx ); 
#line 1379 "../.././gcc/rtl.h"
extern  rtx gen_lowpart_if_possible(enum machine_mode ,  rtx ); 
#line 1382 "../.././gcc/rtl.h"
extern  rtx gen_highpart(enum machine_mode ,  rtx ); 
#line 1383 "../.././gcc/rtl.h"
extern  rtx gen_highpart_mode(enum machine_mode , enum machine_mode ,  rtx ); 
#line 1384 "../.././gcc/rtl.h"
extern  rtx operand_subword( rtx , unsigned int , int , enum machine_mode ); 
#line 1387 "../.././gcc/rtl.h"
extern  rtx operand_subword_force( rtx , unsigned int , enum machine_mode ); 
#line 1388 "../.././gcc/rtl.h"
extern int subreg_lowpart_p( rtx ); 
#line 1390 "../.././gcc/rtl.h"
extern unsigned int subreg_lowpart_offset(enum machine_mode , enum machine_mode ); 
#line 1392 "../.././gcc/rtl.h"
extern unsigned int subreg_highpart_offset(enum machine_mode , enum machine_mode ); 
#line 1393 "../.././gcc/rtl.h"
extern  rtx make_safe_from( rtx ,  rtx ); 
#line 1394 "../.././gcc/rtl.h"
extern  rtx convert_memory_address(enum machine_mode ,  rtx ); 
#line 1395 "../.././gcc/rtl.h"
extern  rtx get_insns(void ); 
#line 1396 "../.././gcc/rtl.h"
extern const char *get_insn_name(int ); 
#line 1397 "../.././gcc/rtl.h"
extern  rtx get_last_insn(void ); 
#line 1398 "../.././gcc/rtl.h"
extern  rtx get_last_insn_anywhere(void ); 
#line 1399 "../.././gcc/rtl.h"
extern  rtx get_first_nonnote_insn(void ); 
#line 1400 "../.././gcc/rtl.h"
extern  rtx get_last_nonnote_insn(void ); 
#line 1401 "../.././gcc/rtl.h"
extern void start_sequence(void ); 
#line 1402 "../.././gcc/rtl.h"
extern void push_to_sequence( rtx ); 
#line 1403 "../.././gcc/rtl.h"
extern void end_sequence(void ); 
#line 1405 "../.././gcc/rtl.h"
extern  rtx immed_double_const(long , long , enum machine_mode ); 
#line 1409 "../.././gcc/rtl.h"
extern  rtx lowpart_subreg(enum machine_mode ,  rtx , enum machine_mode ); 
#line 1412 "../.././gcc/rtl.h"
extern  rtx force_const_mem(enum machine_mode ,  rtx ); 
#line 1416 "../.././gcc/rtl.h"
struct function ; 
#line 1417 "../.././gcc/rtl.h"
extern  rtx get_pool_constant( rtx ); 
#line 1418 "../.././gcc/rtl.h"
extern  rtx get_pool_constant_mark( rtx , unsigned char *); 
#line 1419 "../.././gcc/rtl.h"
extern enum machine_mode get_pool_mode( rtx ); 
#line 1420 "../.././gcc/rtl.h"
extern  rtx get_pool_constant_for_function(struct function *,  rtx ); 
#line 1421 "../.././gcc/rtl.h"
extern  rtx simplify_subtraction( rtx ); 
#line 1424 "../.././gcc/rtl.h"
extern  rtx assign_stack_local(enum machine_mode , long , int ); 
#line 1425 "../.././gcc/rtl.h"
extern  rtx assign_stack_temp(enum machine_mode , long , int ); 
#line 1427 "../.././gcc/rtl.h"
extern  rtx assign_stack_temp_for_type(enum machine_mode , long , int ,  tree ); 
#line 1428 "../.././gcc/rtl.h"
extern  rtx assign_temp( tree , int , int , int ); 
#line 1431 "../.././gcc/rtl.h"
extern  rtx emit_insn_before( rtx ,  rtx ); 
#line 1432 "../.././gcc/rtl.h"
extern  rtx emit_insn_before_noloc( rtx ,  rtx ); 
#line 1433 "../.././gcc/rtl.h"
extern  rtx emit_insn_before_setloc( rtx ,  rtx , int ); 
#line 1434 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_before( rtx ,  rtx ); 
#line 1435 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_before_noloc( rtx ,  rtx ); 
#line 1436 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_before_setloc( rtx ,  rtx , int ); 
#line 1437 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_before( rtx ,  rtx ); 
#line 1438 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_before_noloc( rtx ,  rtx ); 
#line 1439 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_before_setloc( rtx ,  rtx , int ); 
#line 1440 "../.././gcc/rtl.h"
extern  rtx emit_barrier_before( rtx ); 
#line 1441 "../.././gcc/rtl.h"
extern  rtx emit_label_before( rtx ,  rtx ); 
#line 1442 "../.././gcc/rtl.h"
extern  rtx emit_note_before(int ,  rtx ); 
#line 1443 "../.././gcc/rtl.h"
extern  rtx emit_insn_after( rtx ,  rtx ); 
#line 1444 "../.././gcc/rtl.h"
extern  rtx emit_insn_after_noloc( rtx ,  rtx ); 
#line 1445 "../.././gcc/rtl.h"
extern  rtx emit_insn_after_setloc( rtx ,  rtx , int ); 
#line 1446 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_after( rtx ,  rtx ); 
#line 1447 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_after_noloc( rtx ,  rtx ); 
#line 1448 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_after_setloc( rtx ,  rtx , int ); 
#line 1449 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_after( rtx ,  rtx ); 
#line 1450 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_after_noloc( rtx ,  rtx ); 
#line 1451 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_after_setloc( rtx ,  rtx , int ); 
#line 1452 "../.././gcc/rtl.h"
extern  rtx emit_barrier_after( rtx ); 
#line 1453 "../.././gcc/rtl.h"
extern  rtx emit_label_after( rtx ,  rtx ); 
#line 1454 "../.././gcc/rtl.h"
extern  rtx emit_note_after(int ,  rtx ); 
#line 1455 "../.././gcc/rtl.h"
extern  rtx emit_note_copy_after( rtx ,  rtx ); 
#line 1456 "../.././gcc/rtl.h"
extern  rtx emit_insn( rtx ); 
#line 1457 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn( rtx ); 
#line 1458 "../.././gcc/rtl.h"
extern  rtx emit_call_insn( rtx ); 
#line 1459 "../.././gcc/rtl.h"
extern  rtx emit_label( rtx ); 
#line 1460 "../.././gcc/rtl.h"
extern  rtx emit_barrier(void ); 
#line 1461 "../.././gcc/rtl.h"
extern  rtx emit_note(int ); 
#line 1462 "../.././gcc/rtl.h"
extern  rtx emit_note_copy( rtx ); 
#line 1463 "../.././gcc/rtl.h"
extern  rtx emit_line_note( location_t ); 
#line 1464 "../.././gcc/rtl.h"
extern  rtx make_insn_raw( rtx ); 
#line 1465 "../.././gcc/rtl.h"
extern void add_function_usage_to( rtx ,  rtx ); 
#line 1466 "../.././gcc/rtl.h"
extern  rtx last_call_insn(void ); 
#line 1467 "../.././gcc/rtl.h"
extern  rtx previous_insn( rtx ); 
#line 1468 "../.././gcc/rtl.h"
extern  rtx next_insn( rtx ); 
#line 1469 "../.././gcc/rtl.h"
extern  rtx prev_nonnote_insn( rtx ); 
#line 1470 "../.././gcc/rtl.h"
extern  rtx next_nonnote_insn( rtx ); 
#line 1471 "../.././gcc/rtl.h"
extern  rtx prev_real_insn( rtx ); 
#line 1472 "../.././gcc/rtl.h"
extern  rtx next_real_insn( rtx ); 
#line 1473 "../.././gcc/rtl.h"
extern  rtx prev_active_insn( rtx ); 
#line 1474 "../.././gcc/rtl.h"
extern  rtx next_active_insn( rtx ); 
#line 1475 "../.././gcc/rtl.h"
extern int active_insn_p( rtx ); 
#line 1476 "../.././gcc/rtl.h"
extern  rtx prev_label( rtx ); 
#line 1477 "../.././gcc/rtl.h"
extern  rtx next_label( rtx ); 
#line 1478 "../.././gcc/rtl.h"
extern  rtx skip_consecutive_labels( rtx ); 
#line 1479 "../.././gcc/rtl.h"
extern  rtx next_cc0_user( rtx ); 
#line 1480 "../.././gcc/rtl.h"
extern  rtx prev_cc0_setter( rtx ); 
#line 1483 "../.././gcc/rtl.h"
extern int insn_line( rtx ); 
#line 1484 "../.././gcc/rtl.h"
extern const char *insn_file( rtx ); 
#line 1485 "../.././gcc/rtl.h"
extern int locator_line(int ); 
#line 1486 "../.././gcc/rtl.h"
extern const char *locator_file(int ); 
#line 1487 "../.././gcc/rtl.h"
extern int prologue_locator,epilogue_locator; 
#line 1490 "../.././gcc/rtl.h"
extern enum rtx_code reverse_condition(enum rtx_code ); 
#line 1491 "../.././gcc/rtl.h"
extern enum rtx_code reverse_condition_maybe_unordered(enum rtx_code ); 
#line 1492 "../.././gcc/rtl.h"
extern enum rtx_code swap_condition(enum rtx_code ); 
#line 1493 "../.././gcc/rtl.h"
extern enum rtx_code unsigned_condition(enum rtx_code ); 
#line 1494 "../.././gcc/rtl.h"
extern enum rtx_code signed_condition(enum rtx_code ); 
#line 1495 "../.././gcc/rtl.h"
extern void mark_jump_label( rtx ,  rtx , int ); 
#line 1496 "../.././gcc/rtl.h"
extern void cleanup_barriers(void ); 
#line 1499 "../.././gcc/rtl.h"
extern unsigned char squeeze_notes( rtx *,  rtx *); 
#line 1500 "../.././gcc/rtl.h"
extern  rtx delete_related_insns( rtx ); 
#line 1501 "../.././gcc/rtl.h"
extern void delete_jump( rtx ); 
#line 1502 "../.././gcc/rtl.h"
extern  rtx get_label_before( rtx ); 
#line 1503 "../.././gcc/rtl.h"
extern  rtx get_label_after( rtx ); 
#line 1504 "../.././gcc/rtl.h"
extern  rtx follow_jumps( rtx ); 
#line 1507 "../.././gcc/rtl.h"
extern  rtx *find_constant_term_loc( rtx *); 
#line 1510 "../.././gcc/rtl.h"
extern  rtx try_split( rtx ,  rtx , int ); 
#line 1511 "../.././gcc/rtl.h"
extern int split_branch_probability; 
#line 1514 "../.././gcc/rtl.h"
extern  rtx split_insns( rtx ,  rtx ); 
#line 1518 "../.././gcc/rtl.h"
extern  rtx simplify_const_unary_operation(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1520 "../.././gcc/rtl.h"
extern  rtx simplify_unary_operation(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1522 "../.././gcc/rtl.h"
extern  rtx simplify_const_binary_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1524 "../.././gcc/rtl.h"
extern  rtx simplify_binary_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1526 "../.././gcc/rtl.h"
extern  rtx simplify_ternary_operation(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 1528 "../.././gcc/rtl.h"
extern  rtx simplify_const_relational_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1530 "../.././gcc/rtl.h"
extern  rtx simplify_relational_operation(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ); 
#line 1531 "../.././gcc/rtl.h"
extern  rtx simplify_gen_binary(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1533 "../.././gcc/rtl.h"
extern  rtx simplify_gen_unary(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1535 "../.././gcc/rtl.h"
extern  rtx simplify_gen_ternary(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 1537 "../.././gcc/rtl.h"
extern  rtx simplify_gen_relational(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ); 
#line 1539 "../.././gcc/rtl.h"
extern  rtx simplify_subreg(enum machine_mode ,  rtx , enum machine_mode , unsigned int ); 
#line 1541 "../.././gcc/rtl.h"
extern  rtx simplify_gen_subreg(enum machine_mode ,  rtx , enum machine_mode , unsigned int ); 
#line 1542 "../.././gcc/rtl.h"
extern  rtx simplify_replace_rtx( rtx ,  rtx ,  rtx ); 
#line 1543 "../.././gcc/rtl.h"
extern  rtx simplify_rtx( rtx ); 
#line 1544 "../.././gcc/rtl.h"
extern  rtx avoid_constant_pool_reference( rtx ); 
#line 1545 "../.././gcc/rtl.h"
extern unsigned char constant_pool_reference_p( rtx x); 
#line 1546 "../.././gcc/rtl.h"
extern unsigned char mode_signbit_p(enum machine_mode ,  rtx ); 
#line 1550 "../.././gcc/rtl.h"
extern enum machine_mode choose_hard_reg_mode(unsigned int , unsigned int , unsigned char ); 
#line 1553 "../.././gcc/rtl.h"
extern  rtx set_unique_reg_note( rtx , enum reg_note ,  rtx ); 
# 1326 "../.././gcc/rtl.h" 
# 1570 "../.././gcc/rtl.h" 
typedef struct replace_label_data { rtx r1;  rtx r2; unsigned char update_label_nuses; }replace_label_data; 
#line 1572 "../.././gcc/rtl.h"
extern int rtx_addr_can_trap_p( rtx ); 
#line 1573 "../.././gcc/rtl.h"
extern unsigned char nonzero_address_p( rtx ); 
#line 1574 "../.././gcc/rtl.h"
extern int rtx_unstable_p( rtx ); 
#line 1575 "../.././gcc/rtl.h"
extern int rtx_varies_p( rtx , int ); 
#line 1576 "../.././gcc/rtl.h"
extern int rtx_addr_varies_p( rtx , int ); 
#line 1577 "../.././gcc/rtl.h"
extern long get_integer_term( rtx ); 
#line 1578 "../.././gcc/rtl.h"
extern  rtx get_related_value( rtx ); 
#line 1579 "../.././gcc/rtl.h"
extern int global_reg_mentioned_p( rtx ); 
#line 1580 "../.././gcc/rtl.h"
extern int reg_mentioned_p( rtx ,  rtx ); 
#line 1581 "../.././gcc/rtl.h"
extern int count_occurrences( rtx ,  rtx , int ); 
#line 1582 "../.././gcc/rtl.h"
extern int reg_referenced_p( rtx ,  rtx ); 
#line 1583 "../.././gcc/rtl.h"
extern int reg_used_between_p( rtx ,  rtx ,  rtx ); 
#line 1584 "../.././gcc/rtl.h"
extern int reg_set_between_p( rtx ,  rtx ,  rtx ); 
#line 1585 "../.././gcc/rtl.h"
extern int commutative_operand_precedence( rtx ); 
#line 1586 "../.././gcc/rtl.h"
extern int swap_commutative_operands_p( rtx ,  rtx ); 
#line 1587 "../.././gcc/rtl.h"
extern int modified_between_p( rtx ,  rtx ,  rtx ); 
#line 1588 "../.././gcc/rtl.h"
extern int no_labels_between_p( rtx ,  rtx ); 
#line 1589 "../.././gcc/rtl.h"
extern int modified_in_p( rtx ,  rtx ); 
#line 1590 "../.././gcc/rtl.h"
extern int reg_set_p( rtx ,  rtx ); 
#line 1591 "../.././gcc/rtl.h"
extern  rtx single_set_2( rtx ,  rtx ); 
#line 1592 "../.././gcc/rtl.h"
extern int multiple_sets( rtx ); 
#line 1593 "../.././gcc/rtl.h"
extern int set_noop_p( rtx ); 
#line 1594 "../.././gcc/rtl.h"
extern int noop_move_p( rtx ); 
#line 1595 "../.././gcc/rtl.h"
extern  rtx find_last_value( rtx ,  rtx *,  rtx , int ); 
#line 1596 "../.././gcc/rtl.h"
extern int refers_to_regno_p(unsigned int , unsigned int ,  rtx ,  rtx *); 
#line 1597 "../.././gcc/rtl.h"
extern int reg_overlap_mentioned_p( rtx ,  rtx ); 
#line 1598 "../.././gcc/rtl.h"
extern  rtx set_of( rtx ,  rtx ); 
#line 1599 "../.././gcc/rtl.h"
extern void note_stores( rtx , void (*)( rtx ,  rtx , void *), void *); 
#line 1600 "../.././gcc/rtl.h"
extern void note_uses( rtx *, void (*)( rtx *, void *), void *); 
#line 1601 "../.././gcc/rtl.h"
extern int dead_or_set_p( rtx ,  rtx ); 
#line 1602 "../.././gcc/rtl.h"
extern int dead_or_set_regno_p( rtx , unsigned int ); 
#line 1603 "../.././gcc/rtl.h"
extern  rtx find_reg_note( rtx , enum reg_note ,  rtx ); 
#line 1604 "../.././gcc/rtl.h"
extern  rtx find_regno_note( rtx , enum reg_note , unsigned int ); 
#line 1605 "../.././gcc/rtl.h"
extern  rtx find_reg_equal_equiv_note( rtx ); 
#line 1606 "../.././gcc/rtl.h"
extern int find_reg_fusage( rtx , enum rtx_code ,  rtx ); 
#line 1607 "../.././gcc/rtl.h"
extern int find_regno_fusage( rtx , enum rtx_code , unsigned int ); 
#line 1608 "../.././gcc/rtl.h"
extern int pure_call_p( rtx ); 
#line 1609 "../.././gcc/rtl.h"
extern void remove_note( rtx ,  rtx ); 
#line 1610 "../.././gcc/rtl.h"
extern int side_effects_p( rtx ); 
#line 1611 "../.././gcc/rtl.h"
extern int volatile_refs_p( rtx ); 
#line 1612 "../.././gcc/rtl.h"
extern int volatile_insn_p( rtx ); 
#line 1613 "../.././gcc/rtl.h"
extern int may_trap_p( rtx ); 
#line 1614 "../.././gcc/rtl.h"
extern int may_trap_or_fault_p( rtx ); 
#line 1615 "../.././gcc/rtl.h"
extern int inequality_comparisons_p( rtx ); 
#line 1616 "../.././gcc/rtl.h"
extern  rtx replace_rtx( rtx ,  rtx ,  rtx ); 
#line 1617 "../.././gcc/rtl.h"
extern  rtx replace_regs( rtx ,  rtx *, unsigned int , int ); 
#line 1618 "../.././gcc/rtl.h"
extern int replace_label( rtx *, void *); 
#line 1619 "../.././gcc/rtl.h"
extern int rtx_referenced_p( rtx ,  rtx ); 
#line 1620 "../.././gcc/rtl.h"
extern unsigned char tablejump_p( rtx ,  rtx *,  rtx *); 
#line 1621 "../.././gcc/rtl.h"
extern int computed_jump_p( rtx ); 
#line 1622 "../.././gcc/rtl.h"
typedef int (*rtx_function)( rtx *, void *); 
#line 1623 "../.././gcc/rtl.h"
extern int for_each_rtx( rtx *,  rtx_function , void *); 
#line 1624 "../.././gcc/rtl.h"
extern  rtx regno_use_in(unsigned int ,  rtx ); 
#line 1625 "../.././gcc/rtl.h"
extern int auto_inc_p( rtx ); 
#line 1626 "../.././gcc/rtl.h"
extern int in_expr_list_p( rtx ,  rtx ); 
#line 1627 "../.././gcc/rtl.h"
extern void remove_node_from_expr_list( rtx ,  rtx *); 
#line 1628 "../.././gcc/rtl.h"
extern int insns_safe_to_move_p( rtx ,  rtx ,  rtx *); 
#line 1629 "../.././gcc/rtl.h"
extern int loc_mentioned_in_p( rtx *,  rtx ); 
#line 1630 "../.././gcc/rtl.h"
extern  rtx find_first_parameter_load( rtx ,  rtx ); 
#line 1631 "../.././gcc/rtl.h"
extern unsigned char keep_with_call_p( rtx ); 
#line 1632 "../.././gcc/rtl.h"
extern unsigned char label_is_jump_target_p( rtx ,  rtx ); 
#line 1633 "../.././gcc/rtl.h"
extern int insn_rtx_cost( rtx ); 
#line 1637 "../.././gcc/rtl.h"
extern  rtx canonicalize_condition( rtx ,  rtx , int ,  rtx *,  rtx , int , int ); 
#line 1641 "../.././gcc/rtl.h"
extern  rtx get_condition( rtx ,  rtx *, int , int ); 
#line 1646 "../.././gcc/rtl.h"
extern  rtx find_use_as_address( rtx ,  rtx , long ); 
#line 1650 "../.././gcc/rtl.h"
void free_EXPR_LIST_list( rtx *); 
#line 1651 "../.././gcc/rtl.h"
void free_INSN_LIST_list( rtx *); 
#line 1652 "../.././gcc/rtl.h"
void free_EXPR_LIST_node( rtx ); 
#line 1653 "../.././gcc/rtl.h"
void free_INSN_LIST_node( rtx ); 
#line 1654 "../.././gcc/rtl.h"
 rtx alloc_INSN_LIST( rtx ,  rtx ); 
#line 1655 "../.././gcc/rtl.h"
 rtx alloc_EXPR_LIST(int ,  rtx ,  rtx ); 
#line 1663 "../.././gcc/rtl.h"
extern int max_parallel; 
#line 1666 "../.././gcc/rtl.h"
extern void free_reg_info(void ); 
#line 1669 "../.././gcc/rtl.h"
extern int asm_noperands( rtx ); 
#line 1671 "../.././gcc/rtl.h"
extern const char *decode_asm_operands( rtx ,  rtx *,  rtx **, const char **, enum machine_mode *); 
#line 1673 "../.././gcc/rtl.h"
extern enum reg_class reg_preferred_class(int ); 
#line 1674 "../.././gcc/rtl.h"
extern enum reg_class reg_alternate_class(int ); 
#line 1676 "../.././gcc/rtl.h"
extern void split_all_insns(int ); 
#line 1677 "../.././gcc/rtl.h"
extern void split_all_insns_noflow(void ); 
#line 1680 "../.././gcc/rtl.h"
extern  rtx const_int_rtx[64 * 2 + 1]; 
#line 1686 "../.././gcc/rtl.h"
extern  rtx const_true_rtx; 
#line 1688 "../.././gcc/rtl.h"
extern  rtx const_tiny_rtx[3][((int )MAX_MACHINE_MODE)]; 
# 1711 "../.././gcc/rtl.h" 
# 1742 "../.././gcc/rtl.h" 
enum global_rtl_index {GR_PC,GR_CC0,GR_STACK_POINTER,GR_FRAME_POINTER,GR_HARD_FRAME_POINTER,GR_ARG_POINTER,GR_VIRTUAL_INCOMING_ARGS,GR_VIRTUAL_STACK_ARGS,GR_VIRTUAL_STACK_DYNAMIC,GR_VIRTUAL_OUTGOING_ARGS,GR_VIRTUAL_CFA,GR_MAX}; 
#line 1745 "../.././gcc/rtl.h"
extern  rtx global_rtl[GR_MAX]; 
#line 1759 "../.././gcc/rtl.h"
extern  rtx pic_offset_table_rtx; 
#line 1760 "../.././gcc/rtl.h"
extern  rtx static_chain_rtx; 
#line 1761 "../.././gcc/rtl.h"
extern  rtx static_chain_incoming_rtx; 
#line 1762 "../.././gcc/rtl.h"
extern  rtx return_address_pointer_rtx; 
# 1759 "../.././gcc/rtl.h" 
# 7 "./genrtl.h" 1
extern  rtx gen_rtx_fmt_ee(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1); 
#line 9 "./genrtl.h"
extern  rtx gen_rtx_fmt_ue(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1); 
#line 11 "./genrtl.h"
extern  rtx gen_rtx_fmt_E(enum rtx_code , enum machine_mode mode,  rtvec arg0); 
#line 13 "./genrtl.h"
extern  rtx gen_rtx_fmt_e(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 18 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieiee(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8); 
#line 23 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieiee0(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8); 
#line 28 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieieee(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8,  rtx arg9); 
#line 30 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuu000000(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2); 
#line 34 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuB00is(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4, const char *arg5); 
#line 36 "./genrtl.h"
extern  rtx gen_rtx_fmt_s(enum rtx_code , enum machine_mode mode, const char *arg0); 
#line 40 "./genrtl.h"
extern  rtx gen_rtx_fmt_ssiEEsi(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1, int arg2,  rtvec arg3,  rtvec arg4, const char *arg5, int arg6); 
#line 42 "./genrtl.h"
extern  rtx gen_rtx_fmt_Ei(enum rtx_code , enum machine_mode mode,  rtvec arg0, int arg1); 
#line 45 "./genrtl.h"
extern  rtx gen_rtx_fmt_eEee0(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtvec arg1,  rtx arg2,  rtx arg3); 
#line 47 "./genrtl.h"
extern  rtx gen_rtx_fmt_eee(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1,  rtx arg2); 
#line 48 "./genrtl.h"
extern  rtx gen_rtx_fmt_(enum rtx_code , enum machine_mode mode); 
#line 50 "./genrtl.h"
extern  rtx gen_rtx_fmt_i(enum rtx_code , enum machine_mode mode, int arg0); 
#line 52 "./genrtl.h"
extern  rtx gen_rtx_fmt_w(enum rtx_code , enum machine_mode mode, long arg0); 
#line 53 "./genrtl.h"
extern  rtx gen_rtx_fmt_0(enum rtx_code , enum machine_mode mode); 
#line 55 "./genrtl.h"
extern  rtx gen_rtx_fmt_i00(enum rtx_code , enum machine_mode mode, int arg0); 
#line 57 "./genrtl.h"
extern  rtx gen_rtx_fmt_ei(enum rtx_code , enum machine_mode mode,  rtx arg0, int arg1); 
#line 59 "./genrtl.h"
extern  rtx gen_rtx_fmt_e0(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 61 "./genrtl.h"
extern  rtx gen_rtx_fmt_u0(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 63 "./genrtl.h"
extern  rtx gen_rtx_fmt_s00(enum rtx_code , enum machine_mode mode, const char *arg0); 
#line 65 "./genrtl.h"
extern  rtx gen_rtx_fmt_te(enum rtx_code , enum machine_mode mode, union tree_node *arg0,  rtx arg1); 
#line 68 "./genrtl.h"
extern  rtx gen_rtx_fmt_iss(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1, const char *arg2); 
#line 70 "./genrtl.h"
extern  rtx gen_rtx_fmt_is(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1); 
#line 73 "./genrtl.h"
extern  rtx gen_rtx_fmt_isE(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1,  rtvec arg2); 
#line 75 "./genrtl.h"
extern  rtx gen_rtx_fmt_iE(enum rtx_code , enum machine_mode mode, int arg0,  rtvec arg1); 
#line 78 "./genrtl.h"
extern  rtx gen_rtx_fmt_sEss(enum rtx_code , enum machine_mode mode, const char *arg0,  rtvec arg1, const char *arg2, const char *arg3); 
#line 80 "./genrtl.h"
extern  rtx gen_rtx_fmt_eE(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtvec arg1); 
#line 83 "./genrtl.h"
extern  rtx gen_rtx_fmt_Ess(enum rtx_code , enum machine_mode mode,  rtvec arg0, const char *arg1, const char *arg2); 
#line 86 "./genrtl.h"
extern  rtx gen_rtx_fmt_ses(enum rtx_code , enum machine_mode mode, const char *arg0,  rtx arg1, const char *arg2); 
#line 88 "./genrtl.h"
extern  rtx gen_rtx_fmt_ss(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1); 
#line 91 "./genrtl.h"
extern  rtx gen_rtx_fmt_sies(enum rtx_code , enum machine_mode mode, const char *arg0, int arg1,  rtx arg2, const char *arg3); 
#line 94 "./genrtl.h"
extern  rtx gen_rtx_fmt_sse(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1,  rtx arg2); 
#line 96 "./genrtl.h"
extern  rtx gen_rtx_fmt_sE(enum rtx_code , enum machine_mode mode, const char *arg0,  rtvec arg1); 
#line 98 "./genrtl.h"
extern  rtx gen_rtx_fmt_ii(enum rtx_code , enum machine_mode mode, int arg0, int arg1); 
#line 100 "./genrtl.h"
extern  rtx gen_rtx_fmt_Ee(enum rtx_code , enum machine_mode mode,  rtvec arg0,  rtx arg1); 
# 1768 "../.././gcc/rtl.h" 2
# 1779 "../.././gcc/rtl.h" 
extern  rtx gen_rtx_CONST_INT(enum machine_mode , long ); 
#line 1780 "../.././gcc/rtl.h"
extern  rtx gen_rtx_CONST_VECTOR(enum machine_mode ,  rtvec ); 
#line 1781 "../.././gcc/rtl.h"
extern  rtx gen_raw_REG(enum machine_mode , int ); 
#line 1782 "../.././gcc/rtl.h"
extern  rtx gen_rtx_REG(enum machine_mode , unsigned ); 
#line 1783 "../.././gcc/rtl.h"
extern  rtx gen_rtx_SUBREG(enum machine_mode ,  rtx , int ); 
#line 1784 "../.././gcc/rtl.h"
extern  rtx gen_rtx_MEM(enum machine_mode ,  rtx ); 
#line 1852 "../.././gcc/rtl.h"
extern  rtx output_constant_def( tree , int ); 
#line 1853 "../.././gcc/rtl.h"
extern  rtx lookup_constant_def( tree ); 
#line 1857 "../.././gcc/rtl.h"
extern int flow2_completed; 
#line 1862 "../.././gcc/rtl.h"
extern int reload_completed; 
#line 1865 "../.././gcc/rtl.h"
extern int epilogue_completed; 
#line 1870 "../.././gcc/rtl.h"
extern int reload_in_progress; 
#line 1878 "../.././gcc/rtl.h"
extern int cse_not_expected; 
#line 1882 "../.././gcc/rtl.h"
extern int no_new_pseudos; 
#line 1888 "../.././gcc/rtl.h"
extern int rtx_to_tree_code(enum rtx_code ); 
#line 1891 "../.././gcc/rtl.h"
extern int delete_trivially_dead_insns( rtx , int ); 
#line 1892 "../.././gcc/rtl.h"
extern int cse_main( rtx , int ,  FILE *); 
#line 1893 "../.././gcc/rtl.h"
extern void cse_condition_code_reg(void ); 
#line 1894 "../.././gcc/rtl.h"
extern int exp_equiv_p( rtx ,  rtx , int , unsigned char ); 
#line 1895 "../.././gcc/rtl.h"
extern unsigned hash_rtx( rtx x, enum machine_mode , int *, int *, unsigned char ); 
#line 1898 "../.././gcc/rtl.h"
extern int comparison_dominates_p(enum rtx_code , enum rtx_code ); 
#line 1899 "../.././gcc/rtl.h"
extern int condjump_p( rtx ); 
#line 1900 "../.././gcc/rtl.h"
extern int any_condjump_p( rtx ); 
#line 1901 "../.././gcc/rtl.h"
extern int any_uncondjump_p( rtx ); 
#line 1902 "../.././gcc/rtl.h"
extern  rtx pc_set( rtx ); 
#line 1903 "../.././gcc/rtl.h"
extern  rtx condjump_label( rtx ); 
#line 1904 "../.././gcc/rtl.h"
extern int simplejump_p( rtx ); 
#line 1905 "../.././gcc/rtl.h"
extern int returnjump_p( rtx ); 
#line 1906 "../.././gcc/rtl.h"
extern int onlyjump_p( rtx ); 
#line 1907 "../.././gcc/rtl.h"
extern int only_sets_cc0_p( rtx ); 
#line 1908 "../.././gcc/rtl.h"
extern int sets_cc0_p( rtx ); 
#line 1909 "../.././gcc/rtl.h"
extern int invert_jump_1( rtx ,  rtx ); 
#line 1910 "../.././gcc/rtl.h"
extern int invert_jump( rtx ,  rtx , int ); 
#line 1911 "../.././gcc/rtl.h"
extern int rtx_renumbered_equal_p( rtx ,  rtx ); 
#line 1912 "../.././gcc/rtl.h"
extern int true_regnum( rtx ); 
#line 1913 "../.././gcc/rtl.h"
extern unsigned int reg_or_subregno( rtx ); 
#line 1914 "../.././gcc/rtl.h"
extern int redirect_jump_1( rtx ,  rtx ); 
#line 1915 "../.././gcc/rtl.h"
extern void redirect_jump_2( rtx ,  rtx ,  rtx , int , int ); 
#line 1916 "../.././gcc/rtl.h"
extern int redirect_jump( rtx ,  rtx , int ); 
#line 1917 "../.././gcc/rtl.h"
extern void rebuild_jump_labels( rtx ); 
#line 1918 "../.././gcc/rtl.h"
extern  rtx reversed_comparison( rtx , enum machine_mode ); 
#line 1919 "../.././gcc/rtl.h"
extern enum rtx_code reversed_comparison_code( rtx ,  rtx ); 
#line 1921 "../.././gcc/rtl.h"
extern enum rtx_code reversed_comparison_code_parts(enum rtx_code ,  rtx ,  rtx ,  rtx ); 
#line 1922 "../.././gcc/rtl.h"
extern void delete_for_peephole( rtx ,  rtx ); 
#line 1923 "../.././gcc/rtl.h"
extern int condjump_in_parallel_p( rtx ); 
#line 1924 "../.././gcc/rtl.h"
extern void purge_line_number_notes(void ); 
#line 1927 "../.././gcc/rtl.h"
extern int max_reg_num(void ); 
#line 1928 "../.././gcc/rtl.h"
extern int max_label_num(void ); 
#line 1929 "../.././gcc/rtl.h"
extern int get_first_label_num(void ); 
#line 1930 "../.././gcc/rtl.h"
extern void maybe_set_first_label_num( rtx ); 
#line 1931 "../.././gcc/rtl.h"
extern void delete_insns_since( rtx ); 
#line 1932 "../.././gcc/rtl.h"
extern void mark_reg_pointer( rtx , int ); 
#line 1933 "../.././gcc/rtl.h"
extern void mark_user_reg( rtx ); 
#line 1934 "../.././gcc/rtl.h"
extern void reset_used_flags( rtx ); 
#line 1935 "../.././gcc/rtl.h"
extern void set_used_flags( rtx ); 
#line 1936 "../.././gcc/rtl.h"
extern void reorder_insns( rtx ,  rtx ,  rtx ); 
#line 1937 "../.././gcc/rtl.h"
extern void reorder_insns_nobb( rtx ,  rtx ,  rtx ); 
#line 1938 "../.././gcc/rtl.h"
extern int get_max_uid(void ); 
#line 1939 "../.././gcc/rtl.h"
extern int in_sequence_p(void ); 
#line 1940 "../.././gcc/rtl.h"
extern void force_next_line_note(void ); 
#line 1941 "../.././gcc/rtl.h"
extern void init_emit(void ); 
#line 1942 "../.././gcc/rtl.h"
extern void init_emit_once(int ); 
#line 1943 "../.././gcc/rtl.h"
extern void push_topmost_sequence(void ); 
#line 1944 "../.././gcc/rtl.h"
extern void pop_topmost_sequence(void ); 
#line 1945 "../.././gcc/rtl.h"
extern void set_new_first_and_last_insn( rtx ,  rtx ); 
#line 1946 "../.././gcc/rtl.h"
extern void unshare_all_rtl(void ); 
#line 1947 "../.././gcc/rtl.h"
extern void unshare_all_rtl_again( rtx ); 
#line 1948 "../.././gcc/rtl.h"
extern void unshare_all_rtl_in_chain( rtx ); 
#line 1949 "../.././gcc/rtl.h"
extern void verify_rtl_sharing(void ); 
#line 1950 "../.././gcc/rtl.h"
extern void set_first_insn( rtx ); 
#line 1951 "../.././gcc/rtl.h"
extern void set_last_insn( rtx ); 
#line 1952 "../.././gcc/rtl.h"
extern void link_cc0_insns( rtx ); 
#line 1953 "../.././gcc/rtl.h"
extern void add_insn( rtx ); 
#line 1954 "../.././gcc/rtl.h"
extern void add_insn_before( rtx ,  rtx ); 
#line 1955 "../.././gcc/rtl.h"
extern void add_insn_after( rtx ,  rtx ); 
#line 1956 "../.././gcc/rtl.h"
extern void remove_insn( rtx ); 
#line 1957 "../.././gcc/rtl.h"
extern void emit_insn_after_with_line_notes( rtx ,  rtx ,  rtx ); 
#line 1958 "../.././gcc/rtl.h"
extern  rtx emit( rtx ); 
#line 1959 "../.././gcc/rtl.h"
extern void renumber_insns( FILE *); 
#line 1960 "../.././gcc/rtl.h"
extern void remove_unnecessary_notes(void ); 
#line 1961 "../.././gcc/rtl.h"
extern  rtx delete_insn( rtx ); 
#line 1962 "../.././gcc/rtl.h"
extern  rtx entry_of_function(void ); 
#line 1963 "../.././gcc/rtl.h"
extern void delete_insn_chain( rtx ,  rtx ); 
#line 1964 "../.././gcc/rtl.h"
extern  rtx unlink_insn_chain( rtx ,  rtx ); 
#line 1965 "../.././gcc/rtl.h"
extern  rtx delete_insn_and_edges( rtx ); 
#line 1966 "../.././gcc/rtl.h"
extern void delete_insn_chain_and_edges( rtx ,  rtx ); 
#line 1967 "../.././gcc/rtl.h"
extern  rtx gen_lowpart_SUBREG(enum machine_mode ,  rtx ); 
#line 1968 "../.././gcc/rtl.h"
extern  rtx gen_const_mem(enum machine_mode ,  rtx ); 
#line 1969 "../.././gcc/rtl.h"
extern  rtx gen_frame_mem(enum machine_mode ,  rtx ); 
#line 1970 "../.././gcc/rtl.h"
extern  rtx gen_tmp_stack_mem(enum machine_mode ,  rtx ); 
#line 1972 "../.././gcc/rtl.h"
extern unsigned char validate_subreg(enum machine_mode , enum machine_mode ,  rtx , unsigned int ); 
#line 1975 "../.././gcc/rtl.h"
extern int combine_instructions( rtx , unsigned int ); 
#line 1976 "../.././gcc/rtl.h"
extern unsigned int extended_count( rtx , enum machine_mode , int ); 
#line 1977 "../.././gcc/rtl.h"
extern  rtx remove_death(unsigned int ,  rtx ); 
#line 1978 "../.././gcc/rtl.h"
extern void dump_combine_stats( FILE *); 
#line 1979 "../.././gcc/rtl.h"
extern void dump_combine_total_stats( FILE *); 
#line 1981 "../.././gcc/rtl.h"
extern void web_main(void ); 
#line 1984 "../.././gcc/rtl.h"
extern void schedule_insns( FILE *); 
#line 1987 "../.././gcc/rtl.h"
extern void schedule_ebbs( FILE *); 
#line 1990 "../.././gcc/rtl.h"
extern void fix_sched_param(const char *, const char *); 
#line 1993 "../.././gcc/rtl.h"
extern const char *print_rtx_head; 
#line 1994 "../.././gcc/rtl.h"
extern void debug_rtx( rtx ); 
#line 1995 "../.././gcc/rtl.h"
extern void debug_rtx_list( rtx , int ); 
#line 1996 "../.././gcc/rtl.h"
extern void debug_rtx_range( rtx ,  rtx ); 
#line 1997 "../.././gcc/rtl.h"
extern  rtx debug_rtx_find( rtx , int ); 
#line 1998 "../.././gcc/rtl.h"
extern void print_mem_expr( FILE *,  tree ); 
#line 1999 "../.././gcc/rtl.h"
extern void print_rtl( FILE *,  rtx ); 
#line 2000 "../.././gcc/rtl.h"
extern void print_simple_rtl( FILE *,  rtx ); 
#line 2001 "../.././gcc/rtl.h"
extern int print_rtl_single( FILE *,  rtx ); 
#line 2002 "../.././gcc/rtl.h"
extern void print_inline_rtx( FILE *,  rtx , int ); 
#line 2005 "../.././gcc/rtl.h"
extern void init_loop(void ); 
#line 2006 "../.././gcc/rtl.h"
extern void loop_optimize( rtx ,  FILE *, int ); 
#line 2009 "../.././gcc/rtl.h"
extern void branch_target_load_optimize(unsigned char ); 
#line 2012 "../.././gcc/rtl.h"
extern void reposition_prologue_and_epilogue_notes( rtx ); 
#line 2013 "../.././gcc/rtl.h"
extern void thread_prologue_and_epilogue_insns( rtx ); 
#line 2014 "../.././gcc/rtl.h"
extern int prologue_epilogue_contains( rtx ); 
#line 2015 "../.././gcc/rtl.h"
extern int sibcall_epilogue_contains( rtx ); 
#line 2016 "../.././gcc/rtl.h"
extern void mark_temp_addr_taken( rtx ); 
#line 2017 "../.././gcc/rtl.h"
extern void update_temp_slot_address( rtx ,  rtx ); 
#line 2020 "../.././gcc/rtl.h"
extern void expand_null_return(void ); 
#line 2021 "../.././gcc/rtl.h"
extern void expand_naked_return(void ); 
#line 2022 "../.././gcc/rtl.h"
extern void emit_jump( rtx ); 
#line 2026 "../.././gcc/rtl.h"
extern  rtx move_by_pieces( rtx ,  rtx , unsigned long , unsigned int , int ); 
#line 2029 "../.././gcc/rtl.h"
extern void recompute_reg_usage(void ); 
#line 2030 "../.././gcc/rtl.h"
extern int initialize_uninitialized_subregs(void ); 
#line 2031 "../.././gcc/rtl.h"
extern void delete_dead_jumptables(void ); 
#line 2032 "../.././gcc/rtl.h"
extern void print_rtl_with_bb( FILE *,  rtx ); 
#line 2033 "../.././gcc/rtl.h"
extern void dump_flow_info( FILE *); 
#line 2036 "../.././gcc/rtl.h"
extern void init_expmed(void ); 
#line 2037 "../.././gcc/rtl.h"
extern void expand_inc( rtx ,  rtx ); 
#line 2038 "../.././gcc/rtl.h"
extern void expand_dec( rtx ,  rtx ); 
#line 2041 "../.././gcc/rtl.h"
extern unsigned char can_copy_p(enum machine_mode ); 
#line 2042 "../.././gcc/rtl.h"
extern  rtx fis_get_condition( rtx ); 
#line 2043 "../.././gcc/rtl.h"
extern int gcse_main( rtx ,  FILE *); 
#line 2044 "../.././gcc/rtl.h"
extern int bypass_jumps( FILE *); 
#line 2047 "../.././gcc/rtl.h"
extern void gcse_after_reload_main( rtx ); 
#line 2050 "../.././gcc/rtl.h"
extern void mark_elimination(int , int ); 
#line 2051 "../.././gcc/rtl.h"
extern int global_alloc( FILE *); 
#line 2052 "../.././gcc/rtl.h"
extern void dump_global_regs( FILE *); 
#line 2057 "../.././gcc/rtl.h"
extern void build_insn_chain( rtx ); 
#line 2060 "../.././gcc/rtl.h"
extern int reg_classes_intersect_p(enum reg_class , enum reg_class ); 
#line 2061 "../.././gcc/rtl.h"
extern int reg_class_subset_p(enum reg_class , enum reg_class ); 
#line 2062 "../.././gcc/rtl.h"
extern void globalize_reg(int ); 
#line 2063 "../.././gcc/rtl.h"
extern void init_reg_modes_once(void ); 
#line 2064 "../.././gcc/rtl.h"
extern void init_regs(void ); 
#line 2065 "../.././gcc/rtl.h"
extern void init_fake_stack_mems(void ); 
#line 2066 "../.././gcc/rtl.h"
extern void init_reg_sets(void ); 
#line 2067 "../.././gcc/rtl.h"
extern void regclass_init(void ); 
#line 2068 "../.././gcc/rtl.h"
extern void regclass( rtx , int ,  FILE *); 
#line 2069 "../.././gcc/rtl.h"
extern void reg_scan( rtx , unsigned int ); 
#line 2070 "../.././gcc/rtl.h"
extern void reg_scan_update( rtx ,  rtx , unsigned int ); 
#line 2071 "../.././gcc/rtl.h"
extern void fix_register(const char *, int , int ); 
#line 2072 "../.././gcc/rtl.h"
extern void init_subregs_of_mode(void ); 
#line 2073 "../.././gcc/rtl.h"
extern void record_subregs_of_mode( rtx ); 
#line 2079 "../.././gcc/rtl.h"
extern unsigned char invalid_mode_change_p(unsigned int , enum reg_class , enum machine_mode ); 
#line 2082 "../.././gcc/rtl.h"
extern void regmove_optimize( rtx , int ,  FILE *); 
#line 2083 "../.././gcc/rtl.h"
extern void combine_stack_adjustments(void ); 
#line 2086 "../.././gcc/rtl.h"
extern void dbr_schedule( rtx ,  FILE *); 
#line 2089 "../.././gcc/rtl.h"
extern void dump_local_alloc( FILE *); 
#line 2090 "../.././gcc/rtl.h"
extern int local_alloc(void ); 
#line 2093 "../.././gcc/rtl.h"
extern int function_invariant_p( rtx ); 
#line 2096 "../.././gcc/rtl.h"
extern unsigned char reg_to_stack( FILE *); 
#line 2109 "../.././gcc/rtl.h"
enum libcall_type {LCT_NORMAL=0,LCT_CONST=1,LCT_PURE=2,LCT_CONST_MAKE_BLOCK=3,LCT_PURE_MAKE_BLOCK=4,LCT_NORETURN=5,LCT_THROW=6,LCT_RETURNS_TWICE=7}; 
#line 2112 "../.././gcc/rtl.h"
extern void emit_library_call( rtx , enum libcall_type , enum machine_mode , int , ...); 
#line 2114 "../.././gcc/rtl.h"
extern  rtx emit_library_call_value( rtx ,  rtx , enum libcall_type , enum machine_mode , int , ...); 
#line 2117 "../.././gcc/rtl.h"
extern int in_data_section(void ); 
#line 2118 "../.././gcc/rtl.h"
extern void init_varasm_once(void ); 
#line 2119 "../.././gcc/rtl.h"
extern enum tls_model decl_default_tls_model( tree ); 
#line 2122 "../.././gcc/rtl.h"
extern void traverse_md_constants(int (*)(void **, void *), void *); 
#line 2123 "../.././gcc/rtl.h"
struct md_constant {char *name,*value; }; 
#line 2126 "../.././gcc/rtl.h"
extern int read_skip_spaces( FILE *); 
#line 2127 "../.././gcc/rtl.h"
extern unsigned char read_rtx( FILE *,  rtx *, int *); 
#line 2128 "../.././gcc/rtl.h"
extern void copy_rtx_ptr_loc(const void *, const void *); 
#line 2129 "../.././gcc/rtl.h"
extern void print_rtx_ptr_loc(const void *); 
#line 2130 "../.././gcc/rtl.h"
extern const char *join_c_conditions(const char *, const char *); 
#line 2131 "../.././gcc/rtl.h"
extern void print_c_condition(const char *); 
#line 2132 "../.././gcc/rtl.h"
extern const char *read_rtx_filename; 
#line 2133 "../.././gcc/rtl.h"
extern int read_rtx_lineno; 
#line 2136 "../.././gcc/rtl.h"
extern void clear_reg_alias_info( rtx ); 
#line 2137 "../.././gcc/rtl.h"
extern  rtx canon_rtx( rtx ); 
#line 2138 "../.././gcc/rtl.h"
extern int true_dependence( rtx , enum machine_mode ,  rtx , int (*)( rtx , int )); 
#line 2139 "../.././gcc/rtl.h"
extern  rtx get_addr( rtx ); 
#line 2141 "../.././gcc/rtl.h"
extern int canon_true_dependence( rtx , enum machine_mode ,  rtx ,  rtx , int (*)( rtx , int )); 
#line 2142 "../.././gcc/rtl.h"
extern int read_dependence( rtx ,  rtx ); 
#line 2143 "../.././gcc/rtl.h"
extern int anti_dependence( rtx ,  rtx ); 
#line 2144 "../.././gcc/rtl.h"
extern int output_dependence( rtx ,  rtx ); 
#line 2145 "../.././gcc/rtl.h"
extern void mark_constant_function(void ); 
#line 2146 "../.././gcc/rtl.h"
extern void init_alias_once(void ); 
#line 2147 "../.././gcc/rtl.h"
extern void init_alias_analysis(void ); 
#line 2148 "../.././gcc/rtl.h"
extern void end_alias_analysis(void ); 
#line 2149 "../.././gcc/rtl.h"
extern unsigned char memory_modified_in_insn_p( rtx ,  rtx ); 
#line 2150 "../.././gcc/rtl.h"
extern  rtx find_base_term( rtx ); 
#line 2151 "../.././gcc/rtl.h"
extern  rtx gen_hard_reg_clobber(enum machine_mode , unsigned int ); 
#line 2152 "../.././gcc/rtl.h"
extern  rtx get_reg_known_value(unsigned int ); 
#line 2153 "../.././gcc/rtl.h"
extern unsigned char get_reg_known_equiv_p(unsigned int ); 
#line 2156 "../.././gcc/rtl.h"
extern int stack_regs_mentioned( rtx insn); 
#line 2160 "../.././gcc/rtl.h"
extern  rtx stack_limit_rtx; 
#line 2163 "../.././gcc/rtl.h"
extern void regrename_optimize(void ); 
#line 2164 "../.././gcc/rtl.h"
extern void copyprop_hardreg_forward(void ); 
#line 2167 "../.././gcc/rtl.h"
extern void if_convert(int ); 
#line 2170 "../.././gcc/rtl.h"
extern void invert_br_probabilities( rtx ); 
#line 2171 "../.././gcc/rtl.h"
extern unsigned char expensive_function_p(int ); 
#line 2173 "../.././gcc/rtl.h"
extern void tracer(unsigned int ); 
#line 2176 "../.././gcc/rtl.h"
extern void variable_tracking_main(void ); 
#line 2180 "../.././gcc/rtl.h"
extern void get_mode_bounds(enum machine_mode , int , enum machine_mode ,  rtx *,  rtx *); 
#line 2183 "../.././gcc/rtl.h"
extern  rtx reversed_condition( rtx ); 
#line 2184 "../.././gcc/rtl.h"
extern  rtx compare_and_jump_seq( rtx ,  rtx , enum rtx_code ,  rtx , int ,  rtx ); 
#line 2187 "../.././gcc/rtl.h"
extern  rtx canon_condition( rtx ); 
#line 2188 "../.././gcc/rtl.h"
extern void simplify_using_condition( rtx ,  rtx *, struct bitmap_head_def *); 
#line 2191 "../.././gcc/rtl.h"
extern void reg_alloc(void ); 
#line 2194 "../.././gcc/rtl.h"
extern void sms_schedule( FILE *); 
#line 2206 "../.././gcc/rtl.h"
struct rtl_hooks { rtx (*gen_lowpart)(enum machine_mode ,  rtx );  rtx (*gen_lowpart_no_emit)(enum machine_mode ,  rtx );  rtx (*reg_nonzero_bits)( rtx , enum machine_mode ,  rtx , enum machine_mode , unsigned long , unsigned long *);  rtx (*reg_num_sign_bit_copies)( rtx , enum machine_mode ,  rtx , enum machine_mode , unsigned int , unsigned int *); }; 
#line 2209 "../.././gcc/rtl.h"
extern struct rtl_hooks rtl_hooks; 
#line 2212 "../.././gcc/rtl.h"
extern const struct rtl_hooks general_rtl_hooks; 
# 1852 "../.././gcc/rtl.h" 
# 36 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/toplev.h" 1
# 30 "../.././gcc/toplev.h" 
extern int toplev_main(unsigned int , const char **); 
#line 31 "../.././gcc/toplev.h"
extern int read_integral_parameter(const char *, const char *, const int ); 
#line 32 "../.././gcc/toplev.h"
extern void strip_off_ending(char *, int ); 
#line 33 "../.././gcc/toplev.h"
extern const char *trim_filename(const char *); 
#line 35 "../.././gcc/toplev.h"
extern void _fatal_insn_not_found( rtx , const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 37 "../.././gcc/toplev.h"
extern void _fatal_insn(const char *,  rtx , const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 58 "../.././gcc/toplev.h"
extern void internal_error(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __noreturn__ )) ; 
#line 59 "../.././gcc/toplev.h"
extern void warning0(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 61 "../.././gcc/toplev.h"
extern void warning(int , const char *, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 62 "../.././gcc/toplev.h"
extern void error(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 64 "../.././gcc/toplev.h"
extern void fatal_error(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __noreturn__ )) ; 
#line 65 "../.././gcc/toplev.h"
extern void pedwarn(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 66 "../.././gcc/toplev.h"
extern void sorry(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 67 "../.././gcc/toplev.h"
extern void inform(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 68 "../.././gcc/toplev.h"
extern void verbatim(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 70 "../.././gcc/toplev.h"
extern void rest_of_decl_compilation( tree , int , int ); 
#line 71 "../.././gcc/toplev.h"
extern void rest_of_type_compilation( tree , int ); 
#line 72 "../.././gcc/toplev.h"
extern void tree_rest_of_compilation( tree ); 
#line 73 "../.././gcc/toplev.h"
extern void init_optimization_passes(void ); 
#line 74 "../.././gcc/toplev.h"
extern void finish_optimization_passes(void ); 
#line 75 "../.././gcc/toplev.h"
extern unsigned char enable_rtl_dump_file(int ); 
#line 77 "../.././gcc/toplev.h"
extern void announce_function( tree ); 
#line 79 "../.././gcc/toplev.h"
extern void error_for_asm( rtx , const char *, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 80 "../.././gcc/toplev.h"
extern void warning_for_asm( rtx , const char *, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 81 "../.././gcc/toplev.h"
extern void warn_deprecated_use( tree ); 
#line 84 "../.././gcc/toplev.h"
extern void output_quoted_string( FILE *, const char *); 
#line 85 "../.././gcc/toplev.h"
extern void output_file_directive( FILE *, const char *); 
#line 92 "../.././gcc/toplev.h"
extern void fnotice( FILE *, const char *, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 95 "../.././gcc/toplev.h"
extern void wrapup_global_declaration_1( tree ); 
#line 96 "../.././gcc/toplev.h"
extern unsigned char wrapup_global_declaration_2( tree ); 
#line 97 "../.././gcc/toplev.h"
extern unsigned char wrapup_global_declarations( tree *, int ); 
#line 98 "../.././gcc/toplev.h"
extern void check_global_declaration_1( tree ); 
#line 99 "../.././gcc/toplev.h"
extern void check_global_declarations( tree *, int ); 
#line 100 "../.././gcc/toplev.h"
extern void emit_debug_global_declarations( tree *, int ); 
#line 101 "../.././gcc/toplev.h"
extern void write_global_declarations(void ); 
#line 104 "../.././gcc/toplev.h"
extern unsigned local_tick; 
#line 106 "../.././gcc/toplev.h"
extern const char *progname; 
#line 107 "../.././gcc/toplev.h"
extern const char *dump_base_name; 
#line 108 "../.././gcc/toplev.h"
extern const char *aux_base_name; 
#line 109 "../.././gcc/toplev.h"
extern const char *aux_info_file_name; 
#line 110 "../.././gcc/toplev.h"
extern const char *asm_file_name; 
#line 111 "../.././gcc/toplev.h"
extern unsigned char exit_after_options; 
#line 113 "../.././gcc/toplev.h"
extern int target_flags_explicit; 
#line 118 "../.././gcc/toplev.h"
extern unsigned char user_defined_section_attribute; 
#line 121 "../.././gcc/toplev.h"
extern int flag_loop_optimize; 
#line 122 "../.././gcc/toplev.h"
extern int flag_crossjumping; 
#line 123 "../.././gcc/toplev.h"
extern int flag_if_conversion; 
#line 124 "../.././gcc/toplev.h"
extern int flag_if_conversion2; 
#line 125 "../.././gcc/toplev.h"
extern int flag_keep_static_consts; 
#line 126 "../.././gcc/toplev.h"
extern int flag_peel_loops; 
#line 127 "../.././gcc/toplev.h"
extern int flag_rerun_cse_after_loop; 
#line 128 "../.././gcc/toplev.h"
extern int flag_thread_jumps; 
#line 129 "../.././gcc/toplev.h"
extern int flag_tracer; 
#line 130 "../.././gcc/toplev.h"
extern int flag_unroll_loops; 
#line 131 "../.././gcc/toplev.h"
extern int flag_unroll_all_loops; 
#line 132 "../.././gcc/toplev.h"
extern int flag_unswitch_loops; 
#line 133 "../.././gcc/toplev.h"
extern int flag_cprop_registers; 
#line 134 "../.././gcc/toplev.h"
extern int time_report; 
#line 137 "../.././gcc/toplev.h"
extern void print_version( FILE *, const char *); 
#line 138 "../.././gcc/toplev.h"
extern void *default_get_pch_validity( size_t *); 
#line 139 "../.././gcc/toplev.h"
extern const char *default_pch_valid_p(const void *,  size_t ); 
#line 142 "../.././gcc/toplev.h"
extern struct ht *ident_hash; 
#line 147 "../.././gcc/toplev.h"
extern void set_fast_math_flags(int ); 
#line 150 "../.././gcc/toplev.h"
extern void decode_d_option(const char *); 
#line 153 "../.././gcc/toplev.h"
extern unsigned char fast_math_flags_set_p(void ); 
#line 156 "../.././gcc/toplev.h"
extern int exact_log2(unsigned long ); 
#line 159 "../.././gcc/toplev.h"
extern int floor_log2(unsigned long ); 
# 57 "../.././gcc/toplev.h" 
# 176 "../.././gcc/toplev.h" 
extern __inline__ int floor_log2(unsigned long x)  {

#line 177 "../.././gcc/toplev.h"
return (x?(8 * 4) - 1 - ((int )__builtin_clzl(x)):(-1)); }
 
#line 182 "../.././gcc/toplev.h"
extern __inline__ int exact_log2(unsigned long x)  {

#line 183 "../.././gcc/toplev.h"
return (x == (x & (-x)) && x?((int )__builtin_ctzl(x)):(-1)); }
 
#line 190 "../.././gcc/toplev.h"
extern const char *get_src_pwd(void ); 
#line 191 "../.././gcc/toplev.h"
extern unsigned char set_src_pwd(const char *); 
# 37 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/expr.h" 1
# 27 "../.././gcc/expr.h" 
# 1 "../.././gcc/function.h" 1
# 28 "../.././gcc/expr.h" 2
# 1 "../.././gcc/rtl.h" 1
# 30 "../.././gcc/expr.h" 2
# 1 "../.././gcc/flags.h" 1
# 32 "../.././gcc/expr.h" 2
# 1 "../.././gcc/tree.h" 1
# 35 "../.././gcc/expr.h" 2
# 55 "../.././gcc/expr.h" 
enum expand_modifier {EXPAND_NORMAL=0,EXPAND_STACK_PARM,EXPAND_SUM,EXPAND_CONST_ADDRESS,EXPAND_INITIALIZER,EXPAND_WRITE,EXPAND_MEMORY}; 
#line 89 "../.././gcc/expr.h"
enum direction {none,upward,downward}; 
#line 100 "../.././gcc/expr.h"
struct args_size {long constant;  tree var; }; 
#line 122 "../.././gcc/expr.h"
struct locate_and_pad_arg_data {struct args_size size; struct args_size offset; struct args_size slot_offset; struct args_size alignment_pad; enum direction where_pad; unsigned int boundary; }; 
# 89 "../.././gcc/expr.h" 
# 260 "../.././gcc/expr.h" 
enum optab_methods {OPTAB_DIRECT,OPTAB_LIB,OPTAB_WIDEN,OPTAB_LIB_WIDEN,OPTAB_MUST_WIDEN}; 
#line 266 "../.././gcc/expr.h"
extern  rtx expand_simple_binop(enum machine_mode , enum rtx_code ,  rtx ,  rtx ,  rtx , int , enum optab_methods ); 
#line 268 "../.././gcc/expr.h"
extern  rtx expand_simple_unop(enum machine_mode , enum rtx_code ,  rtx ,  rtx , int ); 
#line 272 "../.././gcc/expr.h"
extern int have_insn_for(enum rtx_code , enum machine_mode ); 
#line 275 "../.././gcc/expr.h"
extern void emit_libcall_block( rtx ,  rtx ,  rtx ,  rtx ); 
#line 280 "../.././gcc/expr.h"
extern  rtx gen_add2_insn( rtx ,  rtx ); 
#line 281 "../.././gcc/expr.h"
extern  rtx gen_add3_insn( rtx ,  rtx ,  rtx ); 
#line 282 "../.././gcc/expr.h"
extern  rtx gen_sub2_insn( rtx ,  rtx ); 
#line 283 "../.././gcc/expr.h"
extern  rtx gen_sub3_insn( rtx ,  rtx ,  rtx ); 
#line 284 "../.././gcc/expr.h"
extern  rtx gen_move_insn( rtx ,  rtx ); 
#line 285 "../.././gcc/expr.h"
extern int have_add2_insn( rtx ,  rtx ); 
#line 286 "../.././gcc/expr.h"
extern int have_sub2_insn( rtx ,  rtx ); 
#line 291 "../.././gcc/expr.h"
extern void emit_cmp_and_jump_insns( rtx ,  rtx , enum rtx_code ,  rtx , enum machine_mode , int ,  rtx ); 
#line 294 "../.././gcc/expr.h"
extern void emit_indirect_jump( rtx ); 
#line 297 "../.././gcc/expr.h"
extern  rtx gen_cond_trap(enum rtx_code ,  rtx ,  rtx ,  rtx ); 
# 1 "./insn-config.h" 1
# 304 "../.././gcc/expr.h" 2
 rtx emit_conditional_move( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode ,  rtx ,  rtx , enum machine_mode , int ); 
#line 307 "../.././gcc/expr.h"
int can_conditionally_move_p(enum machine_mode mode); 
#line 311 "../.././gcc/expr.h"
 rtx emit_conditional_add( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode ,  rtx ,  rtx , enum machine_mode , int ); 
#line 313 "../.././gcc/expr.h"
 rtx expand_val_compare_and_swap( rtx ,  rtx ,  rtx ,  rtx ); 
#line 314 "../.././gcc/expr.h"
 rtx expand_bool_compare_and_swap( rtx ,  rtx ,  rtx ,  rtx ); 
#line 315 "../.././gcc/expr.h"
 rtx expand_sync_operation( rtx ,  rtx , enum rtx_code ); 
#line 316 "../.././gcc/expr.h"
 rtx expand_sync_fetch_operation( rtx ,  rtx , enum rtx_code , unsigned char ,  rtx ); 
#line 317 "../.././gcc/expr.h"
 rtx expand_sync_lock_test_and_set( rtx ,  rtx ,  rtx ); 
#line 323 "../.././gcc/expr.h"
extern  rtx negate_rtx(enum machine_mode ,  rtx ); 
#line 326 "../.././gcc/expr.h"
extern  rtx expand_and(enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 330 "../.././gcc/expr.h"
extern  rtx emit_store_flag( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode , int , int ); 
#line 334 "../.././gcc/expr.h"
extern  rtx emit_store_flag_force( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode , int , int ); 
#line 337 "../.././gcc/expr.h"
extern  rtx expand_builtin( tree ,  rtx ,  rtx , enum machine_mode , int ); 
#line 338 "../.././gcc/expr.h"
extern  tree std_build_builtin_va_list(void ); 
#line 339 "../.././gcc/expr.h"
extern void std_expand_builtin_va_start( tree ,  rtx ); 
#line 340 "../.././gcc/expr.h"
extern  rtx default_expand_builtin( tree ,  rtx ,  rtx , enum machine_mode , int ); 
#line 341 "../.././gcc/expr.h"
extern void expand_builtin_setjmp_setup( rtx ,  rtx ); 
#line 342 "../.././gcc/expr.h"
extern void expand_builtin_setjmp_receiver( rtx ); 
#line 343 "../.././gcc/expr.h"
extern  rtx expand_builtin_saveregs(void ); 
#line 344 "../.././gcc/expr.h"
extern void expand_builtin_trap(void ); 
#line 350 "../.././gcc/expr.h"
extern void init_expr_once(void ); 
#line 353 "../.././gcc/expr.h"
extern void init_expr(void ); 
#line 357 "../.././gcc/expr.h"
extern void convert_move( rtx ,  rtx , int ); 
#line 360 "../.././gcc/expr.h"
extern  rtx convert_to_mode(enum machine_mode ,  rtx , int ); 
#line 363 "../.././gcc/expr.h"
extern  rtx convert_modes(enum machine_mode , enum machine_mode ,  rtx , int ); 
#line 374 "../.././gcc/expr.h"
enum block_op_methods {BLOCK_OP_NORMAL,BLOCK_OP_NO_LIBCALL,BLOCK_OP_CALL_PARM,BLOCK_OP_TAILCALL}; 
#line 376 "../.././gcc/expr.h"
extern void init_block_move_fn(const char *); 
#line 377 "../.././gcc/expr.h"
extern void init_block_clear_fn(const char *); 
#line 379 "../.././gcc/expr.h"
extern  rtx emit_block_move( rtx ,  rtx ,  rtx , enum block_op_methods ); 
#line 383 "../.././gcc/expr.h"
extern void move_block_to_reg(int ,  rtx , int , enum machine_mode ); 
#line 387 "../.././gcc/expr.h"
extern void move_block_from_reg(int ,  rtx , int ); 
#line 390 "../.././gcc/expr.h"
extern  rtx gen_group_rtx( rtx ); 
#line 394 "../.././gcc/expr.h"
extern void emit_group_load( rtx ,  rtx ,  tree , int ); 
#line 397 "../.././gcc/expr.h"
extern  rtx emit_group_load_into_temps( rtx ,  rtx ,  tree , int ); 
#line 401 "../.././gcc/expr.h"
extern void emit_group_move( rtx ,  rtx ); 
#line 404 "../.././gcc/expr.h"
extern  rtx emit_group_move_into_temps( rtx ); 
#line 408 "../.././gcc/expr.h"
extern void emit_group_store( rtx ,  rtx ,  tree , int ); 
#line 411 "../.././gcc/expr.h"
extern  rtx copy_blkmode_from_reg( rtx ,  rtx ,  tree ); 
#line 414 "../.././gcc/expr.h"
extern void use_reg( rtx *,  rtx ); 
#line 418 "../.././gcc/expr.h"
extern void use_regs( rtx *, int , int ); 
#line 421 "../.././gcc/expr.h"
extern void use_group_regs( rtx *,  rtx ); 
#line 425 "../.././gcc/expr.h"
extern  rtx clear_storage( rtx ,  rtx , enum block_op_methods ); 
#line 428 "../.././gcc/expr.h"
extern unsigned char set_storage_via_setmem( rtx ,  rtx ,  rtx , unsigned int ); 
#line 433 "../.././gcc/expr.h"
extern int can_move_by_pieces(unsigned long , unsigned int ); 
#line 443 "../.././gcc/expr.h"
extern int can_store_by_pieces(unsigned long ,  rtx (*)(void *, long , enum machine_mode ), void *, unsigned int ); 
#line 452 "../.././gcc/expr.h"
extern  rtx store_by_pieces( rtx , unsigned long ,  rtx (*)(void *, long , enum machine_mode ), void *, unsigned int , int ); 
#line 455 "../.././gcc/expr.h"
extern  rtx emit_move_insn( rtx ,  rtx ); 
#line 458 "../.././gcc/expr.h"
extern  rtx emit_move_insn_1( rtx ,  rtx ); 
#line 462 "../.././gcc/expr.h"
extern  rtx push_block( rtx , int , int ); 
#line 466 "../.././gcc/expr.h"
extern void emit_push_insn( rtx , enum machine_mode ,  tree ,  rtx , unsigned int , int ,  rtx , int ,  rtx ,  rtx , int ,  rtx ); 
#line 469 "../.././gcc/expr.h"
extern void expand_assignment( tree ,  tree ); 
#line 475 "../.././gcc/expr.h"
extern  rtx store_expr( tree ,  rtx , int ); 
#line 480 "../.././gcc/expr.h"
extern  rtx force_operand( rtx ,  rtx ); 
#line 484 "../.././gcc/expr.h"
extern  rtx expand_expr_real( tree ,  rtx , enum machine_mode , enum expand_modifier ,  rtx *); 
#line 491 "../.././gcc/expr.h"
static __inline__  rtx expand_expr( tree exp,  rtx target, enum machine_mode mode, enum expand_modifier modifier)  {

#line 492 "../.././gcc/expr.h"
return expand_expr_real(exp, target, mode, modifier, (((void *)0))); }
 
#line 495 "../.././gcc/expr.h"
extern void expand_var( tree ); 
#line 499 "../.././gcc/expr.h"
extern void init_pending_stack_adjust(void ); 
#line 502 "../.././gcc/expr.h"
extern void discard_pending_stack_adjust(void ); 
#line 506 "../.././gcc/expr.h"
extern void clear_pending_stack_adjust(void ); 
#line 509 "../.././gcc/expr.h"
extern void do_pending_stack_adjust(void ); 
#line 513 "../.././gcc/expr.h"
extern  tree string_constant( tree ,  tree *); 
#line 516 "../.././gcc/expr.h"
extern void jumpifnot( tree ,  rtx ); 
#line 519 "../.././gcc/expr.h"
extern void jumpif( tree ,  rtx ); 
#line 523 "../.././gcc/expr.h"
extern void do_jump( tree ,  rtx ,  rtx ); 
#line 527 "../.././gcc/expr.h"
extern  rtx compare_from_rtx( rtx ,  rtx , enum rtx_code , int , enum machine_mode ,  rtx ); 
#line 529 "../.././gcc/expr.h"
extern void do_compare_rtx_and_jump( rtx ,  rtx , enum rtx_code , int , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 532 "../.././gcc/expr.h"
extern int try_casesi( tree ,  tree ,  tree ,  tree ,  rtx ,  rtx ); 
#line 533 "../.././gcc/expr.h"
extern int try_tablejump( tree ,  tree ,  tree ,  tree ,  rtx ,  rtx ); 
#line 537 "../.././gcc/expr.h"
extern unsigned int case_values_threshold(void ); 
# 1 "../.././gcc/alias.h" 1
# 24 "../.././gcc/alias.h" 
extern long new_alias_set(void ); 
#line 25 "../.././gcc/alias.h"
extern long get_varargs_alias_set(void ); 
#line 26 "../.././gcc/alias.h"
extern long get_frame_alias_set(void ); 
#line 27 "../.././gcc/alias.h"
extern void record_base_value(unsigned int ,  rtx , int ); 
#line 28 "../.././gcc/alias.h"
extern unsigned char component_uses_parent_alias_set( tree ); 
#line 546 "../.././gcc/expr.h"
extern  rtx expr_size( tree ); 
#line 550 "../.././gcc/expr.h"
extern long int_expr_size( tree ); 
#line 554 "../.././gcc/expr.h"
extern  rtx hard_function_value( tree ,  tree ,  tree , int ); 
#line 556 "../.././gcc/expr.h"
extern  rtx prepare_call_address( rtx ,  rtx ,  rtx *, int , int ); 
#line 558 "../.././gcc/expr.h"
extern unsigned char shift_return_value(enum machine_mode , unsigned char ,  rtx ); 
#line 560 "../.././gcc/expr.h"
extern  rtx expand_call( tree ,  rtx , int ); 
#line 562 "../.././gcc/expr.h"
extern void fixup_tail_calls(void ); 
#line 566 "../.././gcc/expr.h"
extern  rtx expand_shift(enum tree_code , enum machine_mode ,  rtx ,  tree ,  rtx , int ); 
#line 568 "../.././gcc/expr.h"
extern  rtx expand_divmod(int , enum tree_code , enum machine_mode ,  rtx ,  rtx ,  rtx , int ); 
#line 573 "../.././gcc/expr.h"
extern void locate_and_pad_parm(enum machine_mode ,  tree , int , int ,  tree , struct args_size *, struct locate_and_pad_arg_data *); 
#line 576 "../.././gcc/expr.h"
extern  rtx label_rtx( tree ); 
#line 581 "../.././gcc/expr.h"
extern  rtx force_label_rtx( tree ); 
#line 584 "../.././gcc/expr.h"
extern  rtx promoted_input_arg(unsigned int , enum machine_mode *, int *); 
#line 589 "../.././gcc/expr.h"
extern  rtx eliminate_constant_term( rtx ,  rtx *); 
#line 593 "../.././gcc/expr.h"
extern  rtx memory_address(enum machine_mode ,  rtx ); 
#line 596 "../.././gcc/expr.h"
extern  rtx memory_address_noforce(enum machine_mode ,  rtx ); 
#line 602 "../.././gcc/expr.h"
extern  rtx change_address( rtx , enum machine_mode ,  rtx ); 
# 542 "../.././gcc/expr.h" 2
# 623 "../.././gcc/expr.h" 
extern  rtx adjust_address_1( rtx , enum machine_mode , long , int , int ); 
#line 625 "../.././gcc/expr.h"
extern  rtx adjust_automodify_address_1( rtx , enum machine_mode ,  rtx , long , int ); 
#line 630 "../.././gcc/expr.h"
extern  rtx offset_address( rtx ,  rtx , unsigned long ); 
# 1 "../.././gcc/emit-rtl.h" 1
# 25 "../.././gcc/emit-rtl.h" 
extern void set_mem_alias_set( rtx , long ); 
#line 28 "../.././gcc/emit-rtl.h"
extern void set_mem_align( rtx , unsigned int ); 
#line 31 "../.././gcc/emit-rtl.h"
extern void set_mem_expr( rtx ,  tree ); 
#line 34 "../.././gcc/emit-rtl.h"
extern void set_mem_offset( rtx ,  rtx ); 
#line 37 "../.././gcc/emit-rtl.h"
extern void set_mem_size( rtx ,  rtx ); 
#line 43 "../.././gcc/emit-rtl.h"
extern  rtx replace_equiv_address( rtx ,  rtx ); 
#line 46 "../.././gcc/emit-rtl.h"
extern  rtx replace_equiv_address_nv( rtx ,  rtx ); 
#line 637 "../.././gcc/expr.h"
extern  rtx widen_memory_access( rtx , enum machine_mode , long ); 
#line 641 "../.././gcc/expr.h"
extern  rtx validize_mem( rtx ); 
#line 646 "../.././gcc/expr.h"
extern void set_mem_attributes( rtx ,  tree , int ); 
#line 651 "../.././gcc/expr.h"
extern void set_mem_attributes_minus_bitpos( rtx ,  tree , int , long ); 
#line 654 "../.././gcc/expr.h"
extern  rtx assemble_trampoline_template(void ); 
#line 657 "../.././gcc/expr.h"
extern  rtx copy_to_reg( rtx ); 
#line 660 "../.././gcc/expr.h"
extern  rtx copy_addr_to_reg( rtx ); 
#line 663 "../.././gcc/expr.h"
extern  rtx copy_to_mode_reg(enum machine_mode ,  rtx ); 
#line 666 "../.././gcc/expr.h"
extern  rtx copy_to_suggested_reg( rtx ,  rtx , enum machine_mode ); 
#line 670 "../.././gcc/expr.h"
extern  rtx force_reg(enum machine_mode ,  rtx ); 
#line 673 "../.././gcc/expr.h"
extern  rtx force_not_mem( rtx ); 
#line 676 "../.././gcc/expr.h"
extern enum machine_mode promote_mode( tree , enum machine_mode , int *, int ); 
#line 679 "../.././gcc/expr.h"
extern void adjust_stack( rtx ); 
#line 682 "../.././gcc/expr.h"
extern void anti_adjust_stack( rtx ); 
#line 685 "../.././gcc/expr.h"
enum save_level {SAVE_BLOCK,SAVE_FUNCTION,SAVE_NONLOCAL}; 
#line 688 "../.././gcc/expr.h"
extern void emit_stack_save(enum save_level ,  rtx *,  rtx ); 
#line 691 "../.././gcc/expr.h"
extern void emit_stack_restore(enum save_level ,  rtx ,  rtx ); 
#line 694 "../.././gcc/expr.h"
extern void update_nonlocal_goto_save_area(void ); 
#line 698 "../.././gcc/expr.h"
extern  rtx allocate_dynamic_stack_space( rtx ,  rtx , int ); 
#line 705 "../.././gcc/expr.h"
extern void probe_stack_range(long ,  rtx ); 
#line 709 "../.././gcc/expr.h"
extern  rtx hard_libcall_value(enum machine_mode ); 
#line 715 "../.././gcc/expr.h"
enum extraction_pattern {EP_insv,EP_extv,EP_extzv}; 
#line 717 "../.././gcc/expr.h"
extern enum machine_mode mode_for_extraction(enum extraction_pattern , int ); 
#line 720 "../.././gcc/expr.h"
extern  rtx store_bit_field( rtx , unsigned long , unsigned long , enum machine_mode ,  rtx ); 
#line 723 "../.././gcc/expr.h"
extern  rtx extract_bit_field( rtx , unsigned long , unsigned long , int ,  rtx , enum machine_mode , enum machine_mode ); 
#line 724 "../.././gcc/expr.h"
extern  rtx expand_mult(enum machine_mode ,  rtx ,  rtx ,  rtx , int ); 
#line 725 "../.././gcc/expr.h"
extern unsigned char const_mult_add_overflow_p( rtx ,  rtx ,  rtx , enum machine_mode , int ); 
#line 726 "../.././gcc/expr.h"
extern  rtx expand_mult_add( rtx ,  rtx ,  rtx ,  rtx , enum machine_mode , int ); 
#line 727 "../.././gcc/expr.h"
extern  rtx expand_mult_highpart_adjust(enum machine_mode ,  rtx ,  rtx ,  rtx ,  rtx , int ); 
#line 729 "../.././gcc/expr.h"
extern  rtx assemble_static_space(unsigned long ); 
#line 730 "../.././gcc/expr.h"
extern int safe_from_p( rtx ,  tree , int ); 
#line 734 "../.././gcc/expr.h"
extern void init_optabs(void ); 
#line 735 "../.././gcc/expr.h"
extern void init_all_optabs(void ); 
#line 738 "../.././gcc/expr.h"
extern  rtx init_one_libfunc(const char *); 
#line 740 "../.././gcc/expr.h"
extern void do_jump_by_parts_equality_rtx( rtx ,  rtx ,  rtx ); 
#line 742 "../.././gcc/expr.h"
extern void do_jump_by_parts_greater_rtx(enum machine_mode , int ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 744 "../.././gcc/expr.h"
extern int vector_mode_valid_p(enum machine_mode ); 
# 634 "../.././gcc/expr.h" 2
# 38 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/diagnostic.h" 1
# 26 "../.././gcc/diagnostic.h" 
# 1 "../.././gcc/pretty-print.h" 1
# 25 "../.././gcc/pretty-print.h" 
# 1 "../.././gcc/../include/obstack.h" 1
# 39 "../.././gcc/pretty-print.h" 2
typedef struct {const char *format_spec;  va_list *args_ptr; int err_no;  location_t *locus; }text_info; 
#line 51 "../.././gcc/pretty-print.h"
typedef enum {DIAGNOSTICS_SHOW_PREFIX_ONCE=0x0,DIAGNOSTICS_SHOW_PREFIX_NEVER=0x1,DIAGNOSTICS_SHOW_PREFIX_EVERY_LINE=0x2}diagnostic_prefixing_rule_t; 
#line 70 "../.././gcc/pretty-print.h"
struct chunk_info {struct chunk_info *prev; const char *args[30 * 2]; }; 
#line 99 "../.././gcc/pretty-print.h"
typedef struct {struct obstack formatted_obstack; struct obstack chunk_obstack; struct obstack *obstack; struct chunk_info *cur_chunk_array;  FILE *stream; int line_length; char digit_buffer[128]; }output_buffer; 
#line 102 "../.././gcc/pretty-print.h"
typedef unsigned int pp_flags; 
#line 107 "../.././gcc/pretty-print.h"
typedef enum {pp_none,pp_before,pp_after}pp_padding; 
#line 119 "../.././gcc/pretty-print.h"
typedef struct { diagnostic_prefixing_rule_t rule; int line_cutoff; }pp_wrapping_mode_t; 
#line 134 "../.././gcc/pretty-print.h"
typedef struct pretty_print_info pretty_printer; 
#line 136 "../.././gcc/pretty-print.h"
typedef unsigned char (*printer_fn)( pretty_printer *,  text_info *, const char *, int , unsigned char , unsigned char , unsigned char ); 
# 134 "../.././gcc/pretty-print.h" 
# 154 "../.././gcc/pretty-print.h" 
# 190 "../.././gcc/pretty-print.h" 
struct pretty_print_info { output_buffer *buffer; const char *prefix;  pp_padding padding; int maximum_length; int indent_skip;  pp_wrapping_mode_t wrapping;  printer_fn format_decoder; unsigned char emitted_prefix; unsigned char need_newline; }; 
#line 291 "../.././gcc/pretty-print.h"
extern void pp_construct( pretty_printer *, const char *, int ); 
#line 292 "../.././gcc/pretty-print.h"
extern void pp_base_set_line_maximum_length( pretty_printer *, int ); 
#line 293 "../.././gcc/pretty-print.h"
extern void pp_base_set_prefix( pretty_printer *, const char *); 
#line 294 "../.././gcc/pretty-print.h"
extern void pp_base_destroy_prefix( pretty_printer *); 
#line 295 "../.././gcc/pretty-print.h"
extern int pp_base_remaining_character_count_for_line( pretty_printer *); 
#line 296 "../.././gcc/pretty-print.h"
extern void pp_base_clear_output_area( pretty_printer *); 
#line 297 "../.././gcc/pretty-print.h"
extern const char *pp_base_formatted_text( pretty_printer *); 
#line 298 "../.././gcc/pretty-print.h"
extern const char *pp_base_last_position_in_text(const  pretty_printer *); 
#line 299 "../.././gcc/pretty-print.h"
extern void pp_base_emit_prefix( pretty_printer *); 
#line 300 "../.././gcc/pretty-print.h"
extern void pp_base_append_text( pretty_printer *, const char *, const char *); 
# 291 "../.././gcc/pretty-print.h" 
# 310 "../.././gcc/pretty-print.h" 
extern void pp_printf( pretty_printer *, const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 313 "../.././gcc/pretty-print.h"
extern void pp_verbatim( pretty_printer *, const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 314 "../.././gcc/pretty-print.h"
extern void pp_base_flush( pretty_printer *); 
#line 315 "../.././gcc/pretty-print.h"
extern void pp_base_format( pretty_printer *,  text_info *); 
#line 316 "../.././gcc/pretty-print.h"
extern void pp_base_output_formatted_text( pretty_printer *); 
#line 317 "../.././gcc/pretty-print.h"
extern void pp_base_format_verbatim( pretty_printer *,  text_info *); 
#line 319 "../.././gcc/pretty-print.h"
extern void pp_base_indent( pretty_printer *); 
#line 320 "../.././gcc/pretty-print.h"
extern void pp_base_newline( pretty_printer *); 
#line 321 "../.././gcc/pretty-print.h"
extern void pp_base_character( pretty_printer *, int ); 
#line 322 "../.././gcc/pretty-print.h"
extern void pp_base_string( pretty_printer *, const char *); 
#line 323 "../.././gcc/pretty-print.h"
extern void pp_write_text_to_stream( pretty_printer *pp); 
#line 324 "../.././gcc/pretty-print.h"
extern void pp_base_maybe_space( pretty_printer *); 
#line 328 "../.././gcc/pretty-print.h"
static __inline__  pp_wrapping_mode_t pp_set_verbatim_wrapping_( pretty_printer *pp)  {

#line 329 "../.././gcc/pretty-print.h"

#line 329 "../.././gcc/pretty-print.h"
 pp_wrapping_mode_t oldmode = ((pp)->wrapping);
#line 330 "../.././gcc/pretty-print.h"
((pp)->wrapping).line_cutoff = 0; 
#line 331 "../.././gcc/pretty-print.h"
((pp)->wrapping).rule = DIAGNOSTICS_SHOW_PREFIX_NEVER; 
#line 332 "../.././gcc/pretty-print.h"
return oldmode; }
 
# 27 "../.././gcc/diagnostic.h" 2
# 1 "../.././gcc/diagnostic.def" 1
# 35 "../.././gcc/diagnostic.h" 2
typedef enum {DK_FATAL,DK_ICE,DK_ERROR,DK_SORRY,DK_WARNING,DK_ANACHRONISM,DK_NOTE,DK_DEBUG,DK_LAST_DIAGNOSTIC_KIND}diagnostic_t; 
#line 48 "../.././gcc/diagnostic.h"
typedef struct { text_info message;  location_t location;  diagnostic_t kind; int option_index; }diagnostic_info; 
#line 54 "../.././gcc/diagnostic.h"
typedef struct diagnostic_context diagnostic_context; 
#line 56 "../.././gcc/diagnostic.h"
typedef void (*diagnostic_starter_fn)( diagnostic_context *,  diagnostic_info *); 
#line 57 "../.././gcc/diagnostic.h"
typedef  diagnostic_starter_fn diagnostic_finalizer_fn; 
#line 107 "../.././gcc/diagnostic.h"
struct diagnostic_context { pretty_printer *printer; int diagnostic_count[DK_LAST_DIAGNOSTIC_KIND]; unsigned char issue_warnings_are_errors_message; unsigned char warning_as_error_requested; unsigned char show_option_requested; unsigned char abort_on_error;  diagnostic_starter_fn begin_diagnostic;  diagnostic_finalizer_fn end_diagnostic; void (*internal_error)(const char *,  va_list *);  tree last_function; int last_module; int lock; }; 
# 90 "../.././gcc/diagnostic.h" 
# 158 "../.././gcc/diagnostic.h" 
extern  diagnostic_context *global_dc; 
#line 179 "../.././gcc/diagnostic.h"
extern void diagnostic_initialize( diagnostic_context *); 
#line 180 "../.././gcc/diagnostic.h"
extern void diagnostic_report_current_module( diagnostic_context *); 
#line 181 "../.././gcc/diagnostic.h"
extern void diagnostic_report_current_function( diagnostic_context *); 
#line 183 "../.././gcc/diagnostic.h"
extern void diagnostic_report_diagnostic( diagnostic_context *,  diagnostic_info *); 
#line 186 "../.././gcc/diagnostic.h"
extern void diagnostic_set_info( diagnostic_info *, const char *,  va_list *,  location_t ,  diagnostic_t ) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 190 "../.././gcc/diagnostic.h"
extern void diagnostic_set_info_translated( diagnostic_info *, const char *,  va_list *,  location_t ,  diagnostic_t ) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 192 "../.././gcc/diagnostic.h"
extern char *diagnostic_build_prefix( diagnostic_info *); 
#line 195 "../.././gcc/diagnostic.h"
extern char *file_name_as_prefix(const char *); 
#line 198 "../.././gcc/diagnostic.h"
extern int dump_generic_node( pretty_printer *,  tree , int , int , unsigned char ); 
#line 199 "../.././gcc/diagnostic.h"
extern void print_generic_stmt( FILE *,  tree , int ); 
#line 200 "../.././gcc/diagnostic.h"
extern void print_generic_stmt_indented( FILE *,  tree , int , int ); 
#line 201 "../.././gcc/diagnostic.h"
extern void print_generic_expr( FILE *,  tree , int ); 
#line 202 "../.././gcc/diagnostic.h"
extern void print_generic_decl( FILE *,  tree , int ); 
#line 204 "../.././gcc/diagnostic.h"
extern void debug_generic_expr( tree ); 
#line 205 "../.././gcc/diagnostic.h"
extern void debug_generic_stmt( tree ); 
#line 206 "../.././gcc/diagnostic.h"
extern void debug_c_tree( tree ); 
# 179 "../.././gcc/diagnostic.h" 
# 39 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/intl.h" 1
# 23 "../.././gcc/intl.h" 
# 1 "/usr/include/locale.h" 1 3 4
# 29 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 42 "/usr/include/bits/locale.h" 3 4
enum {__LC_CTYPE=0,__LC_NUMERIC=1,__LC_TIME=2,__LC_COLLATE=3,__LC_MONETARY=4,__LC_MESSAGES=5,__LC_ALL=6,__LC_PAPER=7,__LC_NAME=8,__LC_ADDRESS=9,__LC_TELEPHONE=10,__LC_MEASUREMENT=11,__LC_IDENTIFICATION=12}; 
# 31 "/usr/include/locale.h" 2 3 4
# 52 "/usr/include/locale.h" 3 4
# 119 "/usr/include/locale.h" 3 4
struct lconv {char *decimal_point; char *thousands_sep; char *grouping; char *int_curr_symbol; char *currency_symbol; char *mon_decimal_point; char *mon_thousands_sep; char *mon_grouping; char *positive_sign; char *negative_sign; char int_frac_digits; char frac_digits; char p_cs_precedes; char p_sep_by_space; char n_cs_precedes; char n_sep_by_space; char p_sign_posn; char n_sign_posn; char int_p_cs_precedes; char int_p_sep_by_space; char int_n_cs_precedes; char int_n_sep_by_space; char int_p_sign_posn; char int_n_sign_posn; }; 
#line 125 "/usr/include/locale.h"
extern char *setlocale(int __category, __const char *__locale) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/locale.h"
extern struct lconv *localeconv(void ) __attribute__  (( __nothrow__ )) ; 
#line 148 "/usr/include/locale.h"
typedef  __locale_t locale_t; 
#line 155 "/usr/include/locale.h"
extern  __locale_t newlocale(int __category_mask, __const char *__locale,  __locale_t __base) __attribute__  (( __nothrow__ )) ; 
# 148 "/usr/include/locale.h" 3 4
# 189 "/usr/include/locale.h" 3 4
extern  __locale_t duplocale( __locale_t __dataset) __attribute__  (( __nothrow__ )) ; 
#line 193 "/usr/include/locale.h"
extern void freelocale( __locale_t __dataset) __attribute__  (( __nothrow__ )) ; 
#line 200 "/usr/include/locale.h"
extern  __locale_t uselocale( __locale_t __dataset) __attribute__  (( __nothrow__ )) ; 
# 24 "../.././gcc/intl.h" 2
# 1 "/usr/include/libintl.h" 1 3 4
# 41 "/usr/include/libintl.h" 3 4
extern char *gettext(__const char *__msgid) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 1 )  )) ; 
#line 46 "/usr/include/libintl.h"
extern char *dgettext(__const char *__domainname, __const char *__msgid) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 2 )  )) ; 
#line 48 "/usr/include/libintl.h"
extern char *__dgettext(__const char *__domainname, __const char *__msgid) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 2 )  )) ; 
#line 54 "/usr/include/libintl.h"
extern char *dcgettext(__const char *__domainname, __const char *__msgid, int __category) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 2 )  )) ; 
#line 57 "/usr/include/libintl.h"
extern char *__dcgettext(__const char *__domainname, __const char *__msgid, int __category) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 2 )  )) ; 
#line 64 "/usr/include/libintl.h"
extern char *ngettext(__const char *__msgid1, __const char *__msgid2, unsigned long int __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 1 )  ))  __attribute__  (( __format_arg__ ( 2 )  )) ; 
#line 70 "/usr/include/libintl.h"
extern char *dngettext(__const char *__domainname, __const char *__msgid1, __const char *__msgid2, unsigned long int __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 2 )  ))  __attribute__  (( __format_arg__ ( 3 )  )) ; 
#line 77 "/usr/include/libintl.h"
extern char *dcngettext(__const char *__domainname, __const char *__msgid1, __const char *__msgid2, unsigned long int __n, int __category) __attribute__  (( __nothrow__ ))  __attribute__  (( __format_arg__ ( 2 )  ))  __attribute__  (( __format_arg__ ( 3 )  )) ; 
#line 83 "/usr/include/libintl.h"
extern char *textdomain(__const char *__domainname) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/libintl.h"
extern char *bindtextdomain(__const char *__domainname, __const char *__dirname) __attribute__  (( __nothrow__ )) ; 
#line 93 "/usr/include/libintl.h"
extern char *bind_textdomain_codeset(__const char *__domainname, __const char *__codeset) __attribute__  (( __nothrow__ )) ; 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.0.2/include/stddef.h" 1 3 4
# 102 "/usr/include/libintl.h" 2 3 4
# 122 "/usr/include/libintl.h" 3 4
# 32 "../.././gcc/intl.h" 2
extern void gcc_init_libintl(void ); 
#line 33 "../.././gcc/intl.h"
extern  size_t gcc_gettext_width(const char *); 
#line 58 "../.././gcc/intl.h"
extern const char *open_quote; 
#line 59 "../.././gcc/intl.h"
extern const char *close_quote; 
# 58 "../.././gcc/intl.h" 
# 40 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/target.h" 1
# 50 "../.././gcc/target.h" 
# 1 "./tm.h" 1
# 53 "../.././gcc/target.h" 2
struct stdarg_info ; 
# 245 "../.././gcc/target.h" 
# 257 "../.././gcc/target.h" 
# 278 "../.././gcc/target.h" 
# 290 "../.././gcc/target.h" 
# 476 "../.././gcc/target.h" 
# 729 "../.././gcc/target.h" 
struct gcc_target {struct asm_out {const char *open_paren,*close_paren; const char *byte_op; struct asm_int_op {const char *hi; const char *si; const char *di; const char *ti; }aligned_op,unaligned_op; unsigned char (*integer)( rtx x, unsigned int size, int aligned_p); void (*globalize_label)( FILE *, const char *); void (*unwind_label)( FILE *,  tree , int , int ); void (*unwind_emit)( FILE *,  rtx ); void (*internal_label)( FILE *, const char *, unsigned long ); unsigned char (*ttype)( rtx ); void (*visibility)( tree , int ); void (*function_prologue)( FILE *, long ); void (*function_end_prologue)( FILE *); void (*function_begin_epilogue)( FILE *); void (*function_epilogue)( FILE *, long ); void (*named_section)(const char *name, unsigned int flags,  tree decl); void (*exception_section)(void ); void (*eh_frame_section)(void ); void (*select_section)( tree , int , unsigned long ); void (*select_rtx_section)(enum machine_mode ,  rtx , unsigned long ); void (*unique_section)( tree , int ); void (*function_rodata_section)( tree ); void (*constructor)( rtx , int ); void (*destructor)( rtx , int ); void (*output_mi_thunk)( FILE *file,  tree thunk_decl, long delta, long vcall_offset,  tree function_decl); unsigned char (*can_output_mi_thunk)( tree thunk_decl, long delta, long vcall_offset,  tree function_decl); void (*file_start)(void ); void (*file_end)(void ); void (*external_libcall)( rtx ); void (*mark_decl_preserved)(const char *); void (*output_dwarf_dtprel)( FILE *file, int size,  rtx x); }asm_out; struct sched {int (*adjust_cost)( rtx insn,  rtx link,  rtx def_insn, int cost); int (*adjust_priority)( rtx , int ); int (*issue_rate)(void ); int (*variable_issue)( FILE *, int ,  rtx , int ); void (*md_init)( FILE *, int , int ); void (*md_finish)( FILE *, int ); void (*md_init_global)( FILE *, int , int ); void (*md_finish_global)( FILE *, int ); int (*reorder)( FILE *, int ,  rtx *, int *, int ); int (*reorder2)( FILE *, int ,  rtx *, int *, int ); void (*dependencies_evaluation_hook)( rtx ,  rtx ); void (*init_dfa_pre_cycle_insn)(void );  rtx (*dfa_pre_cycle_insn)(void ); void (*init_dfa_post_cycle_insn)(void );  rtx (*dfa_post_cycle_insn)(void ); int (*first_cycle_multipass_dfa_lookahead)(void ); int (*first_cycle_multipass_dfa_lookahead_guard)( rtx ); int (*dfa_new_cycle)( FILE *, int ,  rtx , int , int , int *); unsigned char (*is_costly_dependence)( rtx ,  rtx ,  rtx , int , int ); }sched; struct vectorize { tree (*builtin_mask_for_load)(void ); }vectorize; int default_target_flags; unsigned char (*handle_option)( size_t code, const char *arg, int value); enum machine_mode (*eh_return_filter_mode)(void );  tree (*merge_decl_attributes)( tree ,  tree );  tree (*merge_type_attributes)( tree ,  tree ); const struct attribute_spec *attribute_table; int (*comp_type_attributes)( tree type1,  tree type2); void (*set_default_type_attributes)( tree type); void (*insert_attributes)( tree decl,  tree *attributes); unsigned char (*function_attribute_inlinable_p)( tree fndecl); unsigned char (*ms_bitfield_layout_p)( tree record_type); unsigned char (*align_anon_bitfield)(void ); void (*init_builtins)(void );  rtx (*expand_builtin)( tree exp,  rtx target,  rtx subtarget, enum machine_mode mode, int ignore);  tree (*resolve_overloaded_builtin)( tree decl,  tree params);  tree (*fold_builtin)( tree fndecl,  tree arglist, unsigned char ignore); const char *(*mangle_fundamental_type)( tree type); void (*init_libfuncs)(void ); unsigned int (*section_type_flags)( tree , const char *, int ); unsigned char (*cannot_modify_jumps_p)(void ); int (*branch_target_register_class)(void ); unsigned char (*branch_target_register_callee_saved)(unsigned char after_pe_gen); unsigned char (*cannot_force_const_mem)( rtx ); unsigned char (*cannot_copy_insn_p)( rtx ); unsigned char (*commutative_p)( rtx , int );  rtx (*delegitimize_address)( rtx ); unsigned char (*function_ok_for_sibcall)( tree decl,  tree exp); unsigned char (*in_small_data_p)( tree ); unsigned char (*binds_local_p)( tree ); void (*encode_section_info)( tree ,  rtx , int ); const char *(*strip_name_encoding)(const char *); unsigned long (*shift_truncation_mask)(enum machine_mode mode); unsigned int (*min_divisions_for_recip_mul)(enum machine_mode mode); unsigned char (*valid_pointer_mode)(enum machine_mode mode); unsigned char (*scalar_mode_supported_p)(enum machine_mode mode); unsigned char (*vector_mode_supported_p)(enum machine_mode mode); unsigned char (*vector_opaque_p)( tree ); unsigned char (*rtx_costs)( rtx x, int code, int outer_code, int *total); int (*address_cost)( rtx x);  rtx (*allocate_initial_value)( rtx x);  rtx (*dwarf_register_span)( rtx ); unsigned char (*fixed_condition_code_regs)(unsigned int *, unsigned int *); enum machine_mode (*cc_modes_compatible)(enum machine_mode , enum machine_mode ); void (*machine_dependent_reorg)(void );  tree (*build_builtin_va_list)(void );  tree (*gimplify_va_arg_expr)( tree valist,  tree type,  tree *pre_p,  tree *post_p); void *(*get_pch_validity)( size_t *); const char *(*pch_valid_p)(const void *,  size_t ); const char *(*check_pch_target_flags)(int ); unsigned char (*default_short_enums)(void );  rtx (*builtin_setjmp_frame_value)(void );  tree (*md_asm_clobbers)( tree ,  tree ,  tree ); int (*dwarf_calling_convention)( tree ); void (*dwarf_handle_frame_unspec)(const char *,  rtx , int ); unsigned char (*stdarg_optimize_hook)(struct stdarg_info *ai,  tree lhs,  tree rhs);  tree (*stack_protect_guard)(void );  tree (*stack_protect_fail)(void ); const char *(*invalid_within_doloop)( rtx ); unsigned char (*valid_dllimport_attribute_p)( tree decl); struct calls {unsigned char (*promote_function_args)( tree fntype); unsigned char (*promote_function_return)( tree fntype); unsigned char (*promote_prototypes)( tree fntype);  rtx (*struct_value_rtx)( tree fndecl, int incoming); unsigned char (*return_in_memory)( tree type,  tree fndecl); unsigned char (*return_in_msb)( tree type); unsigned char (*pass_by_reference)( CUMULATIVE_ARGS *ca, enum machine_mode mode,  tree type, unsigned char named_arg);  rtx (*expand_builtin_saveregs)(void ); void (*setup_incoming_varargs)( CUMULATIVE_ARGS *ca, enum machine_mode mode,  tree type, int *pretend_arg_size, int second_time); unsigned char (*strict_argument_naming)( CUMULATIVE_ARGS *ca); unsigned char (*pretend_outgoing_varargs_named)( CUMULATIVE_ARGS *ca); unsigned char (*split_complex_arg)( tree type); unsigned char (*must_pass_in_stack)(enum machine_mode mode,  tree t); unsigned char (*callee_copies)( CUMULATIVE_ARGS *ca, enum machine_mode mode,  tree type, unsigned char named); int (*arg_partial_bytes)( CUMULATIVE_ARGS *ca, enum machine_mode mode,  tree type, unsigned char named); const char *(*invalid_arg_for_unprototyped_fn)( tree typelist,  tree funcdecl,  tree val);  rtx (*function_value)( tree ret_type,  tree fn_decl_or_type, unsigned char outgoing);  rtx (*internal_arg_pointer)(void ); }calls; const char *(*invalid_conversion)( tree fromtype,  tree totype); const char *(*invalid_unary_op)(int op,  tree type); const char *(*invalid_binary_op)(int op,  tree type1,  tree type2); struct cxx { tree (*guard_type)(void ); unsigned char (*guard_mask_bit)(void );  tree (*get_cookie_size)( tree ); unsigned char (*cookie_has_size)(void ); int (*import_export_class)( tree , int ); unsigned char (*cdtor_returns_this)(void ); unsigned char (*key_method_may_be_inline)(void ); void (*determine_class_data_visibility)( tree decl); unsigned char (*class_data_always_comdat)(void ); unsigned char (*use_aeabi_atexit)(void ); void (*adjust_class_at_definition)( tree type); }cxx; unsigned char unwind_tables_default; unsigned char have_named_sections; unsigned char have_ctors_dtors; unsigned char have_tls; unsigned char have_srodata_section; unsigned char terminate_dw2_eh_frame_info; unsigned char file_start_app_off; unsigned char file_start_file_directive; unsigned char handle_pragma_redefine_extname; unsigned char handle_pragma_extern_prefix; unsigned char relaxed_ordering; unsigned char arm_eabi_unwinder; }; 
#line 731 "../.././gcc/target.h"
extern struct gcc_target targetm; 
# 41 "../.././gcc/cp/call.c" 2
# 1 "../.././gcc/convert.h" 1
# 24 "../.././gcc/convert.h" 
extern  tree convert_to_integer( tree ,  tree ); 
#line 25 "../.././gcc/convert.h"
extern  tree convert_to_pointer( tree ,  tree ); 
#line 26 "../.././gcc/convert.h"
extern  tree convert_to_real( tree ,  tree ); 
#line 27 "../.././gcc/convert.h"
extern  tree convert_to_complex( tree ,  tree ); 
#line 28 "../.././gcc/convert.h"
extern  tree convert_to_vector( tree ,  tree ); 
#line 57 "../.././gcc/cp/call.c"
typedef enum conversion_kind {ck_identity,ck_lvalue,ck_qual,ck_std,ck_ptr,ck_pmem,ck_base,ck_ref_bind,ck_user,ck_ambig,ck_rvalue}conversion_kind; 
#line 71 "../.././gcc/cp/call.c"
typedef enum conversion_rank {cr_identity,cr_exact,cr_promotion,cr_std,cr_pbool,cr_user,cr_ellipsis,cr_bad}conversion_rank; 
#line 77 "../.././gcc/cp/call.c"
typedef struct conversion conversion; 
#line 113 "../.././gcc/cp/call.c"
struct conversion { conversion_kind kind;  conversion_rank rank; unsigned int user_conv_p:1; unsigned int ellipsis_p:1; unsigned int this_p:1; unsigned int bad_p:1; unsigned int need_temporary_p:1; unsigned int check_copy_constructor_p:1; unsigned int base_p:1;  tree type; union { conversion *next;  tree expr; }u; struct z_candidate *cand; }; 
#line 121 "../.././gcc/cp/call.c"
static struct obstack conversion_obstack; 
#line 122 "../.././gcc/cp/call.c"
static unsigned char conversion_obstack_initialized; 
#line 124 "../.././gcc/cp/call.c"
static struct z_candidate *tourney(struct z_candidate *); 
#line 125 "../.././gcc/cp/call.c"
static int equal_functions( tree ,  tree ); 
#line 126 "../.././gcc/cp/call.c"
static int joust(struct z_candidate *, struct z_candidate *, unsigned char ); 
#line 127 "../.././gcc/cp/call.c"
static int compare_ics( conversion *,  conversion *); 
#line 128 "../.././gcc/cp/call.c"
static  tree build_over_call(struct z_candidate *, int ); 
#line 129 "../.././gcc/cp/call.c"
static  tree build_java_interface_fn_ref( tree ,  tree ); 
# 42 "../.././gcc/cp/call.c" 2
# 139 "../.././gcc/cp/call.c" 
static  tree convert_like_real( conversion *,  tree ,  tree , int , int , unsigned char , unsigned char ); 
#line 141 "../.././gcc/cp/call.c"
static void op_error(enum tree_code , enum tree_code ,  tree ,  tree ,  tree , const char *); 
#line 142 "../.././gcc/cp/call.c"
static  tree build_object_call( tree ,  tree ); 
#line 143 "../.././gcc/cp/call.c"
static  tree resolve_args( tree ); 
#line 144 "../.././gcc/cp/call.c"
static struct z_candidate *build_user_type_conversion_1( tree ,  tree , int ); 
#line 145 "../.././gcc/cp/call.c"
static void print_z_candidate(const char *, struct z_candidate *); 
#line 146 "../.././gcc/cp/call.c"
static void print_z_candidates(struct z_candidate *); 
#line 147 "../.././gcc/cp/call.c"
static  tree build_this( tree ); 
#line 148 "../.././gcc/cp/call.c"
static struct z_candidate *splice_viable(struct z_candidate *, unsigned char , unsigned char *); 
#line 149 "../.././gcc/cp/call.c"
static unsigned char any_strictly_viable(struct z_candidate *); 
#line 152 "../.././gcc/cp/call.c"
static struct z_candidate *add_template_candidate(struct z_candidate **,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree , int ,  unification_kind_t ); 
#line 155 "../.././gcc/cp/call.c"
static struct z_candidate *add_template_candidate_real(struct z_candidate **,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree , int ,  tree ,  unification_kind_t ); 
#line 157 "../.././gcc/cp/call.c"
static struct z_candidate *add_template_conv_candidate(struct z_candidate **,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ); 
#line 160 "../.././gcc/cp/call.c"
static void add_builtin_candidates(struct z_candidate **, enum tree_code , enum tree_code ,  tree ,  tree *, int ); 
#line 163 "../.././gcc/cp/call.c"
static void add_builtin_candidate(struct z_candidate **, enum tree_code , enum tree_code ,  tree ,  tree ,  tree ,  tree *,  tree *, int ); 
#line 164 "../.././gcc/cp/call.c"
static unsigned char is_complete( tree ); 
#line 167 "../.././gcc/cp/call.c"
static void build_builtin_candidate(struct z_candidate **,  tree ,  tree ,  tree ,  tree *,  tree *, int ); 
#line 169 "../.././gcc/cp/call.c"
static struct z_candidate *add_conv_candidate(struct z_candidate **,  tree ,  tree ,  tree ,  tree ,  tree ); 
#line 171 "../.././gcc/cp/call.c"
static struct z_candidate *add_function_candidate(struct z_candidate **,  tree ,  tree ,  tree ,  tree ,  tree , int ); 
#line 172 "../.././gcc/cp/call.c"
static  conversion *implicit_conversion( tree ,  tree ,  tree , unsigned char , int ); 
#line 173 "../.././gcc/cp/call.c"
static  conversion *standard_conversion( tree ,  tree ,  tree , unsigned char , int ); 
#line 174 "../.././gcc/cp/call.c"
static  conversion *reference_binding( tree ,  tree ,  tree , int ); 
#line 175 "../.././gcc/cp/call.c"
static  conversion *build_conv( conversion_kind ,  tree ,  conversion *); 
#line 176 "../.././gcc/cp/call.c"
static unsigned char is_subseq( conversion *,  conversion *); 
#line 177 "../.././gcc/cp/call.c"
static  tree maybe_handle_ref_bind( conversion **); 
#line 178 "../.././gcc/cp/call.c"
static void maybe_handle_implicit_object( conversion **); 
#line 181 "../.././gcc/cp/call.c"
static struct z_candidate *add_candidate(struct z_candidate **,  tree ,  tree ,  size_t ,  conversion **,  tree ,  tree , int ); 
#line 182 "../.././gcc/cp/call.c"
static  tree source_type( conversion *); 
#line 183 "../.././gcc/cp/call.c"
static void add_warning(struct z_candidate *, struct z_candidate *); 
#line 184 "../.././gcc/cp/call.c"
static unsigned char reference_related_p( tree ,  tree ); 
#line 185 "../.././gcc/cp/call.c"
static unsigned char reference_compatible_p( tree ,  tree ); 
#line 186 "../.././gcc/cp/call.c"
static  conversion *convert_class_to_reference( tree ,  tree ,  tree ); 
#line 187 "../.././gcc/cp/call.c"
static  conversion *direct_reference_binding( tree ,  conversion *); 
#line 188 "../.././gcc/cp/call.c"
static unsigned char promoted_arithmetic_type_p( tree ); 
#line 189 "../.././gcc/cp/call.c"
static  conversion *conditional_conversion( tree ,  tree ); 
#line 190 "../.././gcc/cp/call.c"
static char *name_as_c_string( tree ,  tree , unsigned char *); 
#line 191 "../.././gcc/cp/call.c"
static  tree call_builtin_trap(void ); 
#line 192 "../.././gcc/cp/call.c"
static  tree prep_operand( tree ); 
#line 194 "../.././gcc/cp/call.c"
static void add_candidates( tree ,  tree ,  tree , unsigned char ,  tree ,  tree , int , struct z_candidate **); 
#line 195 "../.././gcc/cp/call.c"
static  conversion *merge_conversion_sequences( conversion *,  conversion *); 
#line 196 "../.././gcc/cp/call.c"
static unsigned char magic_varargs_p( tree ); 
#line 197 "../.././gcc/cp/call.c"
typedef void (*diagnostic_fn_t)(const char *, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 198 "../.././gcc/cp/call.c"
static  tree build_temp( tree ,  tree , int ,  diagnostic_fn_t *); 
#line 199 "../.././gcc/cp/call.c"
static void check_constructor_callable( tree ,  tree ); 
#line 206 "../.././gcc/cp/call.c"
unsigned char check_dtor_name( tree basetype,  tree name)  {

#line 211 "../.././gcc/cp/call.c"
if (name == global_trees[TI_ERROR_MARK]){
return 1; }
#line 211 "../.././gcc/cp/call.c"
if ((((enum tree_code )((name)->common).code)) == TYPE_DECL){
name = (((name)->common).type); }else{
if ((tree_code_type[((int )((((enum tree_code )((name)->common).code))))] == tcc_type)){
; }else{
if ((((enum tree_code )((name)->common).code)) == IDENTIFIER_NODE){
{ 
#line 222 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((basetype)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((basetype)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((basetype)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((basetype)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((basetype)->type).lang_flag_5)) && name == constructor_name(basetype)) || ((((enum tree_code )((basetype)->common).code)) == ENUMERAL_TYPE && name == (((((((basetype)->type).name))->decl_minimal).name)))){
name = basetype; }else{
name = get_type_value(name); }} }else{
{ 
#line 233 "../.././gcc/cp/call.c"
(((void )(((!(((((enum tree_code )((name)->common).code)) == TEMPLATE_DECL && (!((((enum tree_code )((name)->common).code)) == TEMPLATE_DECL && (!(((name)->decl_non_common).result)))) && (((enum tree_code )(((((name)->decl_non_common).result))->common).code)) == TYPE_DECL && (!((((enum tree_code )((name)->common).code)) == TEMPLATE_DECL && ((((name)->decl_common).lang_flag_0) && ((((enum tree_code )((name)->common).code)) == CONST_DECL || (((enum tree_code )((name)->common).code)) == PARM_DECL || (((enum tree_code )((name)->common).code)) == TYPE_DECL || (((enum tree_code )((name)->common).code)) == TEMPLATE_DECL)))))))?fancy_abort("../.././gcc/cp/call.c", 233, __FUNCTION__) , 0:0)))); 
#line 234 "../.././gcc/cp/call.c"
return 0; } }}}
#line 237 "../.././gcc/cp/call.c"
if ((!name)){
return 0; }
#line 239 "../.././gcc/cp/call.c"
return comptypes(((((basetype)->type).main_variant)), ((((name)->type).main_variant)), 0); }
 
#line 246 "../.././gcc/cp/call.c"
 tree build_addr_func( tree function)  {

#line 247 "../.././gcc/cp/call.c"

#line 247 "../.././gcc/cp/call.c"
 tree type = (((function)->common).type);
#line 251 "../.././gcc/cp/call.c"
if ((((enum tree_code )((type)->common).code)) == METHOD_TYPE){
{ 
#line 259 "../.././gcc/cp/call.c"
if ((((enum tree_code )((function)->common).code)) == OFFSET_REF){
{ 
#line 255 "../.././gcc/cp/call.c"

#line 255 "../.././gcc/cp/call.c"
 tree object = build_address((((function)->exp).operands[0]));
#line 256 "../.././gcc/cp/call.c"
return get_member_function_from_ptrfunc((&object), (((function)->exp).operands[1])); } }
#line 259 "../.././gcc/cp/call.c"
function = build_address(function); } }else{
function = decay_conversion(function); }
#line 264 "../.././gcc/cp/call.c"
return function; }
 
#line 272 "../.././gcc/cp/call.c"
 tree build_call( tree function,  tree parms)  {

#line 273 "../.././gcc/cp/call.c"

#line 273 "../.././gcc/cp/call.c"
int is_constructor = 0;
#line 274 "../.././gcc/cp/call.c"

#line 274 "../.././gcc/cp/call.c"
int nothrow;
#line 275 "../.././gcc/cp/call.c"

#line 275 "../.././gcc/cp/call.c"
 tree tmp;
#line 276 "../.././gcc/cp/call.c"

#line 276 "../.././gcc/cp/call.c"
 tree decl;
#line 277 "../.././gcc/cp/call.c"

#line 277 "../.././gcc/cp/call.c"
 tree result_type;
#line 278 "../.././gcc/cp/call.c"

#line 278 "../.././gcc/cp/call.c"
 tree fntype;
#line 280 "../.././gcc/cp/call.c"
function = build_addr_func(function); 
#line 282 "../.././gcc/cp/call.c"
if (((((enum tree_code )(((((function)->common).type))->common).code)) == RECORD_TYPE && ((((((function)->common).type))->type).lang_specific) && ((((&(((((((function)->common).type))->type).lang_specific)->u).c))->ptrmemfunc_flag)))){
{ 
#line 284 "../.././gcc/cp/call.c"
sorry("unable to call pointer to member function here"); 
#line 285 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 288 "../.././gcc/cp/call.c"
fntype = ((((((function)->common).type))->common).type); 
#line 289 "../.././gcc/cp/call.c"
result_type = (((fntype)->common).type); 
#line 291 "../.././gcc/cp/call.c"
if ((((enum tree_code )((function)->common).code)) == ADDR_EXPR && (((enum tree_code )(((((function)->exp).operands[0]))->common).code)) == FUNCTION_DECL){
decl = (((function)->exp).operands[0]); }else{
decl = (( tree )(((void *)0))); }
#line 299 "../.././gcc/cp/call.c"
nothrow = ((decl && (((decl)->common).nothrow_flag)) || ((((((((((function)->common).type))->common).type))->type).binfo) && ((((((((((((function)->common).type))->common).type))->type).binfo))->list).value) == (( tree )(((void *)0))))); 
#line 302 "../.././gcc/cp/call.c"
if (decl && (((decl)->common).volatile_flag) && cfun){
(((cfun->language))->returns_abnormally) = 1; }
#line 305 "../.././gcc/cp/call.c"
if (decl && (((decl)->common).deprecated_flag)){
warn_deprecated_use(decl); }
#line 307 "../.././gcc/cp/call.c"
require_complete_eh_spec_types(fntype, decl); 
#line 309 "../.././gcc/cp/call.c"
if (decl && (((((decl)->decl_common).lang_specific)->decl_flags).constructor_attr)){
is_constructor = 1; }
#line 312 "../.././gcc/cp/call.c"
if (decl && (!(((decl)->common).used_flag))){
{ 
#line 317 "../.././gcc/cp/call.c"
(((void )(((!((((decl)->decl_common).artificial_flag) || (!strncmp((((const char *)(((((decl)->decl_minimal).name))->identifier).id.str)), "__", 2))))?fancy_abort("../.././gcc/cp/call.c", 321, __FUNCTION__) , 0:0)))); 
#line 320 "../.././gcc/cp/call.c"
mark_used(decl); } }
#line 326 "../.././gcc/cp/call.c"
if ((!decl) || (!((((decl)->function_decl).built_in_class) != NOT_BUILT_IN))){
for(tmp = parms;tmp;tmp = (((tmp)->common).chain)) { if (is_empty_class(((((((tmp)->list).value))->common).type)) && (!(((((((((tmp)->list).value))->common).type))->common).addressable_flag))){
{ 
#line 331 "../.././gcc/cp/call.c"

#line 331 "../.././gcc/cp/call.c"
 tree t = build0_stat(EMPTY_CLASS_EXPR, ((((((tmp)->list).value))->common).type));
#line 332 "../.././gcc/cp/call.c"
(((tmp)->list).value) = build2_stat(COMPOUND_EXPR, (((t)->common).type), (((tmp)->list).value), t); } }} }
#line 336 "../.././gcc/cp/call.c"
function = build3_stat(CALL_EXPR, result_type, function, parms, (( tree )(((void *)0)))); 
#line 337 "../.././gcc/cp/call.c"
((((function)->common).lang_flag_4)) = is_constructor; 
#line 338 "../.././gcc/cp/call.c"
(((function)->common).nothrow_flag) = nothrow; 
#line 340 "../.././gcc/cp/call.c"
return function; }
 
#line 378 "../.././gcc/cp/call.c"
typedef struct z_candidate z_candidate; 
#line 380 "../.././gcc/cp/call.c"
typedef struct candidate_warning candidate_warning; 
#line 384 "../.././gcc/cp/call.c"
struct candidate_warning { z_candidate *loser;  candidate_warning *next; }; 
#line 417 "../.././gcc/cp/call.c"
struct z_candidate { tree fn;  tree args;  conversion **convs;  size_t num_convs;  conversion *second_conv; int viable;  tree access_path;  tree conversion_path;  tree template_decl;  candidate_warning *warnings;  z_candidate *next; }; 
#line 424 "../.././gcc/cp/call.c"
unsigned char null_ptr_cst_p( tree t)  {

#line 429 "../.././gcc/cp/call.c"
t = integral_constant_value(t); 
#line 430 "../.././gcc/cp/call.c"
if (t == c_global_trees[CTI_NULL] || (((((enum tree_code )(((((t)->common).type))->common).code)) == BOOLEAN_TYPE || (((enum tree_code )(((((t)->common).type))->common).code)) == CHAR_TYPE || (((enum tree_code )(((((t)->common).type))->common).code)) == INTEGER_TYPE) && integer_zerop(t))){
return 1; }
#line 433 "../.././gcc/cp/call.c"
return 0; }
 
#line 441 "../.././gcc/cp/call.c"
unsigned char sufficient_parms_p( tree parmlist)  {

#line 446 "../.././gcc/cp/call.c"
for(;parmlist && parmlist != global_trees[TI_VOID_LIST_NODE];parmlist = (((parmlist)->common).chain)) { if ((!(((parmlist)->list).purpose))){
return 0; }} 
#line 446 "../.././gcc/cp/call.c"
return 1; }
 
#line 454 "../.././gcc/cp/call.c"
static void *conversion_obstack_alloc( size_t n)  {

#line 455 "../.././gcc/cp/call.c"

#line 455 "../.././gcc/cp/call.c"
void *p;
#line 456 "../.././gcc/cp/call.c"
if ((!conversion_obstack_initialized)){
{ 
#line 458 "../.././gcc/cp/call.c"
_obstack_begin(((&conversion_obstack)), 0, 0, (((void *(*)(long ))xmalloc)), (((void (*)(void *))free))); 
#line 459 "../.././gcc/cp/call.c"
conversion_obstack_initialized = 1; } }
#line 461 "../.././gcc/cp/call.c"
p = __extension__ ({ 
#line 461 "../.././gcc/cp/call.c"

#line 461 "../.././gcc/cp/call.c"
struct obstack *__h = ((&conversion_obstack));
#line 461 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 461 "../.././gcc/cp/call.c"

#line 461 "../.././gcc/cp/call.c"
struct obstack *__o = (__h);
#line 461 "../.././gcc/cp/call.c"

#line 461 "../.././gcc/cp/call.c"
int __len = ((n));
#line 461 "../.././gcc/cp/call.c"
if ((__o->chunk_limit) - (__o->next_free) < __len){
_obstack_newchunk(__o, __len); }
#line 461 "../.././gcc/cp/call.c"
(((__o)->next_free) += (__len)); 
#line 461 "../.././gcc/cp/call.c"
((void )0); } ); 
#line 461 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 461 "../.././gcc/cp/call.c"

#line 461 "../.././gcc/cp/call.c"
struct obstack *__o1 = (__h);
#line 461 "../.././gcc/cp/call.c"

#line 461 "../.././gcc/cp/call.c"
void *value;
#line 461 "../.././gcc/cp/call.c"
value = ((void *)(__o1->object_base)); 
#line 461 "../.././gcc/cp/call.c"
if ((__o1->next_free) == value){
(__o1->maybe_empty_object) = 1; }
#line 461 "../.././gcc/cp/call.c"
(__o1->next_free) = ((((((__o1->next_free)) - ((char *)0)) + (__o1->alignment_mask)) & (~((__o1->alignment_mask)))) + ((char *)0)); 
#line 461 "../.././gcc/cp/call.c"
if ((__o1->next_free) - ((char *)(__o1->chunk)) > (__o1->chunk_limit) - ((char *)(__o1->chunk))){
(__o1->next_free) = (__o1->chunk_limit); }
#line 461 "../.././gcc/cp/call.c"
(__o1->object_base) = (__o1->next_free); 
#line 461 "../.././gcc/cp/call.c"
value; } ); } ); 
#line 462 "../.././gcc/cp/call.c"
memset(p, 0, n); 
#line 463 "../.././gcc/cp/call.c"
return p; }
 
#line 470 "../.././gcc/cp/call.c"
static  conversion *alloc_conversion( conversion_kind kind)  {

#line 471 "../.././gcc/cp/call.c"

#line 471 "../.././gcc/cp/call.c"
 conversion *c;
#line 472 "../.././gcc/cp/call.c"
c = conversion_obstack_alloc(sizeof ( conversion )); 
#line 473 "../.././gcc/cp/call.c"
(c->kind) = kind; 
#line 474 "../.././gcc/cp/call.c"
return c; }
 
# 378 "../.././gcc/cp/call.c" 
# 496 "../.././gcc/cp/call.c" 
static  conversion **alloc_conversions( size_t n)  {

#line 497 "../.././gcc/cp/call.c"
return conversion_obstack_alloc(n * sizeof ( conversion *)); }
 
#line 502 "../.././gcc/cp/call.c"
static  conversion *build_conv( conversion_kind code,  tree type,  conversion *from)  {

#line 503 "../.././gcc/cp/call.c"

#line 503 "../.././gcc/cp/call.c"
 conversion *t;
#line 504 "../.././gcc/cp/call.c"

#line 504 "../.././gcc/cp/call.c"
 conversion_rank rank = ((((from)->bad_p)?cr_bad:(((from)->ellipsis_p)?cr_ellipsis:(((from)->user_conv_p)?cr_user:((from)->rank)))));
#line 509 "../.././gcc/cp/call.c"
t = alloc_conversion(code); 
#line 510 "../.././gcc/cp/call.c"
(t->type) = type; 
#line 511 "../.././gcc/cp/call.c"
(t->u).next = from; 
#line 513 "../.././gcc/cp/call.c"
switch(code){ { 
#line 521 "../.././gcc/cp/call.c"
case ck_ptr: case ck_pmem: case ck_base: case ck_std: if (rank < cr_std){
rank = cr_std; }
#line 521 "../.././gcc/cp/call.c"
break; 
#line 523 "../.././gcc/cp/call.c"
case ck_qual: if (rank < cr_exact){
rank = cr_exact; }
#line 526 "../.././gcc/cp/call.c"
break; 
#line 528 "../.././gcc/cp/call.c"
default: break; } } 
#line 531 "../.././gcc/cp/call.c"
(t->rank) = rank; 
#line 532 "../.././gcc/cp/call.c"
(t->user_conv_p) = (code == ck_user || (from->user_conv_p)); 
#line 533 "../.././gcc/cp/call.c"
(t->bad_p) = (from->bad_p); 
#line 534 "../.././gcc/cp/call.c"
(t->base_p) = 0; 
#line 535 "../.././gcc/cp/call.c"
return t; }
 
#line 543 "../.././gcc/cp/call.c"
static  conversion *build_identity_conv( tree type,  tree expr)  {

#line 544 "../.././gcc/cp/call.c"

#line 544 "../.././gcc/cp/call.c"
 conversion *c;
#line 546 "../.././gcc/cp/call.c"
c = alloc_conversion(ck_identity); 
#line 547 "../.././gcc/cp/call.c"
(c->type) = type; 
#line 548 "../.././gcc/cp/call.c"
(c->u).expr = expr; 
#line 550 "../.././gcc/cp/call.c"
return c; }
 
#line 559 "../.././gcc/cp/call.c"
static  conversion *build_ambiguous_conv( tree type,  tree expr)  {

#line 560 "../.././gcc/cp/call.c"

#line 560 "../.././gcc/cp/call.c"
 conversion *c;
#line 562 "../.././gcc/cp/call.c"
c = alloc_conversion(ck_ambig); 
#line 563 "../.././gcc/cp/call.c"
(c->type) = type; 
#line 564 "../.././gcc/cp/call.c"
(c->u).expr = expr; 
#line 566 "../.././gcc/cp/call.c"
return c; }
 
#line 570 "../.././gcc/cp/call.c"
 tree strip_top_quals( tree t)  {

#line 573 "../.././gcc/cp/call.c"
if ((((enum tree_code )((t)->common).code)) == ARRAY_TYPE){
return t; }
#line 573 "../.././gcc/cp/call.c"
return cp_build_qualified_type_real((t), (0), tf_error | tf_warning); }
 
#line 584 "../.././gcc/cp/call.c"
static  conversion *standard_conversion( tree to,  tree from,  tree expr, unsigned char c_cast_p, int flags)  {

#line 585 "../.././gcc/cp/call.c"

#line 585 "../.././gcc/cp/call.c"
enum tree_code fcode,tcode;
#line 586 "../.././gcc/cp/call.c"

#line 586 "../.././gcc/cp/call.c"
 conversion *conv;
#line 587 "../.././gcc/cp/call.c"

#line 587 "../.././gcc/cp/call.c"
unsigned char fromref = 0;
#line 589 "../.././gcc/cp/call.c"
to = non_reference(to); 
#line 590 "../.././gcc/cp/call.c"
if ((((enum tree_code )((from)->common).code)) == REFERENCE_TYPE){
{ 
#line 592 "../.././gcc/cp/call.c"
fromref = 1; 
#line 593 "../.././gcc/cp/call.c"
from = (((from)->common).type); } }
#line 595 "../.././gcc/cp/call.c"
to = strip_top_quals(to); 
#line 596 "../.././gcc/cp/call.c"
from = strip_top_quals(from); 
#line 598 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((to)->common).code)) == POINTER_TYPE && (((enum tree_code )(((((to)->common).type))->common).code)) == FUNCTION_TYPE) || ((((enum tree_code )((to)->common).code)) == RECORD_TYPE && (((to)->type).lang_specific) && ((((&((((to)->type).lang_specific)->u).c))->ptrmemfunc_flag)))) && expr && type_unknown_p(expr)){
{ 
#line 601 "../.././gcc/cp/call.c"
expr = instantiate_type(to, expr, tf_conv); 
#line 602 "../.././gcc/cp/call.c"
if (expr == global_trees[TI_ERROR_MARK]){
return (((void *)0)); }
#line 604 "../.././gcc/cp/call.c"
from = (((expr)->common).type); } }
#line 607 "../.././gcc/cp/call.c"
fcode = (((enum tree_code )((from)->common).code)); 
#line 608 "../.././gcc/cp/call.c"
tcode = (((enum tree_code )((to)->common).code)); 
#line 610 "../.././gcc/cp/call.c"
conv = build_identity_conv(from, expr); 
#line 611 "../.././gcc/cp/call.c"
if (fcode == FUNCTION_TYPE){
{ 
#line 613 "../.././gcc/cp/call.c"
from = build_pointer_type(from); 
#line 614 "../.././gcc/cp/call.c"
fcode = (((enum tree_code )((from)->common).code)); 
#line 615 "../.././gcc/cp/call.c"
conv = build_conv(ck_lvalue, from, conv); } }else{
if (fcode == ARRAY_TYPE){
{ 
#line 619 "../.././gcc/cp/call.c"
from = build_pointer_type((((from)->common).type)); 
#line 620 "../.././gcc/cp/call.c"
fcode = (((enum tree_code )((from)->common).code)); 
#line 621 "../.././gcc/cp/call.c"
conv = build_conv(ck_lvalue, from, conv); } }else{
if (fromref || (expr && lvalue_p(expr))){
conv = build_conv(ck_rvalue, from, conv); }}}
#line 627 "../.././gcc/cp/call.c"
if (tcode == COMPLEX_TYPE && fcode == COMPLEX_TYPE){
{ 
#line 633 "../.././gcc/cp/call.c"

#line 633 "../.././gcc/cp/call.c"
 conversion *part_conv = standard_conversion((((to)->common).type), (((from)->common).type), (( tree )(((void *)0))), c_cast_p, flags);
#line 635 "../.././gcc/cp/call.c"
if (part_conv){
{ 
#line 637 "../.././gcc/cp/call.c"
conv = build_conv((part_conv->kind), to, conv); 
#line 638 "../.././gcc/cp/call.c"
(conv->rank) = (part_conv->rank); } }else{
conv = (((void *)0)); }
#line 643 "../.././gcc/cp/call.c"
return conv; } }
#line 646 "../.././gcc/cp/call.c"
if (comptypes((from), (to), 0)){
return conv; }
#line 649 "../.././gcc/cp/call.c"
if ((tcode == POINTER_TYPE || (((((enum tree_code )((to)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((to)->common).code)) == RECORD_TYPE && (((to)->type).lang_specific) && ((((&((((to)->type).lang_specific)->u).c))->ptrmemfunc_flag))))) && expr && null_ptr_cst_p(expr)){
conv = build_conv(ck_std, to, conv); }else{
if ((tcode == INTEGER_TYPE && fcode == POINTER_TYPE) || (tcode == POINTER_TYPE && fcode == INTEGER_TYPE)){
{ 
#line 657 "../.././gcc/cp/call.c"
conv = build_conv(ck_std, to, conv); 
#line 658 "../.././gcc/cp/call.c"
(conv->bad_p) = 1; } }else{
if (tcode == ENUMERAL_TYPE && fcode == INTEGER_TYPE){
{ 
#line 664 "../.././gcc/cp/call.c"
conv = build_conv(ck_std, to, conv); 
#line 665 "../.././gcc/cp/call.c"
(conv->bad_p) = 1; } }else{
if ((tcode == POINTER_TYPE && fcode == POINTER_TYPE) || (((((enum tree_code )((to)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((from)->common).code)) == OFFSET_TYPE))){
{ 
#line 670 "../.././gcc/cp/call.c"

#line 670 "../.././gcc/cp/call.c"
 tree to_pointee;
#line 671 "../.././gcc/cp/call.c"

#line 671 "../.././gcc/cp/call.c"
 tree from_pointee;
#line 673 "../.././gcc/cp/call.c"
if (tcode == POINTER_TYPE && comptypes((((((((from)->common).type))->type).main_variant)), (((((((to)->common).type))->type).main_variant)), 0)){
; }else{
if (((((enum tree_code )(((((to)->common).type))->common).code)) == VOID_TYPE) && (!((((enum tree_code )((from)->common).code)) == OFFSET_TYPE)) && (((enum tree_code )(((((from)->common).type))->common).code)) != FUNCTION_TYPE){
{ 
#line 682 "../.././gcc/cp/call.c"
from = build_pointer_type(cp_build_qualified_type_real((global_trees[TI_VOID_TYPE]), (cp_type_quals((((from)->common).type))), tf_error | tf_warning)); 
#line 684 "../.././gcc/cp/call.c"
conv = build_conv(ck_ptr, from, conv); } }else{
if (((((enum tree_code )((from)->common).code)) == OFFSET_TYPE)){
{ 
#line 688 "../.././gcc/cp/call.c"

#line 688 "../.././gcc/cp/call.c"
 tree fbase = ((((((enum tree_code )((from)->common).code)) == OFFSET_TYPE)?(((from)->type).maxval):(((((((((((((from)->type).values))->common).type)))->common).type))->type).maxval)));
#line 689 "../.././gcc/cp/call.c"

#line 689 "../.././gcc/cp/call.c"
 tree tbase = ((((((enum tree_code )((to)->common).code)) == OFFSET_TYPE)?(((to)->type).maxval):(((((((((((((to)->type).values))->common).type)))->common).type))->type).maxval)));
#line 691 "../.././gcc/cp/call.c"
if ((lookup_base((tbase), (fbase), ba_any, (((void *)0))) != (( tree )(((void *)0)))) && (comptypes(((((((((((enum tree_code )((from)->common).code)) == OFFSET_TYPE)?(((from)->common).type):((((((((((from)->type).values))->common).type)))->common).type))))->type).main_variant)), ((((((((((enum tree_code )((to)->common).code)) == OFFSET_TYPE)?(((to)->common).type):((((((((((to)->type).values))->common).type)))->common).type))))->type).main_variant)), 0))){
{ 
#line 697 "../.././gcc/cp/call.c"
from = build_ptrmem_type(tbase, ((((((enum tree_code )((from)->common).code)) == OFFSET_TYPE)?(((from)->common).type):((((((((((from)->type).values))->common).type)))->common).type)))); 
#line 698 "../.././gcc/cp/call.c"
conv = build_conv(ck_pmem, from, conv); } }else{
if ((!comptypes((fbase), (tbase), 0))){
return (((void *)0)); }}} }else{
if (((((enum tree_code )(((((from)->common).type))->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )(((((from)->common).type))->common).code)) == TYPENAME_TYPE || (((enum tree_code )(((((from)->common).type))->common).code)) == TYPEOF_TYPE || (((enum tree_code )(((((from)->common).type))->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || ((((((from)->common).type))->type).lang_flag_5)) && ((((enum tree_code )(((((to)->common).type))->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )(((((to)->common).type))->common).code)) == TYPENAME_TYPE || (((enum tree_code )(((((to)->common).type))->common).code)) == TYPEOF_TYPE || (((enum tree_code )(((((to)->common).type))->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || ((((((to)->common).type))->type).lang_flag_5)) && (lookup_base(((((from)->common).type)), ((((to)->common).type)), ba_any, (((void *)0))) != (( tree )(((void *)0))))){
{ 
#line 720 "../.././gcc/cp/call.c"
from = cp_build_qualified_type_real(((((to)->common).type)), (cp_type_quals((((from)->common).type))), tf_error | tf_warning); 
#line 722 "../.././gcc/cp/call.c"
from = build_pointer_type(from); 
#line 723 "../.././gcc/cp/call.c"
conv = build_conv(ck_ptr, from, conv); 
#line 724 "../.././gcc/cp/call.c"
(conv->base_p) = 1; } }}}}
#line 727 "../.././gcc/cp/call.c"
if (tcode == POINTER_TYPE){
{ 
#line 729 "../.././gcc/cp/call.c"
to_pointee = (((to)->common).type); 
#line 730 "../.././gcc/cp/call.c"
from_pointee = (((from)->common).type); } }else{
{ 
#line 734 "../.././gcc/cp/call.c"
to_pointee = ((((((enum tree_code )((to)->common).code)) == OFFSET_TYPE)?(((to)->common).type):((((((((((to)->type).values))->common).type)))->common).type))); 
#line 735 "../.././gcc/cp/call.c"
from_pointee = ((((((enum tree_code )((from)->common).code)) == OFFSET_TYPE)?(((from)->common).type):((((((((((from)->type).values))->common).type)))->common).type))); } }
#line 738 "../.././gcc/cp/call.c"
if (comptypes((from), (to), 0)){
; }else{
if (c_cast_p && comp_ptr_ttypes_const(to, from)){
conv = build_conv(ck_qual, to, conv); }else{
if ((!c_cast_p) && comp_ptr_ttypes(to_pointee, from_pointee)){
conv = build_conv(ck_qual, to, conv); }else{
if (expr && string_conv_p(to, expr, 0)){
conv = build_conv(ck_qual, to, conv); }else{
if (ptr_reasonably_similar(to_pointee, from_pointee)){
{ 
#line 752 "../.././gcc/cp/call.c"
conv = build_conv(ck_ptr, to, conv); 
#line 753 "../.././gcc/cp/call.c"
(conv->bad_p) = 1; } }else{
return (((void *)0)); }}}}}
#line 758 "../.././gcc/cp/call.c"
from = to; } }else{
if (((((enum tree_code )((to)->common).code)) == RECORD_TYPE && (((to)->type).lang_specific) && ((((&((((to)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && ((((enum tree_code )((from)->common).code)) == RECORD_TYPE && (((from)->type).lang_specific) && ((((&((((from)->type).lang_specific)->u).c))->ptrmemfunc_flag)))){
{ 
#line 762 "../.././gcc/cp/call.c"

#line 762 "../.././gcc/cp/call.c"
 tree fromfn = ((((((((((from)->type).values))->common).type)))->common).type);
#line 763 "../.././gcc/cp/call.c"

#line 763 "../.././gcc/cp/call.c"
 tree tofn = ((((((((((to)->type).values))->common).type)))->common).type);
#line 764 "../.././gcc/cp/call.c"

#line 764 "../.././gcc/cp/call.c"
 tree fbase = (((((((((fromfn)->type).values))->list).value))->common).type);
#line 765 "../.././gcc/cp/call.c"

#line 765 "../.././gcc/cp/call.c"
 tree tbase = (((((((((tofn)->type).values))->list).value))->common).type);
#line 767 "../.././gcc/cp/call.c"
if ((!(lookup_base((tbase), (fbase), ba_any, (((void *)0))) != (( tree )(((void *)0))))) || (!comptypes(((((fromfn)->common).type)), ((((tofn)->common).type)), 0)) || (!compparms(((((((fromfn)->type).values))->common).chain), ((((((tofn)->type).values))->common).chain))) || cp_type_quals(fbase) != cp_type_quals(tbase)){
return 0; }
#line 774 "../.././gcc/cp/call.c"
from = cp_build_qualified_type_real((tbase), (cp_type_quals(fbase)), tf_error | tf_warning); 
#line 775 "../.././gcc/cp/call.c"
from = build_method_type_directly(from, (((fromfn)->common).type), ((((((fromfn)->type).values))->common).chain)); 
#line 778 "../.././gcc/cp/call.c"
from = build_ptrmemfunc_type(build_pointer_type(from)); 
#line 779 "../.././gcc/cp/call.c"
conv = build_conv(ck_pmem, from, conv); 
#line 780 "../.././gcc/cp/call.c"
(conv->base_p) = 1; } }else{
if (tcode == BOOLEAN_TYPE){
{ 
#line 802 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((from)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((from)->common).code)) == CHAR_TYPE || (((enum tree_code )((from)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((from)->common).code)) == REAL_TYPE) || fcode == ENUMERAL_TYPE || fcode == POINTER_TYPE || (((((enum tree_code )((from)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((from)->common).code)) == RECORD_TYPE && (((from)->type).lang_specific) && ((((&((((from)->type).lang_specific)->u).c))->ptrmemfunc_flag))))){
{ 
#line 793 "../.././gcc/cp/call.c"
conv = build_conv(ck_std, to, conv); 
#line 794 "../.././gcc/cp/call.c"
if (fcode == POINTER_TYPE || ((((enum tree_code )((from)->common).code)) == OFFSET_TYPE) || (((((enum tree_code )((from)->common).code)) == RECORD_TYPE && (((from)->type).lang_specific) && ((((&((((from)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && (conv->rank) < cr_pbool)){
(conv->rank) = cr_pbool; }
#line 799 "../.././gcc/cp/call.c"
return conv; } }
#line 802 "../.././gcc/cp/call.c"
return (((void *)0)); } }else{
if (tcode == INTEGER_TYPE || tcode == BOOLEAN_TYPE || tcode == REAL_TYPE){
{ 
#line 811 "../.././gcc/cp/call.c"
if ((!(((fcode) == ENUMERAL_TYPE || (fcode) == BOOLEAN_TYPE || (fcode) == CHAR_TYPE || (fcode) == INTEGER_TYPE) || fcode == REAL_TYPE))){
return 0; }
#line 811 "../.././gcc/cp/call.c"
conv = build_conv(ck_std, to, conv); 
#line 814 "../.././gcc/cp/call.c"
if (comptypes((to), (type_promotes_to(from)), 0) && ((conv->u).next->rank) <= cr_promotion){
(conv->rank) = cr_promotion; }} }else{
if (fcode == VECTOR_TYPE && tcode == VECTOR_TYPE && vector_types_convertible_p(from, to)){
return build_conv(ck_std, to, conv); }else{
if ((!(flags & (1 << 10))) && ((((enum tree_code )((to)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((to)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((to)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((to)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((to)->type).lang_flag_5)) && ((((enum tree_code )((from)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((from)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((from)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((from)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((from)->type).lang_flag_5)) && is_properly_derived_from(from, to)){
{ 
#line 827 "../.././gcc/cp/call.c"
if ((conv->kind) == ck_rvalue){
conv = (conv->u).next; }
#line 827 "../.././gcc/cp/call.c"
conv = build_conv(ck_base, to, conv); 
#line 832 "../.././gcc/cp/call.c"
(conv->need_temporary_p) = 1; } }else{
return (((void *)0)); }}}}}}}}}
#line 837 "../.././gcc/cp/call.c"
return conv; }
 
#line 844 "../.././gcc/cp/call.c"
static unsigned char reference_related_p( tree t1,  tree t2)  {

#line 845 "../.././gcc/cp/call.c"
t1 = (((t1)->type).main_variant); 
#line 846 "../.././gcc/cp/call.c"
t2 = (((t2)->type).main_variant); 
#line 853 "../.././gcc/cp/call.c"
return (comptypes((t1), (t2), 0) || (((((((enum tree_code )((t1)->common).code))) == RECORD_TYPE || ((((enum tree_code )((t1)->common).code))) == UNION_TYPE) && (((t1)->type).lang_flag_5)) && ((((((enum tree_code )((t2)->common).code))) == RECORD_TYPE || ((((enum tree_code )((t2)->common).code))) == UNION_TYPE) && (((t2)->type).lang_flag_5)) && (lookup_base((t2), (t1), ba_any, (((void *)0))) != (( tree )(((void *)0)))))); }
 
#line 862 "../.././gcc/cp/call.c"
static unsigned char reference_compatible_p( tree t1,  tree t2)  {

#line 869 "../.././gcc/cp/call.c"
return (reference_related_p(t1, t2) && at_least_as_qualified_p(t1, t2)); }
 
#line 877 "../.././gcc/cp/call.c"
static  conversion *convert_class_to_reference( tree t,  tree s,  tree expr)  {

#line 878 "../.././gcc/cp/call.c"

#line 878 "../.././gcc/cp/call.c"
 tree conversions;
#line 879 "../.././gcc/cp/call.c"

#line 879 "../.././gcc/cp/call.c"
 tree arglist;
#line 880 "../.././gcc/cp/call.c"

#line 880 "../.././gcc/cp/call.c"
 conversion *conv;
#line 881 "../.././gcc/cp/call.c"

#line 881 "../.././gcc/cp/call.c"
 tree reference_type;
#line 882 "../.././gcc/cp/call.c"

#line 882 "../.././gcc/cp/call.c"
struct z_candidate *candidates;
#line 883 "../.././gcc/cp/call.c"

#line 883 "../.././gcc/cp/call.c"
struct z_candidate *cand;
#line 884 "../.././gcc/cp/call.c"

#line 884 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 886 "../.././gcc/cp/call.c"
conversions = lookup_conversions(s); 
#line 887 "../.././gcc/cp/call.c"
if ((!conversions)){
return (((void *)0)); }
# 717 "../.././gcc/cp/call.c" 
# 905 "../.././gcc/cp/call.c" 
candidates = 0; 
#line 912 "../.././gcc/cp/call.c"
arglist = build_int_cst(build_pointer_type(s), 0); 
#line 913 "../.././gcc/cp/call.c"
arglist = build_tree_list_stat((( tree )(((void *)0))), arglist); 
#line 915 "../.././gcc/cp/call.c"
reference_type = build_reference_type(t); 
#line 917 "../.././gcc/cp/call.c"
while(conversions) { { 
#line 919 "../.././gcc/cp/call.c"

#line 919 "../.././gcc/cp/call.c"
 tree fns = (((conversions)->list).value);
#line 921 "../.././gcc/cp/call.c"
for(;fns;fns = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((fns)->common).chain):(( tree )(((void *)0)))))) { { 
#line 923 "../.././gcc/cp/call.c"

#line 923 "../.././gcc/cp/call.c"
 tree f = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns)));
#line 924 "../.././gcc/cp/call.c"

#line 924 "../.././gcc/cp/call.c"
 tree t2 = ((((((f)->common).type))->common).type);
#line 926 "../.././gcc/cp/call.c"
cand = (((void *)0)); 
#line 930 "../.././gcc/cp/call.c"
if ((((enum tree_code )((f)->common).code)) == TEMPLATE_DECL){
{ 
#line 940 "../.././gcc/cp/call.c"
cand = add_template_candidate((&candidates), f, s, (( tree )(((void *)0))), arglist, reference_type, (((s)->type).binfo), (((conversions)->list).purpose), ((1 << 0) | (1 << 1)), DEDUCE_CONV); 
#line 942 "../.././gcc/cp/call.c"
if (cand){
{ 
#line 948 "../.././gcc/cp/call.c"
f = (cand->fn); 
#line 949 "../.././gcc/cp/call.c"
t2 = ((((((f)->common).type))->common).type); 
#line 950 "../.././gcc/cp/call.c"
if ((((enum tree_code )((t2)->common).code)) != REFERENCE_TYPE || (!reference_compatible_p(t, (((t2)->common).type)))){
{ 
#line 953 "../.././gcc/cp/call.c"
candidates = (candidates->next); 
#line 954 "../.././gcc/cp/call.c"
cand = (((void *)0)); } }} }} }else{
if ((((enum tree_code )((t2)->common).code)) == REFERENCE_TYPE && reference_compatible_p(t, (((t2)->common).type))){
cand = add_function_candidate((&candidates), f, s, arglist, (((s)->type).binfo), (((conversions)->list).purpose), ((1 << 0) | (1 << 1))); }}
#line 965 "../.././gcc/cp/call.c"
if (cand){
{ 
#line 967 "../.././gcc/cp/call.c"

#line 967 "../.././gcc/cp/call.c"
 conversion *identity_conv;
#line 971 "../.././gcc/cp/call.c"
identity_conv = build_identity_conv(((((((((((cand->fn))->common).type))->common).type))->common).type), (( tree )(((void *)0)))); 
#line 975 "../.././gcc/cp/call.c"
(cand->second_conv) = (direct_reference_binding(reference_type, identity_conv)); 
#line 978 "../.././gcc/cp/call.c"
((cand->second_conv)->bad_p) |= ((cand->convs)[0]->bad_p); } }} } 
#line 981 "../.././gcc/cp/call.c"
conversions = (((conversions)->common).chain); } } 
#line 984 "../.././gcc/cp/call.c"
candidates = splice_viable(candidates, pedantic, (&any_viable_p)); 
#line 987 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
return (((void *)0)); }
#line 990 "../.././gcc/cp/call.c"
cand = tourney(candidates); 
#line 991 "../.././gcc/cp/call.c"
if ((!cand)){
return (((void *)0)); }
#line 996 "../.././gcc/cp/call.c"
(cand->args) = tree_cons_stat((( tree )(((void *)0))), build_this(expr), ((((cand->args))->common).chain)); 
#line 1002 "../.././gcc/cp/call.c"
conv = build_conv(ck_user, (((((((cand->fn))->common).type))->common).type), build_identity_conv((((expr)->common).type), expr)); 
#line 1005 "../.././gcc/cp/call.c"
(conv->cand) = cand; 
#line 1009 "../.././gcc/cp/call.c"
(cand->second_conv) = merge_conversion_sequences(conv, (cand->second_conv)); 
#line 1011 "../.././gcc/cp/call.c"
if ((cand->viable) == (-1)){
(conv->bad_p) = 1; }
#line 1014 "../.././gcc/cp/call.c"
return (cand->second_conv); }
 
#line 1023 "../.././gcc/cp/call.c"
static  conversion *direct_reference_binding( tree type,  conversion *conv)  {

#line 1024 "../.././gcc/cp/call.c"

#line 1024 "../.././gcc/cp/call.c"
 tree t;
#line 1026 "../.././gcc/cp/call.c"
(((void )(((!((((enum tree_code )((type)->common).code)) == REFERENCE_TYPE))?fancy_abort("../.././gcc/cp/call.c", 1026, __FUNCTION__) , 0:0)))); 
#line 1027 "../.././gcc/cp/call.c"
(((void )(((!((((enum tree_code )(((conv->type))->common).code)) != REFERENCE_TYPE))?fancy_abort("../.././gcc/cp/call.c", 1027, __FUNCTION__) , 0:0)))); 
#line 1029 "../.././gcc/cp/call.c"
t = (((type)->common).type); 
#line 1047 "../.././gcc/cp/call.c"
if ((!comptypes(((((t)->type).main_variant)), (((((conv->type))->type).main_variant)), 0))){
{ 
#line 1050 "../.././gcc/cp/call.c"
conv = build_conv(ck_base, t, conv); 
#line 1054 "../.././gcc/cp/call.c"
(conv->need_temporary_p) = 0; } }
#line 1056 "../.././gcc/cp/call.c"
return build_conv(ck_ref_bind, type, conv); }
 
#line 1067 "../.././gcc/cp/call.c"
static  conversion *reference_binding( tree rto,  tree rfrom,  tree expr, int flags)  {

#line 1068 "../.././gcc/cp/call.c"

#line 1068 "../.././gcc/cp/call.c"
 conversion *conv = (((void *)0));
#line 1069 "../.././gcc/cp/call.c"

#line 1069 "../.././gcc/cp/call.c"
 tree to = (((rto)->common).type);
#line 1070 "../.././gcc/cp/call.c"

#line 1070 "../.././gcc/cp/call.c"
 tree from = rfrom;
#line 1071 "../.././gcc/cp/call.c"

#line 1071 "../.././gcc/cp/call.c"
unsigned char related_p;
#line 1072 "../.././gcc/cp/call.c"

#line 1072 "../.././gcc/cp/call.c"
unsigned char compatible_p;
#line 1073 "../.././gcc/cp/call.c"

#line 1073 "../.././gcc/cp/call.c"
 cp_lvalue_kind lvalue_p = clk_none;
#line 1075 "../.././gcc/cp/call.c"
if ((((enum tree_code )((to)->common).code)) == FUNCTION_TYPE && expr && type_unknown_p(expr)){
{ 
#line 1077 "../.././gcc/cp/call.c"
expr = instantiate_type(to, expr, tf_none); 
#line 1078 "../.././gcc/cp/call.c"
if (expr == global_trees[TI_ERROR_MARK]){
return (((void *)0)); }
#line 1080 "../.././gcc/cp/call.c"
from = (((expr)->common).type); } }
#line 1083 "../.././gcc/cp/call.c"
if ((((enum tree_code )((from)->common).code)) == REFERENCE_TYPE){
{ 
#line 1086 "../.././gcc/cp/call.c"
lvalue_p = clk_ordinary; 
#line 1087 "../.././gcc/cp/call.c"
from = (((from)->common).type); } }else{
if (expr){
lvalue_p = real_lvalue_p(expr); }}
#line 1095 "../.././gcc/cp/call.c"
related_p = reference_related_p(to, from); 
#line 1096 "../.././gcc/cp/call.c"
compatible_p = reference_compatible_p(to, from); 
#line 1098 "../.././gcc/cp/call.c"
if (lvalue_p && compatible_p){
{ 
# 1047 "../.././gcc/cp/call.c" 
# 1109 "../.././gcc/cp/call.c" 
conv = build_identity_conv(from, expr); 
#line 1110 "../.././gcc/cp/call.c"
conv = direct_reference_binding(rto, conv); 
#line 1111 "../.././gcc/cp/call.c"
if ((lvalue_p & clk_bitfield) != 0 || ((lvalue_p & clk_packed) != 0 && (!(((to)->type).packed_flag)))){
(conv->need_temporary_p) = 1; }
#line 1126 "../.././gcc/cp/call.c"
return conv; } }else{
if (((((((enum tree_code )((from)->common).code))) == RECORD_TYPE || ((((enum tree_code )((from)->common).code))) == UNION_TYPE) && (((from)->type).lang_flag_5)) && (!(flags & (1 << 5)))){
{ 
# 1124 "../.././gcc/cp/call.c" 
# 1143 "../.././gcc/cp/call.c" 
conv = convert_class_to_reference(to, from, expr); 
#line 1144 "../.././gcc/cp/call.c"
if (conv){
return conv; }} }}
#line 1150 "../.././gcc/cp/call.c"
if (flags & (1 << 7)){
return (((void *)0)); }
#line 1167 "../.././gcc/cp/call.c"
if ((!((cp_type_quals(to) & (0x1 | 0x2)) == 0x1))){
return (((void *)0)); }
# 1167 "../.././gcc/cp/call.c" 
# 1186 "../.././gcc/cp/call.c" 
if (((((((enum tree_code )((from)->common).code))) == RECORD_TYPE || ((((enum tree_code )((from)->common).code))) == UNION_TYPE) && (((from)->type).lang_flag_5)) && compatible_p){
{ 
#line 1188 "../.././gcc/cp/call.c"
conv = build_identity_conv(from, expr); 
#line 1189 "../.././gcc/cp/call.c"
conv = direct_reference_binding(rto, conv); 
#line 1190 "../.././gcc/cp/call.c"
if ((!(flags & (1 << 10)))){
((conv->u).next->check_copy_constructor_p) = 1; }
#line 1192 "../.././gcc/cp/call.c"
return conv; } }
#line 1202 "../.././gcc/cp/call.c"
if (related_p && (!at_least_as_qualified_p(to, from))){
return (((void *)0)); }
#line 1205 "../.././gcc/cp/call.c"
conv = implicit_conversion(to, from, expr, 0, flags); 
#line 1207 "../.././gcc/cp/call.c"
if ((!conv)){
return (((void *)0)); }
#line 1210 "../.././gcc/cp/call.c"
conv = build_conv(ck_ref_bind, rto, conv); 
#line 1213 "../.././gcc/cp/call.c"
(conv->need_temporary_p) = 1; 
#line 1215 "../.././gcc/cp/call.c"
return conv; }
 
#line 1227 "../.././gcc/cp/call.c"
static  conversion *implicit_conversion( tree to,  tree from,  tree expr, unsigned char c_cast_p, int flags)  {

#line 1228 "../.././gcc/cp/call.c"

#line 1228 "../.././gcc/cp/call.c"
 conversion *conv;
#line 1230 "../.././gcc/cp/call.c"
if (from == global_trees[TI_ERROR_MARK] || to == global_trees[TI_ERROR_MARK] || expr == global_trees[TI_ERROR_MARK]){
return (((void *)0)); }
#line 1234 "../.././gcc/cp/call.c"
if ((((enum tree_code )((to)->common).code)) == REFERENCE_TYPE){
conv = reference_binding(to, from, expr, flags); }else{
conv = standard_conversion(to, from, expr, c_cast_p, flags); }
#line 1239 "../.././gcc/cp/call.c"
if (conv){
return conv; }
#line 1242 "../.././gcc/cp/call.c"
if (expr != (( tree )(((void *)0))) && (((((enum tree_code )((from)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((from)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((from)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((from)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((from)->type).lang_flag_5)) || ((((enum tree_code )((to)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((to)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((to)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((to)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((to)->type).lang_flag_5))) && (flags & (1 << 5)) == 0){
{ 
#line 1247 "../.././gcc/cp/call.c"

#line 1247 "../.././gcc/cp/call.c"
struct z_candidate *cand;
#line 1249 "../.././gcc/cp/call.c"
cand = build_user_type_conversion_1(to, expr, (1 << 3)); 
#line 1251 "../.././gcc/cp/call.c"
if (cand){
conv = (cand->second_conv); }
#line 1257 "../.././gcc/cp/call.c"
return conv; } }
#line 1260 "../.././gcc/cp/call.c"
return (((void *)0)); }
 
#line 1272 "../.././gcc/cp/call.c"
static struct z_candidate *add_candidate(struct z_candidate **candidates,  tree fn,  tree args,  size_t num_convs,  conversion **convs,  tree access_path,  tree conversion_path, int viable)  {

#line 1274 "../.././gcc/cp/call.c"

#line 1274 "../.././gcc/cp/call.c"
struct z_candidate *cand = conversion_obstack_alloc(sizeof (struct z_candidate ));
#line 1276 "../.././gcc/cp/call.c"
(cand->fn) = fn; 
#line 1277 "../.././gcc/cp/call.c"
(cand->args) = args; 
#line 1278 "../.././gcc/cp/call.c"
(cand->convs) = convs; 
#line 1279 "../.././gcc/cp/call.c"
(cand->num_convs) = num_convs; 
#line 1280 "../.././gcc/cp/call.c"
(cand->access_path) = access_path; 
#line 1281 "../.././gcc/cp/call.c"
(cand->conversion_path) = conversion_path; 
#line 1282 "../.././gcc/cp/call.c"
(cand->viable) = viable; 
#line 1283 "../.././gcc/cp/call.c"
(cand->next) = (*candidates); 
#line 1284 "../.././gcc/cp/call.c"
(*candidates) = cand; 
#line 1286 "../.././gcc/cp/call.c"
return cand; }
 
# 1202 "../.././gcc/cp/call.c" 
# 1301 "../.././gcc/cp/call.c" 
static struct z_candidate *add_function_candidate(struct z_candidate **candidates,  tree fn,  tree ctype,  tree arglist,  tree access_path,  tree conversion_path, int flags)  {

#line 1302 "../.././gcc/cp/call.c"

#line 1302 "../.././gcc/cp/call.c"
 tree parmlist = ((((((fn)->common).type))->type).values);
#line 1303 "../.././gcc/cp/call.c"

#line 1303 "../.././gcc/cp/call.c"
int i,len;
#line 1304 "../.././gcc/cp/call.c"

#line 1304 "../.././gcc/cp/call.c"
 conversion **convs;
#line 1305 "../.././gcc/cp/call.c"

#line 1305 "../.././gcc/cp/call.c"
 tree parmnode,argnode;
#line 1306 "../.././gcc/cp/call.c"

#line 1306 "../.././gcc/cp/call.c"
 tree orig_arglist;
#line 1307 "../.././gcc/cp/call.c"

#line 1307 "../.././gcc/cp/call.c"
int viable = 1;
#line 1312 "../.././gcc/cp/call.c"
(((void )(((!((!((((((fn))->decl_common).lang_specific)->decl_flags).anticipated_p)) || ((((((fn))->decl_common).lang_specific)->decl_flags).hidden_friend_p)))?fancy_abort("../.././gcc/cp/call.c", 1312, __FUNCTION__) , 0:0)))); 
#line 1316 "../.././gcc/cp/call.c"
if ((((((fn)->decl_common).lang_specific)->decl_flags).constructor_attr)){
{ 
#line 1318 "../.././gcc/cp/call.c"
parmlist = skip_artificial_parms_for(fn, parmlist); 
#line 1319 "../.././gcc/cp/call.c"
orig_arglist = arglist; 
#line 1320 "../.././gcc/cp/call.c"
arglist = skip_artificial_parms_for(fn, arglist); } }else{
orig_arglist = arglist; }
#line 1325 "../.././gcc/cp/call.c"
len = list_length(arglist); 
#line 1326 "../.././gcc/cp/call.c"
convs = alloc_conversions(len); 
#line 1335 "../.././gcc/cp/call.c"
parmnode = parmlist; 
#line 1336 "../.././gcc/cp/call.c"
for(i = 0;i < len;(++i)) { { 
#line 1340 "../.././gcc/cp/call.c"
if (parmnode == (( tree )(((void *)0))) || parmnode == global_trees[TI_VOID_LIST_NODE]){
break; }
#line 1340 "../.././gcc/cp/call.c"
parmnode = (((parmnode)->common).chain); } } 
#line 1343 "../.././gcc/cp/call.c"
if (i < len && parmnode){
viable = 0; }else{
if ((!sufficient_parms_p(parmnode))){
viable = 0; }}
#line 1350 "../.././gcc/cp/call.c"
if ((!viable)){
goto out; }
#line 1357 "../.././gcc/cp/call.c"
parmnode = parmlist; 
#line 1358 "../.././gcc/cp/call.c"
argnode = arglist; 
#line 1360 "../.././gcc/cp/call.c"
for(i = 0;i < len;(++i)) { { 
#line 1362 "../.././gcc/cp/call.c"

#line 1362 "../.././gcc/cp/call.c"
 tree arg = (((argnode)->list).value);
#line 1363 "../.././gcc/cp/call.c"

#line 1363 "../.././gcc/cp/call.c"
 tree argtype = lvalue_type(arg);
#line 1364 "../.././gcc/cp/call.c"

#line 1364 "../.././gcc/cp/call.c"
 conversion *t;
#line 1365 "../.././gcc/cp/call.c"

#line 1365 "../.././gcc/cp/call.c"
int is_this;
#line 1367 "../.././gcc/cp/call.c"
if (parmnode == global_trees[TI_VOID_LIST_NODE]){
break; }
#line 1370 "../.././gcc/cp/call.c"
is_this = (i == 0 && ((((enum tree_code )(((((fn)->common).type))->common).code)) == METHOD_TYPE) && (!(((((fn)->decl_common).lang_specific)->decl_flags).constructor_attr))); 
#line 1373 "../.././gcc/cp/call.c"
if (parmnode){
{ 
#line 1375 "../.././gcc/cp/call.c"

#line 1375 "../.././gcc/cp/call.c"
 tree parmtype = (((parmnode)->list).value);
# 1335 "../.././gcc/cp/call.c" 
# 1386 "../.././gcc/cp/call.c" 
if (ctype && is_this){
{ 
#line 1390 "../.././gcc/cp/call.c"
parmtype = build_qualified_type(ctype, ((((((((parmtype)->common).type))->common).readonly_flag) * 0x1) | (((((((parmtype)->common).type))->common).volatile_flag) * 0x2) | (((((((parmtype)->common).type))->type).restrict_flag) * 0x4))); 
#line 1391 "../.././gcc/cp/call.c"
parmtype = build_pointer_type(parmtype); } }
#line 1394 "../.././gcc/cp/call.c"
t = implicit_conversion(parmtype, argtype, arg, 0, flags); } }else{
{ 
#line 1399 "../.././gcc/cp/call.c"
t = build_identity_conv(argtype, arg); 
#line 1400 "../.././gcc/cp/call.c"
(t->ellipsis_p) = 1; } }
#line 1403 "../.././gcc/cp/call.c"
if (t && is_this){
(t->this_p) = 1; }
#line 1406 "../.././gcc/cp/call.c"
convs[i] = t; 
#line 1407 "../.././gcc/cp/call.c"
if ((!t)){
{ 
#line 1409 "../.././gcc/cp/call.c"
viable = 0; 
#line 1410 "../.././gcc/cp/call.c"
break; } }
#line 1413 "../.././gcc/cp/call.c"
if ((t->bad_p)){
viable = (-1); }
#line 1416 "../.././gcc/cp/call.c"
if (parmnode){
parmnode = (((parmnode)->common).chain); }
#line 1418 "../.././gcc/cp/call.c"
argnode = (((argnode)->common).chain); } } 
#line 1421 "../.././gcc/cp/call.c"
out:  return add_candidate(candidates, fn, orig_arglist, len, convs, access_path, conversion_path, viable); }
 
#line 1440 "../.././gcc/cp/call.c"
static struct z_candidate *add_conv_candidate(struct z_candidate **candidates,  tree fn,  tree obj,  tree arglist,  tree access_path,  tree conversion_path)  {

#line 1441 "../.././gcc/cp/call.c"

#line 1441 "../.././gcc/cp/call.c"
 tree totype = ((((((fn)->common).type))->common).type);
#line 1442 "../.././gcc/cp/call.c"

#line 1442 "../.././gcc/cp/call.c"
int i,len,viable,flags;
#line 1443 "../.././gcc/cp/call.c"

#line 1443 "../.././gcc/cp/call.c"
 tree parmlist,parmnode,argnode;
#line 1444 "../.././gcc/cp/call.c"

#line 1444 "../.././gcc/cp/call.c"
 conversion **convs;
#line 1446 "../.././gcc/cp/call.c"
for(parmlist = totype;(((enum tree_code )((parmlist)->common).code)) != FUNCTION_TYPE;) { parmlist = (((parmlist)->common).type); } 
#line 1448 "../.././gcc/cp/call.c"
parmlist = (((parmlist)->type).values); 
#line 1450 "../.././gcc/cp/call.c"
len = list_length(arglist) + 1; 
#line 1451 "../.././gcc/cp/call.c"
convs = alloc_conversions(len); 
#line 1452 "../.././gcc/cp/call.c"
parmnode = parmlist; 
#line 1453 "../.././gcc/cp/call.c"
argnode = arglist; 
#line 1454 "../.././gcc/cp/call.c"
viable = 1; 
#line 1455 "../.././gcc/cp/call.c"
flags = ((1 << 0) | (1 << 1)); 
#line 1458 "../.././gcc/cp/call.c"
if ((*candidates) && (((*candidates))->fn) == totype){
return (((void *)0)); }
#line 1461 "../.././gcc/cp/call.c"
for(i = 0;i < len;(++i)) { { 
#line 1463 "../.././gcc/cp/call.c"

#line 1463 "../.././gcc/cp/call.c"
 tree arg = (i == 0?obj:(((argnode)->list).value));
#line 1464 "../.././gcc/cp/call.c"

#line 1464 "../.././gcc/cp/call.c"
 tree argtype = lvalue_type(arg);
#line 1465 "../.././gcc/cp/call.c"

#line 1465 "../.././gcc/cp/call.c"
 conversion *t;
#line 1467 "../.././gcc/cp/call.c"
if (i == 0){
t = implicit_conversion(totype, argtype, arg, 0, flags); }else{
if (parmnode == global_trees[TI_VOID_LIST_NODE]){
break; }else{
if (parmnode){
t = implicit_conversion((((parmnode)->list).value), argtype, arg, 0, flags); }else{
{ 
#line 1477 "../.././gcc/cp/call.c"
t = build_identity_conv(argtype, arg); 
#line 1478 "../.././gcc/cp/call.c"
(t->ellipsis_p) = 1; } }}}
#line 1481 "../.././gcc/cp/call.c"
convs[i] = t; 
#line 1482 "../.././gcc/cp/call.c"
if ((!t)){
break; }
#line 1485 "../.././gcc/cp/call.c"
if ((t->bad_p)){
viable = (-1); }
#line 1488 "../.././gcc/cp/call.c"
if (i == 0){
continue; }
#line 1491 "../.././gcc/cp/call.c"
if (parmnode){
parmnode = (((parmnode)->common).chain); }
#line 1493 "../.././gcc/cp/call.c"
argnode = (((argnode)->common).chain); } } 
#line 1496 "../.././gcc/cp/call.c"
if (i < len){
viable = 0; }
#line 1499 "../.././gcc/cp/call.c"
if ((!sufficient_parms_p(parmnode))){
viable = 0; }
#line 1502 "../.././gcc/cp/call.c"
return add_candidate(candidates, totype, arglist, len, convs, access_path, conversion_path, viable); }
 
#line 1510 "../.././gcc/cp/call.c"
static void build_builtin_candidate(struct z_candidate **candidates,  tree fnname,  tree type1,  tree type2,  tree *args,  tree *argtypes, int flags)  {

#line 1511 "../.././gcc/cp/call.c"

#line 1511 "../.././gcc/cp/call.c"
 conversion *t;
#line 1512 "../.././gcc/cp/call.c"

#line 1512 "../.././gcc/cp/call.c"
 conversion **convs;
#line 1513 "../.././gcc/cp/call.c"

#line 1513 "../.././gcc/cp/call.c"
 size_t num_convs;
#line 1514 "../.././gcc/cp/call.c"

#line 1514 "../.././gcc/cp/call.c"
int viable = 1,i;
#line 1515 "../.././gcc/cp/call.c"

#line 1515 "../.././gcc/cp/call.c"
 tree types[2];
#line 1517 "../.././gcc/cp/call.c"
types[0] = type1; 
#line 1518 "../.././gcc/cp/call.c"
types[1] = type2; 
#line 1520 "../.././gcc/cp/call.c"
num_convs = (args[2]?3:((args[1]?2:1))); 
#line 1521 "../.././gcc/cp/call.c"
convs = alloc_conversions(num_convs); 
#line 1523 "../.././gcc/cp/call.c"
for(i = 0;i < 2;(++i)) { { 
#line 1528 "../.././gcc/cp/call.c"
if ((!args[i])){
break; }
#line 1528 "../.././gcc/cp/call.c"
t = implicit_conversion(types[i], argtypes[i], args[i], 0, flags); 
#line 1530 "../.././gcc/cp/call.c"
if ((!t)){
{ 
#line 1532 "../.././gcc/cp/call.c"
viable = 0; 
#line 1534 "../.././gcc/cp/call.c"
t = build_identity_conv(types[i], (( tree )(((void *)0)))); } }else{
if ((t->bad_p)){
viable = 0; }}
#line 1538 "../.././gcc/cp/call.c"
convs[i] = t; } } 
#line 1542 "../.././gcc/cp/call.c"
if (args[2]){
{ 
#line 1544 "../.././gcc/cp/call.c"
convs[2] = convs[1]; 
#line 1545 "../.././gcc/cp/call.c"
convs[1] = convs[0]; 
#line 1546 "../.././gcc/cp/call.c"
t = implicit_conversion(global_trees[TI_BOOLEAN_TYPE], argtypes[2], args[2], 0, flags); 
#line 1548 "../.././gcc/cp/call.c"
if (t){
convs[0] = t; }else{
viable = 0; }} }
#line 1554 "../.././gcc/cp/call.c"
add_candidate(candidates, fnname, (( tree )(((void *)0))), num_convs, convs, (( tree )(((void *)0))), (( tree )(((void *)0))), viable); }
 
#line 1563 "../.././gcc/cp/call.c"
static unsigned char is_complete( tree t)  {

#line 1564 "../.././gcc/cp/call.c"
return ((((complete_type(t))->type).size) != (( tree )(((void *)0)))); }
 
#line 1571 "../.././gcc/cp/call.c"
static unsigned char promoted_arithmetic_type_p( tree type)  {

#line 1581 "../.././gcc/cp/call.c"
return ((((((enum tree_code )((type)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type)->common).code)) == CHAR_TYPE || (((enum tree_code )((type)->common).code)) == INTEGER_TYPE) && comptypes((type_promotes_to(type)), (type), 0)) || (((enum tree_code )((type)->common).code)) == REAL_TYPE); }
 
# 1437 "../.././gcc/cp/call.c" 
# 1598 "../.././gcc/cp/call.c" 
static void add_builtin_candidate(struct z_candidate **candidates, enum tree_code code, enum tree_code code2,  tree fnname,  tree type1,  tree type2,  tree *args,  tree *argtypes, int flags)  {

#line 1608 "../.././gcc/cp/call.c"
switch(code){ { 
#line 1603 "../.././gcc/cp/call.c"
case POSTINCREMENT_EXPR: case POSTDECREMENT_EXPR: args[1] = global_trees[TI_INTEGER_ZERO]; 
#line 1604 "../.././gcc/cp/call.c"
type2 = integer_types[itk_int]; 
#line 1605 "../.././gcc/cp/call.c"
break; 
#line 1606 "../.././gcc/cp/call.c"
default: break; } } 
#line 1610 "../.././gcc/cp/call.c"
switch(code){ { 
#line 1635 "../.././gcc/cp/call.c"
case POSTDECREMENT_EXPR: case PREDECREMENT_EXPR: if ((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE){
return ; }
#line 1635 "../.././gcc/cp/call.c"
case POSTINCREMENT_EXPR: case PREINCREMENT_EXPR: if ((((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type1)->common).code)) == REAL_TYPE) || (((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type1)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == METHOD_TYPE)))){
{ 
#line 1639 "../.././gcc/cp/call.c"
type1 = build_reference_type(type1); 
#line 1640 "../.././gcc/cp/call.c"
break; } }
#line 1642 "../.././gcc/cp/call.c"
return ; 
# 1631 "../.././gcc/cp/call.c" 
# 1653 "../.././gcc/cp/call.c" 
case INDIRECT_REF: if ((((enum tree_code )((type1)->common).code)) == POINTER_TYPE && ((((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type1)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == METHOD_TYPE))) || (((enum tree_code )(((((type1)->common).type))->common).code)) == FUNCTION_TYPE)){
break; }
#line 1658 "../.././gcc/cp/call.c"
return ; 
#line 1668 "../.././gcc/cp/call.c"
case UNARY_PLUS_EXPR: if ((((enum tree_code )((type1)->common).code)) == POINTER_TYPE){
break; }
#line 1671 "../.././gcc/cp/call.c"
case NEGATE_EXPR: if ((((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type1)->common).code)) == REAL_TYPE)){
break; }
#line 1674 "../.././gcc/cp/call.c"
return ; 
#line 1680 "../.././gcc/cp/call.c"
case BIT_NOT_EXPR: if (((((enum tree_code )((type1)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE)){
break; }
#line 1683 "../.././gcc/cp/call.c"
return ; 
# 1668 "../.././gcc/cp/call.c" 
# 1692 "../.././gcc/cp/call.c" 
case MEMBER_REF: if ((((enum tree_code )((type1)->common).code)) == POINTER_TYPE && (((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((type2)->common).code)) == RECORD_TYPE && (((type2)->type).lang_specific) && ((((&((((type2)->type).lang_specific)->u).c))->ptrmemfunc_flag))))){
{ 
#line 1696 "../.././gcc/cp/call.c"

#line 1696 "../.././gcc/cp/call.c"
 tree c1 = (((type1)->common).type);
#line 1697 "../.././gcc/cp/call.c"

#line 1697 "../.././gcc/cp/call.c"
 tree c2 = ((((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE)?(((type2)->type).maxval):(((((((((((((type2)->type).values))->common).type)))->common).type))->type).maxval)));
#line 1699 "../.././gcc/cp/call.c"
if (((((enum tree_code )((c1)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((c1)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((c1)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((c1)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((c1)->type).lang_flag_5)) && (lookup_base((c1), (c2), ba_any, (((void *)0))) != (( tree )(((void *)0)))) && (((((enum tree_code )((type2)->common).code)) == RECORD_TYPE && (((type2)->type).lang_specific) && ((((&((((type2)->type).lang_specific)->u).c))->ptrmemfunc_flag))) || is_complete(((((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE)?(((type2)->common).type):((((((((((type2)->type).values))->common).type)))->common).type)))))){
break; }} }
#line 1704 "../.././gcc/cp/call.c"
return ; 
#line 1748 "../.././gcc/cp/call.c"
case MINUS_EXPR: if ((((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type1)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == METHOD_TYPE))) && (((((enum tree_code )((type2)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type2)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type2)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type2)->common).type))->common).code)) == METHOD_TYPE)))){
break; }
#line 1751 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type1)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == METHOD_TYPE))) && ((((enum tree_code )((type2)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE)){
{ 
#line 1753 "../.././gcc/cp/call.c"
type2 = global_trees[TI_PTRDIFF_TYPE]; 
#line 1754 "../.././gcc/cp/call.c"
break; } }
#line 1756 "../.././gcc/cp/call.c"
case MULT_EXPR: case TRUNC_DIV_EXPR: if ((((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type1)->common).code)) == REAL_TYPE) && (((((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type2)->common).code)) == REAL_TYPE)){
break; }
#line 1760 "../.././gcc/cp/call.c"
return ; 
#line 1762 "../.././gcc/cp/call.c"
case EQ_EXPR: case NE_EXPR: if ((((((enum tree_code )((type1)->common).code)) == RECORD_TYPE && (((type1)->type).lang_specific) && ((((&((((type1)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && ((((enum tree_code )((type2)->common).code)) == RECORD_TYPE && (((type2)->type).lang_specific) && ((((&((((type2)->type).lang_specific)->u).c))->ptrmemfunc_flag)))) || (((((enum tree_code )((type1)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE))){
break; }
#line 1767 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((type1)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((type1)->common).code)) == RECORD_TYPE && (((type1)->type).lang_specific) && ((((&((((type1)->type).lang_specific)->u).c))->ptrmemfunc_flag)))) && null_ptr_cst_p(args[1])){
{ 
#line 1769 "../.././gcc/cp/call.c"
type2 = type1; 
#line 1770 "../.././gcc/cp/call.c"
break; } }
#line 1772 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((type2)->common).code)) == RECORD_TYPE && (((type2)->type).lang_specific) && ((((&((((type2)->type).lang_specific)->u).c))->ptrmemfunc_flag)))) && null_ptr_cst_p(args[0])){
{ 
#line 1774 "../.././gcc/cp/call.c"
type1 = type2; 
#line 1775 "../.././gcc/cp/call.c"
break; } }
#line 1778 "../.././gcc/cp/call.c"
case LT_EXPR: case GT_EXPR: case LE_EXPR: case GE_EXPR: case MAX_EXPR: case MIN_EXPR: if ((((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type1)->common).code)) == REAL_TYPE) && (((((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type2)->common).code)) == REAL_TYPE)){
break; }
#line 1786 "../.././gcc/cp/call.c"
if (((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && ((((enum tree_code )((type2)->common).code)) == POINTER_TYPE)){
break; }
#line 1788 "../.././gcc/cp/call.c"
if ((((enum tree_code )((type1)->common).code)) == ENUMERAL_TYPE && (((enum tree_code )((type2)->common).code)) == ENUMERAL_TYPE){
break; }
#line 1790 "../.././gcc/cp/call.c"
if (((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && null_ptr_cst_p(args[1])){
{ 
#line 1792 "../.././gcc/cp/call.c"
type2 = type1; 
#line 1793 "../.././gcc/cp/call.c"
break; } }
#line 1795 "../.././gcc/cp/call.c"
if (null_ptr_cst_p(args[0]) && ((((enum tree_code )((type2)->common).code)) == POINTER_TYPE)){
{ 
#line 1797 "../.././gcc/cp/call.c"
type1 = type2; 
#line 1798 "../.././gcc/cp/call.c"
break; } }
#line 1800 "../.././gcc/cp/call.c"
return ; 
#line 1802 "../.././gcc/cp/call.c"
case PLUS_EXPR: if ((((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type1)->common).code)) == REAL_TYPE) && (((((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type2)->common).code)) == REAL_TYPE)){
break; }
#line 1805 "../.././gcc/cp/call.c"
case ARRAY_REF: if (((((enum tree_code )((type1)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) && (((((enum tree_code )((type2)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type2)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type2)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type2)->common).type))->common).code)) == METHOD_TYPE)))){
{ 
#line 1808 "../.././gcc/cp/call.c"
type1 = global_trees[TI_PTRDIFF_TYPE]; 
#line 1809 "../.././gcc/cp/call.c"
break; } }
#line 1811 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type1)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == METHOD_TYPE))) && ((((enum tree_code )((type2)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE)){
{ 
#line 1813 "../.././gcc/cp/call.c"
type2 = global_trees[TI_PTRDIFF_TYPE]; 
#line 1814 "../.././gcc/cp/call.c"
break; } }
#line 1816 "../.././gcc/cp/call.c"
return ; 
# 1748 "../.././gcc/cp/call.c" 
# 1829 "../.././gcc/cp/call.c" 
case TRUNC_MOD_EXPR: case BIT_AND_EXPR: case BIT_IOR_EXPR: case BIT_XOR_EXPR: case LSHIFT_EXPR: case RSHIFT_EXPR: if (((((enum tree_code )((type1)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) && ((((enum tree_code )((type2)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE)){
break; }
#line 1837 "../.././gcc/cp/call.c"
return ; 
#line 1875 "../.././gcc/cp/call.c"
case MODIFY_EXPR: switch(code2){ { 
#line 1885 "../.././gcc/cp/call.c"
case PLUS_EXPR: case MINUS_EXPR: if ((((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && (!((((enum tree_code )(((((type1)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == FUNCTION_TYPE || (((enum tree_code )(((((type1)->common).type))->common).code)) == METHOD_TYPE))) && ((((enum tree_code )((type2)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE)){
{ 
#line 1882 "../.././gcc/cp/call.c"
type2 = global_trees[TI_PTRDIFF_TYPE]; 
#line 1883 "../.././gcc/cp/call.c"
break; } }
#line 1885 "../.././gcc/cp/call.c"
case MULT_EXPR: case TRUNC_DIV_EXPR: if ((((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type1)->common).code)) == REAL_TYPE) && (((((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type2)->common).code)) == REAL_TYPE)){
break; }
#line 1889 "../.././gcc/cp/call.c"
return ; 
#line 1891 "../.././gcc/cp/call.c"
case TRUNC_MOD_EXPR: case BIT_AND_EXPR: case BIT_IOR_EXPR: case BIT_XOR_EXPR: case LSHIFT_EXPR: case RSHIFT_EXPR: if (((((enum tree_code )((type1)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) && ((((enum tree_code )((type2)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE)){
break; }
#line 1899 "../.././gcc/cp/call.c"
return ; 
#line 1901 "../.././gcc/cp/call.c"
case NOP_EXPR: if ((((((enum tree_code )((type1)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type1)->common).code)) == CHAR_TYPE || (((enum tree_code )((type1)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type1)->common).code)) == REAL_TYPE) && (((((enum tree_code )((type2)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type2)->common).code)) == CHAR_TYPE || (((enum tree_code )((type2)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((type2)->common).code)) == REAL_TYPE)){
break; }
#line 1904 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((type1)->common).code)) == RECORD_TYPE && (((type1)->type).lang_specific) && ((((&((((type1)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && ((((enum tree_code )((type2)->common).code)) == RECORD_TYPE && (((type2)->type).lang_specific) && ((((&((((type2)->type).lang_specific)->u).c))->ptrmemfunc_flag)))) || (((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && ((((enum tree_code )((type2)->common).code)) == POINTER_TYPE)) || (((((enum tree_code )((type1)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE)) || ((((((enum tree_code )((type1)->common).code)) == RECORD_TYPE && (((type1)->type).lang_specific) && ((((&((((type1)->type).lang_specific)->u).c))->ptrmemfunc_flag))) || (((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && null_ptr_cst_p(args[1]))){
{ 
#line 1911 "../.././gcc/cp/call.c"
type2 = type1; 
#line 1912 "../.././gcc/cp/call.c"
break; } }
#line 1914 "../.././gcc/cp/call.c"
return ; 
#line 1916 "../.././gcc/cp/call.c"
default: (fancy_abort("../.././gcc/cp/call.c", 1917, __FUNCTION__)); } } 
#line 1919 "../.././gcc/cp/call.c"
type1 = build_reference_type(type1); 
#line 1920 "../.././gcc/cp/call.c"
break; 
#line 1922 "../.././gcc/cp/call.c"
case COND_EXPR: if (promoted_arithmetic_type_p(type1) && promoted_arithmetic_type_p(type2)){
break; }
# 1875 "../.././gcc/cp/call.c" 
# 1943 "../.././gcc/cp/call.c" 
if ((!(((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) || (((((enum tree_code )((type1)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((type1)->common).code)) == RECORD_TYPE && (((type1)->type).lang_specific) && ((((&((((type1)->type).lang_specific)->u).c))->ptrmemfunc_flag)))))) || (!(((((enum tree_code )((type2)->common).code)) == POINTER_TYPE) || (((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((type2)->common).code)) == RECORD_TYPE && (((type2)->type).lang_specific) && ((((&((((type2)->type).lang_specific)->u).c))->ptrmemfunc_flag))))))){
return ; }
#line 1951 "../.././gcc/cp/call.c"
break; 
#line 1953 "../.././gcc/cp/call.c"
default: (fancy_abort("../.././gcc/cp/call.c", 1954, __FUNCTION__)); } } 
#line 1959 "../.././gcc/cp/call.c"
if (type2 && (!comptypes((type1), (type2), 0)) && (((enum tree_code )((type1)->common).code)) == (((enum tree_code )((type2)->common).code)) && ((((enum tree_code )((type1)->common).code)) == REFERENCE_TYPE || (((((enum tree_code )((type1)->common).code)) == POINTER_TYPE) && ((((enum tree_code )((type2)->common).code)) == POINTER_TYPE)) || (((((enum tree_code )((type1)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((type2)->common).code)) == OFFSET_TYPE)) || ((((enum tree_code )((type1)->common).code)) == RECORD_TYPE && (((type1)->type).lang_specific) && ((((&((((type1)->type).lang_specific)->u).c))->ptrmemfunc_flag))) || ((((enum tree_code )((type1)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((type1)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((type1)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((type1)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((type1)->type).lang_flag_5)) || (((enum tree_code )((type1)->common).code)) == ENUMERAL_TYPE)){
{ 
#line 1969 "../.././gcc/cp/call.c"
build_builtin_candidate(candidates, fnname, type1, type1, args, argtypes, flags); 
#line 1970 "../.././gcc/cp/call.c"
build_builtin_candidate(candidates, fnname, type2, type2, args, argtypes, flags); 
#line 1972 "../.././gcc/cp/call.c"
return ; } }
#line 1975 "../.././gcc/cp/call.c"
build_builtin_candidate(candidates, fnname, type1, type2, args, argtypes, flags); }
 
#line 1980 "../.././gcc/cp/call.c"
 tree type_decays_to( tree type)  {

#line 1983 "../.././gcc/cp/call.c"
if ((((enum tree_code )((type)->common).code)) == ARRAY_TYPE){
return build_pointer_type((((type)->common).type)); }
#line 1983 "../.././gcc/cp/call.c"
if ((((enum tree_code )((type)->common).code)) == FUNCTION_TYPE){
return build_pointer_type(type); }
#line 1985 "../.././gcc/cp/call.c"
return type; }
 
#line 2006 "../.././gcc/cp/call.c"
static void add_builtin_candidates(struct z_candidate **candidates, enum tree_code code, enum tree_code code2,  tree fnname,  tree *args, int flags)  {

#line 2007 "../.././gcc/cp/call.c"

#line 2007 "../.././gcc/cp/call.c"
int ref1,i;
#line 2008 "../.././gcc/cp/call.c"

#line 2008 "../.././gcc/cp/call.c"
int enum_p = 0;
#line 2009 "../.././gcc/cp/call.c"

#line 2009 "../.././gcc/cp/call.c"
 tree type,argtypes[3];
#line 2014 "../.././gcc/cp/call.c"

#line 2014 "../.././gcc/cp/call.c"
 tree types[2];
#line 2016 "../.././gcc/cp/call.c"
for(i = 0;i < 3;(++i)) { { 
#line 2021 "../.././gcc/cp/call.c"
if (args[i]){
argtypes[i] = lvalue_type(args[i]); }else{
argtypes[i] = (( tree )(((void *)0))); }} } 
#line 2024 "../.././gcc/cp/call.c"
switch(code){ { 
#line 2036 "../.././gcc/cp/call.c"
case POSTINCREMENT_EXPR: case PREINCREMENT_EXPR: case POSTDECREMENT_EXPR: case PREDECREMENT_EXPR: case MODIFY_EXPR: ref1 = 1; 
#line 2037 "../.././gcc/cp/call.c"
break; 
#line 2044 "../.././gcc/cp/call.c"
case TRUTH_NOT_EXPR: build_builtin_candidate(candidates, fnname, global_trees[TI_BOOLEAN_TYPE], (( tree )(((void *)0))), args, argtypes, flags); 
#line 2048 "../.././gcc/cp/call.c"
return ; 
#line 2050 "../.././gcc/cp/call.c"
case TRUTH_ORIF_EXPR: case TRUTH_ANDIF_EXPR: build_builtin_candidate(candidates, fnname, global_trees[TI_BOOLEAN_TYPE], global_trees[TI_BOOLEAN_TYPE], args, argtypes, flags); 
#line 2055 "../.././gcc/cp/call.c"
return ; 
#line 2057 "../.././gcc/cp/call.c"
case ADDR_EXPR: case COMPOUND_EXPR: case COMPONENT_REF: return ; 
#line 2062 "../.././gcc/cp/call.c"
case COND_EXPR: case EQ_EXPR: case NE_EXPR: case LT_EXPR: case LE_EXPR: case GT_EXPR: case GE_EXPR: enum_p = 1; 
#line 2072 "../.././gcc/cp/call.c"
default: ref1 = 0; } } 
#line 2076 "../.././gcc/cp/call.c"
types[0] = types[1] = (( tree )(((void *)0))); 
#line 2078 "../.././gcc/cp/call.c"
for(i = 0;i < 2;(++i)) { { 
#line 2145 "../.././gcc/cp/call.c"
if ((!args[i])){
; }else{
if (((((enum tree_code )((argtypes[i])->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((argtypes[i])->common).code)) == TYPENAME_TYPE || (((enum tree_code )((argtypes[i])->common).code)) == TYPEOF_TYPE || (((enum tree_code )((argtypes[i])->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((argtypes[i])->type).lang_flag_5))){
{ 
#line 2084 "../.././gcc/cp/call.c"

#line 2084 "../.././gcc/cp/call.c"
 tree convs;
#line 2086 "../.././gcc/cp/call.c"
if (i == 0 && code == MODIFY_EXPR && code2 == NOP_EXPR){
return ; }
#line 2089 "../.././gcc/cp/call.c"
convs = lookup_conversions(argtypes[i]); 
#line 2091 "../.././gcc/cp/call.c"
if (code == COND_EXPR){
{ 
#line 2097 "../.././gcc/cp/call.c"
if (real_lvalue_p(args[i])){
types[i] = tree_cons_stat((( tree )(((void *)0))), build_reference_type(argtypes[i]), types[i]); }
#line 2097 "../.././gcc/cp/call.c"
types[i] = tree_cons_stat((( tree )(((void *)0))), (((argtypes[i])->type).main_variant), types[i]); } }else{
if ((!convs)){
return ; }}
#line 2104 "../.././gcc/cp/call.c"
for(;convs;convs = (((convs)->common).chain)) { { 
#line 2106 "../.././gcc/cp/call.c"
type = ((((((((((((enum tree_code )(((((convs)->list).value))->common).code)) == OVERLOAD)?(((((struct tree_overload *)((((convs)->list).value))))->function)):((((convs)->list).value)))))->common).type))->common).type); 
#line 2108 "../.././gcc/cp/call.c"
if (i == 0 && ref1 && ((((enum tree_code )((type)->common).code)) != REFERENCE_TYPE || ((cp_type_quals((((type)->common).type)) & 0x1) != 0))){
continue; }
#line 2113 "../.././gcc/cp/call.c"
if (code == COND_EXPR && (((enum tree_code )((type)->common).code)) == REFERENCE_TYPE){
types[i] = tree_cons_stat((( tree )(((void *)0))), type, types[i]); }
#line 2116 "../.././gcc/cp/call.c"
type = non_reference(type); 
#line 2117 "../.././gcc/cp/call.c"
if (i != 0 || (!ref1)){
{ 
#line 2119 "../.././gcc/cp/call.c"
type = (((type_decays_to(type))->type).main_variant); 
#line 2120 "../.././gcc/cp/call.c"
if (enum_p && (((enum tree_code )((type)->common).code)) == ENUMERAL_TYPE){
types[i] = tree_cons_stat((( tree )(((void *)0))), type, types[i]); }
#line 2122 "../.././gcc/cp/call.c"
if (((((enum tree_code )((type)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type)->common).code)) == CHAR_TYPE || (((enum tree_code )((type)->common).code)) == INTEGER_TYPE)){
type = type_promotes_to(type); }} }
#line 2126 "../.././gcc/cp/call.c"
if ((!value_member(type, types[i]))){
types[i] = tree_cons_stat((( tree )(((void *)0))), type, types[i]); }} } } }else{
{ 
#line 2135 "../.././gcc/cp/call.c"
if (code == COND_EXPR && real_lvalue_p(args[i])){
types[i] = tree_cons_stat((( tree )(((void *)0))), build_reference_type(argtypes[i]), types[i]); }
#line 2135 "../.././gcc/cp/call.c"
type = non_reference(argtypes[i]); 
#line 2136 "../.././gcc/cp/call.c"
if (i != 0 || (!ref1)){
{ 
#line 2138 "../.././gcc/cp/call.c"
type = (((type_decays_to(type))->type).main_variant); 
#line 2139 "../.././gcc/cp/call.c"
if (enum_p && (((enum tree_code )((type)->common).code)) == ENUMERAL_TYPE){
types[i] = tree_cons_stat((( tree )(((void *)0))), type, types[i]); }
#line 2141 "../.././gcc/cp/call.c"
if (((((enum tree_code )((type)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type)->common).code)) == CHAR_TYPE || (((enum tree_code )((type)->common).code)) == INTEGER_TYPE)){
type = type_promotes_to(type); }} }
#line 2144 "../.././gcc/cp/call.c"
types[i] = tree_cons_stat((( tree )(((void *)0))), type, types[i]); } }}} } 
#line 2150 "../.././gcc/cp/call.c"
for(;types[0];types[0] = (((types[0])->common).chain)) { { 
#line 2160 "../.././gcc/cp/call.c"
if (types[1]){
for(type = types[1];type;type = (((type)->common).chain)) { add_builtin_candidate(candidates, code, code2, fnname, (((types[0])->list).value), (((type)->list).value), args, argtypes, flags); } }else{
add_builtin_candidate(candidates, code, code2, fnname, (((types[0])->list).value), (( tree )(((void *)0))), args, argtypes, flags); }} } 
#line 2163 "../.././gcc/cp/call.c"
return ; }
 
# 2002 "../.././gcc/cp/call.c" 
# 2183 "../.././gcc/cp/call.c" 
static struct z_candidate *add_template_candidate_real(struct z_candidate **candidates,  tree tmpl,  tree ctype,  tree explicit_targs,  tree arglist,  tree return_type,  tree access_path,  tree conversion_path, int flags,  tree obj,  unification_kind_t strict)  {

#line 2184 "../.././gcc/cp/call.c"

#line 2184 "../.././gcc/cp/call.c"
int ntparms = ((((((((tmpl)->decl_non_common).arguments)->list).value))->vec).length);
#line 2185 "../.././gcc/cp/call.c"

#line 2185 "../.././gcc/cp/call.c"
 tree targs = make_tree_vec_stat(ntparms);
#line 2186 "../.././gcc/cp/call.c"

#line 2186 "../.././gcc/cp/call.c"
 tree args_without_in_chrg = arglist;
#line 2187 "../.././gcc/cp/call.c"

#line 2187 "../.././gcc/cp/call.c"
struct z_candidate *cand;
#line 2188 "../.././gcc/cp/call.c"

#line 2188 "../.././gcc/cp/call.c"
int i;
#line 2189 "../.././gcc/cp/call.c"

#line 2189 "../.././gcc/cp/call.c"
 tree fn;
#line 2193 "../.././gcc/cp/call.c"
if (((((enum tree_code )(((((tmpl)->common).type))->common).code)) == METHOD_TYPE)){
args_without_in_chrg = (((args_without_in_chrg)->common).chain); }
#line 2196 "../.././gcc/cp/call.c"
if ((((((((tmpl)->decl_common).lang_specific)->decl_flags).constructor_attr) && (!(((((enum tree_code )((tmpl)->common).code)) == FUNCTION_DECL || (((enum tree_code )((tmpl)->common).code)) == TEMPLATE_DECL) && (((tmpl)->decl_common).lang_specific) && (!((((tmpl)->decl_common).lang_specific)->decl_flags).thunk_p) && ((((((tmpl))->decl_common).lang_specific)->u).f.u5.cloned_function) != (( tree )(((void *)0)))))) || ((((((tmpl)->decl_common).lang_specific)->decl_flags).constructor_attr) && (((tmpl)->decl_minimal).name) == cp_global_trees[CPTI_BASE_CTOR_IDENTIFIER])) && ((((&(((((((tmpl)->decl_minimal).context))->type).lang_specific)->u).c))->vbases))){
args_without_in_chrg = (((args_without_in_chrg)->common).chain); }
#line 2201 "../.././gcc/cp/call.c"
i = fn_type_unification(tmpl, explicit_targs, targs, args_without_in_chrg, return_type, strict, flags); 
#line 2205 "../.././gcc/cp/call.c"
if (i != 0){
return (((void *)0)); }
#line 2208 "../.././gcc/cp/call.c"
fn = instantiate_template(tmpl, targs, tf_none); 
#line 2209 "../.././gcc/cp/call.c"
if (fn == global_trees[TI_ERROR_MARK]){
return (((void *)0)); }
#line 2234 "../.././gcc/cp/call.c"
if ((((((fn)->decl_common).lang_specific)->decl_flags).constructor_attr) && list_length(arglist) == 2){
{ 
#line 2236 "../.././gcc/cp/call.c"

#line 2236 "../.././gcc/cp/call.c"
 tree arg_types = skip_artificial_parms_for((fn), ((((((fn)->common).type))->type).values));
#line 2237 "../.././gcc/cp/call.c"
if (arg_types && comptypes((((((((arg_types)->list).value))->type).main_variant)), (ctype), 0)){
return (((void *)0)); }} }
#line 2242 "../.././gcc/cp/call.c"
if (obj != (( tree )(((void *)0)))){
cand = add_conv_candidate(candidates, fn, obj, access_path, conversion_path, arglist); }else{
cand = add_function_candidate(candidates, fn, ctype, arglist, access_path, conversion_path, flags); }
#line 2250 "../.././gcc/cp/call.c"
if (((((((((((fn))->decl_common).lang_specific)->decl_flags).u.template_info))->list).purpose)) != tmpl){
(cand->template_decl) = tree_cons_stat(tmpl, targs, (( tree )(((void *)0)))); }else{
(cand->template_decl) = ((((((fn))->decl_common).lang_specific)->decl_flags).u.template_info); }
# 2234 "../.././gcc/cp/call.c" 
# 2272 "../.././gcc/cp/call.c" 
return cand; }
 
#line 2281 "../.././gcc/cp/call.c"
static struct z_candidate *add_template_candidate(struct z_candidate **candidates,  tree tmpl,  tree ctype,  tree explicit_targs,  tree arglist,  tree return_type,  tree access_path,  tree conversion_path, int flags,  unification_kind_t strict)  {

#line 2286 "../.././gcc/cp/call.c"
return add_template_candidate_real(candidates, tmpl, ctype, explicit_targs, arglist, return_type, access_path, conversion_path, flags, (( tree )(((void *)0))), strict); }
 
#line 2294 "../.././gcc/cp/call.c"
static struct z_candidate *add_template_conv_candidate(struct z_candidate **candidates,  tree tmpl,  tree obj,  tree arglist,  tree return_type,  tree access_path,  tree conversion_path)  {

#line 2298 "../.././gcc/cp/call.c"
return add_template_candidate_real(candidates, tmpl, (( tree )(((void *)0))), (( tree )(((void *)0))), arglist, return_type, access_path, conversion_path, 0, obj, DEDUCE_CONV); }
 
#line 2311 "../.././gcc/cp/call.c"
static struct z_candidate *splice_viable(struct z_candidate *cands, unsigned char strict_p, unsigned char *any_viable_p)  {

#line 2312 "../.././gcc/cp/call.c"

#line 2312 "../.././gcc/cp/call.c"
struct z_candidate *viable;
#line 2313 "../.././gcc/cp/call.c"

#line 2313 "../.././gcc/cp/call.c"
struct z_candidate **last_viable;
#line 2314 "../.././gcc/cp/call.c"

#line 2314 "../.././gcc/cp/call.c"
struct z_candidate **cand;
#line 2316 "../.././gcc/cp/call.c"
viable = (((void *)0)); 
#line 2317 "../.././gcc/cp/call.c"
last_viable = (&viable); 
#line 2318 "../.././gcc/cp/call.c"
(*any_viable_p) = 0; 
#line 2320 "../.././gcc/cp/call.c"
cand = (&cands); 
#line 2321 "../.././gcc/cp/call.c"
while((*cand)) { { 
#line 2323 "../.././gcc/cp/call.c"

#line 2323 "../.././gcc/cp/call.c"
struct z_candidate *c = (*cand);
#line 2324 "../.././gcc/cp/call.c"
if ((strict_p?(c->viable) == 1:(c->viable))){
{ 
#line 2326 "../.././gcc/cp/call.c"
(*last_viable) = c; 
#line 2327 "../.././gcc/cp/call.c"
(*cand) = (c->next); 
#line 2328 "../.././gcc/cp/call.c"
(c->next) = (((void *)0)); 
#line 2329 "../.././gcc/cp/call.c"
last_viable = (&(c->next)); 
#line 2330 "../.././gcc/cp/call.c"
(*any_viable_p) = 1; } }else{
cand = (&(c->next)); }} } 
#line 2336 "../.././gcc/cp/call.c"
return (viable?viable:cands); }
 
#line 2341 "../.././gcc/cp/call.c"
static unsigned char any_strictly_viable(struct z_candidate *cands)  {

#line 2345 "../.././gcc/cp/call.c"
for(;cands;cands = (cands->next)) { if ((cands->viable) == 1){
return 1; }} 
#line 2345 "../.././gcc/cp/call.c"
return 0; }
 
#line 2353 "../.././gcc/cp/call.c"
static  tree build_this( tree obj)  {

#line 2359 "../.././gcc/cp/call.c"
if ((scope_chain->x_processing_template_decl)){
return build_address(obj); }
#line 2359 "../.././gcc/cp/call.c"
return build_unary_op(ADDR_EXPR, obj, 0); }
 
#line 2368 "../.././gcc/cp/call.c"
static __inline__ int equal_functions( tree fn1,  tree fn2)  {

#line 2372 "../.././gcc/cp/call.c"
if (((((fn1))->decl_common).lang_flag_0) || ((((fn2))->decl_common).lang_flag_0) || (((((enum tree_code )((fn1)->common).code)) == FUNCTION_DECL && (!((((enum tree_code )((fn1)->common).code)) == FUNCTION_DECL && (((fn1)->decl_common).lang_specific) && ((((fn1)->decl_common).lang_specific)->decl_flags).thunk_p))) && ((((((fn1)->decl_common).lang_specific)?((((fn1)->decl_common).lang_specific)->decl_flags).language:(((((enum tree_code )((fn1)->common).code)) == FUNCTION_DECL?lang_c:lang_cplusplus)))) == lang_c))){
return decls_match(fn1, fn2); }
#line 2372 "../.././gcc/cp/call.c"
return fn1 == fn2; }
 
#line 2385 "../.././gcc/cp/call.c"
static void print_z_candidate(const char *msgstr, struct z_candidate *candidate)  {

#line 2406 "../.././gcc/cp/call.c"
if ((((enum tree_code )(((candidate->fn))->common).code)) == IDENTIFIER_NODE){
{ 
#line 2399 "../.././gcc/cp/call.c"
if ((candidate->num_convs) == 3){
inform("%s %D(%T, %T, %T) <built-in>", msgstr, (candidate->fn), ((candidate->convs)[0]->type), ((candidate->convs)[1]->type), ((candidate->convs)[2]->type)); }else{
if ((candidate->num_convs) == 2){
inform("%s %D(%T, %T) <built-in>", msgstr, (candidate->fn), ((candidate->convs)[0]->type), ((candidate->convs)[1]->type)); }else{
inform("%s %D(%T) <built-in>", msgstr, (candidate->fn), ((candidate->convs)[0]->type)); }}} }else{
if ((tree_code_type[((int )((((enum tree_code )(((candidate->fn))->common).code))))] == tcc_type)){
inform("%s %T <conversion>", msgstr, (candidate->fn)); }else{
if ((candidate->viable) == (-1)){
inform("%s %+#D <near match>", msgstr, (candidate->fn)); }else{
inform("%s %+#D", msgstr, (candidate->fn)); }}}}
 
#line 2411 "../.././gcc/cp/call.c"
static void print_z_candidates(struct z_candidate *candidates)  {

#line 2412 "../.././gcc/cp/call.c"

#line 2412 "../.././gcc/cp/call.c"
const char *str;
#line 2413 "../.././gcc/cp/call.c"

#line 2413 "../.././gcc/cp/call.c"
struct z_candidate *cand1;
#line 2414 "../.././gcc/cp/call.c"

#line 2414 "../.././gcc/cp/call.c"
struct z_candidate **cand2;
#line 2421 "../.././gcc/cp/call.c"
for(cand1 = candidates;cand1;cand1 = (cand1->next)) { { 
#line 2423 "../.././gcc/cp/call.c"

#line 2423 "../.././gcc/cp/call.c"
 tree fn = (cand1->fn);
#line 2425 "../.././gcc/cp/call.c"
if ((((enum tree_code )((fn)->common).code)) != FUNCTION_DECL){
continue; }
#line 2427 "../.././gcc/cp/call.c"
cand2 = (&(cand1->next)); 
#line 2428 "../.././gcc/cp/call.c"
while((*cand2)) { { 
#line 2434 "../.././gcc/cp/call.c"
if ((((enum tree_code )(((((*cand2))->fn))->common).code)) == FUNCTION_DECL && equal_functions(fn, (((*cand2))->fn))){
(*cand2) = (((*cand2))->next); }else{
cand2 = (&(((*cand2))->next)); }} } } } 
#line 2438 "../.././gcc/cp/call.c"
if ((!candidates)){
return ; }
#line 2441 "../.././gcc/cp/call.c"
str = dcgettext((((void *)0)), "candidates are:", __LC_MESSAGES); 
#line 2442 "../.././gcc/cp/call.c"
print_z_candidate(str, candidates); 
#line 2443 "../.././gcc/cp/call.c"
if ((candidates->next)){
{ 
#line 2447 "../.././gcc/cp/call.c"

#line 2447 "../.././gcc/cp/call.c"
 size_t len = gcc_gettext_width(str) + 1;
#line 2448 "../.././gcc/cp/call.c"

#line 2448 "../.././gcc/cp/call.c"
char *spaces = __builtin_alloca(len);
#line 2449 "../.././gcc/cp/call.c"
memset(spaces, ' ', len - 1); 
#line 2450 "../.././gcc/cp/call.c"
spaces[len - 1] = '\0'; 
#line 2452 "../.././gcc/cp/call.c"
candidates = (candidates->next); 
#line 2453 "../.././gcc/cp/call.c"
do { { 
#line 2455 "../.././gcc/cp/call.c"
print_z_candidate(spaces, candidates); 
#line 2456 "../.././gcc/cp/call.c"
candidates = (candidates->next); } } while(candidates); } }}
 
#line 2470 "../.././gcc/cp/call.c"
static  conversion *merge_conversion_sequences( conversion *user_seq,  conversion *std_seq)  {

#line 2471 "../.././gcc/cp/call.c"

#line 2471 "../.././gcc/cp/call.c"
 conversion **t;
#line 2473 "../.././gcc/cp/call.c"
(((void )(((!((user_seq->kind) == ck_user))?fancy_abort("../.././gcc/cp/call.c", 2473, __FUNCTION__) , 0:0)))); 
#line 2476 "../.././gcc/cp/call.c"
t = (&(std_seq)); 
#line 2477 "../.././gcc/cp/call.c"
while((((*t))->kind) != ck_identity) { t = (&((((*t))->u).next)); } 
#line 2482 "../.././gcc/cp/call.c"
(*t) = user_seq; 
#line 2485 "../.././gcc/cp/call.c"
(std_seq->user_conv_p) = 1; 
#line 2487 "../.././gcc/cp/call.c"
return std_seq; }
 
#line 2498 "../.././gcc/cp/call.c"
static struct z_candidate *build_user_type_conversion_1( tree totype,  tree expr, int flags)  {

#line 2499 "../.././gcc/cp/call.c"

#line 2499 "../.././gcc/cp/call.c"
struct z_candidate *candidates,*cand;
#line 2500 "../.././gcc/cp/call.c"

#line 2500 "../.././gcc/cp/call.c"
 tree fromtype = (((expr)->common).type);
#line 2501 "../.././gcc/cp/call.c"

#line 2501 "../.././gcc/cp/call.c"
 tree ctors = (( tree )(((void *)0)));
#line 2502 "../.././gcc/cp/call.c"

#line 2502 "../.././gcc/cp/call.c"
 tree conv_fns = (( tree )(((void *)0)));
#line 2503 "../.././gcc/cp/call.c"

#line 2503 "../.././gcc/cp/call.c"
 conversion *conv = (((void *)0));
#line 2504 "../.././gcc/cp/call.c"

#line 2504 "../.././gcc/cp/call.c"
 tree args = (( tree )(((void *)0)));
#line 2505 "../.././gcc/cp/call.c"

#line 2505 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 2510 "../.././gcc/cp/call.c"
(((void )(((!((!((((enum tree_code )((fromtype)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((fromtype)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((fromtype)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((fromtype)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((fromtype)->type).lang_flag_5))) || (!((((enum tree_code )((totype)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((totype)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((totype)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((totype)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((totype)->type).lang_flag_5))) || (!(lookup_base((fromtype), (totype), ba_any, (((void *)0))) != (( tree )(((void *)0)))))))?fancy_abort("../.././gcc/cp/call.c", 2511, __FUNCTION__) , 0:0)))); 
#line 2513 "../.././gcc/cp/call.c"
if (((((enum tree_code )((totype)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((totype)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((totype)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((totype)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((totype)->type).lang_flag_5))){
ctors = lookup_fnfields(totype, cp_global_trees[CPTI_COMPLETE_CTOR_IDENTIFIER], 0); }
#line 2516 "../.././gcc/cp/call.c"
if (((((enum tree_code )((fromtype)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((fromtype)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((fromtype)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((fromtype)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((fromtype)->type).lang_flag_5))){
conv_fns = lookup_conversions(fromtype); }
#line 2519 "../.././gcc/cp/call.c"
candidates = 0; 
#line 2520 "../.././gcc/cp/call.c"
flags |= (1 << 5); 
#line 2522 "../.././gcc/cp/call.c"
if (ctors){
{ 
#line 2524 "../.././gcc/cp/call.c"

#line 2524 "../.././gcc/cp/call.c"
 tree t;
#line 2526 "../.././gcc/cp/call.c"
ctors = (((((struct tree_baselink *)(ctors)))->functions)); 
#line 2528 "../.././gcc/cp/call.c"
t = build_int_cst(build_pointer_type(totype), 0); 
#line 2529 "../.././gcc/cp/call.c"
args = build_tree_list_stat((( tree )(((void *)0))), expr); 
#line 2532 "../.././gcc/cp/call.c"
(((void )(((!((!(((((((((((enum tree_code )((ctors)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(ctors)))->function)):(ctors))))->decl_common).lang_specific)->decl_flags).has_in_charge_parm_p)) && (!(((((((((((enum tree_code )((ctors)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(ctors)))->function)):(ctors))))->decl_common).lang_specific)->decl_flags).has_vtt_parm_p))))?fancy_abort("../.././gcc/cp/call.c", 2533, __FUNCTION__) , 0:0)))); 
#line 2534 "../.././gcc/cp/call.c"
args = tree_cons_stat((( tree )(((void *)0))), t, args); } }
#line 2536 "../.././gcc/cp/call.c"
for(;ctors;ctors = ((((((enum tree_code )((ctors)->common).code)) == OVERLOAD)?(((ctors)->common).chain):(( tree )(((void *)0)))))) { { 
#line 2538 "../.././gcc/cp/call.c"

#line 2538 "../.././gcc/cp/call.c"
 tree ctor = ((((((enum tree_code )((ctors)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(ctors)))->function)):(ctors)));
#line 2539 "../.././gcc/cp/call.c"
if ((((((ctor)->decl_common).lang_specific)->decl_flags).nonconverting)){
continue; }
#line 2542 "../.././gcc/cp/call.c"
if ((((enum tree_code )((ctor)->common).code)) == TEMPLATE_DECL){
cand = add_template_candidate((&candidates), ctor, totype, (( tree )(((void *)0))), args, (( tree )(((void *)0))), (((totype)->type).binfo), (((totype)->type).binfo), flags, DEDUCE_CALL); }else{
cand = add_function_candidate((&candidates), ctor, totype, args, (((totype)->type).binfo), (((totype)->type).binfo), flags); }
#line 2555 "../.././gcc/cp/call.c"
if (cand){
(cand->second_conv) = build_identity_conv(totype, (( tree )(((void *)0)))); }} } 
#line 2559 "../.././gcc/cp/call.c"
if (conv_fns){
args = build_tree_list_stat((( tree )(((void *)0))), build_this(expr)); }
#line 2562 "../.././gcc/cp/call.c"
for(;conv_fns;conv_fns = (((conv_fns)->common).chain)) { { 
#line 2564 "../.././gcc/cp/call.c"

#line 2564 "../.././gcc/cp/call.c"
 tree fns;
#line 2565 "../.././gcc/cp/call.c"

#line 2565 "../.././gcc/cp/call.c"
 tree conversion_path = (((conv_fns)->list).purpose);
#line 2566 "../.././gcc/cp/call.c"

#line 2566 "../.././gcc/cp/call.c"
int convflags = (1 << 5);
#line 2572 "../.././gcc/cp/call.c"
if ((((enum tree_code )((totype)->common).code)) == REFERENCE_TYPE){
convflags |= (1 << 7); }
#line 2575 "../.././gcc/cp/call.c"
for(fns = (((conv_fns)->list).value);fns;fns = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((fns)->common).chain):(( tree )(((void *)0)))))) { { 
#line 2577 "../.././gcc/cp/call.c"

#line 2577 "../.././gcc/cp/call.c"
 tree fn = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns)));
# 2383 "../.././gcc/cp/call.c" 
# 2586 "../.././gcc/cp/call.c" 
if ((((enum tree_code )((fn)->common).code)) == TEMPLATE_DECL){
cand = add_template_candidate((&candidates), fn, fromtype, (( tree )(((void *)0))), args, totype, (((fromtype)->type).binfo), conversion_path, flags, DEDUCE_CONV); }else{
cand = add_function_candidate((&candidates), fn, fromtype, args, (((fromtype)->type).binfo), conversion_path, flags); }
#line 2601 "../.././gcc/cp/call.c"
if (cand){
{ 
#line 2607 "../.././gcc/cp/call.c"

#line 2607 "../.././gcc/cp/call.c"
 conversion *ics = implicit_conversion(totype, (((((((cand->fn))->common).type))->common).type), 0, 0, convflags);
#line 2609 "../.././gcc/cp/call.c"
(cand->second_conv) = ics; 
#line 2611 "../.././gcc/cp/call.c"
if ((!ics)){
(cand->viable) = 0; }else{
if ((candidates->viable) == 1 && (ics->bad_p)){
(cand->viable) = (-1); }}} }} } } } 
#line 2619 "../.././gcc/cp/call.c"
candidates = splice_viable(candidates, pedantic, (&any_viable_p)); 
#line 2620 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
return 0; }
#line 2623 "../.././gcc/cp/call.c"
cand = tourney(candidates); 
#line 2624 "../.././gcc/cp/call.c"
if (cand == 0){
{ 
#line 2633 "../.././gcc/cp/call.c"
if (flags & (1 << 1)){
{ 
#line 2629 "../.././gcc/cp/call.c"
error("conversion from %qT to %qT is ambiguous", fromtype, totype); 
#line 2630 "../.././gcc/cp/call.c"
print_z_candidates(candidates); } }
#line 2633 "../.././gcc/cp/call.c"
cand = candidates; 
#line 2634 "../.././gcc/cp/call.c"
(cand->second_conv) = build_ambiguous_conv(totype, expr); 
#line 2635 "../.././gcc/cp/call.c"
((cand->second_conv)->user_conv_p) = 1; 
#line 2636 "../.././gcc/cp/call.c"
if ((!any_strictly_viable(candidates))){
((cand->second_conv)->bad_p) = 1; }
#line 2642 "../.././gcc/cp/call.c"
return cand; } }
#line 2646 "../.././gcc/cp/call.c"
conv = build_conv(ck_user, ((((((((cand->fn))->decl_common).lang_specific)->decl_flags).constructor_attr)?totype:non_reference((((((((cand->fn))->common).type))->common).type)))), build_identity_conv((((expr)->common).type), expr)); 
#line 2651 "../.././gcc/cp/call.c"
(conv->cand) = cand; 
#line 2654 "../.././gcc/cp/call.c"
(cand->second_conv) = merge_conversion_sequences(conv, (cand->second_conv)); 
#line 2657 "../.././gcc/cp/call.c"
if ((cand->viable) == (-1)){
((cand->second_conv)->bad_p) = 1; }
#line 2660 "../.././gcc/cp/call.c"
return cand; }
 
#line 2664 "../.././gcc/cp/call.c"
 tree build_user_type_conversion( tree totype,  tree expr, int flags)  {

#line 2666 "../.././gcc/cp/call.c"

#line 2666 "../.././gcc/cp/call.c"
struct z_candidate *cand = build_user_type_conversion_1(totype, expr, flags);
#line 2668 "../.././gcc/cp/call.c"
if (cand){
{ 
#line 2672 "../.././gcc/cp/call.c"
if (((cand->second_conv)->kind) == ck_ambig){
return global_trees[TI_ERROR_MARK]; }
#line 2672 "../.././gcc/cp/call.c"
expr = convert_like_real(((cand->second_conv)), (expr), (( tree )(((void *)0))), 0, 0, 1, 0); 
#line 2673 "../.././gcc/cp/call.c"
return convert_from_reference(expr); } }
#line 2675 "../.././gcc/cp/call.c"
return (( tree )(((void *)0))); }
 
#line 2681 "../.././gcc/cp/call.c"
static  tree resolve_args( tree args)  {

#line 2682 "../.././gcc/cp/call.c"

#line 2682 "../.././gcc/cp/call.c"
 tree t;
#line 2683 "../.././gcc/cp/call.c"
for(t = args;t;t = (((t)->common).chain)) { { 
#line 2685 "../.././gcc/cp/call.c"

#line 2685 "../.././gcc/cp/call.c"
 tree arg = (((t)->list).value);
#line 2687 "../.././gcc/cp/call.c"
if (((arg) == global_trees[TI_ERROR_MARK] || ((arg) && ((((arg))->common).type) == global_trees[TI_ERROR_MARK]))){
return global_trees[TI_ERROR_MARK]; }else{
if (((((enum tree_code )(((((arg)->common).type))->common).code)) == VOID_TYPE)){
{ 
#line 2691 "../.././gcc/cp/call.c"
error("invalid use of void expression"); 
#line 2692 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }}} } 
#line 2695 "../.././gcc/cp/call.c"
return args; }
 
#line 2717 "../.././gcc/cp/call.c"
static struct z_candidate *perform_overload_resolution( tree fn,  tree args, struct z_candidate **candidates, unsigned char *any_viable_p)  {

#line 2718 "../.././gcc/cp/call.c"

#line 2718 "../.././gcc/cp/call.c"
struct z_candidate *cand;
#line 2719 "../.././gcc/cp/call.c"

#line 2719 "../.././gcc/cp/call.c"
 tree explicit_targs = (( tree )(((void *)0)));
#line 2720 "../.././gcc/cp/call.c"

#line 2720 "../.././gcc/cp/call.c"
int template_only = 0;
#line 2722 "../.././gcc/cp/call.c"
(*candidates) = (((void *)0)); 
#line 2723 "../.././gcc/cp/call.c"
(*any_viable_p) = 1; 
#line 2726 "../.././gcc/cp/call.c"
(((void )(((!((((enum tree_code )((fn)->common).code)) == FUNCTION_DECL || (((enum tree_code )((fn)->common).code)) == TEMPLATE_DECL || (((enum tree_code )((fn)->common).code)) == OVERLOAD || (((enum tree_code )((fn)->common).code)) == TEMPLATE_ID_EXPR))?fancy_abort("../.././gcc/cp/call.c", 2729, __FUNCTION__) , 0:0)))); 
#line 2730 "../.././gcc/cp/call.c"
(((void )(((!((!args) || (((enum tree_code )((args)->common).code)) == TREE_LIST))?fancy_abort("../.././gcc/cp/call.c", 2730, __FUNCTION__) , 0:0)))); 
#line 2732 "../.././gcc/cp/call.c"
if ((((enum tree_code )((fn)->common).code)) == TEMPLATE_ID_EXPR){
{ 
#line 2734 "../.././gcc/cp/call.c"
explicit_targs = (((fn)->exp).operands[1]); 
#line 2735 "../.././gcc/cp/call.c"
fn = (((fn)->exp).operands[0]); 
#line 2736 "../.././gcc/cp/call.c"
template_only = 1; } }
#line 2740 "../.././gcc/cp/call.c"
add_candidates(fn, args, explicit_targs, template_only, (( tree )(((void *)0))), (( tree )(((void *)0))), ((1 << 0) | (1 << 1)), candidates); 
#line 2746 "../.././gcc/cp/call.c"
(*candidates) = splice_viable((*candidates), pedantic, any_viable_p); 
#line 2747 "../.././gcc/cp/call.c"
if ((!(*any_viable_p))){
return (((void *)0)); }
#line 2750 "../.././gcc/cp/call.c"
cand = tourney((*candidates)); 
#line 2751 "../.././gcc/cp/call.c"
return cand; }
 
#line 2758 "../.././gcc/cp/call.c"
 tree build_new_function_call( tree fn,  tree args, unsigned char koenig_p)  {

#line 2759 "../.././gcc/cp/call.c"

#line 2759 "../.././gcc/cp/call.c"
struct z_candidate *candidates,*cand;
#line 2760 "../.././gcc/cp/call.c"

#line 2760 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 2761 "../.././gcc/cp/call.c"

#line 2761 "../.././gcc/cp/call.c"
void *p;
#line 2762 "../.././gcc/cp/call.c"

#line 2762 "../.././gcc/cp/call.c"
 tree result;
#line 2764 "../.././gcc/cp/call.c"
args = resolve_args(args); 
#line 2765 "../.././gcc/cp/call.c"
if (args == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 2771 "../.././gcc/cp/call.c"
if ((!koenig_p)){
{ 
#line 2773 "../.././gcc/cp/call.c"

#line 2773 "../.././gcc/cp/call.c"
 tree orig_fn = fn;
#line 2775 "../.././gcc/cp/call.c"
fn = remove_hidden_names(fn); 
#line 2776 "../.././gcc/cp/call.c"
if ((!fn)){
{ 
#line 2779 "../.././gcc/cp/call.c"
error("no matching function for call to %<%D(%A)%>", (((((((((enum tree_code )((orig_fn)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(orig_fn)))->function)):(orig_fn))))->decl_minimal).name), args); 
#line 2780 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }} }
#line 2785 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 2787 "../.././gcc/cp/call.c"
cand = perform_overload_resolution(fn, args, (&candidates), (&any_viable_p)); 
#line 2789 "../.././gcc/cp/call.c"
if ((!cand)){
{ 
#line 2793 "../.././gcc/cp/call.c"
if ((!any_viable_p) && candidates && (!(candidates->next))){
return build_function_call((candidates->fn), args); }
#line 2793 "../.././gcc/cp/call.c"
if ((((enum tree_code )((fn)->common).code)) == TEMPLATE_ID_EXPR){
fn = (((fn)->exp).operands[0]); }
#line 2795 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
error("no matching function for call to %<%D(%A)%>", (((((((((enum tree_code )((fn)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fn)))->function)):(fn))))->decl_minimal).name), args); }else{
error("call of overloaded %<%D(%A)%> is ambiguous", (((((((((enum tree_code )((fn)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fn)))->function)):(fn))))->decl_minimal).name), args); }
#line 2801 "../.././gcc/cp/call.c"
if (candidates){
print_z_candidates(candidates); }
#line 2803 "../.././gcc/cp/call.c"
result = global_trees[TI_ERROR_MARK]; } }else{
result = build_over_call(cand, ((1 << 0) | (1 << 1))); }
#line 2809 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 2809 "../.././gcc/cp/call.c"

#line 2809 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 2809 "../.././gcc/cp/call.c"

#line 2809 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 2809 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 2811 "../.././gcc/cp/call.c"
return result; }
 
# 2712 "../.././gcc/cp/call.c" 
# 2824 "../.././gcc/cp/call.c" 
 tree build_operator_new_call( tree fnname,  tree args,  tree *size,  tree *cookie_size)  {

#line 2825 "../.././gcc/cp/call.c"

#line 2825 "../.././gcc/cp/call.c"
 tree fns;
#line 2826 "../.././gcc/cp/call.c"

#line 2826 "../.././gcc/cp/call.c"
struct z_candidate *candidates;
#line 2827 "../.././gcc/cp/call.c"

#line 2827 "../.././gcc/cp/call.c"
struct z_candidate *cand;
#line 2828 "../.././gcc/cp/call.c"

#line 2828 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 2830 "../.././gcc/cp/call.c"
args = tree_cons_stat((( tree )(((void *)0))), (*size), args); 
#line 2831 "../.././gcc/cp/call.c"
args = resolve_args(args); 
#line 2832 "../.././gcc/cp/call.c"
if (args == global_trees[TI_ERROR_MARK]){
return args; }
#line 2845 "../.././gcc/cp/call.c"
fns = lookup_function_nonclass(fnname, args, 0); 
#line 2848 "../.././gcc/cp/call.c"
cand = perform_overload_resolution(fns, args, (&candidates), (&any_viable_p)); 
#line 2852 "../.././gcc/cp/call.c"
if ((!cand)){
{ 
#line 2859 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
error("no matching function for call to %<%D(%A)%>", (((((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns))))->decl_minimal).name), args); }else{
error("call of overloaded %<%D(%A)%> is ambiguous", (((((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns))))->decl_minimal).name), args); }
#line 2860 "../.././gcc/cp/call.c"
if (candidates){
print_z_candidates(candidates); }
#line 2862 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 2868 "../.././gcc/cp/call.c"
if ((*cookie_size)){
{ 
#line 2870 "../.././gcc/cp/call.c"

#line 2870 "../.././gcc/cp/call.c"
unsigned char use_cookie = 1;
#line 2871 "../.././gcc/cp/call.c"
if ((!(flag_abi_version == 0 || flag_abi_version >= (2)))){
{ 
#line 2873 "../.././gcc/cp/call.c"

#line 2873 "../.././gcc/cp/call.c"
 tree placement = (((args)->common).chain);
#line 2877 "../.././gcc/cp/call.c"
if (placement && (!(((placement)->common).chain)) && comptypes((((((((placement)->list).value))->common).type)), (global_trees[TI_PTR_TYPE]), 0)){
use_cookie = 0; }} }else{
{ 
#line 2884 "../.././gcc/cp/call.c"

#line 2884 "../.././gcc/cp/call.c"
 tree arg_types;
#line 2886 "../.././gcc/cp/call.c"
arg_types = (((((((cand->fn))->common).type))->type).values); 
#line 2888 "../.././gcc/cp/call.c"
arg_types = (((arg_types)->common).chain); 
#line 2890 "../.././gcc/cp/call.c"
if (arg_types && (((arg_types)->common).chain) == global_trees[TI_VOID_LIST_NODE] && comptypes(((((arg_types)->list).value)), (global_trees[TI_PTR_TYPE]), 0)){
use_cookie = 0; }} }
#line 2897 "../.././gcc/cp/call.c"
if (use_cookie){
{ 
#line 2900 "../.././gcc/cp/call.c"
(*size) = size_binop(PLUS_EXPR, (*size), (*cookie_size)); 
#line 2902 "../.././gcc/cp/call.c"
(((args)->list).value) = (*size); } }else{
(*cookie_size) = (( tree )(((void *)0))); }} }
#line 2909 "../.././gcc/cp/call.c"
return build_over_call(cand, ((1 << 0) | (1 << 1))); }
 
#line 2913 "../.././gcc/cp/call.c"
static  tree build_object_call( tree obj,  tree args)  {

#line 2914 "../.././gcc/cp/call.c"

#line 2914 "../.././gcc/cp/call.c"
struct z_candidate *candidates = 0,*cand;
#line 2915 "../.././gcc/cp/call.c"

#line 2915 "../.././gcc/cp/call.c"
 tree fns,convs,mem_args = (( tree )(((void *)0)));
#line 2916 "../.././gcc/cp/call.c"

#line 2916 "../.././gcc/cp/call.c"
 tree type = (((obj)->common).type);
#line 2917 "../.././gcc/cp/call.c"

#line 2917 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 2918 "../.././gcc/cp/call.c"

#line 2918 "../.././gcc/cp/call.c"
 tree result = (( tree )(((void *)0)));
#line 2919 "../.././gcc/cp/call.c"

#line 2919 "../.././gcc/cp/call.c"
void *p;
#line 2921 "../.././gcc/cp/call.c"
if (((((enum tree_code )((type)->common).code)) == RECORD_TYPE && (((type)->type).lang_specific) && ((((&((((type)->type).lang_specific)->u).c))->ptrmemfunc_flag)))){
{ 
#line 2925 "../.././gcc/cp/call.c"
error("pointer-to-member function %E cannot be called without an object; consider using .* or ->*", obj); 
#line 2926 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 2929 "../.././gcc/cp/call.c"
if ((((type)->type).binfo)){
{ 
#line 2931 "../.././gcc/cp/call.c"
fns = lookup_fnfields((((type)->type).binfo), (operator_name_info[((int )(CALL_EXPR))].identifier), 1); 
#line 2932 "../.././gcc/cp/call.c"
if (fns == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }} }else{
fns = (( tree )(((void *)0))); }
#line 2938 "../.././gcc/cp/call.c"
args = resolve_args(args); 
#line 2940 "../.././gcc/cp/call.c"
if (args == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 2944 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 2946 "../.././gcc/cp/call.c"
if (fns){
{ 
#line 2948 "../.././gcc/cp/call.c"

#line 2948 "../.././gcc/cp/call.c"
 tree base = (((((((((struct tree_baselink *)(fns)))->binfo))))->common).type);
#line 2949 "../.././gcc/cp/call.c"
mem_args = tree_cons_stat((( tree )(((void *)0))), build_this(obj), args); 
#line 2951 "../.././gcc/cp/call.c"
for(fns = (((((struct tree_baselink *)(fns)))->functions));fns;fns = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((fns)->common).chain):(( tree )(((void *)0)))))) { { 
#line 2953 "../.././gcc/cp/call.c"

#line 2953 "../.././gcc/cp/call.c"
 tree fn = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns)));
#line 2954 "../.././gcc/cp/call.c"
if ((((enum tree_code )((fn)->common).code)) == TEMPLATE_DECL){
add_template_candidate((&candidates), fn, base, (( tree )(((void *)0))), mem_args, (( tree )(((void *)0))), (((type)->type).binfo), (((type)->type).binfo), ((1 << 0) | (1 << 1)), DEDUCE_CALL); }else{
add_function_candidate((&candidates), fn, base, mem_args, (((type)->type).binfo), (((type)->type).binfo), ((1 << 0) | (1 << 1))); }} } } }
#line 2967 "../.././gcc/cp/call.c"
convs = lookup_conversions(type); 
#line 2969 "../.././gcc/cp/call.c"
for(;convs;convs = (((convs)->common).chain)) { { 
#line 2971 "../.././gcc/cp/call.c"

#line 2971 "../.././gcc/cp/call.c"
 tree fns = (((convs)->list).value);
#line 2972 "../.././gcc/cp/call.c"

#line 2972 "../.././gcc/cp/call.c"
 tree totype = ((((((((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns))))->common).type))->common).type);
#line 2974 "../.././gcc/cp/call.c"
if (((((enum tree_code )((totype)->common).code)) == POINTER_TYPE && (((enum tree_code )(((((totype)->common).type))->common).code)) == FUNCTION_TYPE) || ((((enum tree_code )((totype)->common).code)) == REFERENCE_TYPE && (((enum tree_code )(((((totype)->common).type))->common).code)) == FUNCTION_TYPE) || ((((enum tree_code )((totype)->common).code)) == REFERENCE_TYPE && (((enum tree_code )(((((totype)->common).type))->common).code)) == POINTER_TYPE && (((enum tree_code )((((((((totype)->common).type))->common).type))->common).code)) == FUNCTION_TYPE)){
for(;fns;fns = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((fns)->common).chain):(( tree )(((void *)0)))))) { { 
#line 2983 "../.././gcc/cp/call.c"

#line 2983 "../.././gcc/cp/call.c"
 tree fn = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns)));
#line 2984 "../.././gcc/cp/call.c"
if ((((enum tree_code )((fn)->common).code)) == TEMPLATE_DECL){
add_template_conv_candidate((&candidates), fn, obj, args, totype, (( tree )(((void *)0))), (( tree )(((void *)0)))); }else{
add_conv_candidate((&candidates), fn, obj, args, (( tree )(((void *)0))), (( tree )(((void *)0)))); }} } }} } 
#line 2996 "../.././gcc/cp/call.c"
candidates = splice_viable(candidates, pedantic, (&any_viable_p)); 
#line 2997 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
{ 
#line 2999 "../.././gcc/cp/call.c"
error("no match for call to %<(%T) (%A)%>", (((obj)->common).type), args); 
#line 3000 "../.././gcc/cp/call.c"
print_z_candidates(candidates); 
#line 3001 "../.././gcc/cp/call.c"
result = global_trees[TI_ERROR_MARK]; } }else{
{ 
#line 3005 "../.././gcc/cp/call.c"
cand = tourney(candidates); 
#line 3006 "../.././gcc/cp/call.c"
if (cand == 0){
{ 
#line 3008 "../.././gcc/cp/call.c"
error("call of %<(%T) (%A)%> is ambiguous", (((obj)->common).type), args); 
#line 3009 "../.././gcc/cp/call.c"
print_z_candidates(candidates); 
#line 3010 "../.././gcc/cp/call.c"
result = global_trees[TI_ERROR_MARK]; } }else{
if ((((enum tree_code )(((cand->fn))->common).code)) == FUNCTION_DECL && (((((((((cand->fn))->decl_minimal).name))->common).lang_flag_2)?(((((cand->fn))->decl_common).lang_specific)->u).f.operator_code:ERROR_MARK)) == CALL_EXPR){
result = build_over_call(cand, ((1 << 0) | (1 << 1))); }else{
{ 
#line 3020 "../.././gcc/cp/call.c"
obj = convert_like_real(((cand->convs)[0]), (obj), ((cand->fn)), ((-1)), 0, 1, 0); 
#line 3021 "../.././gcc/cp/call.c"
obj = convert_from_reference(obj); 
#line 3022 "../.././gcc/cp/call.c"
result = build_function_call(obj, args); } }}} }
#line 3027 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 3027 "../.././gcc/cp/call.c"

#line 3027 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 3027 "../.././gcc/cp/call.c"

#line 3027 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 3027 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 3029 "../.././gcc/cp/call.c"
return result; }
 
#line 3035 "../.././gcc/cp/call.c"
static void op_error(enum tree_code code, enum tree_code code2,  tree arg1,  tree arg2,  tree arg3, const char *problem)  {

#line 3036 "../.././gcc/cp/call.c"

#line 3036 "../.././gcc/cp/call.c"
const char *opname;
#line 3038 "../.././gcc/cp/call.c"
if (code == MODIFY_EXPR){
opname = assignment_operator_name_info[code2].name; }else{
opname = operator_name_info[code].name; }
#line 3043 "../.././gcc/cp/call.c"
switch(code){ { 
#line 3047 "../.././gcc/cp/call.c"
case COND_EXPR: error("%s for ternary %<operator?:%> in %<%E ? %E : %E%>", problem, arg1, arg2, arg3); 
#line 3048 "../.././gcc/cp/call.c"
break; 
#line 3050 "../.././gcc/cp/call.c"
case POSTINCREMENT_EXPR: case POSTDECREMENT_EXPR: error("%s for %<operator%s%> in %<%E%s%>", problem, opname, arg1, opname); 
#line 3053 "../.././gcc/cp/call.c"
break; 
#line 3055 "../.././gcc/cp/call.c"
case ARRAY_REF: error("%s for %<operator[]%> in %<%E[%E]%>", problem, arg1, arg2); 
#line 3057 "../.././gcc/cp/call.c"
break; 
#line 3059 "../.././gcc/cp/call.c"
case REALPART_EXPR: case IMAGPART_EXPR: error("%s for %qs in %<%s %E%>", problem, opname, opname, arg1); 
#line 3062 "../.././gcc/cp/call.c"
break; 
#line 3064 "../.././gcc/cp/call.c"
default: if (arg2){
error("%s for %<operator%s%> in %<%E %s %E%>", problem, opname, arg1, opname, arg2); }else{
error("%s for %<operator%s%> in %<%s%E%>", problem, opname, opname, arg1); }
#line 3071 "../.././gcc/cp/call.c"
break; } } }
 
#line 3080 "../.././gcc/cp/call.c"
static  conversion *conditional_conversion( tree e1,  tree e2)  {

#line 3081 "../.././gcc/cp/call.c"

#line 3081 "../.././gcc/cp/call.c"
 tree t1 = non_reference((((e1)->common).type));
#line 3082 "../.././gcc/cp/call.c"

#line 3082 "../.././gcc/cp/call.c"
 tree t2 = non_reference((((e2)->common).type));
#line 3083 "../.././gcc/cp/call.c"

#line 3083 "../.././gcc/cp/call.c"
 conversion *conv;
#line 3084 "../.././gcc/cp/call.c"

#line 3084 "../.././gcc/cp/call.c"
unsigned char good_base;
#line 3092 "../.././gcc/cp/call.c"
if (real_lvalue_p(e2)){
{ 
#line 3098 "../.././gcc/cp/call.c"
conv = implicit_conversion(build_reference_type(t2), t1, e1, 0, (1 << 7)); 
#line 3099 "../.././gcc/cp/call.c"
if (conv){
return conv; }} }
# 2845 "../.././gcc/cp/call.c" 
# 3114 "../.././gcc/cp/call.c" 
if (((((((enum tree_code )((t1)->common).code))) == RECORD_TYPE || ((((enum tree_code )((t1)->common).code))) == UNION_TYPE) && (((t1)->type).lang_flag_5)) && ((((((enum tree_code )((t2)->common).code))) == RECORD_TYPE || ((((enum tree_code )((t2)->common).code))) == UNION_TYPE) && (((t2)->type).lang_flag_5)) && ((good_base = (lookup_base((t1), (t2), ba_any, (((void *)0))) != (( tree )(((void *)0))))) || (lookup_base((t2), (t1), ba_any, (((void *)0))) != (( tree )(((void *)0)))))){
{ 
#line 3128 "../.././gcc/cp/call.c"
if (good_base && at_least_as_qualified_p(t2, t1)){
{ 
#line 3119 "../.././gcc/cp/call.c"
conv = build_identity_conv(t1, e1); 
#line 3120 "../.././gcc/cp/call.c"
if ((!comptypes(((((t1)->type).main_variant)), ((((t2)->type).main_variant)), 0))){
conv = build_conv(ck_base, t2, conv); }else{
conv = build_conv(ck_rvalue, t2, conv); }
#line 3125 "../.././gcc/cp/call.c"
return conv; } }else{
return (((void *)0)); }} }else{
return implicit_conversion(t2, t1, e1, 0, ((1 << 0) | (1 << 1))); }}
 
#line 3144 "../.././gcc/cp/call.c"
 tree build_conditional_expr( tree arg1,  tree arg2,  tree arg3)  {

#line 3145 "../.././gcc/cp/call.c"

#line 3145 "../.././gcc/cp/call.c"
 tree arg2_type;
#line 3146 "../.././gcc/cp/call.c"

#line 3146 "../.././gcc/cp/call.c"
 tree arg3_type;
#line 3147 "../.././gcc/cp/call.c"

#line 3147 "../.././gcc/cp/call.c"
 tree result = (( tree )(((void *)0)));
#line 3148 "../.././gcc/cp/call.c"

#line 3148 "../.././gcc/cp/call.c"
 tree result_type = (( tree )(((void *)0)));
#line 3149 "../.././gcc/cp/call.c"

#line 3149 "../.././gcc/cp/call.c"
unsigned char lvalue_p = 1;
#line 3150 "../.././gcc/cp/call.c"

#line 3150 "../.././gcc/cp/call.c"
struct z_candidate *candidates = 0;
#line 3151 "../.././gcc/cp/call.c"

#line 3151 "../.././gcc/cp/call.c"
struct z_candidate *cand;
#line 3152 "../.././gcc/cp/call.c"

#line 3152 "../.././gcc/cp/call.c"
void *p;
#line 3158 "../.././gcc/cp/call.c"
if ((!arg2)){
{ 
#line 3164 "../.././gcc/cp/call.c"
if (pedantic){
pedwarn("ISO C++ forbids omitting the middle term of a ?: expression"); }
#line 3164 "../.././gcc/cp/call.c"
if (real_lvalue_p(arg1)){
arg2 = arg1 = stabilize_reference(arg1); }else{
arg2 = arg1 = save_expr(arg1); }} }
#line 3174 "../.././gcc/cp/call.c"
arg1 = perform_implicit_conversion(global_trees[TI_BOOLEAN_TYPE], arg1); 
#line 3178 "../.././gcc/cp/call.c"
if (((arg1) == global_trees[TI_ERROR_MARK] || ((arg1) && ((((arg1))->common).type) == global_trees[TI_ERROR_MARK])) || ((arg2) == global_trees[TI_ERROR_MARK] || ((arg2) && ((((arg2))->common).type) == global_trees[TI_ERROR_MARK])) || ((arg3) == global_trees[TI_ERROR_MARK] || ((arg3) && ((((arg3))->common).type) == global_trees[TI_ERROR_MARK]))){
return global_trees[TI_ERROR_MARK]; }
#line 3191 "../.././gcc/cp/call.c"
arg2_type = (((arg2)->common).type); 
#line 3192 "../.././gcc/cp/call.c"
arg3_type = (((arg3)->common).type); 
#line 3193 "../.././gcc/cp/call.c"
if (((((enum tree_code )((arg2_type)->common).code)) == VOID_TYPE) || ((((enum tree_code )((arg3_type)->common).code)) == VOID_TYPE)){
{ 
#line 3200 "../.././gcc/cp/call.c"
if ((!((((enum tree_code )((arg2_type)->common).code)) == VOID_TYPE))){
arg2 = decay_conversion(arg2); }
#line 3200 "../.././gcc/cp/call.c"
if ((!((((enum tree_code )((arg3_type)->common).code)) == VOID_TYPE))){
arg3 = decay_conversion(arg3); }
#line 3202 "../.././gcc/cp/call.c"
arg2_type = (((arg2)->common).type); 
#line 3203 "../.././gcc/cp/call.c"
arg3_type = (((arg3)->common).type); 
# 3191 "../.././gcc/cp/call.c" 
# 3219 "../.././gcc/cp/call.c" 
if ((((enum tree_code )((arg2)->common).code)) == THROW_EXPR && (((enum tree_code )((arg3)->common).code)) != THROW_EXPR){
{ 
#line 3224 "../.././gcc/cp/call.c"
if ((!((((enum tree_code )((arg3_type)->common).code)) == VOID_TYPE))){
arg3 = force_rvalue(arg3); }
#line 3224 "../.././gcc/cp/call.c"
arg3_type = (((arg3)->common).type); 
#line 3225 "../.././gcc/cp/call.c"
result_type = arg3_type; } }else{
if ((((enum tree_code )((arg2)->common).code)) != THROW_EXPR && (((enum tree_code )((arg3)->common).code)) == THROW_EXPR){
{ 
#line 3232 "../.././gcc/cp/call.c"
if ((!((((enum tree_code )((arg2_type)->common).code)) == VOID_TYPE))){
arg2 = force_rvalue(arg2); }
#line 3232 "../.././gcc/cp/call.c"
arg2_type = (((arg2)->common).type); 
#line 3233 "../.././gcc/cp/call.c"
result_type = arg2_type; } }else{
if (((((enum tree_code )((arg2_type)->common).code)) == VOID_TYPE) && ((((enum tree_code )((arg3_type)->common).code)) == VOID_TYPE)){
result_type = global_trees[TI_VOID_TYPE]; }else{
{ 
#line 3240 "../.././gcc/cp/call.c"
error("%qE has type %<void%> and is not a throw-expression", (((((enum tree_code )((arg2_type)->common).code)) == VOID_TYPE)?arg2:arg3)); 
#line 3241 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }}}
#line 3244 "../.././gcc/cp/call.c"
lvalue_p = 0; 
#line 3245 "../.././gcc/cp/call.c"
goto valid_operands; } }else{
if ((!comptypes((arg2_type), (arg3_type), 0)) && (((((((enum tree_code )((arg2_type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((arg2_type)->common).code))) == UNION_TYPE) && (((arg2_type)->type).lang_flag_5)) || ((((((enum tree_code )((arg3_type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((arg3_type)->common).code))) == UNION_TYPE) && (((arg3_type)->type).lang_flag_5)))){
{ 
#line 3255 "../.././gcc/cp/call.c"

#line 3255 "../.././gcc/cp/call.c"
 conversion *conv2;
#line 3256 "../.././gcc/cp/call.c"

#line 3256 "../.././gcc/cp/call.c"
 conversion *conv3;
#line 3259 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 3261 "../.././gcc/cp/call.c"
conv2 = conditional_conversion(arg2, arg3); 
#line 3262 "../.././gcc/cp/call.c"
conv3 = conditional_conversion(arg3, arg2); 
#line 3273 "../.././gcc/cp/call.c"
if ((conv2 && (!(conv2->bad_p)) && conv3 && (!(conv3->bad_p))) || (conv2 && (conv2->kind) == ck_ambig) || (conv3 && (conv3->kind) == ck_ambig)){
{ 
#line 3278 "../.././gcc/cp/call.c"
error("operands to ?: have different types"); 
#line 3279 "../.././gcc/cp/call.c"
result = global_trees[TI_ERROR_MARK]; } }else{
if (conv2 && ((!(conv2->bad_p)) || (!conv3))){
{ 
#line 3283 "../.././gcc/cp/call.c"
arg2 = convert_like_real((conv2), (arg2), (( tree )(((void *)0))), 0, 0, 1, 0); 
#line 3284 "../.././gcc/cp/call.c"
arg2 = convert_from_reference(arg2); 
#line 3285 "../.././gcc/cp/call.c"
arg2_type = (((arg2)->common).type); } }else{
if (conv3 && ((!(conv3->bad_p)) || (!conv2))){
{ 
#line 3289 "../.././gcc/cp/call.c"
arg3 = convert_like_real((conv3), (arg3), (( tree )(((void *)0))), 0, 0, 1, 0); 
#line 3290 "../.././gcc/cp/call.c"
arg3 = convert_from_reference(arg3); 
#line 3291 "../.././gcc/cp/call.c"
arg3_type = (((arg3)->common).type); } }}}
#line 3295 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 3295 "../.././gcc/cp/call.c"

#line 3295 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 3295 "../.././gcc/cp/call.c"

#line 3295 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 3295 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 3297 "../.././gcc/cp/call.c"
if (result){
return result; }
# 3273 "../.././gcc/cp/call.c" 
# 3315 "../.././gcc/cp/call.c" 
if ((conv2 || conv3) && ((((((enum tree_code )((arg2_type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((arg2_type)->common).code))) == UNION_TYPE) && (((arg2_type)->type).lang_flag_5)) && (((((arg2_type)->common).readonly_flag) * 0x1) | ((((arg2_type)->common).volatile_flag) * 0x2) | ((((arg2_type)->type).restrict_flag) * 0x4)) != (((((arg3_type)->common).readonly_flag) * 0x1) | ((((arg3_type)->common).volatile_flag) * 0x2) | ((((arg3_type)->type).restrict_flag) * 0x4))){
arg2_type = arg3_type = cp_build_qualified_type_real((arg2_type), ((((((arg2_type)->common).readonly_flag) * 0x1) | ((((arg2_type)->common).volatile_flag) * 0x2) | ((((arg2_type)->type).restrict_flag) * 0x4)) | (((((arg3_type)->common).readonly_flag) * 0x1) | ((((arg3_type)->common).volatile_flag) * 0x2) | ((((arg3_type)->type).restrict_flag) * 0x4))), tf_error | tf_warning); }} }}
#line 3328 "../.././gcc/cp/call.c"
if (real_lvalue_p(arg2) && real_lvalue_p(arg3) && comptypes((arg2_type), (arg3_type), 0)){
{ 
#line 3332 "../.././gcc/cp/call.c"
result_type = arg2_type; 
#line 3333 "../.././gcc/cp/call.c"
goto valid_operands; } }
#line 3343 "../.././gcc/cp/call.c"
lvalue_p = 0; 
#line 3344 "../.././gcc/cp/call.c"
if ((!comptypes((arg2_type), (arg3_type), 0)) && (((((((enum tree_code )((arg2_type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((arg2_type)->common).code))) == UNION_TYPE) && (((arg2_type)->type).lang_flag_5)) || ((((((enum tree_code )((arg3_type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((arg3_type)->common).code))) == UNION_TYPE) && (((arg3_type)->type).lang_flag_5)))){
{ 
#line 3347 "../.././gcc/cp/call.c"

#line 3347 "../.././gcc/cp/call.c"
 tree args[3];
#line 3348 "../.././gcc/cp/call.c"

#line 3348 "../.././gcc/cp/call.c"
 conversion *conv;
#line 3349 "../.././gcc/cp/call.c"

#line 3349 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 3354 "../.././gcc/cp/call.c"
args[0] = arg2; 
#line 3355 "../.././gcc/cp/call.c"
args[1] = arg3; 
#line 3356 "../.././gcc/cp/call.c"
args[2] = arg1; 
#line 3357 "../.././gcc/cp/call.c"
add_builtin_candidates((&candidates), COND_EXPR, NOP_EXPR, (operator_name_info[((int )(COND_EXPR))].identifier), args, ((1 << 0) | (1 << 1))); 
#line 3368 "../.././gcc/cp/call.c"
candidates = splice_viable(candidates, pedantic, (&any_viable_p)); 
#line 3369 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
{ 
#line 3371 "../.././gcc/cp/call.c"
op_error(COND_EXPR, NOP_EXPR, arg1, arg2, arg3, "no match"); 
#line 3372 "../.././gcc/cp/call.c"
print_z_candidates(candidates); 
#line 3373 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 3375 "../.././gcc/cp/call.c"
cand = tourney(candidates); 
#line 3376 "../.././gcc/cp/call.c"
if ((!cand)){
{ 
#line 3378 "../.././gcc/cp/call.c"
op_error(COND_EXPR, NOP_EXPR, arg1, arg2, arg3, "no match"); 
#line 3379 "../.././gcc/cp/call.c"
print_z_candidates(candidates); 
#line 3380 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 3388 "../.././gcc/cp/call.c"
conv = (cand->convs)[0]; 
#line 3389 "../.././gcc/cp/call.c"
arg1 = convert_like_real((conv), (arg1), (( tree )(((void *)0))), 0, 0, 1, 0); 
#line 3390 "../.././gcc/cp/call.c"
conv = (cand->convs)[1]; 
#line 3391 "../.././gcc/cp/call.c"
arg2 = convert_like_real((conv), (arg2), (( tree )(((void *)0))), 0, 0, 1, 0); 
#line 3392 "../.././gcc/cp/call.c"
conv = (cand->convs)[2]; 
#line 3393 "../.././gcc/cp/call.c"
arg3 = convert_like_real((conv), (arg3), (( tree )(((void *)0))), 0, 0, 1, 0); } }
# 3343 "../.././gcc/cp/call.c" 
# 3407 "../.././gcc/cp/call.c" 
arg2 = force_rvalue(arg2); 
#line 3408 "../.././gcc/cp/call.c"
if ((!((((((enum tree_code )((arg2_type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((arg2_type)->common).code))) == UNION_TYPE) && (((arg2_type)->type).lang_flag_5)))){
arg2_type = (((arg2)->common).type); }
#line 3411 "../.././gcc/cp/call.c"
arg3 = force_rvalue(arg3); 
#line 3412 "../.././gcc/cp/call.c"
if ((!((((((enum tree_code )((arg2_type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((arg2_type)->common).code))) == UNION_TYPE) && (((arg2_type)->type).lang_flag_5)))){
arg3_type = (((arg3)->common).type); }
#line 3415 "../.././gcc/cp/call.c"
if (arg2 == global_trees[TI_ERROR_MARK] || arg3 == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 3424 "../.././gcc/cp/call.c"
if (comptypes((arg2_type), (arg3_type), 0)){
result_type = arg2_type; }else{
if (((((((enum tree_code )((arg2_type)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((arg2_type)->common).code)) == CHAR_TYPE || (((enum tree_code )((arg2_type)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((arg2_type)->common).code)) == REAL_TYPE) || (((enum tree_code )((arg2_type)->common).code)) == ENUMERAL_TYPE) && ((((((enum tree_code )((arg3_type)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((arg3_type)->common).code)) == CHAR_TYPE || (((enum tree_code )((arg3_type)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((arg3_type)->common).code)) == REAL_TYPE) || (((enum tree_code )((arg3_type)->common).code)) == ENUMERAL_TYPE)){
{ 
#line 3438 "../.././gcc/cp/call.c"
result_type = type_after_usual_arithmetic_conversions(arg2_type, arg3_type); 
#line 3440 "../.././gcc/cp/call.c"
if ((((enum tree_code )((arg2_type)->common).code)) == ENUMERAL_TYPE && (((enum tree_code )((arg3_type)->common).code)) == ENUMERAL_TYPE){
warning(0, "enumeral mismatch in conditional expression: %qT vs %qT", arg2_type, arg3_type); }else{
if (extra_warnings && (((((enum tree_code )((arg2_type)->common).code)) == ENUMERAL_TYPE && (!comptypes((arg3_type), (type_promotes_to(arg2_type)), 0))) || ((((enum tree_code )((arg3_type)->common).code)) == ENUMERAL_TYPE && (!comptypes((arg2_type), (type_promotes_to(arg3_type)), 0))))){
warning(0, "enumeral and non-enumeral type in conditional expression"); }}
#line 3451 "../.././gcc/cp/call.c"
arg2 = perform_implicit_conversion(result_type, arg2); 
#line 3452 "../.././gcc/cp/call.c"
arg3 = perform_implicit_conversion(result_type, arg3); } }else{
if ((null_ptr_cst_p(arg2) && (((((enum tree_code )((arg3_type)->common).code)) == POINTER_TYPE) || (((((enum tree_code )((arg3_type)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((arg3_type)->common).code)) == RECORD_TYPE && (((arg3_type)->type).lang_specific) && ((((&((((arg3_type)->type).lang_specific)->u).c))->ptrmemfunc_flag)))))) || (null_ptr_cst_p(arg3) && (((((enum tree_code )((arg2_type)->common).code)) == POINTER_TYPE) || (((((enum tree_code )((arg2_type)->common).code)) == OFFSET_TYPE) || ((((enum tree_code )((arg2_type)->common).code)) == RECORD_TYPE && (((arg2_type)->type).lang_specific) && ((((&((((arg2_type)->type).lang_specific)->u).c))->ptrmemfunc_flag)))))) || (((((enum tree_code )((arg2_type)->common).code)) == POINTER_TYPE) && ((((enum tree_code )((arg3_type)->common).code)) == POINTER_TYPE)) || (((((enum tree_code )((arg2_type)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((arg3_type)->common).code)) == OFFSET_TYPE)) || (((((enum tree_code )((arg2_type)->common).code)) == RECORD_TYPE && (((arg2_type)->type).lang_specific) && ((((&((((arg2_type)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && ((((enum tree_code )((arg3_type)->common).code)) == RECORD_TYPE && (((arg3_type)->type).lang_specific) && ((((&((((arg3_type)->type).lang_specific)->u).c))->ptrmemfunc_flag))))){
{ 
#line 3479 "../.././gcc/cp/call.c"
result_type = composite_pointer_type(arg2_type, arg3_type, arg2, arg3, "conditional expression"); 
#line 3480 "../.././gcc/cp/call.c"
if (result_type == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 3482 "../.././gcc/cp/call.c"
arg2 = perform_implicit_conversion(result_type, arg2); 
#line 3483 "../.././gcc/cp/call.c"
arg3 = perform_implicit_conversion(result_type, arg3); } }}}
#line 3486 "../.././gcc/cp/call.c"
if ((!result_type)){
{ 
#line 3488 "../.././gcc/cp/call.c"
error("operands to ?: have different types"); 
#line 3489 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 3492 "../.././gcc/cp/call.c"
valid_operands:  result = fold_if_not_in_template(build3_stat(COND_EXPR, result_type, arg1, arg2, arg3)); 
#line 3501 "../.././gcc/cp/call.c"
if ((!lvalue_p) && ((((((enum tree_code )(((((result)->common).type))->common).code))) == RECORD_TYPE || ((((enum tree_code )(((((result)->common).type))->common).code))) == UNION_TYPE) && ((((((result)->common).type))->type).lang_flag_5))){
result = get_target_expr(result); }
#line 3506 "../.././gcc/cp/call.c"
if ((!lvalue_p) && real_lvalue_p(result)){
result = rvalue(result); }
#line 3509 "../.././gcc/cp/call.c"
return result; }
 
#line 3517 "../.././gcc/cp/call.c"
static  tree prep_operand( tree operand)  {

#line 3526 "../.././gcc/cp/call.c"
if (operand){
{ 
#line 3524 "../.././gcc/cp/call.c"
if (((((((enum tree_code )(((((operand)->common).type))->common).code))) == RECORD_TYPE || ((((enum tree_code )(((((operand)->common).type))->common).code))) == UNION_TYPE) && ((((((operand)->common).type))->type).lang_flag_5)) && (((((&(((((((operand)->common).type))->type).lang_specific)->u).c))->use_template)) & 1)){
instantiate_class_template(((((((operand)->common).type))->type).main_variant)); }} }
#line 3526 "../.././gcc/cp/call.c"
return operand; }
 
# 3470 "../.././gcc/cp/call.c" 
# 3544 "../.././gcc/cp/call.c" 
static void add_candidates( tree fns,  tree args,  tree explicit_targs, unsigned char template_only,  tree conversion_path,  tree access_path, int flags, struct z_candidate **candidates)  {

#line 3545 "../.././gcc/cp/call.c"

#line 3545 "../.././gcc/cp/call.c"
 tree ctype;
#line 3546 "../.././gcc/cp/call.c"

#line 3546 "../.././gcc/cp/call.c"
 tree non_static_args;
#line 3548 "../.././gcc/cp/call.c"
ctype = (conversion_path?((((conversion_path))->common).type):(( tree )(((void *)0)))); 
#line 3550 "../.././gcc/cp/call.c"
non_static_args = (( tree )(((void *)0))); 
#line 3552 "../.././gcc/cp/call.c"
while(fns) { { 
#line 3554 "../.././gcc/cp/call.c"

#line 3554 "../.././gcc/cp/call.c"
 tree fn;
#line 3555 "../.././gcc/cp/call.c"

#line 3555 "../.././gcc/cp/call.c"
 tree fn_args;
#line 3557 "../.././gcc/cp/call.c"
fn = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fns)))->function)):(fns))); 
#line 3559 "../.././gcc/cp/call.c"
if (((((enum tree_code )(((((fn)->common).type))->common).code)) == METHOD_TYPE)){
{ 
#line 3567 "../.././gcc/cp/call.c"
if ((!non_static_args)){
non_static_args = tree_cons_stat((( tree )(((void *)0))), build_this((((args)->list).value)), (((args)->common).chain)); }
#line 3567 "../.././gcc/cp/call.c"
fn_args = non_static_args; } }else{
fn_args = args; }
#line 3573 "../.././gcc/cp/call.c"
if ((((enum tree_code )((fn)->common).code)) == TEMPLATE_DECL){
add_template_candidate(candidates, fn, ctype, explicit_targs, fn_args, (( tree )(((void *)0))), access_path, conversion_path, flags, DEDUCE_CALL); }else{
if ((!template_only)){
add_function_candidate(candidates, fn, ctype, fn_args, access_path, conversion_path, flags); }}
#line 3592 "../.././gcc/cp/call.c"
fns = ((((((enum tree_code )((fns)->common).code)) == OVERLOAD)?(((fns)->common).chain):(( tree )(((void *)0))))); } } }
 
#line 3598 "../.././gcc/cp/call.c"
 tree build_new_op(enum tree_code code, int flags,  tree arg1,  tree arg2,  tree arg3, unsigned char *overloaded_p)  {

#line 3599 "../.././gcc/cp/call.c"

#line 3599 "../.././gcc/cp/call.c"
struct z_candidate *candidates = 0,*cand;
#line 3600 "../.././gcc/cp/call.c"

#line 3600 "../.././gcc/cp/call.c"
 tree arglist,fnname;
#line 3601 "../.././gcc/cp/call.c"

#line 3601 "../.././gcc/cp/call.c"
 tree args[3];
#line 3602 "../.././gcc/cp/call.c"

#line 3602 "../.././gcc/cp/call.c"
 tree result = (( tree )(((void *)0)));
#line 3603 "../.././gcc/cp/call.c"

#line 3603 "../.././gcc/cp/call.c"
unsigned char result_valid_p = 0;
#line 3604 "../.././gcc/cp/call.c"

#line 3604 "../.././gcc/cp/call.c"
enum tree_code code2 = NOP_EXPR;
#line 3605 "../.././gcc/cp/call.c"

#line 3605 "../.././gcc/cp/call.c"
 conversion *conv;
#line 3606 "../.././gcc/cp/call.c"

#line 3606 "../.././gcc/cp/call.c"
void *p;
#line 3607 "../.././gcc/cp/call.c"

#line 3607 "../.././gcc/cp/call.c"
unsigned char strict_p;
#line 3608 "../.././gcc/cp/call.c"

#line 3608 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 3610 "../.././gcc/cp/call.c"
if (((arg1) == global_trees[TI_ERROR_MARK] || ((arg1) && ((((arg1))->common).type) == global_trees[TI_ERROR_MARK])) || ((arg2) == global_trees[TI_ERROR_MARK] || ((arg2) && ((((arg2))->common).type) == global_trees[TI_ERROR_MARK])) || ((arg3) == global_trees[TI_ERROR_MARK] || ((arg3) && ((((arg3))->common).type) == global_trees[TI_ERROR_MARK]))){
return global_trees[TI_ERROR_MARK]; }
#line 3615 "../.././gcc/cp/call.c"
if (code == MODIFY_EXPR){
{ 
#line 3617 "../.././gcc/cp/call.c"
code2 = (((enum tree_code )((arg3)->common).code)); 
#line 3618 "../.././gcc/cp/call.c"
arg3 = (( tree )(((void *)0))); 
#line 3619 "../.././gcc/cp/call.c"
fnname = (assignment_operator_name_info[((int )(code2))].identifier); } }else{
fnname = (operator_name_info[((int )(code))].identifier); }
#line 3624 "../.././gcc/cp/call.c"
arg1 = prep_operand(arg1); 
#line 3626 "../.././gcc/cp/call.c"
switch(code){ { 
#line 3633 "../.././gcc/cp/call.c"
case NEW_EXPR: case VEC_NEW_EXPR: case VEC_DELETE_EXPR: case DELETE_EXPR: (fancy_abort("../.././gcc/cp/call.c", 3634, __FUNCTION__)); 
#line 3635 "../.././gcc/cp/call.c"
case CALL_EXPR: return build_object_call(arg1, arg2); 
#line 3638 "../.././gcc/cp/call.c"
default: break; } } 
#line 3642 "../.././gcc/cp/call.c"
arg2 = prep_operand(arg2); 
#line 3643 "../.././gcc/cp/call.c"
arg3 = prep_operand(arg3); 
#line 3645 "../.././gcc/cp/call.c"
if (code == COND_EXPR){
{ 
#line 3653 "../.././gcc/cp/call.c"
if (arg2 == (( tree )(((void *)0))) || (((enum tree_code )(((((arg2)->common).type))->common).code)) == VOID_TYPE || (((enum tree_code )(((((arg3)->common).type))->common).code)) == VOID_TYPE || ((!(((((((enum tree_code )(((((arg2)->common).type))->common).code))) == RECORD_TYPE || ((((enum tree_code )(((((arg2)->common).type))->common).code))) == UNION_TYPE) && ((((((arg2)->common).type))->type).lang_flag_5)) || (((enum tree_code )(((((arg2)->common).type))->common).code)) == ENUMERAL_TYPE)) && (!(((((((enum tree_code )(((((arg3)->common).type))->common).code))) == RECORD_TYPE || ((((enum tree_code )(((((arg3)->common).type))->common).code))) == UNION_TYPE) && ((((((arg3)->common).type))->type).lang_flag_5)) || (((enum tree_code )(((((arg3)->common).type))->common).code)) == ENUMERAL_TYPE)))){
goto builtin; }} }else{
if ((!(((((((enum tree_code )(((((arg1)->common).type))->common).code))) == RECORD_TYPE || ((((enum tree_code )(((((arg1)->common).type))->common).code))) == UNION_TYPE) && ((((((arg1)->common).type))->type).lang_flag_5)) || (((enum tree_code )(((((arg1)->common).type))->common).code)) == ENUMERAL_TYPE)) && ((!arg2) || (!(((((((enum tree_code )(((((arg2)->common).type))->common).code))) == RECORD_TYPE || ((((enum tree_code )(((((arg2)->common).type))->common).code))) == UNION_TYPE) && ((((((arg2)->common).type))->type).lang_flag_5)) || (((enum tree_code )(((((arg2)->common).type))->common).code)) == ENUMERAL_TYPE)))){
goto builtin; }}
#line 3658 "../.././gcc/cp/call.c"
if (code == POSTINCREMENT_EXPR || code == POSTDECREMENT_EXPR){
arg2 = global_trees[TI_INTEGER_ZERO]; }
#line 3661 "../.././gcc/cp/call.c"
arglist = (( tree )(((void *)0))); 
#line 3662 "../.././gcc/cp/call.c"
if (arg3){
arglist = tree_cons_stat((( tree )(((void *)0))), arg3, arglist); }
#line 3664 "../.././gcc/cp/call.c"
if (arg2){
arglist = tree_cons_stat((( tree )(((void *)0))), arg2, arglist); }
#line 3666 "../.././gcc/cp/call.c"
arglist = tree_cons_stat((( tree )(((void *)0))), arg1, arglist); 
#line 3669 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 3673 "../.././gcc/cp/call.c"
add_candidates(lookup_function_nonclass(fnname, arglist, 1), arglist, (( tree )(((void *)0))), 0, (( tree )(((void *)0))), (( tree )(((void *)0))), flags, (&candidates)); 
#line 3677 "../.././gcc/cp/call.c"
if (((((((enum tree_code )(((((arg1)->common).type))->common).code))) == RECORD_TYPE || ((((enum tree_code )(((((arg1)->common).type))->common).code))) == UNION_TYPE) && ((((((arg1)->common).type))->type).lang_flag_5))){
{ 
#line 3679 "../.././gcc/cp/call.c"

#line 3679 "../.././gcc/cp/call.c"
 tree fns;
#line 3681 "../.././gcc/cp/call.c"
fns = lookup_fnfields((((arg1)->common).type), fnname, 1); 
#line 3682 "../.././gcc/cp/call.c"
if (fns == global_trees[TI_ERROR_MARK]){
{ 
#line 3684 "../.././gcc/cp/call.c"
result = global_trees[TI_ERROR_MARK]; 
#line 3685 "../.././gcc/cp/call.c"
goto user_defined_result_ready; } }
#line 3687 "../.././gcc/cp/call.c"
if (fns){
add_candidates((((((struct tree_baselink *)(fns)))->functions)), arglist, (( tree )(((void *)0))), 0, (((((struct tree_baselink *)(fns)))->binfo)), ((((((arg1)->common).type))->type).binfo), flags, (&candidates)); }} }
#line 3699 "../.././gcc/cp/call.c"
if (code == COND_EXPR){
{ 
#line 3701 "../.././gcc/cp/call.c"
args[0] = arg2; 
#line 3702 "../.././gcc/cp/call.c"
args[1] = arg3; 
#line 3703 "../.././gcc/cp/call.c"
args[2] = arg1; } }else{
{ 
#line 3707 "../.././gcc/cp/call.c"
args[0] = arg1; 
#line 3708 "../.././gcc/cp/call.c"
args[1] = arg2; 
#line 3709 "../.././gcc/cp/call.c"
args[2] = (( tree )(((void *)0))); } }
#line 3712 "../.././gcc/cp/call.c"
add_builtin_candidates((&candidates), code, code2, fnname, args, flags); 
#line 3714 "../.././gcc/cp/call.c"
switch(code){ { 
#line 3724 "../.././gcc/cp/call.c"
case COMPOUND_EXPR: case ADDR_EXPR: strict_p = 1; 
#line 3725 "../.././gcc/cp/call.c"
break; 
#line 3727 "../.././gcc/cp/call.c"
default: strict_p = pedantic; 
#line 3729 "../.././gcc/cp/call.c"
break; } } 
#line 3732 "../.././gcc/cp/call.c"
candidates = splice_viable(candidates, strict_p, (&any_viable_p)); 
#line 3733 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
{ 
#line 3770 "../.././gcc/cp/call.c"
switch(code){ { 
#line 3746 "../.././gcc/cp/call.c"
case POSTINCREMENT_EXPR: case POSTDECREMENT_EXPR: if (flags & (1 << 1)){
pedwarn("no %<%D(int)%> declared for postfix %qs, ""trying prefix operator instead", fnname, operator_name_info[code].name); }
#line 3746 "../.././gcc/cp/call.c"
if (code == POSTINCREMENT_EXPR){
code = PREINCREMENT_EXPR; }else{
code = PREDECREMENT_EXPR; }
#line 3750 "../.././gcc/cp/call.c"
result = build_new_op(code, flags, arg1, (( tree )(((void *)0))), (( tree )(((void *)0))), overloaded_p); 
#line 3752 "../.././gcc/cp/call.c"
break; 
#line 3755 "../.././gcc/cp/call.c"
case ADDR_EXPR: case COMPOUND_EXPR: case COMPONENT_REF: result = (( tree )(((void *)0))); 
#line 3759 "../.././gcc/cp/call.c"
result_valid_p = 1; 
#line 3760 "../.././gcc/cp/call.c"
break; 
#line 3762 "../.././gcc/cp/call.c"
default: if (flags & (1 << 1)){
{ 
#line 3765 "../.././gcc/cp/call.c"
op_error(code, code2, arg1, arg2, arg3, "no match"); 
#line 3766 "../.././gcc/cp/call.c"
print_z_candidates(candidates); } }
#line 3768 "../.././gcc/cp/call.c"
result = global_trees[TI_ERROR_MARK]; 
#line 3769 "../.././gcc/cp/call.c"
break; } } } }else{
{ 
#line 3774 "../.././gcc/cp/call.c"
cand = tourney(candidates); 
#line 3775 "../.././gcc/cp/call.c"
if (cand == 0){
{ 
#line 3782 "../.././gcc/cp/call.c"
if (flags & (1 << 1)){
{ 
#line 3779 "../.././gcc/cp/call.c"
op_error(code, code2, arg1, arg2, arg3, "ambiguous overload"); 
#line 3780 "../.././gcc/cp/call.c"
print_z_candidates(candidates); } }
#line 3782 "../.././gcc/cp/call.c"
result = global_trees[TI_ERROR_MARK]; } }else{
if ((((enum tree_code )(((cand->fn))->common).code)) == FUNCTION_DECL){
{ 
#line 3789 "../.././gcc/cp/call.c"
if (overloaded_p){
(*overloaded_p) = 1; }
#line 3789 "../.././gcc/cp/call.c"
result = build_over_call(cand, ((1 << 0) | (1 << 1))); } }else{
{ 
#line 3802 "../.././gcc/cp/call.c"
if ((cand->warnings)){
{ 
#line 3796 "../.././gcc/cp/call.c"

#line 3796 "../.././gcc/cp/call.c"
struct candidate_warning *w;
#line 3797 "../.././gcc/cp/call.c"
for(w = (cand->warnings);w;w = (w->next)) { joust(cand, (w->loser), 1); } } }
#line 3802 "../.././gcc/cp/call.c"
switch(code){ { 
#line 3818 "../.././gcc/cp/call.c"
case GT_EXPR: case LT_EXPR: case GE_EXPR: case LE_EXPR: case EQ_EXPR: case NE_EXPR: if ((((enum tree_code )(((((arg1)->common).type))->common).code)) == ENUMERAL_TYPE && (((enum tree_code )(((((arg2)->common).type))->common).code)) == ENUMERAL_TYPE && (((((((arg1)->common).type))->type).main_variant) != ((((((arg2)->common).type))->type).main_variant))){
{ 
#line 3816 "../.././gcc/cp/call.c"
warning(0, "comparison between %q#T and %q#T", (((arg1)->common).type), (((arg2)->common).type)); } }
#line 3818 "../.././gcc/cp/call.c"
break; 
#line 3819 "../.././gcc/cp/call.c"
default: break; } } 
#line 3827 "../.././gcc/cp/call.c"
conv = (cand->convs)[0]; 
#line 3828 "../.././gcc/cp/call.c"
if ((conv->kind) == ck_ref_bind){
conv = (conv->u).next; }
#line 3830 "../.././gcc/cp/call.c"
arg1 = convert_like_real((conv), (arg1), (( tree )(((void *)0))), 0, 0, 1, 0); 
#line 3831 "../.././gcc/cp/call.c"
if (arg2){
{ 
#line 3833 "../.././gcc/cp/call.c"
conv = (cand->convs)[1]; 
#line 3834 "../.././gcc/cp/call.c"
if ((conv->kind) == ck_ref_bind){
conv = (conv->u).next; }
#line 3836 "../.././gcc/cp/call.c"
arg2 = convert_like_real((conv), (arg2), (( tree )(((void *)0))), 0, 0, 1, 0); } }
#line 3838 "../.././gcc/cp/call.c"
if (arg3){
{ 
#line 3840 "../.././gcc/cp/call.c"
conv = (cand->convs)[2]; 
#line 3841 "../.././gcc/cp/call.c"
if ((conv->kind) == ck_ref_bind){
conv = (conv->u).next; }
#line 3843 "../.././gcc/cp/call.c"
arg3 = convert_like_real((conv), (arg3), (( tree )(((void *)0))), 0, 0, 1, 0); } }} }}} }
#line 3848 "../.././gcc/cp/call.c"
user_defined_result_ready:  __extension__ ({ 
#line 3851 "../.././gcc/cp/call.c"

#line 3851 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 3851 "../.././gcc/cp/call.c"

#line 3851 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 3851 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 3853 "../.././gcc/cp/call.c"
if (result || result_valid_p){
return result; }
#line 3856 "../.././gcc/cp/call.c"
builtin:  switch(code){ { 
#line 3860 "../.././gcc/cp/call.c"
case MODIFY_EXPR: return build_modify_expr(arg1, code2, arg2); 
#line 3862 "../.././gcc/cp/call.c"
case INDIRECT_REF: return build_indirect_ref(arg1, "unary *"); 
#line 3865 "../.././gcc/cp/call.c"
case PLUS_EXPR: case MINUS_EXPR: case MULT_EXPR: case TRUNC_DIV_EXPR: case GT_EXPR: case LT_EXPR: case GE_EXPR: case LE_EXPR: case EQ_EXPR: case NE_EXPR: case MAX_EXPR: case MIN_EXPR: case LSHIFT_EXPR: case RSHIFT_EXPR: case TRUNC_MOD_EXPR: case BIT_AND_EXPR: case BIT_IOR_EXPR: case BIT_XOR_EXPR: case TRUTH_ANDIF_EXPR: case TRUTH_ORIF_EXPR: return build_binary_op(code, arg1, arg2, 1); 
#line 3887 "../.././gcc/cp/call.c"
case UNARY_PLUS_EXPR: case NEGATE_EXPR: case BIT_NOT_EXPR: case TRUTH_NOT_EXPR: case PREINCREMENT_EXPR: case POSTINCREMENT_EXPR: case PREDECREMENT_EXPR: case POSTDECREMENT_EXPR: case REALPART_EXPR: case IMAGPART_EXPR: return build_unary_op(code, arg1, candidates != 0); 
#line 3899 "../.././gcc/cp/call.c"
case ARRAY_REF: return build_array_ref(arg1, arg2); 
#line 3902 "../.././gcc/cp/call.c"
case COND_EXPR: return build_conditional_expr(arg1, arg2, arg3); 
#line 3905 "../.././gcc/cp/call.c"
case MEMBER_REF: return build_m_component_ref(build_indirect_ref(arg1, (((void *)0))), arg2); 
#line 3909 "../.././gcc/cp/call.c"
case ADDR_EXPR: case COMPONENT_REF: case COMPOUND_EXPR: return (( tree )(((void *)0))); 
#line 3914 "../.././gcc/cp/call.c"
default: (fancy_abort("../.././gcc/cp/call.c", 3916, __FUNCTION__)); } } 
#line 3917 "../.././gcc/cp/call.c"
return (( tree )(((void *)0))); }
 
#line 3936 "../.././gcc/cp/call.c"
 tree build_op_delete_call(enum tree_code code,  tree addr,  tree size, unsigned char global_p,  tree placement)  {

#line 3937 "../.././gcc/cp/call.c"

#line 3937 "../.././gcc/cp/call.c"
 tree fn = (( tree )(((void *)0)));
#line 3938 "../.././gcc/cp/call.c"

#line 3938 "../.././gcc/cp/call.c"
 tree fns,fnname,argtypes,args,type;
#line 3939 "../.././gcc/cp/call.c"

#line 3939 "../.././gcc/cp/call.c"
int pass;
#line 3941 "../.././gcc/cp/call.c"
if (addr == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 3944 "../.././gcc/cp/call.c"
type = strip_array_types(((((((addr)->common).type))->common).type)); 
#line 3946 "../.././gcc/cp/call.c"
fnname = (operator_name_info[((int )(code))].identifier); 
#line 3948 "../.././gcc/cp/call.c"
if (((((((enum tree_code )((type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((type)->common).code))) == UNION_TYPE) && (((type)->type).lang_flag_5)) && ((((complete_type(type))->type).size) != (( tree )(((void *)0)))) && (!global_p)){
{ 
#line 3959 "../.././gcc/cp/call.c"
fns = lookup_fnfields((((type)->type).binfo), fnname, 1); 
#line 3960 "../.././gcc/cp/call.c"
if (fns == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }} }else{
fns = (( tree )(((void *)0))); }
#line 3966 "../.././gcc/cp/call.c"
if (fns == (( tree )(((void *)0)))){
fns = lookup_name_nonclass(fnname); }
#line 3969 "../.././gcc/cp/call.c"
if (placement){
{ 
#line 3971 "../.././gcc/cp/call.c"

#line 3971 "../.././gcc/cp/call.c"
 tree alloc_fn;
#line 3972 "../.././gcc/cp/call.c"

#line 3972 "../.././gcc/cp/call.c"
 tree call_expr;
#line 3975 "../.././gcc/cp/call.c"
call_expr = placement; 
#line 3977 "../.././gcc/cp/call.c"
alloc_fn = get_callee_fndecl(call_expr); 
#line 3978 "../.././gcc/cp/call.c"
(((void )(((!(alloc_fn != (( tree )(((void *)0)))))?fancy_abort("../.././gcc/cp/call.c", 3979, __FUNCTION__) , 0:0)))); 
#line 3980 "../.././gcc/cp/call.c"
argtypes = (((((((((alloc_fn)->common).type))->type).values))->common).chain); 
#line 3982 "../.././gcc/cp/call.c"
args = ((((((call_expr)->exp).operands[1]))->common).chain); } }else{
{ 
#line 3987 "../.././gcc/cp/call.c"
argtypes = global_trees[TI_VOID_LIST_NODE]; 
#line 3988 "../.././gcc/cp/call.c"
args = (( tree )(((void *)0))); } }
#line 3992 "../.././gcc/cp/call.c"
addr = cp_convert(global_trees[TI_PTR_TYPE], addr); 
#line 3998 "../.././gcc/cp/call.c"
for(pass = 0;pass < ((placement?1:2));(++pass)) { { 
#line 4033 "../.././gcc/cp/call.c"
for(fn = (((((enum tree_code )((fns)->common).code)) == BASELINK)?(((((struct tree_baselink *)(fns)))->functions)):fns);fn;fn = ((((((enum tree_code )((fn)->common).code)) == OVERLOAD)?(((fn)->common).chain):(( tree )(((void *)0)))))) { { 
#line 4006 "../.././gcc/cp/call.c"

#line 4006 "../.././gcc/cp/call.c"
 tree t;
#line 4009 "../.././gcc/cp/call.c"
t = ((((((((((((enum tree_code )((fn)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fn)))->function)):(fn))))->common).type))->type).values); 
#line 4010 "../.././gcc/cp/call.c"
if ((!comptypes(((((t)->list).value)), (global_trees[TI_PTR_TYPE]), 0))){
continue; }
#line 4012 "../.././gcc/cp/call.c"
t = (((t)->common).chain); 
#line 4014 "../.././gcc/cp/call.c"
if (pass == 0){
{ 
#line 4016 "../.././gcc/cp/call.c"

#line 4016 "../.././gcc/cp/call.c"
 tree a = argtypes;
#line 4017 "../.././gcc/cp/call.c"
while(a && t) { { 
#line 4021 "../.././gcc/cp/call.c"
if ((!comptypes(((((a)->list).value)), ((((t)->list).value)), 0))){
break; }
#line 4021 "../.././gcc/cp/call.c"
a = (((a)->common).chain); 
#line 4022 "../.././gcc/cp/call.c"
t = (((t)->common).chain); } } 
#line 4024 "../.././gcc/cp/call.c"
if ((!a) && (!t)){
break; }} }else{
if (pass == 1 && comptypes(((((t)->list).value)), (sizetype_tab[((int )SIZETYPE)]), 0) && (((t)->common).chain) == global_trees[TI_VOID_LIST_NODE]){
break; }}} } 
#line 4036 "../.././gcc/cp/call.c"
if (fn){
break; }} } 
#line 4041 "../.././gcc/cp/call.c"
if (fn){
{ 
#line 4045 "../.././gcc/cp/call.c"
fn = ((((((enum tree_code )((fn)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fn)))->function)):(fn))); 
#line 4049 "../.././gcc/cp/call.c"
if (((((fn)->decl_minimal).context) && (tree_code_type[((int )((((enum tree_code )(((((fn)->decl_minimal).context))->common).code))))] == tcc_type))){
perform_or_defer_access_check((((type)->type).binfo), fn); }
#line 4052 "../.././gcc/cp/call.c"
if (pass == 0){
args = tree_cons_stat((( tree )(((void *)0))), addr, args); }else{
args = tree_cons_stat((( tree )(((void *)0))), addr, build_tree_list_stat((( tree )(((void *)0))), size)); }
#line 4058 "../.././gcc/cp/call.c"
if (placement){
{ 
#line 4062 "../.././gcc/cp/call.c"
mark_used(fn); 
#line 4063 "../.././gcc/cp/call.c"
return build_cxx_call(fn, args); } }else{
return build_function_call(fn, args); }} }
#line 4071 "../.././gcc/cp/call.c"
if (placement){
return (( tree )(((void *)0))); }
#line 4074 "../.././gcc/cp/call.c"
error("no suitable %<operator %s%> for %qT", operator_name_info[((int )code)].name, type); 
#line 4076 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; }
 
#line 4085 "../.././gcc/cp/call.c"
unsigned char enforce_access( tree basetype_path,  tree decl)  {

#line 4086 "../.././gcc/cp/call.c"
(((void )(((!((((enum tree_code )((basetype_path)->common).code)) == TREE_BINFO))?fancy_abort("../.././gcc/cp/call.c", 4087, __FUNCTION__) , 0:0)))); 
#line 4088 "../.././gcc/cp/call.c"
if ((!accessible_p(basetype_path, decl, 1))){
{ 
#line 4095 "../.././gcc/cp/call.c"
if ((((decl)->common).private_flag)){
error("%q+#D is private", decl); }else{
if ((((decl)->common).protected_flag)){
error("%q+#D is protected", decl); }else{
error("%q+#D is inaccessible", decl); }}
#line 4096 "../.././gcc/cp/call.c"
error("within this context"); 
#line 4097 "../.././gcc/cp/call.c"
return 0; } }
#line 4100 "../.././gcc/cp/call.c"
return 1; }
 
#line 4108 "../.././gcc/cp/call.c"
static void check_constructor_callable( tree type,  tree expr)  {

#line 4115 "../.././gcc/cp/call.c"
build_special_member_call((( tree )(((void *)0))), cp_global_trees[CPTI_COMPLETE_CTOR_IDENTIFIER], build_tree_list_stat((( tree )(((void *)0))), expr), type, ((1 << 0) | (1 << 1)) | (1 << 3) | (1 << 5) | (1 << 10)); }
 
#line 4126 "../.././gcc/cp/call.c"
static  tree build_temp( tree expr,  tree type, int flags,  diagnostic_fn_t *diagnostic_fn)  {

#line 4127 "../.././gcc/cp/call.c"

#line 4127 "../.././gcc/cp/call.c"
int savew,savee;
#line 4129 "../.././gcc/cp/call.c"
savew = ((global_dc)->diagnostic_count)[((int )(DK_WARNING))] , savee = ((global_dc)->diagnostic_count)[((int )(DK_ERROR))]; 
#line 4130 "../.././gcc/cp/call.c"
expr = build_special_member_call((( tree )(((void *)0))), cp_global_trees[CPTI_COMPLETE_CTOR_IDENTIFIER], build_tree_list_stat((( tree )(((void *)0))), expr), type, flags); 
#line 4134 "../.././gcc/cp/call.c"
if (((global_dc)->diagnostic_count)[((int )(DK_WARNING))] > savew){
(*diagnostic_fn) = warning0; }else{
if (((global_dc)->diagnostic_count)[((int )(DK_ERROR))] > savee){
(*diagnostic_fn) = error; }else{
(*diagnostic_fn) = (((void *)0)); }}
#line 4140 "../.././gcc/cp/call.c"
return expr; }
 
# 3934 "../.././gcc/cp/call.c" 
# 4159 "../.././gcc/cp/call.c" 
static  tree convert_like_real( conversion *convs,  tree expr,  tree fn, int argnum, int inner, unsigned char issue_conversion_warnings, unsigned char c_cast_p)  {

#line 4160 "../.././gcc/cp/call.c"

#line 4160 "../.././gcc/cp/call.c"
 tree totype = (convs->type);
#line 4161 "../.././gcc/cp/call.c"

#line 4161 "../.././gcc/cp/call.c"
 diagnostic_fn_t diagnostic_fn;
#line 4163 "../.././gcc/cp/call.c"
if ((convs->bad_p) && (convs->kind) != ck_user && (convs->kind) != ck_ambig && (convs->kind) != ck_ref_bind){
{ 
#line 4168 "../.././gcc/cp/call.c"

#line 4168 "../.././gcc/cp/call.c"
 conversion *t = convs;
#line 4169 "../.././gcc/cp/call.c"
for(;t;t = (convs->u).next) { { 
#line 4184 "../.././gcc/cp/call.c"
if ((t->kind) == ck_user || (!(t->bad_p))){
{ 
#line 4175 "../.././gcc/cp/call.c"
expr = convert_like_real(t, expr, fn, argnum, 1, 0, 0); 
#line 4176 "../.././gcc/cp/call.c"
break; } }else{
if ((t->kind) == ck_ambig){
return convert_like_real(t, expr, fn, argnum, 1, 0, 0); }else{
if ((t->kind) == ck_identity){
break; }}}} } 
#line 4185 "../.././gcc/cp/call.c"
pedwarn("invalid conversion from %qT to %qT", (((expr)->common).type), totype); 
#line 4186 "../.././gcc/cp/call.c"
if (fn){
pedwarn("  initializing argument %P of %qD", argnum, fn); }
#line 4188 "../.././gcc/cp/call.c"
return cp_convert(totype, expr); } }
#line 4191 "../.././gcc/cp/call.c"
if (issue_conversion_warnings){
{ 
#line 4193 "../.././gcc/cp/call.c"

#line 4193 "../.././gcc/cp/call.c"
 tree t = non_reference(totype);
#line 4196 "../.././gcc/cp/call.c"
if ((((((enum tree_code )((t)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((t)->common).code)) == CHAR_TYPE || (((enum tree_code )((t)->common).code)) == INTEGER_TYPE) || (((enum tree_code )((t)->common).code)) == REAL_TYPE) && expr == c_global_trees[CTI_NULL]){
{ 
#line 4202 "../.././gcc/cp/call.c"
if (fn){
warning(0, "passing NULL to non-pointer argument %P of %qD", argnum, fn); }else{
warning(0, "converting to non-pointer type %qT from NULL", t); }} }
#line 4206 "../.././gcc/cp/call.c"
if ((((enum tree_code )(((((expr)->common).type))->common).code)) == REAL_TYPE && (((enum tree_code )((t)->common).code)) == INTEGER_TYPE){
{ 
#line 4213 "../.././gcc/cp/call.c"
if (fn){
warning(0, "passing %qT for argument %P to %qD", (((expr)->common).type), argnum, fn); }else{
warning(0, "converting to %qT from %qT", t, (((expr)->common).type)); }} }} }
#line 4217 "../.././gcc/cp/call.c"
switch((convs->kind)){ { 
#line 4280 "../.././gcc/cp/call.c"
case ck_user: { 
#line 4221 "../.././gcc/cp/call.c"

#line 4221 "../.././gcc/cp/call.c"
struct z_candidate *cand = (convs->cand);
#line 4222 "../.././gcc/cp/call.c"

#line 4222 "../.././gcc/cp/call.c"
 tree convfn = (cand->fn);
#line 4223 "../.././gcc/cp/call.c"

#line 4223 "../.././gcc/cp/call.c"
 tree args;
#line 4225 "../.././gcc/cp/call.c"
if ((((((convfn)->decl_common).lang_specific)->decl_flags).constructor_attr)){
{ 
#line 4228 "../.././gcc/cp/call.c"

#line 4228 "../.././gcc/cp/call.c"
 tree t = build_int_cst(build_pointer_type((((convfn)->decl_minimal).context)), 0);
#line 4230 "../.././gcc/cp/call.c"
args = build_tree_list_stat((( tree )(((void *)0))), expr); 
#line 4233 "../.././gcc/cp/call.c"
(((void )(((!((!(((((convfn)->decl_common).lang_specific)->decl_flags).has_in_charge_parm_p)) && (!(((((convfn)->decl_common).lang_specific)->decl_flags).has_vtt_parm_p))))?fancy_abort("../.././gcc/cp/call.c", 4235, __FUNCTION__) , 0:0)))); 
#line 4235 "../.././gcc/cp/call.c"
args = tree_cons_stat((( tree )(((void *)0))), t, args); } }else{
args = build_this(expr); }
#line 4239 "../.././gcc/cp/call.c"
expr = build_over_call(cand, ((1 << 0) | (1 << 1))); 
#line 4243 "../.././gcc/cp/call.c"
if ((((((convfn)->decl_common).lang_specific)->decl_flags).constructor_attr)){
expr = build_cplus_new(totype, expr); }
#line 4255 "../.././gcc/cp/call.c"
if (((((enum tree_code )((totype)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((totype)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((totype)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((totype)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((totype)->type).lang_flag_5)) && (inner >= 0 || (!lvalue_p(expr)))){
{ 
#line 4265 "../.././gcc/cp/call.c"
expr = (build_temp(expr, totype, ((1 << 0) | (1 << 1)) | (1 << 3) | (1 << 5), (&diagnostic_fn))); 
#line 4267 "../.././gcc/cp/call.c"
if (diagnostic_fn){
{ 
#line 4275 "../.././gcc/cp/call.c"
if (fn){
diagnostic_fn("  initializing argument %P of %qD from result of %qD", argnum, fn, convfn); }else{
diagnostic_fn("  initializing temporary from result of %qD", convfn); }} }
#line 4277 "../.././gcc/cp/call.c"
expr = build_cplus_new(totype, expr); } }
#line 4279 "../.././gcc/cp/call.c"
return expr; } 
#line 4281 "../.././gcc/cp/call.c"
case ck_identity: if (type_unknown_p(expr)){
expr = instantiate_type(totype, expr, tf_error | tf_warning); }
#line 4287 "../.././gcc/cp/call.c"
if (inner >= 0){
expr = decl_constant_value(expr); }
#line 4289 "../.././gcc/cp/call.c"
if ((convs->check_copy_constructor_p)){
check_constructor_callable(totype, expr); }
#line 4291 "../.././gcc/cp/call.c"
return expr; 
#line 4292 "../.././gcc/cp/call.c"
case ck_ambig: return build_user_type_conversion(totype, (convs->u).expr, ((1 << 0) | (1 << 1))); 
#line 4297 "../.././gcc/cp/call.c"
default: break; } } 
#line 4299 "../.././gcc/cp/call.c"
; 
#line 4301 "../.././gcc/cp/call.c"
expr = convert_like_real((convs->u).next, expr, fn, argnum, ((convs->kind) == ck_ref_bind?(-1):1), 0, c_cast_p); 
#line 4305 "../.././gcc/cp/call.c"
if (expr == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 4308 "../.././gcc/cp/call.c"
switch((convs->kind)){ { 
#line 4314 "../.././gcc/cp/call.c"
case ck_rvalue: if ((!((((enum tree_code )((totype)->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )((totype)->common).code)) == TYPENAME_TYPE || (((enum tree_code )((totype)->common).code)) == TYPEOF_TYPE || (((enum tree_code )((totype)->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || (((totype)->type).lang_flag_5)))){
return expr; }
#line 4314 "../.././gcc/cp/call.c"
case ck_base: if ((convs->kind) == ck_base && (!(convs->need_temporary_p))){
{ 
#line 4322 "../.././gcc/cp/call.c"
if ((convs->check_copy_constructor_p)){
check_constructor_callable((((expr)->common).type), expr); }
#line 4322 "../.././gcc/cp/call.c"
expr = build_unary_op(ADDR_EXPR, expr, 0); 
#line 4323 "../.././gcc/cp/call.c"
expr = convert_to_base(expr, build_pointer_type(totype), (!c_cast_p), 1); 
#line 4325 "../.././gcc/cp/call.c"
expr = build_indirect_ref(expr, "implicit conversion"); 
#line 4326 "../.././gcc/cp/call.c"
return expr; } }
#line 4332 "../.././gcc/cp/call.c"
expr = build_temp(expr, totype, ((1 << 0) | (1 << 1)) | (1 << 3), (&diagnostic_fn)); 
#line 4334 "../.././gcc/cp/call.c"
if (diagnostic_fn && fn){
diagnostic_fn("  initializing argument %P of %qD", argnum, fn); }
#line 4336 "../.././gcc/cp/call.c"
return build_cplus_new(totype, expr); 
#line 4338 "../.././gcc/cp/call.c"
case ck_ref_bind: { 
#line 4340 "../.././gcc/cp/call.c"

#line 4340 "../.././gcc/cp/call.c"
 tree ref_type = totype;
#line 4343 "../.././gcc/cp/call.c"
if ((convs->need_temporary_p) || (!lvalue_p(expr))){
{ 
#line 4345 "../.././gcc/cp/call.c"

#line 4345 "../.././gcc/cp/call.c"
 tree type = ((convs->u).next->type);
#line 4346 "../.././gcc/cp/call.c"

#line 4346 "../.././gcc/cp/call.c"
 cp_lvalue_kind lvalue = real_lvalue_p(expr);
#line 4348 "../.././gcc/cp/call.c"
if ((!((cp_type_quals((((ref_type)->common).type)) & (0x1 | 0x2)) == 0x1))){
{ 
#line 4359 "../.././gcc/cp/call.c"
if (lvalue & clk_bitfield){
error("cannot bind bitfield %qE to %qT", expr, ref_type); }else{
if (lvalue & clk_packed){
error("cannot bind packed field %qE to %qT", expr, ref_type); }else{
error("cannot bind rvalue %qE to %qT", expr, ref_type); }}
#line 4360 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 4368 "../.././gcc/cp/call.c"
if ((lvalue & clk_packed) && ((((((enum tree_code )((type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((type)->common).code))) == UNION_TYPE) && (((type)->type).lang_flag_5)) && (!(((((&((((type)->type).lang_specific)->u).c))->h).has_init_ref) && (!((((&((((type)->type).lang_specific)->u).c))->has_complex_init_ref)))))){
{ 
#line 4373 "../.././gcc/cp/call.c"
error("cannot bind packed field %qE to %qT", expr, ref_type); 
#line 4374 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 4376 "../.././gcc/cp/call.c"
expr = build_target_expr_with_type(expr, type); } }
#line 4381 "../.././gcc/cp/call.c"
expr = build_unary_op(ADDR_EXPR, expr, 1); 
#line 4382 "../.././gcc/cp/call.c"
if (expr == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 4388 "../.././gcc/cp/call.c"
expr = cp_convert(build_pointer_type((((ref_type)->common).type)), expr); 
#line 4391 "../.././gcc/cp/call.c"
return build_nop(ref_type, expr); } 
#line 4394 "../.././gcc/cp/call.c"
case ck_lvalue: return decay_conversion(expr); 
#line 4397 "../.././gcc/cp/call.c"
case ck_qual: string_conv_p(totype, expr, 1); 
#line 4400 "../.././gcc/cp/call.c"
break; 
#line 4402 "../.././gcc/cp/call.c"
case ck_ptr: if ((convs->base_p)){
expr = convert_to_base(expr, totype, (!c_cast_p), 0); }
#line 4406 "../.././gcc/cp/call.c"
return build_nop(totype, expr); 
#line 4408 "../.././gcc/cp/call.c"
case ck_pmem: return convert_ptrmem(totype, expr, 0, c_cast_p); 
#line 4412 "../.././gcc/cp/call.c"
default: break; } } 
#line 4416 "../.././gcc/cp/call.c"
if (issue_conversion_warnings){
expr = convert_and_check(totype, expr); }else{
expr = convert(totype, expr); }
#line 4421 "../.././gcc/cp/call.c"
return expr; }
 
#line 4427 "../.././gcc/cp/call.c"
static  tree call_builtin_trap(void )  {

#line 4428 "../.././gcc/cp/call.c"

#line 4428 "../.././gcc/cp/call.c"
 tree fn = implicit_built_in_decls[BUILT_IN_TRAP];
#line 4430 "../.././gcc/cp/call.c"
(((void )(((!(fn != (((void *)0))))?fancy_abort("../.././gcc/cp/call.c", 4431, __FUNCTION__) , 0:0)))); 
#line 4431 "../.././gcc/cp/call.c"
fn = build_call(fn, (( tree )(((void *)0)))); 
#line 4432 "../.././gcc/cp/call.c"
return fn; }
 
#line 4439 "../.././gcc/cp/call.c"
 tree convert_arg_to_ellipsis( tree arg)  {

#line 4444 "../.././gcc/cp/call.c"
arg = decay_conversion(arg); 
#line 4452 "../.././gcc/cp/call.c"
if ((((enum tree_code )(((((arg)->common).type))->common).code)) == REAL_TYPE && (((((((arg)->common).type))->type).precision) < (((global_trees[TI_DOUBLE_TYPE])->type).precision))){
arg = convert_to_real(global_trees[TI_DOUBLE_TYPE], arg); }else{
if (((((enum tree_code )(((((arg)->common).type))->common).code)) == ENUMERAL_TYPE || ((((enum tree_code )(((((arg)->common).type))->common).code)) == BOOLEAN_TYPE || (((enum tree_code )(((((arg)->common).type))->common).code)) == CHAR_TYPE || (((enum tree_code )(((((arg)->common).type))->common).code)) == INTEGER_TYPE))){
arg = perform_integral_promotions(arg); }}
#line 4459 "../.././gcc/cp/call.c"
arg = require_complete_type(arg); 
#line 4461 "../.././gcc/cp/call.c"
if (arg != global_trees[TI_ERROR_MARK] && (!pod_type_p((((arg)->common).type)))){
{ 
#line 4473 "../.././gcc/cp/call.c"
if ((!skip_evaluation)){
warning(0, "cannot pass objects of non-POD type %q#T through %<...%>; ""call will abort at runtime", (((arg)->common).type)); }
#line 4473 "../.././gcc/cp/call.c"
arg = call_builtin_trap(); 
#line 4474 "../.././gcc/cp/call.c"
arg = build2_stat(COMPOUND_EXPR, integer_types[itk_int], arg, global_trees[TI_INTEGER_ZERO]); } }
#line 4478 "../.././gcc/cp/call.c"
return arg; }
 
#line 4484 "../.././gcc/cp/call.c"
 tree build_x_va_arg( tree expr,  tree type)  {

#line 4488 "../.././gcc/cp/call.c"
if ((scope_chain->x_processing_template_decl)){
return build_min(VA_ARG_EXPR, type, expr); }
#line 4488 "../.././gcc/cp/call.c"
type = complete_type_or_else(type, (( tree )(((void *)0)))); 
#line 4490 "../.././gcc/cp/call.c"
if (expr == global_trees[TI_ERROR_MARK] || (!type)){
return global_trees[TI_ERROR_MARK]; }
#line 4493 "../.././gcc/cp/call.c"
if ((!pod_type_p(type))){
{ 
#line 4497 "../.././gcc/cp/call.c"
warning(0, "cannot receive objects of non-POD type %q#T through %<...%>; ""call will abort at runtime", type); 
#line 4498 "../.././gcc/cp/call.c"
expr = convert(build_pointer_type(type), c_global_trees[CTI_NULL]); 
#line 4499 "../.././gcc/cp/call.c"
expr = build2_stat(COMPOUND_EXPR, (((expr)->common).type), call_builtin_trap(), expr); 
#line 4501 "../.././gcc/cp/call.c"
expr = build_indirect_ref(expr, (((void *)0))); 
#line 4502 "../.././gcc/cp/call.c"
return expr; } }
#line 4505 "../.././gcc/cp/call.c"
return build_va_arg(expr, type); }
 
#line 4513 "../.././gcc/cp/call.c"
 tree cxx_type_promotes_to( tree type)  {

#line 4514 "../.././gcc/cp/call.c"

#line 4514 "../.././gcc/cp/call.c"
 tree promote;
#line 4518 "../.././gcc/cp/call.c"
type = type_decays_to(type); 
#line 4520 "../.././gcc/cp/call.c"
promote = type_promotes_to(type); 
#line 4521 "../.././gcc/cp/call.c"
if (comptypes((type), (promote), 0)){
promote = type; }
#line 4524 "../.././gcc/cp/call.c"
return promote; }
 
#line 4532 "../.././gcc/cp/call.c"
 tree convert_default_arg( tree type,  tree arg,  tree fn, int parmnum)  {

#line 4543 "../.././gcc/cp/call.c"
if ((((enum tree_code )((arg)->common).code)) == DEFAULT_ARG){
{ 
#line 4539 "../.././gcc/cp/call.c"
error("the default argument for parameter %d of %qD has ""not yet been parsed", parmnum, fn); 
#line 4540 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 4543 "../.././gcc/cp/call.c"
if (fn && ((((((fn))->decl_common).lang_specific)->decl_flags).u.template_info)){
arg = tsubst_default_argument(fn, type, arg); }
#line 4546 "../.././gcc/cp/call.c"
arg = break_out_target_exprs(arg); 
#line 4548 "../.././gcc/cp/call.c"
if ((((enum tree_code )((arg)->common).code)) == CONSTRUCTOR){
{ 
#line 4550 "../.././gcc/cp/call.c"
arg = digest_init(type, arg); 
#line 4551 "../.././gcc/cp/call.c"
arg = convert_for_initialization(0, type, arg, ((1 << 0) | (1 << 1)), "default argument", fn, parmnum); } }else{
{ 
#line 4560 "../.././gcc/cp/call.c"
if (((((arg)->common).lang_flag_4))){
arg = copy_node_stat(arg); }
#line 4560 "../.././gcc/cp/call.c"
arg = convert_for_initialization(0, type, arg, ((1 << 0) | (1 << 1)), "default argument", fn, parmnum); 
#line 4562 "../.././gcc/cp/call.c"
arg = convert_for_arg_passing(type, arg); } }
#line 4565 "../.././gcc/cp/call.c"
return arg; }
 
#line 4572 "../.././gcc/cp/call.c"
 tree type_passed_as( tree type)  {

#line 4587 "../.././gcc/cp/call.c"
if ((((type)->common).addressable_flag)){
{ 
#line 4576 "../.././gcc/cp/call.c"
type = build_reference_type(type); 
#line 4578 "../.././gcc/cp/call.c"
type = build_qualified_type(type, 0x4); } }else{
if (targetm.calls.promote_prototypes(type) && ((((enum tree_code )((type)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type)->common).code)) == CHAR_TYPE || (((enum tree_code )((type)->common).code)) == INTEGER_TYPE) && ((((type)->type).size) != (( tree )(((void *)0)))) && ((((unsigned long )(((((((type)->type).size))->int_cst).int_cst).high)) < ((unsigned long )(((((((integer_types[itk_int])->type).size))->int_cst).int_cst).high))) || ((((unsigned long )(((((((type)->type).size))->int_cst).int_cst).high)) == ((unsigned long )(((((((integer_types[itk_int])->type).size))->int_cst).int_cst).high))) && (((((((type)->type).size))->int_cst).int_cst).low) < (((((((integer_types[itk_int])->type).size))->int_cst).int_cst).low)))){
type = integer_types[itk_int]; }}
#line 4587 "../.././gcc/cp/call.c"
return type; }
 
#line 4593 "../.././gcc/cp/call.c"
 tree convert_for_arg_passing( tree type,  tree val)  {

#line 4605 "../.././gcc/cp/call.c"
if (val == global_trees[TI_ERROR_MARK]){
; }else{
if ((((type)->common).addressable_flag)){
val = build1_stat(ADDR_EXPR, build_reference_type(type), val); }else{
if (targetm.calls.promote_prototypes(type) && ((((enum tree_code )((type)->common).code)) == ENUMERAL_TYPE || (((enum tree_code )((type)->common).code)) == BOOLEAN_TYPE || (((enum tree_code )((type)->common).code)) == CHAR_TYPE || (((enum tree_code )((type)->common).code)) == INTEGER_TYPE) && ((((type)->type).size) != (( tree )(((void *)0)))) && ((((unsigned long )(((((((type)->type).size))->int_cst).int_cst).high)) < ((unsigned long )(((((((integer_types[itk_int])->type).size))->int_cst).int_cst).high))) || ((((unsigned long )(((((((type)->type).size))->int_cst).int_cst).high)) == ((unsigned long )(((((((integer_types[itk_int])->type).size))->int_cst).int_cst).high))) && (((((((type)->type).size))->int_cst).int_cst).low) < (((((((integer_types[itk_int])->type).size))->int_cst).int_cst).low)))){
val = perform_integral_promotions(val); }}}
#line 4605 "../.././gcc/cp/call.c"
if (warn_missing_format_attribute){
{ 
#line 4607 "../.././gcc/cp/call.c"

#line 4607 "../.././gcc/cp/call.c"
 tree rhstype = (((val)->common).type);
#line 4608 "../.././gcc/cp/call.c"

#line 4608 "../.././gcc/cp/call.c"
const enum tree_code coder = (((enum tree_code )((rhstype)->common).code));
#line 4609 "../.././gcc/cp/call.c"

#line 4609 "../.././gcc/cp/call.c"
const enum tree_code codel = (((enum tree_code )((type)->common).code));
#line 4610 "../.././gcc/cp/call.c"
if ((codel == POINTER_TYPE || codel == REFERENCE_TYPE) && coder == codel && check_missing_format_attribute(type, rhstype)){
warning(OPT_Wmissing_format_attribute, "argument of function call might be a candidate for a format attribute"); }} }
#line 4616 "../.././gcc/cp/call.c"
return val; }
 
#line 4625 "../.././gcc/cp/call.c"
static unsigned char magic_varargs_p( tree fn)  {

#line 4639 "../.././gcc/cp/call.c"
if (((((fn)->function_decl).built_in_class) != NOT_BUILT_IN)){
switch((((fn)->decl_common).u1.f)){ { 
#line 4634 "../.././gcc/cp/call.c"
case BUILT_IN_CLASSIFY_TYPE: case BUILT_IN_CONSTANT_P: case BUILT_IN_NEXT_ARG: case BUILT_IN_STDARG_START: case BUILT_IN_VA_START: return 1; 
#line 4636 "../.././gcc/cp/call.c"
default: ; } } }
#line 4639 "../.././gcc/cp/call.c"
return 0; }
 
#line 4648 "../.././gcc/cp/call.c"
static  tree build_over_call(struct z_candidate *cand, int flags)  {

#line 4649 "../.././gcc/cp/call.c"

#line 4649 "../.././gcc/cp/call.c"
 tree fn = (cand->fn);
#line 4650 "../.././gcc/cp/call.c"

#line 4650 "../.././gcc/cp/call.c"
 tree args = (cand->args);
#line 4651 "../.././gcc/cp/call.c"

#line 4651 "../.././gcc/cp/call.c"
 conversion **convs = (cand->convs);
#line 4652 "../.././gcc/cp/call.c"

#line 4652 "../.././gcc/cp/call.c"
 conversion *conv;
#line 4653 "../.././gcc/cp/call.c"

#line 4653 "../.././gcc/cp/call.c"
 tree converted_args = (( tree )(((void *)0)));
#line 4654 "../.././gcc/cp/call.c"

#line 4654 "../.././gcc/cp/call.c"
 tree parm = ((((((fn)->common).type))->type).values);
#line 4655 "../.././gcc/cp/call.c"

#line 4655 "../.././gcc/cp/call.c"
 tree arg,val;
#line 4656 "../.././gcc/cp/call.c"

#line 4656 "../.././gcc/cp/call.c"
int i = 0;
#line 4657 "../.././gcc/cp/call.c"

#line 4657 "../.././gcc/cp/call.c"
int is_method = 0;
#line 4663 "../.././gcc/cp/call.c"
if ((scope_chain->x_processing_template_decl)){
{ 
#line 4665 "../.././gcc/cp/call.c"

#line 4665 "../.././gcc/cp/call.c"
 tree expr;
#line 4666 "../.././gcc/cp/call.c"

#line 4666 "../.././gcc/cp/call.c"
 tree return_type;
#line 4667 "../.././gcc/cp/call.c"
return_type = ((((((fn)->common).type))->common).type); 
#line 4668 "../.././gcc/cp/call.c"
expr = build3_stat(CALL_EXPR, return_type, fn, args, (( tree )(((void *)0)))); 
#line 4669 "../.././gcc/cp/call.c"
if ((((fn)->common).volatile_flag) && cfun){
(((cfun->language))->returns_abnormally) = 1; }
#line 4671 "../.././gcc/cp/call.c"
if ((!((((enum tree_code )((return_type)->common).code)) == VOID_TYPE))){
require_complete_type(return_type); }
#line 4673 "../.././gcc/cp/call.c"
return convert_from_reference(expr); } }
#line 4677 "../.././gcc/cp/call.c"
if ((cand->warnings)){
{ 
#line 4679 "../.././gcc/cp/call.c"

#line 4679 "../.././gcc/cp/call.c"
struct candidate_warning *w;
#line 4680 "../.././gcc/cp/call.c"
for(w = (cand->warnings);w;w = (w->next)) { joust(cand, (w->loser), 1); } } }
#line 4684 "../.././gcc/cp/call.c"
if ((((((enum tree_code )(((((fn)->common).type))->common).code)) == METHOD_TYPE) || (((((fn)->decl_common).lang_specific)->decl_flags).static_function))){
{ 
# 4255 "../.././gcc/cp/call.c" 
# 4724 "../.././gcc/cp/call.c" 
if (((((((fn))->decl_common).lang_specific)->decl_flags).u.template_info) && (((((((((((((((fn))->decl_common).lang_specific)->decl_flags).u.template_info))->list).purpose))))->decl_common).lang_flag_1))){
perform_or_defer_access_check((cand->access_path), ((((((((((fn))->decl_common).lang_specific)->decl_flags).u.template_info))->list).purpose))); }else{
perform_or_defer_access_check((cand->access_path), fn); }} }
#line 4727 "../.././gcc/cp/call.c"
if (args && (((enum tree_code )((args)->common).code)) != TREE_LIST){
args = build_tree_list_stat((( tree )(((void *)0))), args); }
#line 4729 "../.././gcc/cp/call.c"
arg = args; 
#line 4733 "../.././gcc/cp/call.c"
if ((((((fn)->decl_common).lang_specific)->decl_flags).constructor_attr)){
{ 
#line 4735 "../.././gcc/cp/call.c"
converted_args = tree_cons_stat((( tree )(((void *)0))), (((arg)->list).value), converted_args); 
#line 4736 "../.././gcc/cp/call.c"
arg = (((arg)->common).chain); 
#line 4737 "../.././gcc/cp/call.c"
parm = (((parm)->common).chain); 
#line 4739 "../.././gcc/cp/call.c"
(((void )(((!((!(((((fn)->decl_common).lang_specific)->decl_flags).has_in_charge_parm_p))))?fancy_abort("../.././gcc/cp/call.c", 4739, __FUNCTION__) , 0:0)))); 
#line 4741 "../.././gcc/cp/call.c"
if ((((((fn)->decl_common).lang_specific)->decl_flags).has_vtt_parm_p)){
{ 
#line 4743 "../.././gcc/cp/call.c"
converted_args = tree_cons_stat((( tree )(((void *)0))), (((arg)->list).value), converted_args); 
#line 4745 "../.././gcc/cp/call.c"
arg = (((arg)->common).chain); 
#line 4746 "../.././gcc/cp/call.c"
parm = (((parm)->common).chain); } }} }else{
if ((((enum tree_code )(((((fn)->common).type))->common).code)) == METHOD_TYPE){
{ 
#line 4752 "../.././gcc/cp/call.c"

#line 4752 "../.././gcc/cp/call.c"
 tree parmtype = (((parm)->list).value);
#line 4753 "../.././gcc/cp/call.c"

#line 4753 "../.././gcc/cp/call.c"
 tree argtype = ((((((arg)->list).value))->common).type);
#line 4754 "../.././gcc/cp/call.c"

#line 4754 "../.././gcc/cp/call.c"
 tree converted_arg;
#line 4755 "../.././gcc/cp/call.c"

#line 4755 "../.././gcc/cp/call.c"
 tree base_binfo;
#line 4757 "../.././gcc/cp/call.c"
if ((convs[i]->bad_p)){
pedwarn("passing %qT as %<this%> argument of %q#D discards qualifiers", (((argtype)->common).type), fn); }
#line 4767 "../.././gcc/cp/call.c"
(((void )(((!((((enum tree_code )((parmtype)->common).code)) == POINTER_TYPE))?fancy_abort("../.././gcc/cp/call.c", 4767, __FUNCTION__) , 0:0)))); 
#line 4769 "../.././gcc/cp/call.c"
(((void )(((!((cand->conversion_path) != (( tree )(((void *)0)))))?fancy_abort("../.././gcc/cp/call.c", 4769, __FUNCTION__) , 0:0)))); 
#line 4770 "../.././gcc/cp/call.c"
converted_arg = build_base_path(PLUS_EXPR, (((arg)->list).value), (cand->conversion_path), 1); 
#line 4775 "../.././gcc/cp/call.c"
if ((!accessible_base_p((((argtype)->common).type), (((((cand->conversion_path)))->common).type), 1))){
error("%qT is not an accessible base of %qT", (((((cand->conversion_path)))->common).type), (((argtype)->common).type)); }
#line 4783 "../.././gcc/cp/call.c"
base_binfo = lookup_base(((((((converted_arg)->common).type))->common).type), (((parmtype)->common).type), ba_unique, (((void *)0))); 
#line 4785 "../.././gcc/cp/call.c"
converted_arg = build_base_path(PLUS_EXPR, converted_arg, base_binfo, 1); 
#line 4788 "../.././gcc/cp/call.c"
converted_args = tree_cons_stat((( tree )(((void *)0))), converted_arg, converted_args); 
#line 4789 "../.././gcc/cp/call.c"
parm = (((parm)->common).chain); 
#line 4790 "../.././gcc/cp/call.c"
arg = (((arg)->common).chain); 
#line 4791 "../.././gcc/cp/call.c"
(++i); 
#line 4792 "../.././gcc/cp/call.c"
is_method = 1; } }}
#line 4795 "../.././gcc/cp/call.c"
for(;arg && parm;parm = (((parm)->common).chain) , arg = (((arg)->common).chain) , (++i)) { { 
#line 4798 "../.././gcc/cp/call.c"

#line 4798 "../.././gcc/cp/call.c"
 tree type = (((parm)->list).value);
#line 4800 "../.././gcc/cp/call.c"
conv = convs[i]; 
#line 4801 "../.././gcc/cp/call.c"
val = convert_like_real((conv), ((((arg)->list).value)), (fn), (i - is_method), 0, 1, 0); 
#line 4804 "../.././gcc/cp/call.c"
val = convert_for_arg_passing(type, val); 
#line 4805 "../.././gcc/cp/call.c"
converted_args = tree_cons_stat((( tree )(((void *)0))), val, converted_args); } } 
#line 4809 "../.././gcc/cp/call.c"
for(;parm && parm != global_trees[TI_VOID_LIST_NODE];parm = (((parm)->common).chain) , i++) { converted_args = tree_cons_stat((( tree )(((void *)0))), convert_default_arg((((parm)->list).value), (((parm)->list).purpose), fn, i - is_method), converted_args); } 
#line 4818 "../.././gcc/cp/call.c"
for(;arg;arg = (((arg)->common).chain)) { { 
#line 4820 "../.././gcc/cp/call.c"

#line 4820 "../.././gcc/cp/call.c"
 tree a = (((arg)->list).value);
#line 4821 "../.././gcc/cp/call.c"
if (magic_varargs_p(fn)){
; }else{
a = convert_arg_to_ellipsis(a); }
#line 4825 "../.././gcc/cp/call.c"
converted_args = tree_cons_stat((( tree )(((void *)0))), a, converted_args); } } 
#line 4828 "../.././gcc/cp/call.c"
converted_args = nreverse(converted_args); 
#line 4830 "../.././gcc/cp/call.c"
check_function_arguments(((((((fn)->common).type))->type).attributes), converted_args, ((((((fn)->common).type))->type).values)); 
#line 4836 "../.././gcc/cp/call.c"
if ((!flag_elide_constructors)){
; }else{
if ((cand->num_convs) == 1 && ((((((fn)->decl_common).lang_specific)->decl_flags).constructor_attr) && copy_fn_p(fn) > 0)){
{ 
#line 4840 "../.././gcc/cp/call.c"

#line 4840 "../.././gcc/cp/call.c"
 tree targ;
#line 4841 "../.././gcc/cp/call.c"
arg = skip_artificial_parms_for(fn, converted_args); 
#line 4842 "../.././gcc/cp/call.c"
arg = (((arg)->list).value); 
#line 4845 "../.././gcc/cp/call.c"
targ = arg; 
#line 4846 "../.././gcc/cp/call.c"
while((((enum tree_code )((targ)->common).code)) == NOP_EXPR || (((enum tree_code )((targ)->common).code)) == NON_LVALUE_EXPR || (((enum tree_code )((targ)->common).code)) == CONVERT_EXPR) { targ = (((targ)->exp).operands[0]); } 
#line 4850 "../.././gcc/cp/call.c"
if ((((enum tree_code )((targ)->common).code)) == ADDR_EXPR){
{ 
#line 4852 "../.././gcc/cp/call.c"
targ = (((targ)->exp).operands[0]); 
#line 4853 "../.././gcc/cp/call.c"
if ((!comptypes(((((((((((arg)->common).type))->common).type))->type).main_variant)), (((((((targ)->common).type))->type).main_variant)), 0))){
targ = (( tree )(((void *)0))); }} }else{
targ = (( tree )(((void *)0))); }
#line 4860 "../.././gcc/cp/call.c"
if (targ){
arg = targ; }else{
arg = build_indirect_ref(arg, 0); }
#line 4867 "../.././gcc/cp/call.c"
if (((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->has_complex_init_ref))){
mark_used(fn); }
#line 4875 "../.././gcc/cp/call.c"
if (integer_zerop((((args)->list).value))){
{ 
#line 4881 "../.././gcc/cp/call.c"
if ((((enum tree_code )((arg)->common).code)) == TARGET_EXPR){
return arg; }else{
if ((((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->h).has_init_ref) && (!((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->has_complex_init_ref))))){
return build_target_expr_with_type(arg, (((fn)->decl_minimal).context)); }}} }else{
if ((((enum tree_code )((arg)->common).code)) == TARGET_EXPR || (((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->h).has_init_ref) && (!((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->has_complex_init_ref))))){
{ 
#line 4886 "../.././gcc/cp/call.c"

#line 4886 "../.././gcc/cp/call.c"
 tree to = stabilize_reference(build_indirect_ref((((args)->list).value), 0));
#line 4888 "../.././gcc/cp/call.c"
val = build2_stat(INIT_EXPR, (((fn)->decl_minimal).context), to, arg); 
#line 4889 "../.././gcc/cp/call.c"
return val; } }}} }else{
if (((((((((fn)->decl_minimal).name))->common).lang_flag_2)?((((fn)->decl_common).lang_specific)->u).f.operator_code:ERROR_MARK)) == NOP_EXPR && copy_fn_p(fn) && (((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->has_assign_ref)) && (!((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->has_complex_assign_ref))))){
{ 
#line 4897 "../.././gcc/cp/call.c"

#line 4897 "../.././gcc/cp/call.c"
 tree to = stabilize_reference(build_indirect_ref((((converted_args)->list).value), 0));
#line 4898 "../.././gcc/cp/call.c"

#line 4898 "../.././gcc/cp/call.c"
 tree type = (((to)->common).type);
#line 4899 "../.././gcc/cp/call.c"

#line 4899 "../.././gcc/cp/call.c"
 tree as_base = ((((&((((type)->type).lang_specific)->u).c))->as_base));
#line 4901 "../.././gcc/cp/call.c"
arg = ((((((converted_args)->common).chain))->list).value); 
#line 4902 "../.././gcc/cp/call.c"
if (tree_int_cst_equal((((type)->type).size), (((as_base)->type).size))){
{ 
#line 4904 "../.././gcc/cp/call.c"
arg = build_indirect_ref(arg, 0); 
#line 4905 "../.././gcc/cp/call.c"
val = build2_stat(MODIFY_EXPR, (((to)->common).type), to, arg); } }else{
{ 
#line 4912 "../.././gcc/cp/call.c"

#line 4912 "../.././gcc/cp/call.c"
 tree args,t;
#line 4914 "../.././gcc/cp/call.c"
args = tree_cons_stat((((void *)0)), (((as_base)->type).size_unit), (((void *)0))); 
#line 4915 "../.././gcc/cp/call.c"
args = tree_cons_stat((((void *)0)), arg, args); 
#line 4916 "../.././gcc/cp/call.c"
t = build_unary_op(ADDR_EXPR, to, 0); 
#line 4917 "../.././gcc/cp/call.c"
args = tree_cons_stat((((void *)0)), t, args); 
#line 4918 "../.././gcc/cp/call.c"
t = implicit_built_in_decls[BUILT_IN_MEMCPY]; 
#line 4919 "../.././gcc/cp/call.c"
t = build_call(t, args); 
#line 4921 "../.././gcc/cp/call.c"
t = convert(((((((args)->list).value))->common).type), t); 
#line 4922 "../.././gcc/cp/call.c"
val = build_indirect_ref(t, 0); } }
#line 4925 "../.././gcc/cp/call.c"
return val; } }}}
#line 4928 "../.././gcc/cp/call.c"
mark_used(fn); 
#line 4930 "../.././gcc/cp/call.c"
if ((((fn)->decl_non_common).vindex) && (flags & (1 << 2)) == 0){
{ 
#line 4932 "../.././gcc/cp/call.c"

#line 4932 "../.././gcc/cp/call.c"
 tree t,*p = (&(((converted_args)->list).value));
#line 4933 "../.././gcc/cp/call.c"

#line 4935 "../.././gcc/cp/call.c"
 tree binfo = lookup_base((((((((*p))->common).type))->common).type), (((fn)->decl_minimal).context), ba_any, (((void *)0)));
#line 4936 "../.././gcc/cp/call.c"
(((void )(((!(binfo && binfo != global_trees[TI_ERROR_MARK]))?fancy_abort("../.././gcc/cp/call.c", 4936, __FUNCTION__) , 0:0)))); 
#line 4938 "../.././gcc/cp/call.c"
(*p) = build_base_path(PLUS_EXPR, (*p), binfo, 1); 
#line 4939 "../.././gcc/cp/call.c"
if (((((*p))->common).side_effects_flag)){
(*p) = save_expr((*p)); }
#line 4941 "../.././gcc/cp/call.c"
t = build_pointer_type((((fn)->common).type)); 
#line 4942 "../.././gcc/cp/call.c"
if ((((fn)->decl_minimal).context) && ((((&(((((((fn)->decl_minimal).context))->type).lang_specific)->u).c))->java_interface))){
fn = build_java_interface_fn_ref(fn, (*p)); }else{
fn = build_vfn_ref((*p), (((fn)->decl_non_common).vindex)); }
#line 4946 "../.././gcc/cp/call.c"
(((fn)->common).type) = t; } }else{
if ((((fn)->function_decl).inline_flag)){
fn = inline_conversion(fn); }else{
fn = build_addr_func(fn); }}
#line 4953 "../.././gcc/cp/call.c"
return build_cxx_call(fn, converted_args); }
 
#line 4961 "../.././gcc/cp/call.c"
 tree build_cxx_call( tree fn,  tree args)  {

#line 4962 "../.././gcc/cp/call.c"

#line 4962 "../.././gcc/cp/call.c"
 tree fndecl;
#line 4964 "../.././gcc/cp/call.c"
fn = build_call(fn, args); 
#line 4967 "../.././gcc/cp/call.c"
fndecl = get_callee_fndecl(fn); 
#line 4968 "../.././gcc/cp/call.c"
if (((!fndecl) || (!(((fndecl)->common).nothrow_flag))) && at_function_scope_p() && cfun){
(((cfun->language))->can_throw) = 1; }
#line 4975 "../.././gcc/cp/call.c"
fn = fold_if_not_in_template(fn); 
#line 4977 "../.././gcc/cp/call.c"
if (((((enum tree_code )(((((fn)->common).type))->common).code)) == VOID_TYPE)){
return fn; }
#line 4980 "../.././gcc/cp/call.c"
fn = require_complete_type(fn); 
#line 4981 "../.././gcc/cp/call.c"
if (fn == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 4984 "../.././gcc/cp/call.c"
if (((((enum tree_code )(((((fn)->common).type))->common).code)) == TEMPLATE_TYPE_PARM || (((enum tree_code )(((((fn)->common).type))->common).code)) == TYPENAME_TYPE || (((enum tree_code )(((((fn)->common).type))->common).code)) == TYPEOF_TYPE || (((enum tree_code )(((((fn)->common).type))->common).code)) == BOUND_TEMPLATE_TEMPLATE_PARM || ((((((fn)->common).type))->type).lang_flag_5))){
fn = build_cplus_new((((fn)->common).type), fn); }
#line 4986 "../.././gcc/cp/call.c"
return convert_from_reference(fn); }
 
#line 4989 "../.././gcc/cp/call.c"
static  tree java_iface_lookup_fn; 
#line 4996 "../.././gcc/cp/call.c"
static  tree build_java_interface_fn_ref( tree fn,  tree instance)  {

#line 4997 "../.././gcc/cp/call.c"

#line 4997 "../.././gcc/cp/call.c"
 tree lookup_args,lookup_fn,method,idx;
#line 4998 "../.././gcc/cp/call.c"

#line 4998 "../.././gcc/cp/call.c"
 tree klass_ref,iface,iface_ref;
#line 4999 "../.././gcc/cp/call.c"

#line 4999 "../.././gcc/cp/call.c"
int i;
#line 5001 "../.././gcc/cp/call.c"
if ((!java_iface_lookup_fn)){
{ 
#line 5003 "../.././gcc/cp/call.c"

#line 5003 "../.././gcc/cp/call.c"
 tree endlink = build_void_list_node();
#line 5004 "../.././gcc/cp/call.c"

#line 5004 "../.././gcc/cp/call.c"
 tree t = tree_cons_stat((( tree )(((void *)0))), global_trees[TI_PTR_TYPE], tree_cons_stat((( tree )(((void *)0))), global_trees[TI_PTR_TYPE], tree_cons_stat((( tree )(((void *)0))), cp_global_trees[CPTI_JAVA_INT_TYPE], endlink)));
#line 5008 "../.././gcc/cp/call.c"
java_iface_lookup_fn = builtin_function("_Jv_LookupInterfaceMethodIdx", build_function_type(global_trees[TI_PTR_TYPE], t), 0, NOT_BUILT_IN, (((void *)0)), (( tree )(((void *)0)))); } }
#line 5016 "../.././gcc/cp/call.c"
klass_ref = build_vtbl_ref(build_indirect_ref(instance, 0), global_trees[TI_INTEGER_ZERO]); 
#line 5020 "../.././gcc/cp/call.c"
iface = (((fn)->decl_minimal).context); 
#line 5021 "../.././gcc/cp/call.c"
iface_ref = lookup_field(iface, ((__builtin_constant_p("class$")?get_identifier_with_length(("class$"), strlen("class$")):get_identifier("class$"))), 0, 0); 
#line 5022 "../.././gcc/cp/call.c"
if ((!iface_ref) || (((enum tree_code )((iface_ref)->common).code)) != VAR_DECL || (((iface_ref)->decl_minimal).context) != iface){
{ 
#line 5026 "../.././gcc/cp/call.c"
error("could not find class$ field in java interface type %qT", iface); 
#line 5027 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 5029 "../.././gcc/cp/call.c"
iface_ref = build_address(iface_ref); 
#line 5030 "../.././gcc/cp/call.c"
iface_ref = convert(build_pointer_type(iface), iface_ref); 
#line 5033 "../.././gcc/cp/call.c"
i = 1; 
#line 5034 "../.././gcc/cp/call.c"
for(method = (((iface)->type).maxval);method;method = (((method)->common).chain)) { { 
#line 5038 "../.././gcc/cp/call.c"
if ((!(((method)->decl_common).virtual_flag))){
continue; }
#line 5038 "../.././gcc/cp/call.c"
if (fn == method){
break; }
#line 5040 "../.././gcc/cp/call.c"
i++; } } 
#line 5042 "../.././gcc/cp/call.c"
idx = build_int_cst((( tree )(((void *)0))), i); 
#line 5044 "../.././gcc/cp/call.c"
lookup_args = tree_cons_stat((( tree )(((void *)0))), klass_ref, tree_cons_stat((( tree )(((void *)0))), iface_ref, build_tree_list_stat((( tree )(((void *)0))), idx))); 
#line 5047 "../.././gcc/cp/call.c"
lookup_fn = build1_stat(ADDR_EXPR, build_pointer_type((((java_iface_lookup_fn)->common).type)), java_iface_lookup_fn); 
#line 5050 "../.././gcc/cp/call.c"
return build3_stat(CALL_EXPR, global_trees[TI_PTR_TYPE], lookup_fn, lookup_args, (( tree )(((void *)0)))); }
 
#line 5059 "../.././gcc/cp/call.c"
 tree in_charge_arg_for_name( tree name)  {

#line 5072 "../.././gcc/cp/call.c"
if (name == cp_global_trees[CPTI_BASE_CTOR_IDENTIFIER] || name == cp_global_trees[CPTI_BASE_DTOR_IDENTIFIER]){
return global_trees[TI_INTEGER_ZERO]; }else{
if (name == cp_global_trees[CPTI_COMPLETE_CTOR_IDENTIFIER]){
return global_trees[TI_INTEGER_ONE]; }else{
if (name == cp_global_trees[CPTI_COMPLETE_DTOR_IDENTIFIER]){
return integer_two_node; }else{
if (name == cp_global_trees[CPTI_DELETING_DTOR_IDENTIFIER]){
return integer_three_node; }}}}
#line 5072 "../.././gcc/cp/call.c"
(fancy_abort("../.././gcc/cp/call.c", 5075, __FUNCTION__)); 
#line 5073 "../.././gcc/cp/call.c"
return (( tree )(((void *)0))); }
 
#line 5093 "../.././gcc/cp/call.c"
 tree build_special_member_call( tree instance,  tree name,  tree args,  tree binfo, int flags)  {

#line 5094 "../.././gcc/cp/call.c"

#line 5094 "../.././gcc/cp/call.c"
 tree fns;
#line 5096 "../.././gcc/cp/call.c"

#line 5096 "../.././gcc/cp/call.c"
 tree class_type;
#line 5098 "../.././gcc/cp/call.c"
(((void )(((!(name == cp_global_trees[CPTI_COMPLETE_CTOR_IDENTIFIER] || name == cp_global_trees[CPTI_BASE_CTOR_IDENTIFIER] || name == cp_global_trees[CPTI_COMPLETE_DTOR_IDENTIFIER] || name == cp_global_trees[CPTI_BASE_DTOR_IDENTIFIER] || name == cp_global_trees[CPTI_DELETING_DTOR_IDENTIFIER] || name == (assignment_operator_name_info[((int )(NOP_EXPR))].identifier)))?fancy_abort("../.././gcc/cp/call.c", 5104, __FUNCTION__) , 0:0)))); 
#line 5104 "../.././gcc/cp/call.c"
if ((tree_code_type[((int )((((enum tree_code )((binfo)->common).code))))] == tcc_type)){
{ 
#line 5110 "../.././gcc/cp/call.c"
if ((!complete_type_or_else(binfo, (( tree )(((void *)0)))))){
return global_trees[TI_ERROR_MARK]; }
#line 5110 "../.././gcc/cp/call.c"
binfo = (((binfo)->type).binfo); } }
#line 5113 "../.././gcc/cp/call.c"
(((void )(((!(binfo != (( tree )(((void *)0)))))?fancy_abort("../.././gcc/cp/call.c", 5114, __FUNCTION__) , 0:0)))); 
#line 5115 "../.././gcc/cp/call.c"
class_type = ((((binfo))->common).type); 
#line 5118 "../.././gcc/cp/call.c"
if (name == cp_global_trees[CPTI_COMPLETE_CTOR_IDENTIFIER] && (!instance)){
{ 
#line 5120 "../.././gcc/cp/call.c"
instance = build_int_cst(build_pointer_type(class_type), 0); 
#line 5121 "../.././gcc/cp/call.c"
instance = build1_stat(INDIRECT_REF, class_type, instance); } }else{
{ 
#line 5131 "../.././gcc/cp/call.c"
if (name == cp_global_trees[CPTI_COMPLETE_DTOR_IDENTIFIER] || name == cp_global_trees[CPTI_BASE_DTOR_IDENTIFIER] || name == cp_global_trees[CPTI_DELETING_DTOR_IDENTIFIER]){
(((void )(((!(args == (( tree )(((void *)0)))))?fancy_abort("../.././gcc/cp/call.c", 5129, __FUNCTION__) , 0:0)))); }
#line 5131 "../.././gcc/cp/call.c"
if ((!comptypes((((((((instance)->common).type))->type).main_variant)), ((((((((binfo))->common).type))->type).main_variant)), 0))){
{ 
#line 5145 "../.././gcc/cp/call.c"
if (name != (assignment_operator_name_info[((int )(NOP_EXPR))].identifier)){
instance = convert_to_base_statically(instance, binfo); }else{
instance = build_base_path(PLUS_EXPR, instance, binfo, 1); }} }} }
#line 5149 "../.././gcc/cp/call.c"
(((void )(((!(instance != (( tree )(((void *)0)))))?fancy_abort("../.././gcc/cp/call.c", 5150, __FUNCTION__) , 0:0)))); 
#line 5151 "../.././gcc/cp/call.c"
fns = lookup_fnfields(binfo, name, 1); 
#line 5156 "../.././gcc/cp/call.c"
if ((name == cp_global_trees[CPTI_BASE_CTOR_IDENTIFIER] || name == cp_global_trees[CPTI_BASE_DTOR_IDENTIFIER]) && ((((&((((class_type)->type).lang_specific)->u).c))->vbases))){
{ 
#line 5160 "../.././gcc/cp/call.c"

#line 5160 "../.././gcc/cp/call.c"
 tree vtt;
#line 5161 "../.././gcc/cp/call.c"

#line 5161 "../.././gcc/cp/call.c"
 tree sub_vtt;
#line 5166 "../.././gcc/cp/call.c"
vtt = (((((((&(((((scope_chain->class_type))->type).lang_specific)->u).c))->vtables)))->common).chain); 
#line 5167 "../.././gcc/cp/call.c"
vtt = decay_conversion(vtt); 
#line 5168 "../.././gcc/cp/call.c"
vtt = build3_stat(COND_EXPR, (((vtt)->common).type), build2_stat(EQ_EXPR, global_trees[TI_BOOLEAN_TYPE], (((cfun->language))->x_in_charge_parm), global_trees[TI_INTEGER_ZERO]), (((cfun->language))->x_vtt_parm), vtt); 
#line 5173 "../.././gcc/cp/call.c"
(((void )(((!((((binfo)->binfo).vtt_subvtt)))?fancy_abort("../.././gcc/cp/call.c", 5174, __FUNCTION__) , 0:0)))); 
#line 5174 "../.././gcc/cp/call.c"
sub_vtt = build2_stat(PLUS_EXPR, (((vtt)->common).type), vtt, (((binfo)->binfo).vtt_subvtt)); 
#line 5177 "../.././gcc/cp/call.c"
args = tree_cons_stat((( tree )(((void *)0))), sub_vtt, args); } }
#line 5180 "../.././gcc/cp/call.c"
return build_new_method_call(instance, fns, args, (((((((binfo))->common).type))->type).binfo), flags); }
 
# 5091 "../.././gcc/cp/call.c" 
# 5196 "../.././gcc/cp/call.c" 
static char *name_as_c_string( tree name,  tree type, unsigned char *free_p)  {

#line 5197 "../.././gcc/cp/call.c"

#line 5197 "../.././gcc/cp/call.c"
char *pretty_name;
#line 5200 "../.././gcc/cp/call.c"
(*free_p) = 0; 
#line 5202 "../.././gcc/cp/call.c"
if ((((name)->common).lang_flag_3)){
{ 
#line 5205 "../.././gcc/cp/call.c"
pretty_name = ((char *)(((const char *)((constructor_name(type))->identifier).id.str))); 
#line 5207 "../.././gcc/cp/call.c"
if (name == cp_global_trees[CPTI_COMPLETE_DTOR_IDENTIFIER] || name == cp_global_trees[CPTI_BASE_DTOR_IDENTIFIER] || name == cp_global_trees[CPTI_DELETING_DTOR_IDENTIFIER]){
{ 
#line 5211 "../.././gcc/cp/call.c"
pretty_name = concat("~", pretty_name, (((void *)0))); 
#line 5213 "../.././gcc/cp/call.c"
(*free_p) = 1; } }} }else{
if ((((name)->common).lang_flag_4)){
{ 
#line 5221 "../.././gcc/cp/call.c"
pretty_name = concat("operator ", type_as_string((((name)->common).type), (0)), (((void *)0))); 
#line 5223 "../.././gcc/cp/call.c"
(*free_p) = 1; } }else{
pretty_name = ((char *)(((const char *)((name)->identifier).id.str))); }}
#line 5228 "../.././gcc/cp/call.c"
return pretty_name; }
 
#line 5235 "../.././gcc/cp/call.c"
 tree build_new_method_call( tree instance,  tree fns,  tree args,  tree conversion_path, int flags)  {

#line 5236 "../.././gcc/cp/call.c"

#line 5236 "../.././gcc/cp/call.c"
struct z_candidate *candidates = 0,*cand;
#line 5237 "../.././gcc/cp/call.c"

#line 5237 "../.././gcc/cp/call.c"
 tree explicit_targs = (( tree )(((void *)0)));
#line 5238 "../.././gcc/cp/call.c"

#line 5238 "../.././gcc/cp/call.c"
 tree basetype = (( tree )(((void *)0)));
#line 5239 "../.././gcc/cp/call.c"

#line 5239 "../.././gcc/cp/call.c"
 tree access_binfo;
#line 5240 "../.././gcc/cp/call.c"

#line 5240 "../.././gcc/cp/call.c"
 tree optype;
#line 5241 "../.././gcc/cp/call.c"

#line 5241 "../.././gcc/cp/call.c"
 tree mem_args = (( tree )(((void *)0))),instance_ptr;
#line 5242 "../.././gcc/cp/call.c"

#line 5242 "../.././gcc/cp/call.c"
 tree name;
#line 5243 "../.././gcc/cp/call.c"

#line 5243 "../.././gcc/cp/call.c"
 tree user_args;
#line 5244 "../.././gcc/cp/call.c"

#line 5244 "../.././gcc/cp/call.c"
 tree call;
#line 5245 "../.././gcc/cp/call.c"

#line 5245 "../.././gcc/cp/call.c"
 tree fn;
#line 5246 "../.././gcc/cp/call.c"

#line 5246 "../.././gcc/cp/call.c"
 tree class_type;
#line 5247 "../.././gcc/cp/call.c"

#line 5247 "../.././gcc/cp/call.c"
int template_only = 0;
#line 5248 "../.././gcc/cp/call.c"

#line 5248 "../.././gcc/cp/call.c"
unsigned char any_viable_p;
#line 5249 "../.././gcc/cp/call.c"

#line 5249 "../.././gcc/cp/call.c"
 tree orig_instance;
#line 5250 "../.././gcc/cp/call.c"

#line 5250 "../.././gcc/cp/call.c"
 tree orig_fns;
#line 5251 "../.././gcc/cp/call.c"

#line 5251 "../.././gcc/cp/call.c"
 tree orig_args;
#line 5252 "../.././gcc/cp/call.c"

#line 5252 "../.././gcc/cp/call.c"
void *p;
#line 5254 "../.././gcc/cp/call.c"
(((void )(((!(instance != (( tree )(((void *)0)))))?fancy_abort("../.././gcc/cp/call.c", 5255, __FUNCTION__) , 0:0)))); 
#line 5256 "../.././gcc/cp/call.c"
if (((instance) == global_trees[TI_ERROR_MARK] || ((instance) && ((((instance))->common).type) == global_trees[TI_ERROR_MARK])) || ((fns) == global_trees[TI_ERROR_MARK] || ((fns) && ((((fns))->common).type) == global_trees[TI_ERROR_MARK])) || args == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 5261 "../.././gcc/cp/call.c"
if ((!((((enum tree_code )((fns)->common).code)) == BASELINK))){
{ 
#line 5263 "../.././gcc/cp/call.c"
error("call to non-function %qD", fns); 
#line 5264 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 5267 "../.././gcc/cp/call.c"
orig_instance = instance; 
#line 5268 "../.././gcc/cp/call.c"
orig_fns = fns; 
#line 5269 "../.././gcc/cp/call.c"
orig_args = args; 
#line 5272 "../.././gcc/cp/call.c"
if ((!conversion_path)){
conversion_path = (((((struct tree_baselink *)(fns)))->binfo)); }
#line 5274 "../.././gcc/cp/call.c"
access_binfo = (((((struct tree_baselink *)(fns)))->access_binfo)); 
#line 5275 "../.././gcc/cp/call.c"
optype = (((((fns))->common).chain)); 
#line 5276 "../.././gcc/cp/call.c"
fns = (((((struct tree_baselink *)(fns)))->functions)); 
#line 5277 "../.././gcc/cp/call.c"
if ((((enum tree_code )((fns)->common).code)) == TEMPLATE_ID_EXPR){
{ 
#line 5279 "../.././gcc/cp/call.c"
explicit_targs = (((fns)->exp).operands[1]); 
#line 5280 "../.././gcc/cp/call.c"
fns = (((fns)->exp).operands[0]); 
#line 5281 "../.././gcc/cp/call.c"
template_only = 1; } }
#line 5283 "../.././gcc/cp/call.c"
(((void )(((!((((enum tree_code )((fns)->common).code)) == FUNCTION_DECL || (((enum tree_code )((fns)->common).code)) == TEMPLATE_DECL || (((enum tree_code )((fns)->common).code)) == OVERLOAD))?fancy_abort("../.././gcc/cp/call.c", 5286, __FUNCTION__) , 0:0)))); 
#line 5286 "../.././gcc/cp/call.c"
fn = get_first_fn(fns); 
#line 5287 "../.././gcc/cp/call.c"
name = (((fn)->decl_minimal).name); 
#line 5289 "../.././gcc/cp/call.c"
basetype = ((((((instance)->common).type))->type).main_variant); 
#line 5290 "../.././gcc/cp/call.c"
(((void )(((!(((((((enum tree_code )((basetype)->common).code))) == RECORD_TYPE || ((((enum tree_code )((basetype)->common).code))) == UNION_TYPE) && (((basetype)->type).lang_flag_5))))?fancy_abort("../.././gcc/cp/call.c", 5291, __FUNCTION__) , 0:0)))); 
#line 5292 "../.././gcc/cp/call.c"
if ((scope_chain->x_processing_template_decl)){
{ 
#line 5294 "../.././gcc/cp/call.c"
instance = build_non_dependent_expr(instance); 
#line 5295 "../.././gcc/cp/call.c"
args = build_non_dependent_args(orig_args); } }
#line 5303 "../.././gcc/cp/call.c"
user_args = args; 
#line 5304 "../.././gcc/cp/call.c"
if ((((name)->common).lang_flag_3)){
{ 
#line 5308 "../.././gcc/cp/call.c"
(((void )(((!(name != cp_global_trees[CPTI_CTOR_IDENTIFIER]))?fancy_abort("../.././gcc/cp/call.c", 5309, __FUNCTION__) , 0:0)))); 
#line 5310 "../.././gcc/cp/call.c"
(((void )(((!(name != cp_global_trees[CPTI_DTOR_IDENTIFIER]))?fancy_abort("../.././gcc/cp/call.c", 5311, __FUNCTION__) , 0:0)))); 
#line 5312 "../.././gcc/cp/call.c"
if ((name == cp_global_trees[CPTI_BASE_CTOR_IDENTIFIER] || name == cp_global_trees[CPTI_BASE_DTOR_IDENTIFIER]) && ((((&((((basetype)->type).lang_specific)->u).c))->vbases))){
user_args = (((user_args)->common).chain); }} }
#line 5318 "../.././gcc/cp/call.c"
args = resolve_args(args); 
#line 5319 "../.././gcc/cp/call.c"
if (args == global_trees[TI_ERROR_MARK]){
return global_trees[TI_ERROR_MARK]; }
#line 5322 "../.././gcc/cp/call.c"
instance_ptr = build_this(instance); 
#line 5326 "../.././gcc/cp/call.c"
if ((((((fn)->decl_common).lang_specific)->decl_flags).destructor_attr)){
{ 
#line 5328 "../.././gcc/cp/call.c"

#line 5328 "../.././gcc/cp/call.c"
 tree type = build_pointer_type(basetype);
#line 5329 "../.././gcc/cp/call.c"
if ((!comptypes((type), ((((instance_ptr)->common).type)), 0))){
instance_ptr = build_nop(type, instance_ptr); }
#line 5331 "../.././gcc/cp/call.c"
name = cp_global_trees[CPTI_COMPLETE_DTOR_IDENTIFIER]; } }
#line 5334 "../.././gcc/cp/call.c"
class_type = ((conversion_path?((((conversion_path))->common).type):(( tree )(((void *)0))))); 
#line 5335 "../.././gcc/cp/call.c"
mem_args = tree_cons_stat((( tree )(((void *)0))), instance_ptr, args); 
#line 5338 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 5340 "../.././gcc/cp/call.c"
for(fn = fns;fn;fn = ((((((enum tree_code )((fn)->common).code)) == OVERLOAD)?(((fn)->common).chain):(( tree )(((void *)0)))))) { { 
#line 5342 "../.././gcc/cp/call.c"

#line 5342 "../.././gcc/cp/call.c"
 tree t = ((((((enum tree_code )((fn)->common).code)) == OVERLOAD)?(((((struct tree_overload *)(fn)))->function)):(fn)));
#line 5343 "../.././gcc/cp/call.c"

#line 5343 "../.././gcc/cp/call.c"
 tree this_arglist;
#line 5346 "../.././gcc/cp/call.c"
if ((flags & (1 << 3)) && (((((t)->decl_common).lang_specific)->decl_flags).nonconverting)){
continue; }
#line 5350 "../.././gcc/cp/call.c"
if (((((enum tree_code )(((((t)->common).type))->common).code)) == METHOD_TYPE)){
this_arglist = mem_args; }else{
this_arglist = args; }
#line 5355 "../.././gcc/cp/call.c"
if ((((enum tree_code )((t)->common).code)) == TEMPLATE_DECL){
add_template_candidate((&candidates), t, class_type, explicit_targs, this_arglist, optype, access_binfo, conversion_path, flags, DEDUCE_CALL); }else{
if ((!template_only)){
add_function_candidate((&candidates), t, class_type, this_arglist, access_binfo, conversion_path, flags); }}} } 
#line 5374 "../.././gcc/cp/call.c"
candidates = splice_viable(candidates, pedantic, (&any_viable_p)); 
#line 5375 "../.././gcc/cp/call.c"
if ((!any_viable_p)){
{ 
#line 5390 "../.././gcc/cp/call.c"
if ((!((((basetype)->type).size) != (( tree )(((void *)0)))))){
(cxx_incomplete_type_diagnostic((instance_ptr), (basetype), 0)); }else{
{ 
#line 5381 "../.././gcc/cp/call.c"

#line 5381 "../.././gcc/cp/call.c"
char *pretty_name;
#line 5382 "../.././gcc/cp/call.c"

#line 5382 "../.././gcc/cp/call.c"
unsigned char free_p;
#line 5384 "../.././gcc/cp/call.c"
pretty_name = name_as_c_string(name, basetype, (&free_p)); 
#line 5385 "../.././gcc/cp/call.c"
error("no matching function for call to %<%T::%s(%A)%#V%>", basetype, pretty_name, user_args, ((((((instance_ptr)->common).type))->common).type)); 
#line 5388 "../.././gcc/cp/call.c"
if (free_p){
free(pretty_name); }} }
#line 5391 "../.././gcc/cp/call.c"
print_z_candidates(candidates); 
#line 5392 "../.././gcc/cp/call.c"
call = global_trees[TI_ERROR_MARK]; } }else{
{ 
#line 5396 "../.././gcc/cp/call.c"
cand = tourney(candidates); 
#line 5397 "../.././gcc/cp/call.c"
if (cand == 0){
{ 
#line 5399 "../.././gcc/cp/call.c"

#line 5399 "../.././gcc/cp/call.c"
char *pretty_name;
#line 5400 "../.././gcc/cp/call.c"

#line 5400 "../.././gcc/cp/call.c"
unsigned char free_p;
#line 5402 "../.././gcc/cp/call.c"
pretty_name = name_as_c_string(name, basetype, (&free_p)); 
#line 5403 "../.././gcc/cp/call.c"
error("call of overloaded %<%s(%A)%> is ambiguous", pretty_name, user_args); 
#line 5405 "../.././gcc/cp/call.c"
print_z_candidates(candidates); 
#line 5406 "../.././gcc/cp/call.c"
if (free_p){
free(pretty_name); }
#line 5408 "../.././gcc/cp/call.c"
call = global_trees[TI_ERROR_MARK]; } }else{
{ 
#line 5424 "../.././gcc/cp/call.c"
if ((!(flags & (1 << 2))) && ((((((cand->fn))->decl_common).lang_specific)->decl_flags).pure_virtual) && instance == ((cfun?(((cfun->language))->x_current_class_ref):(( tree )(((void *)0))))) && ((((((current_function_decl)->decl_common).lang_specific)->decl_flags).constructor_attr) || (((((current_function_decl)->decl_common).lang_specific)->decl_flags).destructor_attr))){
warning(0, (((((((current_function_decl)->decl_common).lang_specific)->decl_flags).constructor_attr)?"abstract virtual %q#D called from constructor":"abstract virtual %q#D called from destructor")), (cand->fn)); }
#line 5424 "../.././gcc/cp/call.c"
if ((((enum tree_code )((((((cand->fn))->common).type))->common).code)) == METHOD_TYPE && is_dummy_object(instance_ptr)){
{ 
#line 5428 "../.././gcc/cp/call.c"
error("cannot call member function %qD without object", (cand->fn)); 
#line 5429 "../.././gcc/cp/call.c"
call = global_trees[TI_ERROR_MARK]; } }else{
{ 
#line 5437 "../.././gcc/cp/call.c"
if (((((cand->fn))->decl_non_common).vindex) && (!(flags & (1 << 2))) && resolves_to_fixed_type_p(instance, 0)){
flags |= (1 << 2); }
#line 5437 "../.././gcc/cp/call.c"
call = build_over_call(cand, flags); 
#line 5442 "../.././gcc/cp/call.c"
if ((((enum tree_code )((((((cand->fn))->common).type))->common).code)) != METHOD_TYPE && (!is_dummy_object(instance_ptr)) && (((instance)->common).side_effects_flag)){
call = build2_stat(COMPOUND_EXPR, (((call)->common).type), instance, call); }} }} }} }
#line 5451 "../.././gcc/cp/call.c"
if ((scope_chain->x_processing_template_decl) && call != global_trees[TI_ERROR_MARK]){
call = (build_min_non_dep(CALL_EXPR, call, build_min_nt(COMPONENT_REF, orig_instance, orig_fns, (( tree )(((void *)0)))), orig_args, (( tree )(((void *)0))))); }
#line 5458 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 5458 "../.././gcc/cp/call.c"

#line 5458 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 5458 "../.././gcc/cp/call.c"

#line 5458 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 5458 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 5460 "../.././gcc/cp/call.c"
return call; }
 
#line 5468 "../.././gcc/cp/call.c"
static unsigned char is_subseq( conversion *ics1,  conversion *ics2)  {

#line 5475 "../.././gcc/cp/call.c"
while((ics1->kind) == ck_rvalue || (ics1->kind) == ck_lvalue) { ics1 = (ics1->u).next; } 
#line 5477 "../.././gcc/cp/call.c"
while(1) { { 
#line 5481 "../.././gcc/cp/call.c"
while((ics2->kind) == ck_rvalue || (ics2->kind) == ck_lvalue) { ics2 = (ics2->u).next; } 
#line 5483 "../.././gcc/cp/call.c"
if ((ics2->kind) == ck_user || (ics2->kind) == ck_ambig || (ics2->kind) == ck_identity){
return 0; }
#line 5492 "../.././gcc/cp/call.c"
ics2 = (ics2->u).next; 
#line 5494 "../.././gcc/cp/call.c"
if ((ics2->kind) == (ics1->kind) && comptypes(((ics2->type)), ((ics1->type)), 0) && comptypes((((ics2->u).next->type)), (((ics1->u).next->type)), 0)){
return 1; }} } }
 
#line 5507 "../.././gcc/cp/call.c"
unsigned char is_properly_derived_from( tree derived,  tree base)  {

#line 5514 "../.././gcc/cp/call.c"
if ((!(((((enum tree_code )((derived)->common).code))) == RECORD_TYPE || ((((enum tree_code )((derived)->common).code))) == UNION_TYPE)) || (!(((((enum tree_code )((base)->common).code))) == RECORD_TYPE || ((((enum tree_code )((base)->common).code))) == UNION_TYPE))){
return 0; }
#line 5514 "../.././gcc/cp/call.c"
return ((!comptypes(((((derived)->type).main_variant)), ((((base)->type).main_variant)), 0)) && (lookup_base((derived), (base), ba_any, (((void *)0))) != (( tree )(((void *)0))))); }
 
#line 5526 "../.././gcc/cp/call.c"
static void maybe_handle_implicit_object( conversion **ics)  {

#line 5553 "../.././gcc/cp/call.c"
if ((((*ics))->this_p)){
{ 
#line 5536 "../.././gcc/cp/call.c"

#line 5536 "../.././gcc/cp/call.c"
 conversion *t = (*ics);
#line 5537 "../.././gcc/cp/call.c"

#line 5537 "../.././gcc/cp/call.c"
 tree reference_type;
#line 5542 "../.././gcc/cp/call.c"
reference_type = ((((t->type))->common).type); 
#line 5543 "../.././gcc/cp/call.c"
reference_type = build_reference_type(reference_type); 
#line 5545 "../.././gcc/cp/call.c"
if ((t->kind) == ck_qual){
t = (t->u).next; }
#line 5547 "../.././gcc/cp/call.c"
if ((t->kind) == ck_ptr){
t = (t->u).next; }
#line 5549 "../.././gcc/cp/call.c"
t = build_identity_conv(((((t->type))->common).type), (( tree )(((void *)0)))); 
#line 5550 "../.././gcc/cp/call.c"
t = direct_reference_binding(reference_type, t); 
#line 5551 "../.././gcc/cp/call.c"
(*ics) = t; } }}
 
#line 5560 "../.././gcc/cp/call.c"
static  tree maybe_handle_ref_bind( conversion **ics)  {

#line 5571 "../.././gcc/cp/call.c"
if ((((*ics))->kind) == ck_ref_bind){
{ 
#line 5563 "../.././gcc/cp/call.c"

#line 5563 "../.././gcc/cp/call.c"
 conversion *old_ics = (*ics);
#line 5564 "../.././gcc/cp/call.c"

#line 5564 "../.././gcc/cp/call.c"
 tree type = ((((old_ics->type))->common).type);
#line 5565 "../.././gcc/cp/call.c"
(*ics) = (old_ics->u).next; 
#line 5566 "../.././gcc/cp/call.c"
(((*ics))->user_conv_p) = (old_ics->user_conv_p); 
#line 5567 "../.././gcc/cp/call.c"
(((*ics))->bad_p) = (old_ics->bad_p); 
#line 5568 "../.././gcc/cp/call.c"
return type; } }
#line 5571 "../.././gcc/cp/call.c"
return (( tree )(((void *)0))); }
 
#line 5585 "../.././gcc/cp/call.c"
static int compare_ics( conversion *ics1,  conversion *ics2)  {

#line 5586 "../.././gcc/cp/call.c"

#line 5586 "../.././gcc/cp/call.c"
 tree from_type1;
#line 5587 "../.././gcc/cp/call.c"

#line 5587 "../.././gcc/cp/call.c"
 tree from_type2;
#line 5588 "../.././gcc/cp/call.c"

#line 5588 "../.././gcc/cp/call.c"
 tree to_type1;
#line 5589 "../.././gcc/cp/call.c"

#line 5589 "../.././gcc/cp/call.c"
 tree to_type2;
#line 5590 "../.././gcc/cp/call.c"

#line 5590 "../.././gcc/cp/call.c"
 tree deref_from_type1 = (( tree )(((void *)0)));
#line 5591 "../.././gcc/cp/call.c"

#line 5591 "../.././gcc/cp/call.c"
 tree deref_from_type2 = (( tree )(((void *)0)));
#line 5592 "../.././gcc/cp/call.c"

#line 5592 "../.././gcc/cp/call.c"
 tree deref_to_type1 = (( tree )(((void *)0)));
#line 5593 "../.././gcc/cp/call.c"

#line 5593 "../.././gcc/cp/call.c"
 tree deref_to_type2 = (( tree )(((void *)0)));
#line 5594 "../.././gcc/cp/call.c"

#line 5594 "../.././gcc/cp/call.c"
 conversion_rank rank1,rank2;
#line 5599 "../.././gcc/cp/call.c"

#line 5599 "../.././gcc/cp/call.c"
 tree target_type1;
#line 5600 "../.././gcc/cp/call.c"

#line 5600 "../.././gcc/cp/call.c"
 tree target_type2;
#line 5603 "../.././gcc/cp/call.c"
maybe_handle_implicit_object((&ics1)); 
#line 5604 "../.././gcc/cp/call.c"
maybe_handle_implicit_object((&ics2)); 
#line 5607 "../.././gcc/cp/call.c"
target_type1 = maybe_handle_ref_bind((&ics1)); 
#line 5608 "../.././gcc/cp/call.c"
target_type2 = maybe_handle_ref_bind((&ics2)); 
# 5583 "../.././gcc/cp/call.c" 
# 5622 "../.././gcc/cp/call.c" 
rank1 = ((((ics1)->bad_p)?cr_bad:(((ics1)->ellipsis_p)?cr_ellipsis:(((ics1)->user_conv_p)?cr_user:((ics1)->rank))))); 
#line 5623 "../.././gcc/cp/call.c"
rank2 = ((((ics2)->bad_p)?cr_bad:(((ics2)->ellipsis_p)?cr_ellipsis:(((ics2)->user_conv_p)?cr_user:((ics2)->rank))))); 
#line 5625 "../.././gcc/cp/call.c"
if (rank1 > rank2){
return (-1); }else{
if (rank1 < rank2){
return 1; }}
#line 5630 "../.././gcc/cp/call.c"
if (rank1 == cr_bad){
{ 
#line 5643 "../.././gcc/cp/call.c"
if ((ics1->user_conv_p) > (ics2->user_conv_p) || (ics1->rank) > (ics2->rank)){
return (-1); }else{
if ((ics1->user_conv_p) < (ics2->user_conv_p) || (ics1->rank) < (ics2->rank)){
return 1; }}} }
#line 5645 "../.././gcc/cp/call.c"
if ((ics1->ellipsis_p)){
return 0; }
#line 5655 "../.././gcc/cp/call.c"
if ((ics1->user_conv_p)){
{ 
#line 5657 "../.././gcc/cp/call.c"

#line 5657 "../.././gcc/cp/call.c"
 conversion *t1;
#line 5658 "../.././gcc/cp/call.c"

#line 5658 "../.././gcc/cp/call.c"
 conversion *t2;
#line 5660 "../.././gcc/cp/call.c"
for(t1 = ics1;(t1->kind) != ck_user;t1 = (t1->u).next) { if ((t1->kind) == ck_ambig){
return 0; }} 
#line 5663 "../.././gcc/cp/call.c"
for(t2 = ics2;(t2->kind) != ck_user;t2 = (t2->u).next) { if ((t2->kind) == ck_ambig){
return 0; }} 
#line 5667 "../.././gcc/cp/call.c"
if (((t1->cand)->fn) != ((t2->cand)->fn)){
return 0; }
#line 5672 "../.././gcc/cp/call.c"
from_type1 = (t1->type); 
#line 5673 "../.././gcc/cp/call.c"
from_type2 = (t2->type); } }else{
{ 
#line 5677 "../.././gcc/cp/call.c"

#line 5677 "../.././gcc/cp/call.c"
 conversion *t1;
#line 5678 "../.././gcc/cp/call.c"

#line 5678 "../.././gcc/cp/call.c"
 conversion *t2;
#line 5693 "../.././gcc/cp/call.c"
t1 = ics1; 
#line 5694 "../.././gcc/cp/call.c"
while((t1->kind) != ck_identity) { t1 = (t1->u).next; } 
#line 5696 "../.././gcc/cp/call.c"
from_type1 = (t1->type); 
#line 5698 "../.././gcc/cp/call.c"
t2 = ics2; 
#line 5699 "../.././gcc/cp/call.c"
while((t2->kind) != ck_identity) { t2 = (t2->u).next; } 
#line 5701 "../.././gcc/cp/call.c"
from_type2 = (t2->type); } }
#line 5704 "../.././gcc/cp/call.c"
if (comptypes((from_type1), (from_type2), 0)){
{ 
#line 5708 "../.././gcc/cp/call.c"
if (is_subseq(ics1, ics2)){
return 1; }
#line 5708 "../.././gcc/cp/call.c"
if (is_subseq(ics2, ics1)){
return (-1); }} }
# 5693 "../.././gcc/cp/call.c" 
# 5736 "../.././gcc/cp/call.c" 
if ((ics1->rank) < (ics2->rank)){
return 1; }else{
if ((ics2->rank) < (ics1->rank)){
return (-1); }}
#line 5741 "../.././gcc/cp/call.c"
to_type1 = (ics1->type); 
#line 5742 "../.././gcc/cp/call.c"
to_type2 = (ics2->type); 
#line 5744 "../.././gcc/cp/call.c"
if (((((enum tree_code )((from_type1)->common).code)) == POINTER_TYPE) && ((((enum tree_code )((from_type2)->common).code)) == POINTER_TYPE) && ((((enum tree_code )((to_type1)->common).code)) == POINTER_TYPE) && ((((enum tree_code )((to_type2)->common).code)) == POINTER_TYPE)){
{ 
#line 5749 "../.././gcc/cp/call.c"
deref_from_type1 = (((from_type1)->common).type); 
#line 5750 "../.././gcc/cp/call.c"
deref_from_type2 = (((from_type2)->common).type); 
#line 5751 "../.././gcc/cp/call.c"
deref_to_type1 = (((to_type1)->common).type); 
#line 5752 "../.././gcc/cp/call.c"
deref_to_type2 = (((to_type2)->common).type); } }else{
if ((((((enum tree_code )((from_type1)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((from_type2)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((to_type1)->common).code)) == OFFSET_TYPE) && ((((enum tree_code )((to_type2)->common).code)) == OFFSET_TYPE)) || (((((enum tree_code )((from_type1)->common).code)) == RECORD_TYPE && (((from_type1)->type).lang_specific) && ((((&((((from_type1)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && ((((enum tree_code )((from_type2)->common).code)) == RECORD_TYPE && (((from_type2)->type).lang_specific) && ((((&((((from_type2)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && ((((enum tree_code )((to_type1)->common).code)) == RECORD_TYPE && (((to_type1)->type).lang_specific) && ((((&((((to_type1)->type).lang_specific)->u).c))->ptrmemfunc_flag))) && ((((enum tree_code )((to_type2)->common).code)) == RECORD_TYPE && (((to_type2)->type).lang_specific) && ((((&((((to_type2)->type).lang_specific)->u).c))->ptrmemfunc_flag))))){
{ 
#line 5765 "../.././gcc/cp/call.c"
deref_to_type1 = ((((((enum tree_code )((from_type1)->common).code)) == OFFSET_TYPE)?(((from_type1)->type).maxval):(((((((((((((from_type1)->type).values))->common).type)))->common).type))->type).maxval))); 
#line 5766 "../.././gcc/cp/call.c"
deref_to_type2 = ((((((enum tree_code )((from_type2)->common).code)) == OFFSET_TYPE)?(((from_type2)->type).maxval):(((((((((((((from_type2)->type).values))->common).type)))->common).type))->type).maxval))); 
#line 5767 "../.././gcc/cp/call.c"
deref_from_type1 = ((((((enum tree_code )((to_type1)->common).code)) == OFFSET_TYPE)?(((to_type1)->type).maxval):(((((((((((((to_type1)->type).values))->common).type)))->common).type))->type).maxval))); 
#line 5768 "../.././gcc/cp/call.c"
deref_from_type2 = ((((((enum tree_code )((to_type2)->common).code)) == OFFSET_TYPE)?(((to_type2)->type).maxval):(((((((((((((to_type2)->type).values))->common).type)))->common).type))->type).maxval))); } }}
#line 5771 "../.././gcc/cp/call.c"
if (deref_from_type1 != (( tree )(((void *)0))) && (((((enum tree_code )((deref_from_type1)->common).code))) == RECORD_TYPE || ((((enum tree_code )((deref_from_type1)->common).code))) == UNION_TYPE) && (((((enum tree_code )((deref_from_type2)->common).code))) == RECORD_TYPE || ((((enum tree_code )((deref_from_type2)->common).code))) == UNION_TYPE)){
{ 
#line 5842 "../.././gcc/cp/call.c"
if ((((enum tree_code )((deref_to_type1)->common).code)) == VOID_TYPE && (((enum tree_code )((deref_to_type2)->common).code)) == VOID_TYPE){
{ 
#line 5792 "../.././gcc/cp/call.c"
if (is_properly_derived_from(deref_from_type1, deref_from_type2)){
return (-1); }else{
if (is_properly_derived_from(deref_from_type2, deref_from_type1)){
return 1; }}} }else{
if ((((enum tree_code )((deref_to_type1)->common).code)) == VOID_TYPE || (((enum tree_code )((deref_to_type2)->common).code)) == VOID_TYPE){
{ 
#line 5809 "../.././gcc/cp/call.c"
if (comptypes((deref_from_type1), (deref_from_type2), 0)){
{ 
#line 5808 "../.././gcc/cp/call.c"
if ((((enum tree_code )((deref_to_type2)->common).code)) == VOID_TYPE){
{ 
#line 5803 "../.././gcc/cp/call.c"
if (is_properly_derived_from(deref_from_type1, deref_to_type1)){
return 1; }} }else{
if (is_properly_derived_from(deref_from_type1, deref_to_type2)){
return (-1); }}} }} }else{
if ((((((enum tree_code )((deref_to_type1)->common).code))) == RECORD_TYPE || ((((enum tree_code )((deref_to_type1)->common).code))) == UNION_TYPE) && (((((enum tree_code )((deref_to_type2)->common).code))) == RECORD_TYPE || ((((enum tree_code )((deref_to_type2)->common).code))) == UNION_TYPE)){
{ 
#line 5841 "../.././gcc/cp/call.c"
if (comptypes((deref_from_type1), (deref_from_type2), 0)){
{ 
# 5783 "../.././gcc/cp/call.c" 
# 5831 "../.././gcc/cp/call.c" 
if (is_properly_derived_from(deref_to_type1, deref_to_type2)){
return 1; }else{
if (is_properly_derived_from(deref_to_type2, deref_to_type1)){
return (-1); }}} }else{
if (comptypes((deref_to_type1), (deref_to_type2), 0)){
{ 
#line 5840 "../.././gcc/cp/call.c"
if (is_properly_derived_from(deref_from_type2, deref_from_type1)){
return 1; }else{
if (is_properly_derived_from(deref_from_type1, deref_from_type2)){
return (-1); }}} }}} }}}} }else{
if (((((((enum tree_code )((non_reference(from_type1))->common).code))) == RECORD_TYPE || ((((enum tree_code )((non_reference(from_type1))->common).code))) == UNION_TYPE) && (((non_reference(from_type1))->type).lang_flag_5)) && comptypes((from_type1), (from_type2), 0)){
{ 
#line 5846 "../.././gcc/cp/call.c"

#line 5846 "../.././gcc/cp/call.c"
 tree from = non_reference(from_type1);
#line 5855 "../.././gcc/cp/call.c"
if (is_properly_derived_from(from, to_type1) && is_properly_derived_from(from, to_type2)){
{ 
#line 5862 "../.././gcc/cp/call.c"
if (is_properly_derived_from(to_type1, to_type2)){
return 1; }else{
if (is_properly_derived_from(to_type2, to_type1)){
return (-1); }}} }} }else{
if (((((((enum tree_code )((non_reference(to_type1))->common).code))) == RECORD_TYPE || ((((enum tree_code )((non_reference(to_type1))->common).code))) == UNION_TYPE) && (((non_reference(to_type1))->type).lang_flag_5)) && comptypes((to_type1), (to_type2), 0)){
{ 
#line 5867 "../.././gcc/cp/call.c"

#line 5867 "../.././gcc/cp/call.c"
 tree to = non_reference(to_type1);
# 5855 "../.././gcc/cp/call.c" 
# 5876 "../.././gcc/cp/call.c" 
if (is_properly_derived_from(from_type1, to) && is_properly_derived_from(from_type2, to)){
{ 
#line 5883 "../.././gcc/cp/call.c"
if (is_properly_derived_from(from_type2, from_type1)){
return 1; }else{
if (is_properly_derived_from(from_type1, from_type2)){
return (-1); }}} }} }}}
#line 5892 "../.././gcc/cp/call.c"
if ((ics1->kind) == ck_qual && (ics2->kind) == ck_qual && comptypes((from_type1), (from_type2), 0)){
return comp_cv_qual_signature(to_type1, to_type2); }
#line 5905 "../.././gcc/cp/call.c"
if (target_type1 && target_type2 && comptypes(((((to_type1)->type).main_variant)), ((((to_type2)->type).main_variant)), 0)){
return comp_cv_qualification(target_type2, target_type1); }
#line 5910 "../.././gcc/cp/call.c"
return 0; }
 
#line 5916 "../.././gcc/cp/call.c"
static  tree source_type( conversion *t)  {

#line 5923 "../.././gcc/cp/call.c"
for(;;t = (t->u).next) { { 
#line 5923 "../.././gcc/cp/call.c"
if ((t->kind) == ck_user || (t->kind) == ck_ambig || (t->kind) == ck_identity){
return (t->type); }} } 
#line 5924 "../.././gcc/cp/call.c"
(fancy_abort("../.././gcc/cp/call.c", 5925, __FUNCTION__)); }
 
#line 5933 "../.././gcc/cp/call.c"
static void add_warning(struct z_candidate *winner, struct z_candidate *loser)  {

#line 5934 "../.././gcc/cp/call.c"

#line 5934 "../.././gcc/cp/call.c"
 candidate_warning *cw;
#line 5936 "../.././gcc/cp/call.c"
cw = conversion_obstack_alloc(sizeof ( candidate_warning )); 
#line 5937 "../.././gcc/cp/call.c"
(cw->loser) = loser; 
#line 5938 "../.././gcc/cp/call.c"
(cw->next) = (winner->warnings); 
#line 5939 "../.././gcc/cp/call.c"
(winner->warnings) = cw; }
 
# 5905 "../.././gcc/cp/call.c" 
# 5952 "../.././gcc/cp/call.c" 
static int joust(struct z_candidate *cand1, struct z_candidate *cand2, unsigned char warn)  {

#line 5953 "../.././gcc/cp/call.c"

#line 5953 "../.././gcc/cp/call.c"
int winner = 0;
#line 5954 "../.././gcc/cp/call.c"

#line 5954 "../.././gcc/cp/call.c"
int off1 = 0,off2 = 0;
#line 5955 "../.././gcc/cp/call.c"

#line 5955 "../.././gcc/cp/call.c"
 size_t i;
#line 5956 "../.././gcc/cp/call.c"

#line 5956 "../.././gcc/cp/call.c"
 size_t len;
#line 5960 "../.././gcc/cp/call.c"
if ((cand1->viable) > (cand2->viable)){
return 1; }
#line 5962 "../.././gcc/cp/call.c"
if ((cand1->viable) < (cand2->viable)){
return (-1); }
#line 5967 "../.././gcc/cp/call.c"
if ((cand1->fn) == (cand2->fn) && (((tree_code_type[((int )((((enum tree_code )(((cand1->fn))->common).code))))] == tcc_type) || (tree_code_type[((int )((((enum tree_code )(((cand1->fn))->common).code))))] == tcc_declaration)))){
return 1; }
#line 5983 "../.././gcc/cp/call.c"
len = (cand1->num_convs); 
#line 5984 "../.././gcc/cp/call.c"
if (len != (cand2->num_convs)){
{ 
#line 5986 "../.././gcc/cp/call.c"

#line 5986 "../.././gcc/cp/call.c"
int static_1 = ((((((cand1->fn))->decl_common).lang_specific)->decl_flags).static_function);
#line 5987 "../.././gcc/cp/call.c"

#line 5987 "../.././gcc/cp/call.c"
int static_2 = ((((((cand2->fn))->decl_common).lang_specific)->decl_flags).static_function);
#line 5989 "../.././gcc/cp/call.c"
(((void )(((!(static_1 != static_2))?fancy_abort("../.././gcc/cp/call.c", 5989, __FUNCTION__) , 0:0)))); 
#line 5991 "../.././gcc/cp/call.c"
if (static_1){
off2 = 1; }else{
{ 
#line 5995 "../.././gcc/cp/call.c"
off1 = 1; 
#line 5996 "../.././gcc/cp/call.c"
(--len); } }} }
#line 6000 "../.././gcc/cp/call.c"
for(i = 0;i < len;(++i)) { { 
#line 6002 "../.././gcc/cp/call.c"

#line 6002 "../.././gcc/cp/call.c"
 conversion *t1 = (cand1->convs)[i + off1];
#line 6003 "../.././gcc/cp/call.c"

#line 6003 "../.././gcc/cp/call.c"
 conversion *t2 = (cand2->convs)[i + off2];
#line 6004 "../.././gcc/cp/call.c"

#line 6004 "../.././gcc/cp/call.c"
int comp = compare_ics(t1, t2);
#line 6006 "../.././gcc/cp/call.c"
if (comp != 0){
{ 
#line 6041 "../.././gcc/cp/call.c"
if (warn_sign_promo && (((((t1)->bad_p)?cr_bad:(((t1)->ellipsis_p)?cr_ellipsis:(((t1)->user_conv_p)?cr_user:((t1)->rank))))) + ((((t2)->bad_p)?cr_bad:(((t2)->ellipsis_p)?cr_ellipsis:(((t2)->user_conv_p)?cr_user:((t2)->rank))))) == cr_std + cr_promotion) && (t1->kind) == ck_std && (t2->kind) == ck_std && (((enum tree_code )(((t1->type))->common).code)) == INTEGER_TYPE && (((enum tree_code )(((t2->type))->common).code)) == INTEGER_TYPE && (((((t1->type))->type).precision) == ((((t2->type))->type).precision)) && ((((((t1->u).next->type))->common).unsigned_flag) || ((((enum tree_code )((((t1->u).next->type))->common).code)) == ENUMERAL_TYPE))){
{ 
#line 6021 "../.././gcc/cp/call.c"

#line 6021 "../.././gcc/cp/call.c"
 tree type = ((t1->u).next->type);
#line 6022 "../.././gcc/cp/call.c"

#line 6022 "../.././gcc/cp/call.c"
 tree type1,type2;
#line 6023 "../.././gcc/cp/call.c"

#line 6023 "../.././gcc/cp/call.c"
struct z_candidate *w,*l;
#line 6024 "../.././gcc/cp/call.c"
if (comp > 0){
type1 = (t1->type) , type2 = (t2->type) , w = cand1 , l = cand2; }else{
type1 = (t2->type) , type2 = (t1->type) , w = cand2 , l = cand1; }
#line 6031 "../.././gcc/cp/call.c"
if (warn){
{ 
#line 6034 "../.././gcc/cp/call.c"
warning(0, "passing %qT chooses %qT over %qT", type, type1, type2); 
#line 6035 "../.././gcc/cp/call.c"
warning(0, "  in call to %qD", (w->fn)); } }else{
add_warning(w, l); }} }
#line 6041 "../.././gcc/cp/call.c"
if (winner && comp != winner){
{ 
#line 6043 "../.././gcc/cp/call.c"
winner = 0; 
#line 6044 "../.././gcc/cp/call.c"
goto tweak; } }
#line 6046 "../.././gcc/cp/call.c"
winner = comp; } }} } 
#line 6053 "../.././gcc/cp/call.c"
if (winner && warn_conversion && (cand1->second_conv) && ((!((((((cand1->fn))->decl_common).lang_specific)->decl_flags).constructor_attr)) || (!((((((cand2->fn))->decl_common).lang_specific)->decl_flags).constructor_attr))) && winner != compare_ics((cand1->second_conv), (cand2->second_conv))){
{ 
#line 6057 "../.././gcc/cp/call.c"

#line 6057 "../.././gcc/cp/call.c"
struct z_candidate *w,*l;
#line 6058 "../.././gcc/cp/call.c"

#line 6058 "../.././gcc/cp/call.c"
unsigned char give_warning = 0;
#line 6060 "../.././gcc/cp/call.c"
if (winner == 1){
w = cand1 , l = cand2; }else{
w = cand2 , l = cand1; }
#line 6068 "../.././gcc/cp/call.c"
if (((((w->fn))->decl_minimal).context) == ((((l->fn))->decl_minimal).context) && (!((((((w->fn))->decl_common).lang_specific)->decl_flags).constructor_attr)) && (!((((((l->fn))->decl_common).lang_specific)->decl_flags).constructor_attr))){
{ 
#line 6071 "../.././gcc/cp/call.c"

#line 6071 "../.././gcc/cp/call.c"
 tree t = (((((((l->fn))->common).type))->common).type);
#line 6072 "../.././gcc/cp/call.c"

#line 6072 "../.././gcc/cp/call.c"
 tree f = (((((((w->fn))->common).type))->common).type);
#line 6074 "../.././gcc/cp/call.c"
if ((((enum tree_code )((t)->common).code)) == (((enum tree_code )((f)->common).code)) && ((((enum tree_code )((t)->common).code)) == POINTER_TYPE || (((enum tree_code )((t)->common).code)) == REFERENCE_TYPE)){
{ 
#line 6076 "../.././gcc/cp/call.c"
t = (((t)->common).type); 
#line 6077 "../.././gcc/cp/call.c"
f = (((f)->common).type); } }
#line 6079 "../.././gcc/cp/call.c"
if ((!comp_ptr_ttypes(t, f))){
give_warning = 1; }} }else{
give_warning = 1; }
#line 6085 "../.././gcc/cp/call.c"
if ((!give_warning)){
; }else{
if (warn){
{ 
#line 6089 "../.././gcc/cp/call.c"

#line 6089 "../.././gcc/cp/call.c"
 tree source = source_type((w->convs)[0]);
#line 6090 "../.././gcc/cp/call.c"
if ((!((((((w->fn))->decl_common).lang_specific)->decl_flags).constructor_attr))){
source = (((source)->common).type); }
#line 6092 "../.././gcc/cp/call.c"
warning(0, "choosing %qD over %qD", (w->fn), (l->fn)); 
#line 6093 "../.././gcc/cp/call.c"
warning(0, "  for conversion from %qT to %qT", source, ((w->second_conv)->type)); 
#line 6095 "../.././gcc/cp/call.c"
warning(0, "  because conversion sequence for the argument is better"); } }else{
add_warning(w, l); }}} }
#line 6101 "../.././gcc/cp/call.c"
if (winner){
return winner; }
#line 6108 "../.././gcc/cp/call.c"
if ((!(cand1->template_decl)) && (cand2->template_decl)){
return 1; }else{
if ((cand1->template_decl) && (!(cand2->template_decl))){
return (-1); }}
#line 6118 "../.././gcc/cp/call.c"
if ((cand1->template_decl) && (cand2->template_decl)){
{ 
#line 6127 "../.././gcc/cp/call.c"
winner = more_specialized_fn((((((cand1->template_decl))->list).purpose)), (((((cand2->template_decl))->list).purpose)), (cand1->num_convs) + ((((((cand1->fn))->decl_common).lang_specific)->decl_flags).constructor_attr)); 
#line 6128 "../.././gcc/cp/call.c"
if (winner){
return winner; }} }
# 5983 "../.././gcc/cp/call.c" 
# 6140 "../.././gcc/cp/call.c" 
if ((cand1->second_conv)){
{ 
#line 6142 "../.././gcc/cp/call.c"
winner = compare_ics((cand1->second_conv), (cand2->second_conv)); 
#line 6143 "../.././gcc/cp/call.c"
if (winner){
return winner; }} }
#line 6158 "../.././gcc/cp/call.c"
if ((((enum tree_code )(((cand1->fn))->common).code)) == IDENTIFIER_NODE || (((enum tree_code )(((cand2->fn))->common).code)) == IDENTIFIER_NODE){
{ 
#line 6165 "../.././gcc/cp/call.c"
for(i = 0;i < len;(++i)) { if ((!comptypes((((cand1->convs)[i]->type)), (((cand2->convs)[i]->type)), 0))){
break; }} 
#line 6165 "../.././gcc/cp/call.c"
if (i == (cand1->num_convs)){
{ 
#line 6175 "../.././gcc/cp/call.c"
if ((cand1->fn) == (cand2->fn)){
return 1; }else{
if ((((enum tree_code )(((cand1->fn))->common).code)) == IDENTIFIER_NODE){
return (-1); }else{
return 1; }}} }} }
#line 6181 "../.././gcc/cp/call.c"
if ((tree_code_type[((int )((((enum tree_code )(((cand1->fn))->common).code))))] == tcc_declaration) && (tree_code_type[((int )((((enum tree_code )(((cand2->fn))->common).code))))] == tcc_declaration) && equal_functions((cand1->fn), (cand2->fn))){
return 1; }
#line 6185 "../.././gcc/cp/call.c"
tweak:  if ((!pedantic)){
{ 
#line 6191 "../.././gcc/cp/call.c"

#line 6191 "../.././gcc/cp/call.c"
 conversion_rank rank1 = cr_identity,rank2 = cr_identity;
#line 6192 "../.././gcc/cp/call.c"

#line 6192 "../.././gcc/cp/call.c"
struct z_candidate *w = 0,*l = 0;
#line 6194 "../.././gcc/cp/call.c"
for(i = 0;i < len;(++i)) { { 
#line 6198 "../.././gcc/cp/call.c"
if ((((((cand1->convs)[i + off1])->bad_p)?cr_bad:((((cand1->convs)[i + off1])->ellipsis_p)?cr_ellipsis:((((cand1->convs)[i + off1])->user_conv_p)?cr_user:(((cand1->convs)[i + off1])->rank))))) > rank1){
rank1 = (((((cand1->convs)[i + off1])->bad_p)?cr_bad:((((cand1->convs)[i + off1])->ellipsis_p)?cr_ellipsis:((((cand1->convs)[i + off1])->user_conv_p)?cr_user:(((cand1->convs)[i + off1])->rank))))); }
#line 6198 "../.././gcc/cp/call.c"
if ((((((cand2->convs)[i + off2])->bad_p)?cr_bad:((((cand2->convs)[i + off2])->ellipsis_p)?cr_ellipsis:((((cand2->convs)[i + off2])->user_conv_p)?cr_user:(((cand2->convs)[i + off2])->rank))))) > rank2){
rank2 = (((((cand2->convs)[i + off2])->bad_p)?cr_bad:((((cand2->convs)[i + off2])->ellipsis_p)?cr_ellipsis:((((cand2->convs)[i + off2])->user_conv_p)?cr_user:(((cand2->convs)[i + off2])->rank))))); }} } 
#line 6201 "../.././gcc/cp/call.c"
if (rank1 < rank2){
winner = 1 , w = cand1 , l = cand2; }
#line 6203 "../.././gcc/cp/call.c"
if (rank1 > rank2){
winner = (-1) , w = cand2 , l = cand1; }
#line 6205 "../.././gcc/cp/call.c"
if (winner){
{ 
#line 6217 "../.././gcc/cp/call.c"
if (warn){
{ 
#line 6209 "../.././gcc/cp/call.c"
pedwarn("ISO C++ says that these are ambiguous, even though the worst conversion for the first is better than the worst conversion for the second:"); 
#line 6213 "../.././gcc/cp/call.c"
print_z_candidate(dcgettext((((void *)0)), "candidate 1:", __LC_MESSAGES), w); 
#line 6214 "../.././gcc/cp/call.c"
print_z_candidate(dcgettext((((void *)0)), "candidate 2:", __LC_MESSAGES), l); } }else{
add_warning(w, l); }
#line 6218 "../.././gcc/cp/call.c"
return winner; } }} }
#line 6222 "../.././gcc/cp/call.c"
(((void )(((!((!winner)))?fancy_abort("../.././gcc/cp/call.c", 6222, __FUNCTION__) , 0:0)))); 
#line 6223 "../.././gcc/cp/call.c"
return 0; }
 
#line 6233 "../.././gcc/cp/call.c"
static struct z_candidate *tourney(struct z_candidate *candidates)  {

#line 6234 "../.././gcc/cp/call.c"

#line 6234 "../.././gcc/cp/call.c"
struct z_candidate *champ = candidates,*challenger;
#line 6235 "../.././gcc/cp/call.c"

#line 6235 "../.././gcc/cp/call.c"
int fate;
#line 6236 "../.././gcc/cp/call.c"

#line 6236 "../.././gcc/cp/call.c"
int champ_compared_to_predecessor = 0;
#line 6241 "../.././gcc/cp/call.c"
for(challenger = (champ->next);challenger;) { { 
#line 6243 "../.././gcc/cp/call.c"
fate = joust(champ, challenger, 0); 
#line 6244 "../.././gcc/cp/call.c"
if (fate == 1){
challenger = (challenger->next); }else{
{ 
#line 6259 "../.././gcc/cp/call.c"
if (fate == 0){
{ 
#line 6250 "../.././gcc/cp/call.c"
champ = (challenger->next); 
#line 6251 "../.././gcc/cp/call.c"
if (champ == 0){
return 0; }
#line 6253 "../.././gcc/cp/call.c"
champ_compared_to_predecessor = 0; } }else{
{ 
#line 6257 "../.././gcc/cp/call.c"
champ = challenger; 
#line 6258 "../.././gcc/cp/call.c"
champ_compared_to_predecessor = 1; } }
#line 6261 "../.././gcc/cp/call.c"
challenger = (champ->next); } }} } 
#line 6268 "../.././gcc/cp/call.c"
for(challenger = candidates;challenger != champ && (!(champ_compared_to_predecessor && (challenger->next) == champ));challenger = (challenger->next)) { { 
#line 6273 "../.././gcc/cp/call.c"
fate = joust(champ, challenger, 0); 
#line 6274 "../.././gcc/cp/call.c"
if (fate != 1){
return 0; }} } 
#line 6278 "../.././gcc/cp/call.c"
return champ; }
 
#line 6285 "../.././gcc/cp/call.c"
unsigned char can_convert( tree to,  tree from)  {

#line 6286 "../.././gcc/cp/call.c"
return can_convert_arg(to, from, (( tree )(((void *)0))), ((1 << 0) | (1 << 1))); }
 
#line 6293 "../.././gcc/cp/call.c"
unsigned char can_convert_arg( tree to,  tree from,  tree arg, int flags)  {

#line 6294 "../.././gcc/cp/call.c"

#line 6294 "../.././gcc/cp/call.c"
 conversion *t;
#line 6295 "../.././gcc/cp/call.c"

#line 6295 "../.././gcc/cp/call.c"
void *p;
#line 6296 "../.././gcc/cp/call.c"

#line 6296 "../.././gcc/cp/call.c"
unsigned char ok_p;
#line 6299 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 6301 "../.././gcc/cp/call.c"
t = implicit_conversion(to, from, arg, 0, flags); 
#line 6303 "../.././gcc/cp/call.c"
ok_p = (t && (!(t->bad_p))); 
#line 6306 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 6306 "../.././gcc/cp/call.c"

#line 6306 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 6306 "../.././gcc/cp/call.c"

#line 6306 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 6306 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 6308 "../.././gcc/cp/call.c"
return ok_p; }
 
#line 6315 "../.././gcc/cp/call.c"
unsigned char can_convert_arg_bad( tree to,  tree from,  tree arg)  {

#line 6316 "../.././gcc/cp/call.c"

#line 6316 "../.././gcc/cp/call.c"
 conversion *t;
#line 6317 "../.././gcc/cp/call.c"

#line 6317 "../.././gcc/cp/call.c"
void *p;
#line 6320 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 6322 "../.././gcc/cp/call.c"
t = implicit_conversion(to, from, arg, 0, ((1 << 0) | (1 << 1))); 
#line 6325 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 6325 "../.././gcc/cp/call.c"

#line 6325 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 6325 "../.././gcc/cp/call.c"

#line 6325 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 6325 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 6327 "../.././gcc/cp/call.c"
return t != (((void *)0)); }
 
#line 6337 "../.././gcc/cp/call.c"
 tree perform_implicit_conversion( tree type,  tree expr)  {

#line 6338 "../.././gcc/cp/call.c"

#line 6338 "../.././gcc/cp/call.c"
 conversion *conv;
#line 6339 "../.././gcc/cp/call.c"

#line 6339 "../.././gcc/cp/call.c"
void *p;
#line 6341 "../.././gcc/cp/call.c"
if (((expr) == global_trees[TI_ERROR_MARK] || ((expr) && ((((expr))->common).type) == global_trees[TI_ERROR_MARK]))){
return global_trees[TI_ERROR_MARK]; }
#line 6345 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 6347 "../.././gcc/cp/call.c"
conv = implicit_conversion(type, (((expr)->common).type), expr, 0, ((1 << 0) | (1 << 1))); 
#line 6350 "../.././gcc/cp/call.c"
if ((!conv)){
{ 
#line 6352 "../.././gcc/cp/call.c"
error("could not convert %qE to %qT", expr, type); 
#line 6353 "../.././gcc/cp/call.c"
expr = global_trees[TI_ERROR_MARK]; } }else{
expr = convert_like_real((conv), (expr), (( tree )(((void *)0))), 0, 0, 1, 0); }
#line 6359 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 6359 "../.././gcc/cp/call.c"

#line 6359 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 6359 "../.././gcc/cp/call.c"

#line 6359 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 6359 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 6361 "../.././gcc/cp/call.c"
return expr; }
 
# 6158 "../.././gcc/cp/call.c" 
# 6376 "../.././gcc/cp/call.c" 
 tree perform_direct_initialization_if_possible( tree type,  tree expr, unsigned char c_cast_p)  {

#line 6377 "../.././gcc/cp/call.c"

#line 6377 "../.././gcc/cp/call.c"
 conversion *conv;
#line 6378 "../.././gcc/cp/call.c"

#line 6378 "../.././gcc/cp/call.c"
void *p;
#line 6380 "../.././gcc/cp/call.c"
if (type == global_trees[TI_ERROR_MARK] || ((expr) == global_trees[TI_ERROR_MARK] || ((expr) && ((((expr))->common).type) == global_trees[TI_ERROR_MARK]))){
return global_trees[TI_ERROR_MARK]; }
#line 6391 "../.././gcc/cp/call.c"
if (((((((enum tree_code )((type)->common).code))) == RECORD_TYPE || ((((enum tree_code )((type)->common).code))) == UNION_TYPE) && (((type)->type).lang_flag_5))){
{ 
#line 6395 "../.././gcc/cp/call.c"
expr = build_special_member_call((( tree )(((void *)0))), cp_global_trees[CPTI_COMPLETE_CTOR_IDENTIFIER], build_tree_list_stat((( tree )(((void *)0))), expr), type, ((1 << 0) | (1 << 1))); 
#line 6396 "../.././gcc/cp/call.c"
return build_cplus_new(type, expr); } }
#line 6400 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 6402 "../.././gcc/cp/call.c"
conv = implicit_conversion(type, (((expr)->common).type), expr, c_cast_p, ((1 << 0) | (1 << 1))); 
#line 6405 "../.././gcc/cp/call.c"
if ((!conv) || (conv->bad_p)){
expr = (( tree )(((void *)0))); }else{
expr = convert_like_real(conv, expr, (( tree )(((void *)0))), 0, 0, 0, c_cast_p); }
#line 6413 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 6413 "../.././gcc/cp/call.c"

#line 6413 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 6413 "../.././gcc/cp/call.c"

#line 6413 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 6413 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 6415 "../.././gcc/cp/call.c"
return expr; }
 
#line 6424 "../.././gcc/cp/call.c"
 tree make_temporary_var_for_ref_to_temp( tree decl,  tree type)  {

#line 6425 "../.././gcc/cp/call.c"

#line 6425 "../.././gcc/cp/call.c"
 tree var;
#line 6428 "../.././gcc/cp/call.c"
var = create_temporary_var(type); 
#line 6431 "../.././gcc/cp/call.c"
if ((((decl)->common).static_flag)){
{ 
#line 6434 "../.././gcc/cp/call.c"

#line 6434 "../.././gcc/cp/call.c"
 tree name;
#line 6436 "../.././gcc/cp/call.c"
(((var)->common).static_flag) = 1; 
#line 6437 "../.././gcc/cp/call.c"
name = mangle_ref_init_variable(decl); 
#line 6438 "../.././gcc/cp/call.c"
(((var)->decl_minimal).name) = name; 
#line 6439 "../.././gcc/cp/call.c"
(((var)->decl_with_vis).assembler_name = (name)); 
#line 6440 "../.././gcc/cp/call.c"
var = pushdecl_top_level(var); } }else{
maybe_push_cleanup_level(type); }
#line 6446 "../.././gcc/cp/call.c"
return var; }
 
# 6391 "../.././gcc/cp/call.c" 
# 6462 "../.././gcc/cp/call.c" 
 tree initialize_reference( tree type,  tree expr,  tree decl,  tree *cleanup)  {

#line 6463 "../.././gcc/cp/call.c"

#line 6463 "../.././gcc/cp/call.c"
 conversion *conv;
#line 6464 "../.././gcc/cp/call.c"

#line 6464 "../.././gcc/cp/call.c"
void *p;
#line 6466 "../.././gcc/cp/call.c"
if (type == global_trees[TI_ERROR_MARK] || ((expr) == global_trees[TI_ERROR_MARK] || ((expr) && ((((expr))->common).type) == global_trees[TI_ERROR_MARK]))){
return global_trees[TI_ERROR_MARK]; }
#line 6470 "../.././gcc/cp/call.c"
p = conversion_obstack_alloc(0); 
#line 6472 "../.././gcc/cp/call.c"
conv = reference_binding(type, (((expr)->common).type), expr, ((1 << 0) | (1 << 1))); 
#line 6473 "../.././gcc/cp/call.c"
if ((!conv) || (conv->bad_p)){
{ 
#line 6483 "../.././gcc/cp/call.c"
if ((!(((((((((type)->common).type))->common).readonly_flag) * 0x1) | (((((((type)->common).type))->common).volatile_flag) * 0x2) | (((((((type)->common).type))->type).restrict_flag) * 0x4)) & 0x1)) && (!real_lvalue_p(expr))){
error("invalid initialization of non-const reference of ""type %qT from a temporary of type %qT", type, (((expr)->common).type)); }else{
error("invalid initialization of reference of type ""%qT from expression of type %qT", type, (((expr)->common).type)); }
#line 6484 "../.././gcc/cp/call.c"
return global_trees[TI_ERROR_MARK]; } }
#line 6522 "../.././gcc/cp/call.c"
(((void )(((!((conv->kind) == ck_ref_bind))?fancy_abort("../.././gcc/cp/call.c", 6522, __FUNCTION__) , 0:0)))); 
#line 6523 "../.././gcc/cp/call.c"
if (decl){
{ 
#line 6525 "../.././gcc/cp/call.c"

#line 6525 "../.././gcc/cp/call.c"
 tree var;
#line 6526 "../.././gcc/cp/call.c"

#line 6526 "../.././gcc/cp/call.c"
 tree base_conv_type;
#line 6529 "../.././gcc/cp/call.c"
conv = (conv->u).next; 
#line 6532 "../.././gcc/cp/call.c"
if ((conv->kind) == ck_base){
{ 
#line 6536 "../.././gcc/cp/call.c"
if ((conv->check_copy_constructor_p)){
check_constructor_callable((((expr)->common).type), expr); }
#line 6536 "../.././gcc/cp/call.c"
base_conv_type = (conv->type); 
#line 6537 "../.././gcc/cp/call.c"
conv = (conv->u).next; } }else{
base_conv_type = (( tree )(((void *)0))); }
#line 6542 "../.././gcc/cp/call.c"
expr = convert_like_real(conv, expr, (( tree )(((void *)0))), 0, (-1), 1, 0); 
#line 6547 "../.././gcc/cp/call.c"
if (((expr) == global_trees[TI_ERROR_MARK] || ((expr) && ((((expr))->common).type) == global_trees[TI_ERROR_MARK]))){
expr = global_trees[TI_ERROR_MARK]; }else{
{ 
#line 6615 "../.././gcc/cp/call.c"
if ((!real_lvalue_p(expr))){
{ 
#line 6553 "../.././gcc/cp/call.c"

#line 6553 "../.././gcc/cp/call.c"
 tree init;
#line 6554 "../.././gcc/cp/call.c"

#line 6554 "../.././gcc/cp/call.c"
 tree type;
#line 6557 "../.././gcc/cp/call.c"
type = (((expr)->common).type); 
#line 6558 "../.././gcc/cp/call.c"
var = make_temporary_var_for_ref_to_temp(decl, type); 
#line 6559 "../.././gcc/cp/call.c"
layout_decl(var, 0); 
# 6522 "../.././gcc/cp/call.c" 
# 6568 "../.././gcc/cp/call.c" 
if ((((enum tree_code )((expr)->common).code)) != TARGET_EXPR){
expr = get_target_expr(expr); }
#line 6572 "../.././gcc/cp/call.c"
init = build2_stat(INIT_EXPR, type, var, expr); 
#line 6573 "../.././gcc/cp/call.c"
if (at_function_scope_p()){
{ 
#line 6575 "../.././gcc/cp/call.c"
add_decl_expr(var); 
#line 6576 "../.././gcc/cp/call.c"
(*cleanup) = cxx_maybe_build_cleanup(var); } }else{
{ 
#line 6599 "../.././gcc/cp/call.c"
rest_of_decl_compilation(var, 1, at_eof); 
#line 6600 "../.././gcc/cp/call.c"
if (((((type)->type).lang_flag_4))){
static_aggregates = tree_cons_stat((( tree )(((void *)0))), var, static_aggregates); }} }
#line 6605 "../.././gcc/cp/call.c"
expr = build_address(var); 
#line 6606 "../.././gcc/cp/call.c"
if (base_conv_type){
expr = convert_to_base(expr, build_pointer_type(base_conv_type), 1, 1); }
#line 6611 "../.././gcc/cp/call.c"
expr = build2_stat(COMPOUND_EXPR, (((expr)->common).type), init, expr); } }else{
expr = build_unary_op(ADDR_EXPR, expr, 0); }
#line 6617 "../.././gcc/cp/call.c"
if (base_conv_type){
expr = (perform_implicit_conversion(build_pointer_type(base_conv_type), expr)); }
#line 6620 "../.././gcc/cp/call.c"
expr = build_nop(type, expr); } }} }else{
expr = convert_like_real((conv), (expr), (( tree )(((void *)0))), 0, 0, 1, 0); }
#line 6628 "../.././gcc/cp/call.c"
__extension__ ({ 
#line 6628 "../.././gcc/cp/call.c"

#line 6628 "../.././gcc/cp/call.c"
struct obstack *__o = ((&conversion_obstack));
#line 6628 "../.././gcc/cp/call.c"

#line 6628 "../.././gcc/cp/call.c"
void *__obj = ((void *)(p));
#line 6628 "../.././gcc/cp/call.c"
if (__obj > ((void *)(__o->chunk)) && __obj < ((void *)(__o->chunk_limit))){
(__o->next_free) = (__o->object_base) = ((char *)__obj); }else{
(obstack_free)(__o, __obj); }} ); 
#line 6630 "../.././gcc/cp/call.c"
return expr; }
 
# 6596 "../.././gcc/cp/call.c" 
# 1 "./gt-cp-call.h" 1
# 34 "./gt-cp-call.h" 
const struct ggc_root_tab gt_ggc_r_gt_cp_call_h[] = {{(&java_iface_lookup_fn),1,sizeof (java_iface_lookup_fn),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(((void *)0)),0,0,(((void *)0)),(((void *)0))}}; 
