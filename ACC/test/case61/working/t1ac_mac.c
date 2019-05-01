
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

# 1 "t1ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "t1ac_ac.c" 
# 1 "/usr/include/stdlib.h" 1 3 4
# 61 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 62 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 27 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 28 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 31 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t; 
#line 35 "/usr/include/i386/_types.h"
typedef unsigned char __uint8_t; 
#line 36 "/usr/include/i386/_types.h"
typedef short __int16_t; 
#line 37 "/usr/include/i386/_types.h"
typedef unsigned short __uint16_t; 
#line 38 "/usr/include/i386/_types.h"
typedef int __int32_t; 
#line 39 "/usr/include/i386/_types.h"
typedef unsigned int __uint32_t; 
#line 40 "/usr/include/i386/_types.h"
typedef long long __int64_t; 
#line 41 "/usr/include/i386/_types.h"
typedef unsigned long long __uint64_t; 
#line 43 "/usr/include/i386/_types.h"
typedef long __darwin_intptr_t; 
#line 44 "/usr/include/i386/_types.h"
typedef unsigned int __darwin_natural_t; 
#line 64 "/usr/include/i386/_types.h"
typedef int __darwin_ct_rune_t; 
#line 73 "/usr/include/i386/_types.h"
typedef union {char __mbstate8[128]; long long _mbstateL; 
}__mbstate_t; 
#line 75 "/usr/include/i386/_types.h"
typedef  __mbstate_t __darwin_mbstate_t; 
#line 78 "/usr/include/i386/_types.h"
typedef int __darwin_ptrdiff_t; 
#line 84 "/usr/include/i386/_types.h"
typedef long unsigned int __darwin_size_t; 
#line 90 "/usr/include/i386/_types.h"
typedef __builtin_va_list __darwin_va_list; 
#line 96 "/usr/include/i386/_types.h"
typedef int __darwin_wchar_t; 
#line 101 "/usr/include/i386/_types.h"
typedef  __darwin_wchar_t __darwin_rune_t; 
#line 104 "/usr/include/i386/_types.h"
typedef int __darwin_wint_t; 
#line 109 "/usr/include/i386/_types.h"
typedef unsigned long __darwin_clock_t; 
#line 110 "/usr/include/i386/_types.h"
typedef  __uint32_t __darwin_socklen_t; 
#line 111 "/usr/include/i386/_types.h"
typedef long __darwin_ssize_t; 
#line 112 "/usr/include/i386/_types.h"
typedef long __darwin_time_t; 
# 64 "/usr/include/i386/_types.h" 3 4
# 29 "/usr/include/machine/_types.h" 2 3 4
# 31 "/usr/include/sys/_types.h" 2 3 4
struct mcontext ; 
#line 32 "/usr/include/sys/_types.h"
struct mcontext64 ; 
#line 65 "/usr/include/sys/_types.h"
struct __darwin_pthread_handler_rec {void (*__routine)(void *); void *__arg; struct __darwin_pthread_handler_rec *__next; 
}; 
#line 66 "/usr/include/sys/_types.h"
struct _opaque_pthread_attr_t {long __sig; char __opaque[36]; 
}; 
#line 67 "/usr/include/sys/_types.h"
struct _opaque_pthread_cond_t {long __sig; char __opaque[24]; 
}; 
#line 68 "/usr/include/sys/_types.h"
struct _opaque_pthread_condattr_t {long __sig; char __opaque[4]; 
}; 
#line 69 "/usr/include/sys/_types.h"
struct _opaque_pthread_mutex_t {long __sig; char __opaque[40]; 
}; 
#line 70 "/usr/include/sys/_types.h"
struct _opaque_pthread_mutexattr_t {long __sig; char __opaque[8]; 
}; 
#line 71 "/usr/include/sys/_types.h"
struct _opaque_pthread_once_t {long __sig; char __opaque[4]; 
}; 
#line 72 "/usr/include/sys/_types.h"
struct _opaque_pthread_rwlock_t {long __sig; char __opaque[124]; 
}; 
#line 73 "/usr/include/sys/_types.h"
struct _opaque_pthread_rwlockattr_t {long __sig; char __opaque[12]; 
}; 
#line 74 "/usr/include/sys/_types.h"
struct _opaque_pthread_t {long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[596]; 
}; 
# 60 "/usr/include/sys/_types.h" 3 4
# 96 "/usr/include/sys/_types.h" 3 4
typedef  __int64_t __darwin_blkcnt_t; 
#line 97 "/usr/include/sys/_types.h"
typedef  __int32_t __darwin_blksize_t; 
#line 98 "/usr/include/sys/_types.h"
typedef  __int32_t __darwin_dev_t; 
#line 99 "/usr/include/sys/_types.h"
typedef unsigned int __darwin_fsblkcnt_t; 
#line 100 "/usr/include/sys/_types.h"
typedef unsigned int __darwin_fsfilcnt_t; 
#line 101 "/usr/include/sys/_types.h"
typedef  __uint32_t __darwin_gid_t; 
#line 102 "/usr/include/sys/_types.h"
typedef  __uint32_t __darwin_id_t; 
#line 103 "/usr/include/sys/_types.h"
typedef  __uint32_t __darwin_ino_t; 
#line 104 "/usr/include/sys/_types.h"
typedef  __darwin_natural_t __darwin_mach_port_name_t; 
#line 105 "/usr/include/sys/_types.h"
typedef  __darwin_mach_port_name_t __darwin_mach_port_t; 
#line 107 "/usr/include/sys/_types.h"
typedef struct mcontext *__darwin_mcontext_t; 
#line 108 "/usr/include/sys/_types.h"
typedef struct mcontext64 *__darwin_mcontext64_t; 
#line 112 "/usr/include/sys/_types.h"
typedef  __uint16_t __darwin_mode_t; 
#line 113 "/usr/include/sys/_types.h"
typedef  __int64_t __darwin_off_t; 
#line 114 "/usr/include/sys/_types.h"
typedef  __int32_t __darwin_pid_t; 
#line 116 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t; 
#line 118 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t; 
#line 120 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t; 
#line 121 "/usr/include/sys/_types.h"
typedef unsigned long __darwin_pthread_key_t; 
#line 123 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t; 
#line 125 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t; 
#line 127 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t; 
#line 129 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t; 
#line 131 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t; 
#line 133 "/usr/include/sys/_types.h"
typedef struct _opaque_pthread_t *__darwin_pthread_t; 
#line 134 "/usr/include/sys/_types.h"
typedef  __uint32_t __darwin_sigset_t; 
#line 135 "/usr/include/sys/_types.h"
typedef  __int32_t __darwin_suseconds_t; 
#line 136 "/usr/include/sys/_types.h"
typedef  __uint32_t __darwin_uid_t; 
#line 137 "/usr/include/sys/_types.h"
typedef  __uint32_t __darwin_useconds_t; 
#line 138 "/usr/include/sys/_types.h"
typedef unsigned char __darwin_uuid_t[16]; 
#line 150 "/usr/include/sys/_types.h"
struct sigaltstack {void *ss_sp;  __darwin_size_t ss_size; int ss_flags; 
}; 
#line 152 "/usr/include/sys/_types.h"
typedef struct sigaltstack __darwin_stack_t; 
#line 174 "/usr/include/sys/_types.h"
struct ucontext {int uc_onstack;  __darwin_sigset_t uc_sigmask;  __darwin_stack_t uc_stack; struct ucontext *uc_link;  __darwin_size_t uc_mcsize;  __darwin_mcontext_t uc_mcontext; 
}; 
#line 176 "/usr/include/sys/_types.h"
typedef struct ucontext __darwin_ucontext_t; 
#line 189 "/usr/include/sys/_types.h"
struct ucontext64 {int uc_onstack;  __darwin_sigset_t uc_sigmask;  __darwin_stack_t uc_stack; struct ucontext64 *uc_link;  __darwin_size_t uc_mcsize;  __darwin_mcontext64_t uc_mcontext64; 
}; 
#line 190 "/usr/include/sys/_types.h"
typedef struct ucontext64 __darwin_ucontext64_t; 
#line 29 "/usr/include/_types.h"
typedef int __darwin_nl_item; 
#line 30 "/usr/include/_types.h"
typedef int __darwin_wctrans_t; 
#line 34 "/usr/include/_types.h"
typedef unsigned long __darwin_wctype_t; 
# 28 "/usr/include/_types.h" 2 3 4
# 63 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 77 "/usr/include/sys/wait.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
#line 84 "/usr/include/sys/wait.h"
typedef  __darwin_pid_t pid_t; 
#line 89 "/usr/include/sys/wait.h"
typedef  __darwin_id_t id_t; 
# 110 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 67 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 68 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/machine/signal.h" 1 3 4
# 29 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 31 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t; 
#line 65 "/usr/include/i386/signal.h"
struct sigcontext {int sc_onstack; int sc_mask; unsigned int sc_eax; unsigned int sc_ebx; unsigned int sc_ecx; unsigned int sc_edx; unsigned int sc_edi; unsigned int sc_esi; unsigned int sc_ebp; unsigned int sc_esp; unsigned int sc_ss; unsigned int sc_eflags; unsigned int sc_eip; unsigned int sc_cs; unsigned int sc_ds; unsigned int sc_es; unsigned int sc_fs; unsigned int sc_gs; 
}; 
# 46 "/usr/include/i386/signal.h" 3 4
# 30 "/usr/include/machine/signal.h" 2 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4
# 139 "/usr/include/sys/signal.h" 3 4
typedef  __darwin_mcontext_t mcontext_t; 
#line 145 "/usr/include/sys/signal.h"
typedef  __darwin_mcontext64_t mcontext64_t; 
#line 156 "/usr/include/sys/signal.h"
typedef  __darwin_pthread_attr_t pthread_attr_t; 
#line 161 "/usr/include/sys/signal.h"
typedef  __darwin_sigset_t sigset_t; 
#line 166 "/usr/include/sys/signal.h"
typedef  __darwin_size_t size_t; 
#line 171 "/usr/include/sys/signal.h"
typedef  __darwin_ucontext_t ucontext_t; 
#line 177 "/usr/include/sys/signal.h"
typedef  __darwin_ucontext64_t ucontext64_t; 
#line 183 "/usr/include/sys/signal.h"
typedef  __darwin_uid_t uid_t; 
#line 190 "/usr/include/sys/signal.h"
union sigval {int sival_int; void *sival_ptr; 
}; 
#line 202 "/usr/include/sys/signal.h"
struct sigevent {int sigev_notify; int sigev_signo; union sigval sigev_value; void (*sigev_notify_function)(union sigval );  pthread_attr_t *sigev_notify_attributes; 
}; 
#line 217 "/usr/include/sys/signal.h"
typedef struct __siginfo {int si_signo; int si_errno; int si_code;  pid_t si_pid;  uid_t si_uid; int si_status; void *si_addr; union sigval si_value; long si_band; unsigned long pad[7]; 
}siginfo_t; 
# 156 "/usr/include/sys/signal.h" 3 4
# 301 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {void (*__sa_handler)(int ); void (*__sa_sigaction)(int , struct __siginfo *, void *); 
}; 
#line 309 "/usr/include/sys/signal.h"
struct __sigaction {union __sigaction_u __sigaction_u; void (*sa_tramp)(void *, int , int ,  siginfo_t *, void *);  sigset_t sa_mask; int sa_flags; 
}; 
#line 318 "/usr/include/sys/signal.h"
struct sigaction {union __sigaction_u __sigaction_u;  sigset_t sa_mask; int sa_flags; 
}; 
#line 355 "/usr/include/sys/signal.h"
typedef void (*sig_t)(int ); 
# 355 "/usr/include/sys/signal.h" 3 4
# 364 "/usr/include/sys/signal.h" 3 4
typedef  __darwin_stack_t stack_t; 
#line 381 "/usr/include/sys/signal.h"
struct sigvec {void (*sv_handler)(int ); int sv_mask; int sv_flags; 
}; 
# 377 "/usr/include/sys/signal.h" 3 4
# 399 "/usr/include/sys/signal.h" 3 4
struct sigstack {char *ss_sp; int ss_onstack; 
}; 
#line 419 "/usr/include/sys/signal.h"
void (*signal(int , void (*)(int )))(int ); 
# 418 "/usr/include/sys/signal.h" 3 4
# 111 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 77 "/usr/include/sys/resource.h" 3 4
struct timeval { __darwin_time_t tv_sec;  __darwin_suseconds_t tv_usec; 
}; 
#line 90 "/usr/include/sys/resource.h"
typedef  __int64_t rlim_t; 
# 90 "/usr/include/sys/resource.h" 3 4
# 135 "/usr/include/sys/resource.h" 3 4
# 163 "/usr/include/sys/resource.h" 3 4
struct rusage {struct timeval ru_utime; struct timeval ru_stime; long ru_maxrss; long ru_ixrss; long ru_idrss; long ru_isrss; long ru_minflt; long ru_majflt; long ru_nswap; long ru_inblock; long ru_oublock; long ru_msgsnd; long ru_msgrcv; long ru_nsignals; long ru_nvcsw; long ru_nivcsw; 
}; 
#line 210 "/usr/include/sys/resource.h"
struct rlimit { rlim_t rlim_cur;  rlim_t rlim_max; 
}; 
#line 215 "/usr/include/sys/resource.h"
int getpriority(int ,  id_t ); 
#line 216 "/usr/include/sys/resource.h"
int getrlimit(int , struct rlimit *); 
#line 217 "/usr/include/sys/resource.h"
int getrusage(int , struct rusage *); 
#line 218 "/usr/include/sys/resource.h"
int setpriority(int ,  id_t , int ); 
#line 219 "/usr/include/sys/resource.h"
int setrlimit(int , const struct rlimit *); 
# 207 "/usr/include/sys/resource.h" 3 4
# 112 "/usr/include/sys/wait.h" 2 3 4
# 182 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 32 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 92 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 88 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h" 1 3 4
# 14 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h" 3 4
typedef signed char int8_t; 
#line 19 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef short int16_t; 
#line 24 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef int int32_t; 
#line 29 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef long long int64_t; 
#line 34 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef unsigned char uint8_t; 
#line 39 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef unsigned short uint16_t; 
#line 44 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef unsigned int uint32_t; 
#line 49 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef unsigned long long uint64_t; 
#line 53 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int8_t int_least8_t; 
#line 54 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int16_t int_least16_t; 
#line 55 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int32_t int_least32_t; 
#line 56 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int64_t int_least64_t; 
#line 57 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint8_t uint_least8_t; 
#line 58 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint16_t uint_least16_t; 
#line 59 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint32_t uint_least32_t; 
#line 60 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint64_t uint_least64_t; 
#line 64 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int8_t int_fast8_t; 
#line 65 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int16_t int_fast16_t; 
#line 66 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int32_t int_fast32_t; 
#line 67 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  int64_t int_fast64_t; 
#line 68 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint8_t uint_fast8_t; 
#line 69 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint16_t uint_fast16_t; 
#line 70 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint32_t uint_fast32_t; 
#line 71 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef  uint64_t uint_fast64_t; 
#line 78 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef long intptr_t; 
#line 83 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef unsigned long uintptr_t; 
#line 91 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef long long int intmax_t; 
#line 100 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h"
typedef long long unsigned int uintmax_t; 
# 100 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h" 3 4
# 89 "/usr/include/sys/_endian.h" 2 3 4
# 1 "/usr/include/libkern/OSByteOrder.h" 1 3 4
# 54 "/usr/include/libkern/OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/OSByteOrder.h" 3 4
static __inline__  uint16_t _OSSwapInt16( uint16_t data)  {

#line 45 "/usr/include/libkern/i386/OSByteOrder.h"
return ((data << 8) | (data >> 8)); }
 
