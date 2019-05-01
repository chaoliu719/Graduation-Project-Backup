
# 1 "rb.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "rb.c" 
# 26 "rb.c" 
# 1 "/usr/include/assert.h" 1 3 4
# 9 "/usr/include/assert.h" 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 15 "/usr/include/_ansi.h" 3 4
# 1 "/usr/include/newlib.h" 1 3 4
# 16 "/usr/include/_ansi.h" 2 3 4
# 1 "/usr/include/sys/config.h" 1 3 4
# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 5 "/usr/include/sys/config.h" 2 3 4
# 167 "/usr/include/sys/config.h" 3 4
# 1 "/usr/include/cygwin/config.h" 1 3 4
# 168 "/usr/include/sys/config.h" 2 3 4
# 17 "/usr/include/_ansi.h" 2 3 4
# 10 "/usr/include/assert.h" 2 3 4
# 25 "/usr/include/assert.h" 3 4
void  __attribute__  (( __cdecl__ )) __assert(const char *, int , const char *); 
# 27 "rb.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 34 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 213 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3 4
typedef unsigned int size_t; 
# 35 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h" 1 3 4
# 44 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
# 38 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/reent.h" 1 3 4
# 13 "/usr/include/sys/reent.h" 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 14 "/usr/include/sys/reent.h" 2 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 12 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/lock.h" 1 3 4
# 14 "/usr/include/sys/lock.h" 3 4
typedef void *_LOCK_T; 
#line 44 "/usr/include/sys/lock.h"
void __cygwin_lock_init( _LOCK_T *); 
#line 45 "/usr/include/sys/lock.h"
void __cygwin_lock_init_recursive( _LOCK_T *); 
#line 46 "/usr/include/sys/lock.h"
void __cygwin_lock_fini( _LOCK_T *); 
#line 47 "/usr/include/sys/lock.h"
void __cygwin_lock_lock( _LOCK_T *); 
#line 48 "/usr/include/sys/lock.h"
int __cygwin_lock_trylock( _LOCK_T *); 
#line 49 "/usr/include/sys/lock.h"
void __cygwin_lock_unlock( _LOCK_T *); 
# 44 "/usr/include/sys/lock.h" 3 4
# 14 "/usr/include/sys/_types.h" 2 3 4
typedef long _off_t; 
#line 15 "/usr/include/sys/_types.h"
 __extension__ typedef long long _off64_t; 
#line 18 "/usr/include/sys/_types.h"
typedef int _ssize_t; 
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 354 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3 4
typedef unsigned int wint_t; 
#line 35 "/usr/include/sys/_types.h"
typedef struct {int __count; union { wint_t __wch; unsigned char __wchb[4]; }__value; }_mbstate_t; 
#line 37 "/usr/include/sys/_types.h"
typedef  _LOCK_T _flock_t; 
#line 40 "/usr/include/sys/_types.h"
typedef void *_iconv_t; 
# 25 "/usr/include/sys/_types.h" 2 3 4
# 19 "/usr/include/sys/reent.h" 2 3 4
typedef unsigned long __ULong; 
#line 45 "/usr/include/sys/reent.h"
struct _Bigint {struct _Bigint *_next; int _k,_maxwds,_sign,_wds;  __ULong _x[1]; }; 
#line 59 "/usr/include/sys/reent.h"
struct __tm {int __tm_sec; int __tm_min; int __tm_hour; int __tm_mday; int __tm_mon; int __tm_year; int __tm_wday; int __tm_yday; int __tm_isdst; }; 
#line 75 "/usr/include/sys/reent.h"
struct _on_exit_args {void *_fnargs[32]; void *_dso_handle[32];  __ULong _fntypes;  __ULong _is_cxa; }; 
# 40 "/usr/include/sys/reent.h" 3 4
# 91 "/usr/include/sys/reent.h" 3 4
struct _atexit {struct _atexit *_next; int _ind; void (*_fns[32])(void ); struct _on_exit_args _on_exit_args; }; 
#line 104 "/usr/include/sys/reent.h"
struct __sbuf {unsigned char *_base; int _size; }; 
#line 111 "/usr/include/sys/reent.h"
typedef long _fpos_t; 
#line 115 "/usr/include/sys/reent.h"
typedef  _off64_t _fpos64_t; 
# 101 "/usr/include/sys/reent.h" 3 4
# 211 "/usr/include/sys/reent.h" 3 4
struct __sFILE {unsigned char *_p; int _r; int _w; short _flags; short _file; struct __sbuf _bf; int _lbfsize; void *_cookie;  _ssize_t  __attribute__  (( __cdecl__ )) (*_read)(void *_cookie, char *_buf, int _n);  _ssize_t  __attribute__  (( __cdecl__ )) (*_write)(void *_cookie, const char *_buf, int _n);  _fpos_t  __attribute__  (( __cdecl__ )) (*_seek)(void *_cookie,  _fpos_t _offset, int _whence); int  __attribute__  (( __cdecl__ )) (*_close)(void *_cookie); struct __sbuf _ub; unsigned char *_up; int _ur; unsigned char _ubuf[3]; unsigned char _nbuf[1]; struct __sbuf _lb; int _blksize; int _offset; struct _reent *_data;  _flock_t _lock; }; 
#line 256 "/usr/include/sys/reent.h"
struct __sFILE64 {unsigned char *_p; int _r; int _w; short _flags; short _file; struct __sbuf _bf; int _lbfsize; struct _reent *_data; void *_cookie;  _ssize_t  __attribute__  (( __cdecl__ )) (*_read)(void *_cookie, char *_buf, int _n);  _ssize_t  __attribute__  (( __cdecl__ )) (*_write)(void *_cookie, const char *_buf, int _n);  _fpos_t  __attribute__  (( __cdecl__ )) (*_seek)(void *_cookie,  _fpos_t _offset, int _whence); int  __attribute__  (( __cdecl__ )) (*_close)(void *_cookie); struct __sbuf _ub; unsigned char *_up; int _ur; unsigned char _ubuf[3]; unsigned char _nbuf[1]; struct __sbuf _lb; int _blksize; int _flags2;  _off64_t _offset;  _fpos64_t  __attribute__  (( __cdecl__ )) (*_seek64)(void *_cookie,  _fpos64_t _offset, int _whence);  _flock_t _lock; }; 
#line 257 "/usr/include/sys/reent.h"
typedef struct __sFILE64 __FILE; 
#line 267 "/usr/include/sys/reent.h"
struct _glue {struct _glue *_next; int _niobs;  __FILE *_iobs; }; 
#line 298 "/usr/include/sys/reent.h"
struct _rand48 {unsigned short _seed[3]; unsigned short _mult[3]; unsigned short _add; }; 
# 290 "/usr/include/sys/reent.h" 3 4
# 640 "/usr/include/sys/reent.h" 3 4
struct _reent {int _errno;  __FILE *_stdin,*_stdout,*_stderr; int _inc; char _emergency[25]; int _current_category; const char *_current_locale; int __sdidinit; void  __attribute__  (( __cdecl__ )) (*__cleanup)(struct _reent *); struct _Bigint *_result; int _result_k; struct _Bigint *_p5s; struct _Bigint **_freelist; int _cvtlen; char *_cvtbuf; union {struct {unsigned int _unused_rand; char *_strtok_last; char _asctime_buf[26]; struct __tm _localtime_buf; int _gamma_signgam;  __extension__ unsigned long long _rand_next; struct _rand48 _r48;  _mbstate_t _mblen_state;  _mbstate_t _mbtowc_state;  _mbstate_t _wctomb_state; char _l64a_buf[8]; char _signal_buf[24]; int _getdate_err;  _mbstate_t _mbrlen_state;  _mbstate_t _mbrtowc_state;  _mbstate_t _mbsrtowcs_state;  _mbstate_t _wcrtomb_state;  _mbstate_t _wcsrtombs_state; }_reent; struct {unsigned char *_nextf[30]; unsigned int _nmalloc[30]; }_unused; }_new; struct _atexit *_atexit; struct _atexit _atexit0; void (**(_sig_func))(int ); struct _glue __sglue;  __FILE __sf[3]; }; 
#line 799 "/usr/include/sys/reent.h"
extern struct _reent *_impure_ptr; 
#line 800 "/usr/include/sys/reent.h"
extern struct _reent *const _global_impure_ptr; 
#line 802 "/usr/include/sys/reent.h"
void _reclaim_reent(struct _reent *); 
#line 810 "/usr/include/sys/reent.h"
struct _reent * __attribute__  (( __cdecl__ )) __getreent(void ); 
# 799 "/usr/include/sys/reent.h" 3 4
# 46 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 25 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 26 "/usr/include/machine/_types.h" 3 4
typedef signed char __int8_t; 
#line 27 "/usr/include/machine/_types.h"
typedef unsigned char __uint8_t; 
#line 36 "/usr/include/machine/_types.h"
typedef signed short __int16_t; 
#line 37 "/usr/include/machine/_types.h"
typedef unsigned short __uint16_t; 
# 36 "/usr/include/machine/_types.h" 3 4
# 46 "/usr/include/machine/_types.h" 3 4
typedef  __int16_t __int_least16_t; 
#line 47 "/usr/include/machine/_types.h"
typedef  __uint16_t __uint_least16_t; 
#line 58 "/usr/include/machine/_types.h"
typedef signed int __int32_t; 
#line 59 "/usr/include/machine/_types.h"
typedef unsigned int __uint32_t; 
# 58 "/usr/include/machine/_types.h" 3 4
# 76 "/usr/include/machine/_types.h" 3 4
typedef  __int32_t __int_least32_t; 
#line 77 "/usr/include/machine/_types.h"
typedef  __uint32_t __uint_least32_t; 
#line 99 "/usr/include/machine/_types.h"
typedef signed long long __int64_t; 
#line 100 "/usr/include/machine/_types.h"
typedef unsigned long long __uint64_t; 
# 99 "/usr/include/machine/_types.h" 3 4
# 26 "/usr/include/sys/types.h" 2 3 4
# 69 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 151 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 325 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h"
typedef short unsigned int wchar_t; 
# 325 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3 4
# 70 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 19 "/usr/include/machine/types.h" 3 4
typedef long int __off_t; 
#line 20 "/usr/include/machine/types.h"
typedef int __pid_t; 
#line 22 "/usr/include/machine/types.h"
 __extension__ typedef long long int __loff_t; 
