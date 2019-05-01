
# 1 "test.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "test.c" 
# 26 "test.c" 
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
# 27 "test.c" 2
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 13 "/usr/include/limits.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 14 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 15 "/usr/include/features.h" 2 3 4
# 1 "/usr/include/sys/features.h" 1 3 4
# 16 "/usr/include/features.h" 2 3 4
# 14 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/limits.h" 2 3 4
# 28 "test.c" 2
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h" 1 3 4
# 44 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
#line 106 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h"
typedef  __gnuc_va_list va_list; 
# 106 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h" 3 4
# 29 "test.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 34 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 213 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3 4
typedef unsigned int size_t; 
# 35 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
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
# 30 "test.c" 2
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
# 31 "test.c" 2
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
# 32 "test.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 18 "/usr/include/time.h" 3 4
# 1 "/usr/include/machine/time.h" 1 3 4
# 19 "/usr/include/time.h" 2 3 4
# 27 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 44 "/usr/include/time.h" 2 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; }; 
#line 46 "/usr/include/time.h"
 clock_t  __attribute__  (( __cdecl__ )) clock(void ); 
#line 47 "/usr/include/time.h"
double  __attribute__  (( __cdecl__ )) difftime( time_t _time2,  time_t _time1); 
#line 48 "/usr/include/time.h"
 time_t  __attribute__  (( __cdecl__ )) mktime(struct tm *_timeptr); 
#line 49 "/usr/include/time.h"
 time_t  __attribute__  (( __cdecl__ )) time( time_t *_timer); 
#line 51 "/usr/include/time.h"
char * __attribute__  (( __cdecl__ )) asctime(const struct tm *_tblock); 
#line 52 "/usr/include/time.h"
char * __attribute__  (( __cdecl__ )) ctime(const  time_t *_time); 
#line 53 "/usr/include/time.h"
struct tm * __attribute__  (( __cdecl__ )) gmtime(const  time_t *_timer); 
#line 54 "/usr/include/time.h"
struct tm * __attribute__  (( __cdecl__ )) localtime(const  time_t *_timer); 
#line 56 "/usr/include/time.h"
 size_t  __attribute__  (( __cdecl__ )) strftime(char *_s,  size_t _maxsize, const char *_fmt, const struct tm *_t); 
#line 58 "/usr/include/time.h"
char * __attribute__  (( __cdecl__ )) asctime_r(const struct tm *, char *); 
#line 59 "/usr/include/time.h"
char * __attribute__  (( __cdecl__ )) ctime_r(const  time_t *, char *); 
#line 60 "/usr/include/time.h"
struct tm * __attribute__  (( __cdecl__ )) gmtime_r(const  time_t *, struct tm *); 
#line 61 "/usr/include/time.h"
struct tm * __attribute__  (( __cdecl__ )) localtime_r(const  time_t *, struct tm *); 
#line 70 "/usr/include/time.h"
char * __attribute__  (( __cdecl__ )) strptime(const char *, const char *, struct tm *); 
#line 71 "/usr/include/time.h"
void  __attribute__  (( __cdecl__ )) tzset(void ); 
#line 72 "/usr/include/time.h"
void  __attribute__  (( __cdecl__ )) _tzset_r(struct _reent *); 
#line 83 "/usr/include/time.h"
typedef struct __tzrule_struct {char ch; int m; int n; int d; int s;  time_t change; long offset; }__tzrule_type; 
#line 90 "/usr/include/time.h"
typedef struct __tzinfo_struct {int __tznorth; int __tzyear;  __tzrule_type __tzrule[2]; }__tzinfo_type; 
#line 92 "/usr/include/time.h"
 __tzinfo_type * __attribute__  (( __cdecl__ )) __gettzinfo(void ); 
#line 118 "/usr/include/time.h"
extern  __attribute__  (( dllimport )) long _timezone; 
#line 119 "/usr/include/time.h"
extern  __attribute__  (( dllimport )) int _daylight; 
#line 120 "/usr/include/time.h"
extern  __attribute__  (( dllimport )) char *_tzname[2]; 
# 118 "/usr/include/time.h" 3 4
# 135 "/usr/include/time.h" 3 4
# 1 "/usr/include/cygwin/time.h" 1 3 4
# 18 "/usr/include/cygwin/time.h" 3 4
int nanosleep(const struct timespec *, struct timespec *); 
#line 19 "/usr/include/cygwin/time.h"
int clock_setres( clockid_t , struct timespec *); 
#line 20 "/usr/include/cygwin/time.h"
int clock_getres( clockid_t , struct timespec *); 
#line 23 "/usr/include/cygwin/time.h"
 time_t timelocal(struct tm *); 
#line 24 "/usr/include/cygwin/time.h"
 time_t timegm(struct tm *); 
#line 34 "/usr/include/cygwin/time.h"
char *timezone(void ); 
# 34 "/usr/include/cygwin/time.h" 3 4
# 136 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 18 "/usr/include/sys/signal.h" 3 4
typedef unsigned long sigset_t; 
# 107 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/cygwin/signal.h" 1 3 4
# 28 "/usr/include/cygwin/signal.h" 3 4
struct _fpstate {unsigned long cw; unsigned long sw; unsigned long tag; unsigned long ipoff; unsigned long cssel; unsigned long dataoff; unsigned long datasel; unsigned char _st[80]; unsigned long nxst; }; 
#line 58 "/usr/include/cygwin/signal.h"
struct ucontext {unsigned long cr2; unsigned long dr0; unsigned long dr1; unsigned long dr2; unsigned long dr3; unsigned long dr6; unsigned long dr7; struct _fpstate fpstate; unsigned long gs; unsigned long fs; unsigned long es; unsigned long ds; unsigned long edi; unsigned long esi; unsigned long ebx; unsigned long edx; unsigned long ecx; unsigned long eax; unsigned long ebp; unsigned long eip; unsigned long cs; unsigned long eflags; unsigned long esp; unsigned long ss; unsigned char _internal; unsigned long oldmask; }; 
#line 66 "/usr/include/cygwin/signal.h"
typedef union sigval {int sival_int; void *sival_ptr; }sigval_t; 
#line 75 "/usr/include/cygwin/signal.h"
typedef struct sigevent { sigval_t sigev_value; int sigev_signo; int sigev_notify; void (*sigev_notify_function)( sigval_t );  pthread_attr_t *sigev_notify_attributes; }sigevent_t; 
#pragma pack(push,4)
 
