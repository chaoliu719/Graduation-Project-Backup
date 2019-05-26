
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


# 1 "patricia.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "patricia.c" 
# 25 "patricia.c" 
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
# 192 "patricia.c"
{
# 194 "patricia.c"
unsigned int retValue_acc;




# 200 "patricia.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 205 "patricia.c"
retValue_acc = __builtin_bswap32(__bsx);
# 207 "patricia.c"
return (unsigned int )retValue_acc;
 
# 210 "patricia.c"

}

# 214 "patricia.c"
return (unsigned int )retValue_acc;

# 217 "patricia.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 223 "patricia.c"
{
# 225 "patricia.c"
__uint64_t retValue_acc;




# 231 "patricia.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 236 "patricia.c"
retValue_acc = __builtin_bswap64(__bsx);
# 238 "patricia.c"
return (__uint64_t )retValue_acc;
 
# 241 "patricia.c"

}

# 245 "patricia.c"
return (__uint64_t )retValue_acc;

# 248 "patricia.c"

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
# 303 "patricia.c"
{
# 305 "patricia.c"
int retValue_acc;




# 311 "patricia.c"
{

#line 280 "/usr/include/stdlib.h"

# 316 "patricia.c"
retValue_acc = ((int )strtol(__nptr, ((char **)(((void *)0))), 10));
# 318 "patricia.c"
return (int )retValue_acc;
 
# 321 "patricia.c"

}

# 325 "patricia.c"
return (int )retValue_acc;

# 328 "patricia.c"

}
 
#line 284 "/usr/include/stdlib.h"
extern __inline  __attribute__  (( __gnu_inline__ )) long int  __attribute__  (( __nothrow__ )) atol(const char *__nptr)  
# 334 "patricia.c"
{
# 336 "patricia.c"
long int retValue_acc;




# 342 "patricia.c"
{

#line 285 "/usr/include/stdlib.h"

# 347 "patricia.c"
retValue_acc = strtol(__nptr, ((char **)(((void *)0))), 10);
# 349 "patricia.c"
return (long int )retValue_acc;
 
# 352 "patricia.c"

}

# 356 "patricia.c"
return (long int )retValue_acc;

# 359 "patricia.c"

}
 
#line 293 "/usr/include/stdlib.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ )) long long int  __attribute__  (( __nothrow__ )) atoll(const char *__nptr)  
# 365 "patricia.c"
{
# 367 "patricia.c"
long long int retValue_acc;




# 373 "patricia.c"
{

#line 294 "/usr/include/stdlib.h"

# 378 "patricia.c"
retValue_acc = strtoll(__nptr, ((char **)(((void *)0))), 10);
# 380 "patricia.c"
return (long long int )retValue_acc;
 
# 383 "patricia.c"

}

# 387 "patricia.c"
return (long long int )retValue_acc;

# 390 "patricia.c"

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
# 541 "patricia.c"
{
# 543 "patricia.c"
unsigned int retValue_acc;




# 549 "patricia.c"
{

#line 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 554 "patricia.c"
retValue_acc = ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff));
# 556 "patricia.c"
return (unsigned int )retValue_acc;
 
# 559 "patricia.c"

}

# 563 "patricia.c"
return (unsigned int )retValue_acc;

# 566 "patricia.c"

}
 
#line 46 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  
# 572 "patricia.c"
{
# 574 "patricia.c"
unsigned int retValue_acc;




# 580 "patricia.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 585 "patricia.c"
retValue_acc = (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff));
# 587 "patricia.c"
return (unsigned int )retValue_acc;
 
# 590 "patricia.c"

}

# 594 "patricia.c"
return (unsigned int )retValue_acc;

# 597 "patricia.c"

}
 
#line 52 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern __inline  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __const__ )) unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  
# 603 "patricia.c"
{
# 605 "patricia.c"
unsigned long long int retValue_acc;




# 611 "patricia.c"
{

#line 55 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"

# 616 "patricia.c"
retValue_acc = ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32));
# 618 "patricia.c"
return (unsigned long long int )retValue_acc;
 
# 621 "patricia.c"

}

# 625 "patricia.c"
return (unsigned long long int )retValue_acc;

# 628 "patricia.c"

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
# 820 "patricia.c"
{
# 822 "patricia.c"
void* retValue_acc;




# 828 "patricia.c"
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

# 861 "patricia.c"
retValue_acc = ((void *)__p);
# 863 "patricia.c"
return (void* )retValue_acc;
 }}} } 
#line 42 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"

# 868 "patricia.c"
retValue_acc = (((void *)0));
# 870 "patricia.c"
return (void* )retValue_acc;
 
# 873 "patricia.c"

}

# 877 "patricia.c"
return (void* )retValue_acc;

