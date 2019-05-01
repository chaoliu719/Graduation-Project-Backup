
# 1 "rb.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "rb.c" 
# 26 "rb.c" 
# 1 "/usr/include/assert.h" 1 3 4
# 42 "/usr/include/assert.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 43 "/usr/include/assert.h" 2 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 77 "/usr/include/assert.h"
void __eprintf(const char *, const char *, unsigned , const char *) __attribute__  (( __noreturn__ )) ; 
# 27 "rb.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
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
typedef union {char __mbstate8[128]; long long _mbstateL; }__mbstate_t; 
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
struct __darwin_pthread_handler_rec {void (*__routine)(void *); void *__arg; struct __darwin_pthread_handler_rec *__next; }; 
#line 66 "/usr/include/sys/_types.h"
struct _opaque_pthread_attr_t {long __sig; char __opaque[36]; }; 
#line 67 "/usr/include/sys/_types.h"
struct _opaque_pthread_cond_t {long __sig; char __opaque[24]; }; 
#line 68 "/usr/include/sys/_types.h"
struct _opaque_pthread_condattr_t {long __sig; char __opaque[4]; }; 
#line 69 "/usr/include/sys/_types.h"
struct _opaque_pthread_mutex_t {long __sig; char __opaque[40]; }; 
#line 70 "/usr/include/sys/_types.h"
struct _opaque_pthread_mutexattr_t {long __sig; char __opaque[8]; }; 
#line 71 "/usr/include/sys/_types.h"
struct _opaque_pthread_once_t {long __sig; char __opaque[4]; }; 
#line 72 "/usr/include/sys/_types.h"
struct _opaque_pthread_rwlock_t {long __sig; char __opaque[124]; }; 
#line 73 "/usr/include/sys/_types.h"
struct _opaque_pthread_rwlockattr_t {long __sig; char __opaque[12]; }; 
#line 74 "/usr/include/sys/_types.h"
struct _opaque_pthread_t {long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[596]; }; 
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
struct sigaltstack {void *ss_sp;  __darwin_size_t ss_size; int ss_flags; }; 
#line 152 "/usr/include/sys/_types.h"
typedef struct sigaltstack __darwin_stack_t; 
#line 174 "/usr/include/sys/_types.h"
struct ucontext {int uc_onstack;  __darwin_sigset_t uc_sigmask;  __darwin_stack_t uc_stack; struct ucontext *uc_link;  __darwin_size_t uc_mcsize;  __darwin_mcontext_t uc_mcontext; }; 
#line 176 "/usr/include/sys/_types.h"
typedef struct ucontext __darwin_ucontext_t; 
#line 189 "/usr/include/sys/_types.h"
struct ucontext64 {int uc_onstack;  __darwin_sigset_t uc_sigmask;  __darwin_stack_t uc_stack; struct ucontext64 *uc_link;  __darwin_size_t uc_mcsize;  __darwin_mcontext64_t uc_mcontext64; }; 
#line 190 "/usr/include/sys/_types.h"
typedef struct ucontext64 __darwin_ucontext64_t; 
#line 29 "/usr/include/_types.h"
typedef int __darwin_nl_item; 
#line 30 "/usr/include/_types.h"
typedef int __darwin_wctrans_t; 
#line 34 "/usr/include/_types.h"
typedef unsigned long __darwin_wctype_t; 
# 28 "/usr/include/_types.h" 2 3 4
# 71 "/usr/include/stdio.h" 2 3 4
typedef  __darwin_va_list va_list; 
#line 76 "/usr/include/stdio.h"
typedef  __darwin_size_t size_t; 
#line 84 "/usr/include/stdio.h"
typedef  __darwin_off_t fpos_t; 
#line 101 "/usr/include/stdio.h"
struct __sbuf {unsigned char *_base; int _size; }; 
#line 104 "/usr/include/stdio.h"
struct __sFILEX ; 
# 98 "/usr/include/stdio.h" 3 4
# 163 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {unsigned char *_p; int _r; int _w; short _flags; short _file; struct __sbuf _bf; int _lbfsize; void *_cookie; int (*_close)(void *); int (*_read)(void *, char *, int );  fpos_t (*_seek)(void *,  fpos_t , int ); int (*_write)(void *, const char *, int ); struct __sbuf _ub; struct __sFILEX *_extra; int _ur; unsigned char _ubuf[3]; unsigned char _nbuf[1]; struct __sbuf _lb; int _blksize;  fpos_t _offset; }FILE; 
#line 171 "/usr/include/stdio.h"
extern  FILE __sF[]; 
#line 249 "/usr/include/stdio.h"
void clearerr( FILE *); 
#line 250 "/usr/include/stdio.h"
int fclose( FILE *); 
#line 251 "/usr/include/stdio.h"
int feof( FILE *); 
#line 252 "/usr/include/stdio.h"
int ferror( FILE *); 
#line 253 "/usr/include/stdio.h"
int fflush( FILE *); 
#line 254 "/usr/include/stdio.h"
int fgetc( FILE *); 
#line 255 "/usr/include/stdio.h"
int fgetpos( FILE *,  fpos_t *); 
#line 256 "/usr/include/stdio.h"
char *fgets(char *, int ,  FILE *); 
#line 257 "/usr/include/stdio.h"
 FILE *fopen(const char *, const char *); 
