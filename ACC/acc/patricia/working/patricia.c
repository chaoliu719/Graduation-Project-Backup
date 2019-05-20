
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
# 1 "/aop/Graduation-Project-Backup/ACC/acc/patricia/working//" 
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
# 193 "patricia.c"
{
# 195 "patricia.c"
unsigned int retValue_acc;




# 201 "patricia.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 206 "patricia.c"
retValue_acc = __builtin_bswap32(__bsx);
# 208 "patricia.c"
return (unsigned int )retValue_acc;
 
# 211 "patricia.c"

}

# 215 "patricia.c"
return (unsigned int )retValue_acc;

# 218 "patricia.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 224 "patricia.c"
{
# 226 "patricia.c"
__uint64_t retValue_acc;




# 232 "patricia.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 237 "patricia.c"
retValue_acc = __builtin_bswap64(__bsx);
# 239 "patricia.c"
return (__uint64_t )retValue_acc;
 
# 242 "patricia.c"

}

# 246 "patricia.c"
return (__uint64_t )retValue_acc;

# 249 "patricia.c"

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
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 
#line 145 "/usr/include/stdlib.h"
extern double atof(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 148 "/usr/include/stdlib.h"
extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 151 "/usr/include/stdlib.h"
extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 158 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
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
#line 305 "/usr/include/stdlib.h"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/stdlib.h"
extern long int a64l(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 305 "/usr/include/stdlib.h" 3 4
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
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
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
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
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
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 504 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
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
extern char *getenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
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
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 642 "/usr/include/stdlib.h"
extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 642 "/usr/include/stdlib.h" 3 4
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 717 "/usr/include/stdlib.h"
extern int system(const char *__command); 
# 712 "/usr/include/stdlib.h" 3 4
# 735 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 742 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 757 "/usr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 766 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
# 752 "/usr/include/stdlib.h" 3 4
# 775 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 776 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 781 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 790 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 792 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 799 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 813 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 819 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 825 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 832 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 837 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
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
extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 812 "/usr/include/stdlib.h" 3 4
# 902 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 952 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 951 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
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
# 644 "/usr/include/string.h" 3 4
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
# 813 "patricia.c"
{
# 815 "patricia.c"
unsigned long retValue_acc;




# 821 "patricia.c"
{

#line 38 "patricia.c"

# 826 "patricia.c"
retValue_acc = key & (1 << (31 - i));
# 828 "patricia.c"
return (unsigned long )retValue_acc;
 
# 831 "patricia.c"

}

# 835 "patricia.c"
return (unsigned long )retValue_acc;

# 838 "patricia.c"

}
 
#line 48 "patricia.c"
static int pat_count(struct ptree *t, int b)  
# 844 "patricia.c"
{
# 846 "patricia.c"
int retValue_acc;




# 852 "patricia.c"
{

#line 49 "patricia.c"

#line 49 "patricia.c"
int count;
#line 51 "patricia.c"
if ((t->p_b) <= b){

# 862 "patricia.c"
retValue_acc = 0;
# 864 "patricia.c"
return (int )retValue_acc;
 }
#line 53 "patricia.c"
count = (t->p_mlen); 
#line 55 "patricia.c"
count += pat_count((t->p_left), (t->p_b)); 
#line 56 "patricia.c"
count += pat_count((t->p_right), (t->p_b)); 
#line 58 "patricia.c"

# 875 "patricia.c"
retValue_acc = count;
# 877 "patricia.c"
return (int )retValue_acc;
 
# 880 "patricia.c"

}

# 884 "patricia.c"
return (int )retValue_acc;

# 887 "patricia.c"

}
 
#line 67 "patricia.c"
static struct ptree *insertR(struct ptree *h, struct ptree *n, int d, struct ptree *p)  
# 893 "patricia.c"
{
# 895 "patricia.c"
struct ptree * retValue_acc;




# 901 "patricia.c"
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

# 915 "patricia.c"
retValue_acc = n;
# 917 "patricia.c"
return (struct ptree * )retValue_acc;
 } }
#line 75 "patricia.c"
if (bit((h->p_b), (n->p_key))){
(h->p_right) = insertR((h->p_right), n, d, h); }else{
(h->p_left) = insertR((h->p_left), n, d, h); }
#line 79 "patricia.c"

# 926 "patricia.c"
retValue_acc = h;
# 928 "patricia.c"
return (struct ptree * )retValue_acc;
 
# 931 "patricia.c"

}