# 71 "/usr/include/sys/types.h" 2 3 4
# 92 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char; 
#line 93 "/usr/include/sys/types.h"
typedef unsigned short u_short; 
#line 94 "/usr/include/sys/types.h"
typedef unsigned int u_int; 
#line 95 "/usr/include/sys/types.h"
typedef unsigned long u_long; 
#line 99 "/usr/include/sys/types.h"
typedef unsigned short ushort; 
#line 100 "/usr/include/sys/types.h"
typedef unsigned int uint; 
#line 104 "/usr/include/sys/types.h"
typedef unsigned long clock_t; 
#line 109 "/usr/include/sys/types.h"
typedef long time_t; 
#line 117 "/usr/include/sys/types.h"
struct timespec { time_t tv_sec; long tv_nsec; }; 
#line 122 "/usr/include/sys/types.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; }; 
#line 125 "/usr/include/sys/types.h"
typedef long daddr_t; 
#line 126 "/usr/include/sys/types.h"
typedef char *caddr_t; 
#line 180 "/usr/include/sys/types.h"
typedef int pid_t; 
#line 184 "/usr/include/sys/types.h"
typedef  _ssize_t ssize_t; 
# 180 "/usr/include/sys/types.h" 3 4
# 203 "/usr/include/sys/types.h" 3 4
typedef unsigned short nlink_t; 
#line 225 "/usr/include/sys/types.h"
typedef long fd_mask; 
#line 235 "/usr/include/sys/types.h"
typedef struct _types_fd_set { fd_mask fds_bits[(((64) + (((sizeof ( fd_mask ) * 8)) - 1)) / ((sizeof ( fd_mask ) * 8)))]; }_types_fd_set; 
# 225 "/usr/include/sys/types.h" 3 4
# 256 "/usr/include/sys/types.h" 3 4
typedef unsigned long clockid_t; 
#line 261 "/usr/include/sys/types.h"
typedef unsigned long timer_t; 
#line 265 "/usr/include/sys/types.h"
typedef unsigned long useconds_t; 
#line 266 "/usr/include/sys/types.h"
typedef long suseconds_t; 
# 1 "/usr/include/sys/features.h" 1 3 4
# 269 "/usr/include/sys/types.h" 2 3 4
# 373 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/cygwin/types.h" 1 3 4
# 20 "/usr/include/cygwin/types.h" 3 4
# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 21 "/usr/include/cygwin/types.h" 2 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
typedef signed char int8_t; 
#line 19 "/usr/include/stdint.h"
typedef short int16_t; 
#line 20 "/usr/include/stdint.h"
typedef long int32_t; 
#line 21 "/usr/include/stdint.h"
typedef long long int64_t; 
#line 24 "/usr/include/stdint.h"
typedef unsigned char uint8_t; 
#line 25 "/usr/include/stdint.h"
typedef unsigned short uint16_t; 
#line 28 "/usr/include/stdint.h"
typedef unsigned long uint32_t; 
#line 30 "/usr/include/stdint.h"
typedef unsigned long long uint64_t; 
#line 34 "/usr/include/stdint.h"
typedef signed char int_least8_t; 
#line 35 "/usr/include/stdint.h"
typedef short int_least16_t; 
#line 36 "/usr/include/stdint.h"
typedef long int_least32_t; 
#line 37 "/usr/include/stdint.h"
typedef long long int_least64_t; 
#line 39 "/usr/include/stdint.h"
typedef unsigned char uint_least8_t; 
#line 40 "/usr/include/stdint.h"
typedef unsigned short uint_least16_t; 
#line 41 "/usr/include/stdint.h"
typedef unsigned long uint_least32_t; 
#line 42 "/usr/include/stdint.h"
typedef unsigned long long uint_least64_t; 
#line 46 "/usr/include/stdint.h"
typedef signed char int_fast8_t; 
#line 47 "/usr/include/stdint.h"
typedef long int_fast16_t; 
#line 48 "/usr/include/stdint.h"
typedef long int_fast32_t; 
#line 49 "/usr/include/stdint.h"
typedef long long int_fast64_t; 
#line 51 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t; 
#line 52 "/usr/include/stdint.h"
typedef unsigned long uint_fast16_t; 
#line 53 "/usr/include/stdint.h"
typedef unsigned long uint_fast32_t; 
#line 54 "/usr/include/stdint.h"
typedef unsigned long long uint_fast64_t; 
#line 60 "/usr/include/stdint.h"
typedef long intptr_t; 
#line 62 "/usr/include/stdint.h"
typedef unsigned long uintptr_t; 
#line 66 "/usr/include/stdint.h"
typedef long long intmax_t; 
#line 67 "/usr/include/stdint.h"
typedef unsigned long long uintmax_t; 
# 22 "/usr/include/cygwin/types.h" 2 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 26 "/usr/include/cygwin/types.h" 2 3 4
typedef struct timespec timespec_t; 
#line 31 "/usr/include/cygwin/types.h"
typedef struct timespec timestruc_t; 
#line 37 "/usr/include/cygwin/types.h"
typedef  _off64_t off_t; 
#line 43 "/usr/include/cygwin/types.h"
typedef  __loff_t loff_t; 
#line 47 "/usr/include/cygwin/types.h"
typedef short __dev16_t; 
#line 48 "/usr/include/cygwin/types.h"
typedef unsigned long __dev32_t; 
#line 50 "/usr/include/cygwin/types.h"
typedef  __dev32_t dev_t; 
#line 58 "/usr/include/cygwin/types.h"
typedef long blksize_t; 
#line 63 "/usr/include/cygwin/types.h"
typedef long __blkcnt32_t; 
#line 64 "/usr/include/cygwin/types.h"
typedef long long __blkcnt64_t; 
#line 66 "/usr/include/cygwin/types.h"
typedef  __blkcnt64_t blkcnt_t; 
#line 74 "/usr/include/cygwin/types.h"
typedef unsigned long fsblkcnt_t; 
#line 79 "/usr/include/cygwin/types.h"
typedef unsigned long fsfilcnt_t; 
#line 84 "/usr/include/cygwin/types.h"
typedef unsigned short __uid16_t; 
#line 85 "/usr/include/cygwin/types.h"
typedef unsigned long __uid32_t; 
#line 87 "/usr/include/cygwin/types.h"
typedef  __uid32_t uid_t; 
#line 95 "/usr/include/cygwin/types.h"
typedef unsigned short __gid16_t; 
#line 96 "/usr/include/cygwin/types.h"
typedef unsigned long __gid32_t; 
#line 98 "/usr/include/cygwin/types.h"
typedef  __gid32_t gid_t; 
#line 106 "/usr/include/cygwin/types.h"
typedef unsigned long __ino32_t; 
#line 107 "/usr/include/cygwin/types.h"
typedef unsigned long long __ino64_t; 
#line 109 "/usr/include/cygwin/types.h"
typedef  __ino64_t ino_t; 
#line 118 "/usr/include/cygwin/types.h"
typedef unsigned long id_t; 
# 118 "/usr/include/cygwin/types.h" 3 4
# 151 "/usr/include/cygwin/types.h" 3 4
struct flock {short l_type; short l_whence;  off_t l_start;  off_t l_len;  pid_t l_pid; }; 
#line 155 "/usr/include/cygwin/types.h"
typedef long long key_t; 
#line 163 "/usr/include/cygwin/types.h"
typedef unsigned long vm_offset_t; 
#line 168 "/usr/include/cygwin/types.h"
typedef unsigned long vm_size_t; 
#line 173 "/usr/include/cygwin/types.h"
typedef void *vm_object_t; 
#line 178 "/usr/include/cygwin/types.h"
typedef unsigned char u_int8_t; 
#line 182 "/usr/include/cygwin/types.h"
typedef  __uint16_t u_int16_t; 
#line 186 "/usr/include/cygwin/types.h"
typedef  __uint32_t u_int32_t; 
#line 190 "/usr/include/cygwin/types.h"
typedef  __uint64_t u_int64_t; 
#line 195 "/usr/include/cygwin/types.h"
typedef  __int32_t register_t; 
#line 200 "/usr/include/cygwin/types.h"
typedef char *addr_t; 
#line 205 "/usr/include/cygwin/types.h"
typedef unsigned mode_t; 
#line 211 "/usr/include/cygwin/types.h"
typedef struct __pthread_t {char __dummy; }*pthread_t; 
#line 212 "/usr/include/cygwin/types.h"
typedef struct __pthread_mutex_t {char __dummy; }*pthread_mutex_t; 
#line 214 "/usr/include/cygwin/types.h"
typedef struct __pthread_key_t {char __dummy; }*pthread_key_t; 
#line 215 "/usr/include/cygwin/types.h"
typedef struct __pthread_attr_t {char __dummy; }*pthread_attr_t; 
#line 216 "/usr/include/cygwin/types.h"
typedef struct __pthread_mutexattr_t {char __dummy; }*pthread_mutexattr_t; 
#line 217 "/usr/include/cygwin/types.h"
typedef struct __pthread_condattr_t {char __dummy; }*pthread_condattr_t; 
#line 218 "/usr/include/cygwin/types.h"
typedef struct __pthread_cond_t {char __dummy; }*pthread_cond_t; 
#line 226 "/usr/include/cygwin/types.h"
typedef struct { pthread_mutex_t mutex; int state; }pthread_once_t; 
#line 227 "/usr/include/cygwin/types.h"
typedef struct __pthread_rwlock_t {char __dummy; }*pthread_rwlock_t; 
#line 228 "/usr/include/cygwin/types.h"
typedef struct __pthread_rwlockattr_t {char __dummy; }*pthread_rwlockattr_t; 
# 374 "/usr/include/sys/types.h" 2 3 4
# 50 "/usr/include/stdio.h" 2 3 4
typedef  __FILE FILE; 
#line 54 "/usr/include/stdio.h"
typedef  _fpos64_t fpos_t; 
# 65 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/stdio.h" 1 3 4
# 14 "/usr/include/sys/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 15 "/usr/include/sys/stdio.h" 2 3 4
# 29 "/usr/include/sys/stdio.h" 3 4
# 66 "/usr/include/stdio.h" 2 3 4
# 170 "/usr/include/stdio.h" 3 4
 FILE * __attribute__  (( __cdecl__ )) tmpfile(void ); 
#line 171 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) tmpnam(char *); 
#line 172 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fclose( FILE *); 
#line 173 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fflush( FILE *); 
#line 174 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) freopen(const char *, const char *,  FILE *); 
#line 175 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) setbuf( FILE *, char *); 
#line 176 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) setvbuf( FILE *, char *, int ,  size_t ); 
#line 177 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fprintf( FILE *, const char *, ...); 
#line 178 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fscanf( FILE *, const char *, ...); 
#line 179 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) printf(const char *, ...); 
#line 180 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) scanf(const char *, ...); 
#line 181 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) sscanf(const char *, const char *, ...); 
#line 182 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vfprintf( FILE *, const char *,  __gnuc_va_list ); 
#line 183 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vprintf(const char *,  __gnuc_va_list ); 
#line 184 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vsprintf(char *, const char *,  __gnuc_va_list ); 
#line 185 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fgetc( FILE *); 
#line 186 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) fgets(char *, int ,  FILE *); 
#line 187 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fputc(int ,  FILE *); 
#line 188 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fputs(const char *,  FILE *); 
#line 189 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) getc( FILE *); 
#line 190 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) getchar(void ); 
#line 191 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) gets(char *); 
#line 192 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) putc(int ,  FILE *); 
#line 193 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) putchar(int ); 
#line 194 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) puts(const char *); 
#line 195 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) ungetc(int ,  FILE *); 
#line 196 "/usr/include/stdio.h"
 size_t  __attribute__  (( __cdecl__ )) fread(void *,  size_t _size,  size_t _n,  FILE *); 
#line 197 "/usr/include/stdio.h"
 size_t  __attribute__  (( __cdecl__ )) fwrite(const void *,  size_t _size,  size_t _n,  FILE *); 
