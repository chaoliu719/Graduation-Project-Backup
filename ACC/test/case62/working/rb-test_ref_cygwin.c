
# 1 "rb-test.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "rb-test.c" 
# 26 "rb-test.c" 
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
# 27 "rb-test.c" 2
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
# 28 "rb-test.c" 2
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
# 29 "rb-test.c" 2
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
# 30 "rb-test.c" 2
# 1 "test.h" 1
# 40 "test.h" 
int test_correctness(struct libavl_allocator *allocator, int insert[], int delete[], int n, int verbosity); 
#line 42 "test.h"
int test_overflow(struct libavl_allocator *, int order[], int n, int verbosity); 
#line 43 "test.h"
int compare_ints(const void *pa, const void *pb, void *param); 
#line 36 "rb-test.c"
static void print_tree_structure(const struct rb_node *node, int level)  {

#line 46 "rb-test.c"
if (level > 16){
{ 
#line 42 "rb-test.c"
printf("[...]"); 
#line 43 "rb-test.c"
return ; } }
#line 46 "rb-test.c"
if (node == (((void *)0))){
return ; }
#line 49 "rb-test.c"
printf("%d", (*((int *)(node->rb_data)))); 
#line 50 "rb-test.c"
if ((node->rb_link)[0] != (((void *)0)) || (node->rb_link)[1] != (((void *)0))){
{ 
#line 52 "rb-test.c"
putc('(', (((__getreent())->_stdout))); 
#line 54 "rb-test.c"
print_tree_structure((node->rb_link)[0], level + 1); 
#line 55 "rb-test.c"
if ((node->rb_link)[1] != (((void *)0))){
{ 
#line 57 "rb-test.c"
putc(',', (((__getreent())->_stdout))); 
#line 58 "rb-test.c"
print_tree_structure((node->rb_link)[1], level + 1); } }
#line 61 "rb-test.c"
putc(')', (((__getreent())->_stdout))); } }}
 
#line 68 "rb-test.c"
void print_whole_tree(const struct rb_table *tree, const char *title)  {

#line 69 "rb-test.c"
printf("%s: ", title); 
#line 70 "rb-test.c"
print_tree_structure((tree->rb_root), 0); 
#line 71 "rb-test.c"
putc('\n', (((__getreent())->_stdout))); }
 
#line 81 "rb-test.c"
static int check_traverser(struct rb_traverser *trav, int i, int n, const char *label)  {

#line 82 "rb-test.c"

#line 82 "rb-test.c"
int okay = 1;
#line 83 "rb-test.c"

#line 83 "rb-test.c"
int *cur,*prev,*next;
#line 85 "rb-test.c"
prev = rb_t_prev(trav); 
#line 86 "rb-test.c"
if ((i == 0 && prev != (((void *)0))) || (i > 0 && (prev == (((void *)0)) || (*prev) != i - 1))){
{ 
#line 90 "rb-test.c"
printf("   %s traverser ahead of %d, but should be ahead of %d.\n", label, (prev != (((void *)0))?(*prev):(-1)), (i == 0?(-1):i - 1)); 
#line 91 "rb-test.c"
okay = 0; } }
#line 93 "rb-test.c"
rb_t_next(trav); 
#line 95 "rb-test.c"
cur = rb_t_cur(trav); 
#line 96 "rb-test.c"
if (cur == (((void *)0)) || (*cur) != i){
{ 
#line 99 "rb-test.c"
printf("   %s traverser at %d, but should be at %d.\n", label, (cur != (((void *)0))?(*cur):(-1)), i); 
#line 100 "rb-test.c"
okay = 0; } }
#line 103 "rb-test.c"
next = rb_t_next(trav); 
#line 104 "rb-test.c"
if ((i == n - 1 && next != (((void *)0))) || (i != n - 1 && (next == (((void *)0)) || (*next) != i + 1))){
{ 
#line 108 "rb-test.c"
printf("   %s traverser behind %d, but should be behind %d.\n", label, (next != (((void *)0))?(*next):(-1)), (i == n - 1?(-1):i + 1)); 
#line 109 "rb-test.c"
okay = 0; } }
#line 111 "rb-test.c"
rb_t_prev(trav); 
#line 113 "rb-test.c"
return okay; }
 
