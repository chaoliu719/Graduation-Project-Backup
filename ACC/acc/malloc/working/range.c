
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


# 1 "range.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "range.c" 
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
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
# 25 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3 4
typedef long unsigned int size_t; 
#line 323 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h"
typedef int wchar_t; 
# 323 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3 4
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
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
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
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int __bswap_32(unsigned int __bsx)  
# 191 "range.c"
{
# 193 "range.c"
unsigned int retValue_acc;




# 199 "range.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 204 "range.c"
retValue_acc = __builtin_bswap32(__bsx);
# 206 "range.c"
return (unsigned int )retValue_acc;
 
# 209 "range.c"

}

# 213 "range.c"
return (unsigned int )retValue_acc;

# 216 "range.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 222 "range.c"
{
# 224 "range.c"
__uint64_t retValue_acc;




# 230 "range.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 235 "range.c"
retValue_acc = __builtin_bswap64(__bsx);
# 237 "range.c"
return (__uint64_t )retValue_acc;
 
# 240 "range.c"

}

# 244 "range.c"
return (__uint64_t )retValue_acc;

# 247 "range.c"

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
# 302 "range.c"
{
# 304 "range.c"
int retValue_acc;




# 310 "range.c"
{

#line 280 "/usr/include/stdlib.h"

# 315 "range.c"
retValue_acc = ((int )strtol(__nptr, ((char **)(((void *)0))), 10));
# 317 "range.c"
return (int )retValue_acc;
 
# 320 "range.c"

}

# 324 "range.c"
return (int )retValue_acc;

# 327 "range.c"

}
 
#line 284 "/usr/include/stdlib.h"
extern __inline  __attribute__  (( __gnu_inline__ )) long int  __attribute__  (( __nothrow__ )) atol(const char *__nptr)  
# 333 "range.c"
{
# 335 "range.c"
long int retValue_acc;




# 341 "range.c"
{

#line 285 "/usr/include/stdlib.h"

# 346 "range.c"
retValue_acc = strtol(__nptr, ((char **)(((void *)0))), 10);
# 348 "range.c"
return (long int )retValue_acc;
 
# 351 "range.c"

}

# 355 "range.c"
return (long int )retValue_acc;

# 358 "range.c"

}
 
#line 293 "/usr/include/stdlib.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ )) long long int  __attribute__  (( __nothrow__ )) atoll(const char *__nptr)  
# 364 "range.c"
{
# 366 "range.c"
long long int retValue_acc;




# 372 "range.c"
{

#line 294 "/usr/include/stdlib.h"

# 377 "range.c"
retValue_acc = strtoll(__nptr, ((char **)(((void *)0))), 10);
# 379 "range.c"
return (long long int )retValue_acc;
 
# 382 "range.c"

}

# 386 "range.c"
return (long long int )retValue_acc;

# 389 "range.c"

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
#line 86 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __off_t off_t; 
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __pid_t pid_t; 
#line 104 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __id_t id_t; 
#line 109 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __ssize_t ssize_t; 
#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 116 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 122 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __key_t key_t; 
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
# 540 "range.c"
{
# 542 "range.c"
unsigned int retValue_acc;




# 548 "range.c"
{

#line 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 553 "range.c"
retValue_acc = ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff));
# 555 "range.c"
return (unsigned int )retValue_acc;
 
# 558 "range.c"

}

# 562 "range.c"
return (unsigned int )retValue_acc;

# 565 "range.c"

}
 
#line 46 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  
# 571 "range.c"
{
# 573 "range.c"
unsigned int retValue_acc;




# 579 "range.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 584 "range.c"
retValue_acc = (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff));
# 586 "range.c"
return (unsigned int )retValue_acc;
 
# 589 "range.c"

}

# 593 "range.c"
return (unsigned int )retValue_acc;

# 596 "range.c"

}
 
#line 52 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  
# 602 "range.c"
{
# 604 "range.c"
unsigned long long int retValue_acc;




# 610 "range.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 615 "range.c"
retValue_acc = ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32));
# 617 "range.c"
return (unsigned long long int )retValue_acc;
 
# 620 "range.c"

}

# 624 "range.c"
return (unsigned long long int )retValue_acc;

# 627 "range.c"

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
# 819 "range.c"
{
# 821 "range.c"
void* retValue_acc;




# 827 "range.c"
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

# 860 "range.c"
retValue_acc = ((void *)__p);
# 862 "range.c"
return (void* )retValue_acc;
 }}} } 
#line 42 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

# 867 "range.c"
retValue_acc = (((void *)0));
# 869 "range.c"
return (void* )retValue_acc;
 
# 872 "range.c"

}

# 876 "range.c"
return (void* )retValue_acc;

# 879 "range.c"

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
# 939 "range.c"
{
# 941 "range.c"
double retValue_acc;




# 947 "range.c"
{

#line 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"

# 952 "range.c"
retValue_acc = strtod(__nptr, ((char **)(((void *)0))));
# 954 "range.c"
return (double )retValue_acc;
 
# 957 "range.c"

}

# 961 "range.c"
return (double )retValue_acc;

# 964 "range.c"

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
# 978 "range.c"
{
# 980 "range.c"
char* retValue_acc;




# 986 "range.c"
{

#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__resolved, 2 > 1) != (( size_t )(-1))){
{ 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 994 "range.c"
retValue_acc = __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
# 996 "range.c"
return (char* )retValue_acc;
 } }
#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1001 "range.c"
retValue_acc = __realpath_alias(__name, __resolved);
# 1003 "range.c"
return (char* )retValue_acc;
 
# 1006 "range.c"

}

# 1010 "range.c"
return (char* )retValue_acc;

# 1013 "range.c"

}
 