#line 90 "/usr/include/cygwin/signal.h"
struct _sigcommune { __uint32_t _si_code; void *_si_read_handle; void *_si_write_handle; void *_si_process_handle; union {int _si_fd; void *_si_pipe_fhandler; char *_si_str; }; }; 
#line 133 "/usr/include/cygwin/signal.h"
typedef struct {int si_signo; int si_code;  pid_t si_pid;  uid_t si_uid; int si_errno; union { __uint32_t __pad[32]; struct _sigcommune _si_commune; union {struct {union {struct { timer_t si_tid; unsigned int si_overrun; };  sigval_t si_sigval;  sigval_t si_value; }; }; }; struct {int si_status;  clock_t si_utime;  clock_t si_stime; }; void *si_addr; }; }siginfo_t; 
#pragma pack(pop)
 
#line 179 "/usr/include/cygwin/signal.h"
enum {SI_USER=0,SI_ASYNCIO=2,SI_MESGQ,SI_TIMER,SI_QUEUE,SI_KERNEL,ILL_ILLOPC,ILL_ILLOPN,ILL_ILLADR,ILL_ILLTRP,ILL_PRVOPC,ILL_PRVREG,ILL_COPROC,ILL_BADSTK,FPE_INTDIV,FPE_INTOVF,FPE_FLTDIV,FPE_FLTOVF,FPE_FLTUND,FPE_FLTRES,FPE_FLTINV,FPE_FLTSUB,SEGV_MAPERR,SEGV_ACCERR,BUS_ADRALN,BUS_ADRERR,BUS_OBJERR,CLD_EXITED,CLD_KILLED,CLD_DUMPED,CLD_TRAPPED,CLD_STOPPED,CLD_CONTINUED}; 
#line 191 "/usr/include/cygwin/signal.h"
enum {SIGEV_SIGNAL=0,SIGEV_NONE,SIGEV_THREAD}; 
#line 193 "/usr/include/cygwin/signal.h"
typedef void (*_sig_func_ptr)(int ); 
#line 204 "/usr/include/cygwin/signal.h"
struct sigaction {union { _sig_func_ptr sa_handler; void (*sa_sigaction)(int ,  siginfo_t *, void *); };  sigset_t sa_mask; int sa_flags; }; 
#line 263 "/usr/include/cygwin/signal.h"
int sigwait(const  sigset_t *, int *); 
#line 264 "/usr/include/cygwin/signal.h"
int sigwaitinfo(const  sigset_t *,  siginfo_t *); 
#line 265 "/usr/include/cygwin/signal.h"
int sighold(int ); 
#line 266 "/usr/include/cygwin/signal.h"
int sigignore(int ); 
#line 267 "/usr/include/cygwin/signal.h"
int sigrelse(int ); 
#line 268 "/usr/include/cygwin/signal.h"
 _sig_func_ptr sigset(int ,  _sig_func_ptr ); 
#line 270 "/usr/include/cygwin/signal.h"
int sigqueue( pid_t , int , const union sigval ); 
#line 271 "/usr/include/cygwin/signal.h"
int siginterrupt(int , int ); 
# 263 "/usr/include/cygwin/signal.h" 3 4
# 108 "/usr/include/sys/signal.h" 2 3 4
# 134 "/usr/include/sys/signal.h" 3 4
int  __attribute__  (( __cdecl__ )) sigprocmask(int how, const  sigset_t *set,  sigset_t *oset); 
#line 137 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) pthread_sigmask(int how, const  sigset_t *set,  sigset_t *oset); 
#line 151 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) kill(int , int ); 
#line 152 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) killpg( pid_t , int ); 
#line 153 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigaction(int , const struct sigaction *, struct sigaction *); 
#line 154 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigaddset( sigset_t *, const int ); 
#line 155 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigdelset( sigset_t *, const int ); 
#line 156 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigismember(const  sigset_t *, int ); 
#line 157 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigfillset( sigset_t *); 
#line 158 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigemptyset( sigset_t *); 
#line 159 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigpending( sigset_t *); 
#line 160 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigsuspend(const  sigset_t *); 
#line 161 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) sigpause(int ); 
#line 169 "/usr/include/sys/signal.h"
int  __attribute__  (( __cdecl__ )) pthread_kill( pthread_t thread, int sig); 
# 151 "/usr/include/sys/signal.h" 3 4
# 9 "/usr/include/signal.h" 2 3 4
typedef int sig_atomic_t; 
#line 15 "/usr/include/signal.h"
struct _reent ; 
#line 17 "/usr/include/signal.h"
 _sig_func_ptr  __attribute__  (( __cdecl__ )) _signal_r(struct _reent *, int ,  _sig_func_ptr ); 
#line 18 "/usr/include/signal.h"
int  __attribute__  (( __cdecl__ )) _raise_r(struct _reent *, int ); 
#line 21 "/usr/include/signal.h"
 _sig_func_ptr  __attribute__  (( __cdecl__ )) signal(int ,  _sig_func_ptr ); 
