
# 1 "argv.c" 
# 1 "/home/czhang/Desktop/gcc-3.4.0/libiberty//" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "argv.c" 
# 25 "argv.c" 
# 1 "./../include/ansidecl.h" 1
# 26 "argv.c" 2
# 1 "./../include/libiberty.h" 1
# 42 "./../include/libiberty.h" 
# 1 "./../include/ansidecl.h" 1
# 43 "./../include/libiberty.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 214 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h"
typedef unsigned int size_t; 
# 214 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 3 4
# 326 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 3 4
typedef long int wchar_t; 
# 47 "./../include/libiberty.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
#line 105 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h"
typedef  __gnuc_va_list va_list; 
# 105 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h" 3 4
# 54 "./../include/libiberty.h" 2
extern char **buildargv(const char *) __attribute__  (( __malloc__ )) ; 
#line 58 "./../include/libiberty.h"
extern void freeargv(char **); 
#line 63 "./../include/libiberty.h"
extern char **dupargv(char **) __attribute__  (( __malloc__ )) ; 
#line 78 "./../include/libiberty.h"
extern char *basename(const char *); 
#line 86 "./../include/libiberty.h"
extern const char *lbasename(const char *); 
#line 90 "./../include/libiberty.h"
extern char *lrealpath(const char *); 
#line 96 "./../include/libiberty.h"
extern char *concat(const char *, ...) __attribute__  (( __malloc__ )) ; 
# 78 "./../include/libiberty.h" 
# 105 "./../include/libiberty.h" 
extern char *reconcat(char *, const char *, ...) __attribute__  (( __malloc__ )) ; 
#line 111 "./../include/libiberty.h"
extern unsigned long concat_length(const char *, ...); 
#line 118 "./../include/libiberty.h"
extern char *concat_copy(char *, const char *, ...); 
#line 125 "./../include/libiberty.h"
extern char *concat_copy2(const char *, ...); 
#line 129 "./../include/libiberty.h"
extern char *libiberty_concat_ptr; 
#line 141 "./../include/libiberty.h"
extern int fdmatch(int fd1, int fd2); 
#line 146 "./../include/libiberty.h"
extern char *getpwd(void ); 
#line 150 "./../include/libiberty.h"
extern long get_run_time(void ); 
#line 155 "./../include/libiberty.h"
extern char *make_relative_prefix(const char *, const char *, const char *); 
#line 160 "./../include/libiberty.h"
extern char *choose_temp_base(void ) __attribute__  (( __malloc__ )) ; 
#line 164 "./../include/libiberty.h"
extern char *make_temp_file(const char *) __attribute__  (( __malloc__ )) ; 
#line 168 "./../include/libiberty.h"
extern const char *spaces(int count); 
#line 173 "./../include/libiberty.h"
extern int errno_max(void ); 
#line 178 "./../include/libiberty.h"
extern const char *strerrno(int ); 
#line 182 "./../include/libiberty.h"
extern int strtoerrno(const char *); 
#line 186 "./../include/libiberty.h"
extern char *xstrerror(int ); 
#line 191 "./../include/libiberty.h"
extern int signo_max(void ); 
# 141 "./../include/libiberty.h" 
# 203 "./../include/libiberty.h" 
extern const char *strsigno(int ); 
#line 207 "./../include/libiberty.h"
extern int strtosigno(const char *); 
#line 211 "./../include/libiberty.h"
extern int xatexit(void (*fn)(void )); 
#line 215 "./../include/libiberty.h"
extern void xexit(int status) __attribute__  (( __noreturn__ )) ; 
#line 219 "./../include/libiberty.h"
extern void xmalloc_set_program_name(const char *); 
#line 222 "./../include/libiberty.h"
extern void xmalloc_failed( size_t ) __attribute__  (( __noreturn__ )) ; 
#line 228 "./../include/libiberty.h"
extern void *xmalloc( size_t ) __attribute__  (( __malloc__ )) ; 
#line 234 "./../include/libiberty.h"
extern void *xrealloc(void *,  size_t ); 
#line 239 "./../include/libiberty.h"
extern void *xcalloc( size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 243 "./../include/libiberty.h"
extern char *xstrdup(const char *) __attribute__  (( __malloc__ )) ; 
#line 247 "./../include/libiberty.h"
extern void *xmemdup(const void *,  size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 250 "./../include/libiberty.h"
extern double physmem_total(void ); 
#line 251 "./../include/libiberty.h"
extern double physmem_available(void ); 
#line 257 "./../include/libiberty.h"
extern const unsigned char _hex_value[256]; 
#line 258 "./../include/libiberty.h"
extern void hex_init(void ); 
#line 274 "./../include/libiberty.h"
extern int pexecute(const char *, char *const *, const char *, const char *, char **, char **, int ); 
#line 279 "./../include/libiberty.h"
extern int pwait(int , int *, int ); 
#line 285 "./../include/libiberty.h"
extern int asprintf(char **, const char *, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 293 "./../include/libiberty.h"
extern int vasprintf(char **, const char *,  va_list ) __attribute__  (( __format__ ( __printf__, 2, 0 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 274 "./../include/libiberty.h" 
# 304 "./../include/libiberty.h" 
extern void *C_alloca( size_t ) __attribute__  (( __malloc__ )) ; 
# 27 "argv.c" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 35 "argv.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 329 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 313 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 314 "/usr/include/sys/cdefs.h" 2 3 4
# 330 "/usr/include/features.h" 2 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4
# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 353 "/usr/include/features.h" 2 3 4
# 27 "/usr/include/string.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 40 "/usr/include/string.h" 2 3 4
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 44 "/usr/include/string.h"
extern void *memmove(void *__dest, __const void *__src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 53 "/usr/include/string.h"
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 59 "/usr/include/string.h"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 63 "/usr/include/string.h"
extern int memcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 67 "/usr/include/string.h"
extern void *memchr(__const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 85 "/usr/include/string.h"
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 89 "/usr/include/string.h"
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 93 "/usr/include/string.h"
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 96 "/usr/include/string.h"
extern char *strncat(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 100 "/usr/include/string.h"
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 103 "/usr/include/string.h"
extern int strncmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 107 "/usr/include/string.h"
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 111 "/usr/include/string.h"
extern  size_t strxfrm(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 82 "/usr/include/string.h" 3 4
# 131 "/usr/include/string.h" 3 4
extern char *strdup(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 168 "/usr/include/string.h"
extern char *strchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 171 "/usr/include/string.h"
extern char *strrchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 165 "/usr/include/string.h" 3 4
# 185 "/usr/include/string.h" 3 4
extern  size_t strcspn(__const char *__s, __const char *__reject) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 189 "/usr/include/string.h"
extern  size_t strspn(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 192 "/usr/include/string.h"
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 195 "/usr/include/string.h"
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 200 "/usr/include/string.h"
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 208 "/usr/include/string.h"
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 212 "/usr/include/string.h"
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 243 "/usr/include/string.h"
extern  size_t strlen(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 240 "/usr/include/string.h" 3 4
# 256 "/usr/include/string.h" 3 4
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ )) ; 
#line 270 "/usr/include/string.h"
extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 270 "/usr/include/string.h" 3 4
# 288 "/usr/include/string.h" 3 4
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/string.h"
extern void bcopy(__const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 296 "/usr/include/string.h"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 300 "/usr/include/string.h"
extern int bcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 304 "/usr/include/string.h"
extern char *index(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 308 "/usr/include/string.h"
extern char *rindex(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 312 "/usr/include/string.h"
extern int ffs(int __i) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 326 "/usr/include/string.h"
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 330 "/usr/include/string.h"
extern int strncasecmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 325 "/usr/include/string.h" 3 4
# 350 "/usr/include/string.h" 3 4
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
# 414 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 415 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/bits/string2.h" 1 3 4
# 52 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 53 "/usr/include/bits/string2.h" 2 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 34 "/usr/include/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 35 "/usr/include/bits/types.h"
typedef unsigned short int __u_short; 
#line 36 "/usr/include/bits/types.h"
typedef unsigned int __u_int; 
#line 37 "/usr/include/bits/types.h"
typedef unsigned long int __u_long; 
#line 40 "/usr/include/bits/types.h"
typedef signed char __int8_t; 
#line 41 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t; 
#line 42 "/usr/include/bits/types.h"
typedef signed short int __int16_t; 
#line 43 "/usr/include/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 44 "/usr/include/bits/types.h"
typedef signed int __int32_t; 
#line 45 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t; 
#line 50 "/usr/include/bits/types.h"
 __extension__ typedef signed long long int __int64_t; 
#line 51 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long long int __uint64_t; 
#line 59 "/usr/include/bits/types.h"
 __extension__ typedef long long int __quad_t; 
#line 60 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long long int __u_quad_t; 
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 137 "/usr/include/bits/types.h" 2 3 4
 __extension__ typedef  __u_quad_t __dev_t; 
#line 138 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __uid_t; 
#line 139 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __gid_t; 
#line 140 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __ino_t; 
#line 141 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __ino64_t; 
#line 142 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __mode_t; 
#line 143 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __nlink_t; 
#line 144 "/usr/include/bits/types.h"
 __extension__ typedef long int __off_t; 
#line 145 "/usr/include/bits/types.h"
 __extension__ typedef  __quad_t __off64_t; 
#line 146 "/usr/include/bits/types.h"
 __extension__ typedef int __pid_t; 
#line 147 "/usr/include/bits/types.h"
 __extension__ typedef struct {int __val[2]; }__fsid_t; 
#line 148 "/usr/include/bits/types.h"
 __extension__ typedef long int __clock_t; 
#line 149 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __rlim_t; 
#line 150 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __rlim64_t; 
#line 151 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __id_t; 
#line 152 "/usr/include/bits/types.h"
 __extension__ typedef long int __time_t; 
#line 153 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __useconds_t; 
#line 154 "/usr/include/bits/types.h"
 __extension__ typedef long int __suseconds_t; 
#line 156 "/usr/include/bits/types.h"
 __extension__ typedef int __daddr_t; 
#line 157 "/usr/include/bits/types.h"
 __extension__ typedef long int __swblk_t; 
#line 158 "/usr/include/bits/types.h"
 __extension__ typedef int __key_t; 
#line 161 "/usr/include/bits/types.h"
 __extension__ typedef int __clockid_t; 
#line 164 "/usr/include/bits/types.h"
 __extension__ typedef void *__timer_t; 
#line 167 "/usr/include/bits/types.h"
 __extension__ typedef long int __blksize_t; 
#line 172 "/usr/include/bits/types.h"
 __extension__ typedef long int __blkcnt_t; 
#line 173 "/usr/include/bits/types.h"
 __extension__ typedef  __quad_t __blkcnt64_t; 
#line 176 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __fsblkcnt_t; 
#line 177 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __fsblkcnt64_t; 
#line 180 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __fsfilcnt_t; 
#line 181 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __fsfilcnt64_t; 
#line 183 "/usr/include/bits/types.h"
 __extension__ typedef int __ssize_t; 
#line 187 "/usr/include/bits/types.h"
typedef  __off64_t __loff_t; 
#line 188 "/usr/include/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 189 "/usr/include/bits/types.h"
typedef char *__caddr_t; 
#line 192 "/usr/include/bits/types.h"
 __extension__ typedef int __intptr_t; 
#line 195 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __socklen_t; 
# 54 "/usr/include/bits/string2.h" 2 3 4
# 394 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr(const void *__s, int __c); 
#line 969 "/usr/include/bits/string2.h"
extern __inline  size_t __strcspn_c1(__const char *__s, int __reject); 
#line 971 "/usr/include/bits/string2.h"
extern __inline  size_t __strcspn_c1(__const char *__s, int __reject)  {

#line 972 "/usr/include/bits/string2.h"

#line 972 "/usr/include/bits/string2.h"
register  size_t __result = 0;
#line 973 "/usr/include/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 975 "/usr/include/bits/string2.h"
return __result; }
 
#line 979 "/usr/include/bits/string2.h"
extern __inline  size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2); 
#line 981 "/usr/include/bits/string2.h"
extern __inline  size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2)  {

#line 982 "/usr/include/bits/string2.h"

#line 982 "/usr/include/bits/string2.h"
register  size_t __result = 0;
#line 983 "/usr/include/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 986 "/usr/include/bits/string2.h"
return __result; }
 
#line 990 "/usr/include/bits/string2.h"
extern __inline  size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3); 
#line 993 "/usr/include/bits/string2.h"
extern __inline  size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3)  {

#line 994 "/usr/include/bits/string2.h"

#line 994 "/usr/include/bits/string2.h"
register  size_t __result = 0;
#line 995 "/usr/include/bits/string2.h"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 998 "/usr/include/bits/string2.h"
return __result; }
 
# 969 "/usr/include/bits/string2.h" 3 4
# 1045 "/usr/include/bits/string2.h" 3 4
extern __inline  size_t __strspn_c1(__const char *__s, int __accept); 
#line 1047 "/usr/include/bits/string2.h"
extern __inline  size_t __strspn_c1(__const char *__s, int __accept)  {

#line 1048 "/usr/include/bits/string2.h"

#line 1048 "/usr/include/bits/string2.h"
register  size_t __result = 0;
#line 1050 "/usr/include/bits/string2.h"
while(__s[__result] == __accept) { (++__result); } 
#line 1052 "/usr/include/bits/string2.h"
return __result; }
 
#line 1056 "/usr/include/bits/string2.h"
extern __inline  size_t __strspn_c2(__const char *__s, int __accept1, int __accept2); 
#line 1058 "/usr/include/bits/string2.h"
extern __inline  size_t __strspn_c2(__const char *__s, int __accept1, int __accept2)  {

#line 1059 "/usr/include/bits/string2.h"

#line 1059 "/usr/include/bits/string2.h"
register  size_t __result = 0;
#line 1061 "/usr/include/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 1063 "/usr/include/bits/string2.h"
return __result; }
 
#line 1067 "/usr/include/bits/string2.h"
extern __inline  size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1069 "/usr/include/bits/string2.h"
extern __inline  size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 1070 "/usr/include/bits/string2.h"

#line 1070 "/usr/include/bits/string2.h"
register  size_t __result = 0;
#line 1072 "/usr/include/bits/string2.h"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 1075 "/usr/include/bits/string2.h"
return __result; }
 
#line 1122 "/usr/include/bits/string2.h"
extern __inline char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2); 
#line 1125 "/usr/include/bits/string2.h"
extern __inline char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2)  {

#line 1128 "/usr/include/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 1129 "/usr/include/bits/string2.h"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
#line 1133 "/usr/include/bits/string2.h"
extern __inline char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3); 
#line 1137 "/usr/include/bits/string2.h"
extern __inline char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 1141 "/usr/include/bits/string2.h"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 1142 "/usr/include/bits/string2.h"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
# 1121 "/usr/include/bits/string2.h" 3 4
# 1173 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 1176 "/usr/include/bits/string2.h"
extern __inline char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  {

#line 1177 "/usr/include/bits/string2.h"

#line 1177 "/usr/include/bits/string2.h"
char *__result;
#line 1178 "/usr/include/bits/string2.h"
if (__s == (((void *)0))){
__s = (*__nextp); }
#line 1180 "/usr/include/bits/string2.h"
while((*__s) == __sep) { (++__s); } 
#line 1182 "/usr/include/bits/string2.h"
__result = (((void *)0)); 
#line 1183 "/usr/include/bits/string2.h"
if ((*__s) != '\0'){
{ 
#line 1185 "/usr/include/bits/string2.h"
__result = __s++; 
#line 1186 "/usr/include/bits/string2.h"
while((*__s) != '\0') { if ((*__s++) == __sep){
{ 
#line 1189 "/usr/include/bits/string2.h"
__s[(-1)] = '\0'; 
#line 1190 "/usr/include/bits/string2.h"
break; } }} 
#line 1192 "/usr/include/bits/string2.h"
(*__nextp) = __s; } }
#line 1194 "/usr/include/bits/string2.h"
return __result; }
 
#line 1205 "/usr/include/bits/string2.h"
extern char *__strsep_g(char **__stringp, __const char *__delim); 
# 1205 "/usr/include/bits/string2.h" 3 4
# 1223 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strsep_1c(char **__s, char __reject); 
#line 1226 "/usr/include/bits/string2.h"
extern __inline char *__strsep_1c(char **__s, char __reject)  {

#line 1227 "/usr/include/bits/string2.h"

#line 1227 "/usr/include/bits/string2.h"
register char *__retval = (*__s);
#line 1228 "/usr/include/bits/string2.h"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 1230 "/usr/include/bits/string2.h"
return __retval; }
 
#line 1233 "/usr/include/bits/string2.h"
extern __inline char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 1236 "/usr/include/bits/string2.h"
extern __inline char *__strsep_2c(char **__s, char __reject1, char __reject2)  {

#line 1237 "/usr/include/bits/string2.h"

#line 1237 "/usr/include/bits/string2.h"
register char *__retval = (*__s);
#line 1238 "/usr/include/bits/string2.h"
if (__retval != (((void *)0))){
{ 
#line 1240 "/usr/include/bits/string2.h"

#line 1240 "/usr/include/bits/string2.h"
register char *__cp = __retval;
#line 1241 "/usr/include/bits/string2.h"
while(1) { { 
#line 1248 "/usr/include/bits/string2.h"
if ((*__cp) == '\0'){
{ 
#line 1245 "/usr/include/bits/string2.h"
__cp = (((void *)0)); 
#line 1246 "/usr/include/bits/string2.h"
break; } }
#line 1248 "/usr/include/bits/string2.h"
if ((*__cp) == __reject1 || (*__cp) == __reject2){
{ 
#line 1250 "/usr/include/bits/string2.h"
(*__cp++) = '\0'; 
#line 1251 "/usr/include/bits/string2.h"
break; } }
#line 1253 "/usr/include/bits/string2.h"
(++__cp); } } 
#line 1255 "/usr/include/bits/string2.h"
(*__s) = __cp; } }
#line 1257 "/usr/include/bits/string2.h"
return __retval; }
 
#line 1261 "/usr/include/bits/string2.h"
extern __inline char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 1264 "/usr/include/bits/string2.h"
extern __inline char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  {

#line 1265 "/usr/include/bits/string2.h"

#line 1265 "/usr/include/bits/string2.h"
register char *__retval = (*__s);
#line 1266 "/usr/include/bits/string2.h"
if (__retval != (((void *)0))){
{ 
#line 1268 "/usr/include/bits/string2.h"

#line 1268 "/usr/include/bits/string2.h"
register char *__cp = __retval;
#line 1269 "/usr/include/bits/string2.h"
while(1) { { 
#line 1276 "/usr/include/bits/string2.h"
if ((*__cp) == '\0'){
{ 
#line 1273 "/usr/include/bits/string2.h"
__cp = (((void *)0)); 
#line 1274 "/usr/include/bits/string2.h"
break; } }
#line 1276 "/usr/include/bits/string2.h"
if ((*__cp) == __reject1 || (*__cp) == __reject2 || (*__cp) == __reject3){
{ 
#line 1278 "/usr/include/bits/string2.h"
(*__cp++) = '\0'; 
#line 1279 "/usr/include/bits/string2.h"
break; } }
#line 1281 "/usr/include/bits/string2.h"
(++__cp); } } 
#line 1283 "/usr/include/bits/string2.h"
(*__s) = __cp; } }
#line 1285 "/usr/include/bits/string2.h"
return __retval; }
 
# 1299 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4
# 589 "/usr/include/stdlib.h" 3 4
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 592 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
# 978 "/usr/include/stdlib.h" 3 4
# 1304 "/usr/include/bits/string2.h" 2 3 4
extern char *__strdup(__const char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 1324 "/usr/include/bits/string2.h"
extern char *__strndup(__const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
# 1323 "/usr/include/bits/string2.h" 3 4
# 418 "/usr/include/string.h" 2 3 4
# 426 "/usr/include/string.h" 3 4
# 36 "argv.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4
# 102 "/usr/include/stdlib.h" 3 4
typedef struct {int quot; int rem; }div_t; 
#line 110 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; }ldiv_t; 
#line 140 "/usr/include/stdlib.h"
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 
#line 146 "/usr/include/stdlib.h"
extern double atof(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 149 "/usr/include/stdlib.h"
extern int atoi(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 152 "/usr/include/stdlib.h"
extern long int atol(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 159 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 167 "/usr/include/stdlib.h"
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 140 "/usr/include/stdlib.h" 3 4
# 186 "/usr/include/stdlib.h" 3 4
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 190 "/usr/include/stdlib.h"
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 198 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 203 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 212 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 217 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 281 "/usr/include/stdlib.h"
extern double __strtod_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 284 "/usr/include/stdlib.h"
extern float __strtof_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 288 "/usr/include/stdlib.h"
extern long double __strtold_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/stdlib.h"
extern long int __strtol_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 300 "/usr/include/stdlib.h"
extern unsigned long int __strtoul_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 309 "/usr/include/stdlib.h"
 __extension__ extern long long int __strtoll_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 318 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int __strtoull_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 329 "/usr/include/stdlib.h"
extern __inline double  __attribute__  (( __nothrow__ )) strtod(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 330 "/usr/include/stdlib.h"
return __strtod_internal(__nptr, __endptr, 0); }
 
#line 335 "/usr/include/stdlib.h"
extern __inline long int  __attribute__  (( __nothrow__ )) strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 336 "/usr/include/stdlib.h"
return __strtol_internal(__nptr, __endptr, __base, 0); }
 
#line 341 "/usr/include/stdlib.h"
extern __inline unsigned long int  __attribute__  (( __nothrow__ )) strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 342 "/usr/include/stdlib.h"
return __strtoul_internal(__nptr, __endptr, __base, 0); }
 
# 279 "/usr/include/stdlib.h" 3 4
# 367 "/usr/include/stdlib.h" 3 4
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 368 "/usr/include/stdlib.h"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 373 "/usr/include/stdlib.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 374 "/usr/include/stdlib.h"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 383 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 384 "/usr/include/stdlib.h"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 389 "/usr/include/stdlib.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 390 "/usr/include/stdlib.h"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 398 "/usr/include/stdlib.h"
extern __inline double  __attribute__  (( __nothrow__ )) atof(__const char *__nptr)  {

#line 399 "/usr/include/stdlib.h"
return strtod(__nptr, ((char **)(((void *)0)))); }
 
#line 403 "/usr/include/stdlib.h"
extern __inline int  __attribute__  (( __nothrow__ )) atoi(__const char *__nptr)  {

#line 404 "/usr/include/stdlib.h"
return ((int )strtol(__nptr, ((char **)(((void *)0))), 10)); }
 
#line 408 "/usr/include/stdlib.h"
extern __inline long int  __attribute__  (( __nothrow__ )) atol(__const char *__nptr)  {

#line 409 "/usr/include/stdlib.h"
return strtol(__nptr, ((char **)(((void *)0))), 10); }
 
#line 417 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) atoll(__const char *__nptr)  {

#line 418 "/usr/include/stdlib.h"
return strtoll(__nptr, ((char **)(((void *)0))), 10); }
 
#line 429 "/usr/include/stdlib.h"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 433 "/usr/include/stdlib.h"
extern long int a64l(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 429 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 35 "/usr/include/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 36 "/usr/include/sys/types.h"
typedef  __u_short u_short; 
#line 37 "/usr/include/sys/types.h"
typedef  __u_int u_int; 
#line 38 "/usr/include/sys/types.h"
typedef  __u_long u_long; 
#line 39 "/usr/include/sys/types.h"
typedef  __quad_t quad_t; 
#line 40 "/usr/include/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 41 "/usr/include/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 46 "/usr/include/sys/types.h"
typedef  __loff_t loff_t; 
#line 50 "/usr/include/sys/types.h"
typedef  __ino_t ino_t; 
#line 62 "/usr/include/sys/types.h"
typedef  __dev_t dev_t; 
#line 67 "/usr/include/sys/types.h"
typedef  __gid_t gid_t; 
#line 72 "/usr/include/sys/types.h"
typedef  __mode_t mode_t; 
#line 77 "/usr/include/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 82 "/usr/include/sys/types.h"
typedef  __uid_t uid_t; 
#line 88 "/usr/include/sys/types.h"
typedef  __off_t off_t; 
# 62 "/usr/include/sys/types.h" 3 4
# 100 "/usr/include/sys/types.h" 3 4
typedef  __pid_t pid_t; 
#line 105 "/usr/include/sys/types.h"
typedef  __id_t id_t; 
#line 110 "/usr/include/sys/types.h"
typedef  __ssize_t ssize_t; 
#line 116 "/usr/include/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 117 "/usr/include/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 123 "/usr/include/sys/types.h"
typedef  __key_t key_t; 
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/time.h" 3 4
typedef  __time_t time_t; 
#line 93 "/usr/include/time.h"
typedef  __clockid_t clockid_t; 
# 93 "/usr/include/time.h" 3 4
# 105 "/usr/include/time.h" 3 4
typedef  __timer_t timer_t; 
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 151 "/usr/include/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 152 "/usr/include/sys/types.h"
typedef unsigned short int ushort; 
#line 153 "/usr/include/sys/types.h"
typedef unsigned int uint; 
#line 195 "/usr/include/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 196 "/usr/include/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 197 "/usr/include/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 198 "/usr/include/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 201 "/usr/include/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 202 "/usr/include/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 203 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 204 "/usr/include/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 206 "/usr/include/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 195 "/usr/include/sys/types.h" 3 4
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 31 "/usr/include/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; }__sigset_t; 
#line 38 "/usr/include/sys/select.h"
typedef  __sigset_t sigset_t; 
# 35 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 125 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec; long int tv_nsec; }; 
# 45 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 73 "/usr/include/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; }; 
#line 49 "/usr/include/sys/select.h"
typedef  __suseconds_t suseconds_t; 
#line 55 "/usr/include/sys/select.h"
typedef long int __fd_mask; 
# 47 "/usr/include/sys/select.h" 2 3 4
# 78 "/usr/include/sys/select.h" 3 4
typedef struct { __fd_mask __fds_bits[1024 / (8 * sizeof ( __fd_mask ))]; }fd_set; 
#line 85 "/usr/include/sys/select.h"
typedef  __fd_mask fd_mask; 
# 99 "/usr/include/sys/select.h" 3 4
# 112 "/usr/include/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 125 "/usr/include/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 121 "/usr/include/sys/select.h" 3 4
# 221 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 31 "/usr/include/sys/sysmacros.h" 3 4
 __extension__ extern __inline unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 34 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 38 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ )) ; 
#line 43 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_major(unsigned long long int __dev)  {

#line 44 "/usr/include/sys/sysmacros.h"
return ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff)); }
 
#line 49 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  {

#line 50 "/usr/include/sys/sysmacros.h"
return (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff)); }
 
#line 55 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  {

#line 58 "/usr/include/sys/sysmacros.h"
return ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32)); }
 
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 43 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[36]; long int __align; }pthread_attr_t; 
#line 49 "/usr/include/bits/pthreadtypes.h"
typedef struct __pthread_internal_slist {struct __pthread_internal_slist *__next; }__pthread_slist_t; 
#line 73 "/usr/include/bits/pthreadtypes.h"
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; int __kind; unsigned int __nusers;  __extension__ union {int __spins;  __pthread_slist_t __list; }; }__data; char __size[24]; long int __align; }pthread_mutex_t; 
#line 79 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_mutexattr_t; 
#line 99 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; }__data; char __size[48];  __extension__ long long int __align; }pthread_cond_t; 
#line 105 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_condattr_t; 
#line 109 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 113 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 136 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; unsigned int __flags; int __writer; }__data; char __size[32]; long int __align; }pthread_rwlock_t; 
#line 142 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; }pthread_rwlockattr_t; 
#line 148 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 157 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[20]; long int __align; }pthread_barrier_t; 
#line 163 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; }pthread_barrierattr_t; 
# 271 "/usr/include/sys/types.h" 2 3 4
# 445 "/usr/include/stdlib.h" 2 3 4
extern long int random(void ) __attribute__  (( __nothrow__ )) ; 
#line 448 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 455 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 459 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 476 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; }; 
#line 479 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 482 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 487 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 491 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 498 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ )) ; 
#line 500 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 505 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 
#line 513 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 514 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 517 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 522 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 524 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 527 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 
#line 529 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 530 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init; unsigned long long int __a; }; 
#line 547 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 550 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 555 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 559 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 564 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 568 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 572 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 575 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 579 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 601 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 603 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 608 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
# 597 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 33 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 617 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 623 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 628 "/usr/include/stdlib.h"
extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 632 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 639 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 646 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 613 "/usr/include/stdlib.h" 2 3 4
# 660 "/usr/include/stdlib.h" 3 4
extern char *getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 666 "/usr/include/stdlib.h"
extern char *__secure_getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 672 "/usr/include/stdlib.h"
extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 679 "/usr/include/stdlib.h"
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 682 "/usr/include/stdlib.h"
extern int unsetenv(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 689 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 
#line 698 "/usr/include/stdlib.h"
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 698 "/usr/include/stdlib.h" 3 4
# 709 "/usr/include/stdlib.h" 3 4
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 729 "/usr/include/stdlib.h"
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 738 "/usr/include/stdlib.h"
extern int system(__const char *__command); 
# 729 "/usr/include/stdlib.h" 3 4
# 758 "/usr/include/stdlib.h" 3 4
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 765 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(__const void *, __const void *); 
#line 777 "/usr/include/stdlib.h"
extern void *bsearch(__const void *__key, __const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 782 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 786 "/usr/include/stdlib.h"
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 787 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 801 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 803 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 823 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 829 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 842 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 845 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 847 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 854 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 857 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 862 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 866 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 874 "/usr/include/stdlib.h"
extern int mblen(__const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 878 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 881 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 
#line 886 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 890 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, __const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 899 "/usr/include/stdlib.h"
extern int rpmatch(__const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 822 "/usr/include/stdlib.h" 3 4
# 927 "/usr/include/stdlib.h" 3 4
extern int posix_openpt(int __oflag); 
#line 963 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 80 "argv.c"
char **dupargv(argv) 
# 962 "/usr/include/stdlib.h" 3 4
# 978 "/usr/include/stdlib.h" 3 4
# 37 "argv.c" 2
# 79 "argv.c" 
char **argv;  {

#line 81 "argv.c"

#line 81 "argv.c"
int argc;
#line 82 "argv.c"

#line 82 "argv.c"
char **copy;
#line 84 "argv.c"
if (argv == (((void *)0))){
return (((void *)0)); }
#line 88 "argv.c"
for(argc = 0;argv[argc] != (((void *)0));argc++) { ; } 
#line 89 "argv.c"
copy = ((char **)malloc((argc + 1) * sizeof (char *))); 
#line 90 "argv.c"
if (copy == (((void *)0))){
return (((void *)0)); }
#line 94 "argv.c"
for(argc = 0;argv[argc] != (((void *)0));argc++) { { 
#line 96 "argv.c"

#line 96 "argv.c"
int len = strlen(argv[argc]);
#line 97 "argv.c"
copy[argc] = malloc(sizeof (char *) * (len + 1)); 
#line 98 "argv.c"
if (copy[argc] == (((void *)0))){
{ 
#line 100 "argv.c"
freeargv(copy); 
#line 101 "argv.c"
return (((void *)0)); } }
#line 103 "argv.c"
strcpy(copy[argc], argv[argc]); } } 
#line 105 "argv.c"
copy[argc] = (((void *)0)); 
#line 106 "argv.c"
return copy; }
 
#line 124 "argv.c"
void freeargv(vector) 
#line 123 "argv.c"
char **vector;  {

#line 125 "argv.c"

#line 125 "argv.c"
register char **scan;
#line 127 "argv.c"
if (vector != (((void *)0))){
{ 
#line 132 "argv.c"
for(scan = vector;(*scan) != (((void *)0));scan++) { { 
#line 131 "argv.c"
free((*scan)); } } 
#line 133 "argv.c"
free(vector); } }}
 
#line 179 "argv.c"
char **buildargv(input) 
# 122 "argv.c" 
# 178 "argv.c" 
const char *input;  {

#line 180 "argv.c"

#line 180 "argv.c"
char *arg;
#line 181 "argv.c"

#line 181 "argv.c"
char *copybuf;
#line 182 "argv.c"

#line 182 "argv.c"
int squote = 0;
#line 183 "argv.c"

#line 183 "argv.c"
int dquote = 0;
#line 184 "argv.c"

#line 184 "argv.c"
int bsquote = 0;
#line 185 "argv.c"

#line 185 "argv.c"
int argc = 0;
#line 186 "argv.c"

#line 186 "argv.c"
int maxargc = 0;
#line 187 "argv.c"

#line 187 "argv.c"
char **argv = (((void *)0));
#line 188 "argv.c"

#line 188 "argv.c"
char **nargv;
#line 190 "argv.c"
if (input != (((void *)0))){
{ 
#line 192 "argv.c"
copybuf = ((char *)__builtin_alloca(strlen(input) + 1)); 
#line 195 "argv.c"
do { { 
#line 201 "argv.c"
while((((*input)) == ' ' || ((*input)) == '\t')) { { 
#line 200 "argv.c"
input++; } } 
#line 202 "argv.c"
if ((maxargc == 0) || (argc >= (maxargc - 1))){
{ 
#line 214 "argv.c"
if (argv == (((void *)0))){
{ 
#line 207 "argv.c"
maxargc = 8; 
#line 208 "argv.c"
nargv = ((char **)malloc(maxargc * sizeof (char *))); } }else{
{ 
#line 212 "argv.c"
maxargc *= 2; 
#line 213 "argv.c"
nargv = ((char **)realloc(argv, maxargc * sizeof (char *))); } }
#line 215 "argv.c"
if (nargv == (((void *)0))){
{ 
#line 222 "argv.c"
if (argv != (((void *)0))){
{ 
#line 219 "argv.c"
freeargv(argv); 
#line 220 "argv.c"
argv = (((void *)0)); } }
#line 222 "argv.c"
break; } }
#line 224 "argv.c"
argv = nargv; 
#line 225 "argv.c"
argv[argc] = (((void *)0)); } }
#line 228 "argv.c"
arg = copybuf; 
#line 229 "argv.c"
while((*input) != '\0') { { 
#line 284 "argv.c"
if ((((*input)) == ' ' || ((*input)) == '\t') && (!squote) && (!dquote) && (!bsquote)){
{ 
#line 233 "argv.c"
break; } }else{
{ 
#line 282 "argv.c"
if (bsquote){
{ 
#line 239 "argv.c"
bsquote = 0; 
#line 240 "argv.c"
(*arg++) = (*input); } }else{
if ((*input) == '\\'){
{ 
#line 244 "argv.c"
bsquote = 1; } }else{
if (squote){
{ 
#line 255 "argv.c"
if ((*input) == '\''){
{ 
#line 250 "argv.c"
squote = 0; } }else{
{ 
#line 254 "argv.c"
(*arg++) = (*input); } }} }else{
if (dquote){
{ 
#line 266 "argv.c"
if ((*input) == '"'){
{ 
#line 261 "argv.c"
dquote = 0; } }else{
{ 
#line 265 "argv.c"
(*arg++) = (*input); } }} }else{
{ 
#line 281 "argv.c"
if ((*input) == '\''){
{ 
#line 272 "argv.c"
squote = 1; } }else{
if ((*input) == '"'){
{ 
#line 276 "argv.c"
dquote = 1; } }else{
{ 
#line 280 "argv.c"
(*arg++) = (*input); } }}} }}}}
#line 283 "argv.c"
input++; } }} } 
#line 286 "argv.c"
(*arg) = '\0'; 
#line 287 "argv.c"
argv[argc] = (__extension__ ((__builtin_constant_p(copybuf) && ((( size_t )((const void *)((copybuf) + 1))) - (( size_t )((const void *)(copybuf))) == 1)?(((((__const char *)(copybuf)))[0] == '\0'?((char *)calloc(1, 1)):({ 
#line 287 "argv.c"

#line 287 "argv.c"
 size_t __len = strlen(copybuf) + 1;
#line 287 "argv.c"

#line 287 "argv.c"
char *__retval = ((char *)malloc(__len));
#line 287 "argv.c"
if (__retval != (((void *)0))){
__retval = ((char *)memcpy(__retval, copybuf, __len)); }
#line 287 "argv.c"
__retval; } ))):__strdup(copybuf)))); 
#line 288 "argv.c"
if (argv[argc] == (((void *)0))){
{ 
#line 290 "argv.c"
freeargv(argv); 
#line 291 "argv.c"
argv = (((void *)0)); 
#line 292 "argv.c"
break; } }
#line 294 "argv.c"
argc++; 
#line 295 "argv.c"
argv[argc] = (((void *)0)); 
#line 297 "argv.c"
while((((*input)) == ' ' || ((*input)) == '\t')) { { 
#line 299 "argv.c"
input++; } } } } while((*input) != '\0'); } }
#line 304 "argv.c"
return (argv); }
 