#line 52 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__  uint32_t _OSSwapInt32( uint32_t data)  {

#line 53 "/usr/include/libkern/i386/OSByteOrder.h"
 __asm__ ("bswap   %0" : "+r"(data)); 
#line 54 "/usr/include/libkern/i386/OSByteOrder.h"
return data; }
 
#line 62 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__  uint64_t _OSSwapInt64( uint64_t data)  {

#line 66 "/usr/include/libkern/i386/OSByteOrder.h"
 __asm__ ("bswap   %%eax\n\t""bswap   %%edx\n\t""xchgl   %%eax, %%edx" : "+A"(data)); 
#line 67 "/usr/include/libkern/i386/OSByteOrder.h"
return data; }
 
#line 93 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__  uint16_t OSReadSwapInt16(const volatile void *base,  uintptr_t byteOffset)  {

#line 94 "/usr/include/libkern/i386/OSByteOrder.h"

#line 94 "/usr/include/libkern/i386/OSByteOrder.h"
 uint16_t result;
#line 96 "/usr/include/libkern/i386/OSByteOrder.h"
result = (*((volatile  uint16_t *)((( uintptr_t )base) + byteOffset))); 
#line 97 "/usr/include/libkern/i386/OSByteOrder.h"
return _OSSwapInt16(result); }
 
