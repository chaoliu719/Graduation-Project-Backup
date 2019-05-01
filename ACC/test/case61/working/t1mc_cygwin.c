
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


# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "t1mc_mc.c" 
# 1 "/usr/include/stdlib.h" 1 3 4
# 10 "/usr/include/stdlib.h" 3 4
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
# 11 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 1 3 4
# 213 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3 4
typedef unsigned int size_t; 
#line 325 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h"
typedef short unsigned int wchar_t; 
# 325 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3 4
# 15 "/usr/include/stdlib.h" 2 3 4
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
typedef struct {int __count; union { wint_t __wch; unsigned char __wchb[4]; 
}__value; 
}_mbstate_t; 
#line 37 "/usr/include/sys/_types.h"
typedef  _LOCK_T _flock_t; 
#line 40 "/usr/include/sys/_types.h"
typedef void *_iconv_t; 
# 25 "/usr/include/sys/_types.h" 2 3 4
# 19 "/usr/include/sys/reent.h" 2 3 4
typedef unsigned long __ULong; 
#line 45 "/usr/include/sys/reent.h"
struct _Bigint {struct _Bigint *_next; int _k,_maxwds,_sign,_wds;  __ULong _x[1]; 
}; 
#line 59 "/usr/include/sys/reent.h"
struct __tm {int __tm_sec; int __tm_min; int __tm_hour; int __tm_mday; int __tm_mon; int __tm_year; int __tm_wday; int __tm_yday; int __tm_isdst; 
}; 
#line 75 "/usr/include/sys/reent.h"
struct _on_exit_args {void *_fnargs[32]; void *_dso_handle[32];  __ULong _fntypes;  __ULong _is_cxa; 
}; 
# 40 "/usr/include/sys/reent.h" 3 4
# 91 "/usr/include/sys/reent.h" 3 4
struct _atexit {struct _atexit *_next; int _ind; void (*_fns[32])(void ); struct _on_exit_args _on_exit_args; 
}; 
#line 104 "/usr/include/sys/reent.h"
struct __sbuf {unsigned char *_base; int _size; 
}; 
#line 111 "/usr/include/sys/reent.h"
typedef long _fpos_t; 
#line 115 "/usr/include/sys/reent.h"
typedef  _off64_t _fpos64_t; 
# 101 "/usr/include/sys/reent.h" 3 4
# 211 "/usr/include/sys/reent.h" 3 4
struct __sFILE {unsigned char *_p; int _r; int _w; short _flags; short _file; struct __sbuf _bf; int _lbfsize; void *_cookie;  _ssize_t  __attribute__  (( __cdecl__ )) (*_read)(void *_cookie, char *_buf, int _n);  _ssize_t  __attribute__  (( __cdecl__ )) (*_write)(void *_cookie, const char *_buf, int _n);  _fpos_t  __attribute__  (( __cdecl__ )) (*_seek)(void *_cookie,  _fpos_t _offset, int _whence); int  __attribute__  (( __cdecl__ )) (*_close)(void *_cookie); struct __sbuf _ub; unsigned char *_up; int _ur; unsigned char _ubuf[3]; unsigned char _nbuf[1]; struct __sbuf _lb; int _blksize; int _offset; struct _reent *_data;  _flock_t _lock; 
}; 
#line 256 "/usr/include/sys/reent.h"
struct __sFILE64 {unsigned char *_p; int _r; int _w; short _flags; short _file; struct __sbuf _bf; int _lbfsize; struct _reent *_data; void *_cookie;  _ssize_t  __attribute__  (( __cdecl__ )) (*_read)(void *_cookie, char *_buf, int _n);  _ssize_t  __attribute__  (( __cdecl__ )) (*_write)(void *_cookie, const char *_buf, int _n);  _fpos_t  __attribute__  (( __cdecl__ )) (*_seek)(void *_cookie,  _fpos_t _offset, int _whence); int  __attribute__  (( __cdecl__ )) (*_close)(void *_cookie); struct __sbuf _ub; unsigned char *_up; int _ur; unsigned char _ubuf[3]; unsigned char _nbuf[1]; struct __sbuf _lb; int _blksize; int _flags2;  _off64_t _offset;  _fpos64_t  __attribute__  (( __cdecl__ )) (*_seek64)(void *_cookie,  _fpos64_t _offset, int _whence);  _flock_t _lock; 
}; 
#line 257 "/usr/include/sys/reent.h"
typedef struct __sFILE64 __FILE; 
#line 267 "/usr/include/sys/reent.h"
struct _glue {struct _glue *_next; int _niobs;  __FILE *_iobs; 
}; 
#line 298 "/usr/include/sys/reent.h"
struct _rand48 {unsigned short _seed[3]; unsigned short _mult[3]; unsigned short _add; 
}; 
# 290 "/usr/include/sys/reent.h" 3 4
# 640 "/usr/include/sys/reent.h" 3 4
struct _reent {int _errno;  __FILE *_stdin,*_stdout,*_stderr; int _inc; char _emergency[25]; int _current_category; const char *_current_locale; int __sdidinit; void  __attribute__  (( __cdecl__ )) (*__cleanup)(struct _reent *); struct _Bigint *_result; int _result_k; struct _Bigint *_p5s; struct _Bigint **_freelist; int _cvtlen; char *_cvtbuf; union {struct {unsigned int _unused_rand; char *_strtok_last; char _asctime_buf[26]; struct __tm _localtime_buf; int _gamma_signgam;  __extension__ unsigned long long _rand_next; struct _rand48 _r48;  _mbstate_t _mblen_state;  _mbstate_t _mbtowc_state;  _mbstate_t _wctomb_state; char _l64a_buf[8]; char _signal_buf[24]; int _getdate_err;  _mbstate_t _mbrlen_state;  _mbstate_t _mbrtowc_state;  _mbstate_t _mbsrtowcs_state;  _mbstate_t _wcrtomb_state;  _mbstate_t _wcsrtombs_state; 
}_reent; struct {unsigned char *_nextf[30]; unsigned int _nmalloc[30]; 
}_unused; 
}_new; struct _atexit *_atexit; struct _atexit _atexit0; void (**(_sig_func))(int ); struct _glue __sglue;  __FILE __sf[3]; 
}; 
#line 799 "/usr/include/sys/reent.h"
extern struct _reent *_impure_ptr; 
#line 800 "/usr/include/sys/reent.h"
extern struct _reent *const _global_impure_ptr; 
#line 802 "/usr/include/sys/reent.h"
void _reclaim_reent(struct _reent *); 
#line 810 "/usr/include/sys/reent.h"
struct _reent * __attribute__  (( __cdecl__ )) __getreent(void ); 
# 799 "/usr/include/sys/reent.h" 3 4
# 17 "/usr/include/stdlib.h" 2 3 4
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
typedef struct {int quot; int rem; 
}div_t; 
#line 38 "/usr/include/stdlib.h"
typedef struct {long quot; long rem; 
}ldiv_t; 
#line 45 "/usr/include/stdlib.h"
typedef struct {long long int quot; long long int rem; 
}lldiv_t; 
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
static inline void*  malloc__t1mc_cygwin__0 (size_t __size  )  ; 