#line 53 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ptsname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ptsname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ptsname_r called with buflen bigger than ""size of buf" )  )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ptsname_r(int __fd, char *__buf,  size_t __buflen)  
# 1025 "range.c"
{
# 1027 "range.c"
int retValue_acc;




# 1033 "range.c"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__buflen))){

# 1042 "range.c"
retValue_acc = __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 1044 "range.c"
return (int )retValue_acc;
 }
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 1050 "range.c"
retValue_acc = __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 1052 "range.c"
return (int )retValue_acc;
 }} }
#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1057 "range.c"
retValue_acc = __ptsname_r_alias(__fd, __buf, __buflen);
# 1059 "range.c"
return (int )retValue_acc;
 
# 1062 "range.c"

}

# 1066 "range.c"
return (int )retValue_acc;

# 1069 "range.c"

}
 
#line 78 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_chk(char *__s,  wchar_t __wchar,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_alias(char *__s,  wchar_t __wchar) __asm__ ("""wctomb") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 84 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) int  __attribute__  (( __nothrow__ )) wctomb(char *__s,  wchar_t __wchar)  
# 1079 "range.c"
{
# 1081 "range.c"
int retValue_acc;




# 1087 "range.c"
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1)) && 16 > __builtin_object_size(__s, 2 > 1)){

# 1093 "range.c"
retValue_acc = __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1));
# 1095 "range.c"
return (int )retValue_acc;
 }
#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1100 "range.c"
retValue_acc = __wctomb_alias(__s, __wchar);
# 1102 "range.c"
return (int )retValue_acc;
 
# 1105 "range.c"

}

# 1109 "range.c"
return (int )retValue_acc;

# 1112 "range.c"

}
 
#line 100 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 101 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_alias( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len) __asm__ ("""mbstowcs") __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk_warn( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__mbstowcs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "mbstowcs called with dst buffer smaller than len ""* sizeof (wchar_t)" )  )) ; 
#line 114 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) mbstowcs( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len)  
# 1124 "range.c"
{
# 1126 "range.c"
size_t retValue_acc;




# 1132 "range.c"
{

#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 1141 "range.c"
retValue_acc = __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 1143 "range.c"
return (size_t )retValue_acc;
 }
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t )){

# 1149 "range.c"
retValue_acc = __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 1151 "range.c"
return (size_t )retValue_acc;
 }} }
#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1156 "range.c"
retValue_acc = __mbstowcs_alias(__dst, __src, __len);
# 1158 "range.c"
return (size_t )retValue_acc;
 
# 1161 "range.c"

}

# 1165 "range.c"
return (size_t )retValue_acc;

# 1168 "range.c"

}
 
#line 131 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_alias(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len) __asm__ ("""wcstombs") __attribute__  (( __nothrow__ )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk_warn(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__wcstombs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "wcstombs called with dst buffer smaller than len" )  )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) wcstombs(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len)  
# 1180 "range.c"
{
# 1182 "range.c"
size_t retValue_acc;




# 1188 "range.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 1197 "range.c"
retValue_acc = __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 1199 "range.c"
return (size_t )retValue_acc;
 }
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1)){

# 1205 "range.c"
retValue_acc = __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 1207 "range.c"
return (size_t )retValue_acc;
 }} }
#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1212 "range.c"
retValue_acc = __wcstombs_alias(__dst, __src, __len);
# 1214 "range.c"
return (size_t )retValue_acc;
 
# 1217 "range.c"

}

# 1221 "range.c"
return (size_t )retValue_acc;

# 1224 "range.c"

}
 
# 960 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 2 "range.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
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
# 110 "/usr/include/stdio.h" 3 4
typedef  _G_fpos_t fpos_t; 
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
# 1553 "range.c"
{
# 1555 "range.c"
int retValue_acc;




# 1561 "range.c"
{

#line 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1566 "range.c"
retValue_acc = _IO_getc(stdin);
# 1568 "range.c"
return (int )retValue_acc;
 
# 1571 "range.c"

}

# 1575 "range.c"
return (int )retValue_acc;

# 1578 "range.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fgetc_unlocked( FILE *__fp)  
# 1584 "range.c"
{
# 1586 "range.c"
int retValue_acc;




# 1592 "range.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1597 "range.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 1599 "range.c"
return (int )retValue_acc;
 
# 1602 "range.c"

}

# 1606 "range.c"
return (int )retValue_acc;

# 1609 "range.c"

}
 
#line 64 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getc_unlocked( FILE *__fp)  
# 1615 "range.c"
{
# 1617 "range.c"
int retValue_acc;




# 1623 "range.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1628 "range.c"
retValue_acc = ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++))));
# 1630 "range.c"
return (int )retValue_acc;
 
# 1633 "range.c"

}

# 1637 "range.c"
return (int )retValue_acc;

# 1640 "range.c"

}
 
#line 71 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int getchar_unlocked(void )  
# 1646 "range.c"
{
# 1648 "range.c"
int retValue_acc;




# 1654 "range.c"
{

#line 72 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1659 "range.c"
retValue_acc = ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++))));
# 1661 "range.c"
return (int )retValue_acc;
 