# 880 "patricia.c"

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
# 940 "patricia.c"
{
# 942 "patricia.c"
double retValue_acc;




# 948 "patricia.c"
{

#line 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"

# 953 "patricia.c"
retValue_acc = strtod(__nptr, ((char **)(((void *)0))));
# 955 "patricia.c"
return (double )retValue_acc;
 
# 958 "patricia.c"

}

# 962 "patricia.c"
return (double )retValue_acc;

# 965 "patricia.c"

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
# 979 "patricia.c"
{
# 981 "patricia.c"
char* retValue_acc;




# 987 "patricia.c"
{

#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__resolved, 2 > 1) != (( size_t )(-1))){
{ 
#line 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 995 "patricia.c"
retValue_acc = __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
# 997 "patricia.c"
return (char* )retValue_acc;
 } }
#line 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1002 "patricia.c"
retValue_acc = __realpath_alias(__name, __resolved);
# 1004 "patricia.c"
return (char* )retValue_acc;
 
# 1007 "patricia.c"

}

# 1011 "patricia.c"
return (char* )retValue_acc;

# 1014 "patricia.c"

}
 
#line 53 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_alias(int __fd, char *__buf,  size_t __buflen) __asm__ ("""ptsname_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __ptsname_r_chk_warn(int __fd, char *__buf,  size_t __buflen,  size_t __nreal) __asm__ ("""__ptsname_r_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  ))  __attribute__  (( __warning__ ( "ptsname_r called with buflen bigger than ""size of buf" )  )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) int  __attribute__  (( __nothrow__ )) ptsname_r(int __fd, char *__buf,  size_t __buflen)  
# 1026 "patricia.c"
{
# 1028 "patricia.c"
int retValue_acc;




# 1034 "patricia.c"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__buf, 2 > 1) != (( size_t )(-1))){
{ 
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__buflen))){

# 1043 "patricia.c"
retValue_acc = __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 1045 "patricia.c"
return (int )retValue_acc;
 }
#line 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__buflen > __builtin_object_size(__buf, 2 > 1)){

# 1051 "patricia.c"
retValue_acc = __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1));
# 1053 "patricia.c"
return (int )retValue_acc;
 }} }
#line 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1058 "patricia.c"
retValue_acc = __ptsname_r_alias(__fd, __buf, __buflen);
# 1060 "patricia.c"
return (int )retValue_acc;
 
# 1063 "patricia.c"

}

# 1067 "patricia.c"
return (int )retValue_acc;

# 1070 "patricia.c"

}
 
#line 78 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_chk(char *__s,  wchar_t __wchar,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern int __wctomb_alias(char *__s,  wchar_t __wchar) __asm__ ("""wctomb") __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 84 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  __attribute__  (( __warn_unused_result__ )) int  __attribute__  (( __nothrow__ )) wctomb(char *__s,  wchar_t __wchar)  
# 1080 "patricia.c"
{
# 1082 "patricia.c"
int retValue_acc;




# 1088 "patricia.c"
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__s, 2 > 1) != (( size_t )(-1)) && 16 > __builtin_object_size(__s, 2 > 1)){

# 1094 "patricia.c"
retValue_acc = __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1));
# 1096 "patricia.c"
return (int )retValue_acc;
 }
#line 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1101 "patricia.c"
retValue_acc = __wctomb_alias(__s, __wchar);
# 1103 "patricia.c"
return (int )retValue_acc;
 
# 1106 "patricia.c"

}

# 1110 "patricia.c"
return (int )retValue_acc;

# 1113 "patricia.c"

}
 
#line 100 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 101 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_alias( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len) __asm__ ("""mbstowcs") __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __mbstowcs_chk_warn( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__mbstowcs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "mbstowcs called with dst buffer smaller than len ""* sizeof (wchar_t)" )  )) ; 
#line 114 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) mbstowcs( wchar_t *__restrict __dst, const char *__restrict __src,  size_t __len)  
# 1125 "patricia.c"
{
# 1127 "patricia.c"
size_t retValue_acc;




# 1133 "patricia.c"
{

#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 1142 "patricia.c"
retValue_acc = __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 1144 "patricia.c"
return (size_t )retValue_acc;
 }
#line 121 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t )){

# 1150 "patricia.c"
retValue_acc = __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof ( wchar_t ));
# 1152 "patricia.c"
return (size_t )retValue_acc;
 }} }
#line 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1157 "patricia.c"
retValue_acc = __mbstowcs_alias(__dst, __src, __len);
# 1159 "patricia.c"
return (size_t )retValue_acc;
 
# 1162 "patricia.c"

}

# 1166 "patricia.c"
return (size_t )retValue_acc;

# 1169 "patricia.c"

}
 