#line 201 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fgetpos( FILE *,  fpos_t *); 
#line 203 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fseek( FILE *, long , int ); 
#line 207 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fsetpos( FILE *, const  fpos_t *); 
#line 209 "/usr/include/stdio.h"
long  __attribute__  (( __cdecl__ )) ftell( FILE *); 
#line 210 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) rewind( FILE *); 
#line 211 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) clearerr( FILE *); 
#line 212 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) feof( FILE *); 
#line 213 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) ferror( FILE *); 
#line 214 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) perror(const char *); 
#line 216 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) fopen(const char *_name, const char *_type); 
#line 217 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) sprintf(char *, const char *, ...); 
#line 218 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) remove(const char *); 
#line 219 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) rename(const char *, const char *); 
#line 226 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fseeko( FILE *,  off_t , int ); 
#line 227 "/usr/include/stdio.h"
 off_t  __attribute__  (( __cdecl__ )) ftello( FILE *); 
#line 230 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) asiprintf(char **, const char *, ...); 
#line 231 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) asprintf(char **, const char *, ...); 
#line 233 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) dprintf(int , const char *, ...); 
#line 235 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fcloseall(void ); 
#line 236 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fiprintf( FILE *, const char *, ...); 
#line 237 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fiscanf( FILE *, const char *, ...); 
#line 238 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) iprintf(const char *, ...); 
#line 239 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) iscanf(const char *, ...); 
#line 240 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) siprintf(char *, const char *, ...); 
#line 241 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) siscanf(const char *, const char *, ...); 
#line 242 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) snprintf(char *,  size_t , const char *, ...); 
#line 243 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) sniprintf(char *,  size_t , const char *, ...); 
#line 244 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) tempnam(const char *, const char *); 
#line 245 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vasiprintf(char **, const char *,  __gnuc_va_list ); 
#line 246 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vasprintf(char **, const char *,  __gnuc_va_list ); 
#line 247 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vdprintf(int , const char *,  __gnuc_va_list ); 
#line 248 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vsniprintf(char *,  size_t , const char *,  __gnuc_va_list ); 
#line 249 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vsnprintf(char *,  size_t , const char *,  __gnuc_va_list ); 
#line 250 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vfiprintf( FILE *, const char *,  __gnuc_va_list ); 
#line 251 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vfiscanf( FILE *, const char *,  __gnuc_va_list ); 
#line 252 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vfscanf( FILE *, const char *,  __gnuc_va_list ); 
#line 253 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) viprintf(const char *,  __gnuc_va_list ); 
#line 254 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) viscanf(const char *,  __gnuc_va_list ); 
#line 255 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vscanf(const char *,  __gnuc_va_list ); 
#line 256 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vsiscanf(const char *, const char *,  __gnuc_va_list ); 
#line 257 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) vsscanf(const char *, const char *,  __gnuc_va_list ); 
#line 267 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) fdopen(int , const char *); 
#line 269 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) fileno( FILE *); 
#line 270 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) getw( FILE *); 
#line 271 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) pclose( FILE *); 
#line 272 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) popen(const char *, const char *); 
#line 273 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) putw(int ,  FILE *); 
#line 274 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) setbuffer( FILE *, char *, int ); 
#line 275 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) setlinebuf( FILE *); 
#line 276 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) getc_unlocked( FILE *); 
#line 277 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) getchar_unlocked(void ); 
#line 278 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) flockfile( FILE *); 
#line 279 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) ftrylockfile( FILE *); 
#line 280 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) funlockfile( FILE *); 
#line 281 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) putc_unlocked(int ,  FILE *); 
#line 282 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) putchar_unlocked(int ); 
#line 289 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _asiprintf_r(struct _reent *, char **, const char *, ...); 
#line 290 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _asprintf_r(struct _reent *, char **, const char *, ...); 
#line 291 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _dprintf_r(struct _reent *, int , const char *, ...); 
#line 292 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _fcloseall_r(struct _reent *); 
#line 293 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) _fdopen_r(struct _reent *, int , const char *); 
#line 294 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) _fopen_r(struct _reent *, const char *, const char *); 
#line 295 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _fclose_r(struct _reent *,  FILE *); 
#line 296 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) _fgets_r(struct _reent *, char *, int ,  FILE *); 
#line 297 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _fiscanf_r(struct _reent *,  FILE *, const char *, ...); 
#line 298 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _fputc_r(struct _reent *, int ,  FILE *); 
#line 299 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _fputs_r(struct _reent *, const char *,  FILE *); 
#line 300 "/usr/include/stdio.h"
 size_t  __attribute__  (( __cdecl__ )) _fread_r(struct _reent *, void *,  size_t _size,  size_t _n,  FILE *); 
#line 301 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _fscanf_r(struct _reent *,  FILE *, const char *, ...); 
#line 302 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _fseek_r(struct _reent *,  FILE *, long , int ); 
#line 303 "/usr/include/stdio.h"
long  __attribute__  (( __cdecl__ )) _ftell_r(struct _reent *,  FILE *); 
#line 304 "/usr/include/stdio.h"
 size_t  __attribute__  (( __cdecl__ )) _fwrite_r(struct _reent *, const void *,  size_t _size,  size_t _n,  FILE *); 
#line 305 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _getc_r(struct _reent *,  FILE *); 
#line 306 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _getc_unlocked_r(struct _reent *,  FILE *); 
#line 307 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _getchar_r(struct _reent *); 
#line 308 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _getchar_unlocked_r(struct _reent *); 
#line 309 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) _gets_r(struct _reent *, char *); 
#line 310 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _iprintf_r(struct _reent *, const char *, ...); 
#line 311 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _iscanf_r(struct _reent *, const char *, ...); 
#line 312 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _mkstemp_r(struct _reent *, char *); 
#line 313 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) _mktemp_r(struct _reent *, char *); 
#line 314 "/usr/include/stdio.h"
void  __attribute__  (( __cdecl__ )) _perror_r(struct _reent *, const char *); 
#line 315 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _printf_r(struct _reent *, const char *, ...); 
#line 316 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _putc_r(struct _reent *, int ,  FILE *); 
#line 317 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _putc_unlocked_r(struct _reent *, int ,  FILE *); 
#line 318 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _putchar_unlocked_r(struct _reent *, int ); 
#line 319 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _putchar_r(struct _reent *, int ); 
#line 320 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _puts_r(struct _reent *, const char *); 
#line 321 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _remove_r(struct _reent *, const char *); 
#line 322 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _rename_r(struct _reent *, const char *_old, const char *_new); 
#line 324 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _scanf_r(struct _reent *, const char *, ...); 
#line 325 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _siprintf_r(struct _reent *, char *, const char *, ...); 
#line 326 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _siscanf_r(struct _reent *, const char *, const char *, ...); 
#line 327 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _sniprintf_r(struct _reent *, char *,  size_t , const char *, ...); 
#line 328 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _snprintf_r(struct _reent *, char *,  size_t , const char *, ...); 
#line 329 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _sprintf_r(struct _reent *, char *, const char *, ...); 
#line 330 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _sscanf_r(struct _reent *, const char *, const char *, ...); 
#line 331 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) _tempnam_r(struct _reent *, const char *, const char *); 
#line 332 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) _tmpfile_r(struct _reent *); 
#line 333 "/usr/include/stdio.h"
char * __attribute__  (( __cdecl__ )) _tmpnam_r(struct _reent *, char *); 
#line 334 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _ungetc_r(struct _reent *, int ,  FILE *); 
#line 335 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vasiprintf_r(struct _reent *, char **, const char *,  __gnuc_va_list ); 
#line 336 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vasprintf_r(struct _reent *, char **, const char *,  __gnuc_va_list ); 
#line 337 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vdprintf_r(struct _reent *, int , const char *,  __gnuc_va_list ); 
#line 338 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vfiprintf_r(struct _reent *,  FILE *, const char *,  __gnuc_va_list ); 
#line 339 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vfprintf_r(struct _reent *,  FILE *, const char *,  __gnuc_va_list ); 
#line 340 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _viprintf_r(struct _reent *, const char *,  __gnuc_va_list ); 
#line 341 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vprintf_r(struct _reent *, const char *,  __gnuc_va_list ); 
#line 342 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vsiprintf_r(struct _reent *, char *, const char *,  __gnuc_va_list ); 
#line 343 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vsprintf_r(struct _reent *, char *, const char *,  __gnuc_va_list ); 
#line 344 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vsniprintf_r(struct _reent *, char *,  size_t , const char *,  __gnuc_va_list ); 
#line 345 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vsnprintf_r(struct _reent *, char *,  size_t , const char *,  __gnuc_va_list ); 
#line 346 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vfiscanf_r(struct _reent *,  FILE *, const char *,  __gnuc_va_list ); 
#line 347 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vfscanf_r(struct _reent *,  FILE *, const char *,  __gnuc_va_list ); 
#line 348 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _viscanf_r(struct _reent *, const char *,  __gnuc_va_list ); 
#line 349 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vscanf_r(struct _reent *, const char *,  __gnuc_va_list ); 
#line 350 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vsscanf_r(struct _reent *, const char *, const char *,  __gnuc_va_list ); 
#line 351 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) _vsiscanf_r(struct _reent *, const char *, const char *,  __gnuc_va_list ); 
#line 353 "/usr/include/stdio.h"
 ssize_t  __attribute__  (( __cdecl__ )) __getdelim(char **,  size_t *, int ,  FILE *); 
#line 354 "/usr/include/stdio.h"
 ssize_t  __attribute__  (( __cdecl__ )) __getline(char **,  size_t *,  FILE *); 
# 267 "/usr/include/stdio.h" 3 4
# 380 "/usr/include/stdio.h" 3 4
int  __attribute__  (( __cdecl__ )) __srget_r(struct _reent *,  FILE *); 
#line 381 "/usr/include/stdio.h"
int  __attribute__  (( __cdecl__ )) __swbuf_r(struct _reent *, int ,  FILE *); 
#line 388 "/usr/include/stdio.h"
 FILE * __attribute__  (( __cdecl__ )) funopen(const void *_cookie, int (*readfn)(void *_cookie, char *_buf, int _n), int (*writefn)(void *_cookie, const char *_buf, int _n),  fpos_t (*seekfn)(void *_cookie,  fpos_t _off, int _whence), int (*closefn)(void *_cookie)); 
#line 406 "/usr/include/stdio.h"
static __inline__ int __sgetc_r(struct _reent *__ptr,  FILE *__p)  {

#line 407 "/usr/include/stdio.h"

#line 407 "/usr/include/stdio.h"
int __c = (((--((__p)->_r)) < 0?__srget_r(__ptr, __p):((int )((*((__p)->_p)++)))));
#line 408 "/usr/include/stdio.h"
if (((__p->_flags) & 0x4000) && (__c == '\r')){
{ 
#line 410 "/usr/include/stdio.h"

#line 410 "/usr/include/stdio.h"
int __c2 = (((--((__p)->_r)) < 0?__srget_r(__ptr, __p):((int )((*((__p)->_p)++)))));
#line 411 "/usr/include/stdio.h"
if (__c2 == '\n'){
__c = __c2; }else{
ungetc(__c2, __p); }} }
#line 416 "/usr/include/stdio.h"
return __c; }
 