#line 120 "rb-test.c"
static int compare_trees(struct rb_node *a, struct rb_node *b)  {

#line 121 "rb-test.c"

#line 121 "rb-test.c"
int okay;
#line 123 "rb-test.c"
if (a == (((void *)0)) || b == (((void *)0))){
{ 
#line 125 "rb-test.c"
(((a == (((void *)0)) && b == (((void *)0)))?((void )0):__assert("rb-test.c", 125, "a == NULL && b == NULL"))); 
#line 126 "rb-test.c"
return 1; } }
#line 129 "rb-test.c"
if ((*((int *)(a->rb_data))) != (*((int *)(b->rb_data))) || (((a->rb_link)[0] != (((void *)0))) != ((b->rb_link)[0] != (((void *)0)))) || (((a->rb_link)[1] != (((void *)0))) != ((b->rb_link)[1] != (((void *)0)))) || (a->rb_color) != (b->rb_color)){
{ 
#line 136 "rb-test.c"
printf(" Copied nodes differ: a=%d%c b=%d%c a:", (*((int *)(a->rb_data))), ((a->rb_color) == RB_RED?'r':'b'), (*((int *)(b->rb_data))), ((b->rb_color) == RB_RED?'r':'b')); 
#line 138 "rb-test.c"
if ((a->rb_link)[0] != (((void *)0))){
printf("l"); }
#line 140 "rb-test.c"
if ((a->rb_link)[1] != (((void *)0))){
printf("r"); }
#line 143 "rb-test.c"
printf(" b:"); 
#line 144 "rb-test.c"
if ((b->rb_link)[0] != (((void *)0))){
printf("l"); }
#line 146 "rb-test.c"
if ((b->rb_link)[1] != (((void *)0))){
printf("r"); }
#line 149 "rb-test.c"
printf("\n"); 
#line 150 "rb-test.c"
return 0; } }
#line 153 "rb-test.c"
okay = 1; 
#line 154 "rb-test.c"
if ((a->rb_link)[0] != (((void *)0))){
okay &= compare_trees((a->rb_link)[0], (b->rb_link)[0]); }
#line 156 "rb-test.c"
if ((a->rb_link)[1] != (((void *)0))){
okay &= compare_trees((a->rb_link)[1], (b->rb_link)[1]); }
#line 158 "rb-test.c"
return okay; }
 
# 31 "rb-test.c" 2
# 172 "rb-test.c" 
static void recurse_verify_tree(struct rb_node *node, int *okay,  size_t *count, int min, int max, int *bh)  {

#line 173 "rb-test.c"

#line 173 "rb-test.c"
int d;
#line 174 "rb-test.c"

#line 174 "rb-test.c"
 size_t subcount[2];
#line 175 "rb-test.c"

#line 175 "rb-test.c"
int subbh[2];
#line 177 "rb-test.c"
if (node == (((void *)0))){
{ 
#line 179 "rb-test.c"
(*count) = 0; 
#line 180 "rb-test.c"
(*bh) = 0; 
#line 181 "rb-test.c"
return ; } }
#line 183 "rb-test.c"
d = (*((int *)(node->rb_data))); 
#line 185 "rb-test.c"
if (min > max){
{ 
#line 188 "rb-test.c"
printf(" Parents of node %d constrain it to empty range %d...%d.\n", d, min, max); 
#line 189 "rb-test.c"
(*okay) = 0; } }else{
if (d < min || d > max){
{ 
#line 194 "rb-test.c"
printf(" Node %d is not in range %d...%d implied by its parents.\n", d, min, max); 
#line 195 "rb-test.c"
(*okay) = 0; } }}
#line 198 "rb-test.c"
recurse_verify_tree((node->rb_link)[0], okay, (&subcount[0]), min, d - 1, (&subbh[0])); 
#line 200 "rb-test.c"
recurse_verify_tree((node->rb_link)[1], okay, (&subcount[1]), d + 1, max, (&subbh[1])); 
#line 202 "rb-test.c"
(*count) = 1 + subcount[0] + subcount[1]; 
#line 203 "rb-test.c"
(*bh) = ((node->rb_color) == RB_BLACK) + subbh[0]; 
#line 205 "rb-test.c"
if ((node->rb_color) != RB_RED && (node->rb_color) != RB_BLACK){
{ 
#line 208 "rb-test.c"
printf(" Node %d is neither red nor black (%d).\n", d, (node->rb_color)); 
#line 209 "rb-test.c"
(*okay) = 0; } }
#line 213 "rb-test.c"
if ((node->rb_color) == RB_RED){
{ 
#line 222 "rb-test.c"
if ((node->rb_link)[0] != (((void *)0)) && ((node->rb_link)[0]->rb_color) == RB_RED){
{ 
#line 218 "rb-test.c"
printf(" Red node %d has red left child %d\n", d, (*((int *)((node->rb_link)[0]->rb_data)))); 
#line 219 "rb-test.c"
(*okay) = 0; } }
#line 222 "rb-test.c"
if ((node->rb_link)[1] != (((void *)0)) && ((node->rb_link)[1]->rb_color) == RB_RED){
{ 
#line 225 "rb-test.c"
printf(" Red node %d has red right child %d\n", d, (*((int *)((node->rb_link)[1]->rb_data)))); 
#line 226 "rb-test.c"
(*okay) = 0; } }} }
#line 231 "rb-test.c"
if (subbh[0] != subbh[1]){
{ 
#line 234 "rb-test.c"
printf(" Node %d has two different black-heights: left bh=%d, ""right bh=%d\n", d, subbh[0], subbh[1]); 
#line 235 "rb-test.c"
(*okay) = 0; } }}
 