#line 105 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__  uint32_t OSReadSwapInt32(const volatile void *base,  uintptr_t byteOffset)  {

#line 106 "/usr/include/libkern/i386/OSByteOrder.h"

#line 106 "/usr/include/libkern/i386/OSByteOrder.h"
 uint32_t result;
#line 108 "/usr/include/libkern/i386/OSByteOrder.h"
result = (*((volatile  uint32_t *)((( uintptr_t )base) + byteOffset))); 
#line 109 "/usr/include/libkern/i386/OSByteOrder.h"
return _OSSwapInt32(result); }
 
#line 117 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__  uint64_t OSReadSwapInt64(const volatile void *base,  uintptr_t byteOffset)  {

#line 118 "/usr/include/libkern/i386/OSByteOrder.h"

#line 118 "/usr/include/libkern/i386/OSByteOrder.h"
 uint64_t result;
#line 120 "/usr/include/libkern/i386/OSByteOrder.h"
result = (*((volatile  uint64_t *)((( uintptr_t )base) + byteOffset))); 
#line 121 "/usr/include/libkern/i386/OSByteOrder.h"
return _OSSwapInt64(result); }
 
#line 133 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__ void OSWriteSwapInt16(volatile void *base,  uintptr_t byteOffset,  uint16_t data)  {