#line 22 "/usr/include/signal.h"
int  __attribute__  (( __cdecl__ )) raise(int ); 
#line 148 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) clock_settime( clockid_t clock_id, const struct timespec *tp); 
#line 149 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) clock_gettime( clockid_t clock_id, struct timespec *tp); 
#line 150 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) clock_getres( clockid_t clock_id, struct timespec *res); 
#line 154 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) timer_create( clockid_t clock_id, struct sigevent *evp,  timer_t *timerid); 
#line 159 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) timer_delete( timer_t timerid); 
#line 163 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) timer_settime( timer_t timerid, int flags, const struct itimerspec *value, struct itimerspec *ovalue); 
#line 166 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) timer_gettime( timer_t timerid, struct itimerspec *value); 
#line 167 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) timer_getoverrun( timer_t timerid); 
#line 171 "/usr/include/time.h"
int  __attribute__  (( __cdecl__ )) nanosleep(const struct timespec *rqtp, struct timespec *rmtp); 
# 141 "/usr/include/time.h" 2 3 4
# 33 "test.c" 2
# 1 "test.h" 1
# 36 "test.h" 
struct libavl_allocator {void *(*libavl_malloc)(struct libavl_allocator *,  size_t libavl_size); void (*libavl_free)(struct libavl_allocator *, void *libavl_block); }; 
#line 40 "test.h"
int test_correctness(struct libavl_allocator *allocator, int insert[], int delete[], int n, int verbosity); 
#line 42 "test.h"
int test_overflow(struct libavl_allocator *, int order[], int n, int verbosity); 
#line 43 "test.h"
int compare_ints(const void *pa, const void *pb, void *param); 
#line 47 "test.c"
enum insert_order {INS_RANDOM,INS_ASCENDING,INS_DESCENDING,INS_BALANCED,INS_ZIGZAG,INS_ASCENDING_SHIFTED,INS_CUSTOM,INS_CNT}; 
#line 58 "test.c"
enum delete_order {DEL_RANDOM,DEL_REVERSE,DEL_SAME,DEL_CUSTOM,DEL_CNT}; 
#line 68 "test.c"
enum mt_policy {MT_TRACK,MT_NO_TRACK,MT_FAIL_COUNT,MT_FAIL_PERCENT,MT_SUBALLOC}; 
#line 76 "test.c"
struct option {const char *long_name; int short_name; int has_arg; }; 
#line 84 "test.c"
enum test {TST_CORRECTNESS,TST_OVERFLOW,TST_NULL}; 
#line 105 "test.c"
struct test_options {enum test test; enum insert_order insert_order; enum delete_order delete_order; enum mt_policy alloc_policy; int alloc_arg[2]; int alloc_incr; int node_cnt; int iter_cnt; int seed_given; unsigned seed; int verbosity; int nonstop; }; 
#line 108 "test.c"
char *pgm_name; 
#line 116 "test.c"
int compare_ints(const void *pa, const void *pb, void *param)  {

#line 117 "test.c"

#line 117 "test.c"
const int *a = pa;
#line 118 "test.c"

#line 118 "test.c"
const int *b = pb;
#line 120 "test.c"
if ((*a) < (*b)){
return (-1); }else{
if ((*a) > (*b)){
return (+1); }else{
return 0; }}}
 
#line 132 "test.c"
static void fail(const char *message, ...)  {

#line 133 "test.c"

#line 133 "test.c"
 va_list args;
#line 135 "test.c"
fprintf((((__getreent())->_stderr)), "%s: ", pgm_name); 
#line 137 "test.c"
__builtin_va_start(args, message); 
#line 138 "test.c"
vfprintf((((__getreent())->_stderr)), message, args); 
#line 139 "test.c"
__builtin_va_end(args); 
#line 141 "test.c"
putc('\n', (((__getreent())->_stdout))); 
#line 143 "test.c"
exit(1); }
 
#line 150 "test.c"
static void *xmalloc( size_t size)  {

#line 151 "test.c"

#line 151 "test.c"
void *block = malloc(size);
#line 152 "test.c"
if (block == (((void *)0)) && size != 0){
fail("out of memory"); }
#line 154 "test.c"
return block; }
 
#line 168 "test.c"
struct block {struct block *next; int idx;  size_t size;  size_t used; void *content; }; 
#line 177 "test.c"
enum mt_arg_index {MT_COUNT=0,MT_PERCENT=0,MT_BLOCK_SIZE=0,MT_ALIGN=1}; 
#line 193 "test.c"
struct mt_allocator {struct libavl_allocator allocator; enum mt_policy policy; int arg[2]; int verbosity; struct block *head,*tail; int alloc_idx; int block_cnt; }; 
#line 195 "test.c"
static void *mt_allocate(struct libavl_allocator *,  size_t ); 
#line 196 "test.c"
static void mt_free(struct libavl_allocator *, void *); 
#line 203 "test.c"
struct mt_allocator *mt_create(enum mt_policy policy, int arg[2], int verbosity)  {

#line 204 "test.c"

#line 204 "test.c"
struct mt_allocator *mt = xmalloc(sizeof  *mt);
#line 206 "test.c"
(mt->allocator).libavl_malloc = mt_allocate; 
#line 207 "test.c"
(mt->allocator).libavl_free = mt_free; 
#line 209 "test.c"
(mt->policy) = policy; 
#line 210 "test.c"
(mt->arg)[0] = arg[0]; 
#line 211 "test.c"
(mt->arg)[1] = arg[1]; 
#line 212 "test.c"
(mt->verbosity) = verbosity; 
#line 214 "test.c"
(mt->head) = (mt->tail) = (((void *)0)); 
#line 215 "test.c"
(mt->alloc_idx) = 0; 
#line 216 "test.c"
(mt->block_cnt) = 0; 
#line 218 "test.c"
return mt; }
 
#line 225 "test.c"
void mt_destroy(struct mt_allocator *mt)  {

#line 226 "test.c"
(((mt != (((void *)0)))?((void )0):__assert("test.c", 226, "mt != NULL"))); 
#line 228 "test.c"
if ((mt->block_cnt) == 0){
{ 
#line 232 "test.c"
if ((mt->policy) != MT_NO_TRACK && (mt->verbosity) >= 1){
printf("  No memory leaks.\n"); }} }else{
{ 
#line 235 "test.c"

#line 235 "test.c"
struct block *iter,*next;
#line 237 "test.c"
if ((mt->policy) != MT_SUBALLOC){
printf("  Memory leaks detected:\n"); }
#line 239 "test.c"
for(iter = (mt->head);iter != (((void *)0));iter = next) { { 
#line 245 "test.c"
if ((mt->policy) != MT_SUBALLOC){
printf("    block #%d: %lu bytes\n", (iter->idx), ((unsigned long )(iter->size))); }
#line 245 "test.c"
next = (iter->next); 
#line 246 "test.c"
free((iter->content)); 
#line 247 "test.c"
free(iter); } } } }
#line 251 "test.c"
free(mt); }
 
#line 257 "test.c"
void *mt_allocator(struct mt_allocator *mt)  {

#line 258 "test.c"
return (&(mt->allocator)); }
 