#line 131 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __attribute__  (( __nothrow__ )) ; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_alias(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len) __asm__ ("""wcstombs") __attribute__  (( __nothrow__ )) ; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern  size_t __wcstombs_chk_warn(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len,  size_t __dstlen) __asm__ ("""__wcstombs_chk") __attribute__  (( __nothrow__ ))  __attribute__  (( __warning__ ( "wcstombs called with dst buffer smaller than len" )  )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ ))  size_t  __attribute__  (( __nothrow__ )) wcstombs(char *__restrict __dst, const  wchar_t *__restrict __src,  size_t __len)  
# 1181 "patricia.c"
{
# 1183 "patricia.c"
size_t retValue_acc;




# 1189 "patricia.c"
{

#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__builtin_object_size(__dst, 2 > 1) != (( size_t )(-1))){
{ 
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if ((!__builtin_constant_p(__len))){

# 1198 "patricia.c"
retValue_acc = __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 1200 "patricia.c"
return (size_t )retValue_acc;
 }
#line 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if (__len > __builtin_object_size(__dst, 2 > 1)){

# 1206 "patricia.c"
retValue_acc = __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1));
# 1208 "patricia.c"
return (size_t )retValue_acc;
 }} }
#line 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"

# 1213 "patricia.c"
retValue_acc = __wcstombs_alias(__dst, __src, __len);
# 1215 "patricia.c"
return (size_t )retValue_acc;
 
# 1218 "patricia.c"

}

# 1222 "patricia.c"
return (size_t )retValue_acc;

# 1225 "patricia.c"

}
 
# 960 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 26 "patricia.c" 2
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
# 1355 "patricia.c"
{
# 1357 "patricia.c"
size_t retValue_acc;




# 1363 "patricia.c"
{

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 948 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 949 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 951 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1374 "patricia.c"
retValue_acc = __result;
# 1376 "patricia.c"
return (size_t )retValue_acc;
 
# 1379 "patricia.c"

}

# 1383 "patricia.c"
return (size_t )retValue_acc;

# 1386 "patricia.c"

}
 
#line 955 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2); 
#line 957 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c2(const char *__s, int __reject1, int __reject2)  
# 1394 "patricia.c"
{
# 1396 "patricia.c"
size_t retValue_acc;




# 1402 "patricia.c"
{

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 958 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 959 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 962 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1413 "patricia.c"
retValue_acc = __result;
# 1415 "patricia.c"
return (size_t )retValue_acc;
 
# 1418 "patricia.c"

}

# 1422 "patricia.c"
return (size_t )retValue_acc;

# 1425 "patricia.c"

}
 
#line 966 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3); 
#line 969 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strcspn_c3(const char *__s, int __reject1, int __reject2, int __reject3)  
# 1433 "patricia.c"
{
# 1435 "patricia.c"
size_t retValue_acc;




# 1441 "patricia.c"
{

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 970 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 971 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 974 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1452 "patricia.c"
retValue_acc = __result;
# 1454 "patricia.c"
return (size_t )retValue_acc;
 
# 1457 "patricia.c"

}

# 1461 "patricia.c"
return (size_t )retValue_acc;

# 1464 "patricia.c"

}
 
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept); 
#line 1023 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c1(const char *__s, int __accept)  
# 1473 "patricia.c"
{
# 1475 "patricia.c"
size_t retValue_acc;




# 1481 "patricia.c"
{

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1024 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1026 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept) { (++__result); } 
#line 1028 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1492 "patricia.c"
retValue_acc = __result;
# 1494 "patricia.c"
return (size_t )retValue_acc;
 
# 1497 "patricia.c"

}

# 1501 "patricia.c"
return (size_t )retValue_acc;

# 1504 "patricia.c"

}
 
#line 1032 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2); 
#line 1034 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c2(const char *__s, int __accept1, int __accept2)  
# 1512 "patricia.c"
{
# 1514 "patricia.c"
size_t retValue_acc;




# 1520 "patricia.c"
{

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1035 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1037 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 1039 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1531 "patricia.c"
retValue_acc = __result;
# 1533 "patricia.c"
return (size_t )retValue_acc;
 
# 1536 "patricia.c"

}

# 1540 "patricia.c"
return (size_t )retValue_acc;

# 1543 "patricia.c"

}
 
#line 1043 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1045 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ ))  size_t __strspn_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 1551 "patricia.c"
{
# 1553 "patricia.c"
size_t retValue_acc;




# 1559 "patricia.c"
{

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"
 size_t __result = 0;
#line 1048 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 1051 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1570 "patricia.c"
retValue_acc = __result;
# 1572 "patricia.c"
return (size_t )retValue_acc;
 
# 1575 "patricia.c"

}

# 1579 "patricia.c"
return (size_t )retValue_acc;

# 1582 "patricia.c"

}
 