#line 134 "/usr/include/libkern/i386/OSByteOrder.h"
(*((volatile  uint16_t *)((( uintptr_t )base) + byteOffset))) = _OSSwapInt16(data); }
 
#line 144 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__ void OSWriteSwapInt32(volatile void *base,  uintptr_t byteOffset,  uint32_t data)  {

#line 145 "/usr/include/libkern/i386/OSByteOrder.h"
(*((volatile  uint32_t *)((( uintptr_t )base) + byteOffset))) = _OSSwapInt32(data); }
 
#line 155 "/usr/include/libkern/i386/OSByteOrder.h"
static __inline__ void OSWriteSwapInt64(volatile void *base,  uintptr_t byteOffset,  uint64_t data)  {

#line 156 "/usr/include/libkern/i386/OSByteOrder.h"
(*((volatile  uint64_t *)((( uintptr_t )base) + byteOffset))) = _OSSwapInt64(data); }
 
# 88 "/usr/include/libkern/i386/OSByteOrder.h" 3 4
# 55 "/usr/include/libkern/OSByteOrder.h" 2 3 4
# 84 "/usr/include/libkern/OSByteOrder.h" 3 4
enum {OSUnknownByteOrder,OSLittleEndian,OSBigEndian}; 
#line 87 "/usr/include/libkern/OSByteOrder.h"
static __inline__  int32_t OSHostByteOrder(void )  {

#line 89 "/usr/include/libkern/OSByteOrder.h"
return OSLittleEndian; }
 