#line 265 "test.c"
static void *new_block(struct mt_allocator *mt,  size_t size)  {

#line 266 "test.c"

#line 266 "test.c"
struct block *new;
#line 269 "test.c"
new = xmalloc(sizeof  *new); 
#line 270 "test.c"
(new->next) = (((void *)0)); 
#line 271 "test.c"
(new->idx) = (mt->alloc_idx)++; 
#line 272 "test.c"
(new->size) = size; 
#line 273 "test.c"
(new->used) = 0; 
#line 274 "test.c"
(new->content) = xmalloc(size); 
#line 277 "test.c"
if ((mt->head) == (((void *)0))){
(mt->head) = new; }else{
((mt->tail)->next) = new; }
#line 281 "test.c"
(mt->tail) = new; 
#line 284 "test.c"
if ((mt->verbosity) >= 3){
printf("    block #%d: allocated %lu bytes\n", (new->idx), ((unsigned long )size)); }
#line 289 "test.c"
(mt->block_cnt)++; 
#line 290 "test.c"
return (new->content); }
 
#line 296 "test.c"
static void reject_request(struct mt_allocator *mt,  size_t size)  {

#line 300 "test.c"
if ((mt->verbosity) >= 2){
printf("    block #%d: rejected request for %lu bytes\n", (mt->alloc_idx)++, ((unsigned long )size)); }}
 
#line 305 "test.c"
static void *mt_allocate(struct libavl_allocator *allocator,  size_t size)  {

#line 306 "test.c"

#line 306 "test.c"
struct mt_allocator *mt = ((struct mt_allocator *)allocator);
#line 309 "test.c"
if (size == 0){
return (((void *)0)); }
#line 312 "test.c"
switch((mt->policy)){ { 
#line 315 "test.c"
case MT_TRACK: return new_block(mt, size); 
#line 317 "test.c"
case MT_NO_TRACK: return xmalloc(size); 
#line 320 "test.c"
case MT_FAIL_COUNT: if ((mt->arg)[MT_COUNT] == 0){
{ 
#line 323 "test.c"
reject_request(mt, size); 
#line 324 "test.c"
return (((void *)0)); } }
#line 326 "test.c"
(mt->arg)[MT_COUNT]--; 
#line 327 "test.c"
return new_block(mt, size); 
#line 329 "test.c"
case MT_FAIL_PERCENT: if (rand() / (0x7fffffff / 100 + 1) < (mt->arg)[MT_PERCENT]){
{ 
#line 332 "test.c"
reject_request(mt, size); 
#line 333 "test.c"
return (((void *)0)); } }else{
return new_block(mt, size); }
#line 338 "test.c"
case MT_SUBALLOC: if ((mt->tail) == (((void *)0)) || ((mt->tail)->used) + size > (( size_t )(mt->arg)[MT_BLOCK_SIZE])){
new_block(mt, (mt->arg)[MT_BLOCK_SIZE]); }
#line 342 "test.c"
if (((mt->tail)->used) + size <= (( size_t )(mt->arg)[MT_BLOCK_SIZE])){
{ 
#line 344 "test.c"

#line 344 "test.c"
void *p = ((char *)((mt->tail)->content)) + ((mt->tail)->used);
#line 345 "test.c"
size = ((size + (mt->arg)[MT_ALIGN] - 1) / (mt->arg)[MT_ALIGN] * (mt->arg)[MT_ALIGN]); 
#line 347 "test.c"
((mt->tail)->used) += size; 
#line 348 "test.c"
if ((mt->verbosity) >= 3){
printf("    block #%d: suballocated %lu bytes\n", ((mt->tail)->idx), ((unsigned long )size)); }
#line 351 "test.c"
return p; } }else{
fail("blocksize %lu too small for %lu-byte allocation", ((unsigned long )((mt->tail)->size)), ((unsigned long )size)); }
#line 357 "test.c"
default: (((0)?((void )0):__assert("test.c", 358, "0"))); } } }
 
#line 365 "test.c"
static void mt_free(struct libavl_allocator *allocator, void *block)  {

#line 366 "test.c"

#line 366 "test.c"
struct mt_allocator *mt = ((struct mt_allocator *)allocator);
#line 367 "test.c"

#line 367 "test.c"
struct block *iter,*prev;
#line 370 "test.c"
if (block == (((void *)0)) || (mt->policy) == MT_NO_TRACK){
{ 
#line 372 "test.c"
free(block); 
#line 373 "test.c"
return ; } }
#line 375 "test.c"
if ((mt->policy) == MT_SUBALLOC){
return ; }
#line 379 "test.c"
for(prev = (((void *)0)) , iter = (mt->head);iter;prev = iter , iter = (iter->next)) { { 
#line 406 "test.c"
if ((iter->content) == block){
{ 
#line 384 "test.c"

#line 384 "test.c"
struct block *next = (iter->next);
#line 386 "test.c"
if (prev == (((void *)0))){
(mt->head) = next; }else{
(prev->next) = next; }
#line 390 "test.c"
if (next == (((void *)0))){
(mt->tail) = prev; }
#line 394 "test.c"
if ((mt->verbosity) >= 4){
printf("    block #%d: freed %lu bytes\n", (iter->idx), ((unsigned long )(iter->size))); }
#line 399 "test.c"
free((iter->content)); 
#line 400 "test.c"
free(iter); 
#line 403 "test.c"
(mt->block_cnt)--; 
#line 404 "test.c"
return ; } }} } 
#line 409 "test.c"
printf("    attempt to free unknown block %p (already freed?)\n", block); }
 
#line 418 "test.c"
struct option_state {const struct option *options; char **arg_next; char *short_next; }; 
#line 425 "test.c"
static struct option_state *option_init(const struct option *options, char **args)  {

#line 426 "test.c"

#line 426 "test.c"
struct option_state *state;
#line 428 "test.c"
(((options != (((void *)0)) && args != (((void *)0)))?((void )0):__assert("test.c", 428, "options != NULL && args != NULL"))); 
#line 430 "test.c"
state = xmalloc(sizeof  *state); 
#line 431 "test.c"
(state->options) = options; 
#line 432 "test.c"
(state->arg_next) = args; 
#line 433 "test.c"
(state->short_next) = (((void *)0)); 
#line 435 "test.c"
return state; }
 