# 1664 "range.c"

}

# 1668 "range.c"
return (int )retValue_acc;

# 1671 "range.c"

}
 
#line 80 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar(int __c)  
# 1677 "range.c"
{
# 1679 "range.c"
int retValue_acc;




# 1685 "range.c"
{

#line 81 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1690 "range.c"
retValue_acc = _IO_putc(__c, stdout);
# 1692 "range.c"
return (int )retValue_acc;
 
# 1695 "range.c"

}

# 1699 "range.c"
return (int )retValue_acc;

# 1702 "range.c"

}
 
#line 89 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int fputc_unlocked(int __c,  FILE *__stream)  
# 1708 "range.c"
{
# 1710 "range.c"
int retValue_acc;




# 1716 "range.c"
{

#line 90 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1721 "range.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 1723 "range.c"
return (int )retValue_acc;
 
# 1726 "range.c"

}

# 1730 "range.c"
return (int )retValue_acc;

# 1733 "range.c"

}
 
#line 99 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putc_unlocked(int __c,  FILE *__stream)  
# 1739 "range.c"
{
# 1741 "range.c"
int retValue_acc;




# 1747 "range.c"
{

#line 100 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1752 "range.c"
retValue_acc = ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c)))));
# 1754 "range.c"
return (int )retValue_acc;
 
# 1757 "range.c"

}

# 1761 "range.c"
return (int )retValue_acc;

# 1764 "range.c"

}
 
#line 106 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int putchar_unlocked(int __c)  
# 1770 "range.c"
{
# 1772 "range.c"
int retValue_acc;




# 1778 "range.c"
{

#line 107 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1783 "range.c"
retValue_acc = ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c)))));
# 1785 "range.c"
return (int )retValue_acc;
 
# 1788 "range.c"

}

# 1792 "range.c"
return (int )retValue_acc;

# 1795 "range.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  
# 1801 "range.c"
{
# 1803 "range.c"
int retValue_acc;




# 1809 "range.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1814 "range.c"
retValue_acc = ((((__stream)->_flags) & 0x10) != 0);
# 1816 "range.c"
return (int )retValue_acc;
 
# 1819 "range.c"

}

# 1823 "range.c"
return (int )retValue_acc;

# 1826 "range.c"

}
 
#line 133 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern __inline  __attribute__  (( __gnu_inline__ )) int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  
# 1832 "range.c"
{
# 1834 "range.c"
int retValue_acc;




# 1840 "range.c"
{

#line 134 "/usr/include/x86_64-linux-gnu/bits/stdio.h"

# 1845 "range.c"
retValue_acc = ((((__stream)->_flags) & 0x20) != 0);
# 1847 "range.c"
return (int )retValue_acc;
 
# 1850 "range.c"

}

# 1854 "range.c"
return (int )retValue_acc;

# 1857 "range.c"

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
# 1870 "range.c"
{
# 1872 "range.c"
int retValue_acc;




# 1878 "range.c"
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1883 "range.c"
retValue_acc = __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 1885 "range.c"
return (int )retValue_acc;
 
# 1888 "range.c"

}

# 1892 "range.c"
return (int )retValue_acc;

# 1895 "range.c"

}
 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsprintf(char *__restrict __s, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1901 "range.c"
{
# 1903 "range.c"
int retValue_acc;




# 1909 "range.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1914 "range.c"
retValue_acc = __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 1916 "range.c"
return (int )retValue_acc;
 
# 1919 "range.c"

}

# 1923 "range.c"
return (int )retValue_acc;

# 1926 "range.c"

}
 
#line 54 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __snprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 57 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vsnprintf_chk(char *__restrict __s,  size_t __n, int __flag,  size_t __slen, const char *__restrict __format,  __gnuc_va_list __ap) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) snprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt, ...)  
# 1936 "range.c"
{
# 1938 "range.c"
int retValue_acc;




# 1944 "range.c"
{

#line 65 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1949 "range.c"
retValue_acc = __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());
# 1951 "range.c"
return (int )retValue_acc;
 
# 1954 "range.c"

}

# 1958 "range.c"
return (int )retValue_acc;

# 1961 "range.c"

}
 
#line 76 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) vsnprintf(char *__restrict __s,  size_t __n, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 1967 "range.c"
{
# 1969 "range.c"
int retValue_acc;




# 1975 "range.c"
{

#line 78 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 1980 "range.c"
retValue_acc = __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);
# 1982 "range.c"
return (int )retValue_acc;
 
# 1985 "range.c"

}

# 1989 "range.c"
return (int )retValue_acc;

# 1992 "range.c"

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
# 2006 "range.c"
{
# 2008 "range.c"
int retValue_acc;




# 2014 "range.c"
{

#line 98 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2019 "range.c"
retValue_acc = __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack());
# 2021 "range.c"
return (int )retValue_acc;
 
# 2024 "range.c"

}

# 2028 "range.c"
return (int )retValue_acc;

# 2031 "range.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int printf(const char *__restrict __fmt, ...)  
# 2037 "range.c"
{
# 2039 "range.c"
int retValue_acc;




# 2045 "range.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2050 "range.c"
retValue_acc = __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack());
# 2052 "range.c"
return (int )retValue_acc;
 
# 2055 "range.c"

}