#line 114 "/usr/include/libkern/OSByteOrder.h"
static __inline__  uint16_t _OSReadInt16(const volatile void *base,  uintptr_t byteOffset)  {

#line 115 "/usr/include/libkern/OSByteOrder.h"
return (*((volatile  uint16_t *)((( uintptr_t )base) + byteOffset))); }
 
#line 123 "/usr/include/libkern/OSByteOrder.h"
static __inline__  uint32_t _OSReadInt32(const volatile void *base,  uintptr_t byteOffset)  {

#line 124 "/usr/include/libkern/OSByteOrder.h"
return (*((volatile  uint32_t *)((( uintptr_t )base) + byteOffset))); }
 
#line 132 "/usr/include/libkern/OSByteOrder.h"
static __inline__  uint64_t _OSReadInt64(const volatile void *base,  uintptr_t byteOffset)  {

#line 133 "/usr/include/libkern/OSByteOrder.h"
return (*((volatile  uint64_t *)((( uintptr_t )base) + byteOffset))); }
 
#line 145 "/usr/include/libkern/OSByteOrder.h"
static __inline__ void _OSWriteInt16(volatile void *base,  uintptr_t byteOffset,  uint16_t data)  {

#line 146 "/usr/include/libkern/OSByteOrder.h"
(*((volatile  uint16_t *)((( uintptr_t )base) + byteOffset))) = data; }
 
#line 156 "/usr/include/libkern/OSByteOrder.h"
static __inline__ void _OSWriteInt32(volatile void *base,  uintptr_t byteOffset,  uint32_t data)  {

#line 157 "/usr/include/libkern/OSByteOrder.h"
(*((volatile  uint32_t *)((( uintptr_t )base) + byteOffset))) = data; }
 
#line 167 "/usr/include/libkern/OSByteOrder.h"
static __inline__ void _OSWriteInt64(volatile void *base,  uintptr_t byteOffset,  uint64_t data)  {

#line 168 "/usr/include/libkern/OSByteOrder.h"
(*((volatile  uint64_t *)((( uintptr_t )base) + byteOffset))) = data; }
 
# 109 "/usr/include/libkern/OSByteOrder.h" 3 4
# 92 "/usr/include/sys/_endian.h" 2 3 4
 uint16_t ntohs( uint16_t ); 