# 405 "/usr/include/stdio.h" 3 4
# 487 "/usr/include/stdio.h" 3 4
# 28 "rb.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 14 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 15 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/machine/stdlib.h" 1 3 4
# 17 "/usr/include/machine/stdlib.h" 3 4
char *mkdtemp(char *); 
# 18 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/alloca.h" 1 3 4
# 20 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/cygwin/stdlib.h" 1 3 4
# 14 "/usr/include/cygwin/stdlib.h" 3 4
# 1 "/usr/include/cygwin/wait.h" 1 3 4
# 21 "/usr/include/cygwin/stdlib.h" 2 3 4
const char *getprogname(void ); 
#line 22 "/usr/include/cygwin/stdlib.h"
void setprogname(const char *); 
#line 25 "/usr/include/cygwin/stdlib.h"
char *realpath(const char *, char *); 
#line 26 "/usr/include/cygwin/stdlib.h"
int unsetenv(const char *); 
#line 27 "/usr/include/cygwin/stdlib.h"
int random(void ); 
#line 28 "/usr/include/cygwin/stdlib.h"
long srandom(unsigned ); 
#line 29 "/usr/include/cygwin/stdlib.h"
char *ptsname(int ); 
#line 30 "/usr/include/cygwin/stdlib.h"
int grantpt(int ); 
#line 31 "/usr/include/cygwin/stdlib.h"
int unlockpt(int ); 
#line 32 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; }div_t; 
#line 38 "/usr/include/stdlib.h"
typedef struct {long quot; long rem; }ldiv_t; 
#line 45 "/usr/include/stdlib.h"
typedef struct {long long int quot; long long int rem; }lldiv_t; 
# 24 "/usr/include/stdlib.h" 2 3 4
# 57 "/usr/include/stdlib.h" 3 4
extern  __attribute__  (( dllimport )) int __mb_cur_max; 
#line 61 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) abort(void ) __attribute__  (( noreturn )) ; 
#line 62 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) abs(int ); 
#line 63 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) atexit(void (*__func)(void )); 
#line 64 "/usr/include/stdlib.h"
double  __attribute__  (( __cdecl__ )) atof(const char *__nptr); 
#line 66 "/usr/include/stdlib.h"
float  __attribute__  (( __cdecl__ )) atoff(const char *__nptr); 
#line 68 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) atoi(const char *__nptr); 
#line 69 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) _atoi_r(struct _reent *, const char *__nptr); 
#line 70 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) atol(const char *__nptr); 
#line 71 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) _atol_r(struct _reent *, const char *__nptr); 
#line 72 "/usr/include/stdlib.h"
void * __attribute__  (( __cdecl__ )) bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size, int (* __attribute__  (( __cdecl__ )) _compar)(const void *, const void *)); 
#line 77 "/usr/include/stdlib.h"
void * __attribute__  (( __cdecl__ )) calloc( size_t __nmemb,  size_t __size); 
#line 78 "/usr/include/stdlib.h"
 div_t  __attribute__  (( __cdecl__ )) div(int __numer, int __denom); 
#line 79 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) exit(int __status) __attribute__  (( noreturn )) ; 
#line 80 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) free(void *); 
#line 81 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) getenv(const char *__string); 
#line 82 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) _getenv_r(struct _reent *, const char *__string); 
#line 83 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) _findenv(const char *, int *); 
#line 84 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) _findenv_r(struct _reent *, const char *, int *); 
#line 85 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) labs(long ); 
#line 86 "/usr/include/stdlib.h"
 ldiv_t  __attribute__  (( __cdecl__ )) ldiv(long __numer, long __denom); 
#line 87 "/usr/include/stdlib.h"
void * __attribute__  (( __cdecl__ )) malloc( size_t __size); 
#line 88 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) mblen(const char *,  size_t ); 
#line 89 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) _mblen_r(struct _reent *, const char *,  size_t ,  _mbstate_t *); 
#line 90 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) mbtowc( wchar_t *, const char *,  size_t ); 
#line 91 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) _mbtowc_r(struct _reent *,  wchar_t *, const char *,  size_t ,  _mbstate_t *); 
#line 92 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) wctomb(char *,  wchar_t ); 
#line 93 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) _wctomb_r(struct _reent *, char *,  wchar_t ,  _mbstate_t *); 
#line 94 "/usr/include/stdlib.h"
 size_t  __attribute__  (( __cdecl__ )) mbstowcs( wchar_t *, const char *,  size_t ); 
#line 95 "/usr/include/stdlib.h"
 size_t  __attribute__  (( __cdecl__ )) _mbstowcs_r(struct _reent *,  wchar_t *, const char *,  size_t ,  _mbstate_t *); 
#line 96 "/usr/include/stdlib.h"
 size_t  __attribute__  (( __cdecl__ )) wcstombs(char *, const  wchar_t *,  size_t ); 
#line 97 "/usr/include/stdlib.h"
 size_t  __attribute__  (( __cdecl__ )) _wcstombs_r(struct _reent *, char *, const  wchar_t *,  size_t ,  _mbstate_t *); 
#line 100 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) mkstemp(char *); 
#line 101 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) mktemp(char *); 
#line 104 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) qsort(void *__base,  size_t __nmemb,  size_t __size, int (*_compar)(const void *, const void *)); 
#line 105 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) rand(void ); 
#line 106 "/usr/include/stdlib.h"
void * __attribute__  (( __cdecl__ )) realloc(void *__r,  size_t __size); 
#line 107 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) srand(unsigned __seed); 
#line 108 "/usr/include/stdlib.h"
double  __attribute__  (( __cdecl__ )) strtod(const char *__n, char **__end_PTR); 
#line 109 "/usr/include/stdlib.h"
double  __attribute__  (( __cdecl__ )) _strtod_r(struct _reent *, const char *__n, char **__end_PTR); 
#line 110 "/usr/include/stdlib.h"
float  __attribute__  (( __cdecl__ )) strtof(const char *__n, char **__end_PTR); 
#line 117 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) strtol(const char *__n, char **__end_PTR, int __base); 
#line 118 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) _strtol_r(struct _reent *, const char *__n, char **__end_PTR, int __base); 
#line 119 "/usr/include/stdlib.h"
unsigned long  __attribute__  (( __cdecl__ )) strtoul(const char *__n, char **__end_PTR, int __base); 
#line 120 "/usr/include/stdlib.h"
unsigned long  __attribute__  (( __cdecl__ )) _strtoul_r(struct _reent *, const char *__n, char **__end_PTR, int __base); 
#line 122 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) system(const char *__string); 
#line 125 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) a64l(const char *__input); 
#line 126 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) l64a(long __input); 
#line 127 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) _l64a_r(struct _reent *, long __input); 
#line 128 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) on_exit(void (*__func)(int , void *), void *__arg); 
#line 129 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) _Exit(int __status) __attribute__  (( noreturn )) ; 
#line 130 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) putenv(char *__string); 
#line 131 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) _putenv_r(struct _reent *, char *__string); 
#line 132 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) setenv(const char *__string, const char *__value, int __overwrite); 
#line 133 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) _setenv_r(struct _reent *, const char *__string, const char *__value, int __overwrite); 
#line 135 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) gcvt(double , int , char *); 
#line 136 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) gcvtf(float , int , char *); 
#line 137 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) fcvt(double , int , int *, int *); 
#line 138 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) fcvtf(float , int , int *, int *); 
#line 139 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) ecvt(double , int , int *, int *); 
#line 140 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) ecvtbuf(double , int , int *, int *, char *); 
#line 141 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) fcvtbuf(double , int , int *, int *, char *); 
#line 142 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) ecvtf(float , int , int *, int *); 
#line 143 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) dtoa(double , int , int , int *, int *, char **); 
#line 144 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) rand_r(unsigned *__seed); 
#line 146 "/usr/include/stdlib.h"
double  __attribute__  (( __cdecl__ )) drand48(void ); 
#line 147 "/usr/include/stdlib.h"
double  __attribute__  (( __cdecl__ )) _drand48_r(struct _reent *); 
#line 148 "/usr/include/stdlib.h"
double  __attribute__  (( __cdecl__ )) erand48(unsigned short ([3])); 
#line 149 "/usr/include/stdlib.h"
double  __attribute__  (( __cdecl__ )) _erand48_r(struct _reent *, unsigned short ([3])); 
#line 150 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) jrand48(unsigned short ([3])); 
#line 151 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) _jrand48_r(struct _reent *, unsigned short ([3])); 
#line 152 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) lcong48(unsigned short ([7])); 
#line 153 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) _lcong48_r(struct _reent *, unsigned short ([7])); 
#line 154 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) lrand48(void ); 
#line 155 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) _lrand48_r(struct _reent *); 
#line 156 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) mrand48(void ); 
#line 157 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) _mrand48_r(struct _reent *); 
#line 158 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) nrand48(unsigned short ([3])); 
#line 159 "/usr/include/stdlib.h"
long  __attribute__  (( __cdecl__ )) _nrand48_r(struct _reent *, unsigned short ([3])); 
#line 161 "/usr/include/stdlib.h"
unsigned short * __attribute__  (( __cdecl__ )) seed48(unsigned short ([3])); 
#line 163 "/usr/include/stdlib.h"
unsigned short * __attribute__  (( __cdecl__ )) _seed48_r(struct _reent *, unsigned short ([3])); 
#line 164 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) srand48(long ); 
#line 165 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) _srand48_r(struct _reent *, long ); 
#line 166 "/usr/include/stdlib.h"
long long  __attribute__  (( __cdecl__ )) atoll(const char *__nptr); 
#line 167 "/usr/include/stdlib.h"
long long  __attribute__  (( __cdecl__ )) _atoll_r(struct _reent *, const char *__nptr); 
#line 168 "/usr/include/stdlib.h"
long long  __attribute__  (( __cdecl__ )) llabs(long long ); 
#line 169 "/usr/include/stdlib.h"
 lldiv_t  __attribute__  (( __cdecl__ )) lldiv(long long __numer, long long __denom); 
#line 170 "/usr/include/stdlib.h"
long long  __attribute__  (( __cdecl__ )) strtoll(const char *__n, char **__end_PTR, int __base); 
#line 171 "/usr/include/stdlib.h"
long long  __attribute__  (( __cdecl__ )) _strtoll_r(struct _reent *, const char *__n, char **__end_PTR, int __base); 
#line 172 "/usr/include/stdlib.h"
unsigned long long  __attribute__  (( __cdecl__ )) strtoull(const char *__n, char **__end_PTR, int __base); 
#line 173 "/usr/include/stdlib.h"
unsigned long long  __attribute__  (( __cdecl__ )) _strtoull_r(struct _reent *, const char *__n, char **__end_PTR, int __base); 
#line 183 "/usr/include/stdlib.h"
char * __attribute__  (( __cdecl__ )) _dtoa_r(struct _reent *, double , int , int , int *, int *, char **); 
#line 191 "/usr/include/stdlib.h"
int  __attribute__  (( __cdecl__ )) _system_r(struct _reent *, const char *); 
#line 193 "/usr/include/stdlib.h"
void  __attribute__  (( __cdecl__ )) __eprintf(const char *, const char *, unsigned int , const char *); 
# 183 "/usr/include/stdlib.h" 3 4
# 29 "rb.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 14 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 22 "/usr/include/string.h" 2 3 4
void * __attribute__  (( __cdecl__ )) memchr(const void *, int ,  size_t ); 
#line 23 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) memcmp(const void *, const void *,  size_t ); 
#line 24 "/usr/include/string.h"
void * __attribute__  (( __cdecl__ )) memcpy(void *, const void *,  size_t ); 
#line 25 "/usr/include/string.h"
void * __attribute__  (( __cdecl__ )) memmove(void *, const void *,  size_t ); 
#line 26 "/usr/include/string.h"
void * __attribute__  (( __cdecl__ )) memset(void *, int ,  size_t ); 
#line 27 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strcat(char *, const char *); 
#line 28 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strchr(const char *, int ); 
#line 29 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) strcmp(const char *, const char *); 
#line 30 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) strcoll(const char *, const char *); 
#line 31 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strcpy(char *, const char *); 
#line 32 "/usr/include/string.h"
 size_t  __attribute__  (( __cdecl__ )) strcspn(const char *, const char *); 