#line 258 "/usr/include/stdio.h"
int fprintf( FILE *, const char *, ...); 
#line 259 "/usr/include/stdio.h"
int fputc(int ,  FILE *); 
#line 260 "/usr/include/stdio.h"
int fputs(const char *,  FILE *); 
#line 261 "/usr/include/stdio.h"
 size_t fread(void *,  size_t ,  size_t ,  FILE *); 
#line 263 "/usr/include/stdio.h"
 FILE *freopen(const char *, const char *,  FILE *); 
#line 264 "/usr/include/stdio.h"
int fscanf( FILE *, const char *, ...); 
#line 265 "/usr/include/stdio.h"
int fseek( FILE *, long , int ); 
#line 266 "/usr/include/stdio.h"
int fsetpos( FILE *, const  fpos_t *); 
#line 267 "/usr/include/stdio.h"
long ftell( FILE *); 
#line 268 "/usr/include/stdio.h"
 size_t fwrite(const void *,  size_t ,  size_t ,  FILE *); 
#line 269 "/usr/include/stdio.h"
int getc( FILE *); 
#line 270 "/usr/include/stdio.h"
int getchar(void ); 
#line 271 "/usr/include/stdio.h"
char *gets(char *); 
#line 273 "/usr/include/stdio.h"
extern const int sys_nerr; 
#line 274 "/usr/include/stdio.h"
extern const char *const sys_errlist[]; 
#line 276 "/usr/include/stdio.h"
void perror(const char *); 
#line 277 "/usr/include/stdio.h"
int printf(const char *, ...); 
#line 278 "/usr/include/stdio.h"
int putc(int ,  FILE *); 
#line 279 "/usr/include/stdio.h"
int putchar(int ); 
#line 280 "/usr/include/stdio.h"
int puts(const char *); 
#line 281 "/usr/include/stdio.h"
int remove(const char *); 
#line 282 "/usr/include/stdio.h"
int rename(const char *, const char *); 
#line 283 "/usr/include/stdio.h"
void rewind( FILE *); 
#line 284 "/usr/include/stdio.h"
int scanf(const char *, ...); 
#line 285 "/usr/include/stdio.h"
void setbuf( FILE *, char *); 
#line 286 "/usr/include/stdio.h"
int setvbuf( FILE *, char *, int ,  size_t ); 
#line 287 "/usr/include/stdio.h"
int sprintf(char *, const char *, ...); 
#line 288 "/usr/include/stdio.h"
int sscanf(const char *, const char *, ...); 
#line 289 "/usr/include/stdio.h"
 FILE *tmpfile(void ); 