#line 93 "/usr/include/sys/_endian.h"
 uint16_t htons( uint16_t ); 
#line 94 "/usr/include/sys/_endian.h"
 uint32_t ntohl( uint32_t ); 
#line 95 "/usr/include/sys/_endian.h"
 uint32_t htonl( uint32_t ); 
# 93 "/usr/include/i386/endian.h" 2 3 4
# 33 "/usr/include/machine/endian.h" 2 3 4
# 226 "/usr/include/sys/wait.h" 2 3 4
union wait {int w_status; struct {unsigned int w_Termsig:7,w_Coredump:1,w_Retcode:8,w_Filler:16; 
}w_T; struct {unsigned int w_Stopval:8,w_Stopsig:8,w_Filler:16; 
}w_S; 
}; 
#line 241 "/usr/include/sys/wait.h"
 pid_t wait(int *); 
#line 242 "/usr/include/sys/wait.h"
 pid_t waitpid( pid_t , int *, int ); 
#line 244 "/usr/include/sys/wait.h"
int waitid( idtype_t ,  id_t ,  siginfo_t *, int ); 
#line 247 "/usr/include/sys/wait.h"
 pid_t wait3(int *, int , struct rusage *); 
#line 248 "/usr/include/sys/wait.h"
 pid_t wait4( pid_t , int *, int , struct rusage *); 
# 240 "/usr/include/sys/wait.h" 3 4
# 65 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/alloca.h" 1 3 4
# 36 "/usr/include/alloca.h" 3 4
void *alloca( size_t ); 
# 67 "/usr/include/stdlib.h" 2 3 4
# 80 "/usr/include/stdlib.h" 3 4
typedef  __darwin_ct_rune_t ct_rune_t; 
#line 85 "/usr/include/stdlib.h"
typedef  __darwin_rune_t rune_t; 
#line 92 "/usr/include/stdlib.h"
typedef  __darwin_wchar_t wchar_t; 
#line 99 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; 
}div_t; 
#line 104 "/usr/include/stdlib.h"
typedef struct {long quot; long rem; 
}ldiv_t; 
#line 110 "/usr/include/stdlib.h"
typedef struct {long long quot; long long rem; 
}lldiv_t; 
#line 133 "/usr/include/stdlib.h"
extern int __mb_cur_max; 
# 133 "/usr/include/stdlib.h" 3 4
# 144 "/usr/include/stdlib.h" 3 4
void abort(void ) __attribute__  (( __noreturn__ )) ; 
#line 145 "/usr/include/stdlib.h"
int abs(int ) __attribute__  (( __const__ )) ; 
#line 146 "/usr/include/stdlib.h"
int atexit(void (*)(void )); 
#line 147 "/usr/include/stdlib.h"
double atof(const char *); 
#line 148 "/usr/include/stdlib.h"
int atoi(const char *); 
#line 149 "/usr/include/stdlib.h"
long atol(const char *); 
#line 152 "/usr/include/stdlib.h"
long long atoll(const char *); 
#line 155 "/usr/include/stdlib.h"
void *bsearch(const void *, const void *,  size_t ,  size_t , int (*)(const void *, const void *)); 
#line 156 "/usr/include/stdlib.h"
void *calloc( size_t ,  size_t ); 
#line 157 "/usr/include/stdlib.h"
 div_t div(int , int ) __attribute__  (( __const__ )) ; 
#line 158 "/usr/include/stdlib.h"
void exit(int ) __attribute__  (( __noreturn__ )) ; 
#line 159 "/usr/include/stdlib.h"
void free(void *); 
#line 160 "/usr/include/stdlib.h"
char *getenv(const char *); 
#line 161 "/usr/include/stdlib.h"
long labs(long ) __attribute__  (( __const__ )) ; 
#line 162 "/usr/include/stdlib.h"
 ldiv_t ldiv(long , long ) __attribute__  (( __const__ )) ; 
#line 165 "/usr/include/stdlib.h"
long long llabs(long long ); 
#line 166 "/usr/include/stdlib.h"
 lldiv_t lldiv(long long , long long ); 
#line 168 "/usr/include/stdlib.h"
void *malloc( size_t ); 
#line 169 "/usr/include/stdlib.h"
int mblen(const char *,  size_t ); 
#line 170 "/usr/include/stdlib.h"
 size_t mbstowcs( wchar_t *, const char *,  size_t ); 