#line 1098 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2); 
#line 1101 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c2(const char *__s, int __accept1, int __accept2)  
# 1590 "patricia.c"
{
# 1592 "patricia.c"
char* retValue_acc;




# 1598 "patricia.c"
{

#line 1104 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 1105 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1605 "patricia.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 1607 "patricia.c"
return (char* )retValue_acc;
 
# 1610 "patricia.c"

}

# 1614 "patricia.c"
return (char* )retValue_acc;

# 1617 "patricia.c"

}
 
#line 1109 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1112 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strpbrk_c3(const char *__s, int __accept1, int __accept2, int __accept3)  
# 1625 "patricia.c"
{
# 1627 "patricia.c"
char* retValue_acc;




# 1633 "patricia.c"
{

#line 1116 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 1117 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1640 "patricia.c"
retValue_acc = ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s)));
# 1642 "patricia.c"
return (char* )retValue_acc;
 
# 1645 "patricia.c"

}

# 1649 "patricia.c"
return (char* )retValue_acc;

# 1652 "patricia.c"

}
 
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 1150 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  
# 1661 "patricia.c"
{
# 1663 "patricia.c"
char* retValue_acc;




# 1669 "patricia.c"
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

# 1699 "patricia.c"
retValue_acc = __result;
# 1701 "patricia.c"
return (char* )retValue_acc;
 
# 1704 "patricia.c"

}

# 1708 "patricia.c"
return (char* )retValue_acc;

# 1711 "patricia.c"

}
 
#line 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern char *__strsep_g(char **__stringp, const char *__delim); 
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject); 
#line 1200 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_1c(char **__s, char __reject)  
# 1722 "patricia.c"
{
# 1724 "patricia.c"
char* retValue_acc;




# 1730 "patricia.c"
{

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"

#line 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char *__retval = (*__s);
#line 1202 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 1204 "/usr/include/x86_64-linux-gnu/bits/string2.h"

# 1742 "patricia.c"
retValue_acc = __retval;
# 1744 "patricia.c"
return (char* )retValue_acc;
 
# 1747 "patricia.c"

}

# 1751 "patricia.c"
return (char* )retValue_acc;

# 1754 "patricia.c"

}
 
#line 1207 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 1210 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_2c(char **__s, char __reject1, char __reject2)  
# 1762 "patricia.c"
{
# 1764 "patricia.c"
char* retValue_acc;




# 1770 "patricia.c"
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

# 1806 "patricia.c"
retValue_acc = __retval;
# 1808 "patricia.c"
return (char* )retValue_acc;
 
# 1811 "patricia.c"

}

# 1815 "patricia.c"
return (char* )retValue_acc;

# 1818 "patricia.c"

}
 
#line 1235 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 1238 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern __inline  __attribute__  (( __gnu_inline__ )) char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  
# 1826 "patricia.c"
{
# 1828 "patricia.c"
char* retValue_acc;




# 1834 "patricia.c"
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

# 1870 "patricia.c"
retValue_acc = __retval;
# 1872 "patricia.c"
return (char* )retValue_acc;
 
# 1875 "patricia.c"

}

# 1879 "patricia.c"
return (char* )retValue_acc;

# 1882 "patricia.c"

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
# 1897 "patricia.c"
{
# 1899 "patricia.c"
void* retValue_acc;




# 1905 "patricia.c"
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 1910 "patricia.c"
retValue_acc = __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 1912 "patricia.c"
return (void* )retValue_acc;
 
# 1915 "patricia.c"

}

# 1919 "patricia.c"
return (void* )retValue_acc;

# 1922 "patricia.c"

}
 
#line 56 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memmove(void *__dest, const void *__src,  size_t __len)  
# 1928 "patricia.c"
{
# 1930 "patricia.c"
void* retValue_acc;




# 1936 "patricia.c"
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 1941 "patricia.c"
retValue_acc = __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 1943 "patricia.c"
return (void* )retValue_acc;
 
# 1946 "patricia.c"

}

# 1950 "patricia.c"
return (void* )retValue_acc;

# 1953 "patricia.c"

}
 
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void * __attribute__  (( __nothrow__ )) memset(void *__dest, int __ch,  size_t __len)  
# 1960 "patricia.c"
{
# 1962 "patricia.c"
void* retValue_acc;




# 1968 "patricia.c"
{

#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_constant_p(__len) && __len == 0 && ((!__builtin_constant_p(__ch)) || __ch != 0)){
{ 
#line 81 "/usr/include/x86_64-linux-gnu/bits/string3.h"
__warn_memset_zero_len(); 
#line 82 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 1978 "patricia.c"
retValue_acc = __dest;
# 1980 "patricia.c"
return (void* )retValue_acc;
 } }
#line 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 1985 "patricia.c"
retValue_acc = __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
# 1987 "patricia.c"
return (void* )retValue_acc;
 
# 1990 "patricia.c"

}