#line 290 "/usr/include/stdio.h"
char *tmpnam(char *); 
#line 291 "/usr/include/stdio.h"
int ungetc(int ,  FILE *); 
#line 292 "/usr/include/stdio.h"
int vfprintf( FILE *, const char *,  va_list ); 
#line 293 "/usr/include/stdio.h"
int vprintf(const char *,  va_list ); 
#line 294 "/usr/include/stdio.h"
int vsprintf(char *, const char *,  va_list ); 
#line 296 "/usr/include/stdio.h"
int asprintf(char **, const char *, ...); 
#line 297 "/usr/include/stdio.h"
int vasprintf(char **, const char *,  va_list ); 
# 248 "/usr/include/stdio.h" 3 4
# 309 "/usr/include/stdio.h" 3 4
char *ctermid(char *); 
#line 311 "/usr/include/stdio.h"
char *ctermid_r(char *); 
#line 313 "/usr/include/stdio.h"
 FILE *fdopen(int , const char *); 
#line 315 "/usr/include/stdio.h"
char *fgetln( FILE *,  size_t *); 
#line 317 "/usr/include/stdio.h"
int fileno( FILE *); 
#line 318 "/usr/include/stdio.h"
void flockfile( FILE *); 
#line 321 "/usr/include/stdio.h"
const char *fmtcheck(const char *, const char *); 
#line 322 "/usr/include/stdio.h"
int fpurge( FILE *); 
#line 324 "/usr/include/stdio.h"
int fseeko( FILE *,  fpos_t , int ); 
#line 325 "/usr/include/stdio.h"
 fpos_t ftello( FILE *); 
#line 326 "/usr/include/stdio.h"
int ftrylockfile( FILE *); 
#line 327 "/usr/include/stdio.h"
void funlockfile( FILE *); 
#line 328 "/usr/include/stdio.h"
int getc_unlocked( FILE *); 
#line 329 "/usr/include/stdio.h"
int getchar_unlocked(void ); 
#line 331 "/usr/include/stdio.h"
int getw( FILE *); 
#line 333 "/usr/include/stdio.h"
int pclose( FILE *); 
#line 334 "/usr/include/stdio.h"
 FILE *popen(const char *, const char *); 
#line 335 "/usr/include/stdio.h"
int putc_unlocked(int ,  FILE *); 
#line 336 "/usr/include/stdio.h"
int putchar_unlocked(int ); 
#line 338 "/usr/include/stdio.h"
int putw(int ,  FILE *); 
#line 339 "/usr/include/stdio.h"
void setbuffer( FILE *, char *, int ); 
#line 340 "/usr/include/stdio.h"
int setlinebuf( FILE *); 
#line 342 "/usr/include/stdio.h"
int snprintf(char *,  size_t , const char *, ...); 
#line 343 "/usr/include/stdio.h"
char *tempnam(const char *, const char *); 
#line 344 "/usr/include/stdio.h"
int vfscanf( FILE *, const char *,  va_list ); 
#line 345 "/usr/include/stdio.h"
int vscanf(const char *,  va_list ); 
#line 346 "/usr/include/stdio.h"
int vsnprintf(char *,  size_t , const char *,  va_list ); 
#line 347 "/usr/include/stdio.h"
int vsscanf(const char *, const char *,  va_list ); 
#line 349 "/usr/include/stdio.h"
 FILE *zopen(const char *, const char *, int ); 
#line 362 "/usr/include/stdio.h"
 FILE *funopen(const void *, int (*)(void *, char *, int ), int (*)(void *, const char *, int ),  fpos_t (*)(void *,  fpos_t , int ), int (*)(void *)); 
#line 373 "/usr/include/stdio.h"
int __srget( FILE *); 
#line 374 "/usr/include/stdio.h"
int __svfscanf( FILE *, const char *,  va_list ); 
#line 375 "/usr/include/stdio.h"
int __swbuf(int ,  FILE *); 
#line 384 "/usr/include/stdio.h"
static __inline int __sputc(int _c,  FILE *_p)  {

#line 388 "/usr/include/stdio.h"
if ((--(_p->_w)) >= 0 || ((_p->_w) >= (_p->_lbfsize) && ((char )_c) != '\n')){
return ((*(_p->_p)++) = _c); }else{
return (__swbuf(_c, _p)); }}
 