#line 171 "/usr/include/stdlib.h"
int mbtowc( wchar_t *, const char *,  size_t ); 
#line 173 "/usr/include/stdlib.h"
void qsort(void *,  size_t ,  size_t , int (*)(const void *, const void *)); 
#line 174 "/usr/include/stdlib.h"
int rand(void ); 
#line 175 "/usr/include/stdlib.h"
void *realloc(void *,  size_t ); 
#line 176 "/usr/include/stdlib.h"
void srand(unsigned ); 
#line 177 "/usr/include/stdlib.h"
double strtod(const char *, char **); 
#line 178 "/usr/include/stdlib.h"
float strtof(const char *, char **); 
#line 179 "/usr/include/stdlib.h"
long strtol(const char *, char **, int ); 
#line 181 "/usr/include/stdlib.h"
long double strtold(const char *, char **); 
#line 184 "/usr/include/stdlib.h"
long long strtoll(const char *, char **, int ); 
#line 187 "/usr/include/stdlib.h"
unsigned long strtoul(const char *, char **, int ); 
#line 190 "/usr/include/stdlib.h"
unsigned long long strtoull(const char *, char **, int ); 
#line 192 "/usr/include/stdlib.h"
int system(const char *); 
#line 193 "/usr/include/stdlib.h"
 size_t wcstombs(char *, const  wchar_t *,  size_t ); 
#line 194 "/usr/include/stdlib.h"
int wctomb(char *,  wchar_t ); 
#line 197 "/usr/include/stdlib.h"
void _Exit(int ) __attribute__  (( __noreturn__ )) ; 
#line 198 "/usr/include/stdlib.h"
long a64l(const char *); 
#line 199 "/usr/include/stdlib.h"
double drand48(void ); 
#line 200 "/usr/include/stdlib.h"
char *ecvt(double , int , int *, int *); 
#line 201 "/usr/include/stdlib.h"
double erand48(unsigned short ([3])); 
#line 202 "/usr/include/stdlib.h"
char *fcvt(double , int , int *, int *); 
#line 203 "/usr/include/stdlib.h"
char *gcvt(double , int , char *); 
#line 204 "/usr/include/stdlib.h"
int getsubopt(char **, char *const *, char **); 
#line 205 "/usr/include/stdlib.h"
int grantpt(int ); 
#line 209 "/usr/include/stdlib.h"
char *initstate(unsigned long , char *, long ); 
#line 211 "/usr/include/stdlib.h"
long jrand48(unsigned short ([3])); 
#line 212 "/usr/include/stdlib.h"
char *l64a(long ); 
#line 213 "/usr/include/stdlib.h"
void lcong48(unsigned short ([7])); 
#line 214 "/usr/include/stdlib.h"
long lrand48(void ); 
#line 215 "/usr/include/stdlib.h"
char *mktemp(char *); 
#line 216 "/usr/include/stdlib.h"
int mkstemp(char *); 
#line 217 "/usr/include/stdlib.h"
long mrand48(void ); 
#line 218 "/usr/include/stdlib.h"
long nrand48(unsigned short ([3])); 
#line 219 "/usr/include/stdlib.h"
int posix_openpt(int ); 
#line 220 "/usr/include/stdlib.h"
char *ptsname(int ); 
#line 221 "/usr/include/stdlib.h"
int putenv(char *); 
#line 222 "/usr/include/stdlib.h"
long random(void ); 
#line 223 "/usr/include/stdlib.h"
char *realpath(const char *, char *resolved_path); 
#line 225 "/usr/include/stdlib.h"
unsigned short *seed48(unsigned short ([3])); 
#line 226 "/usr/include/stdlib.h"
int setenv(const char *, const char *, int ); 
#line 230 "/usr/include/stdlib.h"
int setkey(const char *); 
#line 232 "/usr/include/stdlib.h"
char *setstate(const char *); 
#line 233 "/usr/include/stdlib.h"
void srand48(long ); 
#line 237 "/usr/include/stdlib.h"
void srandom(unsigned long ); 
#line 239 "/usr/include/stdlib.h"
int unlockpt(int ); 
#line 243 "/usr/include/stdlib.h"
void unsetenv(const char *); 
# 1 "/usr/include/machine/types.h" 1 3 4
# 32 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 74 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t; 
#line 79 "/usr/include/i386/types.h"
typedef unsigned short u_int16_t; 
#line 84 "/usr/include/i386/types.h"
typedef unsigned int u_int32_t; 
#line 89 "/usr/include/i386/types.h"
typedef unsigned long long u_int64_t; 
#line 94 "/usr/include/i386/types.h"
typedef  int32_t register_t; 
#line 109 "/usr/include/i386/types.h"
typedef  u_int64_t user_addr_t; 
#line 110 "/usr/include/i386/types.h"
typedef  u_int64_t user_size_t; 
#line 111 "/usr/include/i386/types.h"
typedef  int64_t user_ssize_t; 
#line 112 "/usr/include/i386/types.h"
typedef  int64_t user_long_t; 
#line 113 "/usr/include/i386/types.h"
typedef  u_int64_t user_ulong_t; 
#line 114 "/usr/include/i386/types.h"
typedef  int64_t user_time_t; 
#line 119 "/usr/include/i386/types.h"
typedef  u_int64_t syscall_arg_t; 
# 109 "/usr/include/i386/types.h" 3 4
# 33 "/usr/include/machine/types.h" 2 3 4
# 251 "/usr/include/stdlib.h" 2 3 4
typedef  __darwin_dev_t dev_t; 
#line 256 "/usr/include/stdlib.h"
typedef  __darwin_mode_t mode_t; 
#line 260 "/usr/include/stdlib.h"
 u_int32_t arc4random(void ); 
