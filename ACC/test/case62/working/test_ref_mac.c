
# 1 "test.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "test.c" 
# 26 "test.c" 
# 1 "/usr/include/assert.h" 1 3 4
# 42 "/usr/include/assert.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 43 "/usr/include/assert.h" 2 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 77 "/usr/include/assert.h"
void __eprintf(const char *, const char *, unsigned , const char *) __attribute__  (( __noreturn__ )) ; 
# 27 "test.c" 2
# 1 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 63 "/usr/include/limits.h" 3 4
# 1 "/usr/include/machine/limits.h" 1 3 4
# 1 "/usr/include/i386/limits.h" 1 3 4
# 39 "/usr/include/i386/limits.h" 3 4
# 1 "/usr/include/i386/_limits.h" 1 3 4
# 40 "/usr/include/i386/limits.h" 2 3 4
# 9 "/usr/include/machine/limits.h" 2 3 4
# 64 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 65 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/limits.h" 2 3 4
# 28 "test.c" 2
# 1 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
#line 105 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdarg.h"
typedef  __gnuc_va_list va_list; 
# 105 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdarg.h" 3 4
# 29 "test.c" 2
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
# 65 "/usr/include/stdio.h" 2 3 4
# 76 "/usr/include/stdio.h" 3 4
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
# 30 "test.c" 2
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
# 31 "test.c" 2
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
# 32 "test.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 74 "/usr/include/time.h" 3 4
typedef  __darwin_clock_t clock_t; 
#line 84 "/usr/include/time.h"
typedef  __darwin_time_t time_t; 
#line 92 "/usr/include/time.h"
struct timespec { time_t tv_sec; long tv_nsec; }; 
#line 107 "/usr/include/time.h"
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long tm_gmtoff; char *tm_zone; }; 
# 84 "/usr/include/time.h" 3 4
# 1 "/usr/include/machine/_limits.h" 1 3 4
# 116 "/usr/include/time.h" 2 3 4
extern char *tzname[]; 
#line 119 "/usr/include/time.h"
extern int getdate_err; 
#line 123 "/usr/include/time.h"
extern int daylight; 
#line 126 "/usr/include/time.h"
char *asctime(const struct tm *); 
#line 127 "/usr/include/time.h"
 clock_t clock(void ); 
#line 128 "/usr/include/time.h"
char *ctime(const  time_t *); 
#line 129 "/usr/include/time.h"
double difftime( time_t ,  time_t ); 
#line 130 "/usr/include/time.h"
struct tm *getdate(const char *); 
#line 131 "/usr/include/time.h"
struct tm *gmtime(const  time_t *); 
#line 132 "/usr/include/time.h"
struct tm *localtime(const  time_t *); 
#line 133 "/usr/include/time.h"
 time_t mktime(struct tm *); 
#line 134 "/usr/include/time.h"
 size_t strftime(char *,  size_t , const char *, const struct tm *); 
#line 135 "/usr/include/time.h"
char *strptime(const char *, const char *, struct tm *); 
#line 136 "/usr/include/time.h"
 time_t time( time_t *); 
#line 139 "/usr/include/time.h"
void tzset(void ); 
#line 143 "/usr/include/time.h"
char *asctime_r(const struct tm *, char *); 
#line 144 "/usr/include/time.h"
char *ctime_r(const  time_t *, char *); 
#line 145 "/usr/include/time.h"
struct tm *gmtime_r(const  time_t *, struct tm *); 
#line 146 "/usr/include/time.h"
struct tm *localtime_r(const  time_t *, struct tm *); 
#line 147 "/usr/include/time.h"
 time_t posix2time( time_t ); 
#line 149 "/usr/include/time.h"
char *timezone(int , int ); 
#line 151 "/usr/include/time.h"
void tzsetwall(void ); 
#line 152 "/usr/include/time.h"
 time_t time2posix( time_t ); 
#line 153 "/usr/include/time.h"
 time_t timelocal(struct tm *const ); 
#line 154 "/usr/include/time.h"
 time_t timegm(struct tm *const ); 
#line 158 "/usr/include/time.h"
int nanosleep(const struct timespec *, struct timespec *); 
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
fprintf(((&__sF[2])), "%s: ", pgm_name); 
#line 137 "test.c"
__builtin_va_start(args, message); 
#line 138 "test.c"
vfprintf(((&__sF[2])), message, args); 
#line 139 "test.c"
__builtin_va_end(args); 
#line 141 "test.c"
putchar('\n'); 
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
(((void )((__builtin_expect((!(mt != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 226, "mt != NULL") , 0):0)))); 
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
default: (((void )((__builtin_expect((!(0)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 358, "0") , 0):0)))); } } }
 
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
(((void )((__builtin_expect((!(options != (((void *)0)) && args != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 428, "options != NULL && args != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(state != (((void *)0)) && (state->short_next) != (((void *)0)) && (*(state->short_next)) != '\0' && (state->options) != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 449, "state != NULL && state->short_next != NULL && *state->short_next != '\\0' && state->options != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(state != (((void *)0)) && (state->arg_next) != (((void *)0)) && (*(state->arg_next)) != (((void *)0)) && (state->options) != (((void *)0)) && argp != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 485, "state != NULL && state->arg_next != NULL && *state->arg_next != NULL && state->options != NULL && argp != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(state != (((void *)0)) && argp != (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 530, "state != NULL && argp != NULL") , 0):0)))); 
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
(((void )((__builtin_expect((!(sizeof orders / sizeof  *orders == INS_CNT)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 724, "sizeof orders / sizeof *orders == INS_CNT") , 0):0)))); 
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
(((void )((__builtin_expect((!(sizeof orders / sizeof  *orders == DEL_CNT)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 745, "sizeof orders / sizeof *orders == DEL_CNT") , 0):0)))); 
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
case 'V': fputs("GNU libavl 2.0.2\n""Copyright (C) 1998-2002, 2004 ""Free Software Foundation, Inc.\n""This program comes with NO WARRANTY, not even for\n""MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n""You may redistribute copies under the terms of the\n""GNU General Public License.  For more information on\n""these matters, see the file named COPYING.\n", ((&__sF[1]))); 
#line 840 "test.c"
exit(0); 
#line 842 "test.c"
default: (((void )((__builtin_expect((!(0)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 844, "0") , 0):0)))); } } } } }
 
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
default: (((void )((__builtin_expect((!(0)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 938, "0") , 0):0)))); } } }
 
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
default: (((void )((__builtin_expect((!(0)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 973, "0") , 0):0)))); } } }
 
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
for(i = 0;i < sizeof timeval;i++) { seed = seed * ((127 * 2 + 1) + 2u) + ptr[i]; } 
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
fputs("bst-test for GNU libavl 2.0.2; use --help to get help.\n", ((&__sF[1]))); }
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
fflush(((&__sF[1]))); } }
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
default: (((void )((__builtin_expect((!(0)), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "test.c", 1083, "0") , 0):0)))); } } 
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
 