#line 33 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strerror(int ); 
#line 34 "/usr/include/string.h"
 size_t  __attribute__  (( __cdecl__ )) strlen(const char *); 
#line 35 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strncat(char *, const char *,  size_t ); 
#line 36 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) strncmp(const char *, const char *,  size_t ); 
#line 37 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strncpy(char *, const char *,  size_t ); 
#line 38 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strpbrk(const char *, const char *); 
#line 39 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strrchr(const char *, int ); 
#line 40 "/usr/include/string.h"
 size_t  __attribute__  (( __cdecl__ )) strspn(const char *, const char *); 
#line 41 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strstr(const char *, const char *); 
#line 44 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strtok(char *, const char *); 
#line 47 "/usr/include/string.h"
 size_t  __attribute__  (( __cdecl__ )) strxfrm(char *, const char *,  size_t ); 
#line 50 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strtok_r(char *, const char *, char **); 
#line 52 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) bcmp(const void *, const void *,  size_t ); 
#line 53 "/usr/include/string.h"
void  __attribute__  (( __cdecl__ )) bcopy(const void *, void *,  size_t ); 
#line 54 "/usr/include/string.h"
void  __attribute__  (( __cdecl__ )) bzero(void *,  size_t ); 
#line 55 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) ffs(int ); 
#line 56 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) index(const char *, int ); 
#line 57 "/usr/include/string.h"
void * __attribute__  (( __cdecl__ )) memccpy(void *, const void *, int ,  size_t ); 
#line 58 "/usr/include/string.h"
void * __attribute__  (( __cdecl__ )) mempcpy(void *, const void *,  size_t ); 
#line 60 "/usr/include/string.h"
extern void *memmem(__const void *,  size_t , __const void *,  size_t ); 
#line 62 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) rindex(const char *, int ); 
#line 63 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) strcasecmp(const char *, const char *); 
#line 64 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strdup(const char *); 
#line 65 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) _strdup_r(struct _reent *, const char *); 
#line 66 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strndup(const char *,  size_t ); 
#line 67 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) _strndup_r(struct _reent *, const char *,  size_t ); 
#line 68 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strerror_r(int , char *,  size_t ); 
#line 69 "/usr/include/string.h"
 size_t  __attribute__  (( __cdecl__ )) strlcat(char *, const char *,  size_t ); 
#line 70 "/usr/include/string.h"
 size_t  __attribute__  (( __cdecl__ )) strlcpy(char *, const char *,  size_t ); 
#line 71 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) strncasecmp(const char *, const char *,  size_t ); 
#line 72 "/usr/include/string.h"
 size_t  __attribute__  (( __cdecl__ )) strnlen(const char *,  size_t ); 
#line 73 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strsep(char **, const char *); 
#line 74 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strlwr(char *); 
#line 75 "/usr/include/string.h"
char * __attribute__  (( __cdecl__ )) strupr(char *); 
#line 78 "/usr/include/string.h"
const char * __attribute__  (( __cdecl__ )) strsignal(int __signo); 
#line 80 "/usr/include/string.h"
int  __attribute__  (( __cdecl__ )) strtosigno(const char *__name); 
# 99 "/usr/include/string.h" 3 4
# 1 "/usr/include/sys/string.h" 1 3 4
# 100 "/usr/include/string.h" 2 3 4
# 30 "rb.c" 2
# 1 "rb.h" 1
# 29 "rb.h" 
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 33 "rb.h" 2
typedef int rb_comparison_func(const void *rb_a, const void *rb_b, void *rb_param); 
#line 34 "rb.h"
typedef void rb_item_func(void *rb_item, void *rb_param); 
#line 35 "rb.h"
typedef void *rb_copy_func(void *rb_item, void *rb_param); 
#line 44 "rb.h"
struct libavl_allocator {void *(*libavl_malloc)(struct libavl_allocator *,  size_t libavl_size); void (*libavl_free)(struct libavl_allocator *, void *libavl_block); }; 
#line 48 "rb.h"
extern struct libavl_allocator rb_allocator_default; 
#line 49 "rb.h"
void *rb_malloc(struct libavl_allocator *,  size_t ); 
#line 50 "rb.h"
void rb_free(struct libavl_allocator *, void *); 
#line 67 "rb.h"
struct rb_table {struct rb_node *rb_root;  rb_comparison_func *rb_compare; void *rb_param; struct libavl_allocator *rb_alloc; unsigned long rb_generation; }; 
#line 74 "rb.h"
enum rb_color {RB_BLACK,RB_RED}; 
#line 82 "rb.h"
struct rb_node {struct rb_node *rb_link[2]; void *rb_data; unsigned char rb_color; }; 
#line 93 "rb.h"
struct rb_traverser {struct rb_table *rb_table; struct rb_node *rb_node; struct rb_node *rb_stack[48];  size_t rb_height; unsigned long rb_generation; }; 
#line 97 "rb.h"
struct rb_table *rb_create( rb_comparison_func *, void *, struct libavl_allocator *); 
#line 99 "rb.h"
struct rb_table *rb_copy(const struct rb_table *,  rb_copy_func *,  rb_item_func *, struct libavl_allocator *); 
#line 100 "rb.h"
void rb_destroy(struct rb_table *,  rb_item_func *); 
#line 101 "rb.h"
void **rb_probe(struct rb_table *, void *); 
#line 102 "rb.h"
void *rb_insert(struct rb_table *, void *); 
#line 103 "rb.h"
void *rb_replace(struct rb_table *, void *); 
#line 104 "rb.h"
void *rb_delete(struct rb_table *, const void *); 
#line 105 "rb.h"
void *rb_find(const struct rb_table *, const void *); 
#line 106 "rb.h"
void rb_assert_insert(struct rb_table *, void *); 
#line 107 "rb.h"
void *rb_assert_delete(struct rb_table *, void *); 
#line 113 "rb.h"
void rb_t_init(struct rb_traverser *, struct rb_table *); 
#line 114 "rb.h"
void *rb_t_first(struct rb_traverser *, struct rb_table *); 
#line 115 "rb.h"
void *rb_t_last(struct rb_traverser *, struct rb_table *); 
#line 116 "rb.h"
void *rb_t_find(struct rb_traverser *, struct rb_table *, void *); 
#line 117 "rb.h"
void *rb_t_insert(struct rb_traverser *, struct rb_table *, void *); 
#line 118 "rb.h"
void *rb_t_copy(struct rb_traverser *, const struct rb_traverser *); 
#line 119 "rb.h"
void *rb_t_next(struct rb_traverser *); 
#line 120 "rb.h"
void *rb_t_prev(struct rb_traverser *); 
#line 121 "rb.h"
void *rb_t_cur(struct rb_traverser *); 
#line 122 "rb.h"
void *rb_t_replace(struct rb_traverser *, void *); 
#line 39 "rb.c"
struct rb_table *rb_create( rb_comparison_func *compare, void *param, struct libavl_allocator *allocator)  {

#line 40 "rb.c"

#line 40 "rb.c"
struct rb_table *tree;
#line 42 "rb.c"
(((compare != (((void *)0)))?((void )0):__assert("rb.c", 42, "compare != NULL"))); 
#line 44 "rb.c"
if (allocator == (((void *)0))){
allocator = (&rb_allocator_default); }
#line 47 "rb.c"
tree = (allocator->libavl_malloc)(allocator, sizeof  *tree); 
#line 48 "rb.c"
if (tree == (((void *)0))){
return (((void *)0)); }
#line 51 "rb.c"
(tree->rb_root) = (((void *)0)); 
#line 52 "rb.c"
(tree->rb_compare) = compare; 
#line 53 "rb.c"
(tree->rb_param) = param; 
#line 54 "rb.c"
(tree->rb_alloc) = allocator; 
#line 57 "rb.c"
(tree->rb_generation) = 0; 
#line 59 "rb.c"
return tree; }
 
#line 66 "rb.c"
void *rb_find(const struct rb_table *tree, const void *item)  {

#line 67 "rb.c"

#line 67 "rb.c"
const struct rb_node *p;
#line 69 "rb.c"
(((tree != (((void *)0)) && item != (((void *)0)))?((void )0):__assert("rb.c", 69, "tree != NULL && item != NULL"))); 
#line 70 "rb.c"
for(p = (tree->rb_root);p != (((void *)0));) { { 
#line 72 "rb.c"

#line 72 "rb.c"
int cmp = (tree->rb_compare)(item, (p->rb_data), (tree->rb_param));
#line 74 "rb.c"
if (cmp < 0){
p = (p->rb_link)[0]; }else{
if (cmp > 0){
p = (p->rb_link)[1]; }else{
return (p->rb_data); }}} } 
#line 82 "rb.c"
return (((void *)0)); }
 