#line 444 "test.c"
static int handle_short_option(struct option_state *state, char **argp)  {

#line 445 "test.c"

#line 445 "test.c"
const struct option *o;
#line 447 "test.c"
(((state != (((void *)0)) && (state->short_next) != (((void *)0)) && (*(state->short_next)) != '\0' && (state->options) != (((void *)0)))?((void )0):__assert("test.c", 449, "state != NULL && state->short_next != NULL && *state->short_next != '\\0' && state->options != NULL"))); 
#line 452 "test.c"
for(o = (state->options);;o++) { if ((o->long_name) == (((void *)0))){
fail("unknown option `-%c'; use --help for help", (*(state->short_next))); }else{
if ((o->short_name) == (*(state->short_next))){
break; }}} 
#line 457 "test.c"
(state->short_next)++; 
#line 460 "test.c"
if ((o->has_arg)){
{ 
#line 465 "test.c"
if ((*(state->arg_next)) == (((void *)0)) || (*(*(state->arg_next))) == '-'){
fail("`-%c' requires an argument; use --help for help"); }
#line 465 "test.c"
(*argp) = (*(state->arg_next)++); } }
#line 468 "test.c"
return (o->short_name); }
 
#line 477 "test.c"
static int handle_long_option(struct option_state *state, char **argp)  {

#line 478 "test.c"

#line 478 "test.c"
const struct option *o;
#line 479 "test.c"

#line 479 "test.c"
char name[16];
#line 480 "test.c"

#line 480 "test.c"
const char *arg;
#line 482 "test.c"
(((state != (((void *)0)) && (state->arg_next) != (((void *)0)) && (*(state->arg_next)) != (((void *)0)) && (state->options) != (((void *)0)) && argp != (((void *)0)))?((void )0):__assert("test.c", 485, "state != NULL && state->arg_next != NULL && *state->arg_next != NULL && state->options != NULL && argp != NULL"))); 
#line 489 "test.c"
{ 
#line 490 "test.c"

#line 490 "test.c"
const char *p = (*(state->arg_next)) + 2;
#line 491 "test.c"

#line 491 "test.c"
const char *q = p + strcspn(p, "=");
#line 492 "test.c"

#line 492 "test.c"
 size_t name_len = q - p;
#line 494 "test.c"
if (name_len > (sizeof name) - 1){
name_len = (sizeof name) - 1; }
#line 496 "test.c"
memcpy(name, p, name_len); 
#line 497 "test.c"
name[name_len] = '\0'; 
#line 499 "test.c"
arg = (((*q) == '=')?q + 1:(((void *)0))); } 
#line 503 "test.c"
for(o = (state->options);;o++) { if ((o->long_name) == (((void *)0))){
fail("unknown option --%s; use --help for help", name); }else{
if ((!strcmp(name, (o->long_name)))){
break; }}} 
#line 510 "test.c"
if ((arg != (((void *)0))) != ((o->has_arg) != 0)){
{ 
#line 515 "test.c"
if (arg != (((void *)0))){
fail("--%s can't take an argument; use --help for help", name); }else{
fail("--%s requires an argument; use --help for help", name); }} }
#line 519 "test.c"
(state->arg_next)++; 
#line 520 "test.c"
(*argp) = ((char *)arg); 
#line 521 "test.c"
return (o->short_name); }
 
#line 529 "test.c"
static int option_get(struct option_state *state, char **argp)  {

#line 530 "test.c"
(((state != (((void *)0)) && argp != (((void *)0)))?((void )0):__assert("test.c", 530, "state != NULL && argp != NULL"))); 
#line 533 "test.c"
(*argp) = (((void *)0)); 
#line 536 "test.c"
if ((state->short_next) != (((void *)0))){
{ 
#line 541 "test.c"
if ((*(state->short_next)) != '\0'){
return handle_short_option(state, argp); }else{
(state->short_next) = (((void *)0)); }} }
#line 545 "test.c"
if ((*(state->arg_next)) == (((void *)0))){
{ 
#line 547 "test.c"
free(state); 
#line 548 "test.c"
return (-1); } }
#line 552 "test.c"
if (((*(state->arg_next)))[0] != '-'){
fail("non-option arguments encountered; use --help for help"); }
#line 554 "test.c"
if (((*(state->arg_next)))[1] == '\0'){
fail("unknown option `-'; use --help for help"); }
#line 558 "test.c"
if (((*(state->arg_next)))[1] == '-'){
return handle_long_option(state, argp); }else{
{ 
#line 562 "test.c"
(state->short_next) = (*(state->arg_next)) + 1; 
#line 563 "test.c"
(state->arg_next)++; 
#line 564 "test.c"
return handle_short_option(state, argp); } }}
 
#line 574 "test.c"
 size_t match_len(const char *a, const char *b)  {

#line 575 "test.c"

#line 575 "test.c"
 size_t cnt;
#line 577 "test.c"
for(cnt = 0;(*a) == (*b) && (*a) != '\0';a++ , b++) { cnt++; } 
#line 580 "test.c"
return (((*a) != (*b) && (*a) != '\0' && (*b) != '\0')?0:cnt); }
 
#line 587 "test.c"
static int stoi(const char *s)  {

#line 588 "test.c"

#line 588 "test.c"
long x = strtol(s, (((void *)0)), 10);
#line 589 "test.c"
return (x >= ((-2147483647) - 1) && x <= 2147483647?x:0); }
 