# 2059 "range.c"
return (int )retValue_acc;

# 2062 "range.c"

}
 
#line 115 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vprintf(const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 2068 "range.c"
{
# 2070 "range.c"
int retValue_acc;




# 2076 "range.c"
{

#line 117 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2081 "range.c"
retValue_acc = __vfprintf_chk(stdout, 2 - 1, __fmt, __ap);
# 2083 "range.c"
return (int )retValue_acc;
 
# 2086 "range.c"

}

# 2090 "range.c"
return (int )retValue_acc;

# 2093 "range.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vfprintf( FILE *__restrict __stream, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 2099 "range.c"
{
# 2101 "range.c"
int retValue_acc;




# 2107 "range.c"
{

#line 127 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2112 "range.c"
retValue_acc = __vfprintf_chk(__stream, 2 - 1, __fmt, __ap);
# 2114 "range.c"
return (int )retValue_acc;
 
# 2117 "range.c"

}

# 2121 "range.c"
return (int )retValue_acc;

# 2124 "range.c"

}
 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __dprintf_chk(int __fd, int __flag, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern int __vdprintf_chk(int __fd, int __flag, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int dprintf(int __fd, const char *__restrict __fmt, ...)  
# 2134 "range.c"
{
# 2136 "range.c"
int retValue_acc;




# 2142 "range.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2147 "range.c"
retValue_acc = __dprintf_chk(__fd, 2 - 1, __fmt, __builtin_va_arg_pack());
# 2149 "range.c"
return (int )retValue_acc;
 
# 2152 "range.c"

}

# 2156 "range.c"
return (int )retValue_acc;

# 2159 "range.c"

}
 
#line 151 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __ap)  
# 2165 "range.c"
{
# 2167 "range.c"
int retValue_acc;




# 2173 "range.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2178 "range.c"
retValue_acc = __vdprintf_chk(__fd, 2 - 1, __fmt, __ap);
# 2180 "range.c"
return (int )retValue_acc;
 
# 2183 "range.c"

}

# 2187 "range.c"
return (int )retValue_acc;

# 2190 "range.c"

}
 
#line 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_chk(char *__str,  size_t ) __attribute__  (( __warn_unused_result__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__gets_warn(char *__str) __asm__ ("""gets") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use fgets or getline instead, gets can't ""specify buffer size" )  )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *gets(char *__str)  
# 2200 "range.c"
{
# 2202 "range.c"
char* retValue_acc;




# 2208 "range.c"
{

#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__str, 2 > 1) != (( size_t )(-1))){

# 2214 "range.c"
retValue_acc = __gets_chk(__str, __builtin_object_size(__str, 2 > 1));
# 2216 "range.c"
return (char* )retValue_acc;
 }
#line 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2221 "range.c"
retValue_acc = __gets_warn(__str);
# 2223 "range.c"
return (char* )retValue_acc;
 
# 2226 "range.c"

}

# 2230 "range.c"
return (char* )retValue_acc;

# 2233 "range.c"

}
 
#line 242 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 243 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_alias(char *__restrict __s, int __n,  FILE *__restrict __stream) __asm__ ("""fgets") __attribute__  (( __warn_unused_result__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern char *__fgets_chk_warn(char *__restrict __s,  size_t __size, int __n,  FILE *__restrict __stream) __asm__ ("""__fgets_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fgets called with bigger size than length ""of destination buffer" )  )) ; 
#line 254 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream)  
# 2245 "range.c"
{
# 2247 "range.c"
char* retValue_acc;




# 2253 "range.c"
{

#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1))){
{ 
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__n)) || __n <= 0){

# 2262 "range.c"
retValue_acc = __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 2264 "range.c"
return (char* )retValue_acc;
 }
#line 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((( size_t )__n) > __builtin_object_size(__s, 2 > 1)){

# 2270 "range.c"
retValue_acc = __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream);
# 2272 "range.c"
return (char* )retValue_acc;
 }} }
#line 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2277 "range.c"
retValue_acc = __fgets_alias(__s, __n, __stream);
# 2279 "range.c"
return (char* )retValue_acc;
 
# 2282 "range.c"

}

# 2286 "range.c"
return (char* )retValue_acc;

# 2289 "range.c"

}
 
#line 268 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __attribute__  (( __warn_unused_result__ )) ; 
#line 269 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_alias(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""fread") __attribute__  (( __warn_unused_result__ )) ; 
#line 278 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern  size_t __fread_chk_warn(void *__restrict __ptr,  size_t __ptrlen,  size_t __size,  size_t __n,  FILE *__restrict __stream) __asm__ ("""__fread_chk") __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "fread called with bigger size * nmemb than length ""of destination buffer" )  )) ; 
#line 283 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ ))  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream)  
# 2301 "range.c"
{
# 2303 "range.c"
size_t retValue_acc;




# 2309 "range.c"
{

#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 2318 "range.c"
retValue_acc = __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 2320 "range.c"
return (size_t )retValue_acc;
 }
#line 291 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 2326 "range.c"
retValue_acc = __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 2328 "range.c"
return (size_t )retValue_acc;
 }} }
#line 294 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2333 "range.c"
retValue_acc = __fread_alias(__ptr, __size, __n, __stream);
# 2335 "range.c"
return (size_t )retValue_acc;
 
# 2338 "range.c"

}

# 2342 "range.c"
return (size_t )retValue_acc;