# 1994 "patricia.c"
return (void* )retValue_acc;

# 1997 "patricia.c"

}
 
#line 90 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bcopy(const void *__src, void *__dest,  size_t __len)  
# 2003 "patricia.c"
{



# 2008 "patricia.c"
{

#line 91 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0))); 
# 2013 "patricia.c"

}

# 2017 "patricia.c"

}
 
#line 96 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) void  __attribute__  (( __nothrow__ )) bzero(void *__dest,  size_t __len)  
# 2023 "patricia.c"
{



# 2028 "patricia.c"
{

#line 97 "/usr/include/x86_64-linux-gnu/bits/string3.h"
((void )__builtin___memset_chk(__dest, '\0', __len, __builtin_object_size(__dest, 0))); 
# 2033 "patricia.c"

}

# 2037 "patricia.c"

}
 
#line 103 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcpy(char *__restrict __dest, const char *__restrict __src)  
# 2043 "patricia.c"
{
# 2045 "patricia.c"
char* retValue_acc;




# 2051 "patricia.c"
{

#line 104 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 2056 "patricia.c"
retValue_acc = __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 2058 "patricia.c"
return (char* )retValue_acc;
 
# 2061 "patricia.c"

}

# 2065 "patricia.c"
return (char* )retValue_acc;

# 2068 "patricia.c"

}
 
#line 119 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 2074 "patricia.c"
{
# 2076 "patricia.c"
char* retValue_acc;




# 2082 "patricia.c"
{

#line 120 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 2087 "patricia.c"
retValue_acc = __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 2089 "patricia.c"
return (char* )retValue_acc;
 
# 2092 "patricia.c"

}

# 2096 "patricia.c"
return (char* )retValue_acc;

# 2099 "patricia.c"

}
 
#line 125 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_chk(char *__dest, const char *__src,  size_t __n,  size_t __destlen) __attribute__  (( __nothrow__ )) ; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern char *__stpncpy_alias(char *__dest, const char *__src,  size_t __n) __asm__ ("""stpncpy") __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) stpncpy(char *__dest, const char *__src,  size_t __n)  
# 2109 "patricia.c"
{
# 2111 "patricia.c"
char* retValue_acc;




# 2117 "patricia.c"
{

#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if (__builtin_object_size(__dest, 2 > 1) != (( size_t )(-1)) && ((!__builtin_constant_p(__n)) || __n <= __builtin_object_size(__dest, 2 > 1))){

# 2123 "patricia.c"
retValue_acc = __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1));
# 2125 "patricia.c"
return (char* )retValue_acc;
 }
#line 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 2130 "patricia.c"
retValue_acc = __stpncpy_alias(__dest, __src, __n);
# 2132 "patricia.c"
return (char* )retValue_acc;
 
# 2135 "patricia.c"

}

# 2139 "patricia.c"
return (char* )retValue_acc;

# 2142 "patricia.c"

}
 
#line 141 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strcat(char *__restrict __dest, const char *__restrict __src)  
# 2148 "patricia.c"
{
# 2150 "patricia.c"
char* retValue_acc;




# 2156 "patricia.c"
{

#line 142 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 2161 "patricia.c"
retValue_acc = __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 2163 "patricia.c"
return (char* )retValue_acc;
 
# 2166 "patricia.c"

}

# 2170 "patricia.c"
return (char* )retValue_acc;

# 2173 "patricia.c"

}
 
#line 149 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern __inline  __attribute__  (( __always_inline__ ))  __attribute__  (( __gnu_inline__ ))  __attribute__  (( __artificial__ )) char * __attribute__  (( __nothrow__ )) strncat(char *__restrict __dest, const char *__restrict __src,  size_t __len)  
# 2179 "patricia.c"
{
# 2181 "patricia.c"
char* retValue_acc;




# 2187 "patricia.c"
{

#line 150 "/usr/include/x86_64-linux-gnu/bits/string3.h"

# 2192 "patricia.c"
retValue_acc = __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 2194 "patricia.c"
return (char* )retValue_acc;
 
# 2197 "patricia.c"

}

# 2201 "patricia.c"
return (char* )retValue_acc;

# 2204 "patricia.c"

}
 
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
# 641 "/usr/include/string.h" 2 3 4
# 27 "patricia.c" 2
# 1 "patricia.h" 1
# 37 "patricia.h" 
struct ptree_mask {unsigned long pm_mask; void *pm_data; 
}; 
#line 50 "patricia.h"
struct ptree {unsigned long p_key; struct ptree_mask *p_m; unsigned char p_mlen; char p_b; struct ptree *p_left; struct ptree *p_right; 
}; 
#line 53 "patricia.h"
extern struct ptree *pat_insert(struct ptree *n, struct ptree *head); 
#line 54 "patricia.h"
extern int pat_remove(struct ptree *n, struct ptree *head); 
#line 55 "patricia.h"
extern struct ptree *pat_search(unsigned long key, struct ptree *head); 
#line 37 "patricia.c"
static __inline unsigned long bit(int i, unsigned long key)  
# 2226 "patricia.c"
{
# 2228 "patricia.c"
unsigned long retValue_acc;




# 2234 "patricia.c"
{

#line 38 "patricia.c"

# 2239 "patricia.c"
retValue_acc = key & (1 << (31 - i));
# 2241 "patricia.c"
return (unsigned long )retValue_acc;
 
# 2244 "patricia.c"

}

# 2248 "patricia.c"
return (unsigned long )retValue_acc;

# 2251 "patricia.c"

}
 