#line 595 "test.c"
static void usage(void )  {

#line 640 "test.c"

#line 640 "test.c"
static const char *help[] = {"bst-test, unit test for GNU libavl.\n\n","Usage: %s [OPTION]...\n\n","In the option descriptions below, CAPITAL denote arguments.\n","If a long option shows an argument as mandatory, then it is\n","mandatory for the equivalent short option also.  See the GNU\n","libavl manual for more information.\n\n","-t, --test=TEST     Sets test to perform.  TEST is one of:\n","                      correctness insert/delete/... (default)\n","                      overflow    stack overflow test\n","                      benchmark   benchmark test\n","                      null        no test\n","-s, --size=TREE-SIZE  Sets tree size in nodes (default 16).\n","-r, --repeat=COUNT  Repeats operation COUNT times (default 16).\n","-i, --insert=ORDER  Sets the insertion order.  ORDER is one of:\n","                      random      random permutation (default)\n","                      ascending   ascending order 0...n-1\n","                      descending  descending order n-1...0\n","                      balanced    balanced tree order\n","                      zigzag      zig-zag tree\n","                      asc-shifted n/2...n-1, 0...n/2-1\n","                      custom      custom, read from stdin\n","-d, --delete=ORDER  Sets the deletion order.  ORDER is one of:\n","                      random   random permutation (default)\n","                      reverse  reverse order of insertion\n","                      same     same as insertion order\n","                      custom   custom, read from stdin\n","-a, --alloc=POLICY  Sets allocation policy.  POLICY is one of:\n","                      track     track memory leaks (default)\n","                      no-track  turn off leak detection\n","                      fail-CNT  fail after CNT allocations\n","                      fail%%PCT  fail random PCT%% of allocations\n","                      sub-B,A   divide B-byte blocks in A-byte units\n","                    (Ignored for `benchmark' test.)\n","-A, --incr=INC      Fail policies: arg increment per repetition.\n","-S, --seed=SEED     Sets initial number seed to SEED.\n","                    (default based on system time)\n","-n, --nonstop       Don't stop after a single error.\n","-q, --quiet         Turns down verbosity level.\n","-v, --verbose       Turns up verbosity level.\n","-h, --help          Displays this help screen.\n","-V, --version       Reports version and copyright information.\n",(((void *)0)),};
#line 642 "test.c"

#line 642 "test.c"
const char **p;
#line 643 "test.c"
for(p = help;(*p) != (((void *)0));p++) { printf((*p), pgm_name); } 
#line 646 "test.c"
exit(0); }
 
#line 653 "test.c"
static void parse_command_line(char **args, struct test_options *options)  {

#line 671 "test.c"

#line 671 "test.c"
static const struct option option_tab[] = {{"test",'t',1},{"insert",'i',1},{"delete",'d',1},{"alloc",'a',1},{"incr",'A',1},{"size",'s',1},{"repeat",'r',1},{"operation",'o',1},{"seed",'S',1},{"nonstop",'n',0},{"quiet",'q',0},{"verbose",'v',0},{"help",'h',0},{"version",'V',0},{(((void *)0)),0,0},};
#line 673 "test.c"

#line 673 "test.c"
struct option_state *state;
#line 676 "test.c"
(options->test) = TST_CORRECTNESS; 
#line 677 "test.c"
(options->insert_order) = INS_RANDOM; 
#line 678 "test.c"
(options->delete_order) = DEL_RANDOM; 
#line 679 "test.c"
(options->alloc_policy) = MT_TRACK; 
#line 680 "test.c"
(options->alloc_arg)[0] = 0; 
#line 681 "test.c"
(options->alloc_arg)[1] = 0; 
#line 682 "test.c"
(options->alloc_incr) = 0; 
#line 683 "test.c"
(options->node_cnt) = 15; 
#line 684 "test.c"
(options->iter_cnt) = 15; 
#line 685 "test.c"
(options->seed_given) = 0; 
#line 686 "test.c"
(options->verbosity) = 0; 
#line 687 "test.c"
(options->nonstop) = 0; 
#line 689 "test.c"
if ((*args) == (((void *)0))){
return ; }
#line 692 "test.c"
state = option_init(option_tab, args + 1); 
#line 693 "test.c"
for(;;) { { 
#line 695 "test.c"

#line 695 "test.c"
char *arg;
#line 696 "test.c"

#line 696 "test.c"
int id = option_get(state, (&arg));
#line 697 "test.c"
if (id == (-1)){
break; }
#line 700 "test.c"
switch(id){ { 
#line 710 "test.c"
case 't': if (match_len(arg, "correctness") >= 3){
(options->test) = TST_CORRECTNESS; }else{
if (match_len(arg, "overflow") >= 3){
(options->test) = TST_OVERFLOW; }else{
if (match_len(arg, "null") >= 3){
(options->test) = TST_NULL; }else{
fail("unknown test \"%s\"", arg); }}}
#line 711 "test.c"
break; 
#line 713 "test.c"
case 'i': { 
#line 719 "test.c"

#line 719 "test.c"
static const char *orders[INS_CNT] = {"random","ascending","descending","balanced","zigzag","asc-shifted","custom",};
#line 721 "test.c"

#line 721 "test.c"
const char **iter;
#line 723 "test.c"
(((sizeof orders / sizeof  *orders == INS_CNT)?((void )0):__assert("test.c", 724, "sizeof orders / sizeof *orders == INS_CNT"))); 
#line 724 "test.c"
for(iter = orders;;iter++) { if (iter >= orders + INS_CNT){
fail("unknown order \"%s\"", arg); }else{
if (match_len((*iter), arg) >= 3){
{ 
#line 729 "test.c"
(options->insert_order) = iter - orders; 
#line 730 "test.c"
break; } }}} } 
#line 733 "test.c"
break; 
#line 735 "test.c"
case 'd': { 
#line 740 "test.c"

#line 740 "test.c"
static const char *orders[DEL_CNT] = {"random","reverse","same","custom",};
#line 742 "test.c"

#line 742 "test.c"
const char **iter;
#line 744 "test.c"
(((sizeof orders / sizeof  *orders == DEL_CNT)?((void )0):__assert("test.c", 745, "sizeof orders / sizeof *orders == DEL_CNT"))); 
#line 745 "test.c"
for(iter = orders;;iter++) { if (iter >= orders + DEL_CNT){
fail("unknown order \"%s\"", arg); }else{
if (match_len((*iter), arg) >= 3){
{ 
#line 750 "test.c"
(options->delete_order) = iter - orders; 
#line 751 "test.c"
break; } }}} } 
#line 754 "test.c"
break; 
#line 756 "test.c"
case 'a': if (match_len(arg, "track") >= 3){
(options->alloc_policy) = MT_TRACK; }else{
if (match_len(arg, "no-track") >= 3){
(options->alloc_policy) = MT_NO_TRACK; }else{
if ((!strncmp(arg, "fail", 3))){
{ 
#line 763 "test.c"

#line 763 "test.c"
const char *p = arg + strcspn(arg, "-%");
#line 764 "test.c"
if ((*p) == '-'){
(options->alloc_policy) = MT_FAIL_COUNT; }else{
if ((*p) == '%'){
(options->alloc_policy) = MT_FAIL_PERCENT; }else{
fail("invalid allocation policy \"%s\"", arg); }}
#line 771 "test.c"
(options->alloc_arg)[0] = stoi(p + 1); } }else{
if ((!strncmp(arg, "suballoc", 3))){
{ 
#line 775 "test.c"

#line 775 "test.c"
const char *p = strchr(arg, '-');
#line 776 "test.c"

#line 776 "test.c"
const char *q = strchr(arg, ',');
#line 777 "test.c"
if (p == (((void *)0)) || q == (((void *)0))){
fail("invalid allocation policy \"%s\"", arg); }
#line 780 "test.c"
(options->alloc_policy) = MT_SUBALLOC; 
#line 781 "test.c"
(options->alloc_arg)[0] = stoi(p + 1); 
#line 782 "test.c"
(options->alloc_arg)[1] = stoi(q + 1); 
#line 783 "test.c"
if ((options->alloc_arg)[MT_BLOCK_SIZE] < 32){
fail("block size too small"); }else{
if ((options->alloc_arg)[MT_ALIGN] > (options->alloc_arg)[MT_BLOCK_SIZE]){
fail("alignment cannot be greater than block size"); }else{
if ((options->alloc_arg)[MT_ALIGN] < 1){
fail("alignment must be at least 1"); }}}} }}}}
#line 791 "test.c"
break; 
#line 793 "test.c"
case 'A': (options->alloc_incr) = stoi(arg); 
#line 795 "test.c"
break; 
#line 797 "test.c"
case 's': (options->node_cnt) = stoi(arg); 
#line 799 "test.c"
if ((options->node_cnt) < 1){
fail("bad tree size \"%s\"", arg); }
#line 801 "test.c"
break; 
#line 803 "test.c"
case 'r': (options->iter_cnt) = stoi(arg); 
#line 805 "test.c"
if ((options->iter_cnt) < 1){
fail("bad repeat count \"%s\"", arg); }
#line 807 "test.c"
break; 
#line 809 "test.c"
case 'S': (options->seed_given) = 1; 
#line 811 "test.c"
(options->seed) = strtoul(arg, (((void *)0)), 0); 
#line 812 "test.c"
break; 
#line 814 "test.c"
case 'n': (options->nonstop) = 1; 
#line 816 "test.c"
break; 
#line 818 "test.c"
case 'q': (options->verbosity)--; 
#line 820 "test.c"
break; 
#line 822 "test.c"
case 'v': (options->verbosity)++; 
#line 824 "test.c"
break; 
#line 826 "test.c"
case 'h': usage(); 
#line 828 "test.c"
break; 
#line 830 "test.c"
case 'V': fputs("GNU libavl 2.0.2\n""Copyright (C) 1998-2002, 2004 ""Free Software Foundation, Inc.\n""This program comes with NO WARRANTY, not even for\n""MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n""You may redistribute copies under the terms of the\n""GNU General Public License.  For more information on\n""these matters, see the file named COPYING.\n", (((__getreent())->_stdout))); 
#line 840 "test.c"
exit(0); 
#line 842 "test.c"
default: (((0)?((void )0):__assert("test.c", 844, "0"))); } } } } }
 