# 2345 "range.c"

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
# 2358 "range.c"
{
# 2360 "range.c"
size_t retValue_acc;




# 2366 "range.c"
{

#line 359 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__builtin_object_size(__ptr, 0) != (( size_t )(-1))){
{ 
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if ((!__builtin_constant_p(__size)) || (!__builtin_constant_p(__n)) || (__size | __n) >= (((( size_t )1)) << (8 * sizeof ( size_t ) / 2))){

# 2375 "range.c"
retValue_acc = __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 2377 "range.c"
return (size_t )retValue_acc;
 }
#line 353 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if (__size * __n > __builtin_object_size(__ptr, 0)){

# 2383 "range.c"
retValue_acc = __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
# 2385 "range.c"
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

# 2402 "range.c"
retValue_acc = 0;
# 2404 "range.c"
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

# 2420 "range.c"
retValue_acc = (__cptr - ((char *)__ptr)) / __size;
# 2422 "range.c"
return (size_t )retValue_acc;
 } }
#line 379 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"

# 2427 "range.c"
retValue_acc = __fread_unlocked_alias(__ptr, __size, __n, __stream);
# 2429 "range.c"
return (size_t )retValue_acc;
 
# 2432 "range.c"

}

# 2436 "range.c"
return (size_t )retValue_acc;

# 2439 "range.c"

}
 
# 938 "/usr/include/stdio.h" 2 3 4
# 3 "range.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 71 "/usr/include/assert.h" 3 4
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 76 "/usr/include/assert.h"
extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 82 "/usr/include/assert.h"
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 4 "range.c" 2
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
# 6 "range.c" 2
# 1 "memlib.h" 1
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
# 2771 "range.c"
{
# 2773 "range.c"
ssize_t retValue_acc;




# 2779 "range.c"
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 0) != (( size_t )(-1))){
{ 
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__nbytes))){

# 2788 "range.c"
retValue_acc = __read_chk(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2790 "range.c"
return (ssize_t )retValue_acc;
 }
#line 40 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__nbytes > __builtin_object_size(__buf, 0)){

# 2796 "range.c"
retValue_acc = __read_chk_warn(__fd, __buf, __nbytes, __builtin_object_size(__buf, 0));
# 2798 "range.c"
return (ssize_t )retValue_acc;
 }} }
#line 43 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2803 "range.c"
retValue_acc = __read_alias(__fd, __buf, __nbytes);
# 2805 "range.c"
return (ssize_t )retValue_acc;
 
# 2808 "range.c"

}

# 2812 "range.c"
return (ssize_t )retValue_acc;

# 2815 "range.c"

}
 
#line 126 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_alias(const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlink") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlink_chk_warn(const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlink_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlink called with bigger length ""than size of destination buffer" )  )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlink(const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2827 "range.c"
{
# 2829 "range.c"
ssize_t retValue_acc;




# 2835 "range.c"
{

#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2844 "range.c"
retValue_acc = __readlink_chk(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2846 "range.c"
return (ssize_t )retValue_acc;
 }
#line 146 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2852 "range.c"
retValue_acc = __readlink_chk_warn(__path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2854 "range.c"
return (ssize_t )retValue_acc;
 }} }
#line 149 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2859 "range.c"
retValue_acc = __readlink_alias(__path, __buf, __len);
# 2861 "range.c"
return (ssize_t )retValue_acc;
 
# 2864 "range.c"

}

# 2868 "range.c"
return (ssize_t )retValue_acc;

# 2871 "range.c"

}
 
#line 157 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_alias(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len) __asm__ ("""readlinkat") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  ssize_t __readlinkat_chk_warn(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len,  size_t __buflen) __asm__ ("""__readlinkat_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "readlinkat called with bigger ""length than size of destination ""buffer" )  )) ; 
#line 173 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  ))  __attribute__  (( __warn_unused_result__ ))  ssize_t  __attribute__  (( __nothrow__ )) readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf,  size_t __len)  
# 2883 "range.c"
{
# 2885 "range.c"
ssize_t retValue_acc;




# 2891 "range.c"
{

#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 2900 "range.c"
retValue_acc = __readlinkat_chk(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2902 "range.c"
return (ssize_t )retValue_acc;
 }
#line 179 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__len > __builtin_object_size(__buf, 2 > 1)){

# 2908 "range.c"
retValue_acc = __readlinkat_chk_warn(__fd, __path, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 2910 "range.c"
return (ssize_t )retValue_acc;
 }} }
#line 183 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2915 "range.c"
retValue_acc = __readlinkat_alias(__fd, __path, __buf, __len);
# 2917 "range.c"
return (ssize_t )retValue_acc;
 
# 2920 "range.c"

}

# 2924 "range.c"
return (ssize_t )retValue_acc;

# 2927 "range.c"

}
 
#line 188 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk(char *__buf,  size_t __size,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_alias(char *__buf,  size_t __size) __asm__ ("""getcwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 194 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getcwd_chk_warn(char *__buf,  size_t __size,  size_t __buflen) __asm__ ("""__getcwd_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getcwd caller with bigger length than size of ""destination buffer" )  )) ; 
#line 199 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getcwd(char *__buf,  size_t __size)  
# 2939 "range.c"
{
# 2941 "range.c"
char* retValue_acc;




# 2947 "range.c"
{

#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size))){

# 2956 "range.c"
retValue_acc = __getcwd_chk(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 2958 "range.c"
return (char* )retValue_acc;
 }
#line 205 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size > __builtin_object_size(__buf, 2 > 1)){

# 2964 "range.c"
retValue_acc = __getcwd_chk_warn(__buf, __size, __builtin_object_size(__buf, 2 > 1));
# 2966 "range.c"
return (char* )retValue_acc;
 }} }