#line 48 "patricia.c"
static int pat_count(struct ptree *t, int b)  
# 2257 "patricia.c"
{
# 2259 "patricia.c"
int retValue_acc;




# 2265 "patricia.c"
{

#line 49 "patricia.c"

#line 49 "patricia.c"
int count;
#line 51 "patricia.c"
if ((t->p_b) <= b){

# 2275 "patricia.c"
retValue_acc = 0;
# 2277 "patricia.c"
return (int )retValue_acc;
 }
#line 53 "patricia.c"
count = (t->p_mlen); 
#line 55 "patricia.c"
count += pat_count((t->p_left), (t->p_b)); 
#line 56 "patricia.c"
count += pat_count((t->p_right), (t->p_b)); 
#line 58 "patricia.c"

# 2288 "patricia.c"
retValue_acc = count;
# 2290 "patricia.c"
return (int )retValue_acc;
 
# 2293 "patricia.c"

}

# 2297 "patricia.c"
return (int )retValue_acc;

# 2300 "patricia.c"

}
 
#line 67 "patricia.c"
static struct ptree *insertR(struct ptree *h, struct ptree *n, int d, struct ptree *p)  
# 2306 "patricia.c"
{
# 2308 "patricia.c"
struct ptree * retValue_acc;




# 2314 "patricia.c"
{

#line 75 "patricia.c"
if (((h->p_b) >= d) || ((h->p_b) <= (p->p_b))){
{ 
#line 69 "patricia.c"
(n->p_b) = d; 
#line 70 "patricia.c"
(n->p_left) = (bit(d, (n->p_key))?h:n); 
#line 71 "patricia.c"
(n->p_right) = (bit(d, (n->p_key))?n:h); 
#line 72 "patricia.c"

# 2328 "patricia.c"
retValue_acc = n;
# 2330 "patricia.c"
return (struct ptree * )retValue_acc;
 } }
#line 75 "patricia.c"
if (bit((h->p_b), (n->p_key))){
(h->p_right) = insertR((h->p_right), n, d, h); }else{
(h->p_left) = insertR((h->p_left), n, d, h); }
#line 79 "patricia.c"

# 2339 "patricia.c"
retValue_acc = h;
# 2341 "patricia.c"
return (struct ptree * )retValue_acc;
 
# 2344 "patricia.c"

}

# 2348 "patricia.c"
return (struct ptree * )retValue_acc;

# 2351 "patricia.c"

}
 