#line 852 "test.c"
static void permuted_integers(int array[],  size_t n)  {

#line 853 "test.c"

#line 853 "test.c"
 size_t i;
#line 855 "test.c"
for(i = 0;i < n;i++) { array[i] = i; } 
#line 858 "test.c"
for(i = 0;i < n;i++) { { 
#line 860 "test.c"

#line 860 "test.c"
 size_t j = i + ((unsigned )rand()) / (0x7fffffff / (n - i) + 1);
#line 861 "test.c"

#line 861 "test.c"
int t = array[j];
#line 862 "test.c"
array[j] = array[i]; 
#line 863 "test.c"
array[i] = t; } } }
 
#line 873 "test.c"
static void gen_balanced_tree(int min, int max, int **array)  {

#line 874 "test.c"

#line 874 "test.c"
int i;
#line 876 "test.c"
if (min > max){
return ; }
#line 879 "test.c"
i = (min + max + 1) / 2; 
#line 880 "test.c"
(*((*array))++) = i; 
#line 881 "test.c"
gen_balanced_tree(min, i - 1, array); 
#line 882 "test.c"
gen_balanced_tree(i + 1, max, array); }
 
#line 890 "test.c"
static void gen_insertions( size_t n, enum insert_order insert_order, int insert[])  {

#line 891 "test.c"

#line 891 "test.c"
 size_t i;
#line 893 "test.c"
switch(insert_order){ { 
#line 896 "test.c"
case INS_RANDOM: permuted_integers(insert, n); 
#line 897 "test.c"
break; 
#line 899 "test.c"
case INS_ASCENDING: for(i = 0;i < n;i++) { insert[i] = i; } 
#line 902 "test.c"
break; 
#line 904 "test.c"
case INS_DESCENDING: for(i = 0;i < n;i++) { insert[i] = n - i - 1; } 
#line 907 "test.c"
break; 
#line 909 "test.c"
case INS_BALANCED: gen_balanced_tree(0, n - 1, (&insert)); 
#line 911 "test.c"
break; 
#line 913 "test.c"
case INS_ZIGZAG: for(i = 0;i < n;i++) { if (i % 2 == 0){
insert[i] = i / 2; }else{
insert[i] = n - i / 2 - 1; }} 
#line 919 "test.c"
break; 
#line 921 "test.c"
case INS_ASCENDING_SHIFTED: for(i = 0;i < n;i++) { { 
#line 924 "test.c"
insert[i] = i + n / 2; 
#line 925 "test.c"
if ((( size_t )insert[i]) >= n){
insert[i] -= n; }} } 
#line 928 "test.c"
break; 
#line 930 "test.c"
case INS_CUSTOM: for(i = 0;i < n;i++) { if (scanf("%d", (&insert[i])) == 0){
fail("error reading insertion order from stdin"); }} 
#line 934 "test.c"
break; 
#line 936 "test.c"
default: (((0)?((void )0):__assert("test.c", 938, "0"))); } } }
 