#line 208 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 2971 "range.c"
retValue_acc = __getcwd_alias(__buf, __size);
# 2973 "range.c"
return (char* )retValue_acc;
 
# 2976 "range.c"

}

# 2980 "range.c"
return (char* )retValue_acc;

# 2983 "range.c"

}
 
#line 213 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_chk(char *__buf,  size_t buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 215 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern char *__getwd_warn(char *__buf) __asm__ ("""getwd") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "please use getcwd instead, as getwd ""doesn't specify buffer size" )  )) ; 
#line 220 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ ))  __attribute__  (( __warn_unused_result__ )) char * __attribute__  (( __nothrow__ )) getwd(char *__buf)  
# 2993 "range.c"
{
# 2995 "range.c"
char* retValue_acc;




# 3001 "range.c"
{

#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){

# 3007 "range.c"
retValue_acc = __getwd_chk(__buf, __builtin_object_size(__buf, 2 > 1));
# 3009 "range.c"
return (char* )retValue_acc;
 }
#line 223 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3014 "range.c"
retValue_acc = __getwd_warn(__buf);
# 3016 "range.c"
return (char* )retValue_acc;
 
# 3019 "range.c"

}

# 3023 "range.c"
return (char* )retValue_acc;

# 3026 "range.c"

}
 
#line 228 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk(int __name, char *__buf,  size_t __len,  size_t __buflen) __attribute__  (( __nothrow__ )) ; 
#line 229 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_alias(int __name, char *__buf,  size_t __len) __asm__ ("""confstr") __attribute__  (( __nothrow__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern  size_t __confstr_chk_warn(int __name, char *__buf,  size_t __len,  size_t __buflen) __asm__ ("""__confstr_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "confstr called with bigger length than size of destination ""buffer" )  )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) confstr(int __name, char *__buf,  size_t __len)  
# 3038 "range.c"
{
# 3040 "range.c"
size_t retValue_acc;




# 3046 "range.c"
{

#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__len))){

# 3055 "range.c"
retValue_acc = __confstr_chk(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3057 "range.c"
return (size_t )retValue_acc;
 }
#line 244 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) < __len){

# 3063 "range.c"
retValue_acc = __confstr_chk_warn(__name, __buf, __len, __builtin_object_size(__buf, 2 > 1));
# 3065 "range.c"
return (size_t )retValue_acc;
 }} }
#line 247 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3070 "range.c"
retValue_acc = __confstr_alias(__name, __buf, __len);
# 3072 "range.c"
return (size_t )retValue_acc;
 
# 3075 "range.c"

}

# 3079 "range.c"
return (size_t )retValue_acc;

# 3082 "range.c"

}
 
#line 252 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk(int __size,  __gid_t __list[],  size_t __listlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 253 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_alias(int __size,  __gid_t __list[]) __asm__ ("""getgroups") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getgroups_chk_warn(int __size,  __gid_t __list[],  size_t __listlen) __asm__ ("""__getgroups_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getgroups called with bigger group count than what ""can fit into destination buffer" )  )) ; 
#line 263 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getgroups(int __size,  __gid_t __list[])  
# 3094 "range.c"
{
# 3096 "range.c"
int retValue_acc;




# 3102 "range.c"
{

#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__list, 2 > 1) != (( size_t )(-1))){
{ 
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__size)) || __size < 0){

# 3111 "range.c"
retValue_acc = __getgroups_chk(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3113 "range.c"
return (int )retValue_acc;
 }
#line 269 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__size * sizeof ( __gid_t ) > __builtin_object_size(__list, 2 > 1)){

# 3119 "range.c"
retValue_acc = __getgroups_chk_warn(__size, __list, __builtin_object_size(__list, 2 > 1));
# 3121 "range.c"
return (int )retValue_acc;
 }} }
#line 272 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3126 "range.c"
retValue_acc = __getgroups_alias(__size, __list);
# 3128 "range.c"
return (int )retValue_acc;
 
# 3131 "range.c"

}

# 3135 "range.c"
return (int )retValue_acc;

# 3138 "range.c"

}
 
#line 277 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 280 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ttyname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __ttyname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ttyname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ttyname_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 289 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ttyname_r(int __fd, char *__buf,  size_t __buflen)  
# 3150 "range.c"
{
# 3152 "range.c"
int retValue_acc;




# 3158 "range.c"
{

#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3167 "range.c"
retValue_acc = __ttyname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3169 "range.c"
return (int )retValue_acc;
 }
#line 295 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3175 "range.c"
retValue_acc = __ttyname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3177 "range.c"
return (int )retValue_acc;
 }} }
#line 298 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3182 "range.c"
retValue_acc = __ttyname_r_alias(__fd, __buf, __buflen);
# 3184 "range.c"
return (int )retValue_acc;
 
# 3187 "range.c"

}

# 3191 "range.c"
return (int )retValue_acc;

# 3194 "range.c"

}
 