# 28 "patricia.c" 2
# 93 "patricia.c" 
struct ptree *pat_insert(struct ptree *n, struct ptree *head)  
# 2358 "patricia.c"
{
# 2360 "patricia.c"
struct ptree * retValue_acc;




# 2366 "patricia.c"
{

#line 94 "patricia.c"

#line 94 "patricia.c"
struct ptree *t;
#line 95 "patricia.c"

#line 95 "patricia.c"
struct ptree_mask *buf,*pm;
#line 96 "patricia.c"

#line 96 "patricia.c"
int i,copied;
#line 98 "patricia.c"
if ((!head) || (!n) || (!(n->p_m))){

# 2384 "patricia.c"
retValue_acc = 0;
# 2386 "patricia.c"
return (struct ptree * )retValue_acc;
 }
#line 104 "patricia.c"
(n->p_key) &= ((n->p_m)->pm_mask); 
#line 109 "patricia.c"
t = head; 
#line 110 "patricia.c"
do { { 
#line 111 "patricia.c"
i = (t->p_b); 
#line 112 "patricia.c"
t = (bit((t->p_b), (n->p_key))?(t->p_right):(t->p_left)); } } while(i < (t->p_b)); 
#line 118 "patricia.c"
if ((n->p_key) == (t->p_key)){
{ 
#line 131 "patricia.c"
for(i = 0;i < (t->p_mlen);i++) { { 
#line 131 "patricia.c"
if (((n->p_m)->pm_mask) == (t->p_m)[i].pm_mask){
{ 
#line 125 "patricia.c"
(t->p_m)[i].pm_data = ((n->p_m)->pm_data); 
#line 126 "patricia.c"
free((n->p_m)); 
#line 127 "patricia.c"
free(n); 
#line 128 "patricia.c"
n = 0; 
#line 129 "patricia.c"

# 2417 "patricia.c"
retValue_acc = t;
# 2419 "patricia.c"
return (struct ptree * )retValue_acc;
 } }} } 
#line 136 "patricia.c"
buf = ((struct ptree_mask *)malloc(sizeof (struct ptree_mask ) * ((t->p_mlen) + 1))); 
#line 143 "patricia.c"
copied = 0; 
#line 144 "patricia.c"
for(i = 0 , pm = buf;i < (t->p_mlen);pm++) { { 
#line 153 "patricia.c"
if (((n->p_m)->pm_mask) > (t->p_m)[i].pm_mask){
{ 
#line 146 "patricia.c"
bcopy((t->p_m) + i, pm, sizeof (struct ptree_mask )); 
#line 147 "patricia.c"
i++; } }else{
{ 
#line 150 "patricia.c"
bcopy((n->p_m), pm, sizeof (struct ptree_mask )); 
#line 151 "patricia.c"
((n->p_m)->pm_mask) = 0xffffffff; 
#line 152 "patricia.c"
copied = 1; } }} } 
#line 155 "patricia.c"
if ((!copied)){
{ 
#line 156 "patricia.c"
bcopy((n->p_m), pm, sizeof (struct ptree_mask )); } }
#line 158 "patricia.c"
free((n->p_m)); 
#line 159 "patricia.c"
free(n); 
#line 160 "patricia.c"
n = 0; 
#line 161 "patricia.c"
(t->p_mlen)++; 
#line 166 "patricia.c"
free((t->p_m)); 
#line 167 "patricia.c"
(t->p_m) = buf; 
#line 169 "patricia.c"

# 2461 "patricia.c"
retValue_acc = t;
# 2463 "patricia.c"
return (struct ptree * )retValue_acc;
 } }
#line 175 "patricia.c"
for(i = 1;i < 32 && bit(i, (n->p_key)) == bit(i, (t->p_key));i++) { ; } 
#line 180 "patricia.c"
if (bit((head->p_b), (n->p_key))){
(head->p_right) = insertR((head->p_right), n, i, head); }else{
(head->p_left) = insertR((head->p_left), n, i, head); }
#line 185 "patricia.c"

# 2474 "patricia.c"
retValue_acc = n;
# 2476 "patricia.c"
return (struct ptree * )retValue_acc;
 
# 2479 "patricia.c"

}

# 2483 "patricia.c"
return (struct ptree * )retValue_acc;

# 2486 "patricia.c"

}
 