# 183 "/usr/include/stdlib.h" 3 4
# 3 "t1mc_mc.c" 2
void foo()  
# 380 "t1mc_cygwin.c"
{



# 385 "t1mc_cygwin.c"
{

#line 4 "t1mc_mc.c"

#line 4 "t1mc_mc.c"
char *c;
#line 5 "t1mc_mc.c"
printf("call malloc in foo\n"); 
#line 6 "t1mc_mc.c"
c = ((char *)malloc__t1mc_cygwin__0(33)); 
#line 8 "t1mc_mc.c"
free(c); 
# 398 "t1mc_cygwin.c"

}

# 402 "t1mc_cygwin.c"

}
  void __utac_acc__t1ac_cygwin__1 (void);

  void* malloc (size_t __size  ) ; 

# 409 "t1mc_cygwin.c"
static inline void*  malloc__t1mc_cygwin__0 (size_t __size  ) {

# 412 "t1mc_cygwin.c"
void* retValue_acc;

{
__utac_acc__t1ac_cygwin__1();

}

# 420 "t1mc_cygwin.c"
retValue_acc = malloc ( __size ) ;  

# 423 "t1mc_cygwin.c"
return (void* )retValue_acc;
}
 
static inline void*  malloc__t1mc_cygwin__1 (size_t __size  )  ; 

#line 11 "t1mc_mc.c"
int main()  
# 431 "t1mc_cygwin.c"
{
# 433 "t1mc_cygwin.c"
int retValue_acc;




# 439 "t1mc_cygwin.c"
{

#line 12 "t1mc_mc.c"

#line 12 "t1mc_mc.c"
char *a;
#line 15 "t1mc_mc.c"
printf("call malloc in main\n"); 
#line 16 "t1mc_mc.c"
a = ((char *)malloc__t1mc_cygwin__1(24)); 
#line 18 "t1mc_mc.c"
free(a); 
#line 20 "t1mc_mc.c"
foo(); 
#line 21 "t1mc_mc.c"

# 456 "t1mc_cygwin.c"
retValue_acc = 0;
# 458 "t1mc_cygwin.c"
return (int )retValue_acc;
 
# 461 "t1mc_cygwin.c"

}

# 465 "t1mc_cygwin.c"
return (int )retValue_acc;

# 468 "t1mc_cygwin.c"

}
  void __utac_acc__t1ac_cygwin__1 (void);

  void* malloc (size_t __size  ) ; 

# 475 "t1mc_cygwin.c"
static inline void*  malloc__t1mc_cygwin__1 (size_t __size  ) {

# 478 "t1mc_cygwin.c"
void* retValue_acc;

{
__utac_acc__t1ac_cygwin__1();

}

# 486 "t1mc_cygwin.c"
retValue_acc = malloc ( __size ) ;  

# 489 "t1mc_cygwin.c"
return (void* )retValue_acc;
}
 