#line 304 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_alias(char *__buf,  size_t __buflen) __asm__ ("""getlogin_r") __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 310 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getlogin_r_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getlogin_r_chk") __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "getlogin_r called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 315 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int getlogin_r(char *__buf,  size_t __buflen)  
# 3206 "range.c"
{
# 3208 "range.c"
int retValue_acc;




# 3214 "range.c"
{

#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3223 "range.c"
retValue_acc = __getlogin_r_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3225 "range.c"
return (int )retValue_acc;
 }
#line 321 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3231 "range.c"
retValue_acc = __getlogin_r_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3233 "range.c"
return (int )retValue_acc;
 }} }
#line 324 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3238 "range.c"
retValue_acc = __getlogin_r_alias(__buf, __buflen);
# 3240 "range.c"
return (int )retValue_acc;
 
# 3243 "range.c"

}

# 3247 "range.c"
return (int )retValue_acc;

# 3250 "range.c"

}
 
#line 331 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 332 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_alias(char *__buf,  size_t __buflen) __asm__ ("""gethostname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __gethostname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__gethostname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warning__ ( "gethostname called with bigger buflen than ""size of destination buffer" )  )) ; 
#line 342 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) gethostname(char *__buf,  size_t __buflen)  
# 3262 "range.c"
{
# 3264 "range.c"
int retValue_acc;




# 3270 "range.c"
{

#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3279 "range.c"
retValue_acc = __gethostname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3281 "range.c"
return (int )retValue_acc;
 }
#line 348 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3287 "range.c"
retValue_acc = __gethostname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3289 "range.c"
return (int )retValue_acc;
 }} }
#line 351 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3294 "range.c"
retValue_acc = __gethostname_alias(__buf, __buflen);
# 3296 "range.c"
return (int )retValue_acc;
 
# 3299 "range.c"

}

# 3303 "range.c"
return (int )retValue_acc;

# 3306 "range.c"

}
 
#line 358 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk(char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 359 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_alias(char *__buf,  size_t __buflen) __asm__ ("""getdomainname") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 365 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern int __getdomainname_chk_warn(char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__getdomainname_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __warn_unused_result__ ))  __attribute__  (( __warning__ ( "getdomainname called with bigger ""buflen than size of destination ""buffer" )  )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) getdomainname(char *__buf,  size_t __buflen)  
# 3318 "range.c"
{
# 3320 "range.c"
int retValue_acc;




# 3326 "range.c"
{

#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if ((!__builtin_constant_p(__buflen))){

# 3335 "range.c"
retValue_acc = __getdomainname_chk(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3337 "range.c"
return (int )retValue_acc;
 }
#line 377 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 3343 "range.c"
retValue_acc = __getdomainname_chk_warn(__buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 3345 "range.c"
return (int )retValue_acc;
 }} }
#line 380 "/usr/include/x86_64-linux-gnu/bits/unistd.h"

# 3350 "range.c"
retValue_acc = __getdomainname_alias(__buf, __buflen);
# 3352 "range.c"
return (int )retValue_acc;
 
# 3355 "range.c"

}

# 3359 "range.c"
return (int )retValue_acc;

# 3362 "range.c"

}
 
# 123 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
# 1149 "/usr/include/unistd.h" 2 3 4
# 3 "memlib.h" 2
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
#line 9 "range.c"
extern int verbose; 
#line 10 "range.c"
extern int errors; 
#line 11 "range.c"
extern char msg[1024]; 
#line 12 "range.c"
extern  range_t *range_r; 
#line 13 "range.c"
extern int range_i; 
#line 16 "range.c"
static void print_payloads( range_t **ranges, int center)  
# 3396 "range.c"
{



# 3401 "range.c"
{

#line 17 "range.c"

#line 17 "range.c"
char print = 'y';
#line 18 "range.c"

#line 18 "range.c"
 range_t *p;
#line 20 "range.c"
printf("Print debug info? [y/N]: "); 
#line 21 "range.c"
scanf("%c", (&print)); 
#line 22 "range.c"
if (print == 'y'){
{ 
#line 31 "range.c"
for(p = (*ranges);p != (((void *)0));p = (p->next)) { { 
#line 31 "range.c"
if ((p->number) < center + 3 && (p->number) > center - 4){
printf("Payload %d (%ld:%ld) size:[%ld]\n", (p->number), (p->lo) - ((char *)mem_heap_lo()) - 8, (p->hi) - ((char *)mem_heap_lo()), (p->hi) - (p->lo) + 1); }} } } }
# 3424 "range.c"

}

# 3428 "range.c"

}
 
#line 36 "range.c"
void clear_ranges_r()  
# 3434 "range.c"
{



# 3439 "range.c"
{

#line 37 "range.c"
clear_ranges((&range_r)); 
# 3444 "range.c"

}

# 3448 "range.c"

}
 
#line 41 "range.c"
void malloc_r(char *p,  size_t size)  
# 3454 "range.c"
{



# 3459 "range.c"
{

#line 44 "range.c"
if ((!add_range((&range_r), p, size, 0, range_i++))){
exit(0); }
# 3465 "range.c"

}

# 3469 "range.c"

}
 
#line 47 "range.c"
void free_r(char *p)  
# 3475 "range.c"
{



# 3480 "range.c"
{

#line 48 "range.c"
remove_range((&range_r), p); 
# 3485 "range.c"

}

# 3489 "range.c"

}
 