#line 194 "patricia.c"
int pat_remove(struct ptree *n, struct ptree *head)  
# 2492 "patricia.c"
{
# 2494 "patricia.c"
int retValue_acc;




# 2500 "patricia.c"
{

#line 195 "patricia.c"

#line 195 "patricia.c"
struct ptree *p,*g,*pt,*pp,*t;
#line 196 "patricia.c"

#line 196 "patricia.c"
struct ptree_mask *buf,*pm;
#line 197 "patricia.c"

#line 197 "patricia.c"
int i;
#line 199 "patricia.c"
if ((!n) || (!(n->p_m)) || (!t)){

# 2518 "patricia.c"
retValue_acc = 0;
# 2520 "patricia.c"
return (int )retValue_acc;
 }
#line 206 "patricia.c"
g = p = t = head; 
#line 207 "patricia.c"
do { { 
#line 208 "patricia.c"
i = (t->p_b); 
#line 209 "patricia.c"
g = p; 
#line 210 "patricia.c"
p = t; 
#line 211 "patricia.c"
t = (bit((t->p_b), (n->p_key))?(t->p_right):(t->p_left)); } } while(i < (t->p_b)); 
#line 217 "patricia.c"
if ((t->p_key) != (n->p_key)){

# 2538 "patricia.c"
retValue_acc = 0;
# 2540 "patricia.c"
return (int )retValue_acc;
 }
#line 223 "patricia.c"
if ((t->p_mlen) == 1){
{ 
#line 233 "patricia.c"
if ((t->p_b) == 0){

# 2549 "patricia.c"
retValue_acc = 0;
# 2551 "patricia.c"
return (int )retValue_acc;
 }
#line 233 "patricia.c"
if (((t->p_m)->pm_mask) != ((n->p_m)->pm_mask)){

# 2557 "patricia.c"
retValue_acc = 0;
# 2559 "patricia.c"
return (int )retValue_acc;
 }
#line 240 "patricia.c"
pp = pt = p; 
#line 241 "patricia.c"
do { { 
#line 242 "patricia.c"
i = (pt->p_b); 
#line 243 "patricia.c"
pp = pt; 
#line 244 "patricia.c"
pt = (bit((pt->p_b), (p->p_key))?(pt->p_right):(pt->p_left)); } } while(i < (pt->p_b)); 
#line 247 "patricia.c"
if (bit((pp->p_b), (p->p_key))){
(pp->p_right) = t; }else{
(pp->p_left) = t; }
#line 255 "patricia.c"
if (bit((g->p_b), (n->p_key))){
(g->p_right) = (bit((p->p_b), (n->p_key))?(p->p_left):(p->p_right)); }else{
(g->p_left) = (bit((p->p_b), (n->p_key))?(p->p_left):(p->p_right)); }
#line 266 "patricia.c"
if (((t->p_m)->pm_data)){
free(((t->p_m)->pm_data)); }
#line 268 "patricia.c"
free((t->p_m)); 
#line 269 "patricia.c"
if (t != p){
{ 
#line 270 "patricia.c"
(t->p_key) = (p->p_key); 
#line 271 "patricia.c"
(t->p_m) = (p->p_m); 
#line 272 "patricia.c"
(t->p_mlen) = (p->p_mlen); } }
#line 274 "patricia.c"
free(p); 
#line 276 "patricia.c"

# 2598 "patricia.c"
retValue_acc = 1;
# 2600 "patricia.c"
return (int )retValue_acc;
 } }
#line 283 "patricia.c"
for(i = 0;i < (t->p_mlen);i++) { if (((n->p_m)->pm_mask) == (t->p_m)[i].pm_mask){
break; }} 
#line 286 "patricia.c"
if (i >= (t->p_mlen)){

# 2609 "patricia.c"
retValue_acc = 0;
# 2611 "patricia.c"
return (int )retValue_acc;
 }
#line 292 "patricia.c"
buf = ((struct ptree_mask *)malloc(sizeof (struct ptree_mask ) * ((t->p_mlen) - 1))); 
#line 295 "patricia.c"
for(i = 0 , pm = buf;i < (t->p_mlen);i++) { { 
#line 299 "patricia.c"
if (((n->p_m)->pm_mask) != (t->p_m)[i].pm_mask){
{ 
#line 297 "patricia.c"
bcopy((t->p_m) + i, pm++, sizeof (struct ptree_mask )); } }} } 
#line 304 "patricia.c"
(t->p_mlen)--; 
#line 305 "patricia.c"
free((t->p_m)); 
#line 306 "patricia.c"
(t->p_m) = buf; 
#line 307 "patricia.c"

# 2631 "patricia.c"
retValue_acc = 1;
# 2633 "patricia.c"
return (int )retValue_acc;
 
# 2636 "patricia.c"

}

# 2640 "patricia.c"
return (int )retValue_acc;

# 2643 "patricia.c"

}
 
#line 316 "patricia.c"
struct ptree *pat_search(unsigned long key, struct ptree *head)  
# 2649 "patricia.c"
{
# 2651 "patricia.c"
struct ptree * retValue_acc;




# 2657 "patricia.c"
{

#line 317 "patricia.c"

#line 317 "patricia.c"
struct ptree *p = 0,*t = head;
#line 318 "patricia.c"

#line 318 "patricia.c"
int i;
#line 320 "patricia.c"
if ((!t)){

# 2671 "patricia.c"
retValue_acc = 0;
# 2673 "patricia.c"
return (struct ptree * )retValue_acc;
 }
#line 326 "patricia.c"
do { { 
#line 335 "patricia.c"
for(i = 0;i < (t->p_mlen);i++) { { 
#line 335 "patricia.c"
if ((t->p_key) == (key & (t->p_m)[i].pm_mask)){
{ 
#line 333 "patricia.c"
p = t; } }} } 
#line 338 "patricia.c"
i = (t->p_b); 
#line 339 "patricia.c"
t = (bit((t->p_b), key)?(t->p_right):(t->p_left)); } } while(i < (t->p_b)); 
#line 346 "patricia.c"
for(i = 0;i < (t->p_mlen);i++) { { 
#line 351 "patricia.c"
if ((t->p_key) == (key & (t->p_m)[i].pm_mask)){
{ 
#line 349 "patricia.c"

# 2696 "patricia.c"
retValue_acc = t;
# 2698 "patricia.c"
return (struct ptree * )retValue_acc;
 } }} } 
#line 352 "patricia.c"

# 2703 "patricia.c"
retValue_acc = p;
# 2705 "patricia.c"
return (struct ptree * )retValue_acc;
 
# 2708 "patricia.c"

}

# 2712 "patricia.c"
return (struct ptree * )retValue_acc;

# 2715 "patricia.c"

}
 
