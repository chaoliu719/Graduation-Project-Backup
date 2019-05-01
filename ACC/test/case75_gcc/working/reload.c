
# 1 "reload.c" 
# 1 "/home/czhang/gcc-3.4.0/gcc//" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "reload.c" 
# 89 "reload.c" 
# 1 "config.h" 1
# 1 "auto-host.h" 1
# 4 "config.h" 2
# 1 "./../include/ansidecl.h" 1
# 6 "config.h" 2
# 90 "reload.c" 2
# 1 "system.h" 1
# 28 "system.h" 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
#line 105 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stdarg.h"
typedef  __gnuc_va_list va_list; 
# 105 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stdarg.h" 3 4
# 29 "system.h" 2
# 39 "system.h" 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 214 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h"
typedef unsigned int size_t; 
# 214 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 3 4
# 326 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 3 4
typedef long int wchar_t; 
# 40 "system.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 329 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 313 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 314 "/usr/include/sys/cdefs.h" 2 3 4
# 330 "/usr/include/features.h" 2 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4
# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 353 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
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
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 355 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 3 4
typedef unsigned int wint_t; 
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
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
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
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
# 315 "/usr/include/libio.h" 3 4
# 334 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; }; 
#line 337 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 340 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 342 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 343 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 344 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 360 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 369 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, __const char *__buf,  size_t __n); 
#line 377 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 380 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
#line 385 "/usr/include/libio.h"
typedef  __io_read_fn cookie_read_function_t; 
#line 386 "/usr/include/libio.h"
typedef  __io_write_fn cookie_write_function_t; 
#line 387 "/usr/include/libio.h"
typedef  __io_seek_fn cookie_seek_function_t; 
#line 388 "/usr/include/libio.h"
typedef  __io_close_fn cookie_close_function_t; 
#line 397 "/usr/include/libio.h"
typedef struct { __io_read_fn *read;  __io_write_fn *write;  __io_seek_fn *seek;  __io_close_fn *close; }_IO_cookie_io_functions_t; 
#line 398 "/usr/include/libio.h"
typedef  _IO_cookie_io_functions_t cookie_io_functions_t; 
#line 400 "/usr/include/libio.h"
struct _IO_cookie_file ; 
#line 404 "/usr/include/libio.h"
extern void _IO_cookie_init(struct _IO_cookie_file *__cfile, int __read_write, void *__cookie,  _IO_cookie_io_functions_t __fns); 
#line 412 "/usr/include/libio.h"
extern int __underflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 413 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 414 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ) __attribute__  (( __nothrow__ )) ; 
#line 415 "/usr/include/libio.h"
extern  wint_t __wunderflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 416 "/usr/include/libio.h"
extern  wint_t __wuflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 417 "/usr/include/libio.h"
extern  wint_t __woverflow( _IO_FILE *,  wint_t ) __attribute__  (( __nothrow__ )) ; 
# 360 "/usr/include/libio.h" 3 4
# 450 "/usr/include/libio.h" 3 4
extern int _IO_getc( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 451 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 452 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 453 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 455 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 461 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 462 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 463 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 481 "/usr/include/libio.h"
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 483 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 484 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ) __attribute__  (( __nothrow__ )) ; 
#line 485 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 487 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ) __attribute__  (( __nothrow__ )) ; 
#line 488 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ) __attribute__  (( __nothrow__ )) ; 
#line 490 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
# 480 "/usr/include/libio.h" 3 4
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
#line 162 "/usr/include/stdio.h"
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 171 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 181 "/usr/include/stdio.h"
extern  FILE *tmpfile64(void ); 
#line 185 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 191 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 
# 181 "/usr/include/stdio.h" 3 4
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 213 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 218 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 228 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 228 "/usr/include/stdio.h" 3 4
# 238 "/usr/include/stdio.h" 3 4
extern int fcloseall(void ); 
#line 249 "/usr/include/stdio.h"
extern  FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 256 "/usr/include/stdio.h"
extern  FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 272 "/usr/include/stdio.h"
extern  FILE *fopen64(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 275 "/usr/include/stdio.h"
extern  FILE *freopen64(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 280 "/usr/include/stdio.h"
extern  FILE *fdopen(int __fd, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/stdio.h"
extern  FILE *fopencookie(void *__restrict __magic_cookie, __const char *__restrict __modes,  _IO_cookie_io_functions_t __io_funcs) __attribute__  (( __nothrow__ )) ; 
#line 291 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 297 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__restrict __bufloc,  size_t *__restrict __sizeloc) __attribute__  (( __nothrow__ )) ; 
#line 302 "/usr/include/stdio.h"
extern  FILE *open_wmemstream( wchar_t **__restrict __bufloc,  size_t *__restrict __sizeloc) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 314 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 321 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 324 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 334 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 339 "/usr/include/stdio.h"
extern int printf(__const char *__restrict __format, ...); 
#line 342 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 349 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg); 
#line 354 "/usr/include/stdio.h"
extern int vprintf(__const char *__restrict __format,  __gnuc_va_list __arg); 
#line 357 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 365 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 369 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 378 "/usr/include/stdio.h"
extern int vasprintf(char **__restrict __ptr, __const char *__restrict __f,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 381 "/usr/include/stdio.h"
extern int __asprintf(char **__restrict __ptr, __const char *__restrict __fmt, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 384 "/usr/include/stdio.h"
extern int asprintf(char **__restrict __ptr, __const char *__restrict __fmt, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 394 "/usr/include/stdio.h"
extern int vdprintf(int __fd, __const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 396 "/usr/include/stdio.h"
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 406 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 411 "/usr/include/stdio.h"
extern int scanf(__const char *__restrict __format, ...); 
#line 414 "/usr/include/stdio.h"
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 425 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 432 "/usr/include/stdio.h"
extern int vscanf(__const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 437 "/usr/include/stdio.h"
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 447 "/usr/include/stdio.h"
extern int fgetc( FILE *__stream); 
#line 448 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 454 "/usr/include/stdio.h"
extern int getchar(void ); 
# 269 "/usr/include/stdio.h" 3 4
# 466 "/usr/include/stdio.h" 3 4
extern int getc_unlocked( FILE *__stream); 
#line 467 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
#line 477 "/usr/include/stdio.h"
extern int fgetc_unlocked( FILE *__stream); 
#line 489 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 490 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 496 "/usr/include/stdio.h"
extern int putchar(int __c); 
# 477 "/usr/include/stdio.h" 3 4
# 510 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 518 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 519 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 526 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 529 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 539 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
#line 546 "/usr/include/stdio.h"
extern char *gets(char *__s); 
#line 557 "/usr/include/stdio.h"
extern char *fgets_unlocked(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 556 "/usr/include/stdio.h" 3 4
# 574 "/usr/include/stdio.h" 3 4
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 577 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 587 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 596 "/usr/include/stdio.h"
extern int fputs(__const char *__restrict __s,  FILE *__restrict __stream); 
#line 602 "/usr/include/stdio.h"
extern int puts(__const char *__s); 
#line 609 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 617 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 623 "/usr/include/stdio.h"
extern  size_t fwrite(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
#line 634 "/usr/include/stdio.h"
extern int fputs_unlocked(__const char *__restrict __s,  FILE *__restrict __stream); 
# 633 "/usr/include/stdio.h" 3 4
# 645 "/usr/include/stdio.h" 3 4
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 647 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 656 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 661 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 666 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
#line 680 "/usr/include/stdio.h"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 685 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
# 680 "/usr/include/stdio.h" 3 4
# 705 "/usr/include/stdio.h" 3 4
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 710 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, __const  fpos_t *__pos); 
#line 725 "/usr/include/stdio.h"
extern int fseeko64( FILE *__stream,  __off64_t __off, int __whence); 
#line 726 "/usr/include/stdio.h"
extern  __off64_t ftello64( FILE *__stream); 
#line 727 "/usr/include/stdio.h"
extern int fgetpos64( FILE *__restrict __stream,  fpos64_t *__restrict __pos); 
#line 728 "/usr/include/stdio.h"
extern int fsetpos64( FILE *__stream, __const  fpos64_t *__pos); 
#line 733 "/usr/include/stdio.h"
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 735 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 737 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 742 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 743 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 744 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 753 "/usr/include/stdio.h"
extern void perror(__const char *__s); 
# 722 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 28 "/usr/include/bits/sys_errlist.h"
extern __const char *__const sys_errlist[]; 
#line 31 "/usr/include/bits/sys_errlist.h"
extern int _sys_nerr; 
#line 32 "/usr/include/bits/sys_errlist.h"
extern __const char *__const _sys_errlist[]; 
#line 765 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 770 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 761 "/usr/include/stdio.h" 2 3 4
# 780 "/usr/include/stdio.h" 3 4
extern  FILE *popen(__const char *__command, __const char *__modes); 
#line 786 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 792 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 798 "/usr/include/stdio.h"
extern char *cuserid(char *__s); 
#line 803 "/usr/include/stdio.h"
struct obstack ; 
#line 808 "/usr/include/stdio.h"
extern int obstack_printf(struct obstack *__restrict __obstack, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 812 "/usr/include/stdio.h"
extern int obstack_vprintf(struct obstack *__restrict __obstack, __const char *__restrict __format,  __gnuc_va_list __args) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 820 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 824 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 827 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 850 "/usr/include/stdio.h" 3 4
# 43 "system.h" 2
# 107 "system.h" 
# 1 "./../include/safe-ctype.h" 1
# 86 "./../include/safe-ctype.h" 
enum {_sch_isblank=0x0001,_sch_iscntrl=0x0002,_sch_isdigit=0x0004,_sch_islower=0x0008,_sch_isprint=0x0010,_sch_ispunct=0x0020,_sch_isspace=0x0040,_sch_isupper=0x0080,_sch_isxdigit=0x0100,_sch_isidst=0x0200,_sch_isvsp=0x0400,_sch_isnvsp=0x0800,_sch_isalpha=_sch_isupper | _sch_islower,_sch_isalnum=_sch_isalpha | _sch_isdigit,_sch_isidnum=_sch_isidst | _sch_isdigit,_sch_isgraph=_sch_isalnum | _sch_ispunct,_sch_iscppsp=_sch_isvsp | _sch_isnvsp,_sch_isbasic=_sch_isprint | _sch_iscppsp}; 
#line 89 "./../include/safe-ctype.h"
extern const unsigned short _sch_istable[256]; 
#line 114 "./../include/safe-ctype.h"
extern const unsigned char _sch_toupper[256]; 
#line 115 "./../include/safe-ctype.h"
extern const unsigned char _sch_tolower[256]; 
# 114 "./../include/safe-ctype.h" 
# 108 "system.h" 2
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
# 61 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 77 "/usr/include/time.h"
typedef  __time_t time_t; 
# 75 "/usr/include/time.h" 3 4
# 93 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 105 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 105 "/usr/include/time.h" 3 4
# 137 "/usr/include/sys/types.h" 2 3 4
typedef  __useconds_t useconds_t; 
#line 141 "/usr/include/sys/types.h"
typedef  __suseconds_t suseconds_t; 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 151 "/usr/include/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 152 "/usr/include/sys/types.h"
typedef unsigned short int ushort; 
#line 153 "/usr/include/sys/types.h"
typedef unsigned int uint; 
#line 195 "/usr/include/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 196 "/usr/include/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 197 "/usr/include/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 198 "/usr/include/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 201 "/usr/include/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 202 "/usr/include/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 203 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 204 "/usr/include/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 206 "/usr/include/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 195 "/usr/include/sys/types.h" 3 4
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4
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
# 125 "/usr/include/time.h" 3 4
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
# 221 "/usr/include/sys/types.h" 2 3 4
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
 
#line 228 "/usr/include/sys/types.h"
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 224 "/usr/include/sys/types.h" 2 3 4
# 262 "/usr/include/sys/types.h" 3 4
typedef  __blkcnt64_t blkcnt64_t; 
#line 263 "/usr/include/sys/types.h"
typedef  __fsblkcnt64_t fsblkcnt64_t; 
#line 264 "/usr/include/sys/types.h"
typedef  __fsfilcnt64_t fsfilcnt64_t; 
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 43 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[36]; long int __align; }pthread_attr_t; 
#line 49 "/usr/include/bits/pthreadtypes.h"
typedef struct __pthread_internal_slist {struct __pthread_internal_slist *__next; }__pthread_slist_t; 
#line 73 "/usr/include/bits/pthreadtypes.h"
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; int __kind; unsigned int __nusers;  __extension__ union {int __spins;  __pthread_slist_t __list; }; }__data; char __size[24]; long int __align; }pthread_mutex_t; 
#line 79 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_mutexattr_t; 
#line 99 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; }__data; char __size[48];  __extension__ long long int __align; }pthread_cond_t; 
#line 105 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_condattr_t; 
#line 109 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 113 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 136 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; unsigned int __flags; int __writer; }__data; char __size[32]; long int __align; }pthread_rwlock_t; 
#line 142 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; }pthread_rwlockattr_t; 
#line 148 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 157 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[20]; long int __align; }pthread_barrier_t; 
#line 163 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; }pthread_barrierattr_t; 
# 271 "/usr/include/sys/types.h" 2 3 4
# 110 "system.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4
# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 43 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name,*program_invocation_short_name; 
#line 69 "/usr/include/errno.h"
typedef int error_t; 
# 69 "/usr/include/errno.h" 3 4
# 112 "system.h" 2
# 122 "system.h" 
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
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
# 426 "/usr/include/string.h" 3 4
# 123 "system.h" 2
# 1 "/usr/include/strings.h" 1 3 4
# 124 "system.h" 2
# 135 "system.h" 
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
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
# 240 "/usr/include/stdlib.h" 3 4
# 429 "/usr/include/stdlib.h" 3 4
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 433 "/usr/include/stdlib.h"
extern long int a64l(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 445 "/usr/include/stdlib.h"
extern long int random(void ) __attribute__  (( __nothrow__ )) ; 
#line 448 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 455 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 459 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 476 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; }; 
#line 479 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 482 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 487 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 491 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 498 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ )) ; 
#line 500 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 505 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 
#line 513 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 514 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 517 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 522 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 524 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 527 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 
#line 529 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 530 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init; unsigned long long int __a; }; 
#line 547 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 550 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 555 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 559 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 564 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 568 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 572 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 575 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 579 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 589 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 592 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 601 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 603 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 608 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
# 445 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 33 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 617 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 623 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 628 "/usr/include/stdlib.h"
extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 632 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 639 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 646 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 653 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 660 "/usr/include/stdlib.h"
extern char *getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 666 "/usr/include/stdlib.h"
extern char *__secure_getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 672 "/usr/include/stdlib.h"
extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 679 "/usr/include/stdlib.h"
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 682 "/usr/include/stdlib.h"
extern int unsetenv(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 689 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 
# 613 "/usr/include/stdlib.h" 2 3 4
# 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 709 "/usr/include/stdlib.h"
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 709 "/usr/include/stdlib.h" 3 4
# 719 "/usr/include/stdlib.h" 3 4
extern int mkstemp64(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 729 "/usr/include/stdlib.h"
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 738 "/usr/include/stdlib.h"
extern int system(__const char *__command); 
#line 747 "/usr/include/stdlib.h"
extern char *canonicalize_file_name(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 729 "/usr/include/stdlib.h" 3 4
# 758 "/usr/include/stdlib.h" 3 4
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 765 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(__const void *, __const void *); 
#line 768 "/usr/include/stdlib.h"
typedef  __compar_fn_t comparison_fn_t; 
#line 777 "/usr/include/stdlib.h"
extern void *bsearch(__const void *__key, __const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 782 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 786 "/usr/include/stdlib.h"
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 787 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 792 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 801 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 803 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 810 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 823 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 829 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 842 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 845 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 847 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 854 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 857 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 862 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 866 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 874 "/usr/include/stdlib.h"
extern int mblen(__const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 878 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 881 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 
#line 886 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 890 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, __const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 899 "/usr/include/stdlib.h"
extern int rpmatch(__const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 822 "/usr/include/stdlib.h" 3 4
# 913 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *__const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 919 "/usr/include/stdlib.h"
extern void setkey(__const char *__key) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 927 "/usr/include/stdlib.h"
extern int posix_openpt(int __oflag); 
#line 935 "/usr/include/stdlib.h"
extern int grantpt(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 939 "/usr/include/stdlib.h"
extern int unlockpt(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 944 "/usr/include/stdlib.h"
extern char *ptsname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 952 "/usr/include/stdlib.h"
extern int ptsname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 955 "/usr/include/stdlib.h"
extern int getpt(void ); 
#line 963 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 978 "/usr/include/stdlib.h" 3 4
# 136 "system.h" 2
# 158 "system.h" 
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
# 171 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 172 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/bits/environments.h" 1 3 4
# 176 "/usr/include/unistd.h" 2 3 4
# 195 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 196 "/usr/include/unistd.h" 2 3 4
# 236 "/usr/include/unistd.h" 3 4
typedef  __intptr_t intptr_t; 
#line 243 "/usr/include/unistd.h"
typedef  __socklen_t socklen_t; 
#line 256 "/usr/include/unistd.h"
extern int access(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 262 "/usr/include/unistd.h"
extern int euidaccess(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 266 "/usr/include/unistd.h"
extern int eaccess(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 274 "/usr/include/unistd.h"
extern int faccessat(int __fd, __const char *__file, int __type, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 256 "/usr/include/unistd.h" 3 4
# 299 "/usr/include/unistd.h" 3 4
extern  __off_t lseek(int __fd,  __off_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 311 "/usr/include/unistd.h"
extern  __off64_t lseek64(int __fd,  __off64_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/unistd.h"
extern int close(int __fd); 
#line 325 "/usr/include/unistd.h"
extern  ssize_t read(int __fd, void *__buf,  size_t __nbytes); 
#line 331 "/usr/include/unistd.h"
extern  ssize_t write(int __fd, __const void *__buf,  size_t __n); 
# 310 "/usr/include/unistd.h" 3 4
# 342 "/usr/include/unistd.h" 3 4
extern  ssize_t pread(int __fd, void *__buf,  size_t __nbytes,  __off_t __offset); 
#line 350 "/usr/include/unistd.h"
extern  ssize_t pwrite(int __fd, __const void *__buf,  size_t __n,  __off_t __offset); 
#line 370 "/usr/include/unistd.h"
extern  ssize_t pread64(int __fd, void *__buf,  size_t __nbytes,  __off64_t __offset); 
#line 374 "/usr/include/unistd.h"
extern  ssize_t pwrite64(int __fd, __const void *__buf,  size_t __n,  __off64_t __offset); 
#line 382 "/usr/include/unistd.h"
extern int pipe(int __pipedes[2]) __attribute__  (( __nothrow__ )) ; 
# 369 "/usr/include/unistd.h" 3 4
# 391 "/usr/include/unistd.h" 3 4
extern unsigned int alarm(unsigned int __seconds) __attribute__  (( __nothrow__ )) ; 
#line 403 "/usr/include/unistd.h"
extern unsigned int sleep(unsigned int __seconds); 
#line 411 "/usr/include/unistd.h"
extern  __useconds_t ualarm( __useconds_t __value,  __useconds_t __interval) __attribute__  (( __nothrow__ )) ; 
#line 418 "/usr/include/unistd.h"
extern int usleep( __useconds_t __useconds); 
# 403 "/usr/include/unistd.h" 3 4
# 427 "/usr/include/unistd.h" 3 4
extern int pause(void ); 
#line 432 "/usr/include/unistd.h"
extern int chown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 436 "/usr/include/unistd.h"
extern int fchown(int __fd,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ )) ; 
#line 442 "/usr/include/unistd.h"
extern int lchown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 451 "/usr/include/unistd.h"
extern int fchownat(int __fd, __const char *__file,  __uid_t __owner,  __gid_t __group, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 455 "/usr/include/unistd.h"
extern int chdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 459 "/usr/include/unistd.h"
extern int fchdir(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 469 "/usr/include/unistd.h"
extern char *getcwd(char *__buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 475 "/usr/include/unistd.h"
extern char *get_current_dir_name(void ) __attribute__  (( __nothrow__ )) ; 
#line 483 "/usr/include/unistd.h"
extern char *getwd(char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ )) ; 
#line 488 "/usr/include/unistd.h"
extern int dup(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 491 "/usr/include/unistd.h"
extern int dup2(int __fd, int __fd2) __attribute__  (( __nothrow__ )) ; 
#line 494 "/usr/include/unistd.h"
extern char **__environ; 
#line 496 "/usr/include/unistd.h"
extern char **environ; 
#line 503 "/usr/include/unistd.h"
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 509 "/usr/include/unistd.h"
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__  (( __nothrow__ )) ; 
#line 515 "/usr/include/unistd.h"
extern int execv(__const char *__path, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 520 "/usr/include/unistd.h"
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 525 "/usr/include/unistd.h"
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 530 "/usr/include/unistd.h"
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 536 "/usr/include/unistd.h"
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 541 "/usr/include/unistd.h"
extern int nice(int __inc) __attribute__  (( __nothrow__ )) ; 
#line 546 "/usr/include/unistd.h"
extern void _exit(int __status) __attribute__  (( __noreturn__ )) ; 
# 469 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/confname.h" 1 3 4
# 70 "/usr/include/bits/confname.h" 3 4
enum {_PC_LINK_MAX,_PC_MAX_CANON,_PC_MAX_INPUT,_PC_NAME_MAX,_PC_PATH_MAX,_PC_PIPE_BUF,_PC_CHOWN_RESTRICTED,_PC_NO_TRUNC,_PC_VDISABLE,_PC_SYNC_IO,_PC_ASYNC_IO,_PC_PRIO_IO,_PC_SOCK_MAXBUF,_PC_FILESIZEBITS,_PC_REC_INCR_XFER_SIZE,_PC_REC_MAX_XFER_SIZE,_PC_REC_MIN_XFER_SIZE,_PC_REC_XFER_ALIGN,_PC_ALLOC_SIZE_MIN,_PC_SYMLINK_MAX,_PC_2_SYMLINKS}; 
#line 503 "/usr/include/bits/confname.h"
enum {_SC_ARG_MAX,_SC_CHILD_MAX,_SC_CLK_TCK,_SC_NGROUPS_MAX,_SC_OPEN_MAX,_SC_STREAM_MAX,_SC_TZNAME_MAX,_SC_JOB_CONTROL,_SC_SAVED_IDS,_SC_REALTIME_SIGNALS,_SC_PRIORITY_SCHEDULING,_SC_TIMERS,_SC_ASYNCHRONOUS_IO,_SC_PRIORITIZED_IO,_SC_SYNCHRONIZED_IO,_SC_FSYNC,_SC_MAPPED_FILES,_SC_MEMLOCK,_SC_MEMLOCK_RANGE,_SC_MEMORY_PROTECTION,_SC_MESSAGE_PASSING,_SC_SEMAPHORES,_SC_SHARED_MEMORY_OBJECTS,_SC_AIO_LISTIO_MAX,_SC_AIO_MAX,_SC_AIO_PRIO_DELTA_MAX,_SC_DELAYTIMER_MAX,_SC_MQ_OPEN_MAX,_SC_MQ_PRIO_MAX,_SC_VERSION,_SC_PAGESIZE,_SC_RTSIG_MAX,_SC_SEM_NSEMS_MAX,_SC_SEM_VALUE_MAX,_SC_SIGQUEUE_MAX,_SC_TIMER_MAX,_SC_BC_BASE_MAX,_SC_BC_DIM_MAX,_SC_BC_SCALE_MAX,_SC_BC_STRING_MAX,_SC_COLL_WEIGHTS_MAX,_SC_EQUIV_CLASS_MAX,_SC_EXPR_NEST_MAX,_SC_LINE_MAX,_SC_RE_DUP_MAX,_SC_CHARCLASS_NAME_MAX,_SC_2_VERSION,_SC_2_C_BIND,_SC_2_C_DEV,_SC_2_FORT_DEV,_SC_2_FORT_RUN,_SC_2_SW_DEV,_SC_2_LOCALEDEF,_SC_PII,_SC_PII_XTI,_SC_PII_SOCKET,_SC_PII_INTERNET,_SC_PII_OSI,_SC_POLL,_SC_SELECT,_SC_UIO_MAXIOV,_SC_IOV_MAX=_SC_UIO_MAXIOV,_SC_PII_INTERNET_STREAM,_SC_PII_INTERNET_DGRAM,_SC_PII_OSI_COTS,_SC_PII_OSI_CLTS,_SC_PII_OSI_M,_SC_T_IOV_MAX,_SC_THREADS,_SC_THREAD_SAFE_FUNCTIONS,_SC_GETGR_R_SIZE_MAX,_SC_GETPW_R_SIZE_MAX,_SC_LOGIN_NAME_MAX,_SC_TTY_NAME_MAX,_SC_THREAD_DESTRUCTOR_ITERATIONS,_SC_THREAD_KEYS_MAX,_SC_THREAD_STACK_MIN,_SC_THREAD_THREADS_MAX,_SC_THREAD_ATTR_STACKADDR,_SC_THREAD_ATTR_STACKSIZE,_SC_THREAD_PRIORITY_SCHEDULING,_SC_THREAD_PRIO_INHERIT,_SC_THREAD_PRIO_PROTECT,_SC_THREAD_PROCESS_SHARED,_SC_NPROCESSORS_CONF,_SC_NPROCESSORS_ONLN,_SC_PHYS_PAGES,_SC_AVPHYS_PAGES,_SC_ATEXIT_MAX,_SC_PASS_MAX,_SC_XOPEN_VERSION,_SC_XOPEN_XCU_VERSION,_SC_XOPEN_UNIX,_SC_XOPEN_CRYPT,_SC_XOPEN_ENH_I18N,_SC_XOPEN_SHM,_SC_2_CHAR_TERM,_SC_2_C_VERSION,_SC_2_UPE,_SC_XOPEN_XPG2,_SC_XOPEN_XPG3,_SC_XOPEN_XPG4,_SC_CHAR_BIT,_SC_CHAR_MAX,_SC_CHAR_MIN,_SC_INT_MAX,_SC_INT_MIN,_SC_LONG_BIT,_SC_WORD_BIT,_SC_MB_LEN_MAX,_SC_NZERO,_SC_SSIZE_MAX,_SC_SCHAR_MAX,_SC_SCHAR_MIN,_SC_SHRT_MAX,_SC_SHRT_MIN,_SC_UCHAR_MAX,_SC_UINT_MAX,_SC_ULONG_MAX,_SC_USHRT_MAX,_SC_NL_ARGMAX,_SC_NL_LANGMAX,_SC_NL_MSGMAX,_SC_NL_NMAX,_SC_NL_SETMAX,_SC_NL_TEXTMAX,_SC_XBS5_ILP32_OFF32,_SC_XBS5_ILP32_OFFBIG,_SC_XBS5_LP64_OFF64,_SC_XBS5_LPBIG_OFFBIG,_SC_XOPEN_LEGACY,_SC_XOPEN_REALTIME,_SC_XOPEN_REALTIME_THREADS,_SC_ADVISORY_INFO,_SC_BARRIERS,_SC_BASE,_SC_C_LANG_SUPPORT,_SC_C_LANG_SUPPORT_R,_SC_CLOCK_SELECTION,_SC_CPUTIME,_SC_THREAD_CPUTIME,_SC_DEVICE_IO,_SC_DEVICE_SPECIFIC,_SC_DEVICE_SPECIFIC_R,_SC_FD_MGMT,_SC_FIFO,_SC_PIPE,_SC_FILE_ATTRIBUTES,_SC_FILE_LOCKING,_SC_FILE_SYSTEM,_SC_MONOTONIC_CLOCK,_SC_MULTI_PROCESS,_SC_SINGLE_PROCESS,_SC_NETWORKING,_SC_READER_WRITER_LOCKS,_SC_SPIN_LOCKS,_SC_REGEXP,_SC_REGEX_VERSION,_SC_SHELL,_SC_SIGNALS,_SC_SPAWN,_SC_SPORADIC_SERVER,_SC_THREAD_SPORADIC_SERVER,_SC_SYSTEM_DATABASE,_SC_SYSTEM_DATABASE_R,_SC_TIMEOUTS,_SC_TYPED_MEMORY_OBJECTS,_SC_USER_GROUPS,_SC_USER_GROUPS_R,_SC_2_PBS,_SC_2_PBS_ACCOUNTING,_SC_2_PBS_LOCATE,_SC_2_PBS_MESSAGE,_SC_2_PBS_TRACK,_SC_SYMLOOP_MAX,_SC_STREAMS,_SC_2_PBS_CHECKPOINT,_SC_V6_ILP32_OFF32,_SC_V6_ILP32_OFFBIG,_SC_V6_LP64_OFF64,_SC_V6_LPBIG_OFFBIG,_SC_HOST_NAME_MAX,_SC_TRACE,_SC_TRACE_EVENT_FILTER,_SC_TRACE_INHERIT,_SC_TRACE_LOG,_SC_LEVEL1_ICACHE_SIZE,_SC_LEVEL1_ICACHE_ASSOC,_SC_LEVEL1_ICACHE_LINESIZE,_SC_LEVEL1_DCACHE_SIZE,_SC_LEVEL1_DCACHE_ASSOC,_SC_LEVEL1_DCACHE_LINESIZE,_SC_LEVEL2_CACHE_SIZE,_SC_LEVEL2_CACHE_ASSOC,_SC_LEVEL2_CACHE_LINESIZE,_SC_LEVEL3_CACHE_SIZE,_SC_LEVEL3_CACHE_ASSOC,_SC_LEVEL3_CACHE_LINESIZE,_SC_LEVEL4_CACHE_SIZE,_SC_LEVEL4_CACHE_ASSOC,_SC_LEVEL4_CACHE_LINESIZE,_SC_IPV6=_SC_LEVEL1_ICACHE_SIZE + 50,_SC_RAW_SOCKETS}; 
#line 601 "/usr/include/bits/confname.h"
enum {_CS_PATH,_CS_V6_WIDTH_RESTRICTED_ENVS,_CS_GNU_LIBC_VERSION,_CS_GNU_LIBPTHREAD_VERSION,_CS_LFS_CFLAGS=1000,_CS_LFS_LDFLAGS,_CS_LFS_LIBS,_CS_LFS_LINTFLAGS,_CS_LFS64_CFLAGS,_CS_LFS64_LDFLAGS,_CS_LFS64_LIBS,_CS_LFS64_LINTFLAGS,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,_CS_XBS5_ILP32_OFF32_LDFLAGS,_CS_XBS5_ILP32_OFF32_LIBS,_CS_XBS5_ILP32_OFF32_LINTFLAGS,_CS_XBS5_ILP32_OFFBIG_CFLAGS,_CS_XBS5_ILP32_OFFBIG_LDFLAGS,_CS_XBS5_ILP32_OFFBIG_LIBS,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,_CS_XBS5_LP64_OFF64_CFLAGS,_CS_XBS5_LP64_OFF64_LDFLAGS,_CS_XBS5_LP64_OFF64_LIBS,_CS_XBS5_LP64_OFF64_LINTFLAGS,_CS_XBS5_LPBIG_OFFBIG_CFLAGS,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,_CS_XBS5_LPBIG_OFFBIG_LIBS,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,_CS_POSIX_V6_ILP32_OFF32_CFLAGS,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,_CS_POSIX_V6_ILP32_OFF32_LIBS,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LIBS,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,_CS_POSIX_V6_LP64_OFF64_CFLAGS,_CS_POSIX_V6_LP64_OFF64_LDFLAGS,_CS_POSIX_V6_LP64_OFF64_LIBS,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS}; 
#line 556 "/usr/include/unistd.h"
extern long int pathconf(__const char *__path, int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 559 "/usr/include/unistd.h"
extern long int fpathconf(int __fd, int __name) __attribute__  (( __nothrow__ )) ; 
#line 562 "/usr/include/unistd.h"
extern long int sysconf(int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 566 "/usr/include/unistd.h"
extern  size_t confstr(int __name, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 571 "/usr/include/unistd.h"
extern  __pid_t getpid(void ) __attribute__  (( __nothrow__ )) ; 
#line 574 "/usr/include/unistd.h"
extern  __pid_t getppid(void ) __attribute__  (( __nothrow__ )) ; 
#line 579 "/usr/include/unistd.h"
extern  __pid_t getpgrp(void ) __attribute__  (( __nothrow__ )) ; 
# 553 "/usr/include/unistd.h" 2 3 4
# 589 "/usr/include/unistd.h" 3 4
extern  __pid_t __getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 591 "/usr/include/unistd.h"
extern  __pid_t getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 598 "/usr/include/unistd.h"
extern int setpgid( __pid_t __pid,  __pid_t __pgid) __attribute__  (( __nothrow__ )) ; 
#line 615 "/usr/include/unistd.h"
extern int setpgrp(void ) __attribute__  (( __nothrow__ )) ; 
# 615 "/usr/include/unistd.h" 3 4
# 632 "/usr/include/unistd.h" 3 4
extern  __pid_t setsid(void ) __attribute__  (( __nothrow__ )) ; 
#line 636 "/usr/include/unistd.h"
extern  __pid_t getsid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 640 "/usr/include/unistd.h"
extern  __uid_t getuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 643 "/usr/include/unistd.h"
extern  __uid_t geteuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 646 "/usr/include/unistd.h"
extern  __gid_t getgid(void ) __attribute__  (( __nothrow__ )) ; 
#line 649 "/usr/include/unistd.h"
extern  __gid_t getegid(void ) __attribute__  (( __nothrow__ )) ; 
#line 654 "/usr/include/unistd.h"
extern int getgroups(int __size,  __gid_t __list[]) __attribute__  (( __nothrow__ )) ; 
#line 658 "/usr/include/unistd.h"
extern int group_member( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 665 "/usr/include/unistd.h"
extern int setuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 670 "/usr/include/unistd.h"
extern int setreuid( __uid_t __ruid,  __uid_t __euid) __attribute__  (( __nothrow__ )) ; 
#line 675 "/usr/include/unistd.h"
extern int seteuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 682 "/usr/include/unistd.h"
extern int setgid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 687 "/usr/include/unistd.h"
extern int setregid( __gid_t __rgid,  __gid_t __egid) __attribute__  (( __nothrow__ )) ; 
#line 692 "/usr/include/unistd.h"
extern int setegid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 699 "/usr/include/unistd.h"
extern int getresuid( __uid_t *__ruid,  __uid_t *__euid,  __uid_t *__suid) __attribute__  (( __nothrow__ )) ; 
#line 704 "/usr/include/unistd.h"
extern int getresgid( __gid_t *__rgid,  __gid_t *__egid,  __gid_t *__sgid) __attribute__  (( __nothrow__ )) ; 
#line 709 "/usr/include/unistd.h"
extern int setresuid( __uid_t __ruid,  __uid_t __euid,  __uid_t __suid) __attribute__  (( __nothrow__ )) ; 
#line 714 "/usr/include/unistd.h"
extern int setresgid( __gid_t __rgid,  __gid_t __egid,  __gid_t __sgid) __attribute__  (( __nothrow__ )) ; 
#line 721 "/usr/include/unistd.h"
extern  __pid_t fork(void ) __attribute__  (( __nothrow__ )) ; 
#line 728 "/usr/include/unistd.h"
extern  __pid_t vfork(void ) __attribute__  (( __nothrow__ )) ; 
#line 734 "/usr/include/unistd.h"
extern char *ttyname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 739 "/usr/include/unistd.h"
extern int ttyname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 743 "/usr/include/unistd.h"
extern int isatty(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 749 "/usr/include/unistd.h"
extern int ttyslot(void ) __attribute__  (( __nothrow__ )) ; 
#line 755 "/usr/include/unistd.h"
extern int link(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 762 "/usr/include/unistd.h"
extern int linkat(int __fromfd, __const char *__from, int __tofd, __const char *__to, int __flags) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 768 "/usr/include/unistd.h"
extern int symlink(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 775 "/usr/include/unistd.h"
extern  ssize_t readlink(__const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 781 "/usr/include/unistd.h"
extern int symlinkat(__const char *__from, int __tofd, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 786 "/usr/include/unistd.h"
extern  ssize_t readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 790 "/usr/include/unistd.h"
extern int unlink(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 795 "/usr/include/unistd.h"
extern int unlinkat(int __fd, __const char *__name, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 799 "/usr/include/unistd.h"
extern int rmdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 803 "/usr/include/unistd.h"
extern  __pid_t tcgetpgrp(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 806 "/usr/include/unistd.h"
extern int tcsetpgrp(int __fd,  __pid_t __pgrp_id) __attribute__  (( __nothrow__ )) ; 
#line 813 "/usr/include/unistd.h"
extern char *getlogin(void ); 
#line 821 "/usr/include/unistd.h"
extern int getlogin_r(char *__name,  size_t __name_len) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 826 "/usr/include/unistd.h"
extern int setlogin(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 835 "/usr/include/unistd.h" 3 4
# 1 "./../include/getopt.h" 1 3 4
# 36 "./../include/getopt.h" 3 4
extern char *optarg; 
#line 50 "./../include/getopt.h"
extern int optind; 
#line 55 "./../include/getopt.h"
extern int opterr; 
#line 59 "./../include/getopt.h"
extern int optopt; 
# 50 "./../include/getopt.h" 3 4
# 94 "./../include/getopt.h" 3 4
struct option {const char *name; int has_arg; int *flag; int val; }; 
#line 113 "./../include/getopt.h"
extern int getopt(int argc, char *const *argv, const char *shortopts); 
#line 122 "./../include/getopt.h"
extern int getopt_long(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind); 
#line 125 "./../include/getopt.h"
extern int getopt_long_only(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind); 
#line 131 "./../include/getopt.h"
extern int _getopt_internal(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind, int long_only); 
# 113 "./../include/getopt.h" 3 4
# 843 "/usr/include/unistd.h" 2 3 4
extern int gethostname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 851 "/usr/include/unistd.h"
extern int sethostname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 855 "/usr/include/unistd.h"
extern int sethostid(long int __id) __attribute__  (( __nothrow__ )) ; 
#line 862 "/usr/include/unistd.h"
extern int getdomainname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 864 "/usr/include/unistd.h"
extern int setdomainname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 870 "/usr/include/unistd.h"
extern int vhangup(void ) __attribute__  (( __nothrow__ )) ; 
#line 873 "/usr/include/unistd.h"
extern int revoke(__const char *__file) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 883 "/usr/include/unistd.h"
extern int profil(unsigned short int *__sample_buffer,  size_t __size,  size_t __offset, unsigned int __scale) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 889 "/usr/include/unistd.h"
extern int acct(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 893 "/usr/include/unistd.h"
extern char *getusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 894 "/usr/include/unistd.h"
extern void endusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 895 "/usr/include/unistd.h"
extern void setusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 901 "/usr/include/unistd.h"
extern int daemon(int __nochdir, int __noclose) __attribute__  (( __nothrow__ )) ; 
#line 908 "/usr/include/unistd.h"
extern int chroot(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 912 "/usr/include/unistd.h"
extern char *getpass(__const char *__prompt) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 921 "/usr/include/unistd.h"
extern int fsync(int __fd); 
#line 928 "/usr/include/unistd.h"
extern long int gethostid(void ); 
#line 931 "/usr/include/unistd.h"
extern void sync(void ) __attribute__  (( __nothrow__ )) ; 
#line 936 "/usr/include/unistd.h"
extern int getpagesize(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 941 "/usr/include/unistd.h"
extern int getdtablesize(void ) __attribute__  (( __nothrow__ )) ; 
#line 947 "/usr/include/unistd.h"
extern int truncate(__const char *__file,  __off_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 921 "/usr/include/unistd.h" 3 4
# 959 "/usr/include/unistd.h" 3 4
extern int truncate64(__const char *__file,  __off64_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 968 "/usr/include/unistd.h"
extern int ftruncate(int __fd,  __off_t __length) __attribute__  (( __nothrow__ )) ; 
# 968 "/usr/include/unistd.h" 3 4
# 978 "/usr/include/unistd.h" 3 4
extern int ftruncate64(int __fd,  __off64_t __length) __attribute__  (( __nothrow__ )) ; 
#line 988 "/usr/include/unistd.h"
extern int brk(void *__addr) __attribute__  (( __nothrow__ )) ; 
#line 994 "/usr/include/unistd.h"
extern void *sbrk( intptr_t __delta) __attribute__  (( __nothrow__ )) ; 
# 988 "/usr/include/unistd.h" 3 4
# 1009 "/usr/include/unistd.h" 3 4
extern long int syscall(long int __sysno, ...) __attribute__  (( __nothrow__ )) ; 
#line 1032 "/usr/include/unistd.h"
extern int lockf(int __fd, int __cmd,  __off_t __len); 
# 1032 "/usr/include/unistd.h" 3 4
# 1042 "/usr/include/unistd.h" 3 4
extern int lockf64(int __fd, int __cmd,  __off64_t __len); 
#line 1063 "/usr/include/unistd.h"
extern int fdatasync(int __fildes) __attribute__  (( __nothrow__ )) ; 
#line 1072 "/usr/include/unistd.h"
extern char *crypt(__const char *__key, __const char *__salt) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1076 "/usr/include/unistd.h"
extern void encrypt(char *__block, int __edflag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1084 "/usr/include/unistd.h"
extern void swab(__const void *__restrict __from, void *__restrict __to,  ssize_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1092 "/usr/include/unistd.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
# 1063 "/usr/include/unistd.h" 3 4
# 1101 "/usr/include/unistd.h" 3 4
# 159 "system.h" 2
# 1 "/usr/include/sys/param.h" 1 3 4
# 22 "/usr/include/sys/param.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 36 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 37 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 154 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/limits.h" 2 3 4
# 23 "/usr/include/sys/param.h" 2 3 4
# 1 "/usr/include/linux/param.h" 1 3 4
# 1 "/usr/include/asm/param.h" 1 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 25 "/usr/include/sys/param.h" 2 3 4
# 163 "system.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/limits.h" 1 3 4
# 169 "system.h" 2
# 1 "hwint.h" 1
# 173 "system.h" 2
# 201 "system.h" 
# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/sys/time.h" 2 3 4
# 39 "/usr/include/sys/time.h" 3 4
# 61 "/usr/include/sys/time.h" 3 4
struct timezone {int tz_minuteswest; int tz_dsttime; }; 
#line 63 "/usr/include/sys/time.h"
typedef struct timezone *__restrict __timezone_ptr_t; 
#line 74 "/usr/include/sys/time.h"
extern int gettimeofday(struct timeval *__restrict __tv,  __timezone_ptr_t __tz) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 81 "/usr/include/sys/time.h"
extern int settimeofday(__const struct timeval *__tv, __const struct timezone *__tz) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 88 "/usr/include/sys/time.h"
extern int adjtime(__const struct timeval *__delta, struct timeval *__olddelta) __attribute__  (( __nothrow__ )) ; 
#line 105 "/usr/include/sys/time.h"
enum __itimer_which {ITIMER_REAL=0,ITIMER_VIRTUAL=1,ITIMER_PROF=2}; 
#line 115 "/usr/include/sys/time.h"
struct itimerval {struct timeval it_interval; struct timeval it_value; }; 
#line 120 "/usr/include/sys/time.h"
typedef enum __itimer_which __itimer_which_t; 
#line 128 "/usr/include/sys/time.h"
extern int getitimer( __itimer_which_t __which, struct itimerval *__value) __attribute__  (( __nothrow__ )) ; 
#line 135 "/usr/include/sys/time.h"
extern int setitimer( __itimer_which_t __which, __const struct itimerval *__restrict __new, struct itimerval *__restrict __old) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/sys/time.h"
extern int utimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 146 "/usr/include/sys/time.h"
extern int lutimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 149 "/usr/include/sys/time.h"
extern int futimes(int __fd, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
#line 157 "/usr/include/sys/time.h"
extern int futimesat(int __fd, __const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
# 73 "/usr/include/sys/time.h" 3 4
# 191 "/usr/include/sys/time.h" 3 4
# 202 "system.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 31 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 40 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 44 "/usr/include/time.h" 2 3 4
# 153 "/usr/include/time.h" 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; __const char *tm_zone; }; 
#line 166 "/usr/include/time.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; }; 
#line 169 "/usr/include/time.h"
struct sigevent ; 
#line 184 "/usr/include/time.h"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/time.h"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 191 "/usr/include/time.h"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 194 "/usr/include/time.h"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 202 "/usr/include/time.h"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 210 "/usr/include/time.h"
extern char *strptime(__const char *__restrict __s, __const char *__restrict __fmt, struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 221 "/usr/include/time.h"
extern  size_t strftime_l(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp,  __locale_t __loc) __attribute__  (( __nothrow__ )) ; 
#line 225 "/usr/include/time.h"
extern char *strptime_l(__const char *__restrict __s, __const char *__restrict __fmt, struct tm *__tp,  __locale_t __loc) __attribute__  (( __nothrow__ )) ; 
#line 232 "/usr/include/time.h"
extern struct tm *gmtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 236 "/usr/include/time.h"
extern struct tm *localtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 243 "/usr/include/time.h"
extern struct tm *gmtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 248 "/usr/include/time.h"
extern struct tm *localtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 254 "/usr/include/time.h"
extern char *asctime(__const struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 257 "/usr/include/time.h"
extern char *ctime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 266 "/usr/include/time.h"
extern char *asctime_r(__const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 270 "/usr/include/time.h"
extern char *ctime_r(__const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 275 "/usr/include/time.h"
extern char *__tzname[2]; 
#line 276 "/usr/include/time.h"
extern int __daylight; 
#line 277 "/usr/include/time.h"
extern long int __timezone; 
#line 282 "/usr/include/time.h"
extern char *tzname[2]; 
#line 286 "/usr/include/time.h"
extern void tzset(void ) __attribute__  (( __nothrow__ )) ; 
#line 290 "/usr/include/time.h"
extern int daylight; 
#line 291 "/usr/include/time.h"
extern long int timezone; 
#line 297 "/usr/include/time.h"
extern int stime(__const  time_t *__when) __attribute__  (( __nothrow__ )) ; 
# 181 "/usr/include/time.h" 3 4
# 312 "/usr/include/time.h" 3 4
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 315 "/usr/include/time.h"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/time.h"
extern int dysize(int __year) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 328 "/usr/include/time.h"
extern int nanosleep(__const struct timespec *__requested_time, struct timespec *__remaining); 
#line 332 "/usr/include/time.h"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ )) ; 
#line 335 "/usr/include/time.h"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 339 "/usr/include/time.h"
extern int clock_settime( clockid_t __clock_id, __const struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 348 "/usr/include/time.h"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, __const struct timespec *__req, struct timespec *__rem); 
#line 351 "/usr/include/time.h"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ )) ; 
#line 358 "/usr/include/time.h"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ )) ; 
#line 361 "/usr/include/time.h"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 366 "/usr/include/time.h"
extern int timer_settime( timer_t __timerid, int __flags, __const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ )) ; 
#line 370 "/usr/include/time.h"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ )) ; 
#line 373 "/usr/include/time.h"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
# 327 "/usr/include/time.h" 3 4
# 389 "/usr/include/time.h" 3 4
extern int getdate_err; 
#line 398 "/usr/include/time.h"
extern struct tm *getdate(__const char *__string); 
# 398 "/usr/include/time.h" 3 4
# 413 "/usr/include/time.h" 3 4
extern int getdate_r(__const char *__restrict __string, struct tm *__restrict __resbufp); 
# 203 "system.h" 2
# 214 "system.h" 
# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 150 "/usr/include/bits/fcntl.h" 3 4
struct flock {short int l_type; short int l_whence;  __off_t l_start;  __off_t l_len;  __pid_t l_pid; }; 
#line 160 "/usr/include/bits/fcntl.h"
struct flock64 {short int l_type; short int l_whence;  __off64_t l_start;  __off64_t l_len;  __pid_t l_pid; }; 
#line 187 "/usr/include/bits/fcntl.h"
extern  ssize_t readahead(int __fd,  __off64_t __offset,  size_t __count) __attribute__  (( __nothrow__ )) ; 
# 183 "/usr/include/bits/fcntl.h" 3 4
# 35 "/usr/include/fcntl.h" 2 3 4
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
#line 238 "/usr/include/sys/stat.h"
extern int fstatat(int __fd, __const char *__restrict __file, struct stat *__restrict __buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
# 226 "/usr/include/sys/stat.h" 3 4
# 252 "/usr/include/sys/stat.h" 3 4
extern int fstatat64(int __fd, __const char *__restrict __file, struct stat64 *__restrict __buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 260 "/usr/include/sys/stat.h"
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 274 "/usr/include/sys/stat.h"
extern int lstat64(__const char *__restrict __file, struct stat64 *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 281 "/usr/include/sys/stat.h"
extern int chmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 288 "/usr/include/sys/stat.h"
extern int lchmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/sys/stat.h"
extern int fchmod(int __fd,  __mode_t __mode) __attribute__  (( __nothrow__ )) ; 
#line 300 "/usr/include/sys/stat.h"
extern int fchmodat(int __fd, __const char *__file,  __mode_t mode, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 307 "/usr/include/sys/stat.h"
extern  __mode_t umask( __mode_t __mask) __attribute__  (( __nothrow__ )) ; 
#line 312 "/usr/include/sys/stat.h"
extern  __mode_t getumask(void ) __attribute__  (( __nothrow__ )) ; 
#line 317 "/usr/include/sys/stat.h"
extern int mkdir(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 324 "/usr/include/sys/stat.h"
extern int mkdirat(int __fd, __const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 332 "/usr/include/sys/stat.h"
extern int mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 340 "/usr/include/sys/stat.h"
extern int mknodat(int __fd, __const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 346 "/usr/include/sys/stat.h"
extern int mkfifo(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 353 "/usr/include/sys/stat.h"
extern int mkfifoat(int __fd, __const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 272 "/usr/include/sys/stat.h" 3 4
# 381 "/usr/include/sys/stat.h" 3 4
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 383 "/usr/include/sys/stat.h"
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 385 "/usr/include/sys/stat.h"
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 388 "/usr/include/sys/stat.h"
extern int __fxstatat(int __ver, int __fildes, __const char *__filename, struct stat *__stat_buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 414 "/usr/include/sys/stat.h"
extern int __fxstat64(int __ver, int __fildes, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 416 "/usr/include/sys/stat.h"
extern int __xstat64(int __ver, __const char *__filename, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 418 "/usr/include/sys/stat.h"
extern int __lxstat64(int __ver, __const char *__filename, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 421 "/usr/include/sys/stat.h"
extern int __fxstatat64(int __ver, int __fildes, __const char *__filename, struct stat64 *__stat_buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 424 "/usr/include/sys/stat.h"
extern int __xmknod(int __ver, __const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 428 "/usr/include/sys/stat.h"
extern int __xmknodat(int __ver, int __fd, __const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 5 )  )) ; 
#line 435 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) stat(__const char *__path, struct stat *__statbuf)  {

#line 436 "/usr/include/sys/stat.h"
return __xstat(3, __path, __statbuf); }
 
#line 442 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) lstat(__const char *__path, struct stat *__statbuf)  {

#line 443 "/usr/include/sys/stat.h"
return __lxstat(3, __path, __statbuf); }
 
#line 449 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstat(int __fd, struct stat *__statbuf)  {

#line 450 "/usr/include/sys/stat.h"
return __fxstat(3, __fd, __statbuf); }
 
#line 457 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstatat(int __fd, __const char *__filename, struct stat *__statbuf, int __flag)  {

#line 458 "/usr/include/sys/stat.h"
return __fxstatat(3, __fd, __filename, __statbuf, __flag); }
 
#line 465 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev)  {

#line 466 "/usr/include/sys/stat.h"
return __xmknod(1, __path, __mode, (&__dev)); }
 
#line 474 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) mknodat(int __fd, __const char *__path,  __mode_t __mode,  __dev_t __dev)  {

#line 475 "/usr/include/sys/stat.h"
return __xmknodat(1, __fd, __path, __mode, (&__dev)); }
 
#line 484 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) stat64(__const char *__path, struct stat64 *__statbuf)  {

#line 485 "/usr/include/sys/stat.h"
return __xstat64(3, __path, __statbuf); }
 
#line 491 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) lstat64(__const char *__path, struct stat64 *__statbuf)  {

#line 492 "/usr/include/sys/stat.h"
return __lxstat64(3, __path, __statbuf); }
 
#line 498 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstat64(int __fd, struct stat64 *__statbuf)  {

#line 499 "/usr/include/sys/stat.h"
return __fxstat64(3, __fd, __statbuf); }
 
#line 506 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstatat64(int __fd, __const char *__filename, struct stat64 *__statbuf, int __flag)  {

#line 507 "/usr/include/sys/stat.h"
return __fxstatat64(3, __fd, __filename, __statbuf, __flag); }
 
# 413 "/usr/include/sys/stat.h" 3 4
# 39 "/usr/include/fcntl.h" 2 3 4
# 76 "/usr/include/fcntl.h" 3 4
extern int fcntl(int __fd, int __cmd, ...); 
#line 85 "/usr/include/fcntl.h"
extern int open(__const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 85 "/usr/include/fcntl.h" 3 4
# 95 "/usr/include/fcntl.h" 3 4
extern int open64(__const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 110 "/usr/include/fcntl.h"
extern int openat(int __fd, __const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 109 "/usr/include/fcntl.h" 3 4
# 121 "/usr/include/fcntl.h" 3 4
extern int openat64(int __fd, __const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 130 "/usr/include/fcntl.h"
extern int creat(__const char *__file,  __mode_t __mode) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 130 "/usr/include/fcntl.h" 3 4
# 140 "/usr/include/fcntl.h" 3 4
extern int creat64(__const char *__file,  __mode_t __mode) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 177 "/usr/include/fcntl.h"
extern int posix_fadvise(int __fd,  __off_t __offset,  __off_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
# 176 "/usr/include/fcntl.h" 3 4
# 189 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64(int __fd,  __off64_t __offset,  __off64_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
#line 198 "/usr/include/fcntl.h"
extern int posix_fallocate(int __fd,  __off_t __offset,  __off_t __len); 
# 198 "/usr/include/fcntl.h" 3 4
# 209 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64(int __fd,  __off64_t __offset,  __off64_t __len); 
# 215 "system.h" 2
# 252 "system.h" 
# 1 "/usr/include/sys/wait.h" 1 3 4
# 29 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 103 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember(__const  __sigset_t *, int ); 
#line 104 "/usr/include/bits/sigset.h"
extern int __sigaddset( __sigset_t *, int ); 
#line 105 "/usr/include/bits/sigset.h"
extern int __sigdelset( __sigset_t *, int ); 
#line 41 "/usr/include/signal.h"
typedef  __sig_atomic_t sig_atomic_t; 
# 34 "/usr/include/signal.h" 2 3 4
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
# 32 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 25 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/bits/resource.h" 1 3 4
# 107 "/usr/include/bits/resource.h" 3 4
enum __rlimit_resource {RLIMIT_CPU=0,RLIMIT_FSIZE=1,RLIMIT_DATA=2,RLIMIT_STACK=3,RLIMIT_CORE=4,__RLIMIT_RSS=5,RLIMIT_NOFILE=7,__RLIMIT_OFILE=RLIMIT_NOFILE,RLIMIT_AS=9,__RLIMIT_NPROC=6,__RLIMIT_MEMLOCK=8,__RLIMIT_LOCKS=10,__RLIMIT_SIGPENDING=11,__RLIMIT_MSGQUEUE=12,__RLIMIT_NICE=13,__RLIMIT_RTPRIO=14,__RLIMIT_NLIMITS=15,__RLIM_NLIMITS=__RLIMIT_NLIMITS}; 
#line 127 "/usr/include/bits/resource.h"
typedef  __rlim_t rlim_t; 
#line 132 "/usr/include/bits/resource.h"
typedef  __rlim64_t rlim64_t; 
#line 141 "/usr/include/bits/resource.h"
struct rlimit { rlim_t rlim_cur;  rlim_t rlim_max; }; 
#line 150 "/usr/include/bits/resource.h"
struct rlimit64 { rlim64_t rlim_cur;  rlim64_t rlim_max; }; 
#line 163 "/usr/include/bits/resource.h"
enum __rusage_who {RUSAGE_SELF=0,RUSAGE_CHILDREN=(-1)}; 
# 127 "/usr/include/bits/resource.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 209 "/usr/include/bits/resource.h" 2 3 4
struct rusage {struct timeval ru_utime; struct timeval ru_stime; long int ru_maxrss; long int ru_ixrss; long int ru_idrss; long int ru_isrss; long int ru_minflt; long int ru_majflt; long int ru_nswap; long int ru_inblock; long int ru_oublock; long int ru_msgsnd; long int ru_msgrcv; long int ru_nsignals; long int ru_nvcsw; long int ru_nivcsw; }; 
#line 225 "/usr/include/bits/resource.h"
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
# 33 "/usr/include/sys/wait.h" 2 3 4
# 107 "/usr/include/sys/wait.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
#line 116 "/usr/include/sys/wait.h"
extern  __pid_t wait( __WAIT_STATUS __stat_loc); 
# 116 "/usr/include/sys/wait.h" 3 4
# 139 "/usr/include/sys/wait.h" 3 4
extern  __pid_t waitpid( __pid_t __pid, int *__stat_loc, int __options); 
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4
# 144 "/usr/include/sys/wait.h" 2 3 4
# 156 "/usr/include/sys/wait.h" 3 4
extern int waitid( idtype_t __idtype,  __id_t __id,  siginfo_t *__infop, int __options); 
#line 162 "/usr/include/sys/wait.h"
struct rusage ; 
#line 170 "/usr/include/sys/wait.h"
extern  __pid_t wait3( __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 176 "/usr/include/sys/wait.h"
struct rusage ; 
#line 180 "/usr/include/sys/wait.h"
extern  __pid_t wait4( __pid_t __pid,  __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
# 253 "system.h" 2
# 303 "system.h" 
extern int getopt(int , char *const *, const char *); 
# 319 "system.h" 
# 1 "/usr/include/malloc.h" 1 3 4
# 24 "/usr/include/malloc.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
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
# 320 "system.h" 2
# 469 "system.h" 
# 1 "./../include/filenames.h" 1
# 470 "system.h" 2
# 480 "system.h" 
# 1 "./../include/libiberty.h" 1
# 42 "./../include/libiberty.h" 
# 1 "./../include/ansidecl.h" 1
# 43 "./../include/libiberty.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stddef.h" 1 3 4
# 54 "./../include/libiberty.h" 2
extern char **buildargv(const char *) __attribute__  (( __malloc__ )) ; 
#line 58 "./../include/libiberty.h"
extern void freeargv(char **); 
#line 63 "./../include/libiberty.h"
extern char **dupargv(char **) __attribute__  (( __malloc__ )) ; 
#line 86 "./../include/libiberty.h"
extern const char *lbasename(const char *); 
#line 90 "./../include/libiberty.h"
extern char *lrealpath(const char *); 
#line 96 "./../include/libiberty.h"
extern char *concat(const char *, ...) __attribute__  (( __malloc__ )) ; 
# 86 "./../include/libiberty.h" 
# 105 "./../include/libiberty.h" 
extern char *reconcat(char *, const char *, ...) __attribute__  (( __malloc__ )) ; 
#line 111 "./../include/libiberty.h"
extern unsigned long concat_length(const char *, ...); 
#line 118 "./../include/libiberty.h"
extern char *concat_copy(char *, const char *, ...); 
#line 125 "./../include/libiberty.h"
extern char *concat_copy2(const char *, ...); 
#line 129 "./../include/libiberty.h"
extern char *libiberty_concat_ptr; 
#line 141 "./../include/libiberty.h"
extern int fdmatch(int fd1, int fd2); 
#line 146 "./../include/libiberty.h"
extern char *getpwd(void ); 
#line 150 "./../include/libiberty.h"
extern long get_run_time(void ); 
#line 155 "./../include/libiberty.h"
extern char *make_relative_prefix(const char *, const char *, const char *); 
#line 160 "./../include/libiberty.h"
extern char *choose_temp_base(void ) __attribute__  (( __malloc__ )) ; 
#line 164 "./../include/libiberty.h"
extern char *make_temp_file(const char *) __attribute__  (( __malloc__ )) ; 
#line 168 "./../include/libiberty.h"
extern const char *spaces(int count); 
#line 173 "./../include/libiberty.h"
extern int errno_max(void ); 
#line 178 "./../include/libiberty.h"
extern const char *strerrno(int ); 
#line 182 "./../include/libiberty.h"
extern int strtoerrno(const char *); 
#line 186 "./../include/libiberty.h"
extern char *xstrerror(int ); 
#line 191 "./../include/libiberty.h"
extern int signo_max(void ); 
# 141 "./../include/libiberty.h" 
# 203 "./../include/libiberty.h" 
extern const char *strsigno(int ); 
#line 207 "./../include/libiberty.h"
extern int strtosigno(const char *); 
#line 211 "./../include/libiberty.h"
extern int xatexit(void (*fn)(void )); 
#line 215 "./../include/libiberty.h"
extern void xexit(int status) __attribute__  (( __noreturn__ )) ; 
#line 219 "./../include/libiberty.h"
extern void xmalloc_set_program_name(const char *); 
#line 222 "./../include/libiberty.h"
extern void xmalloc_failed( size_t ) __attribute__  (( __noreturn__ )) ; 
#line 228 "./../include/libiberty.h"
extern void *xmalloc( size_t ) __attribute__  (( __malloc__ )) ; 
#line 234 "./../include/libiberty.h"
extern void *xrealloc(void *,  size_t ); 
#line 239 "./../include/libiberty.h"
extern void *xcalloc( size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 243 "./../include/libiberty.h"
extern char *xstrdup(const char *) __attribute__  (( __malloc__ )) ; 
#line 247 "./../include/libiberty.h"
extern void *xmemdup(const void *,  size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 250 "./../include/libiberty.h"
extern double physmem_total(void ); 
#line 251 "./../include/libiberty.h"
extern double physmem_available(void ); 
#line 257 "./../include/libiberty.h"
extern const unsigned char _hex_value[256]; 
#line 258 "./../include/libiberty.h"
extern void hex_init(void ); 
#line 274 "./../include/libiberty.h"
extern int pexecute(const char *, char *const *, const char *, const char *, char **, char **, int ); 
#line 279 "./../include/libiberty.h"
extern int pwait(int , int *, int ); 
#line 285 "./../include/libiberty.h"
extern int asprintf(char **, const char *, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 274 "./../include/libiberty.h" 
# 304 "./../include/libiberty.h" 
extern void *C_alloca( size_t ) __attribute__  (( __malloc__ )) ; 
# 481 "system.h" 2
# 534 "system.h" 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.1/include/stdbool.h" 1 3 4
# 535 "system.h" 2
# 578 "system.h" 
# 610 "system.h" 
# 637 "system.h" 
# 649 "system.h" 
# 659 "system.h" 
# 91 "reload.c" 2
# 1 "coretypes.h" 1
# 40 "coretypes.h" 
struct rtx_def ; 
#line 41 "coretypes.h"
typedef struct rtx_def *rtx; 
#line 42 "coretypes.h"
struct rtvec_def ; 
#line 43 "coretypes.h"
typedef struct rtvec_def *rtvec; 
#line 44 "coretypes.h"
union tree_node ; 
#line 45 "coretypes.h"
typedef union tree_node *tree; 
#line 51 "coretypes.h"
struct cpp_reader ; 
# 92 "reload.c" 2
# 1 "tm.h" 1
# 1 "config/i386/i386.h" 1
# 87 "config/i386/i386.h" 
struct processor_costs {const int add; const int lea; const int shift_var; const int shift_const; const int mult_init[5]; const int mult_bit; const int divide[5]; int movsx; int movzx; const int large_insn; const int move_ratio; const int movzbl_load; const int int_load[3]; const int int_store[3]; const int fp_move; const int fp_load[3]; const int fp_store[3]; const int mmx_move; const int mmx_load[2]; const int mmx_store[2]; const int sse_move; const int sse_load[3]; const int sse_store[3]; const int mmxsse_to_integer; const int prefetch_block; const int simultaneous_prefetches; const int branch_cost; const int fadd; const int fmul; const int fdiv; const int fabs; const int fchs; const int fsqrt; }; 
#line 89 "config/i386/i386.h"
extern const struct processor_costs *ix86_cost; 
#line 93 "config/i386/i386.h"
extern int target_flags; 
#line 224 "config/i386/i386.h"
extern const int x86_use_leave,x86_push_memory,x86_zero_extend_with_and; 
#line 225 "config/i386/i386.h"
extern const int x86_use_bit_test,x86_cmove,x86_deep_branch; 
#line 226 "config/i386/i386.h"
extern const int x86_branch_hints,x86_unroll_strlen; 
#line 227 "config/i386/i386.h"
extern const int x86_double_with_add,x86_partial_reg_stall,x86_movx; 
#line 228 "config/i386/i386.h"
extern const int x86_use_loop,x86_use_fiop,x86_use_mov0; 
#line 229 "config/i386/i386.h"
extern const int x86_use_cltd,x86_read_modify_write; 
#line 230 "config/i386/i386.h"
extern const int x86_read_modify,x86_split_long_moves; 
#line 231 "config/i386/i386.h"
extern const int x86_promote_QImode,x86_single_stringop,x86_fast_prefix; 
#line 232 "config/i386/i386.h"
extern const int x86_himode_math,x86_qimode_math,x86_promote_qi_regs; 
#line 233 "config/i386/i386.h"
extern const int x86_promote_hi_regs,x86_integer_DFmode_moves; 
#line 234 "config/i386/i386.h"
extern const int x86_add_esp_4,x86_add_esp_8,x86_sub_esp_4,x86_sub_esp_8; 
#line 235 "config/i386/i386.h"
extern const int x86_partial_reg_dependency,x86_memory_mismatch_stall; 
#line 236 "config/i386/i386.h"
extern const int x86_accumulate_outgoing_args,x86_prologue_using_move; 
#line 237 "config/i386/i386.h"
extern const int x86_epilogue_using_move,x86_decompose_lea; 
#line 238 "config/i386/i386.h"
extern const int x86_arch_always_fancy_math_387,x86_shift1; 
#line 239 "config/i386/i386.h"
extern const int x86_sse_partial_reg_dependency,x86_sse_partial_regs; 
#line 240 "config/i386/i386.h"
extern const int x86_sse_typeless_stores,x86_sse_load0_by_pxor; 
#line 241 "config/i386/i386.h"
extern const int x86_use_ffreep,x86_sse_partial_regs_for_cvtsd2ss; 
#line 242 "config/i386/i386.h"
extern const int x86_inter_unit_moves; 
#line 243 "config/i386/i386.h"
extern int x86_prefetch_sse; 
# 224 "config/i386/i386.h" 
# 1299 "config/i386/i386.h" 
enum reg_class {NO_REGS,AREG,DREG,CREG,BREG,SIREG,DIREG,AD_REGS,Q_REGS,NON_Q_REGS,INDEX_REGS,LEGACY_REGS,GENERAL_REGS,FP_TOP_REG,FP_SECOND_REG,FLOAT_REGS,SSE_REGS,MMX_REGS,FP_TOP_SSE_REGS,FP_SECOND_SSE_REGS,FLOAT_SSE_REGS,FLOAT_INT_REGS,INT_SSE_REGS,FLOAT_INT_SSE_REGS,ALL_REGS,LIM_REG_CLASSES}; 
#line 1762 "config/i386/i386.h"
typedef struct ix86_args {int words; int nregs; int regno; int fastcall; int sse_words; int sse_nregs; int warn_sse; int warn_mmx; int sse_regno; int mmx_words; int mmx_nregs; int mmx_regno; int maybe_vaarg; }CUMULATIVE_ARGS; 
# 1748 "config/i386/i386.h" 
# 2539 "config/i386/i386.h" 
enum ix86_builtins {IX86_BUILTIN_ADDPS,IX86_BUILTIN_ADDSS,IX86_BUILTIN_DIVPS,IX86_BUILTIN_DIVSS,IX86_BUILTIN_MULPS,IX86_BUILTIN_MULSS,IX86_BUILTIN_SUBPS,IX86_BUILTIN_SUBSS,IX86_BUILTIN_CMPEQPS,IX86_BUILTIN_CMPLTPS,IX86_BUILTIN_CMPLEPS,IX86_BUILTIN_CMPGTPS,IX86_BUILTIN_CMPGEPS,IX86_BUILTIN_CMPNEQPS,IX86_BUILTIN_CMPNLTPS,IX86_BUILTIN_CMPNLEPS,IX86_BUILTIN_CMPNGTPS,IX86_BUILTIN_CMPNGEPS,IX86_BUILTIN_CMPORDPS,IX86_BUILTIN_CMPUNORDPS,IX86_BUILTIN_CMPNEPS,IX86_BUILTIN_CMPEQSS,IX86_BUILTIN_CMPLTSS,IX86_BUILTIN_CMPLESS,IX86_BUILTIN_CMPNEQSS,IX86_BUILTIN_CMPNLTSS,IX86_BUILTIN_CMPNLESS,IX86_BUILTIN_CMPORDSS,IX86_BUILTIN_CMPUNORDSS,IX86_BUILTIN_CMPNESS,IX86_BUILTIN_COMIEQSS,IX86_BUILTIN_COMILTSS,IX86_BUILTIN_COMILESS,IX86_BUILTIN_COMIGTSS,IX86_BUILTIN_COMIGESS,IX86_BUILTIN_COMINEQSS,IX86_BUILTIN_UCOMIEQSS,IX86_BUILTIN_UCOMILTSS,IX86_BUILTIN_UCOMILESS,IX86_BUILTIN_UCOMIGTSS,IX86_BUILTIN_UCOMIGESS,IX86_BUILTIN_UCOMINEQSS,IX86_BUILTIN_CVTPI2PS,IX86_BUILTIN_CVTPS2PI,IX86_BUILTIN_CVTSI2SS,IX86_BUILTIN_CVTSI642SS,IX86_BUILTIN_CVTSS2SI,IX86_BUILTIN_CVTSS2SI64,IX86_BUILTIN_CVTTPS2PI,IX86_BUILTIN_CVTTSS2SI,IX86_BUILTIN_CVTTSS2SI64,IX86_BUILTIN_MAXPS,IX86_BUILTIN_MAXSS,IX86_BUILTIN_MINPS,IX86_BUILTIN_MINSS,IX86_BUILTIN_LOADAPS,IX86_BUILTIN_LOADUPS,IX86_BUILTIN_STOREAPS,IX86_BUILTIN_STOREUPS,IX86_BUILTIN_LOADSS,IX86_BUILTIN_STORESS,IX86_BUILTIN_MOVSS,IX86_BUILTIN_MOVHLPS,IX86_BUILTIN_MOVLHPS,IX86_BUILTIN_LOADHPS,IX86_BUILTIN_LOADLPS,IX86_BUILTIN_STOREHPS,IX86_BUILTIN_STORELPS,IX86_BUILTIN_MASKMOVQ,IX86_BUILTIN_MOVMSKPS,IX86_BUILTIN_PMOVMSKB,IX86_BUILTIN_MOVNTPS,IX86_BUILTIN_MOVNTQ,IX86_BUILTIN_LOADDQA,IX86_BUILTIN_LOADDQU,IX86_BUILTIN_STOREDQA,IX86_BUILTIN_STOREDQU,IX86_BUILTIN_MOVQ,IX86_BUILTIN_LOADD,IX86_BUILTIN_STORED,IX86_BUILTIN_CLRTI,IX86_BUILTIN_PACKSSWB,IX86_BUILTIN_PACKSSDW,IX86_BUILTIN_PACKUSWB,IX86_BUILTIN_PADDB,IX86_BUILTIN_PADDW,IX86_BUILTIN_PADDD,IX86_BUILTIN_PADDQ,IX86_BUILTIN_PADDSB,IX86_BUILTIN_PADDSW,IX86_BUILTIN_PADDUSB,IX86_BUILTIN_PADDUSW,IX86_BUILTIN_PSUBB,IX86_BUILTIN_PSUBW,IX86_BUILTIN_PSUBD,IX86_BUILTIN_PSUBQ,IX86_BUILTIN_PSUBSB,IX86_BUILTIN_PSUBSW,IX86_BUILTIN_PSUBUSB,IX86_BUILTIN_PSUBUSW,IX86_BUILTIN_PAND,IX86_BUILTIN_PANDN,IX86_BUILTIN_POR,IX86_BUILTIN_PXOR,IX86_BUILTIN_PAVGB,IX86_BUILTIN_PAVGW,IX86_BUILTIN_PCMPEQB,IX86_BUILTIN_PCMPEQW,IX86_BUILTIN_PCMPEQD,IX86_BUILTIN_PCMPGTB,IX86_BUILTIN_PCMPGTW,IX86_BUILTIN_PCMPGTD,IX86_BUILTIN_PEXTRW,IX86_BUILTIN_PINSRW,IX86_BUILTIN_PMADDWD,IX86_BUILTIN_PMAXSW,IX86_BUILTIN_PMAXUB,IX86_BUILTIN_PMINSW,IX86_BUILTIN_PMINUB,IX86_BUILTIN_PMULHUW,IX86_BUILTIN_PMULHW,IX86_BUILTIN_PMULLW,IX86_BUILTIN_PSADBW,IX86_BUILTIN_PSHUFW,IX86_BUILTIN_PSLLW,IX86_BUILTIN_PSLLD,IX86_BUILTIN_PSLLQ,IX86_BUILTIN_PSRAW,IX86_BUILTIN_PSRAD,IX86_BUILTIN_PSRLW,IX86_BUILTIN_PSRLD,IX86_BUILTIN_PSRLQ,IX86_BUILTIN_PSLLWI,IX86_BUILTIN_PSLLDI,IX86_BUILTIN_PSLLQI,IX86_BUILTIN_PSRAWI,IX86_BUILTIN_PSRADI,IX86_BUILTIN_PSRLWI,IX86_BUILTIN_PSRLDI,IX86_BUILTIN_PSRLQI,IX86_BUILTIN_PUNPCKHBW,IX86_BUILTIN_PUNPCKHWD,IX86_BUILTIN_PUNPCKHDQ,IX86_BUILTIN_PUNPCKLBW,IX86_BUILTIN_PUNPCKLWD,IX86_BUILTIN_PUNPCKLDQ,IX86_BUILTIN_SHUFPS,IX86_BUILTIN_RCPPS,IX86_BUILTIN_RCPSS,IX86_BUILTIN_RSQRTPS,IX86_BUILTIN_RSQRTSS,IX86_BUILTIN_SQRTPS,IX86_BUILTIN_SQRTSS,IX86_BUILTIN_UNPCKHPS,IX86_BUILTIN_UNPCKLPS,IX86_BUILTIN_ANDPS,IX86_BUILTIN_ANDNPS,IX86_BUILTIN_ORPS,IX86_BUILTIN_XORPS,IX86_BUILTIN_EMMS,IX86_BUILTIN_LDMXCSR,IX86_BUILTIN_STMXCSR,IX86_BUILTIN_SFENCE,IX86_BUILTIN_FEMMS,IX86_BUILTIN_PAVGUSB,IX86_BUILTIN_PF2ID,IX86_BUILTIN_PFACC,IX86_BUILTIN_PFADD,IX86_BUILTIN_PFCMPEQ,IX86_BUILTIN_PFCMPGE,IX86_BUILTIN_PFCMPGT,IX86_BUILTIN_PFMAX,IX86_BUILTIN_PFMIN,IX86_BUILTIN_PFMUL,IX86_BUILTIN_PFRCP,IX86_BUILTIN_PFRCPIT1,IX86_BUILTIN_PFRCPIT2,IX86_BUILTIN_PFRSQIT1,IX86_BUILTIN_PFRSQRT,IX86_BUILTIN_PFSUB,IX86_BUILTIN_PFSUBR,IX86_BUILTIN_PI2FD,IX86_BUILTIN_PMULHRW,IX86_BUILTIN_PF2IW,IX86_BUILTIN_PFNACC,IX86_BUILTIN_PFPNACC,IX86_BUILTIN_PI2FW,IX86_BUILTIN_PSWAPDSI,IX86_BUILTIN_PSWAPDSF,IX86_BUILTIN_SSE_ZERO,IX86_BUILTIN_MMX_ZERO,IX86_BUILTIN_ADDPD,IX86_BUILTIN_ADDSD,IX86_BUILTIN_DIVPD,IX86_BUILTIN_DIVSD,IX86_BUILTIN_MULPD,IX86_BUILTIN_MULSD,IX86_BUILTIN_SUBPD,IX86_BUILTIN_SUBSD,IX86_BUILTIN_CMPEQPD,IX86_BUILTIN_CMPLTPD,IX86_BUILTIN_CMPLEPD,IX86_BUILTIN_CMPGTPD,IX86_BUILTIN_CMPGEPD,IX86_BUILTIN_CMPNEQPD,IX86_BUILTIN_CMPNLTPD,IX86_BUILTIN_CMPNLEPD,IX86_BUILTIN_CMPNGTPD,IX86_BUILTIN_CMPNGEPD,IX86_BUILTIN_CMPORDPD,IX86_BUILTIN_CMPUNORDPD,IX86_BUILTIN_CMPNEPD,IX86_BUILTIN_CMPEQSD,IX86_BUILTIN_CMPLTSD,IX86_BUILTIN_CMPLESD,IX86_BUILTIN_CMPNEQSD,IX86_BUILTIN_CMPNLTSD,IX86_BUILTIN_CMPNLESD,IX86_BUILTIN_CMPORDSD,IX86_BUILTIN_CMPUNORDSD,IX86_BUILTIN_CMPNESD,IX86_BUILTIN_COMIEQSD,IX86_BUILTIN_COMILTSD,IX86_BUILTIN_COMILESD,IX86_BUILTIN_COMIGTSD,IX86_BUILTIN_COMIGESD,IX86_BUILTIN_COMINEQSD,IX86_BUILTIN_UCOMIEQSD,IX86_BUILTIN_UCOMILTSD,IX86_BUILTIN_UCOMILESD,IX86_BUILTIN_UCOMIGTSD,IX86_BUILTIN_UCOMIGESD,IX86_BUILTIN_UCOMINEQSD,IX86_BUILTIN_MAXPD,IX86_BUILTIN_MAXSD,IX86_BUILTIN_MINPD,IX86_BUILTIN_MINSD,IX86_BUILTIN_ANDPD,IX86_BUILTIN_ANDNPD,IX86_BUILTIN_ORPD,IX86_BUILTIN_XORPD,IX86_BUILTIN_SQRTPD,IX86_BUILTIN_SQRTSD,IX86_BUILTIN_UNPCKHPD,IX86_BUILTIN_UNPCKLPD,IX86_BUILTIN_SHUFPD,IX86_BUILTIN_LOADAPD,IX86_BUILTIN_LOADUPD,IX86_BUILTIN_STOREAPD,IX86_BUILTIN_STOREUPD,IX86_BUILTIN_LOADSD,IX86_BUILTIN_STORESD,IX86_BUILTIN_MOVSD,IX86_BUILTIN_LOADHPD,IX86_BUILTIN_LOADLPD,IX86_BUILTIN_STOREHPD,IX86_BUILTIN_STORELPD,IX86_BUILTIN_CVTDQ2PD,IX86_BUILTIN_CVTDQ2PS,IX86_BUILTIN_CVTPD2DQ,IX86_BUILTIN_CVTPD2PI,IX86_BUILTIN_CVTPD2PS,IX86_BUILTIN_CVTTPD2DQ,IX86_BUILTIN_CVTTPD2PI,IX86_BUILTIN_CVTPI2PD,IX86_BUILTIN_CVTSI2SD,IX86_BUILTIN_CVTSI642SD,IX86_BUILTIN_CVTSD2SI,IX86_BUILTIN_CVTSD2SI64,IX86_BUILTIN_CVTSD2SS,IX86_BUILTIN_CVTSS2SD,IX86_BUILTIN_CVTTSD2SI,IX86_BUILTIN_CVTTSD2SI64,IX86_BUILTIN_CVTPS2DQ,IX86_BUILTIN_CVTPS2PD,IX86_BUILTIN_CVTTPS2DQ,IX86_BUILTIN_MOVNTI,IX86_BUILTIN_MOVNTPD,IX86_BUILTIN_MOVNTDQ,IX86_BUILTIN_SETPD1,IX86_BUILTIN_SETPD,IX86_BUILTIN_CLRPD,IX86_BUILTIN_SETRPD,IX86_BUILTIN_LOADPD1,IX86_BUILTIN_LOADRPD,IX86_BUILTIN_STOREPD1,IX86_BUILTIN_STORERPD,IX86_BUILTIN_MASKMOVDQU,IX86_BUILTIN_MOVMSKPD,IX86_BUILTIN_PMOVMSKB128,IX86_BUILTIN_MOVQ2DQ,IX86_BUILTIN_MOVDQ2Q,IX86_BUILTIN_PACKSSWB128,IX86_BUILTIN_PACKSSDW128,IX86_BUILTIN_PACKUSWB128,IX86_BUILTIN_PADDB128,IX86_BUILTIN_PADDW128,IX86_BUILTIN_PADDD128,IX86_BUILTIN_PADDQ128,IX86_BUILTIN_PADDSB128,IX86_BUILTIN_PADDSW128,IX86_BUILTIN_PADDUSB128,IX86_BUILTIN_PADDUSW128,IX86_BUILTIN_PSUBB128,IX86_BUILTIN_PSUBW128,IX86_BUILTIN_PSUBD128,IX86_BUILTIN_PSUBQ128,IX86_BUILTIN_PSUBSB128,IX86_BUILTIN_PSUBSW128,IX86_BUILTIN_PSUBUSB128,IX86_BUILTIN_PSUBUSW128,IX86_BUILTIN_PAND128,IX86_BUILTIN_PANDN128,IX86_BUILTIN_POR128,IX86_BUILTIN_PXOR128,IX86_BUILTIN_PAVGB128,IX86_BUILTIN_PAVGW128,IX86_BUILTIN_PCMPEQB128,IX86_BUILTIN_PCMPEQW128,IX86_BUILTIN_PCMPEQD128,IX86_BUILTIN_PCMPGTB128,IX86_BUILTIN_PCMPGTW128,IX86_BUILTIN_PCMPGTD128,IX86_BUILTIN_PEXTRW128,IX86_BUILTIN_PINSRW128,IX86_BUILTIN_PMADDWD128,IX86_BUILTIN_PMAXSW128,IX86_BUILTIN_PMAXUB128,IX86_BUILTIN_PMINSW128,IX86_BUILTIN_PMINUB128,IX86_BUILTIN_PMULUDQ,IX86_BUILTIN_PMULUDQ128,IX86_BUILTIN_PMULHUW128,IX86_BUILTIN_PMULHW128,IX86_BUILTIN_PMULLW128,IX86_BUILTIN_PSADBW128,IX86_BUILTIN_PSHUFHW,IX86_BUILTIN_PSHUFLW,IX86_BUILTIN_PSHUFD,IX86_BUILTIN_PSLLW128,IX86_BUILTIN_PSLLD128,IX86_BUILTIN_PSLLQ128,IX86_BUILTIN_PSRAW128,IX86_BUILTIN_PSRAD128,IX86_BUILTIN_PSRLW128,IX86_BUILTIN_PSRLD128,IX86_BUILTIN_PSRLQ128,IX86_BUILTIN_PSLLDQI128,IX86_BUILTIN_PSLLWI128,IX86_BUILTIN_PSLLDI128,IX86_BUILTIN_PSLLQI128,IX86_BUILTIN_PSRAWI128,IX86_BUILTIN_PSRADI128,IX86_BUILTIN_PSRLDQI128,IX86_BUILTIN_PSRLWI128,IX86_BUILTIN_PSRLDI128,IX86_BUILTIN_PSRLQI128,IX86_BUILTIN_PUNPCKHBW128,IX86_BUILTIN_PUNPCKHWD128,IX86_BUILTIN_PUNPCKHDQ128,IX86_BUILTIN_PUNPCKHQDQ128,IX86_BUILTIN_PUNPCKLBW128,IX86_BUILTIN_PUNPCKLWD128,IX86_BUILTIN_PUNPCKLDQ128,IX86_BUILTIN_PUNPCKLQDQ128,IX86_BUILTIN_CLFLUSH,IX86_BUILTIN_MFENCE,IX86_BUILTIN_LFENCE,IX86_BUILTIN_ADDSUBPS,IX86_BUILTIN_HADDPS,IX86_BUILTIN_HSUBPS,IX86_BUILTIN_MOVSHDUP,IX86_BUILTIN_MOVSLDUP,IX86_BUILTIN_ADDSUBPD,IX86_BUILTIN_HADDPD,IX86_BUILTIN_HSUBPD,IX86_BUILTIN_LOADDDUP,IX86_BUILTIN_MOVDDUP,IX86_BUILTIN_LDDQU,IX86_BUILTIN_MONITOR,IX86_BUILTIN_MWAIT,IX86_BUILTIN_MAX}; 
#line 2783 "config/i386/i386.h"
extern int const dbx_register_map[53]; 
#line 2784 "config/i386/i386.h"
extern int const dbx64_register_map[53]; 
#line 2785 "config/i386/i386.h"
extern int const svr4_dbx_register_map[53]; 
# 2783 "config/i386/i386.h" 
# 3011 "config/i386/i386.h" 
enum processor_type {PROCESSOR_I386,PROCESSOR_I486,PROCESSOR_PENTIUM,PROCESSOR_PENTIUMPRO,PROCESSOR_K6,PROCESSOR_ATHLON,PROCESSOR_PENTIUM4,PROCESSOR_K8,PROCESSOR_max}; 
#line 3013 "config/i386/i386.h"
extern enum processor_type ix86_tune; 
#line 3014 "config/i386/i386.h"
extern const char *ix86_tune_string; 
#line 3016 "config/i386/i386.h"
extern enum processor_type ix86_arch; 
#line 3017 "config/i386/i386.h"
extern const char *ix86_arch_string; 
#line 3023 "config/i386/i386.h"
enum fpmath_unit {FPMATH_387=1,FPMATH_SSE=2}; 
#line 3025 "config/i386/i386.h"
extern enum fpmath_unit ix86_fpmath; 
#line 3026 "config/i386/i386.h"
extern const char *ix86_fpmath_string; 
#line 3032 "config/i386/i386.h"
enum tls_dialect {TLS_DIALECT_GNU,TLS_DIALECT_SUN}; 
#line 3034 "config/i386/i386.h"
extern enum tls_dialect ix86_tls_dialect; 
#line 3035 "config/i386/i386.h"
extern const char *ix86_tls_dialect_string; 
#line 3044 "config/i386/i386.h"
enum cmodel {CM_32,CM_SMALL,CM_KERNEL,CM_MEDIUM,CM_LARGE,CM_SMALL_PIC}; 
#line 3046 "config/i386/i386.h"
extern enum cmodel ix86_cmodel; 
#line 3047 "config/i386/i386.h"
extern const char *ix86_cmodel_string; 
#line 3057 "config/i386/i386.h"
enum asm_dialect {ASM_ATT,ASM_INTEL}; 
#line 3059 "config/i386/i386.h"
extern const char *ix86_asm_string; 
#line 3060 "config/i386/i386.h"
extern enum asm_dialect ix86_asm_dialect; 
#line 3062 "config/i386/i386.h"
extern int ix86_regparm; 
#line 3063 "config/i386/i386.h"
extern const char *ix86_regparm_string; 
#line 3065 "config/i386/i386.h"
extern int ix86_preferred_stack_boundary; 
#line 3066 "config/i386/i386.h"
extern const char *ix86_preferred_stack_boundary_string; 
#line 3068 "config/i386/i386.h"
extern int ix86_branch_cost; 
#line 3069 "config/i386/i386.h"
extern const char *ix86_branch_cost_string; 
#line 3071 "config/i386/i386.h"
extern const char *ix86_debug_arg_string; 
#line 3072 "config/i386/i386.h"
extern const char *ix86_debug_addr_string; 
#line 3075 "config/i386/i386.h"
extern const char *ix86_align_loops_string; 
#line 3076 "config/i386/i386.h"
extern const char *ix86_align_jumps_string; 
#line 3077 "config/i386/i386.h"
extern const char *ix86_align_funcs_string; 
#line 3080 "config/i386/i386.h"
extern enum reg_class const regclass_map[53]; 
#line 3082 "config/i386/i386.h"
extern  rtx ix86_compare_op0; 
#line 3083 "config/i386/i386.h"
extern  rtx ix86_compare_op1; 
#line 3100 "config/i386/i386.h"
enum fp_cw_mode {FP_CW_STORED,FP_CW_UNINITIALIZED,FP_CW_ANY}; 
# 3100 "config/i386/i386.h" 
# 3174 "config/i386/i386.h" 
struct machine_function {struct stack_local_entry *stack_locals; const char *some_ld_name; int save_varrargs_registers; int accesses_prev_frame; int optimize_mode_switching; int use_fast_prologue_epilogue; int use_fast_prologue_epilogue_nregs; }; 
# 5 "tm.h" 2
# 1 "config/i386/unix.h" 1
# 6 "tm.h" 2
# 1 "config/i386/att.h" 1
# 7 "tm.h" 2
# 1 "config/dbxelf.h" 1
# 8 "tm.h" 2
# 1 "config/elfos.h" 1
# 9 "tm.h" 2
# 1 "config/svr4.h" 1
# 10 "tm.h" 2
# 1 "config/linux.h" 1
# 11 "tm.h" 2
# 1 "config/i386/linux.h" 1
# 12 "tm.h" 2
# 1 "defaults.h" 1
# 13 "tm.h" 2
# 1 "insn-constants.h" 1
# 16 "tm.h" 2
# 1 "insn-flags.h" 1
# 744 "insn-flags.h" 
static __inline__  rtx gen_cmpdi_ccno_1_rex64( rtx ,  rtx ); 
#line 746 "insn-flags.h"
static __inline__  rtx gen_cmpdi_ccno_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 747 "insn-flags.h"
return 0; }
 
#line 749 "insn-flags.h"
static __inline__  rtx gen_cmpdi_1_insn_rex64( rtx ,  rtx ); 
#line 751 "insn-flags.h"
static __inline__  rtx gen_cmpdi_1_insn_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 752 "insn-flags.h"
return 0; }
 
#line 754 "insn-flags.h"
extern  rtx gen_cmpqi_ext_3_insn( rtx ,  rtx ); 
#line 755 "insn-flags.h"
static __inline__  rtx gen_cmpqi_ext_3_insn_rex64( rtx ,  rtx ); 
#line 757 "insn-flags.h"
static __inline__  rtx gen_cmpqi_ext_3_insn_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 758 "insn-flags.h"
return 0; }
 
#line 760 "insn-flags.h"
extern  rtx gen_x86_sahf_1( rtx ); 
#line 761 "insn-flags.h"
extern  rtx gen_popsi1( rtx ); 
#line 762 "insn-flags.h"
extern  rtx gen_movsi_insv_1( rtx ,  rtx ); 
#line 763 "insn-flags.h"
static __inline__  rtx gen_pushdi2_rex64( rtx ,  rtx ); 
#line 765 "insn-flags.h"
static __inline__  rtx gen_pushdi2_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 766 "insn-flags.h"
return 0; }
 
#line 768 "insn-flags.h"
static __inline__  rtx gen_popdi1( rtx ); 
#line 770 "insn-flags.h"
static __inline__  rtx gen_popdi1( rtx a __attribute__  (( __unused__ )) )  {

#line 771 "insn-flags.h"
return 0; }
 
#line 773 "insn-flags.h"
extern  rtx gen_swapxf( rtx ,  rtx ); 
#line 774 "insn-flags.h"
extern  rtx gen_zero_extendhisi2_and( rtx ,  rtx ); 
#line 775 "insn-flags.h"
extern  rtx gen_zero_extendsidi2_32( rtx ,  rtx ); 
#line 776 "insn-flags.h"
static __inline__  rtx gen_zero_extendsidi2_rex64( rtx ,  rtx ); 
#line 778 "insn-flags.h"
static __inline__  rtx gen_zero_extendsidi2_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 779 "insn-flags.h"
return 0; }
 
#line 781 "insn-flags.h"
static __inline__  rtx gen_zero_extendhidi2( rtx ,  rtx ); 
#line 783 "insn-flags.h"
static __inline__  rtx gen_zero_extendhidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 784 "insn-flags.h"
return 0; }
 
#line 786 "insn-flags.h"
static __inline__  rtx gen_zero_extendqidi2( rtx ,  rtx ); 
#line 788 "insn-flags.h"
static __inline__  rtx gen_zero_extendqidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 789 "insn-flags.h"
return 0; }
 
#line 791 "insn-flags.h"
static __inline__  rtx gen_extendsidi2_rex64( rtx ,  rtx ); 
#line 793 "insn-flags.h"
static __inline__  rtx gen_extendsidi2_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 794 "insn-flags.h"
return 0; }
 
#line 796 "insn-flags.h"
static __inline__  rtx gen_extendhidi2( rtx ,  rtx ); 
#line 798 "insn-flags.h"
static __inline__  rtx gen_extendhidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 799 "insn-flags.h"
return 0; }
 
#line 801 "insn-flags.h"
static __inline__  rtx gen_extendqidi2( rtx ,  rtx ); 
#line 803 "insn-flags.h"
static __inline__  rtx gen_extendqidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 804 "insn-flags.h"
return 0; }
 
#line 806 "insn-flags.h"
extern  rtx gen_extendhisi2( rtx ,  rtx ); 
#line 807 "insn-flags.h"
extern  rtx gen_extendqihi2( rtx ,  rtx ); 
#line 808 "insn-flags.h"
extern  rtx gen_extendqisi2( rtx ,  rtx ); 
#line 809 "insn-flags.h"
extern  rtx gen_truncdfsf2_sse_only( rtx ,  rtx ); 
#line 810 "insn-flags.h"
extern  rtx gen_fix_truncdi_nomemory( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 811 "insn-flags.h"
extern  rtx gen_fix_truncdi_memory( rtx ,  rtx ,  rtx ,  rtx ); 
#line 812 "insn-flags.h"
static __inline__  rtx gen_fix_truncsfdi_sse( rtx ,  rtx ); 
#line 814 "insn-flags.h"
static __inline__  rtx gen_fix_truncsfdi_sse( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 815 "insn-flags.h"
return 0; }
 
#line 817 "insn-flags.h"
static __inline__  rtx gen_fix_truncdfdi_sse( rtx ,  rtx ); 
#line 819 "insn-flags.h"
static __inline__  rtx gen_fix_truncdfdi_sse( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 820 "insn-flags.h"
return 0; }
 
#line 822 "insn-flags.h"
extern  rtx gen_fix_truncsi_nomemory( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 823 "insn-flags.h"
extern  rtx gen_fix_truncsi_memory( rtx ,  rtx ,  rtx ,  rtx ); 
#line 824 "insn-flags.h"
extern  rtx gen_fix_truncsfsi_sse( rtx ,  rtx ); 
#line 825 "insn-flags.h"
extern  rtx gen_fix_truncdfsi_sse( rtx ,  rtx ); 
#line 826 "insn-flags.h"
extern  rtx gen_fix_trunchi_nomemory( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 827 "insn-flags.h"
extern  rtx gen_fix_trunchi_memory( rtx ,  rtx ,  rtx ,  rtx ); 
#line 828 "insn-flags.h"
extern  rtx gen_x86_fnstcw_1( rtx ); 
#line 829 "insn-flags.h"
extern  rtx gen_x86_fldcw_1( rtx ); 
#line 830 "insn-flags.h"
extern  rtx gen_floathixf2( rtx ,  rtx ); 
#line 831 "insn-flags.h"
extern  rtx gen_floatsixf2( rtx ,  rtx ); 
#line 832 "insn-flags.h"
extern  rtx gen_floatdixf2( rtx ,  rtx ); 
#line 833 "insn-flags.h"
static __inline__  rtx gen_adddi3_carry_rex64( rtx ,  rtx ,  rtx ,  rtx ); 
#line 835 "insn-flags.h"
static __inline__  rtx gen_adddi3_carry_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 836 "insn-flags.h"
return 0; }
 
#line 838 "insn-flags.h"
extern  rtx gen_addqi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 839 "insn-flags.h"
extern  rtx gen_addhi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 840 "insn-flags.h"
extern  rtx gen_addsi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 841 "insn-flags.h"
extern  rtx gen_addqi3_cc( rtx ,  rtx ,  rtx ); 
#line 842 "insn-flags.h"
static __inline__  rtx gen_addsi_1_zext( rtx ,  rtx ,  rtx ); 
#line 844 "insn-flags.h"
static __inline__  rtx gen_addsi_1_zext( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 845 "insn-flags.h"
return 0; }
 
#line 847 "insn-flags.h"
extern  rtx gen_addqi_ext_1( rtx ,  rtx ,  rtx ); 
#line 848 "insn-flags.h"
static __inline__  rtx gen_subdi3_carry_rex64( rtx ,  rtx ,  rtx ,  rtx ); 
#line 850 "insn-flags.h"
static __inline__  rtx gen_subdi3_carry_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 851 "insn-flags.h"
return 0; }
 
#line 853 "insn-flags.h"
extern  rtx gen_subqi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 854 "insn-flags.h"
extern  rtx gen_subhi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 855 "insn-flags.h"
extern  rtx gen_subsi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 856 "insn-flags.h"
static __inline__  rtx gen_subsi3_carry_zext( rtx ,  rtx ,  rtx ,  rtx ); 
#line 858 "insn-flags.h"
static __inline__  rtx gen_subsi3_carry_zext( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 859 "insn-flags.h"
return 0; }
 
#line 861 "insn-flags.h"
extern  rtx gen_divqi3( rtx ,  rtx ,  rtx ); 
#line 862 "insn-flags.h"
extern  rtx gen_udivqi3( rtx ,  rtx ,  rtx ); 
#line 863 "insn-flags.h"
extern  rtx gen_divmodhi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 864 "insn-flags.h"
static __inline__  rtx gen_udivmoddi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 866 "insn-flags.h"
static __inline__  rtx gen_udivmoddi4( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 867 "insn-flags.h"
return 0; }
 
#line 869 "insn-flags.h"
extern  rtx gen_udivmodsi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 870 "insn-flags.h"
extern  rtx gen_testsi_1( rtx ,  rtx ); 
#line 871 "insn-flags.h"
extern  rtx gen_andqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 872 "insn-flags.h"
extern  rtx gen_iorqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 873 "insn-flags.h"
extern  rtx gen_xorqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 874 "insn-flags.h"
extern  rtx gen_negsf2_memory( rtx ,  rtx ); 
#line 875 "insn-flags.h"
extern  rtx gen_negsf2_ifs( rtx ,  rtx ,  rtx ); 
#line 876 "insn-flags.h"
extern  rtx gen_negdf2_memory( rtx ,  rtx ); 
#line 877 "insn-flags.h"
extern  rtx gen_negdf2_ifs( rtx ,  rtx ,  rtx ); 
#line 878 "insn-flags.h"
extern  rtx gen_abssf2_memory( rtx ,  rtx ); 
#line 879 "insn-flags.h"
extern  rtx gen_abssf2_ifs( rtx ,  rtx ,  rtx ); 
#line 880 "insn-flags.h"
extern  rtx gen_absdf2_memory( rtx ,  rtx ); 
#line 881 "insn-flags.h"
extern  rtx gen_absdf2_ifs( rtx ,  rtx ,  rtx ); 
#line 882 "insn-flags.h"
extern  rtx gen_ashldi3_1( rtx ,  rtx ,  rtx ); 
#line 883 "insn-flags.h"
extern  rtx gen_x86_shld_1( rtx ,  rtx ,  rtx ); 
#line 884 "insn-flags.h"
static __inline__  rtx gen_ashrdi3_63_rex64( rtx ,  rtx ,  rtx ); 
#line 886 "insn-flags.h"
static __inline__  rtx gen_ashrdi3_63_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 887 "insn-flags.h"
return 0; }
 
#line 889 "insn-flags.h"
extern  rtx gen_ashrdi3_1( rtx ,  rtx ,  rtx ); 
#line 890 "insn-flags.h"
extern  rtx gen_x86_shrd_1( rtx ,  rtx ,  rtx ); 
#line 891 "insn-flags.h"
extern  rtx gen_ashrsi3_31( rtx ,  rtx ,  rtx ); 
#line 892 "insn-flags.h"
extern  rtx gen_lshrdi3_1( rtx ,  rtx ,  rtx ); 
#line 893 "insn-flags.h"
extern  rtx gen_setcc_2( rtx ,  rtx ); 
#line 894 "insn-flags.h"
extern  rtx gen_jump( rtx ); 
#line 895 "insn-flags.h"
extern  rtx gen_doloop_end_internal( rtx ,  rtx ,  rtx ); 
#line 896 "insn-flags.h"
extern  rtx gen_blockage( rtx ); 
#line 897 "insn-flags.h"
extern  rtx gen_return_internal(void ); 
#line 898 "insn-flags.h"
extern  rtx gen_return_internal_long(void ); 
#line 899 "insn-flags.h"
extern  rtx gen_return_pop_internal( rtx ); 
#line 900 "insn-flags.h"
extern  rtx gen_return_indirect_internal( rtx ); 
#line 901 "insn-flags.h"
extern  rtx gen_nop(void ); 
#line 902 "insn-flags.h"
extern  rtx gen_align( rtx ); 
#line 903 "insn-flags.h"
extern  rtx gen_set_got( rtx ); 
#line 904 "insn-flags.h"
extern  rtx gen_eh_return_si( rtx ); 
#line 905 "insn-flags.h"
static __inline__  rtx gen_eh_return_di( rtx ); 
#line 907 "insn-flags.h"
static __inline__  rtx gen_eh_return_di( rtx a __attribute__  (( __unused__ )) )  {

#line 908 "insn-flags.h"
return 0; }
 
#line 910 "insn-flags.h"
extern  rtx gen_leave(void ); 
#line 911 "insn-flags.h"
static __inline__  rtx gen_leave_rex64(void ); 
#line 913 "insn-flags.h"
static __inline__  rtx gen_leave_rex64(void )  {

#line 914 "insn-flags.h"
return 0; }
 
#line 916 "insn-flags.h"
extern  rtx gen_ctzsi2( rtx ,  rtx ); 
#line 917 "insn-flags.h"
extern  rtx gen_sqrtsf2_1( rtx ,  rtx ); 
#line 918 "insn-flags.h"
extern  rtx gen_sqrtsf2_1_sse_only( rtx ,  rtx ); 
#line 919 "insn-flags.h"
extern  rtx gen_sqrtsf2_i387( rtx ,  rtx ); 
#line 920 "insn-flags.h"
extern  rtx gen_sqrtdf2_1( rtx ,  rtx ); 
#line 921 "insn-flags.h"
extern  rtx gen_sqrtdf2_1_sse_only( rtx ,  rtx ); 
#line 922 "insn-flags.h"
extern  rtx gen_sqrtdf2_i387( rtx ,  rtx ); 
#line 923 "insn-flags.h"
extern  rtx gen_sqrtxf2( rtx ,  rtx ); 
#line 924 "insn-flags.h"
extern  rtx gen_sindf2( rtx ,  rtx ); 
#line 925 "insn-flags.h"
extern  rtx gen_sinsf2( rtx ,  rtx ); 
#line 926 "insn-flags.h"
extern  rtx gen_sinxf2( rtx ,  rtx ); 
#line 927 "insn-flags.h"
extern  rtx gen_cosdf2( rtx ,  rtx ); 
#line 928 "insn-flags.h"
extern  rtx gen_cossf2( rtx ,  rtx ); 
#line 929 "insn-flags.h"
extern  rtx gen_cosxf2( rtx ,  rtx ); 
#line 930 "insn-flags.h"
extern  rtx gen_atan2df3_1( rtx ,  rtx ,  rtx ); 
#line 931 "insn-flags.h"
extern  rtx gen_atan2sf3_1( rtx ,  rtx ,  rtx ); 
#line 932 "insn-flags.h"
extern  rtx gen_atan2xf3_1( rtx ,  rtx ,  rtx ); 
#line 933 "insn-flags.h"
extern  rtx gen_cld(void ); 
#line 934 "insn-flags.h"
static __inline__  rtx gen_x86_movdicc_0_m1_rex64( rtx ,  rtx ); 
#line 936 "insn-flags.h"
static __inline__  rtx gen_x86_movdicc_0_m1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 937 "insn-flags.h"
return 0; }
 
#line 939 "insn-flags.h"
static __inline__  rtx gen_movdicc_c_rex64( rtx ,  rtx ,  rtx ,  rtx ); 
#line 941 "insn-flags.h"
static __inline__  rtx gen_movdicc_c_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 942 "insn-flags.h"
return 0; }
 
#line 944 "insn-flags.h"
extern  rtx gen_x86_movsicc_0_m1( rtx ,  rtx ); 
#line 945 "insn-flags.h"
extern  rtx gen_pro_epilogue_adjust_stack_1( rtx ,  rtx ,  rtx ); 
#line 946 "insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64( rtx ,  rtx ,  rtx ); 
#line 948 "insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 949 "insn-flags.h"
return 0; }
 
#line 951 "insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64_2( rtx ,  rtx ,  rtx ,  rtx ); 
#line 953 "insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64_2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 954 "insn-flags.h"
return 0; }
 
#line 956 "insn-flags.h"
extern  rtx gen_sse_movsfcc( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 957 "insn-flags.h"
extern  rtx gen_sse_movsfcc_eq( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 958 "insn-flags.h"
extern  rtx gen_sse_movdfcc( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 959 "insn-flags.h"
extern  rtx gen_sse_movdfcc_eq( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 960 "insn-flags.h"
extern  rtx gen_allocate_stack_worker_1( rtx ); 
#line 961 "insn-flags.h"
static __inline__  rtx gen_allocate_stack_worker_rex64( rtx ); 
#line 963 "insn-flags.h"
static __inline__  rtx gen_allocate_stack_worker_rex64( rtx a __attribute__  (( __unused__ )) )  {

#line 964 "insn-flags.h"
return 0; }
 
#line 966 "insn-flags.h"
extern  rtx gen_trap(void ); 
#line 967 "insn-flags.h"
extern  rtx gen_movv4sf_internal( rtx ,  rtx ); 
#line 968 "insn-flags.h"
extern  rtx gen_movv4si_internal( rtx ,  rtx ); 
#line 969 "insn-flags.h"
extern  rtx gen_movv2di_internal( rtx ,  rtx ); 
#line 970 "insn-flags.h"
extern  rtx gen_movv8qi_internal( rtx ,  rtx ); 
#line 971 "insn-flags.h"
extern  rtx gen_movv4hi_internal( rtx ,  rtx ); 
#line 972 "insn-flags.h"
extern  rtx gen_movv2si_internal( rtx ,  rtx ); 
#line 973 "insn-flags.h"
extern  rtx gen_movv2sf_internal( rtx ,  rtx ); 
#line 974 "insn-flags.h"
extern  rtx gen_movv2df_internal( rtx ,  rtx ); 
#line 975 "insn-flags.h"
extern  rtx gen_movv8hi_internal( rtx ,  rtx ); 
#line 976 "insn-flags.h"
extern  rtx gen_movv16qi_internal( rtx ,  rtx ); 
#line 977 "insn-flags.h"
extern  rtx gen_movti_internal( rtx ,  rtx ); 
#line 978 "insn-flags.h"
extern  rtx gen_sse_movmskps( rtx ,  rtx ); 
#line 979 "insn-flags.h"
extern  rtx gen_mmx_pmovmskb( rtx ,  rtx ); 
#line 980 "insn-flags.h"
extern  rtx gen_mmx_maskmovq( rtx ,  rtx ,  rtx ); 
#line 981 "insn-flags.h"
static __inline__  rtx gen_mmx_maskmovq_rex( rtx ,  rtx ,  rtx ); 
#line 983 "insn-flags.h"
static __inline__  rtx gen_mmx_maskmovq_rex( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 984 "insn-flags.h"
return 0; }
 
#line 986 "insn-flags.h"
extern  rtx gen_sse_movntv4sf( rtx ,  rtx ); 
#line 987 "insn-flags.h"
extern  rtx gen_sse_movntdi( rtx ,  rtx ); 
#line 988 "insn-flags.h"
extern  rtx gen_sse_movhlps( rtx ,  rtx ,  rtx ); 
#line 989 "insn-flags.h"
extern  rtx gen_sse_movlhps( rtx ,  rtx ,  rtx ); 
#line 990 "insn-flags.h"
extern  rtx gen_sse_movhps( rtx ,  rtx ,  rtx ); 
#line 991 "insn-flags.h"
extern  rtx gen_sse_movlps( rtx ,  rtx ,  rtx ); 
#line 992 "insn-flags.h"
extern  rtx gen_sse_loadss_1( rtx ,  rtx ,  rtx ); 
#line 993 "insn-flags.h"
extern  rtx gen_sse_movss( rtx ,  rtx ,  rtx ); 
#line 994 "insn-flags.h"
extern  rtx gen_sse_storess( rtx ,  rtx ); 
#line 995 "insn-flags.h"
extern  rtx gen_sse_shufps( rtx ,  rtx ,  rtx ,  rtx ); 
#line 996 "insn-flags.h"
extern  rtx gen_addv4sf3( rtx ,  rtx ,  rtx ); 
#line 997 "insn-flags.h"
extern  rtx gen_vmaddv4sf3( rtx ,  rtx ,  rtx ); 
#line 998 "insn-flags.h"
extern  rtx gen_subv4sf3( rtx ,  rtx ,  rtx ); 
#line 999 "insn-flags.h"
extern  rtx gen_vmsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1000 "insn-flags.h"
extern  rtx gen_mulv4sf3( rtx ,  rtx ,  rtx ); 
#line 1001 "insn-flags.h"
extern  rtx gen_vmmulv4sf3( rtx ,  rtx ,  rtx ); 
#line 1002 "insn-flags.h"
extern  rtx gen_divv4sf3( rtx ,  rtx ,  rtx ); 
#line 1003 "insn-flags.h"
extern  rtx gen_vmdivv4sf3( rtx ,  rtx ,  rtx ); 
#line 1004 "insn-flags.h"
extern  rtx gen_rcpv4sf2( rtx ,  rtx ); 
#line 1005 "insn-flags.h"
extern  rtx gen_vmrcpv4sf2( rtx ,  rtx ,  rtx ); 
#line 1006 "insn-flags.h"
extern  rtx gen_rsqrtv4sf2( rtx ,  rtx ); 
#line 1007 "insn-flags.h"
extern  rtx gen_vmrsqrtv4sf2( rtx ,  rtx ,  rtx ); 
#line 1008 "insn-flags.h"
extern  rtx gen_sqrtv4sf2( rtx ,  rtx ); 
#line 1009 "insn-flags.h"
extern  rtx gen_vmsqrtv4sf2( rtx ,  rtx ,  rtx ); 
#line 1010 "insn-flags.h"
extern  rtx gen_sse2_andv2di3( rtx ,  rtx ,  rtx ); 
#line 1011 "insn-flags.h"
extern  rtx gen_sse2_nandv2di3( rtx ,  rtx ,  rtx ); 
#line 1012 "insn-flags.h"
extern  rtx gen_sse2_iorv2di3( rtx ,  rtx ,  rtx ); 
#line 1013 "insn-flags.h"
extern  rtx gen_sse2_xorv2di3( rtx ,  rtx ,  rtx ); 
#line 1014 "insn-flags.h"
extern  rtx gen_sse_clrv4sf( rtx ,  rtx ); 
#line 1015 "insn-flags.h"
extern  rtx gen_sse_clrv2df( rtx ); 
#line 1016 "insn-flags.h"
extern  rtx gen_maskcmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1017 "insn-flags.h"
extern  rtx gen_maskncmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1018 "insn-flags.h"
extern  rtx gen_vmmaskcmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1019 "insn-flags.h"
extern  rtx gen_vmmaskncmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1020 "insn-flags.h"
extern  rtx gen_sse_comi( rtx ,  rtx ); 
#line 1021 "insn-flags.h"
extern  rtx gen_sse_ucomi( rtx ,  rtx ); 
#line 1022 "insn-flags.h"
extern  rtx gen_sse_unpckhps( rtx ,  rtx ,  rtx ); 
#line 1023 "insn-flags.h"
extern  rtx gen_sse_unpcklps( rtx ,  rtx ,  rtx ); 
#line 1024 "insn-flags.h"
extern  rtx gen_smaxv4sf3( rtx ,  rtx ,  rtx ); 
#line 1025 "insn-flags.h"
extern  rtx gen_vmsmaxv4sf3( rtx ,  rtx ,  rtx ); 
#line 1026 "insn-flags.h"
extern  rtx gen_sminv4sf3( rtx ,  rtx ,  rtx ); 
#line 1027 "insn-flags.h"
extern  rtx gen_vmsminv4sf3( rtx ,  rtx ,  rtx ); 
#line 1028 "insn-flags.h"
extern  rtx gen_cvtpi2ps( rtx ,  rtx ,  rtx ); 
#line 1029 "insn-flags.h"
extern  rtx gen_cvtps2pi( rtx ,  rtx ); 
#line 1030 "insn-flags.h"
extern  rtx gen_cvttps2pi( rtx ,  rtx ); 
#line 1031 "insn-flags.h"
extern  rtx gen_cvtsi2ss( rtx ,  rtx ,  rtx ); 
#line 1032 "insn-flags.h"
static __inline__  rtx gen_cvtsi2ssq( rtx ,  rtx ,  rtx ); 
#line 1034 "insn-flags.h"
static __inline__  rtx gen_cvtsi2ssq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1035 "insn-flags.h"
return 0; }
 
#line 1037 "insn-flags.h"
extern  rtx gen_cvtss2si( rtx ,  rtx ); 
#line 1038 "insn-flags.h"
extern  rtx gen_cvtss2siq( rtx ,  rtx ); 
#line 1039 "insn-flags.h"
extern  rtx gen_cvttss2si( rtx ,  rtx ); 
#line 1040 "insn-flags.h"
static __inline__  rtx gen_cvttss2siq( rtx ,  rtx ); 
#line 1042 "insn-flags.h"
static __inline__  rtx gen_cvttss2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1043 "insn-flags.h"
return 0; }
 
#line 1045 "insn-flags.h"
extern  rtx gen_addv8qi3( rtx ,  rtx ,  rtx ); 
#line 1046 "insn-flags.h"
extern  rtx gen_addv4hi3( rtx ,  rtx ,  rtx ); 
#line 1047 "insn-flags.h"
extern  rtx gen_addv2si3( rtx ,  rtx ,  rtx ); 
#line 1048 "insn-flags.h"
extern  rtx gen_mmx_adddi3( rtx ,  rtx ,  rtx ); 
#line 1049 "insn-flags.h"
extern  rtx gen_ssaddv8qi3( rtx ,  rtx ,  rtx ); 
#line 1050 "insn-flags.h"
extern  rtx gen_ssaddv4hi3( rtx ,  rtx ,  rtx ); 
#line 1051 "insn-flags.h"
extern  rtx gen_usaddv8qi3( rtx ,  rtx ,  rtx ); 
#line 1052 "insn-flags.h"
extern  rtx gen_usaddv4hi3( rtx ,  rtx ,  rtx ); 
#line 1053 "insn-flags.h"
extern  rtx gen_subv8qi3( rtx ,  rtx ,  rtx ); 
#line 1054 "insn-flags.h"
extern  rtx gen_subv4hi3( rtx ,  rtx ,  rtx ); 
#line 1055 "insn-flags.h"
extern  rtx gen_subv2si3( rtx ,  rtx ,  rtx ); 
#line 1056 "insn-flags.h"
extern  rtx gen_mmx_subdi3( rtx ,  rtx ,  rtx ); 
#line 1057 "insn-flags.h"
extern  rtx gen_sssubv8qi3( rtx ,  rtx ,  rtx ); 
#line 1058 "insn-flags.h"
extern  rtx gen_sssubv4hi3( rtx ,  rtx ,  rtx ); 
#line 1059 "insn-flags.h"
extern  rtx gen_ussubv8qi3( rtx ,  rtx ,  rtx ); 
#line 1060 "insn-flags.h"
extern  rtx gen_ussubv4hi3( rtx ,  rtx ,  rtx ); 
#line 1061 "insn-flags.h"
extern  rtx gen_mulv4hi3( rtx ,  rtx ,  rtx ); 
#line 1062 "insn-flags.h"
extern  rtx gen_smulv4hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1063 "insn-flags.h"
extern  rtx gen_umulv4hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1064 "insn-flags.h"
extern  rtx gen_mmx_pmaddwd( rtx ,  rtx ,  rtx ); 
#line 1065 "insn-flags.h"
extern  rtx gen_mmx_iordi3( rtx ,  rtx ,  rtx ); 
#line 1066 "insn-flags.h"
extern  rtx gen_mmx_xordi3( rtx ,  rtx ,  rtx ); 
#line 1067 "insn-flags.h"
extern  rtx gen_mmx_clrdi( rtx ); 
#line 1068 "insn-flags.h"
extern  rtx gen_mmx_anddi3( rtx ,  rtx ,  rtx ); 
#line 1069 "insn-flags.h"
extern  rtx gen_mmx_nanddi3( rtx ,  rtx ,  rtx ); 
#line 1070 "insn-flags.h"
extern  rtx gen_mmx_uavgv8qi3( rtx ,  rtx ,  rtx ); 
#line 1071 "insn-flags.h"
extern  rtx gen_mmx_uavgv4hi3( rtx ,  rtx ,  rtx ); 
#line 1072 "insn-flags.h"
extern  rtx gen_mmx_psadbw( rtx ,  rtx ,  rtx ); 
#line 1073 "insn-flags.h"
extern  rtx gen_mmx_pinsrw( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1074 "insn-flags.h"
extern  rtx gen_mmx_pextrw( rtx ,  rtx ,  rtx ); 
#line 1075 "insn-flags.h"
extern  rtx gen_mmx_pshufw( rtx ,  rtx ,  rtx ); 
#line 1076 "insn-flags.h"
extern  rtx gen_eqv8qi3( rtx ,  rtx ,  rtx ); 
#line 1077 "insn-flags.h"
extern  rtx gen_eqv4hi3( rtx ,  rtx ,  rtx ); 
#line 1078 "insn-flags.h"
extern  rtx gen_eqv2si3( rtx ,  rtx ,  rtx ); 
#line 1079 "insn-flags.h"
extern  rtx gen_gtv8qi3( rtx ,  rtx ,  rtx ); 
#line 1080 "insn-flags.h"
extern  rtx gen_gtv4hi3( rtx ,  rtx ,  rtx ); 
#line 1081 "insn-flags.h"
extern  rtx gen_gtv2si3( rtx ,  rtx ,  rtx ); 
#line 1082 "insn-flags.h"
extern  rtx gen_umaxv8qi3( rtx ,  rtx ,  rtx ); 
#line 1083 "insn-flags.h"
extern  rtx gen_smaxv4hi3( rtx ,  rtx ,  rtx ); 
#line 1084 "insn-flags.h"
extern  rtx gen_uminv8qi3( rtx ,  rtx ,  rtx ); 
#line 1085 "insn-flags.h"
extern  rtx gen_sminv4hi3( rtx ,  rtx ,  rtx ); 
#line 1086 "insn-flags.h"
extern  rtx gen_ashrv4hi3( rtx ,  rtx ,  rtx ); 
#line 1087 "insn-flags.h"
extern  rtx gen_ashrv2si3( rtx ,  rtx ,  rtx ); 
#line 1088 "insn-flags.h"
extern  rtx gen_lshrv4hi3( rtx ,  rtx ,  rtx ); 
#line 1089 "insn-flags.h"
extern  rtx gen_lshrv2si3( rtx ,  rtx ,  rtx ); 
#line 1090 "insn-flags.h"
extern  rtx gen_mmx_lshrdi3( rtx ,  rtx ,  rtx ); 
#line 1091 "insn-flags.h"
extern  rtx gen_ashlv4hi3( rtx ,  rtx ,  rtx ); 
#line 1092 "insn-flags.h"
extern  rtx gen_ashlv2si3( rtx ,  rtx ,  rtx ); 
#line 1093 "insn-flags.h"
extern  rtx gen_mmx_ashldi3( rtx ,  rtx ,  rtx ); 
#line 1094 "insn-flags.h"
extern  rtx gen_mmx_packsswb( rtx ,  rtx ,  rtx ); 
#line 1095 "insn-flags.h"
extern  rtx gen_mmx_packssdw( rtx ,  rtx ,  rtx ); 
#line 1096 "insn-flags.h"
extern  rtx gen_mmx_packuswb( rtx ,  rtx ,  rtx ); 
#line 1097 "insn-flags.h"
extern  rtx gen_mmx_punpckhbw( rtx ,  rtx ,  rtx ); 
#line 1098 "insn-flags.h"
extern  rtx gen_mmx_punpckhwd( rtx ,  rtx ,  rtx ); 
#line 1099 "insn-flags.h"
extern  rtx gen_mmx_punpckhdq( rtx ,  rtx ,  rtx ); 
#line 1100 "insn-flags.h"
extern  rtx gen_mmx_punpcklbw( rtx ,  rtx ,  rtx ); 
#line 1101 "insn-flags.h"
extern  rtx gen_mmx_punpcklwd( rtx ,  rtx ,  rtx ); 
#line 1102 "insn-flags.h"
extern  rtx gen_mmx_punpckldq( rtx ,  rtx ,  rtx ); 
#line 1103 "insn-flags.h"
extern  rtx gen_emms(void ); 
#line 1104 "insn-flags.h"
extern  rtx gen_ldmxcsr( rtx ); 
#line 1105 "insn-flags.h"
extern  rtx gen_stmxcsr( rtx ); 
#line 1106 "insn-flags.h"
extern  rtx gen_addv2sf3( rtx ,  rtx ,  rtx ); 
#line 1107 "insn-flags.h"
extern  rtx gen_subv2sf3( rtx ,  rtx ,  rtx ); 
#line 1108 "insn-flags.h"
extern  rtx gen_subrv2sf3( rtx ,  rtx ,  rtx ); 
#line 1109 "insn-flags.h"
extern  rtx gen_gtv2sf3( rtx ,  rtx ,  rtx ); 
#line 1110 "insn-flags.h"
extern  rtx gen_gev2sf3( rtx ,  rtx ,  rtx ); 
#line 1111 "insn-flags.h"
extern  rtx gen_eqv2sf3( rtx ,  rtx ,  rtx ); 
#line 1112 "insn-flags.h"
extern  rtx gen_pfmaxv2sf3( rtx ,  rtx ,  rtx ); 
#line 1113 "insn-flags.h"
extern  rtx gen_pfminv2sf3( rtx ,  rtx ,  rtx ); 
#line 1114 "insn-flags.h"
extern  rtx gen_mulv2sf3( rtx ,  rtx ,  rtx ); 
#line 1115 "insn-flags.h"
extern  rtx gen_femms(void ); 
#line 1116 "insn-flags.h"
extern  rtx gen_pf2id( rtx ,  rtx ); 
#line 1117 "insn-flags.h"
extern  rtx gen_pf2iw( rtx ,  rtx ); 
#line 1118 "insn-flags.h"
extern  rtx gen_pfacc( rtx ,  rtx ,  rtx ); 
#line 1119 "insn-flags.h"
extern  rtx gen_pfnacc( rtx ,  rtx ,  rtx ); 
#line 1120 "insn-flags.h"
extern  rtx gen_pfpnacc( rtx ,  rtx ,  rtx ); 
#line 1121 "insn-flags.h"
extern  rtx gen_pi2fw( rtx ,  rtx ); 
#line 1122 "insn-flags.h"
extern  rtx gen_floatv2si2( rtx ,  rtx ); 
#line 1123 "insn-flags.h"
extern  rtx gen_pavgusb( rtx ,  rtx ,  rtx ); 
#line 1124 "insn-flags.h"
extern  rtx gen_pfrcpv2sf2( rtx ,  rtx ); 
#line 1125 "insn-flags.h"
extern  rtx gen_pfrcpit1v2sf3( rtx ,  rtx ,  rtx ); 
#line 1126 "insn-flags.h"
extern  rtx gen_pfrcpit2v2sf3( rtx ,  rtx ,  rtx ); 
#line 1127 "insn-flags.h"
extern  rtx gen_pfrsqrtv2sf2( rtx ,  rtx ); 
#line 1128 "insn-flags.h"
extern  rtx gen_pfrsqit1v2sf3( rtx ,  rtx ,  rtx ); 
#line 1129 "insn-flags.h"
extern  rtx gen_pmulhrwv4hi3( rtx ,  rtx ,  rtx ); 
#line 1130 "insn-flags.h"
extern  rtx gen_pswapdv2si2( rtx ,  rtx ); 
#line 1131 "insn-flags.h"
extern  rtx gen_pswapdv2sf2( rtx ,  rtx ); 
#line 1132 "insn-flags.h"
extern  rtx gen_addv2df3( rtx ,  rtx ,  rtx ); 
#line 1133 "insn-flags.h"
extern  rtx gen_vmaddv2df3( rtx ,  rtx ,  rtx ); 
#line 1134 "insn-flags.h"
extern  rtx gen_subv2df3( rtx ,  rtx ,  rtx ); 
#line 1135 "insn-flags.h"
extern  rtx gen_vmsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1136 "insn-flags.h"
extern  rtx gen_mulv2df3( rtx ,  rtx ,  rtx ); 
#line 1137 "insn-flags.h"
extern  rtx gen_vmmulv2df3( rtx ,  rtx ,  rtx ); 
#line 1138 "insn-flags.h"
extern  rtx gen_divv2df3( rtx ,  rtx ,  rtx ); 
#line 1139 "insn-flags.h"
extern  rtx gen_vmdivv2df3( rtx ,  rtx ,  rtx ); 
#line 1140 "insn-flags.h"
extern  rtx gen_smaxv2df3( rtx ,  rtx ,  rtx ); 
#line 1141 "insn-flags.h"
extern  rtx gen_vmsmaxv2df3( rtx ,  rtx ,  rtx ); 
#line 1142 "insn-flags.h"
extern  rtx gen_sminv2df3( rtx ,  rtx ,  rtx ); 
#line 1143 "insn-flags.h"
extern  rtx gen_vmsminv2df3( rtx ,  rtx ,  rtx ); 
#line 1144 "insn-flags.h"
extern  rtx gen_sqrtv2df2( rtx ,  rtx ); 
#line 1145 "insn-flags.h"
extern  rtx gen_vmsqrtv2df2( rtx ,  rtx ,  rtx ); 
#line 1146 "insn-flags.h"
extern  rtx gen_maskcmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1147 "insn-flags.h"
extern  rtx gen_maskncmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1148 "insn-flags.h"
extern  rtx gen_vmmaskcmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1149 "insn-flags.h"
extern  rtx gen_vmmaskncmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1150 "insn-flags.h"
extern  rtx gen_sse2_comi( rtx ,  rtx ); 
#line 1151 "insn-flags.h"
extern  rtx gen_sse2_ucomi( rtx ,  rtx ); 
#line 1152 "insn-flags.h"
extern  rtx gen_sse2_movmskpd( rtx ,  rtx ); 
#line 1153 "insn-flags.h"
extern  rtx gen_sse2_pmovmskb( rtx ,  rtx ); 
#line 1154 "insn-flags.h"
extern  rtx gen_sse2_maskmovdqu( rtx ,  rtx ,  rtx ); 
#line 1155 "insn-flags.h"
extern  rtx gen_sse2_maskmovdqu_rex64( rtx ,  rtx ,  rtx ); 
#line 1156 "insn-flags.h"
extern  rtx gen_sse2_movntv2df( rtx ,  rtx ); 
#line 1157 "insn-flags.h"
extern  rtx gen_sse2_movntv2di( rtx ,  rtx ); 
#line 1158 "insn-flags.h"
extern  rtx gen_sse2_movntsi( rtx ,  rtx ); 
#line 1159 "insn-flags.h"
extern  rtx gen_cvtdq2ps( rtx ,  rtx ); 
#line 1160 "insn-flags.h"
extern  rtx gen_cvtps2dq( rtx ,  rtx ); 
#line 1161 "insn-flags.h"
extern  rtx gen_cvttps2dq( rtx ,  rtx ); 
#line 1162 "insn-flags.h"
extern  rtx gen_cvtdq2pd( rtx ,  rtx ); 
#line 1163 "insn-flags.h"
extern  rtx gen_cvtpd2dq( rtx ,  rtx ); 
#line 1164 "insn-flags.h"
extern  rtx gen_cvttpd2dq( rtx ,  rtx ); 
#line 1165 "insn-flags.h"
extern  rtx gen_cvtpd2pi( rtx ,  rtx ); 
#line 1166 "insn-flags.h"
extern  rtx gen_cvttpd2pi( rtx ,  rtx ); 
#line 1167 "insn-flags.h"
extern  rtx gen_cvtpi2pd( rtx ,  rtx ); 
#line 1168 "insn-flags.h"
extern  rtx gen_cvtsd2si( rtx ,  rtx ); 
#line 1169 "insn-flags.h"
static __inline__  rtx gen_cvtsd2siq( rtx ,  rtx ); 
#line 1171 "insn-flags.h"
static __inline__  rtx gen_cvtsd2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1172 "insn-flags.h"
return 0; }
 
#line 1174 "insn-flags.h"
extern  rtx gen_cvttsd2si( rtx ,  rtx ); 
#line 1175 "insn-flags.h"
static __inline__  rtx gen_cvttsd2siq( rtx ,  rtx ); 
#line 1177 "insn-flags.h"
static __inline__  rtx gen_cvttsd2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1178 "insn-flags.h"
return 0; }
 
#line 1180 "insn-flags.h"
extern  rtx gen_cvtsi2sd( rtx ,  rtx ,  rtx ); 
#line 1181 "insn-flags.h"
static __inline__  rtx gen_cvtsi2sdq( rtx ,  rtx ,  rtx ); 
#line 1183 "insn-flags.h"
static __inline__  rtx gen_cvtsi2sdq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1184 "insn-flags.h"
return 0; }
 
#line 1186 "insn-flags.h"
extern  rtx gen_cvtsd2ss( rtx ,  rtx ,  rtx ); 
#line 1187 "insn-flags.h"
extern  rtx gen_cvtss2sd( rtx ,  rtx ,  rtx ); 
#line 1188 "insn-flags.h"
extern  rtx gen_cvtpd2ps( rtx ,  rtx ); 
#line 1189 "insn-flags.h"
extern  rtx gen_cvtps2pd( rtx ,  rtx ); 
#line 1190 "insn-flags.h"
extern  rtx gen_addv16qi3( rtx ,  rtx ,  rtx ); 
#line 1191 "insn-flags.h"
extern  rtx gen_addv8hi3( rtx ,  rtx ,  rtx ); 
#line 1192 "insn-flags.h"
extern  rtx gen_addv4si3( rtx ,  rtx ,  rtx ); 
#line 1193 "insn-flags.h"
extern  rtx gen_addv2di3( rtx ,  rtx ,  rtx ); 
#line 1194 "insn-flags.h"
extern  rtx gen_ssaddv16qi3( rtx ,  rtx ,  rtx ); 
#line 1195 "insn-flags.h"
extern  rtx gen_ssaddv8hi3( rtx ,  rtx ,  rtx ); 
#line 1196 "insn-flags.h"
extern  rtx gen_usaddv16qi3( rtx ,  rtx ,  rtx ); 
#line 1197 "insn-flags.h"
extern  rtx gen_usaddv8hi3( rtx ,  rtx ,  rtx ); 
#line 1198 "insn-flags.h"
extern  rtx gen_subv16qi3( rtx ,  rtx ,  rtx ); 
#line 1199 "insn-flags.h"
extern  rtx gen_subv8hi3( rtx ,  rtx ,  rtx ); 
#line 1200 "insn-flags.h"
extern  rtx gen_subv4si3( rtx ,  rtx ,  rtx ); 
#line 1201 "insn-flags.h"
extern  rtx gen_subv2di3( rtx ,  rtx ,  rtx ); 
#line 1202 "insn-flags.h"
extern  rtx gen_sssubv16qi3( rtx ,  rtx ,  rtx ); 
#line 1203 "insn-flags.h"
extern  rtx gen_sssubv8hi3( rtx ,  rtx ,  rtx ); 
#line 1204 "insn-flags.h"
extern  rtx gen_ussubv16qi3( rtx ,  rtx ,  rtx ); 
#line 1205 "insn-flags.h"
extern  rtx gen_ussubv8hi3( rtx ,  rtx ,  rtx ); 
#line 1206 "insn-flags.h"
extern  rtx gen_mulv8hi3( rtx ,  rtx ,  rtx ); 
#line 1207 "insn-flags.h"
extern  rtx gen_smulv8hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1208 "insn-flags.h"
extern  rtx gen_umulv8hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1209 "insn-flags.h"
extern  rtx gen_sse2_umulsidi3( rtx ,  rtx ,  rtx ); 
#line 1210 "insn-flags.h"
extern  rtx gen_sse2_umulv2siv2di3( rtx ,  rtx ,  rtx ); 
#line 1211 "insn-flags.h"
extern  rtx gen_sse2_pmaddwd( rtx ,  rtx ,  rtx ); 
#line 1212 "insn-flags.h"
extern  rtx gen_sse2_clrti( rtx ); 
#line 1213 "insn-flags.h"
extern  rtx gen_sse2_uavgv16qi3( rtx ,  rtx ,  rtx ); 
#line 1214 "insn-flags.h"
extern  rtx gen_sse2_uavgv8hi3( rtx ,  rtx ,  rtx ); 
#line 1215 "insn-flags.h"
extern  rtx gen_sse2_psadbw( rtx ,  rtx ,  rtx ); 
#line 1216 "insn-flags.h"
extern  rtx gen_sse2_pinsrw( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1217 "insn-flags.h"
extern  rtx gen_sse2_pextrw( rtx ,  rtx ,  rtx ); 
#line 1218 "insn-flags.h"
extern  rtx gen_sse2_pshufd( rtx ,  rtx ,  rtx ); 
#line 1219 "insn-flags.h"
extern  rtx gen_sse2_pshuflw( rtx ,  rtx ,  rtx ); 
#line 1220 "insn-flags.h"
extern  rtx gen_sse2_pshufhw( rtx ,  rtx ,  rtx ); 
#line 1221 "insn-flags.h"
extern  rtx gen_eqv16qi3( rtx ,  rtx ,  rtx ); 
#line 1222 "insn-flags.h"
extern  rtx gen_eqv8hi3( rtx ,  rtx ,  rtx ); 
#line 1223 "insn-flags.h"
extern  rtx gen_eqv4si3( rtx ,  rtx ,  rtx ); 
#line 1224 "insn-flags.h"
extern  rtx gen_gtv16qi3( rtx ,  rtx ,  rtx ); 
#line 1225 "insn-flags.h"
extern  rtx gen_gtv8hi3( rtx ,  rtx ,  rtx ); 
#line 1226 "insn-flags.h"
extern  rtx gen_gtv4si3( rtx ,  rtx ,  rtx ); 
#line 1227 "insn-flags.h"
extern  rtx gen_umaxv16qi3( rtx ,  rtx ,  rtx ); 
#line 1228 "insn-flags.h"
extern  rtx gen_smaxv8hi3( rtx ,  rtx ,  rtx ); 
#line 1229 "insn-flags.h"
extern  rtx gen_uminv16qi3( rtx ,  rtx ,  rtx ); 
#line 1230 "insn-flags.h"
extern  rtx gen_sminv8hi3( rtx ,  rtx ,  rtx ); 
#line 1231 "insn-flags.h"
extern  rtx gen_ashrv8hi3( rtx ,  rtx ,  rtx ); 
#line 1232 "insn-flags.h"
extern  rtx gen_ashrv4si3( rtx ,  rtx ,  rtx ); 
#line 1233 "insn-flags.h"
extern  rtx gen_lshrv8hi3( rtx ,  rtx ,  rtx ); 
#line 1234 "insn-flags.h"
extern  rtx gen_lshrv4si3( rtx ,  rtx ,  rtx ); 
#line 1235 "insn-flags.h"
extern  rtx gen_lshrv2di3( rtx ,  rtx ,  rtx ); 
#line 1236 "insn-flags.h"
extern  rtx gen_ashlv8hi3( rtx ,  rtx ,  rtx ); 
#line 1237 "insn-flags.h"
extern  rtx gen_ashlv4si3( rtx ,  rtx ,  rtx ); 
#line 1238 "insn-flags.h"
extern  rtx gen_ashlv2di3( rtx ,  rtx ,  rtx ); 
#line 1239 "insn-flags.h"
extern  rtx gen_ashrv8hi3_ti( rtx ,  rtx ,  rtx ); 
#line 1240 "insn-flags.h"
extern  rtx gen_ashrv4si3_ti( rtx ,  rtx ,  rtx ); 
#line 1241 "insn-flags.h"
extern  rtx gen_lshrv8hi3_ti( rtx ,  rtx ,  rtx ); 
#line 1242 "insn-flags.h"
extern  rtx gen_lshrv4si3_ti( rtx ,  rtx ,  rtx ); 
#line 1243 "insn-flags.h"
extern  rtx gen_lshrv2di3_ti( rtx ,  rtx ,  rtx ); 
#line 1244 "insn-flags.h"
extern  rtx gen_ashlv8hi3_ti( rtx ,  rtx ,  rtx ); 
#line 1245 "insn-flags.h"
extern  rtx gen_ashlv4si3_ti( rtx ,  rtx ,  rtx ); 
#line 1246 "insn-flags.h"
extern  rtx gen_ashlv2di3_ti( rtx ,  rtx ,  rtx ); 
#line 1247 "insn-flags.h"
extern  rtx gen_sse2_ashlti3( rtx ,  rtx ,  rtx ); 
#line 1248 "insn-flags.h"
extern  rtx gen_sse2_lshrti3( rtx ,  rtx ,  rtx ); 
#line 1249 "insn-flags.h"
extern  rtx gen_sse2_unpckhpd( rtx ,  rtx ,  rtx ); 
#line 1250 "insn-flags.h"
extern  rtx gen_sse2_unpcklpd( rtx ,  rtx ,  rtx ); 
#line 1251 "insn-flags.h"
extern  rtx gen_sse2_packsswb( rtx ,  rtx ,  rtx ); 
#line 1252 "insn-flags.h"
extern  rtx gen_sse2_packssdw( rtx ,  rtx ,  rtx ); 
#line 1253 "insn-flags.h"
extern  rtx gen_sse2_packuswb( rtx ,  rtx ,  rtx ); 
#line 1254 "insn-flags.h"
extern  rtx gen_sse2_punpckhbw( rtx ,  rtx ,  rtx ); 
#line 1255 "insn-flags.h"
extern  rtx gen_sse2_punpckhwd( rtx ,  rtx ,  rtx ); 
#line 1256 "insn-flags.h"
extern  rtx gen_sse2_punpckhdq( rtx ,  rtx ,  rtx ); 
#line 1257 "insn-flags.h"
extern  rtx gen_sse2_punpcklbw( rtx ,  rtx ,  rtx ); 
#line 1258 "insn-flags.h"
extern  rtx gen_sse2_punpcklwd( rtx ,  rtx ,  rtx ); 
#line 1259 "insn-flags.h"
extern  rtx gen_sse2_punpckldq( rtx ,  rtx ,  rtx ); 
#line 1260 "insn-flags.h"
extern  rtx gen_sse2_punpcklqdq( rtx ,  rtx ,  rtx ); 
#line 1261 "insn-flags.h"
extern  rtx gen_sse2_punpckhqdq( rtx ,  rtx ,  rtx ); 
#line 1262 "insn-flags.h"
extern  rtx gen_sse2_movapd( rtx ,  rtx ); 
#line 1263 "insn-flags.h"
extern  rtx gen_sse2_movupd( rtx ,  rtx ); 
#line 1264 "insn-flags.h"
extern  rtx gen_sse2_movdqa( rtx ,  rtx ); 
#line 1265 "insn-flags.h"
extern  rtx gen_sse2_movdqu( rtx ,  rtx ); 
#line 1266 "insn-flags.h"
extern  rtx gen_sse2_movdq2q( rtx ,  rtx ); 
#line 1267 "insn-flags.h"
static __inline__  rtx gen_sse2_movdq2q_rex64( rtx ,  rtx ); 
#line 1269 "insn-flags.h"
static __inline__  rtx gen_sse2_movdq2q_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1270 "insn-flags.h"
return 0; }
 
#line 1272 "insn-flags.h"
extern  rtx gen_sse2_movq2dq( rtx ,  rtx ); 
#line 1273 "insn-flags.h"
static __inline__  rtx gen_sse2_movq2dq_rex64( rtx ,  rtx ); 
#line 1275 "insn-flags.h"
static __inline__  rtx gen_sse2_movq2dq_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1276 "insn-flags.h"
return 0; }
 
#line 1278 "insn-flags.h"
extern  rtx gen_sse2_movq( rtx ,  rtx ); 
#line 1279 "insn-flags.h"
extern  rtx gen_sse2_loadd( rtx ,  rtx ); 
#line 1280 "insn-flags.h"
extern  rtx gen_sse2_stored( rtx ,  rtx ); 
#line 1281 "insn-flags.h"
extern  rtx gen_sse2_movhpd( rtx ,  rtx ,  rtx ); 
#line 1282 "insn-flags.h"
extern  rtx gen_sse2_loadsd_1( rtx ,  rtx ,  rtx ); 
#line 1283 "insn-flags.h"
extern  rtx gen_sse2_movsd( rtx ,  rtx ,  rtx ); 
#line 1284 "insn-flags.h"
extern  rtx gen_sse2_storesd( rtx ,  rtx ); 
#line 1285 "insn-flags.h"
extern  rtx gen_sse2_shufpd( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1286 "insn-flags.h"
extern  rtx gen_sse2_clflush( rtx ); 
#line 1287 "insn-flags.h"
extern  rtx gen_mwait( rtx ,  rtx ); 
#line 1288 "insn-flags.h"
extern  rtx gen_monitor( rtx ,  rtx ,  rtx ); 
#line 1289 "insn-flags.h"
extern  rtx gen_addsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1290 "insn-flags.h"
extern  rtx gen_addsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1291 "insn-flags.h"
extern  rtx gen_haddv4sf3( rtx ,  rtx ,  rtx ); 
#line 1292 "insn-flags.h"
extern  rtx gen_haddv2df3( rtx ,  rtx ,  rtx ); 
#line 1293 "insn-flags.h"
extern  rtx gen_hsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1294 "insn-flags.h"
extern  rtx gen_hsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1295 "insn-flags.h"
extern  rtx gen_movshdup( rtx ,  rtx ); 
#line 1296 "insn-flags.h"
extern  rtx gen_movsldup( rtx ,  rtx ); 
#line 1297 "insn-flags.h"
extern  rtx gen_lddqu( rtx ,  rtx ); 
#line 1298 "insn-flags.h"
extern  rtx gen_loadddup( rtx ,  rtx ); 
#line 1299 "insn-flags.h"
extern  rtx gen_movddup( rtx ,  rtx ); 
#line 1300 "insn-flags.h"
extern  rtx gen_cmpdi( rtx ,  rtx ); 
#line 1301 "insn-flags.h"
extern  rtx gen_cmpsi( rtx ,  rtx ); 
#line 1302 "insn-flags.h"
extern  rtx gen_cmphi( rtx ,  rtx ); 
#line 1303 "insn-flags.h"
extern  rtx gen_cmpqi( rtx ,  rtx ); 
#line 1304 "insn-flags.h"
static __inline__  rtx gen_cmpdi_1_rex64( rtx ,  rtx ); 
#line 1306 "insn-flags.h"
static __inline__  rtx gen_cmpdi_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1307 "insn-flags.h"
return 0; }
 
#line 1309 "insn-flags.h"
extern  rtx gen_cmpsi_1( rtx ,  rtx ); 
#line 1310 "insn-flags.h"
extern  rtx gen_cmpqi_ext_3( rtx ,  rtx ); 
#line 1311 "insn-flags.h"
extern  rtx gen_cmpxf( rtx ,  rtx ); 
#line 1312 "insn-flags.h"
extern  rtx gen_cmpdf( rtx ,  rtx ); 
#line 1313 "insn-flags.h"
extern  rtx gen_cmpsf( rtx ,  rtx ); 
#line 1314 "insn-flags.h"
extern  rtx gen_movsi( rtx ,  rtx ); 
#line 1315 "insn-flags.h"
extern  rtx gen_movhi( rtx ,  rtx ); 
#line 1316 "insn-flags.h"
extern  rtx gen_movstricthi( rtx ,  rtx ); 
#line 1317 "insn-flags.h"
extern  rtx gen_movqi( rtx ,  rtx ); 
#line 1318 "insn-flags.h"
extern  rtx gen_reload_outqi( rtx ,  rtx ,  rtx ); 
#line 1319 "insn-flags.h"
extern  rtx gen_movstrictqi( rtx ,  rtx ); 
#line 1320 "insn-flags.h"
extern  rtx gen_movdi( rtx ,  rtx ); 
#line 1321 "insn-flags.h"
extern  rtx gen_movsf( rtx ,  rtx ); 
#line 1322 "insn-flags.h"
extern  rtx gen_movdf( rtx ,  rtx ); 
#line 1323 "insn-flags.h"
extern  rtx gen_movxf( rtx ,  rtx ); 
#line 1324 "insn-flags.h"
extern  rtx gen_zero_extendhisi2( rtx ,  rtx ); 
#line 1325 "insn-flags.h"
extern  rtx gen_zero_extendqihi2( rtx ,  rtx ); 
#line 1326 "insn-flags.h"
extern  rtx gen_zero_extendqisi2( rtx ,  rtx ); 
#line 1327 "insn-flags.h"
extern  rtx gen_zero_extendsidi2( rtx ,  rtx ); 
#line 1328 "insn-flags.h"
extern  rtx gen_extendsidi2( rtx ,  rtx ); 
#line 1329 "insn-flags.h"
extern  rtx gen_extendsfdf2( rtx ,  rtx ); 
#line 1330 "insn-flags.h"
extern  rtx gen_extendsfxf2( rtx ,  rtx ); 
#line 1331 "insn-flags.h"
extern  rtx gen_extenddfxf2( rtx ,  rtx ); 
#line 1332 "insn-flags.h"
extern  rtx gen_truncdfsf2( rtx ,  rtx ); 
#line 1333 "insn-flags.h"
extern  rtx gen_truncxfsf2( rtx ,  rtx ); 
#line 1334 "insn-flags.h"
extern  rtx gen_truncxfdf2( rtx ,  rtx ); 
#line 1335 "insn-flags.h"
extern  rtx gen_fix_truncxfdi2( rtx ,  rtx ); 
#line 1336 "insn-flags.h"
extern  rtx gen_fix_truncdfdi2( rtx ,  rtx ); 
#line 1337 "insn-flags.h"
extern  rtx gen_fix_truncsfdi2( rtx ,  rtx ); 
#line 1338 "insn-flags.h"
extern  rtx gen_fix_truncxfsi2( rtx ,  rtx ); 
#line 1339 "insn-flags.h"
extern  rtx gen_fix_truncdfsi2( rtx ,  rtx ); 
#line 1340 "insn-flags.h"
extern  rtx gen_fix_truncsfsi2( rtx ,  rtx ); 
#line 1341 "insn-flags.h"
extern  rtx gen_fix_truncxfhi2( rtx ,  rtx ); 
#line 1342 "insn-flags.h"
extern  rtx gen_fix_truncdfhi2( rtx ,  rtx ); 
#line 1343 "insn-flags.h"
extern  rtx gen_fix_truncsfhi2( rtx ,  rtx ); 
#line 1344 "insn-flags.h"
extern  rtx gen_floathisf2( rtx ,  rtx ); 
#line 1345 "insn-flags.h"
extern  rtx gen_floatsisf2( rtx ,  rtx ); 
#line 1346 "insn-flags.h"
extern  rtx gen_floatdisf2( rtx ,  rtx ); 
#line 1347 "insn-flags.h"
extern  rtx gen_floathidf2( rtx ,  rtx ); 
#line 1348 "insn-flags.h"
extern  rtx gen_floatsidf2( rtx ,  rtx ); 
#line 1349 "insn-flags.h"
extern  rtx gen_floatdidf2( rtx ,  rtx ); 
#line 1350 "insn-flags.h"
extern  rtx gen_floatunssisf2( rtx ,  rtx ); 
#line 1351 "insn-flags.h"
static __inline__  rtx gen_floatunsdisf2( rtx ,  rtx ); 
#line 1353 "insn-flags.h"
static __inline__  rtx gen_floatunsdisf2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1354 "insn-flags.h"
return 0; }
 
#line 1356 "insn-flags.h"
static __inline__  rtx gen_floatunsdidf2( rtx ,  rtx ); 
#line 1358 "insn-flags.h"
static __inline__  rtx gen_floatunsdidf2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1359 "insn-flags.h"
return 0; }
 
#line 1361 "insn-flags.h"
extern  rtx gen_vec_setv2df( rtx ,  rtx ,  rtx ); 
#line 1362 "insn-flags.h"
extern  rtx gen_vec_extractv2df( rtx ,  rtx ,  rtx ); 
#line 1363 "insn-flags.h"
extern  rtx gen_vec_initv2df( rtx ,  rtx ); 
#line 1364 "insn-flags.h"
extern  rtx gen_vec_setv4sf( rtx ,  rtx ,  rtx ); 
#line 1365 "insn-flags.h"
extern  rtx gen_vec_extractv4sf( rtx ,  rtx ,  rtx ); 
#line 1366 "insn-flags.h"
extern  rtx gen_vec_initv4sf( rtx ,  rtx ); 
#line 1367 "insn-flags.h"
extern  rtx gen_adddi3( rtx ,  rtx ,  rtx ); 
#line 1368 "insn-flags.h"
extern  rtx gen_addsi3( rtx ,  rtx ,  rtx ); 
#line 1369 "insn-flags.h"
extern  rtx gen_addhi3( rtx ,  rtx ,  rtx ); 
#line 1370 "insn-flags.h"
extern  rtx gen_addqi3( rtx ,  rtx ,  rtx ); 
#line 1371 "insn-flags.h"
extern  rtx gen_addxf3( rtx ,  rtx ,  rtx ); 
#line 1372 "insn-flags.h"
extern  rtx gen_adddf3( rtx ,  rtx ,  rtx ); 
#line 1373 "insn-flags.h"
extern  rtx gen_addsf3( rtx ,  rtx ,  rtx ); 
#line 1374 "insn-flags.h"
extern  rtx gen_subdi3( rtx ,  rtx ,  rtx ); 
#line 1375 "insn-flags.h"
extern  rtx gen_subsi3( rtx ,  rtx ,  rtx ); 
#line 1376 "insn-flags.h"
extern  rtx gen_subhi3( rtx ,  rtx ,  rtx ); 
#line 1377 "insn-flags.h"
extern  rtx gen_subqi3( rtx ,  rtx ,  rtx ); 
#line 1378 "insn-flags.h"
extern  rtx gen_subxf3( rtx ,  rtx ,  rtx ); 
#line 1379 "insn-flags.h"
extern  rtx gen_subdf3( rtx ,  rtx ,  rtx ); 
#line 1380 "insn-flags.h"
extern  rtx gen_subsf3( rtx ,  rtx ,  rtx ); 
#line 1381 "insn-flags.h"
static __inline__  rtx gen_muldi3( rtx ,  rtx ,  rtx ); 
#line 1383 "insn-flags.h"
static __inline__  rtx gen_muldi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1384 "insn-flags.h"
return 0; }
 
#line 1386 "insn-flags.h"
extern  rtx gen_mulsi3( rtx ,  rtx ,  rtx ); 
#line 1387 "insn-flags.h"
extern  rtx gen_mulhi3( rtx ,  rtx ,  rtx ); 
#line 1388 "insn-flags.h"
extern  rtx gen_mulqi3( rtx ,  rtx ,  rtx ); 
#line 1389 "insn-flags.h"
extern  rtx gen_umulqihi3( rtx ,  rtx ,  rtx ); 
#line 1390 "insn-flags.h"
extern  rtx gen_mulqihi3( rtx ,  rtx ,  rtx ); 
#line 1391 "insn-flags.h"
static __inline__  rtx gen_umulditi3( rtx ,  rtx ,  rtx ); 
#line 1393 "insn-flags.h"
static __inline__  rtx gen_umulditi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1394 "insn-flags.h"
return 0; }
 
#line 1396 "insn-flags.h"
extern  rtx gen_umulsidi3( rtx ,  rtx ,  rtx ); 
#line 1397 "insn-flags.h"
static __inline__  rtx gen_mulditi3( rtx ,  rtx ,  rtx ); 
#line 1399 "insn-flags.h"
static __inline__  rtx gen_mulditi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1400 "insn-flags.h"
return 0; }
 
#line 1402 "insn-flags.h"
extern  rtx gen_mulsidi3( rtx ,  rtx ,  rtx ); 
#line 1403 "insn-flags.h"
static __inline__  rtx gen_umuldi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1405 "insn-flags.h"
static __inline__  rtx gen_umuldi3_highpart( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1406 "insn-flags.h"
return 0; }
 
#line 1408 "insn-flags.h"
extern  rtx gen_umulsi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1409 "insn-flags.h"
static __inline__  rtx gen_smuldi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1411 "insn-flags.h"
static __inline__  rtx gen_smuldi3_highpart( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1412 "insn-flags.h"
return 0; }
 
#line 1414 "insn-flags.h"
extern  rtx gen_smulsi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1415 "insn-flags.h"
extern  rtx gen_mulxf3( rtx ,  rtx ,  rtx ); 
#line 1416 "insn-flags.h"
extern  rtx gen_muldf3( rtx ,  rtx ,  rtx ); 
#line 1417 "insn-flags.h"
extern  rtx gen_mulsf3( rtx ,  rtx ,  rtx ); 
#line 1418 "insn-flags.h"
extern  rtx gen_divxf3( rtx ,  rtx ,  rtx ); 
#line 1419 "insn-flags.h"
extern  rtx gen_divdf3( rtx ,  rtx ,  rtx ); 
#line 1420 "insn-flags.h"
extern  rtx gen_divsf3( rtx ,  rtx ,  rtx ); 
#line 1421 "insn-flags.h"
static __inline__  rtx gen_divmoddi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1423 "insn-flags.h"
static __inline__  rtx gen_divmoddi4( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1424 "insn-flags.h"
return 0; }
 
#line 1426 "insn-flags.h"
extern  rtx gen_divmodsi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1427 "insn-flags.h"
extern  rtx gen_udivmodhi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1428 "insn-flags.h"
extern  rtx gen_testsi_ccno_1( rtx ,  rtx ); 
#line 1429 "insn-flags.h"
extern  rtx gen_testqi_ccz_1( rtx ,  rtx ); 
#line 1430 "insn-flags.h"
extern  rtx gen_testqi_ext_ccno_0( rtx ,  rtx ); 
#line 1431 "insn-flags.h"
static __inline__  rtx gen_anddi3( rtx ,  rtx ,  rtx ); 
#line 1433 "insn-flags.h"
static __inline__  rtx gen_anddi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1434 "insn-flags.h"
return 0; }
 
#line 1436 "insn-flags.h"
extern  rtx gen_andsi3( rtx ,  rtx ,  rtx ); 
#line 1437 "insn-flags.h"
extern  rtx gen_andhi3( rtx ,  rtx ,  rtx ); 
#line 1438 "insn-flags.h"
extern  rtx gen_andqi3( rtx ,  rtx ,  rtx ); 
#line 1439 "insn-flags.h"
static __inline__  rtx gen_iordi3( rtx ,  rtx ,  rtx ); 
#line 1441 "insn-flags.h"
static __inline__  rtx gen_iordi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1442 "insn-flags.h"
return 0; }
 
#line 1444 "insn-flags.h"
extern  rtx gen_iorsi3( rtx ,  rtx ,  rtx ); 
#line 1445 "insn-flags.h"
extern  rtx gen_iorhi3( rtx ,  rtx ,  rtx ); 
#line 1446 "insn-flags.h"
extern  rtx gen_iorqi3( rtx ,  rtx ,  rtx ); 
#line 1447 "insn-flags.h"
static __inline__  rtx gen_xordi3( rtx ,  rtx ,  rtx ); 
#line 1449 "insn-flags.h"
static __inline__  rtx gen_xordi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1450 "insn-flags.h"
return 0; }
 
#line 1452 "insn-flags.h"
extern  rtx gen_xorsi3( rtx ,  rtx ,  rtx ); 
#line 1453 "insn-flags.h"
extern  rtx gen_xorhi3( rtx ,  rtx ,  rtx ); 
#line 1454 "insn-flags.h"
extern  rtx gen_xorqi3( rtx ,  rtx ,  rtx ); 
#line 1455 "insn-flags.h"
extern  rtx gen_xorqi_cc_ext_1( rtx ,  rtx ,  rtx ); 
#line 1456 "insn-flags.h"
extern  rtx gen_negdi2( rtx ,  rtx ); 
#line 1457 "insn-flags.h"
extern  rtx gen_negsi2( rtx ,  rtx ); 
#line 1458 "insn-flags.h"
extern  rtx gen_neghi2( rtx ,  rtx ); 
#line 1459 "insn-flags.h"
extern  rtx gen_negqi2( rtx ,  rtx ); 
#line 1460 "insn-flags.h"
extern  rtx gen_negsf2( rtx ,  rtx ); 
#line 1461 "insn-flags.h"
extern  rtx gen_negdf2( rtx ,  rtx ); 
#line 1462 "insn-flags.h"
extern  rtx gen_negxf2( rtx ,  rtx ); 
#line 1463 "insn-flags.h"
extern  rtx gen_abssf2( rtx ,  rtx ); 
#line 1464 "insn-flags.h"
extern  rtx gen_absdf2( rtx ,  rtx ); 
#line 1465 "insn-flags.h"
extern  rtx gen_absxf2( rtx ,  rtx ); 
#line 1466 "insn-flags.h"
static __inline__  rtx gen_one_cmpldi2( rtx ,  rtx ); 
#line 1468 "insn-flags.h"
static __inline__  rtx gen_one_cmpldi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1469 "insn-flags.h"
return 0; }
 
#line 1471 "insn-flags.h"
extern  rtx gen_one_cmplsi2( rtx ,  rtx ); 
#line 1472 "insn-flags.h"
extern  rtx gen_one_cmplhi2( rtx ,  rtx ); 
#line 1473 "insn-flags.h"
extern  rtx gen_one_cmplqi2( rtx ,  rtx ); 
#line 1474 "insn-flags.h"
extern  rtx gen_ashldi3( rtx ,  rtx ,  rtx ); 
#line 1475 "insn-flags.h"
extern  rtx gen_x86_shift_adj_1( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1476 "insn-flags.h"
extern  rtx gen_x86_shift_adj_2( rtx ,  rtx ,  rtx ); 
#line 1477 "insn-flags.h"
extern  rtx gen_ashlsi3( rtx ,  rtx ,  rtx ); 
#line 1478 "insn-flags.h"
extern  rtx gen_ashlhi3( rtx ,  rtx ,  rtx ); 
#line 1479 "insn-flags.h"
extern  rtx gen_ashlqi3( rtx ,  rtx ,  rtx ); 
#line 1480 "insn-flags.h"
extern  rtx gen_ashrdi3( rtx ,  rtx ,  rtx ); 
#line 1481 "insn-flags.h"
extern  rtx gen_x86_shift_adj_3( rtx ,  rtx ,  rtx ); 
#line 1482 "insn-flags.h"
extern  rtx gen_ashrsi3( rtx ,  rtx ,  rtx ); 
#line 1483 "insn-flags.h"
extern  rtx gen_ashrhi3( rtx ,  rtx ,  rtx ); 
#line 1484 "insn-flags.h"
extern  rtx gen_ashrqi3( rtx ,  rtx ,  rtx ); 
#line 1485 "insn-flags.h"
extern  rtx gen_lshrdi3( rtx ,  rtx ,  rtx ); 
#line 1486 "insn-flags.h"
extern  rtx gen_lshrsi3( rtx ,  rtx ,  rtx ); 
#line 1487 "insn-flags.h"
extern  rtx gen_lshrhi3( rtx ,  rtx ,  rtx ); 
#line 1488 "insn-flags.h"
extern  rtx gen_lshrqi3( rtx ,  rtx ,  rtx ); 
#line 1489 "insn-flags.h"
static __inline__  rtx gen_rotldi3( rtx ,  rtx ,  rtx ); 
#line 1491 "insn-flags.h"
static __inline__  rtx gen_rotldi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1492 "insn-flags.h"
return 0; }
 
#line 1494 "insn-flags.h"
extern  rtx gen_rotlsi3( rtx ,  rtx ,  rtx ); 
#line 1495 "insn-flags.h"
extern  rtx gen_rotlhi3( rtx ,  rtx ,  rtx ); 
#line 1496 "insn-flags.h"
extern  rtx gen_rotlqi3( rtx ,  rtx ,  rtx ); 
#line 1497 "insn-flags.h"
static __inline__  rtx gen_rotrdi3( rtx ,  rtx ,  rtx ); 
#line 1499 "insn-flags.h"
static __inline__  rtx gen_rotrdi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1500 "insn-flags.h"
return 0; }
 
#line 1502 "insn-flags.h"
extern  rtx gen_rotrsi3( rtx ,  rtx ,  rtx ); 
#line 1503 "insn-flags.h"
extern  rtx gen_rotrhi3( rtx ,  rtx ,  rtx ); 
#line 1504 "insn-flags.h"
extern  rtx gen_rotrqi3( rtx ,  rtx ,  rtx ); 
#line 1505 "insn-flags.h"
extern  rtx gen_extv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1506 "insn-flags.h"
extern  rtx gen_extzv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1507 "insn-flags.h"
extern  rtx gen_insv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1508 "insn-flags.h"
extern  rtx gen_seq( rtx ); 
#line 1509 "insn-flags.h"
extern  rtx gen_sne( rtx ); 
#line 1510 "insn-flags.h"
extern  rtx gen_sgt( rtx ); 
#line 1511 "insn-flags.h"
extern  rtx gen_sgtu( rtx ); 
#line 1512 "insn-flags.h"
extern  rtx gen_slt( rtx ); 
#line 1513 "insn-flags.h"
extern  rtx gen_sltu( rtx ); 
#line 1514 "insn-flags.h"
extern  rtx gen_sge( rtx ); 
#line 1515 "insn-flags.h"
extern  rtx gen_sgeu( rtx ); 
#line 1516 "insn-flags.h"
extern  rtx gen_sle( rtx ); 
#line 1517 "insn-flags.h"
extern  rtx gen_sleu( rtx ); 
#line 1518 "insn-flags.h"
extern  rtx gen_sunordered( rtx ); 
#line 1519 "insn-flags.h"
extern  rtx gen_sordered( rtx ); 
#line 1520 "insn-flags.h"
extern  rtx gen_suneq( rtx ); 
#line 1521 "insn-flags.h"
extern  rtx gen_sunge( rtx ); 
#line 1522 "insn-flags.h"
extern  rtx gen_sungt( rtx ); 
#line 1523 "insn-flags.h"
extern  rtx gen_sunle( rtx ); 
#line 1524 "insn-flags.h"
extern  rtx gen_sunlt( rtx ); 
#line 1525 "insn-flags.h"
extern  rtx gen_sltgt( rtx ); 
#line 1526 "insn-flags.h"
extern  rtx gen_beq( rtx ); 
#line 1527 "insn-flags.h"
extern  rtx gen_bne( rtx ); 
#line 1528 "insn-flags.h"
extern  rtx gen_bgt( rtx ); 
#line 1529 "insn-flags.h"
extern  rtx gen_bgtu( rtx ); 
#line 1530 "insn-flags.h"
extern  rtx gen_blt( rtx ); 
#line 1531 "insn-flags.h"
extern  rtx gen_bltu( rtx ); 
#line 1532 "insn-flags.h"
extern  rtx gen_bge( rtx ); 
#line 1533 "insn-flags.h"
extern  rtx gen_bgeu( rtx ); 
#line 1534 "insn-flags.h"
extern  rtx gen_ble( rtx ); 
#line 1535 "insn-flags.h"
extern  rtx gen_bleu( rtx ); 
#line 1536 "insn-flags.h"
extern  rtx gen_bunordered( rtx ); 
#line 1537 "insn-flags.h"
extern  rtx gen_bordered( rtx ); 
#line 1538 "insn-flags.h"
extern  rtx gen_buneq( rtx ); 
#line 1539 "insn-flags.h"
extern  rtx gen_bunge( rtx ); 
#line 1540 "insn-flags.h"
extern  rtx gen_bungt( rtx ); 
#line 1541 "insn-flags.h"
extern  rtx gen_bunle( rtx ); 
#line 1542 "insn-flags.h"
extern  rtx gen_bunlt( rtx ); 
#line 1543 "insn-flags.h"
extern  rtx gen_bltgt( rtx ); 
#line 1544 "insn-flags.h"
extern  rtx gen_indirect_jump( rtx ); 
#line 1545 "insn-flags.h"
extern  rtx gen_tablejump( rtx ,  rtx ); 
#line 1546 "insn-flags.h"
extern  rtx gen_doloop_end( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1548 "insn-flags.h"
extern  rtx gen_call_pop( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1550 "insn-flags.h"
extern  rtx gen_call( rtx ,  rtx ,  rtx ); 
#line 1552 "insn-flags.h"
extern  rtx gen_sibcall( rtx ,  rtx ,  rtx ); 
#line 1554 "insn-flags.h"
extern  rtx gen_call_value_pop( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1556 "insn-flags.h"
extern  rtx gen_call_value( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1558 "insn-flags.h"
extern  rtx gen_sibcall_value( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1559 "insn-flags.h"
extern  rtx gen_untyped_call( rtx ,  rtx ,  rtx ); 
#line 1560 "insn-flags.h"
extern  rtx gen_return(void ); 
#line 1561 "insn-flags.h"
extern  rtx gen_prologue(void ); 
#line 1562 "insn-flags.h"
extern  rtx gen_epilogue(void ); 
#line 1563 "insn-flags.h"
extern  rtx gen_sibcall_epilogue(void ); 
#line 1564 "insn-flags.h"
extern  rtx gen_eh_return( rtx ); 
#line 1565 "insn-flags.h"
extern  rtx gen_ffssi2( rtx ,  rtx ); 
#line 1566 "insn-flags.h"
extern  rtx gen_clzsi2( rtx ,  rtx ); 
#line 1567 "insn-flags.h"
extern  rtx gen_tls_global_dynamic_32( rtx ,  rtx ); 
#line 1568 "insn-flags.h"
extern  rtx gen_tls_global_dynamic_64( rtx ,  rtx ); 
#line 1569 "insn-flags.h"
extern  rtx gen_tls_local_dynamic_base_32( rtx ); 
#line 1570 "insn-flags.h"
extern  rtx gen_tls_local_dynamic_base_64( rtx ); 
#line 1571 "insn-flags.h"
extern  rtx gen_sqrtsf2( rtx ,  rtx ); 
#line 1572 "insn-flags.h"
extern  rtx gen_sqrtdf2( rtx ,  rtx ); 
#line 1573 "insn-flags.h"
extern  rtx gen_atan2df3( rtx ,  rtx ,  rtx ); 
#line 1574 "insn-flags.h"
extern  rtx gen_atan2sf3( rtx ,  rtx ,  rtx ); 
#line 1575 "insn-flags.h"
extern  rtx gen_atan2xf3( rtx ,  rtx ,  rtx ); 
#line 1576 "insn-flags.h"
extern  rtx gen_logsf2( rtx ,  rtx ); 
#line 1577 "insn-flags.h"
extern  rtx gen_logdf2( rtx ,  rtx ); 
#line 1578 "insn-flags.h"
extern  rtx gen_logxf2( rtx ,  rtx ); 
#line 1579 "insn-flags.h"
extern  rtx gen_expsf2( rtx ,  rtx ); 
#line 1580 "insn-flags.h"
extern  rtx gen_expdf2( rtx ,  rtx ); 
#line 1581 "insn-flags.h"
extern  rtx gen_expxf2( rtx ,  rtx ); 
#line 1582 "insn-flags.h"
extern  rtx gen_atansf2( rtx ,  rtx ); 
#line 1583 "insn-flags.h"
extern  rtx gen_atandf2( rtx ,  rtx ); 
#line 1584 "insn-flags.h"
extern  rtx gen_atanxf2( rtx ,  rtx ); 
#line 1585 "insn-flags.h"
extern  rtx gen_movstrsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1586 "insn-flags.h"
static __inline__  rtx gen_movstrdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1588 "insn-flags.h"
static __inline__  rtx gen_movstrdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1589 "insn-flags.h"
return 0; }
 
#line 1591 "insn-flags.h"
extern  rtx gen_strmov( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1592 "insn-flags.h"
extern  rtx gen_strmov_singleop( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1593 "insn-flags.h"
extern  rtx gen_rep_mov( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1594 "insn-flags.h"
extern  rtx gen_clrstrsi( rtx ,  rtx ,  rtx ); 
#line 1595 "insn-flags.h"
static __inline__  rtx gen_clrstrdi( rtx ,  rtx ,  rtx ); 
#line 1597 "insn-flags.h"
static __inline__  rtx gen_clrstrdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1598 "insn-flags.h"
return 0; }
 
#line 1600 "insn-flags.h"
extern  rtx gen_strset( rtx ,  rtx ,  rtx ); 
#line 1601 "insn-flags.h"
extern  rtx gen_strset_singleop( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1602 "insn-flags.h"
extern  rtx gen_rep_stos( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1603 "insn-flags.h"
extern  rtx gen_cmpstrsi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1604 "insn-flags.h"
extern  rtx gen_cmpintqi( rtx ); 
#line 1605 "insn-flags.h"
extern  rtx gen_cmpstrqi_nz_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1606 "insn-flags.h"
extern  rtx gen_cmpstrqi_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1607 "insn-flags.h"
extern  rtx gen_strlensi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1608 "insn-flags.h"
extern  rtx gen_strlendi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1609 "insn-flags.h"
extern  rtx gen_strlenqi_1( rtx ,  rtx ,  rtx ); 
#line 1610 "insn-flags.h"
static __inline__  rtx gen_movdicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1612 "insn-flags.h"
static __inline__  rtx gen_movdicc( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1613 "insn-flags.h"
return 0; }
 
#line 1615 "insn-flags.h"
extern  rtx gen_movsicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1616 "insn-flags.h"
extern  rtx gen_movhicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1617 "insn-flags.h"
extern  rtx gen_movqicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1618 "insn-flags.h"
extern  rtx gen_movsfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1619 "insn-flags.h"
extern  rtx gen_movdfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1620 "insn-flags.h"
extern  rtx gen_movxfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1621 "insn-flags.h"
extern  rtx gen_minsf3( rtx ,  rtx ,  rtx ); 
#line 1622 "insn-flags.h"
extern  rtx gen_addqicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1623 "insn-flags.h"
extern  rtx gen_addhicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1624 "insn-flags.h"
extern  rtx gen_addsicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1625 "insn-flags.h"
static __inline__  rtx gen_adddicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1627 "insn-flags.h"
static __inline__  rtx gen_adddicc( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1628 "insn-flags.h"
return 0; }
 
#line 1630 "insn-flags.h"
extern  rtx gen_mindf3( rtx ,  rtx ,  rtx ); 
#line 1631 "insn-flags.h"
extern  rtx gen_maxsf3( rtx ,  rtx ,  rtx ); 
#line 1632 "insn-flags.h"
extern  rtx gen_maxdf3( rtx ,  rtx ,  rtx ); 
#line 1633 "insn-flags.h"
extern  rtx gen_allocate_stack_worker( rtx ); 
#line 1634 "insn-flags.h"
extern  rtx gen_allocate_stack_worker_postreload( rtx ); 
#line 1635 "insn-flags.h"
extern  rtx gen_allocate_stack_worker_rex64_postreload( rtx ); 
#line 1636 "insn-flags.h"
extern  rtx gen_allocate_stack( rtx ,  rtx ); 
#line 1637 "insn-flags.h"
extern  rtx gen_builtin_setjmp_receiver( rtx ); 
#line 1638 "insn-flags.h"
extern  rtx gen_conditional_trap( rtx ,  rtx ); 
#line 1639 "insn-flags.h"
extern  rtx gen_movti( rtx ,  rtx ); 
#line 1640 "insn-flags.h"
static __inline__  rtx gen_movtf( rtx ,  rtx ); 
#line 1642 "insn-flags.h"
static __inline__  rtx gen_movtf( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1643 "insn-flags.h"
return 0; }
 
#line 1645 "insn-flags.h"
extern  rtx gen_movv2df( rtx ,  rtx ); 
#line 1646 "insn-flags.h"
extern  rtx gen_movv8hi( rtx ,  rtx ); 
#line 1647 "insn-flags.h"
extern  rtx gen_movv16qi( rtx ,  rtx ); 
#line 1648 "insn-flags.h"
extern  rtx gen_movv4sf( rtx ,  rtx ); 
#line 1649 "insn-flags.h"
extern  rtx gen_movv4si( rtx ,  rtx ); 
#line 1650 "insn-flags.h"
extern  rtx gen_movv2di( rtx ,  rtx ); 
#line 1651 "insn-flags.h"
extern  rtx gen_movv2si( rtx ,  rtx ); 
#line 1652 "insn-flags.h"
extern  rtx gen_movv4hi( rtx ,  rtx ); 
#line 1653 "insn-flags.h"
extern  rtx gen_movv8qi( rtx ,  rtx ); 
#line 1654 "insn-flags.h"
extern  rtx gen_movv2sf( rtx ,  rtx ); 
#line 1655 "insn-flags.h"
extern  rtx gen_sse_movaps( rtx ,  rtx ); 
#line 1656 "insn-flags.h"
extern  rtx gen_sse_movups( rtx ,  rtx ); 
#line 1657 "insn-flags.h"
extern  rtx gen_sse_loadss( rtx ,  rtx ); 
#line 1658 "insn-flags.h"
extern  rtx gen_sse_andv4sf3( rtx ,  rtx ,  rtx ); 
#line 1659 "insn-flags.h"
extern  rtx gen_sse_nandv4sf3( rtx ,  rtx ,  rtx ); 
#line 1660 "insn-flags.h"
extern  rtx gen_sse_iorv4sf3( rtx ,  rtx ,  rtx ); 
#line 1661 "insn-flags.h"
extern  rtx gen_sse_xorv4sf3( rtx ,  rtx ,  rtx ); 
#line 1662 "insn-flags.h"
extern  rtx gen_sse2_andv2df3( rtx ,  rtx ,  rtx ); 
#line 1663 "insn-flags.h"
extern  rtx gen_sse2_nandv2df3( rtx ,  rtx ,  rtx ); 
#line 1664 "insn-flags.h"
extern  rtx gen_sse2_iorv2df3( rtx ,  rtx ,  rtx ); 
#line 1665 "insn-flags.h"
extern  rtx gen_sse2_xorv2df3( rtx ,  rtx ,  rtx ); 
#line 1666 "insn-flags.h"
extern  rtx gen_sfence(void ); 
#line 1667 "insn-flags.h"
static __inline__  rtx gen_sse_prologue_save( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1669 "insn-flags.h"
static __inline__  rtx gen_sse_prologue_save( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1670 "insn-flags.h"
return 0; }
 
#line 1672 "insn-flags.h"
extern  rtx gen_prefetch( rtx ,  rtx ,  rtx ); 
#line 1673 "insn-flags.h"
extern  rtx gen_sse2_loadsd( rtx ,  rtx ); 
#line 1674 "insn-flags.h"
extern  rtx gen_sse2_mfence(void ); 
#line 1675 "insn-flags.h"
extern  rtx gen_sse2_lfence(void ); 
# 17 "tm.h" 2
# 93 "reload.c" 2
# 1 "rtl.h" 1
# 25 "rtl.h" 
struct function ; 
# 1 "machmode.h" 1
# 26 "machmode.h" 
# 88 "insn-modes.h" 1
enum machine_mode {VOIDmode,BLKmode,CCmode,CCGCmode,CCGOCmode,CCNOmode,CCZmode,CCFPmode,CCFPUmode,BImode,QImode,HImode,SImode,DImode,TImode,SFmode,DFmode,XFmode,TFmode,CQImode,CHImode,CSImode,CDImode,CTImode,SCmode,DCmode,XCmode,TCmode,V2QImode,V4QImode,V2HImode,V8QImode,V4HImode,V2SImode,V1DImode,V16QImode,V8HImode,V4SImode,V2DImode,V8SImode,V4DImode,V8DImode,V2SFmode,V4SFmode,V2DFmode,V8SFmode,V4DFmode,V16SFmode,V8DFmode,MAX_MACHINE_MODE,MIN_MODE_RANDOM=VOIDmode,MAX_MODE_RANDOM=BLKmode,MIN_MODE_CC=CCmode,MAX_MODE_CC=CCFPUmode,MIN_MODE_INT=QImode,MAX_MODE_INT=TImode,MIN_MODE_PARTIAL_INT=VOIDmode,MAX_MODE_PARTIAL_INT=VOIDmode,MIN_MODE_FLOAT=SFmode,MAX_MODE_FLOAT=TFmode,MIN_MODE_COMPLEX_INT=CQImode,MAX_MODE_COMPLEX_INT=CTImode,MIN_MODE_COMPLEX_FLOAT=SCmode,MAX_MODE_COMPLEX_FLOAT=TCmode,MIN_MODE_VECTOR_INT=V2QImode,MAX_MODE_VECTOR_INT=V8DImode,MIN_MODE_VECTOR_FLOAT=V2SFmode,MAX_MODE_VECTOR_FLOAT=V8DFmode,NUM_MACHINE_MODES=MAX_MACHINE_MODE}; 
#line 30 "machmode.h"
extern const char *const mode_name[NUM_MACHINE_MODES]; 
# 27 "machmode.h" 2
# 1 "mode-classes.def" 1
# 37 "machmode.h" 2
enum mode_class {MODE_RANDOM,MODE_CC,MODE_INT,MODE_PARTIAL_INT,MODE_FLOAT,MODE_COMPLEX_INT,MODE_COMPLEX_FLOAT,MODE_VECTOR_INT,MODE_VECTOR_FLOAT,MAX_MODE_CLASS}; 
#line 44 "machmode.h"
extern const unsigned char mode_class[NUM_MACHINE_MODES]; 
#line 81 "machmode.h"
extern unsigned char mode_size[NUM_MACHINE_MODES]; 
#line 86 "machmode.h"
extern const unsigned short mode_precision[NUM_MACHINE_MODES]; 
#line 92 "machmode.h"
extern const unsigned long mode_mask_array[NUM_MACHINE_MODES]; 
#line 98 "machmode.h"
extern const unsigned char mode_inner[NUM_MACHINE_MODES]; 
# 81 "machmode.h" 
# 110 "machmode.h" 
extern const unsigned char mode_nunits[NUM_MACHINE_MODES]; 
#line 115 "machmode.h"
extern const unsigned char mode_wider[NUM_MACHINE_MODES]; 
#line 122 "machmode.h"
extern enum machine_mode mode_for_size(unsigned int , enum mode_class , int ); 
#line 127 "machmode.h"
extern enum machine_mode smallest_mode_for_size(unsigned int , enum mode_class ); 
#line 133 "machmode.h"
extern enum machine_mode int_mode_for_mode(enum machine_mode ); 
#line 138 "machmode.h"
extern enum machine_mode get_best_mode(int , int , unsigned int , enum machine_mode , int ); 
#line 142 "machmode.h"
extern unsigned char mode_base_align[NUM_MACHINE_MODES]; 
#line 144 "machmode.h"
extern unsigned get_mode_alignment(enum machine_mode ); 
#line 150 "machmode.h"
extern const unsigned char class_narrowest_mode[MAX_MODE_CLASS]; 
#line 156 "machmode.h"
extern enum machine_mode byte_mode; 
#line 157 "machmode.h"
extern enum machine_mode word_mode; 
#line 158 "machmode.h"
extern enum machine_mode ptr_mode; 
#line 161 "machmode.h"
extern void init_adjust_machine_modes(void ); 
# 28 "rtl.h" 2
# 1 "input.h" 1
# 34 "input.h" 
struct location_s {const char *file; int line; }; 
#line 35 "input.h"
typedef struct location_s location_t; 
#line 41 "input.h"
struct file_stack {struct file_stack *next;  location_t location; }; 
#line 44 "input.h"
extern const char *main_input_filename; 
#line 46 "input.h"
extern  location_t input_location; 
#line 52 "input.h"
extern struct file_stack *input_file_stack; 
#line 55 "input.h"
extern struct file_stack *expr_wfl_stack; 
#line 58 "input.h"
extern int input_file_stack_tick; 
#line 60 "input.h"
extern void push_srcloc(const char *name, int line); 
#line 61 "input.h"
extern void pop_srcloc(void ); 
# 29 "rtl.h" 2
# 42 "rtl.h" 
# 1 "rtl.def" 1
# 70 "rtl.def" 
# 129 "rtl.def" 
# 158 "rtl.def" 
# 192 "rtl.def" 
# 211 "rtl.def" 
# 239 "rtl.def" 
# 260 "rtl.def" 
# 276 "rtl.def" 
# 317 "rtl.def" 
# 333 "rtl.def" 
# 358 "rtl.def" 
# 373 "rtl.def" 
# 395 "rtl.def" 
# 416 "rtl.def" 
# 439 "rtl.def" 
# 455 "rtl.def" 
# 464 "rtl.def" 
# 487 "rtl.def" 
# 496 "rtl.def" 
# 544 "rtl.def" 
# 555 "rtl.def" 
# 581 "rtl.def" 
# 600 "rtl.def" 
# 613 "rtl.def" 
# 655 "rtl.def" 
# 680 "rtl.def" 
# 691 "rtl.def" 
# 723 "rtl.def" 
# 734 "rtl.def" 
# 746 "rtl.def" 
# 817 "rtl.def" 
# 834 "rtl.def" 
# 847 "rtl.def" 
# 887 "rtl.def" 
# 905 "rtl.def" 
# 917 "rtl.def" 
# 926 "rtl.def" 
# 985 "rtl.def" 
# 1002 "rtl.def" 
# 1098 "rtl.def" 
# 1123 "rtl.def" 
# 1138 "rtl.def" 
# 1174 "rtl.def" 
# 48 "rtl.h" 2
enum rtx_code {UNKNOWN,NIL,INCLUDE,EXPR_LIST,INSN_LIST,MATCH_OPERAND,MATCH_SCRATCH,MATCH_DUP,MATCH_OPERATOR,MATCH_PARALLEL,MATCH_OP_DUP,MATCH_PAR_DUP,MATCH_INSN,DEFINE_INSN,DEFINE_PEEPHOLE,DEFINE_SPLIT,DEFINE_INSN_AND_SPLIT,DEFINE_PEEPHOLE2,DEFINE_COMBINE,DEFINE_EXPAND,DEFINE_DELAY,DEFINE_FUNCTION_UNIT,DEFINE_ASM_ATTRIBUTES,DEFINE_COND_EXEC,SEQUENCE,ADDRESS,DEFINE_CPU_UNIT,DEFINE_QUERY_CPU_UNIT,EXCLUSION_SET,PRESENCE_SET,FINAL_PRESENCE_SET,ABSENCE_SET,FINAL_ABSENCE_SET,DEFINE_BYPASS,DEFINE_AUTOMATON,AUTOMATA_OPTION,DEFINE_RESERVATION,DEFINE_INSN_RESERVATION,DEFINE_ATTR,ATTR,SET_ATTR,SET_ATTR_ALTERNATIVE,EQ_ATTR,EQ_ATTR_ALT,ATTR_FLAG,INSN,JUMP_INSN,CALL_INSN,BARRIER,CODE_LABEL,NOTE,COND_EXEC,PARALLEL,ASM_INPUT,ASM_OPERANDS,UNSPEC,UNSPEC_VOLATILE,ADDR_VEC,ADDR_DIFF_VEC,PREFETCH,SET,USE,CLOBBER,CALL,RETURN,TRAP_IF,RESX,CONST_INT,CONST_DOUBLE,CONST_VECTOR,CONST_STRING,CONST,PC,VALUE,REG,SCRATCH,SUBREG,STRICT_LOW_PART,CONCAT,MEM,LABEL_REF,SYMBOL_REF,CC0,ADDRESSOF,QUEUED,IF_THEN_ELSE,COND,COMPARE,PLUS,MINUS,NEG,MULT,DIV,MOD,UDIV,UMOD,AND,IOR,XOR,NOT,ASHIFT,ROTATE,ASHIFTRT,LSHIFTRT,ROTATERT,SMIN,SMAX,UMIN,UMAX,PRE_DEC,PRE_INC,POST_DEC,POST_INC,PRE_MODIFY,POST_MODIFY,NE,EQ,GE,GT,LE,LT,GEU,GTU,LEU,LTU,UNORDERED,ORDERED,UNEQ,UNGE,UNGT,UNLE,UNLT,LTGT,SIGN_EXTEND,ZERO_EXTEND,TRUNCATE,FLOAT_EXTEND,FLOAT_TRUNCATE,FLOAT,FIX,UNSIGNED_FLOAT,UNSIGNED_FIX,ABS,SQRT,FFS,CLZ,CTZ,POPCOUNT,PARITY,SIGN_EXTRACT,ZERO_EXTRACT,HIGH,LO_SUM,RANGE_INFO,RANGE_REG,RANGE_VAR,RANGE_LIVE,CONSTANT_P_RTX,CALL_PLACEHOLDER,VEC_MERGE,VEC_SELECT,VEC_CONCAT,VEC_DUPLICATE,SS_PLUS,US_PLUS,SS_MINUS,US_MINUS,SS_TRUNCATE,US_TRUNCATE,LAST_AND_UNUSED_RTX_CODE}; 
#line 55 "rtl.h"
extern const unsigned char rtx_length[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 58 "rtl.h"
extern const char *const rtx_name[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 61 "rtl.h"
extern const char *const rtx_format[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 64 "rtl.h"
extern const char rtx_class[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 67 "rtl.h"
extern const unsigned char rtx_size[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 68 "rtl.h"
extern const unsigned char rtx_next[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 90 "rtl.h"
typedef struct {unsigned min_align:8; unsigned base_after_vec:1; unsigned min_after_vec:1; unsigned max_after_vec:1; unsigned min_after_base:1; unsigned max_after_base:1; unsigned offset_unsigned:1; unsigned :2; unsigned scale:8; }addr_diff_vec_flags; 
#line 106 "rtl.h"
typedef struct mem_attrs {long alias;  tree expr;  rtx offset;  rtx size; unsigned int align; }mem_attrs; 
#line 115 "rtl.h"
typedef struct reg_attrs { tree decl; long offset; }reg_attrs; 
#line 134 "rtl.h"
union rtunion_def {int rtint; unsigned int rtuint; const char *rtstr;  rtx rtx;  rtvec rtvec; enum machine_mode rttype;  addr_diff_vec_flags rt_addr_diff_vec_flags; struct cselib_val_struct *rt_cselib; struct bitmap_head_def *rtbit;  tree rttree; struct basic_block_def *bb;  mem_attrs *rtmem;  reg_attrs *rtreg; }; 
#line 135 "rtl.h"
typedef union rtunion_def rtunion; 
# 99 "rtl.h" 
# 173 "rtl.h" 
# 192 "rtl.h" 
# 222 "rtl.h" 
struct rtx_def { __extension__ enum rtx_code code:16;  __extension__ enum machine_mode mode:8; unsigned int jump:1; unsigned int call:1; unsigned int unchanging:1; unsigned int volatil:1; unsigned int in_struct:1; unsigned int used:1; unsigned integrated:1; unsigned frame_related:1; union u { rtunion fld[1]; long hwint[1]; }u; }; 
#line 264 "rtl.h"
struct rtvec_def {int num_elem;  rtx elem[1]; }; 
# 261 "rtl.h" 
# 638 "rtl.h" 
# 657 "rtl.h" 
# 776 "rtl.h" 
enum reg_note {REG_DEAD=1,REG_INC,REG_EQUIV,REG_EQUAL,REG_RETVAL,REG_LIBCALL,REG_NONNEG,REG_NO_CONFLICT,REG_UNUSED,REG_CC_SETTER,REG_CC_USER,REG_LABEL,REG_DEP_ANTI,REG_DEP_OUTPUT,REG_BR_PROB,REG_VALUE_PROFILE,REG_NOALIAS,REG_SAVE_AREA,REG_BR_PRED,REG_FRAME_RELATED_EXPR,REG_EH_CONTEXT,REG_EH_REGION,REG_SAVE_NOTE,REG_MAYBE_DEAD,REG_NORETURN,REG_NON_LOCAL_GOTO,REG_SETJMP,REG_ALWAYS_RETURN,REG_VTABLE_REF}; 
#line 788 "rtl.h"
extern const char *const reg_note_name[]; 
# 788 "rtl.h" 
# 921 "rtl.h" 
enum insn_note {NOTE_INSN_BIAS=(-100),NOTE_INSN_DELETED,NOTE_INSN_BLOCK_BEG,NOTE_INSN_BLOCK_END,NOTE_INSN_LOOP_BEG,NOTE_INSN_LOOP_END,NOTE_INSN_LOOP_CONT,NOTE_INSN_LOOP_VTOP,NOTE_INSN_LOOP_END_TOP_COND,NOTE_INSN_FUNCTION_END,NOTE_INSN_PROLOGUE_END,NOTE_INSN_EPILOGUE_BEG,NOTE_INSN_DELETED_LABEL,NOTE_INSN_FUNCTION_BEG,NOTE_INSN_EH_REGION_BEG,NOTE_INSN_EH_REGION_END,NOTE_INSN_REPEATED_LINE_NUMBER,NOTE_INSN_BASIC_BLOCK,NOTE_INSN_EXPECTED_VALUE,NOTE_INSN_PREDICTION,NOTE_INSN_MAX}; 
#line 925 "rtl.h"
extern const char *const note_insn_name[NOTE_INSN_MAX - NOTE_INSN_BIAS]; 
#line 946 "rtl.h"
enum label_kind {LABEL_NORMAL=0,LABEL_STATIC_ENTRY,LABEL_GLOBAL_ENTRY,LABEL_WEAK_ENTRY}; 
# 940 "rtl.h" 
# 1067 "rtl.h" 
extern unsigned int subreg_lsb( rtx ); 
#line 1069 "rtl.h"
extern unsigned int subreg_regno_offset(unsigned int , enum machine_mode , unsigned int , enum machine_mode ); 
#line 1071 "rtl.h"
extern _Bool subreg_offset_representable_p(unsigned int , enum machine_mode , unsigned int , enum machine_mode ); 
#line 1072 "rtl.h"
extern unsigned int subreg_regno( rtx ); 
#line 1422 "rtl.h"
extern int rtx_equal_function_value_matters; 
#line 1425 "rtl.h"
extern int generating_concat_p; 
#line 1430 "rtl.h"
extern int ceil_log2(unsigned long ); 
#line 1435 "rtl.h"
extern  rtx expand_builtin_expect_jump( tree ,  rtx ,  rtx ); 
#line 1436 "rtl.h"
extern void purge_builtin_constant_p(void ); 
#line 1439 "rtl.h"
extern void set_stack_check_libfunc( rtx ); 
#line 1440 "rtl.h"
extern long trunc_int_for_mode(long , enum machine_mode ); 
#line 1441 "rtl.h"
extern  rtx plus_constant_wide( rtx , long ); 
#line 1442 "rtl.h"
extern  rtx plus_constant_for_output_wide( rtx , long ); 
#line 1443 "rtl.h"
extern void optimize_save_area_alloca( rtx ); 
#line 1446 "rtl.h"
extern  rtx gen_rtx(enum rtx_code , enum machine_mode , ...); 
#line 1447 "rtl.h"
extern  rtvec gen_rtvec(int , ...); 
#line 1448 "rtl.h"
extern  rtx copy_insn_1( rtx ); 
#line 1449 "rtl.h"
extern  rtx copy_insn( rtx ); 
#line 1450 "rtl.h"
extern  rtx gen_int_mode(long , enum machine_mode ); 
#line 1451 "rtl.h"
extern  rtx emit_copy_of_insn_after( rtx ,  rtx ); 
#line 1452 "rtl.h"
extern void set_reg_attrs_from_mem( rtx ,  rtx ); 
#line 1453 "rtl.h"
extern void set_mem_attrs_from_reg( rtx ,  rtx ); 
#line 1454 "rtl.h"
extern void set_reg_attrs_for_parm( rtx ,  rtx ); 
#line 1455 "rtl.h"
extern int mem_expr_equal_p( tree ,  tree ); 
#line 1458 "rtl.h"
extern  rtx rtx_alloc(enum rtx_code ); 
#line 1459 "rtl.h"
extern  rtvec rtvec_alloc(int ); 
#line 1460 "rtl.h"
extern  rtx copy_rtx( rtx ); 
#line 1461 "rtl.h"
extern void dump_rtx_statistics(void ); 
#line 1464 "rtl.h"
extern  rtx copy_rtx_if_shared( rtx ); 
#line 1467 "rtl.h"
extern  rtx copy_most_rtx( rtx ,  rtx ); 
#line 1468 "rtl.h"
extern  rtx shallow_copy_rtx( rtx ); 
#line 1469 "rtl.h"
extern int rtx_equal_p( rtx ,  rtx ); 
#line 1472 "rtl.h"
extern  rtvec gen_rtvec_v(int ,  rtx *); 
#line 1473 "rtl.h"
extern  rtx gen_reg_rtx(enum machine_mode ); 
#line 1474 "rtl.h"
extern  rtx gen_rtx_REG_offset( rtx , enum machine_mode , unsigned int , int ); 
#line 1475 "rtl.h"
extern  rtx gen_label_rtx(void ); 
#line 1476 "rtl.h"
extern int subreg_hard_regno( rtx , int ); 
#line 1477 "rtl.h"
extern  rtx gen_lowpart_common(enum machine_mode ,  rtx ); 
#line 1478 "rtl.h"
extern  rtx gen_lowpart(enum machine_mode ,  rtx ); 
#line 1481 "rtl.h"
extern  rtx gen_lowpart_if_possible(enum machine_mode ,  rtx ); 
#line 1484 "rtl.h"
extern  rtx gen_highpart(enum machine_mode ,  rtx ); 
#line 1485 "rtl.h"
extern  rtx gen_highpart_mode(enum machine_mode , enum machine_mode ,  rtx ); 
#line 1486 "rtl.h"
extern  rtx gen_realpart(enum machine_mode ,  rtx ); 
#line 1487 "rtl.h"
extern  rtx gen_imagpart(enum machine_mode ,  rtx ); 
#line 1488 "rtl.h"
extern  rtx operand_subword( rtx , unsigned int , int , enum machine_mode ); 
#line 1491 "rtl.h"
extern  rtx operand_subword_force( rtx , unsigned int , enum machine_mode ); 
#line 1492 "rtl.h"
extern int subreg_lowpart_p( rtx ); 
#line 1494 "rtl.h"
extern unsigned int subreg_lowpart_offset(enum machine_mode , enum machine_mode ); 
#line 1496 "rtl.h"
extern unsigned int subreg_highpart_offset(enum machine_mode , enum machine_mode ); 
#line 1497 "rtl.h"
extern  rtx make_safe_from( rtx ,  rtx ); 
#line 1498 "rtl.h"
extern  rtx convert_memory_address(enum machine_mode ,  rtx ); 
#line 1499 "rtl.h"
extern  rtx get_insns(void ); 
#line 1500 "rtl.h"
extern const char *get_insn_name(int ); 
#line 1501 "rtl.h"
extern  rtx get_last_insn(void ); 
#line 1502 "rtl.h"
extern  rtx get_last_insn_anywhere(void ); 
#line 1503 "rtl.h"
extern  rtx get_first_nonnote_insn(void ); 
#line 1504 "rtl.h"
extern  rtx get_last_nonnote_insn(void ); 
#line 1505 "rtl.h"
extern void start_sequence(void ); 
#line 1506 "rtl.h"
extern void push_to_sequence( rtx ); 
#line 1507 "rtl.h"
extern void end_sequence(void ); 
#line 1508 "rtl.h"
extern void push_to_full_sequence( rtx ,  rtx ); 
#line 1509 "rtl.h"
extern void end_full_sequence( rtx *,  rtx *); 
#line 1511 "rtl.h"
extern  rtx immed_double_const(long , long , enum machine_mode ); 
#line 1514 "rtl.h"
extern  rtx force_const_mem(enum machine_mode ,  rtx ); 
#line 1517 "rtl.h"
extern  rtx get_pool_constant( rtx ); 
#line 1518 "rtl.h"
extern  rtx get_pool_constant_mark( rtx , _Bool *); 
#line 1519 "rtl.h"
extern enum machine_mode get_pool_mode( rtx ); 
#line 1520 "rtl.h"
extern  rtx get_pool_constant_for_function(struct function *,  rtx ); 
#line 1521 "rtl.h"
extern enum machine_mode get_pool_mode_for_function(struct function *,  rtx ); 
#line 1522 "rtl.h"
extern int get_pool_offset( rtx ); 
#line 1523 "rtl.h"
extern  rtx simplify_subtraction( rtx ); 
#line 1526 "rtl.h"
extern  rtx assign_stack_local(enum machine_mode , long , int ); 
#line 1527 "rtl.h"
extern  rtx assign_stack_temp(enum machine_mode , long , int ); 
#line 1529 "rtl.h"
extern  rtx assign_stack_temp_for_type(enum machine_mode , long , int ,  tree ); 
#line 1530 "rtl.h"
extern  rtx assign_temp( tree , int , int , int ); 
#line 1533 "rtl.h"
extern  rtx emit_insn_before( rtx ,  rtx ); 
#line 1534 "rtl.h"
extern  rtx emit_insn_before_noloc( rtx ,  rtx ); 
#line 1535 "rtl.h"
extern  rtx emit_insn_before_setloc( rtx ,  rtx , int ); 
#line 1536 "rtl.h"
extern  rtx emit_jump_insn_before( rtx ,  rtx ); 
#line 1537 "rtl.h"
extern  rtx emit_jump_insn_before_noloc( rtx ,  rtx ); 
#line 1538 "rtl.h"
extern  rtx emit_jump_insn_before_setloc( rtx ,  rtx , int ); 
#line 1539 "rtl.h"
extern  rtx emit_call_insn_before( rtx ,  rtx ); 
#line 1540 "rtl.h"
extern  rtx emit_call_insn_before_noloc( rtx ,  rtx ); 
#line 1541 "rtl.h"
extern  rtx emit_call_insn_before_setloc( rtx ,  rtx , int ); 
#line 1542 "rtl.h"
extern  rtx emit_barrier_before( rtx ); 
#line 1543 "rtl.h"
extern  rtx emit_label_before( rtx ,  rtx ); 
#line 1544 "rtl.h"
extern  rtx emit_note_before(int ,  rtx ); 
#line 1545 "rtl.h"
extern  rtx emit_insn_after( rtx ,  rtx ); 
#line 1546 "rtl.h"
extern  rtx emit_insn_after_noloc( rtx ,  rtx ); 
#line 1547 "rtl.h"
extern  rtx emit_insn_after_setloc( rtx ,  rtx , int ); 
#line 1548 "rtl.h"
extern  rtx emit_jump_insn_after( rtx ,  rtx ); 
#line 1549 "rtl.h"
extern  rtx emit_jump_insn_after_noloc( rtx ,  rtx ); 
#line 1550 "rtl.h"
extern  rtx emit_jump_insn_after_setloc( rtx ,  rtx , int ); 
#line 1551 "rtl.h"
extern  rtx emit_call_insn_after( rtx ,  rtx ); 
#line 1552 "rtl.h"
extern  rtx emit_call_insn_after_noloc( rtx ,  rtx ); 
#line 1553 "rtl.h"
extern  rtx emit_call_insn_after_setloc( rtx ,  rtx , int ); 
#line 1554 "rtl.h"
extern  rtx emit_barrier_after( rtx ); 
#line 1555 "rtl.h"
extern  rtx emit_label_after( rtx ,  rtx ); 
#line 1556 "rtl.h"
extern  rtx emit_note_after(int ,  rtx ); 
#line 1557 "rtl.h"
extern  rtx emit_note_copy_after( rtx ,  rtx ); 
#line 1558 "rtl.h"
extern  rtx emit_insn( rtx ); 
#line 1559 "rtl.h"
extern  rtx emit_jump_insn( rtx ); 
#line 1560 "rtl.h"
extern  rtx emit_call_insn( rtx ); 
#line 1561 "rtl.h"
extern  rtx emit_label( rtx ); 
#line 1562 "rtl.h"
extern  rtx emit_barrier(void ); 
#line 1563 "rtl.h"
extern  rtx emit_note(int ); 
#line 1564 "rtl.h"
extern  rtx emit_note_copy( rtx ); 
#line 1565 "rtl.h"
extern  rtx emit_line_note( location_t ); 
#line 1566 "rtl.h"
extern  rtx make_insn_raw( rtx ); 
#line 1567 "rtl.h"
extern void add_function_usage_to( rtx ,  rtx ); 
#line 1568 "rtl.h"
extern  rtx last_call_insn(void ); 
#line 1569 "rtl.h"
extern  rtx previous_insn( rtx ); 
#line 1570 "rtl.h"
extern  rtx next_insn( rtx ); 
#line 1571 "rtl.h"
extern  rtx prev_nonnote_insn( rtx ); 
#line 1572 "rtl.h"
extern  rtx next_nonnote_insn( rtx ); 
#line 1573 "rtl.h"
extern  rtx prev_real_insn( rtx ); 
#line 1574 "rtl.h"
extern  rtx next_real_insn( rtx ); 
#line 1575 "rtl.h"
extern  rtx prev_active_insn( rtx ); 
#line 1576 "rtl.h"
extern  rtx next_active_insn( rtx ); 
#line 1577 "rtl.h"
extern int active_insn_p( rtx ); 
#line 1578 "rtl.h"
extern  rtx prev_label( rtx ); 
#line 1579 "rtl.h"
extern  rtx next_label( rtx ); 
#line 1580 "rtl.h"
extern  rtx next_cc0_user( rtx ); 
#line 1581 "rtl.h"
extern  rtx prev_cc0_setter( rtx ); 
#line 1584 "rtl.h"
extern  tree choose_inner_scope( tree ,  tree ); 
#line 1585 "rtl.h"
extern int insn_line( rtx ); 
#line 1586 "rtl.h"
extern const char *insn_file( rtx ); 
#line 1587 "rtl.h"
extern int locator_line(int ); 
#line 1588 "rtl.h"
extern const char *locator_file(int ); 
#line 1589 "rtl.h"
extern int prologue_locator,epilogue_locator; 
#line 1592 "rtl.h"
extern enum rtx_code reverse_condition(enum rtx_code ); 
#line 1593 "rtl.h"
extern enum rtx_code reverse_condition_maybe_unordered(enum rtx_code ); 
#line 1594 "rtl.h"
extern enum rtx_code swap_condition(enum rtx_code ); 
#line 1595 "rtl.h"
extern enum rtx_code unsigned_condition(enum rtx_code ); 
#line 1596 "rtl.h"
extern enum rtx_code signed_condition(enum rtx_code ); 
#line 1597 "rtl.h"
extern void mark_jump_label( rtx ,  rtx , int ); 
#line 1598 "rtl.h"
extern void cleanup_barriers(void ); 
#line 1601 "rtl.h"
extern _Bool squeeze_notes( rtx *,  rtx *); 
#line 1602 "rtl.h"
extern  rtx delete_related_insns( rtx ); 
#line 1603 "rtl.h"
extern void delete_jump( rtx ); 
#line 1604 "rtl.h"
extern void delete_barrier( rtx ); 
#line 1605 "rtl.h"
extern  rtx get_label_before( rtx ); 
#line 1606 "rtl.h"
extern  rtx get_label_after( rtx ); 
#line 1607 "rtl.h"
extern  rtx follow_jumps( rtx ); 
#line 1610 "rtl.h"
extern  rtx *find_constant_term_loc( rtx *); 
#line 1613 "rtl.h"
extern  rtx try_split( rtx ,  rtx , int ); 
#line 1614 "rtl.h"
extern int split_branch_probability; 
#line 1617 "rtl.h"
extern  rtx split_insns( rtx ,  rtx ); 
#line 1621 "rtl.h"
extern  rtx simplify_unary_operation(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1623 "rtl.h"
extern  rtx simplify_binary_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1625 "rtl.h"
extern  rtx simplify_ternary_operation(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 1627 "rtl.h"
extern  rtx simplify_relational_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1628 "rtl.h"
extern  rtx simplify_gen_binary(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1630 "rtl.h"
extern  rtx simplify_gen_unary(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1632 "rtl.h"
extern  rtx simplify_gen_ternary(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 1634 "rtl.h"
extern  rtx simplify_gen_relational(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ); 
#line 1636 "rtl.h"
extern  rtx simplify_subreg(enum machine_mode ,  rtx , enum machine_mode , unsigned int ); 
#line 1638 "rtl.h"
extern  rtx simplify_gen_subreg(enum machine_mode ,  rtx , enum machine_mode , unsigned int ); 
#line 1639 "rtl.h"
extern  rtx simplify_replace_rtx( rtx ,  rtx ,  rtx ); 
#line 1640 "rtl.h"
extern  rtx simplify_rtx( rtx ); 
#line 1641 "rtl.h"
extern  rtx avoid_constant_pool_reference( rtx ); 
#line 1644 "rtl.h"
extern  rtx gen_mem_addressof( rtx ,  tree , int ); 
#line 1648 "rtl.h"
extern enum machine_mode choose_hard_reg_mode(unsigned int , unsigned int , _Bool ); 
#line 1651 "rtl.h"
extern  rtx set_unique_reg_note( rtx , enum reg_note ,  rtx ); 
# 1422 "rtl.h" 
# 1668 "rtl.h" 
typedef struct replace_label_data { rtx r1;  rtx r2; _Bool update_label_nuses; }replace_label_data; 
#line 1670 "rtl.h"
extern int rtx_addr_can_trap_p( rtx ); 
#line 1671 "rtl.h"
extern _Bool nonzero_address_p( rtx ); 
#line 1672 "rtl.h"
extern int rtx_unstable_p( rtx ); 
#line 1673 "rtl.h"
extern int rtx_varies_p( rtx , int ); 
#line 1674 "rtl.h"
extern int rtx_addr_varies_p( rtx , int ); 
#line 1675 "rtl.h"
extern long get_integer_term( rtx ); 
#line 1676 "rtl.h"
extern  rtx get_related_value( rtx ); 
#line 1677 "rtl.h"
extern  rtx get_jump_table_offset( rtx ,  rtx *); 
#line 1678 "rtl.h"
extern int global_reg_mentioned_p( rtx ); 
#line 1679 "rtl.h"
extern int reg_mentioned_p( rtx ,  rtx ); 
#line 1680 "rtl.h"
extern int count_occurrences( rtx ,  rtx , int ); 
#line 1681 "rtl.h"
extern int reg_referenced_p( rtx ,  rtx ); 
#line 1682 "rtl.h"
extern int reg_used_between_p( rtx ,  rtx ,  rtx ); 
#line 1683 "rtl.h"
extern int reg_referenced_between_p( rtx ,  rtx ,  rtx ); 
#line 1684 "rtl.h"
extern int reg_set_between_p( rtx ,  rtx ,  rtx ); 
#line 1685 "rtl.h"
extern int regs_set_between_p( rtx ,  rtx ,  rtx ); 
#line 1686 "rtl.h"
extern int commutative_operand_precedence( rtx ); 
#line 1687 "rtl.h"
extern int swap_commutative_operands_p( rtx ,  rtx ); 
#line 1688 "rtl.h"
extern int modified_between_p( rtx ,  rtx ,  rtx ); 
#line 1689 "rtl.h"
extern int no_labels_between_p( rtx ,  rtx ); 
#line 1690 "rtl.h"
extern int no_jumps_between_p( rtx ,  rtx ); 
#line 1691 "rtl.h"
extern int modified_in_p( rtx ,  rtx ); 
#line 1692 "rtl.h"
extern int insn_dependent_p( rtx ,  rtx ); 
#line 1693 "rtl.h"
extern int reg_set_p( rtx ,  rtx ); 
#line 1694 "rtl.h"
extern  rtx single_set_2( rtx ,  rtx ); 
#line 1695 "rtl.h"
extern int multiple_sets( rtx ); 
#line 1696 "rtl.h"
extern int set_noop_p( rtx ); 
#line 1697 "rtl.h"
extern int noop_move_p( rtx ); 
#line 1698 "rtl.h"
extern  rtx find_last_value( rtx ,  rtx *,  rtx , int ); 
#line 1699 "rtl.h"
extern int refers_to_regno_p(unsigned int , unsigned int ,  rtx ,  rtx *); 
#line 1700 "rtl.h"
extern int reg_overlap_mentioned_p( rtx ,  rtx ); 
#line 1701 "rtl.h"
extern  rtx set_of( rtx ,  rtx ); 
#line 1702 "rtl.h"
extern void note_stores( rtx , void (*)( rtx ,  rtx , void *), void *); 
#line 1703 "rtl.h"
extern void note_uses( rtx *, void (*)( rtx *, void *), void *); 
#line 1704 "rtl.h"
extern  rtx reg_set_last( rtx ,  rtx ); 
#line 1705 "rtl.h"
extern int dead_or_set_p( rtx ,  rtx ); 
#line 1706 "rtl.h"
extern int dead_or_set_regno_p( rtx , unsigned int ); 
#line 1707 "rtl.h"
extern  rtx find_reg_note( rtx , enum reg_note ,  rtx ); 
#line 1708 "rtl.h"
extern  rtx find_regno_note( rtx , enum reg_note , unsigned int ); 
#line 1709 "rtl.h"
extern  rtx find_reg_equal_equiv_note( rtx ); 
#line 1710 "rtl.h"
extern int find_reg_fusage( rtx , enum rtx_code ,  rtx ); 
#line 1711 "rtl.h"
extern int find_regno_fusage( rtx , enum rtx_code , unsigned int ); 
#line 1712 "rtl.h"
extern int pure_call_p( rtx ); 
#line 1713 "rtl.h"
extern void remove_note( rtx ,  rtx ); 
#line 1714 "rtl.h"
extern int side_effects_p( rtx ); 
#line 1715 "rtl.h"
extern int volatile_refs_p( rtx ); 
#line 1716 "rtl.h"
extern int volatile_insn_p( rtx ); 
#line 1717 "rtl.h"
extern int may_trap_p( rtx ); 
#line 1718 "rtl.h"
extern int inequality_comparisons_p( rtx ); 
#line 1719 "rtl.h"
extern  rtx replace_rtx( rtx ,  rtx ,  rtx ); 
#line 1720 "rtl.h"
extern  rtx replace_regs( rtx ,  rtx *, unsigned int , int ); 
#line 1721 "rtl.h"
extern int replace_label( rtx *, void *); 
#line 1722 "rtl.h"
extern int rtx_referenced_p( rtx ,  rtx ); 
#line 1723 "rtl.h"
extern _Bool tablejump_p( rtx ,  rtx *,  rtx *); 
#line 1724 "rtl.h"
extern int computed_jump_p( rtx ); 
#line 1725 "rtl.h"
typedef int (*rtx_function)( rtx *, void *); 
#line 1726 "rtl.h"
extern int for_each_rtx( rtx *,  rtx_function , void *); 
#line 1727 "rtl.h"
extern  rtx regno_use_in(unsigned int ,  rtx ); 
#line 1728 "rtl.h"
extern int auto_inc_p( rtx ); 
#line 1729 "rtl.h"
extern int in_expr_list_p( rtx ,  rtx ); 
#line 1730 "rtl.h"
extern void remove_node_from_expr_list( rtx ,  rtx *); 
#line 1731 "rtl.h"
extern int insns_safe_to_move_p( rtx ,  rtx ,  rtx *); 
#line 1732 "rtl.h"
extern int loc_mentioned_in_p( rtx *,  rtx ); 
#line 1733 "rtl.h"
extern  rtx find_first_parameter_load( rtx ,  rtx ); 
#line 1734 "rtl.h"
extern _Bool keep_with_call_p( rtx ); 
#line 1735 "rtl.h"
extern _Bool label_is_jump_target_p( rtx ,  rtx ); 
#line 1739 "rtl.h"
extern  rtx find_use_as_address( rtx ,  rtx , long ); 
#line 1743 "rtl.h"
void free_EXPR_LIST_list( rtx *); 
#line 1744 "rtl.h"
void free_INSN_LIST_list( rtx *); 
#line 1745 "rtl.h"
void free_EXPR_LIST_node( rtx ); 
#line 1746 "rtl.h"
void free_INSN_LIST_node( rtx ); 
#line 1747 "rtl.h"
 rtx alloc_INSN_LIST( rtx ,  rtx ); 
#line 1748 "rtl.h"
 rtx alloc_EXPR_LIST(int ,  rtx ,  rtx ); 
#line 1756 "rtl.h"
extern int max_parallel; 
#line 1759 "rtl.h"
extern void free_reg_info(void ); 
#line 1762 "rtl.h"
extern int asm_noperands( rtx ); 
#line 1764 "rtl.h"
extern const char *decode_asm_operands( rtx ,  rtx *,  rtx **, const char **, enum machine_mode *); 
#line 1766 "rtl.h"
extern enum reg_class reg_preferred_class(int ); 
#line 1767 "rtl.h"
extern enum reg_class reg_alternate_class(int ); 
#line 1769 "rtl.h"
extern  rtx get_first_nonparm_insn(void ); 
#line 1771 "rtl.h"
extern void split_all_insns(int ); 
#line 1772 "rtl.h"
extern void split_all_insns_noflow(void ); 
#line 1775 "rtl.h"
extern  rtx const_int_rtx[64 * 2 + 1]; 
#line 1781 "rtl.h"
extern  rtx const_true_rtx; 
#line 1783 "rtl.h"
extern  rtx const_tiny_rtx[3][((int )MAX_MACHINE_MODE)]; 
# 1806 "rtl.h" 
# 1837 "rtl.h" 
enum global_rtl_index {GR_PC,GR_CC0,GR_STACK_POINTER,GR_FRAME_POINTER,GR_HARD_FRAME_POINTER,GR_ARG_POINTER,GR_VIRTUAL_INCOMING_ARGS,GR_VIRTUAL_STACK_ARGS,GR_VIRTUAL_STACK_DYNAMIC,GR_VIRTUAL_OUTGOING_ARGS,GR_VIRTUAL_CFA,GR_MAX}; 
#line 1840 "rtl.h"
extern  rtx global_rtl[GR_MAX]; 
#line 1854 "rtl.h"
extern  rtx pic_offset_table_rtx; 
#line 1855 "rtl.h"
extern  rtx static_chain_rtx; 
#line 1856 "rtl.h"
extern  rtx static_chain_incoming_rtx; 
#line 1857 "rtl.h"
extern  rtx return_address_pointer_rtx; 
# 1854 "rtl.h" 
# 7 "genrtl.h" 1
extern  rtx gen_rtx_fmt_s(enum rtx_code , enum machine_mode mode, const char *arg0); 
#line 9 "genrtl.h"
extern  rtx gen_rtx_fmt_ee(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1); 
#line 11 "genrtl.h"
extern  rtx gen_rtx_fmt_ue(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1); 
#line 14 "genrtl.h"
extern  rtx gen_rtx_fmt_iss(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1, const char *arg2); 
#line 16 "genrtl.h"
extern  rtx gen_rtx_fmt_is(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1); 
#line 18 "genrtl.h"
extern  rtx gen_rtx_fmt_i(enum rtx_code , enum machine_mode mode, int arg0); 
#line 21 "genrtl.h"
extern  rtx gen_rtx_fmt_isE(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1,  rtvec arg2); 
#line 23 "genrtl.h"
extern  rtx gen_rtx_fmt_iE(enum rtx_code , enum machine_mode mode, int arg0,  rtvec arg1); 
#line 26 "genrtl.h"
extern  rtx gen_rtx_fmt_Ess(enum rtx_code , enum machine_mode mode,  rtvec arg0, const char *arg1, const char *arg2); 
#line 29 "genrtl.h"
extern  rtx gen_rtx_fmt_sEss(enum rtx_code , enum machine_mode mode, const char *arg0,  rtvec arg1, const char *arg2, const char *arg3); 
#line 31 "genrtl.h"
extern  rtx gen_rtx_fmt_eE(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtvec arg1); 
#line 33 "genrtl.h"
extern  rtx gen_rtx_fmt_E(enum rtx_code , enum machine_mode mode,  rtvec arg0); 
#line 35 "genrtl.h"
extern  rtx gen_rtx_fmt_e(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 37 "genrtl.h"
extern  rtx gen_rtx_fmt_ss(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1); 
#line 40 "genrtl.h"
extern  rtx gen_rtx_fmt_sies(enum rtx_code , enum machine_mode mode, const char *arg0, int arg1,  rtx arg2, const char *arg3); 
#line 43 "genrtl.h"
extern  rtx gen_rtx_fmt_sse(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1,  rtx arg2); 
#line 45 "genrtl.h"
extern  rtx gen_rtx_fmt_sE(enum rtx_code , enum machine_mode mode, const char *arg0,  rtvec arg1); 
#line 47 "genrtl.h"
extern  rtx gen_rtx_fmt_ii(enum rtx_code , enum machine_mode mode, int arg0, int arg1); 
#line 52 "genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieiee(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8); 
#line 57 "genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieiee0(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8); 
#line 62 "genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieieee(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8,  rtx arg9); 
#line 64 "genrtl.h"
extern  rtx gen_rtx_fmt_iuu000000(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2); 
#line 68 "genrtl.h"
extern  rtx gen_rtx_fmt_iuuB00is(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4, const char *arg5); 
#line 72 "genrtl.h"
extern  rtx gen_rtx_fmt_ssiEEsi(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1, int arg2,  rtvec arg3,  rtvec arg4, const char *arg5, int arg6); 
#line 74 "genrtl.h"
extern  rtx gen_rtx_fmt_Ei(enum rtx_code , enum machine_mode mode,  rtvec arg0, int arg1); 
#line 77 "genrtl.h"
extern  rtx gen_rtx_fmt_eEee0(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtvec arg1,  rtx arg2,  rtx arg3); 
#line 79 "genrtl.h"
extern  rtx gen_rtx_fmt_eee(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1,  rtx arg2); 
#line 80 "genrtl.h"
extern  rtx gen_rtx_fmt_(enum rtx_code , enum machine_mode mode); 
#line 82 "genrtl.h"
extern  rtx gen_rtx_fmt_w(enum rtx_code , enum machine_mode mode, long arg0); 
#line 83 "genrtl.h"
extern  rtx gen_rtx_fmt_0(enum rtx_code , enum machine_mode mode); 
#line 85 "genrtl.h"
extern  rtx gen_rtx_fmt_i00(enum rtx_code , enum machine_mode mode, int arg0); 
#line 87 "genrtl.h"
extern  rtx gen_rtx_fmt_ei(enum rtx_code , enum machine_mode mode,  rtx arg0, int arg1); 
#line 89 "genrtl.h"
extern  rtx gen_rtx_fmt_e0(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 91 "genrtl.h"
extern  rtx gen_rtx_fmt_u00(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 93 "genrtl.h"
extern  rtx gen_rtx_fmt_s00(enum rtx_code , enum machine_mode mode, const char *arg0); 
#line 96 "genrtl.h"
extern  rtx gen_rtx_fmt_eit(enum rtx_code , enum machine_mode mode,  rtx arg0, int arg1, union tree_node *arg2); 
#line 99 "genrtl.h"
extern  rtx gen_rtx_fmt_eeeee(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1,  rtx arg2,  rtx arg3,  rtx arg4); 
#line 101 "genrtl.h"
extern  rtx gen_rtx_fmt_Ee(enum rtx_code , enum machine_mode mode,  rtvec arg0,  rtx arg1); 
#line 108 "genrtl.h"
extern  rtx gen_rtx_fmt_uuEiiiiiibbii(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1,  rtvec arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, struct bitmap_head_def *arg9, struct bitmap_head_def *arg10, int arg11, int arg12); 
#line 114 "genrtl.h"
extern  rtx gen_rtx_fmt_iiiiiiiitt(enum rtx_code , enum machine_mode mode, int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, union tree_node *arg8, union tree_node *arg9); 
#line 117 "genrtl.h"
extern  rtx gen_rtx_fmt_eti(enum rtx_code , enum machine_mode mode,  rtx arg0, union tree_node *arg1, int arg2); 
#line 120 "genrtl.h"
extern  rtx gen_rtx_fmt_bi(enum rtx_code , enum machine_mode mode, struct bitmap_head_def *arg0, int arg1); 
#line 123 "genrtl.h"
extern  rtx gen_rtx_fmt_uuuu(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1,  rtx arg2,  rtx arg3); 
#line 1870 "rtl.h"
extern  rtx gen_rtx_CONST_INT(enum machine_mode , long ); 
#line 1871 "rtl.h"
extern  rtx gen_rtx_CONST_VECTOR(enum machine_mode ,  rtvec ); 
#line 1872 "rtl.h"
extern  rtx gen_raw_REG(enum machine_mode , int ); 
#line 1873 "rtl.h"
extern  rtx gen_rtx_REG(enum machine_mode , unsigned ); 
#line 1874 "rtl.h"
extern  rtx gen_rtx_SUBREG(enum machine_mode ,  rtx , int ); 
#line 1875 "rtl.h"
extern  rtx gen_rtx_MEM(enum machine_mode ,  rtx ); 
#line 1877 "rtl.h"
extern  rtx gen_lowpart_SUBREG(enum machine_mode ,  rtx ); 
# 1863 "rtl.h" 2
# 1947 "rtl.h" 
extern  rtx output_constant_def( tree , int ); 
#line 1948 "rtl.h"
extern  rtx lookup_constant_def( tree ); 
#line 1951 "rtl.h"
extern void notice_rtl_inlining_of_deferred_constant(void ); 
#line 1955 "rtl.h"
extern int flow2_completed; 
#line 1960 "rtl.h"
extern int reload_completed; 
#line 1963 "rtl.h"
extern int epilogue_completed; 
#line 1968 "rtl.h"
extern int reload_in_progress; 
#line 1976 "rtl.h"
extern int cse_not_expected; 
#line 1980 "rtl.h"
extern int no_new_pseudos; 
#line 1986 "rtl.h"
extern int rtx_to_tree_code(enum rtx_code ); 
#line 1989 "rtl.h"
struct cse_basic_block_data ; 
#line 2000 "rtl.h"
extern int rtx_cost( rtx , enum rtx_code ); 
#line 2001 "rtl.h"
extern int address_cost( rtx , enum machine_mode ); 
#line 2002 "rtl.h"
extern int delete_trivially_dead_insns( rtx , int ); 
#line 2004 "rtl.h"
extern int cse_main( rtx , int , int ,  FILE *); 
#line 2007 "rtl.h"
extern void cse_end_of_basic_block( rtx , struct cse_basic_block_data *, int , int , int ); 
#line 2008 "rtl.h"
extern void cse_condition_code_reg(void ); 
#line 2011 "rtl.h"
extern int comparison_dominates_p(enum rtx_code , enum rtx_code ); 
#line 2012 "rtl.h"
extern int condjump_p( rtx ); 
#line 2013 "rtl.h"
extern int any_condjump_p( rtx ); 
#line 2014 "rtl.h"
extern int any_uncondjump_p( rtx ); 
#line 2015 "rtl.h"
extern int safe_to_remove_jump_p( rtx ); 
#line 2016 "rtl.h"
extern  rtx pc_set( rtx ); 
#line 2017 "rtl.h"
extern  rtx condjump_label( rtx ); 
#line 2018 "rtl.h"
extern int simplejump_p( rtx ); 
#line 2019 "rtl.h"
extern int returnjump_p( rtx ); 
#line 2020 "rtl.h"
extern int onlyjump_p( rtx ); 
#line 2021 "rtl.h"
extern int only_sets_cc0_p( rtx ); 
#line 2022 "rtl.h"
extern int sets_cc0_p( rtx ); 
#line 2023 "rtl.h"
extern int invert_jump_1( rtx ,  rtx ); 
#line 2024 "rtl.h"
extern int invert_jump( rtx ,  rtx , int ); 
#line 2025 "rtl.h"
extern int rtx_renumbered_equal_p( rtx ,  rtx ); 
#line 2026 "rtl.h"
extern int true_regnum( rtx ); 
#line 2027 "rtl.h"
extern unsigned int reg_or_subregno( rtx ); 
#line 2028 "rtl.h"
extern int redirect_jump_1( rtx ,  rtx ); 
#line 2029 "rtl.h"
extern int redirect_jump( rtx ,  rtx , int ); 
#line 2030 "rtl.h"
extern void rebuild_jump_labels( rtx ); 
#line 2031 "rtl.h"
extern enum rtx_code reversed_comparison_code( rtx ,  rtx ); 
#line 2033 "rtl.h"
extern enum rtx_code reversed_comparison_code_parts(enum rtx_code ,  rtx ,  rtx ,  rtx ); 
#line 2034 "rtl.h"
extern void delete_for_peephole( rtx ,  rtx ); 
#line 2035 "rtl.h"
extern int condjump_in_parallel_p( rtx ); 
#line 2036 "rtl.h"
extern void never_reached_warning( rtx ,  rtx ); 
#line 2037 "rtl.h"
extern void purge_line_number_notes( rtx ); 
#line 2038 "rtl.h"
extern void copy_loop_headers( rtx ); 
#line 2041 "rtl.h"
extern int max_reg_num(void ); 
#line 2042 "rtl.h"
extern int max_label_num(void ); 
#line 2043 "rtl.h"
extern int get_first_label_num(void ); 
#line 2044 "rtl.h"
extern void delete_insns_since( rtx ); 
#line 2045 "rtl.h"
extern void mark_reg_pointer( rtx , int ); 
#line 2046 "rtl.h"
extern void mark_user_reg( rtx ); 
#line 2047 "rtl.h"
extern void reset_used_flags( rtx ); 
#line 2048 "rtl.h"
extern void set_used_flags( rtx ); 
#line 2049 "rtl.h"
extern void reorder_insns( rtx ,  rtx ,  rtx ); 
#line 2050 "rtl.h"
extern void reorder_insns_nobb( rtx ,  rtx ,  rtx ); 
#line 2051 "rtl.h"
extern int get_max_uid(void ); 
#line 2052 "rtl.h"
extern int in_sequence_p(void ); 
#line 2053 "rtl.h"
extern void force_next_line_note(void ); 
#line 2054 "rtl.h"
extern void init_emit(void ); 
#line 2055 "rtl.h"
extern void init_emit_once(int ); 
#line 2056 "rtl.h"
extern void push_topmost_sequence(void ); 
#line 2057 "rtl.h"
extern void pop_topmost_sequence(void ); 
#line 2058 "rtl.h"
extern int subreg_realpart_p( rtx ); 
#line 2059 "rtl.h"
extern void reverse_comparison( rtx ); 
#line 2060 "rtl.h"
extern void set_new_first_and_last_insn( rtx ,  rtx ); 
#line 2061 "rtl.h"
extern void set_new_last_label_num(int ); 
#line 2062 "rtl.h"
extern void unshare_all_rtl_again( rtx ); 
#line 2063 "rtl.h"
extern void unshare_all_rtl_in_chain( rtx ); 
#line 2064 "rtl.h"
extern void verify_rtl_sharing(void ); 
#line 2065 "rtl.h"
extern void set_first_insn( rtx ); 
#line 2066 "rtl.h"
extern void set_last_insn( rtx ); 
#line 2067 "rtl.h"
extern void link_cc0_insns( rtx ); 
#line 2068 "rtl.h"
extern void add_insn( rtx ); 
#line 2069 "rtl.h"
extern void add_insn_before( rtx ,  rtx ); 
#line 2070 "rtl.h"
extern void add_insn_after( rtx ,  rtx ); 
#line 2071 "rtl.h"
extern void remove_insn( rtx ); 
#line 2072 "rtl.h"
extern void reorder_insns_with_line_notes( rtx ,  rtx ,  rtx ); 
#line 2073 "rtl.h"
extern void emit_insn_after_with_line_notes( rtx ,  rtx ,  rtx ); 
#line 2074 "rtl.h"
extern enum rtx_code classify_insn( rtx ); 
#line 2075 "rtl.h"
extern  rtx emit( rtx ); 
#line 2079 "rtl.h"
int force_line_numbers(void ); 
#line 2080 "rtl.h"
void restore_line_number_status(int old_value); 
#line 2081 "rtl.h"
extern void renumber_insns( FILE *); 
#line 2082 "rtl.h"
extern void remove_unnecessary_notes(void ); 
#line 2083 "rtl.h"
extern  rtx delete_insn( rtx ); 
#line 2084 "rtl.h"
extern void delete_insn_chain( rtx ,  rtx ); 
#line 2085 "rtl.h"
extern  rtx unlink_insn_chain( rtx ,  rtx ); 
#line 2086 "rtl.h"
extern  rtx delete_insn_and_edges( rtx ); 
#line 2087 "rtl.h"
extern void delete_insn_chain_and_edges( rtx ,  rtx ); 
#line 2090 "rtl.h"
extern int combine_instructions( rtx , unsigned int ); 
#line 2091 "rtl.h"
extern unsigned int extended_count( rtx , enum machine_mode , int ); 
#line 2092 "rtl.h"
extern  rtx remove_death(unsigned int ,  rtx ); 
#line 2094 "rtl.h"
extern void dump_combine_stats( FILE *); 
#line 2095 "rtl.h"
extern void dump_combine_total_stats( FILE *); 
#line 2098 "rtl.h"
extern void web_main(void ); 
#line 2102 "rtl.h"
extern void schedule_insns( FILE *); 
#line 2103 "rtl.h"
extern void schedule_ebbs( FILE *); 
#line 2105 "rtl.h"
extern void fix_sched_param(const char *, const char *); 
#line 2108 "rtl.h"
extern const char *print_rtx_head; 
#line 2109 "rtl.h"
extern void debug_rtx( rtx ); 
#line 2110 "rtl.h"
extern void debug_rtx_list( rtx , int ); 
#line 2111 "rtl.h"
extern void debug_rtx_range( rtx ,  rtx ); 
#line 2112 "rtl.h"
extern  rtx debug_rtx_find( rtx , int ); 
#line 2114 "rtl.h"
extern void print_mem_expr( FILE *,  tree ); 
#line 2115 "rtl.h"
extern void print_rtl( FILE *,  rtx ); 
#line 2116 "rtl.h"
extern void print_simple_rtl( FILE *,  rtx ); 
#line 2117 "rtl.h"
extern int print_rtl_single( FILE *,  rtx ); 
#line 2118 "rtl.h"
extern void print_inline_rtx( FILE *,  rtx , int ); 
#line 2122 "rtl.h"
extern void init_loop(void ); 
#line 2123 "rtl.h"
extern  rtx libcall_other_reg( rtx ,  rtx ); 
#line 2125 "rtl.h"
extern void loop_optimize( rtx ,  FILE *, int ); 
#line 2127 "rtl.h"
extern void branch_target_load_optimize( rtx , _Bool ); 
#line 2128 "rtl.h"
extern void record_excess_regs( rtx ,  rtx ,  rtx *); 
#line 2131 "rtl.h"
extern void reposition_prologue_and_epilogue_notes( rtx ); 
#line 2132 "rtl.h"
extern void thread_prologue_and_epilogue_insns( rtx ); 
#line 2133 "rtl.h"
extern int prologue_epilogue_contains( rtx ); 
#line 2134 "rtl.h"
extern int sibcall_epilogue_contains( rtx ); 
#line 2135 "rtl.h"
extern void preserve_rtl_expr_result( rtx ); 
#line 2136 "rtl.h"
extern void mark_temp_addr_taken( rtx ); 
#line 2137 "rtl.h"
extern void update_temp_slot_address( rtx ,  rtx ); 
#line 2138 "rtl.h"
extern void purge_addressof( rtx ); 
#line 2139 "rtl.h"
extern void purge_hard_subreg_sets( rtx ); 
#line 2142 "rtl.h"
extern void set_file_and_line_for_stmt( location_t ); 
#line 2143 "rtl.h"
extern void expand_null_return(void ); 
#line 2144 "rtl.h"
extern void expand_naked_return(void ); 
#line 2145 "rtl.h"
extern void emit_jump( rtx ); 
#line 2146 "rtl.h"
extern int preserve_subexpressions_p(void ); 
#line 2150 "rtl.h"
extern  rtx move_by_pieces( rtx ,  rtx , unsigned long , unsigned int , int ); 
#line 2153 "rtl.h"
extern void recompute_reg_usage( rtx , int ); 
#line 2154 "rtl.h"
extern int initialize_uninitialized_subregs(void ); 
#line 2155 "rtl.h"
extern void delete_dead_jumptables(void ); 
#line 2157 "rtl.h"
extern void print_rtl_with_bb( FILE *,  rtx ); 
#line 2158 "rtl.h"
extern void dump_flow_info( FILE *); 
#line 2162 "rtl.h"
extern void init_expmed(void ); 
#line 2163 "rtl.h"
extern void expand_inc( rtx ,  rtx ); 
#line 2164 "rtl.h"
extern void expand_dec( rtx ,  rtx ); 
#line 2166 "rtl.h"
extern  rtx expand_mult_highpart(enum machine_mode ,  rtx , unsigned long ,  rtx , int , int ); 
#line 2169 "rtl.h"
extern _Bool can_copy_p(enum machine_mode ); 
#line 2170 "rtl.h"
extern  rtx fis_get_condition( rtx ); 
#line 2172 "rtl.h"
extern int gcse_main( rtx ,  FILE *); 
#line 2173 "rtl.h"
extern int bypass_jumps( FILE *); 
#line 2177 "rtl.h"
extern void mark_elimination(int , int ); 
#line 2179 "rtl.h"
extern int global_alloc( FILE *); 
#line 2180 "rtl.h"
extern void dump_global_regs( FILE *); 
#line 2186 "rtl.h"
extern void build_insn_chain( rtx ); 
#line 2189 "rtl.h"
extern int reg_classes_intersect_p(enum reg_class , enum reg_class ); 
#line 2190 "rtl.h"
extern int reg_class_subset_p(enum reg_class , enum reg_class ); 
#line 2191 "rtl.h"
extern void globalize_reg(int ); 
#line 2192 "rtl.h"
extern void init_reg_modes_once(void ); 
#line 2193 "rtl.h"
extern void init_regs(void ); 
#line 2194 "rtl.h"
extern void init_fake_stack_mems(void ); 
#line 2195 "rtl.h"
extern void init_reg_sets(void ); 
#line 2196 "rtl.h"
extern void regset_release_memory(void ); 
#line 2197 "rtl.h"
extern void regclass_init(void ); 
#line 2198 "rtl.h"
extern void regclass( rtx , int ,  FILE *); 
#line 2199 "rtl.h"
extern void reg_scan( rtx , unsigned int , int ); 
#line 2200 "rtl.h"
extern void reg_scan_update( rtx ,  rtx , unsigned int ); 
#line 2201 "rtl.h"
extern void fix_register(const char *, int , int ); 
#line 2207 "rtl.h"
extern _Bool invalid_mode_change_p(unsigned int , enum reg_class , enum machine_mode ); 
#line 2209 "rtl.h"
extern int delete_null_pointer_checks( rtx ); 
#line 2213 "rtl.h"
extern void regmove_optimize( rtx , int ,  FILE *); 
#line 2215 "rtl.h"
extern void combine_stack_adjustments(void ); 
#line 2219 "rtl.h"
extern void dbr_schedule( rtx ,  FILE *); 
#line 2224 "rtl.h"
extern void dump_local_alloc( FILE *); 
#line 2226 "rtl.h"
extern int local_alloc(void ); 
#line 2227 "rtl.h"
extern int function_invariant_p( rtx ); 
#line 2230 "rtl.h"
extern void init_branch_prob(void ); 
#line 2231 "rtl.h"
extern void branch_prob(void ); 
#line 2232 "rtl.h"
extern void end_branch_prob(void ); 
#line 2236 "rtl.h"
extern _Bool reg_to_stack( rtx ,  FILE *); 
#line 2251 "rtl.h"
enum libcall_type {LCT_NORMAL=0,LCT_CONST=1,LCT_PURE=2,LCT_CONST_MAKE_BLOCK=3,LCT_PURE_MAKE_BLOCK=4,LCT_NORETURN=5,LCT_THROW=6,LCT_ALWAYS_RETURN=7,LCT_RETURNS_TWICE=8}; 
#line 2254 "rtl.h"
extern void emit_library_call( rtx , enum libcall_type , enum machine_mode , int , ...); 
#line 2256 "rtl.h"
extern  rtx emit_library_call_value( rtx ,  rtx , enum libcall_type , enum machine_mode , int , ...); 
#line 2259 "rtl.h"
extern int set_dominates_use(int , int , int ,  rtx ,  rtx ); 
#line 2262 "rtl.h"
extern int in_data_section(void ); 
#line 2263 "rtl.h"
extern void init_varasm_once(void ); 
#line 2266 "rtl.h"
extern void init_rtl(void ); 
#line 2267 "rtl.h"
extern void traverse_md_constants(int (*)(void **, void *), void *); 
#line 2268 "rtl.h"
struct md_constant {char *name,*value; }; 
#line 2271 "rtl.h"
extern int read_skip_spaces( FILE *); 
#line 2272 "rtl.h"
extern  rtx read_rtx( FILE *); 
#line 2275 "rtl.h"
extern const char *read_rtx_filename; 
#line 2276 "rtl.h"
extern int read_rtx_lineno; 
#line 2285 "rtl.h"
extern void fancy_abort(const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 2289 "rtl.h"
extern void clear_reg_alias_info( rtx ); 
#line 2290 "rtl.h"
extern  rtx canon_rtx( rtx ); 
#line 2291 "rtl.h"
extern int true_dependence( rtx , enum machine_mode ,  rtx , int (*)( rtx , int )); 
#line 2292 "rtl.h"
extern  rtx get_addr( rtx ); 
#line 2294 "rtl.h"
extern int canon_true_dependence( rtx , enum machine_mode ,  rtx ,  rtx , int (*)( rtx , int )); 
#line 2295 "rtl.h"
extern int read_dependence( rtx ,  rtx ); 
#line 2296 "rtl.h"
extern int anti_dependence( rtx ,  rtx ); 
#line 2297 "rtl.h"
extern int output_dependence( rtx ,  rtx ); 
#line 2298 "rtl.h"
extern int unchanging_anti_dependence( rtx ,  rtx ); 
#line 2299 "rtl.h"
extern void mark_constant_function(void ); 
#line 2300 "rtl.h"
extern void init_alias_once(void ); 
#line 2301 "rtl.h"
extern void init_alias_analysis(void ); 
#line 2302 "rtl.h"
extern void end_alias_analysis(void ); 
#line 2303 "rtl.h"
extern  rtx addr_side_effect_eval( rtx , int , int ); 
#line 2304 "rtl.h"
extern _Bool memory_modified_in_insn_p( rtx ,  rtx ); 
#line 2305 "rtl.h"
extern  rtx find_base_term( rtx ); 
#line 2312 "rtl.h"
typedef enum {sibcall_use_normal=1,sibcall_use_tail_recursion,sibcall_use_sibcall}sibcall_use_t; 
#line 2314 "rtl.h"
extern void optimize_sibling_and_tail_recursive_calls(void ); 
#line 2315 "rtl.h"
extern void replace_call_placeholder( rtx ,  sibcall_use_t ); 
#line 2318 "rtl.h"
extern int stack_regs_mentioned( rtx insn); 
#line 2322 "rtl.h"
extern  rtx stack_limit_rtx; 
#line 2325 "rtl.h"
extern void regrename_optimize(void ); 
#line 2326 "rtl.h"
extern void copyprop_hardreg_forward(void ); 
#line 2329 "rtl.h"
extern void if_convert(int ); 
#line 2332 "rtl.h"
extern void invert_br_probabilities( rtx ); 
#line 2333 "rtl.h"
extern _Bool expensive_function_p(int ); 
#line 2335 "rtl.h"
extern void tracer(void ); 
# 2000 "rtl.h" 
# 94 "reload.c" 2
# 1 "tm_p.h" 1
# 1 "config/i386/i386-protos.h" 1
# 23 "config/i386/i386-protos.h" 
extern void override_options(void ); 
#line 24 "config/i386/i386-protos.h"
extern void optimization_options(int , int ); 
#line 26 "config/i386/i386-protos.h"
extern int ix86_can_use_return_insn_p(void ); 
#line 27 "config/i386/i386-protos.h"
extern int ix86_frame_pointer_required(void ); 
#line 28 "config/i386/i386-protos.h"
extern void ix86_setup_frame_addresses(void ); 
#line 30 "config/i386/i386-protos.h"
extern void ix86_file_end(void ); 
#line 31 "config/i386/i386-protos.h"
extern long ix86_initial_elimination_offset(int , int ); 
#line 32 "config/i386/i386-protos.h"
extern void ix86_expand_prologue(void ); 
#line 33 "config/i386/i386-protos.h"
extern void ix86_expand_epilogue(int ); 
#line 35 "config/i386/i386-protos.h"
extern void ix86_output_addr_vec_elt( FILE *, int ); 
#line 36 "config/i386/i386-protos.h"
extern void ix86_output_addr_diff_elt( FILE *, int , int ); 
#line 39 "config/i386/i386-protos.h"
extern int ix86_aligned_p( rtx ); 
#line 41 "config/i386/i386-protos.h"
extern int standard_80387_constant_p( rtx ); 
#line 42 "config/i386/i386-protos.h"
extern const char *standard_80387_constant_opcode( rtx ); 
#line 43 "config/i386/i386-protos.h"
extern  rtx standard_80387_constant_rtx(int ); 
#line 44 "config/i386/i386-protos.h"
extern int standard_sse_constant_p( rtx ); 
#line 45 "config/i386/i386-protos.h"
extern int symbolic_reference_mentioned_p( rtx ); 
#line 46 "config/i386/i386-protos.h"
extern _Bool extended_reg_mentioned_p( rtx ); 
#line 47 "config/i386/i386-protos.h"
extern _Bool x86_extended_QIreg_mentioned_p( rtx ); 
#line 48 "config/i386/i386-protos.h"
extern _Bool x86_extended_reg_mentioned_p( rtx ); 
#line 50 "config/i386/i386-protos.h"
extern int any_fp_register_operand( rtx , enum machine_mode ); 
#line 51 "config/i386/i386-protos.h"
extern int register_and_not_any_fp_reg_operand( rtx , enum machine_mode ); 
#line 53 "config/i386/i386-protos.h"
extern int fp_register_operand( rtx , enum machine_mode ); 
#line 54 "config/i386/i386-protos.h"
extern int register_and_not_fp_reg_operand( rtx , enum machine_mode ); 
#line 56 "config/i386/i386-protos.h"
extern int x86_64_general_operand( rtx , enum machine_mode ); 
#line 57 "config/i386/i386-protos.h"
extern int x86_64_szext_general_operand( rtx , enum machine_mode ); 
#line 58 "config/i386/i386-protos.h"
extern int x86_64_nonmemory_operand( rtx , enum machine_mode ); 
#line 59 "config/i386/i386-protos.h"
extern int x86_64_szext_nonmemory_operand( rtx , enum machine_mode ); 
#line 60 "config/i386/i386-protos.h"
extern int x86_64_immediate_operand( rtx , enum machine_mode ); 
#line 61 "config/i386/i386-protos.h"
extern int x86_64_zext_immediate_operand( rtx , enum machine_mode ); 
#line 62 "config/i386/i386-protos.h"
extern int symbolic_operand( rtx , enum machine_mode ); 
#line 63 "config/i386/i386-protos.h"
extern int tls_symbolic_operand( rtx , enum machine_mode ); 
#line 64 "config/i386/i386-protos.h"
extern int global_dynamic_symbolic_operand( rtx , enum machine_mode ); 
#line 65 "config/i386/i386-protos.h"
extern int local_dynamic_symbolic_operand( rtx , enum machine_mode ); 
#line 66 "config/i386/i386-protos.h"
extern int initial_exec_symbolic_operand( rtx , enum machine_mode ); 
#line 67 "config/i386/i386-protos.h"
extern int local_exec_symbolic_operand( rtx , enum machine_mode ); 
#line 68 "config/i386/i386-protos.h"
extern int pic_symbolic_operand( rtx , enum machine_mode ); 
#line 69 "config/i386/i386-protos.h"
extern int call_insn_operand( rtx , enum machine_mode ); 
#line 70 "config/i386/i386-protos.h"
extern int sibcall_insn_operand( rtx , enum machine_mode ); 
#line 71 "config/i386/i386-protos.h"
extern int constant_call_address_operand( rtx , enum machine_mode ); 
#line 72 "config/i386/i386-protos.h"
extern int const0_operand( rtx , enum machine_mode ); 
#line 73 "config/i386/i386-protos.h"
extern int const1_operand( rtx , enum machine_mode ); 
#line 74 "config/i386/i386-protos.h"
extern int const248_operand( rtx , enum machine_mode ); 
#line 75 "config/i386/i386-protos.h"
extern int incdec_operand( rtx , enum machine_mode ); 
#line 76 "config/i386/i386-protos.h"
extern int reg_no_sp_operand( rtx , enum machine_mode ); 
#line 77 "config/i386/i386-protos.h"
extern int mmx_reg_operand( rtx , enum machine_mode ); 
#line 78 "config/i386/i386-protos.h"
extern int general_no_elim_operand( rtx , enum machine_mode ); 
#line 79 "config/i386/i386-protos.h"
extern int nonmemory_no_elim_operand( rtx , enum machine_mode ); 
#line 80 "config/i386/i386-protos.h"
extern int q_regs_operand( rtx , enum machine_mode ); 
#line 81 "config/i386/i386-protos.h"
extern int non_q_regs_operand( rtx , enum machine_mode ); 
#line 82 "config/i386/i386-protos.h"
extern int sse_comparison_operator( rtx , enum machine_mode ); 
#line 83 "config/i386/i386-protos.h"
extern int fcmov_comparison_operator( rtx , enum machine_mode ); 
#line 84 "config/i386/i386-protos.h"
extern int cmp_fp_expander_operand( rtx , enum machine_mode ); 
#line 85 "config/i386/i386-protos.h"
extern int ix86_comparison_operator( rtx , enum machine_mode ); 
#line 86 "config/i386/i386-protos.h"
extern int ext_register_operand( rtx , enum machine_mode ); 
#line 87 "config/i386/i386-protos.h"
extern int binary_fp_operator( rtx , enum machine_mode ); 
#line 88 "config/i386/i386-protos.h"
extern int mult_operator( rtx , enum machine_mode ); 
#line 89 "config/i386/i386-protos.h"
extern int div_operator( rtx , enum machine_mode ); 
#line 90 "config/i386/i386-protos.h"
extern int arith_or_logical_operator( rtx , enum machine_mode ); 
#line 91 "config/i386/i386-protos.h"
extern int promotable_binary_operator( rtx , enum machine_mode ); 
#line 92 "config/i386/i386-protos.h"
extern int memory_displacement_operand( rtx , enum machine_mode ); 
#line 93 "config/i386/i386-protos.h"
extern int cmpsi_operand( rtx , enum machine_mode ); 
#line 94 "config/i386/i386-protos.h"
extern int long_memory_operand( rtx , enum machine_mode ); 
#line 95 "config/i386/i386-protos.h"
extern int aligned_operand( rtx , enum machine_mode ); 
#line 96 "config/i386/i386-protos.h"
extern enum machine_mode ix86_cc_mode(enum rtx_code ,  rtx ,  rtx ); 
#line 98 "config/i386/i386-protos.h"
extern int ix86_expand_movstr( rtx ,  rtx ,  rtx ,  rtx ); 
#line 99 "config/i386/i386-protos.h"
extern int ix86_expand_clrstr( rtx ,  rtx ,  rtx ); 
#line 100 "config/i386/i386-protos.h"
extern int ix86_expand_strlen( rtx ,  rtx ,  rtx ,  rtx ); 
#line 102 "config/i386/i386-protos.h"
extern _Bool legitimate_constant_p( rtx ); 
#line 103 "config/i386/i386-protos.h"
extern _Bool constant_address_p( rtx ); 
#line 104 "config/i386/i386-protos.h"
extern _Bool legitimate_pic_operand_p( rtx ); 
#line 105 "config/i386/i386-protos.h"
extern int legitimate_pic_address_disp_p( rtx ); 
#line 106 "config/i386/i386-protos.h"
extern int legitimate_address_p(enum machine_mode ,  rtx , int ); 
#line 107 "config/i386/i386-protos.h"
extern  rtx legitimize_pic_address( rtx ,  rtx ); 
#line 108 "config/i386/i386-protos.h"
extern  rtx legitimize_address( rtx ,  rtx , enum machine_mode ); 
#line 110 "config/i386/i386-protos.h"
extern void print_reg( rtx , int ,  FILE *); 
#line 111 "config/i386/i386-protos.h"
extern void print_operand( FILE *,  rtx , int ); 
#line 112 "config/i386/i386-protos.h"
extern void print_operand_address( FILE *,  rtx ); 
#line 113 "config/i386/i386-protos.h"
extern _Bool output_addr_const_extra( FILE *,  rtx ); 
#line 115 "config/i386/i386-protos.h"
extern void split_di( rtx ([]), int ,  rtx ([]),  rtx ([])); 
#line 116 "config/i386/i386-protos.h"
extern void split_ti( rtx ([]), int ,  rtx ([]),  rtx ([])); 
#line 118 "config/i386/i386-protos.h"
extern const char *output_set_got( rtx ); 
#line 119 "config/i386/i386-protos.h"
extern const char *output_387_binary_op( rtx ,  rtx *); 
#line 120 "config/i386/i386-protos.h"
extern const char *output_fix_trunc( rtx ,  rtx *); 
#line 121 "config/i386/i386-protos.h"
extern const char *output_fp_compare( rtx ,  rtx *, int , int ); 
#line 123 "config/i386/i386-protos.h"
extern void i386_dwarf_output_addr_const( FILE *,  rtx ); 
#line 124 "config/i386/i386-protos.h"
extern void i386_output_dwarf_dtprel( FILE *, int ,  rtx ); 
#line 126 "config/i386/i386-protos.h"
extern void ix86_expand_clear( rtx ); 
#line 127 "config/i386/i386-protos.h"
extern void ix86_expand_move(enum machine_mode ,  rtx ([])); 
#line 128 "config/i386/i386-protos.h"
extern void ix86_expand_vector_move(enum machine_mode ,  rtx ([])); 
#line 130 "config/i386/i386-protos.h"
extern void ix86_expand_binary_operator(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 131 "config/i386/i386-protos.h"
extern int ix86_binary_operator_ok(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 133 "config/i386/i386-protos.h"
extern void ix86_expand_unary_operator(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 134 "config/i386/i386-protos.h"
extern int ix86_unary_operator_ok(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 135 "config/i386/i386-protos.h"
extern int ix86_match_ccmode( rtx , enum machine_mode ); 
#line 136 "config/i386/i386-protos.h"
extern  rtx ix86_expand_compare(enum rtx_code ,  rtx *,  rtx *); 
#line 137 "config/i386/i386-protos.h"
extern int ix86_use_fcomi_compare(enum rtx_code ); 
#line 138 "config/i386/i386-protos.h"
extern void ix86_expand_branch(enum rtx_code ,  rtx ); 
#line 139 "config/i386/i386-protos.h"
extern int ix86_expand_setcc(enum rtx_code ,  rtx ); 
#line 140 "config/i386/i386-protos.h"
extern int ix86_expand_int_movcc( rtx ([])); 
#line 141 "config/i386/i386-protos.h"
extern int ix86_expand_fp_movcc( rtx ([])); 
#line 142 "config/i386/i386-protos.h"
extern int ix86_expand_int_addcc( rtx ([])); 
#line 143 "config/i386/i386-protos.h"
extern void ix86_expand_call( rtx ,  rtx ,  rtx ,  rtx ,  rtx , int ); 
#line 144 "config/i386/i386-protos.h"
extern void x86_initialize_trampoline( rtx ,  rtx ,  rtx ); 
#line 145 "config/i386/i386-protos.h"
extern  rtx ix86_zero_extend_to_Pmode( rtx ); 
#line 146 "config/i386/i386-protos.h"
extern void ix86_split_long_move( rtx ([])); 
#line 147 "config/i386/i386-protos.h"
extern void ix86_split_ashldi( rtx *,  rtx ); 
#line 148 "config/i386/i386-protos.h"
extern void ix86_split_ashrdi( rtx *,  rtx ); 
#line 149 "config/i386/i386-protos.h"
extern void ix86_split_lshrdi( rtx *,  rtx ); 
#line 150 "config/i386/i386-protos.h"
extern  rtx ix86_find_base_term( rtx ); 
#line 151 "config/i386/i386-protos.h"
extern int ix86_check_movabs( rtx , int ); 
#line 153 "config/i386/i386-protos.h"
extern  rtx assign_386_stack_local(enum machine_mode , int ); 
#line 154 "config/i386/i386-protos.h"
extern int ix86_attr_length_immediate_default( rtx , int ); 
#line 155 "config/i386/i386-protos.h"
extern int ix86_attr_length_address_default( rtx ); 
#line 157 "config/i386/i386-protos.h"
extern enum machine_mode ix86_fp_compare_mode(enum rtx_code ); 
#line 159 "config/i386/i386-protos.h"
extern int x86_64_sign_extended_value( rtx ); 
#line 160 "config/i386/i386-protos.h"
extern int x86_64_zero_extended_value( rtx ); 
#line 161 "config/i386/i386-protos.h"
extern  rtx ix86_libcall_value(enum machine_mode ); 
#line 162 "config/i386/i386-protos.h"
extern _Bool ix86_function_value_regno_p(int ); 
#line 163 "config/i386/i386-protos.h"
extern _Bool ix86_function_arg_regno_p(int ); 
#line 164 "config/i386/i386-protos.h"
extern int ix86_function_arg_boundary(enum machine_mode ,  tree ); 
#line 165 "config/i386/i386-protos.h"
extern int ix86_return_in_memory( tree ); 
#line 166 "config/i386/i386-protos.h"
extern void ix86_va_start( tree ,  rtx ); 
#line 167 "config/i386/i386-protos.h"
extern  rtx ix86_va_arg( tree ,  tree ); 
#line 169 "config/i386/i386-protos.h"
extern void ix86_setup_incoming_varargs( CUMULATIVE_ARGS *, enum machine_mode ,  tree , int *, int ); 
#line 171 "config/i386/i386-protos.h"
extern  rtx ix86_force_to_memory(enum machine_mode ,  rtx ); 
#line 172 "config/i386/i386-protos.h"
extern void ix86_free_from_memory(enum machine_mode ); 
#line 173 "config/i386/i386-protos.h"
extern void ix86_split_fp_branch(enum rtx_code code,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 174 "config/i386/i386-protos.h"
extern int ix86_hard_regno_mode_ok(int , enum machine_mode ); 
#line 176 "config/i386/i386-protos.h"
extern int ix86_register_move_cost(enum machine_mode , enum reg_class , enum reg_class ); 
#line 178 "config/i386/i386-protos.h"
extern int ix86_secondary_memory_needed(enum reg_class , enum reg_class , enum machine_mode , int ); 
#line 179 "config/i386/i386-protos.h"
extern enum reg_class ix86_preferred_reload_class( rtx , enum reg_class ); 
#line 180 "config/i386/i386-protos.h"
extern int ix86_memory_move_cost(enum machine_mode , enum reg_class , int ); 
#line 181 "config/i386/i386-protos.h"
extern void emit_i387_cw_initialization( rtx ,  rtx ); 
#line 182 "config/i386/i386-protos.h"
extern _Bool ix86_fp_jump_nontrivial_p(enum rtx_code ); 
#line 183 "config/i386/i386-protos.h"
extern void x86_order_regs_for_local_alloc(void ); 
#line 184 "config/i386/i386-protos.h"
extern void x86_function_profiler( FILE *, int ); 
#line 185 "config/i386/i386-protos.h"
extern void x86_emit_floatuns( rtx ([2])); 
#line 216 "config/i386/i386-protos.h"
extern  rtx ix86_tls_get_addr(void ); 
#line 217 "config/i386/i386-protos.h"
extern _Bool ix86_must_pass_in_stack(enum machine_mode mode,  tree ); 
#line 219 "config/i386/i386-protos.h"
extern void ix86_expand_vector_init( rtx ,  rtx ); 
#line 221 "config/i386/i386-protos.h"
extern int i386_pe_dllexport_name_p(const char *); 
#line 222 "config/i386/i386-protos.h"
extern int i386_pe_dllimport_name_p(const char *); 
#line 223 "config/i386/i386-protos.h"
extern void i386_pe_unique_section( tree , int ); 
#line 224 "config/i386/i386-protos.h"
extern void i386_pe_declare_function_type( FILE *, const char *, int ); 
#line 225 "config/i386/i386-protos.h"
extern void i386_pe_record_external_function(const char *); 
#line 226 "config/i386/i386-protos.h"
extern void i386_pe_record_exported_symbol(const char *, int ); 
#line 227 "config/i386/i386-protos.h"
extern void i386_pe_asm_file_end( FILE *); 
#line 228 "config/i386/i386-protos.h"
extern void i386_pe_encode_section_info( tree ,  rtx , int ); 
#line 229 "config/i386/i386-protos.h"
extern const char *i386_pe_strip_name_encoding(const char *); 
#line 230 "config/i386/i386-protos.h"
extern const char *i386_pe_strip_name_encoding_full(const char *); 
#line 231 "config/i386/i386-protos.h"
extern void i386_pe_output_labelref( FILE *, const char *); 
# 216 "config/i386/i386-protos.h" 
# 5 "tm_p.h" 2
# 8 "tm-preds.h" 1
extern int x86_64_immediate_operand( rtx , enum machine_mode ); 
#line 9 "tm-preds.h"
extern int x86_64_nonmemory_operand( rtx , enum machine_mode ); 
#line 10 "tm-preds.h"
extern int x86_64_movabs_operand( rtx , enum machine_mode ); 
#line 11 "tm-preds.h"
extern int x86_64_szext_nonmemory_operand( rtx , enum machine_mode ); 
#line 12 "tm-preds.h"
extern int x86_64_general_operand( rtx , enum machine_mode ); 
#line 13 "tm-preds.h"
extern int x86_64_szext_general_operand( rtx , enum machine_mode ); 
#line 14 "tm-preds.h"
extern int x86_64_zext_immediate_operand( rtx , enum machine_mode ); 
#line 15 "tm-preds.h"
extern int shiftdi_operand( rtx , enum machine_mode ); 
#line 16 "tm-preds.h"
extern int const_int_1_31_operand( rtx , enum machine_mode ); 
#line 17 "tm-preds.h"
extern int symbolic_operand( rtx , enum machine_mode ); 
#line 18 "tm-preds.h"
extern int aligned_operand( rtx , enum machine_mode ); 
#line 19 "tm-preds.h"
extern int pic_symbolic_operand( rtx , enum machine_mode ); 
#line 20 "tm-preds.h"
extern int call_insn_operand( rtx , enum machine_mode ); 
#line 21 "tm-preds.h"
extern int sibcall_insn_operand( rtx , enum machine_mode ); 
#line 22 "tm-preds.h"
extern int constant_call_address_operand( rtx , enum machine_mode ); 
#line 23 "tm-preds.h"
extern int const0_operand( rtx , enum machine_mode ); 
#line 24 "tm-preds.h"
extern int const1_operand( rtx , enum machine_mode ); 
#line 25 "tm-preds.h"
extern int const248_operand( rtx , enum machine_mode ); 
#line 26 "tm-preds.h"
extern int const_0_to_3_operand( rtx , enum machine_mode ); 
#line 27 "tm-preds.h"
extern int const_0_to_7_operand( rtx , enum machine_mode ); 
#line 28 "tm-preds.h"
extern int const_0_to_15_operand( rtx , enum machine_mode ); 
#line 29 "tm-preds.h"
extern int const_0_to_255_operand( rtx , enum machine_mode ); 
#line 30 "tm-preds.h"
extern int incdec_operand( rtx , enum machine_mode ); 
#line 31 "tm-preds.h"
extern int mmx_reg_operand( rtx , enum machine_mode ); 
#line 32 "tm-preds.h"
extern int reg_no_sp_operand( rtx , enum machine_mode ); 
#line 33 "tm-preds.h"
extern int general_no_elim_operand( rtx , enum machine_mode ); 
#line 34 "tm-preds.h"
extern int nonmemory_no_elim_operand( rtx , enum machine_mode ); 
#line 35 "tm-preds.h"
extern int index_register_operand( rtx , enum machine_mode ); 
#line 36 "tm-preds.h"
extern int flags_reg_operand( rtx , enum machine_mode ); 
#line 37 "tm-preds.h"
extern int q_regs_operand( rtx , enum machine_mode ); 
#line 38 "tm-preds.h"
extern int non_q_regs_operand( rtx , enum machine_mode ); 
#line 39 "tm-preds.h"
extern int fcmov_comparison_operator( rtx , enum machine_mode ); 
#line 40 "tm-preds.h"
extern int sse_comparison_operator( rtx , enum machine_mode ); 
#line 41 "tm-preds.h"
extern int ix86_comparison_operator( rtx , enum machine_mode ); 
#line 42 "tm-preds.h"
extern int ix86_carry_flag_operator( rtx , enum machine_mode ); 
#line 43 "tm-preds.h"
extern int cmp_fp_expander_operand( rtx , enum machine_mode ); 
#line 44 "tm-preds.h"
extern int ext_register_operand( rtx , enum machine_mode ); 
#line 45 "tm-preds.h"
extern int binary_fp_operator( rtx , enum machine_mode ); 
#line 46 "tm-preds.h"
extern int mult_operator( rtx , enum machine_mode ); 
#line 47 "tm-preds.h"
extern int div_operator( rtx , enum machine_mode ); 
#line 48 "tm-preds.h"
extern int arith_or_logical_operator( rtx , enum machine_mode ); 
#line 49 "tm-preds.h"
extern int promotable_binary_operator( rtx , enum machine_mode ); 
#line 50 "tm-preds.h"
extern int memory_displacement_operand( rtx , enum machine_mode ); 
#line 51 "tm-preds.h"
extern int cmpsi_operand( rtx , enum machine_mode ); 
#line 52 "tm-preds.h"
extern int long_memory_operand( rtx , enum machine_mode ); 
#line 53 "tm-preds.h"
extern int tls_symbolic_operand( rtx , enum machine_mode ); 
#line 54 "tm-preds.h"
extern int global_dynamic_symbolic_operand( rtx , enum machine_mode ); 
#line 55 "tm-preds.h"
extern int local_dynamic_symbolic_operand( rtx , enum machine_mode ); 
#line 56 "tm-preds.h"
extern int initial_exec_symbolic_operand( rtx , enum machine_mode ); 
#line 57 "tm-preds.h"
extern int local_exec_symbolic_operand( rtx , enum machine_mode ); 
#line 58 "tm-preds.h"
extern int any_fp_register_operand( rtx , enum machine_mode ); 
#line 59 "tm-preds.h"
extern int register_and_not_any_fp_reg_operand( rtx , enum machine_mode ); 
#line 60 "tm-preds.h"
extern int fp_register_operand( rtx , enum machine_mode ); 
#line 61 "tm-preds.h"
extern int register_and_not_fp_reg_operand( rtx , enum machine_mode ); 
#line 62 "tm-preds.h"
extern int zero_extended_scalar_load_operand( rtx , enum machine_mode ); 
#line 63 "tm-preds.h"
extern int vector_move_operand( rtx , enum machine_mode ); 
#line 64 "tm-preds.h"
extern int no_seg_address_operand( rtx , enum machine_mode ); 
# 6 "tm_p.h" 2
# 95 "reload.c" 2
# 1 "insn-config.h" 1
# 96 "reload.c" 2
# 1 "expr.h" 1
# 59 "expr.h" 
enum expand_modifier {EXPAND_NORMAL=0,EXPAND_STACK_PARM=2,EXPAND_SUM,EXPAND_CONST_ADDRESS,EXPAND_INITIALIZER,EXPAND_WRITE,EXPAND_MEMORY}; 
#line 93 "expr.h"
enum direction {none,upward,downward}; 
#line 104 "expr.h"
struct args_size {long constant;  tree var; }; 
#line 124 "expr.h"
struct locate_and_pad_arg_data {struct args_size size; struct args_size offset; struct args_size slot_offset; struct args_size alignment_pad; enum direction where_pad; }; 
# 93 "expr.h" 
# 191 "expr.h" 
 tree split_complex_types( tree ); 
#line 192 "expr.h"
 tree split_complex_values( tree ); 
#line 195 "expr.h"
extern _Bool default_must_pass_in_stack(enum machine_mode ,  tree ); 
#line 271 "expr.h"
enum optab_methods {OPTAB_DIRECT,OPTAB_LIB,OPTAB_WIDEN,OPTAB_LIB_WIDEN,OPTAB_MUST_WIDEN}; 
#line 277 "expr.h"
extern  rtx expand_simple_binop(enum machine_mode , enum rtx_code ,  rtx ,  rtx ,  rtx , int , enum optab_methods ); 
#line 279 "expr.h"
extern  rtx expand_simple_unop(enum machine_mode , enum rtx_code ,  rtx ,  rtx , int ); 
#line 283 "expr.h"
extern int have_insn_for(enum rtx_code , enum machine_mode ); 
#line 286 "expr.h"
extern void emit_libcall_block( rtx ,  rtx ,  rtx ,  rtx ); 
#line 292 "expr.h"
extern  rtx gen_add2_insn( rtx ,  rtx ); 
#line 293 "expr.h"
extern  rtx gen_add3_insn( rtx ,  rtx ,  rtx ); 
#line 294 "expr.h"
extern  rtx gen_sub2_insn( rtx ,  rtx ); 
#line 295 "expr.h"
extern  rtx gen_sub3_insn( rtx ,  rtx ,  rtx ); 
#line 296 "expr.h"
extern  rtx gen_move_insn( rtx ,  rtx ); 
#line 297 "expr.h"
extern int have_add2_insn( rtx ,  rtx ); 
#line 298 "expr.h"
extern int have_sub2_insn( rtx ,  rtx ); 
#line 303 "expr.h"
extern void emit_cmp_and_jump_insns( rtx ,  rtx , enum rtx_code ,  rtx , enum machine_mode , int ,  rtx ); 
#line 306 "expr.h"
extern void emit_indirect_jump( rtx ); 
#line 311 "expr.h"
 rtx emit_conditional_move( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode ,  rtx ,  rtx , enum machine_mode , int ); 
#line 314 "expr.h"
int can_conditionally_move_p(enum machine_mode mode); 
#line 318 "expr.h"
 rtx emit_conditional_add( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode ,  rtx ,  rtx , enum machine_mode , int ); 
#line 325 "expr.h"
extern  rtx negate_rtx(enum machine_mode ,  rtx ); 
#line 328 "expr.h"
extern  rtx expand_and(enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 332 "expr.h"
extern  rtx emit_store_flag( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode , int , int ); 
#line 336 "expr.h"
extern  rtx emit_store_flag_force( rtx , enum rtx_code ,  rtx ,  rtx , enum machine_mode , int , int ); 
#line 342 "expr.h"
extern  rtx canonicalize_condition( rtx ,  rtx , int ,  rtx *,  rtx , int ); 
#line 346 "expr.h"
extern  rtx get_condition( rtx ,  rtx *, int ); 
#line 349 "expr.h"
extern  rtx gen_cond_trap(enum rtx_code ,  rtx ,  rtx ,  rtx ); 
#line 352 "expr.h"
extern  rtx expand_builtin( tree ,  rtx ,  rtx , enum machine_mode , int ); 
#line 353 "expr.h"
extern  tree std_build_builtin_va_list(void ); 
#line 354 "expr.h"
extern void std_expand_builtin_va_start( tree ,  rtx ); 
#line 355 "expr.h"
extern  rtx std_expand_builtin_va_arg( tree ,  tree ); 
#line 356 "expr.h"
extern  rtx expand_builtin_va_arg( tree ,  tree ); 
#line 357 "expr.h"
extern  rtx default_expand_builtin( tree ,  rtx ,  rtx , enum machine_mode , int ); 
#line 358 "expr.h"
extern void expand_builtin_setjmp_setup( rtx ,  rtx ); 
#line 359 "expr.h"
extern void expand_builtin_setjmp_receiver( rtx ); 
#line 360 "expr.h"
extern void expand_builtin_longjmp( rtx ,  rtx ); 
#line 361 "expr.h"
extern  rtx expand_builtin_saveregs(void ); 
#line 362 "expr.h"
extern void expand_builtin_trap(void ); 
#line 363 "expr.h"
extern long get_varargs_alias_set(void ); 
#line 364 "expr.h"
extern long get_frame_alias_set(void ); 
#line 365 "expr.h"
extern void record_base_value(unsigned int ,  rtx , int ); 
#line 366 "expr.h"
extern void record_alias_subset(long , long ); 
#line 367 "expr.h"
extern long new_alias_set(void ); 
#line 368 "expr.h"
extern int can_address_p( tree ); 
#line 374 "expr.h"
extern void init_expr_once(void ); 
#line 377 "expr.h"
extern void init_expr(void ); 
#line 380 "expr.h"
extern void finish_expr_for_function(void ); 
#line 384 "expr.h"
extern  rtx protect_from_queue( rtx , int ); 
#line 387 "expr.h"
extern void emit_queue(void ); 
#line 390 "expr.h"
extern int queued_subexp_p( rtx ); 
#line 394 "expr.h"
extern void convert_move( rtx ,  rtx , int ); 
#line 397 "expr.h"
extern  rtx convert_to_mode(enum machine_mode ,  rtx , int ); 
#line 400 "expr.h"
extern  rtx convert_modes(enum machine_mode , enum machine_mode ,  rtx , int ); 
#line 409 "expr.h"
enum block_op_methods {BLOCK_OP_NORMAL,BLOCK_OP_NO_LIBCALL,BLOCK_OP_CALL_PARM}; 
#line 411 "expr.h"
extern void init_block_move_fn(const char *); 
#line 412 "expr.h"
extern void init_block_clear_fn(const char *); 
#line 414 "expr.h"
extern  rtx emit_block_move( rtx ,  rtx ,  rtx , enum block_op_methods ); 
#line 418 "expr.h"
extern void move_block_to_reg(int ,  rtx , int , enum machine_mode ); 
#line 422 "expr.h"
extern void move_block_from_reg(int ,  rtx , int ); 
#line 425 "expr.h"
extern  rtx gen_group_rtx( rtx ); 
#line 429 "expr.h"
extern void emit_group_load( rtx ,  rtx ,  tree , int ); 
#line 433 "expr.h"
extern void emit_group_move( rtx ,  rtx ); 
#line 437 "expr.h"
extern void emit_group_store( rtx ,  rtx ,  tree , int ); 
#line 440 "expr.h"
extern  rtx copy_blkmode_from_reg( rtx ,  rtx ,  tree ); 
#line 443 "expr.h"
extern void use_reg( rtx *,  rtx ); 
#line 447 "expr.h"
extern void use_regs( rtx *, int , int ); 
#line 450 "expr.h"
extern void use_group_regs( rtx *,  rtx ); 
#line 454 "expr.h"
extern  rtx clear_storage( rtx ,  rtx ); 
#line 459 "expr.h"
extern int can_move_by_pieces(unsigned long , unsigned int ); 
#line 469 "expr.h"
extern int can_store_by_pieces(unsigned long ,  rtx (*)(void *, long , enum machine_mode ), void *, unsigned int ); 
#line 478 "expr.h"
extern  rtx store_by_pieces( rtx , unsigned long ,  rtx (*)(void *, long , enum machine_mode ), void *, unsigned int , int ); 
#line 481 "expr.h"
extern  rtx emit_move_insn( rtx ,  rtx ); 
#line 484 "expr.h"
extern  rtx emit_move_insn_1( rtx ,  rtx ); 
#line 488 "expr.h"
extern  rtx push_block( rtx , int , int ); 
#line 492 "expr.h"
extern void emit_push_insn( rtx , enum machine_mode ,  tree ,  rtx , unsigned int , int ,  rtx , int ,  rtx ,  rtx , int ,  rtx ); 
#line 495 "expr.h"
extern  rtx expand_assignment( tree ,  tree , int ); 
#line 501 "expr.h"
extern  rtx store_expr( tree ,  rtx , int ); 
#line 506 "expr.h"
extern  rtx force_operand( rtx ,  rtx ); 
# 264 "expr.h" 
# 515 "expr.h" 
extern  tree find_placeholder( tree ,  tree *); 
#line 523 "expr.h"
extern  rtx expand_expr_real( tree ,  rtx , enum machine_mode , enum expand_modifier ,  rtx *); 
#line 527 "expr.h"
extern void init_pending_stack_adjust(void ); 
#line 531 "expr.h"
extern void clear_pending_stack_adjust(void ); 
#line 534 "expr.h"
extern void do_pending_stack_adjust(void ); 
#line 538 "expr.h"
extern  tree string_constant( tree ,  tree *); 
#line 541 "expr.h"
extern void jumpifnot( tree ,  rtx ); 
#line 544 "expr.h"
extern void jumpif( tree ,  rtx ); 
#line 548 "expr.h"
extern void do_jump( tree ,  rtx ,  rtx ); 
#line 552 "expr.h"
extern  rtx compare_from_rtx( rtx ,  rtx , enum rtx_code , int , enum machine_mode ,  rtx ); 
#line 554 "expr.h"
extern void do_compare_rtx_and_jump( rtx ,  rtx , enum rtx_code , int , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 557 "expr.h"
extern int try_casesi( tree ,  tree ,  tree ,  tree ,  rtx ,  rtx ); 
#line 558 "expr.h"
extern int try_tablejump( tree ,  tree ,  tree ,  tree ,  rtx ,  rtx ); 
#line 562 "expr.h"
extern unsigned int case_values_threshold(void ); 
#line 567 "expr.h"
extern  rtx expr_size( tree ); 
#line 571 "expr.h"
extern long int_expr_size( tree ); 
#line 573 "expr.h"
extern  rtx lookup_static_chain( tree ); 
#line 577 "expr.h"
extern  rtx fix_lexical_addr( rtx ,  tree ); 
#line 580 "expr.h"
extern  rtx trampoline_address( tree ); 
#line 584 "expr.h"
extern  rtx hard_function_value( tree ,  tree , int ); 
#line 586 "expr.h"
extern  rtx prepare_call_address( rtx ,  tree ,  rtx *, int , int ); 
#line 588 "expr.h"
extern  rtx expand_call( tree ,  rtx , int ); 
#line 599 "expr.h"
extern void locate_and_pad_parm(enum machine_mode ,  tree , int , int ,  tree , struct args_size *, struct locate_and_pad_arg_data *); 
#line 600 "expr.h"
extern  rtx expand_inline_function( tree ,  tree ,  rtx , int ,  tree ,  rtx ); 
#line 603 "expr.h"
extern  rtx label_rtx( tree ); 
#line 608 "expr.h"
extern  rtx force_label_rtx( tree ); 
#line 611 "expr.h"
extern  rtx promoted_input_arg(unsigned int , enum machine_mode *, int *); 
#line 616 "expr.h"
extern  rtx eliminate_constant_term( rtx ,  rtx *); 
#line 620 "expr.h"
extern  rtx memory_address(enum machine_mode ,  rtx ); 
#line 623 "expr.h"
extern  rtx memory_address_noforce(enum machine_mode ,  rtx ); 
#line 626 "expr.h"
extern void set_mem_alias_set( rtx , long ); 
#line 629 "expr.h"
extern void set_mem_align( rtx , unsigned int ); 
#line 632 "expr.h"
extern void set_mem_expr( rtx ,  tree ); 
#line 635 "expr.h"
extern void set_mem_offset( rtx ,  rtx ); 
#line 638 "expr.h"
extern void set_mem_size( rtx ,  rtx ); 
#line 644 "expr.h"
extern  rtx change_address( rtx , enum machine_mode ,  rtx ); 
# 597 "expr.h" 
# 665 "expr.h" 
extern  rtx adjust_address_1( rtx , enum machine_mode , long , int , int ); 
#line 667 "expr.h"
extern  rtx adjust_automodify_address_1( rtx , enum machine_mode ,  rtx , long , int ); 
#line 672 "expr.h"
extern  rtx offset_address( rtx ,  rtx , unsigned long ); 
#line 678 "expr.h"
extern  rtx replace_equiv_address( rtx ,  rtx ); 
#line 681 "expr.h"
extern  rtx replace_equiv_address_nv( rtx ,  rtx ); 
#line 685 "expr.h"
extern  rtx widen_memory_access( rtx , enum machine_mode , long ); 
#line 689 "expr.h"
extern  rtx validize_mem( rtx ); 
#line 694 "expr.h"
extern void maybe_set_unchanging( rtx ,  tree ); 
#line 699 "expr.h"
extern void set_mem_attributes( rtx ,  tree , int ); 
#line 704 "expr.h"
extern void set_mem_attributes_minus_bitpos( rtx ,  tree , int , long ); 
#line 707 "expr.h"
extern  rtx assemble_trampoline_template(void ); 
#line 711 "expr.h"
extern  rtx stabilize( rtx ); 
#line 715 "expr.h"
extern  rtx copy_all_regs( rtx ); 
#line 718 "expr.h"
extern  rtx copy_to_reg( rtx ); 
#line 721 "expr.h"
extern  rtx copy_addr_to_reg( rtx ); 
#line 724 "expr.h"
extern  rtx copy_to_mode_reg(enum machine_mode ,  rtx ); 
#line 727 "expr.h"
extern  rtx copy_to_suggested_reg( rtx ,  rtx , enum machine_mode ); 
#line 731 "expr.h"
extern  rtx force_reg(enum machine_mode ,  rtx ); 
#line 734 "expr.h"
extern  rtx force_not_mem( rtx ); 
#line 737 "expr.h"
extern enum machine_mode promote_mode( tree , enum machine_mode , int *, int ); 
#line 740 "expr.h"
extern void adjust_stack( rtx ); 
#line 743 "expr.h"
extern void anti_adjust_stack( rtx ); 
#line 746 "expr.h"
enum save_level {SAVE_BLOCK,SAVE_FUNCTION,SAVE_NONLOCAL}; 
#line 749 "expr.h"
extern void emit_stack_save(enum save_level ,  rtx *,  rtx ); 
#line 752 "expr.h"
extern void emit_stack_restore(enum save_level ,  rtx ,  rtx ); 
#line 756 "expr.h"
extern  rtx allocate_dynamic_stack_space( rtx ,  rtx , int ); 
#line 763 "expr.h"
extern void probe_stack_range(long ,  rtx ); 
#line 767 "expr.h"
extern  rtx hard_libcall_value(enum machine_mode ); 
#line 771 "expr.h"
extern  rtx round_push( rtx ); 
#line 777 "expr.h"
enum extraction_pattern {EP_insv,EP_extv,EP_extzv}; 
#line 779 "expr.h"
extern enum machine_mode mode_for_extraction(enum extraction_pattern , int ); 
#line 783 "expr.h"
extern  rtx store_bit_field( rtx , unsigned long , unsigned long , enum machine_mode ,  rtx , long ); 
#line 787 "expr.h"
extern  rtx extract_bit_field( rtx , unsigned long , unsigned long , int ,  rtx , enum machine_mode , enum machine_mode , long ); 
#line 788 "expr.h"
extern  rtx expand_mult(enum machine_mode ,  rtx ,  rtx ,  rtx , int ); 
#line 789 "expr.h"
extern _Bool const_mult_add_overflow_p( rtx ,  rtx ,  rtx , enum machine_mode , int ); 
#line 790 "expr.h"
extern  rtx expand_mult_add( rtx ,  rtx ,  rtx ,  rtx , enum machine_mode , int ); 
#line 791 "expr.h"
extern  rtx expand_mult_highpart_adjust(enum machine_mode ,  rtx ,  rtx ,  rtx ,  rtx , int ); 
#line 793 "expr.h"
extern  rtx assemble_static_space(unsigned long ); 
#line 794 "expr.h"
extern int safe_from_p( rtx ,  tree , int ); 
#line 798 "expr.h"
extern void init_optabs(void ); 
#line 799 "expr.h"
extern void init_all_optabs(void ); 
#line 802 "expr.h"
extern  rtx init_one_libfunc(const char *); 
#line 804 "expr.h"
extern void do_jump_by_parts_equality_rtx( rtx ,  rtx ,  rtx ); 
#line 806 "expr.h"
extern void do_jump_by_parts_greater_rtx(enum machine_mode , int ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 808 "expr.h"
extern void mark_seen_cases( tree , unsigned char *, long , int ); 
#line 810 "expr.h"
extern int vector_mode_valid_p(enum machine_mode ); 
#line 812 "expr.h"
extern  tree placeholder_list; 
# 97 "reload.c" 2
# 1 "optabs.h" 1
# 24 "optabs.h" 
# 715 "insn-codes.h" 1
enum insn_code {CODE_FOR_cmpqi_ext_3_insn=11,CODE_FOR_x86_sahf_1=23,CODE_FOR_popsi1=33,CODE_FOR_movsi_insv_1=55,CODE_FOR_swapxf=72,CODE_FOR_zero_extendhisi2_and=73,CODE_FOR_zero_extendsidi2_32=81,CODE_FOR_extendhisi2=84,CODE_FOR_extendqihi2=85,CODE_FOR_extendqisi2=86,CODE_FOR_truncdfsf2_sse_only=97,CODE_FOR_fix_truncdi_nomemory=104,CODE_FOR_fix_truncdi_memory=105,CODE_FOR_fix_truncsi_nomemory=107,CODE_FOR_fix_truncsi_memory=108,CODE_FOR_fix_truncsfsi_sse=109,CODE_FOR_fix_truncdfsi_sse=110,CODE_FOR_fix_trunchi_nomemory=112,CODE_FOR_fix_trunchi_memory=113,CODE_FOR_x86_fnstcw_1=114,CODE_FOR_x86_fldcw_1=115,CODE_FOR_floathixf2=125,CODE_FOR_floatsixf2=126,CODE_FOR_floatdixf2=127,CODE_FOR_addqi3_carry=129,CODE_FOR_addhi3_carry=130,CODE_FOR_addsi3_carry=131,CODE_FOR_addqi3_cc=133,CODE_FOR_addqi_ext_1=156,CODE_FOR_subqi3_carry=159,CODE_FOR_subhi3_carry=160,CODE_FOR_subsi3_carry=161,CODE_FOR_divqi3=181,CODE_FOR_udivqi3=182,CODE_FOR_divmodhi4=186,CODE_FOR_udivmodsi4=187,CODE_FOR_testsi_1=190,CODE_FOR_andqi_ext_0=205,CODE_FOR_iorqi_ext_0=220,CODE_FOR_xorqi_ext_0=231,CODE_FOR_negsf2_memory=245,CODE_FOR_negsf2_ifs=246,CODE_FOR_negdf2_memory=248,CODE_FOR_negdf2_ifs=249,CODE_FOR_abssf2_memory=258,CODE_FOR_abssf2_ifs=259,CODE_FOR_absdf2_memory=261,CODE_FOR_absdf2_ifs=262,CODE_FOR_ashldi3_1=277,CODE_FOR_x86_shld_1=279,CODE_FOR_ashrdi3_1=288,CODE_FOR_x86_shrd_1=290,CODE_FOR_ashrsi3_31=291,CODE_FOR_lshrdi3_1=306,CODE_FOR_setcc_2=339,CODE_FOR_jump=354,CODE_FOR_doloop_end_internal=357,CODE_FOR_blockage=363,CODE_FOR_return_internal=364,CODE_FOR_return_internal_long=365,CODE_FOR_return_pop_internal=366,CODE_FOR_return_indirect_internal=367,CODE_FOR_nop=368,CODE_FOR_align=369,CODE_FOR_set_got=370,CODE_FOR_eh_return_si=371,CODE_FOR_leave=372,CODE_FOR_ctzsi2=376,CODE_FOR_sqrtsf2_1=411,CODE_FOR_sqrtsf2_1_sse_only=412,CODE_FOR_sqrtsf2_i387=413,CODE_FOR_sqrtdf2_1=414,CODE_FOR_sqrtdf2_1_sse_only=415,CODE_FOR_sqrtdf2_i387=416,CODE_FOR_sqrtxf2=418,CODE_FOR_sindf2=421,CODE_FOR_sinsf2=422,CODE_FOR_sinxf2=424,CODE_FOR_cosdf2=425,CODE_FOR_cossf2=426,CODE_FOR_cosxf2=428,CODE_FOR_atan2df3_1=429,CODE_FOR_atan2sf3_1=430,CODE_FOR_atan2xf3_1=431,CODE_FOR_cld=440,CODE_FOR_x86_movsicc_0_m1=454,CODE_FOR_pro_epilogue_adjust_stack_1=473,CODE_FOR_sse_movsfcc=474,CODE_FOR_sse_movsfcc_eq=475,CODE_FOR_sse_movdfcc=476,CODE_FOR_sse_movdfcc_eq=477,CODE_FOR_allocate_stack_worker_1=486,CODE_FOR_trap=492,CODE_FOR_movv4sf_internal=494,CODE_FOR_movv4si_internal=495,CODE_FOR_movv2di_internal=496,CODE_FOR_movv8qi_internal=497,CODE_FOR_movv4hi_internal=498,CODE_FOR_movv2si_internal=499,CODE_FOR_movv2sf_internal=500,CODE_FOR_movv2df_internal=501,CODE_FOR_movv8hi_internal=502,CODE_FOR_movv16qi_internal=503,CODE_FOR_movti_internal=515,CODE_FOR_sse_movmskps=518,CODE_FOR_mmx_pmovmskb=519,CODE_FOR_mmx_maskmovq=520,CODE_FOR_sse_movntv4sf=521,CODE_FOR_sse_movntdi=522,CODE_FOR_sse_movhlps=523,CODE_FOR_sse_movlhps=524,CODE_FOR_sse_movhps=525,CODE_FOR_sse_movlps=526,CODE_FOR_sse_loadss_1=527,CODE_FOR_sse_movss=528,CODE_FOR_sse_storess=529,CODE_FOR_sse_shufps=530,CODE_FOR_addv4sf3=531,CODE_FOR_vmaddv4sf3=532,CODE_FOR_subv4sf3=533,CODE_FOR_vmsubv4sf3=534,CODE_FOR_mulv4sf3=535,CODE_FOR_vmmulv4sf3=536,CODE_FOR_divv4sf3=537,CODE_FOR_vmdivv4sf3=538,CODE_FOR_rcpv4sf2=539,CODE_FOR_vmrcpv4sf2=540,CODE_FOR_rsqrtv4sf2=541,CODE_FOR_vmrsqrtv4sf2=542,CODE_FOR_sqrtv4sf2=543,CODE_FOR_vmsqrtv4sf2=544,CODE_FOR_sse2_andv2di3=562,CODE_FOR_sse2_nandv2di3=564,CODE_FOR_sse2_iorv2di3=566,CODE_FOR_sse2_xorv2di3=568,CODE_FOR_sse_clrv4sf=569,CODE_FOR_sse_clrv2df=570,CODE_FOR_maskcmpv4sf3=571,CODE_FOR_maskncmpv4sf3=572,CODE_FOR_vmmaskcmpv4sf3=573,CODE_FOR_vmmaskncmpv4sf3=574,CODE_FOR_sse_comi=575,CODE_FOR_sse_ucomi=576,CODE_FOR_sse_unpckhps=577,CODE_FOR_sse_unpcklps=578,CODE_FOR_smaxv4sf3=579,CODE_FOR_vmsmaxv4sf3=580,CODE_FOR_sminv4sf3=581,CODE_FOR_vmsminv4sf3=582,CODE_FOR_cvtpi2ps=583,CODE_FOR_cvtps2pi=584,CODE_FOR_cvttps2pi=585,CODE_FOR_cvtsi2ss=586,CODE_FOR_cvtss2si=587,CODE_FOR_cvtss2siq=588,CODE_FOR_cvttss2si=589,CODE_FOR_addv8qi3=590,CODE_FOR_addv4hi3=591,CODE_FOR_addv2si3=592,CODE_FOR_mmx_adddi3=593,CODE_FOR_ssaddv8qi3=594,CODE_FOR_ssaddv4hi3=595,CODE_FOR_usaddv8qi3=596,CODE_FOR_usaddv4hi3=597,CODE_FOR_subv8qi3=598,CODE_FOR_subv4hi3=599,CODE_FOR_subv2si3=600,CODE_FOR_mmx_subdi3=601,CODE_FOR_sssubv8qi3=602,CODE_FOR_sssubv4hi3=603,CODE_FOR_ussubv8qi3=604,CODE_FOR_ussubv4hi3=605,CODE_FOR_mulv4hi3=606,CODE_FOR_smulv4hi3_highpart=607,CODE_FOR_umulv4hi3_highpart=608,CODE_FOR_mmx_pmaddwd=609,CODE_FOR_mmx_iordi3=610,CODE_FOR_mmx_xordi3=611,CODE_FOR_mmx_clrdi=612,CODE_FOR_mmx_anddi3=613,CODE_FOR_mmx_nanddi3=614,CODE_FOR_mmx_uavgv8qi3=615,CODE_FOR_mmx_uavgv4hi3=616,CODE_FOR_mmx_psadbw=617,CODE_FOR_mmx_pinsrw=618,CODE_FOR_mmx_pextrw=619,CODE_FOR_mmx_pshufw=620,CODE_FOR_eqv8qi3=621,CODE_FOR_eqv4hi3=622,CODE_FOR_eqv2si3=623,CODE_FOR_gtv8qi3=624,CODE_FOR_gtv4hi3=625,CODE_FOR_gtv2si3=626,CODE_FOR_umaxv8qi3=627,CODE_FOR_smaxv4hi3=628,CODE_FOR_uminv8qi3=629,CODE_FOR_sminv4hi3=630,CODE_FOR_ashrv4hi3=631,CODE_FOR_ashrv2si3=632,CODE_FOR_lshrv4hi3=633,CODE_FOR_lshrv2si3=634,CODE_FOR_mmx_lshrdi3=635,CODE_FOR_ashlv4hi3=636,CODE_FOR_ashlv2si3=637,CODE_FOR_mmx_ashldi3=638,CODE_FOR_mmx_packsswb=639,CODE_FOR_mmx_packssdw=640,CODE_FOR_mmx_packuswb=641,CODE_FOR_mmx_punpckhbw=642,CODE_FOR_mmx_punpckhwd=643,CODE_FOR_mmx_punpckhdq=644,CODE_FOR_mmx_punpcklbw=645,CODE_FOR_mmx_punpcklwd=646,CODE_FOR_mmx_punpckldq=647,CODE_FOR_emms=648,CODE_FOR_ldmxcsr=649,CODE_FOR_stmxcsr=650,CODE_FOR_addv2sf3=652,CODE_FOR_subv2sf3=653,CODE_FOR_subrv2sf3=654,CODE_FOR_gtv2sf3=655,CODE_FOR_gev2sf3=656,CODE_FOR_eqv2sf3=657,CODE_FOR_pfmaxv2sf3=658,CODE_FOR_pfminv2sf3=659,CODE_FOR_mulv2sf3=660,CODE_FOR_femms=661,CODE_FOR_pf2id=662,CODE_FOR_pf2iw=663,CODE_FOR_pfacc=664,CODE_FOR_pfnacc=665,CODE_FOR_pfpnacc=666,CODE_FOR_pi2fw=667,CODE_FOR_floatv2si2=668,CODE_FOR_pavgusb=669,CODE_FOR_pfrcpv2sf2=670,CODE_FOR_pfrcpit1v2sf3=671,CODE_FOR_pfrcpit2v2sf3=672,CODE_FOR_pfrsqrtv2sf2=673,CODE_FOR_pfrsqit1v2sf3=674,CODE_FOR_pmulhrwv4hi3=675,CODE_FOR_pswapdv2si2=676,CODE_FOR_pswapdv2sf2=677,CODE_FOR_addv2df3=680,CODE_FOR_vmaddv2df3=681,CODE_FOR_subv2df3=682,CODE_FOR_vmsubv2df3=683,CODE_FOR_mulv2df3=684,CODE_FOR_vmmulv2df3=685,CODE_FOR_divv2df3=686,CODE_FOR_vmdivv2df3=687,CODE_FOR_smaxv2df3=688,CODE_FOR_vmsmaxv2df3=689,CODE_FOR_sminv2df3=690,CODE_FOR_vmsminv2df3=691,CODE_FOR_sqrtv2df2=692,CODE_FOR_vmsqrtv2df2=693,CODE_FOR_maskcmpv2df3=694,CODE_FOR_maskncmpv2df3=695,CODE_FOR_vmmaskcmpv2df3=696,CODE_FOR_vmmaskncmpv2df3=697,CODE_FOR_sse2_comi=698,CODE_FOR_sse2_ucomi=699,CODE_FOR_sse2_movmskpd=700,CODE_FOR_sse2_pmovmskb=701,CODE_FOR_sse2_maskmovdqu=702,CODE_FOR_sse2_maskmovdqu_rex64=703,CODE_FOR_sse2_movntv2df=704,CODE_FOR_sse2_movntv2di=705,CODE_FOR_sse2_movntsi=706,CODE_FOR_cvtdq2ps=707,CODE_FOR_cvtps2dq=708,CODE_FOR_cvttps2dq=709,CODE_FOR_cvtdq2pd=710,CODE_FOR_cvtpd2dq=711,CODE_FOR_cvttpd2dq=712,CODE_FOR_cvtpd2pi=713,CODE_FOR_cvttpd2pi=714,CODE_FOR_cvtpi2pd=715,CODE_FOR_cvtsd2si=716,CODE_FOR_cvttsd2si=717,CODE_FOR_cvtsi2sd=718,CODE_FOR_cvtsd2ss=719,CODE_FOR_cvtss2sd=720,CODE_FOR_cvtpd2ps=721,CODE_FOR_cvtps2pd=722,CODE_FOR_addv16qi3=723,CODE_FOR_addv8hi3=724,CODE_FOR_addv4si3=725,CODE_FOR_addv2di3=726,CODE_FOR_ssaddv16qi3=727,CODE_FOR_ssaddv8hi3=728,CODE_FOR_usaddv16qi3=729,CODE_FOR_usaddv8hi3=730,CODE_FOR_subv16qi3=731,CODE_FOR_subv8hi3=732,CODE_FOR_subv4si3=733,CODE_FOR_subv2di3=734,CODE_FOR_sssubv16qi3=735,CODE_FOR_sssubv8hi3=736,CODE_FOR_ussubv16qi3=737,CODE_FOR_ussubv8hi3=738,CODE_FOR_mulv8hi3=739,CODE_FOR_smulv8hi3_highpart=740,CODE_FOR_umulv8hi3_highpart=741,CODE_FOR_sse2_umulsidi3=742,CODE_FOR_sse2_umulv2siv2di3=743,CODE_FOR_sse2_pmaddwd=744,CODE_FOR_sse2_clrti=745,CODE_FOR_sse2_uavgv16qi3=746,CODE_FOR_sse2_uavgv8hi3=747,CODE_FOR_sse2_psadbw=748,CODE_FOR_sse2_pinsrw=749,CODE_FOR_sse2_pextrw=750,CODE_FOR_sse2_pshufd=751,CODE_FOR_sse2_pshuflw=752,CODE_FOR_sse2_pshufhw=753,CODE_FOR_eqv16qi3=754,CODE_FOR_eqv8hi3=755,CODE_FOR_eqv4si3=756,CODE_FOR_gtv16qi3=757,CODE_FOR_gtv8hi3=758,CODE_FOR_gtv4si3=759,CODE_FOR_umaxv16qi3=760,CODE_FOR_smaxv8hi3=761,CODE_FOR_uminv16qi3=762,CODE_FOR_sminv8hi3=763,CODE_FOR_ashrv8hi3=764,CODE_FOR_ashrv4si3=765,CODE_FOR_lshrv8hi3=766,CODE_FOR_lshrv4si3=767,CODE_FOR_lshrv2di3=768,CODE_FOR_ashlv8hi3=769,CODE_FOR_ashlv4si3=770,CODE_FOR_ashlv2di3=771,CODE_FOR_ashrv8hi3_ti=772,CODE_FOR_ashrv4si3_ti=773,CODE_FOR_lshrv8hi3_ti=774,CODE_FOR_lshrv4si3_ti=775,CODE_FOR_lshrv2di3_ti=776,CODE_FOR_ashlv8hi3_ti=777,CODE_FOR_ashlv4si3_ti=778,CODE_FOR_ashlv2di3_ti=779,CODE_FOR_sse2_ashlti3=780,CODE_FOR_sse2_lshrti3=781,CODE_FOR_sse2_unpckhpd=782,CODE_FOR_sse2_unpcklpd=783,CODE_FOR_sse2_packsswb=784,CODE_FOR_sse2_packssdw=785,CODE_FOR_sse2_packuswb=786,CODE_FOR_sse2_punpckhbw=787,CODE_FOR_sse2_punpckhwd=788,CODE_FOR_sse2_punpckhdq=789,CODE_FOR_sse2_punpcklbw=790,CODE_FOR_sse2_punpcklwd=791,CODE_FOR_sse2_punpckldq=792,CODE_FOR_sse2_punpcklqdq=793,CODE_FOR_sse2_punpckhqdq=794,CODE_FOR_sse2_movapd=795,CODE_FOR_sse2_movupd=796,CODE_FOR_sse2_movdqa=797,CODE_FOR_sse2_movdqu=798,CODE_FOR_sse2_movdq2q=799,CODE_FOR_sse2_movq2dq=800,CODE_FOR_sse2_movq=801,CODE_FOR_sse2_loadd=802,CODE_FOR_sse2_stored=803,CODE_FOR_sse2_movhpd=804,CODE_FOR_sse2_loadsd_1=805,CODE_FOR_sse2_movsd=806,CODE_FOR_sse2_storesd=807,CODE_FOR_sse2_shufpd=808,CODE_FOR_sse2_clflush=809,CODE_FOR_mwait=812,CODE_FOR_monitor=813,CODE_FOR_addsubv4sf3=814,CODE_FOR_addsubv2df3=815,CODE_FOR_haddv4sf3=816,CODE_FOR_haddv2df3=817,CODE_FOR_hsubv4sf3=818,CODE_FOR_hsubv2df3=819,CODE_FOR_movshdup=820,CODE_FOR_movsldup=821,CODE_FOR_lddqu=822,CODE_FOR_loadddup=823,CODE_FOR_movddup=824,CODE_FOR_cmpdi=825,CODE_FOR_cmpsi=826,CODE_FOR_cmphi=827,CODE_FOR_cmpqi=828,CODE_FOR_cmpsi_1=829,CODE_FOR_cmpqi_ext_3=830,CODE_FOR_cmpxf=831,CODE_FOR_cmpdf=832,CODE_FOR_cmpsf=833,CODE_FOR_movsi=834,CODE_FOR_movhi=835,CODE_FOR_movstricthi=836,CODE_FOR_movqi=837,CODE_FOR_reload_outqi=838,CODE_FOR_movstrictqi=839,CODE_FOR_movdi=840,CODE_FOR_movsf=843,CODE_FOR_movdf=846,CODE_FOR_movxf=850,CODE_FOR_zero_extendhisi2=855,CODE_FOR_zero_extendqihi2=857,CODE_FOR_zero_extendqisi2=861,CODE_FOR_zero_extendsidi2=865,CODE_FOR_extendsidi2=868,CODE_FOR_extendsfdf2=875,CODE_FOR_extendsfxf2=876,CODE_FOR_extenddfxf2=877,CODE_FOR_truncdfsf2=878,CODE_FOR_truncxfsf2=883,CODE_FOR_truncxfdf2=886,CODE_FOR_fix_truncxfdi2=889,CODE_FOR_fix_truncdfdi2=890,CODE_FOR_fix_truncsfdi2=891,CODE_FOR_fix_truncxfsi2=897,CODE_FOR_fix_truncdfsi2=898,CODE_FOR_fix_truncsfsi2=899,CODE_FOR_fix_truncxfhi2=905,CODE_FOR_fix_truncdfhi2=906,CODE_FOR_fix_truncsfhi2=907,CODE_FOR_floathisf2=911,CODE_FOR_floatsisf2=912,CODE_FOR_floatdisf2=914,CODE_FOR_floathidf2=916,CODE_FOR_floatsidf2=917,CODE_FOR_floatdidf2=918,CODE_FOR_floatunssisf2=920,CODE_FOR_vec_setv2df=921,CODE_FOR_vec_extractv2df=922,CODE_FOR_vec_initv2df=923,CODE_FOR_vec_setv4sf=924,CODE_FOR_vec_extractv4sf=925,CODE_FOR_vec_initv4sf=926,CODE_FOR_adddi3=927,CODE_FOR_addsi3=929,CODE_FOR_addhi3=934,CODE_FOR_addqi3=935,CODE_FOR_addxf3=936,CODE_FOR_adddf3=937,CODE_FOR_addsf3=938,CODE_FOR_subdi3=939,CODE_FOR_subsi3=941,CODE_FOR_subhi3=942,CODE_FOR_subqi3=943,CODE_FOR_subxf3=944,CODE_FOR_subdf3=945,CODE_FOR_subsf3=946,CODE_FOR_mulsi3=947,CODE_FOR_mulhi3=948,CODE_FOR_mulqi3=949,CODE_FOR_umulqihi3=950,CODE_FOR_mulqihi3=951,CODE_FOR_umulsidi3=952,CODE_FOR_mulsidi3=953,CODE_FOR_umulsi3_highpart=954,CODE_FOR_smulsi3_highpart=955,CODE_FOR_mulxf3=956,CODE_FOR_muldf3=957,CODE_FOR_mulsf3=958,CODE_FOR_divxf3=959,CODE_FOR_divdf3=960,CODE_FOR_divsf3=961,CODE_FOR_divmodsi4=962,CODE_FOR_udivmodhi4=965,CODE_FOR_testsi_ccno_1=966,CODE_FOR_testqi_ccz_1=967,CODE_FOR_testqi_ext_ccno_0=968,CODE_FOR_andsi3=972,CODE_FOR_andhi3=976,CODE_FOR_andqi3=977,CODE_FOR_iorsi3=980,CODE_FOR_iorhi3=981,CODE_FOR_iorqi3=982,CODE_FOR_xorsi3=985,CODE_FOR_xorhi3=986,CODE_FOR_xorqi3=987,CODE_FOR_xorqi_cc_ext_1=988,CODE_FOR_negdi2=991,CODE_FOR_negsi2=993,CODE_FOR_neghi2=994,CODE_FOR_negqi2=995,CODE_FOR_negsf2=996,CODE_FOR_negdf2=1003,CODE_FOR_negxf2=1009,CODE_FOR_abssf2=1012,CODE_FOR_absdf2=1019,CODE_FOR_absxf2=1025,CODE_FOR_one_cmplsi2=1028,CODE_FOR_one_cmplhi2=1031,CODE_FOR_one_cmplqi2=1033,CODE_FOR_ashldi3=1035,CODE_FOR_x86_shift_adj_1=1038,CODE_FOR_x86_shift_adj_2=1039,CODE_FOR_ashlsi3=1040,CODE_FOR_ashlhi3=1043,CODE_FOR_ashlqi3=1044,CODE_FOR_ashrdi3=1045,CODE_FOR_x86_shift_adj_3=1048,CODE_FOR_ashrsi3=1049,CODE_FOR_ashrhi3=1050,CODE_FOR_ashrqi3=1051,CODE_FOR_lshrdi3=1052,CODE_FOR_lshrsi3=1055,CODE_FOR_lshrhi3=1056,CODE_FOR_lshrqi3=1057,CODE_FOR_rotlsi3=1058,CODE_FOR_rotlhi3=1059,CODE_FOR_rotlqi3=1060,CODE_FOR_rotrsi3=1061,CODE_FOR_rotrhi3=1062,CODE_FOR_rotrqi3=1063,CODE_FOR_extv=1064,CODE_FOR_extzv=1065,CODE_FOR_insv=1066,CODE_FOR_seq=1067,CODE_FOR_sne=1068,CODE_FOR_sgt=1069,CODE_FOR_sgtu=1070,CODE_FOR_slt=1071,CODE_FOR_sltu=1072,CODE_FOR_sge=1073,CODE_FOR_sgeu=1074,CODE_FOR_sle=1075,CODE_FOR_sleu=1076,CODE_FOR_sunordered=1077,CODE_FOR_sordered=1078,CODE_FOR_suneq=1079,CODE_FOR_sunge=1080,CODE_FOR_sungt=1081,CODE_FOR_sunle=1082,CODE_FOR_sunlt=1083,CODE_FOR_sltgt=1084,CODE_FOR_beq=1089,CODE_FOR_bne=1090,CODE_FOR_bgt=1091,CODE_FOR_bgtu=1092,CODE_FOR_blt=1093,CODE_FOR_bltu=1094,CODE_FOR_bge=1095,CODE_FOR_bgeu=1096,CODE_FOR_ble=1097,CODE_FOR_bleu=1098,CODE_FOR_bunordered=1099,CODE_FOR_bordered=1100,CODE_FOR_buneq=1101,CODE_FOR_bunge=1102,CODE_FOR_bungt=1103,CODE_FOR_bunle=1104,CODE_FOR_bunlt=1105,CODE_FOR_bltgt=1106,CODE_FOR_indirect_jump=1111,CODE_FOR_tablejump=1112,CODE_FOR_doloop_end=1113,CODE_FOR_call_pop=1118,CODE_FOR_call=1119,CODE_FOR_sibcall=1120,CODE_FOR_call_value_pop=1121,CODE_FOR_call_value=1122,CODE_FOR_sibcall_value=1123,CODE_FOR_untyped_call=1124,CODE_FOR_return=1125,CODE_FOR_prologue=1126,CODE_FOR_epilogue=1127,CODE_FOR_sibcall_epilogue=1128,CODE_FOR_eh_return=1129,CODE_FOR_ffssi2=1132,CODE_FOR_clzsi2=1135,CODE_FOR_tls_global_dynamic_32=1136,CODE_FOR_tls_global_dynamic_64=1137,CODE_FOR_tls_local_dynamic_base_32=1138,CODE_FOR_tls_local_dynamic_base_64=1139,CODE_FOR_sqrtsf2=1143,CODE_FOR_sqrtdf2=1144,CODE_FOR_atan2df3=1145,CODE_FOR_atan2sf3=1146,CODE_FOR_atan2xf3=1147,CODE_FOR_logsf2=1148,CODE_FOR_logdf2=1149,CODE_FOR_logxf2=1150,CODE_FOR_expsf2=1151,CODE_FOR_expdf2=1152,CODE_FOR_expxf2=1153,CODE_FOR_atansf2=1154,CODE_FOR_atandf2=1155,CODE_FOR_atanxf2=1156,CODE_FOR_movstrsi=1157,CODE_FOR_strmov=1158,CODE_FOR_strmov_singleop=1159,CODE_FOR_rep_mov=1160,CODE_FOR_clrstrsi=1161,CODE_FOR_strset=1162,CODE_FOR_strset_singleop=1163,CODE_FOR_rep_stos=1164,CODE_FOR_cmpstrsi=1165,CODE_FOR_cmpintqi=1166,CODE_FOR_cmpstrqi_nz_1=1167,CODE_FOR_cmpstrqi_1=1168,CODE_FOR_strlensi=1169,CODE_FOR_strlendi=1170,CODE_FOR_strlenqi_1=1171,CODE_FOR_movsicc=1174,CODE_FOR_movhicc=1175,CODE_FOR_movqicc=1176,CODE_FOR_movsfcc=1178,CODE_FOR_movdfcc=1179,CODE_FOR_movxfcc=1181,CODE_FOR_minsf3=1182,CODE_FOR_addqicc=1184,CODE_FOR_addhicc=1185,CODE_FOR_addsicc=1186,CODE_FOR_mindf3=1188,CODE_FOR_maxsf3=1191,CODE_FOR_maxdf3=1194,CODE_FOR_allocate_stack_worker=1200,CODE_FOR_allocate_stack_worker_postreload=1201,CODE_FOR_allocate_stack_worker_rex64_postreload=1202,CODE_FOR_allocate_stack=1203,CODE_FOR_builtin_setjmp_receiver=1204,CODE_FOR_conditional_trap=1273,CODE_FOR_movti=1276,CODE_FOR_movv2df=1277,CODE_FOR_movv8hi=1278,CODE_FOR_movv16qi=1279,CODE_FOR_movv4sf=1280,CODE_FOR_movv4si=1281,CODE_FOR_movv2di=1282,CODE_FOR_movv2si=1283,CODE_FOR_movv4hi=1284,CODE_FOR_movv8qi=1285,CODE_FOR_movv2sf=1286,CODE_FOR_sse_movaps=1290,CODE_FOR_sse_movups=1291,CODE_FOR_sse_loadss=1292,CODE_FOR_sse_andv4sf3=1293,CODE_FOR_sse_nandv4sf3=1294,CODE_FOR_sse_iorv4sf3=1295,CODE_FOR_sse_xorv4sf3=1296,CODE_FOR_sse2_andv2df3=1297,CODE_FOR_sse2_nandv2df3=1298,CODE_FOR_sse2_iorv2df3=1299,CODE_FOR_sse2_xorv2df3=1300,CODE_FOR_sfence=1301,CODE_FOR_prefetch=1302,CODE_FOR_sse2_loadsd=1303,CODE_FOR_sse2_mfence=1304,CODE_FOR_sse2_lfence=1305,CODE_FOR_nothing}; 
# 25 "optabs.h" 2
# 45 "optabs.h" 
struct optab_handlers {enum insn_code insn_code;  rtx libfunc; }; 
#line 51 "optabs.h"
struct optab {enum rtx_code code; struct optab_handlers handlers[NUM_MACHINE_MODES]; }; 
#line 52 "optabs.h"
typedef struct optab *optab; 
#line 61 "optabs.h"
struct convert_optab {enum rtx_code code; struct optab_handlers handlers[NUM_MACHINE_MODES][NUM_MACHINE_MODES]; }; 
#line 62 "optabs.h"
typedef struct convert_optab *convert_optab; 
#line 208 "optabs.h"
enum optab_index {OTI_add,OTI_addv,OTI_sub,OTI_subv,OTI_smul,OTI_smulv,OTI_smul_highpart,OTI_umul_highpart,OTI_smul_widen,OTI_umul_widen,OTI_sdiv,OTI_sdivv,OTI_sdivmod,OTI_udiv,OTI_udivmod,OTI_smod,OTI_umod,OTI_ftrunc,OTI_and,OTI_ior,OTI_xor,OTI_ashl,OTI_lshr,OTI_ashr,OTI_rotl,OTI_rotr,OTI_smin,OTI_smax,OTI_umin,OTI_umax,OTI_pow,OTI_atan2,OTI_mov,OTI_movstrict,OTI_neg,OTI_negv,OTI_abs,OTI_absv,OTI_one_cmpl,OTI_ffs,OTI_clz,OTI_ctz,OTI_popcount,OTI_parity,OTI_sqrt,OTI_sin,OTI_cos,OTI_exp,OTI_log,OTI_floor,OTI_ceil,OTI_trunc,OTI_round,OTI_nearbyint,OTI_tan,OTI_atan,OTI_cmp,OTI_ucmp,OTI_tst,OTI_eq,OTI_ne,OTI_gt,OTI_ge,OTI_lt,OTI_le,OTI_unord,OTI_strlen,OTI_cbranch,OTI_cmov,OTI_cstore,OTI_push,OTI_addcc,OTI_vec_set,OTI_vec_extract,OTI_vec_init,OTI_MAX}; 
#line 210 "optabs.h"
extern  optab optab_table[OTI_MAX]; 
#line 312 "optabs.h"
enum convert_optab_index {CTI_sext,CTI_zext,CTI_trunc,CTI_sfix,CTI_ufix,CTI_sfixtrunc,CTI_ufixtrunc,CTI_sfloat,CTI_ufloat,CTI_MAX}; 
#line 314 "optabs.h"
extern  convert_optab convert_optab_table[CTI_MAX]; 
# 296 "optabs.h" 
# 329 "optabs.h" 
extern enum insn_code reload_in_optab[NUM_MACHINE_MODES]; 
#line 330 "optabs.h"
extern enum insn_code reload_out_optab[NUM_MACHINE_MODES]; 
#line 333 "optabs.h"
extern  optab code_to_optab[(((int )LAST_AND_UNUSED_RTX_CODE)) + 1]; 
#line 336 "optabs.h"
typedef  rtx (*rtxfun)( rtx ); 
#line 341 "optabs.h"
extern  rtxfun bcc_gen_fctn[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 347 "optabs.h"
extern enum insn_code setcc_gen_code[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 353 "optabs.h"
extern enum insn_code movcc_gen_code[NUM_MACHINE_MODES]; 
#line 357 "optabs.h"
extern enum insn_code movstr_optab[NUM_MACHINE_MODES]; 
#line 360 "optabs.h"
extern enum insn_code clrstr_optab[NUM_MACHINE_MODES]; 
#line 364 "optabs.h"
extern enum insn_code cmpstr_optab[NUM_MACHINE_MODES]; 
#line 365 "optabs.h"
extern enum insn_code cmpmem_optab[NUM_MACHINE_MODES]; 
#line 371 "optabs.h"
extern  rtx expand_binop(enum machine_mode ,  optab ,  rtx ,  rtx ,  rtx , int , enum optab_methods ); 
#line 375 "optabs.h"
extern  rtx sign_expand_binop(enum machine_mode ,  optab ,  optab ,  rtx ,  rtx ,  rtx , int , enum optab_methods ); 
#line 378 "optabs.h"
extern int expand_twoval_binop( optab ,  rtx ,  rtx ,  rtx ,  rtx , int ); 
#line 381 "optabs.h"
extern  rtx expand_unop(enum machine_mode ,  optab ,  rtx ,  rtx , int ); 
#line 384 "optabs.h"
extern  rtx expand_abs_nojump(enum machine_mode ,  rtx ,  rtx , int ); 
#line 385 "optabs.h"
extern  rtx expand_abs(enum machine_mode ,  rtx ,  rtx , int , int ); 
#line 388 "optabs.h"
extern  rtx expand_complex_abs(enum machine_mode ,  rtx ,  rtx , int ); 
#line 392 "optabs.h"
extern void emit_unop_insn(int ,  rtx ,  rtx , enum rtx_code ); 
#line 396 "optabs.h"
extern  rtx emit_no_conflict_block( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 399 "optabs.h"
extern void emit_clr_insn( rtx ); 
#line 402 "optabs.h"
extern void emit_0_to_1_insn( rtx ); 
#line 406 "optabs.h"
extern void emit_cmp_insn( rtx ,  rtx , enum rtx_code ,  rtx , enum machine_mode , int ); 
#line 415 "optabs.h"
enum can_compare_purpose {ccp_jump,ccp_cmov,ccp_store_flag}; 
#line 420 "optabs.h"
extern int can_compare_p(enum rtx_code , enum machine_mode , enum can_compare_purpose ); 
#line 423 "optabs.h"
extern  rtx prepare_operand(int ,  rtx , int , enum machine_mode , enum machine_mode , int ); 
#line 426 "optabs.h"
extern enum insn_code can_extend_p(enum machine_mode , enum machine_mode , int ); 
#line 431 "optabs.h"
extern  rtx gen_extend_insn( rtx ,  rtx , enum machine_mode , enum machine_mode , int ); 
#line 435 "optabs.h"
extern void init_fixtab(void ); 
#line 436 "optabs.h"
extern void init_floattab(void ); 
#line 439 "optabs.h"
extern void set_optab_libfunc( optab , enum machine_mode , const char *); 
#line 441 "optabs.h"
extern void set_conv_libfunc( convert_optab , enum machine_mode , enum machine_mode , const char *); 
#line 444 "optabs.h"
extern void expand_float( rtx ,  rtx , int ); 
#line 447 "optabs.h"
extern void expand_fix( rtx ,  rtx , int ); 
# 98 "reload.c" 2
# 1 "recog.h" 1
# 32 "recog.h" 
enum op_type {OP_IN,OP_OUT,OP_INOUT}; 
#line 71 "recog.h"
struct operand_alternative {const char *constraint; enum reg_class class; unsigned int reject; int matches; int matched; unsigned int earlyclobber:1; unsigned int memory_ok:1; unsigned int offmem_ok:1; unsigned int nonoffmem_ok:1; unsigned int decmem_ok:1; unsigned int incmem_ok:1; unsigned int is_address:1; unsigned int anything_ok:1; }; 
#line 74 "recog.h"
extern void init_recog(void ); 
#line 75 "recog.h"
extern void init_recog_no_volatile(void ); 
#line 76 "recog.h"
extern int recog_memoized_1( rtx ); 
#line 77 "recog.h"
extern int check_asm_operands( rtx ); 
#line 78 "recog.h"
extern int asm_operand_ok( rtx , const char *); 
#line 79 "recog.h"
extern int validate_change( rtx ,  rtx *,  rtx , int ); 
#line 80 "recog.h"
extern int insn_invalid_p( rtx ); 
#line 81 "recog.h"
extern int apply_change_group(void ); 
#line 82 "recog.h"
extern int num_validated_changes(void ); 
#line 83 "recog.h"
extern void cancel_changes(int ); 
#line 84 "recog.h"
extern int constrain_operands(int ); 
#line 85 "recog.h"
extern int constrain_operands_cached(int ); 
#line 86 "recog.h"
extern int memory_address_p(enum machine_mode ,  rtx ); 
#line 87 "recog.h"
extern int strict_memory_address_p(enum machine_mode ,  rtx ); 
#line 88 "recog.h"
extern int validate_replace_rtx_subexp( rtx ,  rtx ,  rtx ,  rtx *); 
#line 89 "recog.h"
extern int validate_replace_rtx( rtx ,  rtx ,  rtx ); 
#line 90 "recog.h"
extern void validate_replace_rtx_group( rtx ,  rtx ,  rtx ); 
#line 91 "recog.h"
extern int validate_replace_src( rtx ,  rtx ,  rtx ); 
#line 92 "recog.h"
extern void validate_replace_src_group( rtx ,  rtx ,  rtx ); 
#line 93 "recog.h"
extern int num_changes_pending(void ); 
#line 97 "recog.h"
extern int reg_fits_class_p( rtx , enum reg_class , int , enum machine_mode ); 
#line 98 "recog.h"
extern  rtx *find_single_use( rtx ,  rtx ,  rtx *); 
#line 100 "recog.h"
extern int general_operand( rtx , enum machine_mode ); 
#line 101 "recog.h"
extern int address_operand( rtx , enum machine_mode ); 
#line 102 "recog.h"
extern int register_operand( rtx , enum machine_mode ); 
#line 103 "recog.h"
extern int pmode_register_operand( rtx , enum machine_mode ); 
#line 104 "recog.h"
extern int scratch_operand( rtx , enum machine_mode ); 
#line 105 "recog.h"
extern int immediate_operand( rtx , enum machine_mode ); 
#line 106 "recog.h"
extern int const_int_operand( rtx , enum machine_mode ); 
#line 107 "recog.h"
extern int const_double_operand( rtx , enum machine_mode ); 
#line 108 "recog.h"
extern int nonimmediate_operand( rtx , enum machine_mode ); 
#line 109 "recog.h"
extern int nonmemory_operand( rtx , enum machine_mode ); 
#line 110 "recog.h"
extern int push_operand( rtx , enum machine_mode ); 
#line 111 "recog.h"
extern int pop_operand( rtx , enum machine_mode ); 
#line 112 "recog.h"
extern int memory_operand( rtx , enum machine_mode ); 
#line 113 "recog.h"
extern int indirect_operand( rtx , enum machine_mode ); 
#line 114 "recog.h"
extern int comparison_operator( rtx , enum machine_mode ); 
#line 116 "recog.h"
extern int offsettable_memref_p( rtx ); 
#line 117 "recog.h"
extern int offsettable_nonstrict_memref_p( rtx ); 
#line 118 "recog.h"
extern int offsettable_address_p(int , enum machine_mode ,  rtx ); 
#line 119 "recog.h"
extern int mode_dependent_address_p( rtx ); 
#line 121 "recog.h"
extern int recog( rtx ,  rtx , int *); 
#line 122 "recog.h"
extern void add_clobbers( rtx , int ); 
#line 123 "recog.h"
extern int added_clobbers_hard_reg_p(int ); 
#line 124 "recog.h"
extern void insn_extract( rtx ); 
#line 125 "recog.h"
extern void extract_insn( rtx ); 
#line 126 "recog.h"
extern void extract_constrain_insn_cached( rtx ); 
#line 127 "recog.h"
extern void extract_insn_cached( rtx ); 
#line 128 "recog.h"
extern void preprocess_constraints(void ); 
#line 129 "recog.h"
extern  rtx peep2_next_insn(int ); 
#line 130 "recog.h"
extern int peep2_regno_dead_p(int , int ); 
#line 131 "recog.h"
extern int peep2_reg_dead_p(int ,  rtx ); 
#line 136 "recog.h"
extern void peephole2_optimize( FILE *); 
#line 137 "recog.h"
extern  rtx peephole2_insns( rtx ,  rtx , int *); 
#line 139 "recog.h"
extern int store_data_bypass_p( rtx ,  rtx ); 
#line 140 "recog.h"
extern int if_test_bypass_p( rtx ,  rtx ); 
#line 143 "recog.h"
extern int volatile_ok; 
#line 147 "recog.h"
extern int which_alternative; 
#line 203 "recog.h"
struct recog_data { rtx operand[30];  rtx *operand_loc[30]; const char *constraints[30]; enum machine_mode operand_mode[30]; enum op_type operand_type[30];  rtx *dup_loc[4]; char dup_num[4]; char n_operands; char n_dups; char n_alternatives;  rtx insn; }; 
#line 205 "recog.h"
extern struct recog_data recog_data; 
#line 209 "recog.h"
extern struct operand_alternative recog_op_alt[30][30]; 
#line 214 "recog.h"
typedef int (*insn_operand_predicate_fn)( rtx , enum machine_mode ); 
#line 215 "recog.h"
typedef const char *(*insn_output_fn)( rtx *,  rtx ); 
#line 216 "recog.h"
typedef  rtx (*insn_gen_fn)( rtx , ...); 
#line 229 "recog.h"
struct insn_operand_data {const  insn_operand_predicate_fn predicate; const char *const constraint;  __extension__ enum machine_mode const mode:16; const char strict_low; const char eliminable; }; 
# 193 "recog.h" 
# 261 "recog.h" 
struct insn_data {const char *const name; union {const char *single; const char *const *multi;  insn_output_fn function; }output; const  insn_gen_fn genfun; const struct insn_operand_data *const operand; const char n_operands; const char n_dups; const char n_alternatives; const char output_format; }; 
#line 263 "recog.h"
extern const struct insn_data insn_data[]; 
# 99 "reload.c" 2
# 1 "reload.h" 1
# 47 "reload.h" 
extern int memory_move_secondary_cost(enum machine_mode , enum reg_class , int ); 
#line 83 "reload.h"
enum reload_type {RELOAD_FOR_INPUT,RELOAD_FOR_OUTPUT,RELOAD_FOR_INSN,RELOAD_FOR_INPUT_ADDRESS,RELOAD_FOR_INPADDR_ADDRESS,RELOAD_FOR_OUTPUT_ADDRESS,RELOAD_FOR_OUTADDR_ADDRESS,RELOAD_FOR_OPERAND_ADDRESS,RELOAD_FOR_OPADDR_ADDR,RELOAD_OTHER,RELOAD_FOR_OTHER_ADDRESS}; 
#line 161 "reload.h"
struct reload { rtx in;  rtx out; enum reg_class class; enum machine_mode inmode; enum machine_mode outmode; enum machine_mode mode; unsigned int nregs; int inc;  rtx in_reg;  rtx out_reg; int regno;  rtx reg_rtx; int opnum; int secondary_in_reload; int secondary_out_reload; enum insn_code secondary_in_icode; enum insn_code secondary_out_icode; enum reload_type when_needed; unsigned int optional:1; unsigned int nocombine:1; unsigned int secondary_p:1; unsigned int nongroup:1; }; 
#line 163 "reload.h"
extern struct reload rld[(2 * 30 * (2 + 1))]; 
#line 164 "reload.h"
extern int n_reloads; 
#line 167 "reload.h"
extern  rtx *reg_equiv_constant; 
#line 168 "reload.h"
extern  rtx *reg_equiv_memory_loc; 
#line 169 "reload.h"
extern  rtx *reg_equiv_address; 
#line 170 "reload.h"
extern  rtx *reg_equiv_mem; 
#line 174 "reload.h"
extern int n_earlyclobbers; 
#line 175 "reload.h"
extern  rtx reload_earlyclobbers[30]; 
#line 178 "reload.h"
extern int reload_n_operands; 
#line 182 "reload.h"
extern int reload_first_uid; 
#line 188 "reload.h"
extern char indirect_symref_ok; 
#line 191 "reload.h"
extern char double_reg_address_ok; 
#line 193 "reload.h"
extern int num_not_at_initial_offset; 
#line 200 "reload.h"
struct needs {short regs[2][(((int )LIM_REG_CLASSES))]; short groups[(((int )LIM_REG_CLASSES))]; }; 
# 76 "reload.h" 
# 260 "reload.h" 
extern  rtx get_secondary_mem( rtx , enum machine_mode , int , enum reload_type ); 
#line 263 "reload.h"
extern void clear_secondary_mem(void ); 
#line 267 "reload.h"
extern void transfer_replacements(int , int ); 
#line 273 "reload.h"
extern int remove_address_replacements( rtx in_rtx); 
#line 278 "reload.h"
extern int operands_match_p( rtx ,  rtx ); 
#line 281 "reload.h"
extern int safe_from_earlyclobber( rtx ,  rtx ); 
#line 286 "reload.h"
extern int find_reloads( rtx , int , int , int , short *); 
#line 292 "reload.h"
extern  rtx form_sum( rtx ,  rtx ); 
#line 296 "reload.h"
extern void subst_reloads( rtx ); 
#line 301 "reload.h"
extern void copy_replacements( rtx ,  rtx ); 
#line 304 "reload.h"
extern void move_replacements( rtx *x,  rtx *y); 
#line 308 "reload.h"
extern  rtx find_replacement( rtx *); 
#line 314 "reload.h"
extern int refers_to_regno_for_reload_p(unsigned int , unsigned int ,  rtx ,  rtx *); 
#line 317 "reload.h"
extern int reg_overlap_mentioned_for_reload_p( rtx ,  rtx ); 
#line 321 "reload.h"
extern int refers_to_mem_for_reload_p( rtx ); 
#line 326 "reload.h"
extern  rtx find_equiv_reg( rtx ,  rtx , enum reg_class , int , short *, int , enum machine_mode ); 
#line 329 "reload.h"
extern int regno_clobbered_p(unsigned int ,  rtx , enum machine_mode , int ); 
#line 332 "reload.h"
extern int earlyclobber_operand_p( rtx ); 
#line 337 "reload.h"
extern int push_reload( rtx ,  rtx ,  rtx *,  rtx *, enum reg_class , enum machine_mode , enum machine_mode , int , int , int , enum reload_type ); 
#line 340 "reload.h"
extern void reload_cse_regs( rtx ); 
#line 343 "reload.h"
extern int reloads_conflict(int , int ); 
#line 346 "reload.h"
extern void init_reload(void ); 
#line 349 "reload.h"
extern int reload( rtx , int ); 
#line 353 "reload.h"
extern void mark_home_live(int ); 
#line 357 "reload.h"
extern  rtx eliminate_regs( rtx , enum machine_mode ,  rtx ); 
#line 362 "reload.h"
extern  rtx gen_reload( rtx ,  rtx , int , enum reload_type ); 
#line 365 "reload.h"
extern void deallocate_reload_reg(int r); 
#line 370 "reload.h"
extern void init_caller_save(void ); 
#line 373 "reload.h"
extern void init_save_areas(void ); 
#line 376 "reload.h"
extern void setup_save_areas(void ); 
#line 379 "reload.h"
extern void save_call_clobbered_regs(void ); 
#line 382 "reload.h"
extern void cleanup_subreg_operands( rtx ); 
#line 385 "reload.h"
extern void debug_reload_to_stream( FILE *); 
#line 386 "reload.h"
extern void debug_reload(void ); 
#line 390 "reload.h"
extern  rtx reload_adjust_reg_for_mode( rtx , enum machine_mode ); 
# 100 "reload.c" 2
# 1 "regs.h" 1
# 23 "regs.h" 
# 1 "varray.h" 1
# 39 "varray.h" 
# 58 "varray.h" 
struct const_equiv_data { rtx rtx; unsigned age; }; 
#line 85 "varray.h"
enum varray_data_enum {VARRAY_DATA_C,VARRAY_DATA_UC,VARRAY_DATA_S,VARRAY_DATA_US,VARRAY_DATA_I,VARRAY_DATA_U,VARRAY_DATA_L,VARRAY_DATA_UL,VARRAY_DATA_HINT,VARRAY_DATA_UHINT,VARRAY_DATA_GENERIC,VARRAY_DATA_CPTR,VARRAY_DATA_RTX,VARRAY_DATA_RTVEC,VARRAY_DATA_TREE,VARRAY_DATA_BITMAP,VARRAY_DATA_REG,VARRAY_DATA_CONST_EQUIV,VARRAY_DATA_BB,VARRAY_DATA_TE,NUM_VARRAY_DATA}; 
#line 129 "varray.h"
typedef union varray_data_tag {char c[1]; unsigned char uc[1]; short s[1]; unsigned short us[1]; int i[1]; unsigned int u[1]; long l[1]; unsigned long ul[1]; long hint[1]; unsigned long uhint[1]; void *generic[1]; char *cptr[1];  rtx rtx[1];  rtvec rtvec[1];  tree tree[1]; struct bitmap_head_def *bitmap[1]; struct reg_info_def *reg[1]; struct const_equiv_data const_equiv[1]; struct basic_block_def *bb[1]; struct elt_list *te[1]; }varray_data; 
#line 140 "varray.h"
struct varray_head_tag { size_t num_elements;  size_t elements_used; enum varray_data_enum type; const char *name;  varray_data data; }; 
#line 141 "varray.h"
typedef struct varray_head_tag *varray_type; 
#line 145 "varray.h"
extern  varray_type varray_init( size_t , enum varray_data_enum , const char *); 
#line 213 "varray.h"
extern  varray_type varray_grow( varray_type ,  size_t ); 
# 213 "varray.h" 
# 224 "varray.h" 
extern void varray_clear( varray_type ); 
#line 226 "varray.h"
extern void dump_varray_statistics(void ); 
# 24 "regs.h" 2
# 1 "hard-reg-set.h" 1
# 41 "hard-reg-set.h" 
typedef unsigned long HARD_REG_ELT_TYPE; 
#line 52 "hard-reg-set.h"
typedef  HARD_REG_ELT_TYPE HARD_REG_SET[((53 + (8 * 4) - 1) / (8 * 4))]; 
# 52 "hard-reg-set.h" 
# 395 "hard-reg-set.h" 
extern char fixed_regs[53]; 
#line 399 "hard-reg-set.h"
extern  HARD_REG_SET fixed_reg_set; 
#line 406 "hard-reg-set.h"
extern char call_used_regs[53]; 
#line 414 "hard-reg-set.h"
extern  HARD_REG_SET call_used_reg_set; 
#line 417 "hard-reg-set.h"
extern  HARD_REG_SET losing_caller_save_reg_set; 
#line 425 "hard-reg-set.h"
extern char call_fixed_regs[53]; 
#line 429 "hard-reg-set.h"
extern  HARD_REG_SET call_fixed_reg_set; 
#line 436 "hard-reg-set.h"
extern char global_regs[53]; 
#line 445 "hard-reg-set.h"
extern  HARD_REG_SET regs_invalidated_by_call; 
#line 450 "hard-reg-set.h"
extern int reg_alloc_order[53]; 
#line 454 "hard-reg-set.h"
extern int inv_reg_alloc_order[53]; 
#line 459 "hard-reg-set.h"
extern  HARD_REG_SET reg_class_contents[(((int )LIM_REG_CLASSES))]; 
#line 463 "hard-reg-set.h"
extern unsigned int reg_class_size[(((int )LIM_REG_CLASSES))]; 
#line 467 "hard-reg-set.h"
extern enum reg_class reg_class_superclasses[(((int )LIM_REG_CLASSES))][(((int )LIM_REG_CLASSES))]; 
#line 471 "hard-reg-set.h"
extern enum reg_class reg_class_subclasses[(((int )LIM_REG_CLASSES))][(((int )LIM_REG_CLASSES))]; 
#line 476 "hard-reg-set.h"
extern enum reg_class reg_class_subunion[(((int )LIM_REG_CLASSES))][(((int )LIM_REG_CLASSES))]; 
#line 481 "hard-reg-set.h"
extern enum reg_class reg_class_superunion[(((int )LIM_REG_CLASSES))][(((int )LIM_REG_CLASSES))]; 
#line 485 "hard-reg-set.h"
extern int n_non_fixed_regs; 
#line 489 "hard-reg-set.h"
extern const char *reg_names[53]; 
# 445 "hard-reg-set.h" 
# 25 "regs.h" 2
# 1 "basic-block.h" 1
# 25 "basic-block.h" 
# 1 "bitmap.h" 1
# 29 "bitmap.h" 
typedef unsigned long BITMAP_WORD; 
#line 57 "bitmap.h"
typedef struct bitmap_element_def {struct bitmap_element_def *next; struct bitmap_element_def *prev; unsigned int indx;  BITMAP_WORD bits[((128 + (8 * 4) - 1) / (8 * 4))]; }bitmap_element; 
#line 66 "bitmap.h"
typedef struct bitmap_head_def { bitmap_element *first;  bitmap_element *current; unsigned int indx; int using_obstack; }bitmap_head; 
#line 67 "bitmap.h"
typedef struct bitmap_head_def *bitmap; 
#line 76 "bitmap.h"
enum bitmap_bits {BITMAP_AND,BITMAP_AND_COMPL,BITMAP_IOR,BITMAP_XOR,BITMAP_IOR_COMPL}; 
#line 79 "bitmap.h"
extern  bitmap_element bitmap_zero_bits; 
#line 82 "bitmap.h"
extern void bitmap_clear( bitmap ); 
#line 85 "bitmap.h"
extern void bitmap_copy( bitmap ,  bitmap ); 
#line 88 "bitmap.h"
extern int bitmap_equal_p( bitmap ,  bitmap ); 
#line 91 "bitmap.h"
extern int bitmap_operation( bitmap ,  bitmap ,  bitmap , enum bitmap_bits ); 
#line 95 "bitmap.h"
extern void bitmap_ior_and_compl( bitmap ,  bitmap ,  bitmap ); 
#line 98 "bitmap.h"
extern void bitmap_clear_bit( bitmap , int ); 
#line 101 "bitmap.h"
extern void bitmap_set_bit( bitmap , int ); 
#line 104 "bitmap.h"
extern int bitmap_bit_p( bitmap , int ); 
#line 107 "bitmap.h"
extern void debug_bitmap( bitmap ); 
#line 108 "bitmap.h"
extern void debug_bitmap_file( FILE *,  bitmap ); 
#line 111 "bitmap.h"
extern void bitmap_print( FILE *,  bitmap , const char *, const char *); 
#line 115 "bitmap.h"
extern  bitmap bitmap_initialize( bitmap head, int using_obstack); 
#line 118 "bitmap.h"
extern void bitmap_release_memory(void ); 
#line 125 "bitmap.h"
extern int bitmap_union_of_diff( bitmap ,  bitmap ,  bitmap ,  bitmap ); 
#line 126 "bitmap.h"
extern int bitmap_first_set_bit( bitmap ); 
#line 127 "bitmap.h"
extern int bitmap_last_set_bit( bitmap ); 
# 51 "bitmap.h" 
# 26 "basic-block.h" 2
# 1 "sbitmap.h" 1
# 37 "sbitmap.h" 
typedef struct simple_bitmap_def {unsigned int n_bits; unsigned int size; unsigned int bytes; unsigned long elms[1]; }*sbitmap; 
#line 39 "sbitmap.h"
typedef unsigned long *sbitmap_ptr; 
#line 119 "sbitmap.h"
struct int_list ; 
#line 121 "sbitmap.h"
extern void dump_sbitmap( FILE *,  sbitmap ); 
#line 122 "sbitmap.h"
extern void dump_sbitmap_file( FILE *,  sbitmap ); 
#line 124 "sbitmap.h"
extern void dump_sbitmap_vector( FILE *, const char *, const char *,  sbitmap *, int ); 
#line 125 "sbitmap.h"
extern  sbitmap sbitmap_alloc(unsigned int ); 
#line 126 "sbitmap.h"
extern  sbitmap *sbitmap_vector_alloc(unsigned int , unsigned int ); 
#line 127 "sbitmap.h"
extern  sbitmap sbitmap_resize( sbitmap , unsigned int , int ); 
#line 128 "sbitmap.h"
extern void sbitmap_copy( sbitmap ,  sbitmap ); 
#line 129 "sbitmap.h"
extern int sbitmap_equal( sbitmap ,  sbitmap ); 
#line 130 "sbitmap.h"
extern void sbitmap_zero( sbitmap ); 
#line 131 "sbitmap.h"
extern void sbitmap_ones( sbitmap ); 
#line 132 "sbitmap.h"
extern void sbitmap_vector_zero( sbitmap *, unsigned int ); 
#line 133 "sbitmap.h"
extern void sbitmap_vector_ones( sbitmap *, unsigned int ); 
#line 135 "sbitmap.h"
extern void sbitmap_union_of_diff( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 136 "sbitmap.h"
extern _Bool sbitmap_union_of_diff_cg( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 137 "sbitmap.h"
extern void sbitmap_difference( sbitmap ,  sbitmap ,  sbitmap ); 
#line 138 "sbitmap.h"
extern void sbitmap_not( sbitmap ,  sbitmap ); 
#line 139 "sbitmap.h"
extern void sbitmap_a_or_b_and_c( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 140 "sbitmap.h"
extern _Bool sbitmap_a_or_b_and_c_cg( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 141 "sbitmap.h"
extern void sbitmap_a_and_b_or_c( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 142 "sbitmap.h"
extern _Bool sbitmap_a_and_b_or_c_cg( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 143 "sbitmap.h"
extern void sbitmap_a_and_b( sbitmap ,  sbitmap ,  sbitmap ); 
#line 144 "sbitmap.h"
extern _Bool sbitmap_a_and_b_cg( sbitmap ,  sbitmap ,  sbitmap ); 
#line 145 "sbitmap.h"
extern void sbitmap_a_or_b( sbitmap ,  sbitmap ,  sbitmap ); 
#line 146 "sbitmap.h"
extern _Bool sbitmap_a_or_b_cg( sbitmap ,  sbitmap ,  sbitmap ); 
#line 147 "sbitmap.h"
extern void sbitmap_a_xor_b( sbitmap ,  sbitmap ,  sbitmap ); 
#line 148 "sbitmap.h"
extern _Bool sbitmap_a_xor_b_cg( sbitmap ,  sbitmap ,  sbitmap ); 
#line 149 "sbitmap.h"
extern _Bool sbitmap_a_subset_b_p( sbitmap ,  sbitmap ); 
#line 151 "sbitmap.h"
extern int sbitmap_first_set_bit( sbitmap ); 
#line 152 "sbitmap.h"
extern int sbitmap_last_set_bit( sbitmap ); 
#line 155 "sbitmap.h"
extern void sbitmap_intersect_of_predsucc( sbitmap ,  sbitmap *, int , struct int_list **); 
#line 160 "sbitmap.h"
extern void sbitmap_union_of_predsucc( sbitmap ,  sbitmap *, int , struct int_list **); 
#line 167 "sbitmap.h"
extern void sbitmap_intersection_of_succs( sbitmap ,  sbitmap *, int ); 
#line 168 "sbitmap.h"
extern void sbitmap_intersection_of_preds( sbitmap ,  sbitmap *, int ); 
#line 169 "sbitmap.h"
extern void sbitmap_union_of_succs( sbitmap ,  sbitmap *, int ); 
#line 170 "sbitmap.h"
extern void sbitmap_union_of_preds( sbitmap ,  sbitmap *, int ); 
#line 172 "sbitmap.h"
extern void debug_sbitmap( sbitmap ); 
# 119 "sbitmap.h" 
# 27 "basic-block.h" 2
# 1 "./../include/partition.h" 1
# 57 "./../include/partition.h" 
struct partition_elem {int class_element; struct partition_elem *next; unsigned class_count; }; 
#line 65 "./../include/partition.h"
typedef struct partition_def {int num_elements; struct partition_elem elements[1]; }*partition; 
#line 67 "./../include/partition.h"
extern  partition partition_new(int ); 
#line 68 "./../include/partition.h"
extern void partition_delete( partition ); 
#line 69 "./../include/partition.h"
extern int partition_union( partition , int , int ); 
#line 72 "./../include/partition.h"
extern void partition_print( partition ,  FILE *); 
#line 32 "basic-block.h"
typedef  bitmap_head regset_head; 
#line 34 "basic-block.h"
typedef  bitmap regset; 
# 29 "basic-block.h" 2
# 75 "basic-block.h" 
extern void reg_set_to_hard_reg_set( HARD_REG_SET *,  bitmap ); 
#line 121 "basic-block.h"
typedef long long gcov_type; 
#line 141 "basic-block.h"
typedef struct edge_def {struct edge_def *pred_next,*succ_next; struct basic_block_def *src,*dest;  rtx insns; void *aux; int flags; int probability;  gcov_type count; }*edge; 
# 121 "basic-block.h" 
# 162 "basic-block.h" 
extern const struct gcov_ctr_summary *profile_info; 
#line 165 "basic-block.h"
struct loop ; 
#line 166 "basic-block.h"
struct loops ; 
#line 251 "basic-block.h"
typedef struct basic_block_def { rtx head_,end_;  tree head_tree;  tree end_tree;  edge pred,succ;  regset local_set;  regset cond_local_set;  regset global_live_at_start;  regset global_live_at_end; void *aux; int index; struct basic_block_def *prev_bb,*next_bb; int loop_depth; struct loop *loop_father; struct et_node *dom[2];  gcov_type count; int frequency; int flags; struct reorder_block_def *rbi; }*basic_block; 
# 194 "basic-block.h" 
# 265 "basic-block.h" 
extern int n_basic_blocks; 
#line 269 "basic-block.h"
extern int last_basic_block; 
#line 273 "basic-block.h"
extern int n_edges; 
#line 277 "basic-block.h"
extern  varray_type basic_block_info; 
#line 299 "basic-block.h"
extern  regset regs_live_at_setjmp; 
#line 303 "basic-block.h"
extern  rtx label_value_list; 
#line 304 "basic-block.h"
extern  rtx tail_recursion_label_list; 
#line 306 "basic-block.h"
extern struct obstack flow_obstack; 
# 299 "basic-block.h" 
# 333 "basic-block.h" 
extern struct basic_block_def entry_exit_blocks[2]; 
#line 340 "basic-block.h"
extern void compute_bb_for_insn(void ); 
#line 341 "basic-block.h"
extern void free_bb_for_insn(void ); 
#line 342 "basic-block.h"
extern void update_bb_for_insn( basic_block ); 
#line 344 "basic-block.h"
extern void free_basic_block_vars(int ); 
#line 346 "basic-block.h"
extern void insert_insn_on_edge( rtx ,  edge ); 
#line 347 "basic-block.h"
_Bool safe_insert_insn_on_edge( rtx ,  edge ); 
#line 349 "basic-block.h"
extern void commit_edge_insertions(void ); 
#line 350 "basic-block.h"
extern void commit_edge_insertions_watch_calls(void ); 
#line 352 "basic-block.h"
extern void remove_fake_edges(void ); 
#line 353 "basic-block.h"
extern void add_noreturn_fake_exit_edges(void ); 
#line 354 "basic-block.h"
extern void connect_infinite_loops_to_exit(void ); 
#line 355 "basic-block.h"
extern int flow_call_edges_add( sbitmap ); 
#line 356 "basic-block.h"
extern  edge unchecked_make_edge( basic_block ,  basic_block , int ); 
#line 357 "basic-block.h"
extern  edge cached_make_edge( sbitmap *,  basic_block ,  basic_block , int ); 
#line 358 "basic-block.h"
extern  edge make_edge( basic_block ,  basic_block , int ); 
#line 359 "basic-block.h"
extern  edge make_single_succ_edge( basic_block ,  basic_block , int ); 
#line 360 "basic-block.h"
extern void remove_edge( edge ); 
#line 361 "basic-block.h"
extern void redirect_edge_succ( edge ,  basic_block ); 
#line 362 "basic-block.h"
extern  edge redirect_edge_succ_nodup( edge ,  basic_block ); 
#line 363 "basic-block.h"
extern void redirect_edge_pred( edge ,  basic_block ); 
#line 364 "basic-block.h"
extern  basic_block create_basic_block_structure( rtx ,  rtx ,  rtx ,  basic_block ); 
#line 365 "basic-block.h"
extern void clear_bb_flags(void ); 
#line 366 "basic-block.h"
extern void tidy_fallthru_edge( edge ,  basic_block ,  basic_block ); 
#line 367 "basic-block.h"
extern void tidy_fallthru_edges(void ); 
#line 368 "basic-block.h"
extern void flow_reverse_top_sort_order_compute(int *); 
#line 369 "basic-block.h"
extern int flow_depth_first_order_compute(int *, int *); 
#line 370 "basic-block.h"
extern void flow_preorder_transversal_compute(int *); 
#line 373 "basic-block.h"
extern int dfs_enumerate_from( basic_block , int , _Bool (*)( basic_block , void *),  basic_block *, int , void *); 
#line 374 "basic-block.h"
extern void dump_edge_info( FILE *,  edge , int ); 
#line 375 "basic-block.h"
extern void clear_edges(void ); 
#line 376 "basic-block.h"
extern void mark_critical_edges(void ); 
#line 377 "basic-block.h"
extern  rtx first_insn_after_basic_block_note( basic_block ); 
#line 404 "basic-block.h"
typedef struct ce_if_block { basic_block test_bb;  basic_block then_bb;  basic_block else_bb;  basic_block join_bb;  basic_block last_test_bb; int num_multiple_test_blocks; int num_and_and_blocks; int num_or_or_blocks; int num_multiple_test_insns; int and_and_p; int num_then_insns; int num_else_insns; int pass; }ce_if_block_t; 
#line 412 "basic-block.h"
struct edge_list {int num_blocks; int num_edges;  edge *index_to_edge; }; 
#line 450 "basic-block.h"
struct edge_list *create_edge_list(void ); 
#line 451 "basic-block.h"
void free_edge_list(struct edge_list *); 
#line 452 "basic-block.h"
void print_edge_list( FILE *, struct edge_list *); 
#line 453 "basic-block.h"
void verify_edge_list( FILE *, struct edge_list *); 
#line 454 "basic-block.h"
int find_edge_index(struct edge_list *,  basic_block ,  basic_block ); 
#line 462 "basic-block.h"
enum update_life_extent {UPDATE_LIFE_LOCAL=0,UPDATE_LIFE_GLOBAL=1,UPDATE_LIFE_GLOBAL_RM_NOTES=2}; 
# 450 "basic-block.h" 
# 503 "basic-block.h" 
extern void life_analysis( rtx ,  FILE *, int ); 
#line 504 "basic-block.h"
extern int update_life_info( sbitmap , enum update_life_extent , int ); 
#line 505 "basic-block.h"
extern int update_life_info_in_dirty_blocks(enum update_life_extent , int ); 
#line 506 "basic-block.h"
extern int count_or_remove_death_notes( sbitmap , int ); 
#line 507 "basic-block.h"
extern int propagate_block( basic_block ,  regset ,  regset ,  regset , int ); 
#line 509 "basic-block.h"
struct propagate_block_info ; 
#line 510 "basic-block.h"
extern  rtx propagate_one_insn(struct propagate_block_info *,  rtx ); 
#line 512 "basic-block.h"
extern struct propagate_block_info *init_propagate_block_info( basic_block ,  regset ,  regset ,  regset , int ); 
#line 513 "basic-block.h"
extern void free_propagate_block_info(struct propagate_block_info *); 
#line 518 "basic-block.h"
extern struct edge_list *pre_edge_lcm( FILE *, int ,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap **,  sbitmap **); 
#line 522 "basic-block.h"
extern struct edge_list *pre_edge_rev_lcm( FILE *, int ,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap **,  sbitmap **); 
#line 523 "basic-block.h"
extern void compute_available( sbitmap *,  sbitmap *,  sbitmap *,  sbitmap *); 
#line 524 "basic-block.h"
extern int optimize_mode_switching( FILE *); 
#line 527 "basic-block.h"
extern  rtx emit_block_insn_after( rtx ,  rtx ,  basic_block ); 
#line 528 "basic-block.h"
extern  rtx emit_block_insn_before( rtx ,  rtx ,  basic_block ); 
#line 531 "basic-block.h"
extern void estimate_probability(struct loops *); 
#line 532 "basic-block.h"
extern void note_prediction_to_br_prob(void ); 
#line 533 "basic-block.h"
extern void expected_value_to_br_prob(void ); 
#line 534 "basic-block.h"
extern _Bool maybe_hot_bb_p( basic_block ); 
#line 535 "basic-block.h"
extern _Bool probably_cold_bb_p( basic_block ); 
#line 536 "basic-block.h"
extern _Bool probably_never_executed_bb_p( basic_block ); 
#line 539 "basic-block.h"
extern void init_flow(void ); 
#line 540 "basic-block.h"
extern void dump_bb( basic_block ,  FILE *); 
#line 541 "basic-block.h"
extern void debug_bb( basic_block ); 
#line 542 "basic-block.h"
extern  basic_block debug_bb_n(int ); 
#line 543 "basic-block.h"
extern void dump_regset( regset ,  FILE *); 
#line 544 "basic-block.h"
extern void debug_regset( regset ); 
#line 545 "basic-block.h"
extern void allocate_reg_life_data(void ); 
#line 546 "basic-block.h"
extern void allocate_bb_life_data(void ); 
#line 547 "basic-block.h"
extern void expunge_block( basic_block ); 
#line 548 "basic-block.h"
extern void link_block( basic_block ,  basic_block ); 
#line 549 "basic-block.h"
extern void unlink_block( basic_block ); 
#line 550 "basic-block.h"
extern void compact_blocks(void ); 
#line 551 "basic-block.h"
extern  basic_block alloc_block(void ); 
#line 552 "basic-block.h"
extern void find_unreachable_blocks(void ); 
#line 553 "basic-block.h"
extern int delete_noop_moves( rtx ); 
#line 554 "basic-block.h"
extern  basic_block force_nonfallthru( edge ); 
#line 555 "basic-block.h"
extern  rtx block_label( basic_block ); 
#line 556 "basic-block.h"
extern _Bool forwarder_block_p( basic_block ); 
#line 557 "basic-block.h"
extern _Bool purge_all_dead_edges(int ); 
#line 558 "basic-block.h"
extern _Bool purge_dead_edges( basic_block ); 
#line 559 "basic-block.h"
extern void find_sub_basic_blocks( basic_block ); 
#line 560 "basic-block.h"
extern void find_many_sub_basic_blocks( sbitmap ); 
#line 561 "basic-block.h"
extern _Bool can_fallthru( basic_block ,  basic_block ); 
#line 562 "basic-block.h"
extern void flow_nodes_print(const char *, const  sbitmap ,  FILE *); 
#line 563 "basic-block.h"
extern void flow_edge_list_print(const char *, const  edge *, int ,  FILE *); 
#line 564 "basic-block.h"
extern void alloc_aux_for_block( basic_block , int ); 
#line 565 "basic-block.h"
extern void alloc_aux_for_blocks(int ); 
#line 566 "basic-block.h"
extern void clear_aux_for_blocks(void ); 
#line 567 "basic-block.h"
extern void free_aux_for_blocks(void ); 
#line 568 "basic-block.h"
extern void alloc_aux_for_edge( edge , int ); 
#line 569 "basic-block.h"
extern void alloc_aux_for_edges(int ); 
#line 570 "basic-block.h"
extern void clear_aux_for_edges(void ); 
#line 571 "basic-block.h"
extern void free_aux_for_edges(void ); 
#line 576 "basic-block.h"
extern void verify_flow_info(void ); 
#line 578 "basic-block.h"
typedef struct conflict_graph_def *conflict_graph; 
#line 583 "basic-block.h"
typedef int (*conflict_graph_enum_fn)(int , int , void *); 
#line 589 "basic-block.h"
extern  conflict_graph conflict_graph_new(int ); 
#line 590 "basic-block.h"
extern void conflict_graph_delete( conflict_graph ); 
#line 591 "basic-block.h"
extern int conflict_graph_add( conflict_graph , int , int ); 
#line 592 "basic-block.h"
extern int conflict_graph_conflict_p( conflict_graph , int , int ); 
#line 594 "basic-block.h"
extern void conflict_graph_enum( conflict_graph , int ,  conflict_graph_enum_fn , void *); 
#line 595 "basic-block.h"
extern void conflict_graph_merge_regs( conflict_graph , int , int ); 
#line 596 "basic-block.h"
extern void conflict_graph_print( conflict_graph ,  FILE *); 
#line 597 "basic-block.h"
extern  conflict_graph conflict_graph_compute( regset ,  partition ); 
#line 598 "basic-block.h"
extern _Bool mark_dfs_back_edges(void ); 
#line 599 "basic-block.h"
extern void set_edge_can_fallthru_flag(void ); 
#line 600 "basic-block.h"
extern void update_br_prob_note( basic_block ); 
#line 601 "basic-block.h"
extern void fixup_abnormal_edges(void ); 
#line 602 "basic-block.h"
extern _Bool can_hoist_insn_p( rtx ,  rtx ,  regset ); 
#line 603 "basic-block.h"
extern  rtx hoist_insn_after( rtx ,  rtx ,  rtx ,  rtx ); 
#line 604 "basic-block.h"
extern  rtx hoist_insn_to_edge( rtx ,  edge ,  rtx ,  rtx ); 
#line 605 "basic-block.h"
extern _Bool inside_basic_block_p( rtx ); 
#line 606 "basic-block.h"
extern _Bool control_flow_insn_p( rtx ); 
#line 609 "basic-block.h"
extern void reorder_basic_blocks(void ); 
#line 617 "basic-block.h"
enum cdi_direction {CDI_DOMINATORS,CDI_POST_DOMINATORS}; 
#line 626 "basic-block.h"
enum dom_state {DOM_NONE,DOM_CONS_OK,DOM_NO_FAST_QUERY,DOM_OK}; 
#line 628 "basic-block.h"
extern enum dom_state dom_computed[2]; 
#line 630 "basic-block.h"
extern void calculate_dominance_info(enum cdi_direction ); 
#line 631 "basic-block.h"
extern void free_dominance_info(enum cdi_direction ); 
#line 633 "basic-block.h"
extern  basic_block nearest_common_dominator(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 635 "basic-block.h"
extern void set_immediate_dominator(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 636 "basic-block.h"
extern  basic_block get_immediate_dominator(enum cdi_direction ,  basic_block ); 
#line 637 "basic-block.h"
extern _Bool dominated_by_p(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 638 "basic-block.h"
extern int get_dominated_by(enum cdi_direction ,  basic_block ,  basic_block **); 
#line 639 "basic-block.h"
extern void add_to_dominance_info(enum cdi_direction ,  basic_block ); 
#line 640 "basic-block.h"
extern void delete_from_dominance_info(enum cdi_direction ,  basic_block ); 
#line 641 "basic-block.h"
 basic_block recount_dominator(enum cdi_direction ,  basic_block ); 
#line 643 "basic-block.h"
extern void redirect_immediate_dominators(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 644 "basic-block.h"
extern void iterate_fix_dominators(enum cdi_direction ,  basic_block *, int ); 
#line 645 "basic-block.h"
extern void verify_dominators(enum cdi_direction ); 
#line 646 "basic-block.h"
extern  basic_block first_dom_son(enum cdi_direction ,  basic_block ); 
#line 647 "basic-block.h"
extern  basic_block next_dom_son(enum cdi_direction ,  basic_block ); 
#line 648 "basic-block.h"
extern _Bool try_redirect_by_replacing_jump( edge ,  basic_block , _Bool ); 
# 1 "cfghooks.h" 1
# 62 "cfghooks.h" 
struct cfg_hooks {int (*cfgh_verify_flow_info)(void ); void (*dump_bb)( basic_block ,  FILE *);  basic_block (*create_basic_block)(void *head, void *end,  basic_block after); _Bool (*redirect_edge_and_branch)( edge e,  basic_block b);  basic_block (*redirect_edge_and_branch_force)( edge ,  basic_block ); void (*delete_block)( basic_block );  edge (*split_block)( basic_block b, void *i); _Bool (*can_merge_blocks_p)( basic_block a,  basic_block b); void (*merge_blocks)( basic_block a,  basic_block b);  basic_block (*cfgh_split_edge)( edge ); }; 
#line 74 "cfghooks.h"
extern struct cfg_hooks rtl_cfg_hooks; 
#line 77 "cfghooks.h"
extern struct cfg_hooks *cfg_hooks; 
#line 80 "cfghooks.h"
extern void rtl_register_cfg_hooks(void ); 
#line 81 "cfghooks.h"
extern void cfg_layout_rtl_register_cfg_hooks(void ); 
# 74 "cfghooks.h" 
# 651 "basic-block.h" 2
# 26 "regs.h" 2
# 44 "regs.h" 
extern int max_regno; 
#line 65 "regs.h"
typedef struct reg_info_def {int first_uid; int last_uid; int last_note_uid; int sets; int refs; int freq; int deaths; int live_length; int calls_crossed; int basic_block; char changes_mode; }reg_info; 
#line 67 "regs.h"
extern  varray_type reg_n_info; 
#line 69 "regs.h"
extern  bitmap_head subregs_of_mode; 
#line 154 "regs.h"
extern short *reg_renumber; 
#line 158 "regs.h"
extern char regs_ever_live[53]; 
#line 162 "regs.h"
extern char regs_asm_clobbered[53]; 
#line 169 "regs.h"
extern enum machine_mode reg_raw_mode[53]; 
# 154 "regs.h" 
# 192 "regs.h" 
extern  rtx regs_may_share; 
#line 197 "regs.h"
extern int caller_save_needed; 
#line 226 "regs.h"
extern void allocate_reg_info( size_t , int , int ); 
# 226 "regs.h" 
# 101 "reload.c" 2
# 1 "flags.h" 1
# 37 "flags.h" 
enum debug_info_type {NO_DEBUG,DBX_DEBUG,SDB_DEBUG,DWARF_DEBUG,DWARF2_DEBUG,XCOFF_DEBUG,VMS_DEBUG,VMS_AND_DWARF2_DEBUG}; 
#line 40 "flags.h"
extern enum debug_info_type write_symbols; 
#line 43 "flags.h"
extern const char *const debug_type_names[]; 
#line 51 "flags.h"
enum debug_info_level {DINFO_LEVEL_NONE,DINFO_LEVEL_TERSE,DINFO_LEVEL_NORMAL,DINFO_LEVEL_VERBOSE}; 
#line 54 "flags.h"
extern enum debug_info_level debug_info_level; 
#line 58 "flags.h"
extern _Bool use_gnu_debug_info_extensions; 
#line 61 "flags.h"
extern int flag_debug_only_used_symbols; 
#line 65 "flags.h"
extern int optimize; 
#line 69 "flags.h"
extern int optimize_size; 
#line 74 "flags.h"
extern int quiet_flag; 
#line 79 "flags.h"
extern int mem_report; 
#line 83 "flags.h"
extern _Bool inhibit_warnings; 
#line 87 "flags.h"
extern _Bool warn_system_headers; 
#line 92 "flags.h"
extern _Bool extra_warnings; 
#line 96 "flags.h"
extern _Bool warnings_are_errors; 
#line 102 "flags.h"
extern void set_Wunused(int setting); 
#line 104 "flags.h"
extern _Bool warn_unused_function; 
#line 105 "flags.h"
extern _Bool warn_unused_label; 
#line 106 "flags.h"
extern _Bool warn_unused_parameter; 
#line 107 "flags.h"
extern _Bool warn_unused_variable; 
#line 108 "flags.h"
extern _Bool warn_unused_value; 
#line 112 "flags.h"
extern _Bool warn_notreached; 
#line 116 "flags.h"
extern _Bool warn_inline; 
#line 120 "flags.h"
extern int warn_uninitialized; 
#line 124 "flags.h"
extern _Bool warn_shadow; 
#line 129 "flags.h"
extern _Bool warn_switch; 
#line 133 "flags.h"
extern _Bool warn_switch_default; 
#line 138 "flags.h"
extern _Bool warn_switch_enum; 
#line 143 "flags.h"
extern int warn_return_type; 
#line 147 "flags.h"
extern _Bool warn_missing_noreturn; 
#line 153 "flags.h"
extern _Bool warn_cast_align; 
#line 159 "flags.h"
extern _Bool warn_larger_than; 
#line 160 "flags.h"
extern long larger_than_size; 
#line 165 "flags.h"
extern _Bool warn_aggregate_return; 
#line 169 "flags.h"
extern _Bool warn_packed; 
#line 173 "flags.h"
extern _Bool warn_padded; 
#line 177 "flags.h"
extern _Bool warn_disabled_optimization; 
#line 182 "flags.h"
extern _Bool warn_deprecated_decl; 
#line 187 "flags.h"
extern _Bool warn_strict_aliasing; 
#line 191 "flags.h"
extern int profile_flag; 
#line 195 "flags.h"
extern int profile_arc_flag; 
#line 199 "flags.h"
extern int flag_profile_values; 
#line 203 "flags.h"
extern int flag_test_coverage; 
#line 207 "flags.h"
extern int flag_branch_probabilities; 
#line 211 "flags.h"
extern int flag_reorder_blocks; 
#line 215 "flags.h"
extern int flag_reorder_functions; 
#line 219 "flags.h"
extern int flag_rename_registers; 
#line 224 "flags.h"
extern int pedantic; 
#line 229 "flags.h"
extern int in_system_header; 
#line 234 "flags.h"
extern int flag_print_asm_name; 
#line 240 "flags.h"
extern int flag_signed_char; 
#line 244 "flags.h"
extern int flag_short_enums; 
#line 250 "flags.h"
extern int flag_caller_saves; 
#line 254 "flags.h"
extern int flag_pcc_struct_return; 
#line 259 "flags.h"
extern int flag_force_mem; 
#line 264 "flags.h"
extern int flag_force_addr; 
#line 269 "flags.h"
extern int flag_defer_pop; 
#line 274 "flags.h"
extern int flag_float_store; 
#line 278 "flags.h"
extern int flag_strength_reduce; 
#line 285 "flags.h"
extern int flag_old_unroll_loops; 
#line 290 "flags.h"
extern int flag_old_unroll_all_loops; 
#line 295 "flags.h"
extern int flag_move_all_movables; 
#line 299 "flags.h"
extern int flag_prefetch_loop_arrays; 
#line 304 "flags.h"
extern int flag_reduce_all_givs; 
#line 309 "flags.h"
extern int flag_cse_follow_jumps; 
#line 314 "flags.h"
extern int flag_cse_skip_blocks; 
#line 318 "flags.h"
extern int flag_expensive_optimizations; 
#line 323 "flags.h"
extern int flag_writable_strings; 
#line 329 "flags.h"
extern int flag_no_function_cse; 
#line 334 "flags.h"
extern int flag_omit_frame_pointer; 
#line 338 "flags.h"
extern int flag_no_peephole; 
#line 342 "flags.h"
extern int flag_optimize_sibling_calls; 
#line 347 "flags.h"
extern int flag_errno_math; 
#line 354 "flags.h"
extern int flag_unsafe_math_optimizations; 
#line 358 "flags.h"
extern int flag_finite_math_only; 
#line 364 "flags.h"
extern int flag_trapping_math; 
#line 369 "flags.h"
extern int flag_rounding_math; 
#line 375 "flags.h"
extern int flag_complex_divide_method; 
#line 379 "flags.h"
extern int flag_rerun_loop_opt; 
#line 384 "flags.h"
extern int flag_inline_functions; 
#line 390 "flags.h"
extern int flag_keep_inline_functions; 
#line 398 "flags.h"
extern int flag_no_inline; 
#line 403 "flags.h"
extern int flag_really_no_inline; 
#line 407 "flags.h"
extern int flag_syntax_only; 
#line 411 "flags.h"
extern int flag_gen_aux_info; 
#line 415 "flags.h"
extern int flag_shared_data; 
#line 422 "flags.h"
extern int flag_schedule_insns; 
#line 423 "flags.h"
extern int flag_schedule_insns_after_reload; 
#line 424 "flags.h"
extern int flag_sched2_use_superblocks; 
#line 425 "flags.h"
extern int flag_sched2_use_traces; 
#line 437 "flags.h"
extern int flag_schedule_interblock; 
#line 438 "flags.h"
extern int flag_schedule_speculative; 
#line 439 "flags.h"
extern int flag_schedule_speculative_load; 
#line 440 "flags.h"
extern int flag_schedule_speculative_load_dangerous; 
# 437 "flags.h" 
# 453 "flags.h" 
extern int flag_sched_stalled_insns; 
#line 454 "flags.h"
extern int flag_sched_stalled_insns_dep; 
#line 458 "flags.h"
extern int flag_branch_on_count_reg; 
#line 464 "flags.h"
extern int flag_single_precision_constant; 
#line 468 "flags.h"
extern int flag_delayed_branch; 
#line 473 "flags.h"
extern int flag_dump_unnumbered; 
#line 478 "flags.h"
extern int flag_pedantic_errors; 
#line 483 "flags.h"
extern int flag_pic; 
#line 488 "flags.h"
extern int flag_pie; 
#line 493 "flags.h"
extern int flag_shlib; 
#line 498 "flags.h"
extern int flag_exceptions; 
#line 502 "flags.h"
extern int flag_unwind_tables; 
#line 506 "flags.h"
extern int flag_asynchronous_unwind_tables; 
#line 511 "flags.h"
extern int flag_no_common; 
#line 517 "flags.h"
extern int flag_inhibit_size_directive; 
#line 522 "flags.h"
extern int flag_function_sections; 
#line 526 "flags.h"
extern int flag_data_sections; 
#line 535 "flags.h"
extern int flag_verbose_asm; 
# 535 "flags.h" 
# 544 "flags.h" 
extern int flag_debug_asm; 
#line 546 "flags.h"
extern int flag_dump_rtl_in_asm; 
#line 550 "flags.h"
extern int flag_leading_underscore; 
#line 553 "flags.h"
extern int flag_pack_struct; 
#line 562 "flags.h"
extern int flag_argument_noalias; 
#line 568 "flags.h"
extern int flag_strict_aliasing; 
#line 572 "flags.h"
extern int flag_stack_check; 
#line 575 "flags.h"
extern int flag_regmove; 
#line 578 "flags.h"
extern int flag_instrument_function_entry_exit; 
#line 581 "flags.h"
extern int flag_peephole2; 
#line 584 "flags.h"
extern int flag_guess_branch_prob; 
#line 590 "flags.h"
extern int flag_bounds_check; 
#line 595 "flags.h"
extern int flag_merge_constants; 
#line 600 "flags.h"
extern int flag_renumber_insns; 
#line 608 "flags.h"
extern int frame_pointer_needed; 
#line 612 "flags.h"
extern int flag_trapv; 
#line 615 "flags.h"
extern int flag_wrapv; 
#line 618 "flags.h"
extern int flag_evaluation_order; 
#line 621 "flags.h"
extern unsigned long g_switch_value; 
#line 622 "flags.h"
extern _Bool g_switch_set; 
#line 629 "flags.h"
extern int align_loops; 
#line 630 "flags.h"
extern int align_loops_log; 
#line 631 "flags.h"
extern int align_loops_max_skip; 
#line 632 "flags.h"
extern int align_jumps; 
#line 633 "flags.h"
extern int align_jumps_log; 
#line 634 "flags.h"
extern int align_jumps_max_skip; 
#line 635 "flags.h"
extern int align_labels; 
#line 636 "flags.h"
extern int align_labels_log; 
#line 637 "flags.h"
extern int align_labels_max_skip; 
#line 638 "flags.h"
extern int align_functions; 
#line 639 "flags.h"
extern int align_functions_log; 
#line 643 "flags.h"
extern int force_align_functions_log; 
#line 646 "flags.h"
extern int dump_for_graph; 
#line 653 "flags.h"
enum graph_dump_types {no_graph=0,vcg}; 
#line 654 "flags.h"
extern enum graph_dump_types graph_dump_format; 
#line 660 "flags.h"
extern int flag_no_ident; 
#line 664 "flags.h"
extern int flag_gcse; 
#line 668 "flags.h"
extern int flag_gcse_lm; 
#line 672 "flags.h"
extern int flag_gcse_sm; 
#line 677 "flags.h"
extern int flag_gcse_las; 
#line 680 "flags.h"
extern int flag_value_profile_transformations; 
#line 685 "flags.h"
extern int flag_branch_target_load_optimize; 
#line 690 "flags.h"
extern int flag_branch_target_load_optimize2; 
#line 695 "flags.h"
extern int flag_eliminate_dwarf2_dups; 
#line 699 "flags.h"
extern int flag_eliminate_unused_debug_types; 
#line 703 "flags.h"
extern int flag_detailed_statistics; 
#line 706 "flags.h"
extern int flag_non_call_exceptions; 
#line 709 "flags.h"
extern int flag_zero_initialized_in_bss; 
#line 712 "flags.h"
extern int flag_signaling_nans; 
#line 714 "flags.h"
extern int flag_unit_at_a_time; 
#line 716 "flags.h"
extern int flag_web; 
#line 720 "flags.h"
extern int flag_remove_unreachable_functions; 
#line 725 "flags.h"
extern const char *flag_random_seed; 
# 562 "flags.h" 
# 740 "flags.h" 
extern int flag_abi_version; 
# 103 "reload.c" 2
# 1 "real.h" 1
# 35 "real.h" 
enum real_value_class {rvc_zero,rvc_normal,rvc_inf,rvc_nan}; 
#line 51 "real.h"
struct real_value { __extension__ enum real_value_class class:2; unsigned int sign:1; unsigned int signalling:1; unsigned int canonical:1; signed int exp:(32 - 5); unsigned long sig[((128 + (8 * 4)) / (8 * 4))]; }; 
#line 69 "real.h"
extern char test_real_width[(sizeof (struct real_value ) <= (((128 + (8 * 4)) + 32) / (8 * 4) + ((((128 + (8 * 4)) + 32) % (8 * 4)?1:0))) * sizeof (long )?1:(-1))]; 
# 68 "real.h" 
# 141 "real.h" 
struct real_format {void (*encode)(const struct real_format *, long *, const struct real_value *); void (*decode)(const struct real_format *, struct real_value *, const long *); int b; int log2_b; int p; int pnan; int emin; int emax; int signbit; _Bool has_nans; _Bool has_inf; _Bool has_denorm; _Bool has_signed_zero; _Bool qnan_msb_set; }; 
#line 147 "real.h"
extern const struct real_format *real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1]; 
#line 155 "real.h"
extern void real_arithmetic(struct real_value *, int , const struct real_value *, const struct real_value *); 
#line 158 "real.h"
extern _Bool real_compare(int , const struct real_value *, const struct real_value *); 
#line 161 "real.h"
extern _Bool real_isinf(const struct real_value *); 
#line 164 "real.h"
extern _Bool real_isnan(const struct real_value *); 
#line 167 "real.h"
extern _Bool real_isneg(const struct real_value *); 
#line 170 "real.h"
extern _Bool real_isnegzero(const struct real_value *); 
#line 173 "real.h"
extern _Bool real_identical(const struct real_value *, const struct real_value *); 
#line 177 "real.h"
extern void real_convert(struct real_value *, enum machine_mode , const struct real_value *); 
#line 180 "real.h"
extern _Bool exact_real_truncate(enum machine_mode , const struct real_value *); 
#line 184 "real.h"
extern void real_to_decimal(char *, const struct real_value *,  size_t ,  size_t , int ); 
#line 188 "real.h"
extern void real_to_hexadecimal(char *, const struct real_value *,  size_t ,  size_t , int ); 
#line 191 "real.h"
extern long real_to_integer(const struct real_value *); 
#line 193 "real.h"
extern void real_to_integer2(long *, long *, const struct real_value *); 
#line 196 "real.h"
extern void real_from_string(struct real_value *, const char *); 
#line 200 "real.h"
extern void real_from_integer(struct real_value *, enum machine_mode , unsigned long , long , int ); 
#line 203 "real.h"
extern long real_to_target_fmt(long *, const struct real_value *, const struct real_format *); 
#line 204 "real.h"
extern long real_to_target(long *, const struct real_value *, enum machine_mode ); 
#line 207 "real.h"
extern void real_from_target_fmt(struct real_value *, const long *, const struct real_format *); 
#line 209 "real.h"
extern void real_from_target(struct real_value *, const long *, enum machine_mode ); 
#line 211 "real.h"
extern void real_inf(struct real_value *); 
#line 213 "real.h"
extern _Bool real_nan(struct real_value *, const char *, int , enum machine_mode ); 
#line 215 "real.h"
extern void real_maxval(struct real_value *, int , enum machine_mode ); 
#line 217 "real.h"
extern void real_2expN(struct real_value *, int ); 
#line 219 "real.h"
extern unsigned int real_hash(const struct real_value *); 
#line 223 "real.h"
extern const struct real_format ieee_single_format; 
#line 224 "real.h"
extern const struct real_format mips_single_format; 
#line 225 "real.h"
extern const struct real_format ieee_double_format; 
#line 226 "real.h"
extern const struct real_format mips_double_format; 
#line 227 "real.h"
extern const struct real_format ieee_extended_motorola_format; 
#line 228 "real.h"
extern const struct real_format ieee_extended_intel_96_format; 
#line 229 "real.h"
extern const struct real_format ieee_extended_intel_96_round_53_format; 
#line 230 "real.h"
extern const struct real_format ieee_extended_intel_128_format; 
#line 231 "real.h"
extern const struct real_format ibm_extended_format; 
#line 232 "real.h"
extern const struct real_format mips_extended_format; 
#line 233 "real.h"
extern const struct real_format ieee_quad_format; 
#line 234 "real.h"
extern const struct real_format mips_quad_format; 
#line 235 "real.h"
extern const struct real_format vax_f_format; 
#line 236 "real.h"
extern const struct real_format vax_d_format; 
#line 237 "real.h"
extern const struct real_format vax_g_format; 
#line 238 "real.h"
extern const struct real_format i370_single_format; 
#line 239 "real.h"
extern const struct real_format i370_double_format; 
#line 240 "real.h"
extern const struct real_format c4x_single_format; 
#line 241 "real.h"
extern const struct real_format c4x_extended_format; 
#line 242 "real.h"
extern const struct real_format real_internal_format; 
#line 286 "real.h"
extern struct real_value real_value_truncate(enum machine_mode , struct real_value ); 
#line 292 "real.h"
extern struct real_value real_arithmetic2(int , const struct real_value *, const struct real_value *); 
#line 300 "real.h"
extern int significand_size(enum machine_mode ); 
#line 302 "real.h"
extern struct real_value real_from_string2(const char *, enum machine_mode ); 
# 285 "real.h" 
# 320 "real.h" 
extern int real_exponent(const struct real_value *); 
#line 323 "real.h"
extern void real_ldexp(struct real_value *, const struct real_value *, int ); 
#line 329 "real.h"
extern struct real_value dconst0; 
#line 330 "real.h"
extern struct real_value dconst1; 
#line 331 "real.h"
extern struct real_value dconst2; 
#line 332 "real.h"
extern struct real_value dconst3; 
#line 333 "real.h"
extern struct real_value dconst10; 
#line 334 "real.h"
extern struct real_value dconstm1; 
#line 335 "real.h"
extern struct real_value dconstm2; 
#line 336 "real.h"
extern struct real_value dconsthalf; 
#line 337 "real.h"
extern struct real_value dconstthird; 
#line 338 "real.h"
extern struct real_value dconstpi; 
#line 339 "real.h"
extern struct real_value dconste; 
#line 343 "real.h"
struct real_value real_value_from_int_cst( tree ,  tree ); 
#line 352 "real.h"
extern  rtx const_double_from_real_value(struct real_value , enum machine_mode ); 
#line 355 "real.h"
extern _Bool exact_real_inverse(enum machine_mode , struct real_value *); 
#line 358 "real.h"
extern  tree build_real( tree , struct real_value ); 
#line 362 "real.h"
extern _Bool real_sqrt(struct real_value *, enum machine_mode , const struct real_value *); 
#line 366 "real.h"
extern _Bool real_powi(struct real_value *, enum machine_mode , const struct real_value *, long ); 
#line 370 "real.h"
extern void real_trunc(struct real_value *, enum machine_mode , const struct real_value *); 
#line 372 "real.h"
extern void real_floor(struct real_value *, enum machine_mode , const struct real_value *); 
#line 374 "real.h"
extern void real_ceil(struct real_value *, enum machine_mode , const struct real_value *); 
# 352 "real.h" 
# 104 "reload.c" 2
# 1 "output.h" 1
# 27 "output.h" 
extern void compute_alignments(void ); 
#line 30 "output.h"
extern void init_final(const char *); 
#line 34 "output.h"
extern void app_enable(void ); 
#line 38 "output.h"
extern void app_disable(void ); 
#line 43 "output.h"
extern int dbr_sequence_length(void ); 
#line 46 "output.h"
extern void init_insn_lengths(void ); 
#line 50 "output.h"
extern int get_attr_length( rtx ); 
#line 54 "output.h"
extern void shorten_branches( rtx ); 
#line 61 "output.h"
extern void final_start_function( rtx ,  FILE *, int ); 
#line 66 "output.h"
extern void final_end_function(void ); 
#line 69 "output.h"
extern void final( rtx ,  FILE *, int , int ); 
#line 74 "output.h"
extern  rtx final_scan_insn( rtx ,  FILE *, int , int , int , int *); 
#line 78 "output.h"
extern  rtx alter_subreg( rtx *); 
#line 82 "output.h"
extern void output_operand_lossage(const char *, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 86 "output.h"
extern void output_asm_insn(const char *,  rtx *); 
#line 91 "output.h"
extern int insn_current_reference_address( rtx ); 
#line 95 "output.h"
extern int label_to_alignment( rtx ); 
#line 98 "output.h"
extern void output_asm_label( rtx ); 
#line 102 "output.h"
extern void output_address( rtx ); 
#line 107 "output.h"
extern void output_addr_const( FILE *,  rtx ); 
#line 116 "output.h"
typedef long __gcc_host_wide_int__; 
#line 122 "output.h"
extern void asm_fprintf( FILE *file, const char *p, ...) __attribute__  (( __format__ ( __asm_fprintf__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 126 "output.h"
extern void split_double( rtx ,  rtx *,  rtx *); 
#line 129 "output.h"
extern int leaf_function_p(void ); 
#line 134 "output.h"
extern int final_forward_branch_p( rtx ); 
#line 138 "output.h"
extern int only_leaf_regs_used(void ); 
#line 142 "output.h"
extern void leaf_renumber_regs_insn( rtx ); 
#line 145 "output.h"
extern const char *get_insn_template(int ,  rtx ); 
#line 149 "output.h"
extern int add_weak( tree , const char *, const char *); 
#line 152 "output.h"
extern void allocate_for_life_analysis(void ); 
#line 153 "output.h"
extern int regno_uninitialized(unsigned int ); 
#line 154 "output.h"
extern int regno_clobbered_at_setjmp(int ); 
#line 155 "output.h"
extern void find_basic_blocks( rtx , int ,  FILE *); 
#line 156 "output.h"
extern _Bool cleanup_cfg(int ); 
#line 157 "output.h"
extern _Bool delete_unreachable_blocks(void ); 
#line 158 "output.h"
extern void check_function_return_warnings(void ); 
#line 163 "output.h"
extern void text_section(void ); 
#line 166 "output.h"
extern void data_section(void ); 
#line 170 "output.h"
extern void readonly_data_section(void ); 
#line 173 "output.h"
extern int in_text_section(void ); 
# 116 "output.h" 
# 184 "output.h" 
extern void bss_section(void ); 
#line 188 "output.h"
extern void init_section(void ); 
#line 192 "output.h"
extern void fini_section(void ); 
#line 211 "output.h"
extern void named_section( tree , const char *, int ); 
#line 214 "output.h"
extern void function_section( tree ); 
#line 218 "output.h"
extern void mergeable_string_section( tree , unsigned long , unsigned int ); 
#line 222 "output.h"
extern void mergeable_constant_section(enum machine_mode , unsigned long , unsigned int ); 
#line 225 "output.h"
extern void declare_weak( tree ); 
#line 227 "output.h"
extern void merge_weak( tree ,  tree ); 
#line 230 "output.h"
extern void weak_finish(void ); 
# 211 "output.h" 
# 239 "output.h" 
extern int decode_reg_name(const char *); 
#line 243 "output.h"
extern void make_var_volatile( tree ); 
#line 245 "output.h"
extern void assemble_alias( tree ,  tree ); 
#line 247 "output.h"
extern void default_assemble_visibility( tree , int ); 
#line 251 "output.h"
extern void assemble_asm( tree ); 
#line 257 "output.h"
extern void assemble_start_function( tree , const char *); 
#line 261 "output.h"
extern void assemble_end_function( tree , const char *); 
#line 272 "output.h"
extern void assemble_variable( tree , int , int , int ); 
#line 277 "output.h"
extern void assemble_external( tree ); 
#line 280 "output.h"
extern void assemble_zeros(unsigned long ); 
#line 283 "output.h"
extern void assemble_align(int ); 
#line 284 "output.h"
extern void assemble_eh_align(int ); 
#line 287 "output.h"
extern void assemble_string(const char *, int ); 
#line 290 "output.h"
extern void assemble_external_libcall( rtx ); 
#line 293 "output.h"
extern void assemble_label(const char *); 
#line 294 "output.h"
extern void assemble_eh_label(const char *); 
#line 301 "output.h"
extern void assemble_name( FILE *, const char *); 
# 272 "output.h" 
# 310 "output.h" 
extern const char *integer_asm_op(int , int ); 
#line 314 "output.h"
extern void assemble_integer_with_op(const char *,  rtx ); 
#line 317 "output.h"
extern _Bool default_assemble_integer( rtx , unsigned int , int ); 
#line 323 "output.h"
extern _Bool assemble_integer( rtx , unsigned , unsigned , int ); 
#line 333 "output.h"
extern void assemble_real(struct real_value , enum machine_mode , unsigned ); 
#line 337 "output.h"
extern int get_pool_size(void ); 
#line 344 "output.h"
extern void output_constant_pool(const char *,  tree ); 
# 333 "output.h" 
# 355 "output.h" 
extern  tree initializer_constant_valid_p( tree ,  tree ); 
#line 365 "output.h"
extern void output_constant( tree , unsigned long , unsigned int ); 
#line 373 "output.h"
extern  rtx final_sequence; 
# 365 "output.h" 
# 385 "output.h" 
extern  FILE *asm_out_file; 
#line 389 "output.h"
extern const char *first_global_object_name; 
#line 392 "output.h"
extern const char *weak_global_object_name; 
#line 399 "output.h"
extern int current_function_is_leaf; 
#line 404 "output.h"
extern int current_function_nothrow; 
#line 410 "output.h"
extern int current_function_sp_is_unchanging; 
#line 416 "output.h"
extern int current_function_uses_only_leaf_regs; 
#line 421 "output.h"
extern  FILE *rtl_dump_file; 
#line 425 "output.h"
extern  rtx current_insn_predicate; 
#line 428 "output.h"
extern  rtx current_output_insn; 
#line 433 "output.h"
extern  rtx this_is_asm_operands; 
#line 437 "output.h"
extern _Bool decl_readonly_section( tree , int ); 
#line 438 "output.h"
extern _Bool decl_readonly_section_1( tree , int , int ); 
#line 442 "output.h"
extern int compute_reloc_for_constant( tree ); 
#line 445 "output.h"
extern const char *user_label_prefix; 
#line 448 "output.h"
extern void default_function_pro_epilogue( FILE *, long ); 
#line 451 "output.h"
extern void default_exception_section(void ); 
#line 454 "output.h"
extern void named_section_eh_frame_section(void ); 
#line 455 "output.h"
extern void collect2_eh_frame_section(void ); 
#line 456 "output.h"
extern void default_eh_frame_section(void ); 
#line 459 "output.h"
extern void no_asm_to_stream( FILE *); 
#line 478 "output.h"
extern unsigned int get_named_section_flags(const char *); 
#line 479 "output.h"
extern _Bool set_named_section_flags(const char *, unsigned int ); 
#line 480 "output.h"
extern void named_section_flags(const char *, unsigned int ); 
#line 481 "output.h"
extern _Bool named_section_first_declaration(const char *); 
#line 482 "output.h"
extern unsigned int default_section_type_flags( tree , const char *, int ); 
#line 483 "output.h"
extern unsigned int default_section_type_flags_1( tree , const char *, int , int ); 
#line 485 "output.h"
extern void default_no_named_section(const char *, unsigned int ); 
#line 486 "output.h"
extern void default_elf_asm_named_section(const char *, unsigned int ); 
#line 487 "output.h"
extern void default_coff_asm_named_section(const char *, unsigned int ); 
#line 488 "output.h"
extern void default_pe_asm_named_section(const char *, unsigned int ); 
#line 490 "output.h"
extern void default_stabs_asm_out_destructor( rtx , int ); 
#line 491 "output.h"
extern void default_named_section_asm_out_destructor( rtx , int ); 
#line 492 "output.h"
extern void default_dtor_section_asm_out_destructor( rtx , int ); 
#line 493 "output.h"
extern void default_stabs_asm_out_constructor( rtx , int ); 
#line 494 "output.h"
extern void default_named_section_asm_out_constructor( rtx , int ); 
#line 495 "output.h"
extern void default_ctor_section_asm_out_constructor( rtx , int ); 
#line 497 "output.h"
extern void default_select_section( tree , int , unsigned long ); 
#line 498 "output.h"
extern void default_elf_select_section( tree , int , unsigned long ); 
#line 500 "output.h"
extern void default_elf_select_section_1( tree , int , unsigned long , int ); 
#line 501 "output.h"
extern void default_unique_section( tree , int ); 
#line 502 "output.h"
extern void default_unique_section_1( tree , int , int ); 
#line 504 "output.h"
extern void default_select_rtx_section(enum machine_mode ,  rtx , unsigned long ); 
#line 506 "output.h"
extern void default_elf_select_rtx_section(enum machine_mode ,  rtx , unsigned long ); 
#line 507 "output.h"
extern void default_encode_section_info( tree ,  rtx , int ); 
#line 508 "output.h"
extern const char *default_strip_name_encoding(const char *); 
#line 509 "output.h"
extern _Bool default_binds_local_p( tree ); 
#line 510 "output.h"
extern _Bool default_binds_local_p_1( tree , int ); 
#line 511 "output.h"
extern void default_globalize_label( FILE *, const char *); 
#line 512 "output.h"
extern void default_internal_label( FILE *, const char *, unsigned long ); 
#line 513 "output.h"
extern void default_file_start(void ); 
#line 514 "output.h"
extern void file_end_indicate_exec_stack(void ); 
#line 515 "output.h"
extern _Bool default_valid_pointer_mode(enum machine_mode ); 
#line 517 "output.h"
extern int default_address_cost( rtx ); 
# 478 "output.h" 
# 105 "reload.c" 2
# 1 "function.h" 1
# 31 "function.h" 
struct var_refs_queue { rtx modified; enum machine_mode promoted_mode; int unsignedp; struct var_refs_queue *next; }; 
#line 45 "function.h"
struct sequence_stack { rtx first;  rtx last;  tree sequence_rtl_expr; struct sequence_stack *next; }; 
#line 47 "function.h"
extern struct sequence_stack *sequence_stack; 
#line 55 "function.h"
struct simple_obstack_stack {struct obstack *obstack; struct simple_obstack_stack *next; }; 
#line 111 "function.h"
struct emit_status {int x_reg_rtx_no; int x_first_label_num;  rtx x_first_insn;  rtx x_last_insn;  tree sequence_rtl_expr; struct sequence_stack *sequence_stack; int x_cur_insn_uid;  location_t x_last_location; int regno_pointer_align_length; unsigned char *regno_pointer_align;  rtx *x_regno_reg_rtx; }; 
# 121 "function.h" 
# 163 "function.h" 
struct expr_status {int x_pending_stack_adjust; int x_inhibit_defer_pop; int x_stack_pointer_delta;  rtx x_saveregs_value;  rtx x_apply_args_value;  rtx x_forced_labels;  rtx x_pending_chain; }; 
# 176 "function.h" 
# 325 "function.h" 
# 520 "function.h" 
struct function {struct eh_status *eh; struct stmt_status *stmt; struct expr_status *expr; struct emit_status *emit; struct varasm_status *varasm;  tree decl; struct function *outer; int pops_args; int args_size; int pretend_args_size; int outgoing_args_size;  rtx arg_offset_rtx;  CUMULATIVE_ARGS args_info;  rtx return_rtx;  rtx internal_arg_pointer; const char *cannot_inline; struct initial_value_struct *hard_reg_initial_vals; int x_function_call_count;  tree x_nonlocal_labels;  rtx x_nonlocal_goto_handler_slots;  rtx x_nonlocal_goto_handler_labels;  rtx x_nonlocal_goto_stack_level;  rtx x_cleanup_label;  rtx x_return_label;  rtx x_naked_return_label;  rtx computed_goto_common_label;  rtx computed_goto_common_reg;  rtx x_save_expr_regs;  rtx x_stack_slot_list;  tree x_rtl_expr_chain;  rtx x_tail_recursion_label;  rtx x_tail_recursion_reentry;  rtx x_arg_pointer_save_area;  rtx x_clobber_return_insn; long x_frame_offset;  tree x_context_display;  tree x_trampoline_list;  rtx x_parm_birth_insn;  rtx x_last_parm_insn; unsigned int x_max_parm_reg;  rtx *x_parm_reg_stack_loc; struct temp_slot *x_temp_slots; int x_temp_slot_level; int x_var_temp_slot_level; int x_target_temp_slot_level; struct var_refs_queue *fixup_var_refs_queue; int inlinable; int no_debugging_symbols;  rtvec original_arg_vector;  tree original_decl_initial;  rtx inl_last_parm_insn; int inl_max_label_num; int funcdef_no; struct machine_function *machine; int stack_alignment_needed; int preferred_stack_boundary; _Bool recursive_call_emit; struct language_function *language;  rtx epilogue_delay_list; enum function_frequency {FUNCTION_FREQUENCY_UNLIKELY_EXECUTED,FUNCTION_FREQUENCY_NORMAL,FUNCTION_FREQUENCY_HOT}function_frequency; int max_jumptable_ents; unsigned int returns_struct:1; unsigned int returns_pcc_struct:1; unsigned int returns_pointer:1; unsigned int needs_context:1; unsigned int calls_setjmp:1; unsigned int calls_longjmp:1; unsigned int calls_alloca:1; unsigned int calls_eh_return:1; unsigned int calls_constant_p:1; unsigned int has_nonlocal_label:1; unsigned int has_nonlocal_goto:1; unsigned int contains_functions:1; unsigned int has_computed_jump:1; unsigned int is_thunk:1; unsigned int all_throwers_are_sibcalls:1; unsigned int instrument_entry_exit:1; unsigned int profile:1; unsigned int limit_stack:1; unsigned int stdarg:1; unsigned int x_whole_function_mode_p:1; unsigned int x_dont_save_pending_sizes_p:1; unsigned int uses_const_pool:1; unsigned int uses_pic_offset_table:1; unsigned int uses_eh_lsda:1; unsigned int arg_pointer_save_area_init:1; unsigned int rtl_inline_init:1; unsigned int saved_for_inline:1; }; 
#line 523 "function.h"
extern struct function *cfun; 
#line 526 "function.h"
extern struct function *outer_function_chain; 
#line 529 "function.h"
extern int virtuals_instantiated; 
#line 532 "function.h"
extern int trampolines_created; 
#line 594 "function.h"
extern  tree inline_function_decl; 
#line 598 "function.h"
struct function *find_function_data( tree ); 
#line 601 "function.h"
extern void identify_blocks(void ); 
#line 605 "function.h"
extern void reorder_blocks(void ); 
#line 608 "function.h"
extern void number_blocks( tree ); 
#line 613 "function.h"
extern long get_frame_size(void ); 
#line 615 "function.h"
extern long get_func_frame_size(struct function *); 
#line 619 "function.h"
extern struct machine_function *(*init_machine_status)(void ); 
#line 622 "function.h"
extern void restore_emit_status(struct function *); 
#line 623 "function.h"
extern void free_after_parsing(struct function *); 
#line 624 "function.h"
extern void free_after_compilation(struct function *); 
#line 626 "function.h"
extern void init_varasm_status(struct function *); 
#line 629 "function.h"
extern void diddle_return_value(void (*)( rtx , void *), void *); 
#line 630 "function.h"
extern void clobber_return_register(void ); 
#line 631 "function.h"
extern void use_return_register(void ); 
#line 634 "function.h"
extern  rtx get_arg_pointer_save_area(struct function *); 
#line 636 "function.h"
extern void init_virtual_regs(struct emit_status *); 
#line 639 "function.h"
extern const char *current_function_name(void ); 
#line 642 "function.h"
extern void init_function_once(void ); 
# 594 "function.h" 
# 106 "reload.c" 2
# 1 "toplev.h" 1
# 30 "toplev.h" 
extern int toplev_main(unsigned int , const char **); 
#line 31 "toplev.h"
extern int read_integral_parameter(const char *, const char *, const int ); 
#line 32 "toplev.h"
extern void strip_off_ending(char *, int ); 
#line 33 "toplev.h"
extern const char *trim_filename(const char *); 
#line 35 "toplev.h"
extern void _fatal_insn_not_found( rtx , const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 37 "toplev.h"
extern void _fatal_insn(const char *,  rtx , const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 58 "toplev.h"
extern void internal_error(const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __noreturn__ )) ; 
#line 59 "toplev.h"
extern void warning(const char *, ...); 
#line 60 "toplev.h"
extern void error(const char *, ...); 
#line 62 "toplev.h"
extern void fatal_error(const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __noreturn__ )) ; 
#line 63 "toplev.h"
extern void pedwarn(const char *, ...); 
#line 64 "toplev.h"
extern void sorry(const char *, ...); 
#line 65 "toplev.h"
extern void inform(const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 67 "toplev.h"
extern void rest_of_decl_compilation( tree , const char *, int , int ); 
#line 68 "toplev.h"
extern void rest_of_type_compilation( tree , int ); 
#line 69 "toplev.h"
extern void rest_of_compilation( tree ); 
#line 70 "toplev.h"
extern void tree_rest_of_compilation( tree , _Bool ); 
#line 72 "toplev.h"
extern void announce_function( tree ); 
#line 74 "toplev.h"
extern void error_for_asm( rtx , const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 75 "toplev.h"
extern void warning_for_asm( rtx , const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 76 "toplev.h"
extern void warn_deprecated_use( tree ); 
#line 79 "toplev.h"
extern void output_quoted_string( FILE *, const char *); 
#line 80 "toplev.h"
extern void output_file_directive( FILE *, const char *); 
#line 87 "toplev.h"
extern void fnotice( FILE *, const char *, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 90 "toplev.h"
extern int wrapup_global_declarations( tree *, int ); 
#line 91 "toplev.h"
extern void check_global_declarations( tree *, int ); 
#line 92 "toplev.h"
extern void write_global_declarations(void ); 
#line 95 "toplev.h"
extern unsigned local_tick; 
#line 97 "toplev.h"
extern const char *progname; 
#line 98 "toplev.h"
extern const char *dump_base_name; 
#line 99 "toplev.h"
extern const char *aux_base_name; 
#line 100 "toplev.h"
extern const char *aux_info_file_name; 
#line 101 "toplev.h"
extern const char *asm_file_name; 
#line 102 "toplev.h"
extern _Bool exit_after_options; 
#line 103 "toplev.h"
extern _Bool version_flag; 
#line 105 "toplev.h"
extern int target_flags_explicit; 
#line 108 "toplev.h"
extern int flag_loop_optimize; 
#line 109 "toplev.h"
extern int flag_crossjumping; 
#line 110 "toplev.h"
extern int flag_if_conversion; 
#line 111 "toplev.h"
extern int flag_if_conversion2; 
#line 112 "toplev.h"
extern int flag_delete_null_pointer_checks; 
#line 113 "toplev.h"
extern int flag_keep_static_consts; 
#line 114 "toplev.h"
extern int flag_peel_loops; 
#line 115 "toplev.h"
extern int flag_rerun_cse_after_loop; 
#line 116 "toplev.h"
extern int flag_thread_jumps; 
#line 117 "toplev.h"
extern int flag_tracer; 
#line 118 "toplev.h"
extern int flag_unroll_loops; 
#line 119 "toplev.h"
extern int flag_unroll_all_loops; 
#line 120 "toplev.h"
extern int flag_unswitch_loops; 
#line 121 "toplev.h"
extern int flag_cprop_registers; 
#line 122 "toplev.h"
extern int time_report; 
#line 123 "toplev.h"
extern int flag_new_regalloc; 
#line 126 "toplev.h"
extern void display_target_options(void ); 
#line 127 "toplev.h"
extern void print_version( FILE *, const char *); 
#line 128 "toplev.h"
extern void set_target_switch(const char *); 
#line 129 "toplev.h"
extern void *default_get_pch_validity( size_t *); 
#line 130 "toplev.h"
extern const char *default_pch_valid_p(const void *,  size_t ); 
#line 133 "toplev.h"
extern struct ht *ident_hash; 
#line 138 "toplev.h"
extern void set_fast_math_flags(int ); 
#line 141 "toplev.h"
extern void decode_d_option(const char *); 
#line 144 "toplev.h"
extern _Bool fast_math_flags_set_p(void ); 
# 57 "toplev.h" 
# 153 "toplev.h" 
extern int exact_log2_wide(unsigned long ); 
#line 154 "toplev.h"
extern int floor_log2_wide(unsigned long ); 
#line 159 "toplev.h"
extern const char *get_src_pwd(void ); 
#line 160 "toplev.h"
extern _Bool set_src_pwd(const char *); 
# 107 "reload.c" 2
# 1 "params.h" 1
# 53 "params.h" 
typedef struct param_info {const char *const option; int value; const char *const help; }param_info; 
#line 58 "params.h"
extern  param_info *compiler_params; 
#line 62 "params.h"
extern void add_params(const  param_info params[],  size_t n); 
#line 66 "params.h"
extern void set_param_value(const char *name, int value); 
# 1 "params.def" 1
# 51 "params.def" 
# 63 "params.def" 
# 73 "params.def" 
# 84 "params.def" 
# 95 "params.def" 
# 105 "params.def" 
# 142 "params.def" 
# 259 "params.def" 
# 78 "params.h" 2
typedef enum compiler_param {PARAM_MAX_INLINE_INSNS_SINGLE,PARAM_MAX_INLINE_INSNS_AUTO,PARAM_MAX_INLINE_INSNS_RTL,PARAM_MAX_DELAY_SLOT_INSN_SEARCH,PARAM_MAX_DELAY_SLOT_LIVE_SEARCH,PARAM_MAX_PENDING_LIST_LENGTH,PARAM_LARGE_FUNCTION_INSNS,PARAM_LARGE_FUNCTION_GROWTH,PARAM_INLINE_UNIT_GROWTH,PARAM_MAX_GCSE_MEMORY,PARAM_MAX_GCSE_PASSES,PARAM_MAX_UNROLLED_INSNS,PARAM_MAX_AVERAGE_UNROLLED_INSNS,PARAM_MAX_UNROLL_TIMES,PARAM_MAX_PEELED_INSNS,PARAM_MAX_PEEL_TIMES,PARAM_MAX_COMPLETELY_PEELED_INSNS,PARAM_MAX_COMPLETELY_PEEL_TIMES,PARAM_MAX_ONCE_PEELED_INSNS,PARAM_MAX_UNSWITCH_INSNS,PARAM_MAX_UNSWITCH_LEVEL,HOT_BB_COUNT_FRACTION,HOT_BB_FREQUENCY_FRACTION,TRACER_DYNAMIC_COVERAGE_FEEDBACK,TRACER_DYNAMIC_COVERAGE,TRACER_MAX_CODE_GROWTH,TRACER_MIN_BRANCH_RATIO,TRACER_MIN_BRANCH_PROBABILITY_FEEDBACK,TRACER_MIN_BRANCH_PROBABILITY,PARAM_MAX_CROSSJUMP_EDGES,PARAM_MAX_CSE_PATH_LENGTH,PARAM_MAX_CSELIB_MEMORY_LOCATIONS,GGC_MIN_EXPAND,GGC_MIN_HEAPSIZE,PARAM_MAX_RELOAD_SEARCH_INSNS,LAST_PARAM}compiler_param; 
# 108 "reload.c" 2
# 119 "reload.c" 
int n_reloads; 
#line 120 "reload.c"
struct reload rld[(2 * 30 * (2 + 1))]; 
#line 124 "reload.c"
int n_earlyclobbers; 
#line 125 "reload.c"
 rtx reload_earlyclobbers[30]; 
#line 127 "reload.c"
int reload_n_operands; 
#line 137 "reload.c"
static int replace_reloads; 
#line 147 "reload.c"
struct replacement { rtx *where;  rtx *subreg_loc; int what; enum machine_mode mode; }; 
#line 149 "reload.c"
static struct replacement replacements[30 * ((2 * 2) + 1)]; 
#line 152 "reload.c"
static int n_replacements; 
#line 162 "reload.c"
struct decomposition {int reg_flag; int safe;  rtx base; long start; long end; }; 
# 137 "reload.c" 
# 174 "reload.c" 
static  rtx secondary_memlocs[NUM_MACHINE_MODES]; 
#line 175 "reload.c"
static  rtx secondary_memlocs_elim[NUM_MACHINE_MODES][30]; 
#line 176 "reload.c"
static int secondary_memlocs_elim_used = 0; 
#line 181 "reload.c"
static  rtx this_insn; 
#line 184 "reload.c"
static int this_insn_is_asm; 
#line 189 "reload.c"
static int hard_regs_live_known; 
#line 195 "reload.c"
static short *static_reload_reg_p; 
#line 198 "reload.c"
static int subst_reg_equivs_changed; 
#line 202 "reload.c"
static int output_reloadnum; 
#line 241 "reload.c"
static int push_secondary_reload(int ,  rtx , int , int , enum reg_class , enum machine_mode , enum reload_type , enum insn_code *); 
#line 243 "reload.c"
static enum reg_class find_valid_class(enum machine_mode , int , unsigned int ); 
#line 244 "reload.c"
static int reload_inner_reg_of_subreg( rtx , enum machine_mode , int ); 
#line 245 "reload.c"
static void push_replacement( rtx *, int , enum machine_mode ); 
#line 246 "reload.c"
static void dup_replacements( rtx *,  rtx *); 
#line 247 "reload.c"
static void combine_reloads(void ); 
#line 249 "reload.c"
static int find_reusable_reload( rtx *,  rtx , enum reg_class , enum reload_type , int , int ); 
#line 251 "reload.c"
static  rtx find_dummy_reload( rtx ,  rtx ,  rtx *,  rtx *, enum machine_mode , enum machine_mode , enum reg_class , int , int ); 
#line 252 "reload.c"
static int hard_reg_set_here_p(unsigned int , unsigned int ,  rtx ); 
#line 253 "reload.c"
static struct decomposition decompose( rtx ); 
#line 254 "reload.c"
static int immune_p( rtx ,  rtx , struct decomposition ); 
#line 255 "reload.c"
static int alternative_allows_memconst(const char *, int ); 
#line 257 "reload.c"
static  rtx find_reloads_toplev( rtx , int , enum reload_type , int , int ,  rtx , int *); 
#line 258 "reload.c"
static  rtx make_memloc( rtx , int ); 
#line 259 "reload.c"
static int maybe_memory_address_p(enum machine_mode ,  rtx ,  rtx *); 
#line 261 "reload.c"
static int find_reloads_address(enum machine_mode ,  rtx *,  rtx ,  rtx *, int , enum reload_type , int ,  rtx ); 
#line 262 "reload.c"
static  rtx subst_reg_equivs( rtx ,  rtx ); 
#line 263 "reload.c"
static  rtx subst_indexed_address( rtx ); 
#line 264 "reload.c"
static void update_auto_inc_notes( rtx , int , int ); 
#line 266 "reload.c"
static int find_reloads_address_1(enum machine_mode ,  rtx , int ,  rtx *, int , enum reload_type , int ,  rtx ); 
#line 269 "reload.c"
static void find_reloads_address_part( rtx ,  rtx *, enum reg_class , enum machine_mode , int , enum reload_type , int ); 
#line 271 "reload.c"
static  rtx find_reloads_subreg_address( rtx , int , int , enum reload_type , int ,  rtx ); 
#line 272 "reload.c"
static void copy_replacements_1( rtx *,  rtx *, int ); 
#line 273 "reload.c"
static int find_inc_amount( rtx ,  rtx ); 
# 239 "reload.c" 
# 291 "reload.c" 
static int push_secondary_reload(int in_p,  rtx x, int opnum, int optional, enum reg_class reload_class, enum machine_mode reload_mode, enum reload_type type, enum insn_code *picode)  {

#line 292 "reload.c"

#line 292 "reload.c"
enum reg_class class = NO_REGS;
#line 293 "reload.c"

#line 293 "reload.c"
enum machine_mode mode = reload_mode;
#line 294 "reload.c"

#line 294 "reload.c"
enum insn_code icode = CODE_FOR_nothing;
#line 295 "reload.c"

#line 295 "reload.c"
enum reg_class t_class = NO_REGS;
#line 296 "reload.c"

#line 296 "reload.c"
enum machine_mode t_mode = VOIDmode;
#line 297 "reload.c"

#line 297 "reload.c"
enum insn_code t_icode = CODE_FOR_nothing;
#line 298 "reload.c"

#line 298 "reload.c"
enum reload_type secondary_type;
#line 299 "reload.c"

#line 299 "reload.c"
int s_reload,t_reload = (-1);
#line 301 "reload.c"
if (type == RELOAD_FOR_INPUT_ADDRESS || type == RELOAD_FOR_OUTPUT_ADDRESS || type == RELOAD_FOR_INPADDR_ADDRESS || type == RELOAD_FOR_OUTADDR_ADDRESS){
secondary_type = type; }else{
secondary_type = (in_p?RELOAD_FOR_INPUT_ADDRESS:RELOAD_FOR_OUTPUT_ADDRESS); }
#line 309 "reload.c"
(*picode) = CODE_FOR_nothing; 
#line 313 "reload.c"
if ((((enum rtx_code )((x)->code))) == SUBREG && ((((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) > (((unsigned short )mode_size[(((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode)))])))){
{ 
#line 317 "reload.c"
x = ((((x)->u).fld[0]).rtx); 
#line 318 "reload.c"
reload_mode = (((enum machine_mode )((x)->mode))); } }
#line 327 "reload.c"
if ((((enum rtx_code )((x)->code))) == REG && ((((x)->u).fld[0]).rtuint) >= 53 && reg_equiv_mem[((((x)->u).fld[0]).rtuint)] != 0){
x = reg_equiv_mem[((((x)->u).fld[0]).rtuint)]; }
#line 337 "reload.c"
if ((!in_p)){
class = ((((reload_class) == GENERAL_REGS || (reload_class) == LEGACY_REGS || (reload_class) == INDEX_REGS) && (!0) && (reload_mode) == QImode?Q_REGS:NO_REGS)); }
#line 342 "reload.c"
if (class == NO_REGS){
return (-1); }
#line 348 "reload.c"
icode = ((in_p?reload_in_optab[((int )reload_mode)]:reload_out_optab[((int )reload_mode)])); 
#line 351 "reload.c"
if (icode != CODE_FOR_nothing && insn_data[((int )icode)].operand[in_p].predicate && ((!(insn_data[((int )icode)].operand[in_p].predicate)(x, reload_mode)))){
icode = CODE_FOR_nothing; }
#line 362 "reload.c"
if (icode != CODE_FOR_nothing){
{ 
#line 369 "reload.c"

#line 369 "reload.c"
enum reg_class insn_class;
#line 371 "reload.c"
if (insn_data[((int )icode)].operand[(!in_p)].constraint[0] == 0){
insn_class = ALL_REGS; }else{
{ 
#line 376 "reload.c"

#line 376 "reload.c"
const char *insn_constraint = (&insn_data[((int )icode)].operand[(!in_p)].constraint[in_p]);
#line 377 "reload.c"

#line 377 "reload.c"
char insn_letter = (*insn_constraint);
#line 378 "reload.c"
insn_class = ((insn_letter == 'r'?GENERAL_REGS:(((((unsigned char )insn_letter)) == 'r'?GENERAL_REGS:((((unsigned char )insn_letter)) == 'R'?LEGACY_REGS:((((unsigned char )insn_letter)) == 'q'?(0?GENERAL_REGS:Q_REGS):((((unsigned char )insn_letter)) == 'Q'?Q_REGS:((((unsigned char )insn_letter)) == 'f'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FLOAT_REGS:NO_REGS)):((((unsigned char )insn_letter)) == 't'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_TOP_REG:NO_REGS)):((((unsigned char )insn_letter)) == 'u'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_SECOND_REG:NO_REGS)):((((unsigned char )insn_letter)) == 'a'?AREG:((((unsigned char )insn_letter)) == 'b'?BREG:((((unsigned char )insn_letter)) == 'c'?CREG:((((unsigned char )insn_letter)) == 'd'?DREG:((((unsigned char )insn_letter)) == 'x'?(((target_flags & 0x00004000) != 0)?SSE_REGS:NO_REGS):((((unsigned char )insn_letter)) == 'Y'?(((target_flags & 0x00008000) != 0)?SSE_REGS:NO_REGS):((((unsigned char )insn_letter)) == 'y'?(((target_flags & 0x00002000) != 0)?MMX_REGS:NO_REGS):((((unsigned char )insn_letter)) == 'A'?AD_REGS:((((unsigned char )insn_letter)) == 'D'?DIREG:((((unsigned char )insn_letter)) == 'S'?SIREG:NO_REGS)))))))))))))))))))); 
#line 383 "reload.c"
if (insn_class == NO_REGS){
fancy_abort("reload.c", 384, __FUNCTION__); }
#line 385 "reload.c"
if (in_p && insn_data[((int )icode)].operand[(!in_p)].constraint[0] != '='){
fancy_abort("reload.c", 387, __FUNCTION__); }} }
#line 391 "reload.c"
if (insn_data[((int )icode)].operand[2].constraint[0] != '=' || insn_data[((int )icode)].operand[2].constraint[1] != '&'){
fancy_abort("reload.c", 393, __FUNCTION__); }
#line 395 "reload.c"
if (reg_class_subset_p(reload_class, insn_class)){
mode = insn_data[((int )icode)].operand[2].mode; }else{
{ 
#line 400 "reload.c"

#line 400 "reload.c"
const char *t_constraint = (&insn_data[((int )icode)].operand[2].constraint[2]);
#line 401 "reload.c"

#line 401 "reload.c"
char t_letter = (*t_constraint);
#line 402 "reload.c"
class = insn_class; 
#line 403 "reload.c"
t_mode = insn_data[((int )icode)].operand[2].mode; 
#line 404 "reload.c"
t_class = ((t_letter == 'r'?GENERAL_REGS:(((((unsigned char )t_letter)) == 'r'?GENERAL_REGS:((((unsigned char )t_letter)) == 'R'?LEGACY_REGS:((((unsigned char )t_letter)) == 'q'?(0?GENERAL_REGS:Q_REGS):((((unsigned char )t_letter)) == 'Q'?Q_REGS:((((unsigned char )t_letter)) == 'f'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FLOAT_REGS:NO_REGS)):((((unsigned char )t_letter)) == 't'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_TOP_REG:NO_REGS)):((((unsigned char )t_letter)) == 'u'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_SECOND_REG:NO_REGS)):((((unsigned char )t_letter)) == 'a'?AREG:((((unsigned char )t_letter)) == 'b'?BREG:((((unsigned char )t_letter)) == 'c'?CREG:((((unsigned char )t_letter)) == 'd'?DREG:((((unsigned char )t_letter)) == 'x'?(((target_flags & 0x00004000) != 0)?SSE_REGS:NO_REGS):((((unsigned char )t_letter)) == 'Y'?(((target_flags & 0x00008000) != 0)?SSE_REGS:NO_REGS):((((unsigned char )t_letter)) == 'y'?(((target_flags & 0x00002000) != 0)?MMX_REGS:NO_REGS):((((unsigned char )t_letter)) == 'A'?AD_REGS:((((unsigned char )t_letter)) == 'D'?DIREG:((((unsigned char )t_letter)) == 'S'?SIREG:NO_REGS)))))))))))))))))))); 
#line 407 "reload.c"
t_icode = icode; 
#line 408 "reload.c"
icode = CODE_FOR_nothing; } }} }
#line 426 "reload.c"
if (in_p && class == reload_class && icode == CODE_FOR_nothing && t_icode == CODE_FOR_nothing){
fancy_abort("reload.c", 428, __FUNCTION__); }
#line 433 "reload.c"
if (t_class != NO_REGS){
{ 
#line 466 "reload.c"
for(t_reload = 0;t_reload < n_reloads;t_reload++) { if (rld[t_reload].secondary_p && (reg_class_subset_p(t_class, rld[t_reload].class) || reg_class_subset_p(rld[t_reload].class, t_class)) && ((in_p && rld[t_reload].inmode == t_mode) || ((!in_p) && rld[t_reload].outmode == t_mode)) && ((in_p && (rld[t_reload].secondary_in_icode == CODE_FOR_nothing)) || ((!in_p) && (rld[t_reload].secondary_out_icode == CODE_FOR_nothing))) && (reg_class_size[((int )t_class)] == 1 || 1) && ((secondary_type) == RELOAD_OTHER || (rld[t_reload].when_needed) == RELOAD_OTHER || ((secondary_type) == (rld[t_reload].when_needed) && (opnum) == (rld[t_reload].opnum)) || ((secondary_type) == RELOAD_FOR_INPUT && (rld[t_reload].when_needed) == RELOAD_FOR_INPUT) || ((secondary_type) == RELOAD_FOR_OPERAND_ADDRESS && (rld[t_reload].when_needed) == RELOAD_FOR_OPERAND_ADDRESS) || ((secondary_type) == RELOAD_FOR_OTHER_ADDRESS && (rld[t_reload].when_needed) == RELOAD_FOR_OTHER_ADDRESS))){
{ 
#line 452 "reload.c"
if (in_p){
rld[t_reload].inmode = t_mode; }
#line 452 "reload.c"
if ((!in_p)){
rld[t_reload].outmode = t_mode; }
#line 455 "reload.c"
if (reg_class_subset_p(t_class, rld[t_reload].class)){
rld[t_reload].class = t_class; }
#line 458 "reload.c"
rld[t_reload].opnum = (((rld[t_reload].opnum) < (opnum)?(rld[t_reload].opnum):(opnum))); 
#line 459 "reload.c"
rld[t_reload].optional &= optional; 
#line 460 "reload.c"
rld[t_reload].secondary_p = 1; 
#line 461 "reload.c"
if (((secondary_type) != (rld[t_reload].when_needed) || (!((opnum) == (rld[t_reload].opnum) || (secondary_type) == RELOAD_FOR_INPUT || (secondary_type) == RELOAD_FOR_OPERAND_ADDRESS || (secondary_type) == RELOAD_FOR_OTHER_ADDRESS)))){
rld[t_reload].when_needed = RELOAD_OTHER; }} }} 
#line 466 "reload.c"
if (t_reload == n_reloads){
{ 
#line 469 "reload.c"
rld[t_reload].in = rld[t_reload].out = 0; 
#line 470 "reload.c"
rld[t_reload].class = t_class; 
#line 471 "reload.c"
rld[t_reload].inmode = (in_p?t_mode:VOIDmode); 
#line 472 "reload.c"
rld[t_reload].outmode = ((!in_p)?t_mode:VOIDmode); 
#line 473 "reload.c"
rld[t_reload].reg_rtx = 0; 
#line 474 "reload.c"
rld[t_reload].optional = optional; 
#line 475 "reload.c"
rld[t_reload].inc = 0; 
#line 477 "reload.c"
rld[t_reload].nocombine = 1; 
#line 478 "reload.c"
rld[t_reload].in_reg = 0; 
#line 479 "reload.c"
rld[t_reload].out_reg = 0; 
#line 480 "reload.c"
rld[t_reload].opnum = opnum; 
#line 481 "reload.c"
rld[t_reload].when_needed = secondary_type; 
#line 482 "reload.c"
rld[t_reload].secondary_in_reload = (-1); 
#line 483 "reload.c"
rld[t_reload].secondary_out_reload = (-1); 
#line 484 "reload.c"
rld[t_reload].secondary_in_icode = CODE_FOR_nothing; 
#line 485 "reload.c"
rld[t_reload].secondary_out_icode = CODE_FOR_nothing; 
#line 486 "reload.c"
rld[t_reload].secondary_p = 1; 
#line 488 "reload.c"
n_reloads++; } }} }
#line 493 "reload.c"
for(s_reload = 0;s_reload < n_reloads;s_reload++) { if (rld[s_reload].secondary_p && (reg_class_subset_p(class, rld[s_reload].class) || reg_class_subset_p(rld[s_reload].class, class)) && ((in_p && rld[s_reload].inmode == mode) || ((!in_p) && rld[s_reload].outmode == mode)) && ((in_p && rld[s_reload].secondary_in_reload == t_reload) || ((!in_p) && rld[s_reload].secondary_out_reload == t_reload)) && ((in_p && rld[s_reload].secondary_in_icode == t_icode) || ((!in_p) && rld[s_reload].secondary_out_icode == t_icode)) && (reg_class_size[((int )class)] == 1 || 1) && ((secondary_type) == RELOAD_OTHER || (rld[s_reload].when_needed) == RELOAD_OTHER || ((secondary_type) == (rld[s_reload].when_needed) && (opnum) == (rld[s_reload].opnum)) || ((secondary_type) == RELOAD_FOR_INPUT && (rld[s_reload].when_needed) == RELOAD_FOR_INPUT) || ((secondary_type) == RELOAD_FOR_OPERAND_ADDRESS && (rld[s_reload].when_needed) == RELOAD_FOR_OPERAND_ADDRESS) || ((secondary_type) == RELOAD_FOR_OTHER_ADDRESS && (rld[s_reload].when_needed) == RELOAD_FOR_OTHER_ADDRESS))){
{ 
#line 509 "reload.c"
if (in_p){
rld[s_reload].inmode = mode; }
#line 509 "reload.c"
if ((!in_p)){
rld[s_reload].outmode = mode; }
#line 512 "reload.c"
if (reg_class_subset_p(class, rld[s_reload].class)){
rld[s_reload].class = class; }
#line 515 "reload.c"
rld[s_reload].opnum = (((rld[s_reload].opnum) < (opnum)?(rld[s_reload].opnum):(opnum))); 
#line 516 "reload.c"
rld[s_reload].optional &= optional; 
#line 517 "reload.c"
rld[s_reload].secondary_p = 1; 
#line 518 "reload.c"
if (((secondary_type) != (rld[s_reload].when_needed) || (!((opnum) == (rld[s_reload].opnum) || (secondary_type) == RELOAD_FOR_INPUT || (secondary_type) == RELOAD_FOR_OPERAND_ADDRESS || (secondary_type) == RELOAD_FOR_OTHER_ADDRESS)))){
rld[s_reload].when_needed = RELOAD_OTHER; }} }} 
#line 523 "reload.c"
if (s_reload == n_reloads){
{ 
#line 543 "reload.c"
if (in_p && icode == CODE_FOR_nothing && ix86_secondary_memory_needed((class), (reload_class), (mode), 1)){
{ 
#line 534 "reload.c"
get_secondary_mem(x, reload_mode, opnum, type); 
#line 538 "reload.c"
s_reload = n_reloads; } }
#line 543 "reload.c"
rld[s_reload].in = rld[s_reload].out = 0; 
#line 544 "reload.c"
rld[s_reload].class = class; 
#line 546 "reload.c"
rld[s_reload].inmode = (in_p?mode:VOIDmode); 
#line 547 "reload.c"
rld[s_reload].outmode = ((!in_p)?mode:VOIDmode); 
#line 548 "reload.c"
rld[s_reload].reg_rtx = 0; 
#line 549 "reload.c"
rld[s_reload].optional = optional; 
#line 550 "reload.c"
rld[s_reload].inc = 0; 
#line 552 "reload.c"
rld[s_reload].nocombine = 1; 
#line 553 "reload.c"
rld[s_reload].in_reg = 0; 
#line 554 "reload.c"
rld[s_reload].out_reg = 0; 
#line 555 "reload.c"
rld[s_reload].opnum = opnum; 
#line 556 "reload.c"
rld[s_reload].when_needed = secondary_type; 
#line 557 "reload.c"
rld[s_reload].secondary_in_reload = (in_p?t_reload:(-1)); 
#line 558 "reload.c"
rld[s_reload].secondary_out_reload = ((!in_p)?t_reload:(-1)); 
#line 559 "reload.c"
rld[s_reload].secondary_in_icode = (in_p?t_icode:CODE_FOR_nothing); 
#line 560 "reload.c"
rld[s_reload].secondary_out_icode = ((!in_p)?t_icode:CODE_FOR_nothing); 
#line 562 "reload.c"
rld[s_reload].secondary_p = 1; 
#line 564 "reload.c"
n_reloads++; 
#line 567 "reload.c"
if ((!in_p) && icode == CODE_FOR_nothing && ix86_secondary_memory_needed((reload_class), (class), (mode), 1)){
get_secondary_mem(x, mode, opnum, type); }} }
#line 573 "reload.c"
(*picode) = icode; 
#line 574 "reload.c"
return s_reload; }
 
# 426 "reload.c" 
# 586 "reload.c" 
 rtx get_secondary_mem( rtx x __attribute__  (( __unused__ )) , enum machine_mode mode, int opnum, enum reload_type type)  {

#line 587 "reload.c"

#line 587 "reload.c"
 rtx loc;
#line 588 "reload.c"

#line 588 "reload.c"
int mem_valid;
#line 599 "reload.c"
if ((((unsigned short )((((unsigned short )mode_size[mode])) * 8))) < (8 * ((0?8:4))) && (mode_class[mode] == MODE_INT || mode_class[mode] == MODE_PARTIAL_INT || mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_VECTOR_INT)){
mode = mode_for_size((8 * ((0?8:4))), mode_class[mode], 0); }
#line 604 "reload.c"
if (secondary_memlocs_elim[((int )mode)][opnum] != 0){
return secondary_memlocs_elim[((int )mode)][opnum]; }
#line 611 "reload.c"
if (secondary_memlocs[((int )mode)] == 0){
{ 
#line 617 "reload.c"
secondary_memlocs[((int )mode)] = assign_stack_local(mode, (((unsigned short )mode_size[mode])), 0); } }
#line 624 "reload.c"
loc = eliminate_regs(secondary_memlocs[((int )mode)], VOIDmode, (( rtx )0)); 
#line 625 "reload.c"
mem_valid = strict_memory_address_p(mode, ((((loc)->u).fld[0]).rtx)); 
#line 627 "reload.c"
if ((!mem_valid) && loc == secondary_memlocs[((int )mode)]){
loc = copy_rtx(loc); }
# 599 "reload.c" 
# 637 "reload.c" 
if ((!mem_valid)){
{ 
#line 641 "reload.c"
type = ((type == RELOAD_FOR_INPUT?RELOAD_FOR_INPUT_ADDRESS:(type == RELOAD_FOR_OUTPUT?RELOAD_FOR_OUTPUT_ADDRESS:RELOAD_OTHER))); 
#line 643 "reload.c"
find_reloads_address(mode, (&loc), ((((loc)->u).fld[0]).rtx), (&((((loc)->u).fld[0]).rtx)), opnum, type, 0, 0); } }
#line 647 "reload.c"
secondary_memlocs_elim[((int )mode)][opnum] = loc; 
#line 648 "reload.c"
if (secondary_memlocs_elim_used <= ((int )mode)){
secondary_memlocs_elim_used = ((int )mode) + 1; }
#line 650 "reload.c"
return loc; }
 
#line 657 "reload.c"
void clear_secondary_mem(void )  {

#line 658 "reload.c"
memset(secondary_memlocs, 0, sizeof secondary_memlocs); }
 
#line 669 "reload.c"
static enum reg_class find_valid_class(enum machine_mode m1 __attribute__  (( __unused__ )) , int n, unsigned int dest_regno __attribute__  (( __unused__ )) )  {

#line 670 "reload.c"

#line 670 "reload.c"
int best_cost = (-1);
#line 671 "reload.c"

#line 671 "reload.c"
int class;
#line 672 "reload.c"

#line 672 "reload.c"
int regno;
#line 673 "reload.c"

#line 673 "reload.c"
enum reg_class best_class = NO_REGS;
#line 674 "reload.c"

#line 674 "reload.c"
enum reg_class dest_class __attribute__  (( __unused__ ))  = (regclass_map[dest_regno]);
#line 675 "reload.c"

#line 675 "reload.c"
unsigned int best_size = 0;
#line 676 "reload.c"

#line 676 "reload.c"
int cost;
#line 678 "reload.c"
for(class = 1;class < (((int )LIM_REG_CLASSES));class++) { { 
#line 680 "reload.c"

#line 680 "reload.c"
int bad = 0;
#line 681 "reload.c"
for(regno = 0;regno < 53 && (!bad);regno++) { if (((!(!((reg_class_contents[class])[(regno) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((regno) % (((unsigned )(8 * 4))))))))) && ((!(!((reg_class_contents[class])[(regno + n) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((regno + n) % (((unsigned )(8 * 4))))))))) && (!ix86_hard_regno_mode_ok((regno + n), (m1)))){
bad = 1; }} 
#line 687 "reload.c"
if (bad){
continue; }
#line 689 "reload.c"
cost = ix86_register_move_cost((m1), (class), (dest_class)); 
#line 691 "reload.c"
if ((reg_class_size[class] > best_size && (best_cost < 0 || best_cost >= cost)) || best_cost > cost){
{ 
#line 695 "reload.c"
best_class = class; 
#line 696 "reload.c"
best_size = reg_class_size[class]; 
#line 697 "reload.c"
best_cost = ix86_register_move_cost((m1), (class), (dest_class)); } }} } 
#line 701 "reload.c"
if (best_size == 0){
fancy_abort("reload.c", 702, __FUNCTION__); }
#line 704 "reload.c"
return best_class; }
 
#line 718 "reload.c"
static int find_reusable_reload( rtx *p_in,  rtx out, enum reg_class class, enum reload_type type, int opnum, int dont_share)  {

#line 719 "reload.c"

#line 719 "reload.c"
 rtx in = (*p_in);
#line 720 "reload.c"

#line 720 "reload.c"
int i;
#line 724 "reload.c"
if (earlyclobber_operand_p(out)){
return n_reloads; }
# 715 "reload.c" 
# 736 "reload.c" 
for(i = 0;i < n_reloads;i++) { if ((reg_class_subset_p(class, rld[i].class) || reg_class_subset_p(rld[i].class, class)) && (rld[i].reg_rtx == 0 || ((!(!((reg_class_contents[((int )class)])[(true_regnum(rld[i].reg_rtx)) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((true_regnum(rld[i].reg_rtx)) % (((unsigned )(8 * 4)))))))))) && ((in != 0 && (rld[i].in == in || (rld[i].in != 0 && (((((enum rtx_code )((rld[i].in)->code))) == REG?(((enum rtx_code )((in)->code))) == REG && ((((rld[i].in)->u).fld[0]).rtuint) == ((((in)->u).fld[0]).rtuint):rtx_equal_p(rld[i].in, in) && (!side_effects_p(rld[i].in)))))) && (!dont_share) && (out == 0 || rld[i].out == 0 || (rld[i].out == out || (rld[i].out != 0 && (((((enum rtx_code )((rld[i].out)->code))) == REG?(((enum rtx_code )((out)->code))) == REG && ((((rld[i].out)->u).fld[0]).rtuint) == ((((out)->u).fld[0]).rtuint):rtx_equal_p(rld[i].out, out) && (!side_effects_p(rld[i].out)))))))) || (out != 0 && (rld[i].out == out || (rld[i].out != 0 && (((((enum rtx_code )((rld[i].out)->code))) == REG?(((enum rtx_code )((out)->code))) == REG && ((((rld[i].out)->u).fld[0]).rtuint) == ((((out)->u).fld[0]).rtuint):rtx_equal_p(rld[i].out, out) && (!side_effects_p(rld[i].out)))))) && (in == 0 || rld[i].in == 0 || (rld[i].in == in || (rld[i].in != 0 && (((((enum rtx_code )((rld[i].in)->code))) == REG?(((enum rtx_code )((in)->code))) == REG && ((((rld[i].in)->u).fld[0]).rtuint) == ((((in)->u).fld[0]).rtuint):rtx_equal_p(rld[i].in, in) && (!side_effects_p(rld[i].in))))))))) && (rld[i].out == 0 || (!earlyclobber_operand_p(rld[i].out))) && (reg_class_size[((int )class)] == 1 || 1) && ((type) == RELOAD_OTHER || (rld[i].when_needed) == RELOAD_OTHER || ((type) == (rld[i].when_needed) && (opnum) == (rld[i].opnum)) || ((type) == RELOAD_FOR_INPUT && (rld[i].when_needed) == RELOAD_FOR_INPUT) || ((type) == RELOAD_FOR_OPERAND_ADDRESS && (rld[i].when_needed) == RELOAD_FOR_OPERAND_ADDRESS) || ((type) == RELOAD_FOR_OTHER_ADDRESS && (rld[i].when_needed) == RELOAD_FOR_OTHER_ADDRESS))){
return i; }} 
#line 757 "reload.c"
for(i = 0;i < n_reloads;i++) { if ((reg_class_subset_p(class, rld[i].class) || reg_class_subset_p(rld[i].class, class)) && (rld[i].reg_rtx == 0 || ((!(!((reg_class_contents[((int )class)])[(true_regnum(rld[i].reg_rtx)) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((true_regnum(rld[i].reg_rtx)) % (((unsigned )(8 * 4)))))))))) && out == 0 && rld[i].out == 0 && rld[i].in != 0 && (((((enum rtx_code )((in)->code))) == REG && (rtx_class[((int )((((enum rtx_code )((rld[i].in)->code)))))]) == 'a' && (((((rld[i].in)->u).fld[0]).rtx) == in || (((((rld[i].in)->u).fld[0]).rtx) != 0 && (((((enum rtx_code )((((((rld[i].in)->u).fld[0]).rtx))->code))) == REG?(((enum rtx_code )((in)->code))) == REG && ((((((((rld[i].in)->u).fld[0]).rtx))->u).fld[0]).rtuint) == ((((in)->u).fld[0]).rtuint):rtx_equal_p(((((rld[i].in)->u).fld[0]).rtx), in) && (!side_effects_p(((((rld[i].in)->u).fld[0]).rtx)))))))) || ((((enum rtx_code )((rld[i].in)->code))) == REG && (rtx_class[((int )((((enum rtx_code )((in)->code)))))]) == 'a' && (((((in)->u).fld[0]).rtx) == rld[i].in || (((((in)->u).fld[0]).rtx) != 0 && (((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == REG?(((enum rtx_code )((rld[i].in)->code))) == REG && ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint) == ((((rld[i].in)->u).fld[0]).rtuint):rtx_equal_p(((((in)->u).fld[0]).rtx), rld[i].in) && (!side_effects_p(((((in)->u).fld[0]).rtx))))))))) && (rld[i].out == 0 || (!earlyclobber_operand_p(rld[i].out))) && (reg_class_size[((int )class)] == 1 || 1) && ((type) == RELOAD_OTHER || (rld[i].when_needed) == RELOAD_OTHER || ((type) == (rld[i].when_needed) && (opnum) == (rld[i].opnum)) || ((type) == RELOAD_FOR_INPUT && (rld[i].when_needed) == RELOAD_FOR_INPUT) || ((type) == RELOAD_FOR_OPERAND_ADDRESS && (rld[i].when_needed) == RELOAD_FOR_OPERAND_ADDRESS) || ((type) == RELOAD_FOR_OTHER_ADDRESS && (rld[i].when_needed) == RELOAD_FOR_OTHER_ADDRESS))){
{ 
#line 781 "reload.c"
if ((((enum rtx_code )((in)->code))) == REG){
(*p_in) = rld[i].in; }
#line 781 "reload.c"
return i; } }} 
#line 783 "reload.c"
return n_reloads; }
 
#line 791 "reload.c"
static int reload_inner_reg_of_subreg( rtx x, enum machine_mode mode, int output)  {

#line 792 "reload.c"

#line 792 "reload.c"
 rtx inner;
#line 795 "reload.c"
if ((((enum rtx_code )((x)->code))) != SUBREG){
return 0; }
#line 798 "reload.c"
inner = ((((x)->u).fld[0]).rtx); 
#line 801 "reload.c"
if (((((enum rtx_code )((inner)->code))) == LABEL_REF || (((enum rtx_code )((inner)->code))) == SYMBOL_REF || (((enum rtx_code )((inner)->code))) == CONST_INT || (((enum rtx_code )((inner)->code))) == CONST_DOUBLE || (((enum rtx_code )((inner)->code))) == CONST || (((enum rtx_code )((inner)->code))) == HIGH || (((enum rtx_code )((inner)->code))) == CONST_VECTOR || (((enum rtx_code )((inner)->code))) == CONSTANT_P_RTX) || (((enum rtx_code )((inner)->code))) == PLUS){
return 1; }
#line 806 "reload.c"
if ((((enum rtx_code )((inner)->code))) != REG || ((((inner)->u).fld[0]).rtuint) >= 53){
return 0; }
#line 811 "reload.c"
if ((!ix86_hard_regno_mode_ok((subreg_regno(x)), (mode)))){
return 1; }
#line 817 "reload.c"
return ((((unsigned short )mode_size[mode])) <= ((0?8:4)) && output && (((unsigned short )mode_size[(((enum machine_mode )((inner)->mode)))])) > ((0?8:4)) && (((((unsigned short )mode_size[(((enum machine_mode )((inner)->mode)))])) / ((0?8:4))) != ((int )((((((((inner)->u).fld[0]).rtuint)) >= 8 && (((((inner)->u).fld[0]).rtuint)) <= (8 + 7)) || (((((((inner)->u).fld[0]).rtuint)) >= (20 + 1) && (((((inner)->u).fld[0]).rtuint)) <= ((20 + 1) + 7)) || ((((((inner)->u).fld[0]).rtuint)) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (((((inner)->u).fld[0]).rtuint)) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((((((inner)->u).fld[0]).rtuint)) >= (((20 + 1) + 7) + 1) && (((((inner)->u).fld[0]).rtuint)) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((inner)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((inner)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((inner)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((inner)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((inner)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4))))))))))); }
 
#line 840 "reload.c"
static int can_reload_into( rtx in, int regno, enum machine_mode mode)  {

#line 841 "reload.c"

#line 841 "reload.c"
 rtx dst,test_insn;
#line 842 "reload.c"

#line 842 "reload.c"
int r = 0;
#line 843 "reload.c"

#line 843 "reload.c"
struct recog_data save_recog_data;
#line 850 "reload.c"
if ((((enum rtx_code )((in)->code))) == REG){
return 1; }
#line 857 "reload.c"
if ((((enum rtx_code )((in)->code))) == MEM){
return 1; }
#line 862 "reload.c"
dst = gen_rtx_REG(mode, regno); 
#line 863 "reload.c"
test_insn = make_insn_raw(gen_rtx_fmt_ee(SET, (VOIDmode), (dst), (in))); 
#line 864 "reload.c"
save_recog_data = recog_data; 
#line 865 "reload.c"
if (((((((test_insn)->u).fld[6]).rtint) >= 0?((((test_insn)->u).fld[6]).rtint):recog_memoized_1(test_insn))) >= 0){
{ 
#line 867 "reload.c"
extract_insn(test_insn); 
#line 868 "reload.c"
r = constrain_operands(1); } }
#line 870 "reload.c"
recog_data = save_recog_data; 
#line 871 "reload.c"
return r; }
 
# 838 "reload.c" 
# 912 "reload.c" 
int push_reload( rtx in,  rtx out,  rtx *inloc,  rtx *outloc, enum reg_class class, enum machine_mode inmode, enum machine_mode outmode, int strict_low, int optional, int opnum, enum reload_type type)  {

#line 913 "reload.c"

#line 913 "reload.c"
int i;
#line 914 "reload.c"

#line 914 "reload.c"
int dont_share = 0;
#line 915 "reload.c"

#line 915 "reload.c"
int dont_remove_subreg = 0;
#line 916 "reload.c"

#line 916 "reload.c"
 rtx *in_subreg_loc = 0,*out_subreg_loc = 0;
#line 917 "reload.c"

#line 917 "reload.c"
int secondary_in_reload = (-1),secondary_out_reload = (-1);
#line 918 "reload.c"

#line 918 "reload.c"
enum insn_code secondary_in_icode = CODE_FOR_nothing;
#line 919 "reload.c"

#line 919 "reload.c"
enum insn_code secondary_out_icode = CODE_FOR_nothing;
#line 924 "reload.c"
if (inmode == VOIDmode && in != 0){
inmode = (((enum machine_mode )((in)->mode))); }
#line 926 "reload.c"
if (outmode == VOIDmode && out != 0){
outmode = (((enum machine_mode )((out)->mode))); }
#line 933 "reload.c"
if (in != 0 && (((enum rtx_code )((in)->code))) == REG){
{ 
#line 935 "reload.c"

#line 935 "reload.c"
int regno = ((((in)->u).fld[0]).rtuint);
#line 937 "reload.c"
if (regno >= 53 && reg_renumber[regno] < 0 && reg_equiv_constant[regno] != 0){
in = reg_equiv_constant[regno]; }} }
#line 945 "reload.c"
if (out != 0 && (((enum rtx_code )((out)->code))) == REG){
{ 
#line 947 "reload.c"

#line 947 "reload.c"
int regno = ((((out)->u).fld[0]).rtuint);
#line 949 "reload.c"
if (regno >= 53 && reg_renumber[regno] < 0 && reg_equiv_constant[regno] != 0){
out = reg_equiv_constant[regno]; }} }
#line 956 "reload.c"
if (in != 0 && out != 0 && (((enum rtx_code )((in)->code))) == MEM && rtx_equal_p(in, out)){
switch((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code)))){ { 
#line 960 "reload.c"
case POST_INC: case POST_DEC: case POST_MODIFY: in = replace_equiv_address_nv(in, ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtx)); 
#line 961 "reload.c"
break; 
#line 963 "reload.c"
case PRE_INC: case PRE_DEC: case PRE_MODIFY: out = replace_equiv_address_nv(out, ((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtx)); 
#line 965 "reload.c"
break; 
#line 967 "reload.c"
default: break; } } }
#line 1001 "reload.c"
if (in != 0 && (((enum rtx_code )((in)->code))) == SUBREG && (subreg_lowpart_p(in) || strict_low) && (!(((((unsigned short )mode_size[inmode])) < (((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))]))?reg_classes_intersect_p(FLOAT_SSE_REGS, (class)) || reg_classes_intersect_p(MMX_REGS, (class)):((((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))])) != (((unsigned short )mode_size[inmode]))?reg_classes_intersect_p(FLOAT_REGS, (class)):0)))) && (((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == CONST || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == HIGH || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == CONSTANT_P_RTX) || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == PLUS || strict_low || ((((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == REG && ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint) >= 53) || (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == MEM) && (((((unsigned short )mode_size[inmode])) > (((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))]))))) || ((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == REG && ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (out == 0 || subreg_lowpart_p(in)) && (((((unsigned short )mode_size[inmode])) <= ((0?8:4)) && ((((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))])) > ((0?8:4))) && (((((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))])) / ((0?8:4))) != ((int )((((((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= 8 && (((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= (8 + 7)) || (((((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (20 + 1) && (((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((20 + 1) + 7)) || ((((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((20 + 1) + 7) + 1) && (((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))])) + ((0?8:4)) - 1) / ((0?8:4))))))))))) || (!ix86_hard_regno_mode_ok((subreg_regno(in)), (inmode))))) || ((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == REG && ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (((((unsigned short )mode_size[inmode])) < (((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))]))?reg_classes_intersect_p(FLOAT_SSE_REGS, ((regclass_map[((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)]))) || reg_classes_intersect_p(MMX_REGS, ((regclass_map[((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)]))):((((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))])) != (((unsigned short )mode_size[inmode]))?reg_classes_intersect_p(FLOAT_REGS, ((regclass_map[((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)]))):0)))))){
{ 
# 1001 "reload.c" 
# 1030 "reload.c" 
# 1059 "reload.c" 
in_subreg_loc = inloc; 
#line 1060 "reload.c"
inloc = (&((((in)->u).fld[0]).rtx)); 
#line 1061 "reload.c"
in = (*inloc); 
#line 1063 "reload.c"
if ((((enum rtx_code )((in)->code))) == MEM){
if ((((unsigned short )mode_size[(((enum machine_mode )((in)->mode)))])) > (((unsigned short )mode_size[inmode]))){
fancy_abort("reload.c", 1067, __FUNCTION__); }}
#line 1069 "reload.c"
inmode = (((enum machine_mode )((in)->mode))); } }
#line 1082 "reload.c"
if (in != 0 && reload_inner_reg_of_subreg(in, inmode, 0)){
{ 
#line 1084 "reload.c"

#line 1084 "reload.c"
enum reg_class in_class = class;
#line 1086 "reload.c"
if ((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == REG){
in_class = find_valid_class(inmode, subreg_regno_offset(((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode))), ((((in)->u).fld[1]).rtuint), (((enum machine_mode )((in)->mode)))), ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint)); }
#line 1100 "reload.c"
push_reload(((((in)->u).fld[0]).rtx), (( rtx )0), (&((((in)->u).fld[0]).rtx)), (( rtx *)0), in_class, VOIDmode, VOIDmode, 0, 0, opnum, type); 
#line 1102 "reload.c"
dont_remove_subreg = 1; } }
#line 1111 "reload.c"
if (out != 0 && (((enum rtx_code )((out)->code))) == SUBREG && (subreg_lowpart_p(out) || strict_low) && (!(((((unsigned short )mode_size[outmode])) < (((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))]))?reg_classes_intersect_p(FLOAT_SSE_REGS, (class)) || reg_classes_intersect_p(MMX_REGS, (class)):((((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))])) != (((unsigned short )mode_size[outmode]))?reg_classes_intersect_p(FLOAT_REGS, (class)):0)))) && (((((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == CONST || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == HIGH || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == CONSTANT_P_RTX) || strict_low || ((((((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == REG && ((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint) >= 53) || (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == MEM) && (((((unsigned short )mode_size[outmode])) > (((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))]))))) || ((((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == REG && ((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (((((unsigned short )mode_size[outmode])) <= ((0?8:4)) && ((((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))])) > ((0?8:4))) && (((((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))])) / ((0?8:4))) != ((int )((((((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= 8 && (((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= (8 + 7)) || (((((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (20 + 1) && (((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((20 + 1) + 7)) || ((((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((20 + 1) + 7) + 1) && (((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))])) + ((0?8:4)) - 1) / ((0?8:4))))))))))) || (!ix86_hard_regno_mode_ok((subreg_regno(out)), (outmode))))) || (((((class) == GENERAL_REGS || (class) == LEGACY_REGS || (class) == INDEX_REGS) && (!0) && (outmode) == QImode?Q_REGS:NO_REGS)) != NO_REGS && (((((class) == GENERAL_REGS || (class) == LEGACY_REGS || (class) == INDEX_REGS) && (!0) && ((((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))) == QImode?Q_REGS:NO_REGS)) == NO_REGS)) || ((((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == REG && ((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (((((unsigned short )mode_size[outmode])) < (((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))]))?reg_classes_intersect_p(FLOAT_SSE_REGS, ((regclass_map[((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)]))) || reg_classes_intersect_p(MMX_REGS, ((regclass_map[((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)]))):((((unsigned short )mode_size[(((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))])) != (((unsigned short )mode_size[outmode]))?reg_classes_intersect_p(FLOAT_REGS, ((regclass_map[((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)]))):0)))))){
{ 
#line 1157 "reload.c"
out_subreg_loc = outloc; 
#line 1158 "reload.c"
outloc = (&((((out)->u).fld[0]).rtx)); 
#line 1159 "reload.c"
out = (*outloc); 
#line 1161 "reload.c"
if ((((enum rtx_code )((out)->code))) == MEM && (((unsigned short )mode_size[(((enum machine_mode )((out)->mode)))])) > (((unsigned short )mode_size[outmode]))){
fancy_abort("reload.c", 1163, __FUNCTION__); }
#line 1165 "reload.c"
outmode = (((enum machine_mode )((out)->mode))); } }
# 1082 "reload.c" 
# 1175 "reload.c" 
if (out != 0 && reload_inner_reg_of_subreg(out, outmode, 1)){
{ 
#line 1182 "reload.c"
dont_remove_subreg = 1; 
#line 1183 "reload.c"
push_reload(((((out)->u).fld[0]).rtx), ((((out)->u).fld[0]).rtx), (&((((out)->u).fld[0]).rtx)), (&((((out)->u).fld[0]).rtx)), find_valid_class(outmode, subreg_regno_offset(((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode))), ((((out)->u).fld[1]).rtuint), (((enum machine_mode )((out)->mode)))), ((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint)), VOIDmode, VOIDmode, 0, 0, opnum, RELOAD_OTHER); } }
#line 1196 "reload.c"
if (in != 0 && out != 0 && (((enum rtx_code )((out)->code))) == MEM && ((((enum rtx_code )((in)->code))) == REG || (((enum rtx_code )((in)->code))) == MEM) && reg_overlap_mentioned_for_reload_p(in, ((((out)->u).fld[0]).rtx))){
dont_share = 1; }
#line 1204 "reload.c"
if (in != 0 && (((enum rtx_code )((in)->code))) == SUBREG && (((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == REG && ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (!dont_remove_subreg)){
in = gen_rtx_REG((((enum machine_mode )((in)->mode))), subreg_regno(in)); }
#line 1210 "reload.c"
if (out != 0 && (((enum rtx_code )((out)->code))) == SUBREG && (((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == REG && ((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (!dont_remove_subreg)){
out = gen_rtx_REG((((enum machine_mode )((out)->mode))), subreg_regno(out)); }
#line 1218 "reload.c"
if (in != 0){
class = ix86_preferred_reload_class((in), (class)); }
#line 1232 "reload.c"
if (in_subreg_loc){
class = (((inmode) == QImode && (!0) && ((class) == ALL_REGS || (class) == GENERAL_REGS || (class) == LEGACY_REGS || (class) == INDEX_REGS)?Q_REGS:(class))); }else{
if (in != 0 && (((enum rtx_code )((in)->code))) == SUBREG){
class = ((((((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))) == QImode && (!0) && ((class) == ALL_REGS || (class) == GENERAL_REGS || (class) == LEGACY_REGS || (class) == INDEX_REGS)?Q_REGS:(class))); }}
#line 1237 "reload.c"
if (out_subreg_loc){
class = (((outmode) == QImode && (!0) && ((class) == ALL_REGS || (class) == GENERAL_REGS || (class) == LEGACY_REGS || (class) == INDEX_REGS)?Q_REGS:(class))); }
#line 1239 "reload.c"
if (out != 0 && (((enum rtx_code )((out)->code))) == SUBREG){
class = ((((((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode)))) == QImode && (!0) && ((class) == ALL_REGS || (class) == GENERAL_REGS || (class) == LEGACY_REGS || (class) == INDEX_REGS)?Q_REGS:(class))); }
#line 1245 "reload.c"
if (this_insn_is_asm){
{ 
#line 1247 "reload.c"

#line 1247 "reload.c"
enum machine_mode mode;
#line 1248 "reload.c"
if ((((unsigned short )mode_size[inmode])) > (((unsigned short )mode_size[outmode]))){
mode = inmode; }else{
mode = outmode; }
#line 1252 "reload.c"
if (mode == VOIDmode){
{ 
#line 1254 "reload.c"
error_for_asm(this_insn, "cannot reload integer constant operand in `asm'"); 
#line 1255 "reload.c"
mode = word_mode; 
#line 1256 "reload.c"
if (in != 0){
inmode = word_mode; }
#line 1258 "reload.c"
if (out != 0){
outmode = word_mode; }} }
#line 1261 "reload.c"
for(i = 0;i < 53;i++) { if (ix86_hard_regno_mode_ok((i), (mode)) && ((!(!((reg_class_contents[((int )class)])[(i) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((i) % (((unsigned )(8 * 4)))))))))){
{ 
#line 1265 "reload.c"

#line 1265 "reload.c"
int nregs = ((((i) >= 8 && (i) <= (8 + 7)) || (((i) >= (20 + 1) && (i) <= ((20 + 1) + 7)) || ((i) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (i) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((i) >= (((20 + 1) + 7) + 1) && (i) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4))))))));
#line 1267 "reload.c"

#line 1267 "reload.c"
int j;
#line 1268 "reload.c"
for(j = 1;j < nregs;j++) { if ((!((!(!((reg_class_contents[((int )class)])[(i + j) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((i + j) % (((unsigned )(8 * 4))))))))))){
break; }} 
#line 1271 "reload.c"
if (j == nregs){
break; }} }} 
#line 1274 "reload.c"
if (i == 53){
{ 
#line 1276 "reload.c"
error_for_asm(this_insn, "impossible register constraint in `asm'"); 
#line 1277 "reload.c"
class = ALL_REGS; } }} }
#line 1284 "reload.c"
if (class == NO_REGS && (optional == 0 || type != RELOAD_FOR_OUTPUT)){
fancy_abort("reload.c", 1286, __FUNCTION__); }
#line 1288 "reload.c"
i = find_reusable_reload((&in), out, class, type, opnum, dont_share); 
#line 1290 "reload.c"
if (i == n_reloads){
{ 
# 1232 "reload.c" 
# 1315 "reload.c" 
if (out != 0 && (((enum rtx_code )((out)->code))) != SCRATCH){
secondary_out_reload = push_secondary_reload(0, out, opnum, optional, class, outmode, type, (&secondary_out_icode)); }
#line 1315 "reload.c"
if (in != 0 && ((((enum rtx_code )((in)->code))) == REG || (((enum rtx_code )((in)->code))) == SUBREG) && reg_or_subregno(in) < 53 && ix86_secondary_memory_needed(((regclass_map[reg_or_subregno(in)])), (class), (inmode), 1)){
get_secondary_mem(in, inmode, opnum, type); }
#line 1322 "reload.c"
i = n_reloads; 
#line 1323 "reload.c"
rld[i].in = in; 
#line 1324 "reload.c"
rld[i].out = out; 
#line 1325 "reload.c"
rld[i].class = class; 
#line 1326 "reload.c"
rld[i].inmode = inmode; 
#line 1327 "reload.c"
rld[i].outmode = outmode; 
#line 1328 "reload.c"
rld[i].reg_rtx = 0; 
#line 1329 "reload.c"
rld[i].optional = optional; 
#line 1330 "reload.c"
rld[i].inc = 0; 
#line 1331 "reload.c"
rld[i].nocombine = 0; 
#line 1332 "reload.c"
rld[i].in_reg = (inloc?(*inloc):0); 
#line 1333 "reload.c"
rld[i].out_reg = (outloc?(*outloc):0); 
#line 1334 "reload.c"
rld[i].opnum = opnum; 
#line 1335 "reload.c"
rld[i].when_needed = type; 
#line 1336 "reload.c"
rld[i].secondary_in_reload = secondary_in_reload; 
#line 1337 "reload.c"
rld[i].secondary_out_reload = secondary_out_reload; 
#line 1338 "reload.c"
rld[i].secondary_in_icode = secondary_in_icode; 
#line 1339 "reload.c"
rld[i].secondary_out_icode = secondary_out_icode; 
#line 1340 "reload.c"
rld[i].secondary_p = 0; 
#line 1342 "reload.c"
n_reloads++; 
#line 1345 "reload.c"
if (out != 0 && ((((enum rtx_code )((out)->code))) == REG || (((enum rtx_code )((out)->code))) == SUBREG) && reg_or_subregno(out) < 53 && ix86_secondary_memory_needed((class), ((regclass_map[reg_or_subregno(out)])), (outmode), 1)){
get_secondary_mem(out, outmode, opnum, type); }} }else{
{ 
#line 1365 "reload.c"
if (inmode != VOIDmode && (((unsigned short )mode_size[inmode])) > (((unsigned short )mode_size[rld[i].inmode]))){
rld[i].inmode = inmode; }
#line 1365 "reload.c"
if (outmode != VOIDmode && (((unsigned short )mode_size[outmode])) > (((unsigned short )mode_size[rld[i].outmode]))){
rld[i].outmode = outmode; }
#line 1368 "reload.c"
if (in != 0){
{ 
#line 1370 "reload.c"

#line 1370 "reload.c"
 rtx in_reg = (inloc?(*inloc):0);
#line 1385 "reload.c"
if (rld[i].in != in && rtx_equal_p(in, rld[i].in) && (!(rld[i].optional && optional))){
{ 
#line 1397 "reload.c"
if (opnum > rld[i].opnum){
{ 
#line 1392 "reload.c"
remove_address_replacements(in); 
#line 1393 "reload.c"
in = rld[i].in; 
#line 1394 "reload.c"
in_reg = rld[i].in_reg; } }else{
remove_address_replacements(rld[i].in); }} }
#line 1399 "reload.c"
rld[i].in = in; 
#line 1400 "reload.c"
rld[i].in_reg = in_reg; } }
#line 1402 "reload.c"
if (out != 0){
{ 
#line 1404 "reload.c"
rld[i].out = out; 
#line 1405 "reload.c"
rld[i].out_reg = (outloc?(*outloc):0); } }
#line 1407 "reload.c"
if (reg_class_subset_p(class, rld[i].class)){
rld[i].class = class; }
#line 1409 "reload.c"
rld[i].optional &= optional; 
#line 1410 "reload.c"
if (((type) != (rld[i].when_needed) || (!((opnum) == (rld[i].opnum) || (type) == RELOAD_FOR_INPUT || (type) == RELOAD_FOR_OPERAND_ADDRESS || (type) == RELOAD_FOR_OTHER_ADDRESS)))){
rld[i].when_needed = RELOAD_OTHER; }
#line 1413 "reload.c"
rld[i].opnum = (((rld[i].opnum) < (opnum)?(rld[i].opnum):(opnum))); } }
#line 1420 "reload.c"
if (in != 0 && in != (*inloc)){
rld[i].nocombine = 1; }
# 1385 "reload.c" 
# 1449 "reload.c" 
if (replace_reloads){
{ 
#line 1459 "reload.c"
if (inloc != 0){
{ 
#line 1453 "reload.c"

#line 1453 "reload.c"
struct replacement *r = (&replacements[n_replacements++]);
#line 1454 "reload.c"
(r->what) = i; 
#line 1455 "reload.c"
(r->subreg_loc) = in_subreg_loc; 
#line 1456 "reload.c"
(r->where) = inloc; 
#line 1457 "reload.c"
(r->mode) = inmode; } }
#line 1459 "reload.c"
if (outloc != 0 && outloc != inloc){
{ 
#line 1461 "reload.c"

#line 1461 "reload.c"
struct replacement *r = (&replacements[n_replacements++]);
#line 1462 "reload.c"
(r->what) = i; 
#line 1463 "reload.c"
(r->where) = outloc; 
#line 1464 "reload.c"
(r->subreg_loc) = out_subreg_loc; 
#line 1465 "reload.c"
(r->mode) = outmode; } }} }
#line 1477 "reload.c"
if (in != 0 && out != 0 && in != out && rld[i].reg_rtx == 0){
{ 
#line 1482 "reload.c"
rld[i].reg_rtx = find_dummy_reload(in, out, inloc, outloc, inmode, outmode, rld[i].class, i, earlyclobber_operand_p(out)); 
#line 1488 "reload.c"
if (rld[i].reg_rtx == out && ((((enum rtx_code )((in)->code))) == REG || ((((enum rtx_code )((in)->code))) == LABEL_REF || (((enum rtx_code )((in)->code))) == SYMBOL_REF || (((enum rtx_code )((in)->code))) == CONST_INT || (((enum rtx_code )((in)->code))) == CONST_DOUBLE || (((enum rtx_code )((in)->code))) == CONST || (((enum rtx_code )((in)->code))) == HIGH || (((enum rtx_code )((in)->code))) == CONST_VECTOR || (((enum rtx_code )((in)->code))) == CONSTANT_P_RTX)) && 0 != find_equiv_reg(in, this_insn, 0, ((((out)->u).fld[0]).rtuint), static_reload_reg_p, i, inmode)){
rld[i].in = out; }} }
# 1477 "reload.c" 
# 1507 "reload.c" 
if (rld[i].reg_rtx == 0 && in != 0){
{ 
#line 1509 "reload.c"

#line 1509 "reload.c"
 rtx note;
#line 1510 "reload.c"

#line 1510 "reload.c"
int regno;
#line 1511 "reload.c"

#line 1511 "reload.c"
enum machine_mode rel_mode = inmode;
#line 1513 "reload.c"
if (out && (((unsigned short )mode_size[outmode])) > (((unsigned short )mode_size[inmode]))){
rel_mode = outmode; }
#line 1516 "reload.c"
for(note = ((((this_insn)->u).fld[8]).rtx);note;note = ((((note)->u).fld[1]).rtx)) { if ((((enum reg_note )(((enum machine_mode )((note)->mode))))) == REG_DEAD && (((enum rtx_code )((((((note)->u).fld[0]).rtx))->code))) == REG && (regno = ((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) < 53 && reg_mentioned_p(((((note)->u).fld[0]).rtx), in) && (!refers_to_regno_for_reload_p(regno, (regno + ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[rel_mode] == MODE_COMPLEX_INT || mode_class[rel_mode] == MODE_COMPLEX_FLOAT)?2:1)):(((rel_mode) == XFmode?((0?2:3)):((rel_mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[rel_mode])) + ((0?8:4)) - 1) / ((0?8:4))))))))), ((((this_insn)->u).fld[5]).rtx), inloc)) && (out == 0 || in == out || (!hard_reg_set_here_p(regno, (regno + ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[rel_mode] == MODE_COMPLEX_INT || mode_class[rel_mode] == MODE_COMPLEX_FLOAT)?2:1)):(((rel_mode) == XFmode?((0?2:3)):((rel_mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[rel_mode])) + ((0?8:4)) - 1) / ((0?8:4))))))))), ((((this_insn)->u).fld[5]).rtx)))) && (in != out || ((((enum rtx_code )((in)->code))) == SUBREG && ((((((unsigned short )mode_size[(((enum machine_mode )((in)->mode)))])) + (((0?8:4)) - 1)) / ((0?8:4))) == (((((unsigned short )mode_size[(((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode)))])) + (((0?8:4)) - 1)) / ((0?8:4)))))) && ((((unsigned short )mode_size[rel_mode])) <= (((unsigned short )mode_size[(((enum machine_mode )((((((note)->u).fld[0]).rtx))->mode)))]))) && ix86_hard_regno_mode_ok((regno), (inmode)) && ix86_hard_regno_mode_ok((regno), (outmode))){
{ 
#line 1550 "reload.c"

#line 1550 "reload.c"
unsigned int offs;
#line 1551 "reload.c"

#line 1551 "reload.c"
unsigned int nregs = (((((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[inmode] == MODE_COMPLEX_INT || mode_class[inmode] == MODE_COMPLEX_FLOAT)?2:1)):(((inmode) == XFmode?((0?2:3)):((inmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[inmode])) + ((0?8:4)) - 1) / ((0?8:4))))))))) > (((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[outmode] == MODE_COMPLEX_INT || mode_class[outmode] == MODE_COMPLEX_FLOAT)?2:1)):(((outmode) == XFmode?((0?2:3)):((outmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[outmode])) + ((0?8:4)) - 1) / ((0?8:4)))))))))?(((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[inmode] == MODE_COMPLEX_INT || mode_class[inmode] == MODE_COMPLEX_FLOAT)?2:1)):(((inmode) == XFmode?((0?2:3)):((inmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[inmode])) + ((0?8:4)) - 1) / ((0?8:4))))))))):(((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[outmode] == MODE_COMPLEX_INT || mode_class[outmode] == MODE_COMPLEX_FLOAT)?2:1)):(((outmode) == XFmode?((0?2:3)):((outmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[outmode])) + ((0?8:4)) - 1) / ((0?8:4)))))))))));
#line 1554 "reload.c"
for(offs = 0;offs < nregs;offs++) { if (fixed_regs[regno + offs] || (!((!(!((reg_class_contents[((int )class)])[(regno + offs) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((regno + offs) % (((unsigned )(8 * 4))))))))))){
break; }} 
#line 1560 "reload.c"
if (offs == nregs && ((!(refers_to_regno_for_reload_p(regno, (regno + ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[inmode] == MODE_COMPLEX_INT || mode_class[inmode] == MODE_COMPLEX_FLOAT)?2:1)):(((inmode) == XFmode?((0?2:3)):((inmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[inmode])) + ((0?8:4)) - 1) / ((0?8:4))))))))), in, (( rtx *)0)))) || can_reload_into(in, regno, inmode))){
{ 
#line 1566 "reload.c"
rld[i].reg_rtx = gen_rtx_REG(rel_mode, regno); 
#line 1567 "reload.c"
break; } }} }} } }
#line 1572 "reload.c"
if (out){
output_reloadnum = i; }
#line 1575 "reload.c"
return i; }
 
#line 1586 "reload.c"
static void push_replacement( rtx *loc, int reloadnum, enum machine_mode mode)  {

#line 1595 "reload.c"
if (replace_reloads){
{ 
#line 1589 "reload.c"

#line 1589 "reload.c"
struct replacement *r = (&replacements[n_replacements++]);
#line 1590 "reload.c"
(r->what) = reloadnum; 
#line 1591 "reload.c"
(r->where) = loc; 
#line 1592 "reload.c"
(r->subreg_loc) = 0; 
#line 1593 "reload.c"
(r->mode) = mode; } }}
 
#line 1603 "reload.c"
static void dup_replacements( rtx *dup_loc,  rtx *orig_loc)  {

#line 1604 "reload.c"

#line 1604 "reload.c"
int i,n = n_replacements;
#line 1606 "reload.c"
for(i = 0;i < n;i++) { { 
#line 1608 "reload.c"

#line 1608 "reload.c"
struct replacement *r = (&replacements[i]);
#line 1609 "reload.c"
if ((r->where) == orig_loc){
push_replacement(dup_loc, (r->what), (r->mode)); }} } }
 
#line 1619 "reload.c"
void transfer_replacements(int to, int from)  {

#line 1620 "reload.c"

#line 1620 "reload.c"
int i;
#line 1622 "reload.c"
for(i = 0;i < n_replacements;i++) { if (replacements[i].what == from){
replacements[i].what = to; }} }
 
#line 1633 "reload.c"
int remove_address_replacements( rtx in_rtx)  {

#line 1634 "reload.c"

#line 1634 "reload.c"
int i,j;
#line 1635 "reload.c"

#line 1635 "reload.c"
char reload_flags[(2 * 30 * (2 + 1))];
#line 1636 "reload.c"

#line 1636 "reload.c"
int something_changed = 0;
#line 1638 "reload.c"
memset(reload_flags, 0, sizeof reload_flags); 
#line 1639 "reload.c"
for(i = 0 , j = 0;i < n_replacements;i++) { { 
#line 1647 "reload.c"
if (loc_mentioned_in_p(replacements[i].where, in_rtx)){
reload_flags[replacements[i].what] |= 1; }else{
{ 
#line 1645 "reload.c"
replacements[j++] = replacements[i]; 
#line 1646 "reload.c"
reload_flags[replacements[i].what] |= 2; } }} } 
#line 1650 "reload.c"
n_replacements = j; 
#line 1652 "reload.c"
for(i = n_reloads - 1;i >= 0;i--) { { 
#line 1661 "reload.c"
if (reload_flags[i] == 1){
{ 
#line 1656 "reload.c"
deallocate_reload_reg(i); 
#line 1657 "reload.c"
remove_address_replacements(rld[i].in); 
#line 1658 "reload.c"
rld[i].in = 0; 
#line 1659 "reload.c"
something_changed = 1; } }} } 
#line 1662 "reload.c"
return something_changed; }
 
#line 1679 "reload.c"
static void combine_reloads(void )  {

#line 1680 "reload.c"

#line 1680 "reload.c"
int i;
#line 1681 "reload.c"

#line 1681 "reload.c"
int output_reload = (-1);
#line 1682 "reload.c"

#line 1682 "reload.c"
int secondary_out = (-1);
#line 1683 "reload.c"

#line 1683 "reload.c"
 rtx note;
#line 1688 "reload.c"
for(i = 0;i < n_reloads;i++) { if (rld[i].out != 0){
{ 
#line 1693 "reload.c"
if (output_reload >= 0){
return ; }
#line 1693 "reload.c"
output_reload = i; } }} 
#line 1696 "reload.c"
if (output_reload < 0 || rld[output_reload].optional){
return ; }
#line 1701 "reload.c"
if (rld[output_reload].in != 0){
return ; }
#line 1705 "reload.c"
if (earlyclobber_operand_p(rld[output_reload].out)){
return ; }
#line 1712 "reload.c"
for(i = 0;i < n_reloads;i++) { if ((rld[i].when_needed == RELOAD_FOR_OUTPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTADDR_ADDRESS) && rld[i].opnum == rld[output_reload].opnum){
return ; }} 
#line 1720 "reload.c"
for(i = 0;i < n_reloads;i++) { if (rld[i].in && (!rld[i].optional) && (!rld[i].nocombine) && rld[i].when_needed != RELOAD_FOR_OUTPUT_ADDRESS && rld[i].when_needed != RELOAD_FOR_OUTADDR_ADDRESS && rld[i].when_needed != RELOAD_OTHER && ((((!reg_classes_intersect_p((rld[i].class), GENERAL_REGS))?(((mode_class[rld[i].inmode] == MODE_COMPLEX_INT || mode_class[rld[i].inmode] == MODE_COMPLEX_FLOAT)?2:1)):((((((rld[i].inmode) == XFmode?12:(((unsigned short )mode_size[rld[i].inmode]))))) + ((0?8:4)) - 1) / ((0?8:4))))) == (((!reg_classes_intersect_p((rld[output_reload].class), GENERAL_REGS))?(((mode_class[rld[output_reload].outmode] == MODE_COMPLEX_INT || mode_class[rld[output_reload].outmode] == MODE_COMPLEX_FLOAT)?2:1)):((((((rld[output_reload].outmode) == XFmode?12:(((unsigned short )mode_size[rld[output_reload].outmode]))))) + ((0?8:4)) - 1) / ((0?8:4)))))) && rld[i].inc == 0 && rld[i].reg_rtx == 0 && (secondary_memlocs_elim[((int )rld[output_reload].outmode)][rld[i].opnum] == 0 || secondary_memlocs_elim[((int )rld[output_reload].outmode)][rld[output_reload].opnum] == 0 || rtx_equal_p(secondary_memlocs_elim[((int )rld[output_reload].outmode)][rld[i].opnum], secondary_memlocs_elim[((int )rld[output_reload].outmode)][rld[output_reload].opnum])) && ((1?(rld[i].class == rld[output_reload].class):(reg_class_subset_p(rld[i].class, rld[output_reload].class) || reg_class_subset_p(rld[output_reload].class, rld[i].class)))) && ((rld[i].in == rld[output_reload].out || (rld[i].in != 0 && (((((enum rtx_code )((rld[i].in)->code))) == REG?(((enum rtx_code )((rld[output_reload].out)->code))) == REG && ((((rld[i].in)->u).fld[0]).rtuint) == ((((rld[output_reload].out)->u).fld[0]).rtuint):rtx_equal_p(rld[i].in, rld[output_reload].out) && (!side_effects_p(rld[i].in)))))) || ((!reg_overlap_mentioned_for_reload_p(rld[output_reload].out, rld[i].in)) && (!((((enum rtx_code )((rld[i].in)->code))) == REG && reg_overlap_mentioned_for_reload_p(rld[i].in, rld[output_reload].out))))) && (!reload_inner_reg_of_subreg(rld[i].in, rld[i].inmode, rld[i].when_needed != RELOAD_FOR_INPUT)) && (reg_class_size[((int )rld[i].class)] || 1) && (rld[i].when_needed == RELOAD_FOR_INPUT || rld[i].when_needed == RELOAD_FOR_OUTPUT)){
{ 
#line 1769 "reload.c"

#line 1769 "reload.c"
int j;
#line 1772 "reload.c"
rld[i].out = rld[output_reload].out; 
#line 1773 "reload.c"
rld[i].out_reg = rld[output_reload].out_reg; 
#line 1774 "reload.c"
rld[i].outmode = rld[output_reload].outmode; 
#line 1776 "reload.c"
rld[output_reload].out = 0; 
#line 1778 "reload.c"
rld[i].when_needed = RELOAD_OTHER; 
#line 1780 "reload.c"
if (rld[output_reload].secondary_out_reload != (-1)){
{ 
#line 1783 "reload.c"
rld[i].secondary_out_reload = rld[output_reload].secondary_out_reload; 
#line 1784 "reload.c"
rld[i].secondary_out_icode = rld[output_reload].secondary_out_icode; } }
#line 1790 "reload.c"
if (secondary_memlocs_elim[((int )rld[output_reload].outmode)][rld[output_reload].opnum] != 0){
secondary_memlocs_elim[((int )rld[output_reload].outmode)][rld[i].opnum] = secondary_memlocs_elim[((int )rld[output_reload].outmode)][rld[output_reload].opnum]; }
#line 1795 "reload.c"
if (reg_class_subset_p(rld[output_reload].class, rld[i].class)){
rld[i].class = rld[output_reload].class; }
#line 1800 "reload.c"
for(j = 0;j < n_replacements;j++) { if (replacements[j].what == output_reload){
replacements[j].what = i; }} 
#line 1804 "reload.c"
return ; } }} 
#line 1813 "reload.c"
if (((((this_insn)->u).fld[6]).rtint) == (-1)){
return ; }
#line 1816 "reload.c"
for(i = 1;i < insn_data[((((this_insn)->u).fld[6]).rtint)].n_operands;i++) { if (insn_data[((((this_insn)->u).fld[6]).rtint)].operand[i].constraint[0] == '=' || insn_data[((((this_insn)->u).fld[6]).rtint)].operand[i].constraint[0] == '+'){
return ; }} 
#line 1824 "reload.c"
for(note = ((((this_insn)->u).fld[8]).rtx);note;note = ((((note)->u).fld[1]).rtx)) { if ((((enum reg_note )(((enum machine_mode )((note)->mode))))) == REG_DEAD && (((enum rtx_code )((((((note)->u).fld[0]).rtx))->code))) == REG && (!reg_overlap_mentioned_for_reload_p(((((note)->u).fld[0]).rtx), rld[output_reload].out)) && ((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && ix86_hard_regno_mode_ok((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)), (rld[output_reload].outmode)) && ((!(!((reg_class_contents[((int )rld[output_reload].class)])[(((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) % (((unsigned )(8 * 4))))))))) && (((((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= 8 && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= (8 + 7)) || (((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (20 + 1) && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((20 + 1) + 7)) || ((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((20 + 1) + 7) + 1) && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[rld[output_reload].outmode] == MODE_COMPLEX_INT || mode_class[rld[output_reload].outmode] == MODE_COMPLEX_FLOAT)?2:1)):(((rld[output_reload].outmode) == XFmode?((0?2:3)):((rld[output_reload].outmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[rld[output_reload].outmode])) + ((0?8:4)) - 1) / ((0?8:4)))))))) <= ((((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= 8 && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= (8 + 7)) || (((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (20 + 1) && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((20 + 1) + 7)) || ((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) >= (((20 + 1) + 7) + 1) && (((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((((((note)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((((((note)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((((((note)->u).fld[0]).rtx))->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((((((note)->u).fld[0]).rtx))->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((((((note)->u).fld[0]).rtx))->mode)))])) + ((0?8:4)) - 1) / ((0?8:4))))))))) && ((secondary_out = rld[output_reload].secondary_out_reload) == (-1) || ((!(((!(!((reg_class_contents[((int )rld[secondary_out].class)])[(((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) % (((unsigned )(8 * 4))))))))))) && ((secondary_out = rld[secondary_out].secondary_out_reload) == (-1) || (!(((!(!((reg_class_contents[((int )rld[secondary_out].class)])[(((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)) % (((unsigned )(8 * 4)))))))))))))) && (!fixed_regs[((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)])){
{ 
#line 1849 "reload.c"
rld[output_reload].reg_rtx = gen_rtx_REG(rld[output_reload].outmode, ((((((((note)->u).fld[0]).rtx))->u).fld[0]).rtuint)); 
#line 1850 "reload.c"
return ; } }} }
 
# 1677 "reload.c" 
# 1877 "reload.c" 
static  rtx find_dummy_reload( rtx real_in,  rtx real_out,  rtx *inloc,  rtx *outloc, enum machine_mode inmode, enum machine_mode outmode, enum reg_class class, int for_real, int earlyclobber)  {

#line 1878 "reload.c"

#line 1878 "reload.c"
 rtx in = real_in;
#line 1879 "reload.c"

#line 1879 "reload.c"
 rtx out = real_out;
#line 1880 "reload.c"

#line 1880 "reload.c"
int in_offset = 0;
#line 1881 "reload.c"

#line 1881 "reload.c"
int out_offset = 0;
#line 1882 "reload.c"

#line 1882 "reload.c"
 rtx value = 0;
#line 1886 "reload.c"
if ((((unsigned short )mode_size[outmode])) != (((unsigned short )mode_size[inmode])) && ((((unsigned short )mode_size[outmode])) > ((0?8:4)) || (((unsigned short )mode_size[inmode])) > ((0?8:4)))){
return 0; }
#line 1895 "reload.c"
while((((enum rtx_code )((out)->code))) == SUBREG) { { 
#line 1903 "reload.c"
if ((((enum rtx_code )((((((out)->u).fld[0]).rtx))->code))) == REG && ((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53){
out_offset += subreg_regno_offset(((((((((out)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((out)->u).fld[0]).rtx))->mode))), ((((out)->u).fld[1]).rtuint), (((enum machine_mode )((out)->mode)))); }
#line 1903 "reload.c"
out = ((((out)->u).fld[0]).rtx); } } 
#line 1905 "reload.c"
while((((enum rtx_code )((in)->code))) == SUBREG) { { 
#line 1913 "reload.c"
if ((((enum rtx_code )((((((in)->u).fld[0]).rtx))->code))) == REG && ((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53){
in_offset += subreg_regno_offset(((((((((in)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((in)->u).fld[0]).rtx))->mode))), ((((in)->u).fld[1]).rtuint), (((enum machine_mode )((in)->mode)))); }
#line 1913 "reload.c"
in = ((((in)->u).fld[0]).rtx); } } 
#line 1918 "reload.c"
class = ix86_preferred_reload_class((in), (class)); 
#line 1921 "reload.c"
if ((((enum rtx_code )((out)->code))) == REG && ((((out)->u).fld[0]).rtuint) < 53){
{ 
#line 1924 "reload.c"

#line 1924 "reload.c"
unsigned int regno = ((((out)->u).fld[0]).rtuint) + out_offset;
#line 1925 "reload.c"

#line 1925 "reload.c"
unsigned int nwords = ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[outmode] == MODE_COMPLEX_INT || mode_class[outmode] == MODE_COMPLEX_FLOAT)?2:1)):(((outmode) == XFmode?((0?2:3)):((outmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[outmode])) + ((0?8:4)) - 1) / ((0?8:4))))))));
#line 1926 "reload.c"

#line 1926 "reload.c"
 rtx saved_rtx;
#line 1938 "reload.c"
saved_rtx = (*inloc); 
#line 1939 "reload.c"
(*inloc) = (const_int_rtx[64]); 
#line 1941 "reload.c"
if (regno < 53 && ix86_hard_regno_mode_ok((regno), (outmode)) && (!refers_to_regno_for_reload_p(regno, regno + nwords, ((((this_insn)->u).fld[5]).rtx), outloc))){
{ 
#line 1946 "reload.c"

#line 1946 "reload.c"
unsigned int i;
#line 1948 "reload.c"
for(i = 0;i < nwords;i++) { if ((!((!(!((reg_class_contents[((int )class)])[(regno + i) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((regno + i) % (((unsigned )(8 * 4))))))))))){
break; }} 
#line 1953 "reload.c"
if (i == nwords){
{ 
#line 1958 "reload.c"
if ((((enum rtx_code )((real_out)->code))) == REG){
value = real_out; }else{
value = gen_rtx_REG(outmode, regno); }} }} }
#line 1962 "reload.c"
(*inloc) = saved_rtx; } }
#line 1971 "reload.c"
if (hard_regs_live_known && (((enum rtx_code )((in)->code))) == REG && ((((in)->u).fld[0]).rtuint) < 53 && (value == 0 || find_reg_note(this_insn, REG_UNUSED, real_out)) && find_reg_note(this_insn, REG_DEAD, real_in) && (!fixed_regs[((((in)->u).fld[0]).rtuint)]) && ix86_hard_regno_mode_ok((((((in)->u).fld[0]).rtuint)), ((((((enum machine_mode )((out)->mode))) != VOIDmode?(((enum machine_mode )((out)->mode))):outmode))))){
{ 
#line 1986 "reload.c"

#line 1986 "reload.c"
unsigned int regno = ((((in)->u).fld[0]).rtuint) + in_offset;
#line 1987 "reload.c"

#line 1987 "reload.c"
unsigned int nwords = ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[inmode] == MODE_COMPLEX_INT || mode_class[inmode] == MODE_COMPLEX_FLOAT)?2:1)):(((inmode) == XFmode?((0?2:3)):((inmode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[inmode])) + ((0?8:4)) - 1) / ((0?8:4))))))));
#line 1989 "reload.c"
if ((!refers_to_regno_for_reload_p(regno, regno + nwords, out, (( rtx *)0))) && (!hard_reg_set_here_p(regno, regno + nwords, ((((this_insn)->u).fld[5]).rtx))) && ((!earlyclobber) || (!refers_to_regno_for_reload_p(regno, regno + nwords, ((((this_insn)->u).fld[5]).rtx), inloc)))){
{ 
#line 1996 "reload.c"

#line 1996 "reload.c"
unsigned int i;
#line 1998 "reload.c"
for(i = 0;i < nwords;i++) { if ((!((!(!((reg_class_contents[((int )class)])[(regno + i) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((regno + i) % (((unsigned )(8 * 4))))))))))){
break; }} 
#line 2003 "reload.c"
if (i == nwords){
{ 
#line 2010 "reload.c"
if (for_real >= 0 && value == real_out){
rld[for_real].out = 0; }
#line 2010 "reload.c"
if ((((enum rtx_code )((real_in)->code))) == REG){
value = real_in; }else{
value = gen_rtx_REG(inmode, regno); }} }} }} }
#line 2018 "reload.c"
return value; }
 
#line 2029 "reload.c"
int earlyclobber_operand_p( rtx x)  {

#line 2030 "reload.c"

#line 2030 "reload.c"
int i;
#line 2032 "reload.c"
for(i = 0;i < n_earlyclobbers;i++) { if (reload_earlyclobbers[i] == x){
return 1; }} 
#line 2036 "reload.c"
return 0; }
 
#line 2046 "reload.c"
static int hard_reg_set_here_p(unsigned int beg_regno, unsigned int end_regno,  rtx x)  {

#line 2072 "reload.c"
if ((((enum rtx_code )((x)->code))) == SET || (((enum rtx_code )((x)->code))) == CLOBBER){
{ 
#line 2049 "reload.c"

#line 2049 "reload.c"
 rtx op0 = ((((x)->u).fld[0]).rtx);
#line 2051 "reload.c"
while((((enum rtx_code )((op0)->code))) == SUBREG) { op0 = ((((op0)->u).fld[0]).rtx); } 
#line 2053 "reload.c"
if ((((enum rtx_code )((op0)->code))) == REG){
{ 
#line 2055 "reload.c"

#line 2055 "reload.c"
unsigned int r = ((((op0)->u).fld[0]).rtuint);
#line 2058 "reload.c"
if (r < end_regno && r + ((((r) >= 8 && (r) <= (8 + 7)) || (((r) >= (20 + 1) && (r) <= ((20 + 1) + 7)) || ((r) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (r) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((r) >= (((20 + 1) + 7) + 1) && (r) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((op0)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((op0)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((op0)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((op0)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((op0)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))) > beg_regno){
return 1; }} }} }else{
if ((((enum rtx_code )((x)->code))) == PARALLEL){
{ 
#line 2065 "reload.c"

#line 2065 "reload.c"
int i = (((((((x)->u).fld[0]).rtvec))->num_elem)) - 1;
#line 2067 "reload.c"
for(;i >= 0;i--) { if (hard_reg_set_here_p(beg_regno, end_regno, (((((((x)->u).fld[0]).rtvec))->elem)[i]))){
return 1; }} } }}
#line 2072 "reload.c"
return 0; }
 
#line 2081 "reload.c"
int strict_memory_address_p(enum machine_mode mode __attribute__  (( __unused__ )) ,  rtx addr)  {

#line 2082 "reload.c"
do { { 
#line 2082 "reload.c"
if (legitimate_address_p((mode), (addr), 1)){
goto win; }} } while(0); 
#line 2083 "reload.c"
return 0; 
#line 2085 "reload.c"
win:  return 1; }
 
# 1938 "reload.c" 
# 2106 "reload.c" 
int operands_match_p( rtx x,  rtx y)  {

#line 2107 "reload.c"

#line 2107 "reload.c"
int i;
#line 2108 "reload.c"

#line 2108 "reload.c"
enum rtx_code code = (((enum rtx_code )((x)->code)));
#line 2109 "reload.c"

#line 2109 "reload.c"
const char *fmt;
#line 2110 "reload.c"

#line 2110 "reload.c"
int success_2;
#line 2112 "reload.c"
if (x == y){
return 1; }
#line 2114 "reload.c"
if ((code == REG || (code == SUBREG && (((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == REG)) && ((((enum rtx_code )((y)->code))) == REG || ((((enum rtx_code )((y)->code))) == SUBREG && (((enum rtx_code )((((((y)->u).fld[0]).rtx))->code))) == REG))){
{ 
#line 2118 "reload.c"

#line 2118 "reload.c"
int j;
#line 2120 "reload.c"
if (code == SUBREG){
{ 
#line 2122 "reload.c"
i = ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint); 
#line 2123 "reload.c"
if (i >= 53){
goto slow; }
#line 2125 "reload.c"
i += subreg_regno_offset(((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode))), ((((x)->u).fld[1]).rtuint), (((enum machine_mode )((x)->mode)))); } }else{
i = ((((x)->u).fld[0]).rtuint); }
#line 2133 "reload.c"
if ((((enum rtx_code )((y)->code))) == SUBREG){
{ 
#line 2135 "reload.c"
j = ((((((((y)->u).fld[0]).rtx))->u).fld[0]).rtuint); 
#line 2136 "reload.c"
if (j >= 53){
goto slow; }
#line 2138 "reload.c"
j += subreg_regno_offset(((((((((y)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((y)->u).fld[0]).rtx))->mode))), ((((y)->u).fld[1]).rtuint), (((enum machine_mode )((y)->mode)))); } }else{
j = ((((y)->u).fld[0]).rtuint); }
#line 2149 "reload.c"
if (0 && (((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) > ((0?8:4)) && i < 53){
i += ((((i) >= 8 && (i) <= (8 + 7)) || (((i) >= (20 + 1) && (i) <= ((20 + 1) + 7)) || ((i) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (i) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((i) >= (((20 + 1) + 7) + 1) && (i) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((x)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((x)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))) - 1; }
#line 2152 "reload.c"
if (0 && (((unsigned short )mode_size[(((enum machine_mode )((y)->mode)))])) > ((0?8:4)) && j < 53){
j += ((((j) >= 8 && (j) <= (8 + 7)) || (((j) >= (20 + 1) && (j) <= ((20 + 1) + 7)) || ((j) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (j) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((j) >= (((20 + 1) + 7) + 1) && (j) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((y)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((y)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((y)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((y)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((y)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))) - 1; }
#line 2156 "reload.c"
return i == j; } }
#line 2163 "reload.c"
if (code == POST_DEC || code == POST_INC || code == POST_MODIFY){
return operands_match_p(((((x)->u).fld[0]).rtx), y); }
#line 2171 "reload.c"
if ((((enum rtx_code )((y)->code))) == PRE_DEC || (((enum rtx_code )((y)->code))) == PRE_INC || (((enum rtx_code )((y)->code))) == PRE_MODIFY){
return (operands_match_p(x, ((((y)->u).fld[0]).rtx))?2:0); }
#line 2175 "reload.c"
slow:  if (code != (((enum rtx_code )((y)->code)))){
return 0; }
#line 2181 "reload.c"
if (code == LABEL_REF){
return ((((x)->u).fld[0]).rtx) == ((((y)->u).fld[0]).rtx); }
#line 2183 "reload.c"
if (code == SYMBOL_REF){
return ((((x)->u).fld[0]).rtstr) == ((((y)->u).fld[0]).rtstr); }
#line 2188 "reload.c"
if ((((enum machine_mode )((x)->mode))) != (((enum machine_mode )((y)->mode)))){
return 0; }
#line 2194 "reload.c"
success_2 = 0; 
#line 2195 "reload.c"
fmt = (rtx_format[((int )(code))]); 
#line 2196 "reload.c"
for(i = (rtx_length[((int )(code))]) - 1;i >= 0;i--) { { 
#line 2198 "reload.c"

#line 2198 "reload.c"
int val,j;
#line 2199 "reload.c"
switch(fmt[i]){ { 
#line 2204 "reload.c"
case 'w': if ((((x)->u).hwint[i]) != (((y)->u).hwint[i])){
return 0; }
#line 2204 "reload.c"
break; 
#line 2206 "reload.c"
case 'i': if (((((x)->u).fld[i]).rtint) != ((((y)->u).fld[i]).rtint)){
return 0; }
#line 2209 "reload.c"
break; 
#line 2211 "reload.c"
case 'e': val = operands_match_p(((((x)->u).fld[i]).rtx), ((((y)->u).fld[i]).rtx)); 
#line 2213 "reload.c"
if (val == 0){
return 0; }
#line 2217 "reload.c"
if (val == 2){
success_2 = 1; }
#line 2219 "reload.c"
break; 
#line 2221 "reload.c"
case '0': break; 
#line 2224 "reload.c"
case 'E': if ((((((((x)->u).fld[i]).rtvec))->num_elem)) != (((((((y)->u).fld[i]).rtvec))->num_elem))){
return 0; }
#line 2227 "reload.c"
for(j = (((((((x)->u).fld[i]).rtvec))->num_elem)) - 1;j >= 0;(--j)) { { 
#line 2229 "reload.c"
val = operands_match_p((((((((x)->u).fld[i]).rtvec))->elem)[j]), (((((((y)->u).fld[i]).rtvec))->elem)[j])); 
#line 2230 "reload.c"
if (val == 0){
return 0; }
#line 2232 "reload.c"
if (val == 2){
success_2 = 1; }} } 
#line 2235 "reload.c"
break; 
#line 2240 "reload.c"
default: fancy_abort("reload.c", 2241, __FUNCTION__); } } } } 
#line 2244 "reload.c"
return 1 + success_2; }
 
#line 2257 "reload.c"
static struct decomposition decompose( rtx x)  {

#line 2258 "reload.c"

#line 2258 "reload.c"
struct decomposition val;
#line 2259 "reload.c"

#line 2259 "reload.c"
int all_const = 0;
#line 2261 "reload.c"
val.reg_flag = 0; 
#line 2262 "reload.c"
val.safe = 0; 
#line 2263 "reload.c"
val.base = 0; 
#line 2264 "reload.c"
if ((((enum rtx_code )((x)->code))) == MEM){
{ 
#line 2266 "reload.c"

#line 2266 "reload.c"
 rtx base = (( rtx )0),offset = 0;
#line 2267 "reload.c"

#line 2267 "reload.c"
 rtx addr = ((((x)->u).fld[0]).rtx);
#line 2269 "reload.c"
if ((((enum rtx_code )((addr)->code))) == PRE_DEC || (((enum rtx_code )((addr)->code))) == PRE_INC || (((enum rtx_code )((addr)->code))) == POST_DEC || (((enum rtx_code )((addr)->code))) == POST_INC){
{ 
#line 2272 "reload.c"
val.base = ((((addr)->u).fld[0]).rtx); 
#line 2273 "reload.c"
val.start = (-(((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))]))); 
#line 2274 "reload.c"
val.end = (((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])); 
#line 2275 "reload.c"
val.safe = ((((val.base)->u).fld[0]).rtuint) == 7; 
#line 2276 "reload.c"
return val; } }
#line 2279 "reload.c"
if ((((enum rtx_code )((addr)->code))) == PRE_MODIFY || (((enum rtx_code )((addr)->code))) == POST_MODIFY){
{ 
#line 2291 "reload.c"
if ((((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == PLUS && ((((addr)->u).fld[0]).rtx) == ((((((((addr)->u).fld[1]).rtx))->u).fld[0]).rtx) && ((((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX)){
{ 
#line 2285 "reload.c"
val.base = ((((addr)->u).fld[0]).rtx); 
#line 2286 "reload.c"
val.start = (-(((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->u).hwint[0])); 
#line 2287 "reload.c"
val.end = (((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->u).hwint[0]); 
#line 2288 "reload.c"
val.safe = ((((val.base)->u).fld[0]).rtuint) == 7; 
#line 2289 "reload.c"
return val; } }} }
#line 2293 "reload.c"
if ((((enum rtx_code )((addr)->code))) == CONST){
{ 
#line 2295 "reload.c"
addr = ((((addr)->u).fld[0]).rtx); 
#line 2296 "reload.c"
all_const = 1; } }
#line 2298 "reload.c"
if ((((enum rtx_code )((addr)->code))) == PLUS){
{ 
#line 2310 "reload.c"
if (((((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == CONST || (((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == HIGH || (((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((addr)->u).fld[0]).rtx))->code))) == CONSTANT_P_RTX)){
{ 
#line 2302 "reload.c"
base = ((((addr)->u).fld[1]).rtx); 
#line 2303 "reload.c"
offset = ((((addr)->u).fld[0]).rtx); } }else{
if (((((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX)){
{ 
#line 2307 "reload.c"
base = ((((addr)->u).fld[0]).rtx); 
#line 2308 "reload.c"
offset = ((((addr)->u).fld[1]).rtx); } }}} }
#line 2312 "reload.c"
if (offset == 0){
{ 
#line 2314 "reload.c"
base = addr; 
#line 2315 "reload.c"
offset = (const_int_rtx[64]); } }
#line 2317 "reload.c"
if ((((enum rtx_code )((offset)->code))) == CONST){
offset = ((((offset)->u).fld[0]).rtx); }
#line 2319 "reload.c"
if ((((enum rtx_code )((offset)->code))) == PLUS){
{ 
#line 2335 "reload.c"
if ((((enum rtx_code )((((((offset)->u).fld[0]).rtx))->code))) == CONST_INT){
{ 
#line 2323 "reload.c"
base = gen_rtx_fmt_ee(PLUS, ((((enum machine_mode )((base)->mode)))), (base), (((((offset)->u).fld[1]).rtx))); 
#line 2324 "reload.c"
offset = ((((offset)->u).fld[0]).rtx); } }else{
if ((((enum rtx_code )((((((offset)->u).fld[1]).rtx))->code))) == CONST_INT){
{ 
#line 2328 "reload.c"
base = gen_rtx_fmt_ee(PLUS, ((((enum machine_mode )((base)->mode)))), (base), (((((offset)->u).fld[0]).rtx))); 
#line 2329 "reload.c"
offset = ((((offset)->u).fld[1]).rtx); } }else{
{ 
#line 2333 "reload.c"
base = gen_rtx_fmt_ee(PLUS, ((((enum machine_mode )((base)->mode)))), (base), (offset)); 
#line 2334 "reload.c"
offset = (const_int_rtx[64]); } }}} }else{
if ((((enum rtx_code )((offset)->code))) != CONST_INT){
{ 
#line 2339 "reload.c"
base = gen_rtx_fmt_ee(PLUS, ((((enum machine_mode )((base)->mode)))), (base), (offset)); 
#line 2340 "reload.c"
offset = (const_int_rtx[64]); } }}
#line 2343 "reload.c"
if (all_const && (((enum rtx_code )((base)->code))) == PLUS){
base = gen_rtx_fmt_e(CONST, ((((enum machine_mode )((base)->mode)))), (base)); }
#line 2346 "reload.c"
if ((((enum rtx_code )((offset)->code))) != CONST_INT){
fancy_abort("reload.c", 2347, __FUNCTION__); }
#line 2349 "reload.c"
val.start = (((offset)->u).hwint[0]); 
#line 2350 "reload.c"
val.end = val.start + (((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])); 
#line 2351 "reload.c"
val.base = base; 
#line 2352 "reload.c"
return val; } }else{
if ((((enum rtx_code )((x)->code))) == REG){
{ 
#line 2356 "reload.c"
val.reg_flag = 1; 
#line 2357 "reload.c"
val.start = true_regnum(x); 
#line 2358 "reload.c"
if (val.start < 0){
{ 
#line 2361 "reload.c"
val.start = ((((x)->u).fld[0]).rtuint); 
#line 2362 "reload.c"
val.end = val.start + 1; } }else{
val.end = val.start + ((((val.start) >= 8 && (val.start) <= (8 + 7)) || (((val.start) >= (20 + 1) && (val.start) <= ((20 + 1) + 7)) || ((val.start) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (val.start) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((val.start) >= (((20 + 1) + 7) + 1) && (val.start) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((x)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((x)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))); }} }else{
if ((((enum rtx_code )((x)->code))) == SUBREG){
{ 
#line 2373 "reload.c"
if ((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) != REG){
return decompose(((((x)->u).fld[0]).rtx)); }
#line 2373 "reload.c"
val.reg_flag = 1; 
#line 2374 "reload.c"
val.start = true_regnum(x); 
#line 2375 "reload.c"
if (val.start < 0){
return decompose(((((x)->u).fld[0]).rtx)); }else{
val.end = val.start + ((((val.start) >= 8 && (val.start) <= (8 + 7)) || (((val.start) >= (20 + 1) && (val.start) <= ((20 + 1) + 7)) || ((val.start) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (val.start) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((val.start) >= (((20 + 1) + 7) + 1) && (val.start) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((x)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((x)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))); }} }else{
if (((((enum rtx_code )((x)->code))) == LABEL_REF || (((enum rtx_code )((x)->code))) == SYMBOL_REF || (((enum rtx_code )((x)->code))) == CONST_INT || (((enum rtx_code )((x)->code))) == CONST_DOUBLE || (((enum rtx_code )((x)->code))) == CONST || (((enum rtx_code )((x)->code))) == HIGH || (((enum rtx_code )((x)->code))) == CONST_VECTOR || (((enum rtx_code )((x)->code))) == CONSTANT_P_RTX) || (((enum rtx_code )((x)->code))) == SCRATCH){
val.safe = 1; }else{
fancy_abort("reload.c", 2386, __FUNCTION__); }}}}
#line 2387 "reload.c"
return val; }
 
#line 2395 "reload.c"
static int immune_p( rtx x,  rtx y, struct decomposition ydata)  {

#line 2396 "reload.c"

#line 2396 "reload.c"
struct decomposition xdata;
#line 2398 "reload.c"
if (ydata.reg_flag){
return (!refers_to_regno_for_reload_p(ydata.start, ydata.end, x, (( rtx *)0))); }
#line 2400 "reload.c"
if (ydata.safe){
return 1; }
#line 2403 "reload.c"
if ((((enum rtx_code )((y)->code))) != MEM){
fancy_abort("reload.c", 2404, __FUNCTION__); }
#line 2406 "reload.c"
if ((((enum rtx_code )((x)->code))) != MEM){
return 1; }
#line 2409 "reload.c"
xdata = decompose(x); 
#line 2411 "reload.c"
if ((!rtx_equal_p(xdata.base, ydata.base))){
{ 
#line 2417 "reload.c"
if (((((enum rtx_code )((xdata.base)->code))) == LABEL_REF || (((enum rtx_code )((xdata.base)->code))) == SYMBOL_REF || (((enum rtx_code )((xdata.base)->code))) == CONST_INT || (((enum rtx_code )((xdata.base)->code))) == CONST_DOUBLE || (((enum rtx_code )((xdata.base)->code))) == CONST || (((enum rtx_code )((xdata.base)->code))) == HIGH || (((enum rtx_code )((xdata.base)->code))) == CONST_VECTOR || (((enum rtx_code )((xdata.base)->code))) == CONSTANT_P_RTX) && ((((enum rtx_code )((ydata.base)->code))) == LABEL_REF || (((enum rtx_code )((ydata.base)->code))) == SYMBOL_REF || (((enum rtx_code )((ydata.base)->code))) == CONST_INT || (((enum rtx_code )((ydata.base)->code))) == CONST_DOUBLE || (((enum rtx_code )((ydata.base)->code))) == CONST || (((enum rtx_code )((ydata.base)->code))) == HIGH || (((enum rtx_code )((ydata.base)->code))) == CONST_VECTOR || (((enum rtx_code )((ydata.base)->code))) == CONSTANT_P_RTX)){
return 1; }
#line 2417 "reload.c"
if (((((enum rtx_code )((xdata.base)->code))) == LABEL_REF || (((enum rtx_code )((xdata.base)->code))) == SYMBOL_REF || (((enum rtx_code )((xdata.base)->code))) == CONST_INT || (((enum rtx_code )((xdata.base)->code))) == CONST_DOUBLE || (((enum rtx_code )((xdata.base)->code))) == CONST || (((enum rtx_code )((xdata.base)->code))) == HIGH || (((enum rtx_code )((xdata.base)->code))) == CONST_VECTOR || (((enum rtx_code )((xdata.base)->code))) == CONSTANT_P_RTX) && (ydata.base == (global_rtl[GR_FRAME_POINTER]) || ydata.base == (global_rtl[GR_HARD_FRAME_POINTER]) || ydata.base == (global_rtl[GR_STACK_POINTER]))){
return 1; }
#line 2422 "reload.c"
if (((((enum rtx_code )((ydata.base)->code))) == LABEL_REF || (((enum rtx_code )((ydata.base)->code))) == SYMBOL_REF || (((enum rtx_code )((ydata.base)->code))) == CONST_INT || (((enum rtx_code )((ydata.base)->code))) == CONST_DOUBLE || (((enum rtx_code )((ydata.base)->code))) == CONST || (((enum rtx_code )((ydata.base)->code))) == HIGH || (((enum rtx_code )((ydata.base)->code))) == CONST_VECTOR || (((enum rtx_code )((ydata.base)->code))) == CONSTANT_P_RTX) && (xdata.base == (global_rtl[GR_FRAME_POINTER]) || xdata.base == (global_rtl[GR_HARD_FRAME_POINTER]) || xdata.base == (global_rtl[GR_STACK_POINTER]))){
return 1; }
#line 2428 "reload.c"
return 0; } }
#line 2431 "reload.c"
return (xdata.start >= ydata.end || ydata.start >= xdata.end); }
 
#line 2438 "reload.c"
int safe_from_earlyclobber( rtx op,  rtx clobber)  {

#line 2439 "reload.c"

#line 2439 "reload.c"
struct decomposition early_data;
#line 2441 "reload.c"
early_data = decompose(clobber); 
#line 2442 "reload.c"
return immune_p(op, clobber, early_data); }
 
# 2255 "reload.c" 
# 2470 "reload.c" 
int find_reloads( rtx insn, int replace, int ind_levels, int live_known, short *reload_reg_p)  {

#line 2471 "reload.c"

#line 2471 "reload.c"
int insn_code_number;
#line 2472 "reload.c"

#line 2472 "reload.c"
int i,j;
#line 2473 "reload.c"

#line 2473 "reload.c"
int noperands;
#line 2476 "reload.c"

#line 2476 "reload.c"
char *constraints[30];
#line 2479 "reload.c"

#line 2479 "reload.c"
enum reg_class preferred_class[30];
#line 2480 "reload.c"

#line 2480 "reload.c"
char pref_or_nothing[30];
#line 2482 "reload.c"

#line 2482 "reload.c"
int address_reloaded[30];
#line 2484 "reload.c"

#line 2484 "reload.c"
int address_operand_reloaded[30];
#line 2486 "reload.c"

#line 2486 "reload.c"
enum reload_type operand_type[30];
#line 2488 "reload.c"

#line 2488 "reload.c"
enum reload_type address_type[30];
#line 2490 "reload.c"

#line 2490 "reload.c"
enum reload_usage {RELOAD_READ,RELOAD_READ_WRITE,RELOAD_WRITE}modified[30];
#line 2491 "reload.c"

#line 2491 "reload.c"
int no_input_reloads = 0,no_output_reloads = 0;
#line 2492 "reload.c"

#line 2492 "reload.c"
int n_alternatives;
#line 2493 "reload.c"

#line 2493 "reload.c"
int this_alternative[30];
#line 2494 "reload.c"

#line 2494 "reload.c"
char this_alternative_match_win[30];
#line 2495 "reload.c"

#line 2495 "reload.c"
char this_alternative_win[30];
#line 2496 "reload.c"

#line 2496 "reload.c"
char this_alternative_offmemok[30];
#line 2497 "reload.c"

#line 2497 "reload.c"
char this_alternative_earlyclobber[30];
#line 2498 "reload.c"

#line 2498 "reload.c"
int this_alternative_matches[30];
#line 2499 "reload.c"

#line 2499 "reload.c"
int swapped;
#line 2500 "reload.c"

#line 2500 "reload.c"
int goal_alternative[30];
#line 2501 "reload.c"

#line 2501 "reload.c"
int this_alternative_number;
#line 2502 "reload.c"

#line 2502 "reload.c"
int goal_alternative_number = 0;
#line 2503 "reload.c"

#line 2503 "reload.c"
int operand_reloadnum[30];
#line 2504 "reload.c"

#line 2504 "reload.c"
int goal_alternative_matches[30];
#line 2505 "reload.c"

#line 2505 "reload.c"
int goal_alternative_matched[30];
#line 2506 "reload.c"

#line 2506 "reload.c"
char goal_alternative_match_win[30];
#line 2507 "reload.c"

#line 2507 "reload.c"
char goal_alternative_win[30];
#line 2508 "reload.c"

#line 2508 "reload.c"
char goal_alternative_offmemok[30];
#line 2509 "reload.c"

#line 2509 "reload.c"
char goal_alternative_earlyclobber[30];
#line 2510 "reload.c"

#line 2510 "reload.c"
int goal_alternative_swapped;
#line 2511 "reload.c"

#line 2511 "reload.c"
int best;
#line 2512 "reload.c"

#line 2512 "reload.c"
int commutative;
#line 2513 "reload.c"

#line 2513 "reload.c"
char operands_match[30][30];
#line 2514 "reload.c"

#line 2514 "reload.c"
 rtx substed_operand[30];
#line 2515 "reload.c"

#line 2515 "reload.c"
 rtx body = ((((insn)->u).fld[5]).rtx);
#line 2516 "reload.c"

#line 2516 "reload.c"
 rtx set = ((((rtx_class[((int )((((enum rtx_code )((insn)->code)))))]) == 'i')?(((((enum rtx_code )((((((insn)->u).fld[5]).rtx))->code))) == SET?((((insn)->u).fld[5]).rtx):single_set_2(insn, ((((insn)->u).fld[5]).rtx)))):(( rtx )0)));
#line 2517 "reload.c"

#line 2517 "reload.c"
int goal_earlyclobber = 0,this_earlyclobber;
#line 2518 "reload.c"

#line 2518 "reload.c"
enum machine_mode operand_mode[30];
#line 2519 "reload.c"

#line 2519 "reload.c"
int retval = 0;
#line 2521 "reload.c"
this_insn = insn; 
#line 2522 "reload.c"
n_reloads = 0; 
#line 2523 "reload.c"
n_replacements = 0; 
#line 2524 "reload.c"
n_earlyclobbers = 0; 
#line 2525 "reload.c"
replace_reloads = replace; 
#line 2526 "reload.c"
hard_regs_live_known = live_known; 
#line 2527 "reload.c"
static_reload_reg_p = reload_reg_p; 
#line 2532 "reload.c"
if ((((enum rtx_code )((insn)->code))) == JUMP_INSN || (((enum rtx_code )((insn)->code))) == CALL_INSN){
no_output_reloads = 1; }
#line 2546 "reload.c"
if (secondary_memlocs_elim_used){
{ 
#line 2549 "reload.c"
memset(secondary_memlocs_elim, 0, sizeof (secondary_memlocs_elim[0]) * secondary_memlocs_elim_used); 
#line 2550 "reload.c"
secondary_memlocs_elim_used = 0; } }
#line 2557 "reload.c"
if ((((enum rtx_code )((body)->code))) == SET && (((enum rtx_code )((((((body)->u).fld[0]).rtx))->code))) == REG && ((((((((body)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (((enum rtx_code )((((((body)->u).fld[1]).rtx))->code))) == REG && ((((((((body)->u).fld[1]).rtx))->u).fld[0]).rtuint) < 53 && ix86_register_move_cost(((((enum machine_mode )((((((body)->u).fld[1]).rtx))->mode)))), ((regclass_map[((((((((body)->u).fld[1]).rtx))->u).fld[0]).rtuint)])), ((regclass_map[((((((((body)->u).fld[0]).rtx))->u).fld[0]).rtuint)]))) == 2){
return 0; }
#line 2567 "reload.c"
extract_insn(insn); 
#line 2569 "reload.c"
noperands = reload_n_operands = recog_data.n_operands; 
#line 2570 "reload.c"
n_alternatives = recog_data.n_alternatives; 
#line 2573 "reload.c"
if (noperands == 0 || n_alternatives == 0){
return 0; }
#line 2576 "reload.c"
insn_code_number = ((((insn)->u).fld[6]).rtint); 
#line 2577 "reload.c"
this_insn_is_asm = insn_code_number < 0; 
#line 2579 "reload.c"
memcpy(operand_mode, recog_data.operand_mode, noperands * sizeof (enum machine_mode )); 
#line 2581 "reload.c"
memcpy(constraints, recog_data.constraints, noperands * sizeof (char *)); 
#line 2583 "reload.c"
commutative = (-1); 
#line 2590 "reload.c"
for(i = 0;i < noperands;i++) { { 
#line 2592 "reload.c"

#line 2592 "reload.c"
char *p;
#line 2593 "reload.c"

#line 2593 "reload.c"
int c;
#line 2595 "reload.c"
substed_operand[i] = recog_data.operand[i]; 
#line 2596 "reload.c"
p = constraints[i]; 
#line 2598 "reload.c"
modified[i] = RELOAD_READ; 
#line 2603 "reload.c"
while((c = (*p))) { { 
#line 2605 "reload.c"
p += 1; 
#line 2606 "reload.c"
if (c == '='){
modified[i] = RELOAD_WRITE; }else{
if (c == '+'){
modified[i] = RELOAD_READ_WRITE; }else{
if (c == '%'){
{ 
# 2546 "reload.c" 
# 2623 "reload.c" 
if (i == noperands - 1){
fancy_abort("reload.c", 2614, __FUNCTION__); }
#line 2623 "reload.c"
if (commutative < 0){
commutative = i; }else{
if ((!this_insn_is_asm)){
fancy_abort("reload.c", 2626, __FUNCTION__); }}} }else{
if ((_sch_istable[(c) & 0xff] & ((unsigned short )(_sch_isdigit)))){
{ 
#line 2630 "reload.c"
c = strtoul(p - 1, (&p), 10); 
#line 2632 "reload.c"
operands_match[c][i] = operands_match_p(recog_data.operand[c], recog_data.operand[i]); 
#line 2637 "reload.c"
if (c == i){
fancy_abort("reload.c", 2638, __FUNCTION__); }
#line 2642 "reload.c"
if (commutative >= 0){
{ 
#line 2651 "reload.c"
if (c == commutative || c == commutative + 1){
{ 
#line 2646 "reload.c"

#line 2646 "reload.c"
int other = c + ((c == commutative?1:(-1)));
#line 2647 "reload.c"
operands_match[other][i] = operands_match_p(recog_data.operand[other], recog_data.operand[i]); } }
#line 2651 "reload.c"
if (i == commutative || i == commutative + 1){
{ 
#line 2653 "reload.c"

#line 2653 "reload.c"
int other = i + ((i == commutative?1:(-1)));
#line 2654 "reload.c"
operands_match[c][other] = operands_match_p(recog_data.operand[c], recog_data.operand[other]); } }} }} }}}}} } } } 
#line 2674 "reload.c"
for(i = 0;i < noperands;i++) { { 
#line 2676 "reload.c"

#line 2676 "reload.c"
enum rtx_code code = (((enum rtx_code )((recog_data.operand[i])->code)));
#line 2678 "reload.c"
address_reloaded[i] = 0; 
#line 2679 "reload.c"
address_operand_reloaded[i] = 0; 
#line 2680 "reload.c"
operand_type[i] = ((modified[i] == RELOAD_READ?RELOAD_FOR_INPUT:(modified[i] == RELOAD_WRITE?RELOAD_FOR_OUTPUT:RELOAD_OTHER))); 
#line 2683 "reload.c"
address_type[i] = ((modified[i] == RELOAD_READ?RELOAD_FOR_INPUT_ADDRESS:(modified[i] == RELOAD_WRITE?RELOAD_FOR_OUTPUT_ADDRESS:RELOAD_OTHER))); 
#line 2688 "reload.c"
if ((*constraints[i]) == 0){
; }else{
if (constraints[i][0] == 'p' || 0){
{ 
#line 2698 "reload.c"
address_operand_reloaded[i] = find_reloads_address(recog_data.operand_mode[i], (( rtx *)0), recog_data.operand[i], recog_data.operand_loc[i], i, operand_type[i], ind_levels, insn); 
#line 2702 "reload.c"
if (((rtx_class[((int )((((enum rtx_code )(((*recog_data.operand_loc[i]))->code)))))]) == 'o' || (((enum rtx_code )(((*recog_data.operand_loc[i]))->code))) == SUBREG) && ((((enum rtx_code )((recog_data.operand[i])->code))) == MULT || (((enum rtx_code )((recog_data.operand[i])->code))) == PLUS)){
{ 
#line 2707 "reload.c"
((((insn)->u).fld[6]).rtint) = (-1); 
#line 2708 "reload.c"
retval = find_reloads(insn, replace, ind_levels, live_known, reload_reg_p); 
#line 2710 "reload.c"
return retval; } }
#line 2713 "reload.c"
recog_data.operand[i] = (*recog_data.operand_loc[i]); 
#line 2714 "reload.c"
substed_operand[i] = recog_data.operand[i]; 
#line 2718 "reload.c"
operand_mode[i] = (((enum machine_mode )((recog_data.operand[i])->mode))); } }else{
if (code == MEM){
{ 
#line 2727 "reload.c"
address_reloaded[i] = find_reloads_address((((enum machine_mode )((recog_data.operand[i])->mode))), recog_data.operand_loc[i], ((((recog_data.operand[i])->u).fld[0]).rtx), (&((((recog_data.operand[i])->u).fld[0]).rtx)), i, address_type[i], ind_levels, insn); 
#line 2728 "reload.c"
recog_data.operand[i] = (*recog_data.operand_loc[i]); 
#line 2729 "reload.c"
substed_operand[i] = recog_data.operand[i]; } }else{
if (code == SUBREG){
{ 
#line 2733 "reload.c"

#line 2733 "reload.c"
 rtx reg = ((((recog_data.operand[i])->u).fld[0]).rtx);
#line 2734 "reload.c"

#line 2740 "reload.c"
 rtx op = find_reloads_toplev(recog_data.operand[i], i, address_type[i], ind_levels, set != 0 && (&((((set)->u).fld[0]).rtx)) == recog_data.operand_loc[i], insn, (&address_reloaded[i]));
#line 2747 "reload.c"
if (replace && (((enum rtx_code )((op)->code))) == MEM && (((enum rtx_code )((reg)->code))) == REG && ((((unsigned short )mode_size[(((enum machine_mode )((reg)->mode)))])) >= (((unsigned short )mode_size[(((enum machine_mode )((op)->mode)))])))){
set_unique_reg_note(emit_insn_before(gen_rtx_fmt_e(USE, (VOIDmode), (reg)), insn), REG_EQUAL, reg_equiv_memory_loc[((((reg)->u).fld[0]).rtuint)]); }
#line 2756 "reload.c"
substed_operand[i] = recog_data.operand[i] = op; } }else{
if (code == PLUS || (rtx_class[((int )(code))]) == '1'){
substed_operand[i] = recog_data.operand[i] = find_reloads_toplev(recog_data.operand[i], i, address_type[i], ind_levels, 0, insn, (&address_reloaded[i])); }else{
if (code == REG){
{ 
#line 2774 "reload.c"

#line 2774 "reload.c"
int regno = ((((recog_data.operand[i])->u).fld[0]).rtuint);
#line 2775 "reload.c"
if (reg_equiv_constant[regno] != 0 && (set == 0 || (&((((set)->u).fld[0]).rtx)) != recog_data.operand_loc[i])){
{ 
#line 2784 "reload.c"
if (operand_mode[i] == VOIDmode){
operand_mode[i] = (((enum machine_mode )((recog_data.operand[i])->mode))); }
#line 2784 "reload.c"
substed_operand[i] = recog_data.operand[i] = reg_equiv_constant[regno]; } }
#line 2787 "reload.c"
if (reg_equiv_memory_loc[regno] != 0 && (reg_equiv_address[regno] != 0 || num_not_at_initial_offset)){
substed_operand[i] = recog_data.operand[i] = find_reloads_toplev(recog_data.operand[i], i, address_type[i], ind_levels, 0, insn, (&address_reloaded[i])); }} }}}}}}
#line 2798 "reload.c"
code = (((enum rtx_code )((recog_data.operand[i])->code))); 
#line 2799 "reload.c"
preferred_class[i] = (((code == REG && ((((recog_data.operand[i])->u).fld[0]).rtuint) >= 53)?reg_preferred_class(((((recog_data.operand[i])->u).fld[0]).rtuint)):NO_REGS)); 
#line 2804 "reload.c"
pref_or_nothing[i] = (code == REG && ((((recog_data.operand[i])->u).fld[0]).rtuint) >= 53 && reg_alternate_class(((((recog_data.operand[i])->u).fld[0]).rtuint)) == NO_REGS); } } 
#line 2812 "reload.c"
if (set != 0 && noperands >= 2 && recog_data.operand[0] == ((((set)->u).fld[0]).rtx) && recog_data.operand[1] == ((((set)->u).fld[1]).rtx)){
{ 
#line 2816 "reload.c"
preferred_class[0] = preferred_class[1] = reg_class_subunion[((int )preferred_class[0])][((int )preferred_class[1])]; 
#line 2817 "reload.c"
pref_or_nothing[0] |= pref_or_nothing[1]; 
#line 2818 "reload.c"
pref_or_nothing[1] |= pref_or_nothing[0]; } }
#line 2825 "reload.c"
best = 30 * 2 + 600; 
#line 2827 "reload.c"
swapped = 0; 
#line 2828 "reload.c"
goal_alternative_swapped = 0; 
#line 2829 "reload.c"
try_swapped:  for(this_alternative_number = 0;this_alternative_number < n_alternatives;this_alternative_number++) { { 
#line 2845 "reload.c"

# 2674 "reload.c" 
# 2845 "reload.c" 
int losers = 0;
#line 2848 "reload.c"

#line 2848 "reload.c"
int bad = 0;
#line 2855 "reload.c"

#line 2855 "reload.c"
int reject = 0;
#line 2857 "reload.c"
this_earlyclobber = 0; 
#line 2859 "reload.c"
for(i = 0;i < noperands;i++) { { 
#line 2861 "reload.c"

#line 2861 "reload.c"
char *p = constraints[i];
#line 2862 "reload.c"

#line 2862 "reload.c"
char *end;
#line 2863 "reload.c"

#line 2863 "reload.c"
int len;
#line 2864 "reload.c"

#line 2864 "reload.c"
int win = 0;
#line 2865 "reload.c"

#line 2865 "reload.c"
int did_match = 0;
#line 2867 "reload.c"

#line 2867 "reload.c"
int badop = 1;
#line 2869 "reload.c"

#line 2869 "reload.c"
int winreg = 0;
#line 2870 "reload.c"

#line 2870 "reload.c"
int c;
#line 2871 "reload.c"

#line 2871 "reload.c"
int m;
#line 2872 "reload.c"

#line 2872 "reload.c"
 rtx operand = recog_data.operand[i];
#line 2873 "reload.c"

#line 2873 "reload.c"
int offset = 0;
#line 2876 "reload.c"

#line 2876 "reload.c"
int force_reload = 0;
#line 2877 "reload.c"

#line 2877 "reload.c"
int offmemok = 0;
#line 2880 "reload.c"

#line 2880 "reload.c"
int constmemok = 0;
#line 2881 "reload.c"

#line 2881 "reload.c"
int earlyclobber = 0;
#line 2886 "reload.c"
if ((rtx_class[((int )((((enum rtx_code )((operand)->code)))))]) == '1' && (*p) != 0){
operand = ((((operand)->u).fld[0]).rtx); }
#line 2893 "reload.c"
while((((enum rtx_code )((operand)->code))) == SUBREG) { { 
#line 2913 "reload.c"
if ((((enum rtx_code )((((((operand)->u).fld[0]).rtx))->code))) == REG && ((((((((operand)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53){
{ 
#line 2908 "reload.c"
if ((!subreg_offset_representable_p(((((((((operand)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((operand)->u).fld[0]).rtx))->mode))), ((((operand)->u).fld[1]).rtuint), (((enum machine_mode )((operand)->mode)))))){
force_reload = 1; }
#line 2908 "reload.c"
offset += subreg_regno_offset(((((((((operand)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((operand)->u).fld[0]).rtx))->mode))), ((((operand)->u).fld[1]).rtuint), (((enum machine_mode )((operand)->mode)))); } }
#line 2913 "reload.c"
operand = ((((operand)->u).fld[0]).rtx); 
#line 2916 "reload.c"
if (((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX) || (((enum rtx_code )((operand)->code))) == PLUS || (((((enum rtx_code )((operand)->code))) == MEM || ((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53)) && ((((((unsigned short )((((unsigned short )mode_size[(((enum machine_mode )((operand)->mode)))])) * 8))) < 128) && ((((unsigned short )mode_size[operand_mode[i]])) > (((unsigned short )mode_size[(((enum machine_mode )((operand)->mode)))])))) || ((((enum rtx_code )((operand)->code))) == MEM && 0)))){
force_reload = 1; }} } 
# 2942 "reload.c" 
# 2967 "reload.c" 
this_alternative[i] = ((int )NO_REGS); 
#line 2968 "reload.c"
this_alternative_win[i] = 0; 
#line 2969 "reload.c"
this_alternative_match_win[i] = 0; 
#line 2970 "reload.c"
this_alternative_offmemok[i] = 0; 
#line 2971 "reload.c"
this_alternative_earlyclobber[i] = 0; 
#line 2972 "reload.c"
this_alternative_matches[i] = (-1); 
#line 2976 "reload.c"
if ((*p) == 0 || (*p) == ','){
win = 1 , badop = 0; }
#line 2986 "reload.c"
do { switch((c = (*p) , len = 1) , c){ { 
#line 2990 "reload.c"
case '\0': len = 0; 
#line 2991 "reload.c"
break; 
#line 2992 "reload.c"
case ',': c = '\0'; 
#line 2994 "reload.c"
break; 
#line 2996 "reload.c"
case '=': case '+': case '*': break; 
#line 2999 "reload.c"
case '%': break; 
#line 3004 "reload.c"
case '?': reject += 6; 
#line 3006 "reload.c"
break; 
#line 3008 "reload.c"
case '!': reject = 600; 
#line 3010 "reload.c"
break; 
#line 3012 "reload.c"
case '#': do { p++; } while((*p) && (*p) != ','); 
#line 3018 "reload.c"
len = 0; 
#line 3019 "reload.c"
break; 
#line 3021 "reload.c"
case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': m = strtoul(p, (&end), 10); 
#line 3024 "reload.c"
p = end; 
#line 3025 "reload.c"
len = 0; 
#line 3027 "reload.c"
this_alternative_matches[i] = m; 
#line 3035 "reload.c"
if (((swapped && (m != commutative || i != commutative + 1))?(operands_match[((m == commutative || m == commutative + 1)?2 * commutative + 1 - m:m)][((i == commutative || i == commutative + 1)?2 * commutative + 1 - i:i)]):operands_match[m][i])){
{ 
#line 3058 "reload.c"
if (this_alternative_offmemok[m] && (((enum rtx_code )((recog_data.operand[m])->code))) == MEM && this_alternative[m] == ((int )NO_REGS) && (!this_alternative_win[m])){
bad = 1; }
#line 3058 "reload.c"
did_match = this_alternative_win[m]; } }else{
{ 
#line 3063 "reload.c"

#line 3063 "reload.c"
 rtx value;
#line 3066 "reload.c"
if (this_alternative_win[m]){
losers++; }
#line 3068 "reload.c"
this_alternative_win[m] = 0; 
#line 3069 "reload.c"
if (this_alternative[m] == ((int )NO_REGS)){
bad = 1; }
#line 3073 "reload.c"
value = find_dummy_reload(recog_data.operand[i], recog_data.operand[m], recog_data.operand_loc[i], recog_data.operand_loc[m], operand_mode[i], operand_mode[m], this_alternative[m], (-1), this_alternative_earlyclobber[m]); 
#line 3082 "reload.c"
if (value != 0){
losers--; }} }
#line 3087 "reload.c"
badop = 0; 
#line 3088 "reload.c"
this_alternative[i] = this_alternative[m]; 
#line 3094 "reload.c"
if ((!did_match) || force_reload){
for(j = 0;j < i;j++) { if (this_alternative_matches[j] == this_alternative_matches[i]){
badop = 1; }} }
#line 3099 "reload.c"
break; 
#line 3101 "reload.c"
case 'p': this_alternative[i] = ((int )GENERAL_REGS); 
#line 3105 "reload.c"
win = 1; 
#line 3106 "reload.c"
badop = 0; 
#line 3107 "reload.c"
break; 
#line 3109 "reload.c"
case 'm': if (force_reload){
break; }
#line 3112 "reload.c"
if ((((enum rtx_code )((operand)->code))) == MEM || ((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53 && reg_renumber[((((operand)->u).fld[0]).rtuint)] < 0)){
win = 1; }
#line 3117 "reload.c"
if (((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX) && (((enum rtx_code )((operand)->code))) != HIGH){
badop = 0; }
#line 3121 "reload.c"
constmemok = 1; 
#line 3122 "reload.c"
break; 
#line 3124 "reload.c"
case '<': if ((((enum rtx_code )((operand)->code))) == MEM && (!address_reloaded[i]) && ((((enum rtx_code )((((((operand)->u).fld[0]).rtx))->code))) == PRE_DEC || (((enum rtx_code )((((((operand)->u).fld[0]).rtx))->code))) == POST_DEC)){
win = 1; }
#line 3130 "reload.c"
break; 
#line 3132 "reload.c"
case '>': if ((((enum rtx_code )((operand)->code))) == MEM && (!address_reloaded[i]) && ((((enum rtx_code )((((((operand)->u).fld[0]).rtx))->code))) == PRE_INC || (((enum rtx_code )((((((operand)->u).fld[0]).rtx))->code))) == POST_INC)){
win = 1; }
#line 3138 "reload.c"
break; 
#line 3141 "reload.c"
case 'V': if (force_reload){
break; }
#line 3144 "reload.c"
if ((((enum rtx_code )((operand)->code))) == MEM && (!((ind_levels?offsettable_memref_p(operand):offsettable_nonstrict_memref_p(operand)))) && (!((((enum rtx_code )((((((operand)->u).fld[0]).rtx))->code))) == REG && (ind_levels == 0 || reg_equiv_address[((((((((operand)->u).fld[0]).rtx))->u).fld[0]).rtuint)] != 0)))){
win = 1; }
#line 3155 "reload.c"
break; 
#line 3158 "reload.c"
case 'o': if (force_reload){
break; }
#line 3161 "reload.c"
if (((((enum rtx_code )((operand)->code))) == MEM && (((ind_levels?offsettable_memref_p(operand):offsettable_nonstrict_memref_p(operand))) || address_reloaded[i])) || ((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53 && reg_renumber[((((operand)->u).fld[0]).rtuint)] < 0 && ((reg_equiv_mem[((((operand)->u).fld[0]).rtuint)] != 0 && offsettable_memref_p(reg_equiv_mem[((((operand)->u).fld[0]).rtuint)])) || (reg_equiv_address[((((operand)->u).fld[0]).rtuint)] != 0)))){
win = 1; }
#line 3182 "reload.c"
if ((((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX) && (((enum rtx_code )((operand)->code))) != HIGH) || (((enum rtx_code )((operand)->code))) == MEM){
badop = 0; }
#line 3185 "reload.c"
constmemok = 1; 
#line 3186 "reload.c"
offmemok = 1; 
#line 3187 "reload.c"
break; 
#line 3189 "reload.c"
case '&': earlyclobber = 1 , this_earlyclobber = 1; 
#line 3193 "reload.c"
break; 
#line 3195 "reload.c"
case 'E': case 'F': if ((((enum rtx_code )((operand)->code))) == CONST_DOUBLE || ((((enum rtx_code )((operand)->code))) == CONST_VECTOR && (mode_class[(((enum machine_mode )((operand)->mode)))] == MODE_VECTOR_FLOAT))){
win = 1; }
#line 3202 "reload.c"
break; 
#line 3204 "reload.c"
case 'G': case 'H': if ((((enum rtx_code )((operand)->code))) == CONST_DOUBLE && (((c) == 'G'?standard_80387_constant_p(operand):0))){
win = 1; }
#line 3209 "reload.c"
break; 
#line 3211 "reload.c"
case 's': if ((((enum rtx_code )((operand)->code))) == CONST_INT || ((((enum rtx_code )((operand)->code))) == CONST_DOUBLE && (((enum machine_mode )((operand)->mode))) == VOIDmode)){
break; }
#line 3216 "reload.c"
case 'i': if (((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX) && ((!flag_pic) || legitimate_pic_operand_p(operand))){
win = 1; }
#line 3223 "reload.c"
break; 
#line 3225 "reload.c"
case 'n': if ((((enum rtx_code )((operand)->code))) == CONST_INT || ((((enum rtx_code )((operand)->code))) == CONST_DOUBLE && (((enum machine_mode )((operand)->mode))) == VOIDmode)){
win = 1; }
#line 3230 "reload.c"
break; 
#line 3232 "reload.c"
case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': if ((((enum rtx_code )((operand)->code))) == CONST_INT && (((c) == 'I'?((((operand)->u).hwint[0])) >= 0 && ((((operand)->u).hwint[0])) <= 31:((c) == 'J'?((((operand)->u).hwint[0])) >= 0 && ((((operand)->u).hwint[0])) <= 63:((c) == 'K'?((((operand)->u).hwint[0])) >= (-128) && ((((operand)->u).hwint[0])) <= 127:((c) == 'L'?((((operand)->u).hwint[0])) == 0xff || ((((operand)->u).hwint[0])) == 0xffff:((c) == 'M'?((((operand)->u).hwint[0])) >= 0 && ((((operand)->u).hwint[0])) <= 3:((c) == 'N'?((((operand)->u).hwint[0])) >= 0 && ((((operand)->u).hwint[0])) <= 255:0)))))))){
win = 1; }
#line 3243 "reload.c"
break; 
#line 3245 "reload.c"
case 'X': win = 1; 
#line 3247 "reload.c"
break; 
#line 3249 "reload.c"
case 'g': if ((!force_reload) && (((enum rtx_code )((operand)->code))) != PLUS && (((enum rtx_code )((operand)->code))) != SCRATCH && ((!((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX)) || (!flag_pic) || legitimate_pic_operand_p(operand)) && (GENERAL_REGS == ALL_REGS || (((enum rtx_code )((operand)->code))) != REG || (((((operand)->u).fld[0]).rtuint) >= 53 && reg_renumber[((((operand)->u).fld[0]).rtuint)] < 0))){
win = 1; }
#line 3268 "reload.c"
case 'r': this_alternative[i] = ((int )reg_class_subunion[this_alternative[i]][((int )GENERAL_REGS)]); 
#line 3271 "reload.c"
goto reg; 
#line 3273 "reload.c"
default: if ((((c) == 'r'?GENERAL_REGS:((c) == 'R'?LEGACY_REGS:((c) == 'q'?(0?GENERAL_REGS:Q_REGS):((c) == 'Q'?Q_REGS:((c) == 'f'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FLOAT_REGS:NO_REGS)):((c) == 't'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_TOP_REG:NO_REGS)):((c) == 'u'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_SECOND_REG:NO_REGS)):((c) == 'a'?AREG:((c) == 'b'?BREG:((c) == 'c'?CREG:((c) == 'd'?DREG:((c) == 'x'?(((target_flags & 0x00004000) != 0)?SSE_REGS:NO_REGS):((c) == 'Y'?(((target_flags & 0x00008000) != 0)?SSE_REGS:NO_REGS):((c) == 'y'?(((target_flags & 0x00002000) != 0)?MMX_REGS:NO_REGS):((c) == 'A'?AD_REGS:((c) == 'D'?DIREG:((c) == 'S'?SIREG:NO_REGS)))))))))))))))))) == NO_REGS){
{ 
#line 3309 "reload.c"
if (0){
{ 
#line 3281 "reload.c"
if (force_reload){
break; }
#line 3281 "reload.c"
if ((((c) == 'e'?x86_64_sign_extended_value(operand):((c) == 'Z'?x86_64_zero_extended_value(operand):((c) == 'C'?standard_sse_constant_p(operand):0))))){
win = 1; }else{
if ((((enum rtx_code )((operand)->code))) == MEM && address_reloaded[i]){
win = 1; }else{
if ((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53 && reg_renumber[((((operand)->u).fld[0]).rtuint)] < 0 && ((reg_equiv_mem[((((operand)->u).fld[0]).rtuint)] != 0 && (((c) == 'e'?x86_64_sign_extended_value(reg_equiv_mem[((((operand)->u).fld[0]).rtuint)]):((c) == 'Z'?x86_64_zero_extended_value(reg_equiv_mem[((((operand)->u).fld[0]).rtuint)]):((c) == 'C'?standard_sse_constant_p(reg_equiv_mem[((((operand)->u).fld[0]).rtuint)]):0))))) || (reg_equiv_address[((((operand)->u).fld[0]).rtuint)] != 0))){
win = 1; }}}
#line 3302 "reload.c"
if ((((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX) && (((enum rtx_code )((operand)->code))) != HIGH) || (((enum rtx_code )((operand)->code))) == MEM){
badop = 0; }
#line 3305 "reload.c"
constmemok = 1; 
#line 3306 "reload.c"
offmemok = 1; 
#line 3307 "reload.c"
break; } }
#line 3309 "reload.c"
if (0){
{ 
#line 3316 "reload.c"
if ((((c) == 'e'?x86_64_sign_extended_value(operand):((c) == 'Z'?x86_64_zero_extended_value(operand):((c) == 'C'?standard_sse_constant_p(operand):0))))){
win = 1; }
#line 3316 "reload.c"
this_alternative[i] = ((int )GENERAL_REGS); 
#line 3317 "reload.c"
badop = 0; 
#line 3318 "reload.c"
break; } }
#line 3321 "reload.c"
if ((((c) == 'e'?x86_64_sign_extended_value(operand):((c) == 'Z'?x86_64_zero_extended_value(operand):((c) == 'C'?standard_sse_constant_p(operand):0))))){
win = 1; }
#line 3324 "reload.c"
break; } }
#line 3327 "reload.c"
this_alternative[i] = ((int )(reg_class_subunion[this_alternative[i]][((int )(((c) == 'r'?GENERAL_REGS:((c) == 'R'?LEGACY_REGS:((c) == 'q'?(0?GENERAL_REGS:Q_REGS):((c) == 'Q'?Q_REGS:((c) == 'f'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FLOAT_REGS:NO_REGS)):((c) == 't'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_TOP_REG:NO_REGS)):((c) == 'u'?(((target_flags & 0x00000001) || (target_flags & 0x00000020)?FP_SECOND_REG:NO_REGS)):((c) == 'a'?AREG:((c) == 'b'?BREG:((c) == 'c'?CREG:((c) == 'd'?DREG:((c) == 'x'?(((target_flags & 0x00004000) != 0)?SSE_REGS:NO_REGS):((c) == 'Y'?(((target_flags & 0x00008000) != 0)?SSE_REGS:NO_REGS):((c) == 'y'?(((target_flags & 0x00002000) != 0)?MMX_REGS:NO_REGS):((c) == 'A'?AD_REGS:((c) == 'D'?DIREG:((c) == 'S'?SIREG:NO_REGS)))))))))))))))))))])); 
#line 3331 "reload.c"
reg:  if ((((enum machine_mode )((operand)->mode))) == BLKmode){
break; }
#line 3334 "reload.c"
winreg = 1; 
#line 3335 "reload.c"
if ((((enum rtx_code )((operand)->code))) == REG && reg_fits_class_p(operand, this_alternative[i], offset, (((enum machine_mode )((recog_data.operand[i])->mode))))){
win = 1; }
#line 3339 "reload.c"
break; } } } while((p += len) , c); 
#line 3343 "reload.c"
constraints[i] = p; 
#line 3347 "reload.c"
if (winreg && this_alternative[i] != ((int )NO_REGS)){
badop = 0; }
#line 3351 "reload.c"
this_alternative_earlyclobber[i] = earlyclobber; 
#line 3352 "reload.c"
if (win && (!force_reload)){
this_alternative_win[i] = 1; }else{
if (did_match && (!force_reload)){
this_alternative_match_win[i] = 1; }else{
{ 
#line 3358 "reload.c"

#line 3358 "reload.c"
int const_to_mem = 0;
#line 3360 "reload.c"
this_alternative_offmemok[i] = offmemok; 
#line 3361 "reload.c"
losers++; 
#line 3362 "reload.c"
if (badop){
bad = 1; }
#line 3365 "reload.c"
if ((((enum rtx_code )((operand)->code))) == REG && this_alternative[i] == ((int )NO_REGS) && this_alternative_matches[i] < 0){
bad = 1; }
# 2986 "reload.c" 
# 3378 "reload.c" 
if (((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX) && (((enum rtx_code )((operand)->code))) != HIGH && ((ix86_preferred_reload_class((operand), (((enum reg_class )this_alternative[i]))) == NO_REGS) || no_input_reloads) && operand_mode[i] != VOIDmode){
{ 
#line 3387 "reload.c"
const_to_mem = 1; 
#line 3388 "reload.c"
if (this_alternative[i] != ((int )NO_REGS)){
losers++; }} }
#line 3397 "reload.c"
if ((!((((enum rtx_code )((operand)->code))) == LABEL_REF || (((enum rtx_code )((operand)->code))) == SYMBOL_REF || (((enum rtx_code )((operand)->code))) == CONST_INT || (((enum rtx_code )((operand)->code))) == CONST_DOUBLE || (((enum rtx_code )((operand)->code))) == CONST || (((enum rtx_code )((operand)->code))) == HIGH || (((enum rtx_code )((operand)->code))) == CONST_VECTOR || (((enum rtx_code )((operand)->code))) == CONSTANT_P_RTX)) && ((enum reg_class )this_alternative[i]) != NO_REGS && (ix86_preferred_reload_class((operand), (((enum reg_class )this_alternative[i]))) == NO_REGS)){
bad = 1; }else{
if ((((enum rtx_code )((operand)->code))) != SCRATCH && modified[i] != RELOAD_READ && no_output_reloads && (!find_reg_note(insn, REG_UNUSED, operand))){
bad = 1; }else{
if (modified[i] != RELOAD_WRITE && no_input_reloads && (!const_to_mem)){
bad = 1; }}}
#line 3429 "reload.c"
if ((!((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53)) && (((enum rtx_code )((operand)->code))) != SCRATCH && (!(const_to_mem && constmemok))){
reject += 2; }
#line 3437 "reload.c"
if (operand_type[i] != RELOAD_FOR_INPUT && (((enum rtx_code )((operand)->code))) != SCRATCH){
reject++; }} }}
# 3429 "reload.c" 
# 3463 "reload.c" 
if ((!win) && (!did_match) && this_alternative[i] != ((int )NO_REGS) && (((unsigned short )mode_size[operand_mode[i]])) <= ((0?8:4)) && reg_class_size[((int )preferred_class[i])] > 1){
{ 
#line 3481 "reload.c"
if ((!reg_class_subset_p(this_alternative[i], preferred_class[i]))){
{ 
#line 3479 "reload.c"
if (reg_class_subset_p(preferred_class[i], this_alternative[i])){
this_alternative[i] = ((int )preferred_class[i]); }else{
reject += (2 + 2 * pref_or_nothing[i]); }} }} }} } 
#line 3488 "reload.c"
for(i = 0;i < noperands;i++) { if (this_alternative_earlyclobber[i] && (this_alternative_win[i] || this_alternative_match_win[i])){
{ 
#line 3492 "reload.c"

#line 3492 "reload.c"
struct decomposition early_data;
#line 3494 "reload.c"
early_data = decompose(recog_data.operand[i]); 
#line 3496 "reload.c"
if (modified[i] == RELOAD_READ){
fancy_abort("reload.c", 3497, __FUNCTION__); }
#line 3499 "reload.c"
if (this_alternative[i] == NO_REGS){
{ 
#line 3501 "reload.c"
this_alternative_earlyclobber[i] = 0; 
#line 3502 "reload.c"
if (this_insn_is_asm){
error_for_asm(this_insn, "`&' constraint used with no register class"); }else{
fancy_abort("reload.c", 3506, __FUNCTION__); }} }
#line 3509 "reload.c"
for(j = 0;j < noperands;j++) { if (((((enum rtx_code )((recog_data.operand[j])->code))) == MEM || modified[j] != RELOAD_WRITE) && j != i && (*recog_data.constraints[j]) != 0 && (!(this_alternative_matches[j] == i && rtx_equal_p(recog_data.operand[i], recog_data.operand[j]))) && (!immune_p(recog_data.operand[j], recog_data.operand[i], early_data))){
{ 
#line 3536 "reload.c"
if (reg_class_size[this_alternative[i]] == 1 && ((((enum rtx_code )((recog_data.operand[j])->code))) == REG || (((enum rtx_code )((recog_data.operand[j])->code))) == SUBREG)){
{ 
#line 3531 "reload.c"
losers++; 
#line 3532 "reload.c"
this_alternative_win[j] = 0; 
#line 3533 "reload.c"
this_alternative_match_win[j] = 0; } }else{
break; }} }} 
#line 3540 "reload.c"
if (j != noperands){
{ 
#line 3542 "reload.c"
losers++; 
#line 3543 "reload.c"
this_alternative_win[i] = 0; 
#line 3544 "reload.c"
this_alternative_match_win[j] = 0; 
#line 3545 "reload.c"
for(j = 0;j < noperands;j++) { if (this_alternative_matches[j] == i && this_alternative_match_win[j]){
{ 
#line 3549 "reload.c"
this_alternative_win[j] = 0; 
#line 3550 "reload.c"
this_alternative_match_win[j] = 0; 
#line 3551 "reload.c"
losers++; } }} } }} }} 
#line 3558 "reload.c"
if (losers == 0){
{ 
#line 3567 "reload.c"
if (commutative >= 0){
{ 
#line 3563 "reload.c"
recog_data.operand[commutative] = substed_operand[commutative]; 
#line 3564 "reload.c"
recog_data.operand[commutative + 1] = substed_operand[commutative + 1]; } }
#line 3567 "reload.c"
for(i = 0;i < noperands;i++) { { 
#line 3569 "reload.c"
goal_alternative_win[i] = this_alternative_win[i]; 
#line 3570 "reload.c"
goal_alternative_match_win[i] = this_alternative_match_win[i]; 
#line 3571 "reload.c"
goal_alternative[i] = this_alternative[i]; 
#line 3572 "reload.c"
goal_alternative_offmemok[i] = this_alternative_offmemok[i]; 
#line 3573 "reload.c"
goal_alternative_matches[i] = this_alternative_matches[i]; 
#line 3574 "reload.c"
goal_alternative_earlyclobber[i] = this_alternative_earlyclobber[i]; } } 
#line 3577 "reload.c"
goal_alternative_number = this_alternative_number; 
#line 3578 "reload.c"
goal_alternative_swapped = swapped; 
#line 3579 "reload.c"
goal_earlyclobber = this_earlyclobber; 
#line 3580 "reload.c"
goto finish; } }
#line 3587 "reload.c"
losers = losers * 6 + reject; 
#line 3592 "reload.c"
if ((!bad) && best > losers){
{ 
#line 3603 "reload.c"
for(i = 0;i < noperands;i++) { { 
#line 3596 "reload.c"
goal_alternative[i] = this_alternative[i]; 
#line 3597 "reload.c"
goal_alternative_win[i] = this_alternative_win[i]; 
#line 3598 "reload.c"
goal_alternative_match_win[i] = this_alternative_match_win[i]; 
#line 3599 "reload.c"
goal_alternative_offmemok[i] = this_alternative_offmemok[i]; 
#line 3600 "reload.c"
goal_alternative_matches[i] = this_alternative_matches[i]; 
#line 3601 "reload.c"
goal_alternative_earlyclobber[i] = this_alternative_earlyclobber[i]; } } 
#line 3604 "reload.c"
goal_alternative_swapped = swapped; 
#line 3605 "reload.c"
best = losers; 
#line 3606 "reload.c"
goal_alternative_number = this_alternative_number; 
#line 3607 "reload.c"
goal_earlyclobber = this_earlyclobber; } }} } 
#line 3620 "reload.c"
if (commutative >= 0){
{ 
#line 3622 "reload.c"
swapped = (!swapped); 
#line 3623 "reload.c"
if (swapped){
{ 
#line 3625 "reload.c"

#line 3625 "reload.c"
enum reg_class tclass;
#line 3626 "reload.c"

#line 3626 "reload.c"
int t;
#line 3628 "reload.c"
recog_data.operand[commutative] = substed_operand[commutative + 1]; 
#line 3629 "reload.c"
recog_data.operand[commutative + 1] = substed_operand[commutative]; 
#line 3631 "reload.c"
for(i = 0;i < recog_data.n_dups;i++) { if (recog_data.dup_num[i] == commutative || recog_data.dup_num[i] == commutative + 1){
(*recog_data.dup_loc[i]) = recog_data.operand[((int )recog_data.dup_num[i])]; }} 
#line 3637 "reload.c"
tclass = preferred_class[commutative]; 
#line 3638 "reload.c"
preferred_class[commutative] = preferred_class[commutative + 1]; 
#line 3639 "reload.c"
preferred_class[commutative + 1] = tclass; 
#line 3641 "reload.c"
t = pref_or_nothing[commutative]; 
#line 3642 "reload.c"
pref_or_nothing[commutative] = pref_or_nothing[commutative + 1]; 
#line 3643 "reload.c"
pref_or_nothing[commutative + 1] = t; 
#line 3645 "reload.c"
memcpy(constraints, recog_data.constraints, noperands * sizeof (char *)); 
#line 3647 "reload.c"
goto try_swapped; } }else{
{ 
#line 3651 "reload.c"
recog_data.operand[commutative] = substed_operand[commutative]; 
#line 3652 "reload.c"
recog_data.operand[commutative + 1] = substed_operand[commutative + 1]; 
#line 3655 "reload.c"
for(i = 0;i < recog_data.n_dups;i++) { if (recog_data.dup_num[i] == commutative || recog_data.dup_num[i] == commutative + 1){
(*recog_data.dup_loc[i]) = recog_data.operand[((int )recog_data.dup_num[i])]; }} } }} }
#line 3668 "reload.c"
if (best == 30 * 2 + 600){
{ 
#line 3673 "reload.c"
if (insn_code_number >= 0){
_fatal_insn("unable to generate reloads for:", insn, "reload.c", 3672, __FUNCTION__); }
#line 3673 "reload.c"
error_for_asm(insn, "inconsistent operand constraints in an `asm'"); 
#line 3675 "reload.c"
((((insn)->u).fld[5]).rtx) = gen_rtx_fmt_e(USE, (VOIDmode), ((const_int_rtx[64]))); 
#line 3676 "reload.c"
n_reloads = 0; 
#line 3677 "reload.c"
return 0; } }
#line 3682 "reload.c"
finish:  for(i = 0;i < noperands;i++) { goal_alternative_matched[i] = (-1); } 
#line 3693 "reload.c"
for(i = 0;i < noperands;i++) { if ((!goal_alternative_win[i]) && goal_alternative_matches[i] >= 0){
goal_alternative_matched[goal_alternative_matches[i]] = i; }} 
#line 3698 "reload.c"
for(i = 0;i < noperands;i++) { goal_alternative_win[i] |= goal_alternative_match_win[i]; } 
#line 3705 "reload.c"
if (goal_alternative_swapped){
{ 
#line 3707 "reload.c"

#line 3707 "reload.c"
 rtx tem;
#line 3709 "reload.c"
tem = substed_operand[commutative]; 
#line 3710 "reload.c"
substed_operand[commutative] = substed_operand[commutative + 1]; 
#line 3711 "reload.c"
substed_operand[commutative + 1] = tem; 
#line 3712 "reload.c"
tem = recog_data.operand[commutative]; 
#line 3713 "reload.c"
recog_data.operand[commutative] = recog_data.operand[commutative + 1]; 
#line 3714 "reload.c"
recog_data.operand[commutative + 1] = tem; 
#line 3715 "reload.c"
tem = (*recog_data.operand_loc[commutative]); 
#line 3716 "reload.c"
(*recog_data.operand_loc[commutative]) = (*recog_data.operand_loc[commutative + 1]); 
#line 3718 "reload.c"
(*recog_data.operand_loc[commutative + 1]) = tem; 
#line 3720 "reload.c"
for(i = 0;i < n_reloads;i++) { { 
#line 3726 "reload.c"
if (rld[i].opnum == commutative){
rld[i].opnum = commutative + 1; }else{
if (rld[i].opnum == commutative + 1){
rld[i].opnum = commutative; }}} } } }
#line 3729 "reload.c"
for(i = 0;i < noperands;i++) { { 
#line 3731 "reload.c"
operand_reloadnum[i] = (-1); 
# 3620 "reload.c" 
# 3750 "reload.c" 
if (goal_alternative_earlyclobber[i] && operand_type[i] != RELOAD_OTHER){
operand_type[i] = ((find_reg_note(insn, REG_UNUSED, recog_data.operand[i])?RELOAD_FOR_INSN:RELOAD_OTHER)); }} } 
#line 3758 "reload.c"
for(i = 0;i < noperands;i++) { if ((!goal_alternative_win[i]) && ((((enum rtx_code )((recog_data.operand[i])->code))) == LABEL_REF || (((enum rtx_code )((recog_data.operand[i])->code))) == SYMBOL_REF || (((enum rtx_code )((recog_data.operand[i])->code))) == CONST_INT || (((enum rtx_code )((recog_data.operand[i])->code))) == CONST_DOUBLE || (((enum rtx_code )((recog_data.operand[i])->code))) == CONST || (((enum rtx_code )((recog_data.operand[i])->code))) == HIGH || (((enum rtx_code )((recog_data.operand[i])->code))) == CONST_VECTOR || (((enum rtx_code )((recog_data.operand[i])->code))) == CONSTANT_P_RTX) && (((enum rtx_code )((recog_data.operand[i])->code))) != HIGH && ((ix86_preferred_reload_class((recog_data.operand[i]), (((enum reg_class )goal_alternative[i]))) == NO_REGS) || no_input_reloads) && operand_mode[i] != VOIDmode){
{ 
#line 3773 "reload.c"
substed_operand[i] = recog_data.operand[i] = find_reloads_toplev(force_const_mem(operand_mode[i], recog_data.operand[i]), i, address_type[i], ind_levels, 0, insn, (((void *)0))); 
#line 3774 "reload.c"
if (alternative_allows_memconst(recog_data.constraints[i], goal_alternative_number)){
goal_alternative_win[i] = 1; }} }} 
#line 3780 "reload.c"
if (goal_earlyclobber){
for(i = 0;i < noperands;i++) { if (goal_alternative_earlyclobber[i]){
reload_earlyclobbers[n_earlyclobbers++] = recog_data.operand[i]; }} }
#line 3786 "reload.c"
for(i = 0;i < noperands;i++) { if ((!goal_alternative_win[i])){
{ 
#line 3892 "reload.c"
if (goal_alternative_matches[i] >= 0){
; }else{
if (goal_alternative_matched[i] == (-1) && goal_alternative_offmemok[i] && (((enum rtx_code )((recog_data.operand[i])->code))) == MEM){
{ 
#line 3808 "reload.c"
operand_reloadnum[i] = push_reload(((((recog_data.operand[i])->u).fld[0]).rtx), (( rtx )0), (&((((recog_data.operand[i])->u).fld[0]).rtx)), (( rtx *)0), GENERAL_REGS, (((enum machine_mode )((((((recog_data.operand[i])->u).fld[0]).rtx))->mode))), VOIDmode, 0, 0, i, RELOAD_FOR_INPUT); 
#line 3809 "reload.c"
rld[operand_reloadnum[i]].inc = (((unsigned short )mode_size[(((enum machine_mode )((recog_data.operand[i])->mode)))])); 
#line 3817 "reload.c"
if (modified[i] == RELOAD_WRITE){
{ 
#line 3829 "reload.c"
for(j = 0;j < n_reloads;j++) { { 
#line 3829 "reload.c"
if (rld[j].opnum == i){
{ 
#line 3828 "reload.c"
if (rld[j].when_needed == RELOAD_FOR_OUTPUT_ADDRESS){
rld[j].when_needed = RELOAD_FOR_INPUT_ADDRESS; }else{
if (rld[j].when_needed == RELOAD_FOR_OUTADDR_ADDRESS){
rld[j].when_needed = RELOAD_FOR_INPADDR_ADDRESS; }}} }} } } }} }else{
if (goal_alternative_matched[i] == (-1)){
{ 
#line 3850 "reload.c"
operand_reloadnum[i] = push_reload(((modified[i] != RELOAD_WRITE?recog_data.operand[i]:0)), ((modified[i] != RELOAD_READ?recog_data.operand[i]:0)), ((modified[i] != RELOAD_WRITE?recog_data.operand_loc[i]:0)), ((modified[i] != RELOAD_READ?recog_data.operand_loc[i]:0)), ((enum reg_class )goal_alternative[i]), ((modified[i] == RELOAD_WRITE?VOIDmode:operand_mode[i])), ((modified[i] == RELOAD_READ?VOIDmode:operand_mode[i])), ((insn_code_number < 0?0:insn_data[insn_code_number].operand[i].strict_low)), 0, i, operand_type[i]); } }else{
if (modified[i] == RELOAD_READ && modified[goal_alternative_matched[i]] == RELOAD_WRITE){
{ 
#line 3866 "reload.c"
operand_reloadnum[i] = push_reload(recog_data.operand[i], recog_data.operand[goal_alternative_matched[i]], recog_data.operand_loc[i], recog_data.operand_loc[goal_alternative_matched[i]], ((enum reg_class )goal_alternative[i]), operand_mode[i], operand_mode[goal_alternative_matched[i]], 0, 0, i, RELOAD_OTHER); 
#line 3867 "reload.c"
operand_reloadnum[goal_alternative_matched[i]] = output_reloadnum; } }else{
if (modified[i] == RELOAD_WRITE && modified[goal_alternative_matched[i]] == RELOAD_READ){
{ 
#line 3880 "reload.c"
operand_reloadnum[goal_alternative_matched[i]] = push_reload(recog_data.operand[goal_alternative_matched[i]], recog_data.operand[i], recog_data.operand_loc[goal_alternative_matched[i]], recog_data.operand_loc[i], ((enum reg_class )goal_alternative[i]), operand_mode[goal_alternative_matched[i]], operand_mode[i], 0, 0, i, RELOAD_OTHER); 
#line 3881 "reload.c"
operand_reloadnum[i] = output_reloadnum; } }else{
if (insn_code_number >= 0){
fancy_abort("reload.c", 3884, __FUNCTION__); }else{
{ 
#line 3887 "reload.c"
error_for_asm(insn, "inconsistent operand constraints in an `asm'"); 
#line 3889 "reload.c"
((((insn)->u).fld[5]).rtx) = gen_rtx_fmt_e(USE, (VOIDmode), ((const_int_rtx[64]))); 
#line 3890 "reload.c"
n_reloads = 0; 
#line 3891 "reload.c"
return 0; } }}}}}}} }else{
if (goal_alternative_matched[i] < 0 && goal_alternative_matches[i] < 0 && (!address_operand_reloaded[i]) && optimize){
{ 
#line 3903 "reload.c"

#line 3903 "reload.c"
 rtx operand = recog_data.operand[i];
#line 3905 "reload.c"
while((((enum rtx_code )((operand)->code))) == SUBREG) { operand = ((((operand)->u).fld[0]).rtx); } 
#line 3907 "reload.c"
if (((((enum rtx_code )((operand)->code))) == MEM || ((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53)) && (((enum reg_class )goal_alternative[i]) != NO_REGS || modified[i] == RELOAD_WRITE) && (!no_input_reloads) && (modified[i] == RELOAD_READ || ((!no_output_reloads) && (!this_insn_is_asm)))){
operand_reloadnum[i] = push_reload(((modified[i] != RELOAD_WRITE?recog_data.operand[i]:0)), ((modified[i] != RELOAD_READ?recog_data.operand[i]:0)), ((modified[i] != RELOAD_WRITE?recog_data.operand_loc[i]:0)), ((modified[i] != RELOAD_READ?recog_data.operand_loc[i]:0)), ((enum reg_class )goal_alternative[i]), ((modified[i] == RELOAD_WRITE?VOIDmode:operand_mode[i])), ((modified[i] == RELOAD_READ?VOIDmode:operand_mode[i])), ((insn_code_number < 0?0:insn_data[insn_code_number].operand[i].strict_low)), 1, i, operand_type[i]); }else{
if (replace && ((((enum rtx_code )((operand)->code))) == MEM || ((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53 && reg_renumber[((((operand)->u).fld[0]).rtuint)] < 0))){
{ 
#line 3953 "reload.c"
operand = (*recog_data.operand_loc[i]); 
#line 3955 "reload.c"
while((((enum rtx_code )((operand)->code))) == SUBREG) { operand = ((((operand)->u).fld[0]).rtx); } 
#line 3957 "reload.c"
if ((((enum rtx_code )((operand)->code))) == REG){
{ 
#line 3965 "reload.c"
if (modified[i] != RELOAD_WRITE){
(((emit_insn_before(gen_rtx_fmt_e(USE, (VOIDmode), (operand)), insn))->mode) = (QImode)); }
#line 3965 "reload.c"
if (modified[i] != RELOAD_READ){
emit_insn_after(gen_rtx_fmt_e(CLOBBER, (VOIDmode), (operand)), insn); }} }} }}} }else{
if (goal_alternative_matches[i] >= 0 && goal_alternative_win[goal_alternative_matches[i]] && modified[i] == RELOAD_READ && modified[goal_alternative_matches[i]] == RELOAD_WRITE && (!no_input_reloads) && (!no_output_reloads) && optimize){
{ 
#line 3980 "reload.c"

#line 3980 "reload.c"
 rtx operand = recog_data.operand[i];
#line 3982 "reload.c"
while((((enum rtx_code )((operand)->code))) == SUBREG) { operand = ((((operand)->u).fld[0]).rtx); } 
#line 3984 "reload.c"
if (((((enum rtx_code )((operand)->code))) == MEM || ((((enum rtx_code )((operand)->code))) == REG && ((((operand)->u).fld[0]).rtuint) >= 53)) && (((enum reg_class )goal_alternative[goal_alternative_matches[i]]) != NO_REGS)){
operand_reloadnum[i] = operand_reloadnum[goal_alternative_matches[i]] = push_reload(recog_data.operand[goal_alternative_matches[i]], recog_data.operand[i], recog_data.operand_loc[goal_alternative_matches[i]], recog_data.operand_loc[i], ((enum reg_class )goal_alternative[goal_alternative_matches[i]]), operand_mode[goal_alternative_matches[i]], operand_mode[i], 0, 1, goal_alternative_matches[i], RELOAD_OTHER); }} }}}} 
#line 4004 "reload.c"
for(i = 0;i < noperands;i++) { { 
#line 4028 "reload.c"
if (replace){
{ 
#line 4013 "reload.c"

#line 4013 "reload.c"
 rtx substitution = substed_operand[i];
#line 4015 "reload.c"
(*recog_data.operand_loc[i]) = substitution; 
#line 4020 "reload.c"
if ((((enum rtx_code )((insn)->code))) != JUMP_INSN && (((enum rtx_code )((substitution)->code))) == LABEL_REF && (!find_reg_note(insn, REG_LABEL, ((((substitution)->u).fld[0]).rtx)))){
((((insn)->u).fld[8]).rtx) = gen_rtx_fmt_ue(INSN_LIST, (REG_LABEL), (((((substitution)->u).fld[0]).rtx)), (((((insn)->u).fld[8]).rtx))); }} }else{
retval |= (substed_operand[i] != (*recog_data.operand_loc[i])); }} } 
#line 4039 "reload.c"
if (insn_code_number >= 0 && replace){
for(i = insn_data[insn_code_number].n_dups - 1;i >= 0;i--) { { 
#line 4042 "reload.c"

#line 4042 "reload.c"
int opno = recog_data.dup_num[i];
#line 4043 "reload.c"
(*recog_data.dup_loc[i]) = (*recog_data.operand_loc[opno]); 
#line 4044 "reload.c"
dup_replacements(recog_data.dup_loc[i], recog_data.operand_loc[opno]); } } }
# 4039 "reload.c" 
# 4075 "reload.c" 
if ((!goal_earlyclobber)){
combine_reloads(); }
#line 4083 "reload.c"
for(i = 0;i < n_reloads;i++) { { 
#line 4085 "reload.c"

#line 4085 "reload.c"
int k;
#line 4087 "reload.c"
for(j = i + 1;j < n_reloads;j++) { if ((rld[i].when_needed == RELOAD_FOR_INPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_INPADDR_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTADDR_ADDRESS) && (rld[j].when_needed == RELOAD_FOR_INPUT_ADDRESS || rld[j].when_needed == RELOAD_FOR_OUTPUT_ADDRESS || rld[j].when_needed == RELOAD_FOR_INPADDR_ADDRESS || rld[j].when_needed == RELOAD_FOR_OUTADDR_ADDRESS) && rtx_equal_p(rld[i].in, rld[j].in) && (operand_reloadnum[rld[i].opnum] < 0 || rld[operand_reloadnum[rld[i].opnum]].optional) && (operand_reloadnum[rld[j].opnum] < 0 || rld[operand_reloadnum[rld[j].opnum]].optional) && (goal_alternative_matches[rld[i].opnum] == rld[j].opnum || (goal_alternative_matches[rld[j].opnum] == rld[i].opnum))){
{ 
#line 4109 "reload.c"
for(k = 0;k < n_replacements;k++) { if (replacements[k].what == j){
replacements[k].what = i; }} 
#line 4109 "reload.c"
if (rld[i].when_needed == RELOAD_FOR_INPADDR_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTADDR_ADDRESS){
rld[i].when_needed = RELOAD_FOR_OPADDR_ADDR; }else{
rld[i].when_needed = RELOAD_FOR_OPERAND_ADDRESS; }
#line 4114 "reload.c"
rld[j].in = 0; } }} } } 
#line 4135 "reload.c"
for(i = 0;i < n_reloads;i++) { { 
#line 4141 "reload.c"
if (rld[i].secondary_p && rld[i].when_needed == operand_type[rld[i].opnum]){
rld[i].when_needed = address_type[rld[i].opnum]; }
#line 4141 "reload.c"
if ((rld[i].when_needed == RELOAD_FOR_INPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_INPADDR_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTADDR_ADDRESS) && (operand_reloadnum[rld[i].opnum] < 0 || rld[operand_reloadnum[rld[i].opnum]].optional)){
{ 
#line 4166 "reload.c"
if ((rld[i].when_needed == RELOAD_FOR_INPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_INPADDR_ADDRESS) && rld[i].secondary_in_reload != (-1)){
{ 
#line 4155 "reload.c"

#line 4155 "reload.c"
int secondary_in_reload = rld[i].secondary_in_reload;
#line 4157 "reload.c"
rld[secondary_in_reload].when_needed = RELOAD_FOR_OPADDR_ADDR; 
#line 4160 "reload.c"
if (secondary_in_reload > 0 && rld[secondary_in_reload].secondary_in_reload != (-1)){
rld[rld[secondary_in_reload].secondary_in_reload].when_needed = RELOAD_FOR_OPADDR_ADDR; }} }
#line 4166 "reload.c"
if ((rld[i].when_needed == RELOAD_FOR_OUTPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTADDR_ADDRESS) && rld[i].secondary_out_reload != (-1)){
{ 
#line 4170 "reload.c"

#line 4170 "reload.c"
int secondary_out_reload = rld[i].secondary_out_reload;
#line 4172 "reload.c"
rld[secondary_out_reload].when_needed = RELOAD_FOR_OPADDR_ADDR; 
#line 4175 "reload.c"
if (secondary_out_reload && rld[secondary_out_reload].secondary_out_reload != (-1)){
rld[rld[secondary_out_reload].secondary_out_reload].when_needed = RELOAD_FOR_OPADDR_ADDR; }} }
#line 4181 "reload.c"
if (rld[i].when_needed == RELOAD_FOR_INPADDR_ADDRESS || rld[i].when_needed == RELOAD_FOR_OUTADDR_ADDRESS){
rld[i].when_needed = RELOAD_FOR_OPADDR_ADDR; }else{
rld[i].when_needed = RELOAD_FOR_OPERAND_ADDRESS; }} }
#line 4188 "reload.c"
if ((rld[i].when_needed == RELOAD_FOR_INPUT_ADDRESS || rld[i].when_needed == RELOAD_FOR_INPADDR_ADDRESS) && operand_reloadnum[rld[i].opnum] >= 0 && (rld[operand_reloadnum[rld[i].opnum]].when_needed == RELOAD_OTHER)){
rld[i].when_needed = RELOAD_FOR_OTHER_ADDRESS; }
#line 4195 "reload.c"
if (goal_alternative_matches[rld[i].opnum] >= 0){
rld[i].opnum = goal_alternative_matches[rld[i].opnum]; }} } 
# 4135 "reload.c" 
# 4222 "reload.c" 
{ 
#line 4223 "reload.c"

#line 4223 "reload.c"
int first_op_addr_num = (-2);
#line 4224 "reload.c"

#line 4224 "reload.c"
int first_inpaddr_num[30];
#line 4225 "reload.c"

#line 4225 "reload.c"
int first_outpaddr_num[30];
#line 4226 "reload.c"

#line 4226 "reload.c"
int need_change = 0;
#line 4233 "reload.c"
for(i = 0;i < noperands;i++) { first_inpaddr_num[i] = first_outpaddr_num[i] = (-2); } 
#line 4235 "reload.c"
for(i = n_reloads - 1;i >= 0;i--) { { 
#line 4262 "reload.c"
switch(rld[i].when_needed){ { 
#line 4245 "reload.c"
case RELOAD_FOR_OPERAND_ADDRESS: if ((++first_op_addr_num) >= 0){
{ 
#line 4242 "reload.c"
first_op_addr_num = i; 
#line 4243 "reload.c"
need_change = 1; } }
#line 4245 "reload.c"
break; 
#line 4246 "reload.c"
case RELOAD_FOR_INPUT_ADDRESS: if ((++first_inpaddr_num[rld[i].opnum]) >= 0){
{ 
#line 4249 "reload.c"
first_inpaddr_num[rld[i].opnum] = i; 
#line 4250 "reload.c"
need_change = 1; } }
#line 4252 "reload.c"
break; 
#line 4253 "reload.c"
case RELOAD_FOR_OUTPUT_ADDRESS: if ((++first_outpaddr_num[rld[i].opnum]) >= 0){
{ 
#line 4256 "reload.c"
first_outpaddr_num[rld[i].opnum] = i; 
#line 4257 "reload.c"
need_change = 1; } }
#line 4259 "reload.c"
break; 
#line 4260 "reload.c"
default: break; } } } } 
#line 4265 "reload.c"
if (need_change){
{ 
#line 4309 "reload.c"
for(i = 0;i < n_reloads;i++) { { 
#line 4269 "reload.c"

#line 4269 "reload.c"
int first_num;
#line 4270 "reload.c"

#line 4270 "reload.c"
enum reload_type type;
#line 4272 "reload.c"
switch(rld[i].when_needed){ { 
#line 4275 "reload.c"
case RELOAD_FOR_OPADDR_ADDR: first_num = first_op_addr_num; 
#line 4276 "reload.c"
type = RELOAD_FOR_OPERAND_ADDRESS; 
#line 4277 "reload.c"
break; 
#line 4278 "reload.c"
case RELOAD_FOR_INPADDR_ADDRESS: first_num = first_inpaddr_num[rld[i].opnum]; 
#line 4280 "reload.c"
type = RELOAD_FOR_INPUT_ADDRESS; 
#line 4281 "reload.c"
break; 
#line 4282 "reload.c"
case RELOAD_FOR_OUTADDR_ADDRESS: first_num = first_outpaddr_num[rld[i].opnum]; 
#line 4284 "reload.c"
type = RELOAD_FOR_OUTPUT_ADDRESS; 
#line 4285 "reload.c"
break; 
#line 4286 "reload.c"
default: continue; } } 
#line 4289 "reload.c"
if (first_num < 0){
continue; }else{
if (i > first_num){
rld[i].when_needed = type; }else{
{ 
#line 4307 "reload.c"
for(j = n_reloads - 1;j > first_num;j--) { { 
#line 4307 "reload.c"
if (rld[j].when_needed == type && ((rld[i].secondary_p?rld[j].secondary_in_reload == i:reg_mentioned_p(rld[i].in, rld[j].in)))){
{ 
#line 4304 "reload.c"
rld[i].when_needed = type; 
#line 4305 "reload.c"
break; } }} } } }}} } } }} 
#line 4318 "reload.c"
for(i = 0;i < n_reloads;i++) { if (rld[i].in != 0 && rld[i].out == 0 && (rld[i].when_needed == RELOAD_FOR_OPERAND_ADDRESS || rld[i].when_needed == RELOAD_FOR_OPADDR_ADDR || rld[i].when_needed == RELOAD_FOR_OTHER_ADDRESS)){
for(j = 0;j < n_reloads;j++) { if (i != j && rld[j].in != 0 && rld[j].out == 0 && rld[j].when_needed == rld[i].when_needed && (rld[i].in == rld[j].in || (rld[i].in != 0 && (((((enum rtx_code )((rld[i].in)->code))) == REG?(((enum rtx_code )((rld[j].in)->code))) == REG && ((((rld[i].in)->u).fld[0]).rtuint) == ((((rld[j].in)->u).fld[0]).rtuint):rtx_equal_p(rld[i].in, rld[j].in) && (!side_effects_p(rld[i].in)))))) && rld[i].class == rld[j].class && (!rld[i].nocombine) && (!rld[j].nocombine) && rld[i].reg_rtx == rld[j].reg_rtx){
{ 
#line 4331 "reload.c"
rld[i].opnum = (((rld[i].opnum) < (rld[j].opnum)?(rld[i].opnum):(rld[j].opnum))); 
#line 4332 "reload.c"
transfer_replacements(i, j); 
#line 4333 "reload.c"
rld[j].in = 0; } }} }} 
#line 4349 "reload.c"
for(i = 0;i < n_reloads;i++) { { 
#line 4355 "reload.c"
rld[i].mode = ((rld[i].inmode == VOIDmode || ((((unsigned short )mode_size[rld[i].outmode])) > (((unsigned short )mode_size[rld[i].inmode]))))?rld[i].outmode:rld[i].inmode); 
#line 4357 "reload.c"
rld[i].nregs = (((!reg_classes_intersect_p((rld[i].class), GENERAL_REGS))?(((mode_class[rld[i].mode] == MODE_COMPLEX_INT || mode_class[rld[i].mode] == MODE_COMPLEX_FLOAT)?2:1)):((((((rld[i].mode) == XFmode?12:(((unsigned short )mode_size[rld[i].mode]))))) + ((0?8:4)) - 1) / ((0?8:4))))); } } 
#line 4362 "reload.c"
for(i = 0;i < n_reloads;i++) { if (rld[i].when_needed == RELOAD_FOR_INPUT && (((enum rtx_code )((((((insn)->u).fld[5]).rtx))->code))) == SET && (((enum rtx_code )((((((((((insn)->u).fld[5]).rtx))->u).fld[0]).rtx))->code))) == REG && ((((((((insn)->u).fld[5]).rtx))->u).fld[1]).rtx) == rld[i].in){
{ 
#line 4368 "reload.c"

#line 4368 "reload.c"
 rtx dest = ((((((((insn)->u).fld[5]).rtx))->u).fld[0]).rtx);
#line 4369 "reload.c"

#line 4369 "reload.c"
unsigned int regno = ((((dest)->u).fld[0]).rtuint);
#line 4371 "reload.c"
if (regno < 53 && ((!(!((reg_class_contents[rld[i].class])[(regno) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((regno) % (((unsigned )(8 * 4))))))))) && ix86_hard_regno_mode_ok((regno), (rld[i].mode))){
{ 
#line 4375 "reload.c"

#line 4375 "reload.c"
int nr = ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[rld[i].mode] == MODE_COMPLEX_INT || mode_class[rld[i].mode] == MODE_COMPLEX_FLOAT)?2:1)):(((rld[i].mode) == XFmode?((0?2:3)):((rld[i].mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[rld[i].mode])) + ((0?8:4)) - 1) / ((0?8:4))))))));
#line 4376 "reload.c"

#line 4376 "reload.c"
int ok = 1,nri;
#line 4378 "reload.c"
for(nri = 1;nri < nr;nri++) { if ((!((!(!((reg_class_contents[rld[i].class])[(regno + nri) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((regno + nri) % (((unsigned )(8 * 4))))))))))){
ok = 0; }} 
#line 4382 "reload.c"
if (ok){
rld[i].reg_rtx = dest; }} }} }} 
#line 4387 "reload.c"
return retval; }
 
#line 4395 "reload.c"
static int alternative_allows_memconst(const char *constraint, int altnum)  {

#line 4396 "reload.c"

#line 4396 "reload.c"
int c;
#line 4398 "reload.c"
while(altnum > 0) { { 
#line 4400 "reload.c"
while((*constraint++) != ',') { ; } 
#line 4401 "reload.c"
altnum--; } } 
#line 4405 "reload.c"
for(;(c = (*constraint)) && c != ',' && c != '#';constraint += 1) { if (c == 'm' || c == 'o' || 0){
return 1; }} 
#line 4409 "reload.c"
return 0; }
 
# 4349 "reload.c" 
# 4437 "reload.c" 
static  rtx find_reloads_toplev( rtx x, int opnum, enum reload_type type, int ind_levels, int is_set_dest,  rtx insn, int *address_reloaded)  {

#line 4438 "reload.c"

#line 4438 "reload.c"
enum rtx_code code = (((enum rtx_code )((x)->code)));
#line 4440 "reload.c"

#line 4440 "reload.c"
const char *fmt = (rtx_format[((int )(code))]);
#line 4441 "reload.c"

#line 4441 "reload.c"
int i;
#line 4442 "reload.c"

#line 4442 "reload.c"
int copied;
#line 4444 "reload.c"
if (code == REG){
{ 
#line 4447 "reload.c"

#line 4447 "reload.c"
int regno = ((((x)->u).fld[0]).rtuint);
#line 4448 "reload.c"
if (reg_equiv_constant[regno] != 0 && (!is_set_dest)){
x = reg_equiv_constant[regno]; }else{
if (reg_equiv_memory_loc[regno] && (reg_equiv_address[regno] != 0 || num_not_at_initial_offset)){
{ 
#line 4459 "reload.c"

#line 4459 "reload.c"
 rtx mem = make_memloc(x, regno);
#line 4460 "reload.c"
if (reg_equiv_address[regno] || (!rtx_equal_p(mem, reg_equiv_mem[regno]))){
{ 
#line 4472 "reload.c"
if (replace_reloads && recog_data.operand[opnum] != x){
(((emit_insn_before(gen_rtx_fmt_e(USE, (VOIDmode), (x)), insn))->mode) = (QImode)); }
#line 4472 "reload.c"
x = mem; 
#line 4473 "reload.c"
i = find_reloads_address((((enum machine_mode )((x)->mode))), (&x), ((((x)->u).fld[0]).rtx), (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 4475 "reload.c"
if (address_reloaded){
(*address_reloaded) = i; }} }} }}
#line 4479 "reload.c"
return x; } }
#line 4481 "reload.c"
if (code == MEM){
{ 
#line 4483 "reload.c"

#line 4483 "reload.c"
 rtx tem = x;
#line 4485 "reload.c"
i = find_reloads_address((((enum machine_mode )((x)->mode))), (&tem), ((((x)->u).fld[0]).rtx), (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 4487 "reload.c"
if (address_reloaded){
(*address_reloaded) = i; }
#line 4490 "reload.c"
return tem; } }
#line 4493 "reload.c"
if (code == SUBREG && (((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == REG){
{ 
#line 4505 "reload.c"

#line 4505 "reload.c"
int regno = ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint);
#line 4506 "reload.c"

#line 4506 "reload.c"
 rtx tem;
#line 4508 "reload.c"
if (subreg_lowpart_p(x) && regno >= 53 && reg_renumber[regno] < 0 && reg_equiv_constant[regno] != 0 && (tem = gen_lowpart_common((((enum machine_mode )((x)->mode))), reg_equiv_constant[regno])) != 0){
return tem; }
#line 4515 "reload.c"
if (regno >= 53 && reg_renumber[regno] < 0 && reg_equiv_constant[regno] != 0){
{ 
#line 4520 "reload.c"
tem = simplify_gen_subreg((((enum machine_mode )((x)->mode))), reg_equiv_constant[regno], (((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode))), ((((x)->u).fld[1]).rtuint)); 
#line 4521 "reload.c"
if ((!tem)){
fancy_abort("reload.c", 4522, __FUNCTION__); }
#line 4523 "reload.c"
return tem; } }else{
if (regno >= 53 && (reg_equiv_address[regno] != 0 || (reg_equiv_mem[regno] != 0 && ((!strict_memory_address_p((((enum machine_mode )((x)->mode))), ((((reg_equiv_mem[regno])->u).fld[0]).rtx))) || (!offsettable_memref_p(reg_equiv_mem[regno])) || num_not_at_initial_offset)))){
x = find_reloads_subreg_address(x, 1, opnum, type, ind_levels, insn); }}} }
# 4505 "reload.c" 
# 4554 "reload.c" 
for(copied = 0 , i = (rtx_length[((int )(code))]) - 1;i >= 0;i--) { { 
#line 4573 "reload.c"
if (fmt[i] == 'e'){
{ 
#line 4560 "reload.c"

#line 4560 "reload.c"
 rtx new_part = find_reloads_toplev(((((x)->u).fld[i]).rtx), opnum, type, ind_levels, is_set_dest, insn, address_reloaded);
#line 4566 "reload.c"
if (new_part != ((((x)->u).fld[i]).rtx) && (!((((enum rtx_code )((new_part)->code))) == LABEL_REF || (((enum rtx_code )((new_part)->code))) == SYMBOL_REF || (((enum rtx_code )((new_part)->code))) == CONST_INT || (((enum rtx_code )((new_part)->code))) == CONST_DOUBLE || (((enum rtx_code )((new_part)->code))) == CONST || (((enum rtx_code )((new_part)->code))) == HIGH || (((enum rtx_code )((new_part)->code))) == CONST_VECTOR || (((enum rtx_code )((new_part)->code))) == CONSTANT_P_RTX)) && (!copied)){
{ 
#line 4568 "reload.c"
x = shallow_copy_rtx(x); 
#line 4569 "reload.c"
copied = 1; } }
#line 4571 "reload.c"
((((x)->u).fld[i]).rtx) = new_part; } }} } 
#line 4574 "reload.c"
return x; }
 
#line 4581 "reload.c"
static  rtx make_memloc( rtx ad, int regno)  {

#line 4585 "reload.c"

#line 4585 "reload.c"
 rtx tem = ((((eliminate_regs(reg_equiv_memory_loc[regno], 0, (( rtx )0)))->u).fld[0]).rtx);
#line 4589 "reload.c"
if (rtx_varies_p(tem, 0)){
tem = copy_rtx(tem); }
#line 4592 "reload.c"
tem = replace_equiv_address_nv(reg_equiv_memory_loc[regno], tem); 
#line 4593 "reload.c"
tem = adjust_address_1(tem, (((enum machine_mode )((ad)->mode))), 0, 0, 1); 
#line 4597 "reload.c"
if (tem == reg_equiv_memory_loc[regno]){
tem = copy_rtx(tem); }
#line 4599 "reload.c"
return tem; }
 
#line 4608 "reload.c"
static int maybe_memory_address_p(enum machine_mode mode,  rtx ad,  rtx *part)  {

#line 4609 "reload.c"

#line 4609 "reload.c"
int retv;
#line 4610 "reload.c"

#line 4610 "reload.c"
 rtx tem = (*part);
#line 4611 "reload.c"

#line 4611 "reload.c"
 rtx reg = gen_rtx_REG((((enum machine_mode )((tem)->mode))), max_reg_num());
#line 4613 "reload.c"
(*part) = reg; 
#line 4614 "reload.c"
retv = memory_address_p(mode, ad); 
#line 4615 "reload.c"
(*part) = tem; 
#line 4617 "reload.c"
return retv; }
 
#line 4649 "reload.c"
static int find_reloads_address(enum machine_mode mode,  rtx *memrefloc,  rtx ad,  rtx *loc, int opnum, enum reload_type type, int ind_levels,  rtx insn)  {

#line 4650 "reload.c"

#line 4650 "reload.c"
int regno;
#line 4651 "reload.c"

#line 4651 "reload.c"
int removed_and = 0;
#line 4652 "reload.c"

#line 4652 "reload.c"
 rtx tem;
#line 4658 "reload.c"
if ((((enum rtx_code )((ad)->code))) == REG){
{ 
#line 4660 "reload.c"
regno = ((((ad)->u).fld[0]).rtuint); 
#line 4664 "reload.c"
tem = reg_equiv_constant[regno]; 
#line 4665 "reload.c"
if (tem != 0 && (tem = eliminate_regs(tem, mode, insn)) && strict_memory_address_p(mode, tem)){
{ 
#line 4669 "reload.c"
(*loc) = ad = tem; 
#line 4670 "reload.c"
return 0; } }
#line 4673 "reload.c"
tem = reg_equiv_memory_loc[regno]; 
#line 4674 "reload.c"
if (tem != 0){
{ 
#line 4718 "reload.c"
if (reg_equiv_address[regno] != 0 || num_not_at_initial_offset){
{ 
#line 4678 "reload.c"
tem = make_memloc(ad, regno); 
#line 4679 "reload.c"
if ((!strict_memory_address_p((((enum machine_mode )((tem)->mode))), ((((tem)->u).fld[0]).rtx)))){
{ 
#line 4683 "reload.c"
find_reloads_address((((enum machine_mode )((tem)->mode))), (&tem), ((((tem)->u).fld[0]).rtx), (&((((tem)->u).fld[0]).rtx)), opnum, (((type) == RELOAD_FOR_INPUT_ADDRESS?RELOAD_FOR_INPADDR_ADDRESS:(((type) == RELOAD_FOR_OUTPUT_ADDRESS?RELOAD_FOR_OUTADDR_ADDRESS:(type))))), ind_levels, insn); } }
#line 4690 "reload.c"
if (ind_levels > 0 && strict_memory_address_p(mode, tem) && ((((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == REG || ((((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == PLUS && (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[0]).rtx))->code))) == REG && ((((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX)))){
{ 
#line 4714 "reload.c"
if (replace_reloads && num_not_at_initial_offset && (!rtx_equal_p(tem, reg_equiv_mem[regno]))){
{ 
#line 4704 "reload.c"
(*loc) = tem; 
#line 4708 "reload.c"
(((emit_insn_before(gen_rtx_fmt_e(USE, (VOIDmode), (ad)), insn))->mode) = (QImode)); } }
#line 4714 "reload.c"
return 0; } }
#line 4716 "reload.c"
ad = tem; } }} }else{
if (regno < 53 && ((regno) <= 7 || (regno) == 16 || (regno) == 20 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) <= 7) && (!regno_clobbered_p(regno, this_insn, mode, 0))){
return 0; }}
#line 4730 "reload.c"
push_reload(ad, (( rtx )0), loc, (( rtx *)0), GENERAL_REGS, (((enum machine_mode )((ad)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 4732 "reload.c"
return 1; } }
#line 4735 "reload.c"
if (strict_memory_address_p(mode, ad)){
{ 
# 4645 "reload.c" 
# 4751 "reload.c" 
if ((((enum rtx_code )((ad)->code))) == PLUS && (((enum rtx_code )((((((ad)->u).fld[1]).rtx))->code))) == CONST_INT && (((enum rtx_code )((((((ad)->u).fld[0]).rtx))->code))) == REG && reg_equiv_constant[((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint)] == 0){
return 0; }
#line 4751 "reload.c"
subst_reg_equivs_changed = 0; 
#line 4752 "reload.c"
(*loc) = subst_reg_equivs(ad, insn); 
#line 4754 "reload.c"
if ((!subst_reg_equivs_changed)){
return 0; }
#line 4758 "reload.c"
if (strict_memory_address_p(mode, ad)){
return 0; }} }
#line 4783 "reload.c"
if ((((enum rtx_code )((ad)->code))) == AND){
{ 
#line 4785 "reload.c"
removed_and = 1; 
#line 4786 "reload.c"
loc = (&((((ad)->u).fld[0]).rtx)); 
#line 4787 "reload.c"
ad = (*loc); } }
#line 4796 "reload.c"
if ((((enum rtx_code )((ad)->code))) == MEM){
{ 
#line 4800 "reload.c"
tem = ad; 
#line 4801 "reload.c"
find_reloads_address((((enum machine_mode )((ad)->mode))), (&tem), ((((ad)->u).fld[0]).rtx), (&((((ad)->u).fld[0]).rtx)), opnum, (((type) == RELOAD_FOR_INPUT_ADDRESS?RELOAD_FOR_INPADDR_ADDRESS:(((type) == RELOAD_FOR_OUTPUT_ADDRESS?RELOAD_FOR_OUTADDR_ADDRESS:(type))))), (ind_levels == 0?0:ind_levels - 1), insn); 
#line 4807 "reload.c"
if (tem != ad && memrefloc){
{ 
#line 4809 "reload.c"
(*memrefloc) = copy_rtx((*memrefloc)); 
#line 4810 "reload.c"
copy_replacements(tem, (((((*memrefloc))->u).fld[0]).rtx)); 
#line 4811 "reload.c"
loc = (&(((((*memrefloc))->u).fld[0]).rtx)); 
#line 4812 "reload.c"
if (removed_and){
loc = (&(((((*loc))->u).fld[0]).rtx)); }} }
#line 4820 "reload.c"
if (ind_levels == 0 || ((((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == SYMBOL_REF && (!indirect_symref_ok)) || (((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == MEM || (!((((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == REG || ((((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == PLUS && (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[0]).rtx))->code))) == REG && (((enum rtx_code )((((((((((tem)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == CONST_INT)))){
{ 
#line 4833 "reload.c"
push_reload(tem, (( rtx )0), loc, (( rtx *)0), GENERAL_REGS, (((enum machine_mode )((tem)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 4834 "reload.c"
return (!removed_and); } }else{
return 0; }} }else{
if ((((enum rtx_code )((ad)->code))) == PLUS && (((enum rtx_code )((((((ad)->u).fld[0]).rtx))->code))) == REG && ((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && ((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= 7 || (((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint)) == 16 || (((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint)) == 20 || (((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtuint))]) <= 7) && (((enum rtx_code )((((((ad)->u).fld[1]).rtx))->code))) == CONST_INT){
{ 
#line 4860 "reload.c"
if (memrefloc){
{ 
#line 4854 "reload.c"
(*memrefloc) = copy_rtx((*memrefloc)); 
#line 4855 "reload.c"
loc = (&(((((*memrefloc))->u).fld[0]).rtx)); 
#line 4856 "reload.c"
if (removed_and){
loc = (&(((((*loc))->u).fld[0]).rtx)); }} }
#line 4860 "reload.c"
if (double_reg_address_ok){
{ 
#line 4863 "reload.c"
(*loc) = ad = copy_rtx(ad); 
#line 4867 "reload.c"
find_reloads_address_part(((((ad)->u).fld[1]).rtx), (&((((ad)->u).fld[1]).rtx)), INDEX_REGS, (((enum machine_mode )((ad)->mode))), opnum, type, ind_levels); 
#line 4870 "reload.c"
return 0; } }else{
{ 
#line 4878 "reload.c"
find_reloads_address_part(ad, loc, GENERAL_REGS, ((0?DImode:SImode)), opnum, type, ind_levels); } }
#line 4880 "reload.c"
return (!removed_and); } }else{
if ((((enum rtx_code )((ad)->code))) == PLUS && (((enum rtx_code )((((((ad)->u).fld[1]).rtx))->code))) == CONST_INT && (((enum rtx_code )((((((ad)->u).fld[0]).rtx))->code))) == PLUS && (((enum rtx_code )((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->code))) == REG && ((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53 && (((((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= 7 || (((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint)) == 16 || (((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint)) == 20 || (((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint))]) <= 7) || ((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx) == (global_rtl[GR_FRAME_POINTER]) || ((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx) == (global_rtl[GR_HARD_FRAME_POINTER]) || ((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx) == (global_rtl[GR_ARG_POINTER]) || ((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx) == (global_rtl[GR_STACK_POINTER])) && (!maybe_memory_address_p(mode, ad, (&((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))))){
{ 
# 4783 "reload.c" 
# 4922 "reload.c" 
(*loc) = ad = gen_rtx_fmt_ee(PLUS, ((((enum machine_mode )((ad)->mode)))), (plus_constant_wide((((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx)), ((long )((((((((ad)->u).fld[1]).rtx))->u).hwint[0]))))), (((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))); 
#line 4926 "reload.c"
find_reloads_address_part(((((ad)->u).fld[0]).rtx), (&((((ad)->u).fld[0]).rtx)), GENERAL_REGS, (((enum machine_mode )((ad)->mode))), opnum, type, ind_levels); 
#line 4929 "reload.c"
find_reloads_address_1(mode, ((((ad)->u).fld[1]).rtx), 1, (&((((ad)->u).fld[1]).rtx)), opnum, type, 0, insn); 
#line 4932 "reload.c"
return 0; } }else{
if ((((enum rtx_code )((ad)->code))) == PLUS && (((enum rtx_code )((((((ad)->u).fld[1]).rtx))->code))) == CONST_INT && (((enum rtx_code )((((((ad)->u).fld[0]).rtx))->code))) == PLUS && (((enum rtx_code )((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->code))) == REG && ((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint) < 53 && (((((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint)) <= 7 || (((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint)) == 16 || (((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint)) == 20 || (((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx))->u).fld[0]).rtuint))]) <= 7) || ((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx) == (global_rtl[GR_FRAME_POINTER]) || ((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx) == (global_rtl[GR_HARD_FRAME_POINTER]) || ((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx) == (global_rtl[GR_ARG_POINTER]) || ((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx) == (global_rtl[GR_STACK_POINTER])) && (!maybe_memory_address_p(mode, ad, (&((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx))))){
{ 
#line 4950 "reload.c"
(*loc) = ad = gen_rtx_fmt_ee(PLUS, ((((enum machine_mode )((ad)->mode)))), (((((((((ad)->u).fld[0]).rtx))->u).fld[0]).rtx)), (plus_constant_wide((((((((((ad)->u).fld[0]).rtx))->u).fld[1]).rtx)), ((long )((((((((ad)->u).fld[1]).rtx))->u).hwint[0])))))); 
#line 4954 "reload.c"
find_reloads_address_part(((((ad)->u).fld[1]).rtx), (&((((ad)->u).fld[1]).rtx)), GENERAL_REGS, (((enum machine_mode )((ad)->mode))), opnum, type, ind_levels); 
#line 4957 "reload.c"
find_reloads_address_1(mode, ((((ad)->u).fld[0]).rtx), 1, (&((((ad)->u).fld[0]).rtx)), opnum, type, 0, insn); 
#line 4960 "reload.c"
return 0; } }}}}
#line 4966 "reload.c"
tem = ad; 
#line 4967 "reload.c"
if ((((enum rtx_code )((ad)->code))) == PLUS){
tem = subst_indexed_address(ad); }
#line 4969 "reload.c"
if (tem != ad && strict_memory_address_p(mode, tem)){
{ 
#line 4974 "reload.c"
subst_reg_equivs_changed = 0; 
#line 4975 "reload.c"
tem = subst_reg_equivs(tem, insn); 
#line 4979 "reload.c"
if ((!subst_reg_equivs_changed) || strict_memory_address_p(mode, tem)){
{ 
#line 4981 "reload.c"
(*loc) = tem; 
#line 4982 "reload.c"
return 0; } }} }
#line 4988 "reload.c"
if (((((enum rtx_code )((ad)->code))) == LABEL_REF || (((enum rtx_code )((ad)->code))) == SYMBOL_REF || (((enum rtx_code )((ad)->code))) == CONST_INT || (((enum rtx_code )((ad)->code))) == CONST_DOUBLE || (((enum rtx_code )((ad)->code))) == CONST || (((enum rtx_code )((ad)->code))) == HIGH || (((enum rtx_code )((ad)->code))) == CONST_VECTOR || (((enum rtx_code )((ad)->code))) == CONSTANT_P_RTX) && (!strict_memory_address_p(mode, ad))){
{ 
#line 5001 "reload.c"
if (memrefloc && (((enum rtx_code )((ad)->code))) == SYMBOL_REF && ((((ad))->unchanging))){
{ 
#line 4995 "reload.c"
(*memrefloc) = copy_rtx((*memrefloc)); 
#line 4996 "reload.c"
loc = (&(((((*memrefloc))->u).fld[0]).rtx)); 
#line 4997 "reload.c"
if (removed_and){
loc = (&(((((*loc))->u).fld[0]).rtx)); }} }
#line 5001 "reload.c"
find_reloads_address_part(ad, loc, GENERAL_REGS, ((0?DImode:SImode)), opnum, type, ind_levels); 
#line 5003 "reload.c"
return (!removed_and); } }
#line 5006 "reload.c"
return find_reloads_address_1(mode, ad, 0, loc, opnum, type, ind_levels, insn); }
 
#line 5017 "reload.c"
static  rtx subst_reg_equivs( rtx ad,  rtx insn)  {

#line 5018 "reload.c"

#line 5018 "reload.c"
enum rtx_code code = (((enum rtx_code )((ad)->code)));
#line 5019 "reload.c"

#line 5019 "reload.c"
int i;
#line 5020 "reload.c"

#line 5020 "reload.c"
const char *fmt;
#line 5022 "reload.c"
switch(code){ { 
#line 5033 "reload.c"
case HIGH: case CONST_INT: case CONST: case CONST_DOUBLE: case CONST_VECTOR: case SYMBOL_REF: case LABEL_REF: case PC: case CC0: return ad; 
#line 5035 "reload.c"
case REG: { 
#line 5037 "reload.c"

#line 5037 "reload.c"
int regno = ((((ad)->u).fld[0]).rtuint);
#line 5039 "reload.c"
if (reg_equiv_constant[regno] != 0){
{ 
#line 5041 "reload.c"
subst_reg_equivs_changed = 1; 
#line 5042 "reload.c"
return reg_equiv_constant[regno]; } }
#line 5044 "reload.c"
if (reg_equiv_memory_loc[regno] && num_not_at_initial_offset){
{ 
#line 5046 "reload.c"

#line 5046 "reload.c"
 rtx mem = make_memloc(ad, regno);
#line 5047 "reload.c"
if ((!rtx_equal_p(mem, reg_equiv_mem[regno]))){
{ 
#line 5049 "reload.c"
subst_reg_equivs_changed = 1; 
#line 5053 "reload.c"
(((emit_insn_before(gen_rtx_fmt_e(USE, (VOIDmode), (ad)), insn))->mode) = (QImode)); 
#line 5055 "reload.c"
return mem; } }} }} 
#line 5059 "reload.c"
return ad; 
#line 5061 "reload.c"
case PLUS: if (((((ad)->u).fld[0]).rtx) == (global_rtl[GR_FRAME_POINTER]) && (((enum rtx_code )((((((ad)->u).fld[1]).rtx))->code))) == CONST_INT){
return ad; }
#line 5066 "reload.c"
break; 
#line 5068 "reload.c"
default: break; } } 
#line 5072 "reload.c"
fmt = (rtx_format[((int )(code))]); 
#line 5073 "reload.c"
for(i = (rtx_length[((int )(code))]) - 1;i >= 0;i--) { if (fmt[i] == 'e'){
((((ad)->u).fld[i]).rtx) = subst_reg_equivs(((((ad)->u).fld[i]).rtx), insn); }} 
#line 5076 "reload.c"
return ad; }
 
#line 5088 "reload.c"
 rtx form_sum( rtx x,  rtx y)  {

#line 5089 "reload.c"

#line 5089 "reload.c"
 rtx tem;
#line 5090 "reload.c"

#line 5090 "reload.c"
enum machine_mode mode = (((enum machine_mode )((x)->mode)));
#line 5092 "reload.c"
if (mode == VOIDmode){
mode = (((enum machine_mode )((y)->mode))); }
#line 5095 "reload.c"
if (mode == VOIDmode){
mode = ((0?DImode:SImode)); }
#line 5098 "reload.c"
if ((((enum rtx_code )((x)->code))) == CONST_INT){
return plus_constant_wide((y), ((long )((((x)->u).hwint[0])))); }else{
if ((((enum rtx_code )((y)->code))) == CONST_INT){
return plus_constant_wide((x), ((long )((((y)->u).hwint[0])))); }else{
if (((((enum rtx_code )((x)->code))) == LABEL_REF || (((enum rtx_code )((x)->code))) == SYMBOL_REF || (((enum rtx_code )((x)->code))) == CONST_INT || (((enum rtx_code )((x)->code))) == CONST_DOUBLE || (((enum rtx_code )((x)->code))) == CONST || (((enum rtx_code )((x)->code))) == HIGH || (((enum rtx_code )((x)->code))) == CONST_VECTOR || (((enum rtx_code )((x)->code))) == CONSTANT_P_RTX)){
tem = x , x = y , y = tem; }}}
#line 5105 "reload.c"
if ((((enum rtx_code )((x)->code))) == PLUS && ((((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX)){
return form_sum(((((x)->u).fld[0]).rtx), form_sum(((((x)->u).fld[1]).rtx), y)); }
#line 5110 "reload.c"
if ((((enum rtx_code )((y)->code))) == PLUS && ((((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((y)->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX)){
return form_sum(form_sum(x, ((((y)->u).fld[0]).rtx)), ((((y)->u).fld[1]).rtx)); }
#line 5115 "reload.c"
if (((((enum rtx_code )((x)->code))) == LABEL_REF || (((enum rtx_code )((x)->code))) == SYMBOL_REF || (((enum rtx_code )((x)->code))) == CONST_INT || (((enum rtx_code )((x)->code))) == CONST_DOUBLE || (((enum rtx_code )((x)->code))) == CONST || (((enum rtx_code )((x)->code))) == HIGH || (((enum rtx_code )((x)->code))) == CONST_VECTOR || (((enum rtx_code )((x)->code))) == CONSTANT_P_RTX) && ((((enum rtx_code )((y)->code))) == LABEL_REF || (((enum rtx_code )((y)->code))) == SYMBOL_REF || (((enum rtx_code )((y)->code))) == CONST_INT || (((enum rtx_code )((y)->code))) == CONST_DOUBLE || (((enum rtx_code )((y)->code))) == CONST || (((enum rtx_code )((y)->code))) == HIGH || (((enum rtx_code )((y)->code))) == CONST_VECTOR || (((enum rtx_code )((y)->code))) == CONSTANT_P_RTX)){
{ 
#line 5119 "reload.c"
if ((((enum rtx_code )((x)->code))) == CONST){
x = ((((x)->u).fld[0]).rtx); }
#line 5119 "reload.c"
if ((((enum rtx_code )((y)->code))) == CONST){
y = ((((y)->u).fld[0]).rtx); }
#line 5122 "reload.c"
return gen_rtx_fmt_e(CONST, (VOIDmode), (gen_rtx_fmt_ee(PLUS, (mode), (x), (y)))); } }
#line 5125 "reload.c"
return gen_rtx_fmt_ee(PLUS, (mode), (x), (y)); }
 
# 5087 "reload.c" 
# 5142 "reload.c" 
static  rtx subst_indexed_address( rtx addr)  {

#line 5143 "reload.c"

#line 5143 "reload.c"
 rtx op0 = 0,op1 = 0,op2 = 0;
#line 5144 "reload.c"

#line 5144 "reload.c"
 rtx tem;
#line 5145 "reload.c"

#line 5145 "reload.c"
int regno;
#line 5147 "reload.c"
if ((((enum rtx_code )((addr)->code))) == PLUS){
{ 
#line 5150 "reload.c"
op0 = ((((addr)->u).fld[0]).rtx) , op1 = ((((addr)->u).fld[1]).rtx) , op2 = 0; 
#line 5151 "reload.c"
if ((((enum rtx_code )((op0)->code))) == REG && (regno = ((((op0)->u).fld[0]).rtuint)) >= 53 && reg_renumber[regno] < 0 && reg_equiv_constant[regno] != 0){
op0 = reg_equiv_constant[regno]; }else{
if ((((enum rtx_code )((op1)->code))) == REG && (regno = ((((op1)->u).fld[0]).rtuint)) >= 53 && reg_renumber[regno] < 0 && reg_equiv_constant[regno] != 0){
op1 = reg_equiv_constant[regno]; }else{
if ((((enum rtx_code )((op0)->code))) == PLUS && (tem = subst_indexed_address(op0)) != op0){
op0 = tem; }else{
if ((((enum rtx_code )((op1)->code))) == PLUS && (tem = subst_indexed_address(op1)) != op1){
op1 = tem; }else{
return addr; }}}}
#line 5171 "reload.c"
if ((((enum rtx_code )((op1)->code))) == PLUS){
op2 = ((((op1)->u).fld[1]).rtx) , op1 = ((((op1)->u).fld[0]).rtx); }else{
if ((((enum rtx_code )((op0)->code))) == PLUS){
op2 = op1 , op1 = ((((op0)->u).fld[1]).rtx) , op0 = ((((op0)->u).fld[0]).rtx); }}
#line 5177 "reload.c"
if (op2 != 0){
op1 = form_sum(op1, op2); }
#line 5179 "reload.c"
if (op1 != 0){
op0 = form_sum(op0, op1); }
#line 5182 "reload.c"
return op0; } }
#line 5184 "reload.c"
return addr; }
 
#line 5201 "reload.c"
static void update_auto_inc_notes( rtx insn __attribute__  (( __unused__ )) , int regno __attribute__  (( __unused__ )) , int reloadnum __attribute__  (( __unused__ )) )  {
}
 
# 5198 "reload.c" 
# 5210 "reload.c" 
# 5240 "reload.c" 
static int find_reloads_address_1(enum machine_mode mode,  rtx x, int context,  rtx *loc, int opnum, enum reload_type type, int ind_levels,  rtx insn)  {

#line 5241 "reload.c"

#line 5241 "reload.c"
enum rtx_code code = (((enum rtx_code )((x)->code)));
#line 5243 "reload.c"
switch(code){ { 
#line 5367 "reload.c"
case PLUS: { 
#line 5247 "reload.c"

#line 5247 "reload.c"
 rtx orig_op0 = ((((x)->u).fld[0]).rtx);
#line 5248 "reload.c"

#line 5248 "reload.c"
 rtx orig_op1 = ((((x)->u).fld[1]).rtx);
#line 5249 "reload.c"

#line 5249 "reload.c"
enum rtx_code code0 = (((enum rtx_code )((orig_op0)->code)));
#line 5250 "reload.c"

#line 5250 "reload.c"
enum rtx_code code1 = (((enum rtx_code )((orig_op1)->code)));
#line 5251 "reload.c"

#line 5251 "reload.c"
 rtx op0 = orig_op0;
#line 5252 "reload.c"

#line 5252 "reload.c"
 rtx op1 = orig_op1;
#line 5254 "reload.c"
if ((((enum rtx_code )((op0)->code))) == SUBREG){
{ 
#line 5256 "reload.c"
op0 = ((((op0)->u).fld[0]).rtx); 
#line 5257 "reload.c"
code0 = (((enum rtx_code )((op0)->code))); 
#line 5258 "reload.c"
if (code0 == REG && ((((op0)->u).fld[0]).rtuint) < 53){
op0 = gen_rtx_REG(word_mode, (((((op0)->u).fld[0]).rtuint) + subreg_regno_offset(((((((((orig_op0)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((orig_op0)->u).fld[0]).rtx))->mode))), ((((orig_op0)->u).fld[1]).rtuint), (((enum machine_mode )((orig_op0)->mode)))))); }} }
#line 5267 "reload.c"
if ((((enum rtx_code )((op1)->code))) == SUBREG){
{ 
#line 5269 "reload.c"
op1 = ((((op1)->u).fld[0]).rtx); 
#line 5270 "reload.c"
code1 = (((enum rtx_code )((op1)->code))); 
#line 5271 "reload.c"
if (code1 == REG && ((((op1)->u).fld[0]).rtuint) < 53){
op1 = gen_rtx_REG((((enum machine_mode )((op1)->mode))), (((((op1)->u).fld[0]).rtuint) + subreg_regno_offset(((((((((orig_op1)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((orig_op1)->u).fld[0]).rtx))->mode))), ((((orig_op1)->u).fld[1]).rtuint), (((enum machine_mode )((orig_op1)->mode)))))); }} }
#line 5285 "reload.c"
if (context){
{ 
#line 5288 "reload.c"
find_reloads_address((((enum machine_mode )((x)->mode))), loc, ((((x)->u).fld[0]).rtx), (&((((x)->u).fld[0]).rtx)), opnum, (((type) == RELOAD_FOR_INPUT_ADDRESS?RELOAD_FOR_INPADDR_ADDRESS:(((type) == RELOAD_FOR_OUTPUT_ADDRESS?RELOAD_FOR_OUTADDR_ADDRESS:(type))))), ind_levels, insn); 
#line 5289 "reload.c"
push_reload((*loc), (( rtx )0), loc, (( rtx *)0), ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 5292 "reload.c"
return 1; } }
#line 5295 "reload.c"
if (code0 == MULT || code0 == SIGN_EXTEND || code0 == TRUNCATE || code0 == ZERO_EXTEND || code1 == MEM){
{ 
#line 5299 "reload.c"
find_reloads_address_1(mode, orig_op0, 1, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 5300 "reload.c"
find_reloads_address_1(mode, orig_op1, 0, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); } }else{
if (code1 == MULT || code1 == SIGN_EXTEND || code1 == TRUNCATE || code1 == ZERO_EXTEND || code0 == MEM){
{ 
#line 5308 "reload.c"
find_reloads_address_1(mode, orig_op0, 0, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 5309 "reload.c"
find_reloads_address_1(mode, orig_op1, 1, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); } }else{
if (code0 == CONST_INT || code0 == CONST || code0 == SYMBOL_REF || code0 == LABEL_REF){
find_reloads_address_1(mode, orig_op1, 0, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); }else{
if (code1 == CONST_INT || code1 == CONST || code1 == SYMBOL_REF || code1 == LABEL_REF){
find_reloads_address_1(mode, orig_op0, 0, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); }else{
if (code0 == REG && code1 == REG){
{ 
#line 5349 "reload.c"
if (((((((op0)->u).fld[0]).rtuint)) < 7 || (((((op0)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op0)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) < 7) && ((((((op1)->u).fld[0]).rtuint)) <= 7 || (((((op1)->u).fld[0]).rtuint)) == 16 || (((((op1)->u).fld[0]).rtuint)) == 20 || (((((op1)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op1)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) <= 7)){
return 0; }else{
if (((((((op1)->u).fld[0]).rtuint)) < 7 || (((((op1)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op1)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) < 7) && ((((((op0)->u).fld[0]).rtuint)) <= 7 || (((((op0)->u).fld[0]).rtuint)) == 16 || (((((op0)->u).fld[0]).rtuint)) == 20 || (((((op0)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op0)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) <= 7)){
return 0; }else{
if (((((((op1)->u).fld[0]).rtuint)) <= 7 || (((((op1)->u).fld[0]).rtuint)) == 16 || (((((op1)->u).fld[0]).rtuint)) == 20 || (((((op1)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op1)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) <= 7)){
find_reloads_address_1(mode, orig_op0, 1, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); }else{
if (((((((op0)->u).fld[0]).rtuint)) <= 7 || (((((op0)->u).fld[0]).rtuint)) == 16 || (((((op0)->u).fld[0]).rtuint)) == 20 || (((((op0)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op0)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) <= 7)){
find_reloads_address_1(mode, orig_op1, 1, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); }else{
if (((((((op1)->u).fld[0]).rtuint)) < 7 || (((((op1)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op1)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op1)->u).fld[0]).rtuint))]) < 7)){
find_reloads_address_1(mode, orig_op0, 0, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); }else{
if (((((((op0)->u).fld[0]).rtuint)) < 7 || (((((op0)->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((op0)->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((op0)->u).fld[0]).rtuint))]) < 7)){
find_reloads_address_1(mode, orig_op1, 0, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); }else{
{ 
#line 5346 "reload.c"
find_reloads_address_1(mode, orig_op0, 1, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 5347 "reload.c"
find_reloads_address_1(mode, orig_op1, 0, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); } }}}}}}} }else{
if (code0 == REG){
{ 
#line 5355 "reload.c"
find_reloads_address_1(mode, orig_op0, 1, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 5356 "reload.c"
find_reloads_address_1(mode, orig_op1, 0, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); } }else{
if (code1 == REG){
{ 
#line 5363 "reload.c"
find_reloads_address_1(mode, orig_op1, 1, (&((((x)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); 
#line 5364 "reload.c"
find_reloads_address_1(mode, orig_op0, 0, (&((((x)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); } }}}}}}}} 
#line 5369 "reload.c"
return 0; 
#line 5371 "reload.c"
case POST_MODIFY: case PRE_MODIFY: { 
#line 5374 "reload.c"

#line 5374 "reload.c"
 rtx op0 = ((((x)->u).fld[0]).rtx);
#line 5375 "reload.c"

#line 5375 "reload.c"
 rtx op1 = ((((x)->u).fld[1]).rtx);
#line 5377 "reload.c"
if ((((enum rtx_code )((op1)->code))) != PLUS && (((enum rtx_code )((op1)->code))) != MINUS){
return 0; }
#line 5384 "reload.c"
if (op0 != ((((op1)->u).fld[0]).rtx)){
fancy_abort("reload.c", 5385, __FUNCTION__); }
#line 5391 "reload.c"
if (((((enum rtx_code )((((((op1)->u).fld[1]).rtx))->code))) == REG)){
if ((!((((((((((op1)->u).fld[1]).rtx))->u).fld[0]).rtuint)) < 7 || (((((((((op1)->u).fld[1]).rtx))->u).fld[0]).rtuint) >= (((((20 + 1) + 7) + 1) + 7) + 1) && (((((((((op1)->u).fld[1]).rtx))->u).fld[0]).rtuint)) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(((((((((op1)->u).fld[1]).rtx))->u).fld[0]).rtuint))]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(((((((((op1)->u).fld[1]).rtx))->u).fld[0]).rtuint))]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(((((((((op1)->u).fld[1]).rtx))->u).fld[0]).rtuint))]) < 7))){
find_reloads_address_1(mode, ((((op1)->u).fld[1]).rtx), 1, (&((((op1)->u).fld[1]).rtx)), opnum, type, ind_levels, insn); }}
#line 5396 "reload.c"
if (((((enum rtx_code )((((((op1)->u).fld[0]).rtx))->code))) == REG)){
{ 
#line 5398 "reload.c"

#line 5398 "reload.c"
int regno = ((((((((op1)->u).fld[0]).rtx))->u).fld[0]).rtuint);
#line 5399 "reload.c"

#line 5399 "reload.c"
int reloadnum;
#line 5402 "reload.c"
if (regno >= 53 && reg_equiv_constant[regno] != 0){
fancy_abort("reload.c", 5404, __FUNCTION__); }
#line 5408 "reload.c"
if (reg_equiv_memory_loc[regno] != 0 && (reg_equiv_address[regno] != 0 || num_not_at_initial_offset)){
{ 
#line 5412 "reload.c"

#line 5412 "reload.c"
 rtx tem = make_memloc(((((x)->u).fld[0]).rtx), regno);
#line 5414 "reload.c"
if (reg_equiv_address[regno] || (!rtx_equal_p(tem, reg_equiv_mem[regno]))){
{ 
#line 5424 "reload.c"
find_reloads_address((((enum machine_mode )((tem)->mode))), (&tem), ((((tem)->u).fld[0]).rtx), (&((((tem)->u).fld[0]).rtx)), opnum, RELOAD_OTHER, ind_levels, insn); 
#line 5428 "reload.c"
reloadnum = push_reload(tem, tem, (&((((x)->u).fld[0]).rtx)), (&((((op1)->u).fld[0]).rtx)), GENERAL_REGS, (((enum machine_mode )((x)->mode))), (((enum machine_mode )((x)->mode))), 0, 0, opnum, RELOAD_OTHER); 
#line 5434 "reload.c"
update_auto_inc_notes(this_insn, regno, reloadnum); 
#line 5435 "reload.c"
return 0; } }} }
#line 5439 "reload.c"
if (reg_renumber[regno] >= 0){
regno = reg_renumber[regno]; }
#line 5443 "reload.c"
if ((!((regno) <= 7 || (regno) == 16 || (regno) == 20 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) <= 7))){
{ 
#line 5449 "reload.c"
reloadnum = push_reload(((((op1)->u).fld[0]).rtx), ((((x)->u).fld[0]).rtx), (&((((op1)->u).fld[0]).rtx)), (&((((x)->u).fld[0]).rtx)), GENERAL_REGS, (((enum machine_mode )((x)->mode))), (((enum machine_mode )((x)->mode))), 0, 0, opnum, RELOAD_OTHER); 
#line 5451 "reload.c"
update_auto_inc_notes(this_insn, regno, reloadnum); 
#line 5452 "reload.c"
return 0; } }} }else{
fancy_abort("reload.c", 5456, __FUNCTION__); }} 
#line 5458 "reload.c"
return 0; 
#line 5460 "reload.c"
case POST_INC: case POST_DEC: case PRE_INC: case PRE_DEC: if ((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == REG){
{ 
#line 5466 "reload.c"

#line 5466 "reload.c"
int regno = ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint);
#line 5467 "reload.c"

#line 5467 "reload.c"
int value = 0;
#line 5468 "reload.c"

#line 5468 "reload.c"
 rtx x_orig = x;
#line 5471 "reload.c"
if (regno >= 53 && reg_equiv_constant[regno] != 0){
fancy_abort("reload.c", 5473, __FUNCTION__); }
#line 5477 "reload.c"
if (reg_equiv_memory_loc[regno] != 0 && (reg_equiv_address[regno] != 0 || num_not_at_initial_offset)){
{ 
#line 5480 "reload.c"

#line 5480 "reload.c"
 rtx tem = make_memloc(((((x)->u).fld[0]).rtx), regno);
#line 5481 "reload.c"
if (reg_equiv_address[regno] || (!rtx_equal_p(tem, reg_equiv_mem[regno]))){
{ 
#line 5490 "reload.c"
find_reloads_address((((enum machine_mode )((tem)->mode))), (&tem), ((((tem)->u).fld[0]).rtx), (&((((tem)->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 5492 "reload.c"
x = gen_rtx_fmt_e((((enum rtx_code )((x)->code))), (((enum machine_mode )((x)->mode))), tem); } }} }
#line 5508 "reload.c"
if (reg_renumber[regno] >= 0){
regno = reg_renumber[regno]; }
#line 5510 "reload.c"
if ((regno >= 53 || (!((context?((regno) < 7 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) < 7):((regno) <= 7 || (regno) == 16 || (regno) == 20 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) <= 7)))))){
{ 
#line 5514 "reload.c"

#line 5514 "reload.c"
int reloadnum;
# 5508 "reload.c" 
# 5524 "reload.c" 

#line 5526 "reload.c"
 rtx equiv = (((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == MEM?((((x)->u).fld[0]).rtx):reg_equiv_mem[regno]));
#line 5527 "reload.c"

#line 5527 "reload.c"
int icode = ((int )((optab_table[OTI_add])->handlers)[((int )((0?DImode:SImode)))].insn_code);
#line 5528 "reload.c"
if (insn && (((enum rtx_code )((insn)->code))) == INSN && equiv && memory_operand(equiv, (((enum machine_mode )((equiv)->mode)))) && (!(icode != CODE_FOR_nothing && (((*insn_data[icode].operand[0].predicate))(equiv, ((0?DImode:SImode)))) && (((*insn_data[icode].operand[1].predicate))(equiv, ((0?DImode:SImode))))))){
{ 
#line 5544 "reload.c"
loc = (&((((x_orig)->u).fld[0]).rtx)); 
#line 5545 "reload.c"
x = ((((x)->u).fld[0]).rtx); 
#line 5546 "reload.c"
reloadnum = push_reload(x, x, loc, loc, ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), (((enum machine_mode )((x)->mode))), 0, 0, opnum, RELOAD_OTHER); } }else{
{ 
#line 5560 "reload.c"
reloadnum = push_reload(x, (( rtx )0), loc, (( rtx *)0), ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), (((enum machine_mode )((x)->mode))), 0, 0, opnum, type); 
#line 5561 "reload.c"
rld[reloadnum].inc = find_inc_amount(((((this_insn)->u).fld[5]).rtx), ((((x_orig)->u).fld[0]).rtx)); 
#line 5564 "reload.c"
value = 1; } }
#line 5567 "reload.c"
update_auto_inc_notes(this_insn, ((((((((x_orig)->u).fld[0]).rtx))->u).fld[0]).rtuint), reloadnum); } }
#line 5570 "reload.c"
return value; } }else{
if ((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == MEM){
{ 
#line 5580 "reload.c"

#line 5580 "reload.c"
 rtx tem __attribute__  (( __unused__ ))  = ((((x)->u).fld[0]).rtx);
#line 5581 "reload.c"

#line 5581 "reload.c"
 rtx link;
#line 5582 "reload.c"

#line 5582 "reload.c"
int reloadnum;
#line 5593 "reload.c"
find_reloads_address((((enum machine_mode )((x)->mode))), (&((((x)->u).fld[0]).rtx)), ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtx), (&((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtx)), opnum, type, ind_levels, insn); 
#line 5597 "reload.c"
reloadnum = push_reload(x, (( rtx )0), loc, (( rtx *)0), ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 5601 "reload.c"
rld[reloadnum].inc = find_inc_amount(((((this_insn)->u).fld[5]).rtx), ((((x)->u).fld[0]).rtx)); 
#line 5604 "reload.c"
link = 0; 
#line 5605 "reload.c"
if (link != 0){
push_replacement((&((((link)->u).fld[0]).rtx)), reloadnum, VOIDmode); }
#line 5608 "reload.c"
return 1; } }}
#line 5610 "reload.c"
return 0; 
#line 5612 "reload.c"
case MEM: find_reloads_address((((enum machine_mode )((x)->mode))), loc, ((((x)->u).fld[0]).rtx), (&((((x)->u).fld[0]).rtx)), opnum, (((type) == RELOAD_FOR_INPUT_ADDRESS?RELOAD_FOR_INPADDR_ADDRESS:(((type) == RELOAD_FOR_OUTPUT_ADDRESS?RELOAD_FOR_OUTADDR_ADDRESS:(type))))), ind_levels, insn); 
# 5593 "reload.c" 
# 5627 "reload.c" 
push_reload((*loc), (( rtx )0), loc, (( rtx *)0), ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 5630 "reload.c"
return 1; 
#line 5632 "reload.c"
case REG: { 
#line 5634 "reload.c"

#line 5634 "reload.c"
int regno = ((((x)->u).fld[0]).rtuint);
#line 5636 "reload.c"
if (reg_equiv_constant[regno] != 0){
{ 
#line 5641 "reload.c"
find_reloads_address_part(reg_equiv_constant[regno], loc, ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), opnum, type, ind_levels); 
#line 5642 "reload.c"
return 1; } }
#line 5657 "reload.c"
if (reg_equiv_memory_loc[regno] && (reg_equiv_address[regno] != 0 || num_not_at_initial_offset)){
{ 
#line 5660 "reload.c"

#line 5660 "reload.c"
 rtx tem = make_memloc(x, regno);
#line 5661 "reload.c"
if (reg_equiv_address[regno] != 0 || (!rtx_equal_p(tem, reg_equiv_mem[regno]))){
{ 
#line 5664 "reload.c"
x = tem; 
#line 5665 "reload.c"
find_reloads_address((((enum machine_mode )((x)->mode))), (&x), ((((x)->u).fld[0]).rtx), (&((((x)->u).fld[0]).rtx)), opnum, (((type) == RELOAD_FOR_INPUT_ADDRESS?RELOAD_FOR_INPADDR_ADDRESS:(((type) == RELOAD_FOR_OUTPUT_ADDRESS?RELOAD_FOR_OUTADDR_ADDRESS:(type))))), ind_levels, insn); } }} }
#line 5671 "reload.c"
if (reg_renumber[regno] >= 0){
regno = reg_renumber[regno]; }
#line 5674 "reload.c"
if ((regno >= 53 || (!((context?((regno) < 7 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) < 7):((regno) <= 7 || (regno) == 16 || (regno) == 20 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) <= 7)))))){
{ 
#line 5680 "reload.c"
push_reload(x, (( rtx )0), loc, (( rtx *)0), ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 5681 "reload.c"
return 1; } }
#line 5688 "reload.c"
if (regno_clobbered_p(regno, this_insn, (((enum machine_mode )((x)->mode))), 0)){
{ 
#line 5692 "reload.c"
push_reload(x, (( rtx )0), loc, (( rtx *)0), ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 5693 "reload.c"
return 1; } }} 
#line 5696 "reload.c"
return 0; 
#line 5698 "reload.c"
case SUBREG: if ((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == REG){
{ 
#line 5733 "reload.c"
if (((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53){
{ 
#line 5706 "reload.c"

#line 5706 "reload.c"
int regno __attribute__  (( __unused__ ))  = subreg_regno(x);
#line 5708 "reload.c"
if ((!((context?((regno) < 7 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) < 7):((regno) <= 7 || (regno) == 16 || (regno) == 20 || (regno >= (((((20 + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || (((unsigned )reg_renumber[(regno)]) >= (((((20 + 1) + 7) + 1) + 7) + 1) && ((unsigned )reg_renumber[(regno)]) <= ((((((20 + 1) + 7) + 1) + 7) + 1) + 7)) || ((unsigned )reg_renumber[(regno)]) <= 7))))){
{ 
#line 5714 "reload.c"
push_reload(x, (( rtx )0), loc, (( rtx *)0), ((context?INDEX_REGS:GENERAL_REGS)), (((enum machine_mode )((x)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 5715 "reload.c"
return 1; } }} }else{
{ 
#line 5723 "reload.c"

#line 5723 "reload.c"
enum reg_class class = ((context?INDEX_REGS:GENERAL_REGS));
#line 5724 "reload.c"
if (((unsigned )(((!reg_classes_intersect_p((class), GENERAL_REGS))?(((mode_class[(((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):(((((((((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode)))) == XFmode?12:(((unsigned short )mode_size[(((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode)))]))))) + ((0?8:4)) - 1) / ((0?8:4)))))) > reg_class_size[class]){
{ 
#line 5728 "reload.c"
x = find_reloads_subreg_address(x, 0, opnum, type, ind_levels, insn); 
#line 5729 "reload.c"
push_reload(x, (( rtx )0), loc, (( rtx *)0), class, (((enum machine_mode )((x)->mode))), VOIDmode, 0, 0, opnum, type); 
#line 5731 "reload.c"
return 1; } }} }} }
#line 5735 "reload.c"
break; 
#line 5737 "reload.c"
default: break; } } 
#line 5741 "reload.c"
{ 
#line 5742 "reload.c"

#line 5742 "reload.c"
const char *fmt = (rtx_format[((int )(code))]);
#line 5743 "reload.c"

#line 5743 "reload.c"
int i;
#line 5745 "reload.c"
for(i = (rtx_length[((int )(code))]) - 1;i >= 0;i--) { { 
#line 5750 "reload.c"
if (fmt[i] == 'e'){
find_reloads_address_1(mode, ((((x)->u).fld[i]).rtx), context, (&((((x)->u).fld[i]).rtx)), opnum, type, ind_levels, insn); }} } } 
#line 5753 "reload.c"
return 0; }
 
# 5657 "reload.c" 
# 5775 "reload.c" 
static void find_reloads_address_part( rtx x,  rtx *loc, enum reg_class class, enum machine_mode mode, int opnum, enum reload_type type, int ind_levels)  {

#line 5800 "reload.c"
if (((((enum rtx_code )((x)->code))) == LABEL_REF || (((enum rtx_code )((x)->code))) == SYMBOL_REF || (((enum rtx_code )((x)->code))) == CONST_INT || (((enum rtx_code )((x)->code))) == CONST_DOUBLE || (((enum rtx_code )((x)->code))) == CONST || (((enum rtx_code )((x)->code))) == HIGH || (((enum rtx_code )((x)->code))) == CONST_VECTOR || (((enum rtx_code )((x)->code))) == CONSTANT_P_RTX) && ((!legitimate_constant_p(x)) || ix86_preferred_reload_class((x), (class)) == NO_REGS)){
{ 
#line 5780 "reload.c"

#line 5780 "reload.c"
 rtx tem;
#line 5782 "reload.c"
tem = x = force_const_mem(mode, x); 
#line 5783 "reload.c"
find_reloads_address(mode, (&tem), ((((tem)->u).fld[0]).rtx), (&((((tem)->u).fld[0]).rtx)), opnum, type, ind_levels, 0); } }else{
if ((((enum rtx_code )((x)->code))) == PLUS && ((((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((x)->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX) && ((!legitimate_constant_p(((((x)->u).fld[1]).rtx))) || ix86_preferred_reload_class((((((x)->u).fld[1]).rtx)), (class)) == NO_REGS)){
{ 
#line 5792 "reload.c"

#line 5792 "reload.c"
 rtx tem;
#line 5794 "reload.c"
tem = force_const_mem((((enum machine_mode )((x)->mode))), ((((x)->u).fld[1]).rtx)); 
#line 5795 "reload.c"
x = gen_rtx_fmt_ee(PLUS, ((((enum machine_mode )((x)->mode)))), (((((x)->u).fld[0]).rtx)), (tem)); 
#line 5796 "reload.c"
find_reloads_address(mode, (&tem), ((((tem)->u).fld[0]).rtx), (&((((tem)->u).fld[0]).rtx)), opnum, type, ind_levels, 0); } }}
#line 5800 "reload.c"
push_reload(x, (( rtx )0), loc, (( rtx *)0), class, mode, VOIDmode, 0, 0, opnum, type); }
 
#line 5828 "reload.c"
static  rtx find_reloads_subreg_address( rtx x, int force_replace, int opnum, enum reload_type type, int ind_levels,  rtx insn)  {

#line 5829 "reload.c"

#line 5829 "reload.c"
int regno = ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint);
#line 5831 "reload.c"
if (reg_equiv_memory_loc[regno]){
{ 
#line 5840 "reload.c"
if ((!force_replace) && (reg_equiv_address[regno] || (!offsettable_memref_p(reg_equiv_mem[regno])))){
force_replace = 1; }
#line 5840 "reload.c"
if (force_replace || num_not_at_initial_offset){
{ 
#line 5842 "reload.c"

#line 5842 "reload.c"
 rtx tem = make_memloc(((((x)->u).fld[0]).rtx), regno);
#line 5846 "reload.c"
if (force_replace || (!rtx_equal_p(tem, reg_equiv_mem[regno]))){
{ 
#line 5849 "reload.c"

#line 5849 "reload.c"
unsigned outer_size = (((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))]));
#line 5850 "reload.c"

#line 5850 "reload.c"
unsigned inner_size = (((unsigned short )mode_size[(((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode)))]));
#line 5851 "reload.c"

#line 5851 "reload.c"
int offset;
#line 5855 "reload.c"
if (0 && outer_size > inner_size){
offset = inner_size - outer_size; }else{
offset = ((((x)->u).fld[1]).rtuint); }
#line 5860 "reload.c"
((((tem)->u).fld[0]).rtx) = plus_constant_wide((((((tem)->u).fld[0]).rtx)), ((long )(offset))); 
#line 5861 "reload.c"
(((tem)->mode) = ((((enum machine_mode )((x)->mode))))); 
#line 5866 "reload.c"
if (outer_size > inner_size && 0){
{ 
#line 5868 "reload.c"

#line 5868 "reload.c"
 rtx base;
#line 5870 "reload.c"
base = ((((tem)->u).fld[0]).rtx); 
#line 5871 "reload.c"
if ((((enum rtx_code )((base)->code))) == PLUS){
{ 
#line 5876 "reload.c"
if ((((enum rtx_code )((((((base)->u).fld[1]).rtx))->code))) == CONST_INT && (((((((base)->u).fld[1]).rtx))->u).hwint[0]) % outer_size != 0){
return x; }
#line 5876 "reload.c"
base = ((((base)->u).fld[0]).rtx); } }
#line 5878 "reload.c"
if ((((enum rtx_code )((base)->code))) != REG || ((((cfun->emit)->regno_pointer_align)[((((base)->u).fld[0]).rtuint)]) < outer_size * 8)){
return x; }} }
#line 5884 "reload.c"
find_reloads_address((((enum machine_mode )((tem)->mode))), (&tem), ((((tem)->u).fld[0]).rtx), (&((((tem)->u).fld[0]).rtx)), opnum, (((type) == RELOAD_FOR_INPUT_ADDRESS?RELOAD_FOR_INPADDR_ADDRESS:(((type) == RELOAD_FOR_OUTPUT_ADDRESS?RELOAD_FOR_OUTADDR_ADDRESS:(type))))), ind_levels, insn); 
#line 5891 "reload.c"
if (replace_reloads && recog_data.operand[opnum] != x){
(((emit_insn_before(gen_rtx_fmt_e(USE, (VOIDmode), (((((x)->u).fld[0]).rtx))), insn))->mode) = (QImode)); }
#line 5898 "reload.c"
x = tem; } }} }} }
#line 5902 "reload.c"
return x; }
 
# 5826 "reload.c" 
# 5915 "reload.c" 
void subst_reloads( rtx insn)  {

#line 5916 "reload.c"

#line 5916 "reload.c"
int i;
#line 5918 "reload.c"
for(i = 0;i < n_replacements;i++) { { 
#line 5920 "reload.c"

#line 5920 "reload.c"
struct replacement *r = (&replacements[i]);
#line 5921 "reload.c"

#line 5921 "reload.c"
 rtx reloadreg = rld[(r->what)].reg_rtx;
#line 5922 "reload.c"
if (reloadreg){
{ 
#line 5963 "reload.c"
if ((((enum rtx_code )(((*(r->where)))->code))) == LABEL_REF && (((enum rtx_code )((insn)->code))) == JUMP_INSN){
((((insn)->u).fld[8]).rtx) = gen_rtx_fmt_ue(INSN_LIST, (REG_LABEL), ((((((*(r->where)))->u).fld[0]).rtx)), (((((insn)->u).fld[8]).rtx))); }
#line 5963 "reload.c"
if ((((enum machine_mode )((reloadreg)->mode))) != (r->mode) && (r->mode) != VOIDmode){
reloadreg = reload_adjust_reg_for_mode(reloadreg, (r->mode)); }
#line 5970 "reload.c"
if ((r->subreg_loc) != 0 && (((enum rtx_code )((reloadreg)->code))) == SUBREG){
{ 
#line 5989 "reload.c"
if ((((enum machine_mode )(((*(r->subreg_loc)))->mode))) == (((enum machine_mode )((((((reloadreg)->u).fld[0]).rtx))->mode)))){
(*(r->subreg_loc)) = ((((reloadreg)->u).fld[0]).rtx); }else{
{ 
#line 5978 "reload.c"

#line 5978 "reload.c"
int final_offset = (((((*(r->subreg_loc)))->u).fld[1]).rtuint) + ((((reloadreg)->u).fld[1]).rtuint);
#line 5982 "reload.c"
final_offset = (final_offset / (((unsigned short )mode_size[(((enum machine_mode )(((*(r->subreg_loc)))->mode)))]))); 
#line 5984 "reload.c"
final_offset = (final_offset * (((unsigned short )mode_size[(((enum machine_mode )(((*(r->subreg_loc)))->mode)))]))); 
#line 5987 "reload.c"
(*(r->where)) = ((((reloadreg)->u).fld[0]).rtx); 
#line 5988 "reload.c"
(((((*(r->subreg_loc)))->u).fld[1]).rtuint) = final_offset; } }} }else{
(*(r->where)) = reloadreg; }} }else{
if ((!rld[(r->what)].optional)){
fancy_abort("reload.c", 5996, __FUNCTION__); }}} } }
 
#line 6005 "reload.c"
void copy_replacements( rtx x,  rtx y)  {

#line 6011 "reload.c"
if ((((enum rtx_code )((x)->code))) == SUBREG){
fancy_abort("reload.c", 6009, __FUNCTION__); }
#line 6011 "reload.c"
copy_replacements_1((&x), (&y), n_replacements); }
 
#line 6016 "reload.c"
static void copy_replacements_1( rtx *px,  rtx *py, int orig_replacements)  {

#line 6017 "reload.c"

#line 6017 "reload.c"
int i,j;
#line 6018 "reload.c"

#line 6018 "reload.c"
 rtx x,y;
#line 6019 "reload.c"

#line 6019 "reload.c"
struct replacement *r;
#line 6020 "reload.c"

#line 6020 "reload.c"
enum rtx_code code;
#line 6021 "reload.c"

#line 6021 "reload.c"
const char *fmt;
#line 6023 "reload.c"
for(j = 0;j < orig_replacements;j++) { { 
#line 6041 "reload.c"
if (replacements[j].subreg_loc == px){
{ 
#line 6027 "reload.c"
r = (&replacements[n_replacements++]); 
#line 6028 "reload.c"
(r->where) = replacements[j].where; 
#line 6029 "reload.c"
(r->subreg_loc) = py; 
#line 6030 "reload.c"
(r->what) = replacements[j].what; 
#line 6031 "reload.c"
(r->mode) = replacements[j].mode; } }else{
if (replacements[j].where == px){
{ 
#line 6035 "reload.c"
r = (&replacements[n_replacements++]); 
#line 6036 "reload.c"
(r->where) = py; 
#line 6037 "reload.c"
(r->subreg_loc) = 0; 
#line 6038 "reload.c"
(r->what) = replacements[j].what; 
#line 6039 "reload.c"
(r->mode) = replacements[j].mode; } }}} } 
#line 6043 "reload.c"
x = (*px); 
#line 6044 "reload.c"
y = (*py); 
#line 6045 "reload.c"
code = (((enum rtx_code )((x)->code))); 
#line 6046 "reload.c"
fmt = (rtx_format[((int )(code))]); 
#line 6048 "reload.c"
for(i = (rtx_length[((int )(code))]) - 1;i >= 0;i--) { { 
#line 6056 "reload.c"
if (fmt[i] == 'e'){
copy_replacements_1((&((((x)->u).fld[i]).rtx)), (&((((y)->u).fld[i]).rtx)), orig_replacements); }else{
if (fmt[i] == 'E'){
for(j = (((((((x)->u).fld[i]).rtvec))->num_elem));(--j) >= 0;) { copy_replacements_1((&(((((((x)->u).fld[i]).rtvec))->elem)[j])), (&(((((((y)->u).fld[i]).rtvec))->elem)[j])), orig_replacements); } }}} } }
 
#line 6063 "reload.c"
void move_replacements( rtx *x,  rtx *y)  {

#line 6064 "reload.c"

#line 6064 "reload.c"
int i;
#line 6066 "reload.c"
for(i = 0;i < n_replacements;i++) { if (replacements[i].subreg_loc == x){
replacements[i].subreg_loc = y; }else{
if (replacements[i].where == x){
{ 
#line 6071 "reload.c"
replacements[i].where = y; 
#line 6072 "reload.c"
replacements[i].subreg_loc = 0; } }}} }
 
#line 6080 "reload.c"
 rtx find_replacement( rtx *loc)  {

#line 6081 "reload.c"

#line 6081 "reload.c"
struct replacement *r;
#line 6083 "reload.c"
for(r = (&replacements[0]);r < (&replacements[n_replacements]);r++) { { 
#line 6085 "reload.c"

#line 6085 "reload.c"
 rtx reloadreg = rld[(r->what)].reg_rtx;
#line 6087 "reload.c"
if (reloadreg && (r->where) == loc){
{ 
#line 6092 "reload.c"
if ((r->mode) != VOIDmode && (((enum machine_mode )((reloadreg)->mode))) != (r->mode)){
reloadreg = gen_rtx_REG((r->mode), ((((reloadreg)->u).fld[0]).rtuint)); }
#line 6092 "reload.c"
return reloadreg; } }else{
if (reloadreg && (r->subreg_loc) == loc){
{ 
#line 6119 "reload.c"
if ((((enum rtx_code )((reloadreg)->code))) == REG){
return gen_rtx_REG((((enum machine_mode )(((*loc))->mode))), (((((reloadreg)->u).fld[0]).rtuint) + subreg_regno_offset((((((((((*loc))->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )(((((((*loc))->u).fld[0]).rtx))->mode))), (((((*loc))->u).fld[1]).rtuint), (((enum machine_mode )(((*loc))->mode)))))); }else{
if ((((enum machine_mode )((reloadreg)->mode))) == (((enum machine_mode )(((*loc))->mode)))){
return reloadreg; }else{
{ 
#line 6111 "reload.c"

#line 6111 "reload.c"
int final_offset = ((((reloadreg)->u).fld[1]).rtuint) + (((((*loc))->u).fld[1]).rtuint);
#line 6115 "reload.c"
final_offset = (final_offset / (((unsigned short )mode_size[(((enum machine_mode )(((*loc))->mode)))]))); 
#line 6116 "reload.c"
final_offset = (final_offset * (((unsigned short )mode_size[(((enum machine_mode )(((*loc))->mode)))]))); 
#line 6117 "reload.c"
return gen_rtx_SUBREG((((enum machine_mode )(((*loc))->mode))), ((((reloadreg)->u).fld[0]).rtx), final_offset); } }}} }}} } 
#line 6125 "reload.c"
if ((((enum rtx_code )(((*loc))->code))) == PLUS || (((enum rtx_code )(((*loc))->code))) == MINUS || (((enum rtx_code )(((*loc))->code))) == MULT){
{ 
#line 6128 "reload.c"

#line 6128 "reload.c"
 rtx x = find_replacement((&(((((*loc))->u).fld[0]).rtx)));
#line 6129 "reload.c"

#line 6129 "reload.c"
 rtx y = find_replacement((&(((((*loc))->u).fld[1]).rtx)));
#line 6131 "reload.c"
if (x != (((((*loc))->u).fld[0]).rtx) || y != (((((*loc))->u).fld[1]).rtx)){
return gen_rtx_fmt_ee((((enum rtx_code )(((*loc))->code))), (((enum machine_mode )(((*loc))->mode))), x, y); }} }
#line 6135 "reload.c"
return (*loc); }
 
# 5953 "reload.c" 
# 6152 "reload.c" 
int refers_to_regno_for_reload_p(unsigned int regno, unsigned int endregno,  rtx x,  rtx *loc)  {

#line 6153 "reload.c"

#line 6153 "reload.c"
int i;
#line 6154 "reload.c"

#line 6154 "reload.c"
unsigned int r;
#line 6155 "reload.c"

#line 6155 "reload.c"
enum rtx_code code;
#line 6156 "reload.c"

#line 6156 "reload.c"
const char *fmt;
#line 6158 "reload.c"
if (x == 0){
return 0; }
#line 6161 "reload.c"
repeat:  code = (((enum rtx_code )((x)->code))); 
#line 6164 "reload.c"
switch(code){ { 
#line 6167 "reload.c"
case REG: r = ((((x)->u).fld[0]).rtuint); 
#line 6171 "reload.c"
if (r >= 53){
{ 
#line 6178 "reload.c"
if (reg_equiv_memory_loc[r]){
return refers_to_regno_for_reload_p(regno, endregno, reg_equiv_memory_loc[r], (( rtx *)0)); }
#line 6178 "reload.c"
if (reg_equiv_constant[r]){
return 0; }
#line 6181 "reload.c"
fancy_abort("reload.c", 6181, __FUNCTION__); } }
#line 6184 "reload.c"
return (endregno > r && regno < r + ((r < 53?((((r) >= 8 && (r) <= (8 + 7)) || (((r) >= (20 + 1) && (r) <= ((20 + 1) + 7)) || ((r) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (r) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((r) >= (((20 + 1) + 7) + 1) && (r) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((x)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((x)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))):1))); 
#line 6189 "reload.c"
case SUBREG: if ((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == REG && ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint) < 53){
{ 
#line 6195 "reload.c"

#line 6195 "reload.c"
unsigned int inner_regno = subreg_regno(x);
#line 6196 "reload.c"

#line 6198 "reload.c"
unsigned int inner_endregno = inner_regno + ((inner_regno < 53?((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((x)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((x)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))):1));
#line 6200 "reload.c"
return endregno > inner_regno && regno < inner_endregno; } }
#line 6202 "reload.c"
break; 
#line 6204 "reload.c"
case CLOBBER: case SET: if ((&((((x)->u).fld[0]).rtx)) != loc && (((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) == SUBREG && loc != (&((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtx)) && (((enum rtx_code )((((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtx))->code))) == REG && ((((((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint) >= 53 && refers_to_regno_for_reload_p(regno, endregno, ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtx), loc)) || (((((enum rtx_code )((((((x)->u).fld[0]).rtx))->code))) != REG || earlyclobber_operand_p(((((x)->u).fld[0]).rtx))) && refers_to_regno_for_reload_p(regno, endregno, ((((x)->u).fld[0]).rtx), loc)))){
return 1; }
#line 6225 "reload.c"
if (code == CLOBBER || loc == (&((((x)->u).fld[1]).rtx))){
return 0; }
#line 6227 "reload.c"
x = ((((x)->u).fld[1]).rtx); 
#line 6228 "reload.c"
goto repeat; 
#line 6230 "reload.c"
default: break; } } 
#line 6236 "reload.c"
fmt = (rtx_format[((int )(code))]); 
#line 6237 "reload.c"
for(i = (rtx_length[((int )(code))]) - 1;i >= 0;i--) { { 
#line 6260 "reload.c"
if (fmt[i] == 'e' && loc != (&((((x)->u).fld[i]).rtx))){
{ 
#line 6250 "reload.c"
if (i == 0){
{ 
#line 6243 "reload.c"
x = ((((x)->u).fld[0]).rtx); 
#line 6244 "reload.c"
goto repeat; } }else{
if (refers_to_regno_for_reload_p(regno, endregno, ((((x)->u).fld[i]).rtx), loc)){
return 1; }}} }else{
if (fmt[i] == 'E'){
{ 
#line 6253 "reload.c"

#line 6253 "reload.c"
int j;
#line 6254 "reload.c"
for(j = (((((((x)->u).fld[i]).rtvec))->num_elem)) - 1;j >= 0;j--) { if (loc != (&(((((((x)->u).fld[i]).rtvec))->elem)[j])) && refers_to_regno_for_reload_p(regno, endregno, (((((((x)->u).fld[i]).rtvec))->elem)[j]), loc)){
return 1; }} } }}} } 
#line 6261 "reload.c"
return 0; }
 
#line 6275 "reload.c"
int reg_overlap_mentioned_for_reload_p( rtx x,  rtx in)  {

#line 6276 "reload.c"

#line 6276 "reload.c"
int regno,endregno;
#line 6279 "reload.c"
if ((((enum rtx_code )((x)->code))) == STRICT_LOW_PART || (rtx_class[((int )((((enum rtx_code )((x)->code)))))]) == 'a'){
x = ((((x)->u).fld[0]).rtx); }
#line 6284 "reload.c"
if (((((enum rtx_code )((x)->code))) == LABEL_REF || (((enum rtx_code )((x)->code))) == SYMBOL_REF || (((enum rtx_code )((x)->code))) == CONST_INT || (((enum rtx_code )((x)->code))) == CONST_DOUBLE || (((enum rtx_code )((x)->code))) == CONST || (((enum rtx_code )((x)->code))) == HIGH || (((enum rtx_code )((x)->code))) == CONST_VECTOR || (((enum rtx_code )((x)->code))) == CONSTANT_P_RTX) || ((((enum rtx_code )((in)->code))) == LABEL_REF || (((enum rtx_code )((in)->code))) == SYMBOL_REF || (((enum rtx_code )((in)->code))) == CONST_INT || (((enum rtx_code )((in)->code))) == CONST_DOUBLE || (((enum rtx_code )((in)->code))) == CONST || (((enum rtx_code )((in)->code))) == HIGH || (((enum rtx_code )((in)->code))) == CONST_VECTOR || (((enum rtx_code )((in)->code))) == CONSTANT_P_RTX)){
return 0; }else{
if ((((enum rtx_code )((x)->code))) == SUBREG){
{ 
#line 6288 "reload.c"
regno = ((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint); 
#line 6289 "reload.c"
if (regno < 53){
regno += subreg_regno_offset(((((((((x)->u).fld[0]).rtx))->u).fld[0]).rtuint), (((enum machine_mode )((((((x)->u).fld[0]).rtx))->mode))), ((((x)->u).fld[1]).rtuint), (((enum machine_mode )((x)->mode)))); }} }else{
if ((((enum rtx_code )((x)->code))) == REG){
{ 
#line 6297 "reload.c"
regno = ((((x)->u).fld[0]).rtuint); 
#line 6302 "reload.c"
if (regno >= 53){
{ 
#line 6308 "reload.c"
if (reg_equiv_memory_loc[regno]){
return refers_to_mem_for_reload_p(in); }else{
if (reg_equiv_constant[regno]){
return 0; }}
#line 6308 "reload.c"
fancy_abort("reload.c", 6308, __FUNCTION__); } }} }else{
if ((((enum rtx_code )((x)->code))) == MEM){
return refers_to_mem_for_reload_p(in); }else{
if ((((enum rtx_code )((x)->code))) == SCRATCH || (((enum rtx_code )((x)->code))) == PC || (((enum rtx_code )((x)->code))) == CC0){
return reg_mentioned_p(x, in); }else{
if ((((enum rtx_code )((x)->code))) == PLUS){
{ 
#line 6324 "reload.c"
while((((enum rtx_code )((in)->code))) == MEM) { in = ((((in)->u).fld[0]).rtx); } 
#line 6325 "reload.c"
if ((((enum rtx_code )((in)->code))) == REG){
return 0; }else{
if ((((enum rtx_code )((in)->code))) == PLUS){
return (reg_overlap_mentioned_for_reload_p(x, ((((in)->u).fld[0]).rtx)) || reg_overlap_mentioned_for_reload_p(x, ((((in)->u).fld[1]).rtx))); }else{
return (reg_overlap_mentioned_for_reload_p(((((x)->u).fld[0]).rtx), in) || reg_overlap_mentioned_for_reload_p(((((x)->u).fld[1]).rtx), in)); }}} }else{
fancy_abort("reload.c", 6334, __FUNCTION__); }}}}}}
#line 6336 "reload.c"
endregno = regno + ((regno < 53?((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((x)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((x)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((x)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))):1)); 
#line 6339 "reload.c"
return refers_to_regno_for_reload_p(regno, endregno, in, (( rtx *)0)); }
 
#line 6347 "reload.c"
int refers_to_mem_for_reload_p( rtx x)  {

#line 6348 "reload.c"

#line 6348 "reload.c"
const char *fmt;
#line 6349 "reload.c"

#line 6349 "reload.c"
int i;
#line 6351 "reload.c"
if ((((enum rtx_code )((x)->code))) == MEM){
return 1; }
#line 6354 "reload.c"
if ((((enum rtx_code )((x)->code))) == REG){
return (((((x)->u).fld[0]).rtuint) >= 53 && reg_equiv_memory_loc[((((x)->u).fld[0]).rtuint)]); }
#line 6358 "reload.c"
fmt = (rtx_format[((int )((((enum rtx_code )((x)->code)))))]); 
#line 6359 "reload.c"
for(i = (rtx_length[((int )((((enum rtx_code )((x)->code)))))]) - 1;i >= 0;i--) { if (fmt[i] == 'e' && ((((enum rtx_code )((((((x)->u).fld[i]).rtx))->code))) == MEM || refers_to_mem_for_reload_p(((((x)->u).fld[i]).rtx)))){
return 1; }} 
#line 6365 "reload.c"
return 0; }
 
# 6273 "reload.c" 
# 6397 "reload.c" 
 rtx find_equiv_reg( rtx goal,  rtx insn, enum reg_class class, int other, short *reload_reg_p, int goalreg, enum machine_mode mode)  {

#line 6398 "reload.c"

#line 6398 "reload.c"
 rtx p = insn;
#line 6399 "reload.c"

#line 6399 "reload.c"
 rtx goaltry,valtry,value,where;
#line 6400 "reload.c"

#line 6400 "reload.c"
 rtx pat;
#line 6401 "reload.c"

#line 6401 "reload.c"
int regno = (-1);
#line 6402 "reload.c"

#line 6402 "reload.c"
int valueno;
#line 6403 "reload.c"

#line 6403 "reload.c"
int goal_mem = 0;
#line 6404 "reload.c"

#line 6404 "reload.c"
int goal_const = 0;
#line 6405 "reload.c"

#line 6405 "reload.c"
int goal_mem_addr_varies = 0;
#line 6406 "reload.c"

#line 6406 "reload.c"
int need_stable_sp = 0;
#line 6407 "reload.c"

#line 6407 "reload.c"
int nregs;
#line 6408 "reload.c"

#line 6408 "reload.c"
int valuenregs;
#line 6409 "reload.c"

#line 6409 "reload.c"
int num = 0;
#line 6411 "reload.c"
if (goal == 0){
regno = goalreg; }else{
if ((((enum rtx_code )((goal)->code))) == REG){
regno = ((((goal)->u).fld[0]).rtuint); }else{
if ((((enum rtx_code )((goal)->code))) == MEM){
{ 
#line 6417 "reload.c"

#line 6417 "reload.c"
enum rtx_code code = (((enum rtx_code )((((((goal)->u).fld[0]).rtx))->code)));
#line 6418 "reload.c"
if (((((goal))->volatil))){
return 0; }
#line 6420 "reload.c"
if (flag_float_store && mode_class[(((enum machine_mode )((goal)->mode)))] == MODE_FLOAT){
return 0; }
#line 6423 "reload.c"
switch(code){ { 
#line 6431 "reload.c"
case POST_INC: case PRE_INC: case POST_DEC: case PRE_DEC: case POST_MODIFY: case PRE_MODIFY: return 0; 
#line 6432 "reload.c"
default: break; } } 
#line 6435 "reload.c"
goal_mem = 1; } }else{
if (((((enum rtx_code )((goal)->code))) == LABEL_REF || (((enum rtx_code )((goal)->code))) == SYMBOL_REF || (((enum rtx_code )((goal)->code))) == CONST_INT || (((enum rtx_code )((goal)->code))) == CONST_DOUBLE || (((enum rtx_code )((goal)->code))) == CONST || (((enum rtx_code )((goal)->code))) == HIGH || (((enum rtx_code )((goal)->code))) == CONST_VECTOR || (((enum rtx_code )((goal)->code))) == CONSTANT_P_RTX)){
goal_const = 1; }else{
if ((((enum rtx_code )((goal)->code))) == PLUS && ((((goal)->u).fld[0]).rtx) == (global_rtl[GR_STACK_POINTER]) && ((((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX)){
goal_const = need_stable_sp = 1; }else{
if ((((enum rtx_code )((goal)->code))) == PLUS && ((((goal)->u).fld[0]).rtx) == (global_rtl[GR_FRAME_POINTER]) && ((((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == LABEL_REF || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == SYMBOL_REF || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST_INT || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST_DOUBLE || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == HIGH || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONST_VECTOR || (((enum rtx_code )((((((goal)->u).fld[1]).rtx))->code))) == CONSTANT_P_RTX)){
goal_const = 1; }else{
return 0; }}}}}}
#line 6450 "reload.c"
num = 0; 
#line 6455 "reload.c"
while(1) { { 
#line 6457 "reload.c"
p = ((((p)->u).fld[1]).rtx); 
#line 6458 "reload.c"
num++; 
#line 6459 "reload.c"
if (p == 0 || (((enum rtx_code )((p)->code))) == CODE_LABEL || num > (compiler_params[((int )PARAM_MAX_RELOAD_SEARCH_INSNS)].value)){
return 0; }
#line 6463 "reload.c"
if ((((enum rtx_code )((p)->code))) == INSN && ((!(reload_reg_p != 0 && reload_reg_p != ((short *)((long )1)))) || ((((p)->u).fld[0]).rtint) < reload_first_uid)){
{ 
#line 6478 "reload.c"

#line 6478 "reload.c"
 rtx tem;
#line 6479 "reload.c"
pat = ((((rtx_class[((int )((((enum rtx_code )((p)->code)))))]) == 'i')?(((((enum rtx_code )((((((p)->u).fld[5]).rtx))->code))) == SET?((((p)->u).fld[5]).rtx):single_set_2(p, ((((p)->u).fld[5]).rtx)))):(( rtx )0))); 
#line 6482 "reload.c"
if (pat != 0 && ((regno >= 0 && true_regnum(((((pat)->u).fld[1]).rtx)) == regno && (valueno = true_regnum(valtry = ((((pat)->u).fld[0]).rtx))) >= 0) || (regno >= 0 && true_regnum(((((pat)->u).fld[0]).rtx)) == regno && (valueno = true_regnum(valtry = ((((pat)->u).fld[1]).rtx))) >= 0) || (goal_const && rtx_equal_p(((((pat)->u).fld[1]).rtx), goal) && (!reg_overlap_mentioned_for_reload_p(((((pat)->u).fld[0]).rtx), goal)) && (valueno = true_regnum(valtry = ((((pat)->u).fld[0]).rtx))) >= 0) || (goal_mem && (valueno = true_regnum(valtry = ((((pat)->u).fld[0]).rtx))) >= 0 && rtx_renumbered_equal_p(goal, ((((pat)->u).fld[1]).rtx))) || (goal_mem && (valueno = true_regnum(valtry = ((((pat)->u).fld[1]).rtx))) >= 0 && rtx_renumbered_equal_p(goal, ((((pat)->u).fld[0]).rtx))) || (goal_const && ((((p)->u).fld[8]).rtx) != 0 && (tem = find_reg_note(p, REG_EQUIV, (( rtx )0))) && ((rtx_equal_p(((((tem)->u).fld[0]).rtx), goal) && (valueno = true_regnum(valtry = ((((pat)->u).fld[0]).rtx))) >= 0) || ((((enum rtx_code )((((((pat)->u).fld[0]).rtx))->code))) == REG && (((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == CONST_DOUBLE && (mode_class[(((enum machine_mode )((((((tem)->u).fld[0]).rtx))->mode)))] == MODE_FLOAT) && (((enum rtx_code )((goal)->code))) == CONST_INT && 0 != (goaltry = operand_subword(((((tem)->u).fld[0]).rtx), 0, 0, VOIDmode)) && rtx_equal_p(goal, goaltry) && (valtry = operand_subword(((((pat)->u).fld[0]).rtx), 0, 0, VOIDmode)) && (valueno = true_regnum(valtry)) >= 0))) || (goal_const && (tem = find_reg_note(p, REG_EQUIV, (( rtx )0))) && (((enum rtx_code )((((((pat)->u).fld[0]).rtx))->code))) == REG && (((enum rtx_code )((((((tem)->u).fld[0]).rtx))->code))) == CONST_DOUBLE && (mode_class[(((enum machine_mode )((((((tem)->u).fld[0]).rtx))->mode)))] == MODE_FLOAT) && (((enum rtx_code )((goal)->code))) == CONST_INT && 0 != (goaltry = operand_subword(((((tem)->u).fld[0]).rtx), 1, 0, VOIDmode)) && rtx_equal_p(goal, goaltry) && (valtry = operand_subword(((((pat)->u).fld[0]).rtx), 1, 0, VOIDmode)) && (valueno = true_regnum(valtry)) >= 0))){
{ 
#line 6554 "reload.c"
if (other >= 0){
{ 
#line 6541 "reload.c"
if (valueno != other){
continue; }} }else{
if (((unsigned )valueno) >= 53){
continue; }else{
{ 
#line 6546 "reload.c"

#line 6546 "reload.c"
int i;
#line 6548 "reload.c"
for(i = ((((valueno) >= 8 && (valueno) <= (8 + 7)) || (((valueno) >= (20 + 1) && (valueno) <= ((20 + 1) + 7)) || ((valueno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (valueno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((valueno) >= (((20 + 1) + 7) + 1) && (valueno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4)))))))) - 1;i >= 0;i--) { if ((!((!(!((reg_class_contents[((int )class)])[(valueno + i) / (((unsigned )(8 * 4)))] & (((( HARD_REG_ELT_TYPE )(1))) << ((valueno + i) % (((unsigned )(8 * 4))))))))))){
break; }} 
#line 6552 "reload.c"
if (i >= 0){
continue; }} }}
#line 6555 "reload.c"
value = valtry; 
#line 6556 "reload.c"
where = p; 
#line 6557 "reload.c"
break; } }} }} } 
# 6476 "reload.c" 
# 6570 "reload.c" 
if (((((where)->u).fld[8]).rtx) != 0 && find_reg_note(where, REG_UNUSED, value)){
return 0; }
#line 6575 "reload.c"
if (valueno == 7 || regno == 7 || (goal_mem && reg_overlap_mentioned_for_reload_p((global_rtl[GR_STACK_POINTER]), goal))){
need_stable_sp = 1; }
#line 6581 "reload.c"
if ((((enum machine_mode )((value)->mode))) != mode){
return 0; }
#line 6587 "reload.c"
if (goal_mem && value == ((((((((rtx_class[((int )((((enum rtx_code )((where)->code)))))]) == 'i')?(((((enum rtx_code )((((((where)->u).fld[5]).rtx))->code))) == SET?((((where)->u).fld[5]).rtx):single_set_2(where, ((((where)->u).fld[5]).rtx)))):(( rtx )0))))->u).fld[0]).rtx) && refers_to_regno_for_reload_p(valueno, (valueno + ((((valueno) >= 8 && (valueno) <= (8 + 7)) || (((valueno) >= (20 + 1) && (valueno) <= ((20 + 1) + 7)) || ((valueno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (valueno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((valueno) >= (((20 + 1) + 7) + 1) && (valueno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4))))))))), goal, (( rtx *)0))){
return 0; }
#line 6596 "reload.c"
if ((!goal_mem) && (!goal_const) && regno + ((int )((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4))))))))) > valueno && regno < valueno + ((int )((((valueno) >= 8 && (valueno) <= (8 + 7)) || (((valueno) >= (20 + 1) && (valueno) <= ((20 + 1) + 7)) || ((valueno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (valueno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((valueno) >= (((20 + 1) + 7) + 1) && (valueno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4)))))))))){
return 0; }
#line 6601 "reload.c"
nregs = ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4)))))))); 
#line 6602 "reload.c"
valuenregs = ((((valueno) >= 8 && (valueno) <= (8 + 7)) || (((valueno) >= (20 + 1) && (valueno) <= ((20 + 1) + 7)) || ((valueno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (valueno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((valueno) >= (((20 + 1) + 7) + 1) && (valueno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4)))))))); 
#line 6610 "reload.c"
if (reload_reg_p != 0 && reload_reg_p != ((short *)((long )1))){
{ 
#line 6612 "reload.c"

#line 6612 "reload.c"
int i;
#line 6613 "reload.c"
for(i = 0;i < valuenregs;(++i)) { if (reload_reg_p[valueno + i] >= 0){
return 0; }} } }
#line 6621 "reload.c"
if (reload_reg_p != 0){
{ 
#line 6623 "reload.c"

#line 6623 "reload.c"
int i;
#line 6624 "reload.c"
for(i = 0;i < n_reloads;i++) { if (rld[i].reg_rtx != 0 && rld[i].in){
{ 
#line 6627 "reload.c"

#line 6627 "reload.c"
int regno1 = ((((rld[i].reg_rtx)->u).fld[0]).rtuint);
#line 6628 "reload.c"

#line 6628 "reload.c"
int nregs1 = ((((regno1) >= 8 && (regno1) <= (8 + 7)) || (((regno1) >= (20 + 1) && (regno1) <= ((20 + 1) + 7)) || ((regno1) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno1) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno1) >= (((20 + 1) + 7) + 1) && (regno1) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((rld[i].reg_rtx)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((rld[i].reg_rtx)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((rld[i].reg_rtx)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((rld[i].reg_rtx)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((rld[i].reg_rtx)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4))))))));
#line 6630 "reload.c"
if (regno1 < valueno + valuenregs && regno1 + nregs1 > valueno){
return 0; }} }} } }
#line 6636 "reload.c"
if (goal_mem){
goal_mem_addr_varies = (!constant_address_p(((((goal)->u).fld[0]).rtx))); }
#line 6644 "reload.c"
p = insn; 
#line 6645 "reload.c"
while(1) { { 
#line 6647 "reload.c"
p = ((((p)->u).fld[1]).rtx); 
#line 6648 "reload.c"
if (p == where){
return value; }
#line 6653 "reload.c"
if ((((enum rtx_code )((p)->code))) == CALL_INSN){
{ 
#line 6655 "reload.c"

#line 6655 "reload.c"
int i;
#line 6657 "reload.c"
if (goal_mem || need_stable_sp){
return 0; }
#line 6660 "reload.c"
if (regno >= 0 && regno < 53){
for(i = 0;i < nregs;(++i)) { if (call_used_regs[regno + i]){
return 0; }} }
#line 6665 "reload.c"
if (valueno >= 0 && valueno < 53){
for(i = 0;i < valuenregs;(++i)) { if (call_used_regs[valueno + i]){
return 0; }} }} }
#line 6675 "reload.c"
if (((rtx_class[((int )((((enum rtx_code )((p)->code)))))]) == 'i')){
{ 
#line 6677 "reload.c"
pat = ((((p)->u).fld[5]).rtx); 
#line 6680 "reload.c"
if (volatile_insn_p(pat)){
return 0; }
#line 6688 "reload.c"
if ((((enum rtx_code )((pat)->code))) == COND_EXEC){
pat = ((((pat)->u).fld[1]).rtx); }
#line 6690 "reload.c"
if ((((enum rtx_code )((pat)->code))) == SET || (((enum rtx_code )((pat)->code))) == CLOBBER){
{ 
#line 6692 "reload.c"

#line 6692 "reload.c"
 rtx dest = ((((pat)->u).fld[0]).rtx);
#line 6693 "reload.c"
while((((enum rtx_code )((dest)->code))) == SUBREG || (((enum rtx_code )((dest)->code))) == ZERO_EXTRACT || (((enum rtx_code )((dest)->code))) == SIGN_EXTRACT || (((enum rtx_code )((dest)->code))) == STRICT_LOW_PART) { dest = ((((dest)->u).fld[0]).rtx); } 
#line 6698 "reload.c"
if ((((enum rtx_code )((dest)->code))) == REG){
{ 
#line 6700 "reload.c"

#line 6700 "reload.c"
int xregno = ((((dest)->u).fld[0]).rtuint);
#line 6701 "reload.c"

#line 6701 "reload.c"
int xnregs;
#line 6702 "reload.c"
if (((((dest)->u).fld[0]).rtuint) < 53){
xnregs = ((((xregno) >= 8 && (xregno) <= (8 + 7)) || (((xregno) >= (20 + 1) && (xregno) <= ((20 + 1) + 7)) || ((xregno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (xregno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((xregno) >= (((20 + 1) + 7) + 1) && (xregno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((dest)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((dest)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((dest)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((dest)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((dest)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))); }else{
xnregs = 1; }
#line 6706 "reload.c"
if (xregno < regno + nregs && xregno + xnregs > regno){
return 0; }
#line 6708 "reload.c"
if (xregno < valueno + valuenregs && xregno + xnregs > valueno){
return 0; }
#line 6711 "reload.c"
if (goal_mem_addr_varies && reg_overlap_mentioned_for_reload_p(dest, goal)){
return 0; }
#line 6714 "reload.c"
if (xregno == 7 && need_stable_sp){
return 0; }} }else{
if (goal_mem && (((enum rtx_code )((dest)->code))) == MEM && (!push_operand(dest, (((enum machine_mode )((dest)->mode)))))){
return 0; }else{
if ((((enum rtx_code )((dest)->code))) == MEM && regno >= 53 && reg_equiv_memory_loc[regno] != 0){
return 0; }else{
if (need_stable_sp && push_operand(dest, (((enum machine_mode )((dest)->mode))))){
return 0; }}}}} }else{
if ((((enum rtx_code )((pat)->code))) == PARALLEL){
{ 
#line 6728 "reload.c"

#line 6728 "reload.c"
int i;
#line 6729 "reload.c"
for(i = (((((((pat)->u).fld[0]).rtvec))->num_elem)) - 1;i >= 0;i--) { { 
#line 6731 "reload.c"

#line 6731 "reload.c"
 rtx v1 = (((((((pat)->u).fld[0]).rtvec))->elem)[i]);
#line 6732 "reload.c"
if ((((enum rtx_code )((v1)->code))) == COND_EXEC){
v1 = ((((v1)->u).fld[1]).rtx); }
#line 6734 "reload.c"
if ((((enum rtx_code )((v1)->code))) == SET || (((enum rtx_code )((v1)->code))) == CLOBBER){
{ 
#line 6736 "reload.c"

#line 6736 "reload.c"
 rtx dest = ((((v1)->u).fld[0]).rtx);
#line 6737 "reload.c"
while((((enum rtx_code )((dest)->code))) == SUBREG || (((enum rtx_code )((dest)->code))) == ZERO_EXTRACT || (((enum rtx_code )((dest)->code))) == SIGN_EXTRACT || (((enum rtx_code )((dest)->code))) == STRICT_LOW_PART) { dest = ((((dest)->u).fld[0]).rtx); } 
#line 6742 "reload.c"
if ((((enum rtx_code )((dest)->code))) == REG){
{ 
#line 6744 "reload.c"

#line 6744 "reload.c"
int xregno = ((((dest)->u).fld[0]).rtuint);
#line 6745 "reload.c"

#line 6745 "reload.c"
int xnregs;
#line 6746 "reload.c"
if (((((dest)->u).fld[0]).rtuint) < 53){
xnregs = ((((xregno) >= 8 && (xregno) <= (8 + 7)) || (((xregno) >= (20 + 1) && (xregno) <= ((20 + 1) + 7)) || ((xregno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (xregno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((xregno) >= (((20 + 1) + 7) + 1) && (xregno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((dest)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((dest)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((dest)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((dest)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((dest)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))); }else{
xnregs = 1; }
#line 6750 "reload.c"
if (xregno < regno + nregs && xregno + xnregs > regno){
return 0; }
#line 6753 "reload.c"
if (xregno < valueno + valuenregs && xregno + xnregs > valueno){
return 0; }
#line 6756 "reload.c"
if (goal_mem_addr_varies && reg_overlap_mentioned_for_reload_p(dest, goal)){
return 0; }
#line 6760 "reload.c"
if (xregno == 7 && need_stable_sp){
return 0; }} }else{
if (goal_mem && (((enum rtx_code )((dest)->code))) == MEM && (!push_operand(dest, (((enum machine_mode )((dest)->mode)))))){
return 0; }else{
if ((((enum rtx_code )((dest)->code))) == MEM && regno >= 53 && reg_equiv_memory_loc[regno] != 0){
return 0; }else{
if (need_stable_sp && push_operand(dest, (((enum machine_mode )((dest)->mode))))){
return 0; }}}}} }} } } }}
#line 6776 "reload.c"
if ((((enum rtx_code )((p)->code))) == CALL_INSN && ((((p)->u).fld[9]).rtx)){
{ 
#line 6778 "reload.c"

#line 6778 "reload.c"
 rtx link;
#line 6780 "reload.c"
for(link = ((((p)->u).fld[9]).rtx);((((link)->u).fld[1]).rtx) != 0;link = ((((link)->u).fld[1]).rtx)) { { 
#line 6783 "reload.c"
pat = ((((link)->u).fld[0]).rtx); 
#line 6784 "reload.c"
if ((((enum rtx_code )((pat)->code))) == CLOBBER){
{ 
#line 6786 "reload.c"

#line 6786 "reload.c"
 rtx dest = ((((pat)->u).fld[0]).rtx);
#line 6788 "reload.c"
if ((((enum rtx_code )((dest)->code))) == REG){
{ 
#line 6790 "reload.c"

#line 6790 "reload.c"
int xregno = ((((dest)->u).fld[0]).rtuint);
#line 6791 "reload.c"

#line 6792 "reload.c"
int xnregs = ((((xregno) >= 8 && (xregno) <= (8 + 7)) || (((xregno) >= (20 + 1) && (xregno) <= ((20 + 1) + 7)) || ((xregno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (xregno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((xregno) >= (((20 + 1) + 7) + 1) && (xregno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((dest)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((dest)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((dest)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((dest)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((dest)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4))))))));
#line 6794 "reload.c"
if (xregno < regno + nregs && xregno + xnregs > regno){
return 0; }else{
if (xregno < valueno + valuenregs && xregno + xnregs > valueno){
return 0; }else{
if (goal_mem_addr_varies && reg_overlap_mentioned_for_reload_p(dest, goal)){
return 0; }}}} }else{
if (goal_mem && (((enum rtx_code )((dest)->code))) == MEM && (!push_operand(dest, (((enum machine_mode )((dest)->mode)))))){
return 0; }else{
if (need_stable_sp && push_operand(dest, (((enum machine_mode )((dest)->mode))))){
return 0; }}}} }} } } }} }} } }
 
#line 6850 "reload.c"
static int find_inc_amount( rtx x,  rtx inced)  {

#line 6851 "reload.c"

#line 6851 "reload.c"
enum rtx_code code = (((enum rtx_code )((x)->code)));
#line 6852 "reload.c"

#line 6852 "reload.c"
const char *fmt;
#line 6853 "reload.c"

#line 6853 "reload.c"
int i;
#line 6855 "reload.c"
if (code == MEM){
{ 
#line 6857 "reload.c"

#line 6857 "reload.c"
 rtx addr = ((((x)->u).fld[0]).rtx);
#line 6858 "reload.c"
if (((((enum rtx_code )((addr)->code))) == PRE_DEC || (((enum rtx_code )((addr)->code))) == POST_DEC || (((enum rtx_code )((addr)->code))) == PRE_INC || (((enum rtx_code )((addr)->code))) == POST_INC) && ((((addr)->u).fld[0]).rtx) == inced){
return (((unsigned short )mode_size[(((enum machine_mode )((x)->mode)))])); }else{
if (((((enum rtx_code )((addr)->code))) == PRE_MODIFY || (((enum rtx_code )((addr)->code))) == POST_MODIFY) && (((enum rtx_code )((((((addr)->u).fld[1]).rtx))->code))) == PLUS && ((((addr)->u).fld[0]).rtx) == ((((((((addr)->u).fld[1]).rtx))->u).fld[0]).rtx) && ((((addr)->u).fld[0]).rtx) == inced && (((enum rtx_code )((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->code))) == CONST_INT){
{ 
#line 6871 "reload.c"
i = (((((((((((addr)->u).fld[1]).rtx))->u).fld[1]).rtx))->u).hwint[0]); 
#line 6872 "reload.c"
return (i < 0?(-i):i); } }}} }
#line 6876 "reload.c"
fmt = (rtx_format[((int )(code))]); 
#line 6877 "reload.c"
for(i = (rtx_length[((int )(code))]) - 1;i >= 0;i--) { { 
#line 6885 "reload.c"
if (fmt[i] == 'e'){
{ 
#line 6881 "reload.c"

#line 6881 "reload.c"
int tem = find_inc_amount(((((x)->u).fld[i]).rtx), inced);
#line 6882 "reload.c"
if (tem != 0){
return tem; }} }
#line 6885 "reload.c"
if (fmt[i] == 'E'){
{ 
#line 6887 "reload.c"

#line 6887 "reload.c"
int j;
#line 6888 "reload.c"
for(j = (((((((x)->u).fld[i]).rtvec))->num_elem)) - 1;j >= 0;j--) { { 
#line 6890 "reload.c"

#line 6890 "reload.c"
int tem = find_inc_amount((((((((x)->u).fld[i]).rtvec))->elem)[j]), inced);
#line 6891 "reload.c"
if (tem != 0){
return tem; }} } } }} } 
#line 6897 "reload.c"
return 0; }
 
#line 6906 "reload.c"
int regno_clobbered_p(unsigned int regno,  rtx insn, enum machine_mode mode, int sets)  {

#line 6907 "reload.c"

#line 6907 "reload.c"
unsigned int nregs = ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4))))))));
#line 6908 "reload.c"

#line 6908 "reload.c"
unsigned int endregno = regno + nregs;
#line 6910 "reload.c"
if (((((enum rtx_code )((((((insn)->u).fld[5]).rtx))->code))) == CLOBBER || (sets && (((enum rtx_code )((((((insn)->u).fld[5]).rtx))->code))) == SET)) && (((enum rtx_code )((((((((((insn)->u).fld[5]).rtx))->u).fld[0]).rtx))->code))) == REG){
{ 
#line 6914 "reload.c"

#line 6914 "reload.c"
unsigned int test = ((((((((((((insn)->u).fld[5]).rtx))->u).fld[0]).rtx))->u).fld[0]).rtuint);
#line 6916 "reload.c"
return test >= regno && test < endregno; } }
#line 6919 "reload.c"
if ((((enum rtx_code )((((((insn)->u).fld[5]).rtx))->code))) == PARALLEL){
{ 
#line 6921 "reload.c"

#line 6921 "reload.c"
int i = (((((((((((insn)->u).fld[5]).rtx))->u).fld[0]).rtvec))->num_elem)) - 1;
#line 6923 "reload.c"
for(;i >= 0;i--) { { 
#line 6925 "reload.c"

#line 6925 "reload.c"
 rtx elt = (((((((((((insn)->u).fld[5]).rtx))->u).fld[0]).rtvec))->elem)[i]);
#line 6926 "reload.c"
if (((((enum rtx_code )((elt)->code))) == CLOBBER || (sets && (((enum rtx_code )((((((insn)->u).fld[5]).rtx))->code))) == SET)) && (((enum rtx_code )((((((elt)->u).fld[0]).rtx))->code))) == REG){
{ 
#line 6930 "reload.c"

#line 6930 "reload.c"
unsigned int test = ((((((((elt)->u).fld[0]).rtx))->u).fld[0]).rtuint);
#line 6932 "reload.c"
if (test >= regno && test < endregno){
return 1; }} }} } } }
#line 6938 "reload.c"
return 0; }
 
#line 6943 "reload.c"
 rtx reload_adjust_reg_for_mode( rtx reloadreg, enum machine_mode mode)  {

#line 6944 "reload.c"

#line 6944 "reload.c"
int regno;
#line 6946 "reload.c"
if ((((enum machine_mode )((reloadreg)->mode))) == mode){
return reloadreg; }
#line 6949 "reload.c"
regno = ((((reloadreg)->u).fld[0]).rtuint); 
#line 6951 "reload.c"
if (0){
regno += ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[(((enum machine_mode )((reloadreg)->mode)))] == MODE_COMPLEX_INT || mode_class[(((enum machine_mode )((reloadreg)->mode)))] == MODE_COMPLEX_FLOAT)?2:1)):((((((enum machine_mode )((reloadreg)->mode)))) == XFmode?((0?2:3)):(((((enum machine_mode )((reloadreg)->mode)))) == XCmode?((0?4:6)):(((((unsigned short )mode_size[(((enum machine_mode )((reloadreg)->mode)))])) + ((0?8:4)) - 1) / ((0?8:4)))))))) - ((((regno) >= 8 && (regno) <= (8 + 7)) || (((regno) >= (20 + 1) && (regno) <= ((20 + 1) + 7)) || ((regno) >= (((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) && (regno) <= ((((((((20 + 1) + 7) + 1) + 7) + 1) + 7) + 1) + 7))) || ((regno) >= (((20 + 1) + 7) + 1) && (regno) <= ((((20 + 1) + 7) + 1) + 7))?(((mode_class[mode] == MODE_COMPLEX_INT || mode_class[mode] == MODE_COMPLEX_FLOAT)?2:1)):(((mode) == XFmode?((0?2:3)):((mode) == XCmode?((0?4:6)):(((((unsigned short )mode_size[mode])) + ((0?8:4)) - 1) / ((0?8:4)))))))); }
#line 6955 "reload.c"
return gen_rtx_REG(mode, regno); }
 
#line 6971 "reload.c"
static const char *const reload_when_needed_name[] = {"RELOAD_FOR_INPUT","RELOAD_FOR_OUTPUT","RELOAD_FOR_INSN","RELOAD_FOR_INPUT_ADDRESS","RELOAD_FOR_INPADDR_ADDRESS","RELOAD_FOR_OUTPUT_ADDRESS","RELOAD_FOR_OUTADDR_ADDRESS","RELOAD_FOR_OPERAND_ADDRESS","RELOAD_FOR_OPADDR_ADDR","RELOAD_OTHER","RELOAD_FOR_OTHER_ADDRESS"}; 
#line 6973 "reload.c"
static const char *const reg_class_names[] = {"NO_REGS","AREG","DREG","CREG","BREG","SIREG","DIREG","AD_REGS","Q_REGS","NON_Q_REGS","INDEX_REGS","LEGACY_REGS","GENERAL_REGS","FP_TOP_REG","FP_SECOND_REG","FLOAT_REGS","SSE_REGS","MMX_REGS","FP_TOP_SSE_REGS","FP_SECOND_SSE_REGS","FLOAT_SSE_REGS","FLOAT_INT_REGS","INT_SSE_REGS","FLOAT_INT_SSE_REGS","ALL_REGS"}; 
#line 6979 "reload.c"
void debug_reload_to_stream( FILE *f)  {

#line 6980 "reload.c"

#line 6980 "reload.c"
int r;
#line 6981 "reload.c"

#line 6981 "reload.c"
const char *prefix;
#line 6983 "reload.c"
if ((!f)){
f = stderr; }
#line 6985 "reload.c"
for(r = 0;r < n_reloads;r++) { { 
#line 6987 "reload.c"
fprintf(f, "Reload %d: ", r); 
#line 6989 "reload.c"
if (rld[r].in != 0){
{ 
#line 6992 "reload.c"
fprintf(f, "reload_in (%s) = ", mode_name[rld[r].inmode]); 
#line 6993 "reload.c"
print_inline_rtx(f, rld[r].in, 24); 
#line 6994 "reload.c"
fprintf(f, "\n\t"); } }
#line 6997 "reload.c"
if (rld[r].out != 0){
{ 
#line 7000 "reload.c"
fprintf(f, "reload_out (%s) = ", mode_name[rld[r].outmode]); 
#line 7001 "reload.c"
print_inline_rtx(f, rld[r].out, 24); 
#line 7002 "reload.c"
fprintf(f, "\n\t"); } }
#line 7005 "reload.c"
fprintf(f, "%s, ", reg_class_names[((int )rld[r].class)]); 
#line 7007 "reload.c"
fprintf(f, "%s (opnum = %d)", reload_when_needed_name[((int )rld[r].when_needed)], rld[r].opnum); 
#line 7011 "reload.c"
if (rld[r].optional){
fprintf(f, ", optional"); }
#line 7014 "reload.c"
if (rld[r].nongroup){
fprintf(f, ", nongroup"); }
#line 7017 "reload.c"
if (rld[r].inc != 0){
fprintf(f, ", inc by %d", rld[r].inc); }
#line 7020 "reload.c"
if (rld[r].nocombine){
fprintf(f, ", can't combine"); }
#line 7023 "reload.c"
if (rld[r].secondary_p){
fprintf(f, ", secondary_reload_p"); }
#line 7026 "reload.c"
if (rld[r].in_reg != 0){
{ 
#line 7028 "reload.c"
fprintf(f, "\n\treload_in_reg: "); 
#line 7029 "reload.c"
print_inline_rtx(f, rld[r].in_reg, 24); } }
#line 7032 "reload.c"
if (rld[r].out_reg != 0){
{ 
#line 7034 "reload.c"
fprintf(f, "\n\treload_out_reg: "); 
#line 7035 "reload.c"
print_inline_rtx(f, rld[r].out_reg, 24); } }
#line 7038 "reload.c"
if (rld[r].reg_rtx != 0){
{ 
#line 7040 "reload.c"
fprintf(f, "\n\treload_reg_rtx: "); 
#line 7041 "reload.c"
print_inline_rtx(f, rld[r].reg_rtx, 24); } }
#line 7044 "reload.c"
prefix = "\n\t"; 
#line 7045 "reload.c"
if (rld[r].secondary_in_reload != (-1)){
{ 
#line 7048 "reload.c"
fprintf(f, "%ssecondary_in_reload = %d", prefix, rld[r].secondary_in_reload); 
#line 7049 "reload.c"
prefix = ", "; } }
#line 7052 "reload.c"
if (rld[r].secondary_out_reload != (-1)){
fprintf(f, "%ssecondary_out_reload = %d\n", prefix, rld[r].secondary_out_reload); }
#line 7056 "reload.c"
prefix = "\n\t"; 
#line 7057 "reload.c"
if (rld[r].secondary_in_icode != CODE_FOR_nothing){
{ 
#line 7060 "reload.c"
fprintf(f, "%ssecondary_in_icode = %s", prefix, insn_data[rld[r].secondary_in_icode].name); 
#line 7061 "reload.c"
prefix = ", "; } }
#line 7064 "reload.c"
if (rld[r].secondary_out_icode != CODE_FOR_nothing){
fprintf(f, "%ssecondary_out_icode = %s", prefix, insn_data[rld[r].secondary_out_icode].name); }
#line 7068 "reload.c"
fprintf(f, "\n"); } } }
 
#line 7074 "reload.c"
void debug_reload(void )  {

#line 7075 "reload.c"
debug_reload_to_stream(stderr); }
 