#line 52 "range.c"
void realloc_r(char *oldp,  size_t size, char *newp)  
# 3495 "range.c"
{



# 3500 "range.c"
{

#line 53 "range.c"
free_r(oldp); 
#line 54 "range.c"
malloc_r(newp, size); 
# 3507 "range.c"

}

# 3511 "range.c"

}
 
#line 65 "range.c"
int add_range( range_t **ranges, char *lo, int size, int tracenum, int opnum)  
# 3517 "range.c"
{
# 3519 "range.c"
int retValue_acc;




# 3525 "range.c"
{

#line 66 "range.c"

#line 66 "range.c"
char *hi = lo + size - 1;
#line 67 "range.c"

#line 67 "range.c"
 range_t *p;
#line 68 "range.c"

#line 68 "range.c"
char msg[1024];
#line 70 "range.c"
(((size > 0)?((void )(0)):__assert_fail("size > 0", "range.c", 70, __PRETTY_FUNCTION__))); 
#line 73 "range.c"
if ((!(((((unsigned long int )(lo))) % 8) == 0))){
{ 
#line 75 "range.c"
sprintf(msg, "Payload %d'saddress (%p) not aligned to %d bytes", opnum, lo, 8); 
#line 76 "range.c"
malloc_error(tracenum, opnum, msg); 
#line 77 "range.c"

# 3551 "range.c"
retValue_acc = 0;
# 3553 "range.c"
return (int )retValue_acc;
 } }
#line 81 "range.c"
if ((lo < ((char *)mem_heap_lo())) || (lo > ((char *)mem_heap_hi())) || (hi < ((char *)mem_heap_lo())) || (hi > ((char *)mem_heap_hi()))){
{ 
#line 84 "range.c"
sprintf(msg, "Payload %d (%p:%p) lies outside heap (%p:%p)", opnum, lo, hi, mem_heap_lo(), mem_heap_hi()); 
#line 85 "range.c"
malloc_error(tracenum, opnum, msg); 
#line 86 "range.c"
print_payloads(ranges, opnum); 
#line 87 "range.c"

# 3567 "range.c"
retValue_acc = 0;
# 3569 "range.c"
return (int )retValue_acc;
 } }
#line 91 "range.c"
for(p = (*ranges);p != (((void *)0));p = (p->next)) { { 
#line 101 "range.c"
if ((lo >= (p->lo) && lo <= (p->hi)) || (hi >= (p->lo) && hi <= (p->hi))){
{ 
#line 96 "range.c"
sprintf(msg, "Payload %d (%ld:%ld) overlaps payload %d (%ld:%ld)\n", opnum, lo - ((char *)mem_heap_lo()) - 8, hi - ((char *)mem_heap_lo()) - 8, (p->number), (p->lo) - ((char *)mem_heap_lo()) - 8, (p->hi) - ((char *)mem_heap_lo()) - 8); 
#line 97 "range.c"
malloc_error(tracenum, opnum, msg); 
#line 98 "range.c"
print_payloads(ranges, (p->number)); 
#line 99 "range.c"

# 3585 "range.c"
retValue_acc = 0;
# 3587 "range.c"
return (int )retValue_acc;
 } }} } 
#line 107 "range.c"
if ((p = (( range_t *)malloc(sizeof ( range_t )))) == (((void *)0))){
unix_error("malloc error in add_range"); }
#line 109 "range.c"
(p->number) = opnum; 
#line 110 "range.c"
(p->next) = (*ranges); 
#line 111 "range.c"
(p->lo) = lo; 
#line 112 "range.c"
(p->hi) = hi; 
#line 113 "range.c"
(*ranges) = p; 
#line 114 "range.c"

# 3605 "range.c"
retValue_acc = 1;
# 3607 "range.c"
return (int )retValue_acc;
 
# 3610 "range.c"

}

# 3614 "range.c"
return (int )retValue_acc;

# 3617 "range.c"

}
 
#line 121 "range.c"
void remove_range( range_t **ranges, char *lo)  
# 3623 "range.c"
{



# 3628 "range.c"
{

#line 122 "range.c"

#line 122 "range.c"
 range_t *p;
#line 123 "range.c"

#line 123 "range.c"
 range_t **prevpp = ranges;
#line 124 "range.c"

#line 124 "range.c"
int size;
#line 126 "range.c"
for(p = (*ranges);p != (((void *)0));p = (p->next)) { { 
#line 133 "range.c"
if ((p->lo) == lo){
{ 
#line 128 "range.c"
(*prevpp) = (p->next); 
#line 129 "range.c"
size = (p->hi) - (p->lo) + 1; 
#line 130 "range.c"
free(p); 
#line 131 "range.c"
break; } }
#line 133 "range.c"
prevpp = (&((p->next))); } } 
# 3658 "range.c"

}

# 3662 "range.c"

}
 
#line 141 "range.c"
void clear_ranges( range_t **ranges)  
# 3668 "range.c"
{



# 3673 "range.c"
{

#line 142 "range.c"

#line 142 "range.c"
 range_t *p;
#line 143 "range.c"

#line 143 "range.c"
 range_t *pnext;
#line 145 "range.c"
for(p = (*ranges);p != (((void *)0));p = pnext) { { 
#line 146 "range.c"
pnext = (p->next); 
#line 147 "range.c"
free(p); } } 
#line 149 "range.c"
(*ranges) = (((void *)0)); 
# 3692 "range.c"

}

# 3696 "range.c"

}
 