#line 261 "/usr/include/stdlib.h"
void arc4random_addrandom(unsigned char *dat, int datlen); 
#line 262 "/usr/include/stdlib.h"
void arc4random_stir(void ); 
#line 265 "/usr/include/stdlib.h"
char *cgetcap(char *, const char *, int ); 
#line 266 "/usr/include/stdlib.h"
int cgetclose(void ); 
#line 267 "/usr/include/stdlib.h"
int cgetent(char **, char **, const char *); 
#line 268 "/usr/include/stdlib.h"
int cgetfirst(char **, char **); 
#line 269 "/usr/include/stdlib.h"
int cgetmatch(const char *, const char *); 
#line 270 "/usr/include/stdlib.h"
int cgetnext(char **, char **); 
#line 271 "/usr/include/stdlib.h"
int cgetnum(char *, const char *, long *); 
#line 272 "/usr/include/stdlib.h"
int cgetset(const char *); 
#line 273 "/usr/include/stdlib.h"
int cgetstr(char *, const char *, char **); 
#line 274 "/usr/include/stdlib.h"
int cgetustr(char *, const char *, char **); 
#line 276 "/usr/include/stdlib.h"
int daemon(int , int ); 
#line 277 "/usr/include/stdlib.h"
char *devname( dev_t ,  mode_t ); 
#line 278 "/usr/include/stdlib.h"
char *devname_r( dev_t ,  mode_t , char *buf, int len); 
#line 279 "/usr/include/stdlib.h"
char *getbsize(int *, long *); 
#line 280 "/usr/include/stdlib.h"
int getloadavg(double ([]), int ); 
#line 282 "/usr/include/stdlib.h"
const char *getprogname(void ); 
#line 285 "/usr/include/stdlib.h"
int heapsort(void *,  size_t ,  size_t , int (*)(const void *, const void *)); 
#line 287 "/usr/include/stdlib.h"
int mergesort(void *,  size_t ,  size_t , int (*)(const void *, const void *)); 
#line 289 "/usr/include/stdlib.h"
void qsort_r(void *,  size_t ,  size_t , void *, int (*)(void *, const void *, const void *)); 
#line 291 "/usr/include/stdlib.h"
int radixsort(const unsigned char **, int , const unsigned char *, unsigned ); 
#line 292 "/usr/include/stdlib.h"
void setprogname(const char *); 
#line 294 "/usr/include/stdlib.h"
int sradixsort(const unsigned char **, int , const unsigned char *, unsigned ); 
#line 295 "/usr/include/stdlib.h"
void sranddev(void ); 
#line 296 "/usr/include/stdlib.h"
void srandomdev(void ); 
#line 297 "/usr/include/stdlib.h"
int rand_r(unsigned *); 
#line 298 "/usr/include/stdlib.h"
void *reallocf(void *,  size_t ); 
#line 301 "/usr/include/stdlib.h"
long long strtoq(const char *, char **, int ); 
#line 303 "/usr/include/stdlib.h"
unsigned long long strtouq(const char *, char **, int ); 
#line 305 "/usr/include/stdlib.h"
extern char *suboptarg; 
#line 306 "/usr/include/stdlib.h"
void *valloc( size_t ); 
#line 4 "t1ac_ac.c"
 inline void __utac_acc__t1ac_mac__1(void) { 



#line 5 "t1ac_ac.c"
printf("aspect, before call malloc \n"); }

 



