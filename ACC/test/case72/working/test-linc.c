
#line 12 "test-linc.mc"
typedef int __sig_atomic_t; 
#line 20 "test-linc.mc"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; }__sigset_t; 
#line 21 "test-linc.mc"
extern int __sigismember(__const  __sigset_t *, int ); 
#line 22 "test-linc.mc"
extern int __sigaddset( __sigset_t *, int ); 
#line 23 "test-linc.mc"
extern int __sigdelset( __sigset_t *, int ); 
#line 24 "test-linc.mc"
extern __inline int __sigismember(__const  __sigset_t *__set, int __sig)  {

#line 24 "test-linc.mc"

#line 24 "test-linc.mc"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 24 "test-linc.mc"

#line 24 "test-linc.mc"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 24 "test-linc.mc"
return (((__set->__val)[__word] & __mask)?1:0); }
 
#line 25 "test-linc.mc"
extern __inline int __sigaddset( __sigset_t *__set, int __sig)  {

#line 25 "test-linc.mc"

#line 25 "test-linc.mc"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 25 "test-linc.mc"

#line 25 "test-linc.mc"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 25 "test-linc.mc"
return (((__set->__val)[__word] |= __mask) , 0); }
 
#line 26 "test-linc.mc"
extern __inline int __sigdelset( __sigset_t *__set, int __sig)  {

#line 26 "test-linc.mc"

#line 26 "test-linc.mc"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 26 "test-linc.mc"

#line 26 "test-linc.mc"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 26 "test-linc.mc"
return (((__set->__val)[__word] &= (~__mask)) , 0); }
 
#line 34 "test-linc.mc"
typedef  __sig_atomic_t sig_atomic_t; 
#line 43 "test-linc.mc"
typedef  __sigset_t sigset_t; 
#line 52 "test-linc.mc"
typedef unsigned int size_t; 
#line 55 "test-linc.mc"
typedef unsigned char __u_char; 
#line 56 "test-linc.mc"
typedef unsigned short int __u_short; 
#line 57 "test-linc.mc"
typedef unsigned int __u_int; 
#line 58 "test-linc.mc"
typedef unsigned long int __u_long; 
#line 61 "test-linc.mc"
typedef signed char __int8_t; 
#line 62 "test-linc.mc"
typedef unsigned char __uint8_t; 
#line 63 "test-linc.mc"
typedef signed short int __int16_t; 
#line 64 "test-linc.mc"
typedef unsigned short int __uint16_t; 
#line 65 "test-linc.mc"
typedef signed int __int32_t; 
#line 66 "test-linc.mc"
typedef unsigned int __uint32_t; 
#line 71 "test-linc.mc"
 __extension__ typedef signed long long int __int64_t; 
#line 72 "test-linc.mc"
 __extension__ typedef unsigned long long int __uint64_t; 
#line 80 "test-linc.mc"
 __extension__ typedef long long int __quad_t; 
#line 81 "test-linc.mc"
 __extension__ typedef unsigned long long int __u_quad_t; 
#line 84 "test-linc.mc"
 __extension__ typedef  __u_quad_t __dev_t; 
#line 85 "test-linc.mc"
 __extension__ typedef unsigned int __uid_t; 
#line 86 "test-linc.mc"
 __extension__ typedef unsigned int __gid_t; 
#line 87 "test-linc.mc"
 __extension__ typedef unsigned long int __ino_t; 
#line 88 "test-linc.mc"
 __extension__ typedef  __u_quad_t __ino64_t; 
#line 89 "test-linc.mc"
 __extension__ typedef unsigned int __mode_t; 
#line 90 "test-linc.mc"
 __extension__ typedef unsigned int __nlink_t; 
#line 91 "test-linc.mc"
 __extension__ typedef long int __off_t; 
#line 92 "test-linc.mc"
 __extension__ typedef  __quad_t __off64_t; 
#line 93 "test-linc.mc"
 __extension__ typedef int __pid_t; 
#line 94 "test-linc.mc"
 __extension__ typedef struct {int __val[2]; }__fsid_t; 
#line 95 "test-linc.mc"
 __extension__ typedef long int __clock_t; 
#line 96 "test-linc.mc"
 __extension__ typedef unsigned long int __rlim_t; 
#line 97 "test-linc.mc"
 __extension__ typedef  __u_quad_t __rlim64_t; 
#line 98 "test-linc.mc"
 __extension__ typedef unsigned int __id_t; 
#line 99 "test-linc.mc"
 __extension__ typedef long int __time_t; 
#line 100 "test-linc.mc"
 __extension__ typedef unsigned int __useconds_t; 
#line 101 "test-linc.mc"
 __extension__ typedef long int __suseconds_t; 
#line 103 "test-linc.mc"
 __extension__ typedef int __daddr_t; 
#line 104 "test-linc.mc"
 __extension__ typedef long int __swblk_t; 
#line 105 "test-linc.mc"
 __extension__ typedef int __key_t; 
#line 108 "test-linc.mc"
 __extension__ typedef int __clockid_t; 
#line 111 "test-linc.mc"
 __extension__ typedef void *__timer_t; 
#line 114 "test-linc.mc"
 __extension__ typedef long int __blksize_t; 
#line 119 "test-linc.mc"
 __extension__ typedef long int __blkcnt_t; 
#line 120 "test-linc.mc"
 __extension__ typedef  __quad_t __blkcnt64_t; 
#line 123 "test-linc.mc"
 __extension__ typedef unsigned long int __fsblkcnt_t; 
#line 124 "test-linc.mc"
 __extension__ typedef  __u_quad_t __fsblkcnt64_t; 
#line 127 "test-linc.mc"
 __extension__ typedef unsigned long int __fsfilcnt_t; 
#line 128 "test-linc.mc"
 __extension__ typedef  __u_quad_t __fsfilcnt64_t; 
#line 130 "test-linc.mc"
 __extension__ typedef int __ssize_t; 
#line 134 "test-linc.mc"
typedef  __off64_t __loff_t; 
#line 135 "test-linc.mc"
typedef  __quad_t *__qaddr_t; 
#line 136 "test-linc.mc"
typedef char *__caddr_t; 
#line 139 "test-linc.mc"
 __extension__ typedef int __intptr_t; 
#line 142 "test-linc.mc"
 __extension__ typedef unsigned int __socklen_t; 
#line 146 "test-linc.mc"
typedef  __pid_t pid_t; 
#line 152 "test-linc.mc"
typedef  __uid_t uid_t; 
#line 159 "test-linc.mc"
typedef void (*__sighandler_t)(int ); 
#line 165 "test-linc.mc"
extern  __sighandler_t __sysv_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 169 "test-linc.mc"
extern  __sighandler_t signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 171 "test-linc.mc"
extern int kill( __pid_t __pid, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 178 "test-linc.mc"
extern int killpg( __pid_t __pgrp, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 183 "test-linc.mc"
extern int raise(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 189 "test-linc.mc"
extern  __sighandler_t ssignal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 190 "test-linc.mc"
extern int gsignal(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 195 "test-linc.mc"
extern void psignal(int __sig, __const char *__s); 
#line 196 "test-linc.mc"
extern int __sigpause(int __sig_or_mask, int __is_sig); 
#line 197 "test-linc.mc"
extern int sigblock(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 200 "test-linc.mc"
extern int sigsetmask(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 203 "test-linc.mc"
extern int siggetmask(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 204 "test-linc.mc"
typedef  __sighandler_t sig_t; 
#line 216 "test-linc.mc"
struct timespec { __time_t tv_sec; long int tv_nsec; }; 
#line 230 "test-linc.mc"
typedef union sigval {int sival_int; void *sival_ptr; }sigval_t; 
#line 288 "test-linc.mc"
typedef struct siginfo {int si_signo; int si_errno; int si_code; union {int _pad[((128 / sizeof (int )) - 3)]; struct { __pid_t si_pid;  __uid_t si_uid; }_kill; struct {int si_tid; int si_overrun;  sigval_t si_sigval; }_timer; struct { __pid_t si_pid;  __uid_t si_uid;  sigval_t si_sigval; }_rt; struct { __pid_t si_pid;  __uid_t si_uid; int si_status;  __clock_t si_utime;  __clock_t si_stime; }_sigchld; struct {void *si_addr; }_sigfault; struct {long int si_band; int si_fd; }_sigpoll; }_sifields; }siginfo_t; 
#line 309 "test-linc.mc"
enum {SI_ASYNCNL=(-60),SI_TKILL=(-6),SI_SIGIO,SI_ASYNCIO,SI_MESGQ,SI_TIMER,SI_QUEUE,SI_USER,SI_KERNEL=0x80}; 
#line 331 "test-linc.mc"
enum {ILL_ILLOPC=1,ILL_ILLOPN,ILL_ILLADR,ILL_ILLTRP,ILL_PRVOPC,ILL_PRVREG,ILL_COPROC,ILL_BADSTK}; 
#line 352 "test-linc.mc"
enum {FPE_INTDIV=1,FPE_INTOVF,FPE_FLTDIV,FPE_FLTOVF,FPE_FLTUND,FPE_FLTRES,FPE_FLTINV,FPE_FLTSUB}; 
#line 361 "test-linc.mc"
enum {SEGV_MAPERR=1,SEGV_ACCERR}; 
#line 372 "test-linc.mc"
enum {BUS_ADRALN=1,BUS_ADRERR,BUS_OBJERR}; 
#line 381 "test-linc.mc"
enum {TRAP_BRKPT=1,TRAP_TRACE}; 
#line 398 "test-linc.mc"
enum {CLD_EXITED=1,CLD_KILLED,CLD_DUMPED,CLD_TRAPPED,CLD_STOPPED,CLD_CONTINUED}; 
#line 415 "test-linc.mc"
enum {POLL_IN=1,POLL_OUT,POLL_MSG,POLL_ERR,POLL_PRI,POLL_HUP}; 
#line 436 "test-linc.mc"
typedef struct sigevent { sigval_t sigev_value; int sigev_signo; int sigev_notify; union {int _pad[((64 / sizeof (int )) - 3)];  __pid_t _tid; struct {void (*_function)( sigval_t ); void *_attribute; }_sigev_thread; }_sigev_un; }sigevent_t; 
#line 454 "test-linc.mc"
enum {SIGEV_SIGNAL=0,SIGEV_NONE,SIGEV_THREAD,SIGEV_THREAD_ID=4}; 
#line 458 "test-linc.mc"
extern int sigemptyset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 461 "test-linc.mc"
extern int sigfillset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 464 "test-linc.mc"
extern int sigaddset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 467 "test-linc.mc"
extern int sigdelset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 471 "test-linc.mc"
extern int sigismember(__const  sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 498 "test-linc.mc"
struct sigaction {union { __sighandler_t sa_handler; void (*sa_sigaction)(int ,  siginfo_t *, void *); }__sigaction_handler;  __sigset_t sa_mask; int sa_flags; void (*sa_restorer)(void ); }; 
#line 502 "test-linc.mc"
extern int sigprocmask(int __how, __const  sigset_t *__restrict __set,  sigset_t *__restrict __oset) __attribute__  (( __nothrow__ )) ; 
#line 509 "test-linc.mc"
extern int sigsuspend(__const  sigset_t *__set) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 513 "test-linc.mc"
extern int sigaction(int __sig, __const struct sigaction *__restrict __act, struct sigaction *__restrict __oact) __attribute__  (( __nothrow__ )) ; 
#line 516 "test-linc.mc"
extern int sigpending( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 524 "test-linc.mc"
extern int sigwait(__const  sigset_t *__restrict __set, int *__restrict __sig) __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 532 "test-linc.mc"
extern int sigwaitinfo(__const  sigset_t *__restrict __set,  siginfo_t *__restrict __info) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 542 "test-linc.mc"
extern int sigtimedwait(__const  sigset_t *__restrict __set,  siginfo_t *__restrict __info, __const struct timespec *__restrict __timeout) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 547 "test-linc.mc"
extern int sigqueue( __pid_t __pid, int __sig, __const union sigval __val) __attribute__  (( __nothrow__ )) ; 
#line 548 "test-linc.mc"
extern __const char *__const _sys_siglist[65]; 
#line 549 "test-linc.mc"
extern __const char *__const sys_siglist[65]; 
#line 559 "test-linc.mc"
struct sigvec { __sighandler_t sv_handler; int sv_mask; int sv_flags; }; 
#line 561 "test-linc.mc"
extern int sigvec(int __sig, __const struct sigvec *__vec, struct sigvec *__ovec) __attribute__  (( __nothrow__ )) ; 
#line 568 "test-linc.mc"
struct _fpreg {unsigned short significand[4]; unsigned short exponent; }; 
#line 574 "test-linc.mc"
struct _fpxreg {unsigned short significand[4]; unsigned short exponent; unsigned short padding[3]; }; 
#line 578 "test-linc.mc"
struct _xmmreg {unsigned long element[4]; }; 
#line 600 "test-linc.mc"
struct _fpstate {unsigned long cw; unsigned long sw; unsigned long tag; unsigned long ipoff; unsigned long cssel; unsigned long dataoff; unsigned long datasel; struct _fpreg _st[8]; unsigned short status; unsigned short magic; unsigned long _fxsr_env[6]; unsigned long mxcsr; unsigned long reserved; struct _fpxreg _fxsr_st[8]; struct _xmmreg _xmm[8]; unsigned long padding[56]; }; 
#line 627 "test-linc.mc"
struct sigcontext {unsigned short gs,__gsh; unsigned short fs,__fsh; unsigned short es,__esh; unsigned short ds,__dsh; unsigned long edi; unsigned long esi; unsigned long ebp; unsigned long esp; unsigned long ebx; unsigned long edx; unsigned long ecx; unsigned long eax; unsigned long trapno; unsigned long err; unsigned long eip; unsigned short cs,__csh; unsigned long eflags; unsigned long esp_at_signal; unsigned short ss,__ssh; struct _fpstate *fpstate; unsigned long oldmask; unsigned long cr2; }; 
#line 630 "test-linc.mc"
extern int sigreturn(struct sigcontext *__scp) __attribute__  (( __nothrow__ )) ; 
#line 631 "test-linc.mc"
extern int siginterrupt(int __sig, int __interrupt) __attribute__  (( __nothrow__ )) ; 
#line 637 "test-linc.mc"
struct sigstack {void *ss_sp; int ss_onstack; }; 
#line 647 "test-linc.mc"
enum {SS_ONSTACK=1,SS_DISABLE}; 
#line 653 "test-linc.mc"
typedef struct sigaltstack {void *ss_sp; int ss_flags;  size_t ss_size; }stack_t; 
#line 655 "test-linc.mc"
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 660 "test-linc.mc"
extern int sigaltstack(__const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss) __attribute__  (( __nothrow__ )) ; 
#line 661 "test-linc.mc"
typedef unsigned long int pthread_t; 
#line 668 "test-linc.mc"
typedef union {char __size[36]; long int __align; }pthread_attr_t; 
#line 674 "test-linc.mc"
typedef struct __pthread_internal_slist {struct __pthread_internal_slist *__next; }__pthread_slist_t; 
#line 698 "test-linc.mc"
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; int __kind; unsigned int __nusers;  __extension__ union {int __spins;  __pthread_slist_t __list; }; }__data; char __size[24]; long int __align; }pthread_mutex_t; 
#line 704 "test-linc.mc"
typedef union {char __size[4]; long int __align; }pthread_mutexattr_t; 
#line 724 "test-linc.mc"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; }__data; char __size[48];  __extension__ long long int __align; }pthread_cond_t; 
#line 730 "test-linc.mc"
typedef union {char __size[4]; long int __align; }pthread_condattr_t; 
#line 734 "test-linc.mc"
typedef unsigned int pthread_key_t; 
#line 738 "test-linc.mc"
typedef int pthread_once_t; 
#line 761 "test-linc.mc"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; unsigned int __flags; int __writer; }__data; char __size[32]; long int __align; }pthread_rwlock_t; 
#line 767 "test-linc.mc"
typedef union {char __size[8]; long int __align; }pthread_rwlockattr_t; 
#line 773 "test-linc.mc"
typedef volatile int pthread_spinlock_t; 
#line 782 "test-linc.mc"
typedef union {char __size[20]; long int __align; }pthread_barrier_t; 
#line 788 "test-linc.mc"
typedef union {char __size[4]; int __align; }pthread_barrierattr_t; 
#line 791 "test-linc.mc"
extern int pthread_sigmask(int __how, __const  __sigset_t *__restrict __newmask,  __sigset_t *__restrict __oldmask) __attribute__  (( __nothrow__ )) ; 
#line 794 "test-linc.mc"
extern int pthread_kill( pthread_t __threadid, int __signo) __attribute__  (( __nothrow__ )) ; 
#line 801 "test-linc.mc"
extern int __libc_current_sigrtmin(void ) __attribute__  (( __nothrow__ )) ; 
#line 803 "test-linc.mc"
extern int __libc_current_sigrtmax(void ) __attribute__  (( __nothrow__ )) ; 
#line 882 "test-linc.mc"
enum __rlimit_resource {RLIMIT_CPU=0,RLIMIT_FSIZE=1,RLIMIT_DATA=2,RLIMIT_STACK=3,RLIMIT_CORE=4,__RLIMIT_RSS=5,RLIMIT_NOFILE=7,__RLIMIT_OFILE=RLIMIT_NOFILE,RLIMIT_AS=9,__RLIMIT_NPROC=6,__RLIMIT_MEMLOCK=8,__RLIMIT_LOCKS=10,__RLIMIT_SIGPENDING=11,__RLIMIT_MSGQUEUE=12,__RLIMIT_NICE=13,__RLIMIT_RTPRIO=14,__RLIMIT_NLIMITS=15,__RLIM_NLIMITS=__RLIMIT_NLIMITS}; 
#line 883 "test-linc.mc"
typedef  __rlim_t rlim_t; 
#line 897 "test-linc.mc"
struct rlimit { rlim_t rlim_cur;  rlim_t rlim_max; }; 
#line 907 "test-linc.mc"
enum __rusage_who {RUSAGE_SELF=0,RUSAGE_CHILDREN=(-1)}; 
#line 914 "test-linc.mc"
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; }; 
#line 957 "test-linc.mc"
struct rusage {struct timeval ru_utime; struct timeval ru_stime; long int ru_maxrss; long int ru_ixrss; long int ru_idrss; long int ru_isrss; long int ru_minflt; long int ru_majflt; long int ru_nswap; long int ru_inblock; long int ru_oublock; long int ru_msgsnd; long int ru_msgrcv; long int ru_nsignals; long int ru_nvcsw; long int ru_nivcsw; }; 
#line 973 "test-linc.mc"
enum __priority_which {PRIO_PROCESS=0,PRIO_PGRP=1,PRIO_USER=2}; 
#line 976 "test-linc.mc"
typedef  __id_t id_t; 
#line 981 "test-linc.mc"
typedef int __rlimit_resource_t; 
#line 982 "test-linc.mc"
typedef int __rusage_who_t; 
#line 983 "test-linc.mc"
typedef int __priority_which_t; 
#line 990 "test-linc.mc"
extern int getrlimit( __rlimit_resource_t __resource, struct rlimit *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 992 "test-linc.mc"
extern int setrlimit( __rlimit_resource_t __resource, __const struct rlimit *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 993 "test-linc.mc"
extern int getrusage( __rusage_who_t __who, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 999 "test-linc.mc"
extern int getpriority( __priority_which_t __which,  id_t __who) __attribute__  (( __nothrow__ )) ; 
#line 1004 "test-linc.mc"
extern int setpriority( __priority_which_t __which,  id_t __who, int __prio) __attribute__  (( __nothrow__ )) ; 
#line 1016 "test-linc.mc"
typedef union {union wait *__uptr; int *__iptr; }__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 1049 "test-linc.mc"
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; }__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; }__wait_stopped; }; 
#line 1055 "test-linc.mc"
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
#line 1056 "test-linc.mc"
extern  __pid_t wait( __WAIT_STATUS __stat_loc); 
#line 1057 "test-linc.mc"
extern  __pid_t waitpid( __pid_t __pid, int *__stat_loc, int __options); 
#line 1062 "test-linc.mc"
extern int waitid( idtype_t __idtype,  __id_t __id,  siginfo_t *__infop, int __options); 
#line 1068 "test-linc.mc"
struct rusage ; 
#line 1076 "test-linc.mc"
extern  __pid_t wait3( __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 1082 "test-linc.mc"
struct rusage ; 
#line 1086 "test-linc.mc"
extern  __pid_t wait4( __pid_t __pid,  __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 1092 "test-linc.mc"
typedef int ptrdiff_t; 
#line 1093 "test-linc.mc"
typedef long int wchar_t; 
#line 1107 "test-linc.mc"
typedef signed char gint8; 
#line 1108 "test-linc.mc"
typedef unsigned char guint8; 
#line 1109 "test-linc.mc"
typedef signed short gint16; 
#line 1110 "test-linc.mc"
typedef unsigned short guint16; 
#line 1114 "test-linc.mc"
typedef signed int gint32; 
#line 1115 "test-linc.mc"
typedef unsigned int guint32; 
#line 1121 "test-linc.mc"
 __extension__ typedef signed long long gint64; 
#line 1122 "test-linc.mc"
 __extension__ typedef unsigned long long guint64; 
#line 1123 "test-linc.mc"
typedef signed int gssize; 
#line 1124 "test-linc.mc"
typedef unsigned int gsize; 
#line 1125 "test-linc.mc"
typedef struct _GStaticMutex GStaticMutex; 
#line 1135 "test-linc.mc"
struct _GStaticMutex {struct _GMutex *runtime_mutex; union {char pad[24]; double dummy_double; void *dummy_pointer; long dummy_long; }static_mutex; }; 
#line 1136 "test-linc.mc"
typedef union _GSystemThread GSystemThread; 
#line 1143 "test-linc.mc"
union _GSystemThread {char data[4]; double dummy_double; void *dummy_pointer; long dummy_long; }; 
#line 1144 "test-linc.mc"
typedef int GPid; 
#line 1149 "test-linc.mc"
typedef char gchar; 
#line 1150 "test-linc.mc"
typedef short gshort; 
#line 1151 "test-linc.mc"
typedef long glong; 
#line 1152 "test-linc.mc"
typedef int gint; 
#line 1153 "test-linc.mc"
typedef  gint gboolean; 
#line 1155 "test-linc.mc"
typedef unsigned char guchar; 
#line 1156 "test-linc.mc"
typedef unsigned short gushort; 
#line 1157 "test-linc.mc"
typedef unsigned long gulong; 
#line 1158 "test-linc.mc"
typedef unsigned int guint; 
#line 1160 "test-linc.mc"
typedef float gfloat; 
#line 1161 "test-linc.mc"
typedef double gdouble; 
#line 1162 "test-linc.mc"
typedef void *gpointer; 
#line 1163 "test-linc.mc"
typedef const void *gconstpointer; 
#line 1166 "test-linc.mc"
typedef  gint (*GCompareFunc)( gconstpointer a,  gconstpointer b); 
#line 1169 "test-linc.mc"
typedef  gint (*GCompareDataFunc)( gconstpointer a,  gconstpointer b,  gpointer user_data); 
#line 1171 "test-linc.mc"
typedef  gboolean (*GEqualFunc)( gconstpointer a,  gconstpointer b); 
#line 1172 "test-linc.mc"
typedef void (*GDestroyNotify)( gpointer data); 
#line 1174 "test-linc.mc"
typedef void (*GFunc)( gpointer data,  gpointer user_data); 
#line 1175 "test-linc.mc"
typedef  guint (*GHashFunc)( gconstpointer key); 
#line 1178 "test-linc.mc"
typedef void (*GHFunc)( gpointer key,  gpointer value,  gpointer user_data); 
#line 1179 "test-linc.mc"
typedef void (*GFreeFunc)( gpointer data); 
#line 1181 "test-linc.mc"
typedef const  gchar *(*GTranslateFunc)(const  gchar *str,  gpointer data); 
#line 1182 "test-linc.mc"
typedef union _GDoubleIEEE754 GDoubleIEEE754; 
#line 1183 "test-linc.mc"
typedef union _GFloatIEEE754 GFloatIEEE754; 
#line 1197 "test-linc.mc"
union _GFloatIEEE754 { gfloat v_float; struct { guint mantissa:23;  guint biased_exponent:8;  guint sign:1; }mpn; }; 
#line 1207 "test-linc.mc"
union _GDoubleIEEE754 { gdouble v_double; struct { guint mantissa_low:32;  guint mantissa_high:20;  guint biased_exponent:11;  guint sign:1; }mpn; }; 
#line 1208 "test-linc.mc"
typedef struct _GTimeVal GTimeVal; 
#line 1214 "test-linc.mc"
struct _GTimeVal { glong tv_sec;  glong tv_usec; }; 
#line 1220 "test-linc.mc"
typedef  guint32 GQuark; 
#line 1224 "test-linc.mc"
 GQuark g_quark_try_string(const  gchar *string); 
#line 1225 "test-linc.mc"
 GQuark g_quark_from_static_string(const  gchar *string); 
#line 1226 "test-linc.mc"
 GQuark g_quark_from_string(const  gchar *string); 
#line 1227 "test-linc.mc"
const  gchar *g_quark_to_string( GQuark quark) __attribute__  (( __const__ )) ; 
#line 1229 "test-linc.mc"
const  gchar *g_intern_string(const  gchar *string); 
#line 1230 "test-linc.mc"
const  gchar *g_intern_static_string(const  gchar *string); 
#line 1237 "test-linc.mc"
typedef struct _GError GError; 
#line 1244 "test-linc.mc"
struct _GError { GQuark domain;  gint code;  gchar *message; }; 
#line 1249 "test-linc.mc"
 GError *g_error_new( GQuark domain,  gint code, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 1253 "test-linc.mc"
 GError *g_error_new_literal( GQuark domain,  gint code, const  gchar *message); 
#line 1255 "test-linc.mc"
void g_error_free( GError *error); 
#line 1256 "test-linc.mc"
 GError *g_error_copy(const  GError *error); 
#line 1260 "test-linc.mc"
 gboolean g_error_matches(const  GError *error,  GQuark domain,  gint code); 
#line 1269 "test-linc.mc"
void g_set_error( GError **err,  GQuark domain,  gint code, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 4, 5 )  )) ; 
#line 1274 "test-linc.mc"
void g_propagate_error( GError **dest,  GError *src); 
#line 1277 "test-linc.mc"
void g_clear_error( GError **err); 
#line 1285 "test-linc.mc"
 gint g_atomic_int_exchange_and_add(volatile  gint *atomic,  gint val); 
#line 1287 "test-linc.mc"
void g_atomic_int_add(volatile  gint *atomic,  gint val); 
#line 1290 "test-linc.mc"
 gboolean g_atomic_int_compare_and_exchange(volatile  gint *atomic,  gint oldval,  gint newval); 
#line 1293 "test-linc.mc"
 gboolean g_atomic_pointer_compare_and_exchange(volatile  gpointer *atomic,  gpointer oldval,  gpointer newval); 
#line 1295 "test-linc.mc"
 gint g_atomic_int_get(volatile  gint *atomic); 
#line 1297 "test-linc.mc"
void g_atomic_int_set(volatile  gint *atomic,  gint newval); 
#line 1298 "test-linc.mc"
 gpointer g_atomic_pointer_get(volatile  gpointer *atomic); 
#line 1300 "test-linc.mc"
void g_atomic_pointer_set(volatile  gpointer *atomic,  gpointer newval); 
#line 1308 "test-linc.mc"
extern  GQuark g_thread_error_quark(void ); 
#line 1314 "test-linc.mc"
typedef enum {G_THREAD_ERROR_AGAIN}GThreadError; 
#line 1316 "test-linc.mc"
typedef  gpointer (*GThreadFunc)( gpointer data); 
#line 1324 "test-linc.mc"
typedef enum {G_THREAD_PRIORITY_LOW,G_THREAD_PRIORITY_NORMAL,G_THREAD_PRIORITY_HIGH,G_THREAD_PRIORITY_URGENT}GThreadPriority; 
#line 1326 "test-linc.mc"
typedef struct _GThread GThread; 
#line 1334 "test-linc.mc"
struct _GThread { GThreadFunc func;  gpointer data;  gboolean joinable;  GThreadPriority priority; }; 
#line 1336 "test-linc.mc"
typedef struct _GMutex GMutex; 
#line 1337 "test-linc.mc"
typedef struct _GCond GCond; 
#line 1338 "test-linc.mc"
typedef struct _GPrivate GPrivate; 
#line 1339 "test-linc.mc"
typedef struct _GStaticPrivate GStaticPrivate; 
#line 1341 "test-linc.mc"
typedef struct _GThreadFunctions GThreadFunctions; 
#line 1378 "test-linc.mc"
struct _GThreadFunctions { GMutex *(*mutex_new)(void ); void (*mutex_lock)( GMutex *mutex);  gboolean (*mutex_trylock)( GMutex *mutex); void (*mutex_unlock)( GMutex *mutex); void (*mutex_free)( GMutex *mutex);  GCond *(*cond_new)(void ); void (*cond_signal)( GCond *cond); void (*cond_broadcast)( GCond *cond); void (*cond_wait)( GCond *cond,  GMutex *mutex);  gboolean (*cond_timed_wait)( GCond *cond,  GMutex *mutex,  GTimeVal *end_time); void (*cond_free)( GCond *cond);  GPrivate *(*private_new)( GDestroyNotify destructor);  gpointer (*private_get)( GPrivate *private_key); void (*private_set)( GPrivate *private_key,  gpointer data); void (*thread_create)( GThreadFunc func,  gpointer data,  gulong stack_size,  gboolean joinable,  gboolean bound,  GThreadPriority priority,  gpointer thread,  GError **error); void (*thread_yield)(void ); void (*thread_join)( gpointer thread); void (*thread_exit)(void ); void (*thread_set_priority)( gpointer thread,  GThreadPriority priority); void (*thread_self)( gpointer thread);  gboolean (*thread_equal)( gpointer thread1,  gpointer thread2); }; 
#line 1380 "test-linc.mc"
extern  GThreadFunctions g_thread_functions_for_glib_use; 
#line 1381 "test-linc.mc"
extern  gboolean g_thread_use_default_impl; 
#line 1382 "test-linc.mc"
extern  gboolean g_threads_got_initialized; 
#line 1388 "test-linc.mc"
void g_thread_init( GThreadFunctions *vtable); 
#line 1389 "test-linc.mc"
void g_thread_init_with_errorcheck_mutexes( GThreadFunctions *vtable); 
#line 1390 "test-linc.mc"
 GMutex *g_static_mutex_get_mutex_impl( GMutex **mutex); 
#line 1397 "test-linc.mc"
 GThread *g_thread_create_full( GThreadFunc func,  gpointer data,  gulong stack_size,  gboolean joinable,  gboolean bound,  GThreadPriority priority,  GError **error); 
#line 1398 "test-linc.mc"
 GThread *g_thread_self(void ); 
#line 1399 "test-linc.mc"
void g_thread_exit( gpointer retval); 
#line 1400 "test-linc.mc"
 gpointer g_thread_join( GThread *thread); 
#line 1403 "test-linc.mc"
void g_thread_set_priority( GThread *thread,  GThreadPriority priority); 
#line 1404 "test-linc.mc"
void g_static_mutex_init( GStaticMutex *mutex); 
#line 1405 "test-linc.mc"
void g_static_mutex_free( GStaticMutex *mutex); 
#line 1411 "test-linc.mc"
struct _GStaticPrivate { guint index; }; 
#line 1413 "test-linc.mc"
void g_static_private_init( GStaticPrivate *private_key); 
#line 1414 "test-linc.mc"
 gpointer g_static_private_get( GStaticPrivate *private_key); 
#line 1417 "test-linc.mc"
void g_static_private_set( GStaticPrivate *private_key,  gpointer data,  GDestroyNotify notify); 
#line 1418 "test-linc.mc"
void g_static_private_free( GStaticPrivate *private_key); 
#line 1420 "test-linc.mc"
typedef struct _GStaticRecMutex GStaticRecMutex; 
#line 1427 "test-linc.mc"
struct _GStaticRecMutex { GStaticMutex mutex;  guint depth;  GSystemThread owner; }; 
#line 1430 "test-linc.mc"
void g_static_rec_mutex_init( GStaticRecMutex *mutex); 
#line 1431 "test-linc.mc"
void g_static_rec_mutex_lock( GStaticRecMutex *mutex); 
#line 1432 "test-linc.mc"
 gboolean g_static_rec_mutex_trylock( GStaticRecMutex *mutex); 
#line 1433 "test-linc.mc"
void g_static_rec_mutex_unlock( GStaticRecMutex *mutex); 
#line 1435 "test-linc.mc"
void g_static_rec_mutex_lock_full( GStaticRecMutex *mutex,  guint depth); 
#line 1436 "test-linc.mc"
 guint g_static_rec_mutex_unlock_full( GStaticRecMutex *mutex); 
#line 1437 "test-linc.mc"
void g_static_rec_mutex_free( GStaticRecMutex *mutex); 
#line 1439 "test-linc.mc"
typedef struct _GStaticRWLock GStaticRWLock; 
#line 1450 "test-linc.mc"
struct _GStaticRWLock { GStaticMutex mutex;  GCond *read_cond;  GCond *write_cond;  guint read_counter;  gboolean have_writer;  guint want_to_read;  guint want_to_write; }; 
#line 1454 "test-linc.mc"
void g_static_rw_lock_init( GStaticRWLock *lock); 
#line 1455 "test-linc.mc"
void g_static_rw_lock_reader_lock( GStaticRWLock *lock); 
#line 1456 "test-linc.mc"
 gboolean g_static_rw_lock_reader_trylock( GStaticRWLock *lock); 
#line 1457 "test-linc.mc"
void g_static_rw_lock_reader_unlock( GStaticRWLock *lock); 
#line 1458 "test-linc.mc"
void g_static_rw_lock_writer_lock( GStaticRWLock *lock); 
#line 1459 "test-linc.mc"
 gboolean g_static_rw_lock_writer_trylock( GStaticRWLock *lock); 
#line 1460 "test-linc.mc"
void g_static_rw_lock_writer_unlock( GStaticRWLock *lock); 
#line 1461 "test-linc.mc"
void g_static_rw_lock_free( GStaticRWLock *lock); 
#line 1464 "test-linc.mc"
void g_thread_foreach( GFunc thread_func,  gpointer user_data); 
#line 1471 "test-linc.mc"
typedef enum {G_ONCE_STATUS_NOTCALLED,G_ONCE_STATUS_PROGRESS,G_ONCE_STATUS_READY}GOnceStatus; 
#line 1473 "test-linc.mc"
typedef struct _GOnce GOnce; 
#line 1478 "test-linc.mc"
struct _GOnce {volatile  GOnceStatus status; volatile  gpointer retval; }; 
#line 1482 "test-linc.mc"
 gpointer g_once_impl( GOnce *once,  GThreadFunc func,  gpointer arg); 
#line 1483 "test-linc.mc"
extern void glib_dummy_decl(void ); 
#line 1487 "test-linc.mc"
typedef struct _GArray GArray; 
#line 1488 "test-linc.mc"
typedef struct _GByteArray GByteArray; 
#line 1489 "test-linc.mc"
typedef struct _GPtrArray GPtrArray; 
#line 1495 "test-linc.mc"
struct _GArray { gchar *data;  guint len; }; 
#line 1501 "test-linc.mc"
struct _GByteArray { guint8 *data;  guint len; }; 
#line 1507 "test-linc.mc"
struct _GPtrArray { gpointer *pdata;  guint len; }; 
#line 1510 "test-linc.mc"
 GArray *g_array_new( gboolean zero_terminated,  gboolean clear_,  guint element_size); 
#line 1514 "test-linc.mc"
 GArray *g_array_sized_new( gboolean zero_terminated,  gboolean clear_,  guint element_size,  guint reserved_size); 
#line 1516 "test-linc.mc"
 gchar *g_array_free( GArray *array,  gboolean free_segment); 
#line 1519 "test-linc.mc"
 GArray *g_array_append_vals( GArray *array,  gconstpointer data,  guint len); 
#line 1522 "test-linc.mc"
 GArray *g_array_prepend_vals( GArray *array,  gconstpointer data,  guint len); 
#line 1526 "test-linc.mc"
 GArray *g_array_insert_vals( GArray *array,  guint index_,  gconstpointer data,  guint len); 
#line 1528 "test-linc.mc"
 GArray *g_array_set_size( GArray *array,  guint length); 
#line 1530 "test-linc.mc"
 GArray *g_array_remove_index( GArray *array,  guint index_); 
#line 1532 "test-linc.mc"
 GArray *g_array_remove_index_fast( GArray *array,  guint index_); 
#line 1535 "test-linc.mc"
 GArray *g_array_remove_range( GArray *array,  guint index_,  guint length); 
#line 1537 "test-linc.mc"
void g_array_sort( GArray *array,  GCompareFunc compare_func); 
#line 1540 "test-linc.mc"
void g_array_sort_with_data( GArray *array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 1547 "test-linc.mc"
 GPtrArray *g_ptr_array_new(void ); 
#line 1548 "test-linc.mc"
 GPtrArray *g_ptr_array_sized_new( guint reserved_size); 
#line 1550 "test-linc.mc"
 gpointer *g_ptr_array_free( GPtrArray *array,  gboolean free_seg); 
#line 1552 "test-linc.mc"
void g_ptr_array_set_size( GPtrArray *array,  gint length); 
#line 1554 "test-linc.mc"
 gpointer g_ptr_array_remove_index( GPtrArray *array,  guint index_); 
#line 1556 "test-linc.mc"
 gpointer g_ptr_array_remove_index_fast( GPtrArray *array,  guint index_); 
#line 1558 "test-linc.mc"
 gboolean g_ptr_array_remove( GPtrArray *array,  gpointer data); 
#line 1560 "test-linc.mc"
 gboolean g_ptr_array_remove_fast( GPtrArray *array,  gpointer data); 
#line 1563 "test-linc.mc"
void g_ptr_array_remove_range( GPtrArray *array,  guint index_,  guint length); 
#line 1565 "test-linc.mc"
void g_ptr_array_add( GPtrArray *array,  gpointer data); 
#line 1567 "test-linc.mc"
void g_ptr_array_sort( GPtrArray *array,  GCompareFunc compare_func); 
#line 1570 "test-linc.mc"
void g_ptr_array_sort_with_data( GPtrArray *array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 1573 "test-linc.mc"
void g_ptr_array_foreach( GPtrArray *array,  GFunc func,  gpointer user_data); 
#line 1580 "test-linc.mc"
 GByteArray *g_byte_array_new(void ); 
#line 1581 "test-linc.mc"
 GByteArray *g_byte_array_sized_new( guint reserved_size); 
#line 1583 "test-linc.mc"
 guint8 *g_byte_array_free( GByteArray *array,  gboolean free_segment); 
#line 1586 "test-linc.mc"
 GByteArray *g_byte_array_append( GByteArray *array, const  guint8 *data,  guint len); 
#line 1589 "test-linc.mc"
 GByteArray *g_byte_array_prepend( GByteArray *array, const  guint8 *data,  guint len); 
#line 1591 "test-linc.mc"
 GByteArray *g_byte_array_set_size( GByteArray *array,  guint length); 
#line 1593 "test-linc.mc"
 GByteArray *g_byte_array_remove_index( GByteArray *array,  guint index_); 
#line 1595 "test-linc.mc"
 GByteArray *g_byte_array_remove_index_fast( GByteArray *array,  guint index_); 
#line 1598 "test-linc.mc"
 GByteArray *g_byte_array_remove_range( GByteArray *array,  guint index_,  guint length); 
#line 1600 "test-linc.mc"
void g_byte_array_sort( GByteArray *array,  GCompareFunc compare_func); 
#line 1603 "test-linc.mc"
void g_byte_array_sort_with_data( GByteArray *array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 1609 "test-linc.mc"
typedef struct _GAsyncQueue GAsyncQueue; 
#line 1615 "test-linc.mc"
 GAsyncQueue *g_async_queue_new(void ); 
#line 1621 "test-linc.mc"
void g_async_queue_lock( GAsyncQueue *queue); 
#line 1622 "test-linc.mc"
void g_async_queue_unlock( GAsyncQueue *queue); 
#line 1627 "test-linc.mc"
 GAsyncQueue *g_async_queue_ref( GAsyncQueue *queue); 
#line 1628 "test-linc.mc"
void g_async_queue_unref( GAsyncQueue *queue); 
#line 1633 "test-linc.mc"
void g_async_queue_ref_unlocked( GAsyncQueue *queue); 
#line 1634 "test-linc.mc"
void g_async_queue_unref_and_unlock( GAsyncQueue *queue); 
#line 1641 "test-linc.mc"
void g_async_queue_push( GAsyncQueue *queue,  gpointer data); 
#line 1643 "test-linc.mc"
void g_async_queue_push_unlocked( GAsyncQueue *queue,  gpointer data); 
#line 1648 "test-linc.mc"
void g_async_queue_push_sorted( GAsyncQueue *queue,  gpointer data,  GCompareDataFunc func,  gpointer user_data); 
#line 1652 "test-linc.mc"
void g_async_queue_push_sorted_unlocked( GAsyncQueue *queue,  gpointer data,  GCompareDataFunc func,  gpointer user_data); 
#line 1656 "test-linc.mc"
 gpointer g_async_queue_pop( GAsyncQueue *queue); 
#line 1657 "test-linc.mc"
 gpointer g_async_queue_pop_unlocked( GAsyncQueue *queue); 
#line 1662 "test-linc.mc"
 gpointer g_async_queue_try_pop( GAsyncQueue *queue); 
#line 1663 "test-linc.mc"
 gpointer g_async_queue_try_pop_unlocked( GAsyncQueue *queue); 
#line 1670 "test-linc.mc"
 gpointer g_async_queue_timed_pop( GAsyncQueue *queue,  GTimeVal *end_time); 
#line 1672 "test-linc.mc"
 gpointer g_async_queue_timed_pop_unlocked( GAsyncQueue *queue,  GTimeVal *end_time); 
#line 1673 "test-linc.mc"
 gint g_async_queue_length( GAsyncQueue *queue); 
#line 1674 "test-linc.mc"
 gint g_async_queue_length_unlocked( GAsyncQueue *queue); 
#line 1677 "test-linc.mc"
void g_async_queue_sort( GAsyncQueue *queue,  GCompareDataFunc func,  gpointer user_data); 
#line 1680 "test-linc.mc"
void g_async_queue_sort_unlocked( GAsyncQueue *queue,  GCompareDataFunc func,  gpointer user_data); 
#line 1686 "test-linc.mc"
void g_on_error_query(const  gchar *prg_name); 
#line 1687 "test-linc.mc"
void g_on_error_stack_trace(const  gchar *prg_name); 
#line 1693 "test-linc.mc"
 gpointer g_slice_alloc( gsize block_size) __attribute__  (( __malloc__ )) ; 
#line 1694 "test-linc.mc"
 gpointer g_slice_alloc0( gsize block_size) __attribute__  (( __malloc__ )) ; 
#line 1696 "test-linc.mc"
void g_slice_free1( gsize block_size,  gpointer mem_block); 
#line 1699 "test-linc.mc"
void g_slice_free_chain_with_offset( gsize block_size,  gpointer mem_chain,  gsize next_offset); 
#line 1707 "test-linc.mc"
typedef enum {G_SLICE_CONFIG_ALWAYS_MALLOC=1,G_SLICE_CONFIG_BYPASS_MAGAZINES,G_SLICE_CONFIG_WORKING_SET_MSECS,G_SLICE_CONFIG_COLOR_INCREMENT,G_SLICE_CONFIG_CHUNK_SIZES,G_SLICE_CONFIG_CONTENTION_COUNTER}GSliceConfig; 
#line 1708 "test-linc.mc"
void g_slice_set_config( GSliceConfig ckey,  gint64 value); 
#line 1709 "test-linc.mc"
 gint64 g_slice_get_config( GSliceConfig ckey); 
#line 1710 "test-linc.mc"
 gint64 *g_slice_get_config_state( GSliceConfig ckey,  gint64 address,  guint *n_values); 
#line 1717 "test-linc.mc"
typedef struct _GMemVTable GMemVTable; 
#line 1718 "test-linc.mc"
 gpointer g_malloc( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1719 "test-linc.mc"
 gpointer g_malloc0( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1721 "test-linc.mc"
 gpointer g_realloc( gpointer mem,  gulong n_bytes) __attribute__  (( warn_unused_result )) ; 
#line 1722 "test-linc.mc"
void g_free( gpointer mem); 
#line 1723 "test-linc.mc"
 gpointer g_try_malloc( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1724 "test-linc.mc"
 gpointer g_try_malloc0( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1726 "test-linc.mc"
 gpointer g_try_realloc( gpointer mem,  gulong n_bytes) __attribute__  (( warn_unused_result )) ; 
#line 1739 "test-linc.mc"
struct _GMemVTable { gpointer (*malloc)( gsize n_bytes);  gpointer (*realloc)( gpointer mem,  gsize n_bytes); void (*free)( gpointer mem);  gpointer (*calloc)( gsize n_blocks,  gsize n_block_bytes);  gpointer (*try_malloc)( gsize n_bytes);  gpointer (*try_realloc)( gpointer mem,  gsize n_bytes); }; 
#line 1740 "test-linc.mc"
void g_mem_set_vtable( GMemVTable *vtable); 
#line 1741 "test-linc.mc"
 gboolean g_mem_is_system_malloc(void ); 
#line 1743 "test-linc.mc"
extern  gboolean g_mem_gc_friendly; 
#line 1747 "test-linc.mc"
extern  GMemVTable *glib_mem_profiler_table; 
#line 1748 "test-linc.mc"
void g_mem_profile(void ); 
#line 1753 "test-linc.mc"
typedef struct _GAllocator GAllocator; 
#line 1754 "test-linc.mc"
typedef struct _GMemChunk GMemChunk; 
#line 1758 "test-linc.mc"
 GMemChunk *g_mem_chunk_new(const  gchar *name,  gint atom_size,  gulong area_size,  gint type); 
#line 1759 "test-linc.mc"
void g_mem_chunk_destroy( GMemChunk *mem_chunk); 
#line 1760 "test-linc.mc"
 gpointer g_mem_chunk_alloc( GMemChunk *mem_chunk); 
#line 1761 "test-linc.mc"
 gpointer g_mem_chunk_alloc0( GMemChunk *mem_chunk); 
#line 1763 "test-linc.mc"
void g_mem_chunk_free( GMemChunk *mem_chunk,  gpointer mem); 
#line 1764 "test-linc.mc"
void g_mem_chunk_clean( GMemChunk *mem_chunk); 
#line 1765 "test-linc.mc"
void g_mem_chunk_reset( GMemChunk *mem_chunk); 
#line 1766 "test-linc.mc"
void g_mem_chunk_print( GMemChunk *mem_chunk); 
#line 1767 "test-linc.mc"
void g_mem_chunk_info(void ); 
#line 1768 "test-linc.mc"
void g_blow_chunks(void ); 
#line 1770 "test-linc.mc"
 GAllocator *g_allocator_new(const  gchar *name,  guint n_preallocs); 
#line 1771 "test-linc.mc"
void g_allocator_free( GAllocator *allocator); 
#line 1781 "test-linc.mc"
typedef struct _GList GList; 
#line 1788 "test-linc.mc"
struct _GList { gpointer data;  GList *next;  GList *prev; }; 
#line 1792 "test-linc.mc"
 GList *g_list_alloc(void ) __attribute__  (( warn_unused_result )) ; 
#line 1793 "test-linc.mc"
void g_list_free( GList *list); 
#line 1794 "test-linc.mc"
void g_list_free_1( GList *list); 
#line 1797 "test-linc.mc"
 GList *g_list_append( GList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1799 "test-linc.mc"
 GList *g_list_prepend( GList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1802 "test-linc.mc"
 GList *g_list_insert( GList *list,  gpointer data,  gint position) __attribute__  (( warn_unused_result )) ; 
#line 1805 "test-linc.mc"
 GList *g_list_insert_sorted( GList *list,  gpointer data,  GCompareFunc func) __attribute__  (( warn_unused_result )) ; 
#line 1809 "test-linc.mc"
 GList *g_list_insert_sorted_with_data( GList *list,  gpointer data,  GCompareDataFunc func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 1812 "test-linc.mc"
 GList *g_list_insert_before( GList *list,  GList *sibling,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1814 "test-linc.mc"
 GList *g_list_concat( GList *list1,  GList *list2) __attribute__  (( warn_unused_result )) ; 
#line 1816 "test-linc.mc"
 GList *g_list_remove( GList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1818 "test-linc.mc"
 GList *g_list_remove_all( GList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1820 "test-linc.mc"
 GList *g_list_remove_link( GList *list,  GList *llink) __attribute__  (( warn_unused_result )) ; 
#line 1822 "test-linc.mc"
 GList *g_list_delete_link( GList *list,  GList *link_) __attribute__  (( warn_unused_result )) ; 
#line 1823 "test-linc.mc"
 GList *g_list_reverse( GList *list) __attribute__  (( warn_unused_result )) ; 
#line 1824 "test-linc.mc"
 GList *g_list_copy( GList *list) __attribute__  (( warn_unused_result )) ; 
#line 1826 "test-linc.mc"
 GList *g_list_nth( GList *list,  guint n); 
#line 1828 "test-linc.mc"
 GList *g_list_nth_prev( GList *list,  guint n); 
#line 1830 "test-linc.mc"
 GList *g_list_find( GList *list,  gconstpointer data); 
#line 1833 "test-linc.mc"
 GList *g_list_find_custom( GList *list,  gconstpointer data,  GCompareFunc func); 
#line 1835 "test-linc.mc"
 gint g_list_position( GList *list,  GList *llink); 
#line 1837 "test-linc.mc"
 gint g_list_index( GList *list,  gconstpointer data); 
#line 1838 "test-linc.mc"
 GList *g_list_last( GList *list); 
#line 1839 "test-linc.mc"
 GList *g_list_first( GList *list); 
#line 1840 "test-linc.mc"
 guint g_list_length( GList *list); 
#line 1843 "test-linc.mc"
void g_list_foreach( GList *list,  GFunc func,  gpointer user_data); 
#line 1845 "test-linc.mc"
 GList *g_list_sort( GList *list,  GCompareFunc compare_func) __attribute__  (( warn_unused_result )) ; 
#line 1848 "test-linc.mc"
 GList *g_list_sort_with_data( GList *list,  GCompareDataFunc compare_func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 1850 "test-linc.mc"
 gpointer g_list_nth_data( GList *list,  guint n); 
#line 1857 "test-linc.mc"
void g_list_push_allocator( gpointer allocator); 
#line 1858 "test-linc.mc"
void g_list_pop_allocator(void ); 
#line 1864 "test-linc.mc"
typedef struct _GCache GCache; 
#line 1866 "test-linc.mc"
typedef  gpointer (*GCacheNewFunc)( gpointer key); 
#line 1867 "test-linc.mc"
typedef  gpointer (*GCacheDupFunc)( gpointer value); 
#line 1868 "test-linc.mc"
typedef void (*GCacheDestroyFunc)( gpointer value); 
#line 1878 "test-linc.mc"
 GCache *g_cache_new( GCacheNewFunc value_new_func,  GCacheDestroyFunc value_destroy_func,  GCacheDupFunc key_dup_func,  GCacheDestroyFunc key_destroy_func,  GHashFunc hash_key_func,  GHashFunc hash_value_func,  GEqualFunc key_equal_func); 
#line 1879 "test-linc.mc"
void g_cache_destroy( GCache *cache); 
#line 1881 "test-linc.mc"
 gpointer g_cache_insert( GCache *cache,  gpointer key); 
#line 1883 "test-linc.mc"
void g_cache_remove( GCache *cache,  gconstpointer value); 
#line 1886 "test-linc.mc"
void g_cache_key_foreach( GCache *cache,  GHFunc func,  gpointer user_data); 
#line 1890 "test-linc.mc"
void g_cache_value_foreach( GCache *cache,  GHFunc func,  gpointer user_data); 
#line 1896 "test-linc.mc"
typedef struct _GCompletion GCompletion; 
#line 1898 "test-linc.mc"
typedef  gchar *(*GCompletionFunc)( gpointer ); 
#line 1905 "test-linc.mc"
typedef  gint (*GCompletionStrncmpFunc)(const  gchar *s1, const  gchar *s2,  gsize n); 
#line 1915 "test-linc.mc"
struct _GCompletion { GList *items;  GCompletionFunc func;  gchar *prefix;  GList *cache;  GCompletionStrncmpFunc strncmp_func; }; 
#line 1917 "test-linc.mc"
 GCompletion *g_completion_new( GCompletionFunc func); 
#line 1919 "test-linc.mc"
void g_completion_add_items( GCompletion *cmp,  GList *items); 
#line 1921 "test-linc.mc"
void g_completion_remove_items( GCompletion *cmp,  GList *items); 
#line 1922 "test-linc.mc"
void g_completion_clear_items( GCompletion *cmp); 
#line 1925 "test-linc.mc"
 GList *g_completion_complete( GCompletion *cmp, const  gchar *prefix,  gchar **new_prefix); 
#line 1928 "test-linc.mc"
 GList *g_completion_complete_utf8( GCompletion *cmp, const  gchar *prefix,  gchar **new_prefix); 
#line 1930 "test-linc.mc"
void g_completion_set_compare( GCompletion *cmp,  GCompletionStrncmpFunc strncmp_func); 
#line 1931 "test-linc.mc"
void g_completion_free( GCompletion *cmp); 
#line 1946 "test-linc.mc"
typedef enum {G_CONVERT_ERROR_NO_CONVERSION,G_CONVERT_ERROR_ILLEGAL_SEQUENCE,G_CONVERT_ERROR_FAILED,G_CONVERT_ERROR_PARTIAL_INPUT,G_CONVERT_ERROR_BAD_URI,G_CONVERT_ERROR_NOT_ABSOLUTE_PATH}GConvertError; 
#line 1949 "test-linc.mc"
 GQuark g_convert_error_quark(void ); 
#line 1953 "test-linc.mc"
typedef struct _GIConv *GIConv; 
#line 1956 "test-linc.mc"
 GIConv g_iconv_open(const  gchar *to_codeset, const  gchar *from_codeset); 
#line 1961 "test-linc.mc"
 size_t g_iconv( GIConv converter,  gchar **inbuf,  gsize *inbytes_left,  gchar **outbuf,  gsize *outbytes_left); 
#line 1962 "test-linc.mc"
 gint g_iconv_close( GIConv converter); 
#line 1971 "test-linc.mc"
 gchar *g_convert(const  gchar *str,  gssize len, const  gchar *to_codeset, const  gchar *from_codeset,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1977 "test-linc.mc"
 gchar *g_convert_with_iconv(const  gchar *str,  gssize len,  GIConv converter,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1985 "test-linc.mc"
 gchar *g_convert_with_fallback(const  gchar *str,  gssize len, const  gchar *to_codeset, const  gchar *from_codeset,  gchar *fallback,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1994 "test-linc.mc"
 gchar *g_locale_to_utf8(const  gchar *opsysstring,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1999 "test-linc.mc"
 gchar *g_locale_from_utf8(const  gchar *utf8string,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2004 "test-linc.mc"
 gchar *g_filename_to_utf8(const  gchar *opsysstring,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2009 "test-linc.mc"
 gchar *g_filename_from_utf8(const  gchar *utf8string,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2013 "test-linc.mc"
 gchar *g_filename_from_uri(const  gchar *uri,  gchar **hostname,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2017 "test-linc.mc"
 gchar *g_filename_to_uri(const  gchar *filename, const  gchar *hostname,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2018 "test-linc.mc"
 gchar *g_filename_display_name(const  gchar *filename) __attribute__  (( __malloc__ )) ; 
#line 2019 "test-linc.mc"
 gboolean g_get_filename_charsets(const  gchar ***charsets); 
#line 2021 "test-linc.mc"
 gchar *g_filename_display_basename(const  gchar *filename) __attribute__  (( __malloc__ )) ; 
#line 2023 "test-linc.mc"
 gchar **g_uri_list_extract_uris(const  gchar *uri_list) __attribute__  (( __malloc__ )) ; 
#line 2028 "test-linc.mc"
typedef struct _GData GData; 
#line 2032 "test-linc.mc"
typedef void (*GDataForeachFunc)( GQuark key_id,  gpointer data,  gpointer user_data); 
#line 2036 "test-linc.mc"
void g_datalist_init( GData **datalist); 
#line 2037 "test-linc.mc"
void g_datalist_clear( GData **datalist); 
#line 2039 "test-linc.mc"
 gpointer g_datalist_id_get_data( GData **datalist,  GQuark key_id); 
#line 2043 "test-linc.mc"
void g_datalist_id_set_data_full( GData **datalist,  GQuark key_id,  gpointer data,  GDestroyNotify destroy_func); 
#line 2045 "test-linc.mc"
 gpointer g_datalist_id_remove_no_notify( GData **datalist,  GQuark key_id); 
#line 2048 "test-linc.mc"
void g_datalist_foreach( GData **datalist,  GDataForeachFunc func,  gpointer user_data); 
#line 2050 "test-linc.mc"
void g_datalist_set_flags( GData **datalist,  guint flags); 
#line 2052 "test-linc.mc"
void g_datalist_unset_flags( GData **datalist,  guint flags); 
#line 2053 "test-linc.mc"
 guint g_datalist_get_flags( GData **datalist); 
#line 2054 "test-linc.mc"
void g_dataset_destroy( gconstpointer dataset_location); 
#line 2056 "test-linc.mc"
 gpointer g_dataset_id_get_data( gconstpointer dataset_location,  GQuark key_id); 
#line 2060 "test-linc.mc"
void g_dataset_id_set_data_full( gconstpointer dataset_location,  GQuark key_id,  gpointer data,  GDestroyNotify destroy_func); 
#line 2062 "test-linc.mc"
 gpointer g_dataset_id_remove_no_notify( gconstpointer dataset_location,  GQuark key_id); 
#line 2065 "test-linc.mc"
void g_dataset_foreach( gconstpointer dataset_location,  GDataForeachFunc func,  gpointer user_data); 
#line 2080 "test-linc.mc"
typedef  __clock_t clock_t; 
#line 2086 "test-linc.mc"
typedef  __time_t time_t; 
#line 2090 "test-linc.mc"
typedef  __clockid_t clockid_t; 
#line 2091 "test-linc.mc"
typedef  __timer_t timer_t; 
#line 2113 "test-linc.mc"
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; __const char *tm_zone; }; 
#line 2126 "test-linc.mc"
struct itimerspec {struct timespec it_interval; struct timespec it_value; }; 
#line 2129 "test-linc.mc"
struct sigevent ; 
#line 2133 "test-linc.mc"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ )) ; 
#line 2136 "test-linc.mc"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 2140 "test-linc.mc"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 2143 "test-linc.mc"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 2151 "test-linc.mc"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 2156 "test-linc.mc"
extern struct tm *gmtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 2160 "test-linc.mc"
extern struct tm *localtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 2167 "test-linc.mc"
extern struct tm *gmtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 2172 "test-linc.mc"
extern struct tm *localtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 2178 "test-linc.mc"
extern char *asctime(__const struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 2181 "test-linc.mc"
extern char *ctime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 2190 "test-linc.mc"
extern char *asctime_r(__const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 2194 "test-linc.mc"
extern char *ctime_r(__const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 2199 "test-linc.mc"
extern char *__tzname[2]; 
#line 2200 "test-linc.mc"
extern int __daylight; 
#line 2201 "test-linc.mc"
extern long int __timezone; 
#line 2206 "test-linc.mc"
extern char *tzname[2]; 
#line 2210 "test-linc.mc"
extern void tzset(void ) __attribute__  (( __nothrow__ )) ; 
#line 2214 "test-linc.mc"
extern int daylight; 
#line 2215 "test-linc.mc"
extern long int timezone; 
#line 2221 "test-linc.mc"
extern int stime(__const  time_t *__when) __attribute__  (( __nothrow__ )) ; 
#line 2222 "test-linc.mc"
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 2225 "test-linc.mc"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 2228 "test-linc.mc"
extern int dysize(int __year) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 2230 "test-linc.mc"
extern int nanosleep(__const struct timespec *__requested_time, struct timespec *__remaining); 
#line 2234 "test-linc.mc"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ )) ; 
#line 2237 "test-linc.mc"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 2241 "test-linc.mc"
extern int clock_settime( clockid_t __clock_id, __const struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 2250 "test-linc.mc"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, __const struct timespec *__req, struct timespec *__rem); 
#line 2253 "test-linc.mc"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ )) ; 
#line 2260 "test-linc.mc"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ )) ; 
#line 2263 "test-linc.mc"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 2268 "test-linc.mc"
extern int timer_settime( timer_t __timerid, int __flags, __const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ )) ; 
#line 2272 "test-linc.mc"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ )) ; 
#line 2275 "test-linc.mc"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 2282 "test-linc.mc"
typedef  gint32 GTime; 
#line 2283 "test-linc.mc"
typedef  guint16 GDateYear; 
#line 2284 "test-linc.mc"
typedef  guint8 GDateDay; 
#line 2285 "test-linc.mc"
typedef struct _GDate GDate; 
#line 2287 "test-linc.mc"
struct tm ; 
#line 2295 "test-linc.mc"
typedef enum {G_DATE_DAY=0,G_DATE_MONTH=1,G_DATE_YEAR=2}GDateDMY; 
#line 2308 "test-linc.mc"
typedef enum {G_DATE_BAD_WEEKDAY=0,G_DATE_MONDAY=1,G_DATE_TUESDAY=2,G_DATE_WEDNESDAY=3,G_DATE_THURSDAY=4,G_DATE_FRIDAY=5,G_DATE_SATURDAY=6,G_DATE_SUNDAY=7}GDateWeekday; 
#line 2324 "test-linc.mc"
typedef enum {G_DATE_BAD_MONTH=0,G_DATE_JANUARY=1,G_DATE_FEBRUARY=2,G_DATE_MARCH=3,G_DATE_APRIL=4,G_DATE_MAY=5,G_DATE_JUNE=6,G_DATE_JULY=7,G_DATE_AUGUST=8,G_DATE_SEPTEMBER=9,G_DATE_OCTOBER=10,G_DATE_NOVEMBER=11,G_DATE_DECEMBER=12}GDateMonth; 
#line 2340 "test-linc.mc"
struct _GDate { guint julian_days:32;  guint julian:1;  guint dmy:1;  guint day:6;  guint month:4;  guint year:16; }; 
#line 2346 "test-linc.mc"
 GDate *g_date_new(void ); 
#line 2349 "test-linc.mc"
 GDate *g_date_new_dmy( GDateDay day,  GDateMonth month,  GDateYear year); 
#line 2350 "test-linc.mc"
 GDate *g_date_new_julian( guint32 julian_day); 
#line 2351 "test-linc.mc"
void g_date_free( GDate *date); 
#line 2358 "test-linc.mc"
 gboolean g_date_valid(const  GDate *date); 
#line 2359 "test-linc.mc"
 gboolean g_date_valid_day( GDateDay day) __attribute__  (( __const__ )) ; 
#line 2360 "test-linc.mc"
 gboolean g_date_valid_month( GDateMonth month) __attribute__  (( __const__ )) ; 
#line 2361 "test-linc.mc"
 gboolean g_date_valid_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 2362 "test-linc.mc"
 gboolean g_date_valid_weekday( GDateWeekday weekday) __attribute__  (( __const__ )) ; 
#line 2363 "test-linc.mc"
 gboolean g_date_valid_julian( guint32 julian_date) __attribute__  (( __const__ )) ; 
#line 2366 "test-linc.mc"
 gboolean g_date_valid_dmy( GDateDay day,  GDateMonth month,  GDateYear year) __attribute__  (( __const__ )) ; 
#line 2368 "test-linc.mc"
 GDateWeekday g_date_get_weekday(const  GDate *date); 
#line 2369 "test-linc.mc"
 GDateMonth g_date_get_month(const  GDate *date); 
#line 2370 "test-linc.mc"
 GDateYear g_date_get_year(const  GDate *date); 
#line 2371 "test-linc.mc"
 GDateDay g_date_get_day(const  GDate *date); 
#line 2372 "test-linc.mc"
 guint32 g_date_get_julian(const  GDate *date); 
#line 2373 "test-linc.mc"
 guint g_date_get_day_of_year(const  GDate *date); 
#line 2380 "test-linc.mc"
 guint g_date_get_monday_week_of_year(const  GDate *date); 
#line 2381 "test-linc.mc"
 guint g_date_get_sunday_week_of_year(const  GDate *date); 
#line 2382 "test-linc.mc"
 guint g_date_get_iso8601_week_of_year(const  GDate *date); 
#line 2389 "test-linc.mc"
void g_date_clear( GDate *date,  guint n_dates); 
#line 2396 "test-linc.mc"
void g_date_set_parse( GDate *date, const  gchar *str); 
#line 2398 "test-linc.mc"
void g_date_set_time_t( GDate *date,  time_t timet); 
#line 2400 "test-linc.mc"
void g_date_set_time_val( GDate *date,  GTimeVal *timeval); 
#line 2403 "test-linc.mc"
void g_date_set_time( GDate *date,  GTime time_); 
#line 2406 "test-linc.mc"
void g_date_set_month( GDate *date,  GDateMonth month); 
#line 2408 "test-linc.mc"
void g_date_set_day( GDate *date,  GDateDay day); 
#line 2410 "test-linc.mc"
void g_date_set_year( GDate *date,  GDateYear year); 
#line 2414 "test-linc.mc"
void g_date_set_dmy( GDate *date,  GDateDay day,  GDateMonth month,  GDateYear y); 
#line 2416 "test-linc.mc"
void g_date_set_julian( GDate *date,  guint32 julian_date); 
#line 2417 "test-linc.mc"
 gboolean g_date_is_first_of_month(const  GDate *date); 
#line 2418 "test-linc.mc"
 gboolean g_date_is_last_of_month(const  GDate *date); 
#line 2422 "test-linc.mc"
void g_date_add_days( GDate *date,  guint n_days); 
#line 2424 "test-linc.mc"
void g_date_subtract_days( GDate *date,  guint n_days); 
#line 2428 "test-linc.mc"
void g_date_add_months( GDate *date,  guint n_months); 
#line 2430 "test-linc.mc"
void g_date_subtract_months( GDate *date,  guint n_months); 
#line 2434 "test-linc.mc"
void g_date_add_years( GDate *date,  guint n_years); 
#line 2436 "test-linc.mc"
void g_date_subtract_years( GDate *date,  guint n_years); 
#line 2437 "test-linc.mc"
 gboolean g_date_is_leap_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 2439 "test-linc.mc"
 guint8 g_date_get_days_in_month( GDateMonth month,  GDateYear year) __attribute__  (( __const__ )) ; 
#line 2440 "test-linc.mc"
 guint8 g_date_get_monday_weeks_in_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 2441 "test-linc.mc"
 guint8 g_date_get_sunday_weeks_in_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 2446 "test-linc.mc"
 gint g_date_days_between(const  GDate *date1, const  GDate *date2); 
#line 2450 "test-linc.mc"
 gint g_date_compare(const  GDate *lhs, const  GDate *rhs); 
#line 2452 "test-linc.mc"
void g_date_to_struct_tm(const  GDate *date, struct tm *tm); 
#line 2456 "test-linc.mc"
void g_date_clamp( GDate *date, const  GDate *min_date, const  GDate *max_date); 
#line 2459 "test-linc.mc"
void g_date_order( GDate *date1,  GDate *date2); 
#line 2467 "test-linc.mc"
 gsize g_date_strftime( gchar *s,  gsize slen, const  gchar *format, const  GDate *date); 
#line 2471 "test-linc.mc"
typedef struct _GDir GDir; 
#line 2481 "test-linc.mc"
 GDir *g_dir_open(const  gchar *path,  guint flags,  GError **error); 
#line 2482 "test-linc.mc"
const  gchar *g_dir_read_name( GDir *dir); 
#line 2483 "test-linc.mc"
void g_dir_rewind( GDir *dir); 
#line 2484 "test-linc.mc"
void g_dir_close( GDir *dir); 
#line 2519 "test-linc.mc"
typedef enum {G_FILE_ERROR_EXIST,G_FILE_ERROR_ISDIR,G_FILE_ERROR_ACCES,G_FILE_ERROR_NAMETOOLONG,G_FILE_ERROR_NOENT,G_FILE_ERROR_NOTDIR,G_FILE_ERROR_NXIO,G_FILE_ERROR_NODEV,G_FILE_ERROR_ROFS,G_FILE_ERROR_TXTBSY,G_FILE_ERROR_FAULT,G_FILE_ERROR_LOOP,G_FILE_ERROR_NOSPC,G_FILE_ERROR_NOMEM,G_FILE_ERROR_MFILE,G_FILE_ERROR_NFILE,G_FILE_ERROR_BADF,G_FILE_ERROR_INVAL,G_FILE_ERROR_PIPE,G_FILE_ERROR_AGAIN,G_FILE_ERROR_INTR,G_FILE_ERROR_IO,G_FILE_ERROR_PERM,G_FILE_ERROR_NOSYS,G_FILE_ERROR_FAILED}GFileError; 
#line 2532 "test-linc.mc"
typedef enum {G_FILE_TEST_IS_REGULAR=1 << 0,G_FILE_TEST_IS_SYMLINK=1 << 1,G_FILE_TEST_IS_DIR=1 << 2,G_FILE_TEST_IS_EXECUTABLE=1 << 3,G_FILE_TEST_EXISTS=1 << 4}GFileTest; 
#line 2534 "test-linc.mc"
 GQuark g_file_error_quark(void ); 
#line 2536 "test-linc.mc"
 GFileError g_file_error_from_errno( gint err_no); 
#line 2538 "test-linc.mc"
 gboolean g_file_test(const  gchar *filename,  GFileTest test); 
#line 2542 "test-linc.mc"
 gboolean g_file_get_contents(const  gchar *filename,  gchar **contents,  gsize *length,  GError **error); 
#line 2546 "test-linc.mc"
 gboolean g_file_set_contents(const  gchar *filename, const  gchar *contents,  gssize length,  GError **error); 
#line 2548 "test-linc.mc"
 gchar *g_file_read_link(const  gchar *filename,  GError **error); 
#line 2551 "test-linc.mc"
 gint g_mkstemp( gchar *tmpl); 
#line 2556 "test-linc.mc"
 gint g_file_open_tmp(const  gchar *tmpl,  gchar **name_used,  GError **error); 
#line 2560 "test-linc.mc"
 gchar *g_build_path(const  gchar *separator, const  gchar *first_element, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 2562 "test-linc.mc"
 gchar *g_build_pathv(const  gchar *separator,  gchar **args) __attribute__  (( __malloc__ )) ; 
#line 2565 "test-linc.mc"
 gchar *g_build_filename(const  gchar *first_element, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 2566 "test-linc.mc"
 gchar *g_build_filenamev( gchar **args) __attribute__  (( __malloc__ )) ; 
#line 2569 "test-linc.mc"
int g_mkdir_with_parents(const  gchar *pathname, int mode); 
#line 2574 "test-linc.mc"
typedef struct _GHashTable GHashTable; 
#line 2578 "test-linc.mc"
typedef  gboolean (*GHRFunc)( gpointer key,  gpointer value,  gpointer user_data); 
#line 2583 "test-linc.mc"
 GHashTable *g_hash_table_new( GHashFunc hash_func,  GEqualFunc key_equal_func); 
#line 2587 "test-linc.mc"
 GHashTable *g_hash_table_new_full( GHashFunc hash_func,  GEqualFunc key_equal_func,  GDestroyNotify key_destroy_func,  GDestroyNotify value_destroy_func); 
#line 2588 "test-linc.mc"
void g_hash_table_destroy( GHashTable *hash_table); 
#line 2591 "test-linc.mc"
void g_hash_table_insert( GHashTable *hash_table,  gpointer key,  gpointer value); 
#line 2594 "test-linc.mc"
void g_hash_table_replace( GHashTable *hash_table,  gpointer key,  gpointer value); 
#line 2596 "test-linc.mc"
 gboolean g_hash_table_remove( GHashTable *hash_table,  gconstpointer key); 
#line 2598 "test-linc.mc"
 gboolean g_hash_table_steal( GHashTable *hash_table,  gconstpointer key); 
#line 2600 "test-linc.mc"
 gpointer g_hash_table_lookup( GHashTable *hash_table,  gconstpointer key); 
#line 2604 "test-linc.mc"
 gboolean g_hash_table_lookup_extended( GHashTable *hash_table,  gconstpointer lookup_key,  gpointer *orig_key,  gpointer *value); 
#line 2607 "test-linc.mc"
void g_hash_table_foreach( GHashTable *hash_table,  GHFunc func,  gpointer user_data); 
#line 2610 "test-linc.mc"
 gpointer g_hash_table_find( GHashTable *hash_table,  GHRFunc predicate,  gpointer user_data); 
#line 2613 "test-linc.mc"
 guint g_hash_table_foreach_remove( GHashTable *hash_table,  GHRFunc func,  gpointer user_data); 
#line 2616 "test-linc.mc"
 guint g_hash_table_foreach_steal( GHashTable *hash_table,  GHRFunc func,  gpointer user_data); 
#line 2617 "test-linc.mc"
 guint g_hash_table_size( GHashTable *hash_table); 
#line 2620 "test-linc.mc"
 GHashTable *g_hash_table_ref( GHashTable *hash_table); 
#line 2621 "test-linc.mc"
void g_hash_table_unref( GHashTable *hash_table); 
#line 2623 "test-linc.mc"
 gboolean g_str_equal( gconstpointer v1,  gconstpointer v2); 
#line 2624 "test-linc.mc"
 guint g_str_hash( gconstpointer v); 
#line 2627 "test-linc.mc"
 gboolean g_int_equal( gconstpointer v1,  gconstpointer v2); 
#line 2628 "test-linc.mc"
 guint g_int_hash( gconstpointer v); 
#line 2636 "test-linc.mc"
 guint g_direct_hash( gconstpointer v) __attribute__  (( __const__ )) ; 
#line 2638 "test-linc.mc"
 gboolean g_direct_equal( gconstpointer v1,  gconstpointer v2) __attribute__  (( __const__ )) ; 
#line 2645 "test-linc.mc"
typedef struct _GHook GHook; 
#line 2646 "test-linc.mc"
typedef struct _GHookList GHookList; 
#line 2649 "test-linc.mc"
typedef  gint (*GHookCompareFunc)( GHook *new_hook,  GHook *sibling); 
#line 2651 "test-linc.mc"
typedef  gboolean (*GHookFindFunc)( GHook *hook,  gpointer data); 
#line 2653 "test-linc.mc"
typedef void (*GHookMarshaller)( GHook *hook,  gpointer marshal_data); 
#line 2655 "test-linc.mc"
typedef  gboolean (*GHookCheckMarshaller)( GHook *hook,  gpointer marshal_data); 
#line 2656 "test-linc.mc"
typedef void (*GHookFunc)( gpointer data); 
#line 2657 "test-linc.mc"
typedef  gboolean (*GHookCheckFunc)( gpointer data); 
#line 2659 "test-linc.mc"
typedef void (*GHookFinalizeFunc)( GHookList *hook_list,  GHook *hook); 
#line 2665 "test-linc.mc"
typedef enum {G_HOOK_FLAG_ACTIVE=1 << 0,G_HOOK_FLAG_IN_CALL=1 << 1,G_HOOK_FLAG_MASK=0x0f}GHookFlagMask; 
#line 2679 "test-linc.mc"
struct _GHookList { gulong seq_id;  guint hook_size:16;  guint is_setup:1;  GHook *hooks;  gpointer dummy3;  GHookFinalizeFunc finalize_hook;  gpointer dummy[2]; }; 
#line 2690 "test-linc.mc"
struct _GHook { gpointer data;  GHook *next;  GHook *prev;  guint ref_count;  gulong hook_id;  guint flags;  gpointer func;  GDestroyNotify destroy; }; 
#line 2692 "test-linc.mc"
void g_hook_list_init( GHookList *hook_list,  guint hook_size); 
#line 2693 "test-linc.mc"
void g_hook_list_clear( GHookList *hook_list); 
#line 2694 "test-linc.mc"
 GHook *g_hook_alloc( GHookList *hook_list); 
#line 2696 "test-linc.mc"
void g_hook_free( GHookList *hook_list,  GHook *hook); 
#line 2698 "test-linc.mc"
 GHook *g_hook_ref( GHookList *hook_list,  GHook *hook); 
#line 2700 "test-linc.mc"
void g_hook_unref( GHookList *hook_list,  GHook *hook); 
#line 2702 "test-linc.mc"
 gboolean g_hook_destroy( GHookList *hook_list,  gulong hook_id); 
#line 2704 "test-linc.mc"
void g_hook_destroy_link( GHookList *hook_list,  GHook *hook); 
#line 2706 "test-linc.mc"
void g_hook_prepend( GHookList *hook_list,  GHook *hook); 
#line 2709 "test-linc.mc"
void g_hook_insert_before( GHookList *hook_list,  GHook *sibling,  GHook *hook); 
#line 2712 "test-linc.mc"
void g_hook_insert_sorted( GHookList *hook_list,  GHook *hook,  GHookCompareFunc func); 
#line 2714 "test-linc.mc"
 GHook *g_hook_get( GHookList *hook_list,  gulong hook_id); 
#line 2718 "test-linc.mc"
 GHook *g_hook_find( GHookList *hook_list,  gboolean need_valids,  GHookFindFunc func,  gpointer data); 
#line 2721 "test-linc.mc"
 GHook *g_hook_find_data( GHookList *hook_list,  gboolean need_valids,  gpointer data); 
#line 2724 "test-linc.mc"
 GHook *g_hook_find_func( GHookList *hook_list,  gboolean need_valids,  gpointer func); 
#line 2728 "test-linc.mc"
 GHook *g_hook_find_func_data( GHookList *hook_list,  gboolean need_valids,  gpointer func,  gpointer data); 
#line 2731 "test-linc.mc"
 GHook *g_hook_first_valid( GHookList *hook_list,  gboolean may_be_in_call); 
#line 2737 "test-linc.mc"
 GHook *g_hook_next_valid( GHookList *hook_list,  GHook *hook,  gboolean may_be_in_call); 
#line 2740 "test-linc.mc"
 gint g_hook_compare_ids( GHook *new_hook,  GHook *sibling); 
#line 2747 "test-linc.mc"
void g_hook_list_invoke( GHookList *hook_list,  gboolean may_recurse); 
#line 2752 "test-linc.mc"
void g_hook_list_invoke_check( GHookList *hook_list,  gboolean may_recurse); 
#line 2758 "test-linc.mc"
void g_hook_list_marshal( GHookList *hook_list,  gboolean may_recurse,  GHookMarshaller marshaller,  gpointer marshal_data); 
#line 2762 "test-linc.mc"
void g_hook_list_marshal_check( GHookList *hook_list,  gboolean may_recurse,  GHookCheckMarshaller marshaller,  gpointer marshal_data); 
#line 2767 "test-linc.mc"
typedef struct _GSList GSList; 
#line 2773 "test-linc.mc"
struct _GSList { gpointer data;  GSList *next; }; 
#line 2777 "test-linc.mc"
 GSList *g_slist_alloc(void ) __attribute__  (( warn_unused_result )) ; 
#line 2778 "test-linc.mc"
void g_slist_free( GSList *list); 
#line 2779 "test-linc.mc"
void g_slist_free_1( GSList *list); 
#line 2782 "test-linc.mc"
 GSList *g_slist_append( GSList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2784 "test-linc.mc"
 GSList *g_slist_prepend( GSList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2787 "test-linc.mc"
 GSList *g_slist_insert( GSList *list,  gpointer data,  gint position) __attribute__  (( warn_unused_result )) ; 
#line 2790 "test-linc.mc"
 GSList *g_slist_insert_sorted( GSList *list,  gpointer data,  GCompareFunc func) __attribute__  (( warn_unused_result )) ; 
#line 2794 "test-linc.mc"
 GSList *g_slist_insert_sorted_with_data( GSList *list,  gpointer data,  GCompareDataFunc func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 2797 "test-linc.mc"
 GSList *g_slist_insert_before( GSList *slist,  GSList *sibling,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2799 "test-linc.mc"
 GSList *g_slist_concat( GSList *list1,  GSList *list2) __attribute__  (( warn_unused_result )) ; 
#line 2801 "test-linc.mc"
 GSList *g_slist_remove( GSList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2803 "test-linc.mc"
 GSList *g_slist_remove_all( GSList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2805 "test-linc.mc"
 GSList *g_slist_remove_link( GSList *list,  GSList *link_) __attribute__  (( warn_unused_result )) ; 
#line 2807 "test-linc.mc"
 GSList *g_slist_delete_link( GSList *list,  GSList *link_) __attribute__  (( warn_unused_result )) ; 
#line 2808 "test-linc.mc"
 GSList *g_slist_reverse( GSList *list) __attribute__  (( warn_unused_result )) ; 
#line 2809 "test-linc.mc"
 GSList *g_slist_copy( GSList *list) __attribute__  (( warn_unused_result )) ; 
#line 2811 "test-linc.mc"
 GSList *g_slist_nth( GSList *list,  guint n); 
#line 2813 "test-linc.mc"
 GSList *g_slist_find( GSList *list,  gconstpointer data); 
#line 2816 "test-linc.mc"
 GSList *g_slist_find_custom( GSList *list,  gconstpointer data,  GCompareFunc func); 
#line 2818 "test-linc.mc"
 gint g_slist_position( GSList *list,  GSList *llink); 
#line 2820 "test-linc.mc"
 gint g_slist_index( GSList *list,  gconstpointer data); 
#line 2821 "test-linc.mc"
 GSList *g_slist_last( GSList *list); 
#line 2822 "test-linc.mc"
 guint g_slist_length( GSList *list); 
#line 2825 "test-linc.mc"
void g_slist_foreach( GSList *list,  GFunc func,  gpointer user_data); 
#line 2827 "test-linc.mc"
 GSList *g_slist_sort( GSList *list,  GCompareFunc compare_func) __attribute__  (( warn_unused_result )) ; 
#line 2830 "test-linc.mc"
 GSList *g_slist_sort_with_data( GSList *list,  GCompareDataFunc compare_func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 2832 "test-linc.mc"
 gpointer g_slist_nth_data( GSList *list,  guint n); 
#line 2837 "test-linc.mc"
void g_slist_push_allocator( gpointer dummy); 
#line 2838 "test-linc.mc"
void g_slist_pop_allocator(void ); 
#line 2845 "test-linc.mc"
typedef struct _GMainContext GMainContext; 
#line 2846 "test-linc.mc"
typedef struct _GMainLoop GMainLoop; 
#line 2847 "test-linc.mc"
typedef struct _GSource GSource; 
#line 2848 "test-linc.mc"
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs; 
#line 2849 "test-linc.mc"
typedef struct _GSourceFuncs GSourceFuncs; 
#line 2851 "test-linc.mc"
typedef  gboolean (*GSourceFunc)( gpointer data); 
#line 2854 "test-linc.mc"
typedef void (*GChildWatchFunc)( GPid pid,  gint status,  gpointer data); 
#line 2877 "test-linc.mc"
struct _GSource { gpointer callback_data;  GSourceCallbackFuncs *callback_funcs;  GSourceFuncs *source_funcs;  guint ref_count;  GMainContext *context;  gint priority;  guint flags;  guint source_id;  GSList *poll_fds;  GSource *prev;  GSource *next;  gpointer reserved1;  gpointer reserved2; }; 
#line 2887 "test-linc.mc"
struct _GSourceCallbackFuncs {void (*ref)( gpointer cb_data); void (*unref)( gpointer cb_data); void (*get)( gpointer cb_data,  GSource *source,  GSourceFunc *func,  gpointer *data); }; 
#line 2889 "test-linc.mc"
typedef void (*GSourceDummyMarshal)(void ); 
#line 2904 "test-linc.mc"
struct _GSourceFuncs { gboolean (*prepare)( GSource *source,  gint *timeout_);  gboolean (*check)( GSource *source);  gboolean (*dispatch)( GSource *source,  GSourceFunc callback,  gpointer user_data); void (*finalize)( GSource *source);  GSourceFunc closure_callback;  GSourceDummyMarshal closure_marshal; }; 
#line 2905 "test-linc.mc"
typedef struct _GPollFD GPollFD; 
#line 2908 "test-linc.mc"
typedef  gint (*GPollFunc)( GPollFD *ufds,  guint nfsd,  gint timeout_); 
#line 2915 "test-linc.mc"
struct _GPollFD { gint fd;  gushort events;  gushort revents; }; 
#line 2916 "test-linc.mc"
 GMainContext *g_main_context_new(void ); 
#line 2917 "test-linc.mc"
 GMainContext *g_main_context_ref( GMainContext *context); 
#line 2918 "test-linc.mc"
void g_main_context_unref( GMainContext *context); 
#line 2919 "test-linc.mc"
 GMainContext *g_main_context_default(void ); 
#line 2922 "test-linc.mc"
 gboolean g_main_context_iteration( GMainContext *context,  gboolean may_block); 
#line 2923 "test-linc.mc"
 gboolean g_main_context_pending( GMainContext *context); 
#line 2928 "test-linc.mc"
 GSource *g_main_context_find_source_by_id( GMainContext *context,  guint source_id); 
#line 2930 "test-linc.mc"
 GSource *g_main_context_find_source_by_user_data( GMainContext *context,  gpointer user_data); 
#line 2933 "test-linc.mc"
 GSource *g_main_context_find_source_by_funcs_user_data( GMainContext *context,  GSourceFuncs *funcs,  gpointer user_data); 
#line 2937 "test-linc.mc"
void g_main_context_wakeup( GMainContext *context); 
#line 2938 "test-linc.mc"
 gboolean g_main_context_acquire( GMainContext *context); 
#line 2939 "test-linc.mc"
void g_main_context_release( GMainContext *context); 
#line 2940 "test-linc.mc"
 gboolean g_main_context_is_owner( GMainContext *context); 
#line 2943 "test-linc.mc"
 gboolean g_main_context_wait( GMainContext *context,  GCond *cond,  GMutex *mutex); 
#line 2946 "test-linc.mc"
 gboolean g_main_context_prepare( GMainContext *context,  gint *priority); 
#line 2951 "test-linc.mc"
 gint g_main_context_query( GMainContext *context,  gint max_priority,  gint *timeout_,  GPollFD *fds,  gint n_fds); 
#line 2955 "test-linc.mc"
 gint g_main_context_check( GMainContext *context,  gint max_priority,  GPollFD *fds,  gint n_fds); 
#line 2956 "test-linc.mc"
void g_main_context_dispatch( GMainContext *context); 
#line 2959 "test-linc.mc"
void g_main_context_set_poll_func( GMainContext *context,  GPollFunc func); 
#line 2960 "test-linc.mc"
 GPollFunc g_main_context_get_poll_func( GMainContext *context); 
#line 2966 "test-linc.mc"
void g_main_context_add_poll( GMainContext *context,  GPollFD *fd,  gint priority); 
#line 2968 "test-linc.mc"
void g_main_context_remove_poll( GMainContext *context,  GPollFD *fd); 
#line 2970 "test-linc.mc"
int g_main_depth(void ); 
#line 2975 "test-linc.mc"
 GMainLoop *g_main_loop_new( GMainContext *context,  gboolean is_running); 
#line 2976 "test-linc.mc"
void g_main_loop_run( GMainLoop *loop); 
#line 2977 "test-linc.mc"
void g_main_loop_quit( GMainLoop *loop); 
#line 2978 "test-linc.mc"
 GMainLoop *g_main_loop_ref( GMainLoop *loop); 
#line 2979 "test-linc.mc"
void g_main_loop_unref( GMainLoop *loop); 
#line 2980 "test-linc.mc"
 gboolean g_main_loop_is_running( GMainLoop *loop); 
#line 2981 "test-linc.mc"
 GMainContext *g_main_loop_get_context( GMainLoop *loop); 
#line 2986 "test-linc.mc"
 GSource *g_source_new( GSourceFuncs *source_funcs,  guint struct_size); 
#line 2987 "test-linc.mc"
 GSource *g_source_ref( GSource *source); 
#line 2988 "test-linc.mc"
void g_source_unref( GSource *source); 
#line 2991 "test-linc.mc"
 guint g_source_attach( GSource *source,  GMainContext *context); 
#line 2992 "test-linc.mc"
void g_source_destroy( GSource *source); 
#line 2995 "test-linc.mc"
void g_source_set_priority( GSource *source,  gint priority); 
#line 2996 "test-linc.mc"
 gint g_source_get_priority( GSource *source); 
#line 2998 "test-linc.mc"
void g_source_set_can_recurse( GSource *source,  gboolean can_recurse); 
#line 2999 "test-linc.mc"
 gboolean g_source_get_can_recurse( GSource *source); 
#line 3000 "test-linc.mc"
 guint g_source_get_id( GSource *source); 
#line 3002 "test-linc.mc"
 GMainContext *g_source_get_context( GSource *source); 
#line 3007 "test-linc.mc"
void g_source_set_callback( GSource *source,  GSourceFunc func,  gpointer data,  GDestroyNotify notify); 
#line 3013 "test-linc.mc"
void g_source_set_callback_indirect( GSource *source,  gpointer callback_data,  GSourceCallbackFuncs *callback_funcs); 
#line 3016 "test-linc.mc"
void g_source_add_poll( GSource *source,  GPollFD *fd); 
#line 3018 "test-linc.mc"
void g_source_remove_poll( GSource *source,  GPollFD *fd); 
#line 3021 "test-linc.mc"
void g_source_get_current_time( GSource *source,  GTimeVal *timeval); 
#line 3029 "test-linc.mc"
 GSource *g_idle_source_new(void ); 
#line 3030 "test-linc.mc"
 GSource *g_child_watch_source_new( GPid pid); 
#line 3031 "test-linc.mc"
 GSource *g_timeout_source_new( guint interval); 
#line 3035 "test-linc.mc"
void g_get_current_time( GTimeVal *result); 
#line 3036 "test-linc.mc"
 gboolean g_source_remove( guint tag); 
#line 3037 "test-linc.mc"
 gboolean g_source_remove_by_user_data( gpointer user_data); 
#line 3039 "test-linc.mc"
 gboolean g_source_remove_by_funcs_user_data( GSourceFuncs *funcs,  gpointer user_data); 
#line 3046 "test-linc.mc"
 guint g_timeout_add_full( gint priority,  guint interval,  GSourceFunc function,  gpointer data,  GDestroyNotify notify); 
#line 3049 "test-linc.mc"
 guint g_timeout_add( guint interval,  GSourceFunc function,  gpointer data); 
#line 3054 "test-linc.mc"
 guint g_child_watch_add_full( gint priority,  GPid pid,  GChildWatchFunc function,  gpointer data,  GDestroyNotify notify); 
#line 3057 "test-linc.mc"
 guint g_child_watch_add( GPid pid,  GChildWatchFunc function,  gpointer data); 
#line 3059 "test-linc.mc"
 guint g_idle_add( GSourceFunc function,  gpointer data); 
#line 3063 "test-linc.mc"
 guint g_idle_add_full( gint priority,  GSourceFunc function,  gpointer data,  GDestroyNotify notify); 
#line 3064 "test-linc.mc"
 gboolean g_idle_remove_by_data( gpointer data); 
#line 3067 "test-linc.mc"
extern  GSourceFuncs g_timeout_funcs; 
#line 3068 "test-linc.mc"
extern  GSourceFuncs g_child_watch_funcs; 
#line 3069 "test-linc.mc"
extern  GSourceFuncs g_idle_funcs; 
#line 3074 "test-linc.mc"
typedef  guint32 gunichar; 
#line 3075 "test-linc.mc"
typedef  guint16 gunichar2; 
#line 3112 "test-linc.mc"
typedef enum {G_UNICODE_CONTROL,G_UNICODE_FORMAT,G_UNICODE_UNASSIGNED,G_UNICODE_PRIVATE_USE,G_UNICODE_SURROGATE,G_UNICODE_LOWERCASE_LETTER,G_UNICODE_MODIFIER_LETTER,G_UNICODE_OTHER_LETTER,G_UNICODE_TITLECASE_LETTER,G_UNICODE_UPPERCASE_LETTER,G_UNICODE_COMBINING_MARK,G_UNICODE_ENCLOSING_MARK,G_UNICODE_NON_SPACING_MARK,G_UNICODE_DECIMAL_NUMBER,G_UNICODE_LETTER_NUMBER,G_UNICODE_OTHER_NUMBER,G_UNICODE_CONNECT_PUNCTUATION,G_UNICODE_DASH_PUNCTUATION,G_UNICODE_CLOSE_PUNCTUATION,G_UNICODE_FINAL_PUNCTUATION,G_UNICODE_INITIAL_PUNCTUATION,G_UNICODE_OTHER_PUNCTUATION,G_UNICODE_OPEN_PUNCTUATION,G_UNICODE_CURRENCY_SYMBOL,G_UNICODE_MODIFIER_SYMBOL,G_UNICODE_MATH_SYMBOL,G_UNICODE_OTHER_SYMBOL,G_UNICODE_LINE_SEPARATOR,G_UNICODE_PARAGRAPH_SEPARATOR,G_UNICODE_SPACE_SEPARATOR}GUnicodeType; 
#line 3157 "test-linc.mc"
typedef enum {G_UNICODE_BREAK_MANDATORY,G_UNICODE_BREAK_CARRIAGE_RETURN,G_UNICODE_BREAK_LINE_FEED,G_UNICODE_BREAK_COMBINING_MARK,G_UNICODE_BREAK_SURROGATE,G_UNICODE_BREAK_ZERO_WIDTH_SPACE,G_UNICODE_BREAK_INSEPARABLE,G_UNICODE_BREAK_NON_BREAKING_GLUE,G_UNICODE_BREAK_CONTINGENT,G_UNICODE_BREAK_SPACE,G_UNICODE_BREAK_AFTER,G_UNICODE_BREAK_BEFORE,G_UNICODE_BREAK_BEFORE_AND_AFTER,G_UNICODE_BREAK_HYPHEN,G_UNICODE_BREAK_NON_STARTER,G_UNICODE_BREAK_OPEN_PUNCTUATION,G_UNICODE_BREAK_CLOSE_PUNCTUATION,G_UNICODE_BREAK_QUOTATION,G_UNICODE_BREAK_EXCLAMATION,G_UNICODE_BREAK_IDEOGRAPHIC,G_UNICODE_BREAK_NUMERIC,G_UNICODE_BREAK_INFIX_SEPARATOR,G_UNICODE_BREAK_SYMBOL,G_UNICODE_BREAK_ALPHABETIC,G_UNICODE_BREAK_PREFIX,G_UNICODE_BREAK_POSTFIX,G_UNICODE_BREAK_COMPLEX_CONTEXT,G_UNICODE_BREAK_AMBIGUOUS,G_UNICODE_BREAK_UNKNOWN,G_UNICODE_BREAK_NEXT_LINE,G_UNICODE_BREAK_WORD_JOINER,G_UNICODE_BREAK_HANGUL_L_JAMO,G_UNICODE_BREAK_HANGUL_V_JAMO,G_UNICODE_BREAK_HANGUL_T_JAMO,G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE}GUnicodeBreakType; 
#line 3165 "test-linc.mc"
 gboolean g_get_charset(const char **charset); 
#line 3169 "test-linc.mc"
 gboolean g_unichar_isalnum( gunichar c) __attribute__  (( __const__ )) ; 
#line 3170 "test-linc.mc"
 gboolean g_unichar_isalpha( gunichar c) __attribute__  (( __const__ )) ; 
#line 3171 "test-linc.mc"
 gboolean g_unichar_iscntrl( gunichar c) __attribute__  (( __const__ )) ; 
#line 3172 "test-linc.mc"
 gboolean g_unichar_isdigit( gunichar c) __attribute__  (( __const__ )) ; 
#line 3173 "test-linc.mc"
 gboolean g_unichar_isgraph( gunichar c) __attribute__  (( __const__ )) ; 
#line 3174 "test-linc.mc"
 gboolean g_unichar_islower( gunichar c) __attribute__  (( __const__ )) ; 
#line 3175 "test-linc.mc"
 gboolean g_unichar_isprint( gunichar c) __attribute__  (( __const__ )) ; 
#line 3176 "test-linc.mc"
 gboolean g_unichar_ispunct( gunichar c) __attribute__  (( __const__ )) ; 
#line 3177 "test-linc.mc"
 gboolean g_unichar_isspace( gunichar c) __attribute__  (( __const__ )) ; 
#line 3178 "test-linc.mc"
 gboolean g_unichar_isupper( gunichar c) __attribute__  (( __const__ )) ; 
#line 3179 "test-linc.mc"
 gboolean g_unichar_isxdigit( gunichar c) __attribute__  (( __const__ )) ; 
#line 3180 "test-linc.mc"
 gboolean g_unichar_istitle( gunichar c) __attribute__  (( __const__ )) ; 
#line 3181 "test-linc.mc"
 gboolean g_unichar_isdefined( gunichar c) __attribute__  (( __const__ )) ; 
#line 3182 "test-linc.mc"
 gboolean g_unichar_iswide( gunichar c) __attribute__  (( __const__ )) ; 
#line 3186 "test-linc.mc"
 gunichar g_unichar_toupper( gunichar c) __attribute__  (( __const__ )) ; 
#line 3187 "test-linc.mc"
 gunichar g_unichar_tolower( gunichar c) __attribute__  (( __const__ )) ; 
#line 3188 "test-linc.mc"
 gunichar g_unichar_totitle( gunichar c) __attribute__  (( __const__ )) ; 
#line 3192 "test-linc.mc"
 gint g_unichar_digit_value( gunichar c) __attribute__  (( __const__ )) ; 
#line 3194 "test-linc.mc"
 gint g_unichar_xdigit_value( gunichar c) __attribute__  (( __const__ )) ; 
#line 3197 "test-linc.mc"
 GUnicodeType g_unichar_type( gunichar c) __attribute__  (( __const__ )) ; 
#line 3200 "test-linc.mc"
 GUnicodeBreakType g_unichar_break_type( gunichar c) __attribute__  (( __const__ )) ; 
#line 3207 "test-linc.mc"
void g_unicode_canonical_ordering( gunichar *string,  gsize len); 
#line 3213 "test-linc.mc"
 gunichar *g_unicode_canonical_decomposition( gunichar ch,  gsize *result_len) __attribute__  (( __malloc__ )) ; 
#line 3217 "test-linc.mc"
extern const  gchar *const g_utf8_skip; 
#line 3221 "test-linc.mc"
 gunichar g_utf8_get_char(const  gchar *p); 
#line 3223 "test-linc.mc"
 gunichar g_utf8_get_char_validated(const  gchar *p,  gssize max_len); 
#line 3226 "test-linc.mc"
 gchar *g_utf8_offset_to_pointer(const  gchar *str,  glong offset); 
#line 3228 "test-linc.mc"
 glong g_utf8_pointer_to_offset(const  gchar *str, const  gchar *pos); 
#line 3229 "test-linc.mc"
 gchar *g_utf8_prev_char(const  gchar *p); 
#line 3231 "test-linc.mc"
 gchar *g_utf8_find_next_char(const  gchar *p, const  gchar *end); 
#line 3233 "test-linc.mc"
 gchar *g_utf8_find_prev_char(const  gchar *str, const  gchar *p); 
#line 3236 "test-linc.mc"
 glong g_utf8_strlen(const  gchar *p,  gssize max); 
#line 3241 "test-linc.mc"
 gchar *g_utf8_strncpy( gchar *dest, const  gchar *src,  gsize n); 
#line 3247 "test-linc.mc"
 gchar *g_utf8_strchr(const  gchar *p,  gssize len,  gunichar c); 
#line 3250 "test-linc.mc"
 gchar *g_utf8_strrchr(const  gchar *p,  gssize len,  gunichar c); 
#line 3252 "test-linc.mc"
 gchar *g_utf8_strreverse(const  gchar *str,  gssize len); 
#line 3258 "test-linc.mc"
 gunichar2 *g_utf8_to_utf16(const  gchar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3263 "test-linc.mc"
 gunichar *g_utf8_to_ucs4(const  gchar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3266 "test-linc.mc"
 gunichar *g_utf8_to_ucs4_fast(const  gchar *str,  glong len,  glong *items_written) __attribute__  (( __malloc__ )) ; 
#line 3271 "test-linc.mc"
 gunichar *g_utf16_to_ucs4(const  gunichar2 *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3276 "test-linc.mc"
 gchar *g_utf16_to_utf8(const  gunichar2 *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3281 "test-linc.mc"
 gunichar2 *g_ucs4_to_utf16(const  gunichar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3286 "test-linc.mc"
 gchar *g_ucs4_to_utf8(const  gunichar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3293 "test-linc.mc"
 gint g_unichar_to_utf8( gunichar c,  gchar *outbuf); 
#line 3301 "test-linc.mc"
 gboolean g_utf8_validate(const  gchar *str,  gssize max_len, const  gchar **end); 
#line 3304 "test-linc.mc"
 gboolean g_unichar_validate( gunichar ch); 
#line 3307 "test-linc.mc"
 gchar *g_utf8_strup(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 3309 "test-linc.mc"
 gchar *g_utf8_strdown(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 3311 "test-linc.mc"
 gchar *g_utf8_casefold(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 3322 "test-linc.mc"
typedef enum {G_NORMALIZE_DEFAULT,G_NORMALIZE_NFD=G_NORMALIZE_DEFAULT,G_NORMALIZE_DEFAULT_COMPOSE,G_NORMALIZE_NFC=G_NORMALIZE_DEFAULT_COMPOSE,G_NORMALIZE_ALL,G_NORMALIZE_NFKD=G_NORMALIZE_ALL,G_NORMALIZE_ALL_COMPOSE,G_NORMALIZE_NFKC=G_NORMALIZE_ALL_COMPOSE}GNormalizeMode; 
#line 3326 "test-linc.mc"
 gchar *g_utf8_normalize(const  gchar *str,  gssize len,  GNormalizeMode mode) __attribute__  (( __malloc__ )) ; 
#line 3329 "test-linc.mc"
 gint g_utf8_collate(const  gchar *str1, const  gchar *str2); 
#line 3331 "test-linc.mc"
 gchar *g_utf8_collate_key(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 3333 "test-linc.mc"
 gchar *g_utf8_collate_key_for_filename(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 3336 "test-linc.mc"
 gboolean g_unichar_get_mirror_char( gunichar ch,  gunichar *mirrored_ch); 
#line 3339 "test-linc.mc"
typedef __builtin_va_list __gnuc_va_list; 
#line 3340 "test-linc.mc"
typedef  __gnuc_va_list va_list; 
#line 3343 "test-linc.mc"
const  gchar *g_get_user_name(void ); 
#line 3344 "test-linc.mc"
const  gchar *g_get_real_name(void ); 
#line 3345 "test-linc.mc"
const  gchar *g_get_home_dir(void ); 
#line 3346 "test-linc.mc"
const  gchar *g_get_tmp_dir(void ); 
#line 3347 "test-linc.mc"
const  gchar *g_get_host_name(void ); 
#line 3348 "test-linc.mc"
 gchar *g_get_prgname(void ); 
#line 3349 "test-linc.mc"
void g_set_prgname(const  gchar *prgname); 
#line 3350 "test-linc.mc"
const  gchar *g_get_application_name(void ); 
#line 3351 "test-linc.mc"
void g_set_application_name(const  gchar *application_name); 
#line 3353 "test-linc.mc"
const  gchar *g_get_user_data_dir(void ); 
#line 3354 "test-linc.mc"
const  gchar *g_get_user_config_dir(void ); 
#line 3355 "test-linc.mc"
const  gchar *g_get_user_cache_dir(void ); 
#line 3356 "test-linc.mc"
const  gchar *const *g_get_system_data_dirs(void ); 
#line 3357 "test-linc.mc"
const  gchar *const *g_get_system_config_dirs(void ); 
#line 3359 "test-linc.mc"
const  gchar *const *g_get_language_names(void ); 
#line 3361 "test-linc.mc"
typedef struct _GDebugKey GDebugKey; 
#line 3366 "test-linc.mc"
struct _GDebugKey { gchar *key;  guint value; }; 
#line 3372 "test-linc.mc"
 guint g_parse_debug_string(const  gchar *string, const  GDebugKey *keys,  guint nkeys); 
#line 3377 "test-linc.mc"
 gint g_snprintf( gchar *string,  gulong n,  gchar const *format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 3381 "test-linc.mc"
 gint g_vsnprintf( gchar *string,  gulong n,  gchar const *format,  va_list args); 
#line 3384 "test-linc.mc"
 gboolean g_path_is_absolute(const  gchar *file_name); 
#line 3387 "test-linc.mc"
const  gchar *g_path_skip_root(const  gchar *file_name); 
#line 3395 "test-linc.mc"
const  gchar *g_basename(const  gchar *file_name); 
#line 3396 "test-linc.mc"
 gchar *g_get_current_dir(void ); 
#line 3397 "test-linc.mc"
 gchar *g_path_get_basename(const  gchar *file_name) __attribute__  (( __malloc__ )) ; 
#line 3398 "test-linc.mc"
 gchar *g_path_get_dirname(const  gchar *file_name) __attribute__  (( __malloc__ )) ; 
#line 3401 "test-linc.mc"
void g_nullify_pointer( gpointer *nullify_location); 
#line 3402 "test-linc.mc"
const  gchar *g_getenv(const  gchar *variable); 
#line 3405 "test-linc.mc"
 gboolean g_setenv(const  gchar *variable, const  gchar *value,  gboolean overwrite); 
#line 3406 "test-linc.mc"
void g_unsetenv(const  gchar *variable); 
#line 3407 "test-linc.mc"
 gchar **g_listenv(void ); 
#line 3409 "test-linc.mc"
const  gchar *_g_getenv_nomalloc(const  gchar *variable,  gchar buffer[1024]); 
#line 3415 "test-linc.mc"
typedef void (*GVoidFunc)(void ); 
#line 3416 "test-linc.mc"
void g_atexit( GVoidFunc func); 
#line 3417 "test-linc.mc"
 gchar *g_find_program_in_path(const  gchar *program); 
#line 3422 "test-linc.mc"
extern inline  gint g_bit_nth_lsf( gulong mask,  gint nth_bit); 
#line 3424 "test-linc.mc"
extern inline  gint g_bit_nth_msf( gulong mask,  gint nth_bit); 
#line 3425 "test-linc.mc"
extern inline  guint g_bit_storage( gulong number); 
#line 3430 "test-linc.mc"
typedef struct _GTrashStack GTrashStack; 
#line 3434 "test-linc.mc"
struct _GTrashStack { GTrashStack *next; }; 
#line 3437 "test-linc.mc"
extern inline void g_trash_stack_push( GTrashStack **stack_p,  gpointer data_p); 
#line 3438 "test-linc.mc"
extern inline  gpointer g_trash_stack_pop( GTrashStack **stack_p); 
#line 3439 "test-linc.mc"
extern inline  gpointer g_trash_stack_peek( GTrashStack **stack_p); 
#line 3440 "test-linc.mc"
extern inline  guint g_trash_stack_height( GTrashStack **stack_p); 
#line 3447 "test-linc.mc"
extern inline  gint g_bit_nth_lsf( gulong mask,  gint nth_bit)  {

#line 3454 "test-linc.mc"
do { { 
#line 3450 "test-linc.mc"
nth_bit++; 
#line 3451 "test-linc.mc"
if (mask & (1UL << nth_bit)){
return nth_bit; }} } while(nth_bit < ((4 * 8) - 1)); 
#line 3455 "test-linc.mc"
return (-1); }
 
#line 3459 "test-linc.mc"
extern inline  gint g_bit_nth_msf( gulong mask,  gint nth_bit)  {

#line 3462 "test-linc.mc"
if (nth_bit < 0){
nth_bit = 4 * 8; }
#line 3462 "test-linc.mc"
do { { 
#line 3464 "test-linc.mc"
nth_bit--; 
#line 3465 "test-linc.mc"
if (mask & (1UL << nth_bit)){
return nth_bit; }} } while(nth_bit > 0); 
#line 3469 "test-linc.mc"
return (-1); }
 
#line 3472 "test-linc.mc"
extern inline  guint g_bit_storage( gulong number)  {

#line 3473 "test-linc.mc"

#line 3473 "test-linc.mc"
register  guint n_bits = 0;
#line 3475 "test-linc.mc"
do { { 
#line 3477 "test-linc.mc"
n_bits++; 
#line 3478 "test-linc.mc"
number >>= 1; } } while(number); 
#line 3481 "test-linc.mc"
return n_bits; }
 
#line 3486 "test-linc.mc"
extern inline void g_trash_stack_push( GTrashStack **stack_p,  gpointer data_p)  {

#line 3487 "test-linc.mc"

#line 3487 "test-linc.mc"
 GTrashStack *data = (( GTrashStack *)data_p);
#line 3489 "test-linc.mc"
(data->next) = (*stack_p); 
#line 3490 "test-linc.mc"
(*stack_p) = data; }
 
#line 3493 "test-linc.mc"
extern inline  gpointer g_trash_stack_pop( GTrashStack **stack_p)  {

#line 3494 "test-linc.mc"

#line 3494 "test-linc.mc"
 GTrashStack *data;
#line 3496 "test-linc.mc"
data = (*stack_p); 
#line 3497 "test-linc.mc"
if (data){
{ 
#line 3499 "test-linc.mc"
(*stack_p) = (data->next); 
#line 3503 "test-linc.mc"
(data->next) = (((void *)0)); } }
#line 3506 "test-linc.mc"
return data; }
 
#line 3509 "test-linc.mc"
extern inline  gpointer g_trash_stack_peek( GTrashStack **stack_p)  {

#line 3510 "test-linc.mc"

#line 3510 "test-linc.mc"
 GTrashStack *data;
#line 3512 "test-linc.mc"
data = (*stack_p); 
#line 3514 "test-linc.mc"
return data; }
 
#line 3517 "test-linc.mc"
extern inline  guint g_trash_stack_height( GTrashStack **stack_p)  {

#line 3518 "test-linc.mc"

#line 3518 "test-linc.mc"
 GTrashStack *data;
#line 3519 "test-linc.mc"

#line 3519 "test-linc.mc"
 guint i = 0;
#line 3521 "test-linc.mc"
for(data = (*stack_p);data;data = (data->next)) { i++; } 
#line 3524 "test-linc.mc"
return i; }
 
#line 3532 "test-linc.mc"
extern const  guint glib_major_version; 
#line 3533 "test-linc.mc"
extern const  guint glib_minor_version; 
#line 3534 "test-linc.mc"
extern const  guint glib_micro_version; 
#line 3535 "test-linc.mc"
extern const  guint glib_interface_age; 
#line 3536 "test-linc.mc"
extern const  guint glib_binary_age; 
#line 3540 "test-linc.mc"
const  gchar *glib_check_version( guint required_major,  guint required_minor,  guint required_micro); 
#line 3552 "test-linc.mc"
typedef struct _GString GString; 
#line 3553 "test-linc.mc"
typedef struct _GStringChunk GStringChunk; 
#line 3560 "test-linc.mc"
struct _GString { gchar *str;  gsize len;  gsize allocated_len; }; 
#line 3564 "test-linc.mc"
 GStringChunk *g_string_chunk_new( gsize size); 
#line 3565 "test-linc.mc"
void g_string_chunk_free( GStringChunk *chunk); 
#line 3567 "test-linc.mc"
 gchar *g_string_chunk_insert( GStringChunk *chunk, const  gchar *string); 
#line 3570 "test-linc.mc"
 gchar *g_string_chunk_insert_len( GStringChunk *chunk, const  gchar *string,  gssize len); 
#line 3572 "test-linc.mc"
 gchar *g_string_chunk_insert_const( GStringChunk *chunk, const  gchar *string); 
#line 3577 "test-linc.mc"
 GString *g_string_new(const  gchar *init); 
#line 3579 "test-linc.mc"
 GString *g_string_new_len(const  gchar *init,  gssize len); 
#line 3580 "test-linc.mc"
 GString *g_string_sized_new( gsize dfl_size); 
#line 3582 "test-linc.mc"
 gchar *g_string_free( GString *string,  gboolean free_segment); 
#line 3584 "test-linc.mc"
 gboolean g_string_equal(const  GString *v, const  GString *v2); 
#line 3585 "test-linc.mc"
 guint g_string_hash(const  GString *str); 
#line 3587 "test-linc.mc"
 GString *g_string_assign( GString *string, const  gchar *rval); 
#line 3589 "test-linc.mc"
 GString *g_string_truncate( GString *string,  gsize len); 
#line 3591 "test-linc.mc"
 GString *g_string_set_size( GString *string,  gsize len); 
#line 3595 "test-linc.mc"
 GString *g_string_insert_len( GString *string,  gssize pos, const  gchar *val,  gssize len); 
#line 3597 "test-linc.mc"
 GString *g_string_append( GString *string, const  gchar *val); 
#line 3600 "test-linc.mc"
 GString *g_string_append_len( GString *string, const  gchar *val,  gssize len); 
#line 3602 "test-linc.mc"
 GString *g_string_append_c( GString *string,  gchar c); 
#line 3604 "test-linc.mc"
 GString *g_string_append_unichar( GString *string,  gunichar wc); 
#line 3606 "test-linc.mc"
 GString *g_string_prepend( GString *string, const  gchar *val); 
#line 3608 "test-linc.mc"
 GString *g_string_prepend_c( GString *string,  gchar c); 
#line 3610 "test-linc.mc"
 GString *g_string_prepend_unichar( GString *string,  gunichar wc); 
#line 3613 "test-linc.mc"
 GString *g_string_prepend_len( GString *string, const  gchar *val,  gssize len); 
#line 3616 "test-linc.mc"
 GString *g_string_insert( GString *string,  gssize pos, const  gchar *val); 
#line 3619 "test-linc.mc"
 GString *g_string_insert_c( GString *string,  gssize pos,  gchar c); 
#line 3622 "test-linc.mc"
 GString *g_string_insert_unichar( GString *string,  gssize pos,  gunichar wc); 
#line 3625 "test-linc.mc"
 GString *g_string_erase( GString *string,  gssize pos,  gssize len); 
#line 3626 "test-linc.mc"
 GString *g_string_ascii_down( GString *string); 
#line 3627 "test-linc.mc"
 GString *g_string_ascii_up( GString *string); 
#line 3630 "test-linc.mc"
void g_string_printf( GString *string, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 3633 "test-linc.mc"
void g_string_append_printf( GString *string, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 3640 "test-linc.mc"
static inline  GString *g_string_append_c_inline( GString *gstring,  gchar c)  {

#line 3647 "test-linc.mc"
if ((gstring->len) + 1 < (gstring->allocated_len)){
{ 
#line 3643 "test-linc.mc"
(gstring->str)[(gstring->len)++] = c; 
#line 3644 "test-linc.mc"
(gstring->str)[(gstring->len)] = 0; } }else{
g_string_insert_c(gstring, (-1), c); }
#line 3648 "test-linc.mc"
return gstring; }
 
#line 3650 "test-linc.mc"
 GString *g_string_down( GString *string); 
#line 3651 "test-linc.mc"
 GString *g_string_up( GString *string); 
#line 3666 "test-linc.mc"
typedef struct _GIOChannel GIOChannel; 
#line 3667 "test-linc.mc"
typedef struct _GIOFuncs GIOFuncs; 
#line 3675 "test-linc.mc"
typedef enum {G_IO_ERROR_NONE,G_IO_ERROR_AGAIN,G_IO_ERROR_INVAL,G_IO_ERROR_UNKNOWN}GIOError; 
#line 3692 "test-linc.mc"
typedef enum {G_IO_CHANNEL_ERROR_FBIG,G_IO_CHANNEL_ERROR_INVAL,G_IO_CHANNEL_ERROR_IO,G_IO_CHANNEL_ERROR_ISDIR,G_IO_CHANNEL_ERROR_NOSPC,G_IO_CHANNEL_ERROR_NXIO,G_IO_CHANNEL_ERROR_OVERFLOW,G_IO_CHANNEL_ERROR_PIPE,G_IO_CHANNEL_ERROR_FAILED}GIOChannelError; 
#line 3700 "test-linc.mc"
typedef enum {G_IO_STATUS_ERROR,G_IO_STATUS_NORMAL,G_IO_STATUS_EOF,G_IO_STATUS_AGAIN}GIOStatus; 
#line 3707 "test-linc.mc"
typedef enum {G_SEEK_CUR,G_SEEK_SET,G_SEEK_END}GSeekType; 
#line 3717 "test-linc.mc"
typedef enum {G_IO_IN=1,G_IO_OUT=4,G_IO_PRI=2,G_IO_ERR=8,G_IO_HUP=16,G_IO_NVAL=32}GIOCondition; 
#line 3729 "test-linc.mc"
typedef enum {G_IO_FLAG_APPEND=1 << 0,G_IO_FLAG_NONBLOCK=1 << 1,G_IO_FLAG_IS_READABLE=1 << 2,G_IO_FLAG_IS_WRITEABLE=1 << 3,G_IO_FLAG_IS_SEEKABLE=1 << 4,G_IO_FLAG_MASK=(1 << 5) - 1,G_IO_FLAG_GET_MASK=G_IO_FLAG_MASK,G_IO_FLAG_SET_MASK=G_IO_FLAG_APPEND | G_IO_FLAG_NONBLOCK}GIOFlags; 
#line 3760 "test-linc.mc"
struct _GIOChannel { guint ref_count;  GIOFuncs *funcs;  gchar *encoding;  GIConv read_cd;  GIConv write_cd;  gchar *line_term;  guint line_term_len;  gsize buf_size;  GString *read_buf;  GString *encoded_read_buf;  GString *write_buf;  gchar partial_write_buf[6];  guint use_buffer:1;  guint do_encode:1;  guint close_on_unref:1;  guint is_readable:1;  guint is_writeable:1;  guint is_seekable:1;  gpointer reserved1;  gpointer reserved2; }; 
#line 3764 "test-linc.mc"
typedef  gboolean (*GIOFunc)( GIOChannel *source,  GIOCondition condition,  gpointer data); 
#line 3790 "test-linc.mc"
struct _GIOFuncs { GIOStatus (*io_read)( GIOChannel *channel,  gchar *buf,  gsize count,  gsize *bytes_read,  GError **err);  GIOStatus (*io_write)( GIOChannel *channel, const  gchar *buf,  gsize count,  gsize *bytes_written,  GError **err);  GIOStatus (*io_seek)( GIOChannel *channel,  gint64 offset,  GSeekType type,  GError **err);  GIOStatus (*io_close)( GIOChannel *channel,  GError **err);  GSource *(*io_create_watch)( GIOChannel *channel,  GIOCondition condition); void (*io_free)( GIOChannel *channel);  GIOStatus (*io_set_flags)( GIOChannel *channel,  GIOFlags flags,  GError **err);  GIOFlags (*io_get_flags)( GIOChannel *channel); }; 
#line 3792 "test-linc.mc"
void g_io_channel_init( GIOChannel *channel); 
#line 3793 "test-linc.mc"
 GIOChannel *g_io_channel_ref( GIOChannel *channel); 
#line 3794 "test-linc.mc"
void g_io_channel_unref( GIOChannel *channel); 
#line 3800 "test-linc.mc"
 GIOError g_io_channel_read( GIOChannel *channel,  gchar *buf,  gsize count,  gsize *bytes_read); 
#line 3804 "test-linc.mc"
 GIOError g_io_channel_write( GIOChannel *channel, const  gchar *buf,  gsize count,  gsize *bytes_written); 
#line 3807 "test-linc.mc"
 GIOError g_io_channel_seek( GIOChannel *channel,  gint64 offset,  GSeekType type); 
#line 3808 "test-linc.mc"
void g_io_channel_close( GIOChannel *channel); 
#line 3813 "test-linc.mc"
 GIOStatus g_io_channel_shutdown( GIOChannel *channel,  gboolean flush,  GError **err); 
#line 3819 "test-linc.mc"
 guint g_io_add_watch_full( GIOChannel *channel,  gint priority,  GIOCondition condition,  GIOFunc func,  gpointer user_data,  GDestroyNotify notify); 
#line 3821 "test-linc.mc"
 GSource *g_io_create_watch( GIOChannel *channel,  GIOCondition condition); 
#line 3825 "test-linc.mc"
 guint g_io_add_watch( GIOChannel *channel,  GIOCondition condition,  GIOFunc func,  gpointer user_data); 
#line 3831 "test-linc.mc"
void g_io_channel_set_buffer_size( GIOChannel *channel,  gsize size); 
#line 3832 "test-linc.mc"
 gsize g_io_channel_get_buffer_size( GIOChannel *channel); 
#line 3833 "test-linc.mc"
 GIOCondition g_io_channel_get_buffer_condition( GIOChannel *channel); 
#line 3836 "test-linc.mc"
 GIOStatus g_io_channel_set_flags( GIOChannel *channel,  GIOFlags flags,  GError **error); 
#line 3837 "test-linc.mc"
 GIOFlags g_io_channel_get_flags( GIOChannel *channel); 
#line 3840 "test-linc.mc"
void g_io_channel_set_line_term( GIOChannel *channel, const  gchar *line_term,  gint length); 
#line 3842 "test-linc.mc"
const  gchar *g_io_channel_get_line_term( GIOChannel *channel,  gint *length); 
#line 3844 "test-linc.mc"
void g_io_channel_set_buffered( GIOChannel *channel,  gboolean buffered); 
#line 3845 "test-linc.mc"
 gboolean g_io_channel_get_buffered( GIOChannel *channel); 
#line 3848 "test-linc.mc"
 GIOStatus g_io_channel_set_encoding( GIOChannel *channel, const  gchar *encoding,  GError **error); 
#line 3849 "test-linc.mc"
const  gchar *g_io_channel_get_encoding( GIOChannel *channel); 
#line 3851 "test-linc.mc"
void g_io_channel_set_close_on_unref( GIOChannel *channel,  gboolean do_close); 
#line 3852 "test-linc.mc"
 gboolean g_io_channel_get_close_on_unref( GIOChannel *channel); 
#line 3856 "test-linc.mc"
 GIOStatus g_io_channel_flush( GIOChannel *channel,  GError **error); 
#line 3861 "test-linc.mc"
 GIOStatus g_io_channel_read_line( GIOChannel *channel,  gchar **str_return,  gsize *length,  gsize *terminator_pos,  GError **error); 
#line 3865 "test-linc.mc"
 GIOStatus g_io_channel_read_line_string( GIOChannel *channel,  GString *buffer,  gsize *terminator_pos,  GError **error); 
#line 3869 "test-linc.mc"
 GIOStatus g_io_channel_read_to_end( GIOChannel *channel,  gchar **str_return,  gsize *length,  GError **error); 
#line 3874 "test-linc.mc"
 GIOStatus g_io_channel_read_chars( GIOChannel *channel,  gchar *buf,  gsize count,  gsize *bytes_read,  GError **error); 
#line 3877 "test-linc.mc"
 GIOStatus g_io_channel_read_unichar( GIOChannel *channel,  gunichar *thechar,  GError **error); 
#line 3882 "test-linc.mc"
 GIOStatus g_io_channel_write_chars( GIOChannel *channel, const  gchar *buf,  gssize count,  gsize *bytes_written,  GError **error); 
#line 3885 "test-linc.mc"
 GIOStatus g_io_channel_write_unichar( GIOChannel *channel,  gunichar thechar,  GError **error); 
#line 3889 "test-linc.mc"
 GIOStatus g_io_channel_seek_position( GIOChannel *channel,  gint64 offset,  GSeekType type,  GError **error); 
#line 3896 "test-linc.mc"
 GIOChannel *g_io_channel_new_file(const  gchar *filename, const  gchar *mode,  GError **error); 
#line 3900 "test-linc.mc"
 GQuark g_io_channel_error_quark(void ); 
#line 3901 "test-linc.mc"
 GIOChannelError g_io_channel_error_from_errno( gint en); 
#line 3902 "test-linc.mc"
 GIOChannel *g_io_channel_unix_new(int fd); 
#line 3903 "test-linc.mc"
 gint g_io_channel_unix_get_fd( GIOChannel *channel); 
#line 3907 "test-linc.mc"
extern  GSourceFuncs g_io_watch_funcs; 
#line 3919 "test-linc.mc"
typedef enum {G_KEY_FILE_ERROR_UNKNOWN_ENCODING,G_KEY_FILE_ERROR_PARSE,G_KEY_FILE_ERROR_NOT_FOUND,G_KEY_FILE_ERROR_KEY_NOT_FOUND,G_KEY_FILE_ERROR_GROUP_NOT_FOUND,G_KEY_FILE_ERROR_INVALID_VALUE}GKeyFileError; 
#line 3923 "test-linc.mc"
 GQuark g_key_file_error_quark(void ); 
#line 3925 "test-linc.mc"
typedef struct _GKeyFile GKeyFile; 
#line 3932 "test-linc.mc"
typedef enum {G_KEY_FILE_NONE=0,G_KEY_FILE_KEEP_COMMENTS=1 << 0,G_KEY_FILE_KEEP_TRANSLATIONS=1 << 1}GKeyFileFlags; 
#line 3934 "test-linc.mc"
 GKeyFile *g_key_file_new(void ); 
#line 3935 "test-linc.mc"
void g_key_file_free( GKeyFile *key_file); 
#line 3937 "test-linc.mc"
void g_key_file_set_list_separator( GKeyFile *key_file,  gchar separator); 
#line 3941 "test-linc.mc"
 gboolean g_key_file_load_from_file( GKeyFile *key_file, const  gchar *file,  GKeyFileFlags flags,  GError **error); 
#line 3946 "test-linc.mc"
 gboolean g_key_file_load_from_data( GKeyFile *key_file, const  gchar *data,  gsize length,  GKeyFileFlags flags,  GError **error); 
#line 3951 "test-linc.mc"
 gboolean g_key_file_load_from_data_dirs( GKeyFile *key_file, const  gchar *file,  gchar **full_path,  GKeyFileFlags flags,  GError **error); 
#line 3954 "test-linc.mc"
 gchar *g_key_file_to_data( GKeyFile *key_file,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3955 "test-linc.mc"
 gchar *g_key_file_get_start_group( GKeyFile *key_file) __attribute__  (( __malloc__ )) ; 
#line 3957 "test-linc.mc"
 gchar **g_key_file_get_groups( GKeyFile *key_file,  gsize *length) __attribute__  (( __malloc__ )) ; 
#line 3961 "test-linc.mc"
 gchar **g_key_file_get_keys( GKeyFile *key_file, const  gchar *group_name,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3963 "test-linc.mc"
 gboolean g_key_file_has_group( GKeyFile *key_file, const  gchar *group_name); 
#line 3967 "test-linc.mc"
 gboolean g_key_file_has_key( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 3971 "test-linc.mc"
 gchar *g_key_file_get_value( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3975 "test-linc.mc"
void g_key_file_set_value( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *value); 
#line 3979 "test-linc.mc"
 gchar *g_key_file_get_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3983 "test-linc.mc"
void g_key_file_set_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *string); 
#line 3988 "test-linc.mc"
 gchar *g_key_file_get_locale_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3993 "test-linc.mc"
void g_key_file_set_locale_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale, const  gchar *string); 
#line 3997 "test-linc.mc"
 gboolean g_key_file_get_boolean( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 4001 "test-linc.mc"
void g_key_file_set_boolean( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gboolean value); 
#line 4005 "test-linc.mc"
 gint g_key_file_get_integer( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 4009 "test-linc.mc"
void g_key_file_set_integer( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gint value); 
#line 4014 "test-linc.mc"
 gchar **g_key_file_get_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 4019 "test-linc.mc"
void g_key_file_set_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *const list[],  gsize length); 
#line 4025 "test-linc.mc"
 gchar **g_key_file_get_locale_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 4031 "test-linc.mc"
void g_key_file_set_locale_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale, const  gchar *const list[],  gsize length); 
#line 4036 "test-linc.mc"
 gboolean *g_key_file_get_boolean_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 4041 "test-linc.mc"
void g_key_file_set_boolean_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gboolean list[],  gsize length); 
#line 4046 "test-linc.mc"
 gint *g_key_file_get_integer_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 4051 "test-linc.mc"
void g_key_file_set_integer_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gint list[],  gsize length); 
#line 4056 "test-linc.mc"
void g_key_file_set_comment( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *comment,  GError **error); 
#line 4060 "test-linc.mc"
 gchar *g_key_file_get_comment( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 4065 "test-linc.mc"
void g_key_file_remove_comment( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 4069 "test-linc.mc"
void g_key_file_remove_key( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 4072 "test-linc.mc"
void g_key_file_remove_group( GKeyFile *key_file, const  gchar *group_name,  GError **error); 
#line 4080 "test-linc.mc"
typedef struct _GMappedFile GMappedFile; 
#line 4084 "test-linc.mc"
 GMappedFile *g_mapped_file_new(const  gchar *filename,  gboolean writable,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 4085 "test-linc.mc"
 gsize g_mapped_file_get_length( GMappedFile *file); 
#line 4086 "test-linc.mc"
 gchar *g_mapped_file_get_contents( GMappedFile *file); 
#line 4087 "test-linc.mc"
void g_mapped_file_free( GMappedFile *file); 
#line 4103 "test-linc.mc"
typedef enum {G_MARKUP_ERROR_BAD_UTF8,G_MARKUP_ERROR_EMPTY,G_MARKUP_ERROR_PARSE,G_MARKUP_ERROR_UNKNOWN_ELEMENT,G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,G_MARKUP_ERROR_INVALID_CONTENT}GMarkupError; 
#line 4107 "test-linc.mc"
 GQuark g_markup_error_quark(void ); 
#line 4114 "test-linc.mc"
typedef enum {G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG=1 << 0}GMarkupParseFlags; 
#line 4116 "test-linc.mc"
typedef struct _GMarkupParseContext GMarkupParseContext; 
#line 4117 "test-linc.mc"
typedef struct _GMarkupParser GMarkupParser; 
#line 4160 "test-linc.mc"
struct _GMarkupParser {void (*start_element)( GMarkupParseContext *context, const  gchar *element_name, const  gchar **attribute_names, const  gchar **attribute_values,  gpointer user_data,  GError **error); void (*end_element)( GMarkupParseContext *context, const  gchar *element_name,  gpointer user_data,  GError **error); void (*text)( GMarkupParseContext *context, const  gchar *text,  gsize text_len,  gpointer user_data,  GError **error); void (*passthrough)( GMarkupParseContext *context, const  gchar *passthrough_text,  gsize text_len,  gpointer user_data,  GError **error); void (*error)( GMarkupParseContext *context,  GError *error,  gpointer user_data); }; 
#line 4165 "test-linc.mc"
 GMarkupParseContext *g_markup_parse_context_new(const  GMarkupParser *parser,  GMarkupParseFlags flags,  gpointer user_data,  GDestroyNotify user_data_dnotify); 
#line 4166 "test-linc.mc"
void g_markup_parse_context_free( GMarkupParseContext *context); 
#line 4170 "test-linc.mc"
 gboolean g_markup_parse_context_parse( GMarkupParseContext *context, const  gchar *text,  gssize text_len,  GError **error); 
#line 4173 "test-linc.mc"
 gboolean g_markup_parse_context_end_parse( GMarkupParseContext *context,  GError **error); 
#line 4174 "test-linc.mc"
const  gchar *g_markup_parse_context_get_element( GMarkupParseContext *context); 
#line 4179 "test-linc.mc"
void g_markup_parse_context_get_position( GMarkupParseContext *context,  gint *line_number,  gint *char_number); 
#line 4183 "test-linc.mc"
 gchar *g_markup_escape_text(const  gchar *text,  gssize length); 
#line 4186 "test-linc.mc"
 gchar *g_markup_printf_escaped(const char *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 4188 "test-linc.mc"
 gchar *g_markup_vprintf_escaped(const char *format,  va_list args); 
#line 4200 "test-linc.mc"
 gsize g_printf_string_upper_bound(const  gchar *format,  va_list args); 
#line 4216 "test-linc.mc"
typedef enum {G_LOG_FLAG_RECURSION=1 << 0,G_LOG_FLAG_FATAL=1 << 1,G_LOG_LEVEL_ERROR=1 << 2,G_LOG_LEVEL_CRITICAL=1 << 3,G_LOG_LEVEL_WARNING=1 << 4,G_LOG_LEVEL_MESSAGE=1 << 5,G_LOG_LEVEL_INFO=1 << 6,G_LOG_LEVEL_DEBUG=1 << 7,G_LOG_LEVEL_MASK=(~(G_LOG_FLAG_RECURSION | G_LOG_FLAG_FATAL))}GLogLevelFlags; 
#line 4224 "test-linc.mc"
typedef void (*GLogFunc)(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *message,  gpointer user_data); 
#line 4231 "test-linc.mc"
 guint g_log_set_handler(const  gchar *log_domain,  GLogLevelFlags log_levels,  GLogFunc log_func,  gpointer user_data); 
#line 4233 "test-linc.mc"
void g_log_remove_handler(const  gchar *log_domain,  guint handler_id); 
#line 4237 "test-linc.mc"
void g_log_default_handler(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *message,  gpointer unused_data); 
#line 4239 "test-linc.mc"
 GLogFunc g_log_set_default_handler( GLogFunc log_func,  gpointer user_data); 
#line 4243 "test-linc.mc"
void g_log(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 4247 "test-linc.mc"
void g_logv(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *format,  va_list args); 
#line 4249 "test-linc.mc"
 GLogLevelFlags g_log_set_fatal_mask(const  gchar *log_domain,  GLogLevelFlags fatal_mask); 
#line 4250 "test-linc.mc"
 GLogLevelFlags g_log_set_always_fatal( GLogLevelFlags fatal_mask); 
#line 4256 "test-linc.mc"
void _g_log_fallback_handler(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *message,  gpointer unused_data) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4261 "test-linc.mc"
void g_return_if_fail_warning(const char *log_domain, const char *pretty_function, const char *expression); 
#line 4266 "test-linc.mc"
void g_assert_warning(const char *log_domain, const char *file, const int line, const char *pretty_function, const char *expression) __attribute__  (( __noreturn__ )) ; 
#line 4267 "test-linc.mc"
typedef void (*GPrintFunc)(const  gchar *string); 
#line 4269 "test-linc.mc"
void g_print(const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 4270 "test-linc.mc"
 GPrintFunc g_set_print_handler( GPrintFunc func); 
#line 4272 "test-linc.mc"
void g_printerr(const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 4273 "test-linc.mc"
 GPrintFunc g_set_printerr_handler( GPrintFunc func); 
#line 4277 "test-linc.mc"
typedef struct _GNode GNode; 
#line 4288 "test-linc.mc"
typedef enum {G_TRAVERSE_LEAVES=1 << 0,G_TRAVERSE_NON_LEAVES=1 << 1,G_TRAVERSE_ALL=G_TRAVERSE_LEAVES | G_TRAVERSE_NON_LEAVES,G_TRAVERSE_MASK=0x03,G_TRAVERSE_LEAFS=G_TRAVERSE_LEAVES,G_TRAVERSE_NON_LEAFS=G_TRAVERSE_NON_LEAVES}GTraverseFlags; 
#line 4297 "test-linc.mc"
typedef enum {G_IN_ORDER,G_PRE_ORDER,G_POST_ORDER,G_LEVEL_ORDER}GTraverseType; 
#line 4300 "test-linc.mc"
typedef  gboolean (*GNodeTraverseFunc)( GNode *node,  gpointer data); 
#line 4302 "test-linc.mc"
typedef void (*GNodeForeachFunc)( GNode *node,  gpointer data); 
#line 4304 "test-linc.mc"
typedef  gpointer (*GCopyFunc)( gconstpointer src,  gpointer data); 
#line 4315 "test-linc.mc"
struct _GNode { gpointer data;  GNode *next;  GNode *prev;  GNode *parent;  GNode *children; }; 
#line 4322 "test-linc.mc"
 GNode *g_node_new( gpointer data); 
#line 4323 "test-linc.mc"
void g_node_destroy( GNode *root); 
#line 4324 "test-linc.mc"
void g_node_unlink( GNode *node); 
#line 4327 "test-linc.mc"
 GNode *g_node_copy_deep( GNode *node,  GCopyFunc copy_func,  gpointer data); 
#line 4328 "test-linc.mc"
 GNode *g_node_copy( GNode *node); 
#line 4331 "test-linc.mc"
 GNode *g_node_insert( GNode *parent,  gint position,  GNode *node); 
#line 4334 "test-linc.mc"
 GNode *g_node_insert_before( GNode *parent,  GNode *sibling,  GNode *node); 
#line 4337 "test-linc.mc"
 GNode *g_node_insert_after( GNode *parent,  GNode *sibling,  GNode *node); 
#line 4339 "test-linc.mc"
 GNode *g_node_prepend( GNode *parent,  GNode *node); 
#line 4341 "test-linc.mc"
 guint g_node_n_nodes( GNode *root,  GTraverseFlags flags); 
#line 4342 "test-linc.mc"
 GNode *g_node_get_root( GNode *node); 
#line 4344 "test-linc.mc"
 gboolean g_node_is_ancestor( GNode *node,  GNode *descendant); 
#line 4345 "test-linc.mc"
 guint g_node_depth( GNode *node); 
#line 4349 "test-linc.mc"
 GNode *g_node_find( GNode *root,  GTraverseType order,  GTraverseFlags flags,  gpointer data); 
#line 4355 "test-linc.mc"
void g_node_traverse( GNode *root,  GTraverseType order,  GTraverseFlags flags,  gint max_depth,  GNodeTraverseFunc func,  gpointer data); 
#line 4362 "test-linc.mc"
 guint g_node_max_height( GNode *root); 
#line 4367 "test-linc.mc"
void g_node_children_foreach( GNode *node,  GTraverseFlags flags,  GNodeForeachFunc func,  gpointer data); 
#line 4368 "test-linc.mc"
void g_node_reverse_children( GNode *node); 
#line 4369 "test-linc.mc"
 guint g_node_n_children( GNode *node); 
#line 4371 "test-linc.mc"
 GNode *g_node_nth_child( GNode *node,  guint n); 
#line 4372 "test-linc.mc"
 GNode *g_node_last_child( GNode *node); 
#line 4375 "test-linc.mc"
 GNode *g_node_find_child( GNode *node,  GTraverseFlags flags,  gpointer data); 
#line 4377 "test-linc.mc"
 gint g_node_child_position( GNode *node,  GNode *child); 
#line 4379 "test-linc.mc"
 gint g_node_child_index( GNode *node,  gpointer data); 
#line 4381 "test-linc.mc"
 GNode *g_node_first_sibling( GNode *node); 
#line 4382 "test-linc.mc"
 GNode *g_node_last_sibling( GNode *node); 
#line 4383 "test-linc.mc"
void g_node_push_allocator( gpointer dummy); 
#line 4384 "test-linc.mc"
void g_node_pop_allocator(void ); 
#line 4389 "test-linc.mc"
typedef struct _GOptionContext GOptionContext; 
#line 4390 "test-linc.mc"
typedef struct _GOptionGroup GOptionGroup; 
#line 4391 "test-linc.mc"
typedef struct _GOptionEntry GOptionEntry; 
#line 4402 "test-linc.mc"
typedef enum {G_OPTION_FLAG_HIDDEN=1 << 0,G_OPTION_FLAG_IN_MAIN=1 << 1,G_OPTION_FLAG_REVERSE=1 << 2,G_OPTION_FLAG_NO_ARG=1 << 3,G_OPTION_FLAG_FILENAME=1 << 4,G_OPTION_FLAG_OPTIONAL_ARG=1 << 5,G_OPTION_FLAG_NOALIAS=1 << 6}GOptionFlags; 
#line 4413 "test-linc.mc"
typedef enum {G_OPTION_ARG_NONE,G_OPTION_ARG_STRING,G_OPTION_ARG_INT,G_OPTION_ARG_CALLBACK,G_OPTION_ARG_FILENAME,G_OPTION_ARG_STRING_ARRAY,G_OPTION_ARG_FILENAME_ARRAY}GOptionArg; 
#line 4418 "test-linc.mc"
typedef  gboolean (*GOptionArgFunc)(const  gchar *option_name, const  gchar *value,  gpointer data,  GError **error); 
#line 4423 "test-linc.mc"
typedef  gboolean (*GOptionParseFunc)( GOptionContext *context,  GOptionGroup *group,  gpointer data,  GError **error); 
#line 4428 "test-linc.mc"
typedef void (*GOptionErrorFunc)( GOptionContext *context,  GOptionGroup *group,  gpointer data,  GError **error); 
#line 4437 "test-linc.mc"
typedef enum {G_OPTION_ERROR_UNKNOWN_OPTION,G_OPTION_ERROR_BAD_VALUE,G_OPTION_ERROR_FAILED}GOptionError; 
#line 4439 "test-linc.mc"
 GQuark g_option_error_quark(void ); 
#line 4453 "test-linc.mc"
struct _GOptionEntry {const  gchar *long_name;  gchar short_name;  gint flags;  GOptionArg arg;  gpointer arg_data; const  gchar *description; const  gchar *arg_description; }; 
#line 4457 "test-linc.mc"
 GOptionContext *g_option_context_new(const  gchar *parameter_string); 
#line 4458 "test-linc.mc"
void g_option_context_free( GOptionContext *context); 
#line 4460 "test-linc.mc"
void g_option_context_set_help_enabled( GOptionContext *context,  gboolean help_enabled); 
#line 4461 "test-linc.mc"
 gboolean g_option_context_get_help_enabled( GOptionContext *context); 
#line 4463 "test-linc.mc"
void g_option_context_set_ignore_unknown_options( GOptionContext *context,  gboolean ignore_unknown); 
#line 4464 "test-linc.mc"
 gboolean g_option_context_get_ignore_unknown_options( GOptionContext *context); 
#line 4468 "test-linc.mc"
void g_option_context_add_main_entries( GOptionContext *context, const  GOptionEntry *entries, const  gchar *translation_domain); 
#line 4472 "test-linc.mc"
 gboolean g_option_context_parse( GOptionContext *context,  gint *argc,  gchar ***argv,  GError **error); 
#line 4475 "test-linc.mc"
void g_option_context_add_group( GOptionContext *context,  GOptionGroup *group); 
#line 4477 "test-linc.mc"
void g_option_context_set_main_group( GOptionContext *context,  GOptionGroup *group); 
#line 4478 "test-linc.mc"
 GOptionGroup *g_option_context_get_main_group( GOptionContext *context); 
#line 4485 "test-linc.mc"
 GOptionGroup *g_option_group_new(const  gchar *name, const  gchar *description, const  gchar *help_description,  gpointer user_data,  GDestroyNotify destroy); 
#line 4488 "test-linc.mc"
void g_option_group_set_parse_hooks( GOptionGroup *group,  GOptionParseFunc pre_parse_func,  GOptionParseFunc post_parse_func); 
#line 4490 "test-linc.mc"
void g_option_group_set_error_hook( GOptionGroup *group,  GOptionErrorFunc error_func); 
#line 4491 "test-linc.mc"
void g_option_group_free( GOptionGroup *group); 
#line 4493 "test-linc.mc"
void g_option_group_add_entries( GOptionGroup *group, const  GOptionEntry *entries); 
#line 4497 "test-linc.mc"
void g_option_group_set_translate_func( GOptionGroup *group,  GTranslateFunc func,  gpointer data,  GDestroyNotify destroy_notify); 
#line 4499 "test-linc.mc"
void g_option_group_set_translation_domain( GOptionGroup *group, const  gchar *domain); 
#line 4506 "test-linc.mc"
typedef struct _GPatternSpec GPatternSpec; 
#line 4508 "test-linc.mc"
 GPatternSpec *g_pattern_spec_new(const  gchar *pattern); 
#line 4509 "test-linc.mc"
void g_pattern_spec_free( GPatternSpec *pspec); 
#line 4511 "test-linc.mc"
 gboolean g_pattern_spec_equal( GPatternSpec *pspec1,  GPatternSpec *pspec2); 
#line 4515 "test-linc.mc"
 gboolean g_pattern_match( GPatternSpec *pspec,  guint string_length, const  gchar *string, const  gchar *string_reversed); 
#line 4517 "test-linc.mc"
 gboolean g_pattern_match_string( GPatternSpec *pspec, const  gchar *string); 
#line 4519 "test-linc.mc"
 gboolean g_pattern_match_simple(const  gchar *pattern, const  gchar *string); 
#line 4523 "test-linc.mc"
 guint g_spaced_primes_closest( guint num) __attribute__  (( __const__ )) ; 
#line 4532 "test-linc.mc"
void g_qsort_with_data( gconstpointer pbase,  gint total_elems,  gsize size,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 4538 "test-linc.mc"
typedef struct _GQueue GQueue; 
#line 4545 "test-linc.mc"
struct _GQueue { GList *head;  GList *tail;  guint length; }; 
#line 4549 "test-linc.mc"
 GQueue *g_queue_new(void ); 
#line 4550 "test-linc.mc"
void g_queue_free( GQueue *queue); 
#line 4551 "test-linc.mc"
 gboolean g_queue_is_empty( GQueue *queue); 
#line 4552 "test-linc.mc"
 guint g_queue_get_length( GQueue *queue); 
#line 4553 "test-linc.mc"
void g_queue_reverse( GQueue *queue); 
#line 4554 "test-linc.mc"
 GQueue *g_queue_copy( GQueue *queue); 
#line 4557 "test-linc.mc"
void g_queue_foreach( GQueue *queue,  GFunc func,  gpointer user_data); 
#line 4559 "test-linc.mc"
 GList *g_queue_find( GQueue *queue,  gconstpointer data); 
#line 4562 "test-linc.mc"
 GList *g_queue_find_custom( GQueue *queue,  gconstpointer data,  GCompareFunc func); 
#line 4565 "test-linc.mc"
void g_queue_sort( GQueue *queue,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 4568 "test-linc.mc"
void g_queue_push_head( GQueue *queue,  gpointer data); 
#line 4570 "test-linc.mc"
void g_queue_push_tail( GQueue *queue,  gpointer data); 
#line 4573 "test-linc.mc"
void g_queue_push_nth( GQueue *queue,  gpointer data,  gint n); 
#line 4574 "test-linc.mc"
 gpointer g_queue_pop_head( GQueue *queue); 
#line 4575 "test-linc.mc"
 gpointer g_queue_pop_tail( GQueue *queue); 
#line 4577 "test-linc.mc"
 gpointer g_queue_pop_nth( GQueue *queue,  guint n); 
#line 4578 "test-linc.mc"
 gpointer g_queue_peek_head( GQueue *queue); 
#line 4579 "test-linc.mc"
 gpointer g_queue_peek_tail( GQueue *queue); 
#line 4581 "test-linc.mc"
 gpointer g_queue_peek_nth( GQueue *queue,  guint n); 
#line 4583 "test-linc.mc"
 gint g_queue_index( GQueue *queue,  gconstpointer data); 
#line 4585 "test-linc.mc"
void g_queue_remove( GQueue *queue,  gconstpointer data); 
#line 4587 "test-linc.mc"
void g_queue_remove_all( GQueue *queue,  gconstpointer data); 
#line 4590 "test-linc.mc"
void g_queue_insert_before( GQueue *queue,  GList *sibling,  gpointer data); 
#line 4593 "test-linc.mc"
void g_queue_insert_after( GQueue *queue,  GList *sibling,  gpointer data); 
#line 4597 "test-linc.mc"
void g_queue_insert_sorted( GQueue *queue,  gpointer data,  GCompareDataFunc func,  gpointer user_data); 
#line 4600 "test-linc.mc"
void g_queue_push_head_link( GQueue *queue,  GList *link_); 
#line 4602 "test-linc.mc"
void g_queue_push_tail_link( GQueue *queue,  GList *link_); 
#line 4605 "test-linc.mc"
void g_queue_push_nth_link( GQueue *queue,  gint n,  GList *link_); 
#line 4606 "test-linc.mc"
 GList *g_queue_pop_head_link( GQueue *queue); 
#line 4607 "test-linc.mc"
 GList *g_queue_pop_tail_link( GQueue *queue); 
#line 4609 "test-linc.mc"
 GList *g_queue_pop_nth_link( GQueue *queue,  guint n); 
#line 4610 "test-linc.mc"
 GList *g_queue_peek_head_link( GQueue *queue); 
#line 4611 "test-linc.mc"
 GList *g_queue_peek_tail_link( GQueue *queue); 
#line 4613 "test-linc.mc"
 GList *g_queue_peek_nth_link( GQueue *queue,  guint n); 
#line 4615 "test-linc.mc"
 gint g_queue_link_index( GQueue *queue,  GList *link_); 
#line 4617 "test-linc.mc"
void g_queue_unlink( GQueue *queue,  GList *link_); 
#line 4619 "test-linc.mc"
void g_queue_delete_link( GQueue *queue,  GList *link_); 
#line 4624 "test-linc.mc"
typedef struct _GRand GRand; 
#line 4625 "test-linc.mc"
 GRand *g_rand_new_with_seed( guint32 seed); 
#line 4627 "test-linc.mc"
 GRand *g_rand_new_with_seed_array(const  guint32 *seed,  guint seed_length); 
#line 4628 "test-linc.mc"
 GRand *g_rand_new(void ); 
#line 4629 "test-linc.mc"
void g_rand_free( GRand *rand_); 
#line 4630 "test-linc.mc"
 GRand *g_rand_copy( GRand *rand_); 
#line 4632 "test-linc.mc"
void g_rand_set_seed( GRand *rand_,  guint32 seed); 
#line 4635 "test-linc.mc"
void g_rand_set_seed_array( GRand *rand_, const  guint32 *seed,  guint seed_length); 
#line 4639 "test-linc.mc"
 guint32 g_rand_int( GRand *rand_); 
#line 4642 "test-linc.mc"
 gint32 g_rand_int_range( GRand *rand_,  gint32 begin,  gint32 end); 
#line 4643 "test-linc.mc"
 gdouble g_rand_double( GRand *rand_); 
#line 4646 "test-linc.mc"
 gdouble g_rand_double_range( GRand *rand_,  gdouble begin,  gdouble end); 
#line 4647 "test-linc.mc"
void g_random_set_seed( guint32 seed); 
#line 4651 "test-linc.mc"
 guint32 g_random_int(void ); 
#line 4653 "test-linc.mc"
 gint32 g_random_int_range( gint32 begin,  gint32 end); 
#line 4654 "test-linc.mc"
 gdouble g_random_double(void ); 
#line 4656 "test-linc.mc"
 gdouble g_random_double_range( gdouble begin,  gdouble end); 
#line 4662 "test-linc.mc"
typedef struct _GRelation GRelation; 
#line 4663 "test-linc.mc"
typedef struct _GTuples GTuples; 
#line 4668 "test-linc.mc"
struct _GTuples { guint len; }; 
#line 4669 "test-linc.mc"
 GRelation *g_relation_new( gint fields); 
#line 4670 "test-linc.mc"
void g_relation_destroy( GRelation *relation); 
#line 4674 "test-linc.mc"
void g_relation_index( GRelation *relation,  gint field,  GHashFunc hash_func,  GEqualFunc key_equal_func); 
#line 4676 "test-linc.mc"
void g_relation_insert( GRelation *relation, ...); 
#line 4679 "test-linc.mc"
 gint g_relation_delete( GRelation *relation,  gconstpointer key,  gint field); 
#line 4682 "test-linc.mc"
 GTuples *g_relation_select( GRelation *relation,  gconstpointer key,  gint field); 
#line 4685 "test-linc.mc"
 gint g_relation_count( GRelation *relation,  gconstpointer key,  gint field); 
#line 4687 "test-linc.mc"
 gboolean g_relation_exists( GRelation *relation, ...); 
#line 4688 "test-linc.mc"
void g_relation_print( GRelation *relation); 
#line 4690 "test-linc.mc"
void g_tuples_destroy( GTuples *tuples); 
#line 4693 "test-linc.mc"
 gpointer g_tuples_index( GTuples *tuples,  gint index_,  gint field); 
#line 4698 "test-linc.mc"
typedef struct _GScanner GScanner; 
#line 4699 "test-linc.mc"
typedef struct _GScannerConfig GScannerConfig; 
#line 4700 "test-linc.mc"
typedef union _GTokenValue GTokenValue; 
#line 4704 "test-linc.mc"
typedef void (*GScannerMsgFunc)( GScanner *scanner,  gchar *message,  gboolean error); 
#line 4715 "test-linc.mc"
typedef enum {G_ERR_UNKNOWN,G_ERR_UNEXP_EOF,G_ERR_UNEXP_EOF_IN_STRING,G_ERR_UNEXP_EOF_IN_COMMENT,G_ERR_NON_DIGIT_IN_CONST,G_ERR_DIGIT_RADIX,G_ERR_FLOAT_RADIX,G_ERR_FLOAT_MALFORMED}GErrorType; 
#line 4750 "test-linc.mc"
typedef enum {G_TOKEN_EOF=0,G_TOKEN_LEFT_PAREN='(',G_TOKEN_RIGHT_PAREN=')',G_TOKEN_LEFT_CURLY='{',G_TOKEN_RIGHT_CURLY='}',G_TOKEN_LEFT_BRACE='[',G_TOKEN_RIGHT_BRACE=']',G_TOKEN_EQUAL_SIGN='=',G_TOKEN_COMMA=',',G_TOKEN_NONE=256,G_TOKEN_ERROR,G_TOKEN_CHAR,G_TOKEN_BINARY,G_TOKEN_OCTAL,G_TOKEN_INT,G_TOKEN_HEX,G_TOKEN_FLOAT,G_TOKEN_STRING,G_TOKEN_SYMBOL,G_TOKEN_IDENTIFIER,G_TOKEN_IDENTIFIER_NULL,G_TOKEN_COMMENT_SINGLE,G_TOKEN_COMMENT_MULTI,G_TOKEN_LAST}GTokenType; 
#line 4766 "test-linc.mc"
union _GTokenValue { gpointer v_symbol;  gchar *v_identifier;  gulong v_binary;  gulong v_octal;  gulong v_int;  guint64 v_int64;  gdouble v_float;  gulong v_hex;  gchar *v_string;  gchar *v_comment;  guchar v_char;  guint v_error; }; 
#line 4806 "test-linc.mc"
struct _GScannerConfig { gchar *cset_skip_characters;  gchar *cset_identifier_first;  gchar *cset_identifier_nth;  gchar *cpair_comment_single;  guint case_sensitive:1;  guint skip_comment_multi:1;  guint skip_comment_single:1;  guint scan_comment_multi:1;  guint scan_identifier:1;  guint scan_identifier_1char:1;  guint scan_identifier_NULL:1;  guint scan_symbols:1;  guint scan_binary:1;  guint scan_octal:1;  guint scan_float:1;  guint scan_hex:1;  guint scan_hex_dollar:1;  guint scan_string_sq:1;  guint scan_string_dq:1;  guint numbers_2_int:1;  guint int_2_float:1;  guint identifier_2_string:1;  guint char_2_token:1;  guint symbol_2_token:1;  guint scope_0_fallback:1;  guint store_int64:1;  guint padding_dummy; }; 
#line 4848 "test-linc.mc"
struct _GScanner { gpointer user_data;  guint max_parse_errors;  guint parse_errors; const  gchar *input_name;  GData *qdata;  GScannerConfig *config;  GTokenType token;  GTokenValue value;  guint line;  guint position;  GTokenType next_token;  GTokenValue next_value;  guint next_line;  guint next_position;  GHashTable *symbol_table;  gint input_fd; const  gchar *text; const  gchar *text_end;  gchar *buffer;  guint scope_id;  GScannerMsgFunc msg_handler; }; 
#line 4850 "test-linc.mc"
 GScanner *g_scanner_new(const  GScannerConfig *config_templ); 
#line 4851 "test-linc.mc"
void g_scanner_destroy( GScanner *scanner); 
#line 4853 "test-linc.mc"
void g_scanner_input_file( GScanner *scanner,  gint input_fd); 
#line 4854 "test-linc.mc"
void g_scanner_sync_file_offset( GScanner *scanner); 
#line 4857 "test-linc.mc"
void g_scanner_input_text( GScanner *scanner, const  gchar *text,  guint text_len); 
#line 4858 "test-linc.mc"
 GTokenType g_scanner_get_next_token( GScanner *scanner); 
#line 4859 "test-linc.mc"
 GTokenType g_scanner_peek_next_token( GScanner *scanner); 
#line 4860 "test-linc.mc"
 GTokenType g_scanner_cur_token( GScanner *scanner); 
#line 4861 "test-linc.mc"
 GTokenValue g_scanner_cur_value( GScanner *scanner); 
#line 4862 "test-linc.mc"
 guint g_scanner_cur_line( GScanner *scanner); 
#line 4863 "test-linc.mc"
 guint g_scanner_cur_position( GScanner *scanner); 
#line 4864 "test-linc.mc"
 gboolean g_scanner_eof( GScanner *scanner); 
#line 4866 "test-linc.mc"
 guint g_scanner_set_scope( GScanner *scanner,  guint scope_id); 
#line 4870 "test-linc.mc"
void g_scanner_scope_add_symbol( GScanner *scanner,  guint scope_id, const  gchar *symbol,  gpointer value); 
#line 4873 "test-linc.mc"
void g_scanner_scope_remove_symbol( GScanner *scanner,  guint scope_id, const  gchar *symbol); 
#line 4876 "test-linc.mc"
 gpointer g_scanner_scope_lookup_symbol( GScanner *scanner,  guint scope_id, const  gchar *symbol); 
#line 4880 "test-linc.mc"
void g_scanner_scope_foreach_symbol( GScanner *scanner,  guint scope_id,  GHFunc func,  gpointer user_data); 
#line 4882 "test-linc.mc"
 gpointer g_scanner_lookup_symbol( GScanner *scanner, const  gchar *symbol); 
#line 4889 "test-linc.mc"
void g_scanner_unexp_token( GScanner *scanner,  GTokenType expected_token, const  gchar *identifier_spec, const  gchar *symbol_spec, const  gchar *symbol_name, const  gchar *message,  gint is_error); 
#line 4892 "test-linc.mc"
void g_scanner_error( GScanner *scanner, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 4895 "test-linc.mc"
void g_scanner_warn( GScanner *scanner, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 4908 "test-linc.mc"
typedef enum {G_SHELL_ERROR_BAD_QUOTING,G_SHELL_ERROR_EMPTY_STRING,G_SHELL_ERROR_FAILED}GShellError; 
#line 4910 "test-linc.mc"
 GQuark g_shell_error_quark(void ); 
#line 4912 "test-linc.mc"
 gchar *g_shell_quote(const  gchar *unquoted_string); 
#line 4914 "test-linc.mc"
 gchar *g_shell_unquote(const  gchar *quoted_string,  GError **error); 
#line 4918 "test-linc.mc"
 gboolean g_shell_parse_argv(const  gchar *command_line,  gint *argcp,  gchar ***argvp,  GError **error); 
#line 4951 "test-linc.mc"
typedef enum {G_SPAWN_ERROR_FORK,G_SPAWN_ERROR_READ,G_SPAWN_ERROR_CHDIR,G_SPAWN_ERROR_ACCES,G_SPAWN_ERROR_PERM,G_SPAWN_ERROR_2BIG,G_SPAWN_ERROR_NOEXEC,G_SPAWN_ERROR_NAMETOOLONG,G_SPAWN_ERROR_NOENT,G_SPAWN_ERROR_NOMEM,G_SPAWN_ERROR_NOTDIR,G_SPAWN_ERROR_LOOP,G_SPAWN_ERROR_TXTBUSY,G_SPAWN_ERROR_IO,G_SPAWN_ERROR_NFILE,G_SPAWN_ERROR_MFILE,G_SPAWN_ERROR_INVAL,G_SPAWN_ERROR_ISDIR,G_SPAWN_ERROR_LIBBAD,G_SPAWN_ERROR_FAILED}GSpawnError; 
#line 4953 "test-linc.mc"
typedef void (*GSpawnChildSetupFunc)( gpointer user_data); 
#line 4966 "test-linc.mc"
typedef enum {G_SPAWN_LEAVE_DESCRIPTORS_OPEN=1 << 0,G_SPAWN_DO_NOT_REAP_CHILD=1 << 1,G_SPAWN_SEARCH_PATH=1 << 2,G_SPAWN_STDOUT_TO_DEV_NULL=1 << 3,G_SPAWN_STDERR_TO_DEV_NULL=1 << 4,G_SPAWN_CHILD_INHERITS_STDIN=1 << 5,G_SPAWN_FILE_AND_ARGV_ZERO=1 << 6}GSpawnFlags; 
#line 4968 "test-linc.mc"
 GQuark g_spawn_error_quark(void ); 
#line 4976 "test-linc.mc"
 gboolean g_spawn_async(const  gchar *working_directory,  gchar **argv,  gchar **envp,  GSpawnFlags flags,  GSpawnChildSetupFunc child_setup,  gpointer user_data,  GPid *child_pid,  GError **error); 
#line 4992 "test-linc.mc"
 gboolean g_spawn_async_with_pipes(const  gchar *working_directory,  gchar **argv,  gchar **envp,  GSpawnFlags flags,  GSpawnChildSetupFunc child_setup,  gpointer user_data,  GPid *child_pid,  gint *standard_input,  gint *standard_output,  gint *standard_error,  GError **error); 
#line 5008 "test-linc.mc"
 gboolean g_spawn_sync(const  gchar *working_directory,  gchar **argv,  gchar **envp,  GSpawnFlags flags,  GSpawnChildSetupFunc child_setup,  gpointer user_data,  gchar **standard_output,  gchar **standard_error,  gint *exit_status,  GError **error); 
#line 5014 "test-linc.mc"
 gboolean g_spawn_command_line_sync(const  gchar *command_line,  gchar **standard_output,  gchar **standard_error,  gint *exit_status,  GError **error); 
#line 5016 "test-linc.mc"
 gboolean g_spawn_command_line_async(const  gchar *command_line,  GError **error); 
#line 5018 "test-linc.mc"
void g_spawn_close_pid( GPid pid); 
#line 5037 "test-linc.mc"
typedef enum {G_ASCII_ALNUM=1 << 0,G_ASCII_ALPHA=1 << 1,G_ASCII_CNTRL=1 << 2,G_ASCII_DIGIT=1 << 3,G_ASCII_GRAPH=1 << 4,G_ASCII_LOWER=1 << 5,G_ASCII_PRINT=1 << 6,G_ASCII_PUNCT=1 << 7,G_ASCII_SPACE=1 << 8,G_ASCII_UPPER=1 << 9,G_ASCII_XDIGIT=1 << 10}GAsciiType; 
#line 5039 "test-linc.mc"
extern const  guint16 *const g_ascii_table; 
#line 5040 "test-linc.mc"
 gchar g_ascii_tolower( gchar c) __attribute__  (( __const__ )) ; 
#line 5041 "test-linc.mc"
 gchar g_ascii_toupper( gchar c) __attribute__  (( __const__ )) ; 
#line 5043 "test-linc.mc"
 gint g_ascii_digit_value( gchar c) __attribute__  (( __const__ )) ; 
#line 5044 "test-linc.mc"
 gint g_ascii_xdigit_value( gchar c) __attribute__  (( __const__ )) ; 
#line 5052 "test-linc.mc"
 gchar *g_strdelimit( gchar *string, const  gchar *delimiters,  gchar new_delimiter); 
#line 5055 "test-linc.mc"
 gchar *g_strcanon( gchar *string, const  gchar *valid_chars,  gchar substitutor); 
#line 5056 "test-linc.mc"
const  gchar *g_strerror( gint errnum) __attribute__  (( __const__ )) ; 
#line 5057 "test-linc.mc"
const  gchar *g_strsignal( gint signum) __attribute__  (( __const__ )) ; 
#line 5058 "test-linc.mc"
 gchar *g_strreverse( gchar *string); 
#line 5061 "test-linc.mc"
 gsize g_strlcpy( gchar *dest, const  gchar *src,  gsize dest_size); 
#line 5064 "test-linc.mc"
 gsize g_strlcat( gchar *dest, const  gchar *src,  gsize dest_size); 
#line 5067 "test-linc.mc"
 gchar *g_strstr_len(const  gchar *haystack,  gssize haystack_len, const  gchar *needle); 
#line 5069 "test-linc.mc"
 gchar *g_strrstr(const  gchar *haystack, const  gchar *needle); 
#line 5072 "test-linc.mc"
 gchar *g_strrstr_len(const  gchar *haystack,  gssize haystack_len, const  gchar *needle); 
#line 5075 "test-linc.mc"
 gboolean g_str_has_suffix(const  gchar *str, const  gchar *suffix); 
#line 5077 "test-linc.mc"
 gboolean g_str_has_prefix(const  gchar *str, const  gchar *prefix); 
#line 5082 "test-linc.mc"
 gdouble g_strtod(const  gchar *nptr,  gchar **endptr); 
#line 5084 "test-linc.mc"
 gdouble g_ascii_strtod(const  gchar *nptr,  gchar **endptr); 
#line 5087 "test-linc.mc"
 guint64 g_ascii_strtoull(const  gchar *nptr,  gchar **endptr,  guint base); 
#line 5094 "test-linc.mc"
 gchar *g_ascii_dtostr( gchar *buffer,  gint buf_len,  gdouble d); 
#line 5098 "test-linc.mc"
 gchar *g_ascii_formatd( gchar *buffer,  gint buf_len, const  gchar *format,  gdouble d); 
#line 5101 "test-linc.mc"
 gchar *g_strchug( gchar *string); 
#line 5103 "test-linc.mc"
 gchar *g_strchomp( gchar *string); 
#line 5108 "test-linc.mc"
 gint g_ascii_strcasecmp(const  gchar *s1, const  gchar *s2); 
#line 5111 "test-linc.mc"
 gint g_ascii_strncasecmp(const  gchar *s1, const  gchar *s2,  gsize n); 
#line 5113 "test-linc.mc"
 gchar *g_ascii_strdown(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 5115 "test-linc.mc"
 gchar *g_ascii_strup(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 5117 "test-linc.mc"
 gint g_strcasecmp(const  gchar *s1, const  gchar *s2); 
#line 5120 "test-linc.mc"
 gint g_strncasecmp(const  gchar *s1, const  gchar *s2,  guint n); 
#line 5121 "test-linc.mc"
 gchar *g_strdown( gchar *string); 
#line 5122 "test-linc.mc"
 gchar *g_strup( gchar *string); 
#line 5129 "test-linc.mc"
 gchar *g_strdup(const  gchar *str) __attribute__  (( __malloc__ )) ; 
#line 5131 "test-linc.mc"
 gchar *g_strdup_printf(const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  ))  __attribute__  (( __malloc__ )) ; 
#line 5133 "test-linc.mc"
 gchar *g_strdup_vprintf(const  gchar *format,  va_list args) __attribute__  (( __malloc__ )) ; 
#line 5135 "test-linc.mc"
 gchar *g_strndup(const  gchar *str,  gsize n) __attribute__  (( __malloc__ )) ; 
#line 5137 "test-linc.mc"
 gchar *g_strnfill( gsize length,  gchar fill_char) __attribute__  (( __malloc__ )) ; 
#line 5139 "test-linc.mc"
 gchar *g_strconcat(const  gchar *string1, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 5141 "test-linc.mc"
 gchar *g_strjoin(const  gchar *separator, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 5147 "test-linc.mc"
 gchar *g_strcompress(const  gchar *source) __attribute__  (( __malloc__ )) ; 
#line 5149 "test-linc.mc"
 gchar *g_strescape(const  gchar *source, const  gchar *exceptions) __attribute__  (( __malloc__ )) ; 
#line 5152 "test-linc.mc"
 gpointer g_memdup( gconstpointer mem,  guint byte_size) __attribute__  (( __malloc__ )) ; 
#line 5155 "test-linc.mc"
 gchar **g_strsplit(const  gchar *string, const  gchar *delimiter,  gint max_tokens) __attribute__  (( __malloc__ )) ; 
#line 5158 "test-linc.mc"
 gchar **g_strsplit_set(const  gchar *string, const  gchar *delimiters,  gint max_tokens) __attribute__  (( __malloc__ )) ; 
#line 5160 "test-linc.mc"
 gchar *g_strjoinv(const  gchar *separator,  gchar **str_array) __attribute__  (( __malloc__ )) ; 
#line 5161 "test-linc.mc"
void g_strfreev( gchar **str_array); 
#line 5162 "test-linc.mc"
 gchar **g_strdupv( gchar **str_array) __attribute__  (( __malloc__ )) ; 
#line 5163 "test-linc.mc"
 guint g_strv_length( gchar **str_array); 
#line 5166 "test-linc.mc"
 gchar *g_stpcpy( gchar *dest, const char *src); 
#line 5169 "test-linc.mc"
const  gchar *g_strip_context(const  gchar *msgid, const  gchar *msgval); 
#line 5176 "test-linc.mc"
typedef struct _GThreadPool GThreadPool; 
#line 5188 "test-linc.mc"
struct _GThreadPool { GFunc func;  gpointer user_data;  gboolean exclusive; }; 
#line 5199 "test-linc.mc"
 GThreadPool *g_thread_pool_new( GFunc func,  gpointer user_data,  gint max_threads,  gboolean exclusive,  GError **error); 
#line 5207 "test-linc.mc"
void g_thread_pool_push( GThreadPool *pool,  gpointer data,  GError **error); 
#line 5214 "test-linc.mc"
void g_thread_pool_set_max_threads( GThreadPool *pool,  gint max_threads,  GError **error); 
#line 5215 "test-linc.mc"
 gint g_thread_pool_get_max_threads( GThreadPool *pool); 
#line 5219 "test-linc.mc"
 guint g_thread_pool_get_num_threads( GThreadPool *pool); 
#line 5222 "test-linc.mc"
 guint g_thread_pool_unprocessed( GThreadPool *pool); 
#line 5230 "test-linc.mc"
void g_thread_pool_free( GThreadPool *pool,  gboolean immediate,  gboolean wait); 
#line 5234 "test-linc.mc"
void g_thread_pool_set_max_unused_threads( gint max_threads); 
#line 5235 "test-linc.mc"
 gint g_thread_pool_get_max_unused_threads(void ); 
#line 5236 "test-linc.mc"
 guint g_thread_pool_get_num_unused_threads(void ); 
#line 5239 "test-linc.mc"
void g_thread_pool_stop_unused_threads(void ); 
#line 5244 "test-linc.mc"
void g_thread_pool_set_sort_function( GThreadPool *pool,  GCompareDataFunc func,  gpointer user_data); 
#line 5247 "test-linc.mc"
void g_thread_pool_set_max_idle_time( guint interval); 
#line 5248 "test-linc.mc"
 guint g_thread_pool_get_max_idle_time(void ); 
#line 5257 "test-linc.mc"
typedef struct _GTimer GTimer; 
#line 5261 "test-linc.mc"
 GTimer *g_timer_new(void ); 
#line 5262 "test-linc.mc"
void g_timer_destroy( GTimer *timer); 
#line 5263 "test-linc.mc"
void g_timer_start( GTimer *timer); 
#line 5264 "test-linc.mc"
void g_timer_stop( GTimer *timer); 
#line 5265 "test-linc.mc"
void g_timer_reset( GTimer *timer); 
#line 5266 "test-linc.mc"
void g_timer_continue( GTimer *timer); 
#line 5268 "test-linc.mc"
 gdouble g_timer_elapsed( GTimer *timer,  gulong *microseconds); 
#line 5270 "test-linc.mc"
void g_usleep( gulong microseconds); 
#line 5273 "test-linc.mc"
void g_time_val_add( GTimeVal *time_,  glong microseconds); 
#line 5278 "test-linc.mc"
typedef struct _GTree GTree; 
#line 5282 "test-linc.mc"
typedef  gboolean (*GTraverseFunc)( gpointer key,  gpointer value,  gpointer data); 
#line 5286 "test-linc.mc"
 GTree *g_tree_new( GCompareFunc key_compare_func); 
#line 5288 "test-linc.mc"
 GTree *g_tree_new_with_data( GCompareDataFunc key_compare_func,  gpointer key_compare_data); 
#line 5292 "test-linc.mc"
 GTree *g_tree_new_full( GCompareDataFunc key_compare_func,  gpointer key_compare_data,  GDestroyNotify key_destroy_func,  GDestroyNotify value_destroy_func); 
#line 5293 "test-linc.mc"
void g_tree_destroy( GTree *tree); 
#line 5296 "test-linc.mc"
void g_tree_insert( GTree *tree,  gpointer key,  gpointer value); 
#line 5299 "test-linc.mc"
void g_tree_replace( GTree *tree,  gpointer key,  gpointer value); 
#line 5301 "test-linc.mc"
 gboolean g_tree_remove( GTree *tree,  gconstpointer key); 
#line 5303 "test-linc.mc"
 gboolean g_tree_steal( GTree *tree,  gconstpointer key); 
#line 5305 "test-linc.mc"
 gpointer g_tree_lookup( GTree *tree,  gconstpointer key); 
#line 5309 "test-linc.mc"
 gboolean g_tree_lookup_extended( GTree *tree,  gconstpointer lookup_key,  gpointer *orig_key,  gpointer *value); 
#line 5312 "test-linc.mc"
void g_tree_foreach( GTree *tree,  GTraverseFunc func,  gpointer user_data); 
#line 5318 "test-linc.mc"
void g_tree_traverse( GTree *tree,  GTraverseFunc traverse_func,  GTraverseType traverse_type,  gpointer user_data); 
#line 5323 "test-linc.mc"
 gpointer g_tree_search( GTree *tree,  GCompareFunc search_func,  gconstpointer user_data); 
#line 5324 "test-linc.mc"
 gint g_tree_height( GTree *tree); 
#line 5325 "test-linc.mc"
 gint g_tree_nnodes( GTree *tree); 
#line 5332 "test-linc.mc"
typedef  gulong GType; 
#line 5336 "test-linc.mc"
typedef struct _GValue GValue; 
#line 5337 "test-linc.mc"
typedef union _GTypeCValue GTypeCValue; 
#line 5338 "test-linc.mc"
typedef struct _GTypePlugin GTypePlugin; 
#line 5339 "test-linc.mc"
typedef struct _GTypeClass GTypeClass; 
#line 5340 "test-linc.mc"
typedef struct _GTypeInterface GTypeInterface; 
#line 5341 "test-linc.mc"
typedef struct _GTypeInstance GTypeInstance; 
#line 5342 "test-linc.mc"
typedef struct _GTypeInfo GTypeInfo; 
#line 5343 "test-linc.mc"
typedef struct _GTypeFundamentalInfo GTypeFundamentalInfo; 
#line 5344 "test-linc.mc"
typedef struct _GInterfaceInfo GInterfaceInfo; 
#line 5345 "test-linc.mc"
typedef struct _GTypeValueTable GTypeValueTable; 
#line 5346 "test-linc.mc"
typedef struct _GTypeQuery GTypeQuery; 
#line 5355 "test-linc.mc"
struct _GTypeClass { GType g_type; }; 
#line 5360 "test-linc.mc"
struct _GTypeInstance { GTypeClass *g_class; }; 
#line 5366 "test-linc.mc"
struct _GTypeInterface { GType g_type;  GType g_instance_type; }; 
#line 5373 "test-linc.mc"
struct _GTypeQuery { GType type; const  gchar *type_name;  guint class_size;  guint instance_size; }; 
#line 5380 "test-linc.mc"
typedef enum {G_TYPE_DEBUG_NONE=0,G_TYPE_DEBUG_OBJECTS=1 << 0,G_TYPE_DEBUG_SIGNALS=1 << 1,G_TYPE_DEBUG_MASK=0x03}GTypeDebugFlags; 
#line 5384 "test-linc.mc"
void g_type_init(void ); 
#line 5385 "test-linc.mc"
void g_type_init_with_debug_flags( GTypeDebugFlags debug_flags); 
#line 5386 "test-linc.mc"
const  gchar *g_type_name( GType type); 
#line 5387 "test-linc.mc"
 GQuark g_type_qname( GType type); 
#line 5388 "test-linc.mc"
 GType g_type_from_name(const  gchar *name); 
#line 5389 "test-linc.mc"
 GType g_type_parent( GType type); 
#line 5390 "test-linc.mc"
 guint g_type_depth( GType type); 
#line 5392 "test-linc.mc"
 GType g_type_next_base( GType leaf_type,  GType root_type); 
#line 5394 "test-linc.mc"
 gboolean g_type_is_a( GType type,  GType is_a_type); 
#line 5395 "test-linc.mc"
 gpointer g_type_class_ref( GType type); 
#line 5396 "test-linc.mc"
 gpointer g_type_class_peek( GType type); 
#line 5397 "test-linc.mc"
 gpointer g_type_class_peek_static( GType type); 
#line 5398 "test-linc.mc"
void g_type_class_unref( gpointer g_class); 
#line 5399 "test-linc.mc"
 gpointer g_type_class_peek_parent( gpointer g_class); 
#line 5401 "test-linc.mc"
 gpointer g_type_interface_peek( gpointer instance_class,  GType iface_type); 
#line 5402 "test-linc.mc"
 gpointer g_type_interface_peek_parent( gpointer g_iface); 
#line 5404 "test-linc.mc"
 gpointer g_type_default_interface_ref( GType g_type); 
#line 5405 "test-linc.mc"
 gpointer g_type_default_interface_peek( GType g_type); 
#line 5406 "test-linc.mc"
void g_type_default_interface_unref( gpointer g_iface); 
#line 5410 "test-linc.mc"
 GType *g_type_children( GType type,  guint *n_children); 
#line 5412 "test-linc.mc"
 GType *g_type_interfaces( GType type,  guint *n_interfaces); 
#line 5417 "test-linc.mc"
void g_type_set_qdata( GType type,  GQuark quark,  gpointer data); 
#line 5419 "test-linc.mc"
 gpointer g_type_get_qdata( GType type,  GQuark quark); 
#line 5421 "test-linc.mc"
void g_type_query( GType type,  GTypeQuery *query); 
#line 5425 "test-linc.mc"
typedef void (*GBaseInitFunc)( gpointer g_class); 
#line 5426 "test-linc.mc"
typedef void (*GBaseFinalizeFunc)( gpointer g_class); 
#line 5428 "test-linc.mc"
typedef void (*GClassInitFunc)( gpointer g_class,  gpointer class_data); 
#line 5430 "test-linc.mc"
typedef void (*GClassFinalizeFunc)( gpointer g_class,  gpointer class_data); 
#line 5432 "test-linc.mc"
typedef void (*GInstanceInitFunc)( GTypeInstance *instance,  gpointer g_class); 
#line 5434 "test-linc.mc"
typedef void (*GInterfaceInitFunc)( gpointer g_iface,  gpointer iface_data); 
#line 5436 "test-linc.mc"
typedef void (*GInterfaceFinalizeFunc)( gpointer g_iface,  gpointer iface_data); 
#line 5438 "test-linc.mc"
typedef  gboolean (*GTypeClassCacheFunc)( gpointer cache_data,  GTypeClass *g_class); 
#line 5440 "test-linc.mc"
typedef void (*GTypeInterfaceCheckFunc)( gpointer check_data,  gpointer g_iface); 
#line 5447 "test-linc.mc"
typedef enum {G_TYPE_FLAG_CLASSED=(1 << 0),G_TYPE_FLAG_INSTANTIATABLE=(1 << 1),G_TYPE_FLAG_DERIVABLE=(1 << 2),G_TYPE_FLAG_DEEP_DERIVABLE=(1 << 3)}GTypeFundamentalFlags; 
#line 5452 "test-linc.mc"
typedef enum {G_TYPE_FLAG_ABSTRACT=(1 << 4),G_TYPE_FLAG_VALUE_ABSTRACT=(1 << 5)}GTypeFlags; 
#line 5473 "test-linc.mc"
struct _GTypeInfo { guint16 class_size;  GBaseInitFunc base_init;  GBaseFinalizeFunc base_finalize;  GClassInitFunc class_init;  GClassFinalizeFunc class_finalize;  gconstpointer class_data;  guint16 instance_size;  guint16 n_preallocs;  GInstanceInitFunc instance_init; const  GTypeValueTable *value_table; }; 
#line 5477 "test-linc.mc"
struct _GTypeFundamentalInfo { GTypeFundamentalFlags type_flags; }; 
#line 5483 "test-linc.mc"
struct _GInterfaceInfo { GInterfaceInitFunc interface_init;  GInterfaceFinalizeFunc interface_finalize;  gpointer interface_data; }; 
#line 5502 "test-linc.mc"
struct _GTypeValueTable {void (*value_init)( GValue *value); void (*value_free)( GValue *value); void (*value_copy)(const  GValue *src_value,  GValue *dest_value);  gpointer (*value_peek_pointer)(const  GValue *value);  gchar *collect_format;  gchar *(*collect_value)( GValue *value,  guint n_collect_values,  GTypeCValue *collect_values,  guint collect_flags);  gchar *lcopy_format;  gchar *(*lcopy_value)(const  GValue *value,  guint n_collect_values,  GTypeCValue *collect_values,  guint collect_flags); }; 
#line 5506 "test-linc.mc"
 GType g_type_register_static( GType parent_type, const  gchar *type_name, const  GTypeInfo *info,  GTypeFlags flags); 
#line 5510 "test-linc.mc"
 GType g_type_register_dynamic( GType parent_type, const  gchar *type_name,  GTypePlugin *plugin,  GTypeFlags flags); 
#line 5515 "test-linc.mc"
 GType g_type_register_fundamental( GType type_id, const  gchar *type_name, const  GTypeInfo *info, const  GTypeFundamentalInfo *finfo,  GTypeFlags flags); 
#line 5518 "test-linc.mc"
void g_type_add_interface_static( GType instance_type,  GType interface_type, const  GInterfaceInfo *info); 
#line 5521 "test-linc.mc"
void g_type_add_interface_dynamic( GType instance_type,  GType interface_type,  GTypePlugin *plugin); 
#line 5523 "test-linc.mc"
void g_type_interface_add_prerequisite( GType interface_type,  GType prerequisite_type); 
#line 5525 "test-linc.mc"
 GType *g_type_interface_prerequisites( GType interface_type,  guint *n_prerequisites); 
#line 5527 "test-linc.mc"
void g_type_class_add_private( gpointer g_class,  gsize private_size); 
#line 5529 "test-linc.mc"
 gpointer g_type_instance_get_private( GTypeInstance *instance,  GType private_type); 
#line 5530 "test-linc.mc"
 GTypePlugin *g_type_get_plugin( GType type); 
#line 5532 "test-linc.mc"
 GTypePlugin *g_type_interface_get_plugin( GType instance_type,  GType interface_type); 
#line 5533 "test-linc.mc"
 GType g_type_fundamental_next(void ); 
#line 5534 "test-linc.mc"
 GType g_type_fundamental( GType type_id); 
#line 5535 "test-linc.mc"
 GTypeInstance *g_type_create_instance( GType type); 
#line 5536 "test-linc.mc"
void g_type_free_instance( GTypeInstance *instance); 
#line 5539 "test-linc.mc"
void g_type_add_class_cache_func( gpointer cache_data,  GTypeClassCacheFunc cache_func); 
#line 5541 "test-linc.mc"
void g_type_remove_class_cache_func( gpointer cache_data,  GTypeClassCacheFunc cache_func); 
#line 5542 "test-linc.mc"
void g_type_class_unref_uncached( gpointer g_class); 
#line 5545 "test-linc.mc"
void g_type_add_interface_check( gpointer check_data,  GTypeInterfaceCheckFunc check_func); 
#line 5547 "test-linc.mc"
void g_type_remove_interface_check( gpointer check_data,  GTypeInterfaceCheckFunc check_func); 
#line 5549 "test-linc.mc"
 GTypeValueTable *g_type_value_table_peek( GType type); 
#line 5553 "test-linc.mc"
 gboolean g_type_check_instance( GTypeInstance *instance); 
#line 5555 "test-linc.mc"
 GTypeInstance *g_type_check_instance_cast( GTypeInstance *instance,  GType iface_type); 
#line 5557 "test-linc.mc"
 gboolean g_type_check_instance_is_a( GTypeInstance *instance,  GType iface_type); 
#line 5559 "test-linc.mc"
 GTypeClass *g_type_check_class_cast( GTypeClass *g_class,  GType is_a_type); 
#line 5561 "test-linc.mc"
 gboolean g_type_check_class_is_a( GTypeClass *g_class,  GType is_a_type); 
#line 5562 "test-linc.mc"
 gboolean g_type_check_is_value_type( GType type); 
#line 5563 "test-linc.mc"
 gboolean g_type_check_value( GValue *value); 
#line 5565 "test-linc.mc"
 gboolean g_type_check_value_holds( GValue *value,  GType type); 
#line 5567 "test-linc.mc"
 gboolean g_type_test_flags( GType type,  guint flags); 
#line 5571 "test-linc.mc"
const  gchar *g_type_name_from_instance( GTypeInstance *instance); 
#line 5572 "test-linc.mc"
const  gchar *g_type_name_from_class( GTypeClass *g_class); 
#line 5576 "test-linc.mc"
void g_value_c_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5577 "test-linc.mc"
void g_value_types_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5578 "test-linc.mc"
void g_enum_types_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5579 "test-linc.mc"
void g_param_type_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5580 "test-linc.mc"
void g_boxed_type_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5581 "test-linc.mc"
void g_object_type_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5582 "test-linc.mc"
void g_param_spec_types_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5583 "test-linc.mc"
void g_value_transforms_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5584 "test-linc.mc"
void g_signal_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 5585 "test-linc.mc"
extern  GTypeDebugFlags _g_type_debug_flags; 
#line 5597 "test-linc.mc"
typedef  gpointer (*GBoxedCopyFunc)( gpointer boxed); 
#line 5598 "test-linc.mc"
typedef void (*GBoxedFreeFunc)( gpointer boxed); 
#line 5603 "test-linc.mc"
 gpointer g_boxed_copy( GType boxed_type,  gconstpointer src_boxed); 
#line 5605 "test-linc.mc"
void g_boxed_free( GType boxed_type,  gpointer boxed); 
#line 5607 "test-linc.mc"
void g_value_set_boxed( GValue *value,  gconstpointer v_boxed); 
#line 5609 "test-linc.mc"
void g_value_set_static_boxed( GValue *value,  gconstpointer v_boxed); 
#line 5610 "test-linc.mc"
 gpointer g_value_get_boxed(const  GValue *value); 
#line 5611 "test-linc.mc"
 gpointer g_value_dup_boxed(const  GValue *value); 
#line 5617 "test-linc.mc"
 GType g_boxed_type_register_static(const  gchar *name,  GBoxedCopyFunc boxed_copy,  GBoxedFreeFunc boxed_free); 
#line 5619 "test-linc.mc"
void g_value_take_boxed( GValue *value,  gconstpointer v_boxed); 
#line 5622 "test-linc.mc"
void g_value_set_boxed_take_ownership( GValue *value,  gconstpointer v_boxed); 
#line 5624 "test-linc.mc"
 GType g_closure_get_type(void ) __attribute__  (( __const__ )) ; 
#line 5625 "test-linc.mc"
 GType g_value_get_type(void ) __attribute__  (( __const__ )) ; 
#line 5626 "test-linc.mc"
 GType g_value_array_get_type(void ) __attribute__  (( __const__ )) ; 
#line 5627 "test-linc.mc"
 GType g_date_get_type(void ) __attribute__  (( __const__ )) ; 
#line 5628 "test-linc.mc"
 GType g_strv_get_type(void ) __attribute__  (( __const__ )) ; 
#line 5629 "test-linc.mc"
 GType g_gstring_get_type(void ) __attribute__  (( __const__ )) ; 
#line 5630 "test-linc.mc"
 GType g_hash_table_get_type(void ) __attribute__  (( __const__ )) ; 
#line 5632 "test-linc.mc"
typedef  gchar **GStrv; 
#line 5637 "test-linc.mc"
typedef struct _GEnumClass GEnumClass; 
#line 5638 "test-linc.mc"
typedef struct _GFlagsClass GFlagsClass; 
#line 5639 "test-linc.mc"
typedef struct _GEnumValue GEnumValue; 
#line 5640 "test-linc.mc"
typedef struct _GFlagsValue GFlagsValue; 
#line 5650 "test-linc.mc"
struct _GEnumClass { GTypeClass g_type_class;  gint minimum;  gint maximum;  guint n_values;  GEnumValue *values; }; 
#line 5659 "test-linc.mc"
struct _GFlagsClass { GTypeClass g_type_class;  guint mask;  guint n_values;  GFlagsValue *values; }; 
#line 5665 "test-linc.mc"
struct _GEnumValue { gint value;  gchar *value_name;  gchar *value_nick; }; 
#line 5671 "test-linc.mc"
struct _GFlagsValue { guint value;  gchar *value_name;  gchar *value_nick; }; 
#line 5676 "test-linc.mc"
 GEnumValue *g_enum_get_value( GEnumClass *enum_class,  gint value); 
#line 5678 "test-linc.mc"
 GEnumValue *g_enum_get_value_by_name( GEnumClass *enum_class, const  gchar *name); 
#line 5680 "test-linc.mc"
 GEnumValue *g_enum_get_value_by_nick( GEnumClass *enum_class, const  gchar *nick); 
#line 5682 "test-linc.mc"
 GFlagsValue *g_flags_get_first_value( GFlagsClass *flags_class,  guint value); 
#line 5684 "test-linc.mc"
 GFlagsValue *g_flags_get_value_by_name( GFlagsClass *flags_class, const  gchar *name); 
#line 5686 "test-linc.mc"
 GFlagsValue *g_flags_get_value_by_nick( GFlagsClass *flags_class, const  gchar *nick); 
#line 5688 "test-linc.mc"
void g_value_set_enum( GValue *value,  gint v_enum); 
#line 5689 "test-linc.mc"
 gint g_value_get_enum(const  GValue *value); 
#line 5691 "test-linc.mc"
void g_value_set_flags( GValue *value,  guint v_flags); 
#line 5692 "test-linc.mc"
 guint g_value_get_flags(const  GValue *value); 
#line 5701 "test-linc.mc"
 GType g_enum_register_static(const  gchar *name, const  GEnumValue *const_static_values); 
#line 5703 "test-linc.mc"
 GType g_flags_register_static(const  gchar *name, const  GFlagsValue *const_static_values); 
#line 5709 "test-linc.mc"
void g_enum_complete_type_info( GType g_enum_type,  GTypeInfo *info, const  GEnumValue *const_values); 
#line 5712 "test-linc.mc"
void g_flags_complete_type_info( GType g_flags_type,  GTypeInfo *info, const  GFlagsValue *const_values); 
#line 5718 "test-linc.mc"
typedef void (*GValueTransform)(const  GValue *src_value,  GValue *dest_value); 
#line 5736 "test-linc.mc"
struct _GValue { GType g_type; union { gint v_int;  guint v_uint;  glong v_long;  gulong v_ulong;  gint64 v_int64;  guint64 v_uint64;  gfloat v_float;  gdouble v_double;  gpointer v_pointer; }data[2]; }; 
#line 5741 "test-linc.mc"
 GValue *g_value_init( GValue *value,  GType g_type); 
#line 5743 "test-linc.mc"
void g_value_copy(const  GValue *src_value,  GValue *dest_value); 
#line 5744 "test-linc.mc"
 GValue *g_value_reset( GValue *value); 
#line 5745 "test-linc.mc"
void g_value_unset( GValue *value); 
#line 5747 "test-linc.mc"
void g_value_set_instance( GValue *value,  gpointer instance); 
#line 5751 "test-linc.mc"
 gboolean g_value_fits_pointer(const  GValue *value); 
#line 5752 "test-linc.mc"
 gpointer g_value_peek_pointer(const  GValue *value); 
#line 5757 "test-linc.mc"
 gboolean g_value_type_compatible( GType src_type,  GType dest_type); 
#line 5759 "test-linc.mc"
 gboolean g_value_type_transformable( GType src_type,  GType dest_type); 
#line 5761 "test-linc.mc"
 gboolean g_value_transform(const  GValue *src_value,  GValue *dest_value); 
#line 5764 "test-linc.mc"
void g_value_register_transform_func( GType src_type,  GType dest_type,  GValueTransform transform_func); 
#line 5784 "test-linc.mc"
typedef enum {G_PARAM_READABLE=1 << 0,G_PARAM_WRITABLE=1 << 1,G_PARAM_CONSTRUCT=1 << 2,G_PARAM_CONSTRUCT_ONLY=1 << 3,G_PARAM_LAX_VALIDATION=1 << 4,G_PARAM_STATIC_NAME=1 << 5,G_PARAM_PRIVATE=G_PARAM_STATIC_NAME,G_PARAM_STATIC_NICK=1 << 6,G_PARAM_STATIC_BLURB=1 << 7}GParamFlags; 
#line 5792 "test-linc.mc"
typedef struct _GParamSpec GParamSpec; 
#line 5793 "test-linc.mc"
typedef struct _GParamSpecClass GParamSpecClass; 
#line 5794 "test-linc.mc"
typedef struct _GParameter GParameter; 
#line 5795 "test-linc.mc"
typedef struct _GParamSpecPool GParamSpecPool; 
#line 5811 "test-linc.mc"
struct _GParamSpec { GTypeInstance g_type_instance;  gchar *name;  GParamFlags flags;  GType value_type;  GType owner_type;  gchar *_nick;  gchar *_blurb;  GData *qdata;  guint ref_count;  guint param_id; }; 
#line 5830 "test-linc.mc"
struct _GParamSpecClass { GTypeClass g_type_class;  GType value_type; void (*finalize)( GParamSpec *pspec); void (*value_set_default)( GParamSpec *pspec,  GValue *value);  gboolean (*value_validate)( GParamSpec *pspec,  GValue *value);  gint (*values_cmp)( GParamSpec *pspec, const  GValue *value1, const  GValue *value2);  gpointer dummy[4]; }; 
#line 5835 "test-linc.mc"
struct _GParameter {const  gchar *name;  GValue value; }; 
#line 5839 "test-linc.mc"
 GParamSpec *g_param_spec_ref( GParamSpec *pspec); 
#line 5840 "test-linc.mc"
void g_param_spec_unref( GParamSpec *pspec); 
#line 5841 "test-linc.mc"
void g_param_spec_sink( GParamSpec *pspec); 
#line 5842 "test-linc.mc"
 GParamSpec *g_param_spec_ref_sink( GParamSpec *pspec); 
#line 5844 "test-linc.mc"
 gpointer g_param_spec_get_qdata( GParamSpec *pspec,  GQuark quark); 
#line 5847 "test-linc.mc"
void g_param_spec_set_qdata( GParamSpec *pspec,  GQuark quark,  gpointer data); 
#line 5851 "test-linc.mc"
void g_param_spec_set_qdata_full( GParamSpec *pspec,  GQuark quark,  gpointer data,  GDestroyNotify destroy); 
#line 5853 "test-linc.mc"
 gpointer g_param_spec_steal_qdata( GParamSpec *pspec,  GQuark quark); 
#line 5854 "test-linc.mc"
 GParamSpec *g_param_spec_get_redirect_target( GParamSpec *pspec); 
#line 5857 "test-linc.mc"
void g_param_value_set_default( GParamSpec *pspec,  GValue *value); 
#line 5859 "test-linc.mc"
 gboolean g_param_value_defaults( GParamSpec *pspec,  GValue *value); 
#line 5861 "test-linc.mc"
 gboolean g_param_value_validate( GParamSpec *pspec,  GValue *value); 
#line 5865 "test-linc.mc"
 gboolean g_param_value_convert( GParamSpec *pspec, const  GValue *src_value,  GValue *dest_value,  gboolean strict_validation); 
#line 5868 "test-linc.mc"
 gint g_param_values_cmp( GParamSpec *pspec, const  GValue *value1, const  GValue *value2); 
#line 5869 "test-linc.mc"
const  gchar *g_param_spec_get_name( GParamSpec *pspec); 
#line 5870 "test-linc.mc"
const  gchar *g_param_spec_get_nick( GParamSpec *pspec); 
#line 5871 "test-linc.mc"
const  gchar *g_param_spec_get_blurb( GParamSpec *pspec); 
#line 5873 "test-linc.mc"
void g_value_set_param( GValue *value,  GParamSpec *param); 
#line 5874 "test-linc.mc"
 GParamSpec *g_value_get_param(const  GValue *value); 
#line 5875 "test-linc.mc"
 GParamSpec *g_value_dup_param(const  GValue *value); 
#line 5879 "test-linc.mc"
void g_value_take_param( GValue *value,  GParamSpec *param); 
#line 5882 "test-linc.mc"
void g_value_set_param_take_ownership( GValue *value,  GParamSpec *param); 
#line 5886 "test-linc.mc"
typedef struct _GParamSpecTypeInfo GParamSpecTypeInfo; 
#line 5904 "test-linc.mc"
struct _GParamSpecTypeInfo { guint16 instance_size;  guint16 n_preallocs; void (*instance_init)( GParamSpec *pspec);  GType value_type; void (*finalize)( GParamSpec *pspec); void (*value_set_default)( GParamSpec *pspec,  GValue *value);  gboolean (*value_validate)( GParamSpec *pspec,  GValue *value);  gint (*values_cmp)( GParamSpec *pspec, const  GValue *value1, const  GValue *value2); }; 
#line 5906 "test-linc.mc"
 GType g_param_type_register_static(const  gchar *name, const  GParamSpecTypeInfo *pspec_info); 
#line 5911 "test-linc.mc"
 GType _g_param_type_register_static_constant(const  gchar *name, const  GParamSpecTypeInfo *pspec_info,  GType opt_type); 
#line 5919 "test-linc.mc"
 gpointer g_param_spec_internal( GType param_type, const  gchar *name, const  gchar *nick, const  gchar *blurb,  GParamFlags flags); 
#line 5920 "test-linc.mc"
 GParamSpecPool *g_param_spec_pool_new( gboolean type_prefixing); 
#line 5923 "test-linc.mc"
void g_param_spec_pool_insert( GParamSpecPool *pool,  GParamSpec *pspec,  GType owner_type); 
#line 5925 "test-linc.mc"
void g_param_spec_pool_remove( GParamSpecPool *pool,  GParamSpec *pspec); 
#line 5929 "test-linc.mc"
 GParamSpec *g_param_spec_pool_lookup( GParamSpecPool *pool, const  gchar *param_name,  GType owner_type,  gboolean walk_ancestors); 
#line 5931 "test-linc.mc"
 GList *g_param_spec_pool_list_owned( GParamSpecPool *pool,  GType owner_type); 
#line 5934 "test-linc.mc"
 GParamSpec **g_param_spec_pool_list( GParamSpecPool *pool,  GType owner_type,  guint *n_pspecs_p); 
#line 5938 "test-linc.mc"
typedef struct _GClosure GClosure; 
#line 5939 "test-linc.mc"
typedef struct _GClosureNotifyData GClosureNotifyData; 
#line 5940 "test-linc.mc"
typedef void (*GCallback)(void ); 
#line 5942 "test-linc.mc"
typedef void (*GClosureNotify)( gpointer data,  GClosure *closure); 
#line 5948 "test-linc.mc"
typedef void (*GClosureMarshal)( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5949 "test-linc.mc"
typedef struct _GCClosure GCClosure; 
#line 5957 "test-linc.mc"
struct _GClosureNotifyData { gpointer data;  GClosureNotify notify; }; 
#line 5983 "test-linc.mc"
struct _GClosure {volatile  guint ref_count:15; volatile  guint meta_marshal:1; volatile  guint n_guards:1; volatile  guint n_fnotifiers:2; volatile  guint n_inotifiers:8; volatile  guint in_inotify:1; volatile  guint floating:1; volatile  guint derivative_flag:1; volatile  guint in_marshal:1; volatile  guint is_invalid:1; void (*marshal)( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data);  gpointer data;  GClosureNotifyData *notifiers; }; 
#line 5990 "test-linc.mc"
struct _GCClosure { GClosure closure;  gpointer callback; }; 
#line 5996 "test-linc.mc"
 GClosure *g_cclosure_new( GCallback callback_func,  gpointer user_data,  GClosureNotify destroy_data); 
#line 5999 "test-linc.mc"
 GClosure *g_cclosure_new_swap( GCallback callback_func,  gpointer user_data,  GClosureNotify destroy_data); 
#line 6001 "test-linc.mc"
 GClosure *g_signal_type_cclosure_new( GType itype,  guint struct_offset); 
#line 6005 "test-linc.mc"
 GClosure *g_closure_ref( GClosure *closure); 
#line 6006 "test-linc.mc"
void g_closure_sink( GClosure *closure); 
#line 6007 "test-linc.mc"
void g_closure_unref( GClosure *closure); 
#line 6010 "test-linc.mc"
 GClosure *g_closure_new_simple( guint sizeof_closure,  gpointer data); 
#line 6013 "test-linc.mc"
void g_closure_add_finalize_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 6016 "test-linc.mc"
void g_closure_remove_finalize_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 6019 "test-linc.mc"
void g_closure_add_invalidate_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 6022 "test-linc.mc"
void g_closure_remove_invalidate_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 6027 "test-linc.mc"
void g_closure_add_marshal_guards( GClosure *closure,  gpointer pre_marshal_data,  GClosureNotify pre_marshal_notify,  gpointer post_marshal_data,  GClosureNotify post_marshal_notify); 
#line 6029 "test-linc.mc"
void g_closure_set_marshal( GClosure *closure,  GClosureMarshal marshal); 
#line 6032 "test-linc.mc"
void g_closure_set_meta_marshal( GClosure *closure,  gpointer marshal_data,  GClosureMarshal meta_marshal); 
#line 6033 "test-linc.mc"
void g_closure_invalidate( GClosure *closure); 
#line 6038 "test-linc.mc"
void g_closure_invoke( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint); 
#line 6051 "test-linc.mc"
extern void g_cclosure_marshal_VOID__VOID( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6059 "test-linc.mc"
extern void g_cclosure_marshal_VOID__BOOLEAN( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6067 "test-linc.mc"
extern void g_cclosure_marshal_VOID__CHAR( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6075 "test-linc.mc"
extern void g_cclosure_marshal_VOID__UCHAR( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6083 "test-linc.mc"
extern void g_cclosure_marshal_VOID__INT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6091 "test-linc.mc"
extern void g_cclosure_marshal_VOID__UINT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6099 "test-linc.mc"
extern void g_cclosure_marshal_VOID__LONG( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6107 "test-linc.mc"
extern void g_cclosure_marshal_VOID__ULONG( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6115 "test-linc.mc"
extern void g_cclosure_marshal_VOID__ENUM( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6123 "test-linc.mc"
extern void g_cclosure_marshal_VOID__FLAGS( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6131 "test-linc.mc"
extern void g_cclosure_marshal_VOID__FLOAT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6139 "test-linc.mc"
extern void g_cclosure_marshal_VOID__DOUBLE( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6147 "test-linc.mc"
extern void g_cclosure_marshal_VOID__STRING( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6155 "test-linc.mc"
extern void g_cclosure_marshal_VOID__PARAM( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6163 "test-linc.mc"
extern void g_cclosure_marshal_VOID__BOXED( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6171 "test-linc.mc"
extern void g_cclosure_marshal_VOID__POINTER( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6179 "test-linc.mc"
extern void g_cclosure_marshal_VOID__OBJECT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6187 "test-linc.mc"
extern void g_cclosure_marshal_VOID__UINT_POINTER( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6195 "test-linc.mc"
extern void g_cclosure_marshal_BOOLEAN__FLAGS( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6204 "test-linc.mc"
extern void g_cclosure_marshal_STRING__OBJECT_POINTER( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 6211 "test-linc.mc"
typedef struct _GSignalQuery GSignalQuery; 
#line 6212 "test-linc.mc"
typedef struct _GSignalInvocationHint GSignalInvocationHint; 
#line 6213 "test-linc.mc"
typedef  GClosureMarshal GSignalCMarshaller; 
#line 6217 "test-linc.mc"
typedef  gboolean (*GSignalEmissionHook)( GSignalInvocationHint *ihint,  guint n_param_values, const  GValue *param_values,  gpointer data); 
#line 6221 "test-linc.mc"
typedef  gboolean (*GSignalAccumulator)( GSignalInvocationHint *ihint,  GValue *return_accu, const  GValue *handler_return,  gpointer data); 
#line 6234 "test-linc.mc"
typedef enum {G_SIGNAL_RUN_FIRST=1 << 0,G_SIGNAL_RUN_LAST=1 << 1,G_SIGNAL_RUN_CLEANUP=1 << 2,G_SIGNAL_NO_RECURSE=1 << 3,G_SIGNAL_DETAILED=1 << 4,G_SIGNAL_ACTION=1 << 5,G_SIGNAL_NO_HOOKS=1 << 6}GSignalFlags; 
#line 6240 "test-linc.mc"
typedef enum {G_CONNECT_AFTER=1 << 0,G_CONNECT_SWAPPED=1 << 1}GConnectFlags; 
#line 6249 "test-linc.mc"
typedef enum {G_SIGNAL_MATCH_ID=1 << 0,G_SIGNAL_MATCH_DETAIL=1 << 1,G_SIGNAL_MATCH_CLOSURE=1 << 2,G_SIGNAL_MATCH_FUNC=1 << 3,G_SIGNAL_MATCH_DATA=1 << 4,G_SIGNAL_MATCH_UNBLOCKED=1 << 5}GSignalMatchType; 
#line 6260 "test-linc.mc"
struct _GSignalInvocationHint { guint signal_id;  GQuark detail;  GSignalFlags run_type; }; 
#line 6270 "test-linc.mc"
struct _GSignalQuery { guint signal_id; const  gchar *signal_name;  GType itype;  GSignalFlags signal_flags;  GType return_type;  guint n_params; const  GType *param_types; }; 
#line 6283 "test-linc.mc"
 guint g_signal_newv(const  gchar *signal_name,  GType itype,  GSignalFlags signal_flags,  GClosure *class_closure,  GSignalAccumulator accumulator,  gpointer accu_data,  GSignalCMarshaller c_marshaller,  GType return_type,  guint n_params,  GType *param_types); 
#line 6293 "test-linc.mc"
 guint g_signal_new_valist(const  gchar *signal_name,  GType itype,  GSignalFlags signal_flags,  GClosure *class_closure,  GSignalAccumulator accumulator,  gpointer accu_data,  GSignalCMarshaller c_marshaller,  GType return_type,  guint n_params,  va_list args); 
#line 6303 "test-linc.mc"
 guint g_signal_new(const  gchar *signal_name,  GType itype,  GSignalFlags signal_flags,  guint class_offset,  GSignalAccumulator accumulator,  gpointer accu_data,  GSignalCMarshaller c_marshaller,  GType return_type,  guint n_params, ...); 
#line 6307 "test-linc.mc"
void g_signal_emitv(const  GValue *instance_and_params,  guint signal_id,  GQuark detail,  GValue *return_value); 
#line 6311 "test-linc.mc"
void g_signal_emit_valist( gpointer instance,  guint signal_id,  GQuark detail,  va_list var_args); 
#line 6315 "test-linc.mc"
void g_signal_emit( gpointer instance,  guint signal_id,  GQuark detail, ...); 
#line 6318 "test-linc.mc"
void g_signal_emit_by_name( gpointer instance, const  gchar *detailed_signal, ...); 
#line 6320 "test-linc.mc"
 guint g_signal_lookup(const  gchar *name,  GType itype); 
#line 6321 "test-linc.mc"
const  gchar *g_signal_name( guint signal_id); 
#line 6323 "test-linc.mc"
void g_signal_query( guint signal_id,  GSignalQuery *query); 
#line 6325 "test-linc.mc"
 guint *g_signal_list_ids( GType itype,  guint *n_ids); 
#line 6330 "test-linc.mc"
 gboolean g_signal_parse_name(const  gchar *detailed_signal,  GType itype,  guint *signal_id_p,  GQuark *detail_p,  gboolean force_detail_quark); 
#line 6331 "test-linc.mc"
 GSignalInvocationHint *g_signal_get_invocation_hint( gpointer instance); 
#line 6337 "test-linc.mc"
void g_signal_stop_emission( gpointer instance,  guint signal_id,  GQuark detail); 
#line 6339 "test-linc.mc"
void g_signal_stop_emission_by_name( gpointer instance, const  gchar *detailed_signal); 
#line 6344 "test-linc.mc"
 gulong g_signal_add_emission_hook( guint signal_id,  GQuark detail,  GSignalEmissionHook hook_func,  gpointer hook_data,  GDestroyNotify data_destroy); 
#line 6346 "test-linc.mc"
void g_signal_remove_emission_hook( guint signal_id,  gulong hook_id); 
#line 6353 "test-linc.mc"
 gboolean g_signal_has_handler_pending( gpointer instance,  guint signal_id,  GQuark detail,  gboolean may_be_blocked); 
#line 6358 "test-linc.mc"
 gulong g_signal_connect_closure_by_id( gpointer instance,  guint signal_id,  GQuark detail,  GClosure *closure,  gboolean after); 
#line 6362 "test-linc.mc"
 gulong g_signal_connect_closure( gpointer instance, const  gchar *detailed_signal,  GClosure *closure,  gboolean after); 
#line 6368 "test-linc.mc"
 gulong g_signal_connect_data( gpointer instance, const  gchar *detailed_signal,  GCallback c_handler,  gpointer data,  GClosureNotify destroy_data,  GConnectFlags connect_flags); 
#line 6370 "test-linc.mc"
void g_signal_handler_block( gpointer instance,  gulong handler_id); 
#line 6372 "test-linc.mc"
void g_signal_handler_unblock( gpointer instance,  gulong handler_id); 
#line 6374 "test-linc.mc"
void g_signal_handler_disconnect( gpointer instance,  gulong handler_id); 
#line 6376 "test-linc.mc"
 gboolean g_signal_handler_is_connected( gpointer instance,  gulong handler_id); 
#line 6383 "test-linc.mc"
 gulong g_signal_handler_find( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 6390 "test-linc.mc"
 guint g_signal_handlers_block_matched( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 6397 "test-linc.mc"
 guint g_signal_handlers_unblock_matched( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 6404 "test-linc.mc"
 guint g_signal_handlers_disconnect_matched( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 6410 "test-linc.mc"
void g_signal_override_class_closure( guint signal_id,  GType instance_type,  GClosure *class_closure); 
#line 6412 "test-linc.mc"
void g_signal_chain_from_overridden(const  GValue *instance_and_params,  GValue *return_value); 
#line 6416 "test-linc.mc"
 gboolean g_signal_accumulator_true_handled( GSignalInvocationHint *ihint,  GValue *return_accu, const  GValue *handler_return,  gpointer dummy); 
#line 6419 "test-linc.mc"
void g_signal_handlers_destroy( gpointer instance); 
#line 6420 "test-linc.mc"
void _g_signals_destroy( GType itype); 
#line 6425 "test-linc.mc"
typedef struct _GObject GObject; 
#line 6426 "test-linc.mc"
typedef struct _GObjectClass GObjectClass; 
#line 6427 "test-linc.mc"
typedef struct _GObject GInitiallyUnowned; 
#line 6428 "test-linc.mc"
typedef struct _GObjectClass GInitiallyUnownedClass; 
#line 6429 "test-linc.mc"
typedef struct _GObjectConstructParam GObjectConstructParam; 
#line 6433 "test-linc.mc"
typedef void (*GObjectGetPropertyFunc)( GObject *object,  guint property_id,  GValue *value,  GParamSpec *pspec); 
#line 6437 "test-linc.mc"
typedef void (*GObjectSetPropertyFunc)( GObject *object,  guint property_id, const  GValue *value,  GParamSpec *pspec); 
#line 6438 "test-linc.mc"
typedef void (*GObjectFinalizeFunc)( GObject *object); 
#line 6440 "test-linc.mc"
typedef void (*GWeakNotify)( gpointer data,  GObject *where_the_object_was); 
#line 6448 "test-linc.mc"
struct _GObject { GTypeInstance g_type_instance; volatile  guint ref_count;  GData *qdata; }; 
#line 6483 "test-linc.mc"
struct _GObjectClass { GTypeClass g_type_class;  GSList *construct_properties;  GObject *(*constructor)( GType type,  guint n_construct_properties,  GObjectConstructParam *construct_properties); void (*set_property)( GObject *object,  guint property_id, const  GValue *value,  GParamSpec *pspec); void (*get_property)( GObject *object,  guint property_id,  GValue *value,  GParamSpec *pspec); void (*dispose)( GObject *object); void (*finalize)( GObject *object); void (*dispatch_properties_changed)( GObject *object,  guint n_pspecs,  GParamSpec **pspecs); void (*notify)( GObject *object,  GParamSpec *pspec);  gpointer pdummy[8]; }; 
#line 6488 "test-linc.mc"
struct _GObjectConstructParam { GParamSpec *pspec;  GValue *value; }; 
#line 6492 "test-linc.mc"
 GType g_initially_unowned_get_type(void ); 
#line 6495 "test-linc.mc"
void g_object_class_install_property( GObjectClass *oclass,  guint property_id,  GParamSpec *pspec); 
#line 6497 "test-linc.mc"
 GParamSpec *g_object_class_find_property( GObjectClass *oclass, const  gchar *property_name); 
#line 6499 "test-linc.mc"
 GParamSpec **g_object_class_list_properties( GObjectClass *oclass,  guint *n_properties); 
#line 6502 "test-linc.mc"
void g_object_class_override_property( GObjectClass *oclass,  guint property_id, const  gchar *name); 
#line 6505 "test-linc.mc"
void g_object_interface_install_property( gpointer g_iface,  GParamSpec *pspec); 
#line 6507 "test-linc.mc"
 GParamSpec *g_object_interface_find_property( gpointer g_iface, const  gchar *property_name); 
#line 6509 "test-linc.mc"
 GParamSpec **g_object_interface_list_properties( gpointer g_iface,  guint *n_properties_p); 
#line 6513 "test-linc.mc"
 gpointer g_object_new( GType object_type, const  gchar *first_property_name, ...); 
#line 6516 "test-linc.mc"
 gpointer g_object_newv( GType object_type,  guint n_parameters,  GParameter *parameters); 
#line 6519 "test-linc.mc"
 GObject *g_object_new_valist( GType object_type, const  gchar *first_property_name,  va_list var_args); 
#line 6522 "test-linc.mc"
void g_object_set( gpointer object, const  gchar *first_property_name, ...) __attribute__  (( __sentinel__ )) ; 
#line 6525 "test-linc.mc"
void g_object_get( gpointer object, const  gchar *first_property_name, ...) __attribute__  (( __sentinel__ )) ; 
#line 6528 "test-linc.mc"
 gpointer g_object_connect( gpointer object, const  gchar *signal_spec, ...) __attribute__  (( __sentinel__ )) ; 
#line 6531 "test-linc.mc"
void g_object_disconnect( gpointer object, const  gchar *signal_spec, ...) __attribute__  (( __sentinel__ )) ; 
#line 6534 "test-linc.mc"
void g_object_set_valist( GObject *object, const  gchar *first_property_name,  va_list var_args); 
#line 6537 "test-linc.mc"
void g_object_get_valist( GObject *object, const  gchar *first_property_name,  va_list var_args); 
#line 6540 "test-linc.mc"
void g_object_set_property( GObject *object, const  gchar *property_name, const  GValue *value); 
#line 6543 "test-linc.mc"
void g_object_get_property( GObject *object, const  gchar *property_name,  GValue *value); 
#line 6544 "test-linc.mc"
void g_object_freeze_notify( GObject *object); 
#line 6546 "test-linc.mc"
void g_object_notify( GObject *object, const  gchar *property_name); 
#line 6547 "test-linc.mc"
void g_object_thaw_notify( GObject *object); 
#line 6548 "test-linc.mc"
 gboolean g_object_is_floating( gpointer object); 
#line 6549 "test-linc.mc"
 gpointer g_object_ref_sink( gpointer object); 
#line 6550 "test-linc.mc"
 gpointer g_object_ref( gpointer object); 
#line 6551 "test-linc.mc"
void g_object_unref( gpointer object); 
#line 6554 "test-linc.mc"
void g_object_weak_ref( GObject *object,  GWeakNotify notify,  gpointer data); 
#line 6557 "test-linc.mc"
void g_object_weak_unref( GObject *object,  GWeakNotify notify,  gpointer data); 
#line 6559 "test-linc.mc"
void g_object_add_weak_pointer( GObject *object,  gpointer *weak_pointer_location); 
#line 6561 "test-linc.mc"
void g_object_remove_weak_pointer( GObject *object,  gpointer *weak_pointer_location); 
#line 6565 "test-linc.mc"
typedef void (*GToggleNotify)( gpointer data,  GObject *object,  gboolean is_last_ref); 
#line 6569 "test-linc.mc"
void g_object_add_toggle_ref( GObject *object,  GToggleNotify notify,  gpointer data); 
#line 6572 "test-linc.mc"
void g_object_remove_toggle_ref( GObject *object,  GToggleNotify notify,  gpointer data); 
#line 6575 "test-linc.mc"
 gpointer g_object_get_qdata( GObject *object,  GQuark quark); 
#line 6578 "test-linc.mc"
void g_object_set_qdata( GObject *object,  GQuark quark,  gpointer data); 
#line 6582 "test-linc.mc"
void g_object_set_qdata_full( GObject *object,  GQuark quark,  gpointer data,  GDestroyNotify destroy); 
#line 6584 "test-linc.mc"
 gpointer g_object_steal_qdata( GObject *object,  GQuark quark); 
#line 6586 "test-linc.mc"
 gpointer g_object_get_data( GObject *object, const  gchar *key); 
#line 6589 "test-linc.mc"
void g_object_set_data( GObject *object, const  gchar *key,  gpointer data); 
#line 6593 "test-linc.mc"
void g_object_set_data_full( GObject *object, const  gchar *key,  gpointer data,  GDestroyNotify destroy); 
#line 6595 "test-linc.mc"
 gpointer g_object_steal_data( GObject *object, const  gchar *key); 
#line 6597 "test-linc.mc"
void g_object_watch_closure( GObject *object,  GClosure *closure); 
#line 6599 "test-linc.mc"
 GClosure *g_cclosure_new_object( GCallback callback_func,  GObject *object); 
#line 6601 "test-linc.mc"
 GClosure *g_cclosure_new_object_swap( GCallback callback_func,  GObject *object); 
#line 6603 "test-linc.mc"
 GClosure *g_closure_new_object( guint sizeof_closure,  GObject *object); 
#line 6605 "test-linc.mc"
void g_value_set_object( GValue *value,  gpointer v_object); 
#line 6606 "test-linc.mc"
 gpointer g_value_get_object(const  GValue *value); 
#line 6607 "test-linc.mc"
 GObject *g_value_dup_object(const  GValue *value); 
#line 6612 "test-linc.mc"
 gulong g_signal_connect_object( gpointer instance, const  gchar *detailed_signal,  GCallback c_handler,  gpointer gobject,  GConnectFlags connect_flags); 
#line 6615 "test-linc.mc"
void g_object_force_floating( GObject *object); 
#line 6616 "test-linc.mc"
void g_object_run_dispose( GObject *object); 
#line 6620 "test-linc.mc"
void g_value_take_object( GValue *value,  gpointer v_object); 
#line 6623 "test-linc.mc"
void g_value_set_object_take_ownership( GValue *value,  gpointer v_object); 
#line 6628 "test-linc.mc"
 gsize g_object_compat_control( gsize what,  gpointer data); 
#line 6632 "test-linc.mc"
typedef struct _GParamSpecChar GParamSpecChar; 
#line 6633 "test-linc.mc"
typedef struct _GParamSpecUChar GParamSpecUChar; 
#line 6634 "test-linc.mc"
typedef struct _GParamSpecBoolean GParamSpecBoolean; 
#line 6635 "test-linc.mc"
typedef struct _GParamSpecInt GParamSpecInt; 
#line 6636 "test-linc.mc"
typedef struct _GParamSpecUInt GParamSpecUInt; 
#line 6637 "test-linc.mc"
typedef struct _GParamSpecLong GParamSpecLong; 
#line 6638 "test-linc.mc"
typedef struct _GParamSpecULong GParamSpecULong; 
#line 6639 "test-linc.mc"
typedef struct _GParamSpecInt64 GParamSpecInt64; 
#line 6640 "test-linc.mc"
typedef struct _GParamSpecUInt64 GParamSpecUInt64; 
#line 6641 "test-linc.mc"
typedef struct _GParamSpecUnichar GParamSpecUnichar; 
#line 6642 "test-linc.mc"
typedef struct _GParamSpecEnum GParamSpecEnum; 
#line 6643 "test-linc.mc"
typedef struct _GParamSpecFlags GParamSpecFlags; 
#line 6644 "test-linc.mc"
typedef struct _GParamSpecFloat GParamSpecFloat; 
#line 6645 "test-linc.mc"
typedef struct _GParamSpecDouble GParamSpecDouble; 
#line 6646 "test-linc.mc"
typedef struct _GParamSpecString GParamSpecString; 
#line 6647 "test-linc.mc"
typedef struct _GParamSpecParam GParamSpecParam; 
#line 6648 "test-linc.mc"
typedef struct _GParamSpecBoxed GParamSpecBoxed; 
#line 6649 "test-linc.mc"
typedef struct _GParamSpecPointer GParamSpecPointer; 
#line 6650 "test-linc.mc"
typedef struct _GParamSpecValueArray GParamSpecValueArray; 
#line 6651 "test-linc.mc"
typedef struct _GParamSpecObject GParamSpecObject; 
#line 6652 "test-linc.mc"
typedef struct _GParamSpecOverride GParamSpecOverride; 
#line 6653 "test-linc.mc"
typedef struct _GParamSpecGType GParamSpecGType; 
#line 6662 "test-linc.mc"
struct _GParamSpecChar { GParamSpec parent_instance;  gint8 minimum;  gint8 maximum;  gint8 default_value; }; 
#line 6670 "test-linc.mc"
struct _GParamSpecUChar { GParamSpec parent_instance;  guint8 minimum;  guint8 maximum;  guint8 default_value; }; 
#line 6676 "test-linc.mc"
struct _GParamSpecBoolean { GParamSpec parent_instance;  gboolean default_value; }; 
#line 6684 "test-linc.mc"
struct _GParamSpecInt { GParamSpec parent_instance;  gint minimum;  gint maximum;  gint default_value; }; 
#line 6692 "test-linc.mc"
struct _GParamSpecUInt { GParamSpec parent_instance;  guint minimum;  guint maximum;  guint default_value; }; 
#line 6700 "test-linc.mc"
struct _GParamSpecLong { GParamSpec parent_instance;  glong minimum;  glong maximum;  glong default_value; }; 
#line 6708 "test-linc.mc"
struct _GParamSpecULong { GParamSpec parent_instance;  gulong minimum;  gulong maximum;  gulong default_value; }; 
#line 6716 "test-linc.mc"
struct _GParamSpecInt64 { GParamSpec parent_instance;  gint64 minimum;  gint64 maximum;  gint64 default_value; }; 
#line 6724 "test-linc.mc"
struct _GParamSpecUInt64 { GParamSpec parent_instance;  guint64 minimum;  guint64 maximum;  guint64 default_value; }; 
#line 6730 "test-linc.mc"
struct _GParamSpecUnichar { GParamSpec parent_instance;  gunichar default_value; }; 
#line 6737 "test-linc.mc"
struct _GParamSpecEnum { GParamSpec parent_instance;  GEnumClass *enum_class;  gint default_value; }; 
#line 6744 "test-linc.mc"
struct _GParamSpecFlags { GParamSpec parent_instance;  GFlagsClass *flags_class;  guint default_value; }; 
#line 6753 "test-linc.mc"
struct _GParamSpecFloat { GParamSpec parent_instance;  gfloat minimum;  gfloat maximum;  gfloat default_value;  gfloat epsilon; }; 
#line 6762 "test-linc.mc"
struct _GParamSpecDouble { GParamSpec parent_instance;  gdouble minimum;  gdouble maximum;  gdouble default_value;  gdouble epsilon; }; 
#line 6773 "test-linc.mc"
struct _GParamSpecString { GParamSpec parent_instance;  gchar *default_value;  gchar *cset_first;  gchar *cset_nth;  gchar substitutor;  guint null_fold_if_empty:1;  guint ensure_non_null:1; }; 
#line 6777 "test-linc.mc"
struct _GParamSpecParam { GParamSpec parent_instance; }; 
#line 6781 "test-linc.mc"
struct _GParamSpecBoxed { GParamSpec parent_instance; }; 
#line 6785 "test-linc.mc"
struct _GParamSpecPointer { GParamSpec parent_instance; }; 
#line 6791 "test-linc.mc"
struct _GParamSpecValueArray { GParamSpec parent_instance;  GParamSpec *element_spec;  guint fixed_n_elements; }; 
#line 6795 "test-linc.mc"
struct _GParamSpecObject { GParamSpec parent_instance; }; 
#line 6801 "test-linc.mc"
struct _GParamSpecOverride { GParamSpec parent_instance;  GParamSpec *overridden; }; 
#line 6806 "test-linc.mc"
struct _GParamSpecGType { GParamSpec parent_instance;  GType is_a_type; }; 
#line 6815 "test-linc.mc"
 GParamSpec *g_param_spec_char(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gint8 minimum,  gint8 maximum,  gint8 default_value,  GParamFlags flags); 
#line 6822 "test-linc.mc"
 GParamSpec *g_param_spec_uchar(const  gchar *name, const  gchar *nick, const  gchar *blurb,  guint8 minimum,  guint8 maximum,  guint8 default_value,  GParamFlags flags); 
#line 6827 "test-linc.mc"
 GParamSpec *g_param_spec_boolean(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gboolean default_value,  GParamFlags flags); 
#line 6834 "test-linc.mc"
 GParamSpec *g_param_spec_int(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gint minimum,  gint maximum,  gint default_value,  GParamFlags flags); 
#line 6841 "test-linc.mc"
 GParamSpec *g_param_spec_uint(const  gchar *name, const  gchar *nick, const  gchar *blurb,  guint minimum,  guint maximum,  guint default_value,  GParamFlags flags); 
#line 6848 "test-linc.mc"
 GParamSpec *g_param_spec_long(const  gchar *name, const  gchar *nick, const  gchar *blurb,  glong minimum,  glong maximum,  glong default_value,  GParamFlags flags); 
#line 6855 "test-linc.mc"
 GParamSpec *g_param_spec_ulong(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gulong minimum,  gulong maximum,  gulong default_value,  GParamFlags flags); 
#line 6862 "test-linc.mc"
 GParamSpec *g_param_spec_int64(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gint64 minimum,  gint64 maximum,  gint64 default_value,  GParamFlags flags); 
#line 6869 "test-linc.mc"
 GParamSpec *g_param_spec_uint64(const  gchar *name, const  gchar *nick, const  gchar *blurb,  guint64 minimum,  guint64 maximum,  guint64 default_value,  GParamFlags flags); 
#line 6874 "test-linc.mc"
 GParamSpec *g_param_spec_unichar(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gunichar default_value,  GParamFlags flags); 
#line 6880 "test-linc.mc"
 GParamSpec *g_param_spec_enum(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType enum_type,  gint default_value,  GParamFlags flags); 
#line 6886 "test-linc.mc"
 GParamSpec *g_param_spec_flags(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType flags_type,  guint default_value,  GParamFlags flags); 
#line 6893 "test-linc.mc"
 GParamSpec *g_param_spec_float(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gfloat minimum,  gfloat maximum,  gfloat default_value,  GParamFlags flags); 
#line 6900 "test-linc.mc"
 GParamSpec *g_param_spec_double(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gdouble minimum,  gdouble maximum,  gdouble default_value,  GParamFlags flags); 
#line 6905 "test-linc.mc"
 GParamSpec *g_param_spec_string(const  gchar *name, const  gchar *nick, const  gchar *blurb, const  gchar *default_value,  GParamFlags flags); 
#line 6910 "test-linc.mc"
 GParamSpec *g_param_spec_param(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType param_type,  GParamFlags flags); 
#line 6915 "test-linc.mc"
 GParamSpec *g_param_spec_boxed(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType boxed_type,  GParamFlags flags); 
#line 6919 "test-linc.mc"
 GParamSpec *g_param_spec_pointer(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GParamFlags flags); 
#line 6924 "test-linc.mc"
 GParamSpec *g_param_spec_value_array(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GParamSpec *element_spec,  GParamFlags flags); 
#line 6929 "test-linc.mc"
 GParamSpec *g_param_spec_object(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType object_type,  GParamFlags flags); 
#line 6931 "test-linc.mc"
 GParamSpec *g_param_spec_override(const  gchar *name,  GParamSpec *overridden); 
#line 6936 "test-linc.mc"
 GParamSpec *g_param_spec_gtype(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType is_a_type,  GParamFlags flags); 
#line 6937 "test-linc.mc"
extern  GType *g_param_spec_types; 
#line 6944 "test-linc.mc"
void g_source_set_closure( GSource *source,  GClosure *closure); 
#line 6946 "test-linc.mc"
 GType g_io_channel_get_type(void ); 
#line 6947 "test-linc.mc"
 GType g_io_condition_get_type(void ); 
#line 6956 "test-linc.mc"
typedef struct _GTypeModule GTypeModule; 
#line 6957 "test-linc.mc"
typedef struct _GTypeModuleClass GTypeModuleClass; 
#line 6968 "test-linc.mc"
struct _GTypeModule { GObject parent_instance;  guint use_count;  GSList *type_infos;  GSList *interface_infos;  gchar *name; }; 
#line 6984 "test-linc.mc"
struct _GTypeModuleClass { GObjectClass parent_class;  gboolean (*load)( GTypeModule *module); void (*unload)( GTypeModule *module); void (*reserved1)(void ); void (*reserved2)(void ); void (*reserved3)(void ); void (*reserved4)(void ); }; 
#line 6986 "test-linc.mc"
 GType g_type_module_get_type(void ) __attribute__  (( __const__ )) ; 
#line 6987 "test-linc.mc"
 gboolean g_type_module_use( GTypeModule *module); 
#line 6988 "test-linc.mc"
void g_type_module_unuse( GTypeModule *module); 
#line 6990 "test-linc.mc"
void g_type_module_set_name( GTypeModule *module, const  gchar *name); 
#line 6995 "test-linc.mc"
 GType g_type_module_register_type( GTypeModule *module,  GType parent_type, const  gchar *type_name, const  GTypeInfo *type_info,  GTypeFlags flags); 
#line 6999 "test-linc.mc"
void g_type_module_add_interface( GTypeModule *module,  GType instance_type,  GType interface_type, const  GInterfaceInfo *interface_info); 
#line 7002 "test-linc.mc"
 GType g_type_module_register_enum( GTypeModule *module, const  gchar *name, const  GEnumValue *const_static_values); 
#line 7005 "test-linc.mc"
 GType g_type_module_register_flags( GTypeModule *module, const  gchar *name, const  GFlagsValue *const_static_values); 
#line 7010 "test-linc.mc"
typedef struct _GTypePluginClass GTypePluginClass; 
#line 7011 "test-linc.mc"
typedef void (*GTypePluginUse)( GTypePlugin *plugin); 
#line 7012 "test-linc.mc"
typedef void (*GTypePluginUnuse)( GTypePlugin *plugin); 
#line 7016 "test-linc.mc"
typedef void (*GTypePluginCompleteTypeInfo)( GTypePlugin *plugin,  GType g_type,  GTypeInfo *info,  GTypeValueTable *value_table); 
#line 7020 "test-linc.mc"
typedef void (*GTypePluginCompleteInterfaceInfo)( GTypePlugin *plugin,  GType instance_type,  GType interface_type,  GInterfaceInfo *info); 
#line 7031 "test-linc.mc"
struct _GTypePluginClass { GTypeInterface base_iface;  GTypePluginUse use_plugin;  GTypePluginUnuse unuse_plugin;  GTypePluginCompleteTypeInfo complete_type_info;  GTypePluginCompleteInterfaceInfo complete_interface_info; }; 
#line 7035 "test-linc.mc"
 GType g_type_plugin_get_type(void ) __attribute__  (( __const__ )) ; 
#line 7036 "test-linc.mc"
void g_type_plugin_use( GTypePlugin *plugin); 
#line 7037 "test-linc.mc"
void g_type_plugin_unuse( GTypePlugin *plugin); 
#line 7041 "test-linc.mc"
void g_type_plugin_complete_type_info( GTypePlugin *plugin,  GType g_type,  GTypeInfo *info,  GTypeValueTable *value_table); 
#line 7045 "test-linc.mc"
void g_type_plugin_complete_interface_info( GTypePlugin *plugin,  GType instance_type,  GType interface_type,  GInterfaceInfo *info); 
#line 7054 "test-linc.mc"
typedef struct _GValueArray GValueArray; 
#line 7062 "test-linc.mc"
struct _GValueArray { guint n_values;  GValue *values;  guint n_prealloced; }; 
#line 7067 "test-linc.mc"
 GValue *g_value_array_get_nth( GValueArray *value_array,  guint index_); 
#line 7068 "test-linc.mc"
 GValueArray *g_value_array_new( guint n_prealloced); 
#line 7069 "test-linc.mc"
void g_value_array_free( GValueArray *value_array); 
#line 7070 "test-linc.mc"
 GValueArray *g_value_array_copy(const  GValueArray *value_array); 
#line 7072 "test-linc.mc"
 GValueArray *g_value_array_prepend( GValueArray *value_array, const  GValue *value); 
#line 7074 "test-linc.mc"
 GValueArray *g_value_array_append( GValueArray *value_array, const  GValue *value); 
#line 7077 "test-linc.mc"
 GValueArray *g_value_array_insert( GValueArray *value_array,  guint index_, const  GValue *value); 
#line 7079 "test-linc.mc"
 GValueArray *g_value_array_remove( GValueArray *value_array,  guint index_); 
#line 7081 "test-linc.mc"
 GValueArray *g_value_array_sort( GValueArray *value_array,  GCompareFunc compare_func); 
#line 7084 "test-linc.mc"
 GValueArray *g_value_array_sort_with_data( GValueArray *value_array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 7091 "test-linc.mc"
void g_value_set_char( GValue *value,  gchar v_char); 
#line 7092 "test-linc.mc"
 gchar g_value_get_char(const  GValue *value); 
#line 7094 "test-linc.mc"
void g_value_set_uchar( GValue *value,  guchar v_uchar); 
#line 7095 "test-linc.mc"
 guchar g_value_get_uchar(const  GValue *value); 
#line 7097 "test-linc.mc"
void g_value_set_boolean( GValue *value,  gboolean v_boolean); 
#line 7098 "test-linc.mc"
 gboolean g_value_get_boolean(const  GValue *value); 
#line 7100 "test-linc.mc"
void g_value_set_int( GValue *value,  gint v_int); 
#line 7101 "test-linc.mc"
 gint g_value_get_int(const  GValue *value); 
#line 7103 "test-linc.mc"
void g_value_set_uint( GValue *value,  guint v_uint); 
#line 7104 "test-linc.mc"
 guint g_value_get_uint(const  GValue *value); 
#line 7106 "test-linc.mc"
void g_value_set_long( GValue *value,  glong v_long); 
#line 7107 "test-linc.mc"
 glong g_value_get_long(const  GValue *value); 
#line 7109 "test-linc.mc"
void g_value_set_ulong( GValue *value,  gulong v_ulong); 
#line 7110 "test-linc.mc"
 gulong g_value_get_ulong(const  GValue *value); 
#line 7112 "test-linc.mc"
void g_value_set_int64( GValue *value,  gint64 v_int64); 
#line 7113 "test-linc.mc"
 gint64 g_value_get_int64(const  GValue *value); 
#line 7115 "test-linc.mc"
void g_value_set_uint64( GValue *value,  guint64 v_uint64); 
#line 7116 "test-linc.mc"
 guint64 g_value_get_uint64(const  GValue *value); 
#line 7118 "test-linc.mc"
void g_value_set_float( GValue *value,  gfloat v_float); 
#line 7119 "test-linc.mc"
 gfloat g_value_get_float(const  GValue *value); 
#line 7121 "test-linc.mc"
void g_value_set_double( GValue *value,  gdouble v_double); 
#line 7122 "test-linc.mc"
 gdouble g_value_get_double(const  GValue *value); 
#line 7124 "test-linc.mc"
void g_value_set_string( GValue *value, const  gchar *v_string); 
#line 7126 "test-linc.mc"
void g_value_set_static_string( GValue *value, const  gchar *v_string); 
#line 7127 "test-linc.mc"
const  gchar *g_value_get_string(const  GValue *value); 
#line 7128 "test-linc.mc"
 gchar *g_value_dup_string(const  GValue *value); 
#line 7130 "test-linc.mc"
void g_value_set_pointer( GValue *value,  gpointer v_pointer); 
#line 7131 "test-linc.mc"
 gpointer g_value_get_pointer(const  GValue *value); 
#line 7132 "test-linc.mc"
 GType g_gtype_get_type(void ); 
#line 7134 "test-linc.mc"
void g_value_set_gtype( GValue *value,  GType v_gtype); 
#line 7135 "test-linc.mc"
 GType g_value_get_gtype(const  GValue *value); 
#line 7139 "test-linc.mc"
 GType g_pointer_type_register_static(const  gchar *name); 
#line 7142 "test-linc.mc"
 gchar *g_strdup_value_contents(const  GValue *value); 
#line 7146 "test-linc.mc"
void g_value_take_string( GValue *value,  gchar *v_string); 
#line 7149 "test-linc.mc"
void g_value_set_string_take_ownership( GValue *value,  gchar *v_string); 
#line 7154 "test-linc.mc"
typedef  gchar *gchararray; 
#line 7166 "test-linc.mc"
typedef enum {LINK_CONNECTION_SSL=1 << 0,LINK_CONNECTION_NONBLOCKING=1 << 1,LINK_CONNECTION_BLOCK_SIGNAL=1 << 2,LINK_CONNECTION_LOCAL_ONLY=1 << 3}LinkConnectionOptions; 
#line 7168 "test-linc.mc"
typedef struct _LinkWatch LinkWatch; 
#line 7169 "test-linc.mc"
typedef struct _LinkProtocolInfo LinkProtocolInfo; 
#line 7170 "test-linc.mc"
 GMutex *link_mutex_new(void ); 
#line 7182 "test-linc.mc"
typedef  __u_char u_char; 
#line 7183 "test-linc.mc"
typedef  __u_short u_short; 
#line 7184 "test-linc.mc"
typedef  __u_int u_int; 
#line 7185 "test-linc.mc"
typedef  __u_long u_long; 
#line 7186 "test-linc.mc"
typedef  __quad_t quad_t; 
#line 7187 "test-linc.mc"
typedef  __u_quad_t u_quad_t; 
#line 7188 "test-linc.mc"
typedef  __fsid_t fsid_t; 
#line 7193 "test-linc.mc"
typedef  __loff_t loff_t; 
#line 7197 "test-linc.mc"
typedef  __ino_t ino_t; 
#line 7198 "test-linc.mc"
typedef  __dev_t dev_t; 
#line 7203 "test-linc.mc"
typedef  __gid_t gid_t; 
#line 7208 "test-linc.mc"
typedef  __mode_t mode_t; 
#line 7213 "test-linc.mc"
typedef  __nlink_t nlink_t; 
#line 7214 "test-linc.mc"
typedef  __off_t off_t; 
#line 7215 "test-linc.mc"
typedef  __ssize_t ssize_t; 
#line 7221 "test-linc.mc"
typedef  __daddr_t daddr_t; 
#line 7222 "test-linc.mc"
typedef  __caddr_t caddr_t; 
#line 7228 "test-linc.mc"
typedef  __key_t key_t; 
#line 7232 "test-linc.mc"
typedef unsigned long int ulong; 
#line 7233 "test-linc.mc"
typedef unsigned short int ushort; 
#line 7234 "test-linc.mc"
typedef unsigned int uint; 
#line 7235 "test-linc.mc"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 7236 "test-linc.mc"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 7237 "test-linc.mc"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 7238 "test-linc.mc"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 7241 "test-linc.mc"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 7242 "test-linc.mc"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 7243 "test-linc.mc"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 7244 "test-linc.mc"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 7246 "test-linc.mc"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
#line 7251 "test-linc.mc"
typedef  __suseconds_t suseconds_t; 
#line 7257 "test-linc.mc"
typedef long int __fd_mask; 
#line 7269 "test-linc.mc"
typedef struct { __fd_mask __fds_bits[1024 / (8 * sizeof ( __fd_mask ))]; }fd_set; 
#line 7276 "test-linc.mc"
typedef  __fd_mask fd_mask; 
#line 7281 "test-linc.mc"
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 7286 "test-linc.mc"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
#line 7294 "test-linc.mc"
 __extension__ extern __inline unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 7297 "test-linc.mc"
 __extension__ extern __inline unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 7301 "test-linc.mc"
 __extension__ extern __inline unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ )) ; 
#line 7306 "test-linc.mc"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_major(unsigned long long int __dev)  {

#line 7307 "test-linc.mc"
return ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff)); }
 
#line 7312 "test-linc.mc"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  {

#line 7313 "test-linc.mc"
return (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff)); }
 
#line 7318 "test-linc.mc"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  {

#line 7321 "test-linc.mc"
return ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32)); }
 
#line 7323 "test-linc.mc"
typedef  __blkcnt_t blkcnt_t; 
#line 7327 "test-linc.mc"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 7331 "test-linc.mc"
typedef  __fsfilcnt_t fsfilcnt_t; 
#line 7347 "test-linc.mc"
struct iovec {void *iov_base;  size_t iov_len; }; 
#line 7348 "test-linc.mc"
extern  ssize_t readv(int __fd, __const struct iovec *__iovec, int __count); 
#line 7349 "test-linc.mc"
extern  ssize_t writev(int __fd, __const struct iovec *__iovec, int __count); 
#line 7363 "test-linc.mc"
typedef  __socklen_t socklen_t; 
#line 7387 "test-linc.mc"
enum __socket_type {SOCK_STREAM=1,SOCK_DGRAM=2,SOCK_RAW=3,SOCK_RDM=4,SOCK_SEQPACKET=5,SOCK_PACKET=10}; 
#line 7388 "test-linc.mc"
typedef unsigned short int sa_family_t; 
#line 7395 "test-linc.mc"
struct sockaddr { sa_family_t sa_family; char sa_data[14]; }; 
#line 7401 "test-linc.mc"
struct sockaddr_storage { sa_family_t ss_family;  __uint32_t __ss_align; char __ss_padding[(128 - (2 * sizeof ( __uint32_t )))]; }; 
#line 7444 "test-linc.mc"
enum {MSG_OOB=0x01,MSG_PEEK=0x02,MSG_DONTROUTE=0x04,MSG_CTRUNC=0x08,MSG_PROXY=0x10,MSG_TRUNC=0x20,MSG_DONTWAIT=0x40,MSG_EOR=0x80,MSG_WAITALL=0x100,MSG_FIN=0x200,MSG_SYN=0x400,MSG_CONFIRM=0x800,MSG_RST=0x1000,MSG_ERRQUEUE=0x2000,MSG_NOSIGNAL=0x4000,MSG_MORE=0x8000}; 
#line 7461 "test-linc.mc"
struct msghdr {void *msg_name;  socklen_t msg_namelen; struct iovec *msg_iov;  size_t msg_iovlen; void *msg_control;  size_t msg_controllen; int msg_flags; }; 
#line 7473 "test-linc.mc"
struct cmsghdr { size_t cmsg_len; int cmsg_level; int cmsg_type;  __extension__ unsigned char __cmsg_data[]; }; 
#line 7475 "test-linc.mc"
extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg) __attribute__  (( __nothrow__ )) ; 
#line 7482 "test-linc.mc"
extern __inline struct cmsghdr * __attribute__  (( __nothrow__ )) __cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg)  {

#line 7487 "test-linc.mc"
if ((( size_t )(__cmsg->cmsg_len)) < sizeof (struct cmsghdr )){
return 0; }
#line 7487 "test-linc.mc"
__cmsg = ((struct cmsghdr *)(((unsigned char *)__cmsg) + ((((__cmsg->cmsg_len)) + sizeof ( size_t ) - 1) & (( size_t )(~(sizeof ( size_t ) - 1)))))); 
#line 7489 "test-linc.mc"
if (((unsigned char *)(__cmsg + 1)) > (((unsigned char *)(__mhdr->msg_control)) + (__mhdr->msg_controllen)) || (((unsigned char *)__cmsg) + ((((__cmsg->cmsg_len)) + sizeof ( size_t ) - 1) & (( size_t )(~(sizeof ( size_t ) - 1)))) > (((unsigned char *)(__mhdr->msg_control)) + (__mhdr->msg_controllen)))){
return 0; }
#line 7495 "test-linc.mc"
return __cmsg; }
 
#line 7509 "test-linc.mc"
enum {SCM_RIGHTS=0x01,SCM_CREDENTIALS=0x02}; 
#line 7518 "test-linc.mc"
struct ucred { pid_t pid;  uid_t uid;  gid_t gid; }; 
#line 7531 "test-linc.mc"
struct linger {int l_onoff; int l_linger; }; 
#line 7540 "test-linc.mc"
struct osockaddr {unsigned short int sa_family; unsigned char sa_data[14]; }; 
#line 7553 "test-linc.mc"
enum {SHUT_RD=0,SHUT_WR,SHUT_RDWR}; 
#line 7554 "test-linc.mc"
extern int socket(int __domain, int __type, int __protocol) __attribute__  (( __nothrow__ )) ; 
#line 7561 "test-linc.mc"
extern int socketpair(int __domain, int __type, int __protocol, int __fds[2]) __attribute__  (( __nothrow__ )) ; 
#line 7565 "test-linc.mc"
extern int bind(int __fd, __const struct sockaddr *__addr,  socklen_t __len) __attribute__  (( __nothrow__ )) ; 
#line 7569 "test-linc.mc"
extern int getsockname(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 7570 "test-linc.mc"
extern int connect(int __fd, __const struct sockaddr *__addr,  socklen_t __len); 
#line 7575 "test-linc.mc"
extern int getpeername(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 7582 "test-linc.mc"
extern  ssize_t send(int __fd, __const void *__buf,  size_t __n, int __flags); 
#line 7589 "test-linc.mc"
extern  ssize_t recv(int __fd, void *__buf,  size_t __n, int __flags); 
#line 7598 "test-linc.mc"
extern  ssize_t sendto(int __fd, __const void *__buf,  size_t __n, int __flags, __const struct sockaddr *__addr,  socklen_t __addr_len); 
#line 7601 "test-linc.mc"
extern  ssize_t recvfrom(int __fd, void *__restrict __buf,  size_t __n, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
#line 7610 "test-linc.mc"
extern  ssize_t sendmsg(int __fd, __const struct msghdr *__message, int __flags); 
#line 7617 "test-linc.mc"
extern  ssize_t recvmsg(int __fd, struct msghdr *__message, int __flags); 
#line 7625 "test-linc.mc"
extern int getsockopt(int __fd, int __level, int __optname, void *__restrict __optval,  socklen_t *__restrict __optlen) __attribute__  (( __nothrow__ )) ; 
#line 7631 "test-linc.mc"
extern int setsockopt(int __fd, int __level, int __optname, __const void *__optval,  socklen_t __optlen) __attribute__  (( __nothrow__ )) ; 
#line 7637 "test-linc.mc"
extern int listen(int __fd, int __n) __attribute__  (( __nothrow__ )) ; 
#line 7639 "test-linc.mc"
extern int accept(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
#line 7647 "test-linc.mc"
extern int shutdown(int __fd, int __how) __attribute__  (( __nothrow__ )) ; 
#line 7652 "test-linc.mc"
extern int sockatmark(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 7660 "test-linc.mc"
extern int isfdtype(int __fd, int __fdtype) __attribute__  (( __nothrow__ )) ; 
#line 7662 "test-linc.mc"
typedef unsigned char uint8_t; 
#line 7663 "test-linc.mc"
typedef unsigned short int uint16_t; 
#line 7665 "test-linc.mc"
typedef unsigned int uint32_t; 
#line 7672 "test-linc.mc"
 __extension__ typedef unsigned long long int uint64_t; 
#line 7679 "test-linc.mc"
typedef signed char int_least8_t; 
#line 7680 "test-linc.mc"
typedef short int int_least16_t; 
#line 7681 "test-linc.mc"
typedef int int_least32_t; 
#line 7686 "test-linc.mc"
 __extension__ typedef long long int int_least64_t; 
#line 7690 "test-linc.mc"
typedef unsigned char uint_least8_t; 
#line 7691 "test-linc.mc"
typedef unsigned short int uint_least16_t; 
#line 7692 "test-linc.mc"
typedef unsigned int uint_least32_t; 
#line 7697 "test-linc.mc"
 __extension__ typedef unsigned long long int uint_least64_t; 
#line 7704 "test-linc.mc"
typedef signed char int_fast8_t; 
#line 7710 "test-linc.mc"
typedef int int_fast16_t; 
#line 7711 "test-linc.mc"
typedef int int_fast32_t; 
#line 7713 "test-linc.mc"
 __extension__ typedef long long int int_fast64_t; 
#line 7717 "test-linc.mc"
typedef unsigned char uint_fast8_t; 
#line 7723 "test-linc.mc"
typedef unsigned int uint_fast16_t; 
#line 7724 "test-linc.mc"
typedef unsigned int uint_fast32_t; 
#line 7726 "test-linc.mc"
 __extension__ typedef unsigned long long int uint_fast64_t; 
#line 7727 "test-linc.mc"
typedef int intptr_t; 
#line 7730 "test-linc.mc"
typedef unsigned int uintptr_t; 
#line 7732 "test-linc.mc"
 __extension__ typedef long long int intmax_t; 
#line 7734 "test-linc.mc"
 __extension__ typedef unsigned long long int uintmax_t; 
#line 7799 "test-linc.mc"
enum {IPPROTO_IP=0,IPPROTO_HOPOPTS=0,IPPROTO_ICMP=1,IPPROTO_IGMP=2,IPPROTO_IPIP=4,IPPROTO_TCP=6,IPPROTO_EGP=8,IPPROTO_PUP=12,IPPROTO_UDP=17,IPPROTO_IDP=22,IPPROTO_TP=29,IPPROTO_IPV6=41,IPPROTO_ROUTING=43,IPPROTO_FRAGMENT=44,IPPROTO_RSVP=46,IPPROTO_GRE=47,IPPROTO_ESP=50,IPPROTO_AH=51,IPPROTO_ICMPV6=58,IPPROTO_NONE=59,IPPROTO_DSTOPTS=60,IPPROTO_MTP=92,IPPROTO_ENCAP=98,IPPROTO_PIM=103,IPPROTO_COMP=108,IPPROTO_SCTP=132,IPPROTO_RAW=255,IPPROTO_MAX}; 
#line 7803 "test-linc.mc"
typedef  uint16_t in_port_t; 
#line 7843 "test-linc.mc"
enum {IPPORT_ECHO=7,IPPORT_DISCARD=9,IPPORT_SYSTAT=11,IPPORT_DAYTIME=13,IPPORT_NETSTAT=15,IPPORT_FTP=21,IPPORT_TELNET=23,IPPORT_SMTP=25,IPPORT_TIMESERVER=37,IPPORT_NAMESERVER=42,IPPORT_WHOIS=43,IPPORT_MTP=57,IPPORT_TFTP=69,IPPORT_RJE=77,IPPORT_FINGER=79,IPPORT_TTYLINK=87,IPPORT_SUPDUP=95,IPPORT_EXECSERVER=512,IPPORT_LOGINSERVER=513,IPPORT_CMDSERVER=514,IPPORT_EFSSERVER=520,IPPORT_BIFFUDP=512,IPPORT_WHOSERVER=513,IPPORT_ROUTESERVER=520,IPPORT_RESERVED=1024,IPPORT_USERRESERVED=5000}; 
#line 7847 "test-linc.mc"
typedef  uint32_t in_addr_t; 
#line 7851 "test-linc.mc"
struct in_addr { in_addr_t s_addr; }; 
#line 7863 "test-linc.mc"
struct in6_addr {union { uint8_t u6_addr8[16];  uint16_t u6_addr16[8];  uint32_t u6_addr32[4]; }in6_u; }; 
#line 7865 "test-linc.mc"
extern const struct in6_addr in6addr_any; 
#line 7866 "test-linc.mc"
extern const struct in6_addr in6addr_loopback; 
#line 7878 "test-linc.mc"
struct sockaddr_in { sa_family_t sin_family;  in_port_t sin_port; struct in_addr sin_addr; unsigned char sin_zero[sizeof (struct sockaddr ) - (sizeof (unsigned short int )) - sizeof ( in_port_t ) - sizeof (struct in_addr )]; }; 
#line 7888 "test-linc.mc"
struct sockaddr_in6 { sa_family_t sin6_family;  in_port_t sin6_port;  uint32_t sin6_flowinfo; struct in6_addr sin6_addr;  uint32_t sin6_scope_id; }; 
#line 7899 "test-linc.mc"
struct ip_mreq {struct in_addr imr_multiaddr; struct in_addr imr_interface; }; 
#line 7911 "test-linc.mc"
struct ip_mreq_source {struct in_addr imr_multiaddr; struct in_addr imr_interface; struct in_addr imr_sourceaddr; }; 
#line 7921 "test-linc.mc"
struct ipv6_mreq {struct in6_addr ipv6mr_multiaddr; unsigned int ipv6mr_interface; }; 
#line 7932 "test-linc.mc"
struct group_req { uint32_t gr_interface; struct sockaddr_storage gr_group; }; 
#line 7944 "test-linc.mc"
struct group_source_req { uint32_t gsr_interface; struct sockaddr_storage gsr_group; struct sockaddr_storage gsr_source; }; 
#line 7963 "test-linc.mc"
struct ip_msfilter {struct in_addr imsf_multiaddr; struct in_addr imsf_interface;  uint32_t imsf_fmode;  uint32_t imsf_numsrc; struct in_addr imsf_slist[1]; }; 
#line 7984 "test-linc.mc"
struct group_filter { uint32_t gf_interface; struct sockaddr_storage gf_group;  uint32_t gf_fmode;  uint32_t gf_numsrc; struct sockaddr_storage gf_slist[1]; }; 
#line 7989 "test-linc.mc"
struct ip_opts {struct in_addr ip_dst; char ip_opts[40]; }; 
#line 7997 "test-linc.mc"
struct ip_mreqn {struct in_addr imr_multiaddr; struct in_addr imr_address; int imr_ifindex; }; 
#line 8005 "test-linc.mc"
struct in_pktinfo {int ipi_ifindex; struct in_addr ipi_spec_dst; struct in_addr ipi_addr; }; 
#line 8006 "test-linc.mc"
extern  uint32_t ntohl( uint32_t __netlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 8008 "test-linc.mc"
extern  uint16_t ntohs( uint16_t __netshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 8010 "test-linc.mc"
extern  uint32_t htonl( uint32_t __hostlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 8012 "test-linc.mc"
extern  uint16_t htons( uint16_t __hostshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 8017 "test-linc.mc"
extern int bindresvport(int __sockfd, struct sockaddr_in *__sock_in) __attribute__  (( __nothrow__ )) ; 
#line 8021 "test-linc.mc"
extern int bindresvport6(int __sockfd, struct sockaddr_in6 *__sock_in) __attribute__  (( __nothrow__ )) ; 
#line 8026 "test-linc.mc"
struct in6_pktinfo {struct in6_addr ipi6_addr; unsigned int ipi6_ifindex; }; 
#line 8040 "test-linc.mc"
struct rpcent {char *r_name; char **r_aliases; int r_number; }; 
#line 8042 "test-linc.mc"
extern void setrpcent(int __stayopen) __attribute__  (( __nothrow__ )) ; 
#line 8043 "test-linc.mc"
extern void endrpcent(void ) __attribute__  (( __nothrow__ )) ; 
#line 8044 "test-linc.mc"
extern struct rpcent *getrpcbyname(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 8045 "test-linc.mc"
extern struct rpcent *getrpcbynumber(int __number) __attribute__  (( __nothrow__ )) ; 
#line 8046 "test-linc.mc"
extern struct rpcent *getrpcent(void ) __attribute__  (( __nothrow__ )) ; 
#line 8051 "test-linc.mc"
extern int getrpcbyname_r(__const char *__name, struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 8055 "test-linc.mc"
extern int getrpcbynumber_r(int __number, struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 8058 "test-linc.mc"
extern int getrpcent_r(struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 8068 "test-linc.mc"
struct netent {char *n_name; char **n_aliases; int n_addrtype;  uint32_t n_net; }; 
#line 8076 "test-linc.mc"
extern int *__h_errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 8077 "test-linc.mc"
extern void herror(__const char *__str) __attribute__  (( __nothrow__ )) ; 
#line 8080 "test-linc.mc"
extern __const char *hstrerror(int __err_num) __attribute__  (( __nothrow__ )) ; 
#line 8093 "test-linc.mc"
struct hostent {char *h_name; char **h_aliases; int h_addrtype; int h_length; char **h_addr_list; }; 
#line 8100 "test-linc.mc"
extern void sethostent(int __stay_open); 
#line 8106 "test-linc.mc"
extern void endhostent(void ); 
#line 8113 "test-linc.mc"
extern struct hostent *gethostent(void ); 
#line 8121 "test-linc.mc"
extern struct hostent *gethostbyaddr(__const void *__addr,  __socklen_t __len, int __type); 
#line 8127 "test-linc.mc"
extern struct hostent *gethostbyname(__const char *__name); 
#line 8128 "test-linc.mc"
extern struct hostent *gethostbyname2(__const char *__name, int __af); 
#line 8132 "test-linc.mc"
extern int gethostent_r(struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 8139 "test-linc.mc"
extern int gethostbyaddr_r(__const void *__restrict __addr,  __socklen_t __len, int __type, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 8145 "test-linc.mc"
extern int gethostbyname_r(__const char *__restrict __name, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 8151 "test-linc.mc"
extern int gethostbyname2_r(__const char *__restrict __name, int __af, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 8152 "test-linc.mc"
extern void setnetent(int __stay_open); 
#line 8158 "test-linc.mc"
extern void endnetent(void ); 
#line 8165 "test-linc.mc"
extern struct netent *getnetent(void ); 
#line 8172 "test-linc.mc"
extern struct netent *getnetbyaddr( uint32_t __net, int __type); 
#line 8178 "test-linc.mc"
extern struct netent *getnetbyname(__const char *__name); 
#line 8182 "test-linc.mc"
extern int getnetent_r(struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 8188 "test-linc.mc"
extern int getnetbyaddr_r( uint32_t __net, int __type, struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 8194 "test-linc.mc"
extern int getnetbyname_r(__const char *__restrict __name, struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 8205 "test-linc.mc"
struct servent {char *s_name; char **s_aliases; int s_port; char *s_proto; }; 
#line 8212 "test-linc.mc"
extern void setservent(int __stay_open); 
#line 8218 "test-linc.mc"
extern void endservent(void ); 
#line 8225 "test-linc.mc"
extern struct servent *getservent(void ); 
#line 8233 "test-linc.mc"
extern struct servent *getservbyname(__const char *__name, __const char *__proto); 
#line 8240 "test-linc.mc"
extern struct servent *getservbyport(int __port, __const char *__proto); 
#line 8243 "test-linc.mc"
extern int getservent_r(struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 8249 "test-linc.mc"
extern int getservbyname_r(__const char *__restrict __name, __const char *__restrict __proto, struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 8254 "test-linc.mc"
extern int getservbyport_r(int __port, __const char *__restrict __proto, struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 8264 "test-linc.mc"
struct protoent {char *p_name; char **p_aliases; int p_proto; }; 
#line 8271 "test-linc.mc"
extern void setprotoent(int __stay_open); 
#line 8277 "test-linc.mc"
extern void endprotoent(void ); 
#line 8284 "test-linc.mc"
extern struct protoent *getprotoent(void ); 
#line 8290 "test-linc.mc"
extern struct protoent *getprotobyname(__const char *__name); 
#line 8296 "test-linc.mc"
extern struct protoent *getprotobynumber(int __proto); 
#line 8299 "test-linc.mc"
extern int getprotoent_r(struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 8304 "test-linc.mc"
extern int getprotobyname_r(__const char *__restrict __name, struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 8309 "test-linc.mc"
extern int getprotobynumber_r(int __proto, struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 8310 "test-linc.mc"
extern int setnetgrent(__const char *__netgroup); 
#line 8318 "test-linc.mc"
extern void endnetgrent(void ); 
#line 8321 "test-linc.mc"
extern int getnetgrent(char **__restrict __hostp, char **__restrict __userp, char **__restrict __domainp); 
#line 8323 "test-linc.mc"
extern int innetgr(__const char *__netgroup, __const char *__host, __const char *__user, __const char *domain); 
#line 8334 "test-linc.mc"
extern int getnetgrent_r(char **__restrict __hostp, char **__restrict __userp, char **__restrict __domainp, char *__restrict __buffer,  size_t __buflen); 
#line 8338 "test-linc.mc"
extern int rcmd(char **__restrict __ahost, unsigned short int __rport, __const char *__restrict __locuser, __const char *__restrict __remuser, __const char *__restrict __cmd, int *__restrict __fd2p); 
#line 8343 "test-linc.mc"
extern int rcmd_af(char **__restrict __ahost, unsigned short int __rport, __const char *__restrict __locuser, __const char *__restrict __remuser, __const char *__restrict __cmd, int *__restrict __fd2p,  sa_family_t __af); 
#line 8347 "test-linc.mc"
extern int rexec(char **__restrict __ahost, int __rport, __const char *__restrict __name, __const char *__restrict __pass, __const char *__restrict __cmd, int *__restrict __fd2p); 
#line 8352 "test-linc.mc"
extern int rexec_af(char **__restrict __ahost, int __rport, __const char *__restrict __name, __const char *__restrict __pass, __const char *__restrict __cmd, int *__restrict __fd2p,  sa_family_t __af); 
#line 8354 "test-linc.mc"
extern int ruserok(__const char *__rhost, int __suser, __const char *__remuser, __const char *__locuser); 
#line 8357 "test-linc.mc"
extern int ruserok_af(__const char *__rhost, int __suser, __const char *__remuser, __const char *__locuser,  sa_family_t __af); 
#line 8358 "test-linc.mc"
extern int rresvport(int *__alport); 
#line 8359 "test-linc.mc"
extern int rresvport_af(int *__alport,  sa_family_t __af); 
#line 8376 "test-linc.mc"
struct addrinfo {int ai_flags; int ai_family; int ai_socktype; int ai_protocol;  socklen_t ai_addrlen; struct sockaddr *ai_addr; char *ai_canonname; struct addrinfo *ai_next; }; 
#line 8380 "test-linc.mc"
extern int getaddrinfo(__const char *__restrict __name, __const char *__restrict __service, __const struct addrinfo *__restrict __req, struct addrinfo **__restrict __pai); 
#line 8383 "test-linc.mc"
extern void freeaddrinfo(struct addrinfo *__ai) __attribute__  (( __nothrow__ )) ; 
#line 8386 "test-linc.mc"
extern __const char *gai_strerror(int __ecode) __attribute__  (( __nothrow__ )) ; 
#line 8395 "test-linc.mc"
extern int getnameinfo(__const struct sockaddr *__restrict __sa,  socklen_t __salen, char *__restrict __host,  socklen_t __hostlen, char *__restrict __serv,  socklen_t __servlen, unsigned int __flags); 
#line 8400 "test-linc.mc"
typedef unsigned int LinkSockLen; 
#line 8405 "test-linc.mc"
typedef enum {LINK_PROTOCOL_SECURE=1 << 0,LINK_PROTOCOL_NEEDS_BIND=1 << 1}LinkProtocolFlags; 
#line 8408 "test-linc.mc"
typedef void (*LinkProtocolSetupFunc)(int fd,  LinkConnectionOptions cnx_flags); 
#line 8411 "test-linc.mc"
typedef void (*LinkProtocolDestroyFunc)(int fd, const char *host_info, const char *serv_info); 
#line 8415 "test-linc.mc"
typedef struct sockaddr *(*LinkProtocolGetSockAddrFunc)(const  LinkProtocolInfo *proto, const char *hostname, const char *service,  LinkSockLen *saddr_len); 
#line 8420 "test-linc.mc"
typedef  gboolean (*LinkProtocolGetSockInfoFunc)(const  LinkProtocolInfo *proto, const struct sockaddr *sockaddr,  gchar **hostname,  gchar **service); 
#line 8424 "test-linc.mc"
typedef  gboolean (*LinkProtocolIsLocal)(const  LinkProtocolInfo *proto, const struct sockaddr *sockaddr,  LinkSockLen saddr_len); 
#line 8440 "test-linc.mc"
struct _LinkProtocolInfo {const char *name; int family; int addr_len; int stream_proto_num;  LinkProtocolFlags flags;  LinkProtocolSetupFunc setup;  LinkProtocolDestroyFunc destroy;  LinkProtocolGetSockAddrFunc get_sockaddr;  LinkProtocolGetSockInfoFunc get_sockinfo;  LinkProtocolIsLocal is_local;  gpointer dummy[8]; }; 
#line 8447 "test-linc.mc"
typedef enum {LINK_NET_ID_IS_LOCAL,LINK_NET_ID_IS_SHORT_HOSTNAME,LINK_NET_ID_IS_FQDN,LINK_NET_ID_IS_IPADDR}LinkNetIdType; 
#line 8450 "test-linc.mc"
 LinkProtocolInfo *link_protocol_find(const char *name); 
#line 8451 "test-linc.mc"
 LinkProtocolInfo *link_protocol_find_num(const int family); 
#line 8452 "test-linc.mc"
 LinkProtocolInfo *link_protocol_all(void ); 
#line 8453 "test-linc.mc"
char *link_get_tmpdir(void ); 
#line 8454 "test-linc.mc"
void link_set_tmpdir(const char *dir); 
#line 8455 "test-linc.mc"
void link_use_local_hostname( LinkNetIdType use); 
#line 8456 "test-linc.mc"
const char *link_get_local_hostname(void ); 
#line 8460 "test-linc.mc"
typedef enum {LINK_CONNECTING,LINK_CONNECTED,LINK_DISCONNECTED}LinkConnectionStatus; 
#line 8462 "test-linc.mc"
typedef struct _LinkWriteOpts LinkWriteOpts; 
#line 8463 "test-linc.mc"
typedef struct _LinkConnectionPrivate LinkConnectionPrivate; 
#line 8482 "test-linc.mc"
typedef struct { GObject parent; const  LinkProtocolInfo *proto;  LinkConnectionStatus status;  LinkConnectionOptions options;  guint was_initiated:1;  guint is_auth:1;  guint inhibit_reconnect:1;  gchar *remote_host_info;  gchar *remote_serv_info;  LinkConnectionPrivate *priv;  GSList *idle_broken_callbacks; }LinkConnection; 
#line 8499 "test-linc.mc"
typedef struct { GObjectClass parent_class; void (*state_changed)( LinkConnection *cnx,  LinkConnectionStatus status);  gboolean (*handle_input)( LinkConnection *cnx); void (*broken)( LinkConnection *cnx); void (*blocking)( LinkConnection *cnx,  gulong buffer_size); }LinkConnectionClass; 
#line 8501 "test-linc.mc"
 GType link_connection_get_type(void ) __attribute__  (( __const__ )) ; 
#line 8510 "test-linc.mc"
void link_connection_from_fd( LinkConnection *cnx, int fd, const  LinkProtocolInfo *proto,  gchar *remote_host_info,  gchar *remote_serv_info,  gboolean was_initiated,  LinkConnectionStatus status,  LinkConnectionOptions options); 
#line 8518 "test-linc.mc"
 LinkConnection *link_connection_initiate( GType derived_type, const char *proto_name, const char *remote_host_info, const char *remote_serv_info,  LinkConnectionOptions options, const char *first_property, ...); 
#line 8519 "test-linc.mc"
 LinkConnectionStatus link_connection_try_reconnect( LinkConnection *cnx); 
#line 8521 "test-linc.mc"
 gpointer link_connection_ref( gpointer cnx); 
#line 8522 "test-linc.mc"
void link_connection_unref( gpointer cnx); 
#line 8528 "test-linc.mc"
typedef enum {LINK_IO_OK=0,LINK_IO_FATAL_ERROR=(-1),LINK_IO_QUEUED_DATA=(-2)}LinkIOStatus; 
#line 8533 "test-linc.mc"
 glong link_connection_read( LinkConnection *cnx,  guchar *buf, int len,  gboolean block_for_full_read); 
#line 8540 "test-linc.mc"
 LinkIOStatus link_connection_write( LinkConnection *cnx, const  guchar *buf,  gulong len, const  LinkWriteOpts *opt_write_opts); 
#line 8545 "test-linc.mc"
 LinkIOStatus link_connection_writev( LinkConnection *cnx, struct iovec *vecs, int nvecs, const  LinkWriteOpts *opt_write_opts); 
#line 8548 "test-linc.mc"
void link_connection_state_changed( LinkConnection *cnx,  LinkConnectionStatus status); 
#line 8550 "test-linc.mc"
 LinkConnectionStatus link_connection_get_status( LinkConnection *cnx); 
#line 8551 "test-linc.mc"
void link_connection_disconnect( LinkConnection *cnx); 
#line 8552 "test-linc.mc"
 LinkConnectionStatus link_connection_wait_connected( LinkConnection *cnx); 
#line 8558 "test-linc.mc"
void link_connection_set_max_buffer( LinkConnection *cnx,  gulong max_buffer_bytes); 
#line 8559 "test-linc.mc"
 LinkWriteOpts *link_write_options_new( gboolean block_on_write); 
#line 8561 "test-linc.mc"
void link_write_options_free( LinkWriteOpts *write_opts); 
#line 8564 "test-linc.mc"
typedef void (*LinkBrokenCallback)( LinkConnection *,  gpointer user_data); 
#line 8567 "test-linc.mc"
void link_connection_add_broken_cb( LinkConnection *cnx,  LinkBrokenCallback fn,  gpointer user_data); 
#line 8570 "test-linc.mc"
void link_connection_remove_broken_cb( LinkConnection *cnx,  LinkBrokenCallback opt_fn,  gpointer opt_user_data); 
#line 8572 "test-linc.mc"
void link_connections_close(void ); 
#line 8576 "test-linc.mc"
typedef struct _LinkServerPrivate LinkServerPrivate; 
#line 8590 "test-linc.mc"
typedef struct { GObject parent; const  LinkProtocolInfo *proto; char *local_host_info; char *local_serv_info;  LinkConnectionOptions create_options;  LinkServerPrivate *priv; }LinkServer; 
#line 8599 "test-linc.mc"
typedef struct { GObjectClass parent_class;  LinkConnection *(*create_connection)( LinkServer *srv); void (*new_connection)( LinkServer *srv,  LinkConnection *cnx); }LinkServerClass; 
#line 8601 "test-linc.mc"
 GType link_server_get_type(void ) __attribute__  (( __const__ )) ; 
#line 8607 "test-linc.mc"
 gboolean link_server_setup( LinkServer *srv, const char *proto_name, const char *local_host_info, const char *local_serv_info,  LinkConnectionOptions create_options); 
#line 8620 "test-linc.mc"
 GSource *link_source_create_watch( GMainContext *context, int fd,  GIOChannel *opt_channel,  GIOCondition condition,  GIOFunc func,  gpointer user_data); 
#line 8622 "test-linc.mc"
void link_source_set_condition( GSource *source,  GIOCondition condition); 
#line 8628 "test-linc.mc"
extern  GMainLoop *link_loop; 
#line 8630 "test-linc.mc"
void link_init( gboolean thread_safe); 
#line 8631 "test-linc.mc"
void link_set_io_thread( gboolean io_in_thread); 
#line 8632 "test-linc.mc"
void link_shutdown(void ); 
#line 8633 "test-linc.mc"
void link_main_iteration( gboolean block_for_reply); 
#line 8634 "test-linc.mc"
 gboolean link_main_pending(void ); 
#line 8635 "test-linc.mc"
void link_main_loop_run(void ); 
#line 8636 "test-linc.mc"
 GMainLoop *link_main_get_loop(void ); 
#line 8638 "test-linc.mc"
 guint link_main_idle_add( GSourceFunc function,  gpointer data); 
#line 8640 "test-linc.mc"
void link_wait(void ); 
#line 8641 "test-linc.mc"
void link_signal(void ); 
#line 8643 "test-linc.mc"
 gboolean link_thread_io(void ); 
#line 8644 "test-linc.mc"
 gboolean link_thread_safe(void ); 
#line 8650 "test-linc.mc"
int link_pipe(int *handles); 
#line 8662 "test-linc.mc"
typedef struct {enum {LINK_COMMAND_DISCONNECT,LINK_COMMAND_SET_CONDITION,LINK_COMMAND_SET_IO_THREAD,LINK_COMMAND_CNX_UNREF}type; }LinkCommand; 
#line 8667 "test-linc.mc"
typedef struct { LinkCommand cmd;  gboolean complete; }LinkSyncCommand; 
#line 8673 "test-linc.mc"
typedef struct { LinkCommand cmd;  LinkConnection *cnx;  GIOCondition condition; }LinkCommandSetCondition; 
#line 8678 "test-linc.mc"
typedef struct { LinkCommand cmd;  LinkConnection *cnx; }LinkCommandDisconnect; 
#line 8683 "test-linc.mc"
typedef struct { LinkSyncCommand cmd;  LinkConnection *cnx; }LinkCommandCnxUnref; 
#line 8685 "test-linc.mc"
void link_exec_command( LinkCommand *cmd); 
#line 8686 "test-linc.mc"
void link_connection_exec_disconnect( LinkCommandDisconnect *cmd,  gboolean immediate); 
#line 8687 "test-linc.mc"
void link_connection_exec_set_condition( LinkCommandSetCondition *cmd,  gboolean immediate); 
#line 8688 "test-linc.mc"
void link_connection_exec_cnx_unref( LinkCommandCnxUnref *cmd,  gboolean immediate); 
#line 8698 "test-linc.mc"
struct _LinkServerPrivate {int fd;  LinkWatch *tag;  GSList *connections; }; 
#line 8702 "test-linc.mc"
struct _LinkWriteOpts { gboolean block_on_write; }; 
#line 8725 "test-linc.mc"
struct _LinkConnectionPrivate { LinkWatch *tag; int fd;  gulong max_buffer_bytes;  gulong write_queue_bytes;  GList *write_queue;  gboolean was_disconnected; }; 
#line 8741 "test-linc.mc"
typedef struct { GSource source;  GIOChannel *channel;  GPollFD pollfd;  GIOCondition condition;  GIOFunc callback;  gpointer user_data; }LinkUnixWatch; 
#line 8749 "test-linc.mc"
struct _LinkWatch { GSource *main_source;  GSource *link_source; }; 
#line 8753 "test-linc.mc"
struct sockaddr *link_protocol_get_sockaddr(const  LinkProtocolInfo *proto, const char *hostname, const char *service,  LinkSockLen *saddr_len); 
#line 8758 "test-linc.mc"
 gboolean link_protocol_get_sockinfo(const  LinkProtocolInfo *proto, const struct sockaddr *saddr,  gchar **hostname,  gchar **service); 
#line 8762 "test-linc.mc"
 gboolean link_protocol_is_local(const  LinkProtocolInfo *proto, const struct sockaddr *saddr,  LinkSockLen saddr_len); 
#line 8767 "test-linc.mc"
void link_protocol_destroy_cnx(const  LinkProtocolInfo *proto, int fd, const char *host, const char *service); 
#line 8771 "test-linc.mc"
void link_protocol_destroy_addr(const  LinkProtocolInfo *proto, int fd, struct sockaddr *saddr); 
#line 8776 "test-linc.mc"
 LinkWatch *link_io_add_watch_fd(int fd,  GIOCondition condition,  GIOFunc func,  gpointer user_data); 
#line 8778 "test-linc.mc"
void link_io_remove_watch( LinkWatch *w); 
#line 8780 "test-linc.mc"
void link_watch_set_condition( LinkWatch *w,  GIOCondition condition); 
#line 8782 "test-linc.mc"
void link_watch_move_io( LinkWatch *w,  gboolean to_io_thread); 
#line 8784 "test-linc.mc"
 GMainContext *link_main_get_context(void ); 
#line 8785 "test-linc.mc"
 GMainContext *link_thread_io_context(void ); 
#line 8786 "test-linc.mc"
 gboolean link_in_io_thread(void ); 
#line 8787 "test-linc.mc"
 gboolean link_mutex_is_locked( GMutex *lock); 
#line 8788 "test-linc.mc"
void link_lock(void ); 
#line 8789 "test-linc.mc"
void link_unlock(void ); 
#line 8790 "test-linc.mc"
 gboolean link_is_locked(void ); 
#line 8791 "test-linc.mc"
void link_servers_move_io_T( gboolean to_io_thread); 
#line 8792 "test-linc.mc"
void link_connections_move_io_T( gboolean to_io_thread); 
#line 8812 "test-linc.mc"
struct tcphdr { u_int16_t source;  u_int16_t dest;  u_int32_t seq;  u_int32_t ack_seq;  u_int16_t res1:4;  u_int16_t doff:4;  u_int16_t fin:1;  u_int16_t syn:1;  u_int16_t rst:1;  u_int16_t psh:1;  u_int16_t ack:1;  u_int16_t urg:1;  u_int16_t res2:2;  u_int16_t window;  u_int16_t check;  u_int16_t urg_ptr; }; 
#line 8828 "test-linc.mc"
enum {TCP_ESTABLISHED=1,TCP_SYN_SENT,TCP_SYN_RECV,TCP_FIN_WAIT1,TCP_FIN_WAIT2,TCP_TIME_WAIT,TCP_CLOSE,TCP_CLOSE_WAIT,TCP_LAST_ACK,TCP_LISTEN,TCP_CLOSING}; 
#line 8836 "test-linc.mc"
enum tcp_ca_state {TCP_CA_Open=0,TCP_CA_Disorder=1,TCP_CA_CWR=2,TCP_CA_Recovery=3,TCP_CA_Loss=4}; 
#line 8874 "test-linc.mc"
struct tcp_info { u_int8_t tcpi_state;  u_int8_t tcpi_ca_state;  u_int8_t tcpi_retransmits;  u_int8_t tcpi_probes;  u_int8_t tcpi_backoff;  u_int8_t tcpi_options;  u_int8_t tcpi_snd_wscale:4,tcpi_rcv_wscale:4;  u_int32_t tcpi_rto;  u_int32_t tcpi_ato;  u_int32_t tcpi_snd_mss;  u_int32_t tcpi_rcv_mss;  u_int32_t tcpi_unacked;  u_int32_t tcpi_sacked;  u_int32_t tcpi_lost;  u_int32_t tcpi_retrans;  u_int32_t tcpi_fackets;  u_int32_t tcpi_last_data_sent;  u_int32_t tcpi_last_ack_sent;  u_int32_t tcpi_last_data_recv;  u_int32_t tcpi_last_ack_recv;  u_int32_t tcpi_pmtu;  u_int32_t tcpi_rcv_ssthresh;  u_int32_t tcpi_rtt;  u_int32_t tcpi_rttvar;  u_int32_t tcpi_snd_ssthresh;  u_int32_t tcpi_snd_cwnd;  u_int32_t tcpi_advmss;  u_int32_t tcpi_reordering; }; 
#line 8884 "test-linc.mc"
struct sockaddr_un { sa_family_t sun_family; char sun_path[108]; }; 
#line 8899 "test-linc.mc"
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8903 "test-linc.mc"
extern void *memmove(void *__dest, __const void *__src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8912 "test-linc.mc"
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8918 "test-linc.mc"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 8922 "test-linc.mc"
extern int memcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8926 "test-linc.mc"
extern void *memchr(__const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 8931 "test-linc.mc"
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8935 "test-linc.mc"
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8939 "test-linc.mc"
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8942 "test-linc.mc"
extern char *strncat(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8946 "test-linc.mc"
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8949 "test-linc.mc"
extern int strncmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8953 "test-linc.mc"
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8957 "test-linc.mc"
extern  size_t strxfrm(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 8960 "test-linc.mc"
extern char *strdup(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 8964 "test-linc.mc"
extern char *strchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 8967 "test-linc.mc"
extern char *strrchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 8973 "test-linc.mc"
extern  size_t strcspn(__const char *__s, __const char *__reject) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8977 "test-linc.mc"
extern  size_t strspn(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8980 "test-linc.mc"
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8983 "test-linc.mc"
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 8988 "test-linc.mc"
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 8996 "test-linc.mc"
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 9000 "test-linc.mc"
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 9004 "test-linc.mc"
extern  size_t strlen(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9008 "test-linc.mc"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ )) ; 
#line 9010 "test-linc.mc"
extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 9011 "test-linc.mc"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9016 "test-linc.mc"
extern void bcopy(__const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 9019 "test-linc.mc"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9023 "test-linc.mc"
extern int bcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 9027 "test-linc.mc"
extern char *index(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9031 "test-linc.mc"
extern char *rindex(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9035 "test-linc.mc"
extern int ffs(int __i) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 9037 "test-linc.mc"
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 9041 "test-linc.mc"
extern int strncasecmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 9044 "test-linc.mc"
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 9047 "test-linc.mc"
extern void *__rawmemchr(const void *__s, int __c); 
#line 9048 "test-linc.mc"
extern __inline  size_t __strcspn_c1(__const char *__s, int __reject); 
#line 9050 "test-linc.mc"
extern __inline  size_t __strcspn_c1(__const char *__s, int __reject)  {

#line 9051 "test-linc.mc"

#line 9051 "test-linc.mc"
register  size_t __result = 0;
#line 9052 "test-linc.mc"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 9054 "test-linc.mc"
return __result; }
 
#line 9058 "test-linc.mc"
extern __inline  size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2); 
#line 9060 "test-linc.mc"
extern __inline  size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2)  {

#line 9061 "test-linc.mc"

#line 9061 "test-linc.mc"
register  size_t __result = 0;
#line 9062 "test-linc.mc"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 9065 "test-linc.mc"
return __result; }
 
#line 9069 "test-linc.mc"
extern __inline  size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3); 
#line 9072 "test-linc.mc"
extern __inline  size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3)  {

#line 9073 "test-linc.mc"

#line 9073 "test-linc.mc"
register  size_t __result = 0;
#line 9074 "test-linc.mc"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 9077 "test-linc.mc"
return __result; }
 
#line 9079 "test-linc.mc"
extern __inline  size_t __strspn_c1(__const char *__s, int __accept); 
#line 9081 "test-linc.mc"
extern __inline  size_t __strspn_c1(__const char *__s, int __accept)  {

#line 9082 "test-linc.mc"

#line 9082 "test-linc.mc"
register  size_t __result = 0;
#line 9084 "test-linc.mc"
while(__s[__result] == __accept) { (++__result); } 
#line 9086 "test-linc.mc"
return __result; }
 
#line 9090 "test-linc.mc"
extern __inline  size_t __strspn_c2(__const char *__s, int __accept1, int __accept2); 
#line 9092 "test-linc.mc"
extern __inline  size_t __strspn_c2(__const char *__s, int __accept1, int __accept2)  {

#line 9093 "test-linc.mc"

#line 9093 "test-linc.mc"
register  size_t __result = 0;
#line 9095 "test-linc.mc"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 9097 "test-linc.mc"
return __result; }
 
#line 9101 "test-linc.mc"
extern __inline  size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3); 
#line 9103 "test-linc.mc"
extern __inline  size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 9104 "test-linc.mc"

#line 9104 "test-linc.mc"
register  size_t __result = 0;
#line 9106 "test-linc.mc"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 9109 "test-linc.mc"
return __result; }
 
#line 9112 "test-linc.mc"
extern __inline char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2); 
#line 9115 "test-linc.mc"
extern __inline char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2)  {

#line 9118 "test-linc.mc"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 9119 "test-linc.mc"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
#line 9123 "test-linc.mc"
extern __inline char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3); 
#line 9127 "test-linc.mc"
extern __inline char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 9131 "test-linc.mc"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 9132 "test-linc.mc"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
#line 9134 "test-linc.mc"
extern __inline char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 9137 "test-linc.mc"
extern __inline char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  {

#line 9138 "test-linc.mc"

#line 9138 "test-linc.mc"
char *__result;
#line 9139 "test-linc.mc"
if (__s == (((void *)0))){
__s = (*__nextp); }
#line 9141 "test-linc.mc"
while((*__s) == __sep) { (++__s); } 
#line 9143 "test-linc.mc"
__result = (((void *)0)); 
#line 9144 "test-linc.mc"
if ((*__s) != '\0'){
{ 
#line 9146 "test-linc.mc"
__result = __s++; 
#line 9147 "test-linc.mc"
while((*__s) != '\0') { if ((*__s++) == __sep){
{ 
#line 9150 "test-linc.mc"
__s[(-1)] = '\0'; 
#line 9151 "test-linc.mc"
break; } }} 
#line 9153 "test-linc.mc"
(*__nextp) = __s; } }
#line 9155 "test-linc.mc"
return __result; }
 
#line 9157 "test-linc.mc"
extern char *__strsep_g(char **__stringp, __const char *__delim); 
#line 9158 "test-linc.mc"
extern __inline char *__strsep_1c(char **__s, char __reject); 
#line 9161 "test-linc.mc"
extern __inline char *__strsep_1c(char **__s, char __reject)  {

#line 9162 "test-linc.mc"

#line 9162 "test-linc.mc"
register char *__retval = (*__s);
#line 9163 "test-linc.mc"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 9165 "test-linc.mc"
return __retval; }
 
#line 9168 "test-linc.mc"
extern __inline char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 9171 "test-linc.mc"
extern __inline char *__strsep_2c(char **__s, char __reject1, char __reject2)  {

#line 9172 "test-linc.mc"

#line 9172 "test-linc.mc"
register char *__retval = (*__s);
#line 9173 "test-linc.mc"
if (__retval != (((void *)0))){
{ 
#line 9175 "test-linc.mc"

#line 9175 "test-linc.mc"
register char *__cp = __retval;
#line 9176 "test-linc.mc"
while(1) { { 
#line 9183 "test-linc.mc"
if ((*__cp) == '\0'){
{ 
#line 9180 "test-linc.mc"
__cp = (((void *)0)); 
#line 9181 "test-linc.mc"
break; } }
#line 9183 "test-linc.mc"
if ((*__cp) == __reject1 || (*__cp) == __reject2){
{ 
#line 9185 "test-linc.mc"
(*__cp++) = '\0'; 
#line 9186 "test-linc.mc"
break; } }
#line 9188 "test-linc.mc"
(++__cp); } } 
#line 9190 "test-linc.mc"
(*__s) = __cp; } }
#line 9192 "test-linc.mc"
return __retval; }
 
#line 9196 "test-linc.mc"
extern __inline char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 9199 "test-linc.mc"
extern __inline char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  {

#line 9200 "test-linc.mc"

#line 9200 "test-linc.mc"
register char *__retval = (*__s);
#line 9201 "test-linc.mc"
if (__retval != (((void *)0))){
{ 
#line 9203 "test-linc.mc"

#line 9203 "test-linc.mc"
register char *__cp = __retval;
#line 9204 "test-linc.mc"
while(1) { { 
#line 9211 "test-linc.mc"
if ((*__cp) == '\0'){
{ 
#line 9208 "test-linc.mc"
__cp = (((void *)0)); 
#line 9209 "test-linc.mc"
break; } }
#line 9211 "test-linc.mc"
if ((*__cp) == __reject1 || (*__cp) == __reject2 || (*__cp) == __reject3){
{ 
#line 9213 "test-linc.mc"
(*__cp++) = '\0'; 
#line 9214 "test-linc.mc"
break; } }
#line 9216 "test-linc.mc"
(++__cp); } } 
#line 9218 "test-linc.mc"
(*__s) = __cp; } }
#line 9220 "test-linc.mc"
return __retval; }
 
#line 9226 "test-linc.mc"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 9229 "test-linc.mc"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 9236 "test-linc.mc"
extern char *__strdup(__const char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 9238 "test-linc.mc"
extern char *__strndup(__const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 9253 "test-linc.mc"
extern  in_addr_t inet_addr(__const char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 9256 "test-linc.mc"
extern  in_addr_t inet_lnaof(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 9261 "test-linc.mc"
extern struct in_addr inet_makeaddr( in_addr_t __net,  in_addr_t __host) __attribute__  (( __nothrow__ )) ; 
#line 9264 "test-linc.mc"
extern  in_addr_t inet_netof(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 9268 "test-linc.mc"
extern  in_addr_t inet_network(__const char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 9272 "test-linc.mc"
extern char *inet_ntoa(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 9278 "test-linc.mc"
extern int inet_pton(int __af, __const char *__restrict __cp, void *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 9285 "test-linc.mc"
extern __const char *inet_ntop(int __af, __const void *__restrict __cp, char *__restrict __buf,  socklen_t __len) __attribute__  (( __nothrow__ )) ; 
#line 9292 "test-linc.mc"
extern int inet_aton(__const char *__cp, struct in_addr *__inp) __attribute__  (( __nothrow__ )) ; 
#line 9296 "test-linc.mc"
extern char *inet_neta( in_addr_t __net, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 9302 "test-linc.mc"
extern char *inet_net_ntop(int __af, __const void *__cp, int __bits, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 9308 "test-linc.mc"
extern int inet_net_pton(int __af, __const char *__cp, void *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 9314 "test-linc.mc"
extern unsigned int inet_nsap_addr(__const char *__cp, unsigned char *__buf, int __len) __attribute__  (( __nothrow__ )) ; 
#line 9319 "test-linc.mc"
extern char *inet_nsap_ntoa(int __len, __const unsigned char *__cp, char *__buf) __attribute__  (( __nothrow__ )) ; 
#line 9333 "test-linc.mc"
typedef  __useconds_t useconds_t; 
#line 9334 "test-linc.mc"
extern int access(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9335 "test-linc.mc"
extern  __off_t lseek(int __fd,  __off_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 9336 "test-linc.mc"
extern int close(int __fd); 
#line 9343 "test-linc.mc"
extern  ssize_t read(int __fd, void *__buf,  size_t __nbytes); 
#line 9349 "test-linc.mc"
extern  ssize_t write(int __fd, __const void *__buf,  size_t __n); 
#line 9350 "test-linc.mc"
extern int pipe(int __pipedes[2]) __attribute__  (( __nothrow__ )) ; 
#line 9351 "test-linc.mc"
extern unsigned int alarm(unsigned int __seconds) __attribute__  (( __nothrow__ )) ; 
#line 9352 "test-linc.mc"
extern unsigned int sleep(unsigned int __seconds); 
#line 9360 "test-linc.mc"
extern  __useconds_t ualarm( __useconds_t __value,  __useconds_t __interval) __attribute__  (( __nothrow__ )) ; 
#line 9367 "test-linc.mc"
extern int usleep( __useconds_t __useconds); 
#line 9368 "test-linc.mc"
extern int pause(void ); 
#line 9373 "test-linc.mc"
extern int chown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9377 "test-linc.mc"
extern int fchown(int __fd,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ )) ; 
#line 9383 "test-linc.mc"
extern int lchown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9384 "test-linc.mc"
extern int chdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9388 "test-linc.mc"
extern int fchdir(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 9389 "test-linc.mc"
extern char *getcwd(char *__buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 9391 "test-linc.mc"
extern char *getwd(char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ )) ; 
#line 9396 "test-linc.mc"
extern int dup(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 9399 "test-linc.mc"
extern int dup2(int __fd, int __fd2) __attribute__  (( __nothrow__ )) ; 
#line 9402 "test-linc.mc"
extern char **__environ; 
#line 9411 "test-linc.mc"
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9413 "test-linc.mc"
extern int execv(__const char *__path, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9418 "test-linc.mc"
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9423 "test-linc.mc"
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9428 "test-linc.mc"
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9434 "test-linc.mc"
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 9439 "test-linc.mc"
extern int nice(int __inc) __attribute__  (( __nothrow__ )) ; 
#line 9444 "test-linc.mc"
extern void _exit(int __status) __attribute__  (( __noreturn__ )) ; 
#line 9494 "test-linc.mc"
enum {_PC_LINK_MAX,_PC_MAX_CANON,_PC_MAX_INPUT,_PC_NAME_MAX,_PC_PATH_MAX,_PC_PIPE_BUF,_PC_CHOWN_RESTRICTED,_PC_NO_TRUNC,_PC_VDISABLE,_PC_SYNC_IO,_PC_ASYNC_IO,_PC_PRIO_IO,_PC_SOCK_MAXBUF,_PC_FILESIZEBITS,_PC_REC_INCR_XFER_SIZE,_PC_REC_MAX_XFER_SIZE,_PC_REC_MIN_XFER_SIZE,_PC_REC_XFER_ALIGN,_PC_ALLOC_SIZE_MIN,_PC_SYMLINK_MAX,_PC_2_SYMLINKS}; 
#line 9927 "test-linc.mc"
enum {_SC_ARG_MAX,_SC_CHILD_MAX,_SC_CLK_TCK,_SC_NGROUPS_MAX,_SC_OPEN_MAX,_SC_STREAM_MAX,_SC_TZNAME_MAX,_SC_JOB_CONTROL,_SC_SAVED_IDS,_SC_REALTIME_SIGNALS,_SC_PRIORITY_SCHEDULING,_SC_TIMERS,_SC_ASYNCHRONOUS_IO,_SC_PRIORITIZED_IO,_SC_SYNCHRONIZED_IO,_SC_FSYNC,_SC_MAPPED_FILES,_SC_MEMLOCK,_SC_MEMLOCK_RANGE,_SC_MEMORY_PROTECTION,_SC_MESSAGE_PASSING,_SC_SEMAPHORES,_SC_SHARED_MEMORY_OBJECTS,_SC_AIO_LISTIO_MAX,_SC_AIO_MAX,_SC_AIO_PRIO_DELTA_MAX,_SC_DELAYTIMER_MAX,_SC_MQ_OPEN_MAX,_SC_MQ_PRIO_MAX,_SC_VERSION,_SC_PAGESIZE,_SC_RTSIG_MAX,_SC_SEM_NSEMS_MAX,_SC_SEM_VALUE_MAX,_SC_SIGQUEUE_MAX,_SC_TIMER_MAX,_SC_BC_BASE_MAX,_SC_BC_DIM_MAX,_SC_BC_SCALE_MAX,_SC_BC_STRING_MAX,_SC_COLL_WEIGHTS_MAX,_SC_EQUIV_CLASS_MAX,_SC_EXPR_NEST_MAX,_SC_LINE_MAX,_SC_RE_DUP_MAX,_SC_CHARCLASS_NAME_MAX,_SC_2_VERSION,_SC_2_C_BIND,_SC_2_C_DEV,_SC_2_FORT_DEV,_SC_2_FORT_RUN,_SC_2_SW_DEV,_SC_2_LOCALEDEF,_SC_PII,_SC_PII_XTI,_SC_PII_SOCKET,_SC_PII_INTERNET,_SC_PII_OSI,_SC_POLL,_SC_SELECT,_SC_UIO_MAXIOV,_SC_IOV_MAX=_SC_UIO_MAXIOV,_SC_PII_INTERNET_STREAM,_SC_PII_INTERNET_DGRAM,_SC_PII_OSI_COTS,_SC_PII_OSI_CLTS,_SC_PII_OSI_M,_SC_T_IOV_MAX,_SC_THREADS,_SC_THREAD_SAFE_FUNCTIONS,_SC_GETGR_R_SIZE_MAX,_SC_GETPW_R_SIZE_MAX,_SC_LOGIN_NAME_MAX,_SC_TTY_NAME_MAX,_SC_THREAD_DESTRUCTOR_ITERATIONS,_SC_THREAD_KEYS_MAX,_SC_THREAD_STACK_MIN,_SC_THREAD_THREADS_MAX,_SC_THREAD_ATTR_STACKADDR,_SC_THREAD_ATTR_STACKSIZE,_SC_THREAD_PRIORITY_SCHEDULING,_SC_THREAD_PRIO_INHERIT,_SC_THREAD_PRIO_PROTECT,_SC_THREAD_PROCESS_SHARED,_SC_NPROCESSORS_CONF,_SC_NPROCESSORS_ONLN,_SC_PHYS_PAGES,_SC_AVPHYS_PAGES,_SC_ATEXIT_MAX,_SC_PASS_MAX,_SC_XOPEN_VERSION,_SC_XOPEN_XCU_VERSION,_SC_XOPEN_UNIX,_SC_XOPEN_CRYPT,_SC_XOPEN_ENH_I18N,_SC_XOPEN_SHM,_SC_2_CHAR_TERM,_SC_2_C_VERSION,_SC_2_UPE,_SC_XOPEN_XPG2,_SC_XOPEN_XPG3,_SC_XOPEN_XPG4,_SC_CHAR_BIT,_SC_CHAR_MAX,_SC_CHAR_MIN,_SC_INT_MAX,_SC_INT_MIN,_SC_LONG_BIT,_SC_WORD_BIT,_SC_MB_LEN_MAX,_SC_NZERO,_SC_SSIZE_MAX,_SC_SCHAR_MAX,_SC_SCHAR_MIN,_SC_SHRT_MAX,_SC_SHRT_MIN,_SC_UCHAR_MAX,_SC_UINT_MAX,_SC_ULONG_MAX,_SC_USHRT_MAX,_SC_NL_ARGMAX,_SC_NL_LANGMAX,_SC_NL_MSGMAX,_SC_NL_NMAX,_SC_NL_SETMAX,_SC_NL_TEXTMAX,_SC_XBS5_ILP32_OFF32,_SC_XBS5_ILP32_OFFBIG,_SC_XBS5_LP64_OFF64,_SC_XBS5_LPBIG_OFFBIG,_SC_XOPEN_LEGACY,_SC_XOPEN_REALTIME,_SC_XOPEN_REALTIME_THREADS,_SC_ADVISORY_INFO,_SC_BARRIERS,_SC_BASE,_SC_C_LANG_SUPPORT,_SC_C_LANG_SUPPORT_R,_SC_CLOCK_SELECTION,_SC_CPUTIME,_SC_THREAD_CPUTIME,_SC_DEVICE_IO,_SC_DEVICE_SPECIFIC,_SC_DEVICE_SPECIFIC_R,_SC_FD_MGMT,_SC_FIFO,_SC_PIPE,_SC_FILE_ATTRIBUTES,_SC_FILE_LOCKING,_SC_FILE_SYSTEM,_SC_MONOTONIC_CLOCK,_SC_MULTI_PROCESS,_SC_SINGLE_PROCESS,_SC_NETWORKING,_SC_READER_WRITER_LOCKS,_SC_SPIN_LOCKS,_SC_REGEXP,_SC_REGEX_VERSION,_SC_SHELL,_SC_SIGNALS,_SC_SPAWN,_SC_SPORADIC_SERVER,_SC_THREAD_SPORADIC_SERVER,_SC_SYSTEM_DATABASE,_SC_SYSTEM_DATABASE_R,_SC_TIMEOUTS,_SC_TYPED_MEMORY_OBJECTS,_SC_USER_GROUPS,_SC_USER_GROUPS_R,_SC_2_PBS,_SC_2_PBS_ACCOUNTING,_SC_2_PBS_LOCATE,_SC_2_PBS_MESSAGE,_SC_2_PBS_TRACK,_SC_SYMLOOP_MAX,_SC_STREAMS,_SC_2_PBS_CHECKPOINT,_SC_V6_ILP32_OFF32,_SC_V6_ILP32_OFFBIG,_SC_V6_LP64_OFF64,_SC_V6_LPBIG_OFFBIG,_SC_HOST_NAME_MAX,_SC_TRACE,_SC_TRACE_EVENT_FILTER,_SC_TRACE_INHERIT,_SC_TRACE_LOG,_SC_LEVEL1_ICACHE_SIZE,_SC_LEVEL1_ICACHE_ASSOC,_SC_LEVEL1_ICACHE_LINESIZE,_SC_LEVEL1_DCACHE_SIZE,_SC_LEVEL1_DCACHE_ASSOC,_SC_LEVEL1_DCACHE_LINESIZE,_SC_LEVEL2_CACHE_SIZE,_SC_LEVEL2_CACHE_ASSOC,_SC_LEVEL2_CACHE_LINESIZE,_SC_LEVEL3_CACHE_SIZE,_SC_LEVEL3_CACHE_ASSOC,_SC_LEVEL3_CACHE_LINESIZE,_SC_LEVEL4_CACHE_SIZE,_SC_LEVEL4_CACHE_ASSOC,_SC_LEVEL4_CACHE_LINESIZE,_SC_IPV6=_SC_LEVEL1_ICACHE_SIZE + 50,_SC_RAW_SOCKETS}; 
#line 10025 "test-linc.mc"
enum {_CS_PATH,_CS_V6_WIDTH_RESTRICTED_ENVS,_CS_GNU_LIBC_VERSION,_CS_GNU_LIBPTHREAD_VERSION,_CS_LFS_CFLAGS=1000,_CS_LFS_LDFLAGS,_CS_LFS_LIBS,_CS_LFS_LINTFLAGS,_CS_LFS64_CFLAGS,_CS_LFS64_LDFLAGS,_CS_LFS64_LIBS,_CS_LFS64_LINTFLAGS,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,_CS_XBS5_ILP32_OFF32_LDFLAGS,_CS_XBS5_ILP32_OFF32_LIBS,_CS_XBS5_ILP32_OFF32_LINTFLAGS,_CS_XBS5_ILP32_OFFBIG_CFLAGS,_CS_XBS5_ILP32_OFFBIG_LDFLAGS,_CS_XBS5_ILP32_OFFBIG_LIBS,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,_CS_XBS5_LP64_OFF64_CFLAGS,_CS_XBS5_LP64_OFF64_LDFLAGS,_CS_XBS5_LP64_OFF64_LIBS,_CS_XBS5_LP64_OFF64_LINTFLAGS,_CS_XBS5_LPBIG_OFFBIG_CFLAGS,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,_CS_XBS5_LPBIG_OFFBIG_LIBS,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,_CS_POSIX_V6_ILP32_OFF32_CFLAGS,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,_CS_POSIX_V6_ILP32_OFF32_LIBS,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LIBS,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,_CS_POSIX_V6_LP64_OFF64_CFLAGS,_CS_POSIX_V6_LP64_OFF64_LDFLAGS,_CS_POSIX_V6_LP64_OFF64_LIBS,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS}; 
#line 10029 "test-linc.mc"
extern long int pathconf(__const char *__path, int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10032 "test-linc.mc"
extern long int fpathconf(int __fd, int __name) __attribute__  (( __nothrow__ )) ; 
#line 10035 "test-linc.mc"
extern long int sysconf(int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 10039 "test-linc.mc"
extern  size_t confstr(int __name, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 10044 "test-linc.mc"
extern  __pid_t getpid(void ) __attribute__  (( __nothrow__ )) ; 
#line 10047 "test-linc.mc"
extern  __pid_t getppid(void ) __attribute__  (( __nothrow__ )) ; 
#line 10052 "test-linc.mc"
extern  __pid_t getpgrp(void ) __attribute__  (( __nothrow__ )) ; 
#line 10053 "test-linc.mc"
extern  __pid_t __getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 10054 "test-linc.mc"
extern int setpgid( __pid_t __pid,  __pid_t __pgid) __attribute__  (( __nothrow__ )) ; 
#line 10055 "test-linc.mc"
extern int setpgrp(void ) __attribute__  (( __nothrow__ )) ; 
#line 10056 "test-linc.mc"
extern  __pid_t setsid(void ) __attribute__  (( __nothrow__ )) ; 
#line 10064 "test-linc.mc"
extern  __uid_t getuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 10067 "test-linc.mc"
extern  __uid_t geteuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 10070 "test-linc.mc"
extern  __gid_t getgid(void ) __attribute__  (( __nothrow__ )) ; 
#line 10073 "test-linc.mc"
extern  __gid_t getegid(void ) __attribute__  (( __nothrow__ )) ; 
#line 10078 "test-linc.mc"
extern int getgroups(int __size,  __gid_t __list[]) __attribute__  (( __nothrow__ )) ; 
#line 10079 "test-linc.mc"
extern int setuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 10084 "test-linc.mc"
extern int setreuid( __uid_t __ruid,  __uid_t __euid) __attribute__  (( __nothrow__ )) ; 
#line 10089 "test-linc.mc"
extern int seteuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 10096 "test-linc.mc"
extern int setgid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 10101 "test-linc.mc"
extern int setregid( __gid_t __rgid,  __gid_t __egid) __attribute__  (( __nothrow__ )) ; 
#line 10106 "test-linc.mc"
extern int setegid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 10107 "test-linc.mc"
extern  __pid_t fork(void ) __attribute__  (( __nothrow__ )) ; 
#line 10114 "test-linc.mc"
extern  __pid_t vfork(void ) __attribute__  (( __nothrow__ )) ; 
#line 10120 "test-linc.mc"
extern char *ttyname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 10125 "test-linc.mc"
extern int ttyname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 10129 "test-linc.mc"
extern int isatty(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 10135 "test-linc.mc"
extern int ttyslot(void ) __attribute__  (( __nothrow__ )) ; 
#line 10141 "test-linc.mc"
extern int link(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 10143 "test-linc.mc"
extern int symlink(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 10149 "test-linc.mc"
extern int readlink(__const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 10150 "test-linc.mc"
extern int unlink(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10151 "test-linc.mc"
extern int rmdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10155 "test-linc.mc"
extern  __pid_t tcgetpgrp(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 10158 "test-linc.mc"
extern int tcsetpgrp(int __fd,  __pid_t __pgrp_id) __attribute__  (( __nothrow__ )) ; 
#line 10165 "test-linc.mc"
extern char *getlogin(void ); 
#line 10173 "test-linc.mc"
extern int getlogin_r(char *__name,  size_t __name_len) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10178 "test-linc.mc"
extern int setlogin(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10179 "test-linc.mc"
extern char *optarg; 
#line 10180 "test-linc.mc"
extern int optind; 
#line 10185 "test-linc.mc"
extern int opterr; 
#line 10189 "test-linc.mc"
extern int optopt; 
#line 10191 "test-linc.mc"
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__  (( __nothrow__ )) ; 
#line 10199 "test-linc.mc"
extern int gethostname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10207 "test-linc.mc"
extern int sethostname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10211 "test-linc.mc"
extern int sethostid(long int __id) __attribute__  (( __nothrow__ )) ; 
#line 10218 "test-linc.mc"
extern int getdomainname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10220 "test-linc.mc"
extern int setdomainname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10226 "test-linc.mc"
extern int vhangup(void ) __attribute__  (( __nothrow__ )) ; 
#line 10229 "test-linc.mc"
extern int revoke(__const char *__file) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10239 "test-linc.mc"
extern int profil(unsigned short int *__sample_buffer,  size_t __size,  size_t __offset, unsigned int __scale) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10245 "test-linc.mc"
extern int acct(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 10249 "test-linc.mc"
extern char *getusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 10250 "test-linc.mc"
extern void endusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 10251 "test-linc.mc"
extern void setusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 10257 "test-linc.mc"
extern int daemon(int __nochdir, int __noclose) __attribute__  (( __nothrow__ )) ; 
#line 10264 "test-linc.mc"
extern int chroot(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10268 "test-linc.mc"
extern char *getpass(__const char *__prompt) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10269 "test-linc.mc"
extern int fsync(int __fd); 
#line 10276 "test-linc.mc"
extern long int gethostid(void ); 
#line 10279 "test-linc.mc"
extern void sync(void ) __attribute__  (( __nothrow__ )) ; 
#line 10284 "test-linc.mc"
extern int getpagesize(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 10289 "test-linc.mc"
extern int getdtablesize(void ) __attribute__  (( __nothrow__ )) ; 
#line 10295 "test-linc.mc"
extern int truncate(__const char *__file,  __off_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 10296 "test-linc.mc"
extern int ftruncate(int __fd,  __off_t __length) __attribute__  (( __nothrow__ )) ; 
#line 10297 "test-linc.mc"
extern int brk(void *__addr) __attribute__  (( __nothrow__ )) ; 
#line 10303 "test-linc.mc"
extern void *sbrk( intptr_t __delta) __attribute__  (( __nothrow__ )) ; 
#line 10304 "test-linc.mc"
extern long int syscall(long int __sysno, ...) __attribute__  (( __nothrow__ )) ; 
#line 10305 "test-linc.mc"
extern int lockf(int __fd, int __cmd,  __off_t __len); 
#line 10306 "test-linc.mc"
extern int fdatasync(int __fildes) __attribute__  (( __nothrow__ )) ; 
#line 10318 "test-linc.mc"
typedef enum __ns_sect {ns_s_qd=0,ns_s_zn=0,ns_s_an=1,ns_s_pr=1,ns_s_ns=2,ns_s_ud=2,ns_s_ar=3,ns_s_max=4}ns_sect; 
#line 10332 "test-linc.mc"
typedef struct __ns_msg {const  u_char *_msg,*_eom;  u_int16_t _id,_flags,_counts[ns_s_max]; const  u_char *_sections[ns_s_max];  ns_sect _sect; int _rrnum; const  u_char *_ptr; }ns_msg; 
#line 10335 "test-linc.mc"
struct _ns_flagdata {int mask,shift; }; 
#line 10336 "test-linc.mc"
extern struct _ns_flagdata _ns_flagdata[]; 
#line 10344 "test-linc.mc"
typedef struct __ns_rr {char name[1025];  u_int16_t type;  u_int16_t rr_class;  u_int32_t ttl;  u_int16_t rdlength; const  u_char *rdata; }ns_rr; 
#line 10357 "test-linc.mc"
typedef enum __ns_flag {ns_f_qr,ns_f_opcode,ns_f_aa,ns_f_tc,ns_f_rd,ns_f_ra,ns_f_z,ns_f_ad,ns_f_cd,ns_f_rcode,ns_f_max}ns_flag; 
#line 10370 "test-linc.mc"
typedef enum __ns_opcode {ns_o_query=0,ns_o_iquery=1,ns_o_status=2,ns_o_notify=4,ns_o_update=5,ns_o_max=6}ns_opcode; 
#line 10393 "test-linc.mc"
typedef enum __ns_rcode {ns_r_noerror=0,ns_r_formerr=1,ns_r_servfail=2,ns_r_nxdomain=3,ns_r_notimpl=4,ns_r_refused=5,ns_r_yxdomain=6,ns_r_yxrrset=7,ns_r_nxrrset=8,ns_r_notauth=9,ns_r_notzone=10,ns_r_max=11,ns_r_badsig=16,ns_r_badkey=17,ns_r_badtime=18}ns_rcode; 
#line 10400 "test-linc.mc"
typedef enum __ns_update_operation {ns_uop_delete=0,ns_uop_add=1,ns_uop_max=2}ns_update_operation; 
#line 10409 "test-linc.mc"
struct ns_tsig_key {char name[1025],alg[1025]; unsigned char *data; int len; }; 
#line 10410 "test-linc.mc"
typedef struct ns_tsig_key ns_tsig_key; 
#line 10421 "test-linc.mc"
struct ns_tcp_tsig_state {int counter; struct dst_key *key; void *ctx; unsigned char sig[512]; int siglen; }; 
#line 10422 "test-linc.mc"
typedef struct ns_tcp_tsig_state ns_tcp_tsig_state; 
#line 10474 "test-linc.mc"
typedef enum __ns_type {ns_t_invalid=0,ns_t_a=1,ns_t_ns=2,ns_t_md=3,ns_t_mf=4,ns_t_cname=5,ns_t_soa=6,ns_t_mb=7,ns_t_mg=8,ns_t_mr=9,ns_t_null=10,ns_t_wks=11,ns_t_ptr=12,ns_t_hinfo=13,ns_t_minfo=14,ns_t_mx=15,ns_t_txt=16,ns_t_rp=17,ns_t_afsdb=18,ns_t_x25=19,ns_t_isdn=20,ns_t_rt=21,ns_t_nsap=22,ns_t_nsap_ptr=23,ns_t_sig=24,ns_t_key=25,ns_t_px=26,ns_t_gpos=27,ns_t_aaaa=28,ns_t_loc=29,ns_t_nxt=30,ns_t_eid=31,ns_t_nimloc=32,ns_t_srv=33,ns_t_atma=34,ns_t_naptr=35,ns_t_kx=36,ns_t_cert=37,ns_t_a6=38,ns_t_dname=39,ns_t_sink=40,ns_t_opt=41,ns_t_tsig=250,ns_t_ixfr=251,ns_t_axfr=252,ns_t_mailb=253,ns_t_maila=254,ns_t_any=255,ns_t_zxfr=256,ns_t_max=65536}ns_type; 
#line 10485 "test-linc.mc"
typedef enum __ns_class {ns_c_invalid=0,ns_c_in=1,ns_c_2=2,ns_c_chaos=3,ns_c_hs=4,ns_c_none=254,ns_c_any=255,ns_c_max=65536}ns_class; 
#line 10494 "test-linc.mc"
typedef enum __ns_key_types {ns_kt_rsa=1,ns_kt_dh=2,ns_kt_dsa=3,ns_kt_private=254}ns_key_types; 
#line 10502 "test-linc.mc"
typedef enum __ns_cert_types {cert_t_pkix=1,cert_t_spki=2,cert_t_pgp=3,cert_t_url=253,cert_t_oid=254}ns_cert_types; 
#line 10504 "test-linc.mc"
 u_int __ns_get16(const  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 10505 "test-linc.mc"
 u_long __ns_get32(const  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 10506 "test-linc.mc"
void __ns_put16( u_int ,  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 10507 "test-linc.mc"
void __ns_put32( u_long ,  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 10508 "test-linc.mc"
int __ns_initparse(const  u_char *, int ,  ns_msg *) __attribute__  (( __nothrow__ )) ; 
#line 10510 "test-linc.mc"
int __ns_skiprr(const  u_char *, const  u_char *,  ns_sect , int ) __attribute__  (( __nothrow__ )) ; 
#line 10511 "test-linc.mc"
int __ns_parserr( ns_msg *,  ns_sect , int ,  ns_rr *) __attribute__  (( __nothrow__ )) ; 
#line 10514 "test-linc.mc"
int __ns_sprintrr(const  ns_msg *, const  ns_rr *, const char *, const char *, char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10518 "test-linc.mc"
int __ns_sprintrrf(const  u_char *,  size_t , const char *,  ns_class ,  ns_type ,  u_long , const  u_char *,  size_t , const char *, const char *, char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10519 "test-linc.mc"
int __ns_format_ttl( u_long , char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10520 "test-linc.mc"
int __ns_parse_ttl(const char *,  u_long *) __attribute__  (( __nothrow__ )) ; 
#line 10521 "test-linc.mc"
 u_int32_t __ns_datetosecs(const char *cp, int *errp) __attribute__  (( __nothrow__ )) ; 
#line 10522 "test-linc.mc"
int __ns_name_ntol(const  u_char *,  u_char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10523 "test-linc.mc"
int __ns_name_ntop(const  u_char *, char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10524 "test-linc.mc"
int __ns_name_pton(const char *,  u_char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10526 "test-linc.mc"
int __ns_name_unpack(const  u_char *, const  u_char *, const  u_char *,  u_char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10528 "test-linc.mc"
int __ns_name_pack(const  u_char *,  u_char *, int , const  u_char **, const  u_char **) __attribute__  (( __nothrow__ )) ; 
#line 10530 "test-linc.mc"
int __ns_name_uncompress(const  u_char *, const  u_char *, const  u_char *, char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10532 "test-linc.mc"
int __ns_name_compress(const char *,  u_char *,  size_t , const  u_char **, const  u_char **) __attribute__  (( __nothrow__ )) ; 
#line 10533 "test-linc.mc"
int __ns_name_skip(const  u_char **, const  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 10535 "test-linc.mc"
void __ns_name_rollback(const  u_char *, const  u_char **, const  u_char **) __attribute__  (( __nothrow__ )) ; 
#line 10537 "test-linc.mc"
int __ns_sign( u_char *, int *, int , int , void *, const  u_char *, int ,  u_char *, int *,  time_t ) __attribute__  (( __nothrow__ )) ; 
#line 10539 "test-linc.mc"
int __ns_sign_tcp( u_char *, int *, int , int ,  ns_tcp_tsig_state *, int ) __attribute__  (( __nothrow__ )) ; 
#line 10541 "test-linc.mc"
int __ns_sign_tcp_init(void *, const  u_char *, int ,  ns_tcp_tsig_state *) __attribute__  (( __nothrow__ )) ; 
#line 10542 "test-linc.mc"
 u_char *__ns_find_tsig( u_char *,  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 10544 "test-linc.mc"
int __ns_verify( u_char *, int *, void *, const  u_char *, int ,  u_char *, int *,  time_t *, int ) __attribute__  (( __nothrow__ )) ; 
#line 10546 "test-linc.mc"
int __ns_verify_tcp( u_char *, int *,  ns_tcp_tsig_state *, int ) __attribute__  (( __nothrow__ )) ; 
#line 10548 "test-linc.mc"
int __ns_verify_tcp_init(void *, const  u_char *, int ,  ns_tcp_tsig_state *) __attribute__  (( __nothrow__ )) ; 
#line 10549 "test-linc.mc"
int __ns_samedomain(const char *, const char *) __attribute__  (( __nothrow__ )) ; 
#line 10550 "test-linc.mc"
int __ns_subdomain(const char *, const char *) __attribute__  (( __nothrow__ )) ; 
#line 10551 "test-linc.mc"
int __ns_makecanon(const char *, char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10552 "test-linc.mc"
int __ns_samename(const char *, const char *) __attribute__  (( __nothrow__ )) ; 
#line 10575 "test-linc.mc"
typedef struct {unsigned id:16; unsigned rd:1; unsigned tc:1; unsigned aa:1; unsigned opcode:4; unsigned qr:1; unsigned rcode:4; unsigned cd:1; unsigned ad:1; unsigned unused:1; unsigned ra:1; unsigned qdcount:16; unsigned ancount:16; unsigned nscount:16; unsigned arcount:16; }HEADER; 
#line 10584 "test-linc.mc"
typedef struct _IO_FILE FILE; 
#line 10590 "test-linc.mc"
typedef struct _IO_FILE __FILE; 
#line 10591 "test-linc.mc"
typedef unsigned int wint_t; 
#line 10600 "test-linc.mc"
typedef struct {int __count; union { wint_t __wch; char __wchb[4]; }__value; }__mbstate_t; 
#line 10606 "test-linc.mc"
typedef struct { __off_t __pos;  __mbstate_t __state; }_G_fpos_t; 
#line 10611 "test-linc.mc"
typedef struct { __off64_t __pos;  __mbstate_t __state; }_G_fpos64_t; 
#line 10633 "test-linc.mc"
enum {__GCONV_OK=0,__GCONV_NOCONV,__GCONV_NODB,__GCONV_NOMEM,__GCONV_EMPTY_INPUT,__GCONV_FULL_OUTPUT,__GCONV_ILLEGAL_INPUT,__GCONV_INCOMPLETE_INPUT,__GCONV_ILLEGAL_DESCRIPTOR,__GCONV_INTERNAL_ERROR}; 
#line 10641 "test-linc.mc"
enum {__GCONV_IS_LAST=0x0001,__GCONV_IGNORE_ERRORS=0x0002}; 
#line 10645 "test-linc.mc"
struct __gconv_step ; 
#line 10646 "test-linc.mc"
struct __gconv_step_data ; 
#line 10647 "test-linc.mc"
struct __gconv_loaded_object ; 
#line 10648 "test-linc.mc"
struct __gconv_trans_data ; 
#line 10654 "test-linc.mc"
typedef int (*__gconv_fct)(struct __gconv_step *, struct __gconv_step_data *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *, int , int ); 
#line 10657 "test-linc.mc"
typedef  wint_t (*__gconv_btowc_fct)(struct __gconv_step *, unsigned char ); 
#line 10660 "test-linc.mc"
typedef int (*__gconv_init_fct)(struct __gconv_step *); 
#line 10661 "test-linc.mc"
typedef void (*__gconv_end_fct)(struct __gconv_step *); 
#line 10670 "test-linc.mc"
typedef int (*__gconv_trans_fct)(struct __gconv_step *, struct __gconv_step_data *, void *, __const unsigned char *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *); 
#line 10675 "test-linc.mc"
typedef int (*__gconv_trans_context_fct)(void *, __const unsigned char *, __const unsigned char *, unsigned char *, unsigned char *); 
#line 10679 "test-linc.mc"
typedef int (*__gconv_trans_query_fct)(__const char *, __const char ***,  size_t *); 
#line 10682 "test-linc.mc"
typedef int (*__gconv_trans_init_fct)(void **, const char *); 
#line 10683 "test-linc.mc"
typedef void (*__gconv_trans_end_fct)(void *); 
#line 10693 "test-linc.mc"
struct __gconv_trans_data { __gconv_trans_fct __trans_fct;  __gconv_trans_context_fct __trans_context_fct;  __gconv_trans_end_fct __trans_end_fct; void *__data; struct __gconv_trans_data *__next; }; 
#line 10723 "test-linc.mc"
struct __gconv_step {struct __gconv_loaded_object *__shlib_handle; __const char *__modname; int __counter; char *__from_name; char *__to_name;  __gconv_fct __fct;  __gconv_btowc_fct __btowc_fct;  __gconv_init_fct __init_fct;  __gconv_end_fct __end_fct; int __min_needed_from; int __max_needed_from; int __min_needed_to; int __max_needed_to; int __stateful; void *__data; }; 
#line 10750 "test-linc.mc"
struct __gconv_step_data {unsigned char *__outbuf; unsigned char *__outbufend; int __flags; int __invocation_counter; int __internal_use;  __mbstate_t *__statep;  __mbstate_t __state; struct __gconv_trans_data *__trans; }; 
#line 10759 "test-linc.mc"
typedef struct __gconv_info { size_t __nsteps; struct __gconv_step *__steps;  __extension__ struct __gconv_step_data __data[]; }*__gconv_t; 
#line 10768 "test-linc.mc"
typedef union {struct __gconv_info __cd; struct {struct __gconv_info __cd; struct __gconv_step_data __data; }__combined; }_G_iconv_t; 
#line 10770 "test-linc.mc"
typedef int _G_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 10771 "test-linc.mc"
typedef int _G_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 10772 "test-linc.mc"
typedef unsigned int _G_uint16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 10773 "test-linc.mc"
typedef unsigned int _G_uint32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 10774 "test-linc.mc"
struct _IO_jump_t ; 
#line 10774 "test-linc.mc"
struct _IO_FILE ; 
#line 10775 "test-linc.mc"
typedef void _IO_lock_t; 
#line 10788 "test-linc.mc"
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; }; 
#line 10797 "test-linc.mc"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
#line 10849 "test-linc.mc"
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; }; 
#line 10852 "test-linc.mc"
typedef struct _IO_FILE _IO_FILE; 
#line 10855 "test-linc.mc"
struct _IO_FILE_plus ; 
#line 10857 "test-linc.mc"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 10858 "test-linc.mc"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 10859 "test-linc.mc"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 10860 "test-linc.mc"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 10869 "test-linc.mc"
typedef  __ssize_t __io_write_fn(void *__cookie, __const char *__buf,  size_t __n); 
#line 10877 "test-linc.mc"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 10880 "test-linc.mc"
typedef int __io_close_fn(void *__cookie); 
#line 10881 "test-linc.mc"
extern int __underflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10882 "test-linc.mc"
extern int __uflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10883 "test-linc.mc"
extern int __overflow( _IO_FILE *, int ) __attribute__  (( __nothrow__ )) ; 
#line 10884 "test-linc.mc"
extern  wint_t __wunderflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10885 "test-linc.mc"
extern  wint_t __wuflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10886 "test-linc.mc"
extern  wint_t __woverflow( _IO_FILE *,  wint_t ) __attribute__  (( __nothrow__ )) ; 
#line 10887 "test-linc.mc"
extern int _IO_getc( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 10888 "test-linc.mc"
extern int _IO_putc(int __c,  _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 10889 "test-linc.mc"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 10890 "test-linc.mc"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 10892 "test-linc.mc"
extern int _IO_peekc_locked( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 10898 "test-linc.mc"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10899 "test-linc.mc"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10900 "test-linc.mc"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10902 "test-linc.mc"
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 10904 "test-linc.mc"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 10905 "test-linc.mc"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ) __attribute__  (( __nothrow__ )) ; 
#line 10906 "test-linc.mc"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 10908 "test-linc.mc"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ) __attribute__  (( __nothrow__ )) ; 
#line 10909 "test-linc.mc"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ) __attribute__  (( __nothrow__ )) ; 
#line 10911 "test-linc.mc"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 10914 "test-linc.mc"
typedef  _G_fpos_t fpos_t; 
#line 10922 "test-linc.mc"
extern struct _IO_FILE *stdin; 
#line 10923 "test-linc.mc"
extern struct _IO_FILE *stdout; 
#line 10924 "test-linc.mc"
extern struct _IO_FILE *stderr; 
#line 10934 "test-linc.mc"
extern int remove(__const char *__filename) __attribute__  (( __nothrow__ )) ; 
#line 10936 "test-linc.mc"
extern int rename(__const char *__old, __const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 10951 "test-linc.mc"
extern  FILE *tmpfile(void ); 
#line 10952 "test-linc.mc"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 10958 "test-linc.mc"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 10960 "test-linc.mc"
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 10969 "test-linc.mc"
extern int fclose( FILE *__stream); 
#line 10974 "test-linc.mc"
extern int fflush( FILE *__stream); 
#line 10976 "test-linc.mc"
extern int fflush_unlocked( FILE *__stream); 
#line 10984 "test-linc.mc"
extern  FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 10991 "test-linc.mc"
extern  FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 10993 "test-linc.mc"
extern  FILE *fdopen(int __fd, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 10997 "test-linc.mc"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 11002 "test-linc.mc"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 11009 "test-linc.mc"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 11012 "test-linc.mc"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11022 "test-linc.mc"
extern int fprintf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 11027 "test-linc.mc"
extern int printf(__const char *__restrict __format, ...); 
#line 11030 "test-linc.mc"
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 11037 "test-linc.mc"
extern int vfprintf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg); 
#line 11042 "test-linc.mc"
extern int vprintf(__const char *__restrict __format,  __gnuc_va_list __arg); 
#line 11045 "test-linc.mc"
extern int vsprintf(char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 11053 "test-linc.mc"
extern int snprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 11057 "test-linc.mc"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 11065 "test-linc.mc"
extern int fscanf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 11070 "test-linc.mc"
extern int scanf(__const char *__restrict __format, ...); 
#line 11073 "test-linc.mc"
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 11080 "test-linc.mc"
extern int fgetc( FILE *__stream); 
#line 11081 "test-linc.mc"
extern int getc( FILE *__stream); 
#line 11087 "test-linc.mc"
extern int getchar(void ); 
#line 11089 "test-linc.mc"
extern int getc_unlocked( FILE *__stream); 
#line 11090 "test-linc.mc"
extern int getchar_unlocked(void ); 
#line 11091 "test-linc.mc"
extern int fgetc_unlocked( FILE *__stream); 
#line 11103 "test-linc.mc"
extern int fputc(int __c,  FILE *__stream); 
#line 11104 "test-linc.mc"
extern int putc(int __c,  FILE *__stream); 
#line 11110 "test-linc.mc"
extern int putchar(int __c); 
#line 11112 "test-linc.mc"
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 11120 "test-linc.mc"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 11121 "test-linc.mc"
extern int putchar_unlocked(int __c); 
#line 11128 "test-linc.mc"
extern int getw( FILE *__stream); 
#line 11131 "test-linc.mc"
extern int putw(int __w,  FILE *__stream); 
#line 11141 "test-linc.mc"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
#line 11148 "test-linc.mc"
extern char *gets(char *__s); 
#line 11155 "test-linc.mc"
extern int fputs(__const char *__restrict __s,  FILE *__restrict __stream); 
#line 11161 "test-linc.mc"
extern int puts(__const char *__s); 
#line 11168 "test-linc.mc"
extern int ungetc(int __c,  FILE *__stream); 
#line 11176 "test-linc.mc"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 11182 "test-linc.mc"
extern  size_t fwrite(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
#line 11185 "test-linc.mc"
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 11187 "test-linc.mc"
extern  size_t fwrite_unlocked(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 11196 "test-linc.mc"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 11201 "test-linc.mc"
extern long int ftell( FILE *__stream); 
#line 11206 "test-linc.mc"
extern void rewind( FILE *__stream); 
#line 11208 "test-linc.mc"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 11213 "test-linc.mc"
extern  __off_t ftello( FILE *__stream); 
#line 11220 "test-linc.mc"
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 11225 "test-linc.mc"
extern int fsetpos( FILE *__stream, __const  fpos_t *__pos); 
#line 11229 "test-linc.mc"
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11231 "test-linc.mc"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11233 "test-linc.mc"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11238 "test-linc.mc"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11239 "test-linc.mc"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11240 "test-linc.mc"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11249 "test-linc.mc"
extern void perror(__const char *__s); 
#line 11256 "test-linc.mc"
extern int sys_nerr; 
#line 11257 "test-linc.mc"
extern __const char *__const sys_errlist[]; 
#line 11262 "test-linc.mc"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11267 "test-linc.mc"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11268 "test-linc.mc"
extern  FILE *popen(__const char *__command, __const char *__modes); 
#line 11274 "test-linc.mc"
extern int pclose( FILE *__stream); 
#line 11280 "test-linc.mc"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 11281 "test-linc.mc"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11285 "test-linc.mc"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11288 "test-linc.mc"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 11291 "test-linc.mc"
extern __inline int vprintf(__const char *__restrict __fmt,  __gnuc_va_list __arg)  {

#line 11292 "test-linc.mc"
return vfprintf(stdout, __fmt, __arg); }
 
#line 11298 "test-linc.mc"
extern __inline int getchar(void )  {

#line 11299 "test-linc.mc"
return _IO_getc(stdin); }
 
#line 11307 "test-linc.mc"
extern __inline int getc_unlocked( FILE *__fp)  {

#line 11308 "test-linc.mc"
return ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++)))); }
 
#line 11314 "test-linc.mc"
extern __inline int getchar_unlocked(void )  {

#line 11315 "test-linc.mc"
return ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++)))); }
 
#line 11323 "test-linc.mc"
extern __inline int putchar(int __c)  {

#line 11324 "test-linc.mc"
return _IO_putc(__c, stdout); }
 
#line 11332 "test-linc.mc"
extern __inline int fputc_unlocked(int __c,  FILE *__stream)  {

#line 11333 "test-linc.mc"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 11342 "test-linc.mc"
extern __inline int putc_unlocked(int __c,  FILE *__stream)  {

#line 11343 "test-linc.mc"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 11349 "test-linc.mc"
extern __inline int putchar_unlocked(int __c)  {

#line 11350 "test-linc.mc"
return ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c))))); }
 
#line 11354 "test-linc.mc"
extern __inline int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  {

#line 11355 "test-linc.mc"
return ((((__stream)->_flags) & 0x10) != 0); }
 
#line 11361 "test-linc.mc"
extern __inline int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  {

#line 11362 "test-linc.mc"
return ((((__stream)->_flags) & 0x20) != 0); }
 
#line 11372 "test-linc.mc"
typedef enum {res_goahead,res_nextns,res_modified,res_done,res_error}res_sendhookact; 
#line 11379 "test-linc.mc"
typedef  res_sendhookact (*res_send_qhook)(struct sockaddr_in *const *ns, const  u_char **query, int *querylen,  u_char *ans, int anssiz, int *resplen); 
#line 11386 "test-linc.mc"
typedef  res_sendhookact (*res_send_rhook)(const struct sockaddr_in *ns, const  u_char *query, int querylen,  u_char *ans, int anssiz, int *resplen); 
#line 11428 "test-linc.mc"
struct __res_state {int retrans; int retry;  u_long options; int nscount; struct sockaddr_in nsaddr_list[3];  u_short id; char *dnsrch[6 + 1]; char defdname[256];  u_long pfcode; unsigned ndots:4; unsigned nsort:4; char unused[3]; struct {struct in_addr addr;  u_int32_t mask; }sort_list[10];  res_send_qhook qhook;  res_send_rhook rhook; int res_h_errno; int _vcsock;  u_int _flags; union {char pad[52]; struct { u_int16_t nscount;  u_int16_t nsmap[3]; int nssocks[3];  u_int16_t nscount6;  u_int16_t nsinit; struct sockaddr_in6 *nsaddrs[3]; unsigned int _initstamp[2]; }_ext; }_u; }; 
#line 11430 "test-linc.mc"
typedef struct __res_state *res_state; 
#line 11435 "test-linc.mc"
struct res_sym {int number; char *name; char *humanname; }; 
#line 11437 "test-linc.mc"
extern struct __res_state *__res_state(void ) __attribute__  (( __const__ )) ; 
#line 11440 "test-linc.mc"
void __fp_nquery(const  u_char *, int ,  FILE *) __attribute__  (( __nothrow__ )) ; 
#line 11441 "test-linc.mc"
void __fp_query(const  u_char *,  FILE *) __attribute__  (( __nothrow__ )) ; 
#line 11442 "test-linc.mc"
const char *__hostalias(const char *) __attribute__  (( __nothrow__ )) ; 
#line 11443 "test-linc.mc"
void __p_query(const  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 11444 "test-linc.mc"
void __res_close(void ) __attribute__  (( __nothrow__ )) ; 
#line 11445 "test-linc.mc"
int __res_init(void ) __attribute__  (( __nothrow__ )) ; 
#line 11446 "test-linc.mc"
int __res_isourserver(const struct sockaddr_in *) __attribute__  (( __nothrow__ )) ; 
#line 11448 "test-linc.mc"
int __res_mkquery(int , const char *, int , int , const  u_char *, int , const  u_char *,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11449 "test-linc.mc"
int __res_query(const char *, int , int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11451 "test-linc.mc"
int __res_querydomain(const char *, const char *, int , int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11452 "test-linc.mc"
int __res_search(const char *, int , int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11453 "test-linc.mc"
int __res_send(const  u_char *, int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11456 "test-linc.mc"
int __res_hnok(const char *) __attribute__  (( __nothrow__ )) ; 
#line 11457 "test-linc.mc"
int __res_ownok(const char *) __attribute__  (( __nothrow__ )) ; 
#line 11458 "test-linc.mc"
int __res_mailok(const char *) __attribute__  (( __nothrow__ )) ; 
#line 11459 "test-linc.mc"
int __res_dnok(const char *) __attribute__  (( __nothrow__ )) ; 
#line 11460 "test-linc.mc"
int __sym_ston(const struct res_sym *, const char *, int *) __attribute__  (( __nothrow__ )) ; 
#line 11461 "test-linc.mc"
const char *__sym_ntos(const struct res_sym *, int , int *) __attribute__  (( __nothrow__ )) ; 
#line 11462 "test-linc.mc"
const char *__sym_ntop(const struct res_sym *, int , int *) __attribute__  (( __nothrow__ )) ; 
#line 11463 "test-linc.mc"
int __b64_ntop( u_char const *,  size_t , char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 11464 "test-linc.mc"
int __b64_pton(char const *,  u_char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 11465 "test-linc.mc"
int __loc_aton(const char *ascii,  u_char *binary) __attribute__  (( __nothrow__ )) ; 
#line 11466 "test-linc.mc"
const char *__loc_ntoa(const  u_char *binary, char *ascii) __attribute__  (( __nothrow__ )) ; 
#line 11467 "test-linc.mc"
int __dn_skipname(const  u_char *, const  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 11468 "test-linc.mc"
void __putlong( u_int32_t ,  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 11469 "test-linc.mc"
void __putshort( u_int16_t ,  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 11470 "test-linc.mc"
const char *__p_class(int ) __attribute__  (( __nothrow__ )) ; 
#line 11471 "test-linc.mc"
const char *__p_time( u_int32_t ) __attribute__  (( __nothrow__ )) ; 
#line 11472 "test-linc.mc"
const char *__p_type(int ) __attribute__  (( __nothrow__ )) ; 
#line 11473 "test-linc.mc"
const char *__p_rcode(int ) __attribute__  (( __nothrow__ )) ; 
#line 11475 "test-linc.mc"
const  u_char *__p_cdnname(const  u_char *, const  u_char *, int ,  FILE *) __attribute__  (( __nothrow__ )) ; 
#line 11476 "test-linc.mc"
const  u_char *__p_cdname(const  u_char *, const  u_char *,  FILE *) __attribute__  (( __nothrow__ )) ; 
#line 11478 "test-linc.mc"
const  u_char *__p_fqnname(const  u_char *cp, const  u_char *msg, int , char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11479 "test-linc.mc"
const  u_char *__p_fqname(const  u_char *, const  u_char *,  FILE *) __attribute__  (( __nothrow__ )) ; 
#line 11480 "test-linc.mc"
const char *__p_option( u_long option) __attribute__  (( __nothrow__ )) ; 
#line 11481 "test-linc.mc"
char *__p_secstodate( u_long ) __attribute__  (( __nothrow__ )) ; 
#line 11482 "test-linc.mc"
int __dn_count_labels(const char *) __attribute__  (( __nothrow__ )) ; 
#line 11484 "test-linc.mc"
int __dn_comp(const char *,  u_char *, int ,  u_char **,  u_char **) __attribute__  (( __nothrow__ )) ; 
#line 11486 "test-linc.mc"
int __dn_expand(const  u_char *, const  u_char *, const  u_char *, char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11487 "test-linc.mc"
 u_int __res_randomid(void ) __attribute__  (( __nothrow__ )) ; 
#line 11489 "test-linc.mc"
int __res_nameinquery(const char *, int , int , const  u_char *, const  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 11491 "test-linc.mc"
int __res_queriesmatch(const  u_char *, const  u_char *, const  u_char *, const  u_char *) __attribute__  (( __nothrow__ )) ; 
#line 11492 "test-linc.mc"
const char *__p_section(int section, int opcode) __attribute__  (( __nothrow__ )) ; 
#line 11494 "test-linc.mc"
int __res_ninit( res_state ) __attribute__  (( __nothrow__ )) ; 
#line 11496 "test-linc.mc"
int __res_nisourserver(const  res_state , const struct sockaddr_in *) __attribute__  (( __nothrow__ )) ; 
#line 11497 "test-linc.mc"
void __fp_resstat(const  res_state ,  FILE *) __attribute__  (( __nothrow__ )) ; 
#line 11499 "test-linc.mc"
void __res_npquery(const  res_state , const  u_char *, int ,  FILE *) __attribute__  (( __nothrow__ )) ; 
#line 11501 "test-linc.mc"
const char *__res_hostalias(const  res_state , const char *, char *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 11503 "test-linc.mc"
int __res_nquery( res_state , const char *, int , int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11505 "test-linc.mc"
int __res_nsearch( res_state , const char *, int , int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11507 "test-linc.mc"
int __res_nquerydomain( res_state , const char *, const char *, int , int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11510 "test-linc.mc"
int __res_nmkquery( res_state , int , const char *, int , int , const  u_char *, int , const  u_char *,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11512 "test-linc.mc"
int __res_nsend( res_state , const  u_char *, int ,  u_char *, int ) __attribute__  (( __nothrow__ )) ; 
#line 11513 "test-linc.mc"
void __res_nclose( res_state ) __attribute__  (( __nothrow__ )) ; 
#line 11552 "test-linc.mc"
struct stat { __dev_t st_dev; unsigned short int __pad1;  __ino_t st_ino;  __mode_t st_mode;  __nlink_t st_nlink;  __uid_t st_uid;  __gid_t st_gid;  __dev_t st_rdev; unsigned short int __pad2;  __off_t st_size;  __blksize_t st_blksize;  __blkcnt_t st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim; unsigned long int __unused4; unsigned long int __unused5; }; 
#line 11554 "test-linc.mc"
extern int stat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 11558 "test-linc.mc"
extern int fstat(int __fd, struct stat *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 11560 "test-linc.mc"
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 11562 "test-linc.mc"
extern int chmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11569 "test-linc.mc"
extern int lchmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11574 "test-linc.mc"
extern int fchmod(int __fd,  __mode_t __mode) __attribute__  (( __nothrow__ )) ; 
#line 11575 "test-linc.mc"
extern  __mode_t umask( __mode_t __mask) __attribute__  (( __nothrow__ )) ; 
#line 11577 "test-linc.mc"
extern int mkdir(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11579 "test-linc.mc"
extern int mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11581 "test-linc.mc"
extern int mkfifo(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11583 "test-linc.mc"
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 11585 "test-linc.mc"
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 11587 "test-linc.mc"
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 11590 "test-linc.mc"
extern int __fxstatat(int __ver, int __fildes, __const char *__filename, struct stat *__stat_buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 11592 "test-linc.mc"
extern int __xmknod(int __ver, __const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 11596 "test-linc.mc"
extern int __xmknodat(int __ver, int __fd, __const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 5 )  )) ; 
#line 11603 "test-linc.mc"
extern __inline__ int  __attribute__  (( __nothrow__ )) stat(__const char *__path, struct stat *__statbuf)  {

#line 11604 "test-linc.mc"
return __xstat(3, __path, __statbuf); }
 
#line 11610 "test-linc.mc"
extern __inline__ int  __attribute__  (( __nothrow__ )) lstat(__const char *__path, struct stat *__statbuf)  {

#line 11611 "test-linc.mc"
return __lxstat(3, __path, __statbuf); }
 
#line 11617 "test-linc.mc"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstat(int __fd, struct stat *__statbuf)  {

#line 11618 "test-linc.mc"
return __fxstat(3, __fd, __statbuf); }
 
#line 11622 "test-linc.mc"
extern __inline__ int  __attribute__  (( __nothrow__ )) mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev)  {

#line 11623 "test-linc.mc"
return __xmknod(1, __path, __mode, (&__dev)); }
 
#line 11631 "test-linc.mc"
struct timezone {int tz_minuteswest; int tz_dsttime; }; 
#line 11633 "test-linc.mc"
typedef struct timezone *__restrict __timezone_ptr_t; 
#line 11635 "test-linc.mc"
extern int gettimeofday(struct timeval *__restrict __tv,  __timezone_ptr_t __tz) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11642 "test-linc.mc"
extern int settimeofday(__const struct timeval *__tv, __const struct timezone *__tz) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11649 "test-linc.mc"
extern int adjtime(__const struct timeval *__delta, struct timeval *__olddelta) __attribute__  (( __nothrow__ )) ; 
#line 11666 "test-linc.mc"
enum __itimer_which {ITIMER_REAL=0,ITIMER_VIRTUAL=1,ITIMER_PROF=2}; 
#line 11676 "test-linc.mc"
struct itimerval {struct timeval it_interval; struct timeval it_value; }; 
#line 11683 "test-linc.mc"
typedef int __itimer_which_t; 
#line 11689 "test-linc.mc"
extern int getitimer( __itimer_which_t __which, struct itimerval *__value) __attribute__  (( __nothrow__ )) ; 
#line 11696 "test-linc.mc"
extern int setitimer( __itimer_which_t __which, __const struct itimerval *__restrict __new, struct itimerval *__restrict __old) __attribute__  (( __nothrow__ )) ; 
#line 11702 "test-linc.mc"
extern int utimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11707 "test-linc.mc"
extern int lutimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11710 "test-linc.mc"
extern int futimes(int __fd, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
#line 11724 "test-linc.mc"
typedef struct {int quot; int rem; }div_t; 
#line 11732 "test-linc.mc"
typedef struct {long int quot; long int rem; }ldiv_t; 
#line 11736 "test-linc.mc"
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 
#line 11742 "test-linc.mc"
extern double atof(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11745 "test-linc.mc"
extern int atoi(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11748 "test-linc.mc"
extern long int atol(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11755 "test-linc.mc"
 __extension__ extern long long int atoll(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11763 "test-linc.mc"
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11769 "test-linc.mc"
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11773 "test-linc.mc"
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11781 "test-linc.mc"
 __extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11786 "test-linc.mc"
 __extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11795 "test-linc.mc"
 __extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11800 "test-linc.mc"
 __extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11804 "test-linc.mc"
extern double __strtod_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11807 "test-linc.mc"
extern float __strtof_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11811 "test-linc.mc"
extern long double __strtold_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11816 "test-linc.mc"
extern long int __strtol_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11823 "test-linc.mc"
extern unsigned long int __strtoul_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11832 "test-linc.mc"
 __extension__ extern long long int __strtoll_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11841 "test-linc.mc"
 __extension__ extern unsigned long long int __strtoull_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11852 "test-linc.mc"
extern __inline double  __attribute__  (( __nothrow__ )) strtod(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 11853 "test-linc.mc"
return __strtod_internal(__nptr, __endptr, 0); }
 
#line 11858 "test-linc.mc"
extern __inline long int  __attribute__  (( __nothrow__ )) strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 11859 "test-linc.mc"
return __strtol_internal(__nptr, __endptr, __base, 0); }
 
#line 11864 "test-linc.mc"
extern __inline unsigned long int  __attribute__  (( __nothrow__ )) strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 11865 "test-linc.mc"
return __strtoul_internal(__nptr, __endptr, __base, 0); }
 
#line 11871 "test-linc.mc"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 11872 "test-linc.mc"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 11877 "test-linc.mc"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 11878 "test-linc.mc"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 11887 "test-linc.mc"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 11888 "test-linc.mc"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 11893 "test-linc.mc"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 11894 "test-linc.mc"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 11902 "test-linc.mc"
extern __inline double  __attribute__  (( __nothrow__ )) atof(__const char *__nptr)  {

#line 11903 "test-linc.mc"
return strtod(__nptr, ((char **)(((void *)0)))); }
 
#line 11907 "test-linc.mc"
extern __inline int  __attribute__  (( __nothrow__ )) atoi(__const char *__nptr)  {

#line 11908 "test-linc.mc"
return ((int )strtol(__nptr, ((char **)(((void *)0))), 10)); }
 
#line 11912 "test-linc.mc"
extern __inline long int  __attribute__  (( __nothrow__ )) atol(__const char *__nptr)  {

#line 11913 "test-linc.mc"
return strtol(__nptr, ((char **)(((void *)0))), 10); }
 
#line 11921 "test-linc.mc"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) atoll(__const char *__nptr)  {

#line 11922 "test-linc.mc"
return strtoll(__nptr, ((char **)(((void *)0))), 10); }
 
#line 11925 "test-linc.mc"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 11929 "test-linc.mc"
extern long int a64l(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11930 "test-linc.mc"
extern long int random(void ) __attribute__  (( __nothrow__ )) ; 
#line 11933 "test-linc.mc"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 11940 "test-linc.mc"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 11944 "test-linc.mc"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 11961 "test-linc.mc"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; }; 
#line 11964 "test-linc.mc"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 11967 "test-linc.mc"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 11972 "test-linc.mc"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 11976 "test-linc.mc"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 11983 "test-linc.mc"
extern int rand(void ) __attribute__  (( __nothrow__ )) ; 
#line 11985 "test-linc.mc"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 11990 "test-linc.mc"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 
#line 11998 "test-linc.mc"
extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 11999 "test-linc.mc"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12002 "test-linc.mc"
extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 12004 "test-linc.mc"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12007 "test-linc.mc"
extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 12009 "test-linc.mc"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12012 "test-linc.mc"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 
#line 12014 "test-linc.mc"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12015 "test-linc.mc"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12028 "test-linc.mc"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init; unsigned long long int __a; }; 
#line 12032 "test-linc.mc"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12035 "test-linc.mc"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12040 "test-linc.mc"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12044 "test-linc.mc"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12049 "test-linc.mc"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12053 "test-linc.mc"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12057 "test-linc.mc"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 12060 "test-linc.mc"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12064 "test-linc.mc"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 12069 "test-linc.mc"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 12071 "test-linc.mc"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 12076 "test-linc.mc"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 12087 "test-linc.mc"
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 12098 "test-linc.mc"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 12104 "test-linc.mc"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12109 "test-linc.mc"
extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 12113 "test-linc.mc"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12120 "test-linc.mc"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12127 "test-linc.mc"
extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 12131 "test-linc.mc"
extern char *getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12137 "test-linc.mc"
extern char *__secure_getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12143 "test-linc.mc"
extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12150 "test-linc.mc"
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 12153 "test-linc.mc"
extern int unsetenv(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 12160 "test-linc.mc"
extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 
#line 12161 "test-linc.mc"
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12162 "test-linc.mc"
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12163 "test-linc.mc"
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12172 "test-linc.mc"
extern int system(__const char *__command); 
#line 12175 "test-linc.mc"
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 12182 "test-linc.mc"
typedef int (*__compar_fn_t)(__const void *, __const void *); 
#line 12194 "test-linc.mc"
extern void *bsearch(__const void *__key, __const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 12199 "test-linc.mc"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 12203 "test-linc.mc"
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 12204 "test-linc.mc"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 12218 "test-linc.mc"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 12220 "test-linc.mc"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 12223 "test-linc.mc"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 12229 "test-linc.mc"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 12235 "test-linc.mc"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 12242 "test-linc.mc"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 12245 "test-linc.mc"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 12247 "test-linc.mc"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 12254 "test-linc.mc"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 12257 "test-linc.mc"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 12262 "test-linc.mc"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 12266 "test-linc.mc"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 12274 "test-linc.mc"
extern int mblen(__const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 12278 "test-linc.mc"
extern int mbtowc( wchar_t *__restrict __pwc, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 12281 "test-linc.mc"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 
#line 12286 "test-linc.mc"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 12290 "test-linc.mc"
extern  size_t wcstombs(char *__restrict __s, __const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 12299 "test-linc.mc"
extern int rpmatch(__const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12300 "test-linc.mc"
extern int posix_openpt(int __oflag); 
#line 12302 "test-linc.mc"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12311 "test-linc.mc"
struct utimbuf { __time_t actime;  __time_t modtime; }; 
#line 12317 "test-linc.mc"
extern int utime(__const char *__file, __const struct utimbuf *__file_times) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 12332 "test-linc.mc"
extern int *__errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 12334 "test-linc.mc"
const char *link_strerror(int ); 
#line 12341 "test-linc.mc"
static void test_protos(void )  {

#line 12342 "test-linc.mc"

#line 12342 "test-linc.mc"
 LinkProtocolInfo *info;
#line 12344 "test-linc.mc"
info = link_protocol_all(); 
#line 12346 "test-linc.mc"
fprintf(stderr, "Available protocols: {\n"); 
#line 12348 "test-linc.mc"
while(info && (info->name)) { { 
#line 12356 "test-linc.mc"
fprintf(stderr, "\t'%8s': %2d, %3d, %2d, 0x%.4x [%c%c%c%c%c]\n", (info->name), (info->family), (info->addr_len), (info->stream_proto_num), (info->flags), ((info->setup)?'s':'-'), ((info->destroy)?'d':'-'), ((info->get_sockaddr)?'a':'-'), ((info->get_sockinfo)?'i':'-'), ((info->is_local)?'l':'-')); 
#line 12357 "test-linc.mc"
info++; } } 
#line 12360 "test-linc.mc"
fprintf(stderr, " }\n"); }
 
#line 12365 "test-linc.mc"
static void init_tmp(void )  {

#line 12366 "test-linc.mc"

#line 12366 "test-linc.mc"
char *dir;
#line 12367 "test-linc.mc"

#line 12367 "test-linc.mc"
const char *user = g_get_user_name();
#line 12369 "test-linc.mc"
dir = g_build_filename(g_get_tmp_dir(), g_strconcat("orbit-", user, (((void *)0))), (((void *)0))); 
#line 12374 "test-linc.mc"
link_set_tmpdir(dir); 
#line 12376 "test-linc.mc"
g_free(dir); }
 
#line 12379 "test-linc.mc"
static  GType test_server_cnx_type = 0; 
#line 12380 "test-linc.mc"
static  GType test_client_cnx_type = 0; 
#line 12381 "test-linc.mc"
static  gboolean connected = (0); 
#line 12385 "test-linc.mc"
static  LinkConnection *test_server_create_connection( LinkServer *cnx)  {

#line 12386 "test-linc.mc"

#line 12386 "test-linc.mc"
 GType t;
#line 12388 "test-linc.mc"
t = (test_server_cnx_type?test_server_cnx_type:link_connection_get_type()); 
#line 12390 "test-linc.mc"
connected = ((!(0))); 
#line 12392 "test-linc.mc"
return g_object_new(t, (((void *)0))); }
 
#line 12397 "test-linc.mc"
static void create_server( LinkServer **server)  {

#line 12398 "test-linc.mc"

#line 12398 "test-linc.mc"
 LinkServerClass *klass;
#line 12400 "test-linc.mc"
klass = g_type_class_ref(link_server_get_type()); 
#line 12401 "test-linc.mc"
(klass->create_connection) = test_server_create_connection; 
#line 12403 "test-linc.mc"
(*server) = g_object_new(link_server_get_type(), (((void *)0))); 
#line 12409 "test-linc.mc"
((void )__extension__ ({ 
#line 12409 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12409 "test-linc.mc"

#line 12409 "test-linc.mc"
int _g_boolean_var_;
#line 12409 "test-linc.mc"
if (link_server_setup((*server), "UNIX", (((void *)0)), (((void *)0)), LINK_CONNECTION_NONBLOCKING)){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12409 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 83, __PRETTY_FUNCTION__, "link_server_setup (*server, \"UNIX\", NULL, NULL, LINK_CONNECTION_NONBLOCKING)"); }} )); 
#line 12412 "test-linc.mc"
g_object_add_weak_pointer(((((( GObject *)g_type_check_instance_cast((( GTypeInstance *)(((*server)))), (((( GType )((20) << (2)))))))))), (( gpointer *)server)); }
 
#line 12418 "test-linc.mc"
static void create_client( LinkServer *server,  LinkConnection **client)  {

#line 12430 "test-linc.mc"
(*client) = link_connection_initiate((test_client_cnx_type?test_client_cnx_type:link_connection_get_type()), "UNIX", (server->local_host_info), (server->local_serv_info), LINK_CONNECTION_NONBLOCKING, (((void *)0))); 
#line 12431 "test-linc.mc"
((void )__extension__ ({ 
#line 12431 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12431 "test-linc.mc"

#line 12431 "test-linc.mc"
int _g_boolean_var_;
#line 12431 "test-linc.mc"
if ((*client) != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12431 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 104, __PRETTY_FUNCTION__, "*client != NULL"); }} )); 
#line 12433 "test-linc.mc"
g_object_add_weak_pointer(((((( GObject *)g_type_check_instance_cast((( GTypeInstance *)(((*client)))), (((( GType )((20) << (2)))))))))), (( gpointer *)client)); }
 
#line 12440 "test-linc.mc"
static  gboolean test_broken_cnx_handle_input( LinkConnection *cnx)  {

#line 12441 "test-linc.mc"

#line 12441 "test-linc.mc"
 glong ret;
#line 12442 "test-linc.mc"

#line 12442 "test-linc.mc"
 guchar buffer;
#line 12444 "test-linc.mc"
ret = link_connection_read(cnx, (&buffer), 1, (0)); 
#line 12446 "test-linc.mc"
((void )__extension__ ({ 
#line 12446 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12446 "test-linc.mc"

#line 12446 "test-linc.mc"
int _g_boolean_var_;
#line 12446 "test-linc.mc"
if (ret == LINK_IO_FATAL_ERROR){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12446 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 120, __PRETTY_FUNCTION__, "ret == LINK_IO_FATAL_ERROR"); }} )); 
#line 12448 "test-linc.mc"
link_connection_state_changed(cnx, LINK_DISCONNECTED); 
#line 12450 "test-linc.mc"
return ((!(0))); }
 
#line 12455 "test-linc.mc"
static void test_broken_cnx_class_init( LinkConnectionClass *klass)  {

#line 12456 "test-linc.mc"
(klass->handle_input) = test_broken_cnx_handle_input; }
 
#line 12460 "test-linc.mc"
static  GType test_get_broken_cnx_type(void )  {

#line 12461 "test-linc.mc"

#line 12461 "test-linc.mc"
static  GType object_type = 0;
#line 12463 "test-linc.mc"
if ((!object_type)){
{ 
#line 12474 "test-linc.mc"

#line 12474 "test-linc.mc"
static const  GTypeInfo object_info = {sizeof ( LinkConnectionClass ),(( GBaseInitFunc )(((void *)0))),(( GBaseFinalizeFunc )(((void *)0))),(( GClassInitFunc )test_broken_cnx_class_init),(((void *)0)),(((void *)0)),sizeof ( LinkConnection ),0,(( GInstanceInitFunc )(((void *)0))),};
#line 12476 "test-linc.mc"
object_type = g_type_register_static((link_connection_get_type()), "TestConnection", (&object_info), 0); } }
#line 12481 "test-linc.mc"
return object_type; }
 
#line 12486 "test-linc.mc"
static void broken_cb( LinkConnection *cnx,  gpointer user_data)  {

#line 12487 "test-linc.mc"
((void )__extension__ ({ 
#line 12487 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12487 "test-linc.mc"

#line 12487 "test-linc.mc"
int _g_boolean_var_;
#line 12487 "test-linc.mc"
if (user_data == (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12487 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 162, __PRETTY_FUNCTION__, "user_data == NULL"); }} )); 
#line 12489 "test-linc.mc"
exit(13); }
 
#line 12494 "test-linc.mc"
static void test_broken(void )  {

#line 12495 "test-linc.mc"

#line 12495 "test-linc.mc"
 LinkServer *server;
#line 12496 "test-linc.mc"

#line 12496 "test-linc.mc"
 LinkConnection *client;
#line 12497 "test-linc.mc"

#line 12497 "test-linc.mc"
 pid_t child;
#line 12498 "test-linc.mc"

#line 12498 "test-linc.mc"
int status;
#line 12500 "test-linc.mc"
fprintf(stderr, "Testing 'broken' ...\n"); 
#line 12502 "test-linc.mc"
create_server((&server)); 
#line 12504 "test-linc.mc"
if ((child = fork()) == 0){
{ 
#line 12505 "test-linc.mc"
test_client_cnx_type = test_get_broken_cnx_type(); 
#line 12506 "test-linc.mc"
create_client(server, (&client)); 
#line 12507 "test-linc.mc"
test_client_cnx_type = 0; 
#line 12509 "test-linc.mc"
g_signal_connect_data((((((( GObject *)g_type_check_instance_cast((( GTypeInstance *)((client))), (((( GType )((20) << (2))))))))))), ("broken"), (((( GCallback )(broken_cb)))), ((((void *)0))), (((void *)0)), (( GConnectFlags )0)); 
#line 12512 "test-linc.mc"
g_object_unref(((((( GObject *)g_type_check_instance_cast((( GTypeInstance *)((server))), (((( GType )((20) << (2))))))))))); 
#line 12513 "test-linc.mc"
((void )__extension__ ({ 
#line 12513 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12513 "test-linc.mc"

#line 12513 "test-linc.mc"
int _g_boolean_var_;
#line 12513 "test-linc.mc"
if (server == (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12513 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 188, __PRETTY_FUNCTION__, "server == NULL"); }} )); 
#line 12515 "test-linc.mc"
link_main_loop_run(); 
#line 12517 "test-linc.mc"
((void )__extension__ ({ 
#line 12517 "test-linc.mc"
g_assert_warning(((( gchar *)0)), "test-linc.c", 192, __PRETTY_FUNCTION__, (((void *)0))); } )); } }
#line 12520 "test-linc.mc"
while((!connected)) { link_main_iteration((0)); } 
#line 12522 "test-linc.mc"
connected = (0); 
#line 12524 "test-linc.mc"
g_object_unref(((((( GObject *)g_type_check_instance_cast((( GTypeInstance *)((server))), (((( GType )((20) << (2))))))))))); 
#line 12525 "test-linc.mc"
((void )__extension__ ({ 
#line 12525 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12525 "test-linc.mc"

#line 12525 "test-linc.mc"
int _g_boolean_var_;
#line 12525 "test-linc.mc"
if (server == (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12525 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 200, __PRETTY_FUNCTION__, "server == NULL"); }} )); 
#line 12527 "test-linc.mc"
waitpid(child, (&status), 0); 
#line 12528 "test-linc.mc"
((void )__extension__ ({ 
#line 12528 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12528 "test-linc.mc"

#line 12528 "test-linc.mc"
int _g_boolean_var_;
#line 12528 "test-linc.mc"
if (((((__extension__ (((union {__typeof (status) __in; int __i; }){.__in = (status)}).__i))) & 0x7f) == 0) && ((((__extension__ (((union {__typeof (status) __in; int __i; }){.__in = (status)}).__i))) & 0xff00) >> 8) == 13){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12528 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 203, __PRETTY_FUNCTION__, "WIFEXITED (status) && WEXITSTATUS (status) == 13"); }} )); }
 
#line 12534 "test-linc.mc"
static  GIOCondition knobble_watch( LinkWatch *watch,  GIOCondition new_cond)  {

#line 12535 "test-linc.mc"

#line 12535 "test-linc.mc"
 GIOCondition old_cond;
#line 12537 "test-linc.mc"
((void )__extension__ ({ 
#line 12537 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12537 "test-linc.mc"

#line 12537 "test-linc.mc"
int _g_boolean_var_;
#line 12537 "test-linc.mc"
if (watch != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12537 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 213, __PRETTY_FUNCTION__, "watch != NULL"); }} )); 
#line 12539 "test-linc.mc"
old_cond = (((( LinkUnixWatch *)(watch->link_source)))->condition); 
#line 12541 "test-linc.mc"
((void )__extension__ ({ 
#line 12541 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12541 "test-linc.mc"

#line 12541 "test-linc.mc"
int _g_boolean_var_;
#line 12541 "test-linc.mc"
if (old_cond == (((( LinkUnixWatch *)(watch->main_source)))->condition)){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12541 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 217, __PRETTY_FUNCTION__, "old_cond == ((LinkUnixWatch *) watch->main_source)->condition"); }} )); 
#line 12543 "test-linc.mc"
link_watch_set_condition(watch, new_cond); 
#line 12545 "test-linc.mc"
return old_cond; }
 
#line 12552 "test-linc.mc"
typedef struct {int status;  GIOCondition old_cond;  LinkConnection *s_cnx; }BlockingData; 
#line 12558 "test-linc.mc"
static void blocking_cb( LinkConnection *cnx,  gulong buffer_size,  gpointer user_data)  {

#line 12559 "test-linc.mc"

#line 12559 "test-linc.mc"
 BlockingData *bd = user_data;
#line 12561 "test-linc.mc"
if ((bd->status) < 3){
fprintf(stderr, " buffer %ld\n", buffer_size); }
#line 12564 "test-linc.mc"
(bd->status)++; 
#line 12566 "test-linc.mc"
if (buffer_size == 1024){
{ 
#line 12567 "test-linc.mc"
knobble_watch((((bd->s_cnx)->priv)->tag), (bd->old_cond)); 
#line 12570 "test-linc.mc"
while(((cnx->priv)->write_queue) != (((void *)0)) && (cnx->status) == LINK_CONNECTED) { link_main_iteration((0)); } 
#line 12574 "test-linc.mc"
((void )__extension__ ({ 
#line 12574 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12574 "test-linc.mc"

#line 12574 "test-linc.mc"
int _g_boolean_var_;
#line 12574 "test-linc.mc"
if ((cnx->status) == LINK_CONNECTED){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12574 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 250, __PRETTY_FUNCTION__, "cnx->status == LINK_CONNECTED"); }} )); } }}
 
#line 12579 "test-linc.mc"
static  gboolean test_blocking_cnx_handle_input( LinkConnection *cnx)  {

#line 12580 "test-linc.mc"

#line 12580 "test-linc.mc"
static  gulong idx = 0;
#line 12581 "test-linc.mc"

#line 12581 "test-linc.mc"
 glong size,i;
#line 12582 "test-linc.mc"

#line 12582 "test-linc.mc"
 guint32 buffer[1024];
#line 12584 "test-linc.mc"
size = link_connection_read(cnx, (( guchar *)buffer), 512, ((!(0)))); 
#line 12585 "test-linc.mc"
((void )__extension__ ({ 
#line 12585 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12585 "test-linc.mc"

#line 12585 "test-linc.mc"
int _g_boolean_var_;
#line 12585 "test-linc.mc"
if (size != (-1)){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12585 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 262, __PRETTY_FUNCTION__, "size != -1"); }} )); 
#line 12586 "test-linc.mc"
((void )__extension__ ({ 
#line 12586 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12586 "test-linc.mc"

#line 12586 "test-linc.mc"
int _g_boolean_var_;
#line 12586 "test-linc.mc"
if ((size & 0x3) == 0){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12586 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 263, __PRETTY_FUNCTION__, "(size & 0x3) == 0"); }} )); 
#line 12587 "test-linc.mc"
((void )__extension__ ({ 
#line 12587 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12587 "test-linc.mc"

#line 12587 "test-linc.mc"
int _g_boolean_var_;
#line 12587 "test-linc.mc"
if (size <= 512){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12587 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 264, __PRETTY_FUNCTION__, "size <= 512"); }} )); 
#line 12589 "test-linc.mc"
for(i = 0;i < (size >> 2);i++) { ((void )__extension__ ({ 
#line 12590 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12590 "test-linc.mc"

#line 12590 "test-linc.mc"
int _g_boolean_var_;
#line 12590 "test-linc.mc"
if (buffer[i] == idx++){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12590 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 267, __PRETTY_FUNCTION__, "buffer [i] == idx++"); }} )); } 
#line 12592 "test-linc.mc"
return ((!(0))); }
 
#line 12597 "test-linc.mc"
static void test_blocking_cnx_class_init( LinkConnectionClass *klass)  {

#line 12598 "test-linc.mc"
(klass->handle_input) = test_blocking_cnx_handle_input; }
 
#line 12602 "test-linc.mc"
static  GType test_get_blocking_cnx_type(void )  {

#line 12603 "test-linc.mc"

#line 12603 "test-linc.mc"
static  GType object_type = 0;
#line 12605 "test-linc.mc"
if ((!object_type)){
{ 
#line 12616 "test-linc.mc"

#line 12616 "test-linc.mc"
static const  GTypeInfo object_info = {sizeof ( LinkConnectionClass ),(( GBaseInitFunc )(((void *)0))),(( GBaseFinalizeFunc )(((void *)0))),(( GClassInitFunc )test_blocking_cnx_class_init),(((void *)0)),(((void *)0)),sizeof ( LinkConnection ),0,(( GInstanceInitFunc )(((void *)0))),};
#line 12618 "test-linc.mc"
object_type = g_type_register_static((link_connection_get_type()), "TestConnection", (&object_info), 0); } }
#line 12623 "test-linc.mc"
return object_type; }
 
#line 12628 "test-linc.mc"
static void test_blocking(void )  {

#line 12629 "test-linc.mc"

#line 12629 "test-linc.mc"
 BlockingData bd;
#line 12630 "test-linc.mc"

#line 12630 "test-linc.mc"
 LinkServer *server;
#line 12631 "test-linc.mc"

#line 12631 "test-linc.mc"
 LinkConnection *client;
#line 12632 "test-linc.mc"

#line 12632 "test-linc.mc"
 LinkWriteOpts *options;
#line 12633 "test-linc.mc"

#line 12633 "test-linc.mc"
 guint32 buffer[1024] = {0};
#line 12634 "test-linc.mc"

#line 12634 "test-linc.mc"
 glong l;
#line 12635 "test-linc.mc"

#line 12635 "test-linc.mc"
int i;
#line 12637 "test-linc.mc"
fprintf(stderr, "Testing blocking code ...\n"); 
#line 12640 "test-linc.mc"
test_server_cnx_type = test_get_blocking_cnx_type(); 
#line 12642 "test-linc.mc"
create_server((&server)); 
#line 12643 "test-linc.mc"
create_client(server, (&client)); 
#line 12644 "test-linc.mc"
link_main_iteration((0)); 
#line 12646 "test-linc.mc"
((void )__extension__ ({ 
#line 12646 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12646 "test-linc.mc"

#line 12646 "test-linc.mc"
int _g_boolean_var_;
#line 12646 "test-linc.mc"
if (((server->priv)->connections) != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12646 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 324, __PRETTY_FUNCTION__, "server->priv->connections != NULL"); }} )); 
#line 12647 "test-linc.mc"
bd.s_cnx = (((server->priv)->connections)->data); 
#line 12648 "test-linc.mc"
((void )__extension__ ({ 
#line 12648 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12648 "test-linc.mc"

#line 12648 "test-linc.mc"
int _g_boolean_var_;
#line 12648 "test-linc.mc"
if (bd.s_cnx != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12648 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 326, __PRETTY_FUNCTION__, "bd.s_cnx != NULL"); }} )); 
#line 12649 "test-linc.mc"
((void )__extension__ ({ 
#line 12649 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12649 "test-linc.mc"

#line 12649 "test-linc.mc"
int _g_boolean_var_;
#line 12649 "test-linc.mc"
if (((bd.s_cnx->priv)->tag) != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12649 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 327, __PRETTY_FUNCTION__, "bd.s_cnx->priv->tag != NULL"); }} )); 
#line 12650 "test-linc.mc"
bd.old_cond = knobble_watch(((bd.s_cnx->priv)->tag), 0); 
#line 12652 "test-linc.mc"
options = link_write_options_new((0)); 
#line 12653 "test-linc.mc"
link_connection_set_max_buffer(client, 1024); 
#line 12654 "test-linc.mc"
g_signal_connect_data((((((( GObject *)g_type_check_instance_cast((( GTypeInstance *)((client))), (((( GType )((20) << (2))))))))))), ("blocking"), (((( GCallback )(blocking_cb)))), ((&bd)), (((void *)0)), (( GConnectFlags )0)); 
#line 12656 "test-linc.mc"
(client->options) |= LINK_CONNECTION_BLOCK_SIGNAL; 
#line 12658 "test-linc.mc"
l = 0; 
#line 12659 "test-linc.mc"
bd.status = 0; 
#line 12660 "test-linc.mc"
for(i = 0;i < (512 * 1024);i += 128) { { 
#line 12661 "test-linc.mc"

#line 12661 "test-linc.mc"
int j;
#line 12663 "test-linc.mc"
for(j = 0;j < 128 / 4;j++) { buffer[j] = l++; } 
#line 12666 "test-linc.mc"
link_connection_write(client, (( guchar *)buffer), 128, options); 
#line 12668 "test-linc.mc"
if ((client->status) != LINK_CONNECTED){
break; }} } 
#line 12672 "test-linc.mc"
((void )__extension__ ({ 
#line 12672 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12672 "test-linc.mc"

#line 12672 "test-linc.mc"
int _g_boolean_var_;
#line 12672 "test-linc.mc"
if ((client->status) == LINK_CONNECTED){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12672 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 350, __PRETTY_FUNCTION__, "client->status == LINK_CONNECTED"); }} )); 
#line 12673 "test-linc.mc"
((void )__extension__ ({ 
#line 12673 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12673 "test-linc.mc"

#line 12673 "test-linc.mc"
int _g_boolean_var_;
#line 12673 "test-linc.mc"
if (bd.status >= 3){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12673 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 351, __PRETTY_FUNCTION__, "bd.status >= 3"); }} )); 
#line 12675 "test-linc.mc"
link_connection_unref(client); 
#line 12676 "test-linc.mc"
((void )__extension__ ({ 
#line 12676 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12676 "test-linc.mc"

#line 12676 "test-linc.mc"
int _g_boolean_var_;
#line 12676 "test-linc.mc"
if (client == (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12676 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 354, __PRETTY_FUNCTION__, "client == NULL"); }} )); 
#line 12678 "test-linc.mc"
link_main_iteration((0)); 
#line 12680 "test-linc.mc"
g_object_unref(server); 
#line 12681 "test-linc.mc"
((void )__extension__ ({ 
#line 12681 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12681 "test-linc.mc"

#line 12681 "test-linc.mc"
int _g_boolean_var_;
#line 12681 "test-linc.mc"
if (server == (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12681 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 359, __PRETTY_FUNCTION__, "server == NULL"); }} )); 
#line 12683 "test-linc.mc"
test_server_cnx_type = 0; 
#line 12685 "test-linc.mc"
link_write_options_free(options); }
 
#line 12690 "test-linc.mc"
static void test_local_ipv4(void )  {

#line 12691 "test-linc.mc"

#line 12691 "test-linc.mc"
 LinkSockLen saddr_len;
#line 12692 "test-linc.mc"

#line 12692 "test-linc.mc"
 LinkProtocolInfo *proto;
#line 12693 "test-linc.mc"

#line 12693 "test-linc.mc"
struct sockaddr *saddr;
#line 12694 "test-linc.mc"

#line 12694 "test-linc.mc"
struct sockaddr_in ipv4_addr = {0};
#line 12696 "test-linc.mc"
fprintf(stderr, " IPv4\n"); 
#line 12697 "test-linc.mc"
proto = link_protocol_find("IPv4"); 
#line 12698 "test-linc.mc"
((void )__extension__ ({ 
#line 12698 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12698 "test-linc.mc"

#line 12698 "test-linc.mc"
int _g_boolean_var_;
#line 12698 "test-linc.mc"
if (proto != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12698 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 376, __PRETTY_FUNCTION__, "proto != NULL"); }} )); 
#line 12700 "test-linc.mc"
ipv4_addr.sin_family = 2; 
#line 12701 "test-linc.mc"
ipv4_addr.sin_port = 1234; 
#line 12702 "test-linc.mc"
memset((&ipv4_addr.sin_addr.s_addr), 0xaa, 4); 
#line 12703 "test-linc.mc"
((void )__extension__ ({ 
#line 12703 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12703 "test-linc.mc"

#line 12703 "test-linc.mc"
int _g_boolean_var_;
#line 12703 "test-linc.mc"
if ((!link_protocol_is_local(proto, ((struct sockaddr *)(&ipv4_addr)), sizeof (ipv4_addr)))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12703 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 383, __PRETTY_FUNCTION__, "!link_protocol_is_local ( proto, (struct sockaddr *)&ipv4_addr, sizeof (ipv4_addr))"); }} )); 
#line 12707 "test-linc.mc"
saddr = link_protocol_get_sockaddr(proto, link_get_local_hostname(), (((void *)0)), (&saddr_len)); 
#line 12710 "test-linc.mc"
((void )__extension__ ({ 
#line 12710 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12710 "test-linc.mc"

#line 12710 "test-linc.mc"
int _g_boolean_var_;
#line 12710 "test-linc.mc"
if (link_protocol_is_local(proto, saddr, saddr_len)){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12710 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 388, __PRETTY_FUNCTION__, "link_protocol_is_local (proto, saddr, saddr_len)"); }} )); 
#line 12711 "test-linc.mc"
g_free(saddr); }
 
#line 12716 "test-linc.mc"
static void test_local_ipv6(void )  {

#line 12718 "test-linc.mc"

#line 12718 "test-linc.mc"
 LinkProtocolInfo *proto;
#line 12719 "test-linc.mc"

#line 12719 "test-linc.mc"
struct sockaddr_in6 ipv6_addr = {0};
#line 12721 "test-linc.mc"
fprintf(stderr, " IPv6\n"); 
#line 12722 "test-linc.mc"
proto = link_protocol_find("IPv6"); 
#line 12723 "test-linc.mc"
((void )__extension__ ({ 
#line 12723 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12723 "test-linc.mc"

#line 12723 "test-linc.mc"
int _g_boolean_var_;
#line 12723 "test-linc.mc"
if (proto != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12723 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 401, __PRETTY_FUNCTION__, "proto != NULL"); }} )); 
#line 12725 "test-linc.mc"
((void )__extension__ ({ 
#line 12725 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12725 "test-linc.mc"

#line 12725 "test-linc.mc"
int _g_boolean_var_;
#line 12725 "test-linc.mc"
if (proto != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12725 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 403, __PRETTY_FUNCTION__, "proto != NULL"); }} )); 
#line 12727 "test-linc.mc"
ipv6_addr.sin6_family = 10; 
#line 12728 "test-linc.mc"
ipv6_addr.sin6_port = 1234; 
#line 12729 "test-linc.mc"
memset((&ipv6_addr.sin6_addr.in6_u.u6_addr8), 0xaa, 16); 
#line 12730 "test-linc.mc"
((void )__extension__ ({ 
#line 12730 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12730 "test-linc.mc"

#line 12730 "test-linc.mc"
int _g_boolean_var_;
#line 12730 "test-linc.mc"
if ((!link_protocol_is_local(proto, ((struct sockaddr *)(&ipv6_addr)), sizeof (ipv6_addr)))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12730 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 410, __PRETTY_FUNCTION__, "!link_protocol_is_local ( proto, (struct sockaddr *)&ipv6_addr, sizeof (ipv6_addr))"); }} )); }
 
#line 12740 "test-linc.mc"
static void test_local(void )  {

#line 12742 "test-linc.mc"

#line 12742 "test-linc.mc"
 LinkProtocolInfo *proto;
#line 12745 "test-linc.mc"
fprintf(stderr, "Testing is_local checking ...\n"); 
#line 12747 "test-linc.mc"
((void )__extension__ ({ 
#line 12747 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12747 "test-linc.mc"

#line 12747 "test-linc.mc"
int _g_boolean_var_;
#line 12747 "test-linc.mc"
if ((!link_protocol_is_local((((void *)0)), (((void *)0)), (-1)))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12747 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 425, __PRETTY_FUNCTION__, "!link_protocol_is_local (NULL, NULL, -1)"); }} )); 
#line 12750 "test-linc.mc"
fprintf(stderr, " UNIX\n"); 
#line 12751 "test-linc.mc"
proto = link_protocol_find("UNIX"); 
#line 12752 "test-linc.mc"
((void )__extension__ ({ 
#line 12752 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12752 "test-linc.mc"

#line 12752 "test-linc.mc"
int _g_boolean_var_;
#line 12752 "test-linc.mc"
if (proto != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12752 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 430, __PRETTY_FUNCTION__, "proto != NULL"); }} )); 
#line 12753 "test-linc.mc"
((void )__extension__ ({ 
#line 12753 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12753 "test-linc.mc"

#line 12753 "test-linc.mc"
int _g_boolean_var_;
#line 12753 "test-linc.mc"
if (link_protocol_is_local(proto, (((void *)0)), (-1))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12753 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 431, __PRETTY_FUNCTION__, "link_protocol_is_local (proto, NULL, -1)"); }} )); 
#line 12755 "test-linc.mc"
test_local_ipv4(); 
#line 12756 "test-linc.mc"
test_local_ipv6(); }
 
#line 12761 "test-linc.mc"
static void verify_addr_is_loopback( guint8 *addr, int length)  {

#line 12762 "test-linc.mc"

#line 12762 "test-linc.mc"
int i;
#line 12764 "test-linc.mc"
if (length == 4){
i = 0; }else{
if (length == 16){
{ 
#line 12773 "test-linc.mc"
for(i = 0;i < 10;i++) { if (addr[i] != 0){
return ; }} 
#line 12773 "test-linc.mc"
if (addr[i++] != 0xff || addr[i++] != 0xff){
return ; }} }else{
{ 
#line 12776 "test-linc.mc"
i = 0; 
#line 12777 "test-linc.mc"
((void )__extension__ ({ 
#line 12777 "test-linc.mc"
g_assert_warning(((( gchar *)0)), "test-linc.c", 455, __PRETTY_FUNCTION__, (((void *)0))); } )); } }}
#line 12780 "test-linc.mc"
if (addr[i + 0] == 127 && addr[i + 1] == 0 && addr[i + 2] == 0 && addr[i + 3] == 1){
{ 
#line 12784 "test-linc.mc"
g_log(((( gchar *)0)), G_LOG_LEVEL_WARNING, " --- The reverse lookup of your hostname ""is 127.0.0.1 you will not be able to ""do inter-machine comms. ---"); 
#line 12787 "test-linc.mc"
exit(0); } }}
 
#line 12793 "test-linc.mc"
static void test_hosts_lookup(void )  {

#line 12794 "test-linc.mc"

#line 12794 "test-linc.mc"
int i;
#line 12795 "test-linc.mc"

#line 12795 "test-linc.mc"
struct hostent *hent;
#line 12796 "test-linc.mc"

#line 12796 "test-linc.mc"
 LinkProtocolInfo *proto;
#line 12797 "test-linc.mc"

#line 12797 "test-linc.mc"
 LinkSockLen saddr_len;
#line 12798 "test-linc.mc"

#line 12798 "test-linc.mc"
struct sockaddr_in *addr;
#line 12800 "test-linc.mc"
hent = gethostbyname(link_get_local_hostname()); 
#line 12801 "test-linc.mc"
((void )__extension__ ({ 
#line 12801 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12801 "test-linc.mc"

#line 12801 "test-linc.mc"
int _g_boolean_var_;
#line 12801 "test-linc.mc"
if (hent != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12801 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 479, __PRETTY_FUNCTION__, "hent != NULL"); }} )); 
#line 12803 "test-linc.mc"
fprintf(stderr, " official name '%s' aliases: ", (hent->h_name)); 
#line 12806 "test-linc.mc"
for(i = 0;(hent->h_aliases)[i];i++) { fprintf(stderr, " '%s'", (hent->h_aliases)[i]); } 
#line 12808 "test-linc.mc"
fprintf(stderr, "\n"); 
#line 12810 "test-linc.mc"
verify_addr_is_loopback((hent->h_addr_list)[0], (hent->h_length)); 
#line 12812 "test-linc.mc"
proto = link_protocol_find("IPv4"); 
#line 12813 "test-linc.mc"
addr = ((struct sockaddr_in *)link_protocol_get_sockaddr(proto, "127.0.0.1", "1047", (&saddr_len))); 
#line 12815 "test-linc.mc"
((void )__extension__ ({ 
#line 12815 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12815 "test-linc.mc"

#line 12815 "test-linc.mc"
int _g_boolean_var_;
#line 12815 "test-linc.mc"
if (addr != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12815 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 493, __PRETTY_FUNCTION__, "addr != NULL"); }} )); 
#line 12816 "test-linc.mc"
((void )__extension__ ({ 
#line 12816 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12816 "test-linc.mc"

#line 12816 "test-linc.mc"
int _g_boolean_var_;
#line 12816 "test-linc.mc"
if (saddr_len == sizeof (struct sockaddr_in )){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12816 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 494, __PRETTY_FUNCTION__, "saddr_len == sizeof (struct sockaddr_in)"); }} )); 
#line 12818 "test-linc.mc"
verify_addr_is_loopback((( guint8 *)(&(addr->sin_addr).s_addr)), saddr_len); }
 
#line 12823 "test-linc.mc"
static void test_host(void )  {

#line 12824 "test-linc.mc"

#line 12824 "test-linc.mc"
char *portnum;
#line 12825 "test-linc.mc"

#line 12825 "test-linc.mc"
char *hostname;
#line 12826 "test-linc.mc"

#line 12826 "test-linc.mc"
 LinkSockLen saddr_len;
#line 12827 "test-linc.mc"

#line 12827 "test-linc.mc"
struct sockaddr *saddr;
#line 12828 "test-linc.mc"

#line 12828 "test-linc.mc"
 LinkProtocolInfo *proto;
#line 12830 "test-linc.mc"
proto = link_protocol_find("IPv4"); 
#line 12831 "test-linc.mc"
((void )__extension__ ({ 
#line 12831 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12831 "test-linc.mc"

#line 12831 "test-linc.mc"
int _g_boolean_var_;
#line 12831 "test-linc.mc"
if (proto != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12831 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 509, __PRETTY_FUNCTION__, "proto != NULL"); }} )); 
#line 12832 "test-linc.mc"
((void )__extension__ ({ 
#line 12832 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12832 "test-linc.mc"

#line 12832 "test-linc.mc"
int _g_boolean_var_;
#line 12832 "test-linc.mc"
if ((proto->get_sockinfo) != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12832 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 510, __PRETTY_FUNCTION__, "proto->get_sockinfo != NULL"); }} )); 
#line 12834 "test-linc.mc"
saddr = link_protocol_get_sockaddr(proto, link_get_local_hostname(), (((void *)0)), (&saddr_len)); 
#line 12837 "test-linc.mc"
((void )__extension__ ({ 
#line 12837 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12837 "test-linc.mc"

#line 12837 "test-linc.mc"
int _g_boolean_var_;
#line 12837 "test-linc.mc"
if (saddr != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12837 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 515, __PRETTY_FUNCTION__, "saddr != NULL"); }} )); 
#line 12839 "test-linc.mc"
((void )__extension__ ({ 
#line 12839 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12839 "test-linc.mc"

#line 12839 "test-linc.mc"
int _g_boolean_var_;
#line 12839 "test-linc.mc"
if (link_protocol_get_sockinfo(proto, saddr, (&hostname), (&portnum))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12839 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 518, __PRETTY_FUNCTION__, "link_protocol_get_sockinfo ( proto, saddr, &hostname, &portnum)"); }} )); 
#line 12842 "test-linc.mc"
g_free(saddr); 
#line 12844 "test-linc.mc"
fprintf(stderr, " '%s': '%s' \n", link_get_local_hostname(), hostname); 
#line 12848 "test-linc.mc"
g_free(hostname); 
#line 12849 "test-linc.mc"
g_free(portnum); 
#line 12851 "test-linc.mc"
test_hosts_lookup(); }
 
#line 12856 "test-linc.mc"
static void test_connected(void )  {

#line 12857 "test-linc.mc"

#line 12857 "test-linc.mc"
 LinkServer *server = (((void *)0));
#line 12858 "test-linc.mc"

#line 12858 "test-linc.mc"
 LinkConnection *client = (((void *)0));
#line 12860 "test-linc.mc"
create_server((&server)); 
#line 12861 "test-linc.mc"
((void )__extension__ ({ 
#line 12861 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12861 "test-linc.mc"

#line 12861 "test-linc.mc"
int _g_boolean_var_;
#line 12861 "test-linc.mc"
if (server != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12861 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 539, __PRETTY_FUNCTION__, "server != NULL"); }} )); 
#line 12862 "test-linc.mc"
create_client(server, (&client)); 
#line 12863 "test-linc.mc"
((void )__extension__ ({ 
#line 12863 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12863 "test-linc.mc"

#line 12863 "test-linc.mc"
int _g_boolean_var_;
#line 12863 "test-linc.mc"
if (client != (((void *)0))){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12863 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 541, __PRETTY_FUNCTION__, "client != NULL"); }} )); 
#line 12866 "test-linc.mc"
((void )__extension__ ({ 
#line 12866 "test-linc.mc"
if (__builtin_expect(__extension__ ({ 
#line 12866 "test-linc.mc"

#line 12866 "test-linc.mc"
int _g_boolean_var_;
#line 12866 "test-linc.mc"
if (link_connection_wait_connected(client) == LINK_CONNECTED){
_g_boolean_var_ = 1; }else{
_g_boolean_var_ = 0; }
#line 12866 "test-linc.mc"
_g_boolean_var_; } ), 1)){
{ } }else{
g_assert_warning(((( gchar *)0)), "test-linc.c", 544, __PRETTY_FUNCTION__, "link_connection_wait_connected (client) == LINK_CONNECTED"); }} )); 
#line 12868 "test-linc.mc"
g_object_unref(server); 
#line 12869 "test-linc.mc"
link_connection_unref(client); }
 
#line 12874 "test-linc.mc"
int main(int argc, char **argv)  {

#line 12875 "test-linc.mc"
link_init(((!(0)))); 
#line 12876 "test-linc.mc"
init_tmp(); 
#line 12878 "test-linc.mc"
test_protos(); 
#line 12879 "test-linc.mc"
test_connected(); 
#line 12881 "test-linc.mc"
test_broken(); 
#line 12883 "test-linc.mc"
test_blocking(); 
#line 12884 "test-linc.mc"
test_local(); 
#line 12885 "test-linc.mc"
test_host(); 
#line 12887 "test-linc.mc"
fprintf(stderr, "All tests passed successfully\n"); 
#line 12889 "test-linc.mc"
return 0; }
 