#line 946 "test.c"
static void gen_deletions( size_t n, enum delete_order delete_order, const int *insert, int *delete)  {

#line 947 "test.c"

#line 947 "test.c"
 size_t i;
#line 949 "test.c"
switch(delete_order){ { 
#line 952 "test.c"
case DEL_RANDOM: permuted_integers(delete, n); 
#line 953 "test.c"
break; 
#line 955 "test.c"
case DEL_REVERSE: for(i = 0;i < n;i++) { delete[i] = insert[n - i - 1]; } 
#line 958 "test.c"
break; 
#line 960 "test.c"
case DEL_SAME: for(i = 0;i < n;i++) { delete[i] = insert[i]; } 
#line 963 "test.c"
break; 
#line 965 "test.c"
case DEL_CUSTOM: for(i = 0;i < n;i++) { if (scanf("%d", (&delete[i])) == 0){
fail("error reading deletion order from stdin"); }} 
#line 969 "test.c"
break; 
#line 971 "test.c"
default: (((0)?((void )0):__assert("test.c", 973, "0"))); } } }
 
#line 980 "test.c"
unsigned time_seed(void )  {

#line 981 "test.c"

#line 981 "test.c"
 time_t timeval;
#line 982 "test.c"

#line 982 "test.c"
unsigned char *ptr;
#line 983 "test.c"

#line 983 "test.c"
unsigned seed;
#line 984 "test.c"

#line 984 "test.c"
 size_t i;
#line 986 "test.c"
timeval = time((((void *)0))); 
#line 987 "test.c"
ptr = ((unsigned char *)(&timeval)); 
#line 989 "test.c"
seed = 0; 
#line 990 "test.c"
for(i = 0;i < sizeof timeval;i++) { seed = seed * (255 + 2u) + ptr[i]; } 
#line 993 "test.c"
return seed; }
 
#line 998 "test.c"
int main(int argc, char *argv[])  {

#line 999 "test.c"

#line 999 "test.c"
struct test_options opts;
#line 1000 "test.c"

#line 1000 "test.c"
int *insert,*delete;
#line 1001 "test.c"

#line 1001 "test.c"
int success;
#line 1004 "test.c"
pgm_name = (argv[0] != (((void *)0)) && argv[0][0] != '\0'?argv[0]:"bst-test"); 
#line 1007 "test.c"
parse_command_line(argv, (&opts)); 
#line 1009 "test.c"
if (opts.verbosity >= 0){
fputs("bst-test for GNU libavl 2.0.2; use --help to get help.\n", (((__getreent())->_stdout))); }
#line 1012 "test.c"
if ((!opts.seed_given)){
opts.seed = time_seed() % 32768u; }
#line 1015 "test.c"
insert = xmalloc(sizeof  *insert * opts.node_cnt); 
#line 1016 "test.c"
delete = xmalloc(sizeof  *delete * opts.node_cnt); 
#line 1019 "test.c"
success = 1; 
#line 1020 "test.c"
while(opts.iter_cnt--) { { 
#line 1022 "test.c"

#line 1022 "test.c"
struct mt_allocator *alloc;
#line 1024 "test.c"
if (opts.verbosity >= 0){
{ 
#line 1026 "test.c"
printf("Testing seed=%u", opts.seed); 
#line 1027 "test.c"
if (opts.alloc_incr){
printf(", alloc arg=%d", opts.alloc_arg[0]); }
#line 1029 "test.c"
printf("...\n"); 
#line 1030 "test.c"
fflush((((__getreent())->_stdout))); } }
#line 1036 "test.c"
srand(opts.seed); 
#line 1037 "test.c"
gen_insertions(opts.node_cnt, opts.insert_order, insert); 
#line 1039 "test.c"
srand((++opts.seed)); 
#line 1040 "test.c"
gen_deletions(opts.node_cnt, opts.delete_order, insert, delete); 
#line 1042 "test.c"
if (opts.verbosity >= 1){
{ 
#line 1044 "test.c"

#line 1044 "test.c"
int i;
#line 1046 "test.c"
printf("  Insertion order:"); 
#line 1047 "test.c"
for(i = 0;i < opts.node_cnt;i++) { printf(" %d", insert[i]); } 
#line 1049 "test.c"
printf(".\n"); 
#line 1051 "test.c"
if (opts.test == TST_CORRECTNESS){
{ 
#line 1053 "test.c"
printf("Deletion order:"); 
#line 1054 "test.c"
for(i = 0;i < opts.node_cnt;i++) { printf(" %d", delete[i]); } 
#line 1056 "test.c"
printf(".\n"); } }} }
#line 1060 "test.c"
alloc = mt_create(opts.alloc_policy, opts.alloc_arg, opts.verbosity); 
#line 1062 "test.c"
{ 
#line 1063 "test.c"

#line 1063 "test.c"
int okay;
#line 1064 "test.c"

#line 1064 "test.c"
struct libavl_allocator *a = mt_allocator(alloc);
#line 1066 "test.c"
switch(opts.test){ { 
#line 1070 "test.c"
case TST_CORRECTNESS: okay = test_correctness(a, insert, delete, opts.node_cnt, opts.verbosity); 
#line 1071 "test.c"
break; 
#line 1073 "test.c"
case TST_OVERFLOW: okay = test_overflow(a, insert, opts.node_cnt, opts.verbosity); 
#line 1075 "test.c"
break; 
#line 1077 "test.c"
case TST_NULL: okay = 1; 
#line 1079 "test.c"
break; 
#line 1081 "test.c"
default: (((0)?((void )0):__assert("test.c", 1083, "0"))); } } 
#line 1085 "test.c"
if (okay){
{ 
#line 1089 "test.c"
if (opts.verbosity >= 1){
printf("  No errors.\n"); }} }else{
{ 
#line 1092 "test.c"
success = 0; 
#line 1093 "test.c"
printf("  Error!\n"); } }} 
#line 1097 "test.c"
mt_destroy(alloc); 
#line 1098 "test.c"
opts.alloc_arg[0] += opts.alloc_incr; 
#line 1100 "test.c"
if ((!success) && (!opts.nonstop)){
break; }} } 
#line 1104 "test.c"
free(delete); 
#line 1105 "test.c"
free(insert); 
#line 1107 "test.c"
return (success?0:1); }
 