#line 245 "rb-test.c"
static int verify_tree(struct rb_table *tree, int array[],  size_t n)  {

#line 246 "rb-test.c"

#line 246 "rb-test.c"
int okay = 1;
#line 259 "rb-test.c"
if (okay){
{ 
#line 266 "rb-test.c"
if ((tree->rb_root) != (((void *)0)) && ((tree->rb_root)->rb_color) != RB_BLACK){
{ 
#line 263 "rb-test.c"
printf(" Tree's root is not black.\n"); 
#line 264 "rb-test.c"
okay = 0; } }} }
#line 268 "rb-test.c"
if (okay){
{ 
#line 271 "rb-test.c"

#line 271 "rb-test.c"
 size_t count;
#line 272 "rb-test.c"

#line 272 "rb-test.c"
int bh;
#line 274 "rb-test.c"
recurse_verify_tree((tree->rb_root), (&okay), (&count), 0, 2147483647, (&bh)); 
#line 275 "rb-test.c"
if (count != n){
{ 
#line 278 "rb-test.c"
printf(" Tree has %lu nodes, but should have %lu.\n", ((unsigned long )count), ((unsigned long )n)); 
#line 279 "rb-test.c"
okay = 0; } }} }
#line 283 "rb-test.c"
if (okay){
{ 
#line 286 "rb-test.c"

#line 286 "rb-test.c"
 size_t i;
#line 288 "rb-test.c"
for(i = 0;i < n;i++) { if (rb_find(tree, (&array[i])) == (((void *)0))){
{ 
#line 291 "rb-test.c"
printf(" Tree does not contain expected value %d.\n", array[i]); 
#line 292 "rb-test.c"
okay = 0; } }} } }
#line 296 "rb-test.c"
if (okay){
{ 
#line 299 "rb-test.c"

#line 299 "rb-test.c"
struct rb_traverser trav;
#line 300 "rb-test.c"

#line 300 "rb-test.c"
 size_t i;
#line 301 "rb-test.c"

#line 301 "rb-test.c"
int prev = (-1);
#line 302 "rb-test.c"

#line 302 "rb-test.c"
int *item;
#line 304 "rb-test.c"
for(i = 0 , item = rb_t_first((&trav), tree);i < 2 * n && item != (((void *)0));i++ , item = rb_t_next((&trav))) { { 
#line 314 "rb-test.c"
if ((*item) <= prev){
{ 
#line 310 "rb-test.c"
printf(" Tree out of order: %d follows %d in traversal\n", (*item), prev); 
#line 311 "rb-test.c"
okay = 0; } }
#line 314 "rb-test.c"
prev = (*item); } } 
#line 317 "rb-test.c"
if (i != n){
{ 
#line 320 "rb-test.c"
printf(" Tree should have %lu items, but has %lu in traversal\n", ((unsigned long )n), ((unsigned long )i)); 
#line 321 "rb-test.c"
okay = 0; } }} }
#line 325 "rb-test.c"
if (okay){
{ 
#line 328 "rb-test.c"

#line 328 "rb-test.c"
struct rb_traverser trav;
#line 329 "rb-test.c"

#line 329 "rb-test.c"
 size_t i;
#line 330 "rb-test.c"

#line 330 "rb-test.c"
int next = 2147483647;
#line 331 "rb-test.c"

#line 331 "rb-test.c"
int *item;
#line 333 "rb-test.c"
for(i = 0 , item = rb_t_last((&trav), tree);i < 2 * n && item != (((void *)0));i++ , item = rb_t_prev((&trav))) { { 
#line 343 "rb-test.c"
if ((*item) >= next){
{ 
#line 339 "rb-test.c"
printf(" Tree out of order: %d precedes %d in traversal\n", (*item), next); 
#line 340 "rb-test.c"
okay = 0; } }
#line 343 "rb-test.c"
next = (*item); } } 
#line 346 "rb-test.c"
if (i != n){
{ 
#line 349 "rb-test.c"
printf(" Tree should have %lu items, but has %lu in reverse\n", ((unsigned long )n), ((unsigned long )i)); 
#line 350 "rb-test.c"
okay = 0; } }} }
#line 354 "rb-test.c"
if (okay){
{ 
#line 357 "rb-test.c"

#line 357 "rb-test.c"
struct rb_traverser init,first,last;
#line 358 "rb-test.c"

#line 358 "rb-test.c"
int *cur,*prev,*next;
#line 360 "rb-test.c"
rb_t_init((&init), tree); 
#line 361 "rb-test.c"
rb_t_first((&first), tree); 
#line 362 "rb-test.c"
rb_t_last((&last), tree); 
#line 364 "rb-test.c"
cur = rb_t_cur((&init)); 
#line 365 "rb-test.c"
if (cur != (((void *)0))){
{ 
#line 368 "rb-test.c"
printf(" Inited traverser should be null, but is actually %d.\n", (*cur)); 
#line 369 "rb-test.c"
okay = 0; } }
#line 372 "rb-test.c"
next = rb_t_next((&init)); 
#line 373 "rb-test.c"
if (next != rb_t_cur((&first))){
{ 
#line 376 "rb-test.c"
printf(" Next after null should be %d, but is actually %d.\n", (*((int *)rb_t_cur((&first)))), (*next)); 
#line 377 "rb-test.c"
okay = 0; } }
#line 379 "rb-test.c"
rb_t_prev((&init)); 
#line 381 "rb-test.c"
prev = rb_t_prev((&init)); 
#line 382 "rb-test.c"
if (prev != rb_t_cur((&last))){
{ 
#line 385 "rb-test.c"
printf(" Previous before null should be %d, but is actually %d.\n", (*((int *)rb_t_cur((&last)))), (*prev)); 
#line 386 "rb-test.c"
okay = 0; } }
#line 388 "rb-test.c"
rb_t_next((&init)); } }
#line 391 "rb-test.c"
return okay; }
 