# 935 "patricia.c"
return (struct ptree * )retValue_acc;

# 938 "patricia.c"

}
 
# 28 "patricia.c" 2
# 93 "patricia.c" 
struct ptree *pat_insert(struct ptree *n, struct ptree *head)  
# 945 "patricia.c"
{
# 947 "patricia.c"
struct ptree * retValue_acc;




# 953 "patricia.c"
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

# 971 "patricia.c"
retValue_acc = 0;
# 973 "patricia.c"
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

# 1004 "patricia.c"
retValue_acc = t;
# 1006 "patricia.c"
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

# 1048 "patricia.c"
retValue_acc = t;
# 1050 "patricia.c"
return (struct ptree * )retValue_acc;
 } }
#line 175 "patricia.c"
for(i = 1;i < 32 && bit(i, (n->p_key)) == bit(i, (t->p_key));i++) { ; } 
#line 180 "patricia.c"
if (bit((head->p_b), (n->p_key))){
(head->p_right) = insertR((head->p_right), n, i, head); }else{
(head->p_left) = insertR((head->p_left), n, i, head); }
#line 185 "patricia.c"

# 1061 "patricia.c"
retValue_acc = n;
# 1063 "patricia.c"
return (struct ptree * )retValue_acc;
 
# 1066 "patricia.c"

}

# 1070 "patricia.c"
return (struct ptree * )retValue_acc;

# 1073 "patricia.c"

}
 
#line 194 "patricia.c"
int pat_remove(struct ptree *n, struct ptree *head)  
# 1079 "patricia.c"
{
# 1081 "patricia.c"
int retValue_acc;




# 1087 "patricia.c"
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

# 1105 "patricia.c"
retValue_acc = 0;
# 1107 "patricia.c"
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

# 1125 "patricia.c"
retValue_acc = 0;
# 1127 "patricia.c"
return (int )retValue_acc;
 }
#line 223 "patricia.c"
if ((t->p_mlen) == 1){
{ 
#line 233 "patricia.c"
if ((t->p_b) == 0){

# 1136 "patricia.c"
retValue_acc = 0;
# 1138 "patricia.c"
return (int )retValue_acc;
 }
#line 233 "patricia.c"
if (((t->p_m)->pm_mask) != ((n->p_m)->pm_mask)){

# 1144 "patricia.c"
retValue_acc = 0;
# 1146 "patricia.c"
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

# 1185 "patricia.c"
retValue_acc = 1;
# 1187 "patricia.c"
return (int )retValue_acc;
 } }
#line 283 "patricia.c"
for(i = 0;i < (t->p_mlen);i++) { if (((n->p_m)->pm_mask) == (t->p_m)[i].pm_mask){
break; }} 
#line 286 "patricia.c"
if (i >= (t->p_mlen)){

# 1196 "patricia.c"
retValue_acc = 0;
# 1198 "patricia.c"
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

# 1218 "patricia.c"
retValue_acc = 1;
# 1220 "patricia.c"
return (int )retValue_acc;
 
# 1223 "patricia.c"

}

# 1227 "patricia.c"
return (int )retValue_acc;

# 1230 "patricia.c"

}
 
#line 316 "patricia.c"
struct ptree *pat_search(unsigned long key, struct ptree *head)  
# 1236 "patricia.c"
{
# 1238 "patricia.c"
struct ptree * retValue_acc;




# 1244 "patricia.c"
{

#line 317 "patricia.c"

#line 317 "patricia.c"
struct ptree *p = 0,*t = head;
#line 318 "patricia.c"

#line 318 "patricia.c"
int i;
#line 320 "patricia.c"
if ((!t)){

# 1258 "patricia.c"
retValue_acc = 0;
# 1260 "patricia.c"
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

# 1283 "patricia.c"
retValue_acc = t;
# 1285 "patricia.c"
return (struct ptree * )retValue_acc;
 } }} } 
#line 352 "patricia.c"

# 1290 "patricia.c"
retValue_acc = p;
# 1292 "patricia.c"
return (struct ptree * )retValue_acc;
 
# 1295 "patricia.c"

}

# 1299 "patricia.c"
return (struct ptree * )retValue_acc;

# 1302 "patricia.c"

}
 