#line 91 "rb.c"
void **rb_probe(struct rb_table *tree, void *item)  {

#line 92 "rb.c"

#line 92 "rb.c"
struct rb_node *pa[48];
#line 93 "rb.c"

#line 93 "rb.c"
unsigned char da[48];
#line 94 "rb.c"

#line 94 "rb.c"
int k;
#line 96 "rb.c"

#line 96 "rb.c"
struct rb_node *p;
#line 97 "rb.c"

#line 97 "rb.c"
struct rb_node *n;
#line 99 "rb.c"
(((tree != (((void *)0)) && item != (((void *)0)))?((void )0):__assert("rb.c", 99, "tree != NULL && item != NULL"))); 
#line 101 "rb.c"
pa[0] = ((struct rb_node *)(&(tree->rb_root))); 
#line 102 "rb.c"
da[0] = 0; 
#line 103 "rb.c"
k = 1; 
#line 104 "rb.c"
for(p = (tree->rb_root);p != (((void *)0));p = (p->rb_link)[da[k - 1]]) { { 
#line 106 "rb.c"

#line 106 "rb.c"
int cmp = (tree->rb_compare)(item, (p->rb_data), (tree->rb_param));
#line 107 "rb.c"
if (cmp == 0){
return (&(p->rb_data)); }
#line 110 "rb.c"
pa[k] = p; 
#line 111 "rb.c"
da[k++] = cmp > 0; } } 
#line 114 "rb.c"
n = (pa[k - 1]->rb_link)[da[k - 1]] = ((tree->rb_alloc)->libavl_malloc)((tree->rb_alloc), sizeof  *n); 
#line 116 "rb.c"
if (n == (((void *)0))){
return (((void *)0)); }
#line 119 "rb.c"
(n->rb_data) = item; 
#line 120 "rb.c"
(n->rb_link)[0] = (n->rb_link)[1] = (((void *)0)); 
#line 121 "rb.c"
(n->rb_color) = RB_RED; 
#line 124 "rb.c"
(tree->rb_generation)++; 
#line 126 "rb.c"
while(k >= 3 && (pa[k - 1]->rb_color) == RB_RED) { { 
#line 195 "rb.c"
if (da[k - 2] == 0){
{ 
#line 130 "rb.c"

#line 130 "rb.c"
struct rb_node *y = (pa[k - 2]->rb_link)[1];
#line 131 "rb.c"
if (y != (((void *)0)) && (y->rb_color) == RB_RED){
{ 
#line 133 "rb.c"
(pa[k - 1]->rb_color) = (y->rb_color) = RB_BLACK; 
#line 134 "rb.c"
(pa[k - 2]->rb_color) = RB_RED; 
#line 135 "rb.c"
k -= 2; } }else{
{ 
#line 139 "rb.c"

#line 139 "rb.c"
struct rb_node *x;
#line 141 "rb.c"
if (da[k - 1] == 0){
y = pa[k - 1]; }else{
{ 
#line 145 "rb.c"
x = pa[k - 1]; 
#line 146 "rb.c"
y = (x->rb_link)[1]; 
#line 147 "rb.c"
(x->rb_link)[1] = (y->rb_link)[0]; 
#line 148 "rb.c"
(y->rb_link)[0] = x; 
#line 149 "rb.c"
(pa[k - 2]->rb_link)[0] = y; } }
#line 152 "rb.c"
x = pa[k - 2]; 
#line 153 "rb.c"
(x->rb_color) = RB_RED; 
#line 154 "rb.c"
(y->rb_color) = RB_BLACK; 
#line 156 "rb.c"
(x->rb_link)[0] = (y->rb_link)[1]; 
#line 157 "rb.c"
(y->rb_link)[1] = x; 
#line 158 "rb.c"
(pa[k - 3]->rb_link)[da[k - 3]] = y; 
#line 159 "rb.c"
break; } }} }else{
{ 
#line 164 "rb.c"

#line 164 "rb.c"
struct rb_node *y = (pa[k - 2]->rb_link)[0];
#line 165 "rb.c"
if (y != (((void *)0)) && (y->rb_color) == RB_RED){
{ 
#line 167 "rb.c"
(pa[k - 1]->rb_color) = (y->rb_color) = RB_BLACK; 
#line 168 "rb.c"
(pa[k - 2]->rb_color) = RB_RED; 
#line 169 "rb.c"
k -= 2; } }else{
{ 
#line 173 "rb.c"

#line 173 "rb.c"
struct rb_node *x;
#line 175 "rb.c"
if (da[k - 1] == 1){
y = pa[k - 1]; }else{
{ 
#line 179 "rb.c"
x = pa[k - 1]; 
#line 180 "rb.c"
y = (x->rb_link)[0]; 
#line 181 "rb.c"
(x->rb_link)[0] = (y->rb_link)[1]; 
#line 182 "rb.c"
(y->rb_link)[1] = x; 
#line 183 "rb.c"
(pa[k - 2]->rb_link)[1] = y; } }
#line 186 "rb.c"
x = pa[k - 2]; 
#line 187 "rb.c"
(x->rb_color) = RB_RED; 
#line 188 "rb.c"
(y->rb_color) = RB_BLACK; 
#line 190 "rb.c"
(x->rb_link)[1] = (y->rb_link)[0]; 
#line 191 "rb.c"
(y->rb_link)[0] = x; 
#line 192 "rb.c"
(pa[k - 3]->rb_link)[da[k - 3]] = y; 
#line 193 "rb.c"
break; } }} }} } 
#line 197 "rb.c"
((tree->rb_root)->rb_color) = RB_BLACK; 
#line 200 "rb.c"
return (&(n->rb_data)); }
 
#line 209 "rb.c"
void *rb_insert(struct rb_table *table, void *item)  {

#line 210 "rb.c"

#line 210 "rb.c"
void **p = rb_probe(table, item);
#line 211 "rb.c"
return (p == (((void *)0)) || (*p) == item?(((void *)0)):(*p)); }
 
#line 220 "rb.c"
void *rb_replace(struct rb_table *table, void *item)  {

#line 221 "rb.c"

#line 221 "rb.c"
void **p = rb_probe(table, item);
#line 222 "rb.c"
if (p == (((void *)0)) || (*p) == item){
return (((void *)0)); }else{
{ 
#line 226 "rb.c"

#line 226 "rb.c"
void *r = (*p);
#line 227 "rb.c"
(*p) = item; 
#line 228 "rb.c"
return r; } }}
 
#line 236 "rb.c"
void *rb_delete(struct rb_table *tree, const void *item)  {

#line 237 "rb.c"

#line 237 "rb.c"
struct rb_node *pa[48];
#line 238 "rb.c"

#line 238 "rb.c"
unsigned char da[48];
#line 239 "rb.c"

#line 239 "rb.c"
int k;
#line 241 "rb.c"

#line 241 "rb.c"
struct rb_node *p;
#line 242 "rb.c"

#line 242 "rb.c"
int cmp;
#line 244 "rb.c"
(((tree != (((void *)0)) && item != (((void *)0)))?((void )0):__assert("rb.c", 244, "tree != NULL && item != NULL"))); 
#line 246 "rb.c"
k = 0; 
#line 247 "rb.c"
p = ((struct rb_node *)(&(tree->rb_root))); 
#line 248 "rb.c"
for(cmp = (-1);cmp != 0;cmp = (tree->rb_compare)(item, (p->rb_data), (tree->rb_param))) { { 
#line 251 "rb.c"

#line 251 "rb.c"
int dir = cmp > 0;
#line 253 "rb.c"
pa[k] = p; 
#line 254 "rb.c"
da[k++] = dir; 
#line 256 "rb.c"
p = (p->rb_link)[dir]; 
#line 257 "rb.c"
if (p == (((void *)0))){
return (((void *)0)); }} } 
#line 260 "rb.c"
item = (p->rb_data); 
#line 262 "rb.c"
if ((p->rb_link)[1] == (((void *)0))){
(pa[k - 1]->rb_link)[da[k - 1]] = (p->rb_link)[0]; }else{
{ 
#line 266 "rb.c"

#line 266 "rb.c"
enum rb_color t;
#line 267 "rb.c"

#line 267 "rb.c"
struct rb_node *r = (p->rb_link)[1];
#line 269 "rb.c"
if ((r->rb_link)[0] == (((void *)0))){
{ 
#line 271 "rb.c"
(r->rb_link)[0] = (p->rb_link)[0]; 
#line 272 "rb.c"
t = (r->rb_color); 
#line 273 "rb.c"
(r->rb_color) = (p->rb_color); 
#line 274 "rb.c"
(p->rb_color) = t; 
#line 275 "rb.c"
(pa[k - 1]->rb_link)[da[k - 1]] = r; 
#line 276 "rb.c"
da[k] = 1; 
#line 277 "rb.c"
pa[k++] = r; } }else{
{ 
#line 281 "rb.c"

#line 281 "rb.c"
struct rb_node *s;
#line 282 "rb.c"

#line 282 "rb.c"
int j = k++;
#line 284 "rb.c"
for(;;) { { 
#line 286 "rb.c"
da[k] = 0; 
#line 287 "rb.c"
pa[k++] = r; 
#line 288 "rb.c"
s = (r->rb_link)[0]; 
#line 289 "rb.c"
if ((s->rb_link)[0] == (((void *)0))){
break; }
#line 292 "rb.c"
r = s; } } 
#line 295 "rb.c"
da[j] = 1; 
#line 296 "rb.c"
pa[j] = s; 
#line 297 "rb.c"
(pa[j - 1]->rb_link)[da[j - 1]] = s; 
#line 299 "rb.c"
(s->rb_link)[0] = (p->rb_link)[0]; 
#line 300 "rb.c"
(r->rb_link)[0] = (s->rb_link)[1]; 
#line 301 "rb.c"
(s->rb_link)[1] = (p->rb_link)[1]; 
#line 303 "rb.c"
t = (s->rb_color); 
#line 304 "rb.c"
(s->rb_color) = (p->rb_color); 
#line 305 "rb.c"
(p->rb_color) = t; } }} }
#line 309 "rb.c"
if ((p->rb_color) == RB_BLACK){
{ 
#line 422 "rb.c"
for(;;) { { 
#line 313 "rb.c"

#line 313 "rb.c"
struct rb_node *x = (pa[k - 1]->rb_link)[da[k - 1]];
#line 314 "rb.c"
if (x != (((void *)0)) && (x->rb_color) == RB_RED){
{ 
#line 316 "rb.c"
(x->rb_color) = RB_BLACK; 
#line 317 "rb.c"
break; } }
#line 319 "rb.c"
if (k < 2){
break; }
#line 322 "rb.c"
if (da[k - 1] == 0){
{ 
#line 324 "rb.c"

#line 324 "rb.c"
struct rb_node *w = (pa[k - 1]->rb_link)[1];
#line 326 "rb.c"
if ((w->rb_color) == RB_RED){
{ 
#line 328 "rb.c"
(w->rb_color) = RB_BLACK; 
#line 329 "rb.c"
(pa[k - 1]->rb_color) = RB_RED; 
#line 331 "rb.c"
(pa[k - 1]->rb_link)[1] = (w->rb_link)[0]; 
#line 332 "rb.c"
(w->rb_link)[0] = pa[k - 1]; 
#line 333 "rb.c"
(pa[k - 2]->rb_link)[da[k - 2]] = w; 
#line 335 "rb.c"
pa[k] = pa[k - 1]; 
#line 336 "rb.c"
da[k] = 0; 
#line 337 "rb.c"
pa[k - 1] = w; 
#line 338 "rb.c"
k++; 
#line 340 "rb.c"
w = (pa[k - 1]->rb_link)[1]; } }
#line 343 "rb.c"
if (((w->rb_link)[0] == (((void *)0)) || ((w->rb_link)[0]->rb_color) == RB_BLACK) && ((w->rb_link)[1] == (((void *)0)) || ((w->rb_link)[1]->rb_color) == RB_BLACK)){
(w->rb_color) = RB_RED; }else{
{ 
#line 361 "rb.c"
if ((w->rb_link)[1] == (((void *)0)) || ((w->rb_link)[1]->rb_color) == RB_BLACK){
{ 
#line 353 "rb.c"

#line 353 "rb.c"
struct rb_node *y = (w->rb_link)[0];
#line 354 "rb.c"
(y->rb_color) = RB_BLACK; 
#line 355 "rb.c"
(w->rb_color) = RB_RED; 
#line 356 "rb.c"
(w->rb_link)[0] = (y->rb_link)[1]; 
#line 357 "rb.c"
(y->rb_link)[1] = w; 
#line 358 "rb.c"
w = (pa[k - 1]->rb_link)[1] = y; } }
#line 361 "rb.c"
(w->rb_color) = (pa[k - 1]->rb_color); 
#line 362 "rb.c"
(pa[k - 1]->rb_color) = RB_BLACK; 
#line 363 "rb.c"
((w->rb_link)[1]->rb_color) = RB_BLACK; 
#line 365 "rb.c"
(pa[k - 1]->rb_link)[1] = (w->rb_link)[0]; 
#line 366 "rb.c"
(w->rb_link)[0] = pa[k - 1]; 
#line 367 "rb.c"
(pa[k - 2]->rb_link)[da[k - 2]] = w; 
#line 368 "rb.c"
break; } }} }else{
{ 
#line 373 "rb.c"

#line 373 "rb.c"
struct rb_node *w = (pa[k - 1]->rb_link)[0];
#line 375 "rb.c"
if ((w->rb_color) == RB_RED){
{ 
#line 377 "rb.c"
(w->rb_color) = RB_BLACK; 
#line 378 "rb.c"
(pa[k - 1]->rb_color) = RB_RED; 
#line 380 "rb.c"
(pa[k - 1]->rb_link)[0] = (w->rb_link)[1]; 
#line 381 "rb.c"
(w->rb_link)[1] = pa[k - 1]; 
#line 382 "rb.c"
(pa[k - 2]->rb_link)[da[k - 2]] = w; 
#line 384 "rb.c"
pa[k] = pa[k - 1]; 
#line 385 "rb.c"
da[k] = 1; 
#line 386 "rb.c"
pa[k - 1] = w; 
#line 387 "rb.c"
k++; 
#line 389 "rb.c"
w = (pa[k - 1]->rb_link)[0]; } }
#line 392 "rb.c"
if (((w->rb_link)[0] == (((void *)0)) || ((w->rb_link)[0]->rb_color) == RB_BLACK) && ((w->rb_link)[1] == (((void *)0)) || ((w->rb_link)[1]->rb_color) == RB_BLACK)){
(w->rb_color) = RB_RED; }else{
{ 
#line 410 "rb.c"
if ((w->rb_link)[0] == (((void *)0)) || ((w->rb_link)[0]->rb_color) == RB_BLACK){
{ 
#line 402 "rb.c"

#line 402 "rb.c"
struct rb_node *y = (w->rb_link)[1];
#line 403 "rb.c"
(y->rb_color) = RB_BLACK; 
#line 404 "rb.c"
(w->rb_color) = RB_RED; 
#line 405 "rb.c"
(w->rb_link)[1] = (y->rb_link)[0]; 
#line 406 "rb.c"
(y->rb_link)[0] = w; 
#line 407 "rb.c"
w = (pa[k - 1]->rb_link)[0] = y; } }
#line 410 "rb.c"
(w->rb_color) = (pa[k - 1]->rb_color); 
#line 411 "rb.c"
(pa[k - 1]->rb_color) = RB_BLACK; 
#line 412 "rb.c"
((w->rb_link)[0]->rb_color) = RB_BLACK; 
#line 414 "rb.c"
(pa[k - 1]->rb_link)[0] = (w->rb_link)[1]; 
#line 415 "rb.c"
(w->rb_link)[1] = pa[k - 1]; 
#line 416 "rb.c"
(pa[k - 2]->rb_link)[da[k - 2]] = w; 
#line 417 "rb.c"
break; } }} }
#line 421 "rb.c"
k--; } } } }
#line 426 "rb.c"
((tree->rb_alloc)->libavl_free)((tree->rb_alloc), p); 
#line 431 "rb.c"
(tree->rb_generation)++; 
#line 432 "rb.c"
return ((void *)item); }
 