#line 402 "rb-test.c"
int test_correctness(struct libavl_allocator *allocator, int insert[], int delete[], int n, int verbosity)  {

#line 403 "rb-test.c"

#line 403 "rb-test.c"
struct rb_table *tree;
#line 404 "rb-test.c"

#line 404 "rb-test.c"
int okay = 1;
#line 405 "rb-test.c"

#line 405 "rb-test.c"
int i;
#line 408 "rb-test.c"
tree = rb_create(compare_ints, (((void *)0)), allocator); 
#line 409 "rb-test.c"
if (tree == (((void *)0))){
{ 
#line 413 "rb-test.c"
if (verbosity >= 0){
printf("  Out of memory creating tree.\n"); }
#line 413 "rb-test.c"
return 1; } }
#line 416 "rb-test.c"
for(i = 0;i < n;i++) { { 
#line 435 "rb-test.c"
{ 
#line 425 "rb-test.c"

#line 425 "rb-test.c"
void **p = rb_probe(tree, (&insert[i]));
#line 426 "rb-test.c"
if (p == (((void *)0))){
{ 
#line 430 "rb-test.c"
if (verbosity >= 0){
printf("    Out of memory in insertion.\n"); }
#line 430 "rb-test.c"
rb_destroy(tree, (((void *)0))); 
#line 431 "rb-test.c"
return 1; } }
#line 433 "rb-test.c"
if ((*p) != (&insert[i])){
printf("    Duplicate item in tree!\n"); }} 
#line 437 "rb-test.c"
if (verbosity >= 3){
print_whole_tree(tree, "    Afterward"); }
#line 440 "rb-test.c"
if ((!verify_tree(tree, insert, i + 1))){
return 0; }} } 
#line 445 "rb-test.c"
for(i = 0;i < n;i++) { { 
#line 447 "rb-test.c"

#line 447 "rb-test.c"
struct rb_traverser x,y,z;
#line 448 "rb-test.c"

#line 448 "rb-test.c"
int *deleted;
#line 450 "rb-test.c"
if (insert[i] == delete[i]){
continue; }
#line 457 "rb-test.c"
if (rb_t_find((&x), tree, (&insert[i])) == (((void *)0))){
{ 
#line 459 "rb-test.c"
printf("    Can't find item %d in tree!\n", insert[i]); 
#line 460 "rb-test.c"
continue; } }
#line 463 "rb-test.c"
okay &= check_traverser((&x), insert[i], n, "Predeletion"); 
#line 470 "rb-test.c"
deleted = rb_delete(tree, (&delete[i])); 
#line 471 "rb-test.c"
if (deleted == (((void *)0)) || (*deleted) != delete[i]){
{ 
#line 473 "rb-test.c"
okay = 0; 
#line 474 "rb-test.c"
if (deleted == (((void *)0))){
printf("    Deletion failed.\n"); }else{
printf("    Wrong node %d returned.\n", (*deleted)); }} }
#line 480 "rb-test.c"
rb_t_copy((&y), (&x)); 
#line 485 "rb-test.c"
if (rb_t_insert((&z), tree, (&delete[i])) == (((void *)0))){
{ 
#line 489 "rb-test.c"
if (verbosity >= 0){
printf("    Out of memory re-inserting item.\n"); }
#line 489 "rb-test.c"
rb_destroy(tree, (((void *)0))); 
#line 490 "rb-test.c"
return 1; } }
#line 493 "rb-test.c"
okay &= check_traverser((&x), insert[i], n, "Postdeletion"); 
#line 494 "rb-test.c"
okay &= check_traverser((&y), insert[i], n, "Copied"); 
#line 495 "rb-test.c"
okay &= check_traverser((&z), delete[i], n, "Insertion"); 
#line 497 "rb-test.c"
if ((!verify_tree(tree, insert, n))){
return 0; }} } 
#line 502 "rb-test.c"
for(i = 0;i < n;i++) { { 
#line 504 "rb-test.c"

#line 504 "rb-test.c"
int *deleted;
#line 511 "rb-test.c"
deleted = rb_delete(tree, (&delete[i])); 
#line 512 "rb-test.c"
if (deleted == (((void *)0)) || (*deleted) != delete[i]){
{ 
#line 514 "rb-test.c"
okay = 0; 
#line 515 "rb-test.c"
if (deleted == (((void *)0))){
printf("    Deletion failed.\n"); }else{
printf("    Wrong node %d returned.\n", (*deleted)); }} }
#line 521 "rb-test.c"
if (verbosity >= 3){
print_whole_tree(tree, "    Afterward"); }
#line 524 "rb-test.c"
if ((!verify_tree(tree, delete + i + 1, n - i - 1))){
return 0; }
#line 532 "rb-test.c"
{ 
#line 533 "rb-test.c"

#line 533 "rb-test.c"
struct rb_table *copy = rb_copy(tree, (((void *)0)), (((void *)0)), (((void *)0)));
#line 534 "rb-test.c"
if (copy == (((void *)0))){
{ 
#line 538 "rb-test.c"
if (verbosity >= 0){
printf("  Out of memory in copy\n"); }
#line 538 "rb-test.c"
rb_destroy(tree, (((void *)0))); 
#line 539 "rb-test.c"
return 1; } }
#line 542 "rb-test.c"
okay &= compare_trees((tree->rb_root), (copy->rb_root)); 
#line 543 "rb-test.c"
rb_destroy(copy, (((void *)0))); } } } 
#line 547 "rb-test.c"
if (rb_delete(tree, (&insert[0])) != (((void *)0))){
{ 
#line 549 "rb-test.c"
printf(" Deletion from empty tree succeeded.\n"); 
#line 550 "rb-test.c"
okay = 0; } }
#line 554 "rb-test.c"
rb_destroy(tree, (((void *)0))); 
#line 556 "rb-test.c"
return okay; }
 