# 372 "/usr/include/stdio.h" 3 4
# 28 "rb.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 64 "/usr/include/stdlib.h" 3 4
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
struct sigcontext {int sc_onstack; int sc_mask; unsigned int sc_eax; unsigned int sc_ebx; unsigned int sc_ecx; unsigned int sc_edx; unsigned int sc_edi; unsigned int sc_esi; unsigned int sc_ebp; unsigned int sc_esp; unsigned int sc_ss; unsigned int sc_eflags; unsigned int sc_eip; unsigned int sc_cs; unsigned int sc_ds; unsigned int sc_es; unsigned int sc_fs; unsigned int sc_gs; }; 
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
# 156 "/usr/include/sys/signal.h" 3 4
# 171 "/usr/include/sys/signal.h" 3 4
typedef  __darwin_ucontext_t ucontext_t; 
#line 177 "/usr/include/sys/signal.h"
typedef  __darwin_ucontext64_t ucontext64_t; 
#line 183 "/usr/include/sys/signal.h"
typedef  __darwin_uid_t uid_t; 
#line 190 "/usr/include/sys/signal.h"
union sigval {int sival_int; void *sival_ptr; }; 
#line 202 "/usr/include/sys/signal.h"
struct sigevent {int sigev_notify; int sigev_signo; union sigval sigev_value; void (*sigev_notify_function)(union sigval );  pthread_attr_t *sigev_notify_attributes; }; 
#line 217 "/usr/include/sys/signal.h"
typedef struct __siginfo {int si_signo; int si_errno; int si_code;  pid_t si_pid;  uid_t si_uid; int si_status; void *si_addr; union sigval si_value; long si_band; unsigned long pad[7]; }siginfo_t; 
#line 301 "/usr/include/sys/signal.h"
union __sigaction_u {void (*__sa_handler)(int ); void (*__sa_sigaction)(int , struct __siginfo *, void *); }; 
#line 309 "/usr/include/sys/signal.h"
struct __sigaction {union __sigaction_u __sigaction_u; void (*sa_tramp)(void *, int , int ,  siginfo_t *, void *);  sigset_t sa_mask; int sa_flags; }; 
#line 318 "/usr/include/sys/signal.h"
struct sigaction {union __sigaction_u __sigaction_u;  sigset_t sa_mask; int sa_flags; }; 
# 297 "/usr/include/sys/signal.h" 3 4
# 355 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int ); 
#line 364 "/usr/include/sys/signal.h"
typedef  __darwin_stack_t stack_t; 
# 364 "/usr/include/sys/signal.h" 3 4
# 381 "/usr/include/sys/signal.h" 3 4
struct sigvec {void (*sv_handler)(int ); int sv_mask; int sv_flags; }; 
#line 399 "/usr/include/sys/signal.h"
struct sigstack {char *ss_sp; int ss_onstack; }; 
# 396 "/usr/include/sys/signal.h" 3 4
# 419 "/usr/include/sys/signal.h" 3 4
void (*signal(int , void (*)(int )))(int ); 
# 111 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 77 "/usr/include/sys/resource.h" 3 4
struct timeval { __darwin_time_t tv_sec;  __darwin_suseconds_t tv_usec; }; 
#line 90 "/usr/include/sys/resource.h"
typedef  __int64_t rlim_t; 
# 90 "/usr/include/sys/resource.h" 3 4
# 135 "/usr/include/sys/resource.h" 3 4
# 163 "/usr/include/sys/resource.h" 3 4
struct rusage {struct timeval ru_utime; struct timeval ru_stime; long ru_maxrss; long ru_ixrss; long ru_idrss; long ru_isrss; long ru_minflt; long ru_majflt; long ru_nswap; long ru_inblock; long ru_oublock; long ru_msgsnd; long ru_msgrcv; long ru_nsignals; long ru_nvcsw; long ru_nivcsw; }; 
#line 210 "/usr/include/sys/resource.h"
struct rlimit { rlim_t rlim_cur;  rlim_t rlim_max; }; 
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
union wait {int w_status; struct {unsigned int w_Termsig:7,w_Coredump:1,w_Retcode:8,w_Filler:16; }w_T; struct {unsigned int w_Stopval:8,w_Stopsig:8,w_Filler:16; }w_S; }; 
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
typedef struct {int quot; int rem; }div_t; 
#line 104 "/usr/include/stdlib.h"
typedef struct {long quot; long rem; }ldiv_t; 
#line 110 "/usr/include/stdlib.h"
typedef struct {long long quot; long long rem; }lldiv_t; 
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
# 29 "rb.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
typedef  __darwin_ssize_t ssize_t; 
#line 81 "/usr/include/string.h"
void *memchr(const void *, int ,  size_t ); 
#line 82 "/usr/include/string.h"
int memcmp(const void *, const void *,  size_t ); 
#line 83 "/usr/include/string.h"
void *memcpy(void *, const void *,  size_t ); 
#line 84 "/usr/include/string.h"
void *memmove(void *, const void *,  size_t ); 
#line 85 "/usr/include/string.h"
void *memset(void *, int ,  size_t ); 
#line 87 "/usr/include/string.h"
char *stpcpy(char *, const char *); 
#line 88 "/usr/include/string.h"
char *strcasestr(const char *, const char *); 
#line 90 "/usr/include/string.h"
char *strcat(char *, const char *); 
#line 91 "/usr/include/string.h"
char *strchr(const char *, int ); 
#line 92 "/usr/include/string.h"
int strcmp(const char *, const char *); 
#line 93 "/usr/include/string.h"
int strcoll(const char *, const char *); 
#line 94 "/usr/include/string.h"
char *strcpy(char *, const char *); 
#line 95 "/usr/include/string.h"
 size_t strcspn(const char *, const char *); 