#line 439 "rb.c"
static void trav_refresh(struct rb_traverser *trav)  {

#line 440 "rb.c"
(((trav != (((void *)0)))?((void )0):__assert("rb.c", 440, "trav != NULL"))); 
#line 442 "rb.c"
(trav->rb_generation) = ((trav->rb_table)->rb_generation); 
#line 444 "rb.c"
if ((trav->rb_node) != (((void *)0))){
{ 
#line 446 "rb.c"

#line 446 "rb.c"
 rb_comparison_func *cmp = ((trav->rb_table)->rb_compare);
#line 447 "rb.c"

#line 447 "rb.c"
void *param = ((trav->rb_table)->rb_param);
#line 448 "rb.c"

#line 448 "rb.c"
struct rb_node *node = (trav->rb_node);
#line 449 "rb.c"

#line 449 "rb.c"
struct rb_node *i;
#line 451 "rb.c"
(trav->rb_height) = 0; 
#line 452 "rb.c"
for(i = ((trav->rb_table)->rb_root);i != node;) { { 
#line 454 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 454, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 455 "rb.c"
(((i != (((void *)0)))?((void )0):__assert("rb.c", 455, "i != NULL"))); 
#line 457 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = i; 
#line 458 "rb.c"
i = (i->rb_link)[cmp((node->rb_data), (i->rb_data), param) > 0]; } } } }}
 
#line 467 "rb.c"
void rb_t_init(struct rb_traverser *trav, struct rb_table *tree)  {

#line 468 "rb.c"
(trav->rb_table) = tree; 
#line 469 "rb.c"
(trav->rb_node) = (((void *)0)); 
#line 470 "rb.c"
(trav->rb_height) = 0; 
#line 471 "rb.c"
(trav->rb_generation) = (tree->rb_generation); }
 
#line 479 "rb.c"
void *rb_t_first(struct rb_traverser *trav, struct rb_table *tree)  {

#line 480 "rb.c"

#line 480 "rb.c"
struct rb_node *x;
#line 482 "rb.c"
(((tree != (((void *)0)) && trav != (((void *)0)))?((void )0):__assert("rb.c", 482, "tree != NULL && trav != NULL"))); 
#line 484 "rb.c"
(trav->rb_table) = tree; 
#line 485 "rb.c"
(trav->rb_height) = 0; 
#line 486 "rb.c"
(trav->rb_generation) = (tree->rb_generation); 
#line 488 "rb.c"
x = (tree->rb_root); 
#line 489 "rb.c"
if (x != (((void *)0))){
while((x->rb_link)[0] != (((void *)0))) { { 
#line 492 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 492, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 493 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 494 "rb.c"
x = (x->rb_link)[0]; } } }
#line 496 "rb.c"
(trav->rb_node) = x; 
#line 498 "rb.c"
return (x != (((void *)0))?(x->rb_data):(((void *)0))); }
 
#line 506 "rb.c"
void *rb_t_last(struct rb_traverser *trav, struct rb_table *tree)  {

#line 507 "rb.c"

#line 507 "rb.c"
struct rb_node *x;
#line 509 "rb.c"
(((tree != (((void *)0)) && trav != (((void *)0)))?((void )0):__assert("rb.c", 509, "tree != NULL && trav != NULL"))); 
#line 511 "rb.c"
(trav->rb_table) = tree; 
#line 512 "rb.c"
(trav->rb_height) = 0; 
#line 513 "rb.c"
(trav->rb_generation) = (tree->rb_generation); 
#line 515 "rb.c"
x = (tree->rb_root); 
#line 516 "rb.c"
if (x != (((void *)0))){
while((x->rb_link)[1] != (((void *)0))) { { 
#line 519 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 519, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 520 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 521 "rb.c"
x = (x->rb_link)[1]; } } }
#line 523 "rb.c"
(trav->rb_node) = x; 
#line 525 "rb.c"
return (x != (((void *)0))?(x->rb_data):(((void *)0))); }
 