#line 561 "rb-test.c"
static int test_bst_t_first(struct rb_table *tree, int n)  {

#line 562 "rb-test.c"

#line 562 "rb-test.c"
struct rb_traverser trav;
#line 563 "rb-test.c"

#line 563 "rb-test.c"
int *first;
#line 565 "rb-test.c"
first = rb_t_first((&trav), tree); 
#line 566 "rb-test.c"
if (first == (((void *)0)) || (*first) != 0){
{ 
#line 569 "rb-test.c"
printf("    First item test failed: expected 0, got %d\n", (first != (((void *)0))?(*first):(-1))); 
#line 570 "rb-test.c"
return 0; } }
#line 573 "rb-test.c"
return 1; }
 
#line 578 "rb-test.c"
static int test_bst_t_last(struct rb_table *tree, int n)  {

#line 579 "rb-test.c"

#line 579 "rb-test.c"
struct rb_traverser trav;
#line 580 "rb-test.c"

#line 580 "rb-test.c"
int *last;
#line 582 "rb-test.c"
last = rb_t_last((&trav), tree); 
#line 583 "rb-test.c"
if (last == (((void *)0)) || (*last) != n - 1){
{ 
#line 586 "rb-test.c"
printf("    Last item test failed: expected %d, got %d\n", n - 1, (last != (((void *)0))?(*last):(-1))); 
#line 587 "rb-test.c"
return 0; } }
#line 590 "rb-test.c"
return 1; }
 