#line 96 "/usr/include/string.h"
char *strerror(int ); 
#line 97 "/usr/include/string.h"
int strerror_r(int , char *,  size_t ); 
#line 98 "/usr/include/string.h"
 size_t strlen(const char *); 
#line 99 "/usr/include/string.h"
char *strncat(char *, const char *,  size_t ); 
#line 100 "/usr/include/string.h"
int strncmp(const char *, const char *,  size_t ); 
#line 101 "/usr/include/string.h"
char *strncpy(char *, const char *,  size_t ); 
#line 103 "/usr/include/string.h"
char *strnstr(const char *, const char *,  size_t ); 
#line 105 "/usr/include/string.h"
char *strpbrk(const char *, const char *); 
#line 106 "/usr/include/string.h"
char *strrchr(const char *, int ); 
#line 107 "/usr/include/string.h"
 size_t strspn(const char *, const char *); 
#line 108 "/usr/include/string.h"
char *strstr(const char *, const char *); 
#line 109 "/usr/include/string.h"
char *strtok(char *, const char *); 
#line 110 "/usr/include/string.h"
 size_t strxfrm(char *, const char *,  size_t ); 
#line 114 "/usr/include/string.h"
void *memccpy(void *, const void *, int ,  size_t ); 
#line 115 "/usr/include/string.h"
char *strtok_r(char *, const char *, char **); 
#line 116 "/usr/include/string.h"
char *strdup(const char *); 
#line 118 "/usr/include/string.h"
int bcmp(const void *, const void *,  size_t ); 
#line 119 "/usr/include/string.h"
void bcopy(const void *, void *,  size_t ); 
#line 120 "/usr/include/string.h"
void bzero(void *,  size_t ); 
#line 121 "/usr/include/string.h"
int ffs(int ); 
#line 122 "/usr/include/string.h"
char *index(const char *, int ); 
#line 123 "/usr/include/string.h"
char *rindex(const char *, int ); 
#line 124 "/usr/include/string.h"
int strcasecmp(const char *, const char *); 
#line 125 "/usr/include/string.h"
 size_t strlcat(char *, const char *,  size_t ); 