#line 535 "rb.c"
void *rb_t_find(struct rb_traverser *trav, struct rb_table *tree, void *item)  {

#line 536 "rb.c"

#line 536 "rb.c"
struct rb_node *p,*q;
#line 538 "rb.c"
(((trav != (((void *)0)) && tree != (((void *)0)) && item != (((void *)0)))?((void )0):__assert("rb.c", 538, "trav != NULL && tree != NULL && item != NULL"))); 
#line 539 "rb.c"
(trav->rb_table) = tree; 
#line 540 "rb.c"
(trav->rb_height) = 0; 
#line 541 "rb.c"
(trav->rb_generation) = (tree->rb_generation); 
#line 542 "rb.c"
for(p = (tree->rb_root);p != (((void *)0));p = q) { { 
#line 544 "rb.c"

#line 544 "rb.c"
int cmp = (tree->rb_compare)(item, (p->rb_data), (tree->rb_param));
#line 546 "rb.c"
if (cmp < 0){
q = (p->rb_link)[0]; }else{
if (cmp > 0){
q = (p->rb_link)[1]; }else{
{ 
#line 552 "rb.c"
(trav->rb_node) = p; 
#line 553 "rb.c"
return (p->rb_data); } }}
#line 556 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 556, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 557 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = p; } } 
#line 560 "rb.c"
(trav->rb_height) = 0; 
#line 561 "rb.c"
(trav->rb_node) = (((void *)0)); 
#line 562 "rb.c"
return (((void *)0)); }
 
# 31 "rb.c" 2
# 574 "rb.c" 
void *rb_t_insert(struct rb_traverser *trav, struct rb_table *tree, void *item)  {

#line 575 "rb.c"

#line 575 "rb.c"
void **p;
#line 577 "rb.c"
(((trav != (((void *)0)) && tree != (((void *)0)) && item != (((void *)0)))?((void )0):__assert("rb.c", 577, "trav != NULL && tree != NULL && item != NULL"))); 
#line 579 "rb.c"
p = rb_probe(tree, item); 
#line 580 "rb.c"
if (p != (((void *)0))){
{ 
#line 582 "rb.c"
(trav->rb_table) = tree; 
#line 583 "rb.c"
(trav->rb_node) = (((struct rb_node *)(((char *)p) - ((( size_t )(&((((struct rb_node *)0))->rb_data))))))); 
#line 586 "rb.c"
(trav->rb_generation) = (tree->rb_generation) - 1; 
#line 587 "rb.c"
return (*p); } }else{
{ 
#line 591 "rb.c"
rb_t_init(trav, tree); 
#line 592 "rb.c"
return (((void *)0)); } }}
 
#line 599 "rb.c"
void *rb_t_copy(struct rb_traverser *trav, const struct rb_traverser *src)  {

#line 600 "rb.c"
(((trav != (((void *)0)) && src != (((void *)0)))?((void )0):__assert("rb.c", 600, "trav != NULL && src != NULL"))); 
#line 602 "rb.c"
if (trav != src){
{ 
#line 604 "rb.c"
(trav->rb_table) = (src->rb_table); 
#line 605 "rb.c"
(trav->rb_node) = (src->rb_node); 
#line 606 "rb.c"
(trav->rb_generation) = (src->rb_generation); 
#line 607 "rb.c"
if ((trav->rb_generation) == ((trav->rb_table)->rb_generation)){
{ 
#line 609 "rb.c"
(trav->rb_height) = (src->rb_height); 
#line 610 "rb.c"
memcpy((trav->rb_stack), ((const void *)(src->rb_stack)), sizeof  *(trav->rb_stack) * (trav->rb_height)); } }} }
#line 615 "rb.c"
return ((trav->rb_node) != (((void *)0))?((trav->rb_node)->rb_data):(((void *)0))); }
 
#line 623 "rb.c"
void *rb_t_next(struct rb_traverser *trav)  {

#line 624 "rb.c"

#line 624 "rb.c"
struct rb_node *x;
#line 626 "rb.c"
(((trav != (((void *)0)))?((void )0):__assert("rb.c", 626, "trav != NULL"))); 
#line 628 "rb.c"
if ((trav->rb_generation) != ((trav->rb_table)->rb_generation)){
trav_refresh(trav); }
#line 631 "rb.c"
x = (trav->rb_node); 
#line 632 "rb.c"
if (x == (((void *)0))){
{ 
#line 634 "rb.c"
return rb_t_first(trav, (trav->rb_table)); } }else{
if ((x->rb_link)[1] != (((void *)0))){
{ 
#line 638 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 638, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 639 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 640 "rb.c"
x = (x->rb_link)[1]; 
#line 642 "rb.c"
while((x->rb_link)[0] != (((void *)0))) { { 
#line 644 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 644, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 645 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 646 "rb.c"
x = (x->rb_link)[0]; } } } }else{
{ 
#line 651 "rb.c"

#line 651 "rb.c"
struct rb_node *y;
#line 653 "rb.c"
do { { 
#line 661 "rb.c"
if ((trav->rb_height) == 0){
{ 
#line 657 "rb.c"
(trav->rb_node) = (((void *)0)); 
#line 658 "rb.c"
return (((void *)0)); } }
#line 661 "rb.c"
y = x; 
#line 662 "rb.c"
x = (trav->rb_stack)[(--(trav->rb_height))]; } } while(y == (x->rb_link)[1]); } }}
#line 666 "rb.c"
(trav->rb_node) = x; 
#line 668 "rb.c"
return (x->rb_data); }
 
#line 676 "rb.c"
void *rb_t_prev(struct rb_traverser *trav)  {

#line 677 "rb.c"

#line 677 "rb.c"
struct rb_node *x;
#line 679 "rb.c"
(((trav != (((void *)0)))?((void )0):__assert("rb.c", 679, "trav != NULL"))); 
#line 681 "rb.c"
if ((trav->rb_generation) != ((trav->rb_table)->rb_generation)){
trav_refresh(trav); }
#line 684 "rb.c"
x = (trav->rb_node); 
#line 685 "rb.c"
if (x == (((void *)0))){
{ 
#line 687 "rb.c"
return rb_t_last(trav, (trav->rb_table)); } }else{
if ((x->rb_link)[0] != (((void *)0))){
{ 
#line 691 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 691, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 692 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 693 "rb.c"
x = (x->rb_link)[0]; 
#line 695 "rb.c"
while((x->rb_link)[1] != (((void *)0))) { { 
#line 697 "rb.c"
((((trav->rb_height) < 48)?((void )0):__assert("rb.c", 697, "trav->rb_height < RB_MAX_HEIGHT"))); 
#line 698 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 699 "rb.c"
x = (x->rb_link)[1]; } } } }else{
{ 
#line 704 "rb.c"

#line 704 "rb.c"
struct rb_node *y;
#line 706 "rb.c"
do { { 
#line 714 "rb.c"
if ((trav->rb_height) == 0){
{ 
#line 710 "rb.c"
(trav->rb_node) = (((void *)0)); 
#line 711 "rb.c"
return (((void *)0)); } }
#line 714 "rb.c"
y = x; 
#line 715 "rb.c"
x = (trav->rb_stack)[(--(trav->rb_height))]; } } while(y == (x->rb_link)[0]); } }}
#line 719 "rb.c"
(trav->rb_node) = x; 
#line 721 "rb.c"
return (x->rb_data); }
 
#line 727 "rb.c"
void *rb_t_cur(struct rb_traverser *trav)  {

#line 728 "rb.c"
(((trav != (((void *)0)))?((void )0):__assert("rb.c", 728, "trav != NULL"))); 
#line 730 "rb.c"
return ((trav->rb_node) != (((void *)0))?((trav->rb_node)->rb_data):(((void *)0))); }
 
#line 738 "rb.c"
void *rb_t_replace(struct rb_traverser *trav, void *new)  {

#line 739 "rb.c"

#line 739 "rb.c"
void *old;
#line 741 "rb.c"
(((trav != (((void *)0)) && (trav->rb_node) != (((void *)0)) && new != (((void *)0)))?((void )0):__assert("rb.c", 741, "trav != NULL && trav->rb_node != NULL && new != NULL"))); 
#line 742 "rb.c"
old = ((trav->rb_node)->rb_data); 
#line 743 "rb.c"
((trav->rb_node)->rb_data) = new; 
#line 744 "rb.c"
return old; }
 
#line 753 "rb.c"
static void copy_error_recovery(struct rb_node **stack, int height, struct rb_table *new,  rb_item_func *destroy)  {

#line 754 "rb.c"
(((stack != (((void *)0)) && height >= 0 && new != (((void *)0)))?((void )0):__assert("rb.c", 754, "stack != NULL && height >= 0 && new != NULL"))); 
#line 756 "rb.c"
for(;height > 2;height -= 2) { (stack[height - 1]->rb_link)[1] = (((void *)0)); } 
#line 758 "rb.c"
rb_destroy(new, destroy); }
 
#line 773 "rb.c"
struct rb_table *rb_copy(const struct rb_table *org,  rb_copy_func *copy,  rb_item_func *destroy, struct libavl_allocator *allocator)  {

#line 774 "rb.c"

#line 774 "rb.c"
struct rb_node *stack[2 * (48 + 1)];
#line 775 "rb.c"

#line 775 "rb.c"
int height = 0;
#line 777 "rb.c"

#line 777 "rb.c"
struct rb_table *new;
#line 778 "rb.c"

#line 778 "rb.c"
const struct rb_node *x;
#line 779 "rb.c"

#line 779 "rb.c"
struct rb_node *y;
#line 781 "rb.c"
(((org != (((void *)0)))?((void )0):__assert("rb.c", 781, "org != NULL"))); 
#line 782 "rb.c"
new = rb_create((org->rb_compare), (org->rb_param), (allocator != (((void *)0))?allocator:(org->rb_alloc))); 
#line 784 "rb.c"
if (new == (((void *)0))){
return (((void *)0)); }
# 770 "rb.c" 
# 795 "rb.c" 
if ((org->rb_root) == (((void *)0))){
return new; }
#line 800 "rb.c"
x = ((const struct rb_node *)(&(org->rb_root))); 
#line 801 "rb.c"
y = ((struct rb_node *)(&(new->rb_root))); 
#line 802 "rb.c"
for(;;) { { 
#line 827 "rb.c"
while((x->rb_link)[0] != (((void *)0))) { { 
#line 806 "rb.c"
(((height < 2 * (48 + 1))?((void )0):__assert("rb.c", 806, "height < 2 * (RB_MAX_HEIGHT + 1)"))); 
#line 808 "rb.c"
(y->rb_link)[0] = ((new->rb_alloc)->libavl_malloc)((new->rb_alloc), sizeof  *(y->rb_link)[0]); 
#line 811 "rb.c"
if ((y->rb_link)[0] == (((void *)0))){
{ 
#line 819 "rb.c"
if (y != ((struct rb_node *)(&(new->rb_root)))){
{ 
#line 815 "rb.c"
(y->rb_data) = (((void *)0)); 
#line 816 "rb.c"
(y->rb_link)[1] = (((void *)0)); } }
#line 819 "rb.c"
copy_error_recovery(stack, height, new, destroy); 
#line 820 "rb.c"
return (((void *)0)); } }
#line 823 "rb.c"
stack[height++] = ((struct rb_node *)x); 
#line 824 "rb.c"
stack[height++] = y; 
#line 825 "rb.c"
x = (x->rb_link)[0]; 
#line 826 "rb.c"
y = (y->rb_link)[0]; } } 
#line 828 "rb.c"
(y->rb_link)[0] = (((void *)0)); 
#line 830 "rb.c"
for(;;) { { 
#line 832 "rb.c"
(y->rb_color) = (x->rb_color); 
#line 833 "rb.c"
if (copy == (((void *)0))){
(y->rb_data) = (x->rb_data); }else{
{ 
#line 837 "rb.c"
(y->rb_data) = copy((x->rb_data), (org->rb_param)); 
#line 838 "rb.c"
if ((y->rb_data) == (((void *)0))){
{ 
#line 840 "rb.c"
(y->rb_link)[1] = (((void *)0)); 
#line 841 "rb.c"
copy_error_recovery(stack, height, new, destroy); 
#line 842 "rb.c"
return (((void *)0)); } }} }
#line 846 "rb.c"
if ((x->rb_link)[1] != (((void *)0))){
{ 
#line 850 "rb.c"
(y->rb_link)[1] = ((new->rb_alloc)->libavl_malloc)((new->rb_alloc), sizeof  *(y->rb_link)[1]); 
#line 851 "rb.c"
if ((y->rb_link)[1] == (((void *)0))){
{ 
#line 853 "rb.c"
copy_error_recovery(stack, height, new, destroy); 
#line 854 "rb.c"
return (((void *)0)); } }
#line 857 "rb.c"
x = (x->rb_link)[1]; 
#line 858 "rb.c"
y = (y->rb_link)[1]; 
#line 859 "rb.c"
break; } }else{
(y->rb_link)[1] = (((void *)0)); }
#line 864 "rb.c"
if (height <= 2){
return new; }
#line 867 "rb.c"
y = stack[(--height)]; 
#line 868 "rb.c"
x = stack[(--height)]; } } } } }
 
#line 877 "rb.c"
void rb_destroy(struct rb_table *tree,  rb_item_func *destroy)  {

#line 878 "rb.c"

#line 878 "rb.c"
struct rb_node *p,*q;
#line 880 "rb.c"
(((tree != (((void *)0)))?((void )0):__assert("rb.c", 880, "tree != NULL"))); 
#line 882 "rb.c"
for(p = (tree->rb_root);p != (((void *)0));p = q) { if ((p->rb_link)[0] == (((void *)0))){
{ 
#line 885 "rb.c"
q = (p->rb_link)[1]; 
#line 886 "rb.c"
if (destroy != (((void *)0)) && (p->rb_data) != (((void *)0))){
destroy((p->rb_data), (tree->rb_param)); }
#line 888 "rb.c"
((tree->rb_alloc)->libavl_free)((tree->rb_alloc), p); } }else{
{ 
#line 892 "rb.c"
q = (p->rb_link)[0]; 
#line 893 "rb.c"
(p->rb_link)[0] = (q->rb_link)[1]; 
#line 894 "rb.c"
(q->rb_link)[1] = p; } }} 
#line 897 "rb.c"
((tree->rb_alloc)->libavl_free)((tree->rb_alloc), tree); }
 
#line 904 "rb.c"
void *rb_malloc(struct libavl_allocator *allocator,  size_t size)  {

#line 905 "rb.c"
(((allocator != (((void *)0)) && size > 0)?((void )0):__assert("rb.c", 905, "allocator != NULL && size > 0"))); 
#line 906 "rb.c"
return malloc(size); }
 
#line 912 "rb.c"
void rb_free(struct libavl_allocator *allocator, void *block)  {

#line 913 "rb.c"
(((allocator != (((void *)0)) && block != (((void *)0)))?((void )0):__assert("rb.c", 913, "allocator != NULL && block != NULL"))); 
#line 914 "rb.c"
free(block); }
 
#line 922 "rb.c"
struct libavl_allocator rb_allocator_default = {rb_malloc,rb_free}; 
# 1 "/usr/include/assert.h" 1 3 4
# 25 "/usr/include/assert.h" 3 4
void  __attribute__  (( __cdecl__ )) __assert(const char *, int , const char *); 
#line 930 "rb.c"
void (rb_assert_insert)(struct rb_table *table, void *item)  {

#line 931 "rb.c"

#line 931 "rb.c"
void **p = rb_probe(table, item);
#line 932 "rb.c"
(((p != (((void *)0)) && (*p) == item)?((void )0):__assert("rb.c", 932, "p != NULL && *p == item"))); }
 
#line 939 "rb.c"
void *(rb_assert_delete)(struct rb_table *table, void *item)  {

#line 940 "rb.c"

#line 940 "rb.c"
void *p = rb_delete(table, item);
#line 941 "rb.c"
(((p != (((void *)0)))?((void )0):__assert("rb.c", 941, "p != NULL"))); 
#line 942 "rb.c"
return p; }
 