#line 595 "rb-test.c"
static int test_bst_t_find(struct rb_table *tree, int n)  {

#line 596 "rb-test.c"

#line 596 "rb-test.c"
int i;
#line 598 "rb-test.c"
for(i = 0;i < n;i++) { { 
#line 600 "rb-test.c"

#line 600 "rb-test.c"
struct rb_traverser trav;
#line 601 "rb-test.c"

#line 601 "rb-test.c"
int *iter;
#line 603 "rb-test.c"
iter = rb_t_find((&trav), tree, (&i)); 
#line 604 "rb-test.c"
if (iter == (((void *)0)) || (*iter) != i){
{ 
#line 607 "rb-test.c"
printf("    Find item test failed: looked for %d, got %d\n", i, (iter != (((void *)0))?(*iter):(-1))); 
#line 608 "rb-test.c"
return 0; } }} } 
#line 612 "rb-test.c"
return 1; }
 
#line 617 "rb-test.c"
static int test_bst_t_insert(struct rb_table *tree, int n)  {

#line 618 "rb-test.c"

#line 618 "rb-test.c"
int i;
#line 620 "rb-test.c"
for(i = 0;i < n;i++) { { 
#line 622 "rb-test.c"

#line 622 "rb-test.c"
struct rb_traverser trav;
#line 623 "rb-test.c"

#line 623 "rb-test.c"
int *iter;
#line 625 "rb-test.c"
iter = rb_t_insert((&trav), tree, (&i)); 
#line 626 "rb-test.c"
if (iter == (((void *)0)) || iter == (&i) || (*iter) != i){
{ 
#line 629 "rb-test.c"
printf("    Insert item test failed: inserted dup %d, got %d\n", i, (iter != (((void *)0))?(*iter):(-1))); 
#line 630 "rb-test.c"
return 0; } }} } 
#line 634 "rb-test.c"
return 1; }
 
#line 639 "rb-test.c"
static int test_bst_t_next(struct rb_table *tree, int n)  {

#line 640 "rb-test.c"

#line 640 "rb-test.c"
struct rb_traverser trav;
#line 641 "rb-test.c"

#line 641 "rb-test.c"
int i;
#line 643 "rb-test.c"
rb_t_init((&trav), tree); 
#line 644 "rb-test.c"
for(i = 0;i < n;i++) { { 
#line 646 "rb-test.c"

#line 646 "rb-test.c"
int *iter = rb_t_next((&trav));
#line 647 "rb-test.c"
if (iter == (((void *)0)) || (*iter) != i){
{ 
#line 650 "rb-test.c"
printf("    Next item test failed: expected %d, got %d\n", i, (iter != (((void *)0))?(*iter):(-1))); 
#line 651 "rb-test.c"
return 0; } }} } 
#line 655 "rb-test.c"
return 1; }
 