#line 126 "/usr/include/string.h"
 size_t strlcpy(char *, const char *,  size_t ); 
#line 127 "/usr/include/string.h"
void strmode(int , char *); 
#line 128 "/usr/include/string.h"
int strncasecmp(const char *, const char *,  size_t ); 
#line 129 "/usr/include/string.h"
char *strsep(char **, const char *); 
#line 130 "/usr/include/string.h"
char *strsignal(int sig); 
#line 131 "/usr/include/string.h"
void swab(const void *, void *,  ssize_t ); 
# 80 "/usr/include/string.h" 3 4
# 30 "rb.c" 2
# 1 "rb.h" 1
# 29 "rb.h" 
# 1 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 33 "rb.h"
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
# 30 "rb.h" 2
# 39 "rb.c" 2
struct rb_table *rb_create( rb_comparison_func *compare, void *param, struct libavl_allocator *allocator)  {

#line 40 "rb.c"

#line 40 "rb.c"
struct rb_table *tree;
#line 42 "rb.c"
(((void )((__builtin_expect((!(compare != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 42, "compare != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(tree != (((void *)0)) && item != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 69, "tree != NULL && item != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(tree != (((void *)0)) && item != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 99, "tree != NULL && item != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(tree != (((void *)0)) && item != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 244, "tree != NULL && item != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(trav != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 440, "trav != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 454, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
#line 455 "rb.c"
(((void )((__builtin_expect((!(i != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 455, "i != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(tree != (((void *)0)) && trav != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 482, "tree != NULL && trav != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 492, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
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
(((void )((__builtin_expect((!(tree != (((void *)0)) && trav != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 509, "tree != NULL && trav != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 519, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
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
(((void )((__builtin_expect((!(trav != (((void *)0)) && tree != (((void *)0)) && item != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 538, "trav != NULL && tree != NULL && item != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 556, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
#line 557 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = p; } } 
#line 560 "rb.c"
(trav->rb_height) = 0; 
#line 561 "rb.c"
(trav->rb_node) = (((void *)0)); 
#line 562 "rb.c"
return (((void *)0)); }
 
#line 574 "rb.c"
void *rb_t_insert(struct rb_traverser *trav, struct rb_table *tree, void *item)  {

#line 575 "rb.c"

#line 575 "rb.c"
void **p;
#line 577 "rb.c"
(((void )((__builtin_expect((!(trav != (((void *)0)) && tree != (((void *)0)) && item != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 577, "trav != NULL && tree != NULL && item != NULL") , 0):0)))); 
#line 579 "rb.c"
p = rb_probe(tree, item); 
#line 580 "rb.c"
if (p != (((void *)0))){
{ 
#line 582 "rb.c"
(trav->rb_table) = tree; 
#line 583 "rb.c"
(trav->rb_node) = (((struct rb_node *)(((char *)p) - __builtin_offsetof (struct rb_node  , rb_data)))); 
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
(((void )((__builtin_expect((!(trav != (((void *)0)) && src != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 600, "trav != NULL && src != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(trav != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 626, "trav != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 638, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
#line 639 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 640 "rb.c"
x = (x->rb_link)[1]; 
#line 642 "rb.c"
while((x->rb_link)[0] != (((void *)0))) { { 
#line 644 "rb.c"
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 644, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
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
(((void )((__builtin_expect((!(trav != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 679, "trav != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 691, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
#line 692 "rb.c"
(trav->rb_stack)[(trav->rb_height)++] = x; 
#line 693 "rb.c"
x = (x->rb_link)[0]; 
#line 695 "rb.c"
while((x->rb_link)[1] != (((void *)0))) { { 
#line 697 "rb.c"
(((void )((__builtin_expect((!((trav->rb_height) < 48)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 697, "trav->rb_height < RB_MAX_HEIGHT") , 0):0)))); 
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
(((void )((__builtin_expect((!(trav != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 728, "trav != NULL") , 0):0)))); 
#line 730 "rb.c"
return ((trav->rb_node) != (((void *)0))?((trav->rb_node)->rb_data):(((void *)0))); }
 
#line 738 "rb.c"
void *rb_t_replace(struct rb_traverser *trav, void *new)  {

#line 739 "rb.c"

#line 739 "rb.c"
void *old;
#line 741 "rb.c"
(((void )((__builtin_expect((!(trav != (((void *)0)) && (trav->rb_node) != (((void *)0)) && new != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 741, "trav != NULL && trav->rb_node != NULL && new != NULL") , 0):0)))); 
#line 742 "rb.c"
old = ((trav->rb_node)->rb_data); 
#line 743 "rb.c"
((trav->rb_node)->rb_data) = new; 
#line 744 "rb.c"
return old; }
 
#line 753 "rb.c"
static void copy_error_recovery(struct rb_node **stack, int height, struct rb_table *new,  rb_item_func *destroy)  {

#line 754 "rb.c"
(((void )((__builtin_expect((!(stack != (((void *)0)) && height >= 0 && new != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 754, "stack != NULL && height >= 0 && new != NULL") , 0):0)))); 
#line 756 "rb.c"
for(;height > 2;height -= 2) { (stack[height - 1]->rb_link)[1] = (((void *)0)); } 
#line 758 "rb.c"
rb_destroy(new, destroy); }
 
# 572 "rb.c" 
# 773 "rb.c" 
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
(((void )((__builtin_expect((!(org != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 781, "org != NULL") , 0):0)))); 
#line 782 "rb.c"
new = rb_create((org->rb_compare), (org->rb_param), (allocator != (((void *)0))?allocator:(org->rb_alloc))); 
#line 784 "rb.c"
if (new == (((void *)0))){
return (((void *)0)); }
#line 795 "rb.c"
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
(((void )((__builtin_expect((!(height < 2 * (48 + 1))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 806, "height < 2 * (RB_MAX_HEIGHT + 1)") , 0):0)))); 
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
(((void )((__builtin_expect((!(tree != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 880, "tree != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(allocator != (((void *)0)) && size > 0)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 905, "allocator != NULL && size > 0") , 0):0)))); 
#line 906 "rb.c"
return malloc(size); }
 
#line 912 "rb.c"
void rb_free(struct libavl_allocator *allocator, void *block)  {

#line 913 "rb.c"
(((void )((__builtin_expect((!(allocator != (((void *)0)) && block != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 913, "allocator != NULL && block != NULL") , 0):0)))); 
#line 914 "rb.c"
free(block); }
 
#line 922 "rb.c"
struct libavl_allocator rb_allocator_default = {rb_malloc,rb_free}; 
# 795 "rb.c" 
# 1 "/usr/include/assert.h" 1 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 77 "/usr/include/assert.h"
void __eprintf(const char *, const char *, unsigned , const char *) __attribute__  (( __noreturn__ )) ; 
#line 930 "rb.c"
void (rb_assert_insert)(struct rb_table *table, void *item)  {

#line 931 "rb.c"

#line 931 "rb.c"
void **p = rb_probe(table, item);
#line 932 "rb.c"
(((void )((__builtin_expect((!(p != (((void *)0)) && (*p) == item)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 932, "p != NULL && *p == item") , 0):0)))); }
 
#line 939 "rb.c"
void *(rb_assert_delete)(struct rb_table *table, void *item)  {

#line 940 "rb.c"

#line 940 "rb.c"
void *p = rb_delete(table, item);
#line 941 "rb.c"
(((void )((__builtin_expect((!(p != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb.c", 941, "p != NULL") , 0):0)))); 
#line 942 "rb.c"
return p; }
 
