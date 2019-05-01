
# 1 "rb-test.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "rb-test.c" 
# 26 "rb-test.c" 
# 1 "/usr/include/assert.h" 1 3 4
# 42 "/usr/include/assert.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 43 "/usr/include/assert.h" 2 3 4
# 76 "/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 77 "/usr/include/assert.h"
void __eprintf(const char *, const char *, unsigned , const char *) __attribute__  (( __noreturn__ )) ; 
# 27 "rb-test.c" 2
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
# 28 "rb-test.c" 2
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
# 29 "rb-test.c" 2
# 1 "rb.h" 1
# 29 "rb.h" 
# 1 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 326 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stddef.h"
typedef int wchar_t; 
# 326 "/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stddef.h" 3 4
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
putchar('('); 
#line 54 "rb-test.c"
print_tree_structure((node->rb_link)[0], level + 1); 
#line 55 "rb-test.c"
if ((node->rb_link)[1] != (((void *)0))){
{ 
#line 57 "rb-test.c"
putchar(','); 
#line 58 "rb-test.c"
print_tree_structure((node->rb_link)[1], level + 1); } }
#line 61 "rb-test.c"
putchar(')'); } }}
 
#line 68 "rb-test.c"
void print_whole_tree(const struct rb_table *tree, const char *title)  {

#line 69 "rb-test.c"
printf("%s: ", title); 
#line 70 "rb-test.c"
print_tree_structure((tree->rb_root), 0); 
#line 71 "rb-test.c"
putchar('\n'); }
 
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
(((void )((__builtin_expect((!(a == (((void *)0)) && b == (((void *)0)))), 0)?(__eprintf("%s:%u: failed assertion `%s'\n", "rb-test.c", 125, "a == NULL && b == NULL") , 0):0)))); 
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
 