#line 660 "rb-test.c"
static int test_bst_t_prev(struct rb_table *tree, int n)  {

#line 661 "rb-test.c"

#line 661 "rb-test.c"
struct rb_traverser trav;
#line 662 "rb-test.c"

#line 662 "rb-test.c"
int i;
#line 664 "rb-test.c"
rb_t_init((&trav), tree); 
#line 665 "rb-test.c"
for(i = n - 1;i >= 0;i--) { { 
#line 667 "rb-test.c"

#line 667 "rb-test.c"
int *iter = rb_t_prev((&trav));
#line 668 "rb-test.c"
if (iter == (((void *)0)) || (*iter) != i){
{ 
#line 671 "rb-test.c"
printf("    Previous item test failed: expected %d, got %d\n", i, (iter != (((void *)0))?(*iter):(-1))); 
#line 672 "rb-test.c"
return 0; } }} } 
#line 676 "rb-test.c"
return 1; }
 
#line 681 "rb-test.c"
static int test_bst_copy(struct rb_table *tree, int n)  {

#line 682 "rb-test.c"

#line 682 "rb-test.c"
struct rb_table *copy = rb_copy(tree, (((void *)0)), (((void *)0)), (((void *)0)));
#line 683 "rb-test.c"

#line 683 "rb-test.c"
int okay = compare_trees((tree->rb_root), (copy->rb_root));
#line 685 "rb-test.c"
rb_destroy(copy, (((void *)0))); 
#line 687 "rb-test.c"
return okay; }
 
#line 698 "rb-test.c"
int test_overflow(struct libavl_allocator *allocator, int order[], int n, int verbosity)  {

#line 700 "rb-test.c"

#line 700 "rb-test.c"
typedef int test_func(struct rb_table *, int n);
#line 703 "rb-test.c"

#line 707 "rb-test.c"
struct test { test_func *func; const char *name; };
#line 710 "rb-test.c"

#line 719 "rb-test.c"
static const struct test test[] = {{test_bst_t_first,"first item"},{test_bst_t_last,"last item"},{test_bst_t_find,"find item"},{test_bst_t_insert,"insert item"},{test_bst_t_next,"next item"},{test_bst_t_prev,"previous item"},{test_bst_copy,"copy tree"},};
#line 721 "rb-test.c"

#line 721 "rb-test.c"
const struct test *i;
#line 724 "rb-test.c"
for(i = test;i < test + sizeof test / sizeof  *test;i++) { { 
#line 726 "rb-test.c"

#line 726 "rb-test.c"
struct rb_table *tree;
#line 727 "rb-test.c"

#line 727 "rb-test.c"
int j;
#line 729 "rb-test.c"
if (verbosity >= 2){
printf("  Running %s test...\n", (i->name)); }
#line 732 "rb-test.c"
tree = rb_create(compare_ints, (((void *)0)), allocator); 
#line 733 "rb-test.c"
if (tree == (((void *)0))){
{ 
#line 735 "rb-test.c"
printf("    Out of memory creating tree.\n"); 
#line 736 "rb-test.c"
return 1; } }
#line 739 "rb-test.c"
for(j = 0;j < n;j++) { { 
#line 741 "rb-test.c"

#line 741 "rb-test.c"
void **p = rb_probe(tree, (&order[j]));
#line 742 "rb-test.c"
if (p == (((void *)0)) || (*p) != (&order[j])){
{ 
#line 748 "rb-test.c"
if (p == (((void *)0)) && verbosity >= 0){
printf("    Out of memory in insertion.\n"); }else{
if (p != (((void *)0))){
printf("    Duplicate item in tree!\n"); }}
#line 748 "rb-test.c"
rb_destroy(tree, (((void *)0))); 
#line 749 "rb-test.c"
return p == (((void *)0)); } }} } 
#line 753 "rb-test.c"
if ((i->func)(tree, n) == 0){
return 0; }
#line 756 "rb-test.c"
if (verify_tree(tree, order, n) == 0){
return 0; }
#line 758 "rb-test.c"
rb_destroy(tree, (((void *)0))); } } 
#line 761 "rb-test.c"
return 1; }
 
