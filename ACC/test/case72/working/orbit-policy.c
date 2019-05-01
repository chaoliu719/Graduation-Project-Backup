
#line 1 "orbit-policy.mc"
typedef __builtin_va_list __gnuc_va_list; 
#line 2 "orbit-policy.mc"
typedef  __gnuc_va_list va_list; 
#line 14 "orbit-policy.mc"
typedef unsigned int size_t; 
#line 21 "orbit-policy.mc"
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 25 "orbit-policy.mc"
extern void *memmove(void *__dest, __const void *__src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 34 "orbit-policy.mc"
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 40 "orbit-policy.mc"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 44 "orbit-policy.mc"
extern int memcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 48 "orbit-policy.mc"
extern void *memchr(__const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 53 "orbit-policy.mc"
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 57 "orbit-policy.mc"
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 61 "orbit-policy.mc"
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 64 "orbit-policy.mc"
extern char *strncat(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 68 "orbit-policy.mc"
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 71 "orbit-policy.mc"
extern int strncmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 75 "orbit-policy.mc"
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 79 "orbit-policy.mc"
extern  size_t strxfrm(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 82 "orbit-policy.mc"
extern char *strdup(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 86 "orbit-policy.mc"
extern char *strchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 89 "orbit-policy.mc"
extern char *strrchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 95 "orbit-policy.mc"
extern  size_t strcspn(__const char *__s, __const char *__reject) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 99 "orbit-policy.mc"
extern  size_t strspn(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 102 "orbit-policy.mc"
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 105 "orbit-policy.mc"
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 110 "orbit-policy.mc"
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 118 "orbit-policy.mc"
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 122 "orbit-policy.mc"
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 126 "orbit-policy.mc"
extern  size_t strlen(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 130 "orbit-policy.mc"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ )) ; 
#line 132 "orbit-policy.mc"
extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 133 "orbit-policy.mc"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 138 "orbit-policy.mc"
extern void bcopy(__const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 141 "orbit-policy.mc"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 145 "orbit-policy.mc"
extern int bcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 149 "orbit-policy.mc"
extern char *index(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 153 "orbit-policy.mc"
extern char *rindex(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 157 "orbit-policy.mc"
extern int ffs(int __i) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 159 "orbit-policy.mc"
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 163 "orbit-policy.mc"
extern int strncasecmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 166 "orbit-policy.mc"
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 173 "orbit-policy.mc"
typedef unsigned char __u_char; 
#line 174 "orbit-policy.mc"
typedef unsigned short int __u_short; 
#line 175 "orbit-policy.mc"
typedef unsigned int __u_int; 
#line 176 "orbit-policy.mc"
typedef unsigned long int __u_long; 
#line 179 "orbit-policy.mc"
typedef signed char __int8_t; 
#line 180 "orbit-policy.mc"
typedef unsigned char __uint8_t; 
#line 181 "orbit-policy.mc"
typedef signed short int __int16_t; 
#line 182 "orbit-policy.mc"
typedef unsigned short int __uint16_t; 
#line 183 "orbit-policy.mc"
typedef signed int __int32_t; 
#line 184 "orbit-policy.mc"
typedef unsigned int __uint32_t; 
#line 189 "orbit-policy.mc"
 __extension__ typedef signed long long int __int64_t; 
#line 190 "orbit-policy.mc"
 __extension__ typedef unsigned long long int __uint64_t; 
#line 198 "orbit-policy.mc"
 __extension__ typedef long long int __quad_t; 
#line 199 "orbit-policy.mc"
 __extension__ typedef unsigned long long int __u_quad_t; 
#line 202 "orbit-policy.mc"
 __extension__ typedef  __u_quad_t __dev_t; 
#line 203 "orbit-policy.mc"
 __extension__ typedef unsigned int __uid_t; 
#line 204 "orbit-policy.mc"
 __extension__ typedef unsigned int __gid_t; 
#line 205 "orbit-policy.mc"
 __extension__ typedef unsigned long int __ino_t; 
#line 206 "orbit-policy.mc"
 __extension__ typedef  __u_quad_t __ino64_t; 
#line 207 "orbit-policy.mc"
 __extension__ typedef unsigned int __mode_t; 
#line 208 "orbit-policy.mc"
 __extension__ typedef unsigned int __nlink_t; 
#line 209 "orbit-policy.mc"
 __extension__ typedef long int __off_t; 
#line 210 "orbit-policy.mc"
 __extension__ typedef  __quad_t __off64_t; 
#line 211 "orbit-policy.mc"
 __extension__ typedef int __pid_t; 
#line 212 "orbit-policy.mc"
 __extension__ typedef struct {int __val[2]; }__fsid_t; 
#line 213 "orbit-policy.mc"
 __extension__ typedef long int __clock_t; 
#line 214 "orbit-policy.mc"
 __extension__ typedef unsigned long int __rlim_t; 
#line 215 "orbit-policy.mc"
 __extension__ typedef  __u_quad_t __rlim64_t; 
#line 216 "orbit-policy.mc"
 __extension__ typedef unsigned int __id_t; 
#line 217 "orbit-policy.mc"
 __extension__ typedef long int __time_t; 
#line 218 "orbit-policy.mc"
 __extension__ typedef unsigned int __useconds_t; 
#line 219 "orbit-policy.mc"
 __extension__ typedef long int __suseconds_t; 
#line 221 "orbit-policy.mc"
 __extension__ typedef int __daddr_t; 
#line 222 "orbit-policy.mc"
 __extension__ typedef long int __swblk_t; 
#line 223 "orbit-policy.mc"
 __extension__ typedef int __key_t; 
#line 226 "orbit-policy.mc"
 __extension__ typedef int __clockid_t; 
#line 229 "orbit-policy.mc"
 __extension__ typedef void *__timer_t; 
#line 232 "orbit-policy.mc"
 __extension__ typedef long int __blksize_t; 
#line 237 "orbit-policy.mc"
 __extension__ typedef long int __blkcnt_t; 
#line 238 "orbit-policy.mc"
 __extension__ typedef  __quad_t __blkcnt64_t; 
#line 241 "orbit-policy.mc"
 __extension__ typedef unsigned long int __fsblkcnt_t; 
#line 242 "orbit-policy.mc"
 __extension__ typedef  __u_quad_t __fsblkcnt64_t; 
#line 245 "orbit-policy.mc"
 __extension__ typedef unsigned long int __fsfilcnt_t; 
#line 246 "orbit-policy.mc"
 __extension__ typedef  __u_quad_t __fsfilcnt64_t; 
#line 248 "orbit-policy.mc"
 __extension__ typedef int __ssize_t; 
#line 252 "orbit-policy.mc"
typedef  __off64_t __loff_t; 
#line 253 "orbit-policy.mc"
typedef  __quad_t *__qaddr_t; 
#line 254 "orbit-policy.mc"
typedef char *__caddr_t; 
#line 257 "orbit-policy.mc"
 __extension__ typedef int __intptr_t; 
#line 260 "orbit-policy.mc"
 __extension__ typedef unsigned int __socklen_t; 
#line 261 "orbit-policy.mc"
extern void *__rawmemchr(const void *__s, int __c); 
#line 262 "orbit-policy.mc"
extern __inline  size_t __strcspn_c1(__const char *__s, int __reject); 
#line 264 "orbit-policy.mc"
extern __inline  size_t __strcspn_c1(__const char *__s, int __reject)  {

#line 265 "orbit-policy.mc"

#line 265 "orbit-policy.mc"
register  size_t __result = 0;
#line 266 "orbit-policy.mc"
while(__s[__result] != '\0' && __s[__result] != __reject) { (++__result); } 
#line 268 "orbit-policy.mc"
return __result; }
 
#line 272 "orbit-policy.mc"
extern __inline  size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2); 
#line 274 "orbit-policy.mc"
extern __inline  size_t __strcspn_c2(__const char *__s, int __reject1, int __reject2)  {

#line 275 "orbit-policy.mc"

#line 275 "orbit-policy.mc"
register  size_t __result = 0;
#line 276 "orbit-policy.mc"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2) { (++__result); } 
#line 279 "orbit-policy.mc"
return __result; }
 
#line 283 "orbit-policy.mc"
extern __inline  size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3); 
#line 286 "orbit-policy.mc"
extern __inline  size_t __strcspn_c3(__const char *__s, int __reject1, int __reject2, int __reject3)  {

#line 287 "orbit-policy.mc"

#line 287 "orbit-policy.mc"
register  size_t __result = 0;
#line 288 "orbit-policy.mc"
while(__s[__result] != '\0' && __s[__result] != __reject1 && __s[__result] != __reject2 && __s[__result] != __reject3) { (++__result); } 
#line 291 "orbit-policy.mc"
return __result; }
 
#line 293 "orbit-policy.mc"
extern __inline  size_t __strspn_c1(__const char *__s, int __accept); 
#line 295 "orbit-policy.mc"
extern __inline  size_t __strspn_c1(__const char *__s, int __accept)  {

#line 296 "orbit-policy.mc"

#line 296 "orbit-policy.mc"
register  size_t __result = 0;
#line 298 "orbit-policy.mc"
while(__s[__result] == __accept) { (++__result); } 
#line 300 "orbit-policy.mc"
return __result; }
 
#line 304 "orbit-policy.mc"
extern __inline  size_t __strspn_c2(__const char *__s, int __accept1, int __accept2); 
#line 306 "orbit-policy.mc"
extern __inline  size_t __strspn_c2(__const char *__s, int __accept1, int __accept2)  {

#line 307 "orbit-policy.mc"

#line 307 "orbit-policy.mc"
register  size_t __result = 0;
#line 309 "orbit-policy.mc"
while(__s[__result] == __accept1 || __s[__result] == __accept2) { (++__result); } 
#line 311 "orbit-policy.mc"
return __result; }
 
#line 315 "orbit-policy.mc"
extern __inline  size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3); 
#line 317 "orbit-policy.mc"
extern __inline  size_t __strspn_c3(__const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 318 "orbit-policy.mc"

#line 318 "orbit-policy.mc"
register  size_t __result = 0;
#line 320 "orbit-policy.mc"
while(__s[__result] == __accept1 || __s[__result] == __accept2 || __s[__result] == __accept3) { (++__result); } 
#line 323 "orbit-policy.mc"
return __result; }
 
#line 326 "orbit-policy.mc"
extern __inline char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2); 
#line 329 "orbit-policy.mc"
extern __inline char *__strpbrk_c2(__const char *__s, int __accept1, int __accept2)  {

#line 332 "orbit-policy.mc"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2) { (++__s); } 
#line 333 "orbit-policy.mc"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
#line 337 "orbit-policy.mc"
extern __inline char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3); 
#line 341 "orbit-policy.mc"
extern __inline char *__strpbrk_c3(__const char *__s, int __accept1, int __accept2, int __accept3)  {

#line 345 "orbit-policy.mc"
while((*__s) != '\0' && (*__s) != __accept1 && (*__s) != __accept2 && (*__s) != __accept3) { (++__s); } 
#line 346 "orbit-policy.mc"
return ((*__s) == '\0'?(((void *)0)):((char *)(( size_t )__s))); }
 
#line 348 "orbit-policy.mc"
extern __inline char *__strtok_r_1c(char *__s, char __sep, char **__nextp); 
#line 351 "orbit-policy.mc"
extern __inline char *__strtok_r_1c(char *__s, char __sep, char **__nextp)  {

#line 352 "orbit-policy.mc"

#line 352 "orbit-policy.mc"
char *__result;
#line 353 "orbit-policy.mc"
if (__s == (((void *)0))){
__s = (*__nextp); }
#line 355 "orbit-policy.mc"
while((*__s) == __sep) { (++__s); } 
#line 357 "orbit-policy.mc"
__result = (((void *)0)); 
#line 358 "orbit-policy.mc"
if ((*__s) != '\0'){
{ 
#line 360 "orbit-policy.mc"
__result = __s++; 
#line 361 "orbit-policy.mc"
while((*__s) != '\0') { if ((*__s++) == __sep){
{ 
#line 364 "orbit-policy.mc"
__s[(-1)] = '\0'; 
#line 365 "orbit-policy.mc"
break; } }} 
#line 367 "orbit-policy.mc"
(*__nextp) = __s; } }
#line 369 "orbit-policy.mc"
return __result; }
 
#line 371 "orbit-policy.mc"
extern char *__strsep_g(char **__stringp, __const char *__delim); 
#line 372 "orbit-policy.mc"
extern __inline char *__strsep_1c(char **__s, char __reject); 
#line 375 "orbit-policy.mc"
extern __inline char *__strsep_1c(char **__s, char __reject)  {

#line 376 "orbit-policy.mc"

#line 376 "orbit-policy.mc"
register char *__retval = (*__s);
#line 377 "orbit-policy.mc"
if (__retval != (((void *)0)) && ((*__s) = (__extension__ ((__builtin_constant_p(__reject) && (!__builtin_constant_p(__retval)) && (__reject) == '\0'?((char *)__rawmemchr(__retval, __reject)):__builtin_strchr(__retval, __reject))))) != (((void *)0))){
(*((*__s))++) = '\0'; }
#line 379 "orbit-policy.mc"
return __retval; }
 
#line 382 "orbit-policy.mc"
extern __inline char *__strsep_2c(char **__s, char __reject1, char __reject2); 
#line 385 "orbit-policy.mc"
extern __inline char *__strsep_2c(char **__s, char __reject1, char __reject2)  {

#line 386 "orbit-policy.mc"

#line 386 "orbit-policy.mc"
register char *__retval = (*__s);
#line 387 "orbit-policy.mc"
if (__retval != (((void *)0))){
{ 
#line 389 "orbit-policy.mc"

#line 389 "orbit-policy.mc"
register char *__cp = __retval;
#line 390 "orbit-policy.mc"
while(1) { { 
#line 397 "orbit-policy.mc"
if ((*__cp) == '\0'){
{ 
#line 394 "orbit-policy.mc"
__cp = (((void *)0)); 
#line 395 "orbit-policy.mc"
break; } }
#line 397 "orbit-policy.mc"
if ((*__cp) == __reject1 || (*__cp) == __reject2){
{ 
#line 399 "orbit-policy.mc"
(*__cp++) = '\0'; 
#line 400 "orbit-policy.mc"
break; } }
#line 402 "orbit-policy.mc"
(++__cp); } } 
#line 404 "orbit-policy.mc"
(*__s) = __cp; } }
#line 406 "orbit-policy.mc"
return __retval; }
 
#line 410 "orbit-policy.mc"
extern __inline char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3); 
#line 413 "orbit-policy.mc"
extern __inline char *__strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)  {

#line 414 "orbit-policy.mc"

#line 414 "orbit-policy.mc"
register char *__retval = (*__s);
#line 415 "orbit-policy.mc"
if (__retval != (((void *)0))){
{ 
#line 417 "orbit-policy.mc"

#line 417 "orbit-policy.mc"
register char *__cp = __retval;
#line 418 "orbit-policy.mc"
while(1) { { 
#line 425 "orbit-policy.mc"
if ((*__cp) == '\0'){
{ 
#line 422 "orbit-policy.mc"
__cp = (((void *)0)); 
#line 423 "orbit-policy.mc"
break; } }
#line 425 "orbit-policy.mc"
if ((*__cp) == __reject1 || (*__cp) == __reject2 || (*__cp) == __reject3){
{ 
#line 427 "orbit-policy.mc"
(*__cp++) = '\0'; 
#line 428 "orbit-policy.mc"
break; } }
#line 430 "orbit-policy.mc"
(++__cp); } } 
#line 432 "orbit-policy.mc"
(*__s) = __cp; } }
#line 434 "orbit-policy.mc"
return __retval; }
 
#line 440 "orbit-policy.mc"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 443 "orbit-policy.mc"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 450 "orbit-policy.mc"
extern char *__strdup(__const char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 452 "orbit-policy.mc"
extern char *__strndup(__const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 458 "orbit-policy.mc"
typedef int ptrdiff_t; 
#line 459 "orbit-policy.mc"
typedef long int wchar_t; 
#line 480 "orbit-policy.mc"
typedef signed char gint8; 
#line 481 "orbit-policy.mc"
typedef unsigned char guint8; 
#line 482 "orbit-policy.mc"
typedef signed short gint16; 
#line 483 "orbit-policy.mc"
typedef unsigned short guint16; 
#line 487 "orbit-policy.mc"
typedef signed int gint32; 
#line 488 "orbit-policy.mc"
typedef unsigned int guint32; 
#line 494 "orbit-policy.mc"
 __extension__ typedef signed long long gint64; 
#line 495 "orbit-policy.mc"
 __extension__ typedef unsigned long long guint64; 
#line 496 "orbit-policy.mc"
typedef signed int gssize; 
#line 497 "orbit-policy.mc"
typedef unsigned int gsize; 
#line 498 "orbit-policy.mc"
typedef struct _GStaticMutex GStaticMutex; 
#line 508 "orbit-policy.mc"
struct _GStaticMutex {struct _GMutex *runtime_mutex; union {char pad[24]; double dummy_double; void *dummy_pointer; long dummy_long; }static_mutex; }; 
#line 509 "orbit-policy.mc"
typedef union _GSystemThread GSystemThread; 
#line 516 "orbit-policy.mc"
union _GSystemThread {char data[4]; double dummy_double; void *dummy_pointer; long dummy_long; }; 
#line 517 "orbit-policy.mc"
typedef int GPid; 
#line 522 "orbit-policy.mc"
typedef char gchar; 
#line 523 "orbit-policy.mc"
typedef short gshort; 
#line 524 "orbit-policy.mc"
typedef long glong; 
#line 525 "orbit-policy.mc"
typedef int gint; 
#line 526 "orbit-policy.mc"
typedef  gint gboolean; 
#line 528 "orbit-policy.mc"
typedef unsigned char guchar; 
#line 529 "orbit-policy.mc"
typedef unsigned short gushort; 
#line 530 "orbit-policy.mc"
typedef unsigned long gulong; 
#line 531 "orbit-policy.mc"
typedef unsigned int guint; 
#line 533 "orbit-policy.mc"
typedef float gfloat; 
#line 534 "orbit-policy.mc"
typedef double gdouble; 
#line 535 "orbit-policy.mc"
typedef void *gpointer; 
#line 536 "orbit-policy.mc"
typedef const void *gconstpointer; 
#line 539 "orbit-policy.mc"
typedef  gint (*GCompareFunc)( gconstpointer a,  gconstpointer b); 
#line 542 "orbit-policy.mc"
typedef  gint (*GCompareDataFunc)( gconstpointer a,  gconstpointer b,  gpointer user_data); 
#line 544 "orbit-policy.mc"
typedef  gboolean (*GEqualFunc)( gconstpointer a,  gconstpointer b); 
#line 545 "orbit-policy.mc"
typedef void (*GDestroyNotify)( gpointer data); 
#line 547 "orbit-policy.mc"
typedef void (*GFunc)( gpointer data,  gpointer user_data); 
#line 548 "orbit-policy.mc"
typedef  guint (*GHashFunc)( gconstpointer key); 
#line 551 "orbit-policy.mc"
typedef void (*GHFunc)( gpointer key,  gpointer value,  gpointer user_data); 
#line 552 "orbit-policy.mc"
typedef void (*GFreeFunc)( gpointer data); 
#line 554 "orbit-policy.mc"
typedef const  gchar *(*GTranslateFunc)(const  gchar *str,  gpointer data); 
#line 555 "orbit-policy.mc"
typedef union _GDoubleIEEE754 GDoubleIEEE754; 
#line 556 "orbit-policy.mc"
typedef union _GFloatIEEE754 GFloatIEEE754; 
#line 570 "orbit-policy.mc"
union _GFloatIEEE754 { gfloat v_float; struct { guint mantissa:23;  guint biased_exponent:8;  guint sign:1; }mpn; }; 
#line 580 "orbit-policy.mc"
union _GDoubleIEEE754 { gdouble v_double; struct { guint mantissa_low:32;  guint mantissa_high:20;  guint biased_exponent:11;  guint sign:1; }mpn; }; 
#line 581 "orbit-policy.mc"
typedef struct _GTimeVal GTimeVal; 
#line 587 "orbit-policy.mc"
struct _GTimeVal { glong tv_sec;  glong tv_usec; }; 
#line 592 "orbit-policy.mc"
typedef struct _GArray GArray; 
#line 593 "orbit-policy.mc"
typedef struct _GByteArray GByteArray; 
#line 594 "orbit-policy.mc"
typedef struct _GPtrArray GPtrArray; 
#line 600 "orbit-policy.mc"
struct _GArray { gchar *data;  guint len; }; 
#line 606 "orbit-policy.mc"
struct _GByteArray { guint8 *data;  guint len; }; 
#line 612 "orbit-policy.mc"
struct _GPtrArray { gpointer *pdata;  guint len; }; 
#line 615 "orbit-policy.mc"
 GArray *g_array_new( gboolean zero_terminated,  gboolean clear_,  guint element_size); 
#line 619 "orbit-policy.mc"
 GArray *g_array_sized_new( gboolean zero_terminated,  gboolean clear_,  guint element_size,  guint reserved_size); 
#line 621 "orbit-policy.mc"
 gchar *g_array_free( GArray *array,  gboolean free_segment); 
#line 624 "orbit-policy.mc"
 GArray *g_array_append_vals( GArray *array,  gconstpointer data,  guint len); 
#line 627 "orbit-policy.mc"
 GArray *g_array_prepend_vals( GArray *array,  gconstpointer data,  guint len); 
#line 631 "orbit-policy.mc"
 GArray *g_array_insert_vals( GArray *array,  guint index_,  gconstpointer data,  guint len); 
#line 633 "orbit-policy.mc"
 GArray *g_array_set_size( GArray *array,  guint length); 
#line 635 "orbit-policy.mc"
 GArray *g_array_remove_index( GArray *array,  guint index_); 
#line 637 "orbit-policy.mc"
 GArray *g_array_remove_index_fast( GArray *array,  guint index_); 
#line 640 "orbit-policy.mc"
 GArray *g_array_remove_range( GArray *array,  guint index_,  guint length); 
#line 642 "orbit-policy.mc"
void g_array_sort( GArray *array,  GCompareFunc compare_func); 
#line 645 "orbit-policy.mc"
void g_array_sort_with_data( GArray *array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 652 "orbit-policy.mc"
 GPtrArray *g_ptr_array_new(void ); 
#line 653 "orbit-policy.mc"
 GPtrArray *g_ptr_array_sized_new( guint reserved_size); 
#line 655 "orbit-policy.mc"
 gpointer *g_ptr_array_free( GPtrArray *array,  gboolean free_seg); 
#line 657 "orbit-policy.mc"
void g_ptr_array_set_size( GPtrArray *array,  gint length); 
#line 659 "orbit-policy.mc"
 gpointer g_ptr_array_remove_index( GPtrArray *array,  guint index_); 
#line 661 "orbit-policy.mc"
 gpointer g_ptr_array_remove_index_fast( GPtrArray *array,  guint index_); 
#line 663 "orbit-policy.mc"
 gboolean g_ptr_array_remove( GPtrArray *array,  gpointer data); 
#line 665 "orbit-policy.mc"
 gboolean g_ptr_array_remove_fast( GPtrArray *array,  gpointer data); 
#line 668 "orbit-policy.mc"
void g_ptr_array_remove_range( GPtrArray *array,  guint index_,  guint length); 
#line 670 "orbit-policy.mc"
void g_ptr_array_add( GPtrArray *array,  gpointer data); 
#line 672 "orbit-policy.mc"
void g_ptr_array_sort( GPtrArray *array,  GCompareFunc compare_func); 
#line 675 "orbit-policy.mc"
void g_ptr_array_sort_with_data( GPtrArray *array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 678 "orbit-policy.mc"
void g_ptr_array_foreach( GPtrArray *array,  GFunc func,  gpointer user_data); 
#line 685 "orbit-policy.mc"
 GByteArray *g_byte_array_new(void ); 
#line 686 "orbit-policy.mc"
 GByteArray *g_byte_array_sized_new( guint reserved_size); 
#line 688 "orbit-policy.mc"
 guint8 *g_byte_array_free( GByteArray *array,  gboolean free_segment); 
#line 691 "orbit-policy.mc"
 GByteArray *g_byte_array_append( GByteArray *array, const  guint8 *data,  guint len); 
#line 694 "orbit-policy.mc"
 GByteArray *g_byte_array_prepend( GByteArray *array, const  guint8 *data,  guint len); 
#line 696 "orbit-policy.mc"
 GByteArray *g_byte_array_set_size( GByteArray *array,  guint length); 
#line 698 "orbit-policy.mc"
 GByteArray *g_byte_array_remove_index( GByteArray *array,  guint index_); 
#line 700 "orbit-policy.mc"
 GByteArray *g_byte_array_remove_index_fast( GByteArray *array,  guint index_); 
#line 703 "orbit-policy.mc"
 GByteArray *g_byte_array_remove_range( GByteArray *array,  guint index_,  guint length); 
#line 705 "orbit-policy.mc"
void g_byte_array_sort( GByteArray *array,  GCompareFunc compare_func); 
#line 708 "orbit-policy.mc"
void g_byte_array_sort_with_data( GByteArray *array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 714 "orbit-policy.mc"
typedef  guint32 GQuark; 
#line 718 "orbit-policy.mc"
 GQuark g_quark_try_string(const  gchar *string); 
#line 719 "orbit-policy.mc"
 GQuark g_quark_from_static_string(const  gchar *string); 
#line 720 "orbit-policy.mc"
 GQuark g_quark_from_string(const  gchar *string); 
#line 721 "orbit-policy.mc"
const  gchar *g_quark_to_string( GQuark quark) __attribute__  (( __const__ )) ; 
#line 723 "orbit-policy.mc"
const  gchar *g_intern_string(const  gchar *string); 
#line 724 "orbit-policy.mc"
const  gchar *g_intern_static_string(const  gchar *string); 
#line 731 "orbit-policy.mc"
typedef struct _GError GError; 
#line 738 "orbit-policy.mc"
struct _GError { GQuark domain;  gint code;  gchar *message; }; 
#line 743 "orbit-policy.mc"
 GError *g_error_new( GQuark domain,  gint code, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 747 "orbit-policy.mc"
 GError *g_error_new_literal( GQuark domain,  gint code, const  gchar *message); 
#line 749 "orbit-policy.mc"
void g_error_free( GError *error); 
#line 750 "orbit-policy.mc"
 GError *g_error_copy(const  GError *error); 
#line 754 "orbit-policy.mc"
 gboolean g_error_matches(const  GError *error,  GQuark domain,  gint code); 
#line 763 "orbit-policy.mc"
void g_set_error( GError **err,  GQuark domain,  gint code, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 4, 5 )  )) ; 
#line 768 "orbit-policy.mc"
void g_propagate_error( GError **dest,  GError *src); 
#line 771 "orbit-policy.mc"
void g_clear_error( GError **err); 
#line 779 "orbit-policy.mc"
 gint g_atomic_int_exchange_and_add(volatile  gint *atomic,  gint val); 
#line 781 "orbit-policy.mc"
void g_atomic_int_add(volatile  gint *atomic,  gint val); 
#line 784 "orbit-policy.mc"
 gboolean g_atomic_int_compare_and_exchange(volatile  gint *atomic,  gint oldval,  gint newval); 
#line 787 "orbit-policy.mc"
 gboolean g_atomic_pointer_compare_and_exchange(volatile  gpointer *atomic,  gpointer oldval,  gpointer newval); 
#line 789 "orbit-policy.mc"
 gint g_atomic_int_get(volatile  gint *atomic); 
#line 791 "orbit-policy.mc"
void g_atomic_int_set(volatile  gint *atomic,  gint newval); 
#line 792 "orbit-policy.mc"
 gpointer g_atomic_pointer_get(volatile  gpointer *atomic); 
#line 794 "orbit-policy.mc"
void g_atomic_pointer_set(volatile  gpointer *atomic,  gpointer newval); 
#line 802 "orbit-policy.mc"
extern  GQuark g_thread_error_quark(void ); 
#line 808 "orbit-policy.mc"
typedef enum {G_THREAD_ERROR_AGAIN}GThreadError; 
#line 810 "orbit-policy.mc"
typedef  gpointer (*GThreadFunc)( gpointer data); 
#line 818 "orbit-policy.mc"
typedef enum {G_THREAD_PRIORITY_LOW,G_THREAD_PRIORITY_NORMAL,G_THREAD_PRIORITY_HIGH,G_THREAD_PRIORITY_URGENT}GThreadPriority; 
#line 820 "orbit-policy.mc"
typedef struct _GThread GThread; 
#line 828 "orbit-policy.mc"
struct _GThread { GThreadFunc func;  gpointer data;  gboolean joinable;  GThreadPriority priority; }; 
#line 830 "orbit-policy.mc"
typedef struct _GMutex GMutex; 
#line 831 "orbit-policy.mc"
typedef struct _GCond GCond; 
#line 832 "orbit-policy.mc"
typedef struct _GPrivate GPrivate; 
#line 833 "orbit-policy.mc"
typedef struct _GStaticPrivate GStaticPrivate; 
#line 835 "orbit-policy.mc"
typedef struct _GThreadFunctions GThreadFunctions; 
#line 872 "orbit-policy.mc"
struct _GThreadFunctions { GMutex *(*mutex_new)(void ); void (*mutex_lock)( GMutex *mutex);  gboolean (*mutex_trylock)( GMutex *mutex); void (*mutex_unlock)( GMutex *mutex); void (*mutex_free)( GMutex *mutex);  GCond *(*cond_new)(void ); void (*cond_signal)( GCond *cond); void (*cond_broadcast)( GCond *cond); void (*cond_wait)( GCond *cond,  GMutex *mutex);  gboolean (*cond_timed_wait)( GCond *cond,  GMutex *mutex,  GTimeVal *end_time); void (*cond_free)( GCond *cond);  GPrivate *(*private_new)( GDestroyNotify destructor);  gpointer (*private_get)( GPrivate *private_key); void (*private_set)( GPrivate *private_key,  gpointer data); void (*thread_create)( GThreadFunc func,  gpointer data,  gulong stack_size,  gboolean joinable,  gboolean bound,  GThreadPriority priority,  gpointer thread,  GError **error); void (*thread_yield)(void ); void (*thread_join)( gpointer thread); void (*thread_exit)(void ); void (*thread_set_priority)( gpointer thread,  GThreadPriority priority); void (*thread_self)( gpointer thread);  gboolean (*thread_equal)( gpointer thread1,  gpointer thread2); }; 
#line 874 "orbit-policy.mc"
extern  GThreadFunctions g_thread_functions_for_glib_use; 
#line 875 "orbit-policy.mc"
extern  gboolean g_thread_use_default_impl; 
#line 876 "orbit-policy.mc"
extern  gboolean g_threads_got_initialized; 
#line 882 "orbit-policy.mc"
void g_thread_init( GThreadFunctions *vtable); 
#line 883 "orbit-policy.mc"
void g_thread_init_with_errorcheck_mutexes( GThreadFunctions *vtable); 
#line 884 "orbit-policy.mc"
 GMutex *g_static_mutex_get_mutex_impl( GMutex **mutex); 
#line 891 "orbit-policy.mc"
 GThread *g_thread_create_full( GThreadFunc func,  gpointer data,  gulong stack_size,  gboolean joinable,  gboolean bound,  GThreadPriority priority,  GError **error); 
#line 892 "orbit-policy.mc"
 GThread *g_thread_self(void ); 
#line 893 "orbit-policy.mc"
void g_thread_exit( gpointer retval); 
#line 894 "orbit-policy.mc"
 gpointer g_thread_join( GThread *thread); 
#line 897 "orbit-policy.mc"
void g_thread_set_priority( GThread *thread,  GThreadPriority priority); 
#line 898 "orbit-policy.mc"
void g_static_mutex_init( GStaticMutex *mutex); 
#line 899 "orbit-policy.mc"
void g_static_mutex_free( GStaticMutex *mutex); 
#line 905 "orbit-policy.mc"
struct _GStaticPrivate { guint index; }; 
#line 907 "orbit-policy.mc"
void g_static_private_init( GStaticPrivate *private_key); 
#line 908 "orbit-policy.mc"
 gpointer g_static_private_get( GStaticPrivate *private_key); 
#line 911 "orbit-policy.mc"
void g_static_private_set( GStaticPrivate *private_key,  gpointer data,  GDestroyNotify notify); 
#line 912 "orbit-policy.mc"
void g_static_private_free( GStaticPrivate *private_key); 
#line 914 "orbit-policy.mc"
typedef struct _GStaticRecMutex GStaticRecMutex; 
#line 921 "orbit-policy.mc"
struct _GStaticRecMutex { GStaticMutex mutex;  guint depth;  GSystemThread owner; }; 
#line 924 "orbit-policy.mc"
void g_static_rec_mutex_init( GStaticRecMutex *mutex); 
#line 925 "orbit-policy.mc"
void g_static_rec_mutex_lock( GStaticRecMutex *mutex); 
#line 926 "orbit-policy.mc"
 gboolean g_static_rec_mutex_trylock( GStaticRecMutex *mutex); 
#line 927 "orbit-policy.mc"
void g_static_rec_mutex_unlock( GStaticRecMutex *mutex); 
#line 929 "orbit-policy.mc"
void g_static_rec_mutex_lock_full( GStaticRecMutex *mutex,  guint depth); 
#line 930 "orbit-policy.mc"
 guint g_static_rec_mutex_unlock_full( GStaticRecMutex *mutex); 
#line 931 "orbit-policy.mc"
void g_static_rec_mutex_free( GStaticRecMutex *mutex); 
#line 933 "orbit-policy.mc"
typedef struct _GStaticRWLock GStaticRWLock; 
#line 944 "orbit-policy.mc"
struct _GStaticRWLock { GStaticMutex mutex;  GCond *read_cond;  GCond *write_cond;  guint read_counter;  gboolean have_writer;  guint want_to_read;  guint want_to_write; }; 
#line 948 "orbit-policy.mc"
void g_static_rw_lock_init( GStaticRWLock *lock); 
#line 949 "orbit-policy.mc"
void g_static_rw_lock_reader_lock( GStaticRWLock *lock); 
#line 950 "orbit-policy.mc"
 gboolean g_static_rw_lock_reader_trylock( GStaticRWLock *lock); 
#line 951 "orbit-policy.mc"
void g_static_rw_lock_reader_unlock( GStaticRWLock *lock); 
#line 952 "orbit-policy.mc"
void g_static_rw_lock_writer_lock( GStaticRWLock *lock); 
#line 953 "orbit-policy.mc"
 gboolean g_static_rw_lock_writer_trylock( GStaticRWLock *lock); 
#line 954 "orbit-policy.mc"
void g_static_rw_lock_writer_unlock( GStaticRWLock *lock); 
#line 955 "orbit-policy.mc"
void g_static_rw_lock_free( GStaticRWLock *lock); 
#line 958 "orbit-policy.mc"
void g_thread_foreach( GFunc thread_func,  gpointer user_data); 
#line 965 "orbit-policy.mc"
typedef enum {G_ONCE_STATUS_NOTCALLED,G_ONCE_STATUS_PROGRESS,G_ONCE_STATUS_READY}GOnceStatus; 
#line 967 "orbit-policy.mc"
typedef struct _GOnce GOnce; 
#line 972 "orbit-policy.mc"
struct _GOnce {volatile  GOnceStatus status; volatile  gpointer retval; }; 
#line 976 "orbit-policy.mc"
 gpointer g_once_impl( GOnce *once,  GThreadFunc func,  gpointer arg); 
#line 977 "orbit-policy.mc"
extern void glib_dummy_decl(void ); 
#line 982 "orbit-policy.mc"
typedef struct _GAsyncQueue GAsyncQueue; 
#line 988 "orbit-policy.mc"
 GAsyncQueue *g_async_queue_new(void ); 
#line 994 "orbit-policy.mc"
void g_async_queue_lock( GAsyncQueue *queue); 
#line 995 "orbit-policy.mc"
void g_async_queue_unlock( GAsyncQueue *queue); 
#line 1000 "orbit-policy.mc"
 GAsyncQueue *g_async_queue_ref( GAsyncQueue *queue); 
#line 1001 "orbit-policy.mc"
void g_async_queue_unref( GAsyncQueue *queue); 
#line 1003 "orbit-policy.mc"
void g_async_queue_push( GAsyncQueue *queue,  gpointer data); 
#line 1005 "orbit-policy.mc"
void g_async_queue_push_unlocked( GAsyncQueue *queue,  gpointer data); 
#line 1010 "orbit-policy.mc"
void g_async_queue_push_sorted( GAsyncQueue *queue,  gpointer data,  GCompareDataFunc func,  gpointer user_data); 
#line 1014 "orbit-policy.mc"
void g_async_queue_push_sorted_unlocked( GAsyncQueue *queue,  gpointer data,  GCompareDataFunc func,  gpointer user_data); 
#line 1018 "orbit-policy.mc"
 gpointer g_async_queue_pop( GAsyncQueue *queue); 
#line 1019 "orbit-policy.mc"
 gpointer g_async_queue_pop_unlocked( GAsyncQueue *queue); 
#line 1024 "orbit-policy.mc"
 gpointer g_async_queue_try_pop( GAsyncQueue *queue); 
#line 1025 "orbit-policy.mc"
 gpointer g_async_queue_try_pop_unlocked( GAsyncQueue *queue); 
#line 1032 "orbit-policy.mc"
 gpointer g_async_queue_timed_pop( GAsyncQueue *queue,  GTimeVal *end_time); 
#line 1034 "orbit-policy.mc"
 gpointer g_async_queue_timed_pop_unlocked( GAsyncQueue *queue,  GTimeVal *end_time); 
#line 1035 "orbit-policy.mc"
 gint g_async_queue_length( GAsyncQueue *queue); 
#line 1036 "orbit-policy.mc"
 gint g_async_queue_length_unlocked( GAsyncQueue *queue); 
#line 1039 "orbit-policy.mc"
void g_async_queue_sort( GAsyncQueue *queue,  GCompareDataFunc func,  gpointer user_data); 
#line 1042 "orbit-policy.mc"
void g_async_queue_sort_unlocked( GAsyncQueue *queue,  GCompareDataFunc func,  gpointer user_data); 
#line 1048 "orbit-policy.mc"
void g_on_error_query(const  gchar *prg_name); 
#line 1049 "orbit-policy.mc"
void g_on_error_stack_trace(const  gchar *prg_name); 
#line 1055 "orbit-policy.mc"
 gpointer g_slice_alloc( gsize block_size) __attribute__  (( __malloc__ )) ; 
#line 1056 "orbit-policy.mc"
 gpointer g_slice_alloc0( gsize block_size) __attribute__  (( __malloc__ )) ; 
#line 1058 "orbit-policy.mc"
void g_slice_free1( gsize block_size,  gpointer mem_block); 
#line 1061 "orbit-policy.mc"
void g_slice_free_chain_with_offset( gsize block_size,  gpointer mem_chain,  gsize next_offset); 
#line 1069 "orbit-policy.mc"
typedef enum {G_SLICE_CONFIG_ALWAYS_MALLOC=1,G_SLICE_CONFIG_BYPASS_MAGAZINES,G_SLICE_CONFIG_WORKING_SET_MSECS,G_SLICE_CONFIG_COLOR_INCREMENT,G_SLICE_CONFIG_CHUNK_SIZES,G_SLICE_CONFIG_CONTENTION_COUNTER}GSliceConfig; 
#line 1070 "orbit-policy.mc"
void g_slice_set_config( GSliceConfig ckey,  gint64 value); 
#line 1071 "orbit-policy.mc"
 gint64 g_slice_get_config( GSliceConfig ckey); 
#line 1072 "orbit-policy.mc"
 gint64 *g_slice_get_config_state( GSliceConfig ckey,  gint64 address,  guint *n_values); 
#line 1079 "orbit-policy.mc"
typedef struct _GMemVTable GMemVTable; 
#line 1080 "orbit-policy.mc"
 gpointer g_malloc( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1081 "orbit-policy.mc"
 gpointer g_malloc0( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1083 "orbit-policy.mc"
 gpointer g_realloc( gpointer mem,  gulong n_bytes) __attribute__  (( warn_unused_result )) ; 
#line 1084 "orbit-policy.mc"
void g_free( gpointer mem); 
#line 1085 "orbit-policy.mc"
 gpointer g_try_malloc( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1086 "orbit-policy.mc"
 gpointer g_try_malloc0( gulong n_bytes) __attribute__  (( __malloc__ )) ; 
#line 1088 "orbit-policy.mc"
 gpointer g_try_realloc( gpointer mem,  gulong n_bytes) __attribute__  (( warn_unused_result )) ; 
#line 1101 "orbit-policy.mc"
struct _GMemVTable { gpointer (*malloc)( gsize n_bytes);  gpointer (*realloc)( gpointer mem,  gsize n_bytes); void (*free)( gpointer mem);  gpointer (*calloc)( gsize n_blocks,  gsize n_block_bytes);  gpointer (*try_malloc)( gsize n_bytes);  gpointer (*try_realloc)( gpointer mem,  gsize n_bytes); }; 
#line 1102 "orbit-policy.mc"
void g_mem_set_vtable( GMemVTable *vtable); 
#line 1103 "orbit-policy.mc"
 gboolean g_mem_is_system_malloc(void ); 
#line 1105 "orbit-policy.mc"
extern  gboolean g_mem_gc_friendly; 
#line 1109 "orbit-policy.mc"
extern  GMemVTable *glib_mem_profiler_table; 
#line 1110 "orbit-policy.mc"
void g_mem_profile(void ); 
#line 1115 "orbit-policy.mc"
typedef struct _GList GList; 
#line 1122 "orbit-policy.mc"
struct _GList { gpointer data;  GList *next;  GList *prev; }; 
#line 1126 "orbit-policy.mc"
 GList *g_list_alloc(void ) __attribute__  (( warn_unused_result )) ; 
#line 1127 "orbit-policy.mc"
void g_list_free( GList *list); 
#line 1128 "orbit-policy.mc"
void g_list_free_1( GList *list); 
#line 1131 "orbit-policy.mc"
 GList *g_list_append( GList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1133 "orbit-policy.mc"
 GList *g_list_prepend( GList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1136 "orbit-policy.mc"
 GList *g_list_insert( GList *list,  gpointer data,  gint position) __attribute__  (( warn_unused_result )) ; 
#line 1139 "orbit-policy.mc"
 GList *g_list_insert_sorted( GList *list,  gpointer data,  GCompareFunc func) __attribute__  (( warn_unused_result )) ; 
#line 1143 "orbit-policy.mc"
 GList *g_list_insert_sorted_with_data( GList *list,  gpointer data,  GCompareDataFunc func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 1146 "orbit-policy.mc"
 GList *g_list_insert_before( GList *list,  GList *sibling,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1148 "orbit-policy.mc"
 GList *g_list_concat( GList *list1,  GList *list2) __attribute__  (( warn_unused_result )) ; 
#line 1150 "orbit-policy.mc"
 GList *g_list_remove( GList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1152 "orbit-policy.mc"
 GList *g_list_remove_all( GList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 1154 "orbit-policy.mc"
 GList *g_list_remove_link( GList *list,  GList *llink) __attribute__  (( warn_unused_result )) ; 
#line 1156 "orbit-policy.mc"
 GList *g_list_delete_link( GList *list,  GList *link_) __attribute__  (( warn_unused_result )) ; 
#line 1157 "orbit-policy.mc"
 GList *g_list_reverse( GList *list) __attribute__  (( warn_unused_result )) ; 
#line 1158 "orbit-policy.mc"
 GList *g_list_copy( GList *list) __attribute__  (( warn_unused_result )) ; 
#line 1160 "orbit-policy.mc"
 GList *g_list_nth( GList *list,  guint n); 
#line 1162 "orbit-policy.mc"
 GList *g_list_nth_prev( GList *list,  guint n); 
#line 1164 "orbit-policy.mc"
 GList *g_list_find( GList *list,  gconstpointer data); 
#line 1167 "orbit-policy.mc"
 GList *g_list_find_custom( GList *list,  gconstpointer data,  GCompareFunc func); 
#line 1169 "orbit-policy.mc"
 gint g_list_position( GList *list,  GList *llink); 
#line 1171 "orbit-policy.mc"
 gint g_list_index( GList *list,  gconstpointer data); 
#line 1172 "orbit-policy.mc"
 GList *g_list_last( GList *list); 
#line 1173 "orbit-policy.mc"
 GList *g_list_first( GList *list); 
#line 1174 "orbit-policy.mc"
 guint g_list_length( GList *list); 
#line 1177 "orbit-policy.mc"
void g_list_foreach( GList *list,  GFunc func,  gpointer user_data); 
#line 1179 "orbit-policy.mc"
 GList *g_list_sort( GList *list,  GCompareFunc compare_func) __attribute__  (( warn_unused_result )) ; 
#line 1182 "orbit-policy.mc"
 GList *g_list_sort_with_data( GList *list,  GCompareDataFunc compare_func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 1184 "orbit-policy.mc"
 gpointer g_list_nth_data( GList *list,  guint n); 
#line 1189 "orbit-policy.mc"
typedef struct _GCache GCache; 
#line 1191 "orbit-policy.mc"
typedef  gpointer (*GCacheNewFunc)( gpointer key); 
#line 1192 "orbit-policy.mc"
typedef  gpointer (*GCacheDupFunc)( gpointer value); 
#line 1193 "orbit-policy.mc"
typedef void (*GCacheDestroyFunc)( gpointer value); 
#line 1203 "orbit-policy.mc"
 GCache *g_cache_new( GCacheNewFunc value_new_func,  GCacheDestroyFunc value_destroy_func,  GCacheDupFunc key_dup_func,  GCacheDestroyFunc key_destroy_func,  GHashFunc hash_key_func,  GHashFunc hash_value_func,  GEqualFunc key_equal_func); 
#line 1204 "orbit-policy.mc"
void g_cache_destroy( GCache *cache); 
#line 1206 "orbit-policy.mc"
 gpointer g_cache_insert( GCache *cache,  gpointer key); 
#line 1208 "orbit-policy.mc"
void g_cache_remove( GCache *cache,  gconstpointer value); 
#line 1211 "orbit-policy.mc"
void g_cache_key_foreach( GCache *cache,  GHFunc func,  gpointer user_data); 
#line 1221 "orbit-policy.mc"
typedef struct _GCompletion GCompletion; 
#line 1223 "orbit-policy.mc"
typedef  gchar *(*GCompletionFunc)( gpointer ); 
#line 1230 "orbit-policy.mc"
typedef  gint (*GCompletionStrncmpFunc)(const  gchar *s1, const  gchar *s2,  gsize n); 
#line 1240 "orbit-policy.mc"
struct _GCompletion { GList *items;  GCompletionFunc func;  gchar *prefix;  GList *cache;  GCompletionStrncmpFunc strncmp_func; }; 
#line 1242 "orbit-policy.mc"
 GCompletion *g_completion_new( GCompletionFunc func); 
#line 1244 "orbit-policy.mc"
void g_completion_add_items( GCompletion *cmp,  GList *items); 
#line 1246 "orbit-policy.mc"
void g_completion_remove_items( GCompletion *cmp,  GList *items); 
#line 1247 "orbit-policy.mc"
void g_completion_clear_items( GCompletion *cmp); 
#line 1250 "orbit-policy.mc"
 GList *g_completion_complete( GCompletion *cmp, const  gchar *prefix,  gchar **new_prefix); 
#line 1253 "orbit-policy.mc"
 GList *g_completion_complete_utf8( GCompletion *cmp, const  gchar *prefix,  gchar **new_prefix); 
#line 1255 "orbit-policy.mc"
void g_completion_set_compare( GCompletion *cmp,  GCompletionStrncmpFunc strncmp_func); 
#line 1256 "orbit-policy.mc"
void g_completion_free( GCompletion *cmp); 
#line 1271 "orbit-policy.mc"
typedef enum {G_CONVERT_ERROR_NO_CONVERSION,G_CONVERT_ERROR_ILLEGAL_SEQUENCE,G_CONVERT_ERROR_FAILED,G_CONVERT_ERROR_PARTIAL_INPUT,G_CONVERT_ERROR_BAD_URI,G_CONVERT_ERROR_NOT_ABSOLUTE_PATH}GConvertError; 
#line 1274 "orbit-policy.mc"
 GQuark g_convert_error_quark(void ); 
#line 1278 "orbit-policy.mc"
typedef struct _GIConv *GIConv; 
#line 1281 "orbit-policy.mc"
 GIConv g_iconv_open(const  gchar *to_codeset, const  gchar *from_codeset); 
#line 1286 "orbit-policy.mc"
 size_t g_iconv( GIConv converter,  gchar **inbuf,  gsize *inbytes_left,  gchar **outbuf,  gsize *outbytes_left); 
#line 1287 "orbit-policy.mc"
 gint g_iconv_close( GIConv converter); 
#line 1296 "orbit-policy.mc"
 gchar *g_convert(const  gchar *str,  gssize len, const  gchar *to_codeset, const  gchar *from_codeset,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1302 "orbit-policy.mc"
 gchar *g_convert_with_iconv(const  gchar *str,  gssize len,  GIConv converter,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1310 "orbit-policy.mc"
 gchar *g_convert_with_fallback(const  gchar *str,  gssize len, const  gchar *to_codeset, const  gchar *from_codeset,  gchar *fallback,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1319 "orbit-policy.mc"
 gchar *g_locale_to_utf8(const  gchar *opsysstring,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1324 "orbit-policy.mc"
 gchar *g_locale_from_utf8(const  gchar *utf8string,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1329 "orbit-policy.mc"
 gchar *g_filename_to_utf8(const  gchar *opsysstring,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1334 "orbit-policy.mc"
 gchar *g_filename_from_utf8(const  gchar *utf8string,  gssize len,  gsize *bytes_read,  gsize *bytes_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1338 "orbit-policy.mc"
 gchar *g_filename_from_uri(const  gchar *uri,  gchar **hostname,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1342 "orbit-policy.mc"
 gchar *g_filename_to_uri(const  gchar *filename, const  gchar *hostname,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 1343 "orbit-policy.mc"
 gchar *g_filename_display_name(const  gchar *filename) __attribute__  (( __malloc__ )) ; 
#line 1344 "orbit-policy.mc"
 gboolean g_get_filename_charsets(const  gchar ***charsets); 
#line 1346 "orbit-policy.mc"
 gchar *g_filename_display_basename(const  gchar *filename) __attribute__  (( __malloc__ )) ; 
#line 1348 "orbit-policy.mc"
 gchar **g_uri_list_extract_uris(const  gchar *uri_list) __attribute__  (( __malloc__ )) ; 
#line 1353 "orbit-policy.mc"
typedef struct _GData GData; 
#line 1357 "orbit-policy.mc"
typedef void (*GDataForeachFunc)( GQuark key_id,  gpointer data,  gpointer user_data); 
#line 1361 "orbit-policy.mc"
void g_datalist_init( GData **datalist); 
#line 1362 "orbit-policy.mc"
void g_datalist_clear( GData **datalist); 
#line 1364 "orbit-policy.mc"
 gpointer g_datalist_id_get_data( GData **datalist,  GQuark key_id); 
#line 1368 "orbit-policy.mc"
void g_datalist_id_set_data_full( GData **datalist,  GQuark key_id,  gpointer data,  GDestroyNotify destroy_func); 
#line 1370 "orbit-policy.mc"
 gpointer g_datalist_id_remove_no_notify( GData **datalist,  GQuark key_id); 
#line 1373 "orbit-policy.mc"
void g_datalist_foreach( GData **datalist,  GDataForeachFunc func,  gpointer user_data); 
#line 1375 "orbit-policy.mc"
void g_datalist_set_flags( GData **datalist,  guint flags); 
#line 1377 "orbit-policy.mc"
void g_datalist_unset_flags( GData **datalist,  guint flags); 
#line 1378 "orbit-policy.mc"
 guint g_datalist_get_flags( GData **datalist); 
#line 1379 "orbit-policy.mc"
void g_dataset_destroy( gconstpointer dataset_location); 
#line 1381 "orbit-policy.mc"
 gpointer g_dataset_id_get_data( gconstpointer dataset_location,  GQuark key_id); 
#line 1385 "orbit-policy.mc"
void g_dataset_id_set_data_full( gconstpointer dataset_location,  GQuark key_id,  gpointer data,  GDestroyNotify destroy_func); 
#line 1387 "orbit-policy.mc"
 gpointer g_dataset_id_remove_no_notify( gconstpointer dataset_location,  GQuark key_id); 
#line 1390 "orbit-policy.mc"
void g_dataset_foreach( gconstpointer dataset_location,  GDataForeachFunc func,  gpointer user_data); 
#line 1405 "orbit-policy.mc"
typedef  __clock_t clock_t; 
#line 1411 "orbit-policy.mc"
typedef  __time_t time_t; 
#line 1415 "orbit-policy.mc"
typedef  __clockid_t clockid_t; 
#line 1416 "orbit-policy.mc"
typedef  __timer_t timer_t; 
#line 1421 "orbit-policy.mc"
struct timespec { __time_t tv_sec; long int tv_nsec; }; 
#line 1449 "orbit-policy.mc"
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; __const char *tm_zone; }; 
#line 1462 "orbit-policy.mc"
struct itimerspec {struct timespec it_interval; struct timespec it_value; }; 
#line 1465 "orbit-policy.mc"
struct sigevent ; 
#line 1471 "orbit-policy.mc"
typedef  __pid_t pid_t; 
#line 1480 "orbit-policy.mc"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ )) ; 
#line 1483 "orbit-policy.mc"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 1487 "orbit-policy.mc"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 1490 "orbit-policy.mc"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 1498 "orbit-policy.mc"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 1503 "orbit-policy.mc"
extern struct tm *gmtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 1507 "orbit-policy.mc"
extern struct tm *localtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 1514 "orbit-policy.mc"
extern struct tm *gmtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 1519 "orbit-policy.mc"
extern struct tm *localtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 1525 "orbit-policy.mc"
extern char *asctime(__const struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 1528 "orbit-policy.mc"
extern char *ctime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 1537 "orbit-policy.mc"
extern char *asctime_r(__const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 1541 "orbit-policy.mc"
extern char *ctime_r(__const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 1546 "orbit-policy.mc"
extern char *__tzname[2]; 
#line 1547 "orbit-policy.mc"
extern int __daylight; 
#line 1548 "orbit-policy.mc"
extern long int __timezone; 
#line 1553 "orbit-policy.mc"
extern char *tzname[2]; 
#line 1557 "orbit-policy.mc"
extern void tzset(void ) __attribute__  (( __nothrow__ )) ; 
#line 1561 "orbit-policy.mc"
extern int daylight; 
#line 1562 "orbit-policy.mc"
extern long int timezone; 
#line 1568 "orbit-policy.mc"
extern int stime(__const  time_t *__when) __attribute__  (( __nothrow__ )) ; 
#line 1569 "orbit-policy.mc"
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 1572 "orbit-policy.mc"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 1575 "orbit-policy.mc"
extern int dysize(int __year) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 1577 "orbit-policy.mc"
extern int nanosleep(__const struct timespec *__requested_time, struct timespec *__remaining); 
#line 1581 "orbit-policy.mc"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ )) ; 
#line 1584 "orbit-policy.mc"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 1588 "orbit-policy.mc"
extern int clock_settime( clockid_t __clock_id, __const struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 1597 "orbit-policy.mc"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, __const struct timespec *__req, struct timespec *__rem); 
#line 1600 "orbit-policy.mc"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ )) ; 
#line 1607 "orbit-policy.mc"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ )) ; 
#line 1610 "orbit-policy.mc"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 1615 "orbit-policy.mc"
extern int timer_settime( timer_t __timerid, int __flags, __const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ )) ; 
#line 1619 "orbit-policy.mc"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ )) ; 
#line 1622 "orbit-policy.mc"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 1629 "orbit-policy.mc"
typedef  gint32 GTime; 
#line 1630 "orbit-policy.mc"
typedef  guint16 GDateYear; 
#line 1631 "orbit-policy.mc"
typedef  guint8 GDateDay; 
#line 1632 "orbit-policy.mc"
typedef struct _GDate GDate; 
#line 1634 "orbit-policy.mc"
struct tm ; 
#line 1642 "orbit-policy.mc"
typedef enum {G_DATE_DAY=0,G_DATE_MONTH=1,G_DATE_YEAR=2}GDateDMY; 
#line 1655 "orbit-policy.mc"
typedef enum {G_DATE_BAD_WEEKDAY=0,G_DATE_MONDAY=1,G_DATE_TUESDAY=2,G_DATE_WEDNESDAY=3,G_DATE_THURSDAY=4,G_DATE_FRIDAY=5,G_DATE_SATURDAY=6,G_DATE_SUNDAY=7}GDateWeekday; 
#line 1671 "orbit-policy.mc"
typedef enum {G_DATE_BAD_MONTH=0,G_DATE_JANUARY=1,G_DATE_FEBRUARY=2,G_DATE_MARCH=3,G_DATE_APRIL=4,G_DATE_MAY=5,G_DATE_JUNE=6,G_DATE_JULY=7,G_DATE_AUGUST=8,G_DATE_SEPTEMBER=9,G_DATE_OCTOBER=10,G_DATE_NOVEMBER=11,G_DATE_DECEMBER=12}GDateMonth; 
#line 1687 "orbit-policy.mc"
struct _GDate { guint julian_days:32;  guint julian:1;  guint dmy:1;  guint day:6;  guint month:4;  guint year:16; }; 
#line 1693 "orbit-policy.mc"
 GDate *g_date_new(void ); 
#line 1696 "orbit-policy.mc"
 GDate *g_date_new_dmy( GDateDay day,  GDateMonth month,  GDateYear year); 
#line 1697 "orbit-policy.mc"
 GDate *g_date_new_julian( guint32 julian_day); 
#line 1698 "orbit-policy.mc"
void g_date_free( GDate *date); 
#line 1705 "orbit-policy.mc"
 gboolean g_date_valid(const  GDate *date); 
#line 1706 "orbit-policy.mc"
 gboolean g_date_valid_day( GDateDay day) __attribute__  (( __const__ )) ; 
#line 1707 "orbit-policy.mc"
 gboolean g_date_valid_month( GDateMonth month) __attribute__  (( __const__ )) ; 
#line 1708 "orbit-policy.mc"
 gboolean g_date_valid_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 1709 "orbit-policy.mc"
 gboolean g_date_valid_weekday( GDateWeekday weekday) __attribute__  (( __const__ )) ; 
#line 1710 "orbit-policy.mc"
 gboolean g_date_valid_julian( guint32 julian_date) __attribute__  (( __const__ )) ; 
#line 1713 "orbit-policy.mc"
 gboolean g_date_valid_dmy( GDateDay day,  GDateMonth month,  GDateYear year) __attribute__  (( __const__ )) ; 
#line 1715 "orbit-policy.mc"
 GDateWeekday g_date_get_weekday(const  GDate *date); 
#line 1716 "orbit-policy.mc"
 GDateMonth g_date_get_month(const  GDate *date); 
#line 1717 "orbit-policy.mc"
 GDateYear g_date_get_year(const  GDate *date); 
#line 1718 "orbit-policy.mc"
 GDateDay g_date_get_day(const  GDate *date); 
#line 1719 "orbit-policy.mc"
 guint32 g_date_get_julian(const  GDate *date); 
#line 1720 "orbit-policy.mc"
 guint g_date_get_day_of_year(const  GDate *date); 
#line 1727 "orbit-policy.mc"
 guint g_date_get_monday_week_of_year(const  GDate *date); 
#line 1728 "orbit-policy.mc"
 guint g_date_get_sunday_week_of_year(const  GDate *date); 
#line 1729 "orbit-policy.mc"
 guint g_date_get_iso8601_week_of_year(const  GDate *date); 
#line 1736 "orbit-policy.mc"
void g_date_clear( GDate *date,  guint n_dates); 
#line 1743 "orbit-policy.mc"
void g_date_set_parse( GDate *date, const  gchar *str); 
#line 1745 "orbit-policy.mc"
void g_date_set_time_t( GDate *date,  time_t timet); 
#line 1747 "orbit-policy.mc"
void g_date_set_time_val( GDate *date,  GTimeVal *timeval); 
#line 1753 "orbit-policy.mc"
void g_date_set_month( GDate *date,  GDateMonth month); 
#line 1755 "orbit-policy.mc"
void g_date_set_day( GDate *date,  GDateDay day); 
#line 1757 "orbit-policy.mc"
void g_date_set_year( GDate *date,  GDateYear year); 
#line 1761 "orbit-policy.mc"
void g_date_set_dmy( GDate *date,  GDateDay day,  GDateMonth month,  GDateYear y); 
#line 1763 "orbit-policy.mc"
void g_date_set_julian( GDate *date,  guint32 julian_date); 
#line 1764 "orbit-policy.mc"
 gboolean g_date_is_first_of_month(const  GDate *date); 
#line 1765 "orbit-policy.mc"
 gboolean g_date_is_last_of_month(const  GDate *date); 
#line 1769 "orbit-policy.mc"
void g_date_add_days( GDate *date,  guint n_days); 
#line 1771 "orbit-policy.mc"
void g_date_subtract_days( GDate *date,  guint n_days); 
#line 1775 "orbit-policy.mc"
void g_date_add_months( GDate *date,  guint n_months); 
#line 1777 "orbit-policy.mc"
void g_date_subtract_months( GDate *date,  guint n_months); 
#line 1781 "orbit-policy.mc"
void g_date_add_years( GDate *date,  guint n_years); 
#line 1783 "orbit-policy.mc"
void g_date_subtract_years( GDate *date,  guint n_years); 
#line 1784 "orbit-policy.mc"
 gboolean g_date_is_leap_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 1786 "orbit-policy.mc"
 guint8 g_date_get_days_in_month( GDateMonth month,  GDateYear year) __attribute__  (( __const__ )) ; 
#line 1787 "orbit-policy.mc"
 guint8 g_date_get_monday_weeks_in_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 1788 "orbit-policy.mc"
 guint8 g_date_get_sunday_weeks_in_year( GDateYear year) __attribute__  (( __const__ )) ; 
#line 1793 "orbit-policy.mc"
 gint g_date_days_between(const  GDate *date1, const  GDate *date2); 
#line 1797 "orbit-policy.mc"
 gint g_date_compare(const  GDate *lhs, const  GDate *rhs); 
#line 1799 "orbit-policy.mc"
void g_date_to_struct_tm(const  GDate *date, struct tm *tm); 
#line 1803 "orbit-policy.mc"
void g_date_clamp( GDate *date, const  GDate *min_date, const  GDate *max_date); 
#line 1806 "orbit-policy.mc"
void g_date_order( GDate *date1,  GDate *date2); 
#line 1814 "orbit-policy.mc"
 gsize g_date_strftime( gchar *s,  gsize slen, const  gchar *format, const  GDate *date); 
#line 1818 "orbit-policy.mc"
typedef struct _GDir GDir; 
#line 1828 "orbit-policy.mc"
 GDir *g_dir_open(const  gchar *path,  guint flags,  GError **error); 
#line 1829 "orbit-policy.mc"
const  gchar *g_dir_read_name( GDir *dir); 
#line 1830 "orbit-policy.mc"
void g_dir_rewind( GDir *dir); 
#line 1831 "orbit-policy.mc"
void g_dir_close( GDir *dir); 
#line 1866 "orbit-policy.mc"
typedef enum {G_FILE_ERROR_EXIST,G_FILE_ERROR_ISDIR,G_FILE_ERROR_ACCES,G_FILE_ERROR_NAMETOOLONG,G_FILE_ERROR_NOENT,G_FILE_ERROR_NOTDIR,G_FILE_ERROR_NXIO,G_FILE_ERROR_NODEV,G_FILE_ERROR_ROFS,G_FILE_ERROR_TXTBSY,G_FILE_ERROR_FAULT,G_FILE_ERROR_LOOP,G_FILE_ERROR_NOSPC,G_FILE_ERROR_NOMEM,G_FILE_ERROR_MFILE,G_FILE_ERROR_NFILE,G_FILE_ERROR_BADF,G_FILE_ERROR_INVAL,G_FILE_ERROR_PIPE,G_FILE_ERROR_AGAIN,G_FILE_ERROR_INTR,G_FILE_ERROR_IO,G_FILE_ERROR_PERM,G_FILE_ERROR_NOSYS,G_FILE_ERROR_FAILED}GFileError; 
#line 1879 "orbit-policy.mc"
typedef enum {G_FILE_TEST_IS_REGULAR=1 << 0,G_FILE_TEST_IS_SYMLINK=1 << 1,G_FILE_TEST_IS_DIR=1 << 2,G_FILE_TEST_IS_EXECUTABLE=1 << 3,G_FILE_TEST_EXISTS=1 << 4}GFileTest; 
#line 1881 "orbit-policy.mc"
 GQuark g_file_error_quark(void ); 
#line 1883 "orbit-policy.mc"
 GFileError g_file_error_from_errno( gint err_no); 
#line 1885 "orbit-policy.mc"
 gboolean g_file_test(const  gchar *filename,  GFileTest test); 
#line 1889 "orbit-policy.mc"
 gboolean g_file_get_contents(const  gchar *filename,  gchar **contents,  gsize *length,  GError **error); 
#line 1893 "orbit-policy.mc"
 gboolean g_file_set_contents(const  gchar *filename, const  gchar *contents,  gssize length,  GError **error); 
#line 1895 "orbit-policy.mc"
 gchar *g_file_read_link(const  gchar *filename,  GError **error); 
#line 1898 "orbit-policy.mc"
 gint g_mkstemp( gchar *tmpl); 
#line 1903 "orbit-policy.mc"
 gint g_file_open_tmp(const  gchar *tmpl,  gchar **name_used,  GError **error); 
#line 1907 "orbit-policy.mc"
 gchar *g_build_path(const  gchar *separator, const  gchar *first_element, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 1909 "orbit-policy.mc"
 gchar *g_build_pathv(const  gchar *separator,  gchar **args) __attribute__  (( __malloc__ )) ; 
#line 1912 "orbit-policy.mc"
 gchar *g_build_filename(const  gchar *first_element, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 1913 "orbit-policy.mc"
 gchar *g_build_filenamev( gchar **args) __attribute__  (( __malloc__ )) ; 
#line 1916 "orbit-policy.mc"
int g_mkdir_with_parents(const  gchar *pathname, int mode); 
#line 1921 "orbit-policy.mc"
typedef struct _GHashTable GHashTable; 
#line 1925 "orbit-policy.mc"
typedef  gboolean (*GHRFunc)( gpointer key,  gpointer value,  gpointer user_data); 
#line 1930 "orbit-policy.mc"
 GHashTable *g_hash_table_new( GHashFunc hash_func,  GEqualFunc key_equal_func); 
#line 1934 "orbit-policy.mc"
 GHashTable *g_hash_table_new_full( GHashFunc hash_func,  GEqualFunc key_equal_func,  GDestroyNotify key_destroy_func,  GDestroyNotify value_destroy_func); 
#line 1935 "orbit-policy.mc"
void g_hash_table_destroy( GHashTable *hash_table); 
#line 1938 "orbit-policy.mc"
void g_hash_table_insert( GHashTable *hash_table,  gpointer key,  gpointer value); 
#line 1941 "orbit-policy.mc"
void g_hash_table_replace( GHashTable *hash_table,  gpointer key,  gpointer value); 
#line 1943 "orbit-policy.mc"
 gboolean g_hash_table_remove( GHashTable *hash_table,  gconstpointer key); 
#line 1945 "orbit-policy.mc"
 gboolean g_hash_table_steal( GHashTable *hash_table,  gconstpointer key); 
#line 1947 "orbit-policy.mc"
 gpointer g_hash_table_lookup( GHashTable *hash_table,  gconstpointer key); 
#line 1951 "orbit-policy.mc"
 gboolean g_hash_table_lookup_extended( GHashTable *hash_table,  gconstpointer lookup_key,  gpointer *orig_key,  gpointer *value); 
#line 1954 "orbit-policy.mc"
void g_hash_table_foreach( GHashTable *hash_table,  GHFunc func,  gpointer user_data); 
#line 1957 "orbit-policy.mc"
 gpointer g_hash_table_find( GHashTable *hash_table,  GHRFunc predicate,  gpointer user_data); 
#line 1960 "orbit-policy.mc"
 guint g_hash_table_foreach_remove( GHashTable *hash_table,  GHRFunc func,  gpointer user_data); 
#line 1963 "orbit-policy.mc"
 guint g_hash_table_foreach_steal( GHashTable *hash_table,  GHRFunc func,  gpointer user_data); 
#line 1964 "orbit-policy.mc"
 guint g_hash_table_size( GHashTable *hash_table); 
#line 1967 "orbit-policy.mc"
 GHashTable *g_hash_table_ref( GHashTable *hash_table); 
#line 1968 "orbit-policy.mc"
void g_hash_table_unref( GHashTable *hash_table); 
#line 1970 "orbit-policy.mc"
 gboolean g_str_equal( gconstpointer v1,  gconstpointer v2); 
#line 1971 "orbit-policy.mc"
 guint g_str_hash( gconstpointer v); 
#line 1974 "orbit-policy.mc"
 gboolean g_int_equal( gconstpointer v1,  gconstpointer v2); 
#line 1975 "orbit-policy.mc"
 guint g_int_hash( gconstpointer v); 
#line 1983 "orbit-policy.mc"
 guint g_direct_hash( gconstpointer v) __attribute__  (( __const__ )) ; 
#line 1985 "orbit-policy.mc"
 gboolean g_direct_equal( gconstpointer v1,  gconstpointer v2) __attribute__  (( __const__ )) ; 
#line 1992 "orbit-policy.mc"
typedef struct _GHook GHook; 
#line 1993 "orbit-policy.mc"
typedef struct _GHookList GHookList; 
#line 1996 "orbit-policy.mc"
typedef  gint (*GHookCompareFunc)( GHook *new_hook,  GHook *sibling); 
#line 1998 "orbit-policy.mc"
typedef  gboolean (*GHookFindFunc)( GHook *hook,  gpointer data); 
#line 2000 "orbit-policy.mc"
typedef void (*GHookMarshaller)( GHook *hook,  gpointer marshal_data); 
#line 2002 "orbit-policy.mc"
typedef  gboolean (*GHookCheckMarshaller)( GHook *hook,  gpointer marshal_data); 
#line 2003 "orbit-policy.mc"
typedef void (*GHookFunc)( gpointer data); 
#line 2004 "orbit-policy.mc"
typedef  gboolean (*GHookCheckFunc)( gpointer data); 
#line 2006 "orbit-policy.mc"
typedef void (*GHookFinalizeFunc)( GHookList *hook_list,  GHook *hook); 
#line 2012 "orbit-policy.mc"
typedef enum {G_HOOK_FLAG_ACTIVE=1 << 0,G_HOOK_FLAG_IN_CALL=1 << 1,G_HOOK_FLAG_MASK=0x0f}GHookFlagMask; 
#line 2026 "orbit-policy.mc"
struct _GHookList { gulong seq_id;  guint hook_size:16;  guint is_setup:1;  GHook *hooks;  gpointer dummy3;  GHookFinalizeFunc finalize_hook;  gpointer dummy[2]; }; 
#line 2037 "orbit-policy.mc"
struct _GHook { gpointer data;  GHook *next;  GHook *prev;  guint ref_count;  gulong hook_id;  guint flags;  gpointer func;  GDestroyNotify destroy; }; 
#line 2039 "orbit-policy.mc"
void g_hook_list_init( GHookList *hook_list,  guint hook_size); 
#line 2040 "orbit-policy.mc"
void g_hook_list_clear( GHookList *hook_list); 
#line 2041 "orbit-policy.mc"
 GHook *g_hook_alloc( GHookList *hook_list); 
#line 2043 "orbit-policy.mc"
void g_hook_free( GHookList *hook_list,  GHook *hook); 
#line 2045 "orbit-policy.mc"
 GHook *g_hook_ref( GHookList *hook_list,  GHook *hook); 
#line 2047 "orbit-policy.mc"
void g_hook_unref( GHookList *hook_list,  GHook *hook); 
#line 2049 "orbit-policy.mc"
 gboolean g_hook_destroy( GHookList *hook_list,  gulong hook_id); 
#line 2051 "orbit-policy.mc"
void g_hook_destroy_link( GHookList *hook_list,  GHook *hook); 
#line 2053 "orbit-policy.mc"
void g_hook_prepend( GHookList *hook_list,  GHook *hook); 
#line 2056 "orbit-policy.mc"
void g_hook_insert_before( GHookList *hook_list,  GHook *sibling,  GHook *hook); 
#line 2059 "orbit-policy.mc"
void g_hook_insert_sorted( GHookList *hook_list,  GHook *hook,  GHookCompareFunc func); 
#line 2061 "orbit-policy.mc"
 GHook *g_hook_get( GHookList *hook_list,  gulong hook_id); 
#line 2065 "orbit-policy.mc"
 GHook *g_hook_find( GHookList *hook_list,  gboolean need_valids,  GHookFindFunc func,  gpointer data); 
#line 2068 "orbit-policy.mc"
 GHook *g_hook_find_data( GHookList *hook_list,  gboolean need_valids,  gpointer data); 
#line 2071 "orbit-policy.mc"
 GHook *g_hook_find_func( GHookList *hook_list,  gboolean need_valids,  gpointer func); 
#line 2075 "orbit-policy.mc"
 GHook *g_hook_find_func_data( GHookList *hook_list,  gboolean need_valids,  gpointer func,  gpointer data); 
#line 2078 "orbit-policy.mc"
 GHook *g_hook_first_valid( GHookList *hook_list,  gboolean may_be_in_call); 
#line 2084 "orbit-policy.mc"
 GHook *g_hook_next_valid( GHookList *hook_list,  GHook *hook,  gboolean may_be_in_call); 
#line 2087 "orbit-policy.mc"
 gint g_hook_compare_ids( GHook *new_hook,  GHook *sibling); 
#line 2094 "orbit-policy.mc"
void g_hook_list_invoke( GHookList *hook_list,  gboolean may_recurse); 
#line 2099 "orbit-policy.mc"
void g_hook_list_invoke_check( GHookList *hook_list,  gboolean may_recurse); 
#line 2105 "orbit-policy.mc"
void g_hook_list_marshal( GHookList *hook_list,  gboolean may_recurse,  GHookMarshaller marshaller,  gpointer marshal_data); 
#line 2109 "orbit-policy.mc"
void g_hook_list_marshal_check( GHookList *hook_list,  gboolean may_recurse,  GHookCheckMarshaller marshaller,  gpointer marshal_data); 
#line 2114 "orbit-policy.mc"
typedef struct _GSList GSList; 
#line 2120 "orbit-policy.mc"
struct _GSList { gpointer data;  GSList *next; }; 
#line 2124 "orbit-policy.mc"
 GSList *g_slist_alloc(void ) __attribute__  (( warn_unused_result )) ; 
#line 2125 "orbit-policy.mc"
void g_slist_free( GSList *list); 
#line 2126 "orbit-policy.mc"
void g_slist_free_1( GSList *list); 
#line 2129 "orbit-policy.mc"
 GSList *g_slist_append( GSList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2131 "orbit-policy.mc"
 GSList *g_slist_prepend( GSList *list,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2134 "orbit-policy.mc"
 GSList *g_slist_insert( GSList *list,  gpointer data,  gint position) __attribute__  (( warn_unused_result )) ; 
#line 2137 "orbit-policy.mc"
 GSList *g_slist_insert_sorted( GSList *list,  gpointer data,  GCompareFunc func) __attribute__  (( warn_unused_result )) ; 
#line 2141 "orbit-policy.mc"
 GSList *g_slist_insert_sorted_with_data( GSList *list,  gpointer data,  GCompareDataFunc func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 2144 "orbit-policy.mc"
 GSList *g_slist_insert_before( GSList *slist,  GSList *sibling,  gpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2146 "orbit-policy.mc"
 GSList *g_slist_concat( GSList *list1,  GSList *list2) __attribute__  (( warn_unused_result )) ; 
#line 2148 "orbit-policy.mc"
 GSList *g_slist_remove( GSList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2150 "orbit-policy.mc"
 GSList *g_slist_remove_all( GSList *list,  gconstpointer data) __attribute__  (( warn_unused_result )) ; 
#line 2152 "orbit-policy.mc"
 GSList *g_slist_remove_link( GSList *list,  GSList *link_) __attribute__  (( warn_unused_result )) ; 
#line 2154 "orbit-policy.mc"
 GSList *g_slist_delete_link( GSList *list,  GSList *link_) __attribute__  (( warn_unused_result )) ; 
#line 2155 "orbit-policy.mc"
 GSList *g_slist_reverse( GSList *list) __attribute__  (( warn_unused_result )) ; 
#line 2156 "orbit-policy.mc"
 GSList *g_slist_copy( GSList *list) __attribute__  (( warn_unused_result )) ; 
#line 2158 "orbit-policy.mc"
 GSList *g_slist_nth( GSList *list,  guint n); 
#line 2160 "orbit-policy.mc"
 GSList *g_slist_find( GSList *list,  gconstpointer data); 
#line 2163 "orbit-policy.mc"
 GSList *g_slist_find_custom( GSList *list,  gconstpointer data,  GCompareFunc func); 
#line 2165 "orbit-policy.mc"
 gint g_slist_position( GSList *list,  GSList *llink); 
#line 2167 "orbit-policy.mc"
 gint g_slist_index( GSList *list,  gconstpointer data); 
#line 2168 "orbit-policy.mc"
 GSList *g_slist_last( GSList *list); 
#line 2169 "orbit-policy.mc"
 guint g_slist_length( GSList *list); 
#line 2172 "orbit-policy.mc"
void g_slist_foreach( GSList *list,  GFunc func,  gpointer user_data); 
#line 2174 "orbit-policy.mc"
 GSList *g_slist_sort( GSList *list,  GCompareFunc compare_func) __attribute__  (( warn_unused_result )) ; 
#line 2177 "orbit-policy.mc"
 GSList *g_slist_sort_with_data( GSList *list,  GCompareDataFunc compare_func,  gpointer user_data) __attribute__  (( warn_unused_result )) ; 
#line 2179 "orbit-policy.mc"
 gpointer g_slist_nth_data( GSList *list,  guint n); 
#line 2192 "orbit-policy.mc"
typedef struct _GMainContext GMainContext; 
#line 2193 "orbit-policy.mc"
typedef struct _GMainLoop GMainLoop; 
#line 2194 "orbit-policy.mc"
typedef struct _GSource GSource; 
#line 2195 "orbit-policy.mc"
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs; 
#line 2196 "orbit-policy.mc"
typedef struct _GSourceFuncs GSourceFuncs; 
#line 2198 "orbit-policy.mc"
typedef  gboolean (*GSourceFunc)( gpointer data); 
#line 2201 "orbit-policy.mc"
typedef void (*GChildWatchFunc)( GPid pid,  gint status,  gpointer data); 
#line 2224 "orbit-policy.mc"
struct _GSource { gpointer callback_data;  GSourceCallbackFuncs *callback_funcs;  GSourceFuncs *source_funcs;  guint ref_count;  GMainContext *context;  gint priority;  guint flags;  guint source_id;  GSList *poll_fds;  GSource *prev;  GSource *next;  gpointer reserved1;  gpointer reserved2; }; 
#line 2234 "orbit-policy.mc"
struct _GSourceCallbackFuncs {void (*ref)( gpointer cb_data); void (*unref)( gpointer cb_data); void (*get)( gpointer cb_data,  GSource *source,  GSourceFunc *func,  gpointer *data); }; 
#line 2236 "orbit-policy.mc"
typedef void (*GSourceDummyMarshal)(void ); 
#line 2251 "orbit-policy.mc"
struct _GSourceFuncs { gboolean (*prepare)( GSource *source,  gint *timeout_);  gboolean (*check)( GSource *source);  gboolean (*dispatch)( GSource *source,  GSourceFunc callback,  gpointer user_data); void (*finalize)( GSource *source);  GSourceFunc closure_callback;  GSourceDummyMarshal closure_marshal; }; 
#line 2252 "orbit-policy.mc"
typedef struct _GPollFD GPollFD; 
#line 2255 "orbit-policy.mc"
typedef  gint (*GPollFunc)( GPollFD *ufds,  guint nfsd,  gint timeout_); 
#line 2262 "orbit-policy.mc"
struct _GPollFD { gint fd;  gushort events;  gushort revents; }; 
#line 2263 "orbit-policy.mc"
 GMainContext *g_main_context_new(void ); 
#line 2264 "orbit-policy.mc"
 GMainContext *g_main_context_ref( GMainContext *context); 
#line 2265 "orbit-policy.mc"
void g_main_context_unref( GMainContext *context); 
#line 2266 "orbit-policy.mc"
 GMainContext *g_main_context_default(void ); 
#line 2269 "orbit-policy.mc"
 gboolean g_main_context_iteration( GMainContext *context,  gboolean may_block); 
#line 2270 "orbit-policy.mc"
 gboolean g_main_context_pending( GMainContext *context); 
#line 2275 "orbit-policy.mc"
 GSource *g_main_context_find_source_by_id( GMainContext *context,  guint source_id); 
#line 2277 "orbit-policy.mc"
 GSource *g_main_context_find_source_by_user_data( GMainContext *context,  gpointer user_data); 
#line 2280 "orbit-policy.mc"
 GSource *g_main_context_find_source_by_funcs_user_data( GMainContext *context,  GSourceFuncs *funcs,  gpointer user_data); 
#line 2284 "orbit-policy.mc"
void g_main_context_wakeup( GMainContext *context); 
#line 2285 "orbit-policy.mc"
 gboolean g_main_context_acquire( GMainContext *context); 
#line 2286 "orbit-policy.mc"
void g_main_context_release( GMainContext *context); 
#line 2287 "orbit-policy.mc"
 gboolean g_main_context_is_owner( GMainContext *context); 
#line 2290 "orbit-policy.mc"
 gboolean g_main_context_wait( GMainContext *context,  GCond *cond,  GMutex *mutex); 
#line 2293 "orbit-policy.mc"
 gboolean g_main_context_prepare( GMainContext *context,  gint *priority); 
#line 2298 "orbit-policy.mc"
 gint g_main_context_query( GMainContext *context,  gint max_priority,  gint *timeout_,  GPollFD *fds,  gint n_fds); 
#line 2302 "orbit-policy.mc"
 gint g_main_context_check( GMainContext *context,  gint max_priority,  GPollFD *fds,  gint n_fds); 
#line 2303 "orbit-policy.mc"
void g_main_context_dispatch( GMainContext *context); 
#line 2306 "orbit-policy.mc"
void g_main_context_set_poll_func( GMainContext *context,  GPollFunc func); 
#line 2307 "orbit-policy.mc"
 GPollFunc g_main_context_get_poll_func( GMainContext *context); 
#line 2313 "orbit-policy.mc"
void g_main_context_add_poll( GMainContext *context,  GPollFD *fd,  gint priority); 
#line 2315 "orbit-policy.mc"
void g_main_context_remove_poll( GMainContext *context,  GPollFD *fd); 
#line 2317 "orbit-policy.mc"
int g_main_depth(void ); 
#line 2322 "orbit-policy.mc"
 GMainLoop *g_main_loop_new( GMainContext *context,  gboolean is_running); 
#line 2323 "orbit-policy.mc"
void g_main_loop_run( GMainLoop *loop); 
#line 2324 "orbit-policy.mc"
void g_main_loop_quit( GMainLoop *loop); 
#line 2325 "orbit-policy.mc"
 GMainLoop *g_main_loop_ref( GMainLoop *loop); 
#line 2326 "orbit-policy.mc"
void g_main_loop_unref( GMainLoop *loop); 
#line 2327 "orbit-policy.mc"
 gboolean g_main_loop_is_running( GMainLoop *loop); 
#line 2328 "orbit-policy.mc"
 GMainContext *g_main_loop_get_context( GMainLoop *loop); 
#line 2333 "orbit-policy.mc"
 GSource *g_source_new( GSourceFuncs *source_funcs,  guint struct_size); 
#line 2334 "orbit-policy.mc"
 GSource *g_source_ref( GSource *source); 
#line 2335 "orbit-policy.mc"
void g_source_unref( GSource *source); 
#line 2338 "orbit-policy.mc"
 guint g_source_attach( GSource *source,  GMainContext *context); 
#line 2339 "orbit-policy.mc"
void g_source_destroy( GSource *source); 
#line 2342 "orbit-policy.mc"
void g_source_set_priority( GSource *source,  gint priority); 
#line 2343 "orbit-policy.mc"
 gint g_source_get_priority( GSource *source); 
#line 2345 "orbit-policy.mc"
void g_source_set_can_recurse( GSource *source,  gboolean can_recurse); 
#line 2346 "orbit-policy.mc"
 gboolean g_source_get_can_recurse( GSource *source); 
#line 2347 "orbit-policy.mc"
 guint g_source_get_id( GSource *source); 
#line 2349 "orbit-policy.mc"
 GMainContext *g_source_get_context( GSource *source); 
#line 2354 "orbit-policy.mc"
void g_source_set_callback( GSource *source,  GSourceFunc func,  gpointer data,  GDestroyNotify notify); 
#line 2360 "orbit-policy.mc"
void g_source_set_callback_indirect( GSource *source,  gpointer callback_data,  GSourceCallbackFuncs *callback_funcs); 
#line 2363 "orbit-policy.mc"
void g_source_add_poll( GSource *source,  GPollFD *fd); 
#line 2365 "orbit-policy.mc"
void g_source_remove_poll( GSource *source,  GPollFD *fd); 
#line 2368 "orbit-policy.mc"
void g_source_get_current_time( GSource *source,  GTimeVal *timeval); 
#line 2376 "orbit-policy.mc"
 GSource *g_idle_source_new(void ); 
#line 2377 "orbit-policy.mc"
 GSource *g_child_watch_source_new( GPid pid); 
#line 2378 "orbit-policy.mc"
 GSource *g_timeout_source_new( guint interval); 
#line 2382 "orbit-policy.mc"
void g_get_current_time( GTimeVal *result); 
#line 2383 "orbit-policy.mc"
 gboolean g_source_remove( guint tag); 
#line 2384 "orbit-policy.mc"
 gboolean g_source_remove_by_user_data( gpointer user_data); 
#line 2386 "orbit-policy.mc"
 gboolean g_source_remove_by_funcs_user_data( GSourceFuncs *funcs,  gpointer user_data); 
#line 2393 "orbit-policy.mc"
 guint g_timeout_add_full( gint priority,  guint interval,  GSourceFunc function,  gpointer data,  GDestroyNotify notify); 
#line 2396 "orbit-policy.mc"
 guint g_timeout_add( guint interval,  GSourceFunc function,  gpointer data); 
#line 2401 "orbit-policy.mc"
 guint g_child_watch_add_full( gint priority,  GPid pid,  GChildWatchFunc function,  gpointer data,  GDestroyNotify notify); 
#line 2404 "orbit-policy.mc"
 guint g_child_watch_add( GPid pid,  GChildWatchFunc function,  gpointer data); 
#line 2406 "orbit-policy.mc"
 guint g_idle_add( GSourceFunc function,  gpointer data); 
#line 2410 "orbit-policy.mc"
 guint g_idle_add_full( gint priority,  GSourceFunc function,  gpointer data,  GDestroyNotify notify); 
#line 2411 "orbit-policy.mc"
 gboolean g_idle_remove_by_data( gpointer data); 
#line 2414 "orbit-policy.mc"
extern  GSourceFuncs g_timeout_funcs; 
#line 2415 "orbit-policy.mc"
extern  GSourceFuncs g_child_watch_funcs; 
#line 2416 "orbit-policy.mc"
extern  GSourceFuncs g_idle_funcs; 
#line 2421 "orbit-policy.mc"
typedef  guint32 gunichar; 
#line 2422 "orbit-policy.mc"
typedef  guint16 gunichar2; 
#line 2459 "orbit-policy.mc"
typedef enum {G_UNICODE_CONTROL,G_UNICODE_FORMAT,G_UNICODE_UNASSIGNED,G_UNICODE_PRIVATE_USE,G_UNICODE_SURROGATE,G_UNICODE_LOWERCASE_LETTER,G_UNICODE_MODIFIER_LETTER,G_UNICODE_OTHER_LETTER,G_UNICODE_TITLECASE_LETTER,G_UNICODE_UPPERCASE_LETTER,G_UNICODE_COMBINING_MARK,G_UNICODE_ENCLOSING_MARK,G_UNICODE_NON_SPACING_MARK,G_UNICODE_DECIMAL_NUMBER,G_UNICODE_LETTER_NUMBER,G_UNICODE_OTHER_NUMBER,G_UNICODE_CONNECT_PUNCTUATION,G_UNICODE_DASH_PUNCTUATION,G_UNICODE_CLOSE_PUNCTUATION,G_UNICODE_FINAL_PUNCTUATION,G_UNICODE_INITIAL_PUNCTUATION,G_UNICODE_OTHER_PUNCTUATION,G_UNICODE_OPEN_PUNCTUATION,G_UNICODE_CURRENCY_SYMBOL,G_UNICODE_MODIFIER_SYMBOL,G_UNICODE_MATH_SYMBOL,G_UNICODE_OTHER_SYMBOL,G_UNICODE_LINE_SEPARATOR,G_UNICODE_PARAGRAPH_SEPARATOR,G_UNICODE_SPACE_SEPARATOR}GUnicodeType; 
#line 2504 "orbit-policy.mc"
typedef enum {G_UNICODE_BREAK_MANDATORY,G_UNICODE_BREAK_CARRIAGE_RETURN,G_UNICODE_BREAK_LINE_FEED,G_UNICODE_BREAK_COMBINING_MARK,G_UNICODE_BREAK_SURROGATE,G_UNICODE_BREAK_ZERO_WIDTH_SPACE,G_UNICODE_BREAK_INSEPARABLE,G_UNICODE_BREAK_NON_BREAKING_GLUE,G_UNICODE_BREAK_CONTINGENT,G_UNICODE_BREAK_SPACE,G_UNICODE_BREAK_AFTER,G_UNICODE_BREAK_BEFORE,G_UNICODE_BREAK_BEFORE_AND_AFTER,G_UNICODE_BREAK_HYPHEN,G_UNICODE_BREAK_NON_STARTER,G_UNICODE_BREAK_OPEN_PUNCTUATION,G_UNICODE_BREAK_CLOSE_PUNCTUATION,G_UNICODE_BREAK_QUOTATION,G_UNICODE_BREAK_EXCLAMATION,G_UNICODE_BREAK_IDEOGRAPHIC,G_UNICODE_BREAK_NUMERIC,G_UNICODE_BREAK_INFIX_SEPARATOR,G_UNICODE_BREAK_SYMBOL,G_UNICODE_BREAK_ALPHABETIC,G_UNICODE_BREAK_PREFIX,G_UNICODE_BREAK_POSTFIX,G_UNICODE_BREAK_COMPLEX_CONTEXT,G_UNICODE_BREAK_AMBIGUOUS,G_UNICODE_BREAK_UNKNOWN,G_UNICODE_BREAK_NEXT_LINE,G_UNICODE_BREAK_WORD_JOINER,G_UNICODE_BREAK_HANGUL_L_JAMO,G_UNICODE_BREAK_HANGUL_V_JAMO,G_UNICODE_BREAK_HANGUL_T_JAMO,G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE}GUnicodeBreakType; 
#line 2512 "orbit-policy.mc"
 gboolean g_get_charset(const char **charset); 
#line 2516 "orbit-policy.mc"
 gboolean g_unichar_isalnum( gunichar c) __attribute__  (( __const__ )) ; 
#line 2517 "orbit-policy.mc"
 gboolean g_unichar_isalpha( gunichar c) __attribute__  (( __const__ )) ; 
#line 2518 "orbit-policy.mc"
 gboolean g_unichar_iscntrl( gunichar c) __attribute__  (( __const__ )) ; 
#line 2519 "orbit-policy.mc"
 gboolean g_unichar_isdigit( gunichar c) __attribute__  (( __const__ )) ; 
#line 2520 "orbit-policy.mc"
 gboolean g_unichar_isgraph( gunichar c) __attribute__  (( __const__ )) ; 
#line 2521 "orbit-policy.mc"
 gboolean g_unichar_islower( gunichar c) __attribute__  (( __const__ )) ; 
#line 2522 "orbit-policy.mc"
 gboolean g_unichar_isprint( gunichar c) __attribute__  (( __const__ )) ; 
#line 2523 "orbit-policy.mc"
 gboolean g_unichar_ispunct( gunichar c) __attribute__  (( __const__ )) ; 
#line 2524 "orbit-policy.mc"
 gboolean g_unichar_isspace( gunichar c) __attribute__  (( __const__ )) ; 
#line 2525 "orbit-policy.mc"
 gboolean g_unichar_isupper( gunichar c) __attribute__  (( __const__ )) ; 
#line 2526 "orbit-policy.mc"
 gboolean g_unichar_isxdigit( gunichar c) __attribute__  (( __const__ )) ; 
#line 2527 "orbit-policy.mc"
 gboolean g_unichar_istitle( gunichar c) __attribute__  (( __const__ )) ; 
#line 2528 "orbit-policy.mc"
 gboolean g_unichar_isdefined( gunichar c) __attribute__  (( __const__ )) ; 
#line 2529 "orbit-policy.mc"
 gboolean g_unichar_iswide( gunichar c) __attribute__  (( __const__ )) ; 
#line 2533 "orbit-policy.mc"
 gunichar g_unichar_toupper( gunichar c) __attribute__  (( __const__ )) ; 
#line 2534 "orbit-policy.mc"
 gunichar g_unichar_tolower( gunichar c) __attribute__  (( __const__ )) ; 
#line 2535 "orbit-policy.mc"
 gunichar g_unichar_totitle( gunichar c) __attribute__  (( __const__ )) ; 
#line 2539 "orbit-policy.mc"
 gint g_unichar_digit_value( gunichar c) __attribute__  (( __const__ )) ; 
#line 2541 "orbit-policy.mc"
 gint g_unichar_xdigit_value( gunichar c) __attribute__  (( __const__ )) ; 
#line 2544 "orbit-policy.mc"
 GUnicodeType g_unichar_type( gunichar c) __attribute__  (( __const__ )) ; 
#line 2547 "orbit-policy.mc"
 GUnicodeBreakType g_unichar_break_type( gunichar c) __attribute__  (( __const__ )) ; 
#line 2554 "orbit-policy.mc"
void g_unicode_canonical_ordering( gunichar *string,  gsize len); 
#line 2560 "orbit-policy.mc"
 gunichar *g_unicode_canonical_decomposition( gunichar ch,  gsize *result_len) __attribute__  (( __malloc__ )) ; 
#line 2564 "orbit-policy.mc"
extern const  gchar *const g_utf8_skip; 
#line 2568 "orbit-policy.mc"
 gunichar g_utf8_get_char(const  gchar *p); 
#line 2570 "orbit-policy.mc"
 gunichar g_utf8_get_char_validated(const  gchar *p,  gssize max_len); 
#line 2573 "orbit-policy.mc"
 gchar *g_utf8_offset_to_pointer(const  gchar *str,  glong offset); 
#line 2575 "orbit-policy.mc"
 glong g_utf8_pointer_to_offset(const  gchar *str, const  gchar *pos); 
#line 2576 "orbit-policy.mc"
 gchar *g_utf8_prev_char(const  gchar *p); 
#line 2578 "orbit-policy.mc"
 gchar *g_utf8_find_next_char(const  gchar *p, const  gchar *end); 
#line 2580 "orbit-policy.mc"
 gchar *g_utf8_find_prev_char(const  gchar *str, const  gchar *p); 
#line 2583 "orbit-policy.mc"
 glong g_utf8_strlen(const  gchar *p,  gssize max); 
#line 2588 "orbit-policy.mc"
 gchar *g_utf8_strncpy( gchar *dest, const  gchar *src,  gsize n); 
#line 2594 "orbit-policy.mc"
 gchar *g_utf8_strchr(const  gchar *p,  gssize len,  gunichar c); 
#line 2597 "orbit-policy.mc"
 gchar *g_utf8_strrchr(const  gchar *p,  gssize len,  gunichar c); 
#line 2599 "orbit-policy.mc"
 gchar *g_utf8_strreverse(const  gchar *str,  gssize len); 
#line 2605 "orbit-policy.mc"
 gunichar2 *g_utf8_to_utf16(const  gchar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2610 "orbit-policy.mc"
 gunichar *g_utf8_to_ucs4(const  gchar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2613 "orbit-policy.mc"
 gunichar *g_utf8_to_ucs4_fast(const  gchar *str,  glong len,  glong *items_written) __attribute__  (( __malloc__ )) ; 
#line 2618 "orbit-policy.mc"
 gunichar *g_utf16_to_ucs4(const  gunichar2 *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2623 "orbit-policy.mc"
 gchar *g_utf16_to_utf8(const  gunichar2 *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2628 "orbit-policy.mc"
 gunichar2 *g_ucs4_to_utf16(const  gunichar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2633 "orbit-policy.mc"
 gchar *g_ucs4_to_utf8(const  gunichar *str,  glong len,  glong *items_read,  glong *items_written,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 2640 "orbit-policy.mc"
 gint g_unichar_to_utf8( gunichar c,  gchar *outbuf); 
#line 2648 "orbit-policy.mc"
 gboolean g_utf8_validate(const  gchar *str,  gssize max_len, const  gchar **end); 
#line 2651 "orbit-policy.mc"
 gboolean g_unichar_validate( gunichar ch); 
#line 2654 "orbit-policy.mc"
 gchar *g_utf8_strup(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 2656 "orbit-policy.mc"
 gchar *g_utf8_strdown(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 2658 "orbit-policy.mc"
 gchar *g_utf8_casefold(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 2669 "orbit-policy.mc"
typedef enum {G_NORMALIZE_DEFAULT,G_NORMALIZE_NFD=G_NORMALIZE_DEFAULT,G_NORMALIZE_DEFAULT_COMPOSE,G_NORMALIZE_NFC=G_NORMALIZE_DEFAULT_COMPOSE,G_NORMALIZE_ALL,G_NORMALIZE_NFKD=G_NORMALIZE_ALL,G_NORMALIZE_ALL_COMPOSE,G_NORMALIZE_NFKC=G_NORMALIZE_ALL_COMPOSE}GNormalizeMode; 
#line 2673 "orbit-policy.mc"
 gchar *g_utf8_normalize(const  gchar *str,  gssize len,  GNormalizeMode mode) __attribute__  (( __malloc__ )) ; 
#line 2676 "orbit-policy.mc"
 gint g_utf8_collate(const  gchar *str1, const  gchar *str2); 
#line 2678 "orbit-policy.mc"
 gchar *g_utf8_collate_key(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 2680 "orbit-policy.mc"
 gchar *g_utf8_collate_key_for_filename(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 2683 "orbit-policy.mc"
 gboolean g_unichar_get_mirror_char( gunichar ch,  gunichar *mirrored_ch); 
#line 2687 "orbit-policy.mc"
const  gchar *g_get_user_name(void ); 
#line 2688 "orbit-policy.mc"
const  gchar *g_get_real_name(void ); 
#line 2689 "orbit-policy.mc"
const  gchar *g_get_home_dir(void ); 
#line 2690 "orbit-policy.mc"
const  gchar *g_get_tmp_dir(void ); 
#line 2691 "orbit-policy.mc"
const  gchar *g_get_host_name(void ); 
#line 2692 "orbit-policy.mc"
 gchar *g_get_prgname(void ); 
#line 2693 "orbit-policy.mc"
void g_set_prgname(const  gchar *prgname); 
#line 2694 "orbit-policy.mc"
const  gchar *g_get_application_name(void ); 
#line 2695 "orbit-policy.mc"
void g_set_application_name(const  gchar *application_name); 
#line 2697 "orbit-policy.mc"
const  gchar *g_get_user_data_dir(void ); 
#line 2698 "orbit-policy.mc"
const  gchar *g_get_user_config_dir(void ); 
#line 2699 "orbit-policy.mc"
const  gchar *g_get_user_cache_dir(void ); 
#line 2700 "orbit-policy.mc"
const  gchar *const *g_get_system_data_dirs(void ); 
#line 2701 "orbit-policy.mc"
const  gchar *const *g_get_system_config_dirs(void ); 
#line 2703 "orbit-policy.mc"
const  gchar *const *g_get_language_names(void ); 
#line 2705 "orbit-policy.mc"
typedef struct _GDebugKey GDebugKey; 
#line 2710 "orbit-policy.mc"
struct _GDebugKey { gchar *key;  guint value; }; 
#line 2716 "orbit-policy.mc"
 guint g_parse_debug_string(const  gchar *string, const  GDebugKey *keys,  guint nkeys); 
#line 2721 "orbit-policy.mc"
 gint g_snprintf( gchar *string,  gulong n,  gchar const *format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 2725 "orbit-policy.mc"
 gint g_vsnprintf( gchar *string,  gulong n,  gchar const *format,  va_list args); 
#line 2728 "orbit-policy.mc"
 gboolean g_path_is_absolute(const  gchar *file_name); 
#line 2731 "orbit-policy.mc"
const  gchar *g_path_skip_root(const  gchar *file_name); 
#line 2732 "orbit-policy.mc"
 gchar *g_get_current_dir(void ); 
#line 2733 "orbit-policy.mc"
 gchar *g_path_get_basename(const  gchar *file_name) __attribute__  (( __malloc__ )) ; 
#line 2734 "orbit-policy.mc"
 gchar *g_path_get_dirname(const  gchar *file_name) __attribute__  (( __malloc__ )) ; 
#line 2737 "orbit-policy.mc"
void g_nullify_pointer( gpointer *nullify_location); 
#line 2738 "orbit-policy.mc"
const  gchar *g_getenv(const  gchar *variable); 
#line 2741 "orbit-policy.mc"
 gboolean g_setenv(const  gchar *variable, const  gchar *value,  gboolean overwrite); 
#line 2742 "orbit-policy.mc"
void g_unsetenv(const  gchar *variable); 
#line 2743 "orbit-policy.mc"
 gchar **g_listenv(void ); 
#line 2745 "orbit-policy.mc"
const  gchar *_g_getenv_nomalloc(const  gchar *variable,  gchar buffer[1024]); 
#line 2751 "orbit-policy.mc"
typedef void (*GVoidFunc)(void ); 
#line 2752 "orbit-policy.mc"
void g_atexit( GVoidFunc func); 
#line 2753 "orbit-policy.mc"
 gchar *g_find_program_in_path(const  gchar *program); 
#line 2758 "orbit-policy.mc"
extern inline  gint g_bit_nth_lsf( gulong mask,  gint nth_bit); 
#line 2760 "orbit-policy.mc"
extern inline  gint g_bit_nth_msf( gulong mask,  gint nth_bit); 
#line 2761 "orbit-policy.mc"
extern inline  guint g_bit_storage( gulong number); 
#line 2766 "orbit-policy.mc"
typedef struct _GTrashStack GTrashStack; 
#line 2770 "orbit-policy.mc"
struct _GTrashStack { GTrashStack *next; }; 
#line 2773 "orbit-policy.mc"
extern inline void g_trash_stack_push( GTrashStack **stack_p,  gpointer data_p); 
#line 2774 "orbit-policy.mc"
extern inline  gpointer g_trash_stack_pop( GTrashStack **stack_p); 
#line 2775 "orbit-policy.mc"
extern inline  gpointer g_trash_stack_peek( GTrashStack **stack_p); 
#line 2776 "orbit-policy.mc"
extern inline  guint g_trash_stack_height( GTrashStack **stack_p); 
#line 2783 "orbit-policy.mc"
extern inline  gint g_bit_nth_lsf( gulong mask,  gint nth_bit)  {

#line 2790 "orbit-policy.mc"
do { { 
#line 2786 "orbit-policy.mc"
nth_bit++; 
#line 2787 "orbit-policy.mc"
if (mask & (1UL << nth_bit)){
return nth_bit; }} } while(nth_bit < ((4 * 8) - 1)); 
#line 2791 "orbit-policy.mc"
return (-1); }
 
#line 2795 "orbit-policy.mc"
extern inline  gint g_bit_nth_msf( gulong mask,  gint nth_bit)  {

#line 2798 "orbit-policy.mc"
if (nth_bit < 0){
nth_bit = 4 * 8; }
#line 2798 "orbit-policy.mc"
do { { 
#line 2800 "orbit-policy.mc"
nth_bit--; 
#line 2801 "orbit-policy.mc"
if (mask & (1UL << nth_bit)){
return nth_bit; }} } while(nth_bit > 0); 
#line 2805 "orbit-policy.mc"
return (-1); }
 
#line 2808 "orbit-policy.mc"
extern inline  guint g_bit_storage( gulong number)  {

#line 2809 "orbit-policy.mc"

#line 2809 "orbit-policy.mc"
register  guint n_bits = 0;
#line 2811 "orbit-policy.mc"
do { { 
#line 2813 "orbit-policy.mc"
n_bits++; 
#line 2814 "orbit-policy.mc"
number >>= 1; } } while(number); 
#line 2817 "orbit-policy.mc"
return n_bits; }
 
#line 2822 "orbit-policy.mc"
extern inline void g_trash_stack_push( GTrashStack **stack_p,  gpointer data_p)  {

#line 2823 "orbit-policy.mc"

#line 2823 "orbit-policy.mc"
 GTrashStack *data = (( GTrashStack *)data_p);
#line 2825 "orbit-policy.mc"
(data->next) = (*stack_p); 
#line 2826 "orbit-policy.mc"
(*stack_p) = data; }
 
#line 2829 "orbit-policy.mc"
extern inline  gpointer g_trash_stack_pop( GTrashStack **stack_p)  {

#line 2830 "orbit-policy.mc"

#line 2830 "orbit-policy.mc"
 GTrashStack *data;
#line 2832 "orbit-policy.mc"
data = (*stack_p); 
#line 2833 "orbit-policy.mc"
if (data){
{ 
#line 2835 "orbit-policy.mc"
(*stack_p) = (data->next); 
#line 2839 "orbit-policy.mc"
(data->next) = (((void *)0)); } }
#line 2842 "orbit-policy.mc"
return data; }
 
#line 2845 "orbit-policy.mc"
extern inline  gpointer g_trash_stack_peek( GTrashStack **stack_p)  {

#line 2846 "orbit-policy.mc"

#line 2846 "orbit-policy.mc"
 GTrashStack *data;
#line 2848 "orbit-policy.mc"
data = (*stack_p); 
#line 2850 "orbit-policy.mc"
return data; }
 
#line 2853 "orbit-policy.mc"
extern inline  guint g_trash_stack_height( GTrashStack **stack_p)  {

#line 2854 "orbit-policy.mc"

#line 2854 "orbit-policy.mc"
 GTrashStack *data;
#line 2855 "orbit-policy.mc"

#line 2855 "orbit-policy.mc"
 guint i = 0;
#line 2857 "orbit-policy.mc"
for(data = (*stack_p);data;data = (data->next)) { i++; } 
#line 2860 "orbit-policy.mc"
return i; }
 
#line 2868 "orbit-policy.mc"
extern const  guint glib_major_version; 
#line 2869 "orbit-policy.mc"
extern const  guint glib_minor_version; 
#line 2870 "orbit-policy.mc"
extern const  guint glib_micro_version; 
#line 2871 "orbit-policy.mc"
extern const  guint glib_interface_age; 
#line 2872 "orbit-policy.mc"
extern const  guint glib_binary_age; 
#line 2876 "orbit-policy.mc"
const  gchar *glib_check_version( guint required_major,  guint required_minor,  guint required_micro); 
#line 2888 "orbit-policy.mc"
typedef struct _GString GString; 
#line 2889 "orbit-policy.mc"
typedef struct _GStringChunk GStringChunk; 
#line 2896 "orbit-policy.mc"
struct _GString { gchar *str;  gsize len;  gsize allocated_len; }; 
#line 2900 "orbit-policy.mc"
 GStringChunk *g_string_chunk_new( gsize size); 
#line 2901 "orbit-policy.mc"
void g_string_chunk_free( GStringChunk *chunk); 
#line 2903 "orbit-policy.mc"
 gchar *g_string_chunk_insert( GStringChunk *chunk, const  gchar *string); 
#line 2906 "orbit-policy.mc"
 gchar *g_string_chunk_insert_len( GStringChunk *chunk, const  gchar *string,  gssize len); 
#line 2908 "orbit-policy.mc"
 gchar *g_string_chunk_insert_const( GStringChunk *chunk, const  gchar *string); 
#line 2913 "orbit-policy.mc"
 GString *g_string_new(const  gchar *init); 
#line 2915 "orbit-policy.mc"
 GString *g_string_new_len(const  gchar *init,  gssize len); 
#line 2916 "orbit-policy.mc"
 GString *g_string_sized_new( gsize dfl_size); 
#line 2918 "orbit-policy.mc"
 gchar *g_string_free( GString *string,  gboolean free_segment); 
#line 2920 "orbit-policy.mc"
 gboolean g_string_equal(const  GString *v, const  GString *v2); 
#line 2921 "orbit-policy.mc"
 guint g_string_hash(const  GString *str); 
#line 2923 "orbit-policy.mc"
 GString *g_string_assign( GString *string, const  gchar *rval); 
#line 2925 "orbit-policy.mc"
 GString *g_string_truncate( GString *string,  gsize len); 
#line 2927 "orbit-policy.mc"
 GString *g_string_set_size( GString *string,  gsize len); 
#line 2931 "orbit-policy.mc"
 GString *g_string_insert_len( GString *string,  gssize pos, const  gchar *val,  gssize len); 
#line 2933 "orbit-policy.mc"
 GString *g_string_append( GString *string, const  gchar *val); 
#line 2936 "orbit-policy.mc"
 GString *g_string_append_len( GString *string, const  gchar *val,  gssize len); 
#line 2938 "orbit-policy.mc"
 GString *g_string_append_c( GString *string,  gchar c); 
#line 2940 "orbit-policy.mc"
 GString *g_string_append_unichar( GString *string,  gunichar wc); 
#line 2942 "orbit-policy.mc"
 GString *g_string_prepend( GString *string, const  gchar *val); 
#line 2944 "orbit-policy.mc"
 GString *g_string_prepend_c( GString *string,  gchar c); 
#line 2946 "orbit-policy.mc"
 GString *g_string_prepend_unichar( GString *string,  gunichar wc); 
#line 2949 "orbit-policy.mc"
 GString *g_string_prepend_len( GString *string, const  gchar *val,  gssize len); 
#line 2952 "orbit-policy.mc"
 GString *g_string_insert( GString *string,  gssize pos, const  gchar *val); 
#line 2955 "orbit-policy.mc"
 GString *g_string_insert_c( GString *string,  gssize pos,  gchar c); 
#line 2958 "orbit-policy.mc"
 GString *g_string_insert_unichar( GString *string,  gssize pos,  gunichar wc); 
#line 2961 "orbit-policy.mc"
 GString *g_string_erase( GString *string,  gssize pos,  gssize len); 
#line 2962 "orbit-policy.mc"
 GString *g_string_ascii_down( GString *string); 
#line 2963 "orbit-policy.mc"
 GString *g_string_ascii_up( GString *string); 
#line 2966 "orbit-policy.mc"
void g_string_printf( GString *string, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 2969 "orbit-policy.mc"
void g_string_append_printf( GString *string, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 2976 "orbit-policy.mc"
static inline  GString *g_string_append_c_inline( GString *gstring,  gchar c)  {

#line 2983 "orbit-policy.mc"
if ((gstring->len) + 1 < (gstring->allocated_len)){
{ 
#line 2979 "orbit-policy.mc"
(gstring->str)[(gstring->len)++] = c; 
#line 2980 "orbit-policy.mc"
(gstring->str)[(gstring->len)] = 0; } }else{
g_string_insert_c(gstring, (-1), c); }
#line 2984 "orbit-policy.mc"
return gstring; }
 
#line 2993 "orbit-policy.mc"
typedef struct _GIOChannel GIOChannel; 
#line 2994 "orbit-policy.mc"
typedef struct _GIOFuncs GIOFuncs; 
#line 3002 "orbit-policy.mc"
typedef enum {G_IO_ERROR_NONE,G_IO_ERROR_AGAIN,G_IO_ERROR_INVAL,G_IO_ERROR_UNKNOWN}GIOError; 
#line 3019 "orbit-policy.mc"
typedef enum {G_IO_CHANNEL_ERROR_FBIG,G_IO_CHANNEL_ERROR_INVAL,G_IO_CHANNEL_ERROR_IO,G_IO_CHANNEL_ERROR_ISDIR,G_IO_CHANNEL_ERROR_NOSPC,G_IO_CHANNEL_ERROR_NXIO,G_IO_CHANNEL_ERROR_OVERFLOW,G_IO_CHANNEL_ERROR_PIPE,G_IO_CHANNEL_ERROR_FAILED}GIOChannelError; 
#line 3027 "orbit-policy.mc"
typedef enum {G_IO_STATUS_ERROR,G_IO_STATUS_NORMAL,G_IO_STATUS_EOF,G_IO_STATUS_AGAIN}GIOStatus; 
#line 3034 "orbit-policy.mc"
typedef enum {G_SEEK_CUR,G_SEEK_SET,G_SEEK_END}GSeekType; 
#line 3044 "orbit-policy.mc"
typedef enum {G_IO_IN=1,G_IO_OUT=4,G_IO_PRI=2,G_IO_ERR=8,G_IO_HUP=16,G_IO_NVAL=32}GIOCondition; 
#line 3056 "orbit-policy.mc"
typedef enum {G_IO_FLAG_APPEND=1 << 0,G_IO_FLAG_NONBLOCK=1 << 1,G_IO_FLAG_IS_READABLE=1 << 2,G_IO_FLAG_IS_WRITEABLE=1 << 3,G_IO_FLAG_IS_SEEKABLE=1 << 4,G_IO_FLAG_MASK=(1 << 5) - 1,G_IO_FLAG_GET_MASK=G_IO_FLAG_MASK,G_IO_FLAG_SET_MASK=G_IO_FLAG_APPEND | G_IO_FLAG_NONBLOCK}GIOFlags; 
#line 3087 "orbit-policy.mc"
struct _GIOChannel { guint ref_count;  GIOFuncs *funcs;  gchar *encoding;  GIConv read_cd;  GIConv write_cd;  gchar *line_term;  guint line_term_len;  gsize buf_size;  GString *read_buf;  GString *encoded_read_buf;  GString *write_buf;  gchar partial_write_buf[6];  guint use_buffer:1;  guint do_encode:1;  guint close_on_unref:1;  guint is_readable:1;  guint is_writeable:1;  guint is_seekable:1;  gpointer reserved1;  gpointer reserved2; }; 
#line 3091 "orbit-policy.mc"
typedef  gboolean (*GIOFunc)( GIOChannel *source,  GIOCondition condition,  gpointer data); 
#line 3117 "orbit-policy.mc"
struct _GIOFuncs { GIOStatus (*io_read)( GIOChannel *channel,  gchar *buf,  gsize count,  gsize *bytes_read,  GError **err);  GIOStatus (*io_write)( GIOChannel *channel, const  gchar *buf,  gsize count,  gsize *bytes_written,  GError **err);  GIOStatus (*io_seek)( GIOChannel *channel,  gint64 offset,  GSeekType type,  GError **err);  GIOStatus (*io_close)( GIOChannel *channel,  GError **err);  GSource *(*io_create_watch)( GIOChannel *channel,  GIOCondition condition); void (*io_free)( GIOChannel *channel);  GIOStatus (*io_set_flags)( GIOChannel *channel,  GIOFlags flags,  GError **err);  GIOFlags (*io_get_flags)( GIOChannel *channel); }; 
#line 3119 "orbit-policy.mc"
void g_io_channel_init( GIOChannel *channel); 
#line 3120 "orbit-policy.mc"
 GIOChannel *g_io_channel_ref( GIOChannel *channel); 
#line 3121 "orbit-policy.mc"
void g_io_channel_unref( GIOChannel *channel); 
#line 3124 "orbit-policy.mc"
 GIOStatus g_io_channel_shutdown( GIOChannel *channel,  gboolean flush,  GError **err); 
#line 3130 "orbit-policy.mc"
 guint g_io_add_watch_full( GIOChannel *channel,  gint priority,  GIOCondition condition,  GIOFunc func,  gpointer user_data,  GDestroyNotify notify); 
#line 3132 "orbit-policy.mc"
 GSource *g_io_create_watch( GIOChannel *channel,  GIOCondition condition); 
#line 3136 "orbit-policy.mc"
 guint g_io_add_watch( GIOChannel *channel,  GIOCondition condition,  GIOFunc func,  gpointer user_data); 
#line 3142 "orbit-policy.mc"
void g_io_channel_set_buffer_size( GIOChannel *channel,  gsize size); 
#line 3143 "orbit-policy.mc"
 gsize g_io_channel_get_buffer_size( GIOChannel *channel); 
#line 3144 "orbit-policy.mc"
 GIOCondition g_io_channel_get_buffer_condition( GIOChannel *channel); 
#line 3147 "orbit-policy.mc"
 GIOStatus g_io_channel_set_flags( GIOChannel *channel,  GIOFlags flags,  GError **error); 
#line 3148 "orbit-policy.mc"
 GIOFlags g_io_channel_get_flags( GIOChannel *channel); 
#line 3151 "orbit-policy.mc"
void g_io_channel_set_line_term( GIOChannel *channel, const  gchar *line_term,  gint length); 
#line 3153 "orbit-policy.mc"
const  gchar *g_io_channel_get_line_term( GIOChannel *channel,  gint *length); 
#line 3155 "orbit-policy.mc"
void g_io_channel_set_buffered( GIOChannel *channel,  gboolean buffered); 
#line 3156 "orbit-policy.mc"
 gboolean g_io_channel_get_buffered( GIOChannel *channel); 
#line 3159 "orbit-policy.mc"
 GIOStatus g_io_channel_set_encoding( GIOChannel *channel, const  gchar *encoding,  GError **error); 
#line 3160 "orbit-policy.mc"
const  gchar *g_io_channel_get_encoding( GIOChannel *channel); 
#line 3162 "orbit-policy.mc"
void g_io_channel_set_close_on_unref( GIOChannel *channel,  gboolean do_close); 
#line 3163 "orbit-policy.mc"
 gboolean g_io_channel_get_close_on_unref( GIOChannel *channel); 
#line 3167 "orbit-policy.mc"
 GIOStatus g_io_channel_flush( GIOChannel *channel,  GError **error); 
#line 3172 "orbit-policy.mc"
 GIOStatus g_io_channel_read_line( GIOChannel *channel,  gchar **str_return,  gsize *length,  gsize *terminator_pos,  GError **error); 
#line 3176 "orbit-policy.mc"
 GIOStatus g_io_channel_read_line_string( GIOChannel *channel,  GString *buffer,  gsize *terminator_pos,  GError **error); 
#line 3180 "orbit-policy.mc"
 GIOStatus g_io_channel_read_to_end( GIOChannel *channel,  gchar **str_return,  gsize *length,  GError **error); 
#line 3185 "orbit-policy.mc"
 GIOStatus g_io_channel_read_chars( GIOChannel *channel,  gchar *buf,  gsize count,  gsize *bytes_read,  GError **error); 
#line 3188 "orbit-policy.mc"
 GIOStatus g_io_channel_read_unichar( GIOChannel *channel,  gunichar *thechar,  GError **error); 
#line 3193 "orbit-policy.mc"
 GIOStatus g_io_channel_write_chars( GIOChannel *channel, const  gchar *buf,  gssize count,  gsize *bytes_written,  GError **error); 
#line 3196 "orbit-policy.mc"
 GIOStatus g_io_channel_write_unichar( GIOChannel *channel,  gunichar thechar,  GError **error); 
#line 3200 "orbit-policy.mc"
 GIOStatus g_io_channel_seek_position( GIOChannel *channel,  gint64 offset,  GSeekType type,  GError **error); 
#line 3207 "orbit-policy.mc"
 GIOChannel *g_io_channel_new_file(const  gchar *filename, const  gchar *mode,  GError **error); 
#line 3211 "orbit-policy.mc"
 GQuark g_io_channel_error_quark(void ); 
#line 3212 "orbit-policy.mc"
 GIOChannelError g_io_channel_error_from_errno( gint en); 
#line 3213 "orbit-policy.mc"
 GIOChannel *g_io_channel_unix_new(int fd); 
#line 3214 "orbit-policy.mc"
 gint g_io_channel_unix_get_fd( GIOChannel *channel); 
#line 3218 "orbit-policy.mc"
extern  GSourceFuncs g_io_watch_funcs; 
#line 3230 "orbit-policy.mc"
typedef enum {G_KEY_FILE_ERROR_UNKNOWN_ENCODING,G_KEY_FILE_ERROR_PARSE,G_KEY_FILE_ERROR_NOT_FOUND,G_KEY_FILE_ERROR_KEY_NOT_FOUND,G_KEY_FILE_ERROR_GROUP_NOT_FOUND,G_KEY_FILE_ERROR_INVALID_VALUE}GKeyFileError; 
#line 3234 "orbit-policy.mc"
 GQuark g_key_file_error_quark(void ); 
#line 3236 "orbit-policy.mc"
typedef struct _GKeyFile GKeyFile; 
#line 3243 "orbit-policy.mc"
typedef enum {G_KEY_FILE_NONE=0,G_KEY_FILE_KEEP_COMMENTS=1 << 0,G_KEY_FILE_KEEP_TRANSLATIONS=1 << 1}GKeyFileFlags; 
#line 3245 "orbit-policy.mc"
 GKeyFile *g_key_file_new(void ); 
#line 3246 "orbit-policy.mc"
void g_key_file_free( GKeyFile *key_file); 
#line 3248 "orbit-policy.mc"
void g_key_file_set_list_separator( GKeyFile *key_file,  gchar separator); 
#line 3252 "orbit-policy.mc"
 gboolean g_key_file_load_from_file( GKeyFile *key_file, const  gchar *file,  GKeyFileFlags flags,  GError **error); 
#line 3257 "orbit-policy.mc"
 gboolean g_key_file_load_from_data( GKeyFile *key_file, const  gchar *data,  gsize length,  GKeyFileFlags flags,  GError **error); 
#line 3262 "orbit-policy.mc"
 gboolean g_key_file_load_from_data_dirs( GKeyFile *key_file, const  gchar *file,  gchar **full_path,  GKeyFileFlags flags,  GError **error); 
#line 3265 "orbit-policy.mc"
 gchar *g_key_file_to_data( GKeyFile *key_file,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3266 "orbit-policy.mc"
 gchar *g_key_file_get_start_group( GKeyFile *key_file) __attribute__  (( __malloc__ )) ; 
#line 3268 "orbit-policy.mc"
 gchar **g_key_file_get_groups( GKeyFile *key_file,  gsize *length) __attribute__  (( __malloc__ )) ; 
#line 3272 "orbit-policy.mc"
 gchar **g_key_file_get_keys( GKeyFile *key_file, const  gchar *group_name,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3274 "orbit-policy.mc"
 gboolean g_key_file_has_group( GKeyFile *key_file, const  gchar *group_name); 
#line 3278 "orbit-policy.mc"
 gboolean g_key_file_has_key( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 3282 "orbit-policy.mc"
 gchar *g_key_file_get_value( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3286 "orbit-policy.mc"
void g_key_file_set_value( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *value); 
#line 3290 "orbit-policy.mc"
 gchar *g_key_file_get_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3294 "orbit-policy.mc"
void g_key_file_set_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *string); 
#line 3299 "orbit-policy.mc"
 gchar *g_key_file_get_locale_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3304 "orbit-policy.mc"
void g_key_file_set_locale_string( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale, const  gchar *string); 
#line 3308 "orbit-policy.mc"
 gboolean g_key_file_get_boolean( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 3312 "orbit-policy.mc"
void g_key_file_set_boolean( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gboolean value); 
#line 3316 "orbit-policy.mc"
 gint g_key_file_get_integer( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 3320 "orbit-policy.mc"
void g_key_file_set_integer( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gint value); 
#line 3325 "orbit-policy.mc"
 gchar **g_key_file_get_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3330 "orbit-policy.mc"
void g_key_file_set_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *const list[],  gsize length); 
#line 3336 "orbit-policy.mc"
 gchar **g_key_file_get_locale_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3342 "orbit-policy.mc"
void g_key_file_set_locale_string_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *locale, const  gchar *const list[],  gsize length); 
#line 3347 "orbit-policy.mc"
 gboolean *g_key_file_get_boolean_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3352 "orbit-policy.mc"
void g_key_file_set_boolean_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gboolean list[],  gsize length); 
#line 3357 "orbit-policy.mc"
 gint *g_key_file_get_integer_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gsize *length,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3362 "orbit-policy.mc"
void g_key_file_set_integer_list( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  gint list[],  gsize length); 
#line 3367 "orbit-policy.mc"
void g_key_file_set_comment( GKeyFile *key_file, const  gchar *group_name, const  gchar *key, const  gchar *comment,  GError **error); 
#line 3371 "orbit-policy.mc"
 gchar *g_key_file_get_comment( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3376 "orbit-policy.mc"
void g_key_file_remove_comment( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 3380 "orbit-policy.mc"
void g_key_file_remove_key( GKeyFile *key_file, const  gchar *group_name, const  gchar *key,  GError **error); 
#line 3383 "orbit-policy.mc"
void g_key_file_remove_group( GKeyFile *key_file, const  gchar *group_name,  GError **error); 
#line 3391 "orbit-policy.mc"
typedef struct _GMappedFile GMappedFile; 
#line 3395 "orbit-policy.mc"
 GMappedFile *g_mapped_file_new(const  gchar *filename,  gboolean writable,  GError **error) __attribute__  (( __malloc__ )) ; 
#line 3396 "orbit-policy.mc"
 gsize g_mapped_file_get_length( GMappedFile *file); 
#line 3397 "orbit-policy.mc"
 gchar *g_mapped_file_get_contents( GMappedFile *file); 
#line 3398 "orbit-policy.mc"
void g_mapped_file_free( GMappedFile *file); 
#line 3414 "orbit-policy.mc"
typedef enum {G_MARKUP_ERROR_BAD_UTF8,G_MARKUP_ERROR_EMPTY,G_MARKUP_ERROR_PARSE,G_MARKUP_ERROR_UNKNOWN_ELEMENT,G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,G_MARKUP_ERROR_INVALID_CONTENT}GMarkupError; 
#line 3418 "orbit-policy.mc"
 GQuark g_markup_error_quark(void ); 
#line 3425 "orbit-policy.mc"
typedef enum {G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG=1 << 0}GMarkupParseFlags; 
#line 3427 "orbit-policy.mc"
typedef struct _GMarkupParseContext GMarkupParseContext; 
#line 3428 "orbit-policy.mc"
typedef struct _GMarkupParser GMarkupParser; 
#line 3471 "orbit-policy.mc"
struct _GMarkupParser {void (*start_element)( GMarkupParseContext *context, const  gchar *element_name, const  gchar **attribute_names, const  gchar **attribute_values,  gpointer user_data,  GError **error); void (*end_element)( GMarkupParseContext *context, const  gchar *element_name,  gpointer user_data,  GError **error); void (*text)( GMarkupParseContext *context, const  gchar *text,  gsize text_len,  gpointer user_data,  GError **error); void (*passthrough)( GMarkupParseContext *context, const  gchar *passthrough_text,  gsize text_len,  gpointer user_data,  GError **error); void (*error)( GMarkupParseContext *context,  GError *error,  gpointer user_data); }; 
#line 3476 "orbit-policy.mc"
 GMarkupParseContext *g_markup_parse_context_new(const  GMarkupParser *parser,  GMarkupParseFlags flags,  gpointer user_data,  GDestroyNotify user_data_dnotify); 
#line 3477 "orbit-policy.mc"
void g_markup_parse_context_free( GMarkupParseContext *context); 
#line 3481 "orbit-policy.mc"
 gboolean g_markup_parse_context_parse( GMarkupParseContext *context, const  gchar *text,  gssize text_len,  GError **error); 
#line 3484 "orbit-policy.mc"
 gboolean g_markup_parse_context_end_parse( GMarkupParseContext *context,  GError **error); 
#line 3485 "orbit-policy.mc"
const  gchar *g_markup_parse_context_get_element( GMarkupParseContext *context); 
#line 3490 "orbit-policy.mc"
void g_markup_parse_context_get_position( GMarkupParseContext *context,  gint *line_number,  gint *char_number); 
#line 3494 "orbit-policy.mc"
 gchar *g_markup_escape_text(const  gchar *text,  gssize length); 
#line 3497 "orbit-policy.mc"
 gchar *g_markup_printf_escaped(const char *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 3499 "orbit-policy.mc"
 gchar *g_markup_vprintf_escaped(const char *format,  va_list args); 
#line 3511 "orbit-policy.mc"
 gsize g_printf_string_upper_bound(const  gchar *format,  va_list args); 
#line 3527 "orbit-policy.mc"
typedef enum {G_LOG_FLAG_RECURSION=1 << 0,G_LOG_FLAG_FATAL=1 << 1,G_LOG_LEVEL_ERROR=1 << 2,G_LOG_LEVEL_CRITICAL=1 << 3,G_LOG_LEVEL_WARNING=1 << 4,G_LOG_LEVEL_MESSAGE=1 << 5,G_LOG_LEVEL_INFO=1 << 6,G_LOG_LEVEL_DEBUG=1 << 7,G_LOG_LEVEL_MASK=(~(G_LOG_FLAG_RECURSION | G_LOG_FLAG_FATAL))}GLogLevelFlags; 
#line 3535 "orbit-policy.mc"
typedef void (*GLogFunc)(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *message,  gpointer user_data); 
#line 3542 "orbit-policy.mc"
 guint g_log_set_handler(const  gchar *log_domain,  GLogLevelFlags log_levels,  GLogFunc log_func,  gpointer user_data); 
#line 3544 "orbit-policy.mc"
void g_log_remove_handler(const  gchar *log_domain,  guint handler_id); 
#line 3548 "orbit-policy.mc"
void g_log_default_handler(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *message,  gpointer unused_data); 
#line 3550 "orbit-policy.mc"
 GLogFunc g_log_set_default_handler( GLogFunc log_func,  gpointer user_data); 
#line 3554 "orbit-policy.mc"
void g_log(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 3558 "orbit-policy.mc"
void g_logv(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *format,  va_list args); 
#line 3560 "orbit-policy.mc"
 GLogLevelFlags g_log_set_fatal_mask(const  gchar *log_domain,  GLogLevelFlags fatal_mask); 
#line 3561 "orbit-policy.mc"
 GLogLevelFlags g_log_set_always_fatal( GLogLevelFlags fatal_mask); 
#line 3567 "orbit-policy.mc"
void _g_log_fallback_handler(const  gchar *log_domain,  GLogLevelFlags log_level, const  gchar *message,  gpointer unused_data) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 3572 "orbit-policy.mc"
void g_return_if_fail_warning(const char *log_domain, const char *pretty_function, const char *expression); 
#line 3577 "orbit-policy.mc"
void g_assert_warning(const char *log_domain, const char *file, const int line, const char *pretty_function, const char *expression) __attribute__  (( __noreturn__ )) ; 
#line 3578 "orbit-policy.mc"
typedef void (*GPrintFunc)(const  gchar *string); 
#line 3580 "orbit-policy.mc"
void g_print(const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 3581 "orbit-policy.mc"
 GPrintFunc g_set_print_handler( GPrintFunc func); 
#line 3583 "orbit-policy.mc"
void g_printerr(const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  )) ; 
#line 3584 "orbit-policy.mc"
 GPrintFunc g_set_printerr_handler( GPrintFunc func); 
#line 3588 "orbit-policy.mc"
typedef struct _GNode GNode; 
#line 3599 "orbit-policy.mc"
typedef enum {G_TRAVERSE_LEAVES=1 << 0,G_TRAVERSE_NON_LEAVES=1 << 1,G_TRAVERSE_ALL=G_TRAVERSE_LEAVES | G_TRAVERSE_NON_LEAVES,G_TRAVERSE_MASK=0x03,G_TRAVERSE_LEAFS=G_TRAVERSE_LEAVES,G_TRAVERSE_NON_LEAFS=G_TRAVERSE_NON_LEAVES}GTraverseFlags; 
#line 3608 "orbit-policy.mc"
typedef enum {G_IN_ORDER,G_PRE_ORDER,G_POST_ORDER,G_LEVEL_ORDER}GTraverseType; 
#line 3611 "orbit-policy.mc"
typedef  gboolean (*GNodeTraverseFunc)( GNode *node,  gpointer data); 
#line 3613 "orbit-policy.mc"
typedef void (*GNodeForeachFunc)( GNode *node,  gpointer data); 
#line 3615 "orbit-policy.mc"
typedef  gpointer (*GCopyFunc)( gconstpointer src,  gpointer data); 
#line 3626 "orbit-policy.mc"
struct _GNode { gpointer data;  GNode *next;  GNode *prev;  GNode *parent;  GNode *children; }; 
#line 3633 "orbit-policy.mc"
 GNode *g_node_new( gpointer data); 
#line 3634 "orbit-policy.mc"
void g_node_destroy( GNode *root); 
#line 3635 "orbit-policy.mc"
void g_node_unlink( GNode *node); 
#line 3638 "orbit-policy.mc"
 GNode *g_node_copy_deep( GNode *node,  GCopyFunc copy_func,  gpointer data); 
#line 3639 "orbit-policy.mc"
 GNode *g_node_copy( GNode *node); 
#line 3642 "orbit-policy.mc"
 GNode *g_node_insert( GNode *parent,  gint position,  GNode *node); 
#line 3645 "orbit-policy.mc"
 GNode *g_node_insert_before( GNode *parent,  GNode *sibling,  GNode *node); 
#line 3648 "orbit-policy.mc"
 GNode *g_node_insert_after( GNode *parent,  GNode *sibling,  GNode *node); 
#line 3650 "orbit-policy.mc"
 GNode *g_node_prepend( GNode *parent,  GNode *node); 
#line 3652 "orbit-policy.mc"
 guint g_node_n_nodes( GNode *root,  GTraverseFlags flags); 
#line 3653 "orbit-policy.mc"
 GNode *g_node_get_root( GNode *node); 
#line 3655 "orbit-policy.mc"
 gboolean g_node_is_ancestor( GNode *node,  GNode *descendant); 
#line 3656 "orbit-policy.mc"
 guint g_node_depth( GNode *node); 
#line 3660 "orbit-policy.mc"
 GNode *g_node_find( GNode *root,  GTraverseType order,  GTraverseFlags flags,  gpointer data); 
#line 3666 "orbit-policy.mc"
void g_node_traverse( GNode *root,  GTraverseType order,  GTraverseFlags flags,  gint max_depth,  GNodeTraverseFunc func,  gpointer data); 
#line 3673 "orbit-policy.mc"
 guint g_node_max_height( GNode *root); 
#line 3678 "orbit-policy.mc"
void g_node_children_foreach( GNode *node,  GTraverseFlags flags,  GNodeForeachFunc func,  gpointer data); 
#line 3679 "orbit-policy.mc"
void g_node_reverse_children( GNode *node); 
#line 3680 "orbit-policy.mc"
 guint g_node_n_children( GNode *node); 
#line 3682 "orbit-policy.mc"
 GNode *g_node_nth_child( GNode *node,  guint n); 
#line 3683 "orbit-policy.mc"
 GNode *g_node_last_child( GNode *node); 
#line 3686 "orbit-policy.mc"
 GNode *g_node_find_child( GNode *node,  GTraverseFlags flags,  gpointer data); 
#line 3688 "orbit-policy.mc"
 gint g_node_child_position( GNode *node,  GNode *child); 
#line 3690 "orbit-policy.mc"
 gint g_node_child_index( GNode *node,  gpointer data); 
#line 3692 "orbit-policy.mc"
 GNode *g_node_first_sibling( GNode *node); 
#line 3693 "orbit-policy.mc"
 GNode *g_node_last_sibling( GNode *node); 
#line 3697 "orbit-policy.mc"
typedef struct _GOptionContext GOptionContext; 
#line 3698 "orbit-policy.mc"
typedef struct _GOptionGroup GOptionGroup; 
#line 3699 "orbit-policy.mc"
typedef struct _GOptionEntry GOptionEntry; 
#line 3710 "orbit-policy.mc"
typedef enum {G_OPTION_FLAG_HIDDEN=1 << 0,G_OPTION_FLAG_IN_MAIN=1 << 1,G_OPTION_FLAG_REVERSE=1 << 2,G_OPTION_FLAG_NO_ARG=1 << 3,G_OPTION_FLAG_FILENAME=1 << 4,G_OPTION_FLAG_OPTIONAL_ARG=1 << 5,G_OPTION_FLAG_NOALIAS=1 << 6}GOptionFlags; 
#line 3721 "orbit-policy.mc"
typedef enum {G_OPTION_ARG_NONE,G_OPTION_ARG_STRING,G_OPTION_ARG_INT,G_OPTION_ARG_CALLBACK,G_OPTION_ARG_FILENAME,G_OPTION_ARG_STRING_ARRAY,G_OPTION_ARG_FILENAME_ARRAY}GOptionArg; 
#line 3726 "orbit-policy.mc"
typedef  gboolean (*GOptionArgFunc)(const  gchar *option_name, const  gchar *value,  gpointer data,  GError **error); 
#line 3731 "orbit-policy.mc"
typedef  gboolean (*GOptionParseFunc)( GOptionContext *context,  GOptionGroup *group,  gpointer data,  GError **error); 
#line 3736 "orbit-policy.mc"
typedef void (*GOptionErrorFunc)( GOptionContext *context,  GOptionGroup *group,  gpointer data,  GError **error); 
#line 3745 "orbit-policy.mc"
typedef enum {G_OPTION_ERROR_UNKNOWN_OPTION,G_OPTION_ERROR_BAD_VALUE,G_OPTION_ERROR_FAILED}GOptionError; 
#line 3747 "orbit-policy.mc"
 GQuark g_option_error_quark(void ); 
#line 3761 "orbit-policy.mc"
struct _GOptionEntry {const  gchar *long_name;  gchar short_name;  gint flags;  GOptionArg arg;  gpointer arg_data; const  gchar *description; const  gchar *arg_description; }; 
#line 3765 "orbit-policy.mc"
 GOptionContext *g_option_context_new(const  gchar *parameter_string); 
#line 3766 "orbit-policy.mc"
void g_option_context_free( GOptionContext *context); 
#line 3768 "orbit-policy.mc"
void g_option_context_set_help_enabled( GOptionContext *context,  gboolean help_enabled); 
#line 3769 "orbit-policy.mc"
 gboolean g_option_context_get_help_enabled( GOptionContext *context); 
#line 3771 "orbit-policy.mc"
void g_option_context_set_ignore_unknown_options( GOptionContext *context,  gboolean ignore_unknown); 
#line 3772 "orbit-policy.mc"
 gboolean g_option_context_get_ignore_unknown_options( GOptionContext *context); 
#line 3776 "orbit-policy.mc"
void g_option_context_add_main_entries( GOptionContext *context, const  GOptionEntry *entries, const  gchar *translation_domain); 
#line 3780 "orbit-policy.mc"
 gboolean g_option_context_parse( GOptionContext *context,  gint *argc,  gchar ***argv,  GError **error); 
#line 3783 "orbit-policy.mc"
void g_option_context_add_group( GOptionContext *context,  GOptionGroup *group); 
#line 3785 "orbit-policy.mc"
void g_option_context_set_main_group( GOptionContext *context,  GOptionGroup *group); 
#line 3786 "orbit-policy.mc"
 GOptionGroup *g_option_context_get_main_group( GOptionContext *context); 
#line 3793 "orbit-policy.mc"
 GOptionGroup *g_option_group_new(const  gchar *name, const  gchar *description, const  gchar *help_description,  gpointer user_data,  GDestroyNotify destroy); 
#line 3796 "orbit-policy.mc"
void g_option_group_set_parse_hooks( GOptionGroup *group,  GOptionParseFunc pre_parse_func,  GOptionParseFunc post_parse_func); 
#line 3798 "orbit-policy.mc"
void g_option_group_set_error_hook( GOptionGroup *group,  GOptionErrorFunc error_func); 
#line 3799 "orbit-policy.mc"
void g_option_group_free( GOptionGroup *group); 
#line 3801 "orbit-policy.mc"
void g_option_group_add_entries( GOptionGroup *group, const  GOptionEntry *entries); 
#line 3805 "orbit-policy.mc"
void g_option_group_set_translate_func( GOptionGroup *group,  GTranslateFunc func,  gpointer data,  GDestroyNotify destroy_notify); 
#line 3807 "orbit-policy.mc"
void g_option_group_set_translation_domain( GOptionGroup *group, const  gchar *domain); 
#line 3814 "orbit-policy.mc"
typedef struct _GPatternSpec GPatternSpec; 
#line 3816 "orbit-policy.mc"
 GPatternSpec *g_pattern_spec_new(const  gchar *pattern); 
#line 3817 "orbit-policy.mc"
void g_pattern_spec_free( GPatternSpec *pspec); 
#line 3819 "orbit-policy.mc"
 gboolean g_pattern_spec_equal( GPatternSpec *pspec1,  GPatternSpec *pspec2); 
#line 3823 "orbit-policy.mc"
 gboolean g_pattern_match( GPatternSpec *pspec,  guint string_length, const  gchar *string, const  gchar *string_reversed); 
#line 3825 "orbit-policy.mc"
 gboolean g_pattern_match_string( GPatternSpec *pspec, const  gchar *string); 
#line 3827 "orbit-policy.mc"
 gboolean g_pattern_match_simple(const  gchar *pattern, const  gchar *string); 
#line 3831 "orbit-policy.mc"
 guint g_spaced_primes_closest( guint num) __attribute__  (( __const__ )) ; 
#line 3840 "orbit-policy.mc"
void g_qsort_with_data( gconstpointer pbase,  gint total_elems,  gsize size,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 3846 "orbit-policy.mc"
typedef struct _GQueue GQueue; 
#line 3853 "orbit-policy.mc"
struct _GQueue { GList *head;  GList *tail;  guint length; }; 
#line 3857 "orbit-policy.mc"
 GQueue *g_queue_new(void ); 
#line 3858 "orbit-policy.mc"
void g_queue_free( GQueue *queue); 
#line 3859 "orbit-policy.mc"
 gboolean g_queue_is_empty( GQueue *queue); 
#line 3860 "orbit-policy.mc"
 guint g_queue_get_length( GQueue *queue); 
#line 3861 "orbit-policy.mc"
void g_queue_reverse( GQueue *queue); 
#line 3862 "orbit-policy.mc"
 GQueue *g_queue_copy( GQueue *queue); 
#line 3865 "orbit-policy.mc"
void g_queue_foreach( GQueue *queue,  GFunc func,  gpointer user_data); 
#line 3867 "orbit-policy.mc"
 GList *g_queue_find( GQueue *queue,  gconstpointer data); 
#line 3870 "orbit-policy.mc"
 GList *g_queue_find_custom( GQueue *queue,  gconstpointer data,  GCompareFunc func); 
#line 3873 "orbit-policy.mc"
void g_queue_sort( GQueue *queue,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 3876 "orbit-policy.mc"
void g_queue_push_head( GQueue *queue,  gpointer data); 
#line 3878 "orbit-policy.mc"
void g_queue_push_tail( GQueue *queue,  gpointer data); 
#line 3881 "orbit-policy.mc"
void g_queue_push_nth( GQueue *queue,  gpointer data,  gint n); 
#line 3882 "orbit-policy.mc"
 gpointer g_queue_pop_head( GQueue *queue); 
#line 3883 "orbit-policy.mc"
 gpointer g_queue_pop_tail( GQueue *queue); 
#line 3885 "orbit-policy.mc"
 gpointer g_queue_pop_nth( GQueue *queue,  guint n); 
#line 3886 "orbit-policy.mc"
 gpointer g_queue_peek_head( GQueue *queue); 
#line 3887 "orbit-policy.mc"
 gpointer g_queue_peek_tail( GQueue *queue); 
#line 3889 "orbit-policy.mc"
 gpointer g_queue_peek_nth( GQueue *queue,  guint n); 
#line 3891 "orbit-policy.mc"
 gint g_queue_index( GQueue *queue,  gconstpointer data); 
#line 3893 "orbit-policy.mc"
void g_queue_remove( GQueue *queue,  gconstpointer data); 
#line 3895 "orbit-policy.mc"
void g_queue_remove_all( GQueue *queue,  gconstpointer data); 
#line 3898 "orbit-policy.mc"
void g_queue_insert_before( GQueue *queue,  GList *sibling,  gpointer data); 
#line 3901 "orbit-policy.mc"
void g_queue_insert_after( GQueue *queue,  GList *sibling,  gpointer data); 
#line 3905 "orbit-policy.mc"
void g_queue_insert_sorted( GQueue *queue,  gpointer data,  GCompareDataFunc func,  gpointer user_data); 
#line 3908 "orbit-policy.mc"
void g_queue_push_head_link( GQueue *queue,  GList *link_); 
#line 3910 "orbit-policy.mc"
void g_queue_push_tail_link( GQueue *queue,  GList *link_); 
#line 3913 "orbit-policy.mc"
void g_queue_push_nth_link( GQueue *queue,  gint n,  GList *link_); 
#line 3914 "orbit-policy.mc"
 GList *g_queue_pop_head_link( GQueue *queue); 
#line 3915 "orbit-policy.mc"
 GList *g_queue_pop_tail_link( GQueue *queue); 
#line 3917 "orbit-policy.mc"
 GList *g_queue_pop_nth_link( GQueue *queue,  guint n); 
#line 3918 "orbit-policy.mc"
 GList *g_queue_peek_head_link( GQueue *queue); 
#line 3919 "orbit-policy.mc"
 GList *g_queue_peek_tail_link( GQueue *queue); 
#line 3921 "orbit-policy.mc"
 GList *g_queue_peek_nth_link( GQueue *queue,  guint n); 
#line 3923 "orbit-policy.mc"
 gint g_queue_link_index( GQueue *queue,  GList *link_); 
#line 3925 "orbit-policy.mc"
void g_queue_unlink( GQueue *queue,  GList *link_); 
#line 3927 "orbit-policy.mc"
void g_queue_delete_link( GQueue *queue,  GList *link_); 
#line 3932 "orbit-policy.mc"
typedef struct _GRand GRand; 
#line 3933 "orbit-policy.mc"
 GRand *g_rand_new_with_seed( guint32 seed); 
#line 3935 "orbit-policy.mc"
 GRand *g_rand_new_with_seed_array(const  guint32 *seed,  guint seed_length); 
#line 3936 "orbit-policy.mc"
 GRand *g_rand_new(void ); 
#line 3937 "orbit-policy.mc"
void g_rand_free( GRand *rand_); 
#line 3938 "orbit-policy.mc"
 GRand *g_rand_copy( GRand *rand_); 
#line 3940 "orbit-policy.mc"
void g_rand_set_seed( GRand *rand_,  guint32 seed); 
#line 3943 "orbit-policy.mc"
void g_rand_set_seed_array( GRand *rand_, const  guint32 *seed,  guint seed_length); 
#line 3947 "orbit-policy.mc"
 guint32 g_rand_int( GRand *rand_); 
#line 3950 "orbit-policy.mc"
 gint32 g_rand_int_range( GRand *rand_,  gint32 begin,  gint32 end); 
#line 3951 "orbit-policy.mc"
 gdouble g_rand_double( GRand *rand_); 
#line 3954 "orbit-policy.mc"
 gdouble g_rand_double_range( GRand *rand_,  gdouble begin,  gdouble end); 
#line 3955 "orbit-policy.mc"
void g_random_set_seed( guint32 seed); 
#line 3959 "orbit-policy.mc"
 guint32 g_random_int(void ); 
#line 3961 "orbit-policy.mc"
 gint32 g_random_int_range( gint32 begin,  gint32 end); 
#line 3962 "orbit-policy.mc"
 gdouble g_random_double(void ); 
#line 3964 "orbit-policy.mc"
 gdouble g_random_double_range( gdouble begin,  gdouble end); 
#line 3970 "orbit-policy.mc"
typedef struct _GRelation GRelation; 
#line 3971 "orbit-policy.mc"
typedef struct _GTuples GTuples; 
#line 3976 "orbit-policy.mc"
struct _GTuples { guint len; }; 
#line 3977 "orbit-policy.mc"
 GRelation *g_relation_new( gint fields); 
#line 3978 "orbit-policy.mc"
void g_relation_destroy( GRelation *relation); 
#line 3982 "orbit-policy.mc"
void g_relation_index( GRelation *relation,  gint field,  GHashFunc hash_func,  GEqualFunc key_equal_func); 
#line 3984 "orbit-policy.mc"
void g_relation_insert( GRelation *relation, ...); 
#line 3987 "orbit-policy.mc"
 gint g_relation_delete( GRelation *relation,  gconstpointer key,  gint field); 
#line 3990 "orbit-policy.mc"
 GTuples *g_relation_select( GRelation *relation,  gconstpointer key,  gint field); 
#line 3993 "orbit-policy.mc"
 gint g_relation_count( GRelation *relation,  gconstpointer key,  gint field); 
#line 3995 "orbit-policy.mc"
 gboolean g_relation_exists( GRelation *relation, ...); 
#line 3996 "orbit-policy.mc"
void g_relation_print( GRelation *relation); 
#line 3998 "orbit-policy.mc"
void g_tuples_destroy( GTuples *tuples); 
#line 4001 "orbit-policy.mc"
 gpointer g_tuples_index( GTuples *tuples,  gint index_,  gint field); 
#line 4006 "orbit-policy.mc"
typedef struct _GScanner GScanner; 
#line 4007 "orbit-policy.mc"
typedef struct _GScannerConfig GScannerConfig; 
#line 4008 "orbit-policy.mc"
typedef union _GTokenValue GTokenValue; 
#line 4012 "orbit-policy.mc"
typedef void (*GScannerMsgFunc)( GScanner *scanner,  gchar *message,  gboolean error); 
#line 4023 "orbit-policy.mc"
typedef enum {G_ERR_UNKNOWN,G_ERR_UNEXP_EOF,G_ERR_UNEXP_EOF_IN_STRING,G_ERR_UNEXP_EOF_IN_COMMENT,G_ERR_NON_DIGIT_IN_CONST,G_ERR_DIGIT_RADIX,G_ERR_FLOAT_RADIX,G_ERR_FLOAT_MALFORMED}GErrorType; 
#line 4058 "orbit-policy.mc"
typedef enum {G_TOKEN_EOF=0,G_TOKEN_LEFT_PAREN='(',G_TOKEN_RIGHT_PAREN=')',G_TOKEN_LEFT_CURLY='{',G_TOKEN_RIGHT_CURLY='}',G_TOKEN_LEFT_BRACE='[',G_TOKEN_RIGHT_BRACE=']',G_TOKEN_EQUAL_SIGN='=',G_TOKEN_COMMA=',',G_TOKEN_NONE=256,G_TOKEN_ERROR,G_TOKEN_CHAR,G_TOKEN_BINARY,G_TOKEN_OCTAL,G_TOKEN_INT,G_TOKEN_HEX,G_TOKEN_FLOAT,G_TOKEN_STRING,G_TOKEN_SYMBOL,G_TOKEN_IDENTIFIER,G_TOKEN_IDENTIFIER_NULL,G_TOKEN_COMMENT_SINGLE,G_TOKEN_COMMENT_MULTI,G_TOKEN_LAST}GTokenType; 
#line 4074 "orbit-policy.mc"
union _GTokenValue { gpointer v_symbol;  gchar *v_identifier;  gulong v_binary;  gulong v_octal;  gulong v_int;  guint64 v_int64;  gdouble v_float;  gulong v_hex;  gchar *v_string;  gchar *v_comment;  guchar v_char;  guint v_error; }; 
#line 4114 "orbit-policy.mc"
struct _GScannerConfig { gchar *cset_skip_characters;  gchar *cset_identifier_first;  gchar *cset_identifier_nth;  gchar *cpair_comment_single;  guint case_sensitive:1;  guint skip_comment_multi:1;  guint skip_comment_single:1;  guint scan_comment_multi:1;  guint scan_identifier:1;  guint scan_identifier_1char:1;  guint scan_identifier_NULL:1;  guint scan_symbols:1;  guint scan_binary:1;  guint scan_octal:1;  guint scan_float:1;  guint scan_hex:1;  guint scan_hex_dollar:1;  guint scan_string_sq:1;  guint scan_string_dq:1;  guint numbers_2_int:1;  guint int_2_float:1;  guint identifier_2_string:1;  guint char_2_token:1;  guint symbol_2_token:1;  guint scope_0_fallback:1;  guint store_int64:1;  guint padding_dummy; }; 
#line 4156 "orbit-policy.mc"
struct _GScanner { gpointer user_data;  guint max_parse_errors;  guint parse_errors; const  gchar *input_name;  GData *qdata;  GScannerConfig *config;  GTokenType token;  GTokenValue value;  guint line;  guint position;  GTokenType next_token;  GTokenValue next_value;  guint next_line;  guint next_position;  GHashTable *symbol_table;  gint input_fd; const  gchar *text; const  gchar *text_end;  gchar *buffer;  guint scope_id;  GScannerMsgFunc msg_handler; }; 
#line 4158 "orbit-policy.mc"
 GScanner *g_scanner_new(const  GScannerConfig *config_templ); 
#line 4159 "orbit-policy.mc"
void g_scanner_destroy( GScanner *scanner); 
#line 4161 "orbit-policy.mc"
void g_scanner_input_file( GScanner *scanner,  gint input_fd); 
#line 4162 "orbit-policy.mc"
void g_scanner_sync_file_offset( GScanner *scanner); 
#line 4165 "orbit-policy.mc"
void g_scanner_input_text( GScanner *scanner, const  gchar *text,  guint text_len); 
#line 4166 "orbit-policy.mc"
 GTokenType g_scanner_get_next_token( GScanner *scanner); 
#line 4167 "orbit-policy.mc"
 GTokenType g_scanner_peek_next_token( GScanner *scanner); 
#line 4168 "orbit-policy.mc"
 GTokenType g_scanner_cur_token( GScanner *scanner); 
#line 4169 "orbit-policy.mc"
 GTokenValue g_scanner_cur_value( GScanner *scanner); 
#line 4170 "orbit-policy.mc"
 guint g_scanner_cur_line( GScanner *scanner); 
#line 4171 "orbit-policy.mc"
 guint g_scanner_cur_position( GScanner *scanner); 
#line 4172 "orbit-policy.mc"
 gboolean g_scanner_eof( GScanner *scanner); 
#line 4174 "orbit-policy.mc"
 guint g_scanner_set_scope( GScanner *scanner,  guint scope_id); 
#line 4178 "orbit-policy.mc"
void g_scanner_scope_add_symbol( GScanner *scanner,  guint scope_id, const  gchar *symbol,  gpointer value); 
#line 4181 "orbit-policy.mc"
void g_scanner_scope_remove_symbol( GScanner *scanner,  guint scope_id, const  gchar *symbol); 
#line 4184 "orbit-policy.mc"
 gpointer g_scanner_scope_lookup_symbol( GScanner *scanner,  guint scope_id, const  gchar *symbol); 
#line 4188 "orbit-policy.mc"
void g_scanner_scope_foreach_symbol( GScanner *scanner,  guint scope_id,  GHFunc func,  gpointer user_data); 
#line 4190 "orbit-policy.mc"
 gpointer g_scanner_lookup_symbol( GScanner *scanner, const  gchar *symbol); 
#line 4197 "orbit-policy.mc"
void g_scanner_unexp_token( GScanner *scanner,  GTokenType expected_token, const  gchar *identifier_spec, const  gchar *symbol_spec, const  gchar *symbol_name, const  gchar *message,  gint is_error); 
#line 4200 "orbit-policy.mc"
void g_scanner_error( GScanner *scanner, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 4203 "orbit-policy.mc"
void g_scanner_warn( GScanner *scanner, const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 4216 "orbit-policy.mc"
typedef enum {G_SHELL_ERROR_BAD_QUOTING,G_SHELL_ERROR_EMPTY_STRING,G_SHELL_ERROR_FAILED}GShellError; 
#line 4218 "orbit-policy.mc"
 GQuark g_shell_error_quark(void ); 
#line 4220 "orbit-policy.mc"
 gchar *g_shell_quote(const  gchar *unquoted_string); 
#line 4222 "orbit-policy.mc"
 gchar *g_shell_unquote(const  gchar *quoted_string,  GError **error); 
#line 4226 "orbit-policy.mc"
 gboolean g_shell_parse_argv(const  gchar *command_line,  gint *argcp,  gchar ***argvp,  GError **error); 
#line 4259 "orbit-policy.mc"
typedef enum {G_SPAWN_ERROR_FORK,G_SPAWN_ERROR_READ,G_SPAWN_ERROR_CHDIR,G_SPAWN_ERROR_ACCES,G_SPAWN_ERROR_PERM,G_SPAWN_ERROR_2BIG,G_SPAWN_ERROR_NOEXEC,G_SPAWN_ERROR_NAMETOOLONG,G_SPAWN_ERROR_NOENT,G_SPAWN_ERROR_NOMEM,G_SPAWN_ERROR_NOTDIR,G_SPAWN_ERROR_LOOP,G_SPAWN_ERROR_TXTBUSY,G_SPAWN_ERROR_IO,G_SPAWN_ERROR_NFILE,G_SPAWN_ERROR_MFILE,G_SPAWN_ERROR_INVAL,G_SPAWN_ERROR_ISDIR,G_SPAWN_ERROR_LIBBAD,G_SPAWN_ERROR_FAILED}GSpawnError; 
#line 4261 "orbit-policy.mc"
typedef void (*GSpawnChildSetupFunc)( gpointer user_data); 
#line 4274 "orbit-policy.mc"
typedef enum {G_SPAWN_LEAVE_DESCRIPTORS_OPEN=1 << 0,G_SPAWN_DO_NOT_REAP_CHILD=1 << 1,G_SPAWN_SEARCH_PATH=1 << 2,G_SPAWN_STDOUT_TO_DEV_NULL=1 << 3,G_SPAWN_STDERR_TO_DEV_NULL=1 << 4,G_SPAWN_CHILD_INHERITS_STDIN=1 << 5,G_SPAWN_FILE_AND_ARGV_ZERO=1 << 6}GSpawnFlags; 
#line 4276 "orbit-policy.mc"
 GQuark g_spawn_error_quark(void ); 
#line 4284 "orbit-policy.mc"
 gboolean g_spawn_async(const  gchar *working_directory,  gchar **argv,  gchar **envp,  GSpawnFlags flags,  GSpawnChildSetupFunc child_setup,  gpointer user_data,  GPid *child_pid,  GError **error); 
#line 4300 "orbit-policy.mc"
 gboolean g_spawn_async_with_pipes(const  gchar *working_directory,  gchar **argv,  gchar **envp,  GSpawnFlags flags,  GSpawnChildSetupFunc child_setup,  gpointer user_data,  GPid *child_pid,  gint *standard_input,  gint *standard_output,  gint *standard_error,  GError **error); 
#line 4316 "orbit-policy.mc"
 gboolean g_spawn_sync(const  gchar *working_directory,  gchar **argv,  gchar **envp,  GSpawnFlags flags,  GSpawnChildSetupFunc child_setup,  gpointer user_data,  gchar **standard_output,  gchar **standard_error,  gint *exit_status,  GError **error); 
#line 4322 "orbit-policy.mc"
 gboolean g_spawn_command_line_sync(const  gchar *command_line,  gchar **standard_output,  gchar **standard_error,  gint *exit_status,  GError **error); 
#line 4324 "orbit-policy.mc"
 gboolean g_spawn_command_line_async(const  gchar *command_line,  GError **error); 
#line 4326 "orbit-policy.mc"
void g_spawn_close_pid( GPid pid); 
#line 4345 "orbit-policy.mc"
typedef enum {G_ASCII_ALNUM=1 << 0,G_ASCII_ALPHA=1 << 1,G_ASCII_CNTRL=1 << 2,G_ASCII_DIGIT=1 << 3,G_ASCII_GRAPH=1 << 4,G_ASCII_LOWER=1 << 5,G_ASCII_PRINT=1 << 6,G_ASCII_PUNCT=1 << 7,G_ASCII_SPACE=1 << 8,G_ASCII_UPPER=1 << 9,G_ASCII_XDIGIT=1 << 10}GAsciiType; 
#line 4347 "orbit-policy.mc"
extern const  guint16 *const g_ascii_table; 
#line 4348 "orbit-policy.mc"
 gchar g_ascii_tolower( gchar c) __attribute__  (( __const__ )) ; 
#line 4349 "orbit-policy.mc"
 gchar g_ascii_toupper( gchar c) __attribute__  (( __const__ )) ; 
#line 4351 "orbit-policy.mc"
 gint g_ascii_digit_value( gchar c) __attribute__  (( __const__ )) ; 
#line 4352 "orbit-policy.mc"
 gint g_ascii_xdigit_value( gchar c) __attribute__  (( __const__ )) ; 
#line 4360 "orbit-policy.mc"
 gchar *g_strdelimit( gchar *string, const  gchar *delimiters,  gchar new_delimiter); 
#line 4363 "orbit-policy.mc"
 gchar *g_strcanon( gchar *string, const  gchar *valid_chars,  gchar substitutor); 
#line 4364 "orbit-policy.mc"
const  gchar *g_strerror( gint errnum) __attribute__  (( __const__ )) ; 
#line 4365 "orbit-policy.mc"
const  gchar *g_strsignal( gint signum) __attribute__  (( __const__ )) ; 
#line 4366 "orbit-policy.mc"
 gchar *g_strreverse( gchar *string); 
#line 4369 "orbit-policy.mc"
 gsize g_strlcpy( gchar *dest, const  gchar *src,  gsize dest_size); 
#line 4372 "orbit-policy.mc"
 gsize g_strlcat( gchar *dest, const  gchar *src,  gsize dest_size); 
#line 4375 "orbit-policy.mc"
 gchar *g_strstr_len(const  gchar *haystack,  gssize haystack_len, const  gchar *needle); 
#line 4377 "orbit-policy.mc"
 gchar *g_strrstr(const  gchar *haystack, const  gchar *needle); 
#line 4380 "orbit-policy.mc"
 gchar *g_strrstr_len(const  gchar *haystack,  gssize haystack_len, const  gchar *needle); 
#line 4383 "orbit-policy.mc"
 gboolean g_str_has_suffix(const  gchar *str, const  gchar *suffix); 
#line 4385 "orbit-policy.mc"
 gboolean g_str_has_prefix(const  gchar *str, const  gchar *prefix); 
#line 4390 "orbit-policy.mc"
 gdouble g_strtod(const  gchar *nptr,  gchar **endptr); 
#line 4392 "orbit-policy.mc"
 gdouble g_ascii_strtod(const  gchar *nptr,  gchar **endptr); 
#line 4395 "orbit-policy.mc"
 guint64 g_ascii_strtoull(const  gchar *nptr,  gchar **endptr,  guint base); 
#line 4402 "orbit-policy.mc"
 gchar *g_ascii_dtostr( gchar *buffer,  gint buf_len,  gdouble d); 
#line 4406 "orbit-policy.mc"
 gchar *g_ascii_formatd( gchar *buffer,  gint buf_len, const  gchar *format,  gdouble d); 
#line 4409 "orbit-policy.mc"
 gchar *g_strchug( gchar *string); 
#line 4411 "orbit-policy.mc"
 gchar *g_strchomp( gchar *string); 
#line 4416 "orbit-policy.mc"
 gint g_ascii_strcasecmp(const  gchar *s1, const  gchar *s2); 
#line 4419 "orbit-policy.mc"
 gint g_ascii_strncasecmp(const  gchar *s1, const  gchar *s2,  gsize n); 
#line 4421 "orbit-policy.mc"
 gchar *g_ascii_strdown(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 4423 "orbit-policy.mc"
 gchar *g_ascii_strup(const  gchar *str,  gssize len) __attribute__  (( __malloc__ )) ; 
#line 4424 "orbit-policy.mc"
 gchar *g_strdup(const  gchar *str) __attribute__  (( __malloc__ )) ; 
#line 4426 "orbit-policy.mc"
 gchar *g_strdup_printf(const  gchar *format, ...) __attribute__  (( __format__ ( __printf__, 1, 2 )  ))  __attribute__  (( __malloc__ )) ; 
#line 4428 "orbit-policy.mc"
 gchar *g_strdup_vprintf(const  gchar *format,  va_list args) __attribute__  (( __malloc__ )) ; 
#line 4430 "orbit-policy.mc"
 gchar *g_strndup(const  gchar *str,  gsize n) __attribute__  (( __malloc__ )) ; 
#line 4432 "orbit-policy.mc"
 gchar *g_strnfill( gsize length,  gchar fill_char) __attribute__  (( __malloc__ )) ; 
#line 4434 "orbit-policy.mc"
 gchar *g_strconcat(const  gchar *string1, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 4436 "orbit-policy.mc"
 gchar *g_strjoin(const  gchar *separator, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 4442 "orbit-policy.mc"
 gchar *g_strcompress(const  gchar *source) __attribute__  (( __malloc__ )) ; 
#line 4444 "orbit-policy.mc"
 gchar *g_strescape(const  gchar *source, const  gchar *exceptions) __attribute__  (( __malloc__ )) ; 
#line 4447 "orbit-policy.mc"
 gpointer g_memdup( gconstpointer mem,  guint byte_size) __attribute__  (( __malloc__ )) ; 
#line 4450 "orbit-policy.mc"
 gchar **g_strsplit(const  gchar *string, const  gchar *delimiter,  gint max_tokens) __attribute__  (( __malloc__ )) ; 
#line 4453 "orbit-policy.mc"
 gchar **g_strsplit_set(const  gchar *string, const  gchar *delimiters,  gint max_tokens) __attribute__  (( __malloc__ )) ; 
#line 4455 "orbit-policy.mc"
 gchar *g_strjoinv(const  gchar *separator,  gchar **str_array) __attribute__  (( __malloc__ )) ; 
#line 4456 "orbit-policy.mc"
void g_strfreev( gchar **str_array); 
#line 4457 "orbit-policy.mc"
 gchar **g_strdupv( gchar **str_array) __attribute__  (( __malloc__ )) ; 
#line 4458 "orbit-policy.mc"
 guint g_strv_length( gchar **str_array); 
#line 4461 "orbit-policy.mc"
 gchar *g_stpcpy( gchar *dest, const char *src); 
#line 4464 "orbit-policy.mc"
const  gchar *g_strip_context(const  gchar *msgid, const  gchar *msgval); 
#line 4471 "orbit-policy.mc"
typedef struct _GThreadPool GThreadPool; 
#line 4483 "orbit-policy.mc"
struct _GThreadPool { GFunc func;  gpointer user_data;  gboolean exclusive; }; 
#line 4494 "orbit-policy.mc"
 GThreadPool *g_thread_pool_new( GFunc func,  gpointer user_data,  gint max_threads,  gboolean exclusive,  GError **error); 
#line 4502 "orbit-policy.mc"
void g_thread_pool_push( GThreadPool *pool,  gpointer data,  GError **error); 
#line 4509 "orbit-policy.mc"
void g_thread_pool_set_max_threads( GThreadPool *pool,  gint max_threads,  GError **error); 
#line 4510 "orbit-policy.mc"
 gint g_thread_pool_get_max_threads( GThreadPool *pool); 
#line 4514 "orbit-policy.mc"
 guint g_thread_pool_get_num_threads( GThreadPool *pool); 
#line 4517 "orbit-policy.mc"
 guint g_thread_pool_unprocessed( GThreadPool *pool); 
#line 4525 "orbit-policy.mc"
void g_thread_pool_free( GThreadPool *pool,  gboolean immediate,  gboolean wait); 
#line 4529 "orbit-policy.mc"
void g_thread_pool_set_max_unused_threads( gint max_threads); 
#line 4530 "orbit-policy.mc"
 gint g_thread_pool_get_max_unused_threads(void ); 
#line 4531 "orbit-policy.mc"
 guint g_thread_pool_get_num_unused_threads(void ); 
#line 4534 "orbit-policy.mc"
void g_thread_pool_stop_unused_threads(void ); 
#line 4539 "orbit-policy.mc"
void g_thread_pool_set_sort_function( GThreadPool *pool,  GCompareDataFunc func,  gpointer user_data); 
#line 4542 "orbit-policy.mc"
void g_thread_pool_set_max_idle_time( guint interval); 
#line 4543 "orbit-policy.mc"
 guint g_thread_pool_get_max_idle_time(void ); 
#line 4552 "orbit-policy.mc"
typedef struct _GTimer GTimer; 
#line 4556 "orbit-policy.mc"
 GTimer *g_timer_new(void ); 
#line 4557 "orbit-policy.mc"
void g_timer_destroy( GTimer *timer); 
#line 4558 "orbit-policy.mc"
void g_timer_start( GTimer *timer); 
#line 4559 "orbit-policy.mc"
void g_timer_stop( GTimer *timer); 
#line 4560 "orbit-policy.mc"
void g_timer_reset( GTimer *timer); 
#line 4561 "orbit-policy.mc"
void g_timer_continue( GTimer *timer); 
#line 4563 "orbit-policy.mc"
 gdouble g_timer_elapsed( GTimer *timer,  gulong *microseconds); 
#line 4565 "orbit-policy.mc"
void g_usleep( gulong microseconds); 
#line 4568 "orbit-policy.mc"
void g_time_val_add( GTimeVal *time_,  glong microseconds); 
#line 4573 "orbit-policy.mc"
typedef struct _GTree GTree; 
#line 4577 "orbit-policy.mc"
typedef  gboolean (*GTraverseFunc)( gpointer key,  gpointer value,  gpointer data); 
#line 4581 "orbit-policy.mc"
 GTree *g_tree_new( GCompareFunc key_compare_func); 
#line 4583 "orbit-policy.mc"
 GTree *g_tree_new_with_data( GCompareDataFunc key_compare_func,  gpointer key_compare_data); 
#line 4587 "orbit-policy.mc"
 GTree *g_tree_new_full( GCompareDataFunc key_compare_func,  gpointer key_compare_data,  GDestroyNotify key_destroy_func,  GDestroyNotify value_destroy_func); 
#line 4588 "orbit-policy.mc"
void g_tree_destroy( GTree *tree); 
#line 4591 "orbit-policy.mc"
void g_tree_insert( GTree *tree,  gpointer key,  gpointer value); 
#line 4594 "orbit-policy.mc"
void g_tree_replace( GTree *tree,  gpointer key,  gpointer value); 
#line 4596 "orbit-policy.mc"
 gboolean g_tree_remove( GTree *tree,  gconstpointer key); 
#line 4598 "orbit-policy.mc"
 gboolean g_tree_steal( GTree *tree,  gconstpointer key); 
#line 4600 "orbit-policy.mc"
 gpointer g_tree_lookup( GTree *tree,  gconstpointer key); 
#line 4604 "orbit-policy.mc"
 gboolean g_tree_lookup_extended( GTree *tree,  gconstpointer lookup_key,  gpointer *orig_key,  gpointer *value); 
#line 4607 "orbit-policy.mc"
void g_tree_foreach( GTree *tree,  GTraverseFunc func,  gpointer user_data); 
#line 4610 "orbit-policy.mc"
 gpointer g_tree_search( GTree *tree,  GCompareFunc search_func,  gconstpointer user_data); 
#line 4611 "orbit-policy.mc"
 gint g_tree_height( GTree *tree); 
#line 4612 "orbit-policy.mc"
 gint g_tree_nnodes( GTree *tree); 
#line 4629 "orbit-policy.mc"
enum {CORBA_FALSE=(0),CORBA_TRUE=((!(0)))}; 
#line 4631 "orbit-policy.mc"
typedef  gint16 CORBA_short; 
#line 4632 "orbit-policy.mc"
typedef  gint32 CORBA_long; 
#line 4633 "orbit-policy.mc"
typedef  guint16 CORBA_unsigned_short; 
#line 4634 "orbit-policy.mc"
typedef  guint32 CORBA_unsigned_long; 
#line 4635 "orbit-policy.mc"
typedef  gfloat CORBA_float; 
#line 4636 "orbit-policy.mc"
typedef  gdouble CORBA_double; 
#line 4637 "orbit-policy.mc"
typedef char CORBA_char; 
#line 4638 "orbit-policy.mc"
typedef  gunichar2 CORBA_wchar; 
#line 4639 "orbit-policy.mc"
typedef  guchar CORBA_boolean; 
#line 4640 "orbit-policy.mc"
typedef  guchar CORBA_octet; 
#line 4641 "orbit-policy.mc"
typedef  gdouble CORBA_long_double; 
#line 4646 "orbit-policy.mc"
typedef  CORBA_char *CORBA_string; 
#line 4647 "orbit-policy.mc"
typedef  CORBA_wchar *CORBA_wstring; 
#line 4652 "orbit-policy.mc"
typedef struct CORBA_Object_type *CORBA_Object; 
#line 4653 "orbit-policy.mc"
typedef  gint64 CORBA_long_long; 
#line 4654 "orbit-policy.mc"
typedef  guint64 CORBA_unsigned_long_long; 
#line 4669 "orbit-policy.mc"
typedef enum {ORBIT_GENUID_STRONG,ORBIT_GENUID_SIMPLE}ORBitGenUidType; 
#line 4674 "orbit-policy.mc"
typedef enum {ORBIT_GENUID_COOKIE,ORBIT_GENUID_OBJECT_ID}ORBitGenUidRole; 
#line 4676 "orbit-policy.mc"
 gboolean ORBit_genuid_init( ORBitGenUidType type); 
#line 4677 "orbit-policy.mc"
void ORBit_genuid_fini(void ); 
#line 4680 "orbit-policy.mc"
void ORBit_genuid_buffer( guint8 *buffer, int length,  ORBitGenUidRole role); 
#line 4687 "orbit-policy.mc"
 gulong ORBit_wchar_strlen( CORBA_wchar *wstr); 
#line 4699 "orbit-policy.mc"
typedef  gulong GType; 
#line 4703 "orbit-policy.mc"
typedef struct _GValue GValue; 
#line 4704 "orbit-policy.mc"
typedef union _GTypeCValue GTypeCValue; 
#line 4705 "orbit-policy.mc"
typedef struct _GTypePlugin GTypePlugin; 
#line 4706 "orbit-policy.mc"
typedef struct _GTypeClass GTypeClass; 
#line 4707 "orbit-policy.mc"
typedef struct _GTypeInterface GTypeInterface; 
#line 4708 "orbit-policy.mc"
typedef struct _GTypeInstance GTypeInstance; 
#line 4709 "orbit-policy.mc"
typedef struct _GTypeInfo GTypeInfo; 
#line 4710 "orbit-policy.mc"
typedef struct _GTypeFundamentalInfo GTypeFundamentalInfo; 
#line 4711 "orbit-policy.mc"
typedef struct _GInterfaceInfo GInterfaceInfo; 
#line 4712 "orbit-policy.mc"
typedef struct _GTypeValueTable GTypeValueTable; 
#line 4713 "orbit-policy.mc"
typedef struct _GTypeQuery GTypeQuery; 
#line 4722 "orbit-policy.mc"
struct _GTypeClass { GType g_type; }; 
#line 4727 "orbit-policy.mc"
struct _GTypeInstance { GTypeClass *g_class; }; 
#line 4733 "orbit-policy.mc"
struct _GTypeInterface { GType g_type;  GType g_instance_type; }; 
#line 4740 "orbit-policy.mc"
struct _GTypeQuery { GType type; const  gchar *type_name;  guint class_size;  guint instance_size; }; 
#line 4747 "orbit-policy.mc"
typedef enum {G_TYPE_DEBUG_NONE=0,G_TYPE_DEBUG_OBJECTS=1 << 0,G_TYPE_DEBUG_SIGNALS=1 << 1,G_TYPE_DEBUG_MASK=0x03}GTypeDebugFlags; 
#line 4751 "orbit-policy.mc"
void g_type_init(void ); 
#line 4752 "orbit-policy.mc"
void g_type_init_with_debug_flags( GTypeDebugFlags debug_flags); 
#line 4753 "orbit-policy.mc"
const  gchar *g_type_name( GType type); 
#line 4754 "orbit-policy.mc"
 GQuark g_type_qname( GType type); 
#line 4755 "orbit-policy.mc"
 GType g_type_from_name(const  gchar *name); 
#line 4756 "orbit-policy.mc"
 GType g_type_parent( GType type); 
#line 4757 "orbit-policy.mc"
 guint g_type_depth( GType type); 
#line 4759 "orbit-policy.mc"
 GType g_type_next_base( GType leaf_type,  GType root_type); 
#line 4761 "orbit-policy.mc"
 gboolean g_type_is_a( GType type,  GType is_a_type); 
#line 4762 "orbit-policy.mc"
 gpointer g_type_class_ref( GType type); 
#line 4763 "orbit-policy.mc"
 gpointer g_type_class_peek( GType type); 
#line 4764 "orbit-policy.mc"
 gpointer g_type_class_peek_static( GType type); 
#line 4765 "orbit-policy.mc"
void g_type_class_unref( gpointer g_class); 
#line 4766 "orbit-policy.mc"
 gpointer g_type_class_peek_parent( gpointer g_class); 
#line 4768 "orbit-policy.mc"
 gpointer g_type_interface_peek( gpointer instance_class,  GType iface_type); 
#line 4769 "orbit-policy.mc"
 gpointer g_type_interface_peek_parent( gpointer g_iface); 
#line 4771 "orbit-policy.mc"
 gpointer g_type_default_interface_ref( GType g_type); 
#line 4772 "orbit-policy.mc"
 gpointer g_type_default_interface_peek( GType g_type); 
#line 4773 "orbit-policy.mc"
void g_type_default_interface_unref( gpointer g_iface); 
#line 4777 "orbit-policy.mc"
 GType *g_type_children( GType type,  guint *n_children); 
#line 4779 "orbit-policy.mc"
 GType *g_type_interfaces( GType type,  guint *n_interfaces); 
#line 4784 "orbit-policy.mc"
void g_type_set_qdata( GType type,  GQuark quark,  gpointer data); 
#line 4786 "orbit-policy.mc"
 gpointer g_type_get_qdata( GType type,  GQuark quark); 
#line 4788 "orbit-policy.mc"
void g_type_query( GType type,  GTypeQuery *query); 
#line 4792 "orbit-policy.mc"
typedef void (*GBaseInitFunc)( gpointer g_class); 
#line 4793 "orbit-policy.mc"
typedef void (*GBaseFinalizeFunc)( gpointer g_class); 
#line 4795 "orbit-policy.mc"
typedef void (*GClassInitFunc)( gpointer g_class,  gpointer class_data); 
#line 4797 "orbit-policy.mc"
typedef void (*GClassFinalizeFunc)( gpointer g_class,  gpointer class_data); 
#line 4799 "orbit-policy.mc"
typedef void (*GInstanceInitFunc)( GTypeInstance *instance,  gpointer g_class); 
#line 4801 "orbit-policy.mc"
typedef void (*GInterfaceInitFunc)( gpointer g_iface,  gpointer iface_data); 
#line 4803 "orbit-policy.mc"
typedef void (*GInterfaceFinalizeFunc)( gpointer g_iface,  gpointer iface_data); 
#line 4805 "orbit-policy.mc"
typedef  gboolean (*GTypeClassCacheFunc)( gpointer cache_data,  GTypeClass *g_class); 
#line 4807 "orbit-policy.mc"
typedef void (*GTypeInterfaceCheckFunc)( gpointer check_data,  gpointer g_iface); 
#line 4814 "orbit-policy.mc"
typedef enum {G_TYPE_FLAG_CLASSED=(1 << 0),G_TYPE_FLAG_INSTANTIATABLE=(1 << 1),G_TYPE_FLAG_DERIVABLE=(1 << 2),G_TYPE_FLAG_DEEP_DERIVABLE=(1 << 3)}GTypeFundamentalFlags; 
#line 4819 "orbit-policy.mc"
typedef enum {G_TYPE_FLAG_ABSTRACT=(1 << 4),G_TYPE_FLAG_VALUE_ABSTRACT=(1 << 5)}GTypeFlags; 
#line 4840 "orbit-policy.mc"
struct _GTypeInfo { guint16 class_size;  GBaseInitFunc base_init;  GBaseFinalizeFunc base_finalize;  GClassInitFunc class_init;  GClassFinalizeFunc class_finalize;  gconstpointer class_data;  guint16 instance_size;  guint16 n_preallocs;  GInstanceInitFunc instance_init; const  GTypeValueTable *value_table; }; 
#line 4844 "orbit-policy.mc"
struct _GTypeFundamentalInfo { GTypeFundamentalFlags type_flags; }; 
#line 4850 "orbit-policy.mc"
struct _GInterfaceInfo { GInterfaceInitFunc interface_init;  GInterfaceFinalizeFunc interface_finalize;  gpointer interface_data; }; 
#line 4869 "orbit-policy.mc"
struct _GTypeValueTable {void (*value_init)( GValue *value); void (*value_free)( GValue *value); void (*value_copy)(const  GValue *src_value,  GValue *dest_value);  gpointer (*value_peek_pointer)(const  GValue *value);  gchar *collect_format;  gchar *(*collect_value)( GValue *value,  guint n_collect_values,  GTypeCValue *collect_values,  guint collect_flags);  gchar *lcopy_format;  gchar *(*lcopy_value)(const  GValue *value,  guint n_collect_values,  GTypeCValue *collect_values,  guint collect_flags); }; 
#line 4873 "orbit-policy.mc"
 GType g_type_register_static( GType parent_type, const  gchar *type_name, const  GTypeInfo *info,  GTypeFlags flags); 
#line 4877 "orbit-policy.mc"
 GType g_type_register_dynamic( GType parent_type, const  gchar *type_name,  GTypePlugin *plugin,  GTypeFlags flags); 
#line 4882 "orbit-policy.mc"
 GType g_type_register_fundamental( GType type_id, const  gchar *type_name, const  GTypeInfo *info, const  GTypeFundamentalInfo *finfo,  GTypeFlags flags); 
#line 4885 "orbit-policy.mc"
void g_type_add_interface_static( GType instance_type,  GType interface_type, const  GInterfaceInfo *info); 
#line 4888 "orbit-policy.mc"
void g_type_add_interface_dynamic( GType instance_type,  GType interface_type,  GTypePlugin *plugin); 
#line 4890 "orbit-policy.mc"
void g_type_interface_add_prerequisite( GType interface_type,  GType prerequisite_type); 
#line 4892 "orbit-policy.mc"
 GType *g_type_interface_prerequisites( GType interface_type,  guint *n_prerequisites); 
#line 4894 "orbit-policy.mc"
void g_type_class_add_private( gpointer g_class,  gsize private_size); 
#line 4896 "orbit-policy.mc"
 gpointer g_type_instance_get_private( GTypeInstance *instance,  GType private_type); 
#line 4897 "orbit-policy.mc"
 GTypePlugin *g_type_get_plugin( GType type); 
#line 4899 "orbit-policy.mc"
 GTypePlugin *g_type_interface_get_plugin( GType instance_type,  GType interface_type); 
#line 4900 "orbit-policy.mc"
 GType g_type_fundamental_next(void ); 
#line 4901 "orbit-policy.mc"
 GType g_type_fundamental( GType type_id); 
#line 4902 "orbit-policy.mc"
 GTypeInstance *g_type_create_instance( GType type); 
#line 4903 "orbit-policy.mc"
void g_type_free_instance( GTypeInstance *instance); 
#line 4906 "orbit-policy.mc"
void g_type_add_class_cache_func( gpointer cache_data,  GTypeClassCacheFunc cache_func); 
#line 4908 "orbit-policy.mc"
void g_type_remove_class_cache_func( gpointer cache_data,  GTypeClassCacheFunc cache_func); 
#line 4909 "orbit-policy.mc"
void g_type_class_unref_uncached( gpointer g_class); 
#line 4912 "orbit-policy.mc"
void g_type_add_interface_check( gpointer check_data,  GTypeInterfaceCheckFunc check_func); 
#line 4914 "orbit-policy.mc"
void g_type_remove_interface_check( gpointer check_data,  GTypeInterfaceCheckFunc check_func); 
#line 4916 "orbit-policy.mc"
 GTypeValueTable *g_type_value_table_peek( GType type); 
#line 4920 "orbit-policy.mc"
 gboolean g_type_check_instance( GTypeInstance *instance); 
#line 4922 "orbit-policy.mc"
 GTypeInstance *g_type_check_instance_cast( GTypeInstance *instance,  GType iface_type); 
#line 4924 "orbit-policy.mc"
 gboolean g_type_check_instance_is_a( GTypeInstance *instance,  GType iface_type); 
#line 4926 "orbit-policy.mc"
 GTypeClass *g_type_check_class_cast( GTypeClass *g_class,  GType is_a_type); 
#line 4928 "orbit-policy.mc"
 gboolean g_type_check_class_is_a( GTypeClass *g_class,  GType is_a_type); 
#line 4929 "orbit-policy.mc"
 gboolean g_type_check_is_value_type( GType type); 
#line 4930 "orbit-policy.mc"
 gboolean g_type_check_value( GValue *value); 
#line 4932 "orbit-policy.mc"
 gboolean g_type_check_value_holds( GValue *value,  GType type); 
#line 4934 "orbit-policy.mc"
 gboolean g_type_test_flags( GType type,  guint flags); 
#line 4938 "orbit-policy.mc"
const  gchar *g_type_name_from_instance( GTypeInstance *instance); 
#line 4939 "orbit-policy.mc"
const  gchar *g_type_name_from_class( GTypeClass *g_class); 
#line 4943 "orbit-policy.mc"
void g_value_c_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4944 "orbit-policy.mc"
void g_value_types_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4945 "orbit-policy.mc"
void g_enum_types_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4946 "orbit-policy.mc"
void g_param_type_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4947 "orbit-policy.mc"
void g_boxed_type_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4948 "orbit-policy.mc"
void g_object_type_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4949 "orbit-policy.mc"
void g_param_spec_types_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4950 "orbit-policy.mc"
void g_value_transforms_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4951 "orbit-policy.mc"
void g_signal_init(void ) __attribute__  (( visibility ( "hidden" )  )) ; 
#line 4952 "orbit-policy.mc"
extern  GTypeDebugFlags _g_type_debug_flags; 
#line 4964 "orbit-policy.mc"
typedef  gpointer (*GBoxedCopyFunc)( gpointer boxed); 
#line 4965 "orbit-policy.mc"
typedef void (*GBoxedFreeFunc)( gpointer boxed); 
#line 4970 "orbit-policy.mc"
 gpointer g_boxed_copy( GType boxed_type,  gconstpointer src_boxed); 
#line 4972 "orbit-policy.mc"
void g_boxed_free( GType boxed_type,  gpointer boxed); 
#line 4974 "orbit-policy.mc"
void g_value_set_boxed( GValue *value,  gconstpointer v_boxed); 
#line 4976 "orbit-policy.mc"
void g_value_set_static_boxed( GValue *value,  gconstpointer v_boxed); 
#line 4977 "orbit-policy.mc"
 gpointer g_value_get_boxed(const  GValue *value); 
#line 4978 "orbit-policy.mc"
 gpointer g_value_dup_boxed(const  GValue *value); 
#line 4984 "orbit-policy.mc"
 GType g_boxed_type_register_static(const  gchar *name,  GBoxedCopyFunc boxed_copy,  GBoxedFreeFunc boxed_free); 
#line 4986 "orbit-policy.mc"
void g_value_take_boxed( GValue *value,  gconstpointer v_boxed); 
#line 4991 "orbit-policy.mc"
 GType g_closure_get_type(void ) __attribute__  (( __const__ )) ; 
#line 4992 "orbit-policy.mc"
 GType g_value_get_type(void ) __attribute__  (( __const__ )) ; 
#line 4993 "orbit-policy.mc"
 GType g_value_array_get_type(void ) __attribute__  (( __const__ )) ; 
#line 4994 "orbit-policy.mc"
 GType g_date_get_type(void ) __attribute__  (( __const__ )) ; 
#line 4995 "orbit-policy.mc"
 GType g_strv_get_type(void ) __attribute__  (( __const__ )) ; 
#line 4996 "orbit-policy.mc"
 GType g_gstring_get_type(void ) __attribute__  (( __const__ )) ; 
#line 4997 "orbit-policy.mc"
 GType g_hash_table_get_type(void ) __attribute__  (( __const__ )) ; 
#line 4999 "orbit-policy.mc"
typedef  gchar **GStrv; 
#line 5004 "orbit-policy.mc"
typedef struct _GEnumClass GEnumClass; 
#line 5005 "orbit-policy.mc"
typedef struct _GFlagsClass GFlagsClass; 
#line 5006 "orbit-policy.mc"
typedef struct _GEnumValue GEnumValue; 
#line 5007 "orbit-policy.mc"
typedef struct _GFlagsValue GFlagsValue; 
#line 5017 "orbit-policy.mc"
struct _GEnumClass { GTypeClass g_type_class;  gint minimum;  gint maximum;  guint n_values;  GEnumValue *values; }; 
#line 5026 "orbit-policy.mc"
struct _GFlagsClass { GTypeClass g_type_class;  guint mask;  guint n_values;  GFlagsValue *values; }; 
#line 5032 "orbit-policy.mc"
struct _GEnumValue { gint value;  gchar *value_name;  gchar *value_nick; }; 
#line 5038 "orbit-policy.mc"
struct _GFlagsValue { guint value;  gchar *value_name;  gchar *value_nick; }; 
#line 5043 "orbit-policy.mc"
 GEnumValue *g_enum_get_value( GEnumClass *enum_class,  gint value); 
#line 5045 "orbit-policy.mc"
 GEnumValue *g_enum_get_value_by_name( GEnumClass *enum_class, const  gchar *name); 
#line 5047 "orbit-policy.mc"
 GEnumValue *g_enum_get_value_by_nick( GEnumClass *enum_class, const  gchar *nick); 
#line 5049 "orbit-policy.mc"
 GFlagsValue *g_flags_get_first_value( GFlagsClass *flags_class,  guint value); 
#line 5051 "orbit-policy.mc"
 GFlagsValue *g_flags_get_value_by_name( GFlagsClass *flags_class, const  gchar *name); 
#line 5053 "orbit-policy.mc"
 GFlagsValue *g_flags_get_value_by_nick( GFlagsClass *flags_class, const  gchar *nick); 
#line 5055 "orbit-policy.mc"
void g_value_set_enum( GValue *value,  gint v_enum); 
#line 5056 "orbit-policy.mc"
 gint g_value_get_enum(const  GValue *value); 
#line 5058 "orbit-policy.mc"
void g_value_set_flags( GValue *value,  guint v_flags); 
#line 5059 "orbit-policy.mc"
 guint g_value_get_flags(const  GValue *value); 
#line 5068 "orbit-policy.mc"
 GType g_enum_register_static(const  gchar *name, const  GEnumValue *const_static_values); 
#line 5070 "orbit-policy.mc"
 GType g_flags_register_static(const  gchar *name, const  GFlagsValue *const_static_values); 
#line 5076 "orbit-policy.mc"
void g_enum_complete_type_info( GType g_enum_type,  GTypeInfo *info, const  GEnumValue *const_values); 
#line 5079 "orbit-policy.mc"
void g_flags_complete_type_info( GType g_flags_type,  GTypeInfo *info, const  GFlagsValue *const_values); 
#line 5085 "orbit-policy.mc"
typedef void (*GValueTransform)(const  GValue *src_value,  GValue *dest_value); 
#line 5103 "orbit-policy.mc"
struct _GValue { GType g_type; union { gint v_int;  guint v_uint;  glong v_long;  gulong v_ulong;  gint64 v_int64;  guint64 v_uint64;  gfloat v_float;  gdouble v_double;  gpointer v_pointer; }data[2]; }; 
#line 5108 "orbit-policy.mc"
 GValue *g_value_init( GValue *value,  GType g_type); 
#line 5110 "orbit-policy.mc"
void g_value_copy(const  GValue *src_value,  GValue *dest_value); 
#line 5111 "orbit-policy.mc"
 GValue *g_value_reset( GValue *value); 
#line 5112 "orbit-policy.mc"
void g_value_unset( GValue *value); 
#line 5114 "orbit-policy.mc"
void g_value_set_instance( GValue *value,  gpointer instance); 
#line 5118 "orbit-policy.mc"
 gboolean g_value_fits_pointer(const  GValue *value); 
#line 5119 "orbit-policy.mc"
 gpointer g_value_peek_pointer(const  GValue *value); 
#line 5124 "orbit-policy.mc"
 gboolean g_value_type_compatible( GType src_type,  GType dest_type); 
#line 5126 "orbit-policy.mc"
 gboolean g_value_type_transformable( GType src_type,  GType dest_type); 
#line 5128 "orbit-policy.mc"
 gboolean g_value_transform(const  GValue *src_value,  GValue *dest_value); 
#line 5131 "orbit-policy.mc"
void g_value_register_transform_func( GType src_type,  GType dest_type,  GValueTransform transform_func); 
#line 5151 "orbit-policy.mc"
typedef enum {G_PARAM_READABLE=1 << 0,G_PARAM_WRITABLE=1 << 1,G_PARAM_CONSTRUCT=1 << 2,G_PARAM_CONSTRUCT_ONLY=1 << 3,G_PARAM_LAX_VALIDATION=1 << 4,G_PARAM_STATIC_NAME=1 << 5,G_PARAM_STATIC_NICK=1 << 6,G_PARAM_STATIC_BLURB=1 << 7}GParamFlags; 
#line 5159 "orbit-policy.mc"
typedef struct _GParamSpec GParamSpec; 
#line 5160 "orbit-policy.mc"
typedef struct _GParamSpecClass GParamSpecClass; 
#line 5161 "orbit-policy.mc"
typedef struct _GParameter GParameter; 
#line 5162 "orbit-policy.mc"
typedef struct _GParamSpecPool GParamSpecPool; 
#line 5178 "orbit-policy.mc"
struct _GParamSpec { GTypeInstance g_type_instance;  gchar *name;  GParamFlags flags;  GType value_type;  GType owner_type;  gchar *_nick;  gchar *_blurb;  GData *qdata;  guint ref_count;  guint param_id; }; 
#line 5197 "orbit-policy.mc"
struct _GParamSpecClass { GTypeClass g_type_class;  GType value_type; void (*finalize)( GParamSpec *pspec); void (*value_set_default)( GParamSpec *pspec,  GValue *value);  gboolean (*value_validate)( GParamSpec *pspec,  GValue *value);  gint (*values_cmp)( GParamSpec *pspec, const  GValue *value1, const  GValue *value2);  gpointer dummy[4]; }; 
#line 5202 "orbit-policy.mc"
struct _GParameter {const  gchar *name;  GValue value; }; 
#line 5206 "orbit-policy.mc"
 GParamSpec *g_param_spec_ref( GParamSpec *pspec); 
#line 5207 "orbit-policy.mc"
void g_param_spec_unref( GParamSpec *pspec); 
#line 5208 "orbit-policy.mc"
void g_param_spec_sink( GParamSpec *pspec); 
#line 5209 "orbit-policy.mc"
 GParamSpec *g_param_spec_ref_sink( GParamSpec *pspec); 
#line 5211 "orbit-policy.mc"
 gpointer g_param_spec_get_qdata( GParamSpec *pspec,  GQuark quark); 
#line 5214 "orbit-policy.mc"
void g_param_spec_set_qdata( GParamSpec *pspec,  GQuark quark,  gpointer data); 
#line 5218 "orbit-policy.mc"
void g_param_spec_set_qdata_full( GParamSpec *pspec,  GQuark quark,  gpointer data,  GDestroyNotify destroy); 
#line 5220 "orbit-policy.mc"
 gpointer g_param_spec_steal_qdata( GParamSpec *pspec,  GQuark quark); 
#line 5221 "orbit-policy.mc"
 GParamSpec *g_param_spec_get_redirect_target( GParamSpec *pspec); 
#line 5224 "orbit-policy.mc"
void g_param_value_set_default( GParamSpec *pspec,  GValue *value); 
#line 5226 "orbit-policy.mc"
 gboolean g_param_value_defaults( GParamSpec *pspec,  GValue *value); 
#line 5228 "orbit-policy.mc"
 gboolean g_param_value_validate( GParamSpec *pspec,  GValue *value); 
#line 5232 "orbit-policy.mc"
 gboolean g_param_value_convert( GParamSpec *pspec, const  GValue *src_value,  GValue *dest_value,  gboolean strict_validation); 
#line 5235 "orbit-policy.mc"
 gint g_param_values_cmp( GParamSpec *pspec, const  GValue *value1, const  GValue *value2); 
#line 5236 "orbit-policy.mc"
const  gchar *g_param_spec_get_name( GParamSpec *pspec); 
#line 5237 "orbit-policy.mc"
const  gchar *g_param_spec_get_nick( GParamSpec *pspec); 
#line 5238 "orbit-policy.mc"
const  gchar *g_param_spec_get_blurb( GParamSpec *pspec); 
#line 5240 "orbit-policy.mc"
void g_value_set_param( GValue *value,  GParamSpec *param); 
#line 5241 "orbit-policy.mc"
 GParamSpec *g_value_get_param(const  GValue *value); 
#line 5242 "orbit-policy.mc"
 GParamSpec *g_value_dup_param(const  GValue *value); 
#line 5246 "orbit-policy.mc"
void g_value_take_param( GValue *value,  GParamSpec *param); 
#line 5253 "orbit-policy.mc"
typedef struct _GParamSpecTypeInfo GParamSpecTypeInfo; 
#line 5271 "orbit-policy.mc"
struct _GParamSpecTypeInfo { guint16 instance_size;  guint16 n_preallocs; void (*instance_init)( GParamSpec *pspec);  GType value_type; void (*finalize)( GParamSpec *pspec); void (*value_set_default)( GParamSpec *pspec,  GValue *value);  gboolean (*value_validate)( GParamSpec *pspec,  GValue *value);  gint (*values_cmp)( GParamSpec *pspec, const  GValue *value1, const  GValue *value2); }; 
#line 5273 "orbit-policy.mc"
 GType g_param_type_register_static(const  gchar *name, const  GParamSpecTypeInfo *pspec_info); 
#line 5278 "orbit-policy.mc"
 GType _g_param_type_register_static_constant(const  gchar *name, const  GParamSpecTypeInfo *pspec_info,  GType opt_type); 
#line 5286 "orbit-policy.mc"
 gpointer g_param_spec_internal( GType param_type, const  gchar *name, const  gchar *nick, const  gchar *blurb,  GParamFlags flags); 
#line 5287 "orbit-policy.mc"
 GParamSpecPool *g_param_spec_pool_new( gboolean type_prefixing); 
#line 5290 "orbit-policy.mc"
void g_param_spec_pool_insert( GParamSpecPool *pool,  GParamSpec *pspec,  GType owner_type); 
#line 5292 "orbit-policy.mc"
void g_param_spec_pool_remove( GParamSpecPool *pool,  GParamSpec *pspec); 
#line 5296 "orbit-policy.mc"
 GParamSpec *g_param_spec_pool_lookup( GParamSpecPool *pool, const  gchar *param_name,  GType owner_type,  gboolean walk_ancestors); 
#line 5298 "orbit-policy.mc"
 GList *g_param_spec_pool_list_owned( GParamSpecPool *pool,  GType owner_type); 
#line 5301 "orbit-policy.mc"
 GParamSpec **g_param_spec_pool_list( GParamSpecPool *pool,  GType owner_type,  guint *n_pspecs_p); 
#line 5305 "orbit-policy.mc"
typedef struct _GClosure GClosure; 
#line 5306 "orbit-policy.mc"
typedef struct _GClosureNotifyData GClosureNotifyData; 
#line 5307 "orbit-policy.mc"
typedef void (*GCallback)(void ); 
#line 5309 "orbit-policy.mc"
typedef void (*GClosureNotify)( gpointer data,  GClosure *closure); 
#line 5315 "orbit-policy.mc"
typedef void (*GClosureMarshal)( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5316 "orbit-policy.mc"
typedef struct _GCClosure GCClosure; 
#line 5324 "orbit-policy.mc"
struct _GClosureNotifyData { gpointer data;  GClosureNotify notify; }; 
#line 5350 "orbit-policy.mc"
struct _GClosure {volatile  guint ref_count:15; volatile  guint meta_marshal:1; volatile  guint n_guards:1; volatile  guint n_fnotifiers:2; volatile  guint n_inotifiers:8; volatile  guint in_inotify:1; volatile  guint floating:1; volatile  guint derivative_flag:1; volatile  guint in_marshal:1; volatile  guint is_invalid:1; void (*marshal)( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data);  gpointer data;  GClosureNotifyData *notifiers; }; 
#line 5357 "orbit-policy.mc"
struct _GCClosure { GClosure closure;  gpointer callback; }; 
#line 5363 "orbit-policy.mc"
 GClosure *g_cclosure_new( GCallback callback_func,  gpointer user_data,  GClosureNotify destroy_data); 
#line 5366 "orbit-policy.mc"
 GClosure *g_cclosure_new_swap( GCallback callback_func,  gpointer user_data,  GClosureNotify destroy_data); 
#line 5368 "orbit-policy.mc"
 GClosure *g_signal_type_cclosure_new( GType itype,  guint struct_offset); 
#line 5372 "orbit-policy.mc"
 GClosure *g_closure_ref( GClosure *closure); 
#line 5373 "orbit-policy.mc"
void g_closure_sink( GClosure *closure); 
#line 5374 "orbit-policy.mc"
void g_closure_unref( GClosure *closure); 
#line 5377 "orbit-policy.mc"
 GClosure *g_closure_new_simple( guint sizeof_closure,  gpointer data); 
#line 5380 "orbit-policy.mc"
void g_closure_add_finalize_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 5383 "orbit-policy.mc"
void g_closure_remove_finalize_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 5386 "orbit-policy.mc"
void g_closure_add_invalidate_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 5389 "orbit-policy.mc"
void g_closure_remove_invalidate_notifier( GClosure *closure,  gpointer notify_data,  GClosureNotify notify_func); 
#line 5394 "orbit-policy.mc"
void g_closure_add_marshal_guards( GClosure *closure,  gpointer pre_marshal_data,  GClosureNotify pre_marshal_notify,  gpointer post_marshal_data,  GClosureNotify post_marshal_notify); 
#line 5396 "orbit-policy.mc"
void g_closure_set_marshal( GClosure *closure,  GClosureMarshal marshal); 
#line 5399 "orbit-policy.mc"
void g_closure_set_meta_marshal( GClosure *closure,  gpointer marshal_data,  GClosureMarshal meta_marshal); 
#line 5400 "orbit-policy.mc"
void g_closure_invalidate( GClosure *closure); 
#line 5405 "orbit-policy.mc"
void g_closure_invoke( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint); 
#line 5418 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__VOID( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5426 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__BOOLEAN( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5434 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__CHAR( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5442 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__UCHAR( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5450 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__INT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5458 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__UINT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5466 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__LONG( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5474 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__ULONG( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5482 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__ENUM( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5490 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__FLAGS( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5498 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__FLOAT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5506 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__DOUBLE( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5514 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__STRING( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5522 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__PARAM( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5530 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__BOXED( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5538 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__POINTER( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5546 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__OBJECT( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5554 "orbit-policy.mc"
extern void g_cclosure_marshal_VOID__UINT_POINTER( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5562 "orbit-policy.mc"
extern void g_cclosure_marshal_BOOLEAN__FLAGS( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5571 "orbit-policy.mc"
extern void g_cclosure_marshal_STRING__OBJECT_POINTER( GClosure *closure,  GValue *return_value,  guint n_param_values, const  GValue *param_values,  gpointer invocation_hint,  gpointer marshal_data); 
#line 5578 "orbit-policy.mc"
typedef struct _GSignalQuery GSignalQuery; 
#line 5579 "orbit-policy.mc"
typedef struct _GSignalInvocationHint GSignalInvocationHint; 
#line 5580 "orbit-policy.mc"
typedef  GClosureMarshal GSignalCMarshaller; 
#line 5584 "orbit-policy.mc"
typedef  gboolean (*GSignalEmissionHook)( GSignalInvocationHint *ihint,  guint n_param_values, const  GValue *param_values,  gpointer data); 
#line 5588 "orbit-policy.mc"
typedef  gboolean (*GSignalAccumulator)( GSignalInvocationHint *ihint,  GValue *return_accu, const  GValue *handler_return,  gpointer data); 
#line 5601 "orbit-policy.mc"
typedef enum {G_SIGNAL_RUN_FIRST=1 << 0,G_SIGNAL_RUN_LAST=1 << 1,G_SIGNAL_RUN_CLEANUP=1 << 2,G_SIGNAL_NO_RECURSE=1 << 3,G_SIGNAL_DETAILED=1 << 4,G_SIGNAL_ACTION=1 << 5,G_SIGNAL_NO_HOOKS=1 << 6}GSignalFlags; 
#line 5607 "orbit-policy.mc"
typedef enum {G_CONNECT_AFTER=1 << 0,G_CONNECT_SWAPPED=1 << 1}GConnectFlags; 
#line 5616 "orbit-policy.mc"
typedef enum {G_SIGNAL_MATCH_ID=1 << 0,G_SIGNAL_MATCH_DETAIL=1 << 1,G_SIGNAL_MATCH_CLOSURE=1 << 2,G_SIGNAL_MATCH_FUNC=1 << 3,G_SIGNAL_MATCH_DATA=1 << 4,G_SIGNAL_MATCH_UNBLOCKED=1 << 5}GSignalMatchType; 
#line 5627 "orbit-policy.mc"
struct _GSignalInvocationHint { guint signal_id;  GQuark detail;  GSignalFlags run_type; }; 
#line 5637 "orbit-policy.mc"
struct _GSignalQuery { guint signal_id; const  gchar *signal_name;  GType itype;  GSignalFlags signal_flags;  GType return_type;  guint n_params; const  GType *param_types; }; 
#line 5650 "orbit-policy.mc"
 guint g_signal_newv(const  gchar *signal_name,  GType itype,  GSignalFlags signal_flags,  GClosure *class_closure,  GSignalAccumulator accumulator,  gpointer accu_data,  GSignalCMarshaller c_marshaller,  GType return_type,  guint n_params,  GType *param_types); 
#line 5660 "orbit-policy.mc"
 guint g_signal_new_valist(const  gchar *signal_name,  GType itype,  GSignalFlags signal_flags,  GClosure *class_closure,  GSignalAccumulator accumulator,  gpointer accu_data,  GSignalCMarshaller c_marshaller,  GType return_type,  guint n_params,  va_list args); 
#line 5670 "orbit-policy.mc"
 guint g_signal_new(const  gchar *signal_name,  GType itype,  GSignalFlags signal_flags,  guint class_offset,  GSignalAccumulator accumulator,  gpointer accu_data,  GSignalCMarshaller c_marshaller,  GType return_type,  guint n_params, ...); 
#line 5674 "orbit-policy.mc"
void g_signal_emitv(const  GValue *instance_and_params,  guint signal_id,  GQuark detail,  GValue *return_value); 
#line 5678 "orbit-policy.mc"
void g_signal_emit_valist( gpointer instance,  guint signal_id,  GQuark detail,  va_list var_args); 
#line 5682 "orbit-policy.mc"
void g_signal_emit( gpointer instance,  guint signal_id,  GQuark detail, ...); 
#line 5685 "orbit-policy.mc"
void g_signal_emit_by_name( gpointer instance, const  gchar *detailed_signal, ...); 
#line 5687 "orbit-policy.mc"
 guint g_signal_lookup(const  gchar *name,  GType itype); 
#line 5688 "orbit-policy.mc"
const  gchar *g_signal_name( guint signal_id); 
#line 5690 "orbit-policy.mc"
void g_signal_query( guint signal_id,  GSignalQuery *query); 
#line 5692 "orbit-policy.mc"
 guint *g_signal_list_ids( GType itype,  guint *n_ids); 
#line 5697 "orbit-policy.mc"
 gboolean g_signal_parse_name(const  gchar *detailed_signal,  GType itype,  guint *signal_id_p,  GQuark *detail_p,  gboolean force_detail_quark); 
#line 5698 "orbit-policy.mc"
 GSignalInvocationHint *g_signal_get_invocation_hint( gpointer instance); 
#line 5704 "orbit-policy.mc"
void g_signal_stop_emission( gpointer instance,  guint signal_id,  GQuark detail); 
#line 5706 "orbit-policy.mc"
void g_signal_stop_emission_by_name( gpointer instance, const  gchar *detailed_signal); 
#line 5711 "orbit-policy.mc"
 gulong g_signal_add_emission_hook( guint signal_id,  GQuark detail,  GSignalEmissionHook hook_func,  gpointer hook_data,  GDestroyNotify data_destroy); 
#line 5713 "orbit-policy.mc"
void g_signal_remove_emission_hook( guint signal_id,  gulong hook_id); 
#line 5720 "orbit-policy.mc"
 gboolean g_signal_has_handler_pending( gpointer instance,  guint signal_id,  GQuark detail,  gboolean may_be_blocked); 
#line 5725 "orbit-policy.mc"
 gulong g_signal_connect_closure_by_id( gpointer instance,  guint signal_id,  GQuark detail,  GClosure *closure,  gboolean after); 
#line 5729 "orbit-policy.mc"
 gulong g_signal_connect_closure( gpointer instance, const  gchar *detailed_signal,  GClosure *closure,  gboolean after); 
#line 5735 "orbit-policy.mc"
 gulong g_signal_connect_data( gpointer instance, const  gchar *detailed_signal,  GCallback c_handler,  gpointer data,  GClosureNotify destroy_data,  GConnectFlags connect_flags); 
#line 5737 "orbit-policy.mc"
void g_signal_handler_block( gpointer instance,  gulong handler_id); 
#line 5739 "orbit-policy.mc"
void g_signal_handler_unblock( gpointer instance,  gulong handler_id); 
#line 5741 "orbit-policy.mc"
void g_signal_handler_disconnect( gpointer instance,  gulong handler_id); 
#line 5743 "orbit-policy.mc"
 gboolean g_signal_handler_is_connected( gpointer instance,  gulong handler_id); 
#line 5750 "orbit-policy.mc"
 gulong g_signal_handler_find( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 5757 "orbit-policy.mc"
 guint g_signal_handlers_block_matched( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 5764 "orbit-policy.mc"
 guint g_signal_handlers_unblock_matched( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 5771 "orbit-policy.mc"
 guint g_signal_handlers_disconnect_matched( gpointer instance,  GSignalMatchType mask,  guint signal_id,  GQuark detail,  GClosure *closure,  gpointer func,  gpointer data); 
#line 5777 "orbit-policy.mc"
void g_signal_override_class_closure( guint signal_id,  GType instance_type,  GClosure *class_closure); 
#line 5779 "orbit-policy.mc"
void g_signal_chain_from_overridden(const  GValue *instance_and_params,  GValue *return_value); 
#line 5783 "orbit-policy.mc"
 gboolean g_signal_accumulator_true_handled( GSignalInvocationHint *ihint,  GValue *return_accu, const  GValue *handler_return,  gpointer dummy); 
#line 5786 "orbit-policy.mc"
void g_signal_handlers_destroy( gpointer instance); 
#line 5787 "orbit-policy.mc"
void _g_signals_destroy( GType itype); 
#line 5792 "orbit-policy.mc"
typedef struct _GObject GObject; 
#line 5793 "orbit-policy.mc"
typedef struct _GObjectClass GObjectClass; 
#line 5794 "orbit-policy.mc"
typedef struct _GObject GInitiallyUnowned; 
#line 5795 "orbit-policy.mc"
typedef struct _GObjectClass GInitiallyUnownedClass; 
#line 5796 "orbit-policy.mc"
typedef struct _GObjectConstructParam GObjectConstructParam; 
#line 5800 "orbit-policy.mc"
typedef void (*GObjectGetPropertyFunc)( GObject *object,  guint property_id,  GValue *value,  GParamSpec *pspec); 
#line 5804 "orbit-policy.mc"
typedef void (*GObjectSetPropertyFunc)( GObject *object,  guint property_id, const  GValue *value,  GParamSpec *pspec); 
#line 5805 "orbit-policy.mc"
typedef void (*GObjectFinalizeFunc)( GObject *object); 
#line 5807 "orbit-policy.mc"
typedef void (*GWeakNotify)( gpointer data,  GObject *where_the_object_was); 
#line 5815 "orbit-policy.mc"
struct _GObject { GTypeInstance g_type_instance; volatile  guint ref_count;  GData *qdata; }; 
#line 5850 "orbit-policy.mc"
struct _GObjectClass { GTypeClass g_type_class;  GSList *construct_properties;  GObject *(*constructor)( GType type,  guint n_construct_properties,  GObjectConstructParam *construct_properties); void (*set_property)( GObject *object,  guint property_id, const  GValue *value,  GParamSpec *pspec); void (*get_property)( GObject *object,  guint property_id,  GValue *value,  GParamSpec *pspec); void (*dispose)( GObject *object); void (*finalize)( GObject *object); void (*dispatch_properties_changed)( GObject *object,  guint n_pspecs,  GParamSpec **pspecs); void (*notify)( GObject *object,  GParamSpec *pspec);  gpointer pdummy[8]; }; 
#line 5855 "orbit-policy.mc"
struct _GObjectConstructParam { GParamSpec *pspec;  GValue *value; }; 
#line 5859 "orbit-policy.mc"
 GType g_initially_unowned_get_type(void ); 
#line 5862 "orbit-policy.mc"
void g_object_class_install_property( GObjectClass *oclass,  guint property_id,  GParamSpec *pspec); 
#line 5864 "orbit-policy.mc"
 GParamSpec *g_object_class_find_property( GObjectClass *oclass, const  gchar *property_name); 
#line 5866 "orbit-policy.mc"
 GParamSpec **g_object_class_list_properties( GObjectClass *oclass,  guint *n_properties); 
#line 5869 "orbit-policy.mc"
void g_object_class_override_property( GObjectClass *oclass,  guint property_id, const  gchar *name); 
#line 5872 "orbit-policy.mc"
void g_object_interface_install_property( gpointer g_iface,  GParamSpec *pspec); 
#line 5874 "orbit-policy.mc"
 GParamSpec *g_object_interface_find_property( gpointer g_iface, const  gchar *property_name); 
#line 5876 "orbit-policy.mc"
 GParamSpec **g_object_interface_list_properties( gpointer g_iface,  guint *n_properties_p); 
#line 5880 "orbit-policy.mc"
 gpointer g_object_new( GType object_type, const  gchar *first_property_name, ...); 
#line 5883 "orbit-policy.mc"
 gpointer g_object_newv( GType object_type,  guint n_parameters,  GParameter *parameters); 
#line 5886 "orbit-policy.mc"
 GObject *g_object_new_valist( GType object_type, const  gchar *first_property_name,  va_list var_args); 
#line 5889 "orbit-policy.mc"
void g_object_set( gpointer object, const  gchar *first_property_name, ...) __attribute__  (( __sentinel__ )) ; 
#line 5892 "orbit-policy.mc"
void g_object_get( gpointer object, const  gchar *first_property_name, ...) __attribute__  (( __sentinel__ )) ; 
#line 5895 "orbit-policy.mc"
 gpointer g_object_connect( gpointer object, const  gchar *signal_spec, ...) __attribute__  (( __sentinel__ )) ; 
#line 5898 "orbit-policy.mc"
void g_object_disconnect( gpointer object, const  gchar *signal_spec, ...) __attribute__  (( __sentinel__ )) ; 
#line 5901 "orbit-policy.mc"
void g_object_set_valist( GObject *object, const  gchar *first_property_name,  va_list var_args); 
#line 5904 "orbit-policy.mc"
void g_object_get_valist( GObject *object, const  gchar *first_property_name,  va_list var_args); 
#line 5907 "orbit-policy.mc"
void g_object_set_property( GObject *object, const  gchar *property_name, const  GValue *value); 
#line 5910 "orbit-policy.mc"
void g_object_get_property( GObject *object, const  gchar *property_name,  GValue *value); 
#line 5911 "orbit-policy.mc"
void g_object_freeze_notify( GObject *object); 
#line 5913 "orbit-policy.mc"
void g_object_notify( GObject *object, const  gchar *property_name); 
#line 5914 "orbit-policy.mc"
void g_object_thaw_notify( GObject *object); 
#line 5915 "orbit-policy.mc"
 gboolean g_object_is_floating( gpointer object); 
#line 5916 "orbit-policy.mc"
 gpointer g_object_ref_sink( gpointer object); 
#line 5917 "orbit-policy.mc"
 gpointer g_object_ref( gpointer object); 
#line 5918 "orbit-policy.mc"
void g_object_unref( gpointer object); 
#line 5921 "orbit-policy.mc"
void g_object_weak_ref( GObject *object,  GWeakNotify notify,  gpointer data); 
#line 5924 "orbit-policy.mc"
void g_object_weak_unref( GObject *object,  GWeakNotify notify,  gpointer data); 
#line 5926 "orbit-policy.mc"
void g_object_add_weak_pointer( GObject *object,  gpointer *weak_pointer_location); 
#line 5928 "orbit-policy.mc"
void g_object_remove_weak_pointer( GObject *object,  gpointer *weak_pointer_location); 
#line 5932 "orbit-policy.mc"
typedef void (*GToggleNotify)( gpointer data,  GObject *object,  gboolean is_last_ref); 
#line 5936 "orbit-policy.mc"
void g_object_add_toggle_ref( GObject *object,  GToggleNotify notify,  gpointer data); 
#line 5939 "orbit-policy.mc"
void g_object_remove_toggle_ref( GObject *object,  GToggleNotify notify,  gpointer data); 
#line 5942 "orbit-policy.mc"
 gpointer g_object_get_qdata( GObject *object,  GQuark quark); 
#line 5945 "orbit-policy.mc"
void g_object_set_qdata( GObject *object,  GQuark quark,  gpointer data); 
#line 5949 "orbit-policy.mc"
void g_object_set_qdata_full( GObject *object,  GQuark quark,  gpointer data,  GDestroyNotify destroy); 
#line 5951 "orbit-policy.mc"
 gpointer g_object_steal_qdata( GObject *object,  GQuark quark); 
#line 5953 "orbit-policy.mc"
 gpointer g_object_get_data( GObject *object, const  gchar *key); 
#line 5956 "orbit-policy.mc"
void g_object_set_data( GObject *object, const  gchar *key,  gpointer data); 
#line 5960 "orbit-policy.mc"
void g_object_set_data_full( GObject *object, const  gchar *key,  gpointer data,  GDestroyNotify destroy); 
#line 5962 "orbit-policy.mc"
 gpointer g_object_steal_data( GObject *object, const  gchar *key); 
#line 5964 "orbit-policy.mc"
void g_object_watch_closure( GObject *object,  GClosure *closure); 
#line 5966 "orbit-policy.mc"
 GClosure *g_cclosure_new_object( GCallback callback_func,  GObject *object); 
#line 5968 "orbit-policy.mc"
 GClosure *g_cclosure_new_object_swap( GCallback callback_func,  GObject *object); 
#line 5970 "orbit-policy.mc"
 GClosure *g_closure_new_object( guint sizeof_closure,  GObject *object); 
#line 5972 "orbit-policy.mc"
void g_value_set_object( GValue *value,  gpointer v_object); 
#line 5973 "orbit-policy.mc"
 gpointer g_value_get_object(const  GValue *value); 
#line 5974 "orbit-policy.mc"
 GObject *g_value_dup_object(const  GValue *value); 
#line 5979 "orbit-policy.mc"
 gulong g_signal_connect_object( gpointer instance, const  gchar *detailed_signal,  GCallback c_handler,  gpointer gobject,  GConnectFlags connect_flags); 
#line 5982 "orbit-policy.mc"
void g_object_force_floating( GObject *object); 
#line 5983 "orbit-policy.mc"
void g_object_run_dispose( GObject *object); 
#line 5987 "orbit-policy.mc"
void g_value_take_object( GValue *value,  gpointer v_object); 
#line 5991 "orbit-policy.mc"
typedef struct _GParamSpecChar GParamSpecChar; 
#line 5992 "orbit-policy.mc"
typedef struct _GParamSpecUChar GParamSpecUChar; 
#line 5993 "orbit-policy.mc"
typedef struct _GParamSpecBoolean GParamSpecBoolean; 
#line 5994 "orbit-policy.mc"
typedef struct _GParamSpecInt GParamSpecInt; 
#line 5995 "orbit-policy.mc"
typedef struct _GParamSpecUInt GParamSpecUInt; 
#line 5996 "orbit-policy.mc"
typedef struct _GParamSpecLong GParamSpecLong; 
#line 5997 "orbit-policy.mc"
typedef struct _GParamSpecULong GParamSpecULong; 
#line 5998 "orbit-policy.mc"
typedef struct _GParamSpecInt64 GParamSpecInt64; 
#line 5999 "orbit-policy.mc"
typedef struct _GParamSpecUInt64 GParamSpecUInt64; 
#line 6000 "orbit-policy.mc"
typedef struct _GParamSpecUnichar GParamSpecUnichar; 
#line 6001 "orbit-policy.mc"
typedef struct _GParamSpecEnum GParamSpecEnum; 
#line 6002 "orbit-policy.mc"
typedef struct _GParamSpecFlags GParamSpecFlags; 
#line 6003 "orbit-policy.mc"
typedef struct _GParamSpecFloat GParamSpecFloat; 
#line 6004 "orbit-policy.mc"
typedef struct _GParamSpecDouble GParamSpecDouble; 
#line 6005 "orbit-policy.mc"
typedef struct _GParamSpecString GParamSpecString; 
#line 6006 "orbit-policy.mc"
typedef struct _GParamSpecParam GParamSpecParam; 
#line 6007 "orbit-policy.mc"
typedef struct _GParamSpecBoxed GParamSpecBoxed; 
#line 6008 "orbit-policy.mc"
typedef struct _GParamSpecPointer GParamSpecPointer; 
#line 6009 "orbit-policy.mc"
typedef struct _GParamSpecValueArray GParamSpecValueArray; 
#line 6010 "orbit-policy.mc"
typedef struct _GParamSpecObject GParamSpecObject; 
#line 6011 "orbit-policy.mc"
typedef struct _GParamSpecOverride GParamSpecOverride; 
#line 6012 "orbit-policy.mc"
typedef struct _GParamSpecGType GParamSpecGType; 
#line 6021 "orbit-policy.mc"
struct _GParamSpecChar { GParamSpec parent_instance;  gint8 minimum;  gint8 maximum;  gint8 default_value; }; 
#line 6029 "orbit-policy.mc"
struct _GParamSpecUChar { GParamSpec parent_instance;  guint8 minimum;  guint8 maximum;  guint8 default_value; }; 
#line 6035 "orbit-policy.mc"
struct _GParamSpecBoolean { GParamSpec parent_instance;  gboolean default_value; }; 
#line 6043 "orbit-policy.mc"
struct _GParamSpecInt { GParamSpec parent_instance;  gint minimum;  gint maximum;  gint default_value; }; 
#line 6051 "orbit-policy.mc"
struct _GParamSpecUInt { GParamSpec parent_instance;  guint minimum;  guint maximum;  guint default_value; }; 
#line 6059 "orbit-policy.mc"
struct _GParamSpecLong { GParamSpec parent_instance;  glong minimum;  glong maximum;  glong default_value; }; 
#line 6067 "orbit-policy.mc"
struct _GParamSpecULong { GParamSpec parent_instance;  gulong minimum;  gulong maximum;  gulong default_value; }; 
#line 6075 "orbit-policy.mc"
struct _GParamSpecInt64 { GParamSpec parent_instance;  gint64 minimum;  gint64 maximum;  gint64 default_value; }; 
#line 6083 "orbit-policy.mc"
struct _GParamSpecUInt64 { GParamSpec parent_instance;  guint64 minimum;  guint64 maximum;  guint64 default_value; }; 
#line 6089 "orbit-policy.mc"
struct _GParamSpecUnichar { GParamSpec parent_instance;  gunichar default_value; }; 
#line 6096 "orbit-policy.mc"
struct _GParamSpecEnum { GParamSpec parent_instance;  GEnumClass *enum_class;  gint default_value; }; 
#line 6103 "orbit-policy.mc"
struct _GParamSpecFlags { GParamSpec parent_instance;  GFlagsClass *flags_class;  guint default_value; }; 
#line 6112 "orbit-policy.mc"
struct _GParamSpecFloat { GParamSpec parent_instance;  gfloat minimum;  gfloat maximum;  gfloat default_value;  gfloat epsilon; }; 
#line 6121 "orbit-policy.mc"
struct _GParamSpecDouble { GParamSpec parent_instance;  gdouble minimum;  gdouble maximum;  gdouble default_value;  gdouble epsilon; }; 
#line 6132 "orbit-policy.mc"
struct _GParamSpecString { GParamSpec parent_instance;  gchar *default_value;  gchar *cset_first;  gchar *cset_nth;  gchar substitutor;  guint null_fold_if_empty:1;  guint ensure_non_null:1; }; 
#line 6136 "orbit-policy.mc"
struct _GParamSpecParam { GParamSpec parent_instance; }; 
#line 6140 "orbit-policy.mc"
struct _GParamSpecBoxed { GParamSpec parent_instance; }; 
#line 6144 "orbit-policy.mc"
struct _GParamSpecPointer { GParamSpec parent_instance; }; 
#line 6150 "orbit-policy.mc"
struct _GParamSpecValueArray { GParamSpec parent_instance;  GParamSpec *element_spec;  guint fixed_n_elements; }; 
#line 6154 "orbit-policy.mc"
struct _GParamSpecObject { GParamSpec parent_instance; }; 
#line 6160 "orbit-policy.mc"
struct _GParamSpecOverride { GParamSpec parent_instance;  GParamSpec *overridden; }; 
#line 6165 "orbit-policy.mc"
struct _GParamSpecGType { GParamSpec parent_instance;  GType is_a_type; }; 
#line 6174 "orbit-policy.mc"
 GParamSpec *g_param_spec_char(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gint8 minimum,  gint8 maximum,  gint8 default_value,  GParamFlags flags); 
#line 6181 "orbit-policy.mc"
 GParamSpec *g_param_spec_uchar(const  gchar *name, const  gchar *nick, const  gchar *blurb,  guint8 minimum,  guint8 maximum,  guint8 default_value,  GParamFlags flags); 
#line 6186 "orbit-policy.mc"
 GParamSpec *g_param_spec_boolean(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gboolean default_value,  GParamFlags flags); 
#line 6193 "orbit-policy.mc"
 GParamSpec *g_param_spec_int(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gint minimum,  gint maximum,  gint default_value,  GParamFlags flags); 
#line 6200 "orbit-policy.mc"
 GParamSpec *g_param_spec_uint(const  gchar *name, const  gchar *nick, const  gchar *blurb,  guint minimum,  guint maximum,  guint default_value,  GParamFlags flags); 
#line 6207 "orbit-policy.mc"
 GParamSpec *g_param_spec_long(const  gchar *name, const  gchar *nick, const  gchar *blurb,  glong minimum,  glong maximum,  glong default_value,  GParamFlags flags); 
#line 6214 "orbit-policy.mc"
 GParamSpec *g_param_spec_ulong(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gulong minimum,  gulong maximum,  gulong default_value,  GParamFlags flags); 
#line 6221 "orbit-policy.mc"
 GParamSpec *g_param_spec_int64(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gint64 minimum,  gint64 maximum,  gint64 default_value,  GParamFlags flags); 
#line 6228 "orbit-policy.mc"
 GParamSpec *g_param_spec_uint64(const  gchar *name, const  gchar *nick, const  gchar *blurb,  guint64 minimum,  guint64 maximum,  guint64 default_value,  GParamFlags flags); 
#line 6233 "orbit-policy.mc"
 GParamSpec *g_param_spec_unichar(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gunichar default_value,  GParamFlags flags); 
#line 6239 "orbit-policy.mc"
 GParamSpec *g_param_spec_enum(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType enum_type,  gint default_value,  GParamFlags flags); 
#line 6245 "orbit-policy.mc"
 GParamSpec *g_param_spec_flags(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType flags_type,  guint default_value,  GParamFlags flags); 
#line 6252 "orbit-policy.mc"
 GParamSpec *g_param_spec_float(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gfloat minimum,  gfloat maximum,  gfloat default_value,  GParamFlags flags); 
#line 6259 "orbit-policy.mc"
 GParamSpec *g_param_spec_double(const  gchar *name, const  gchar *nick, const  gchar *blurb,  gdouble minimum,  gdouble maximum,  gdouble default_value,  GParamFlags flags); 
#line 6264 "orbit-policy.mc"
 GParamSpec *g_param_spec_string(const  gchar *name, const  gchar *nick, const  gchar *blurb, const  gchar *default_value,  GParamFlags flags); 
#line 6269 "orbit-policy.mc"
 GParamSpec *g_param_spec_param(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType param_type,  GParamFlags flags); 
#line 6274 "orbit-policy.mc"
 GParamSpec *g_param_spec_boxed(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType boxed_type,  GParamFlags flags); 
#line 6278 "orbit-policy.mc"
 GParamSpec *g_param_spec_pointer(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GParamFlags flags); 
#line 6283 "orbit-policy.mc"
 GParamSpec *g_param_spec_value_array(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GParamSpec *element_spec,  GParamFlags flags); 
#line 6288 "orbit-policy.mc"
 GParamSpec *g_param_spec_object(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType object_type,  GParamFlags flags); 
#line 6290 "orbit-policy.mc"
 GParamSpec *g_param_spec_override(const  gchar *name,  GParamSpec *overridden); 
#line 6295 "orbit-policy.mc"
 GParamSpec *g_param_spec_gtype(const  gchar *name, const  gchar *nick, const  gchar *blurb,  GType is_a_type,  GParamFlags flags); 
#line 6296 "orbit-policy.mc"
extern  GType *g_param_spec_types; 
#line 6303 "orbit-policy.mc"
void g_source_set_closure( GSource *source,  GClosure *closure); 
#line 6305 "orbit-policy.mc"
 GType g_io_channel_get_type(void ); 
#line 6306 "orbit-policy.mc"
 GType g_io_condition_get_type(void ); 
#line 6315 "orbit-policy.mc"
typedef struct _GTypeModule GTypeModule; 
#line 6316 "orbit-policy.mc"
typedef struct _GTypeModuleClass GTypeModuleClass; 
#line 6327 "orbit-policy.mc"
struct _GTypeModule { GObject parent_instance;  guint use_count;  GSList *type_infos;  GSList *interface_infos;  gchar *name; }; 
#line 6343 "orbit-policy.mc"
struct _GTypeModuleClass { GObjectClass parent_class;  gboolean (*load)( GTypeModule *module); void (*unload)( GTypeModule *module); void (*reserved1)(void ); void (*reserved2)(void ); void (*reserved3)(void ); void (*reserved4)(void ); }; 
#line 6345 "orbit-policy.mc"
 GType g_type_module_get_type(void ) __attribute__  (( __const__ )) ; 
#line 6346 "orbit-policy.mc"
 gboolean g_type_module_use( GTypeModule *module); 
#line 6347 "orbit-policy.mc"
void g_type_module_unuse( GTypeModule *module); 
#line 6349 "orbit-policy.mc"
void g_type_module_set_name( GTypeModule *module, const  gchar *name); 
#line 6354 "orbit-policy.mc"
 GType g_type_module_register_type( GTypeModule *module,  GType parent_type, const  gchar *type_name, const  GTypeInfo *type_info,  GTypeFlags flags); 
#line 6358 "orbit-policy.mc"
void g_type_module_add_interface( GTypeModule *module,  GType instance_type,  GType interface_type, const  GInterfaceInfo *interface_info); 
#line 6361 "orbit-policy.mc"
 GType g_type_module_register_enum( GTypeModule *module, const  gchar *name, const  GEnumValue *const_static_values); 
#line 6364 "orbit-policy.mc"
 GType g_type_module_register_flags( GTypeModule *module, const  gchar *name, const  GFlagsValue *const_static_values); 
#line 6369 "orbit-policy.mc"
typedef struct _GTypePluginClass GTypePluginClass; 
#line 6370 "orbit-policy.mc"
typedef void (*GTypePluginUse)( GTypePlugin *plugin); 
#line 6371 "orbit-policy.mc"
typedef void (*GTypePluginUnuse)( GTypePlugin *plugin); 
#line 6375 "orbit-policy.mc"
typedef void (*GTypePluginCompleteTypeInfo)( GTypePlugin *plugin,  GType g_type,  GTypeInfo *info,  GTypeValueTable *value_table); 
#line 6379 "orbit-policy.mc"
typedef void (*GTypePluginCompleteInterfaceInfo)( GTypePlugin *plugin,  GType instance_type,  GType interface_type,  GInterfaceInfo *info); 
#line 6390 "orbit-policy.mc"
struct _GTypePluginClass { GTypeInterface base_iface;  GTypePluginUse use_plugin;  GTypePluginUnuse unuse_plugin;  GTypePluginCompleteTypeInfo complete_type_info;  GTypePluginCompleteInterfaceInfo complete_interface_info; }; 
#line 6394 "orbit-policy.mc"
 GType g_type_plugin_get_type(void ) __attribute__  (( __const__ )) ; 
#line 6395 "orbit-policy.mc"
void g_type_plugin_use( GTypePlugin *plugin); 
#line 6396 "orbit-policy.mc"
void g_type_plugin_unuse( GTypePlugin *plugin); 
#line 6400 "orbit-policy.mc"
void g_type_plugin_complete_type_info( GTypePlugin *plugin,  GType g_type,  GTypeInfo *info,  GTypeValueTable *value_table); 
#line 6404 "orbit-policy.mc"
void g_type_plugin_complete_interface_info( GTypePlugin *plugin,  GType instance_type,  GType interface_type,  GInterfaceInfo *info); 
#line 6413 "orbit-policy.mc"
typedef struct _GValueArray GValueArray; 
#line 6421 "orbit-policy.mc"
struct _GValueArray { guint n_values;  GValue *values;  guint n_prealloced; }; 
#line 6426 "orbit-policy.mc"
 GValue *g_value_array_get_nth( GValueArray *value_array,  guint index_); 
#line 6427 "orbit-policy.mc"
 GValueArray *g_value_array_new( guint n_prealloced); 
#line 6428 "orbit-policy.mc"
void g_value_array_free( GValueArray *value_array); 
#line 6429 "orbit-policy.mc"
 GValueArray *g_value_array_copy(const  GValueArray *value_array); 
#line 6431 "orbit-policy.mc"
 GValueArray *g_value_array_prepend( GValueArray *value_array, const  GValue *value); 
#line 6433 "orbit-policy.mc"
 GValueArray *g_value_array_append( GValueArray *value_array, const  GValue *value); 
#line 6436 "orbit-policy.mc"
 GValueArray *g_value_array_insert( GValueArray *value_array,  guint index_, const  GValue *value); 
#line 6438 "orbit-policy.mc"
 GValueArray *g_value_array_remove( GValueArray *value_array,  guint index_); 
#line 6440 "orbit-policy.mc"
 GValueArray *g_value_array_sort( GValueArray *value_array,  GCompareFunc compare_func); 
#line 6443 "orbit-policy.mc"
 GValueArray *g_value_array_sort_with_data( GValueArray *value_array,  GCompareDataFunc compare_func,  gpointer user_data); 
#line 6450 "orbit-policy.mc"
void g_value_set_char( GValue *value,  gchar v_char); 
#line 6451 "orbit-policy.mc"
 gchar g_value_get_char(const  GValue *value); 
#line 6453 "orbit-policy.mc"
void g_value_set_uchar( GValue *value,  guchar v_uchar); 
#line 6454 "orbit-policy.mc"
 guchar g_value_get_uchar(const  GValue *value); 
#line 6456 "orbit-policy.mc"
void g_value_set_boolean( GValue *value,  gboolean v_boolean); 
#line 6457 "orbit-policy.mc"
 gboolean g_value_get_boolean(const  GValue *value); 
#line 6459 "orbit-policy.mc"
void g_value_set_int( GValue *value,  gint v_int); 
#line 6460 "orbit-policy.mc"
 gint g_value_get_int(const  GValue *value); 
#line 6462 "orbit-policy.mc"
void g_value_set_uint( GValue *value,  guint v_uint); 
#line 6463 "orbit-policy.mc"
 guint g_value_get_uint(const  GValue *value); 
#line 6465 "orbit-policy.mc"
void g_value_set_long( GValue *value,  glong v_long); 
#line 6466 "orbit-policy.mc"
 glong g_value_get_long(const  GValue *value); 
#line 6468 "orbit-policy.mc"
void g_value_set_ulong( GValue *value,  gulong v_ulong); 
#line 6469 "orbit-policy.mc"
 gulong g_value_get_ulong(const  GValue *value); 
#line 6471 "orbit-policy.mc"
void g_value_set_int64( GValue *value,  gint64 v_int64); 
#line 6472 "orbit-policy.mc"
 gint64 g_value_get_int64(const  GValue *value); 
#line 6474 "orbit-policy.mc"
void g_value_set_uint64( GValue *value,  guint64 v_uint64); 
#line 6475 "orbit-policy.mc"
 guint64 g_value_get_uint64(const  GValue *value); 
#line 6477 "orbit-policy.mc"
void g_value_set_float( GValue *value,  gfloat v_float); 
#line 6478 "orbit-policy.mc"
 gfloat g_value_get_float(const  GValue *value); 
#line 6480 "orbit-policy.mc"
void g_value_set_double( GValue *value,  gdouble v_double); 
#line 6481 "orbit-policy.mc"
 gdouble g_value_get_double(const  GValue *value); 
#line 6483 "orbit-policy.mc"
void g_value_set_string( GValue *value, const  gchar *v_string); 
#line 6485 "orbit-policy.mc"
void g_value_set_static_string( GValue *value, const  gchar *v_string); 
#line 6486 "orbit-policy.mc"
const  gchar *g_value_get_string(const  GValue *value); 
#line 6487 "orbit-policy.mc"
 gchar *g_value_dup_string(const  GValue *value); 
#line 6489 "orbit-policy.mc"
void g_value_set_pointer( GValue *value,  gpointer v_pointer); 
#line 6490 "orbit-policy.mc"
 gpointer g_value_get_pointer(const  GValue *value); 
#line 6491 "orbit-policy.mc"
 GType g_gtype_get_type(void ); 
#line 6493 "orbit-policy.mc"
void g_value_set_gtype( GValue *value,  GType v_gtype); 
#line 6494 "orbit-policy.mc"
 GType g_value_get_gtype(const  GValue *value); 
#line 6498 "orbit-policy.mc"
 GType g_pointer_type_register_static(const  gchar *name); 
#line 6501 "orbit-policy.mc"
 gchar *g_strdup_value_contents(const  GValue *value); 
#line 6505 "orbit-policy.mc"
void g_value_take_string( GValue *value,  gchar *v_string); 
#line 6513 "orbit-policy.mc"
typedef  gchar *gchararray; 
#line 6525 "orbit-policy.mc"
typedef enum {LINK_CONNECTION_SSL=1 << 0,LINK_CONNECTION_NONBLOCKING=1 << 1,LINK_CONNECTION_BLOCK_SIGNAL=1 << 2,LINK_CONNECTION_LOCAL_ONLY=1 << 3}LinkConnectionOptions; 
#line 6527 "orbit-policy.mc"
typedef struct _LinkWatch LinkWatch; 
#line 6528 "orbit-policy.mc"
typedef struct _LinkProtocolInfo LinkProtocolInfo; 
#line 6529 "orbit-policy.mc"
 GMutex *link_mutex_new(void ); 
#line 6541 "orbit-policy.mc"
typedef  __u_char u_char; 
#line 6542 "orbit-policy.mc"
typedef  __u_short u_short; 
#line 6543 "orbit-policy.mc"
typedef  __u_int u_int; 
#line 6544 "orbit-policy.mc"
typedef  __u_long u_long; 
#line 6545 "orbit-policy.mc"
typedef  __quad_t quad_t; 
#line 6546 "orbit-policy.mc"
typedef  __u_quad_t u_quad_t; 
#line 6547 "orbit-policy.mc"
typedef  __fsid_t fsid_t; 
#line 6552 "orbit-policy.mc"
typedef  __loff_t loff_t; 
#line 6556 "orbit-policy.mc"
typedef  __ino_t ino_t; 
#line 6557 "orbit-policy.mc"
typedef  __dev_t dev_t; 
#line 6562 "orbit-policy.mc"
typedef  __gid_t gid_t; 
#line 6567 "orbit-policy.mc"
typedef  __mode_t mode_t; 
#line 6572 "orbit-policy.mc"
typedef  __nlink_t nlink_t; 
#line 6577 "orbit-policy.mc"
typedef  __uid_t uid_t; 
#line 6583 "orbit-policy.mc"
typedef  __off_t off_t; 
#line 6584 "orbit-policy.mc"
typedef  __id_t id_t; 
#line 6589 "orbit-policy.mc"
typedef  __ssize_t ssize_t; 
#line 6595 "orbit-policy.mc"
typedef  __daddr_t daddr_t; 
#line 6596 "orbit-policy.mc"
typedef  __caddr_t caddr_t; 
#line 6602 "orbit-policy.mc"
typedef  __key_t key_t; 
#line 6606 "orbit-policy.mc"
typedef unsigned long int ulong; 
#line 6607 "orbit-policy.mc"
typedef unsigned short int ushort; 
#line 6608 "orbit-policy.mc"
typedef unsigned int uint; 
#line 6609 "orbit-policy.mc"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 6610 "orbit-policy.mc"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 6611 "orbit-policy.mc"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 6612 "orbit-policy.mc"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 6615 "orbit-policy.mc"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 6616 "orbit-policy.mc"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 6617 "orbit-policy.mc"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 6618 "orbit-policy.mc"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 6620 "orbit-policy.mc"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
#line 6623 "orbit-policy.mc"
typedef int __sig_atomic_t; 
#line 6631 "orbit-policy.mc"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; }__sigset_t; 
#line 6635 "orbit-policy.mc"
typedef  __sigset_t sigset_t; 
#line 6647 "orbit-policy.mc"
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; }; 
#line 6650 "orbit-policy.mc"
typedef  __suseconds_t suseconds_t; 
#line 6656 "orbit-policy.mc"
typedef long int __fd_mask; 
#line 6668 "orbit-policy.mc"
typedef struct { __fd_mask __fds_bits[1024 / (8 * sizeof ( __fd_mask ))]; }fd_set; 
#line 6675 "orbit-policy.mc"
typedef  __fd_mask fd_mask; 
#line 6680 "orbit-policy.mc"
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 6685 "orbit-policy.mc"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
#line 6693 "orbit-policy.mc"
 __extension__ extern __inline unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 6696 "orbit-policy.mc"
 __extension__ extern __inline unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 6700 "orbit-policy.mc"
 __extension__ extern __inline unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ )) ; 
#line 6705 "orbit-policy.mc"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_major(unsigned long long int __dev)  {

#line 6706 "orbit-policy.mc"
return ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff)); }
 
#line 6711 "orbit-policy.mc"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  {

#line 6712 "orbit-policy.mc"
return (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff)); }
 
#line 6717 "orbit-policy.mc"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  {

#line 6720 "orbit-policy.mc"
return ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32)); }
 
#line 6722 "orbit-policy.mc"
typedef  __blkcnt_t blkcnt_t; 
#line 6726 "orbit-policy.mc"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 6730 "orbit-policy.mc"
typedef  __fsfilcnt_t fsfilcnt_t; 
#line 6731 "orbit-policy.mc"
typedef unsigned long int pthread_t; 
#line 6738 "orbit-policy.mc"
typedef union {char __size[36]; long int __align; }pthread_attr_t; 
#line 6744 "orbit-policy.mc"
typedef struct __pthread_internal_slist {struct __pthread_internal_slist *__next; }__pthread_slist_t; 
#line 6768 "orbit-policy.mc"
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; int __kind; unsigned int __nusers;  __extension__ union {int __spins;  __pthread_slist_t __list; }; }__data; char __size[24]; long int __align; }pthread_mutex_t; 
#line 6774 "orbit-policy.mc"
typedef union {char __size[4]; long int __align; }pthread_mutexattr_t; 
#line 6794 "orbit-policy.mc"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; }__data; char __size[48];  __extension__ long long int __align; }pthread_cond_t; 
#line 6800 "orbit-policy.mc"
typedef union {char __size[4]; long int __align; }pthread_condattr_t; 
#line 6804 "orbit-policy.mc"
typedef unsigned int pthread_key_t; 
#line 6808 "orbit-policy.mc"
typedef int pthread_once_t; 
#line 6831 "orbit-policy.mc"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; unsigned int __flags; int __writer; }__data; char __size[32]; long int __align; }pthread_rwlock_t; 
#line 6837 "orbit-policy.mc"
typedef union {char __size[8]; long int __align; }pthread_rwlockattr_t; 
#line 6843 "orbit-policy.mc"
typedef volatile int pthread_spinlock_t; 
#line 6852 "orbit-policy.mc"
typedef union {char __size[20]; long int __align; }pthread_barrier_t; 
#line 6858 "orbit-policy.mc"
typedef union {char __size[4]; int __align; }pthread_barrierattr_t; 
#line 6876 "orbit-policy.mc"
struct iovec {void *iov_base;  size_t iov_len; }; 
#line 6877 "orbit-policy.mc"
extern  ssize_t readv(int __fd, __const struct iovec *__iovec, int __count); 
#line 6878 "orbit-policy.mc"
extern  ssize_t writev(int __fd, __const struct iovec *__iovec, int __count); 
#line 6892 "orbit-policy.mc"
typedef  __socklen_t socklen_t; 
#line 6916 "orbit-policy.mc"
enum __socket_type {SOCK_STREAM=1,SOCK_DGRAM=2,SOCK_RAW=3,SOCK_RDM=4,SOCK_SEQPACKET=5,SOCK_PACKET=10}; 
#line 6917 "orbit-policy.mc"
typedef unsigned short int sa_family_t; 
#line 6924 "orbit-policy.mc"
struct sockaddr { sa_family_t sa_family; char sa_data[14]; }; 
#line 6930 "orbit-policy.mc"
struct sockaddr_storage { sa_family_t ss_family;  __uint32_t __ss_align; char __ss_padding[(128 - (2 * sizeof ( __uint32_t )))]; }; 
#line 6973 "orbit-policy.mc"
enum {MSG_OOB=0x01,MSG_PEEK=0x02,MSG_DONTROUTE=0x04,MSG_CTRUNC=0x08,MSG_PROXY=0x10,MSG_TRUNC=0x20,MSG_DONTWAIT=0x40,MSG_EOR=0x80,MSG_WAITALL=0x100,MSG_FIN=0x200,MSG_SYN=0x400,MSG_CONFIRM=0x800,MSG_RST=0x1000,MSG_ERRQUEUE=0x2000,MSG_NOSIGNAL=0x4000,MSG_MORE=0x8000}; 
#line 6990 "orbit-policy.mc"
struct msghdr {void *msg_name;  socklen_t msg_namelen; struct iovec *msg_iov;  size_t msg_iovlen; void *msg_control;  size_t msg_controllen; int msg_flags; }; 
#line 7002 "orbit-policy.mc"
struct cmsghdr { size_t cmsg_len; int cmsg_level; int cmsg_type;  __extension__ unsigned char __cmsg_data[]; }; 
#line 7004 "orbit-policy.mc"
extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg) __attribute__  (( __nothrow__ )) ; 
#line 7011 "orbit-policy.mc"
extern __inline struct cmsghdr * __attribute__  (( __nothrow__ )) __cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg)  {

#line 7016 "orbit-policy.mc"
if ((( size_t )(__cmsg->cmsg_len)) < sizeof (struct cmsghdr )){
return 0; }
#line 7016 "orbit-policy.mc"
__cmsg = ((struct cmsghdr *)(((unsigned char *)__cmsg) + ((((__cmsg->cmsg_len)) + sizeof ( size_t ) - 1) & (( size_t )(~(sizeof ( size_t ) - 1)))))); 
#line 7018 "orbit-policy.mc"
if (((unsigned char *)(__cmsg + 1)) > (((unsigned char *)(__mhdr->msg_control)) + (__mhdr->msg_controllen)) || (((unsigned char *)__cmsg) + ((((__cmsg->cmsg_len)) + sizeof ( size_t ) - 1) & (( size_t )(~(sizeof ( size_t ) - 1)))) > (((unsigned char *)(__mhdr->msg_control)) + (__mhdr->msg_controllen)))){
return 0; }
#line 7024 "orbit-policy.mc"
return __cmsg; }
 
#line 7038 "orbit-policy.mc"
enum {SCM_RIGHTS=0x01,SCM_CREDENTIALS=0x02}; 
#line 7047 "orbit-policy.mc"
struct ucred { pid_t pid;  uid_t uid;  gid_t gid; }; 
#line 7060 "orbit-policy.mc"
struct linger {int l_onoff; int l_linger; }; 
#line 7069 "orbit-policy.mc"
struct osockaddr {unsigned short int sa_family; unsigned char sa_data[14]; }; 
#line 7082 "orbit-policy.mc"
enum {SHUT_RD=0,SHUT_WR,SHUT_RDWR}; 
#line 7083 "orbit-policy.mc"
extern int socket(int __domain, int __type, int __protocol) __attribute__  (( __nothrow__ )) ; 
#line 7090 "orbit-policy.mc"
extern int socketpair(int __domain, int __type, int __protocol, int __fds[2]) __attribute__  (( __nothrow__ )) ; 
#line 7094 "orbit-policy.mc"
extern int bind(int __fd, __const struct sockaddr *__addr,  socklen_t __len) __attribute__  (( __nothrow__ )) ; 
#line 7098 "orbit-policy.mc"
extern int getsockname(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 7099 "orbit-policy.mc"
extern int connect(int __fd, __const struct sockaddr *__addr,  socklen_t __len); 
#line 7104 "orbit-policy.mc"
extern int getpeername(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 7111 "orbit-policy.mc"
extern  ssize_t send(int __fd, __const void *__buf,  size_t __n, int __flags); 
#line 7118 "orbit-policy.mc"
extern  ssize_t recv(int __fd, void *__buf,  size_t __n, int __flags); 
#line 7127 "orbit-policy.mc"
extern  ssize_t sendto(int __fd, __const void *__buf,  size_t __n, int __flags, __const struct sockaddr *__addr,  socklen_t __addr_len); 
#line 7130 "orbit-policy.mc"
extern  ssize_t recvfrom(int __fd, void *__restrict __buf,  size_t __n, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
#line 7139 "orbit-policy.mc"
extern  ssize_t sendmsg(int __fd, __const struct msghdr *__message, int __flags); 
#line 7146 "orbit-policy.mc"
extern  ssize_t recvmsg(int __fd, struct msghdr *__message, int __flags); 
#line 7154 "orbit-policy.mc"
extern int getsockopt(int __fd, int __level, int __optname, void *__restrict __optval,  socklen_t *__restrict __optlen) __attribute__  (( __nothrow__ )) ; 
#line 7160 "orbit-policy.mc"
extern int setsockopt(int __fd, int __level, int __optname, __const void *__optval,  socklen_t __optlen) __attribute__  (( __nothrow__ )) ; 
#line 7166 "orbit-policy.mc"
extern int listen(int __fd, int __n) __attribute__  (( __nothrow__ )) ; 
#line 7168 "orbit-policy.mc"
extern int accept(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
#line 7176 "orbit-policy.mc"
extern int shutdown(int __fd, int __how) __attribute__  (( __nothrow__ )) ; 
#line 7181 "orbit-policy.mc"
extern int sockatmark(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 7189 "orbit-policy.mc"
extern int isfdtype(int __fd, int __fdtype) __attribute__  (( __nothrow__ )) ; 
#line 7191 "orbit-policy.mc"
typedef unsigned char uint8_t; 
#line 7192 "orbit-policy.mc"
typedef unsigned short int uint16_t; 
#line 7194 "orbit-policy.mc"
typedef unsigned int uint32_t; 
#line 7201 "orbit-policy.mc"
 __extension__ typedef unsigned long long int uint64_t; 
#line 7208 "orbit-policy.mc"
typedef signed char int_least8_t; 
#line 7209 "orbit-policy.mc"
typedef short int int_least16_t; 
#line 7210 "orbit-policy.mc"
typedef int int_least32_t; 
#line 7215 "orbit-policy.mc"
 __extension__ typedef long long int int_least64_t; 
#line 7219 "orbit-policy.mc"
typedef unsigned char uint_least8_t; 
#line 7220 "orbit-policy.mc"
typedef unsigned short int uint_least16_t; 
#line 7221 "orbit-policy.mc"
typedef unsigned int uint_least32_t; 
#line 7226 "orbit-policy.mc"
 __extension__ typedef unsigned long long int uint_least64_t; 
#line 7233 "orbit-policy.mc"
typedef signed char int_fast8_t; 
#line 7239 "orbit-policy.mc"
typedef int int_fast16_t; 
#line 7240 "orbit-policy.mc"
typedef int int_fast32_t; 
#line 7242 "orbit-policy.mc"
 __extension__ typedef long long int int_fast64_t; 
#line 7246 "orbit-policy.mc"
typedef unsigned char uint_fast8_t; 
#line 7252 "orbit-policy.mc"
typedef unsigned int uint_fast16_t; 
#line 7253 "orbit-policy.mc"
typedef unsigned int uint_fast32_t; 
#line 7255 "orbit-policy.mc"
 __extension__ typedef unsigned long long int uint_fast64_t; 
#line 7256 "orbit-policy.mc"
typedef int intptr_t; 
#line 7259 "orbit-policy.mc"
typedef unsigned int uintptr_t; 
#line 7261 "orbit-policy.mc"
 __extension__ typedef long long int intmax_t; 
#line 7263 "orbit-policy.mc"
 __extension__ typedef unsigned long long int uintmax_t; 
#line 7328 "orbit-policy.mc"
enum {IPPROTO_IP=0,IPPROTO_HOPOPTS=0,IPPROTO_ICMP=1,IPPROTO_IGMP=2,IPPROTO_IPIP=4,IPPROTO_TCP=6,IPPROTO_EGP=8,IPPROTO_PUP=12,IPPROTO_UDP=17,IPPROTO_IDP=22,IPPROTO_TP=29,IPPROTO_IPV6=41,IPPROTO_ROUTING=43,IPPROTO_FRAGMENT=44,IPPROTO_RSVP=46,IPPROTO_GRE=47,IPPROTO_ESP=50,IPPROTO_AH=51,IPPROTO_ICMPV6=58,IPPROTO_NONE=59,IPPROTO_DSTOPTS=60,IPPROTO_MTP=92,IPPROTO_ENCAP=98,IPPROTO_PIM=103,IPPROTO_COMP=108,IPPROTO_SCTP=132,IPPROTO_RAW=255,IPPROTO_MAX}; 
#line 7332 "orbit-policy.mc"
typedef  uint16_t in_port_t; 
#line 7372 "orbit-policy.mc"
enum {IPPORT_ECHO=7,IPPORT_DISCARD=9,IPPORT_SYSTAT=11,IPPORT_DAYTIME=13,IPPORT_NETSTAT=15,IPPORT_FTP=21,IPPORT_TELNET=23,IPPORT_SMTP=25,IPPORT_TIMESERVER=37,IPPORT_NAMESERVER=42,IPPORT_WHOIS=43,IPPORT_MTP=57,IPPORT_TFTP=69,IPPORT_RJE=77,IPPORT_FINGER=79,IPPORT_TTYLINK=87,IPPORT_SUPDUP=95,IPPORT_EXECSERVER=512,IPPORT_LOGINSERVER=513,IPPORT_CMDSERVER=514,IPPORT_EFSSERVER=520,IPPORT_BIFFUDP=512,IPPORT_WHOSERVER=513,IPPORT_ROUTESERVER=520,IPPORT_RESERVED=1024,IPPORT_USERRESERVED=5000}; 
#line 7376 "orbit-policy.mc"
typedef  uint32_t in_addr_t; 
#line 7380 "orbit-policy.mc"
struct in_addr { in_addr_t s_addr; }; 
#line 7392 "orbit-policy.mc"
struct in6_addr {union { uint8_t u6_addr8[16];  uint16_t u6_addr16[8];  uint32_t u6_addr32[4]; }in6_u; }; 
#line 7394 "orbit-policy.mc"
extern const struct in6_addr in6addr_any; 
#line 7395 "orbit-policy.mc"
extern const struct in6_addr in6addr_loopback; 
#line 7407 "orbit-policy.mc"
struct sockaddr_in { sa_family_t sin_family;  in_port_t sin_port; struct in_addr sin_addr; unsigned char sin_zero[sizeof (struct sockaddr ) - (sizeof (unsigned short int )) - sizeof ( in_port_t ) - sizeof (struct in_addr )]; }; 
#line 7417 "orbit-policy.mc"
struct sockaddr_in6 { sa_family_t sin6_family;  in_port_t sin6_port;  uint32_t sin6_flowinfo; struct in6_addr sin6_addr;  uint32_t sin6_scope_id; }; 
#line 7428 "orbit-policy.mc"
struct ip_mreq {struct in_addr imr_multiaddr; struct in_addr imr_interface; }; 
#line 7440 "orbit-policy.mc"
struct ip_mreq_source {struct in_addr imr_multiaddr; struct in_addr imr_interface; struct in_addr imr_sourceaddr; }; 
#line 7450 "orbit-policy.mc"
struct ipv6_mreq {struct in6_addr ipv6mr_multiaddr; unsigned int ipv6mr_interface; }; 
#line 7461 "orbit-policy.mc"
struct group_req { uint32_t gr_interface; struct sockaddr_storage gr_group; }; 
#line 7473 "orbit-policy.mc"
struct group_source_req { uint32_t gsr_interface; struct sockaddr_storage gsr_group; struct sockaddr_storage gsr_source; }; 
#line 7492 "orbit-policy.mc"
struct ip_msfilter {struct in_addr imsf_multiaddr; struct in_addr imsf_interface;  uint32_t imsf_fmode;  uint32_t imsf_numsrc; struct in_addr imsf_slist[1]; }; 
#line 7513 "orbit-policy.mc"
struct group_filter { uint32_t gf_interface; struct sockaddr_storage gf_group;  uint32_t gf_fmode;  uint32_t gf_numsrc; struct sockaddr_storage gf_slist[1]; }; 
#line 7518 "orbit-policy.mc"
struct ip_opts {struct in_addr ip_dst; char ip_opts[40]; }; 
#line 7526 "orbit-policy.mc"
struct ip_mreqn {struct in_addr imr_multiaddr; struct in_addr imr_address; int imr_ifindex; }; 
#line 7534 "orbit-policy.mc"
struct in_pktinfo {int ipi_ifindex; struct in_addr ipi_spec_dst; struct in_addr ipi_addr; }; 
#line 7535 "orbit-policy.mc"
extern  uint32_t ntohl( uint32_t __netlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 7537 "orbit-policy.mc"
extern  uint16_t ntohs( uint16_t __netshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 7539 "orbit-policy.mc"
extern  uint32_t htonl( uint32_t __hostlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 7541 "orbit-policy.mc"
extern  uint16_t htons( uint16_t __hostshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 7546 "orbit-policy.mc"
extern int bindresvport(int __sockfd, struct sockaddr_in *__sock_in) __attribute__  (( __nothrow__ )) ; 
#line 7550 "orbit-policy.mc"
extern int bindresvport6(int __sockfd, struct sockaddr_in6 *__sock_in) __attribute__  (( __nothrow__ )) ; 
#line 7555 "orbit-policy.mc"
struct in6_pktinfo {struct in6_addr ipi6_addr; unsigned int ipi6_ifindex; }; 
#line 7569 "orbit-policy.mc"
struct rpcent {char *r_name; char **r_aliases; int r_number; }; 
#line 7571 "orbit-policy.mc"
extern void setrpcent(int __stayopen) __attribute__  (( __nothrow__ )) ; 
#line 7572 "orbit-policy.mc"
extern void endrpcent(void ) __attribute__  (( __nothrow__ )) ; 
#line 7573 "orbit-policy.mc"
extern struct rpcent *getrpcbyname(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 7574 "orbit-policy.mc"
extern struct rpcent *getrpcbynumber(int __number) __attribute__  (( __nothrow__ )) ; 
#line 7575 "orbit-policy.mc"
extern struct rpcent *getrpcent(void ) __attribute__  (( __nothrow__ )) ; 
#line 7580 "orbit-policy.mc"
extern int getrpcbyname_r(__const char *__name, struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 7584 "orbit-policy.mc"
extern int getrpcbynumber_r(int __number, struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 7587 "orbit-policy.mc"
extern int getrpcent_r(struct rpcent *__result_buf, char *__buffer,  size_t __buflen, struct rpcent **__result) __attribute__  (( __nothrow__ )) ; 
#line 7597 "orbit-policy.mc"
struct netent {char *n_name; char **n_aliases; int n_addrtype;  uint32_t n_net; }; 
#line 7605 "orbit-policy.mc"
extern int *__h_errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 7606 "orbit-policy.mc"
extern void herror(__const char *__str) __attribute__  (( __nothrow__ )) ; 
#line 7609 "orbit-policy.mc"
extern __const char *hstrerror(int __err_num) __attribute__  (( __nothrow__ )) ; 
#line 7622 "orbit-policy.mc"
struct hostent {char *h_name; char **h_aliases; int h_addrtype; int h_length; char **h_addr_list; }; 
#line 7629 "orbit-policy.mc"
extern void sethostent(int __stay_open); 
#line 7635 "orbit-policy.mc"
extern void endhostent(void ); 
#line 7642 "orbit-policy.mc"
extern struct hostent *gethostent(void ); 
#line 7650 "orbit-policy.mc"
extern struct hostent *gethostbyaddr(__const void *__addr,  __socklen_t __len, int __type); 
#line 7656 "orbit-policy.mc"
extern struct hostent *gethostbyname(__const char *__name); 
#line 7657 "orbit-policy.mc"
extern struct hostent *gethostbyname2(__const char *__name, int __af); 
#line 7661 "orbit-policy.mc"
extern int gethostent_r(struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 7668 "orbit-policy.mc"
extern int gethostbyaddr_r(__const void *__restrict __addr,  __socklen_t __len, int __type, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 7674 "orbit-policy.mc"
extern int gethostbyname_r(__const char *__restrict __name, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 7680 "orbit-policy.mc"
extern int gethostbyname2_r(__const char *__restrict __name, int __af, struct hostent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct hostent **__restrict __result, int *__restrict __h_errnop); 
#line 7681 "orbit-policy.mc"
extern void setnetent(int __stay_open); 
#line 7687 "orbit-policy.mc"
extern void endnetent(void ); 
#line 7694 "orbit-policy.mc"
extern struct netent *getnetent(void ); 
#line 7701 "orbit-policy.mc"
extern struct netent *getnetbyaddr( uint32_t __net, int __type); 
#line 7707 "orbit-policy.mc"
extern struct netent *getnetbyname(__const char *__name); 
#line 7711 "orbit-policy.mc"
extern int getnetent_r(struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 7717 "orbit-policy.mc"
extern int getnetbyaddr_r( uint32_t __net, int __type, struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 7723 "orbit-policy.mc"
extern int getnetbyname_r(__const char *__restrict __name, struct netent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct netent **__restrict __result, int *__restrict __h_errnop); 
#line 7734 "orbit-policy.mc"
struct servent {char *s_name; char **s_aliases; int s_port; char *s_proto; }; 
#line 7741 "orbit-policy.mc"
extern void setservent(int __stay_open); 
#line 7747 "orbit-policy.mc"
extern void endservent(void ); 
#line 7754 "orbit-policy.mc"
extern struct servent *getservent(void ); 
#line 7762 "orbit-policy.mc"
extern struct servent *getservbyname(__const char *__name, __const char *__proto); 
#line 7769 "orbit-policy.mc"
extern struct servent *getservbyport(int __port, __const char *__proto); 
#line 7772 "orbit-policy.mc"
extern int getservent_r(struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 7778 "orbit-policy.mc"
extern int getservbyname_r(__const char *__restrict __name, __const char *__restrict __proto, struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 7783 "orbit-policy.mc"
extern int getservbyport_r(int __port, __const char *__restrict __proto, struct servent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct servent **__restrict __result); 
#line 7793 "orbit-policy.mc"
struct protoent {char *p_name; char **p_aliases; int p_proto; }; 
#line 7800 "orbit-policy.mc"
extern void setprotoent(int __stay_open); 
#line 7806 "orbit-policy.mc"
extern void endprotoent(void ); 
#line 7813 "orbit-policy.mc"
extern struct protoent *getprotoent(void ); 
#line 7819 "orbit-policy.mc"
extern struct protoent *getprotobyname(__const char *__name); 
#line 7825 "orbit-policy.mc"
extern struct protoent *getprotobynumber(int __proto); 
#line 7828 "orbit-policy.mc"
extern int getprotoent_r(struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 7833 "orbit-policy.mc"
extern int getprotobyname_r(__const char *__restrict __name, struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 7838 "orbit-policy.mc"
extern int getprotobynumber_r(int __proto, struct protoent *__restrict __result_buf, char *__restrict __buf,  size_t __buflen, struct protoent **__restrict __result); 
#line 7839 "orbit-policy.mc"
extern int setnetgrent(__const char *__netgroup); 
#line 7847 "orbit-policy.mc"
extern void endnetgrent(void ); 
#line 7850 "orbit-policy.mc"
extern int getnetgrent(char **__restrict __hostp, char **__restrict __userp, char **__restrict __domainp); 
#line 7852 "orbit-policy.mc"
extern int innetgr(__const char *__netgroup, __const char *__host, __const char *__user, __const char *domain); 
#line 7863 "orbit-policy.mc"
extern int getnetgrent_r(char **__restrict __hostp, char **__restrict __userp, char **__restrict __domainp, char *__restrict __buffer,  size_t __buflen); 
#line 7867 "orbit-policy.mc"
extern int rcmd(char **__restrict __ahost, unsigned short int __rport, __const char *__restrict __locuser, __const char *__restrict __remuser, __const char *__restrict __cmd, int *__restrict __fd2p); 
#line 7872 "orbit-policy.mc"
extern int rcmd_af(char **__restrict __ahost, unsigned short int __rport, __const char *__restrict __locuser, __const char *__restrict __remuser, __const char *__restrict __cmd, int *__restrict __fd2p,  sa_family_t __af); 
#line 7876 "orbit-policy.mc"
extern int rexec(char **__restrict __ahost, int __rport, __const char *__restrict __name, __const char *__restrict __pass, __const char *__restrict __cmd, int *__restrict __fd2p); 
#line 7881 "orbit-policy.mc"
extern int rexec_af(char **__restrict __ahost, int __rport, __const char *__restrict __name, __const char *__restrict __pass, __const char *__restrict __cmd, int *__restrict __fd2p,  sa_family_t __af); 
#line 7883 "orbit-policy.mc"
extern int ruserok(__const char *__rhost, int __suser, __const char *__remuser, __const char *__locuser); 
#line 7886 "orbit-policy.mc"
extern int ruserok_af(__const char *__rhost, int __suser, __const char *__remuser, __const char *__locuser,  sa_family_t __af); 
#line 7887 "orbit-policy.mc"
extern int rresvport(int *__alport); 
#line 7888 "orbit-policy.mc"
extern int rresvport_af(int *__alport,  sa_family_t __af); 
#line 7905 "orbit-policy.mc"
struct addrinfo {int ai_flags; int ai_family; int ai_socktype; int ai_protocol;  socklen_t ai_addrlen; struct sockaddr *ai_addr; char *ai_canonname; struct addrinfo *ai_next; }; 
#line 7909 "orbit-policy.mc"
extern int getaddrinfo(__const char *__restrict __name, __const char *__restrict __service, __const struct addrinfo *__restrict __req, struct addrinfo **__restrict __pai); 
#line 7912 "orbit-policy.mc"
extern void freeaddrinfo(struct addrinfo *__ai) __attribute__  (( __nothrow__ )) ; 
#line 7915 "orbit-policy.mc"
extern __const char *gai_strerror(int __ecode) __attribute__  (( __nothrow__ )) ; 
#line 7924 "orbit-policy.mc"
extern int getnameinfo(__const struct sockaddr *__restrict __sa,  socklen_t __salen, char *__restrict __host,  socklen_t __hostlen, char *__restrict __serv,  socklen_t __servlen, unsigned int __flags); 
#line 7929 "orbit-policy.mc"
typedef unsigned int LinkSockLen; 
#line 7934 "orbit-policy.mc"
typedef enum {LINK_PROTOCOL_SECURE=1 << 0,LINK_PROTOCOL_NEEDS_BIND=1 << 1}LinkProtocolFlags; 
#line 7937 "orbit-policy.mc"
typedef void (*LinkProtocolSetupFunc)(int fd,  LinkConnectionOptions cnx_flags); 
#line 7940 "orbit-policy.mc"
typedef void (*LinkProtocolDestroyFunc)(int fd, const char *host_info, const char *serv_info); 
#line 7944 "orbit-policy.mc"
typedef struct sockaddr *(*LinkProtocolGetSockAddrFunc)(const  LinkProtocolInfo *proto, const char *hostname, const char *service,  LinkSockLen *saddr_len); 
#line 7949 "orbit-policy.mc"
typedef  gboolean (*LinkProtocolGetSockInfoFunc)(const  LinkProtocolInfo *proto, const struct sockaddr *sockaddr,  gchar **hostname,  gchar **service); 
#line 7953 "orbit-policy.mc"
typedef  gboolean (*LinkProtocolIsLocal)(const  LinkProtocolInfo *proto, const struct sockaddr *sockaddr,  LinkSockLen saddr_len); 
#line 7969 "orbit-policy.mc"
struct _LinkProtocolInfo {const char *name; int family; int addr_len; int stream_proto_num;  LinkProtocolFlags flags;  LinkProtocolSetupFunc setup;  LinkProtocolDestroyFunc destroy;  LinkProtocolGetSockAddrFunc get_sockaddr;  LinkProtocolGetSockInfoFunc get_sockinfo;  LinkProtocolIsLocal is_local;  gpointer dummy[8]; }; 
#line 7976 "orbit-policy.mc"
typedef enum {LINK_NET_ID_IS_LOCAL,LINK_NET_ID_IS_SHORT_HOSTNAME,LINK_NET_ID_IS_FQDN,LINK_NET_ID_IS_IPADDR}LinkNetIdType; 
#line 7979 "orbit-policy.mc"
 LinkProtocolInfo *link_protocol_find(const char *name); 
#line 7980 "orbit-policy.mc"
 LinkProtocolInfo *link_protocol_find_num(const int family); 
#line 7981 "orbit-policy.mc"
 LinkProtocolInfo *link_protocol_all(void ); 
#line 7982 "orbit-policy.mc"
char *link_get_tmpdir(void ); 
#line 7983 "orbit-policy.mc"
void link_set_tmpdir(const char *dir); 
#line 7984 "orbit-policy.mc"
void link_use_local_hostname( LinkNetIdType use); 
#line 7985 "orbit-policy.mc"
const char *link_get_local_hostname(void ); 
#line 7989 "orbit-policy.mc"
typedef enum {LINK_CONNECTING,LINK_CONNECTED,LINK_DISCONNECTED}LinkConnectionStatus; 
#line 7991 "orbit-policy.mc"
typedef struct _LinkWriteOpts LinkWriteOpts; 
#line 7992 "orbit-policy.mc"
typedef struct _LinkConnectionPrivate LinkConnectionPrivate; 
#line 8011 "orbit-policy.mc"
typedef struct { GObject parent; const  LinkProtocolInfo *proto;  LinkConnectionStatus status;  LinkConnectionOptions options;  guint was_initiated:1;  guint is_auth:1;  guint inhibit_reconnect:1;  gchar *remote_host_info;  gchar *remote_serv_info;  LinkConnectionPrivate *priv;  GSList *idle_broken_callbacks; }LinkConnection; 
#line 8028 "orbit-policy.mc"
typedef struct { GObjectClass parent_class; void (*state_changed)( LinkConnection *cnx,  LinkConnectionStatus status);  gboolean (*handle_input)( LinkConnection *cnx); void (*broken)( LinkConnection *cnx); void (*blocking)( LinkConnection *cnx,  gulong buffer_size); }LinkConnectionClass; 
#line 8030 "orbit-policy.mc"
 GType link_connection_get_type(void ) __attribute__  (( __const__ )) ; 
#line 8039 "orbit-policy.mc"
void link_connection_from_fd( LinkConnection *cnx, int fd, const  LinkProtocolInfo *proto,  gchar *remote_host_info,  gchar *remote_serv_info,  gboolean was_initiated,  LinkConnectionStatus status,  LinkConnectionOptions options); 
#line 8047 "orbit-policy.mc"
 LinkConnection *link_connection_initiate( GType derived_type, const char *proto_name, const char *remote_host_info, const char *remote_serv_info,  LinkConnectionOptions options, const char *first_property, ...); 
#line 8048 "orbit-policy.mc"
 LinkConnectionStatus link_connection_try_reconnect( LinkConnection *cnx); 
#line 8050 "orbit-policy.mc"
 gpointer link_connection_ref( gpointer cnx); 
#line 8051 "orbit-policy.mc"
void link_connection_unref( gpointer cnx); 
#line 8057 "orbit-policy.mc"
typedef enum {LINK_IO_OK=0,LINK_IO_FATAL_ERROR=(-1),LINK_IO_QUEUED_DATA=(-2)}LinkIOStatus; 
#line 8062 "orbit-policy.mc"
 glong link_connection_read( LinkConnection *cnx,  guchar *buf, int len,  gboolean block_for_full_read); 
#line 8069 "orbit-policy.mc"
 LinkIOStatus link_connection_write( LinkConnection *cnx, const  guchar *buf,  gulong len, const  LinkWriteOpts *opt_write_opts); 
#line 8074 "orbit-policy.mc"
 LinkIOStatus link_connection_writev( LinkConnection *cnx, struct iovec *vecs, int nvecs, const  LinkWriteOpts *opt_write_opts); 
#line 8077 "orbit-policy.mc"
void link_connection_state_changed( LinkConnection *cnx,  LinkConnectionStatus status); 
#line 8079 "orbit-policy.mc"
 LinkConnectionStatus link_connection_get_status( LinkConnection *cnx); 
#line 8080 "orbit-policy.mc"
void link_connection_disconnect( LinkConnection *cnx); 
#line 8081 "orbit-policy.mc"
 LinkConnectionStatus link_connection_wait_connected( LinkConnection *cnx); 
#line 8087 "orbit-policy.mc"
void link_connection_set_max_buffer( LinkConnection *cnx,  gulong max_buffer_bytes); 
#line 8088 "orbit-policy.mc"
 LinkWriteOpts *link_write_options_new( gboolean block_on_write); 
#line 8090 "orbit-policy.mc"
void link_write_options_free( LinkWriteOpts *write_opts); 
#line 8093 "orbit-policy.mc"
typedef void (*LinkBrokenCallback)( LinkConnection *,  gpointer user_data); 
#line 8096 "orbit-policy.mc"
void link_connection_add_broken_cb( LinkConnection *cnx,  LinkBrokenCallback fn,  gpointer user_data); 
#line 8099 "orbit-policy.mc"
void link_connection_remove_broken_cb( LinkConnection *cnx,  LinkBrokenCallback opt_fn,  gpointer opt_user_data); 
#line 8101 "orbit-policy.mc"
void link_connections_close(void ); 
#line 8105 "orbit-policy.mc"
typedef struct _LinkServerPrivate LinkServerPrivate; 
#line 8119 "orbit-policy.mc"
typedef struct { GObject parent; const  LinkProtocolInfo *proto; char *local_host_info; char *local_serv_info;  LinkConnectionOptions create_options;  LinkServerPrivate *priv; }LinkServer; 
#line 8128 "orbit-policy.mc"
typedef struct { GObjectClass parent_class;  LinkConnection *(*create_connection)( LinkServer *srv); void (*new_connection)( LinkServer *srv,  LinkConnection *cnx); }LinkServerClass; 
#line 8130 "orbit-policy.mc"
 GType link_server_get_type(void ) __attribute__  (( __const__ )) ; 
#line 8136 "orbit-policy.mc"
 gboolean link_server_setup( LinkServer *srv, const char *proto_name, const char *local_host_info, const char *local_serv_info,  LinkConnectionOptions create_options); 
#line 8149 "orbit-policy.mc"
 GSource *link_source_create_watch( GMainContext *context, int fd,  GIOChannel *opt_channel,  GIOCondition condition,  GIOFunc func,  gpointer user_data); 
#line 8151 "orbit-policy.mc"
void link_source_set_condition( GSource *source,  GIOCondition condition); 
#line 8157 "orbit-policy.mc"
extern  GMainLoop *link_loop; 
#line 8159 "orbit-policy.mc"
void link_init( gboolean thread_safe); 
#line 8160 "orbit-policy.mc"
void link_set_io_thread( gboolean io_in_thread); 
#line 8161 "orbit-policy.mc"
void link_shutdown(void ); 
#line 8162 "orbit-policy.mc"
void link_main_iteration( gboolean block_for_reply); 
#line 8163 "orbit-policy.mc"
 gboolean link_main_pending(void ); 
#line 8164 "orbit-policy.mc"
void link_main_loop_run(void ); 
#line 8165 "orbit-policy.mc"
 GMainLoop *link_main_get_loop(void ); 
#line 8167 "orbit-policy.mc"
 guint link_main_idle_add( GSourceFunc function,  gpointer data); 
#line 8169 "orbit-policy.mc"
void link_wait(void ); 
#line 8170 "orbit-policy.mc"
void link_signal(void ); 
#line 8172 "orbit-policy.mc"
 gboolean link_thread_io(void ); 
#line 8173 "orbit-policy.mc"
 gboolean link_thread_safe(void ); 
#line 8179 "orbit-policy.mc"
int link_pipe(int *handles); 
#line 8187 "orbit-policy.mc"
typedef struct _GIOPRecvBuffer GIOPRecvBuffer; 
#line 8188 "orbit-policy.mc"
typedef struct _GIOPSendBuffer GIOPSendBuffer; 
#line 8189 "orbit-policy.mc"
typedef struct _GIOPConnection GIOPConnection; 
#line 8197 "orbit-policy.mc"
typedef enum {GIOP_1_0,GIOP_1_1,GIOP_1_2,GIOP_LATEST=GIOP_1_2,GIOP_NUM_VERSIONS}GIOPVersion; 
#line 8212 "orbit-policy.mc"
typedef struct CORBA_any_struct CORBA_any; 
#line 8219 "orbit-policy.mc"
typedef struct { CORBA_unsigned_short _digits;  CORBA_short _scale; signed char _sign; signed char _value[1]; }CORBA_fixed_d_s; 
#line 8224 "orbit-policy.mc"
struct CORBA_NVList_type { CORBA_unsigned_long flags;  GArray *list; }; 
#line 8236 "orbit-policy.mc"
typedef struct CORBA_TypeCode_struct *CORBA_TypeCode; 
#line 8250 "orbit-policy.mc"
struct CORBA_any_struct { CORBA_TypeCode _type;  gpointer _value;  CORBA_boolean _release; }; 
#line 8263 "orbit-policy.mc"
typedef struct CORBA_Environment_type CORBA_Environment; 
#line 8270 "orbit-policy.mc"
struct CORBA_Environment_type { CORBA_char *_id;  CORBA_unsigned_long _major;  CORBA_any _any; }; 
#line 8296 "orbit-policy.mc"
typedef enum {ORBIT_ROT_NULL,ORBIT_ROT_OBJREF,ORBIT_ROT_ORB,ORBIT_ROT_ADAPTOR,ORBIT_ROT_POAMANAGER,ORBIT_ROT_POLICY,ORBIT_ROT_TYPECODE,ORBIT_ROT_REQUEST,ORBIT_ROT_SERVERREQUEST,ORBIT_ROT_CONTEXT,ORBIT_ROT_DYNANY,ORBIT_ROT_OAOBJECT,ORBIT_ROT_ORBGROUP,ORBIT_ROT_POACURRENT,ORBIT_ROT_CLIENT_POLICY}ORBit_RootObject_Type; 
#line 8298 "orbit-policy.mc"
typedef struct ORBit_RootObject_struct *ORBit_RootObject; 
#line 8300 "orbit-policy.mc"
typedef void (*ORBit_RootObject_DestroyFunc)( ORBit_RootObject obj); 
#line 8305 "orbit-policy.mc"
typedef struct _ORBit_RootObject_Interface { ORBit_RootObject_Type type;  ORBit_RootObject_DestroyFunc destroy; }ORBit_RootObject_Interface; 
#line 8310 "orbit-policy.mc"
struct ORBit_RootObject_struct {const  ORBit_RootObject_Interface *interface; int refs; }; 
#line 8315 "orbit-policy.mc"
void ORBit_RootObject_init( ORBit_RootObject obj, const  ORBit_RootObject_Interface *interface); 
#line 8316 "orbit-policy.mc"
 gpointer ORBit_RootObject_duplicate( gpointer obj); 
#line 8317 "orbit-policy.mc"
 gpointer ORBit_RootObject_duplicate_T( gpointer obj); 
#line 8318 "orbit-policy.mc"
void ORBit_RootObject_release( gpointer obj); 
#line 8319 "orbit-policy.mc"
void ORBit_RootObject_release_T( gpointer obj); 
#line 8321 "orbit-policy.mc"
extern  GMutex *ORBit_RootObject_lifecycle_lock; 
#line 8332 "orbit-policy.mc"
typedef struct CORBA_ORB_type *CORBA_ORB; 
#line 8337 "orbit-policy.mc"
typedef  CORBA_string CORBA_ORB_ObjectId; 
#line 8338 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ORB_ObjectId_struct; 
#line 8339 "orbit-policy.mc"
typedef  CORBA_Object CORBA_InterfaceDef; 
#line 8340 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_InterfaceDef__classid; 
#line 8341 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InterfaceDef_struct; 
#line 8369 "orbit-policy.mc"
struct CORBA_ORB_type {struct ORBit_RootObject_struct root_object;  GMutex *lock;  GIOPVersion default_giop_version;  GSList *servers;  GSList *profiles;  GPtrArray *adaptors;  GHashTable *forw_binds;  GSList *current_invocations;  gpointer default_ctx;  GHashTable *initial_refs;  guint life_flags;  GHashTable *objrefs; }; 
#line 8387 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long len; const  CORBA_char *str; }ORBit_ContextMarshalItem; 
#line 8423 "orbit-policy.mc"
struct CORBA_TypeCode_struct {struct ORBit_RootObject_struct parent;  CORBA_unsigned_long kind;  CORBA_unsigned_long flags;  CORBA_short c_length;  CORBA_short c_align;  CORBA_unsigned_long length;  CORBA_unsigned_long sub_parts;  CORBA_TypeCode *subtypes;  CORBA_TypeCode discriminator; char *name; char *repo_id; char **subnames;  CORBA_long *sublabels;  CORBA_long default_index;  CORBA_unsigned_long recurse_depth;  CORBA_unsigned_short digits;  CORBA_short scale; }; 
#line 8425 "orbit-policy.mc"
extern const  ORBit_RootObject_Interface ORBit_TypeCode_epv; 
#line 8426 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_null_struct; 
#line 8427 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_void_struct; 
#line 8428 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_char_struct; 
#line 8429 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_wchar_struct; 
#line 8430 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_string_struct; 
#line 8431 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_wstring_struct; 
#line 8432 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_long_struct; 
#line 8433 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_unsigned_long_struct; 
#line 8434 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_short_struct; 
#line 8435 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_unsigned_short_struct; 
#line 8436 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_octet_struct; 
#line 8438 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Object_struct; 
#line 8439 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_any_struct; 
#line 8440 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TypeCode_struct; 
#line 8441 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_boolean_struct; 
#line 8442 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_float_struct; 
#line 8443 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_double_struct; 
#line 8444 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_long_double_struct; 
#line 8445 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_long_long_struct; 
#line 8446 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_unsigned_long_long_struct; 
#line 8453 "orbit-policy.mc"
void ORBit_encode_CORBA_TypeCode( CORBA_TypeCode tc,  GIOPSendBuffer *buf); 
#line 8455 "orbit-policy.mc"
 gboolean ORBit_decode_CORBA_TypeCode( CORBA_TypeCode *tc,  GIOPRecvBuffer *buf); 
#line 8457 "orbit-policy.mc"
const char *ORBit_tk_to_name( CORBA_unsigned_long tk); 
#line 8472 "orbit-policy.mc"
void CORBA_free( gpointer mem); 
#line 8474 "orbit-policy.mc"
 gpointer ORBit_alloc_tcval( CORBA_TypeCode tc,  guint nelements); 
#line 8478 "orbit-policy.mc"
 gpointer ORBit_realloc_tcval( gpointer old,  CORBA_TypeCode tc,  guint old_num_elements,  guint num_elements); 
#line 8480 "orbit-policy.mc"
typedef  gpointer (*ORBit_Mem_free_fn)( gpointer mem,  gpointer func_data); 
#line 8491 "orbit-policy.mc"
typedef enum {ORBIT_MEMHOW_NONE=0,ORBIT_MEMHOW_SIMPLE=1,ORBIT_MEMHOW_TYPECODE=2,ORBIT_MEMHOW_FREEFNC=3}ORBitMemHow; 
#line 8499 "orbit-policy.mc"
typedef struct ORBit_Memprefix {union { CORBA_TypeCode tc;  ORBit_Mem_free_fn free_fn; }u;  ORBitMemHow how; }ORBit_MemPrefix; 
#line 8501 "orbit-policy.mc"
void ORBit_free( gpointer mem); 
#line 8502 "orbit-policy.mc"
void ORBit_free_T( gpointer mem); 
#line 8504 "orbit-policy.mc"
 CORBA_char *ORBit_alloc_string( size_t string_length); 
#line 8505 "orbit-policy.mc"
 gpointer ORBit_alloc_simple( size_t block_size); 
#line 8506 "orbit-policy.mc"
 gpointer ORBit_alloc_by_tc( CORBA_TypeCode tc); 
#line 8509 "orbit-policy.mc"
 gpointer ORBit_alloc_with_free_fn( size_t element_size,  guint num_elements,  ORBit_Mem_free_fn free_fn); 
#line 8510 "orbit-policy.mc"
 CORBA_TypeCode ORBit_alloc_get_tcval( gpointer mem); 
#line 8512 "orbit-policy.mc"
 gpointer CORBA_any__freekids( gpointer mem,  gpointer dat); 
#line 8513 "orbit-policy.mc"
 gpointer ORBit_freekids_via_TypeCode( CORBA_TypeCode tc,  gpointer mem); 
#line 8520 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ConstructionPolicy; 
#line 8521 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ConstructionPolicy__classid; 
#line 8524 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ConstructionPolicy_struct; 
#line 8532 "orbit-policy.mc"
typedef  CORBA_Object CORBA_Current; 
#line 8533 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_Current__classid; 
#line 8536 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Current_struct; 
#line 8544 "orbit-policy.mc"
typedef  CORBA_Object CORBA_DomainManager; 
#line 8545 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_DomainManager__classid; 
#line 8548 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_DomainManager_struct; 
#line 8556 "orbit-policy.mc"
typedef  CORBA_Object CORBA_Policy; 
#line 8557 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_Policy__classid; 
#line 8560 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Policy_struct; 
#line 8568 "orbit-policy.mc"
typedef  CORBA_Object CORBA_AbstractInterfaceDef; 
#line 8569 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_AbstractInterfaceDef__classid; 
#line 8572 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AbstractInterfaceDef_struct; 
#line 8580 "orbit-policy.mc"
typedef  CORBA_Object CORBA_AliasDef; 
#line 8581 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_AliasDef__classid; 
#line 8584 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AliasDef_struct; 
#line 8592 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ArrayDef; 
#line 8593 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ArrayDef__classid; 
#line 8596 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ArrayDef_struct; 
#line 8604 "orbit-policy.mc"
typedef  CORBA_Object CORBA_AttributeDef; 
#line 8605 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_AttributeDef__classid; 
#line 8608 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AttributeDef_struct; 
#line 8616 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ConstantDef; 
#line 8617 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ConstantDef__classid; 
#line 8620 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ConstantDef_struct; 
#line 8628 "orbit-policy.mc"
typedef  CORBA_Object CORBA_Contained; 
#line 8629 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_Contained__classid; 
#line 8632 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Contained_struct; 
#line 8640 "orbit-policy.mc"
typedef  CORBA_Object CORBA_Container; 
#line 8641 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_Container__classid; 
#line 8644 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Container_struct; 
#line 8652 "orbit-policy.mc"
typedef  CORBA_Object CORBA_EnumDef; 
#line 8653 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_EnumDef__classid; 
#line 8656 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_EnumDef_struct; 
#line 8664 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ExceptionDef; 
#line 8665 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ExceptionDef__classid; 
#line 8668 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExceptionDef_struct; 
#line 8676 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ExtInterfaceDef; 
#line 8677 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ExtInterfaceDef__classid; 
#line 8680 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtInterfaceDef_struct; 
#line 8688 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ExtValueDef; 
#line 8689 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ExtValueDef__classid; 
#line 8692 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtValueDef_struct; 
#line 8700 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ExtAbstractInterfaceDef; 
#line 8701 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ExtAbstractInterfaceDef__classid; 
#line 8704 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtAbstractInterfaceDef_struct; 
#line 8712 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ExtLocalInterfaceDef; 
#line 8713 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ExtLocalInterfaceDef__classid; 
#line 8716 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtLocalInterfaceDef_struct; 
#line 8724 "orbit-policy.mc"
typedef  CORBA_Object CORBA_FixedDef; 
#line 8725 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_FixedDef__classid; 
#line 8728 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_FixedDef_struct; 
#line 8736 "orbit-policy.mc"
typedef  CORBA_Object CORBA_IDLType; 
#line 8737 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_IDLType__classid; 
#line 8740 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_IDLType_struct; 
#line 8741 "orbit-policy.mc"
typedef  CORBA_Object CORBA_IRObject; 
#line 8742 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_IRObject__classid; 
#line 8745 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_IRObject_struct; 
#line 8753 "orbit-policy.mc"
typedef  CORBA_Object CORBA_LocalInterfaceDef; 
#line 8754 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_LocalInterfaceDef__classid; 
#line 8757 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_LocalInterfaceDef_struct; 
#line 8765 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ModuleDef; 
#line 8766 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ModuleDef__classid; 
#line 8769 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ModuleDef_struct; 
#line 8777 "orbit-policy.mc"
typedef  CORBA_Object CORBA_NativeDef; 
#line 8778 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_NativeDef__classid; 
#line 8781 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_NativeDef_struct; 
#line 8789 "orbit-policy.mc"
typedef  CORBA_Object CORBA_OperationDef; 
#line 8790 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_OperationDef__classid; 
#line 8793 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_OperationDef_struct; 
#line 8801 "orbit-policy.mc"
typedef  CORBA_Object CORBA_PrimitiveDef; 
#line 8802 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_PrimitiveDef__classid; 
#line 8805 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PrimitiveDef_struct; 
#line 8813 "orbit-policy.mc"
typedef  CORBA_Object CORBA_Repository; 
#line 8814 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_Repository__classid; 
#line 8817 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Repository_struct; 
#line 8825 "orbit-policy.mc"
typedef  CORBA_Object CORBA_SequenceDef; 
#line 8826 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_SequenceDef__classid; 
#line 8829 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_SequenceDef_struct; 
#line 8837 "orbit-policy.mc"
typedef  CORBA_Object CORBA_StringDef; 
#line 8838 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_StringDef__classid; 
#line 8841 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_StringDef_struct; 
#line 8849 "orbit-policy.mc"
typedef  CORBA_Object CORBA_StructDef; 
#line 8850 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_StructDef__classid; 
#line 8853 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_StructDef_struct; 
#line 8854 "orbit-policy.mc"
typedef  CORBA_Object CORBA_TypedefDef; 
#line 8855 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_TypedefDef__classid; 
#line 8858 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TypedefDef_struct; 
#line 8866 "orbit-policy.mc"
typedef  CORBA_Object CORBA_UnionDef; 
#line 8867 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_UnionDef__classid; 
#line 8870 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_UnionDef_struct; 
#line 8878 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ValueDef; 
#line 8879 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ValueDef__classid; 
#line 8882 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueDef_struct; 
#line 8890 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ValueBoxDef; 
#line 8891 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ValueBoxDef__classid; 
#line 8894 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueBoxDef_struct; 
#line 8902 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ValueMemberDef; 
#line 8903 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ValueMemberDef__classid; 
#line 8906 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueMemberDef_struct; 
#line 8914 "orbit-policy.mc"
typedef  CORBA_Object CORBA_WstringDef; 
#line 8915 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_WstringDef__classid; 
#line 8918 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_WstringDef_struct; 
#line 8924 "orbit-policy.mc"
typedef  CORBA_string CORBA_Identifier; 
#line 8927 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Identifier_struct; 
#line 8932 "orbit-policy.mc"
typedef enum {CORBA_COMPLETED_YES,CORBA_COMPLETED_NO,CORBA_COMPLETED_MAYBE}CORBA_completion_status; 
#line 8935 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_completion_status_struct; 
#line 8945 "orbit-policy.mc"
typedef enum {CORBA_NO_EXCEPTION,CORBA_USER_EXCEPTION,CORBA_SYSTEM_EXCEPTION}CORBA_exception_type; 
#line 8948 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_exception_type_struct; 
#line 8956 "orbit-policy.mc"
typedef struct CORBA_UNKNOWN_type CORBA_UNKNOWN; 
#line 8960 "orbit-policy.mc"
struct CORBA_UNKNOWN_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 8963 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_UNKNOWN_struct; 
#line 8964 "orbit-policy.mc"
typedef struct CORBA_BAD_PARAM_type CORBA_BAD_PARAM; 
#line 8968 "orbit-policy.mc"
struct CORBA_BAD_PARAM_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 8971 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BAD_PARAM_struct; 
#line 8972 "orbit-policy.mc"
typedef struct CORBA_NO_MEMORY_type CORBA_NO_MEMORY; 
#line 8976 "orbit-policy.mc"
struct CORBA_NO_MEMORY_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 8979 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_NO_MEMORY_struct; 
#line 8980 "orbit-policy.mc"
typedef struct CORBA_IMP_LIMIT_type CORBA_IMP_LIMIT; 
#line 8984 "orbit-policy.mc"
struct CORBA_IMP_LIMIT_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 8987 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_IMP_LIMIT_struct; 
#line 8988 "orbit-policy.mc"
typedef struct CORBA_COMM_FAILURE_type CORBA_COMM_FAILURE; 
#line 8992 "orbit-policy.mc"
struct CORBA_COMM_FAILURE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 8995 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_COMM_FAILURE_struct; 
#line 8996 "orbit-policy.mc"
typedef struct CORBA_INV_OBJREF_type CORBA_INV_OBJREF; 
#line 9000 "orbit-policy.mc"
struct CORBA_INV_OBJREF_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9003 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INV_OBJREF_struct; 
#line 9004 "orbit-policy.mc"
typedef struct CORBA_NO_PERMISSION_type CORBA_NO_PERMISSION; 
#line 9008 "orbit-policy.mc"
struct CORBA_NO_PERMISSION_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9011 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_NO_PERMISSION_struct; 
#line 9012 "orbit-policy.mc"
typedef struct CORBA_INTERNAL_type CORBA_INTERNAL; 
#line 9016 "orbit-policy.mc"
struct CORBA_INTERNAL_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9019 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INTERNAL_struct; 
#line 9020 "orbit-policy.mc"
typedef struct CORBA_MARSHAL_type CORBA_MARSHAL; 
#line 9024 "orbit-policy.mc"
struct CORBA_MARSHAL_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9027 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_MARSHAL_struct; 
#line 9028 "orbit-policy.mc"
typedef struct CORBA_INITIALIZE_type CORBA_INITIALIZE; 
#line 9032 "orbit-policy.mc"
struct CORBA_INITIALIZE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9035 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INITIALIZE_struct; 
#line 9036 "orbit-policy.mc"
typedef struct CORBA_NO_IMPLEMENT_type CORBA_NO_IMPLEMENT; 
#line 9040 "orbit-policy.mc"
struct CORBA_NO_IMPLEMENT_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9043 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_NO_IMPLEMENT_struct; 
#line 9044 "orbit-policy.mc"
typedef struct CORBA_BAD_TYPECODE_type CORBA_BAD_TYPECODE; 
#line 9048 "orbit-policy.mc"
struct CORBA_BAD_TYPECODE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9051 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BAD_TYPECODE_struct; 
#line 9052 "orbit-policy.mc"
typedef struct CORBA_BAD_OPERATION_type CORBA_BAD_OPERATION; 
#line 9056 "orbit-policy.mc"
struct CORBA_BAD_OPERATION_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9059 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BAD_OPERATION_struct; 
#line 9060 "orbit-policy.mc"
typedef struct CORBA_NO_RESOURCES_type CORBA_NO_RESOURCES; 
#line 9064 "orbit-policy.mc"
struct CORBA_NO_RESOURCES_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9067 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_NO_RESOURCES_struct; 
#line 9068 "orbit-policy.mc"
typedef struct CORBA_NO_RESPONSE_type CORBA_NO_RESPONSE; 
#line 9072 "orbit-policy.mc"
struct CORBA_NO_RESPONSE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9075 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_NO_RESPONSE_struct; 
#line 9076 "orbit-policy.mc"
typedef struct CORBA_PERSIST_STORE_type CORBA_PERSIST_STORE; 
#line 9080 "orbit-policy.mc"
struct CORBA_PERSIST_STORE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9083 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PERSIST_STORE_struct; 
#line 9084 "orbit-policy.mc"
typedef struct CORBA_BAD_INV_ORDER_type CORBA_BAD_INV_ORDER; 
#line 9088 "orbit-policy.mc"
struct CORBA_BAD_INV_ORDER_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9091 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BAD_INV_ORDER_struct; 
#line 9092 "orbit-policy.mc"
typedef struct CORBA_TRANSIENT_type CORBA_TRANSIENT; 
#line 9096 "orbit-policy.mc"
struct CORBA_TRANSIENT_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9099 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TRANSIENT_struct; 
#line 9100 "orbit-policy.mc"
typedef struct CORBA_FREE_MEM_type CORBA_FREE_MEM; 
#line 9104 "orbit-policy.mc"
struct CORBA_FREE_MEM_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9107 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_FREE_MEM_struct; 
#line 9108 "orbit-policy.mc"
typedef struct CORBA_INV_IDENT_type CORBA_INV_IDENT; 
#line 9112 "orbit-policy.mc"
struct CORBA_INV_IDENT_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9115 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INV_IDENT_struct; 
#line 9116 "orbit-policy.mc"
typedef struct CORBA_INV_FLAG_type CORBA_INV_FLAG; 
#line 9120 "orbit-policy.mc"
struct CORBA_INV_FLAG_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9123 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INV_FLAG_struct; 
#line 9124 "orbit-policy.mc"
typedef struct CORBA_INTF_REPOS_type CORBA_INTF_REPOS; 
#line 9128 "orbit-policy.mc"
struct CORBA_INTF_REPOS_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9131 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INTF_REPOS_struct; 
#line 9132 "orbit-policy.mc"
typedef struct CORBA_BAD_CONTEXT_type CORBA_BAD_CONTEXT; 
#line 9136 "orbit-policy.mc"
struct CORBA_BAD_CONTEXT_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9139 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BAD_CONTEXT_struct; 
#line 9140 "orbit-policy.mc"
typedef struct CORBA_OBJ_ADAPTER_type CORBA_OBJ_ADAPTER; 
#line 9144 "orbit-policy.mc"
struct CORBA_OBJ_ADAPTER_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9147 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_OBJ_ADAPTER_struct; 
#line 9148 "orbit-policy.mc"
typedef struct CORBA_DATA_CONVERSION_type CORBA_DATA_CONVERSION; 
#line 9152 "orbit-policy.mc"
struct CORBA_DATA_CONVERSION_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9155 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_DATA_CONVERSION_struct; 
#line 9156 "orbit-policy.mc"
typedef struct CORBA_OBJECT_NOT_EXIST_type CORBA_OBJECT_NOT_EXIST; 
#line 9160 "orbit-policy.mc"
struct CORBA_OBJECT_NOT_EXIST_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9163 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_OBJECT_NOT_EXIST_struct; 
#line 9164 "orbit-policy.mc"
typedef struct CORBA_TRANSACTION_REQUIRED_type CORBA_TRANSACTION_REQUIRED; 
#line 9168 "orbit-policy.mc"
struct CORBA_TRANSACTION_REQUIRED_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9171 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TRANSACTION_REQUIRED_struct; 
#line 9172 "orbit-policy.mc"
typedef struct CORBA_TRANSACTION_ROLLEDBACK_type CORBA_TRANSACTION_ROLLEDBACK; 
#line 9176 "orbit-policy.mc"
struct CORBA_TRANSACTION_ROLLEDBACK_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9179 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TRANSACTION_ROLLEDBACK_struct; 
#line 9180 "orbit-policy.mc"
typedef struct CORBA_INVALID_TRANSACTION_type CORBA_INVALID_TRANSACTION; 
#line 9184 "orbit-policy.mc"
struct CORBA_INVALID_TRANSACTION_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9187 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INVALID_TRANSACTION_struct; 
#line 9188 "orbit-policy.mc"
typedef struct CORBA_INV_POLICY_type CORBA_INV_POLICY; 
#line 9192 "orbit-policy.mc"
struct CORBA_INV_POLICY_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9195 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_INV_POLICY_struct; 
#line 9196 "orbit-policy.mc"
typedef struct CORBA_CODESET_INCOMPATIBLE_type CORBA_CODESET_INCOMPATIBLE; 
#line 9200 "orbit-policy.mc"
struct CORBA_CODESET_INCOMPATIBLE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9203 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_CODESET_INCOMPATIBLE_struct; 
#line 9204 "orbit-policy.mc"
typedef struct CORBA_REBIND_type CORBA_REBIND; 
#line 9208 "orbit-policy.mc"
struct CORBA_REBIND_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9211 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_REBIND_struct; 
#line 9212 "orbit-policy.mc"
typedef struct CORBA_TIMEOUT_type CORBA_TIMEOUT; 
#line 9216 "orbit-policy.mc"
struct CORBA_TIMEOUT_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9219 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TIMEOUT_struct; 
#line 9220 "orbit-policy.mc"
typedef struct CORBA_TRANSACTION_UNAVAILABLE_type CORBA_TRANSACTION_UNAVAILABLE; 
#line 9224 "orbit-policy.mc"
struct CORBA_TRANSACTION_UNAVAILABLE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9227 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TRANSACTION_UNAVAILABLE_struct; 
#line 9228 "orbit-policy.mc"
typedef struct CORBA_TRANSACTION_MODE_type CORBA_TRANSACTION_MODE; 
#line 9232 "orbit-policy.mc"
struct CORBA_TRANSACTION_MODE_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9235 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TRANSACTION_MODE_struct; 
#line 9236 "orbit-policy.mc"
typedef struct CORBA_BAD_QOS_type CORBA_BAD_QOS; 
#line 9240 "orbit-policy.mc"
struct CORBA_BAD_QOS_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 9243 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BAD_QOS_struct; 
#line 9244 "orbit-policy.mc"
typedef  CORBA_unsigned_long CORBA_PolicyType; 
#line 9247 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PolicyType_struct; 
#line 9248 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_Object *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_Object; 
#line 9251 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_Object_struct; 
#line 9252 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_Policy; 
#line 9255 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_Policy_struct; 
#line 9256 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Policy CORBA_PolicyList; 
#line 9259 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PolicyList_struct; 
#line 9260 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_unsigned_long *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_unsigned_long; 
#line 9263 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_unsigned_long_struct; 
#line 9264 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_unsigned_long CORBA_sequence_CORBA_PolicyType; 
#line 9267 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_PolicyType_struct; 
#line 9268 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_PolicyType CORBA_PolicyTypeSeq; 
#line 9271 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PolicyTypeSeq_struct; 
#line 9272 "orbit-policy.mc"
typedef struct CORBA_InvalidPolicies_type CORBA_InvalidPolicies; 
#line 9273 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_unsigned_short *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_unsigned_short; 
#line 9276 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_unsigned_short_struct; 
#line 9286 "orbit-policy.mc"
struct CORBA_InvalidPolicies_type { CORBA_sequence_CORBA_unsigned_short indices; }; 
#line 9289 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InvalidPolicies_struct; 
#line 9297 "orbit-policy.mc"
typedef  CORBA_short CORBA_PolicyErrorCode; 
#line 9300 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PolicyErrorCode_struct; 
#line 9301 "orbit-policy.mc"
typedef struct CORBA_PolicyError_type CORBA_PolicyError; 
#line 9304 "orbit-policy.mc"
struct CORBA_PolicyError_type { CORBA_PolicyErrorCode reason; }; 
#line 9307 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PolicyError_struct; 
#line 9308 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_DomainManager; 
#line 9311 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_DomainManager_struct; 
#line 9312 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_DomainManager CORBA_DomainManagersList; 
#line 9315 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_DomainManagersList_struct; 
#line 9316 "orbit-policy.mc"
typedef  CORBA_string CORBA_ScopedName; 
#line 9319 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ScopedName_struct; 
#line 9327 "orbit-policy.mc"
typedef  CORBA_string CORBA_RepositoryId; 
#line 9330 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_RepositoryId_struct; 
#line 9375 "orbit-policy.mc"
typedef enum {CORBA_dk_none,CORBA_dk_all,CORBA_dk_Attribute,CORBA_dk_Constant,CORBA_dk_Exception,CORBA_dk_Interface,CORBA_dk_Module,CORBA_dk_Operation,CORBA_dk_Typedef,CORBA_dk_Alias,CORBA_dk_Struct,CORBA_dk_Union,CORBA_dk_Enum,CORBA_dk_Primitive,CORBA_dk_String,CORBA_dk_Sequence,CORBA_dk_Array,CORBA_dk_Repository,CORBA_dk_Wstring,CORBA_dk_Fixed,CORBA_dk_Value,CORBA_dk_ValueBox,CORBA_dk_ValueMember,CORBA_dk_Native,CORBA_dk_AbstractInterface,CORBA_dk_LocalInterface,CORBA_dk_Component,CORBA_dk_Home,CORBA_dk_Factory,CORBA_dk_Finder,CORBA_dk_Emits,CORBA_dk_Publishes,CORBA_dk_Consumes,CORBA_dk_Provides,CORBA_dk_Uses,CORBA_dk_Event}CORBA_DefinitionKind; 
#line 9378 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_DefinitionKind_struct; 
#line 9379 "orbit-policy.mc"
typedef  CORBA_string CORBA_VersionSpec; 
#line 9382 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_VersionSpec_struct; 
#line 9383 "orbit-policy.mc"
typedef struct CORBA_Contained_Description_type CORBA_Contained_Description; 
#line 9387 "orbit-policy.mc"
struct CORBA_Contained_Description_type { CORBA_DefinitionKind kind;  CORBA_any value; }; 
#line 9390 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Contained_Description_struct; 
#line 9391 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_InterfaceDef; 
#line 9394 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_InterfaceDef_struct; 
#line 9395 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_InterfaceDef CORBA_InterfaceDefSeq; 
#line 9398 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InterfaceDefSeq_struct; 
#line 9399 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_ValueDef; 
#line 9402 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ValueDef_struct; 
#line 9403 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ValueDef CORBA_ValueDefSeq; 
#line 9406 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueDefSeq_struct; 
#line 9407 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_AbstractInterfaceDef; 
#line 9410 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_AbstractInterfaceDef_struct; 
#line 9411 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_AbstractInterfaceDef CORBA_AbstractInterfaceDefSeq; 
#line 9414 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AbstractInterfaceDefSeq_struct; 
#line 9415 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_LocalInterfaceDef; 
#line 9418 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_LocalInterfaceDef_struct; 
#line 9419 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_LocalInterfaceDef CORBA_LocalInterfaceDefSeq; 
#line 9422 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_LocalInterfaceDefSeq_struct; 
#line 9423 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_ExtInterfaceDef; 
#line 9426 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExtInterfaceDef_struct; 
#line 9427 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExtInterfaceDef CORBA_ExtInterfaceDefSeq; 
#line 9430 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtInterfaceDefSeq_struct; 
#line 9431 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_ExtValueDef; 
#line 9434 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExtValueDef_struct; 
#line 9435 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExtValueDef CORBA_ExtValueDefSeq; 
#line 9438 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtValueDefSeq_struct; 
#line 9439 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_ExtAbstractInterfaceDef; 
#line 9442 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExtAbstractInterfaceDef_struct; 
#line 9443 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExtAbstractInterfaceDef CORBA_ExtAbstractInterfaceDefSeq; 
#line 9446 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtAbstractInterfaceDefSeq_struct; 
#line 9447 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_ExtLocalInterfaceDef; 
#line 9450 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExtLocalInterfaceDef_struct; 
#line 9451 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExtLocalInterfaceDef CORBA_ExtLocalInterfaceDefSeq; 
#line 9454 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtLocalInterfaceDefSeq_struct; 
#line 9455 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_Contained; 
#line 9458 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_Contained_struct; 
#line 9459 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Contained CORBA_ContainedSeq; 
#line 9462 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ContainedSeq_struct; 
#line 9463 "orbit-policy.mc"
typedef struct CORBA_StructMember_type CORBA_StructMember; 
#line 9468 "orbit-policy.mc"
struct CORBA_StructMember_type { CORBA_Identifier name;  CORBA_TypeCode type;  CORBA_IDLType type_def; }; 
#line 9471 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_StructMember_struct; 
#line 9472 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_StructMember *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_StructMember; 
#line 9475 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_StructMember_struct; 
#line 9476 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_StructMember CORBA_StructMemberSeq; 
#line 9479 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_StructMemberSeq_struct; 
#line 9480 "orbit-policy.mc"
typedef struct CORBA_Initializer_type CORBA_Initializer; 
#line 9484 "orbit-policy.mc"
struct CORBA_Initializer_type { CORBA_StructMemberSeq members;  CORBA_Identifier name; }; 
#line 9487 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Initializer_struct; 
#line 9488 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_Initializer *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_Initializer; 
#line 9491 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_Initializer_struct; 
#line 9492 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Initializer CORBA_InitializerSeq; 
#line 9495 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InitializerSeq_struct; 
#line 9496 "orbit-policy.mc"
typedef struct CORBA_UnionMember_type CORBA_UnionMember; 
#line 9502 "orbit-policy.mc"
struct CORBA_UnionMember_type { CORBA_Identifier name;  CORBA_any label;  CORBA_TypeCode type;  CORBA_IDLType type_def; }; 
#line 9505 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_UnionMember_struct; 
#line 9513 "orbit-policy.mc"
typedef struct CORBA_ExceptionDescription_type CORBA_ExceptionDescription; 
#line 9520 "orbit-policy.mc"
struct CORBA_ExceptionDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_TypeCode type; }; 
#line 9523 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExceptionDescription_struct; 
#line 9524 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_ExceptionDescription *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_ExceptionDescription; 
#line 9527 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExceptionDescription_struct; 
#line 9528 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExceptionDescription CORBA_ExcDescriptionSeq; 
#line 9531 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExcDescriptionSeq_struct; 
#line 9532 "orbit-policy.mc"
typedef struct CORBA_ExtInitializer_type CORBA_ExtInitializer; 
#line 9537 "orbit-policy.mc"
struct CORBA_ExtInitializer_type { CORBA_StructMemberSeq members;  CORBA_ExcDescriptionSeq exceptions;  CORBA_Identifier name; }; 
#line 9540 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtInitializer_struct; 
#line 9541 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_ExtInitializer *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_ExtInitializer; 
#line 9544 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExtInitializer_struct; 
#line 9545 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExtInitializer CORBA_ExtInitializerSeq; 
#line 9548 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtInitializerSeq_struct; 
#line 9549 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_UnionMember *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_UnionMember; 
#line 9552 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_UnionMember_struct; 
#line 9553 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_UnionMember CORBA_UnionMemberSeq; 
#line 9556 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_UnionMemberSeq_struct; 
#line 9557 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_string *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_string; 
#line 9560 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_string_struct; 
#line 9561 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_string CORBA_sequence_CORBA_Identifier; 
#line 9564 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_Identifier_struct; 
#line 9565 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Identifier CORBA_EnumMemberSeq; 
#line 9568 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_EnumMemberSeq_struct; 
#line 9569 "orbit-policy.mc"
typedef struct CORBA_Container_Description_type CORBA_Container_Description; 
#line 9574 "orbit-policy.mc"
struct CORBA_Container_Description_type { CORBA_Contained contained_object;  CORBA_DefinitionKind kind;  CORBA_any value; }; 
#line 9577 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Container_Description_struct; 
#line 9578 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_Container_Description *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_Container_Description; 
#line 9581 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_Container_Description_struct; 
#line 9582 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Container_Description CORBA_Container_DescriptionSeq; 
#line 9585 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Container_DescriptionSeq_struct; 
#line 9609 "orbit-policy.mc"
typedef enum {CORBA_pk_null,CORBA_pk_void,CORBA_pk_short,CORBA_pk_long,CORBA_pk_ushort,CORBA_pk_ulong,CORBA_pk_float,CORBA_pk_double,CORBA_pk_boolean,CORBA_pk_char,CORBA_pk_octet,CORBA_pk_any,CORBA_pk_TypeCode,CORBA_pk_Principal,CORBA_pk_string,CORBA_pk_objref,CORBA_pk_longlong,CORBA_pk_ulonglong,CORBA_pk_longdouble,CORBA_pk_wchar,CORBA_pk_wstring,CORBA_pk_value_base}CORBA_PrimitiveKind; 
#line 9612 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_PrimitiveKind_struct; 
#line 9613 "orbit-policy.mc"
typedef struct CORBA_ModuleDescription_type CORBA_ModuleDescription; 
#line 9619 "orbit-policy.mc"
struct CORBA_ModuleDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version; }; 
#line 9622 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ModuleDescription_struct; 
#line 9623 "orbit-policy.mc"
typedef struct CORBA_ConstantDescription_type CORBA_ConstantDescription; 
#line 9631 "orbit-policy.mc"
struct CORBA_ConstantDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_TypeCode type;  CORBA_any value; }; 
#line 9634 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ConstantDescription_struct; 
#line 9635 "orbit-policy.mc"
typedef struct CORBA_TypeDescription_type CORBA_TypeDescription; 
#line 9642 "orbit-policy.mc"
struct CORBA_TypeDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_TypeCode type; }; 
#line 9645 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TypeDescription_struct; 
#line 9649 "orbit-policy.mc"
typedef enum {CORBA_ATTR_NORMAL,CORBA_ATTR_READONLY}CORBA_AttributeMode; 
#line 9652 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AttributeMode_struct; 
#line 9653 "orbit-policy.mc"
typedef struct CORBA_AttributeDescription_type CORBA_AttributeDescription; 
#line 9661 "orbit-policy.mc"
struct CORBA_AttributeDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_TypeCode type;  CORBA_AttributeMode mode; }; 
#line 9664 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AttributeDescription_struct; 
#line 9672 "orbit-policy.mc"
typedef struct CORBA_ExtAttributeDescription_type CORBA_ExtAttributeDescription; 
#line 9682 "orbit-policy.mc"
struct CORBA_ExtAttributeDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_TypeCode type;  CORBA_AttributeMode mode;  CORBA_ExcDescriptionSeq get_exceptions;  CORBA_ExcDescriptionSeq put_exceptions; }; 
#line 9685 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtAttributeDescription_struct; 
#line 9686 "orbit-policy.mc"
typedef  CORBA_Object CORBA_ExtAttributeDef; 
#line 9687 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_ExtAttributeDef__classid; 
#line 9690 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtAttributeDef_struct; 
#line 9699 "orbit-policy.mc"
typedef enum {CORBA_OP_NORMAL,CORBA_OP_ONEWAY}CORBA_OperationMode; 
#line 9702 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_OperationMode_struct; 
#line 9712 "orbit-policy.mc"
typedef enum {CORBA_PARAM_IN,CORBA_PARAM_OUT,CORBA_PARAM_INOUT}CORBA_ParameterMode; 
#line 9715 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ParameterMode_struct; 
#line 9721 "orbit-policy.mc"
typedef struct CORBA_ParameterDescription_type CORBA_ParameterDescription; 
#line 9727 "orbit-policy.mc"
struct CORBA_ParameterDescription_type { CORBA_Identifier name;  CORBA_TypeCode type;  CORBA_IDLType type_def;  CORBA_ParameterMode mode; }; 
#line 9730 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ParameterDescription_struct; 
#line 9731 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_ParameterDescription *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_ParameterDescription; 
#line 9734 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ParameterDescription_struct; 
#line 9735 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ParameterDescription CORBA_ParDescriptionSeq; 
#line 9738 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ParDescriptionSeq_struct; 
#line 9739 "orbit-policy.mc"
typedef  CORBA_Identifier CORBA_ContextIdentifier; 
#line 9742 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ContextIdentifier_struct; 
#line 9743 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_string CORBA_sequence_CORBA_ContextIdentifier; 
#line 9746 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ContextIdentifier_struct; 
#line 9747 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ContextIdentifier CORBA_ContextIdSeq; 
#line 9750 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ContextIdSeq_struct; 
#line 9751 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_ExceptionDef; 
#line 9754 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExceptionDef_struct; 
#line 9755 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExceptionDef CORBA_ExceptionDefSeq; 
#line 9758 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExceptionDefSeq_struct; 
#line 9759 "orbit-policy.mc"
typedef struct CORBA_OperationDescription_type CORBA_OperationDescription; 
#line 9770 "orbit-policy.mc"
struct CORBA_OperationDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_TypeCode result;  CORBA_OperationMode mode;  CORBA_ContextIdSeq contexts;  CORBA_ParDescriptionSeq parameters;  CORBA_ExcDescriptionSeq exceptions; }; 
#line 9773 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_OperationDescription_struct; 
#line 9774 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_string CORBA_sequence_CORBA_RepositoryId; 
#line 9777 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_RepositoryId_struct; 
#line 9778 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_RepositoryId CORBA_RepositoryIdSeq; 
#line 9781 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_RepositoryIdSeq_struct; 
#line 9782 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_OperationDescription *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_OperationDescription; 
#line 9785 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_OperationDescription_struct; 
#line 9786 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_OperationDescription CORBA_OpDescriptionSeq; 
#line 9789 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_OpDescriptionSeq_struct; 
#line 9790 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_AttributeDescription *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_AttributeDescription; 
#line 9793 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_AttributeDescription_struct; 
#line 9794 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_AttributeDescription CORBA_AttrDescriptionSeq; 
#line 9797 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AttrDescriptionSeq_struct; 
#line 9798 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_ExtAttributeDescription *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_ExtAttributeDescription; 
#line 9801 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ExtAttributeDescription_struct; 
#line 9802 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ExtAttributeDescription CORBA_ExtAttrDescriptionSeq; 
#line 9805 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtAttrDescriptionSeq_struct; 
#line 9806 "orbit-policy.mc"
typedef struct CORBA_InterfaceDef_FullInterfaceDescription_type CORBA_InterfaceDef_FullInterfaceDescription; 
#line 9817 "orbit-policy.mc"
struct CORBA_InterfaceDef_FullInterfaceDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_OpDescriptionSeq operations;  CORBA_AttrDescriptionSeq attributes;  CORBA_RepositoryIdSeq base_interfaces;  CORBA_TypeCode type;  CORBA_boolean is_abstract; }; 
#line 9820 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InterfaceDef_FullInterfaceDescription_struct; 
#line 9828 "orbit-policy.mc"
typedef struct CORBA_InterfaceDescription_type CORBA_InterfaceDescription; 
#line 9836 "orbit-policy.mc"
struct CORBA_InterfaceDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_RepositoryIdSeq base_interfaces;  CORBA_boolean is_abstract; }; 
#line 9839 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InterfaceDescription_struct; 
#line 9840 "orbit-policy.mc"
typedef  CORBA_Object CORBA_InterfaceAttrExtension; 
#line 9841 "orbit-policy.mc"
extern  CORBA_unsigned_long CORBA_InterfaceAttrExtension__classid; 
#line 9844 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InterfaceAttrExtension_struct; 
#line 9850 "orbit-policy.mc"
typedef struct CORBA_InterfaceAttrExtension_ExtFullInterfaceDescription_type CORBA_InterfaceAttrExtension_ExtFullInterfaceDescription; 
#line 9860 "orbit-policy.mc"
struct CORBA_InterfaceAttrExtension_ExtFullInterfaceDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_OpDescriptionSeq operations;  CORBA_ExtAttrDescriptionSeq attributes;  CORBA_RepositoryIdSeq base_interfaces;  CORBA_TypeCode type; }; 
#line 9863 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_InterfaceAttrExtension_ExtFullInterfaceDescription_struct; 
#line 9864 "orbit-policy.mc"
typedef  CORBA_short CORBA_Visibility; 
#line 9867 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Visibility_struct; 
#line 9868 "orbit-policy.mc"
typedef struct CORBA_ValueMember_type CORBA_ValueMember; 
#line 9877 "orbit-policy.mc"
struct CORBA_ValueMember_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_TypeCode type;  CORBA_IDLType type_def;  CORBA_Visibility access; }; 
#line 9880 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueMember_struct; 
#line 9881 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_ValueMember *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_ValueMember; 
#line 9884 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ValueMember_struct; 
#line 9885 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ValueMember CORBA_ValueMemberSeq; 
#line 9888 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueMemberSeq_struct; 
#line 9889 "orbit-policy.mc"
typedef struct CORBA_ValueDef_FullValueDescription_type CORBA_ValueDef_FullValueDescription; 
#line 9906 "orbit-policy.mc"
struct CORBA_ValueDef_FullValueDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_boolean is_abstract;  CORBA_boolean is_custom;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_OpDescriptionSeq operations;  CORBA_AttrDescriptionSeq attributes;  CORBA_ValueMemberSeq members;  CORBA_InitializerSeq initializers;  CORBA_RepositoryIdSeq supported_interfaces;  CORBA_RepositoryIdSeq abstract_base_values;  CORBA_boolean is_truncatable;  CORBA_RepositoryId base_value;  CORBA_TypeCode type; }; 
#line 9909 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueDef_FullValueDescription_struct; 
#line 9917 "orbit-policy.mc"
typedef struct CORBA_ValueDescription_type CORBA_ValueDescription; 
#line 9929 "orbit-policy.mc"
struct CORBA_ValueDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_boolean is_abstract;  CORBA_boolean is_custom;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_RepositoryIdSeq supported_interfaces;  CORBA_RepositoryIdSeq abstract_base_values;  CORBA_boolean is_truncatable;  CORBA_RepositoryId base_value; }; 
#line 9932 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueDescription_struct; 
#line 9933 "orbit-policy.mc"
typedef struct CORBA_ExtValueDef_ExtFullValueDescription_type CORBA_ExtValueDef_ExtFullValueDescription; 
#line 9950 "orbit-policy.mc"
struct CORBA_ExtValueDef_ExtFullValueDescription_type { CORBA_Identifier name;  CORBA_RepositoryId id;  CORBA_boolean is_abstract;  CORBA_boolean is_custom;  CORBA_RepositoryId defined_in;  CORBA_VersionSpec version;  CORBA_OpDescriptionSeq operations;  CORBA_ExtAttrDescriptionSeq attributes;  CORBA_ValueMemberSeq members;  CORBA_ExtInitializerSeq initializers;  CORBA_RepositoryIdSeq supported_interfaces;  CORBA_RepositoryIdSeq abstract_base_values;  CORBA_boolean is_truncatable;  CORBA_RepositoryId base_value;  CORBA_TypeCode type; }; 
#line 9953 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ExtValueDef_ExtFullValueDescription_struct; 
#line 9992 "orbit-policy.mc"
typedef enum {CORBA_tk_null,CORBA_tk_void,CORBA_tk_short,CORBA_tk_long,CORBA_tk_ushort,CORBA_tk_ulong,CORBA_tk_float,CORBA_tk_double,CORBA_tk_boolean,CORBA_tk_char,CORBA_tk_octet,CORBA_tk_any,CORBA_tk_TypeCode,CORBA_tk_Principal,CORBA_tk_objref,CORBA_tk_struct,CORBA_tk_union,CORBA_tk_enum,CORBA_tk_string,CORBA_tk_sequence,CORBA_tk_array,CORBA_tk_alias,CORBA_tk_except,CORBA_tk_longlong,CORBA_tk_ulonglong,CORBA_tk_longdouble,CORBA_tk_wchar,CORBA_tk_wstring,CORBA_tk_fixed,CORBA_tk_value,CORBA_tk_value_box,CORBA_tk_native,CORBA_tk_abstract_interface,CORBA_tk_local_interface,CORBA_tk_component,CORBA_tk_home,CORBA_tk_event}CORBA_TCKind; 
#line 9995 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TCKind_struct; 
#line 10001 "orbit-policy.mc"
typedef  CORBA_short CORBA_ValueModifier; 
#line 10004 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ValueModifier_struct; 
#line 10005 "orbit-policy.mc"
typedef struct CORBA_TypeCode_Bounds_type CORBA_TypeCode_Bounds; 
#line 10008 "orbit-policy.mc"
struct CORBA_TypeCode_Bounds_type {int dummy; }; 
#line 10011 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TypeCode_Bounds_struct; 
#line 10012 "orbit-policy.mc"
typedef struct CORBA_TypeCode_BadKind_type CORBA_TypeCode_BadKind; 
#line 10015 "orbit-policy.mc"
struct CORBA_TypeCode_BadKind_type {int dummy; }; 
#line 10018 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_TypeCode_BadKind_struct; 
#line 10019 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_any *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_any; 
#line 10022 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_any_struct; 
#line 10023 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_any CORBA_AnySeq; 
#line 10026 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_AnySeq_struct; 
#line 10027 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_boolean *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_boolean; 
#line 10030 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_boolean_struct; 
#line 10031 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_boolean CORBA_BooleanSeq; 
#line 10034 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BooleanSeq_struct; 
#line 10035 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_char *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_char; 
#line 10038 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_char_struct; 
#line 10039 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_char CORBA_CharSeq; 
#line 10042 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_CharSeq_struct; 
#line 10043 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_wchar *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_wchar; 
#line 10046 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_wchar_struct; 
#line 10047 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_wchar CORBA_WCharSeq; 
#line 10050 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_WCharSeq_struct; 
#line 10051 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_octet *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_octet; 
#line 10054 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_octet_struct; 
#line 10055 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CORBA_OctetSeq; 
#line 10058 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_OctetSeq_struct; 
#line 10059 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_short *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_short; 
#line 10062 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_short_struct; 
#line 10063 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_short CORBA_ShortSeq; 
#line 10066 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ShortSeq_struct; 
#line 10067 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_unsigned_short CORBA_UShortSeq; 
#line 10070 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_UShortSeq_struct; 
#line 10071 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_long *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_long; 
#line 10074 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_long_struct; 
#line 10075 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_long CORBA_LongSeq; 
#line 10078 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_LongSeq_struct; 
#line 10079 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_unsigned_long CORBA_ULongSeq; 
#line 10082 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ULongSeq_struct; 
#line 10083 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_long_long *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_long_long; 
#line 10086 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_long_long_struct; 
#line 10087 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_long_long CORBA_LongLongSeq; 
#line 10090 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_LongLongSeq_struct; 
#line 10091 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_unsigned_long_long *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_unsigned_long_long; 
#line 10094 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_unsigned_long_long_struct; 
#line 10095 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_unsigned_long_long CORBA_ULongLongSeq; 
#line 10098 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ULongLongSeq_struct; 
#line 10099 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_float *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_float; 
#line 10102 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_float_struct; 
#line 10103 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_float CORBA_FloatSeq; 
#line 10106 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_FloatSeq_struct; 
#line 10107 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_double *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_double; 
#line 10110 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_double_struct; 
#line 10111 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_double CORBA_DoubleSeq; 
#line 10114 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_DoubleSeq_struct; 
#line 10115 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_long_double *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_long_double; 
#line 10118 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_long_double_struct; 
#line 10119 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_long_double CORBA_LongDoubleSeq; 
#line 10122 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_LongDoubleSeq_struct; 
#line 10123 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_string CORBA_StringSeq; 
#line 10126 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_StringSeq_struct; 
#line 10127 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_wstring *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_wstring; 
#line 10130 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_wstring_struct; 
#line 10131 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_wstring CORBA_WStringSeq; 
#line 10134 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_WStringSeq_struct; 
#line 10135 "orbit-policy.mc"
typedef struct CORBA_BadFixedValue_type CORBA_BadFixedValue; 
#line 10138 "orbit-policy.mc"
struct CORBA_BadFixedValue_type { CORBA_unsigned_long offset; }; 
#line 10141 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_BadFixedValue_struct; 
#line 10142 "orbit-policy.mc"
typedef struct CORBA_SystemException_type CORBA_SystemException; 
#line 10146 "orbit-policy.mc"
struct CORBA_SystemException_type { CORBA_unsigned_long minor;  CORBA_completion_status completed; }; 
#line 10149 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_SystemException_struct; 
#line 10150 "orbit-policy.mc"
typedef struct CORBA_Context_type *CORBA_Context; 
#line 10158 "orbit-policy.mc"
typedef struct CORBA_NVList_type *CORBA_NVList; 
#line 10159 "orbit-policy.mc"
typedef struct CORBA_Request_type *CORBA_Request; 
#line 10167 "orbit-policy.mc"
typedef struct CORBA_ServerRequest_type *CORBA_ServerRequest; 
#line 10174 "orbit-policy.mc"
typedef  CORBA_unsigned_long CORBA_Flags; 
#line 10177 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_Flags_struct; 
#line 10185 "orbit-policy.mc"
typedef struct CORBA_NamedValue_type CORBA_NamedValue; 
#line 10191 "orbit-policy.mc"
struct CORBA_NamedValue_type { CORBA_Identifier name;  CORBA_any argument;  CORBA_long len;  CORBA_Flags arg_modes; }; 
#line 10194 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_NamedValue_struct; 
#line 10205 "orbit-policy.mc"
typedef enum {CORBA_SET_OVERRIDE,CORBA_ADD_OVERRIDE}CORBA_SetOverrideType; 
#line 10208 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_SetOverrideType_struct; 
#line 10209 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_CORBA_Request; 
#line 10212 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_Request_struct; 
#line 10213 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Request CORBA_RequestSeq; 
#line 10216 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_RequestSeq_struct; 
#line 10217 "orbit-policy.mc"
typedef struct CORBA_AbstractBase_type *CORBA_AbstractBase; 
#line 10221 "orbit-policy.mc"
typedef  CORBA_unsigned_short CORBA_ServiceType; 
#line 10224 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ServiceType_struct; 
#line 10232 "orbit-policy.mc"
typedef  CORBA_unsigned_long CORBA_ServiceOption; 
#line 10235 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ServiceOption_struct; 
#line 10243 "orbit-policy.mc"
typedef  CORBA_unsigned_long CORBA_ServiceDetailType; 
#line 10246 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ServiceDetailType_struct; 
#line 10247 "orbit-policy.mc"
typedef struct CORBA_ServiceDetail_type CORBA_ServiceDetail; 
#line 10251 "orbit-policy.mc"
struct CORBA_ServiceDetail_type { CORBA_ServiceDetailType service_detail_type;  CORBA_sequence_CORBA_octet service_detail; }; 
#line 10254 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ServiceDetail_struct; 
#line 10262 "orbit-policy.mc"
typedef struct CORBA_ServiceInformation_type CORBA_ServiceInformation; 
#line 10263 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_unsigned_long CORBA_sequence_CORBA_ServiceOption; 
#line 10266 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ServiceOption_struct; 
#line 10267 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_ServiceDetail *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_ServiceDetail; 
#line 10270 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ServiceDetail_struct; 
#line 10281 "orbit-policy.mc"
struct CORBA_ServiceInformation_type { CORBA_sequence_CORBA_ServiceOption service_options;  CORBA_sequence_CORBA_ServiceDetail service_details; }; 
#line 10284 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ServiceInformation_struct; 
#line 10292 "orbit-policy.mc"
typedef struct CORBA_ValueFactory_type *CORBA_ValueFactory; 
#line 10296 "orbit-policy.mc"
typedef  CORBA_string CORBA_ORBid; 
#line 10299 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ORBid_struct; 
#line 10300 "orbit-policy.mc"
typedef struct CORBA_WrongTransaction_type CORBA_WrongTransaction; 
#line 10303 "orbit-policy.mc"
struct CORBA_WrongTransaction_type {int dummy; }; 
#line 10306 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_WrongTransaction_struct; 
#line 10307 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_string CORBA_sequence_CORBA_ORB_ObjectId; 
#line 10310 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_ORB_ObjectId_struct; 
#line 10311 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_ORB_ObjectId CORBA_ORB_ObjectIdList; 
#line 10314 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ORB_ObjectIdList_struct; 
#line 10315 "orbit-policy.mc"
typedef struct CORBA_ORB_InvalidName_type CORBA_ORB_InvalidName; 
#line 10318 "orbit-policy.mc"
struct CORBA_ORB_InvalidName_type {int dummy; }; 
#line 10321 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_ORB_InvalidName_struct; 
#line 10329 "orbit-policy.mc"
typedef struct CORBA_OpaqueValue_type *CORBA_OpaqueValue; 
#line 10330 "orbit-policy.mc"
 CORBA_PolicyType CORBA_Policy__get_policy_type( CORBA_Policy _obj,  CORBA_Environment *ev); 
#line 10331 "orbit-policy.mc"
 CORBA_Policy CORBA_Policy_copy( CORBA_Policy _obj,  CORBA_Environment *ev); 
#line 10332 "orbit-policy.mc"
void CORBA_Policy_destroy( CORBA_Policy _obj,  CORBA_Environment *ev); 
#line 10333 "orbit-policy.mc"
 CORBA_Policy CORBA_DomainManager_get_domain_policy( CORBA_DomainManager _obj, const  CORBA_PolicyType policy_type,  CORBA_Environment *ev); 
#line 10337 "orbit-policy.mc"
void CORBA_ConstructionPolicy_make_domain_manager( CORBA_ConstructionPolicy _obj, const  CORBA_InterfaceDef object_type, const  CORBA_boolean constr_policy,  CORBA_Environment *ev); 
#line 10338 "orbit-policy.mc"
 CORBA_DefinitionKind CORBA_IRObject__get_def_kind( CORBA_IRObject _obj,  CORBA_Environment *ev); 
#line 10339 "orbit-policy.mc"
void CORBA_IRObject_destroy( CORBA_IRObject _obj,  CORBA_Environment *ev); 
#line 10342 "orbit-policy.mc"
 CORBA_RepositoryId CORBA_Contained__get_id( CORBA_Contained _obj,  CORBA_Environment *ev); 
#line 10343 "orbit-policy.mc"
void CORBA_Contained__set_id( CORBA_Contained _obj, const  CORBA_char *value,  CORBA_Environment *ev); 
#line 10344 "orbit-policy.mc"
 CORBA_Identifier CORBA_Contained__get_name( CORBA_Contained _obj,  CORBA_Environment *ev); 
#line 10345 "orbit-policy.mc"
void CORBA_Contained__set_name( CORBA_Contained _obj, const  CORBA_char *value,  CORBA_Environment *ev); 
#line 10346 "orbit-policy.mc"
 CORBA_VersionSpec CORBA_Contained__get_version( CORBA_Contained _obj,  CORBA_Environment *ev); 
#line 10347 "orbit-policy.mc"
void CORBA_Contained__set_version( CORBA_Contained _obj, const  CORBA_char *value,  CORBA_Environment *ev); 
#line 10348 "orbit-policy.mc"
 CORBA_Container CORBA_Contained__get_defined_in( CORBA_Contained _obj,  CORBA_Environment *ev); 
#line 10349 "orbit-policy.mc"
 CORBA_ScopedName CORBA_Contained__get_absolute_name( CORBA_Contained _obj,  CORBA_Environment *ev); 
#line 10350 "orbit-policy.mc"
 CORBA_Repository CORBA_Contained__get_containing_repository( CORBA_Contained _obj,  CORBA_Environment *ev); 
#line 10351 "orbit-policy.mc"
 CORBA_Contained_Description *CORBA_Contained_describe( CORBA_Contained _obj,  CORBA_Environment *ev); 
#line 10352 "orbit-policy.mc"
void CORBA_Contained_move( CORBA_Contained _obj, const  CORBA_Container new_container, const  CORBA_char *new_name, const  CORBA_char *new_version,  CORBA_Environment *ev); 
#line 10355 "orbit-policy.mc"
 CORBA_Contained CORBA_Container_lookup( CORBA_Container _obj, const  CORBA_char *search_name,  CORBA_Environment *ev); 
#line 10356 "orbit-policy.mc"
 CORBA_ContainedSeq *CORBA_Container_contents( CORBA_Container _obj, const  CORBA_DefinitionKind limit_type, const  CORBA_boolean exclude_inherited,  CORBA_Environment *ev); 
#line 10357 "orbit-policy.mc"
 CORBA_ContainedSeq *CORBA_Container_lookup_name( CORBA_Container _obj, const  CORBA_char *search_name, const  CORBA_long levels_to_search, const  CORBA_DefinitionKind limit_type, const  CORBA_boolean exclude_inherited,  CORBA_Environment *ev); 
#line 10358 "orbit-policy.mc"
 CORBA_Container_DescriptionSeq *CORBA_Container_describe_contents( CORBA_Container _obj, const  CORBA_DefinitionKind limit_type, const  CORBA_boolean exclude_inherited, const  CORBA_long max_returned_objs,  CORBA_Environment *ev); 
#line 10359 "orbit-policy.mc"
 CORBA_ModuleDef CORBA_Container_create_module( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version,  CORBA_Environment *ev); 
#line 10360 "orbit-policy.mc"
 CORBA_ConstantDef CORBA_Container_create_constant( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType type, const  CORBA_any *value,  CORBA_Environment *ev); 
#line 10361 "orbit-policy.mc"
 CORBA_StructDef CORBA_Container_create_struct( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_StructMemberSeq *members,  CORBA_Environment *ev); 
#line 10362 "orbit-policy.mc"
 CORBA_UnionDef CORBA_Container_create_union( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType discriminator_type, const  CORBA_UnionMemberSeq *members,  CORBA_Environment *ev); 
#line 10363 "orbit-policy.mc"
 CORBA_EnumDef CORBA_Container_create_enum( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_EnumMemberSeq *members,  CORBA_Environment *ev); 
#line 10364 "orbit-policy.mc"
 CORBA_AliasDef CORBA_Container_create_alias( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType original_type,  CORBA_Environment *ev); 
#line 10365 "orbit-policy.mc"
 CORBA_InterfaceDef CORBA_Container_create_interface( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_InterfaceDefSeq *base_interfaces, const  CORBA_boolean is_abstract,  CORBA_Environment *ev); 
#line 10366 "orbit-policy.mc"
 CORBA_ValueDef CORBA_Container_create_value( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_boolean is_custom, const  CORBA_boolean is_abstract, const  CORBA_ValueDef base_value, const  CORBA_boolean is_truncatable, const  CORBA_ValueDefSeq *abstract_base_values, const  CORBA_InterfaceDefSeq *supported_interfaces, const  CORBA_InitializerSeq *initializers,  CORBA_Environment *ev); 
#line 10367 "orbit-policy.mc"
 CORBA_ValueBoxDef CORBA_Container_create_value_box( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType original_type_def,  CORBA_Environment *ev); 
#line 10368 "orbit-policy.mc"
 CORBA_ExceptionDef CORBA_Container_create_exception( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_StructMemberSeq *members,  CORBA_Environment *ev); 
#line 10369 "orbit-policy.mc"
 CORBA_NativeDef CORBA_Container_create_native( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version,  CORBA_Environment *ev); 
#line 10370 "orbit-policy.mc"
 CORBA_AbstractInterfaceDef CORBA_Container_create_abstract_interface( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_AbstractInterfaceDefSeq *base_interfaces,  CORBA_Environment *ev); 
#line 10371 "orbit-policy.mc"
 CORBA_LocalInterfaceDef CORBA_Container_create_local_interface( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_InterfaceDefSeq *base_interfaces,  CORBA_Environment *ev); 
#line 10372 "orbit-policy.mc"
 CORBA_ExtValueDef CORBA_Container_create_ext_value( CORBA_Container _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_boolean is_custom, const  CORBA_boolean is_abstract, const  CORBA_ValueDef base_value, const  CORBA_boolean is_truncatable, const  CORBA_ValueDefSeq *abstract_base_values, const  CORBA_InterfaceDefSeq *supported_interfaces, const  CORBA_ExtInitializerSeq *initializers,  CORBA_Environment *ev); 
#line 10375 "orbit-policy.mc"
 CORBA_TypeCode CORBA_IDLType__get_type( CORBA_IDLType _obj,  CORBA_Environment *ev); 
#line 10376 "orbit-policy.mc"
 CORBA_Contained CORBA_Repository_lookup_id( CORBA_Repository _obj, const  CORBA_char *search_id,  CORBA_Environment *ev); 
#line 10377 "orbit-policy.mc"
 CORBA_TypeCode CORBA_Repository_get_canonical_typecode( CORBA_Repository _obj, const  CORBA_TypeCode tc,  CORBA_Environment *ev); 
#line 10378 "orbit-policy.mc"
 CORBA_PrimitiveDef CORBA_Repository_get_primitive( CORBA_Repository _obj, const  CORBA_PrimitiveKind kind,  CORBA_Environment *ev); 
#line 10379 "orbit-policy.mc"
 CORBA_StringDef CORBA_Repository_create_string( CORBA_Repository _obj, const  CORBA_unsigned_long bound,  CORBA_Environment *ev); 
#line 10380 "orbit-policy.mc"
 CORBA_WstringDef CORBA_Repository_create_wstring( CORBA_Repository _obj, const  CORBA_unsigned_long bound,  CORBA_Environment *ev); 
#line 10381 "orbit-policy.mc"
 CORBA_SequenceDef CORBA_Repository_create_sequence( CORBA_Repository _obj, const  CORBA_unsigned_long bound, const  CORBA_IDLType element_type,  CORBA_Environment *ev); 
#line 10382 "orbit-policy.mc"
 CORBA_ArrayDef CORBA_Repository_create_array( CORBA_Repository _obj, const  CORBA_unsigned_long length, const  CORBA_IDLType element_type,  CORBA_Environment *ev); 
#line 10383 "orbit-policy.mc"
 CORBA_FixedDef CORBA_Repository_create_fixed( CORBA_Repository _obj, const  CORBA_unsigned_short digits, const  CORBA_short scale,  CORBA_Environment *ev); 
#line 10384 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ConstantDef__get_type( CORBA_ConstantDef _obj,  CORBA_Environment *ev); 
#line 10385 "orbit-policy.mc"
 CORBA_IDLType CORBA_ConstantDef__get_type_def( CORBA_ConstantDef _obj,  CORBA_Environment *ev); 
#line 10386 "orbit-policy.mc"
void CORBA_ConstantDef__set_type_def( CORBA_ConstantDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10387 "orbit-policy.mc"
 CORBA_any *CORBA_ConstantDef__get_value( CORBA_ConstantDef _obj,  CORBA_Environment *ev); 
#line 10388 "orbit-policy.mc"
void CORBA_ConstantDef__set_value( CORBA_ConstantDef _obj, const  CORBA_any *value,  CORBA_Environment *ev); 
#line 10389 "orbit-policy.mc"
 CORBA_StructMemberSeq *CORBA_StructDef__get_members( CORBA_StructDef _obj,  CORBA_Environment *ev); 
#line 10390 "orbit-policy.mc"
void CORBA_StructDef__set_members( CORBA_StructDef _obj, const  CORBA_StructMemberSeq *value,  CORBA_Environment *ev); 
#line 10391 "orbit-policy.mc"
 CORBA_TypeCode CORBA_UnionDef__get_discriminator_type( CORBA_UnionDef _obj,  CORBA_Environment *ev); 
#line 10392 "orbit-policy.mc"
 CORBA_IDLType CORBA_UnionDef__get_discriminator_type_def( CORBA_UnionDef _obj,  CORBA_Environment *ev); 
#line 10393 "orbit-policy.mc"
void CORBA_UnionDef__set_discriminator_type_def( CORBA_UnionDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10394 "orbit-policy.mc"
 CORBA_UnionMemberSeq *CORBA_UnionDef__get_members( CORBA_UnionDef _obj,  CORBA_Environment *ev); 
#line 10395 "orbit-policy.mc"
void CORBA_UnionDef__set_members( CORBA_UnionDef _obj, const  CORBA_UnionMemberSeq *value,  CORBA_Environment *ev); 
#line 10396 "orbit-policy.mc"
 CORBA_EnumMemberSeq *CORBA_EnumDef__get_members( CORBA_EnumDef _obj,  CORBA_Environment *ev); 
#line 10397 "orbit-policy.mc"
void CORBA_EnumDef__set_members( CORBA_EnumDef _obj, const  CORBA_EnumMemberSeq *value,  CORBA_Environment *ev); 
#line 10398 "orbit-policy.mc"
 CORBA_IDLType CORBA_AliasDef__get_original_type_def( CORBA_AliasDef _obj,  CORBA_Environment *ev); 
#line 10399 "orbit-policy.mc"
void CORBA_AliasDef__set_original_type_def( CORBA_AliasDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10400 "orbit-policy.mc"
 CORBA_PrimitiveKind CORBA_PrimitiveDef__get_kind( CORBA_PrimitiveDef _obj,  CORBA_Environment *ev); 
#line 10404 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_StringDef__get_bound( CORBA_StringDef _obj,  CORBA_Environment *ev); 
#line 10405 "orbit-policy.mc"
void CORBA_StringDef__set_bound( CORBA_StringDef _obj, const  CORBA_unsigned_long value,  CORBA_Environment *ev); 
#line 10409 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_WstringDef__get_bound( CORBA_WstringDef _obj,  CORBA_Environment *ev); 
#line 10410 "orbit-policy.mc"
void CORBA_WstringDef__set_bound( CORBA_WstringDef _obj, const  CORBA_unsigned_long value,  CORBA_Environment *ev); 
#line 10414 "orbit-policy.mc"
 CORBA_unsigned_short CORBA_FixedDef__get_digits( CORBA_FixedDef _obj,  CORBA_Environment *ev); 
#line 10415 "orbit-policy.mc"
void CORBA_FixedDef__set_digits( CORBA_FixedDef _obj, const  CORBA_unsigned_short value,  CORBA_Environment *ev); 
#line 10416 "orbit-policy.mc"
 CORBA_short CORBA_FixedDef__get_scale( CORBA_FixedDef _obj,  CORBA_Environment *ev); 
#line 10417 "orbit-policy.mc"
void CORBA_FixedDef__set_scale( CORBA_FixedDef _obj, const  CORBA_short value,  CORBA_Environment *ev); 
#line 10421 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_SequenceDef__get_bound( CORBA_SequenceDef _obj,  CORBA_Environment *ev); 
#line 10422 "orbit-policy.mc"
void CORBA_SequenceDef__set_bound( CORBA_SequenceDef _obj, const  CORBA_unsigned_long value,  CORBA_Environment *ev); 
#line 10423 "orbit-policy.mc"
 CORBA_TypeCode CORBA_SequenceDef__get_element_type( CORBA_SequenceDef _obj,  CORBA_Environment *ev); 
#line 10424 "orbit-policy.mc"
 CORBA_IDLType CORBA_SequenceDef__get_element_type_def( CORBA_SequenceDef _obj,  CORBA_Environment *ev); 
#line 10425 "orbit-policy.mc"
void CORBA_SequenceDef__set_element_type_def( CORBA_SequenceDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10429 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_ArrayDef__get_length( CORBA_ArrayDef _obj,  CORBA_Environment *ev); 
#line 10430 "orbit-policy.mc"
void CORBA_ArrayDef__set_length( CORBA_ArrayDef _obj, const  CORBA_unsigned_long value,  CORBA_Environment *ev); 
#line 10431 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ArrayDef__get_element_type( CORBA_ArrayDef _obj,  CORBA_Environment *ev); 
#line 10432 "orbit-policy.mc"
 CORBA_IDLType CORBA_ArrayDef__get_element_type_def( CORBA_ArrayDef _obj,  CORBA_Environment *ev); 
#line 10433 "orbit-policy.mc"
void CORBA_ArrayDef__set_element_type_def( CORBA_ArrayDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10434 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ExceptionDef__get_type( CORBA_ExceptionDef _obj,  CORBA_Environment *ev); 
#line 10435 "orbit-policy.mc"
 CORBA_StructMemberSeq *CORBA_ExceptionDef__get_members( CORBA_ExceptionDef _obj,  CORBA_Environment *ev); 
#line 10436 "orbit-policy.mc"
void CORBA_ExceptionDef__set_members( CORBA_ExceptionDef _obj, const  CORBA_StructMemberSeq *value,  CORBA_Environment *ev); 
#line 10437 "orbit-policy.mc"
 CORBA_TypeCode CORBA_AttributeDef__get_type( CORBA_AttributeDef _obj,  CORBA_Environment *ev); 
#line 10438 "orbit-policy.mc"
 CORBA_IDLType CORBA_AttributeDef__get_type_def( CORBA_AttributeDef _obj,  CORBA_Environment *ev); 
#line 10439 "orbit-policy.mc"
void CORBA_AttributeDef__set_type_def( CORBA_AttributeDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10440 "orbit-policy.mc"
 CORBA_AttributeMode CORBA_AttributeDef__get_mode( CORBA_AttributeDef _obj,  CORBA_Environment *ev); 
#line 10441 "orbit-policy.mc"
void CORBA_AttributeDef__set_mode( CORBA_AttributeDef _obj, const  CORBA_AttributeMode value,  CORBA_Environment *ev); 
#line 10442 "orbit-policy.mc"
 CORBA_ExcDescriptionSeq *CORBA_ExtAttributeDef__get_get_exceptions( CORBA_ExtAttributeDef _obj,  CORBA_Environment *ev); 
#line 10443 "orbit-policy.mc"
void CORBA_ExtAttributeDef__set_get_exceptions( CORBA_ExtAttributeDef _obj, const  CORBA_ExcDescriptionSeq *value,  CORBA_Environment *ev); 
#line 10444 "orbit-policy.mc"
 CORBA_ExcDescriptionSeq *CORBA_ExtAttributeDef__get_set_exceptions( CORBA_ExtAttributeDef _obj,  CORBA_Environment *ev); 
#line 10445 "orbit-policy.mc"
void CORBA_ExtAttributeDef__set_set_exceptions( CORBA_ExtAttributeDef _obj, const  CORBA_ExcDescriptionSeq *value,  CORBA_Environment *ev); 
#line 10446 "orbit-policy.mc"
 CORBA_ExtAttributeDescription *CORBA_ExtAttributeDef_describe_attribute( CORBA_ExtAttributeDef _obj,  CORBA_Environment *ev); 
#line 10447 "orbit-policy.mc"
 CORBA_TypeCode CORBA_OperationDef__get_result( CORBA_OperationDef _obj,  CORBA_Environment *ev); 
#line 10448 "orbit-policy.mc"
 CORBA_IDLType CORBA_OperationDef__get_result_def( CORBA_OperationDef _obj,  CORBA_Environment *ev); 
#line 10449 "orbit-policy.mc"
void CORBA_OperationDef__set_result_def( CORBA_OperationDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10450 "orbit-policy.mc"
 CORBA_ParDescriptionSeq *CORBA_OperationDef__get_params( CORBA_OperationDef _obj,  CORBA_Environment *ev); 
#line 10451 "orbit-policy.mc"
void CORBA_OperationDef__set_params( CORBA_OperationDef _obj, const  CORBA_ParDescriptionSeq *value,  CORBA_Environment *ev); 
#line 10452 "orbit-policy.mc"
 CORBA_OperationMode CORBA_OperationDef__get_mode( CORBA_OperationDef _obj,  CORBA_Environment *ev); 
#line 10453 "orbit-policy.mc"
void CORBA_OperationDef__set_mode( CORBA_OperationDef _obj, const  CORBA_OperationMode value,  CORBA_Environment *ev); 
#line 10454 "orbit-policy.mc"
 CORBA_ContextIdSeq *CORBA_OperationDef__get_contexts( CORBA_OperationDef _obj,  CORBA_Environment *ev); 
#line 10455 "orbit-policy.mc"
void CORBA_OperationDef__set_contexts( CORBA_OperationDef _obj, const  CORBA_ContextIdSeq *value,  CORBA_Environment *ev); 
#line 10456 "orbit-policy.mc"
 CORBA_ExceptionDefSeq *CORBA_OperationDef__get_exceptions( CORBA_OperationDef _obj,  CORBA_Environment *ev); 
#line 10457 "orbit-policy.mc"
void CORBA_OperationDef__set_exceptions( CORBA_OperationDef _obj, const  CORBA_ExceptionDefSeq *value,  CORBA_Environment *ev); 
#line 10458 "orbit-policy.mc"
 CORBA_InterfaceDefSeq *CORBA_InterfaceDef__get_base_interfaces( CORBA_InterfaceDef _obj,  CORBA_Environment *ev); 
#line 10459 "orbit-policy.mc"
void CORBA_InterfaceDef__set_base_interfaces( CORBA_InterfaceDef _obj, const  CORBA_InterfaceDefSeq *value,  CORBA_Environment *ev); 
#line 10460 "orbit-policy.mc"
 CORBA_boolean CORBA_InterfaceDef__get_is_abstract( CORBA_InterfaceDef _obj,  CORBA_Environment *ev); 
#line 10461 "orbit-policy.mc"
void CORBA_InterfaceDef__set_is_abstract( CORBA_InterfaceDef _obj, const  CORBA_boolean value,  CORBA_Environment *ev); 
#line 10462 "orbit-policy.mc"
 CORBA_boolean CORBA_InterfaceDef_is_a( CORBA_InterfaceDef _obj, const  CORBA_char *interface_id,  CORBA_Environment *ev); 
#line 10463 "orbit-policy.mc"
 CORBA_InterfaceDef_FullInterfaceDescription *CORBA_InterfaceDef_describe_interface( CORBA_InterfaceDef _obj,  CORBA_Environment *ev); 
#line 10464 "orbit-policy.mc"
 CORBA_AttributeDef CORBA_InterfaceDef_create_attribute( CORBA_InterfaceDef _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType type, const  CORBA_AttributeMode mode,  CORBA_Environment *ev); 
#line 10465 "orbit-policy.mc"
 CORBA_OperationDef CORBA_InterfaceDef_create_operation( CORBA_InterfaceDef _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType result, const  CORBA_OperationMode mode, const  CORBA_ParDescriptionSeq *params, const  CORBA_ExceptionDefSeq *exceptions, const  CORBA_ContextIdSeq *contexts,  CORBA_Environment *ev); 
#line 10466 "orbit-policy.mc"
 CORBA_InterfaceAttrExtension_ExtFullInterfaceDescription *CORBA_InterfaceAttrExtension_describe_ext_interface( CORBA_InterfaceAttrExtension _obj,  CORBA_Environment *ev); 
#line 10467 "orbit-policy.mc"
 CORBA_ExtAttributeDef CORBA_InterfaceAttrExtension_create_ext_attribute( CORBA_InterfaceAttrExtension _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType type, const  CORBA_AttributeMode mode, const  CORBA_ExceptionDefSeq *get_exceptions, const  CORBA_ExceptionDefSeq *set_exceptions,  CORBA_Environment *ev); 
#line 10468 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ValueMemberDef__get_type( CORBA_ValueMemberDef _obj,  CORBA_Environment *ev); 
#line 10469 "orbit-policy.mc"
 CORBA_IDLType CORBA_ValueMemberDef__get_type_def( CORBA_ValueMemberDef _obj,  CORBA_Environment *ev); 
#line 10470 "orbit-policy.mc"
void CORBA_ValueMemberDef__set_type_def( CORBA_ValueMemberDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10471 "orbit-policy.mc"
 CORBA_Visibility CORBA_ValueMemberDef__get_access( CORBA_ValueMemberDef _obj,  CORBA_Environment *ev); 
#line 10472 "orbit-policy.mc"
void CORBA_ValueMemberDef__set_access( CORBA_ValueMemberDef _obj, const  CORBA_Visibility value,  CORBA_Environment *ev); 
#line 10473 "orbit-policy.mc"
 CORBA_InterfaceDefSeq *CORBA_ValueDef__get_supported_interfaces( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10474 "orbit-policy.mc"
void CORBA_ValueDef__set_supported_interfaces( CORBA_ValueDef _obj, const  CORBA_InterfaceDefSeq *value,  CORBA_Environment *ev); 
#line 10475 "orbit-policy.mc"
 CORBA_InitializerSeq *CORBA_ValueDef__get_initializers( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10476 "orbit-policy.mc"
void CORBA_ValueDef__set_initializers( CORBA_ValueDef _obj, const  CORBA_InitializerSeq *value,  CORBA_Environment *ev); 
#line 10477 "orbit-policy.mc"
 CORBA_ValueDef CORBA_ValueDef__get_base_value( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10478 "orbit-policy.mc"
void CORBA_ValueDef__set_base_value( CORBA_ValueDef _obj, const  CORBA_ValueDef value,  CORBA_Environment *ev); 
#line 10479 "orbit-policy.mc"
 CORBA_ValueDefSeq *CORBA_ValueDef__get_abstract_base_values( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10480 "orbit-policy.mc"
void CORBA_ValueDef__set_abstract_base_values( CORBA_ValueDef _obj, const  CORBA_ValueDefSeq *value,  CORBA_Environment *ev); 
#line 10481 "orbit-policy.mc"
 CORBA_boolean CORBA_ValueDef__get_is_abstract( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10482 "orbit-policy.mc"
void CORBA_ValueDef__set_is_abstract( CORBA_ValueDef _obj, const  CORBA_boolean value,  CORBA_Environment *ev); 
#line 10483 "orbit-policy.mc"
 CORBA_boolean CORBA_ValueDef__get_is_custom( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10484 "orbit-policy.mc"
void CORBA_ValueDef__set_is_custom( CORBA_ValueDef _obj, const  CORBA_boolean value,  CORBA_Environment *ev); 
#line 10485 "orbit-policy.mc"
 CORBA_boolean CORBA_ValueDef__get_is_truncatable( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10486 "orbit-policy.mc"
void CORBA_ValueDef__set_is_truncatable( CORBA_ValueDef _obj, const  CORBA_boolean value,  CORBA_Environment *ev); 
#line 10487 "orbit-policy.mc"
 CORBA_boolean CORBA_ValueDef_is_a( CORBA_ValueDef _obj, const  CORBA_char *id,  CORBA_Environment *ev); 
#line 10488 "orbit-policy.mc"
 CORBA_ValueDef_FullValueDescription *CORBA_ValueDef_describe_value( CORBA_ValueDef _obj,  CORBA_Environment *ev); 
#line 10489 "orbit-policy.mc"
 CORBA_ValueMemberDef CORBA_ValueDef_create_value_member( CORBA_ValueDef _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType type, const  CORBA_Visibility access,  CORBA_Environment *ev); 
#line 10490 "orbit-policy.mc"
 CORBA_AttributeDef CORBA_ValueDef_create_attribute( CORBA_ValueDef _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType type, const  CORBA_AttributeMode mode,  CORBA_Environment *ev); 
#line 10491 "orbit-policy.mc"
 CORBA_OperationDef CORBA_ValueDef_create_operation( CORBA_ValueDef _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType result, const  CORBA_OperationMode mode, const  CORBA_ParDescriptionSeq *params, const  CORBA_ExceptionDefSeq *exceptions, const  CORBA_ContextIdSeq *contexts,  CORBA_Environment *ev); 
#line 10492 "orbit-policy.mc"
 CORBA_ExtInitializerSeq *CORBA_ExtValueDef__get_ext_initializers( CORBA_ExtValueDef _obj,  CORBA_Environment *ev); 
#line 10493 "orbit-policy.mc"
void CORBA_ExtValueDef__set_ext_initializers( CORBA_ExtValueDef _obj, const  CORBA_ExtInitializerSeq *value,  CORBA_Environment *ev); 
#line 10494 "orbit-policy.mc"
 CORBA_ExtValueDef_ExtFullValueDescription *CORBA_ExtValueDef_describe_ext_value( CORBA_ExtValueDef _obj,  CORBA_Environment *ev); 
#line 10495 "orbit-policy.mc"
 CORBA_ExtAttributeDef CORBA_ExtValueDef_create_ext_attribute( CORBA_ExtValueDef _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_char *version, const  CORBA_IDLType type, const  CORBA_AttributeMode mode, const  CORBA_ExceptionDefSeq *get_exceptions, const  CORBA_ExceptionDefSeq *set_exceptions,  CORBA_Environment *ev); 
#line 10496 "orbit-policy.mc"
 CORBA_IDLType CORBA_ValueBoxDef__get_original_type_def( CORBA_ValueBoxDef _obj,  CORBA_Environment *ev); 
#line 10497 "orbit-policy.mc"
void CORBA_ValueBoxDef__set_original_type_def( CORBA_ValueBoxDef _obj, const  CORBA_IDLType value,  CORBA_Environment *ev); 
#line 10498 "orbit-policy.mc"
 CORBA_boolean CORBA_TypeCode_equal( CORBA_TypeCode _obj, const  CORBA_TypeCode tc,  CORBA_Environment *ev); 
#line 10499 "orbit-policy.mc"
 CORBA_boolean CORBA_TypeCode_equivalent( CORBA_TypeCode _obj, const  CORBA_TypeCode tc,  CORBA_Environment *ev); 
#line 10500 "orbit-policy.mc"
 CORBA_TypeCode CORBA_TypeCode_get_compact_typecode( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10501 "orbit-policy.mc"
 CORBA_TCKind CORBA_TypeCode_kind( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10502 "orbit-policy.mc"
 CORBA_RepositoryId CORBA_TypeCode_id( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10503 "orbit-policy.mc"
 CORBA_Identifier CORBA_TypeCode_name( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10504 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_TypeCode_member_count( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10505 "orbit-policy.mc"
 CORBA_Identifier CORBA_TypeCode_member_name( CORBA_TypeCode _obj, const  CORBA_unsigned_long index,  CORBA_Environment *ev); 
#line 10506 "orbit-policy.mc"
 CORBA_TypeCode CORBA_TypeCode_member_type( CORBA_TypeCode _obj, const  CORBA_unsigned_long index,  CORBA_Environment *ev); 
#line 10507 "orbit-policy.mc"
 CORBA_any *CORBA_TypeCode_member_label( CORBA_TypeCode _obj, const  CORBA_unsigned_long index,  CORBA_Environment *ev); 
#line 10508 "orbit-policy.mc"
 CORBA_TypeCode CORBA_TypeCode_discriminator_type( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10509 "orbit-policy.mc"
 CORBA_long CORBA_TypeCode_default_index( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10510 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_TypeCode_length( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10511 "orbit-policy.mc"
 CORBA_TypeCode CORBA_TypeCode_content_type( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10512 "orbit-policy.mc"
 CORBA_unsigned_short CORBA_TypeCode_fixed_digits( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10513 "orbit-policy.mc"
 CORBA_short CORBA_TypeCode_fixed_scale( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10514 "orbit-policy.mc"
 CORBA_Visibility CORBA_TypeCode_member_visibility( CORBA_TypeCode _obj, const  CORBA_unsigned_long index,  CORBA_Environment *ev); 
#line 10515 "orbit-policy.mc"
 CORBA_ValueModifier CORBA_TypeCode_type_modifier( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10516 "orbit-policy.mc"
 CORBA_TypeCode CORBA_TypeCode_concrete_base_type( CORBA_TypeCode _obj,  CORBA_Environment *ev); 
#line 10517 "orbit-policy.mc"
 CORBA_InterfaceDef CORBA_Object_get_interface( CORBA_Object _obj,  CORBA_Environment *ev); 
#line 10518 "orbit-policy.mc"
 CORBA_boolean CORBA_Object_is_nil( CORBA_Object _obj,  CORBA_Environment *ev); 
#line 10519 "orbit-policy.mc"
 CORBA_Object CORBA_Object_duplicate( CORBA_Object _obj,  CORBA_Environment *ev); 
#line 10520 "orbit-policy.mc"
void CORBA_Object_release( CORBA_Object _obj,  CORBA_Environment *ev); 
#line 10521 "orbit-policy.mc"
 CORBA_boolean CORBA_Object_is_a( CORBA_Object _obj, const  CORBA_char *logical_type_id,  CORBA_Environment *ev); 
#line 10522 "orbit-policy.mc"
 CORBA_boolean CORBA_Object_non_existent( CORBA_Object _obj,  CORBA_Environment *ev); 
#line 10523 "orbit-policy.mc"
 CORBA_boolean CORBA_Object_is_equivalent( CORBA_Object _obj, const  CORBA_Object other_object,  CORBA_Environment *ev); 
#line 10524 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_Object_hash( CORBA_Object _obj, const  CORBA_unsigned_long maximum,  CORBA_Environment *ev); 
#line 10525 "orbit-policy.mc"
void CORBA_Object_create_request( CORBA_Object _obj, const  CORBA_Context ctx, const  CORBA_char *operation, const  CORBA_NVList arg_list,  CORBA_NamedValue *result,  CORBA_Request *request, const  CORBA_Flags req_flag,  CORBA_Environment *ev); 
#line 10526 "orbit-policy.mc"
 CORBA_Policy CORBA_Object_get_policy( CORBA_Object _obj, const  CORBA_PolicyType policy_type,  CORBA_Environment *ev); 
#line 10527 "orbit-policy.mc"
 CORBA_DomainManagersList *CORBA_Object_get_domain_managers( CORBA_Object _obj,  CORBA_Environment *ev); 
#line 10528 "orbit-policy.mc"
 CORBA_Object CORBA_Object_set_policy_overrides( CORBA_Object _obj, const  CORBA_PolicyList *policies, const  CORBA_SetOverrideType set_add,  CORBA_Environment *ev); 
#line 10529 "orbit-policy.mc"
 CORBA_Policy CORBA_Object_get_client_policy( CORBA_Object _obj, const  CORBA_PolicyType type,  CORBA_Environment *ev); 
#line 10530 "orbit-policy.mc"
 CORBA_PolicyList *CORBA_Object_get_policy_overrides( CORBA_Object _obj, const  CORBA_PolicyTypeSeq *types,  CORBA_Environment *ev); 
#line 10531 "orbit-policy.mc"
 CORBA_boolean CORBA_Object_validate_connection( CORBA_Object _obj,  CORBA_PolicyList **inconsistent_policies,  CORBA_Environment *ev); 
#line 10532 "orbit-policy.mc"
 CORBA_Object CORBA_Object_get_component( CORBA_Object _obj,  CORBA_Environment *ev); 
#line 10533 "orbit-policy.mc"
 CORBA_ORBid CORBA_ORB_id( CORBA_ORB _obj,  CORBA_Environment *ev); 
#line 10534 "orbit-policy.mc"
 CORBA_string CORBA_ORB_object_to_string( CORBA_ORB _obj, const  CORBA_Object obj,  CORBA_Environment *ev); 
#line 10535 "orbit-policy.mc"
 CORBA_Object CORBA_ORB_string_to_object( CORBA_ORB _obj, const  CORBA_char *str,  CORBA_Environment *ev); 
#line 10536 "orbit-policy.mc"
void CORBA_ORB_create_list( CORBA_ORB _obj, const  CORBA_long count,  CORBA_NVList *new_list,  CORBA_Environment *ev); 
#line 10537 "orbit-policy.mc"
void CORBA_ORB_create_operation_list( CORBA_ORB _obj, const  CORBA_OperationDef oper,  CORBA_NVList *new_list,  CORBA_Environment *ev); 
#line 10538 "orbit-policy.mc"
void CORBA_ORB_get_default_context( CORBA_ORB _obj,  CORBA_Context *ctx,  CORBA_Environment *ev); 
#line 10539 "orbit-policy.mc"
void CORBA_ORB_send_multiple_requests_oneway( CORBA_ORB _obj, const  CORBA_RequestSeq *req,  CORBA_Environment *ev); 
#line 10540 "orbit-policy.mc"
void CORBA_ORB_send_multiple_requests_deferred( CORBA_ORB _obj, const  CORBA_RequestSeq *req,  CORBA_Environment *ev); 
#line 10541 "orbit-policy.mc"
 CORBA_boolean CORBA_ORB_poll_next_response( CORBA_ORB _obj,  CORBA_Environment *ev); 
#line 10542 "orbit-policy.mc"
void CORBA_ORB_get_next_response( CORBA_ORB _obj,  CORBA_Request *req,  CORBA_Environment *ev); 
#line 10543 "orbit-policy.mc"
 CORBA_boolean CORBA_ORB_get_service_information( CORBA_ORB _obj, const  CORBA_ServiceType service_type,  CORBA_ServiceInformation **service_information,  CORBA_Environment *ev); 
#line 10544 "orbit-policy.mc"
 CORBA_ORB_ObjectIdList *CORBA_ORB_list_initial_services( CORBA_ORB _obj,  CORBA_Environment *ev); 
#line 10545 "orbit-policy.mc"
 CORBA_Object CORBA_ORB_resolve_initial_references( CORBA_ORB _obj, const  CORBA_char *identifier,  CORBA_Environment *ev); 
#line 10546 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_struct_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_StructMemberSeq *members,  CORBA_Environment *ev); 
#line 10547 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_union_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_TypeCode discriminator_type, const  CORBA_UnionMemberSeq *members,  CORBA_Environment *ev); 
#line 10548 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_enum_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_EnumMemberSeq *members,  CORBA_Environment *ev); 
#line 10549 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_alias_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_TypeCode original_type,  CORBA_Environment *ev); 
#line 10550 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_exception_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_StructMemberSeq *members,  CORBA_Environment *ev); 
#line 10551 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_interface_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name,  CORBA_Environment *ev); 
#line 10552 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_string_tc( CORBA_ORB _obj, const  CORBA_unsigned_long bound,  CORBA_Environment *ev); 
#line 10553 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_wstring_tc( CORBA_ORB _obj, const  CORBA_unsigned_long bound,  CORBA_Environment *ev); 
#line 10554 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_fixed_tc( CORBA_ORB _obj, const  CORBA_unsigned_short digits, const  CORBA_short scale,  CORBA_Environment *ev); 
#line 10555 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_sequence_tc( CORBA_ORB _obj, const  CORBA_unsigned_long bound, const  CORBA_TypeCode element_type,  CORBA_Environment *ev); 
#line 10556 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_recursive_sequence_tc( CORBA_ORB _obj, const  CORBA_unsigned_long bound, const  CORBA_unsigned_long offset,  CORBA_Environment *ev); 
#line 10557 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_array_tc( CORBA_ORB _obj, const  CORBA_unsigned_long length, const  CORBA_TypeCode element_type,  CORBA_Environment *ev); 
#line 10558 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_value_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_ValueModifier type_modifier, const  CORBA_TypeCode concrete_base, const  CORBA_ValueMemberSeq *members,  CORBA_Environment *ev); 
#line 10559 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_value_box_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_TypeCode boxed_type,  CORBA_Environment *ev); 
#line 10560 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_native_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name,  CORBA_Environment *ev); 
#line 10561 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_recursive_tc( CORBA_ORB _obj, const  CORBA_char *id,  CORBA_Environment *ev); 
#line 10562 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_abstract_interface_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name,  CORBA_Environment *ev); 
#line 10563 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_local_interface_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name,  CORBA_Environment *ev); 
#line 10564 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_component_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name,  CORBA_Environment *ev); 
#line 10565 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_home_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name,  CORBA_Environment *ev); 
#line 10566 "orbit-policy.mc"
 CORBA_TypeCode CORBA_ORB_create_event_tc( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_char *name, const  CORBA_ValueModifier type_modifier, const  CORBA_TypeCode concrete_base, const  CORBA_ValueMemberSeq *members,  CORBA_Environment *ev); 
#line 10567 "orbit-policy.mc"
 CORBA_boolean CORBA_ORB_work_pending( CORBA_ORB _obj,  CORBA_Environment *ev); 
#line 10568 "orbit-policy.mc"
void CORBA_ORB_perform_work( CORBA_ORB _obj,  CORBA_Environment *ev); 
#line 10569 "orbit-policy.mc"
void CORBA_ORB_run( CORBA_ORB _obj,  CORBA_Environment *ev); 
#line 10570 "orbit-policy.mc"
void CORBA_ORB_shutdown( CORBA_ORB _obj, const  CORBA_boolean wait_for_completion,  CORBA_Environment *ev); 
#line 10571 "orbit-policy.mc"
void CORBA_ORB_destroy( CORBA_ORB _obj,  CORBA_Environment *ev); 
#line 10572 "orbit-policy.mc"
 CORBA_Policy CORBA_ORB_create_policy( CORBA_ORB _obj, const  CORBA_PolicyType type, const  CORBA_any *val,  CORBA_Environment *ev); 
#line 10573 "orbit-policy.mc"
 CORBA_ValueFactory CORBA_ORB_register_value_factory( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_ValueFactory factory,  CORBA_Environment *ev); 
#line 10574 "orbit-policy.mc"
void CORBA_ORB_unregister_value_factory( CORBA_ORB _obj, const  CORBA_char *id,  CORBA_Environment *ev); 
#line 10575 "orbit-policy.mc"
 CORBA_ValueFactory CORBA_ORB_lookup_value_factory( CORBA_ORB _obj, const  CORBA_char *id,  CORBA_Environment *ev); 
#line 10576 "orbit-policy.mc"
void CORBA_ORB_register_initial_reference( CORBA_ORB _obj, const  CORBA_char *id, const  CORBA_Object obj,  CORBA_Environment *ev); 
#line 10577 "orbit-policy.mc"
void CORBA_Request_add_arg( CORBA_Request _obj, const  CORBA_char *name, const  CORBA_TypeCode arg_type, const  CORBA_OpaqueValue value, const  CORBA_long len, const  CORBA_Flags arg_flags,  CORBA_Environment *ev); 
#line 10578 "orbit-policy.mc"
void CORBA_Request_invoke( CORBA_Request _obj, const  CORBA_Flags invoke_flags,  CORBA_Environment *ev); 
#line 10579 "orbit-policy.mc"
void CORBA_Request_delete( CORBA_Request _obj,  CORBA_Environment *ev); 
#line 10580 "orbit-policy.mc"
void CORBA_Request_send( CORBA_Request _obj, const  CORBA_Flags invoke_flags,  CORBA_Environment *ev); 
#line 10581 "orbit-policy.mc"
void CORBA_Request_get_response( CORBA_Request _obj,  CORBA_Environment *ev); 
#line 10582 "orbit-policy.mc"
 CORBA_boolean CORBA_Request_poll_response( CORBA_Request _obj,  CORBA_Environment *ev); 
#line 10583 "orbit-policy.mc"
 CORBA_Object CORBA_Request_sendp( CORBA_Request _obj,  CORBA_Environment *ev); 
#line 10584 "orbit-policy.mc"
void CORBA_Request_prepare( CORBA_Request _obj, const  CORBA_Object p,  CORBA_Environment *ev); 
#line 10585 "orbit-policy.mc"
void CORBA_Request_sendc( CORBA_Request _obj, const  CORBA_Object handler,  CORBA_Environment *ev); 
#line 10586 "orbit-policy.mc"
void CORBA_Context_set_one_value( CORBA_Context _obj, const  CORBA_char *prop_name, const  CORBA_char *value,  CORBA_Environment *ev); 
#line 10587 "orbit-policy.mc"
void CORBA_Context_set_values( CORBA_Context _obj, const  CORBA_NVList values,  CORBA_Environment *ev); 
#line 10588 "orbit-policy.mc"
void CORBA_Context_get_values( CORBA_Context _obj, const  CORBA_char *start_scope, const  CORBA_Flags op_flags, const  CORBA_char *prop_name,  CORBA_NVList *values,  CORBA_Environment *ev); 
#line 10589 "orbit-policy.mc"
void CORBA_Context_delete_values( CORBA_Context _obj, const  CORBA_char *prop_name,  CORBA_Environment *ev); 
#line 10590 "orbit-policy.mc"
void CORBA_Context_create_child( CORBA_Context _obj, const  CORBA_char *ctx_name,  CORBA_Context *child_ctx,  CORBA_Environment *ev); 
#line 10591 "orbit-policy.mc"
void CORBA_Context_delete( CORBA_Context _obj, const  CORBA_Flags del_flags,  CORBA_Environment *ev); 
#line 10592 "orbit-policy.mc"
void CORBA_NVList_add_item( CORBA_NVList _obj, const  CORBA_char *item_name, const  CORBA_TypeCode item_type, const  CORBA_OpaqueValue value, const  CORBA_long value_len, const  CORBA_Flags item_flags,  CORBA_Environment *ev); 
#line 10593 "orbit-policy.mc"
void CORBA_NVList_free( CORBA_NVList _obj,  CORBA_Environment *ev); 
#line 10594 "orbit-policy.mc"
void CORBA_NVList_free_memory( CORBA_NVList _obj,  CORBA_Environment *ev); 
#line 10595 "orbit-policy.mc"
void CORBA_NVList_get_count( CORBA_NVList _obj,  CORBA_long *count,  CORBA_Environment *ev); 
#line 10596 "orbit-policy.mc"
 CORBA_Identifier CORBA_ServerRequest__get_operation( CORBA_ServerRequest _obj,  CORBA_Environment *ev); 
#line 10597 "orbit-policy.mc"
void CORBA_ServerRequest_arguments( CORBA_ServerRequest _obj,  CORBA_NVList *nv,  CORBA_Environment *ev); 
#line 10598 "orbit-policy.mc"
 CORBA_Context CORBA_ServerRequest_ctx( CORBA_ServerRequest _obj,  CORBA_Environment *ev); 
#line 10599 "orbit-policy.mc"
void CORBA_ServerRequest_set_result( CORBA_ServerRequest _obj, const  CORBA_any *val,  CORBA_Environment *ev); 
#line 10600 "orbit-policy.mc"
void CORBA_ServerRequest_set_exception( CORBA_ServerRequest _obj, const  CORBA_any *val,  CORBA_Environment *ev); 
#line 10610 "orbit-policy.mc"
typedef  gpointer PortableServer_Servant; 
#line 10618 "orbit-policy.mc"
typedef struct PortableServer_POA_type *PortableServer_POA; 
#line 10638 "orbit-policy.mc"
typedef struct {void *_private; void (*finalize)( PortableServer_Servant ,  CORBA_Environment *);  PortableServer_POA (*default_POA)( PortableServer_Servant ,  CORBA_Environment *); void (*add_ref)( PortableServer_Servant ,  CORBA_Environment *); void (*remove_ref)( PortableServer_Servant ,  CORBA_Environment *);  CORBA_InterfaceDef (*get_interface)( PortableServer_Servant ,  CORBA_Environment *);  CORBA_boolean (*is_a)( PortableServer_Servant , const char *,  CORBA_Environment *);  CORBA_boolean (*non_existent)( PortableServer_Servant ,  CORBA_Environment *); }PortableServer_ServantBase__epv; 
#line 10640 "orbit-policy.mc"
typedef  PortableServer_ServantBase__epv *PortableServer_ServantBase__vepv; 
#line 10645 "orbit-policy.mc"
typedef struct {void *_private;  PortableServer_ServantBase__vepv *vepv; }PortableServer_ServantBase; 
#line 10647 "orbit-policy.mc"
typedef  PortableServer_ServantBase__epv PortableServer_RefCountServantBase__epv; 
#line 10648 "orbit-policy.mc"
typedef  PortableServer_ServantBase__epv *PortableServer_RefCountServantBase__vepv; 
#line 10649 "orbit-policy.mc"
typedef  PortableServer_ServantBase PortableServer_RefCountServantBase; 
#line 10653 "orbit-policy.mc"
typedef struct ORBit_POAObject_type *ORBit_POAObject; 
#line 10654 "orbit-policy.mc"
typedef struct ORBit_OAObject_type *ORBit_OAObject; 
#line 10656 "orbit-policy.mc"
typedef  gshort ORBit_VepvIdx; 
#line 10663 "orbit-policy.mc"
typedef void (*ORBitSmallSkeleton)( PortableServer_ServantBase *servant,  gpointer ret,  gpointer *args,  gpointer ctx,  CORBA_Environment *ev,  gpointer implementation); 
#line 10669 "orbit-policy.mc"
typedef  ORBitSmallSkeleton (*ORBit_impl_finder)( PortableServer_ServantBase *servant, const char *method,  gpointer *m_data,  gpointer *implementation); 
#line 10671 "orbit-policy.mc"
typedef  ORBit_impl_finder ORBit_small_impl_finder; 
#line 10683 "orbit-policy.mc"
typedef  CORBA_unsigned_long IOP_ProfileId; 
#line 10686 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_ProfileId_struct; 
#line 10687 "orbit-policy.mc"
typedef struct IOP_TaggedProfile_type IOP_TaggedProfile; 
#line 10691 "orbit-policy.mc"
struct IOP_TaggedProfile_type { IOP_ProfileId tag;  CORBA_sequence_CORBA_octet profile_data; }; 
#line 10694 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_TaggedProfile_struct; 
#line 10702 "orbit-policy.mc"
typedef struct IOP_IOR_type IOP_IOR; 
#line 10703 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  IOP_TaggedProfile *_buffer;  CORBA_boolean _release; }CORBA_sequence_IOP_TaggedProfile; 
#line 10706 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_IOP_TaggedProfile_struct; 
#line 10717 "orbit-policy.mc"
struct IOP_IOR_type { CORBA_string type_id;  CORBA_sequence_IOP_TaggedProfile profiles; }; 
#line 10720 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_IOR_struct; 
#line 10728 "orbit-policy.mc"
typedef  CORBA_unsigned_long IOP_ComponentId; 
#line 10731 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_ComponentId_struct; 
#line 10739 "orbit-policy.mc"
typedef struct IOP_TaggedComponent_type IOP_TaggedComponent; 
#line 10743 "orbit-policy.mc"
struct IOP_TaggedComponent_type { IOP_ComponentId tag;  CORBA_sequence_CORBA_octet component_data; }; 
#line 10746 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_TaggedComponent_struct; 
#line 10747 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  IOP_TaggedComponent *_buffer;  CORBA_boolean _release; }CORBA_sequence_IOP_TaggedComponent; 
#line 10750 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_IOP_TaggedComponent_struct; 
#line 10751 "orbit-policy.mc"
typedef  CORBA_sequence_IOP_TaggedComponent IOP_MultipleComponentProfile; 
#line 10754 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_MultipleComponentProfile_struct; 
#line 10755 "orbit-policy.mc"
typedef  CORBA_unsigned_long IOP_ServiceId; 
#line 10758 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_ServiceId_struct; 
#line 10766 "orbit-policy.mc"
typedef struct IOP_ServiceContext_type IOP_ServiceContext; 
#line 10770 "orbit-policy.mc"
struct IOP_ServiceContext_type { IOP_ServiceId context_id;  CORBA_sequence_CORBA_octet context_data; }; 
#line 10773 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_ServiceContext_struct; 
#line 10774 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  IOP_ServiceContext *_buffer;  CORBA_boolean _release; }CORBA_sequence_IOP_ServiceContext; 
#line 10777 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_IOP_ServiceContext_struct; 
#line 10778 "orbit-policy.mc"
typedef  CORBA_sequence_IOP_ServiceContext IOP_ServiceContextList; 
#line 10781 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_ServiceContextList_struct; 
#line 10782 "orbit-policy.mc"
typedef  CORBA_Object IOP_Codec; 
#line 10783 "orbit-policy.mc"
extern  CORBA_unsigned_long IOP_Codec__classid; 
#line 10786 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_Codec_struct; 
#line 10794 "orbit-policy.mc"
typedef struct IOP_Codec_InvalidTypeForEncoding_type IOP_Codec_InvalidTypeForEncoding; 
#line 10797 "orbit-policy.mc"
struct IOP_Codec_InvalidTypeForEncoding_type {int dummy; }; 
#line 10800 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_Codec_InvalidTypeForEncoding_struct; 
#line 10801 "orbit-policy.mc"
typedef struct IOP_Codec_FormatMismatch_type IOP_Codec_FormatMismatch; 
#line 10804 "orbit-policy.mc"
struct IOP_Codec_FormatMismatch_type {int dummy; }; 
#line 10807 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_Codec_FormatMismatch_struct; 
#line 10808 "orbit-policy.mc"
typedef struct IOP_Codec_TypeMismatch_type IOP_Codec_TypeMismatch; 
#line 10811 "orbit-policy.mc"
struct IOP_Codec_TypeMismatch_type {int dummy; }; 
#line 10814 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_Codec_TypeMismatch_struct; 
#line 10822 "orbit-policy.mc"
typedef  CORBA_short IOP_EncodingFormat; 
#line 10825 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_EncodingFormat_struct; 
#line 10826 "orbit-policy.mc"
typedef struct IOP_Encoding_type IOP_Encoding; 
#line 10831 "orbit-policy.mc"
struct IOP_Encoding_type { IOP_EncodingFormat format;  CORBA_octet major_version;  CORBA_octet minor_version; }; 
#line 10834 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_Encoding_struct; 
#line 10835 "orbit-policy.mc"
typedef  CORBA_Object IOP_CodecFactory; 
#line 10836 "orbit-policy.mc"
extern  CORBA_unsigned_long IOP_CodecFactory__classid; 
#line 10839 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_CodecFactory_struct; 
#line 10847 "orbit-policy.mc"
typedef struct IOP_CodecFactory_UnknownEncoding_type IOP_CodecFactory_UnknownEncoding; 
#line 10850 "orbit-policy.mc"
struct IOP_CodecFactory_UnknownEncoding_type {int dummy; }; 
#line 10853 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_CodecFactory_UnknownEncoding_struct; 
#line 10861 "orbit-policy.mc"
typedef struct IIOP_Version_type IIOP_Version; 
#line 10865 "orbit-policy.mc"
struct IIOP_Version_type { CORBA_octet major;  CORBA_octet minor; }; 
#line 10868 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IIOP_Version_struct; 
#line 10876 "orbit-policy.mc"
typedef struct IIOP_ProfileBody_1_0_type IIOP_ProfileBody_1_0; 
#line 10882 "orbit-policy.mc"
struct IIOP_ProfileBody_1_0_type { IIOP_Version iiop_version;  CORBA_string host;  CORBA_unsigned_short port;  CORBA_sequence_CORBA_octet object_key; }; 
#line 10885 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IIOP_ProfileBody_1_0_struct; 
#line 10893 "orbit-policy.mc"
typedef struct IIOP_ProfileBody_1_1_type IIOP_ProfileBody_1_1; 
#line 10900 "orbit-policy.mc"
struct IIOP_ProfileBody_1_1_type { IIOP_Version iiop_version;  CORBA_string host;  CORBA_unsigned_short port;  CORBA_sequence_CORBA_octet object_key;  CORBA_sequence_IOP_TaggedComponent components; }; 
#line 10903 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IIOP_ProfileBody_1_1_struct; 
#line 10911 "orbit-policy.mc"
typedef struct IIOP_ListenPoint_type IIOP_ListenPoint; 
#line 10915 "orbit-policy.mc"
struct IIOP_ListenPoint_type { CORBA_string host;  CORBA_unsigned_short port; }; 
#line 10918 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IIOP_ListenPoint_struct; 
#line 10919 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  IIOP_ListenPoint *_buffer;  CORBA_boolean _release; }CORBA_sequence_IIOP_ListenPoint; 
#line 10922 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_IIOP_ListenPoint_struct; 
#line 10923 "orbit-policy.mc"
typedef  CORBA_sequence_IIOP_ListenPoint IIOP_ListenPointList; 
#line 10926 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IIOP_ListenPointList_struct; 
#line 10927 "orbit-policy.mc"
typedef struct IIOP_BiDirIIOPServiceContext_type IIOP_BiDirIIOPServiceContext; 
#line 10930 "orbit-policy.mc"
struct IIOP_BiDirIIOPServiceContext_type { IIOP_ListenPointList listen_points; }; 
#line 10933 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IIOP_BiDirIIOPServiceContext_struct; 
#line 10941 "orbit-policy.mc"
typedef struct GIOP_Version_type GIOP_Version; 
#line 10945 "orbit-policy.mc"
struct GIOP_Version_type { CORBA_octet major;  CORBA_octet minor; }; 
#line 10948 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_Version_struct; 
#line 10949 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet GIOP_Principal; 
#line 10952 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_Principal_struct; 
#line 10962 "orbit-policy.mc"
typedef enum {GIOP_Request,GIOP_Reply,GIOP_CancelRequest,GIOP_LocateRequest,GIOP_LocateReply,GIOP_CloseConnection,GIOP_MessageError,GIOP_Fragment}GIOP_MsgType_1_1; 
#line 10965 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_MsgType_1_1_struct; 
#line 10971 "orbit-policy.mc"
typedef  GIOP_MsgType_1_1 GIOP_MsgType_1_2; 
#line 10974 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_MsgType_1_2_struct; 
#line 10982 "orbit-policy.mc"
typedef  GIOP_MsgType_1_1 GIOP_MsgType_1_3; 
#line 10985 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_MsgType_1_3_struct; 
#line 10993 "orbit-policy.mc"
typedef struct GIOP_MessageHeader_1_0_type GIOP_MessageHeader_1_0; 
#line 11000 "orbit-policy.mc"
struct GIOP_MessageHeader_1_0_type { CORBA_char magic[4];  GIOP_Version GIOP_version;  CORBA_boolean byte_order;  CORBA_octet message_type;  CORBA_unsigned_long message_size; }; 
#line 11003 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_MessageHeader_1_0_struct; 
#line 11011 "orbit-policy.mc"
typedef struct GIOP_MessageHeader_1_1_type GIOP_MessageHeader_1_1; 
#line 11018 "orbit-policy.mc"
struct GIOP_MessageHeader_1_1_type { CORBA_char magic[4];  GIOP_Version GIOP_version;  CORBA_octet flags;  CORBA_octet message_type;  CORBA_unsigned_long message_size; }; 
#line 11021 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_MessageHeader_1_1_struct; 
#line 11029 "orbit-policy.mc"
typedef  GIOP_MessageHeader_1_1 GIOP_MessageHeader_1_2; 
#line 11032 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_MessageHeader_1_2_struct; 
#line 11040 "orbit-policy.mc"
typedef  GIOP_MessageHeader_1_1 GIOP_MessageHeader_1_3; 
#line 11043 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_MessageHeader_1_3_struct; 
#line 11051 "orbit-policy.mc"
typedef struct GIOP_RequestHeader_1_0_type GIOP_RequestHeader_1_0; 
#line 11059 "orbit-policy.mc"
struct GIOP_RequestHeader_1_0_type { IOP_ServiceContextList service_context;  CORBA_unsigned_long request_id;  CORBA_boolean response_expected;  CORBA_sequence_CORBA_octet object_key;  CORBA_string operation;  GIOP_Principal requesting_principal; }; 
#line 11062 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_RequestHeader_1_0_struct; 
#line 11070 "orbit-policy.mc"
typedef struct GIOP_RequestHeader_1_1_type GIOP_RequestHeader_1_1; 
#line 11079 "orbit-policy.mc"
struct GIOP_RequestHeader_1_1_type { IOP_ServiceContextList service_context;  CORBA_unsigned_long request_id;  CORBA_boolean response_expected;  CORBA_octet reserved[3];  CORBA_sequence_CORBA_octet object_key;  CORBA_string operation;  GIOP_Principal requesting_principal; }; 
#line 11082 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_RequestHeader_1_1_struct; 
#line 11090 "orbit-policy.mc"
typedef  CORBA_short GIOP_AddressingDisposition; 
#line 11093 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_AddressingDisposition_struct; 
#line 11094 "orbit-policy.mc"
typedef struct GIOP_IORAddressingInfo_type GIOP_IORAddressingInfo; 
#line 11098 "orbit-policy.mc"
struct GIOP_IORAddressingInfo_type { CORBA_unsigned_long selected_profile_index;  IOP_IOR ior; }; 
#line 11101 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_IORAddressingInfo_struct; 
#line 11109 "orbit-policy.mc"
typedef struct GIOP_TargetAddress_type GIOP_TargetAddress; 
#line 11117 "orbit-policy.mc"
struct GIOP_TargetAddress_type { GIOP_AddressingDisposition _d; union { CORBA_sequence_CORBA_octet object_key;  IOP_TaggedProfile profile;  GIOP_IORAddressingInfo ior; }_u; }; 
#line 11120 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_TargetAddress_struct; 
#line 11128 "orbit-policy.mc"
typedef struct GIOP_RequestHeader_1_2_type GIOP_RequestHeader_1_2; 
#line 11136 "orbit-policy.mc"
struct GIOP_RequestHeader_1_2_type { CORBA_unsigned_long request_id;  CORBA_octet response_flags;  CORBA_octet reserved[3];  GIOP_TargetAddress target;  CORBA_string operation;  IOP_ServiceContextList service_context; }; 
#line 11139 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_RequestHeader_1_2_struct; 
#line 11147 "orbit-policy.mc"
typedef  GIOP_RequestHeader_1_2 GIOP_RequestHeader_1_3; 
#line 11150 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_RequestHeader_1_3_struct; 
#line 11163 "orbit-policy.mc"
typedef enum {GIOP_NO_EXCEPTION,GIOP_USER_EXCEPTION,GIOP_SYSTEM_EXCEPTION,GIOP_LOCATION_FORWARD}GIOP_ReplyStatusType_1_0; 
#line 11166 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_ReplyStatusType_1_0_struct; 
#line 11172 "orbit-policy.mc"
typedef struct GIOP_ReplyHeader_1_0_type GIOP_ReplyHeader_1_0; 
#line 11177 "orbit-policy.mc"
struct GIOP_ReplyHeader_1_0_type { IOP_ServiceContextList service_context;  CORBA_unsigned_long request_id;  GIOP_ReplyStatusType_1_0 reply_status; }; 
#line 11180 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_ReplyHeader_1_0_struct; 
#line 11188 "orbit-policy.mc"
typedef  GIOP_ReplyHeader_1_0 GIOP_ReplyHeader_1_1; 
#line 11191 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_ReplyHeader_1_1_struct; 
#line 11199 "orbit-policy.mc"
typedef struct GIOP_SystemExceptionReplyBody_type GIOP_SystemExceptionReplyBody; 
#line 11204 "orbit-policy.mc"
struct GIOP_SystemExceptionReplyBody_type { CORBA_string exception_id;  CORBA_unsigned_long minor_code_value;  CORBA_unsigned_long completion_status; }; 
#line 11207 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_SystemExceptionReplyBody_struct; 
#line 11215 "orbit-policy.mc"
typedef struct GIOP_CancelRequestHeader_type GIOP_CancelRequestHeader; 
#line 11218 "orbit-policy.mc"
struct GIOP_CancelRequestHeader_type { CORBA_unsigned_long request_id; }; 
#line 11221 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_CancelRequestHeader_struct; 
#line 11229 "orbit-policy.mc"
typedef struct GIOP_LocateRequestHeader_1_0_type GIOP_LocateRequestHeader_1_0; 
#line 11233 "orbit-policy.mc"
struct GIOP_LocateRequestHeader_1_0_type { CORBA_unsigned_long request_id;  CORBA_sequence_CORBA_octet object_key; }; 
#line 11236 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_LocateRequestHeader_1_0_struct; 
#line 11244 "orbit-policy.mc"
typedef  GIOP_LocateRequestHeader_1_0 GIOP_LocateRequestHeader_1_1; 
#line 11247 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_LocateRequestHeader_1_1_struct; 
#line 11255 "orbit-policy.mc"
typedef struct GIOP_LocateRequestHeader_1_2_type GIOP_LocateRequestHeader_1_2; 
#line 11259 "orbit-policy.mc"
struct GIOP_LocateRequestHeader_1_2_type { CORBA_unsigned_long request_id;  GIOP_TargetAddress target; }; 
#line 11262 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_LocateRequestHeader_1_2_struct; 
#line 11270 "orbit-policy.mc"
typedef  GIOP_LocateRequestHeader_1_2 GIOP_LocateRequestHeader_1_3; 
#line 11273 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_LocateRequestHeader_1_3_struct; 
#line 11285 "orbit-policy.mc"
typedef enum {GIOP_UNKNOWN_OBJECT,GIOP_OBJECT_HERE,GIOP_OBJECT_FORWARD}GIOP_LocateStatusType_1_0; 
#line 11288 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_LocateStatusType_1_0_struct; 
#line 11294 "orbit-policy.mc"
typedef struct GIOP_LocateReplyHeader_1_0_type GIOP_LocateReplyHeader_1_0; 
#line 11298 "orbit-policy.mc"
struct GIOP_LocateReplyHeader_1_0_type { CORBA_unsigned_long request_id;  GIOP_LocateStatusType_1_0 locate_status; }; 
#line 11301 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_LocateReplyHeader_1_0_struct; 
#line 11309 "orbit-policy.mc"
typedef  GIOP_LocateReplyHeader_1_0 GIOP_LocateReplyHeader_1_1; 
#line 11312 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_LocateReplyHeader_1_1_struct; 
#line 11320 "orbit-policy.mc"
typedef struct GIOP_FragmentHeader_1_2_type GIOP_FragmentHeader_1_2; 
#line 11323 "orbit-policy.mc"
struct GIOP_FragmentHeader_1_2_type { CORBA_unsigned_long request_id; }; 
#line 11326 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_FragmentHeader_1_2_struct; 
#line 11334 "orbit-policy.mc"
typedef  GIOP_FragmentHeader_1_2 GIOP_FragmentHeader_1_3; 
#line 11337 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_GIOP_FragmentHeader_1_3_struct; 
#line 11338 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_X509CertificateChain; 
#line 11341 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_X509CertificateChain_struct; 
#line 11342 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_X501DistinguishedName; 
#line 11345 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_X501DistinguishedName_struct; 
#line 11346 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_UTF8String; 
#line 11349 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_UTF8String_struct; 
#line 11350 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_OID; 
#line 11353 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_OID_struct; 
#line 11354 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_sequence_CORBA_octet *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_sequence_CORBA_octet; 
#line 11357 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_sequence_CORBA_octet_struct; 
#line 11358 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_sequence_CORBA_octet CORBA_sequence_CSI_OID; 
#line 11361 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CSI_OID_struct; 
#line 11362 "orbit-policy.mc"
typedef  CORBA_sequence_CSI_OID CSI_OIDList; 
#line 11365 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_OIDList_struct; 
#line 11366 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_GSSToken; 
#line 11369 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_GSSToken_struct; 
#line 11370 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_GSS_NT_ExportedName; 
#line 11373 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_GSS_NT_ExportedName_struct; 
#line 11374 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_sequence_CORBA_octet CORBA_sequence_CSI_GSS_NT_ExportedName; 
#line 11377 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CSI_GSS_NT_ExportedName_struct; 
#line 11378 "orbit-policy.mc"
typedef  CORBA_sequence_CSI_GSS_NT_ExportedName CSI_GSS_NT_ExportedNameList; 
#line 11381 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_GSS_NT_ExportedNameList_struct; 
#line 11382 "orbit-policy.mc"
typedef  CORBA_short CSI_MsgType; 
#line 11385 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_MsgType_struct; 
#line 11386 "orbit-policy.mc"
typedef  CORBA_unsigned_long_long CSI_ContextId; 
#line 11389 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_ContextId_struct; 
#line 11397 "orbit-policy.mc"
typedef  CORBA_unsigned_long CSI_AuthorizationElementType; 
#line 11400 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_AuthorizationElementType_struct; 
#line 11401 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_AuthorizationElementContents; 
#line 11404 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_AuthorizationElementContents_struct; 
#line 11405 "orbit-policy.mc"
typedef struct CSI_AuthorizationElement_type CSI_AuthorizationElement; 
#line 11409 "orbit-policy.mc"
struct CSI_AuthorizationElement_type { CSI_AuthorizationElementType the_type;  CSI_AuthorizationElementContents the_element; }; 
#line 11412 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_AuthorizationElement_struct; 
#line 11413 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CSI_AuthorizationElement *_buffer;  CORBA_boolean _release; }CORBA_sequence_CSI_AuthorizationElement; 
#line 11416 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CSI_AuthorizationElement_struct; 
#line 11417 "orbit-policy.mc"
typedef  CORBA_sequence_CSI_AuthorizationElement CSI_AuthorizationToken; 
#line 11420 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_AuthorizationToken_struct; 
#line 11421 "orbit-policy.mc"
typedef  CORBA_unsigned_long CSI_IdentityTokenType; 
#line 11424 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_IdentityTokenType_struct; 
#line 11425 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSI_IdentityExtension; 
#line 11428 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_IdentityExtension_struct; 
#line 11429 "orbit-policy.mc"
typedef struct CSI_IdentityToken_type CSI_IdentityToken; 
#line 11440 "orbit-policy.mc"
struct CSI_IdentityToken_type { CSI_IdentityTokenType _d; union { CORBA_boolean absent;  CORBA_boolean anonymous;  CSI_GSS_NT_ExportedName principal_name;  CSI_X509CertificateChain certificate_chain;  CSI_X501DistinguishedName dn;  CSI_IdentityExtension id; }_u; }; 
#line 11443 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_IdentityToken_struct; 
#line 11451 "orbit-policy.mc"
typedef struct CSI_EstablishContext_type CSI_EstablishContext; 
#line 11457 "orbit-policy.mc"
struct CSI_EstablishContext_type { CSI_ContextId client_context_id;  CSI_AuthorizationToken authorization_token;  CSI_IdentityToken identity_token;  CSI_GSSToken client_authentication_token; }; 
#line 11460 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_EstablishContext_struct; 
#line 11468 "orbit-policy.mc"
typedef struct CSI_CompleteEstablishContext_type CSI_CompleteEstablishContext; 
#line 11473 "orbit-policy.mc"
struct CSI_CompleteEstablishContext_type { CSI_ContextId client_context_id;  CORBA_boolean context_stateful;  CSI_GSSToken final_context_token; }; 
#line 11476 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_CompleteEstablishContext_struct; 
#line 11484 "orbit-policy.mc"
typedef struct CSI_ContextError_type CSI_ContextError; 
#line 11490 "orbit-policy.mc"
struct CSI_ContextError_type { CSI_ContextId client_context_id;  CORBA_long major_status;  CORBA_long minor_status;  CSI_GSSToken error_token; }; 
#line 11493 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_ContextError_struct; 
#line 11501 "orbit-policy.mc"
typedef struct CSI_MessageInContext_type CSI_MessageInContext; 
#line 11505 "orbit-policy.mc"
struct CSI_MessageInContext_type { CSI_ContextId client_context_id;  CORBA_boolean discard_context; }; 
#line 11508 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_MessageInContext_struct; 
#line 11516 "orbit-policy.mc"
typedef struct CSI_SASContextBody_type CSI_SASContextBody; 
#line 11525 "orbit-policy.mc"
struct CSI_SASContextBody_type { CSI_MsgType _d; union { CSI_EstablishContext establish_msg;  CSI_CompleteEstablishContext complete_msg;  CSI_ContextError error_msg;  CSI_MessageInContext in_context_msg; }_u; }; 
#line 11528 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_SASContextBody_struct; 
#line 11536 "orbit-policy.mc"
typedef  CORBA_string CSI_StringOID; 
#line 11539 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSI_StringOID_struct; 
#line 11540 "orbit-policy.mc"
typedef  CORBA_unsigned_short CSIIOP_AssociationOptions; 
#line 11543 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_AssociationOptions_struct; 
#line 11544 "orbit-policy.mc"
typedef  CORBA_unsigned_long CSIIOP_ServiceConfigurationSyntax; 
#line 11547 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_ServiceConfigurationSyntax_struct; 
#line 11548 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CSIIOP_ServiceSpecificName; 
#line 11551 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_ServiceSpecificName_struct; 
#line 11552 "orbit-policy.mc"
typedef struct CSIIOP_ServiceConfiguration_type CSIIOP_ServiceConfiguration; 
#line 11556 "orbit-policy.mc"
struct CSIIOP_ServiceConfiguration_type { CSIIOP_ServiceConfigurationSyntax syntax;  CSIIOP_ServiceSpecificName name; }; 
#line 11559 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_ServiceConfiguration_struct; 
#line 11560 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CSIIOP_ServiceConfiguration *_buffer;  CORBA_boolean _release; }CORBA_sequence_CSIIOP_ServiceConfiguration; 
#line 11563 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CSIIOP_ServiceConfiguration_struct; 
#line 11564 "orbit-policy.mc"
typedef  CORBA_sequence_CSIIOP_ServiceConfiguration CSIIOP_ServiceConfigurationList; 
#line 11567 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_ServiceConfigurationList_struct; 
#line 11568 "orbit-policy.mc"
typedef struct CSIIOP_AS_ContextSec_type CSIIOP_AS_ContextSec; 
#line 11574 "orbit-policy.mc"
struct CSIIOP_AS_ContextSec_type { CSIIOP_AssociationOptions target_supports;  CSIIOP_AssociationOptions target_requires;  CSI_OID client_authentication_mech;  CSI_GSS_NT_ExportedName target_name; }; 
#line 11577 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_AS_ContextSec_struct; 
#line 11585 "orbit-policy.mc"
typedef struct CSIIOP_SAS_ContextSec_type CSIIOP_SAS_ContextSec; 
#line 11592 "orbit-policy.mc"
struct CSIIOP_SAS_ContextSec_type { CSIIOP_AssociationOptions target_supports;  CSIIOP_AssociationOptions target_requires;  CSIIOP_ServiceConfigurationList privilege_authorities;  CSI_OIDList supported_naming_mechanisms;  CSI_IdentityTokenType supported_identity_types; }; 
#line 11595 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_SAS_ContextSec_struct; 
#line 11603 "orbit-policy.mc"
typedef struct CSIIOP_CompoundSecMech_type CSIIOP_CompoundSecMech; 
#line 11609 "orbit-policy.mc"
struct CSIIOP_CompoundSecMech_type { CSIIOP_AssociationOptions target_requires;  IOP_TaggedComponent transport_mech;  CSIIOP_AS_ContextSec as_context_mech;  CSIIOP_SAS_ContextSec sas_context_mech; }; 
#line 11612 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_CompoundSecMech_struct; 
#line 11613 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CSIIOP_CompoundSecMech *_buffer;  CORBA_boolean _release; }CORBA_sequence_CSIIOP_CompoundSecMech; 
#line 11616 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CSIIOP_CompoundSecMech_struct; 
#line 11617 "orbit-policy.mc"
typedef  CORBA_sequence_CSIIOP_CompoundSecMech CSIIOP_CompoundSecMechanisms; 
#line 11620 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_CompoundSecMechanisms_struct; 
#line 11621 "orbit-policy.mc"
typedef struct CSIIOP_CompoundSecMechList_type CSIIOP_CompoundSecMechList; 
#line 11625 "orbit-policy.mc"
struct CSIIOP_CompoundSecMechList_type { CORBA_boolean stateful;  CSIIOP_CompoundSecMechanisms mechanism_list; }; 
#line 11628 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_CompoundSecMechList_struct; 
#line 11636 "orbit-policy.mc"
typedef struct CSIIOP_TransportAddress_type CSIIOP_TransportAddress; 
#line 11640 "orbit-policy.mc"
struct CSIIOP_TransportAddress_type { CORBA_string host_name;  CORBA_unsigned_short port; }; 
#line 11643 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_TransportAddress_struct; 
#line 11644 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CSIIOP_TransportAddress *_buffer;  CORBA_boolean _release; }CORBA_sequence_CSIIOP_TransportAddress; 
#line 11647 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CSIIOP_TransportAddress_struct; 
#line 11648 "orbit-policy.mc"
typedef  CORBA_sequence_CSIIOP_TransportAddress CSIIOP_TransportAddressList; 
#line 11651 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_TransportAddressList_struct; 
#line 11652 "orbit-policy.mc"
typedef struct CSIIOP_SECIOP_SEC_TRANS_type CSIIOP_SECIOP_SEC_TRANS; 
#line 11659 "orbit-policy.mc"
struct CSIIOP_SECIOP_SEC_TRANS_type { CSIIOP_AssociationOptions target_supports;  CSIIOP_AssociationOptions target_requires;  CSI_OID mech_oid;  CSI_GSS_NT_ExportedName target_name;  CSIIOP_TransportAddressList addresses; }; 
#line 11662 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_SECIOP_SEC_TRANS_struct; 
#line 11663 "orbit-policy.mc"
typedef struct CSIIOP_TLS_SEC_TRANS_type CSIIOP_TLS_SEC_TRANS; 
#line 11668 "orbit-policy.mc"
struct CSIIOP_TLS_SEC_TRANS_type { CSIIOP_AssociationOptions target_supports;  CSIIOP_AssociationOptions target_requires;  CSIIOP_TransportAddressList addresses; }; 
#line 11671 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CSIIOP_TLS_SEC_TRANS_struct; 
#line 11679 "orbit-policy.mc"
typedef  CORBA_unsigned_short BiDirPolicy_BidirectionalPolicyValue; 
#line 11682 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_BiDirPolicy_BidirectionalPolicyValue_struct; 
#line 11683 "orbit-policy.mc"
typedef  CORBA_Object BiDirPolicy_BidirectionalPolicy; 
#line 11684 "orbit-policy.mc"
extern  CORBA_unsigned_long BiDirPolicy_BidirectionalPolicy__classid; 
#line 11687 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_BiDirPolicy_BidirectionalPolicy_struct; 
#line 11693 "orbit-policy.mc"
typedef  CORBA_unsigned_long CONV_FRAME_CodeSetId; 
#line 11696 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CONV_FRAME_CodeSetId_struct; 
#line 11704 "orbit-policy.mc"
typedef struct CONV_FRAME_CodeSetComponent_type CONV_FRAME_CodeSetComponent; 
#line 11705 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_unsigned_long CORBA_sequence_CONV_FRAME_CodeSetId; 
#line 11708 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CONV_FRAME_CodeSetId_struct; 
#line 11712 "orbit-policy.mc"
struct CONV_FRAME_CodeSetComponent_type { CONV_FRAME_CodeSetId native_code_set;  CORBA_sequence_CONV_FRAME_CodeSetId conversion_code_sets; }; 
#line 11715 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CONV_FRAME_CodeSetComponent_struct; 
#line 11723 "orbit-policy.mc"
typedef struct CONV_FRAME_CodeSetComponentInfo_type CONV_FRAME_CodeSetComponentInfo; 
#line 11727 "orbit-policy.mc"
struct CONV_FRAME_CodeSetComponentInfo_type { CONV_FRAME_CodeSetComponent ForCharData;  CONV_FRAME_CodeSetComponent ForWcharData; }; 
#line 11730 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CONV_FRAME_CodeSetComponentInfo_struct; 
#line 11738 "orbit-policy.mc"
typedef struct CONV_FRAME_CodeSetContext_type CONV_FRAME_CodeSetContext; 
#line 11742 "orbit-policy.mc"
struct CONV_FRAME_CodeSetContext_type { CONV_FRAME_CodeSetId char_data;  CONV_FRAME_CodeSetId wchar_data; }; 
#line 11745 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CONV_FRAME_CodeSetContext_struct; 
#line 11746 "orbit-policy.mc"
typedef struct IOP_ORBitSpecificProfileBody_type IOP_ORBitSpecificProfileBody; 
#line 11751 "orbit-policy.mc"
struct IOP_ORBitSpecificProfileBody_type { CORBA_string unix_sock_path;  CORBA_unsigned_short ipv6_port;  CORBA_sequence_CORBA_octet object_key; }; 
#line 11754 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_ORBitSpecificProfileBody_struct; 
#line 11762 "orbit-policy.mc"
typedef struct IOP_GenericIOPProfileBody_type IOP_GenericIOPProfileBody; 
#line 11769 "orbit-policy.mc"
struct IOP_GenericIOPProfileBody_type { IIOP_Version iiop_version;  CORBA_string protocol;  CORBA_string host;  CORBA_string service;  CORBA_sequence_IOP_TaggedComponent components; }; 
#line 11772 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_GenericIOPProfileBody_struct; 
#line 11780 "orbit-policy.mc"
typedef struct IOP_SSLGenericComponent_type IOP_SSLGenericComponent; 
#line 11783 "orbit-policy.mc"
struct IOP_SSLGenericComponent_type { CORBA_string service; }; 
#line 11786 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_IOP_SSLGenericComponent_struct; 
#line 11794 "orbit-policy.mc"
 CORBA_OctetSeq *IOP_Codec_encode( IOP_Codec _obj, const  CORBA_any *data,  CORBA_Environment *ev); 
#line 11795 "orbit-policy.mc"
 CORBA_any *IOP_Codec_decode( IOP_Codec _obj, const  CORBA_OctetSeq *data,  CORBA_Environment *ev); 
#line 11796 "orbit-policy.mc"
 CORBA_OctetSeq *IOP_Codec_encode_value( IOP_Codec _obj, const  CORBA_any *data,  CORBA_Environment *ev); 
#line 11797 "orbit-policy.mc"
 CORBA_any *IOP_Codec_decode_value( IOP_Codec _obj, const  CORBA_OctetSeq *data, const  CORBA_TypeCode tc,  CORBA_Environment *ev); 
#line 11798 "orbit-policy.mc"
 IOP_Codec IOP_CodecFactory_create_codec( IOP_CodecFactory _obj, const  IOP_Encoding *enc,  CORBA_Environment *ev); 
#line 11802 "orbit-policy.mc"
 BiDirPolicy_BidirectionalPolicyValue BiDirPolicy_BidirectionalPolicy__get_value( BiDirPolicy_BidirectionalPolicy _obj,  CORBA_Environment *ev); 
#line 11810 "orbit-policy.mc"
typedef struct _GIOPThread GIOPThread; 
#line 11827 "orbit-policy.mc"
struct _GIOPThread { GMutex *lock;  GCond *incoming;  GMainContext *wake_context;  GList *keys;  GList *async_ents;  GList *request_queue;  GQueue *invoke_policies; void (*request_handler)( gpointer poa_object,  gpointer recv_buffer,  gpointer dummy); }; 
#line 11833 "orbit-policy.mc"
typedef enum {GIOP_CONNECTION_SSL}GIOPConnectionOptions; 
#line 11835 "orbit-policy.mc"
extern const char giop_version_ids[GIOP_NUM_VERSIONS][2]; 
#line 11843 "orbit-policy.mc"
typedef struct { CORBA_char magic[4];  CORBA_char version[2];  CORBA_octet flags;  CORBA_octet message_type;  CORBA_unsigned_long message_size; }GIOPMsgHeader; 
#line 11856 "orbit-policy.mc"
typedef enum {GIOP_REQUEST,GIOP_REPLY,GIOP_CANCELREQUEST,GIOP_LOCATEREQUEST,GIOP_LOCATEREPLY,GIOP_CLOSECONNECTION,GIOP_MESSAGEERROR,GIOP_FRAGMENT,GIOP_NUM_MSG_TYPES}GIOPMsgType; 
#line 11857 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet CORBA_Principal; 
#line 11866 "orbit-policy.mc"
typedef struct { IOP_ServiceContextList service_context;  CORBA_unsigned_long request_id;  CORBA_boolean response_expected;  CORBA_sequence_CORBA_octet object_key;  CORBA_char *operation;  CORBA_Principal requesting_principal; }GIOPMsgRequest_1_0; 
#line 11876 "orbit-policy.mc"
typedef struct { IOP_ServiceContextList service_context;  CORBA_unsigned_long request_id;  CORBA_boolean response_expected;  CORBA_char reserved[3];  CORBA_sequence_CORBA_octet object_key;  CORBA_char *operation;  CORBA_Principal requesting_principal; }GIOPMsgRequest_1_1; 
#line 11885 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long request_id;  CORBA_octet response_flags;  CORBA_octet reserved[3];  GIOP_TargetAddress target;  CORBA_char *operation;  IOP_ServiceContextList service_context; }GIOPMsgRequest_1_2; 
#line 11891 "orbit-policy.mc"
typedef struct { IOP_ServiceContextList service_context;  CORBA_unsigned_long request_id;  CORBA_unsigned_long reply_status; }GIOPMsgReply_1_0; 
#line 11893 "orbit-policy.mc"
typedef  GIOPMsgReply_1_0 GIOPMsgReply_1_1; 
#line 11899 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long request_id;  CORBA_unsigned_long reply_status;  IOP_ServiceContextList service_context; }GIOPMsgReply_1_2; 
#line 11903 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long request_id; }GIOPMsgCancelRequest; 
#line 11908 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long request_id;  CORBA_sequence_CORBA_octet object_key; }GIOPMsgLocateRequest_1_0; 
#line 11910 "orbit-policy.mc"
typedef  GIOPMsgLocateRequest_1_0 GIOPMsgLocateRequest_1_1; 
#line 11915 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long request_id;  GIOP_TargetAddress target; }GIOPMsgLocateRequest_1_2; 
#line 11920 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long request_id;  CORBA_unsigned_long locate_status; }GIOPMsgLocateReply_1_0; 
#line 11922 "orbit-policy.mc"
typedef  GIOPMsgLocateReply_1_0 GIOPMsgLocateReply_1_1; 
#line 11927 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long request_id;  CORBA_unsigned_long locate_status; }GIOPMsgLocateReply_1_2; 
#line 11947 "orbit-policy.mc"
typedef struct { GIOPMsgHeader header; union { GIOPMsgRequest_1_0 request_1_0;  GIOPMsgRequest_1_1 request_1_1;  GIOPMsgRequest_1_2 request_1_2;  GIOPMsgReply_1_0 reply_1_0;  GIOPMsgReply_1_1 reply_1_1;  GIOPMsgReply_1_2 reply_1_2;  GIOPMsgCancelRequest cancel_request;  GIOPMsgLocateRequest_1_0 locate_request_1_0;  GIOPMsgLocateRequest_1_1 locate_request_1_1;  GIOPMsgLocateRequest_1_2 locate_request_1_2;  GIOPMsgLocateReply_1_0 locate_reply_1_0;  GIOPMsgLocateReply_1_1 locate_reply_1_1;  GIOPMsgLocateReply_1_2 locate_reply_1_2; }u; }GIOPMsg; 
#line 11970 "orbit-policy.mc"
typedef struct { LinkServer parent;  gpointer orb_data;  GIOPVersion giop_version; }GIOPServer; 
#line 11974 "orbit-policy.mc"
typedef struct { LinkServerClass parent_class; }GIOPServerClass; 
#line 11976 "orbit-policy.mc"
 GType giop_server_get_type(void ) __attribute__  (( __const__ )) ; 
#line 11982 "orbit-policy.mc"
 GIOPServer *giop_server_new( GIOPVersion giop_version, const char *proto_name, const char *local_host_info, const char *local_serv_info,  LinkConnectionOptions create_options,  gpointer create_orb_data); 
#line 12002 "orbit-policy.mc"
struct _GIOPConnection { LinkConnection parent;  GIOPRecvBuffer *incoming_msg;  GList *incoming_frags;  GIOPVersion giop_version;  gpointer orb_data; }; 
#line 12006 "orbit-policy.mc"
typedef struct { LinkConnectionClass parent_class; }GIOPConnectionClass; 
#line 12008 "orbit-policy.mc"
 GType giop_connection_get_type(void ) __attribute__  (( __const__ )) ; 
#line 12014 "orbit-policy.mc"
 GIOPConnection *giop_connection_initiate( gpointer orb_data, const char *proto_name, const char *remote_host_info, const char *remote_serv_info,  GIOPConnectionOptions options,  GIOPVersion giop_version); 
#line 12015 "orbit-policy.mc"
void giop_connections_shutdown(void ); 
#line 12016 "orbit-policy.mc"
void giop_connection_close( GIOPConnection *cnx); 
#line 12017 "orbit-policy.mc"
 LinkConnectionStatus giop_connection_try_reconnect( GIOPConnection *cnx); 
#line 12033 "orbit-policy.mc"
typedef struct { gulong size;  guchar *ptr; }GIOPIndirectChunk; 
#line 12053 "orbit-policy.mc"
struct _GIOPSendBuffer { GIOPMsg msg; struct iovec *iovecs;  gulong num_alloced;  gulong num_used; const  guchar *lastptr;  guchar *indirect;  gulong indirect_left;  GIOPIndirectChunk *indirects;  guint num_indirects_alloced;  guint num_indirects_used;  GIOPVersion giop_version;  guint header_size; }; 
#line 12055 "orbit-policy.mc"
 GIOPSendBuffer *giop_send_buffer_use( GIOPVersion giop_version); 
#line 12063 "orbit-policy.mc"
 GIOPSendBuffer *giop_send_buffer_use_request( GIOPVersion giop_version,  CORBA_unsigned_long request_id,  CORBA_boolean response_expected, const  CORBA_sequence_CORBA_octet *objkey, const struct iovec *operation_vec, const struct iovec *principal_vec); 
#line 12067 "orbit-policy.mc"
 GIOPSendBuffer *giop_send_buffer_use_reply( GIOPVersion giop_version,  CORBA_unsigned_long request_id,  CORBA_unsigned_long reply_status); 
#line 12070 "orbit-policy.mc"
 GIOPSendBuffer *giop_send_buffer_use_locate_request( GIOPVersion giop_version,  CORBA_unsigned_long request_id, const  CORBA_sequence_CORBA_octet *objkey); 
#line 12073 "orbit-policy.mc"
 GIOPSendBuffer *giop_send_buffer_use_locate_reply( GIOPVersion giop_version,  CORBA_unsigned_long request_id,  CORBA_unsigned_long locate_status); 
#line 12074 "orbit-policy.mc"
 GIOPSendBuffer *giop_send_buffer_use_close_connection( GIOPVersion giop_version); 
#line 12075 "orbit-policy.mc"
 GIOPSendBuffer *giop_send_buffer_use_message_error( GIOPVersion giop_version); 
#line 12077 "orbit-policy.mc"
void giop_send_buffer_unuse( GIOPSendBuffer *buf); 
#line 12080 "orbit-policy.mc"
void giop_send_buffer_append( GIOPSendBuffer *buf,  gconstpointer mem,  gulong len); 
#line 12083 "orbit-policy.mc"
 guchar *giop_send_buffer_append_aligned( GIOPSendBuffer *buf,  gconstpointer mem,  gulong align_len); 
#line 12085 "orbit-policy.mc"
void giop_send_buffer_append_string( GIOPSendBuffer *buf, const char *str); 
#line 12087 "orbit-policy.mc"
void giop_send_buffer_align( GIOPSendBuffer *buf,  gulong boundary); 
#line 12090 "orbit-policy.mc"
int giop_send_buffer_write( GIOPSendBuffer *buf,  GIOPConnection *cnx,  gboolean block); 
#line 12104 "orbit-policy.mc"
typedef struct _IO_FILE FILE; 
#line 12110 "orbit-policy.mc"
typedef struct _IO_FILE __FILE; 
#line 12111 "orbit-policy.mc"
typedef unsigned int wint_t; 
#line 12120 "orbit-policy.mc"
typedef struct {int __count; union { wint_t __wch; char __wchb[4]; }__value; }__mbstate_t; 
#line 12126 "orbit-policy.mc"
typedef struct { __off_t __pos;  __mbstate_t __state; }_G_fpos_t; 
#line 12131 "orbit-policy.mc"
typedef struct { __off64_t __pos;  __mbstate_t __state; }_G_fpos64_t; 
#line 12153 "orbit-policy.mc"
enum {__GCONV_OK=0,__GCONV_NOCONV,__GCONV_NODB,__GCONV_NOMEM,__GCONV_EMPTY_INPUT,__GCONV_FULL_OUTPUT,__GCONV_ILLEGAL_INPUT,__GCONV_INCOMPLETE_INPUT,__GCONV_ILLEGAL_DESCRIPTOR,__GCONV_INTERNAL_ERROR}; 
#line 12161 "orbit-policy.mc"
enum {__GCONV_IS_LAST=0x0001,__GCONV_IGNORE_ERRORS=0x0002}; 
#line 12165 "orbit-policy.mc"
struct __gconv_step ; 
#line 12166 "orbit-policy.mc"
struct __gconv_step_data ; 
#line 12167 "orbit-policy.mc"
struct __gconv_loaded_object ; 
#line 12168 "orbit-policy.mc"
struct __gconv_trans_data ; 
#line 12174 "orbit-policy.mc"
typedef int (*__gconv_fct)(struct __gconv_step *, struct __gconv_step_data *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *, int , int ); 
#line 12177 "orbit-policy.mc"
typedef  wint_t (*__gconv_btowc_fct)(struct __gconv_step *, unsigned char ); 
#line 12180 "orbit-policy.mc"
typedef int (*__gconv_init_fct)(struct __gconv_step *); 
#line 12181 "orbit-policy.mc"
typedef void (*__gconv_end_fct)(struct __gconv_step *); 
#line 12190 "orbit-policy.mc"
typedef int (*__gconv_trans_fct)(struct __gconv_step *, struct __gconv_step_data *, void *, __const unsigned char *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *); 
#line 12195 "orbit-policy.mc"
typedef int (*__gconv_trans_context_fct)(void *, __const unsigned char *, __const unsigned char *, unsigned char *, unsigned char *); 
#line 12199 "orbit-policy.mc"
typedef int (*__gconv_trans_query_fct)(__const char *, __const char ***,  size_t *); 
#line 12202 "orbit-policy.mc"
typedef int (*__gconv_trans_init_fct)(void **, const char *); 
#line 12203 "orbit-policy.mc"
typedef void (*__gconv_trans_end_fct)(void *); 
#line 12213 "orbit-policy.mc"
struct __gconv_trans_data { __gconv_trans_fct __trans_fct;  __gconv_trans_context_fct __trans_context_fct;  __gconv_trans_end_fct __trans_end_fct; void *__data; struct __gconv_trans_data *__next; }; 
#line 12243 "orbit-policy.mc"
struct __gconv_step {struct __gconv_loaded_object *__shlib_handle; __const char *__modname; int __counter; char *__from_name; char *__to_name;  __gconv_fct __fct;  __gconv_btowc_fct __btowc_fct;  __gconv_init_fct __init_fct;  __gconv_end_fct __end_fct; int __min_needed_from; int __max_needed_from; int __min_needed_to; int __max_needed_to; int __stateful; void *__data; }; 
#line 12270 "orbit-policy.mc"
struct __gconv_step_data {unsigned char *__outbuf; unsigned char *__outbufend; int __flags; int __invocation_counter; int __internal_use;  __mbstate_t *__statep;  __mbstate_t __state; struct __gconv_trans_data *__trans; }; 
#line 12279 "orbit-policy.mc"
typedef struct __gconv_info { size_t __nsteps; struct __gconv_step *__steps;  __extension__ struct __gconv_step_data __data[]; }*__gconv_t; 
#line 12288 "orbit-policy.mc"
typedef union {struct __gconv_info __cd; struct {struct __gconv_info __cd; struct __gconv_step_data __data; }__combined; }_G_iconv_t; 
#line 12290 "orbit-policy.mc"
typedef int _G_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 12291 "orbit-policy.mc"
typedef int _G_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 12292 "orbit-policy.mc"
typedef unsigned int _G_uint16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 12293 "orbit-policy.mc"
typedef unsigned int _G_uint32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 12294 "orbit-policy.mc"
struct _IO_jump_t ; 
#line 12294 "orbit-policy.mc"
struct _IO_FILE ; 
#line 12295 "orbit-policy.mc"
typedef void _IO_lock_t; 
#line 12308 "orbit-policy.mc"
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; }; 
#line 12317 "orbit-policy.mc"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
#line 12369 "orbit-policy.mc"
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; }; 
#line 12372 "orbit-policy.mc"
typedef struct _IO_FILE _IO_FILE; 
#line 12375 "orbit-policy.mc"
struct _IO_FILE_plus ; 
#line 12377 "orbit-policy.mc"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 12378 "orbit-policy.mc"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 12379 "orbit-policy.mc"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 12380 "orbit-policy.mc"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 12389 "orbit-policy.mc"
typedef  __ssize_t __io_write_fn(void *__cookie, __const char *__buf,  size_t __n); 
#line 12397 "orbit-policy.mc"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 12400 "orbit-policy.mc"
typedef int __io_close_fn(void *__cookie); 
#line 12401 "orbit-policy.mc"
extern int __underflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12402 "orbit-policy.mc"
extern int __uflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12403 "orbit-policy.mc"
extern int __overflow( _IO_FILE *, int ) __attribute__  (( __nothrow__ )) ; 
#line 12404 "orbit-policy.mc"
extern  wint_t __wunderflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12405 "orbit-policy.mc"
extern  wint_t __wuflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12406 "orbit-policy.mc"
extern  wint_t __woverflow( _IO_FILE *,  wint_t ) __attribute__  (( __nothrow__ )) ; 
#line 12407 "orbit-policy.mc"
extern int _IO_getc( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 12408 "orbit-policy.mc"
extern int _IO_putc(int __c,  _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 12409 "orbit-policy.mc"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 12410 "orbit-policy.mc"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 12412 "orbit-policy.mc"
extern int _IO_peekc_locked( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 12418 "orbit-policy.mc"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12419 "orbit-policy.mc"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12420 "orbit-policy.mc"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12422 "orbit-policy.mc"
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 12424 "orbit-policy.mc"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 12425 "orbit-policy.mc"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ) __attribute__  (( __nothrow__ )) ; 
#line 12426 "orbit-policy.mc"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 12428 "orbit-policy.mc"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ) __attribute__  (( __nothrow__ )) ; 
#line 12429 "orbit-policy.mc"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ) __attribute__  (( __nothrow__ )) ; 
#line 12431 "orbit-policy.mc"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 12434 "orbit-policy.mc"
typedef  _G_fpos_t fpos_t; 
#line 12442 "orbit-policy.mc"
extern struct _IO_FILE *stdin; 
#line 12443 "orbit-policy.mc"
extern struct _IO_FILE *stdout; 
#line 12444 "orbit-policy.mc"
extern struct _IO_FILE *stderr; 
#line 12454 "orbit-policy.mc"
extern int remove(__const char *__filename) __attribute__  (( __nothrow__ )) ; 
#line 12456 "orbit-policy.mc"
extern int rename(__const char *__old, __const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 12471 "orbit-policy.mc"
extern  FILE *tmpfile(void ); 
#line 12472 "orbit-policy.mc"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 12478 "orbit-policy.mc"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 12480 "orbit-policy.mc"
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 12489 "orbit-policy.mc"
extern int fclose( FILE *__stream); 
#line 12494 "orbit-policy.mc"
extern int fflush( FILE *__stream); 
#line 12496 "orbit-policy.mc"
extern int fflush_unlocked( FILE *__stream); 
#line 12504 "orbit-policy.mc"
extern  FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 12511 "orbit-policy.mc"
extern  FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 12513 "orbit-policy.mc"
extern  FILE *fdopen(int __fd, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 12517 "orbit-policy.mc"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 12522 "orbit-policy.mc"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 12529 "orbit-policy.mc"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 12532 "orbit-policy.mc"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12542 "orbit-policy.mc"
extern int fprintf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 12547 "orbit-policy.mc"
extern int printf(__const char *__restrict __format, ...); 
#line 12550 "orbit-policy.mc"
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 12557 "orbit-policy.mc"
extern int vfprintf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg); 
#line 12562 "orbit-policy.mc"
extern int vprintf(__const char *__restrict __format,  __gnuc_va_list __arg); 
#line 12565 "orbit-policy.mc"
extern int vsprintf(char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 12573 "orbit-policy.mc"
extern int snprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 12577 "orbit-policy.mc"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 12585 "orbit-policy.mc"
extern int fscanf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 12590 "orbit-policy.mc"
extern int scanf(__const char *__restrict __format, ...); 
#line 12593 "orbit-policy.mc"
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 12600 "orbit-policy.mc"
extern int fgetc( FILE *__stream); 
#line 12601 "orbit-policy.mc"
extern int getc( FILE *__stream); 
#line 12607 "orbit-policy.mc"
extern int getchar(void ); 
#line 12609 "orbit-policy.mc"
extern int getc_unlocked( FILE *__stream); 
#line 12610 "orbit-policy.mc"
extern int getchar_unlocked(void ); 
#line 12611 "orbit-policy.mc"
extern int fgetc_unlocked( FILE *__stream); 
#line 12623 "orbit-policy.mc"
extern int fputc(int __c,  FILE *__stream); 
#line 12624 "orbit-policy.mc"
extern int putc(int __c,  FILE *__stream); 
#line 12630 "orbit-policy.mc"
extern int putchar(int __c); 
#line 12632 "orbit-policy.mc"
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 12640 "orbit-policy.mc"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 12641 "orbit-policy.mc"
extern int putchar_unlocked(int __c); 
#line 12648 "orbit-policy.mc"
extern int getw( FILE *__stream); 
#line 12651 "orbit-policy.mc"
extern int putw(int __w,  FILE *__stream); 
#line 12661 "orbit-policy.mc"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
#line 12668 "orbit-policy.mc"
extern char *gets(char *__s); 
#line 12675 "orbit-policy.mc"
extern int fputs(__const char *__restrict __s,  FILE *__restrict __stream); 
#line 12681 "orbit-policy.mc"
extern int puts(__const char *__s); 
#line 12688 "orbit-policy.mc"
extern int ungetc(int __c,  FILE *__stream); 
#line 12696 "orbit-policy.mc"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 12702 "orbit-policy.mc"
extern  size_t fwrite(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
#line 12705 "orbit-policy.mc"
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 12707 "orbit-policy.mc"
extern  size_t fwrite_unlocked(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 12716 "orbit-policy.mc"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 12721 "orbit-policy.mc"
extern long int ftell( FILE *__stream); 
#line 12726 "orbit-policy.mc"
extern void rewind( FILE *__stream); 
#line 12728 "orbit-policy.mc"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 12733 "orbit-policy.mc"
extern  __off_t ftello( FILE *__stream); 
#line 12740 "orbit-policy.mc"
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 12745 "orbit-policy.mc"
extern int fsetpos( FILE *__stream, __const  fpos_t *__pos); 
#line 12749 "orbit-policy.mc"
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12751 "orbit-policy.mc"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12753 "orbit-policy.mc"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12758 "orbit-policy.mc"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12759 "orbit-policy.mc"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12760 "orbit-policy.mc"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12769 "orbit-policy.mc"
extern void perror(__const char *__s); 
#line 12776 "orbit-policy.mc"
extern int sys_nerr; 
#line 12777 "orbit-policy.mc"
extern __const char *__const sys_errlist[]; 
#line 12782 "orbit-policy.mc"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12787 "orbit-policy.mc"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12788 "orbit-policy.mc"
extern  FILE *popen(__const char *__command, __const char *__modes); 
#line 12794 "orbit-policy.mc"
extern int pclose( FILE *__stream); 
#line 12800 "orbit-policy.mc"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 12801 "orbit-policy.mc"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12805 "orbit-policy.mc"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12808 "orbit-policy.mc"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 12811 "orbit-policy.mc"
extern __inline int vprintf(__const char *__restrict __fmt,  __gnuc_va_list __arg)  {

#line 12812 "orbit-policy.mc"
return vfprintf(stdout, __fmt, __arg); }
 
#line 12818 "orbit-policy.mc"
extern __inline int getchar(void )  {

#line 12819 "orbit-policy.mc"
return _IO_getc(stdin); }
 
#line 12827 "orbit-policy.mc"
extern __inline int getc_unlocked( FILE *__fp)  {

#line 12828 "orbit-policy.mc"
return ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++)))); }
 
#line 12834 "orbit-policy.mc"
extern __inline int getchar_unlocked(void )  {

#line 12835 "orbit-policy.mc"
return ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++)))); }
 
#line 12843 "orbit-policy.mc"
extern __inline int putchar(int __c)  {

#line 12844 "orbit-policy.mc"
return _IO_putc(__c, stdout); }
 
#line 12852 "orbit-policy.mc"
extern __inline int fputc_unlocked(int __c,  FILE *__stream)  {

#line 12853 "orbit-policy.mc"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 12862 "orbit-policy.mc"
extern __inline int putc_unlocked(int __c,  FILE *__stream)  {

#line 12863 "orbit-policy.mc"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 12869 "orbit-policy.mc"
extern __inline int putchar_unlocked(int __c)  {

#line 12870 "orbit-policy.mc"
return ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c))))); }
 
#line 12874 "orbit-policy.mc"
extern __inline int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  {

#line 12875 "orbit-policy.mc"
return ((((__stream)->_flags) & 0x10) != 0); }
 
#line 12881 "orbit-policy.mc"
extern __inline int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  {

#line 12882 "orbit-policy.mc"
return ((((__stream)->_flags) & 0x20) != 0); }
 
#line 12896 "orbit-policy.mc"
typedef enum {GIOP_MSG_READING_HEADER,GIOP_MSG_READING_BODY,GIOP_MSG_AWAITING_FRAGMENTS,GIOP_MSG_READY}GIOPMessageBufferState; 
#line 12898 "orbit-policy.mc"
typedef struct _GIOPMessageQueueEntry GIOPMessageQueueEntry; 
#line 12900 "orbit-policy.mc"
typedef void (*GIOPAsyncCallback)( GIOPMessageQueueEntry *ent); 
#line 12911 "orbit-policy.mc"
struct _GIOPMessageQueueEntry { GIOPRecvBuffer *buffer;  GIOPConnection *cnx;  CORBA_unsigned_long msg_type;  CORBA_unsigned_long request_id;  GIOPThread *src_thread;  GIOPAsyncCallback async_cb; }; 
#line 12926 "orbit-policy.mc"
struct _GIOPRecvBuffer { GIOPMsg msg;  guchar *message_body;  guchar *cur;  guchar *end;  GIOPConnection *connection;  GIOPMessageBufferState state;  GIOPVersion giop_version;  gulong left_to_read;  guint free_body:1; }; 
#line 12929 "orbit-policy.mc"
 GIOPRecvBuffer *giop_recv_buffer_use_buf( GIOPConnection *cnx); 
#line 12930 "orbit-policy.mc"
 GIOPRecvBuffer *giop_recv_buffer_use_encaps_buf( GIOPRecvBuffer *buf); 
#line 12932 "orbit-policy.mc"
 GIOPRecvBuffer *giop_recv_buffer_use_encaps( guchar *mem,  gulong len); 
#line 12933 "orbit-policy.mc"
void giop_recv_list_destroy_queue_entry( GIOPMessageQueueEntry *ent); 
#line 12937 "orbit-policy.mc"
void giop_recv_list_setup_queue_entry( GIOPMessageQueueEntry *ent,  GIOPConnection *cnx,  CORBA_unsigned_long msg_type,  CORBA_unsigned_long request_id); 
#line 12939 "orbit-policy.mc"
void giop_recv_list_setup_queue_entry_async( GIOPMessageQueueEntry *ent,  GIOPAsyncCallback cb); 
#line 12941 "orbit-policy.mc"
 GIOPRecvBuffer *giop_recv_buffer_get( GIOPMessageQueueEntry *ent); 
#line 12942 "orbit-policy.mc"
void giop_recv_buffer_unuse( GIOPRecvBuffer *buf); 
#line 12950 "orbit-policy.mc"
 CORBA_unsigned_long giop_recv_buffer_get_request_id( GIOPRecvBuffer *buf); 
#line 12951 "orbit-policy.mc"
char *giop_recv_buffer_get_opname( GIOPRecvBuffer *buf); 
#line 12952 "orbit-policy.mc"
 CORBA_sequence_CORBA_octet *giop_recv_buffer_get_objkey( GIOPRecvBuffer *buf); 
#line 12953 "orbit-policy.mc"
void giop_recv_list_zap( GIOPConnection *cnx); 
#line 12954 "orbit-policy.mc"
 gboolean giop_connection_handle_input( LinkConnection *lcnx); 
#line 12955 "orbit-policy.mc"
void giop_connection_destroy_frags( GIOPConnection *cnx); 
#line 12974 "orbit-policy.mc"
void giop_byteswap( guchar *outdata, const  guchar *data,  gulong datalen); 
#line 12980 "orbit-policy.mc"
extern inline void giop_byteswap( guchar *outdata, const  guchar *data,  gulong datalen)  {

#line 12981 "orbit-policy.mc"

#line 12981 "orbit-policy.mc"
const  guchar *source_ptr = data;
#line 12982 "orbit-policy.mc"

#line 12982 "orbit-policy.mc"
 guchar *dest_ptr = outdata + datalen - 1;
#line 12983 "orbit-policy.mc"
while(dest_ptr >= outdata) { (*dest_ptr--) = (*source_ptr++); } }
 
#line 12997 "orbit-policy.mc"
void giop_init( gboolean thread_safe,  gboolean blank_wire_data); 
#line 12998 "orbit-policy.mc"
void giop_main_run(void ); 
#line 12999 "orbit-policy.mc"
void giop_shutdown(void ); 
#line 13000 "orbit-policy.mc"
 gboolean giop_thread_safe(void ); 
#line 13001 "orbit-policy.mc"
 gboolean giop_thread_io(void ); 
#line 13002 "orbit-policy.mc"
 GIOPThread *giop_thread_self(void ); 
#line 13003 "orbit-policy.mc"
void giop_invoke_async( GIOPMessageQueueEntry *ent); 
#line 13004 "orbit-policy.mc"
void giop_recv_set_limit( glong limit); 
#line 13005 "orbit-policy.mc"
 glong giop_recv_get_limit(void ); 
#line 13006 "orbit-policy.mc"
void giop_incoming_signal_T( GIOPThread *tdata,  GIOPMsgType t); 
#line 13008 "orbit-policy.mc"
typedef struct _GIOPQueue GIOPQueue; 
#line 13009 "orbit-policy.mc"
 GIOPThread *giop_thread_get_main(void ); 
#line 13010 "orbit-policy.mc"
void giop_thread_set_main_handler( gpointer request_handler); 
#line 13013 "orbit-policy.mc"
void giop_thread_request_push( GIOPThread *tdata,  gpointer *poa_object,  gpointer *recv_buffer); 
#line 13016 "orbit-policy.mc"
void giop_thread_request_push_key( gpointer key,  gpointer *poa_object,  gpointer *recv_buffer); 
#line 13018 "orbit-policy.mc"
 gboolean giop_thread_same_key( gpointer key,  gboolean no_key_default); 
#line 13020 "orbit-policy.mc"
void giop_thread_key_add( GIOPThread *tdata,  gpointer key); 
#line 13021 "orbit-policy.mc"
void giop_thread_key_release( gpointer key); 
#line 13022 "orbit-policy.mc"
void giop_thread_new_check( GIOPThread *opt_self); 
#line 13023 "orbit-policy.mc"
void giop_thread_queue_process( GIOPThread *tdata); 
#line 13024 "orbit-policy.mc"
 gboolean giop_thread_queue_empty_T( GIOPThread *tdata); 
#line 13025 "orbit-policy.mc"
void giop_thread_queue_tail_wakeup( GIOPThread *tdata); 
#line 13049 "orbit-policy.mc"
 CORBA_ORB CORBA_ORB_init(int *argc, char **argv,  CORBA_ORBid orb_identifier,  CORBA_Environment *ev); 
#line 13053 "orbit-policy.mc"
void ORBit_ORB_forw_bind( CORBA_ORB orb,  CORBA_sequence_CORBA_octet *okey,  CORBA_Object oref,  CORBA_Environment *ev); 
#line 13055 "orbit-policy.mc"
 guint ORBit_ORB_idle_init( CORBA_ORB orb); 
#line 13057 "orbit-policy.mc"
void ORBit_ORB_start_servers( CORBA_ORB orb); 
#line 13069 "orbit-policy.mc"
 CORBA_char *CORBA_string_alloc( CORBA_unsigned_long len); 
#line 13070 "orbit-policy.mc"
 CORBA_wchar *CORBA_wstring_alloc( CORBA_unsigned_long len); 
#line 13075 "orbit-policy.mc"
 CORBA_char *CORBA_string_dup(const  CORBA_char *str); 
#line 13077 "orbit-policy.mc"
 CORBA_unsigned_long CORBA_wstring_len( CORBA_wchar *ws); 
#line 13082 "orbit-policy.mc"
 gpointer CORBA_string__freekids( gpointer mem,  gpointer data); 
#line 13085 "orbit-policy.mc"
 CORBA_sequence_CORBA_octet *ORBit_sequence_CORBA_octet_dup(const  CORBA_sequence_CORBA_octet *seq); 
#line 13098 "orbit-policy.mc"
 CORBA_Environment *CORBA_exception__alloc(void ); 
#line 13099 "orbit-policy.mc"
 CORBA_Environment *CORBA_exception__copy(const  CORBA_Environment *ev); 
#line 13104 "orbit-policy.mc"
void CORBA_exception_set( CORBA_Environment *ev,  CORBA_exception_type major, const  CORBA_char *except_repos_id, void *param); 
#line 13106 "orbit-policy.mc"
 CORBA_char *CORBA_exception_id( CORBA_Environment *ev); 
#line 13107 "orbit-policy.mc"
void *CORBA_exception_value( CORBA_Environment *ev); 
#line 13108 "orbit-policy.mc"
void CORBA_exception_init( CORBA_Environment *ev); 
#line 13109 "orbit-policy.mc"
void CORBA_exception_free( CORBA_Environment *ev); 
#line 13110 "orbit-policy.mc"
 CORBA_any *CORBA_exception_as_any( CORBA_Environment *ev); 
#line 13114 "orbit-policy.mc"
void CORBA_exception_set_system( CORBA_Environment *ev, const  CORBA_char *except_repos_id,  CORBA_completion_status completed); 
#line 13122 "orbit-policy.mc"
typedef struct {const  CORBA_TypeCode tc; void (*marshal)( GIOPSendBuffer *,  CORBA_Environment *); }ORBit_exception_marshal_info; 
#line 13128 "orbit-policy.mc"
typedef struct {const  CORBA_TypeCode tc; void (*demarshal)( GIOPRecvBuffer *,  CORBA_Environment *); }ORBit_exception_demarshal_info; 
#line 13134 "orbit-policy.mc"
void ORBit_handle_system_exception( CORBA_Environment *ev, const  CORBA_char *nom,  CORBA_completion_status status,  GIOPRecvBuffer *buf,  GIOPSendBuffer *sendbuf); 
#line 13139 "orbit-policy.mc"
void ORBit_handle_exception( GIOPRecvBuffer *buf,  CORBA_Environment *ev, const  ORBit_exception_demarshal_info *ex_info,  CORBA_ORB orb); 
#line 13142 "orbit-policy.mc"
 GIOPConnection *ORBit_handle_location_forward( GIOPRecvBuffer *buf,  CORBA_Object obj); 
#line 13145 "orbit-policy.mc"
void ORBit_send_system_exception( GIOPSendBuffer *buf,  CORBA_Environment *ev); 
#line 13149 "orbit-policy.mc"
void ORBit_send_user_exception( GIOPSendBuffer *send_buffer,  CORBA_Environment *ev, const  ORBit_exception_marshal_info *user_exceptions); 
#line 13162 "orbit-policy.mc"
void CORBA_any__copy( CORBA_any *out, const  CORBA_any *in); 
#line 13163 "orbit-policy.mc"
 CORBA_any *CORBA_any__alloc(void ); 
#line 13168 "orbit-policy.mc"
 gpointer CORBA_any__freekids( gpointer mem,  gpointer data); 
#line 13174 "orbit-policy.mc"
 gpointer ORBit_copy_value( gconstpointer value,  CORBA_TypeCode tc); 
#line 13178 "orbit-policy.mc"
 CORBA_boolean ORBit_any_equivalent( CORBA_any *obj,  CORBA_any *any,  CORBA_Environment *ev); 
#line 13184 "orbit-policy.mc"
void ORBit_marshal_arg( GIOPSendBuffer *buf,  gconstpointer val,  CORBA_TypeCode tc); 
#line 13187 "orbit-policy.mc"
void ORBit_marshal_any( GIOPSendBuffer *buf, const  CORBA_any *val); 
#line 13191 "orbit-policy.mc"
 gpointer ORBit_demarshal_arg( GIOPRecvBuffer *buf,  CORBA_TypeCode tc,  CORBA_ORB orb); 
#line 13195 "orbit-policy.mc"
 gboolean ORBit_demarshal_any( GIOPRecvBuffer *buf,  CORBA_any *retval,  CORBA_ORB orb); 
#line 13200 "orbit-policy.mc"
 gboolean ORBit_demarshal_value( CORBA_TypeCode tc,  gpointer *val,  GIOPRecvBuffer *buf,  CORBA_ORB orb); 
#line 13204 "orbit-policy.mc"
void ORBit_marshal_value( GIOPSendBuffer *buf,  gconstpointer *val,  CORBA_TypeCode tc); 
#line 13209 "orbit-policy.mc"
 CORBA_boolean ORBit_value_equivalent( gpointer *a,  gpointer *b,  CORBA_TypeCode tc,  CORBA_Environment *ev); 
#line 13211 "orbit-policy.mc"
 size_t ORBit_gather_alloc_info( CORBA_TypeCode tc); 
#line 13227 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet ORBit_ObjectKey; 
#line 13241 "orbit-policy.mc"
struct CORBA_Object_type {struct ORBit_RootObject_struct parent;  GIOPConnection *connection;  GQuark type_qid;  GSList *profile_list;  GSList *forward_locations;  ORBit_ObjectKey *object_key; struct _ORBitPolicy *invoke_policy;  CORBA_ORB orb;  ORBit_OAObject adaptor_obj; }; 
#line 13255 "orbit-policy.mc"
 GIOPConnection *ORBit_object_get_connection( CORBA_Object obj); 
#line 13256 "orbit-policy.mc"
 GIOPConnection *ORBit_object_peek_connection( CORBA_Object obj); 
#line 13260 "orbit-policy.mc"
void ORBit_marshal_object( GIOPSendBuffer *buf,  CORBA_Object obj); 
#line 13263 "orbit-policy.mc"
 gboolean ORBit_demarshal_object( CORBA_Object *obj,  GIOPRecvBuffer *buf,  CORBA_ORB orb); 
#line 13267 "orbit-policy.mc"
 CORBA_Object ORBit_objref_new( CORBA_ORB orb,  ORBit_OAObject adaptor_obj,  GQuark type_id); 
#line 13274 "orbit-policy.mc"
typedef struct _ORBitPolicy ORBitPolicy; 
#line 13279 "orbit-policy.mc"
 GType ORBit_policy_ex_get_type(void ) __attribute__  (( __const__ )) ; 
#line 13282 "orbit-policy.mc"
 ORBitPolicy *ORBit_policy_new( GType type, const char *first_prop, ...); 
#line 13283 "orbit-policy.mc"
 ORBitPolicy *ORBit_policy_ref( ORBitPolicy *p); 
#line 13284 "orbit-policy.mc"
void ORBit_policy_unref( ORBitPolicy *p); 
#line 13286 "orbit-policy.mc"
void ORBit_object_set_policy( CORBA_Object obj,  ORBitPolicy *p); 
#line 13287 "orbit-policy.mc"
 ORBitPolicy *ORBit_object_get_policy( CORBA_Object obj); 
#line 13288 "orbit-policy.mc"
void ORBit_policy_push( ORBitPolicy *p); 
#line 13289 "orbit-policy.mc"
void ORBit_policy_pop(void ); 
#line 13294 "orbit-policy.mc"
typedef  CORBA_long ORBit_IArgFlag; 
#line 13297 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IArgFlag_struct; 
#line 13298 "orbit-policy.mc"
typedef struct ORBit_IArg_type ORBit_IArg; 
#line 13303 "orbit-policy.mc"
struct ORBit_IArg_type { CORBA_TypeCode tc;  ORBit_IArgFlag flags;  CORBA_string name; }; 
#line 13306 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IArg_struct; 
#line 13307 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  ORBit_IArg *_buffer;  CORBA_boolean _release; }CORBA_sequence_ORBit_IArg; 
#line 13310 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_ORBit_IArg_struct; 
#line 13311 "orbit-policy.mc"
typedef  CORBA_sequence_ORBit_IArg ORBit_IArgs; 
#line 13314 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IArgs_struct; 
#line 13315 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  CORBA_TypeCode *_buffer;  CORBA_boolean _release; }CORBA_sequence_CORBA_TypeCode; 
#line 13318 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_TypeCode_struct; 
#line 13319 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_TypeCode ORBit_ITypes; 
#line 13322 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_ITypes_struct; 
#line 13323 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_string ORBit_IContexts; 
#line 13326 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IContexts_struct; 
#line 13327 "orbit-policy.mc"
typedef  CORBA_long ORBit_IMethodFlag; 
#line 13330 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IMethodFlag_struct; 
#line 13331 "orbit-policy.mc"
typedef struct ORBit_IMethod_type ORBit_IMethod; 
#line 13340 "orbit-policy.mc"
struct ORBit_IMethod_type { ORBit_IArgs arguments;  ORBit_IContexts contexts;  ORBit_ITypes exceptions;  CORBA_TypeCode ret;  CORBA_string name;  CORBA_long name_len;  ORBit_IMethodFlag flags; }; 
#line 13343 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IMethod_struct; 
#line 13344 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  ORBit_IMethod *_buffer;  CORBA_boolean _release; }CORBA_sequence_ORBit_IMethod; 
#line 13347 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_ORBit_IMethod_struct; 
#line 13348 "orbit-policy.mc"
typedef  CORBA_sequence_ORBit_IMethod ORBit_IMethods; 
#line 13351 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IMethods_struct; 
#line 13352 "orbit-policy.mc"
typedef struct ORBit_IInterface_type ORBit_IInterface; 
#line 13357 "orbit-policy.mc"
struct ORBit_IInterface_type { CORBA_TypeCode tc;  ORBit_IMethods methods;  CORBA_sequence_CORBA_string base_interfaces; }; 
#line 13360 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IInterface_struct; 
#line 13361 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  ORBit_IInterface *_buffer;  CORBA_boolean _release; }CORBA_sequence_ORBit_IInterface; 
#line 13364 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_ORBit_IInterface_struct; 
#line 13365 "orbit-policy.mc"
typedef  CORBA_sequence_ORBit_IInterface ORBit_IInterfaces; 
#line 13368 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_IInterfaces_struct; 
#line 13369 "orbit-policy.mc"
typedef struct ORBit_NoIInterface_type ORBit_NoIInterface; 
#line 13372 "orbit-policy.mc"
struct ORBit_NoIInterface_type {int dummy; }; 
#line 13375 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_ORBit_NoIInterface_struct; 
#line 13380 "orbit-policy.mc"
extern  ORBit_IInterface CORBA_Object__iinterface; 
#line 13381 "orbit-policy.mc"
extern  ORBit_IMethod CORBA_Object__imethods[]; 
#line 13400 "orbit-policy.mc"
struct CORBA_Policy_type {struct ORBit_RootObject_struct parent;  CORBA_unsigned_long type;  CORBA_unsigned_long value; }; 
#line 13403 "orbit-policy.mc"
 CORBA_Policy ORBit_Policy_new( CORBA_unsigned_long type,  CORBA_unsigned_long value); 
#line 13426 "orbit-policy.mc"
struct CORBA_Context_type {struct ORBit_RootObject_struct parent;  GHashTable *mappings;  GSList *children;  gchar *the_name;  CORBA_Context parent_ctx; }; 
#line 13431 "orbit-policy.mc"
void ORBit_Context_marshal( CORBA_Context ctx, const  ORBit_ContextMarshalItem *mlist,  CORBA_unsigned_long nitems,  GIOPSendBuffer *buf); 
#line 13435 "orbit-policy.mc"
 gboolean ORBit_Context_demarshal( CORBA_Context parent,  CORBA_Context initme,  GIOPRecvBuffer *recv_buffer); 
#line 13437 "orbit-policy.mc"
void ORBit_Context_server_free( CORBA_Context ctx); 
#line 13457 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long version;  ORBit_IInterface **interfaces;  CORBA_sequence_CORBA_TypeCode types; }ORBit_IModule; 
#line 13459 "orbit-policy.mc"
const char *ORBit_get_safe_tmp(void ); 
#line 13462 "orbit-policy.mc"
 gpointer ORBit_small_alloc( CORBA_TypeCode tc); 
#line 13464 "orbit-policy.mc"
 gpointer ORBit_small_allocbuf( CORBA_TypeCode tc,  CORBA_unsigned_long length); 
#line 13467 "orbit-policy.mc"
void ORBit_small_freekids( CORBA_TypeCode tc,  gpointer p,  gpointer d); 
#line 13471 "orbit-policy.mc"
 gpointer ORBit_sequence_alloc( CORBA_TypeCode sequence_tc,  CORBA_unsigned_long length); 
#line 13473 "orbit-policy.mc"
void ORBit_sequence_append( gpointer sequence,  gconstpointer element); 
#line 13475 "orbit-policy.mc"
void ORBit_sequence_set_size( gpointer sequence,  CORBA_unsigned_long length); 
#line 13478 "orbit-policy.mc"
void ORBit_sequence_concat( gpointer sequence,  gconstpointer append); 
#line 13480 "orbit-policy.mc"
void ORBit_sequence_remove( gpointer sequence,  guint idx); 
#line 13487 "orbit-policy.mc"
typedef enum {ORBIT_CONNECTION_CONNECTED,ORBIT_CONNECTION_CONNECTING,ORBIT_CONNECTION_DISCONNECTED,ORBIT_CONNECTION_IN_PROC}ORBitConnectionStatus; 
#line 13489 "orbit-policy.mc"
 gpointer ORBit_small_get_servant( CORBA_Object obj); 
#line 13490 "orbit-policy.mc"
 ORBitConnectionStatus ORBit_small_get_connection_status( CORBA_Object obj); 
#line 13493 "orbit-policy.mc"
 ORBitConnectionStatus ORBit_small_listen_for_broken( CORBA_Object obj,  GCallback fn,  gpointer user_data); 
#line 13496 "orbit-policy.mc"
 ORBitConnectionStatus ORBit_small_unlisten_for_broken_full( CORBA_Object obj,  GCallback fn,  gpointer user_data); 
#line 13499 "orbit-policy.mc"
 ORBitConnectionStatus ORBit_small_unlisten_for_broken( CORBA_Object obj,  GCallback fn); 
#line 13501 "orbit-policy.mc"
typedef struct _ORBitConnection ORBitConnection; 
#line 13503 "orbit-policy.mc"
 ORBitConnection *ORBit_small_get_connection( CORBA_Object obj); 
#line 13504 "orbit-policy.mc"
 ORBitConnection *ORBit_small_get_connection_ref( CORBA_Object obj); 
#line 13505 "orbit-policy.mc"
void ORBit_small_connection_unref( ORBitConnection *cnx); 
#line 13507 "orbit-policy.mc"
void ORBit_connection_set_max_buffer( ORBitConnection *cnx,  gulong max_buffer_bytes); 
#line 13514 "orbit-policy.mc"
extern int ORBit_small_flags; 
#line 13522 "orbit-policy.mc"
void ORBit_small_invoke_stub( CORBA_Object object,  ORBit_IMethod *m_data,  gpointer ret,  gpointer *args,  CORBA_Context ctx,  CORBA_Environment *ev); 
#line 13531 "orbit-policy.mc"
void ORBit_small_invoke_stub_n( CORBA_Object object,  ORBit_IMethods *methods,  glong index,  gpointer ret,  gpointer *args,  CORBA_Context ctx,  CORBA_Environment *ev); 
#line 13543 "orbit-policy.mc"
void ORBit_small_invoke_adaptor( ORBit_OAObject adaptor_obj,  GIOPRecvBuffer *recv_buffer,  ORBit_IMethod *m_data,  gpointer data,  CORBA_Environment *ev); 
#line 13549 "orbit-policy.mc"
 CORBA_char *ORBit_small_get_type_id( CORBA_Object object,  CORBA_Environment *ev); 
#line 13552 "orbit-policy.mc"
 ORBit_IInterface *ORBit_small_get_iinterface( CORBA_Object opt_object, const  CORBA_char *repo_id,  CORBA_Environment *ev); 
#line 13553 "orbit-policy.mc"
 gboolean ORBit_small_load_typelib(const char *libname); 
#line 13555 "orbit-policy.mc"
 CORBA_sequence_CORBA_TypeCode *ORBit_small_get_types(const char *name); 
#line 13557 "orbit-policy.mc"
 CORBA_sequence_ORBit_IInterface *ORBit_small_get_iinterfaces(const char *name); 
#line 13559 "orbit-policy.mc"
typedef struct _ORBitAsyncQueueEntry ORBitAsyncQueueEntry; 
#line 13565 "orbit-policy.mc"
typedef void (*ORBitAsyncInvokeFunc)( CORBA_Object object,  ORBit_IMethod *m_data,  ORBitAsyncQueueEntry *aqe,  gpointer user_data,  CORBA_Environment *ev); 
#line 13574 "orbit-policy.mc"
void ORBit_small_invoke_async( CORBA_Object obj,  ORBit_IMethod *m_data,  ORBitAsyncInvokeFunc fn,  gpointer user_data,  gpointer *args,  CORBA_Context ctx,  CORBA_Environment *ev); 
#line 13579 "orbit-policy.mc"
void ORBit_small_demarshal_async( ORBitAsyncQueueEntry *aqe,  gpointer ret,  gpointer *args,  CORBA_Environment *ev); 
#line 13585 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_PortableServer_POA; 
#line 13588 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_PortableServer_POA_struct; 
#line 13589 "orbit-policy.mc"
typedef  CORBA_sequence_PortableServer_POA PortableServer_POAList; 
#line 13592 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POAList_struct; 
#line 13593 "orbit-policy.mc"
typedef  CORBA_OctetSeq PortableServer_ObjectId; 
#line 13596 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_ObjectId_struct; 
#line 13597 "orbit-policy.mc"
typedef struct PortableServer_ForwardRequest_type PortableServer_ForwardRequest; 
#line 13600 "orbit-policy.mc"
struct PortableServer_ForwardRequest_type { CORBA_Object forward_reference; }; 
#line 13603 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_ForwardRequest_struct; 
#line 13608 "orbit-policy.mc"
typedef enum {PortableServer_ORB_CTRL_MODEL,PortableServer_SINGLE_THREAD_MODEL,PortableServer_MAIN_THREAD_MODEL}PortableServer_ThreadPolicyValue; 
#line 13611 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_ThreadPolicyValue_struct; 
#line 13618 "orbit-policy.mc"
typedef struct PortableServer_ThreadPolicy_type *PortableServer_ThreadPolicy; 
#line 13628 "orbit-policy.mc"
typedef enum {PortableServer_TRANSIENT,PortableServer_PERSISTENT}PortableServer_LifespanPolicyValue; 
#line 13631 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_LifespanPolicyValue_struct; 
#line 13638 "orbit-policy.mc"
typedef struct PortableServer_LifespanPolicy_type *PortableServer_LifespanPolicy; 
#line 13648 "orbit-policy.mc"
typedef enum {PortableServer_UNIQUE_ID,PortableServer_MULTIPLE_ID}PortableServer_IdUniquenessPolicyValue; 
#line 13651 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_IdUniquenessPolicyValue_struct; 
#line 13658 "orbit-policy.mc"
typedef struct PortableServer_IdUniquenessPolicy_type *PortableServer_IdUniquenessPolicy; 
#line 13668 "orbit-policy.mc"
typedef enum {PortableServer_USER_ID,PortableServer_SYSTEM_ID}PortableServer_IdAssignmentPolicyValue; 
#line 13671 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_IdAssignmentPolicyValue_struct; 
#line 13678 "orbit-policy.mc"
typedef struct PortableServer_IdAssignmentPolicy_type *PortableServer_IdAssignmentPolicy; 
#line 13688 "orbit-policy.mc"
typedef enum {PortableServer_IMPLICIT_ACTIVATION,PortableServer_NO_IMPLICIT_ACTIVATION}PortableServer_ImplicitActivationPolicyValue; 
#line 13691 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_ImplicitActivationPolicyValue_struct; 
#line 13698 "orbit-policy.mc"
typedef struct PortableServer_ImplicitActivationPolicy_type *PortableServer_ImplicitActivationPolicy; 
#line 13708 "orbit-policy.mc"
typedef enum {PortableServer_RETAIN,PortableServer_NON_RETAIN}PortableServer_ServantRetentionPolicyValue; 
#line 13711 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_ServantRetentionPolicyValue_struct; 
#line 13718 "orbit-policy.mc"
typedef struct PortableServer_ServantRetentionPolicy_type *PortableServer_ServantRetentionPolicy; 
#line 13729 "orbit-policy.mc"
typedef enum {PortableServer_USE_ACTIVE_OBJECT_MAP_ONLY,PortableServer_USE_DEFAULT_SERVANT,PortableServer_USE_SERVANT_MANAGER}PortableServer_RequestProcessingPolicyValue; 
#line 13732 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_RequestProcessingPolicyValue_struct; 
#line 13739 "orbit-policy.mc"
typedef struct PortableServer_RequestProcessingPolicy_type *PortableServer_RequestProcessingPolicy; 
#line 13747 "orbit-policy.mc"
typedef struct PortableServer_POAManager_type *PortableServer_POAManager; 
#line 13748 "orbit-policy.mc"
typedef struct PortableServer_POAManager_AdapterInactive_type PortableServer_POAManager_AdapterInactive; 
#line 13751 "orbit-policy.mc"
struct PortableServer_POAManager_AdapterInactive_type {int dummy; }; 
#line 13754 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POAManager_AdapterInactive_struct; 
#line 13767 "orbit-policy.mc"
typedef enum {PortableServer_POAManager_HOLDING,PortableServer_POAManager_ACTIVE,PortableServer_POAManager_DISCARDING,PortableServer_POAManager_INACTIVE}PortableServer_POAManager_State; 
#line 13770 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POAManager_State_struct; 
#line 13777 "orbit-policy.mc"
typedef struct PortableServer_POAManagerFactory_type *PortableServer_POAManagerFactory; 
#line 13778 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_PortableServer_POAManager; 
#line 13781 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_PortableServer_POAManager_struct; 
#line 13782 "orbit-policy.mc"
typedef  CORBA_sequence_PortableServer_POAManager PortableServer_POAManagerFactory_POAManagerSeq; 
#line 13785 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POAManagerFactory_POAManagerSeq_struct; 
#line 13786 "orbit-policy.mc"
typedef struct PortableServer_POAManagerFactory_ManagerAlreadyExists_type PortableServer_POAManagerFactory_ManagerAlreadyExists; 
#line 13789 "orbit-policy.mc"
struct PortableServer_POAManagerFactory_ManagerAlreadyExists_type {int dummy; }; 
#line 13792 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POAManagerFactory_ManagerAlreadyExists_struct; 
#line 13793 "orbit-policy.mc"
typedef struct PortableServer_AdapterActivator_type *PortableServer_AdapterActivator; 
#line 13801 "orbit-policy.mc"
typedef struct PortableServer_ServantManager_type *PortableServer_ServantManager; 
#line 13809 "orbit-policy.mc"
typedef struct PortableServer_ServantActivator_type *PortableServer_ServantActivator; 
#line 13817 "orbit-policy.mc"
typedef struct PortableServer_ServantLocator_type *PortableServer_ServantLocator; 
#line 13824 "orbit-policy.mc"
typedef struct PortableServer_ServantLocator_Cookie_type *PortableServer_ServantLocator_Cookie; 
#line 13825 "orbit-policy.mc"
typedef struct PortableServer_POA_AdapterAlreadyExists_type PortableServer_POA_AdapterAlreadyExists; 
#line 13828 "orbit-policy.mc"
struct PortableServer_POA_AdapterAlreadyExists_type {int dummy; }; 
#line 13831 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_AdapterAlreadyExists_struct; 
#line 13832 "orbit-policy.mc"
typedef struct PortableServer_POA_AdapterNonExistent_type PortableServer_POA_AdapterNonExistent; 
#line 13835 "orbit-policy.mc"
struct PortableServer_POA_AdapterNonExistent_type {int dummy; }; 
#line 13838 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_AdapterNonExistent_struct; 
#line 13839 "orbit-policy.mc"
typedef struct PortableServer_POA_InvalidPolicy_type PortableServer_POA_InvalidPolicy; 
#line 13842 "orbit-policy.mc"
struct PortableServer_POA_InvalidPolicy_type { CORBA_unsigned_short index; }; 
#line 13845 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_InvalidPolicy_struct; 
#line 13846 "orbit-policy.mc"
typedef struct PortableServer_POA_NoServant_type PortableServer_POA_NoServant; 
#line 13849 "orbit-policy.mc"
struct PortableServer_POA_NoServant_type {int dummy; }; 
#line 13852 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_NoServant_struct; 
#line 13853 "orbit-policy.mc"
typedef struct PortableServer_POA_ObjectAlreadyActive_type PortableServer_POA_ObjectAlreadyActive; 
#line 13856 "orbit-policy.mc"
struct PortableServer_POA_ObjectAlreadyActive_type {int dummy; }; 
#line 13859 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_ObjectAlreadyActive_struct; 
#line 13860 "orbit-policy.mc"
typedef struct PortableServer_POA_ObjectNotActive_type PortableServer_POA_ObjectNotActive; 
#line 13863 "orbit-policy.mc"
struct PortableServer_POA_ObjectNotActive_type {int dummy; }; 
#line 13866 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_ObjectNotActive_struct; 
#line 13867 "orbit-policy.mc"
typedef struct PortableServer_POA_ServantAlreadyActive_type PortableServer_POA_ServantAlreadyActive; 
#line 13870 "orbit-policy.mc"
struct PortableServer_POA_ServantAlreadyActive_type {int dummy; }; 
#line 13873 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_ServantAlreadyActive_struct; 
#line 13874 "orbit-policy.mc"
typedef struct PortableServer_POA_ServantNotActive_type PortableServer_POA_ServantNotActive; 
#line 13877 "orbit-policy.mc"
struct PortableServer_POA_ServantNotActive_type {int dummy; }; 
#line 13880 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_ServantNotActive_struct; 
#line 13881 "orbit-policy.mc"
typedef struct PortableServer_POA_WrongAdapter_type PortableServer_POA_WrongAdapter; 
#line 13884 "orbit-policy.mc"
struct PortableServer_POA_WrongAdapter_type {int dummy; }; 
#line 13887 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_WrongAdapter_struct; 
#line 13888 "orbit-policy.mc"
typedef struct PortableServer_POA_WrongPolicy_type PortableServer_POA_WrongPolicy; 
#line 13891 "orbit-policy.mc"
struct PortableServer_POA_WrongPolicy_type {int dummy; }; 
#line 13894 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_POA_WrongPolicy_struct; 
#line 13895 "orbit-policy.mc"
typedef struct PortableServer_Current_type *PortableServer_Current; 
#line 13896 "orbit-policy.mc"
typedef struct PortableServer_Current_NoContext_type PortableServer_Current_NoContext; 
#line 13899 "orbit-policy.mc"
struct PortableServer_Current_NoContext_type {int dummy; }; 
#line 13902 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_PortableServer_Current_NoContext_struct; 
#line 13903 "orbit-policy.mc"
 PortableServer_ThreadPolicyValue PortableServer_ThreadPolicy__get_value( PortableServer_ThreadPolicy _obj,  CORBA_Environment *ev); 
#line 13907 "orbit-policy.mc"
 PortableServer_LifespanPolicyValue PortableServer_LifespanPolicy__get_value( PortableServer_LifespanPolicy _obj,  CORBA_Environment *ev); 
#line 13911 "orbit-policy.mc"
 PortableServer_IdUniquenessPolicyValue PortableServer_IdUniquenessPolicy__get_value( PortableServer_IdUniquenessPolicy _obj,  CORBA_Environment *ev); 
#line 13915 "orbit-policy.mc"
 PortableServer_IdAssignmentPolicyValue PortableServer_IdAssignmentPolicy__get_value( PortableServer_IdAssignmentPolicy _obj,  CORBA_Environment *ev); 
#line 13919 "orbit-policy.mc"
 PortableServer_ImplicitActivationPolicyValue PortableServer_ImplicitActivationPolicy__get_value( PortableServer_ImplicitActivationPolicy _obj,  CORBA_Environment *ev); 
#line 13923 "orbit-policy.mc"
 PortableServer_ServantRetentionPolicyValue PortableServer_ServantRetentionPolicy__get_value( PortableServer_ServantRetentionPolicy _obj,  CORBA_Environment *ev); 
#line 13927 "orbit-policy.mc"
 PortableServer_RequestProcessingPolicyValue PortableServer_RequestProcessingPolicy__get_value( PortableServer_RequestProcessingPolicy _obj,  CORBA_Environment *ev); 
#line 13928 "orbit-policy.mc"
void PortableServer_POAManager_activate( PortableServer_POAManager _obj,  CORBA_Environment *ev); 
#line 13929 "orbit-policy.mc"
void PortableServer_POAManager_hold_requests( PortableServer_POAManager _obj, const  CORBA_boolean wait_for_completion,  CORBA_Environment *ev); 
#line 13930 "orbit-policy.mc"
void PortableServer_POAManager_discard_requests( PortableServer_POAManager _obj, const  CORBA_boolean wait_for_completion,  CORBA_Environment *ev); 
#line 13931 "orbit-policy.mc"
void PortableServer_POAManager_deactivate( PortableServer_POAManager _obj, const  CORBA_boolean etherealize_objects, const  CORBA_boolean wait_for_completion,  CORBA_Environment *ev); 
#line 13932 "orbit-policy.mc"
 PortableServer_POAManager_State PortableServer_POAManager_get_state( PortableServer_POAManager _obj,  CORBA_Environment *ev); 
#line 13933 "orbit-policy.mc"
 CORBA_string PortableServer_POAManager_get_id( PortableServer_POAManager _obj,  CORBA_Environment *ev); 
#line 13934 "orbit-policy.mc"
 PortableServer_POAManager PortableServer_POAManagerFactory_create_POAManager( PortableServer_POAManagerFactory _obj, const  CORBA_char *id, const  CORBA_PolicyList *policies,  CORBA_Environment *ev); 
#line 13935 "orbit-policy.mc"
 PortableServer_POAManagerFactory_POAManagerSeq *PortableServer_POAManagerFactory_list( PortableServer_POAManagerFactory _obj,  CORBA_Environment *ev); 
#line 13936 "orbit-policy.mc"
 PortableServer_POAManager PortableServer_POAManagerFactory_find( PortableServer_POAManagerFactory _obj, const  CORBA_char *id,  CORBA_Environment *ev); 
#line 13937 "orbit-policy.mc"
 CORBA_boolean PortableServer_AdapterActivator_unknown_adapter( PortableServer_AdapterActivator _obj, const  PortableServer_POA parent, const  CORBA_char *name,  CORBA_Environment *ev); 
#line 13938 "orbit-policy.mc"
 PortableServer_Servant PortableServer_ServantActivator_incarnate( PortableServer_ServantActivator _obj, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter,  CORBA_Environment *ev); 
#line 13939 "orbit-policy.mc"
void PortableServer_ServantActivator_etherealize( PortableServer_ServantActivator _obj, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter, const  PortableServer_Servant serv, const  CORBA_boolean cleanup_in_progress, const  CORBA_boolean remaining_activations,  CORBA_Environment *ev); 
#line 13940 "orbit-policy.mc"
 PortableServer_Servant PortableServer_ServantLocator_preinvoke( PortableServer_ServantLocator _obj, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter, const  CORBA_char *operation,  PortableServer_ServantLocator_Cookie the_cookie,  CORBA_Environment *ev); 
#line 13941 "orbit-policy.mc"
void PortableServer_ServantLocator_postinvoke( PortableServer_ServantLocator _obj, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter, const  CORBA_char *operation, const  PortableServer_ServantLocator_Cookie the_cookie, const  PortableServer_Servant the_servant,  CORBA_Environment *ev); 
#line 13942 "orbit-policy.mc"
 PortableServer_POA PortableServer_POA_create_POA( PortableServer_POA _obj, const  CORBA_char *adapter_name, const  PortableServer_POAManager a_POAManager, const  CORBA_PolicyList *policies,  CORBA_Environment *ev); 
#line 13943 "orbit-policy.mc"
 PortableServer_POA PortableServer_POA_find_POA( PortableServer_POA _obj, const  CORBA_char *adapter_name, const  CORBA_boolean activate_it,  CORBA_Environment *ev); 
#line 13944 "orbit-policy.mc"
void PortableServer_POA_destroy( PortableServer_POA _obj, const  CORBA_boolean etherealize_objects, const  CORBA_boolean wait_for_completion,  CORBA_Environment *ev); 
#line 13945 "orbit-policy.mc"
 PortableServer_ThreadPolicy PortableServer_POA_create_thread_policy( PortableServer_POA _obj, const  PortableServer_ThreadPolicyValue value,  CORBA_Environment *ev); 
#line 13946 "orbit-policy.mc"
 PortableServer_LifespanPolicy PortableServer_POA_create_lifespan_policy( PortableServer_POA _obj, const  PortableServer_LifespanPolicyValue value,  CORBA_Environment *ev); 
#line 13947 "orbit-policy.mc"
 PortableServer_IdUniquenessPolicy PortableServer_POA_create_id_uniqueness_policy( PortableServer_POA _obj, const  PortableServer_IdUniquenessPolicyValue value,  CORBA_Environment *ev); 
#line 13948 "orbit-policy.mc"
 PortableServer_IdAssignmentPolicy PortableServer_POA_create_id_assignment_policy( PortableServer_POA _obj, const  PortableServer_IdAssignmentPolicyValue value,  CORBA_Environment *ev); 
#line 13949 "orbit-policy.mc"
 PortableServer_ImplicitActivationPolicy PortableServer_POA_create_implicit_activation_policy( PortableServer_POA _obj, const  PortableServer_ImplicitActivationPolicyValue value,  CORBA_Environment *ev); 
#line 13950 "orbit-policy.mc"
 PortableServer_ServantRetentionPolicy PortableServer_POA_create_servant_retention_policy( PortableServer_POA _obj, const  PortableServer_ServantRetentionPolicyValue value,  CORBA_Environment *ev); 
#line 13951 "orbit-policy.mc"
 PortableServer_RequestProcessingPolicy PortableServer_POA_create_request_processing_policy( PortableServer_POA _obj, const  PortableServer_RequestProcessingPolicyValue value,  CORBA_Environment *ev); 
#line 13952 "orbit-policy.mc"
 CORBA_string PortableServer_POA__get_the_name( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13953 "orbit-policy.mc"
 PortableServer_POA PortableServer_POA__get_the_parent( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13954 "orbit-policy.mc"
 PortableServer_POAList *PortableServer_POA__get_the_children( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13955 "orbit-policy.mc"
 PortableServer_POAManager PortableServer_POA__get_the_POAManager( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13956 "orbit-policy.mc"
 PortableServer_AdapterActivator PortableServer_POA__get_the_activator( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13957 "orbit-policy.mc"
void PortableServer_POA__set_the_activator( PortableServer_POA _obj, const  PortableServer_AdapterActivator value,  CORBA_Environment *ev); 
#line 13958 "orbit-policy.mc"
 PortableServer_ServantManager PortableServer_POA_get_servant_manager( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13959 "orbit-policy.mc"
void PortableServer_POA_set_servant_manager( PortableServer_POA _obj, const  PortableServer_ServantManager imgr,  CORBA_Environment *ev); 
#line 13960 "orbit-policy.mc"
 PortableServer_Servant PortableServer_POA_get_servant( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13961 "orbit-policy.mc"
void PortableServer_POA_set_servant( PortableServer_POA _obj, const  PortableServer_Servant p_servant,  CORBA_Environment *ev); 
#line 13962 "orbit-policy.mc"
 PortableServer_ObjectId *PortableServer_POA_activate_object( PortableServer_POA _obj, const  PortableServer_Servant p_servant,  CORBA_Environment *ev); 
#line 13963 "orbit-policy.mc"
void PortableServer_POA_activate_object_with_id( PortableServer_POA _obj, const  PortableServer_ObjectId *id, const  PortableServer_Servant p_servant,  CORBA_Environment *ev); 
#line 13964 "orbit-policy.mc"
void PortableServer_POA_deactivate_object( PortableServer_POA _obj, const  PortableServer_ObjectId *oid,  CORBA_Environment *ev); 
#line 13965 "orbit-policy.mc"
 CORBA_Object PortableServer_POA_create_reference( PortableServer_POA _obj, const  CORBA_char *intf,  CORBA_Environment *ev); 
#line 13966 "orbit-policy.mc"
 CORBA_Object PortableServer_POA_create_reference_with_id( PortableServer_POA _obj, const  PortableServer_ObjectId *oid, const  CORBA_char *intf,  CORBA_Environment *ev); 
#line 13967 "orbit-policy.mc"
 PortableServer_ObjectId *PortableServer_POA_servant_to_id( PortableServer_POA _obj, const  PortableServer_Servant p_servant,  CORBA_Environment *ev); 
#line 13968 "orbit-policy.mc"
 CORBA_Object PortableServer_POA_servant_to_reference( PortableServer_POA _obj, const  PortableServer_Servant p_servant,  CORBA_Environment *ev); 
#line 13969 "orbit-policy.mc"
 PortableServer_Servant PortableServer_POA_reference_to_servant( PortableServer_POA _obj, const  CORBA_Object reference,  CORBA_Environment *ev); 
#line 13970 "orbit-policy.mc"
 PortableServer_ObjectId *PortableServer_POA_reference_to_id( PortableServer_POA _obj, const  CORBA_Object reference,  CORBA_Environment *ev); 
#line 13971 "orbit-policy.mc"
 PortableServer_Servant PortableServer_POA_id_to_servant( PortableServer_POA _obj, const  PortableServer_ObjectId *oid,  CORBA_Environment *ev); 
#line 13972 "orbit-policy.mc"
 CORBA_Object PortableServer_POA_id_to_reference( PortableServer_POA _obj, const  PortableServer_ObjectId *oid,  CORBA_Environment *ev); 
#line 13973 "orbit-policy.mc"
 CORBA_OctetSeq *PortableServer_POA__get_id( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13974 "orbit-policy.mc"
 PortableServer_POAManagerFactory PortableServer_POA__get_the_POAManagerFactory( PortableServer_POA _obj,  CORBA_Environment *ev); 
#line 13975 "orbit-policy.mc"
 PortableServer_POA PortableServer_Current_get_POA( PortableServer_Current _obj,  CORBA_Environment *ev); 
#line 13976 "orbit-policy.mc"
 PortableServer_ObjectId *PortableServer_Current_get_object_id( PortableServer_Current _obj,  CORBA_Environment *ev); 
#line 13977 "orbit-policy.mc"
 CORBA_Object PortableServer_Current_get_reference( PortableServer_Current _obj,  CORBA_Environment *ev); 
#line 13978 "orbit-policy.mc"
 PortableServer_Servant PortableServer_Current_get_servant( PortableServer_Current _obj,  CORBA_Environment *ev); 
#line 13999 "orbit-policy.mc"
typedef enum {ORBIT_THREAD_HINT_NONE=0,ORBIT_THREAD_HINT_PER_OBJECT,ORBIT_THREAD_HINT_PER_REQUEST,ORBIT_THREAD_HINT_PER_POA,ORBIT_THREAD_HINT_PER_CONNECTION,ORBIT_THREAD_HINT_ONEWAY_AT_IDLE,ORBIT_THREAD_HINT_ALL_AT_IDLE,ORBIT_THREAD_HINT_ON_CONTEXT}ORBitThreadHint; 
#line 14001 "orbit-policy.mc"
typedef struct ORBit_ObjectAdaptor_type *ORBit_ObjectAdaptor; 
#line 14005 "orbit-policy.mc"
void ORBit_ObjectAdaptor_set_thread_hint( ORBit_ObjectAdaptor adaptor,  ORBitThreadHint thread_hint, ...); 
#line 14008 "orbit-policy.mc"
void ORBit_ObjectAdaptor_set_thread_hintv( ORBit_ObjectAdaptor adaptor,  ORBitThreadHint thread_hint,  va_list args); 
#line 14009 "orbit-policy.mc"
 ORBitThreadHint ORBit_ObjectAdaptor_get_thread_hint( ORBit_ObjectAdaptor adaptor); 
#line 14011 "orbit-policy.mc"
void ORBit_ObjectAdaptor_object_bind_to_current_thread( CORBA_Object obj); 
#line 14017 "orbit-policy.mc"
void ORBit_handle_locate_request( CORBA_ORB orb,  GIOPRecvBuffer *recv_buffer); 
#line 14020 "orbit-policy.mc"
void ORBit_handle_request( CORBA_ORB orb,  GIOPRecvBuffer *recv_buffer); 
#line 14028 "orbit-policy.mc"
void ORBit_small_handle_request( ORBit_OAObject adaptor_obj,  CORBA_Identifier opname,  gpointer ret,  gpointer *args,  CORBA_Context ctx,  GIOPRecvBuffer *recv_buffer,  CORBA_Environment *ev); 
#line 14030 "orbit-policy.mc"
 gboolean ORBit_OAObject_is_active( ORBit_OAObject adaptor_obj); 
#line 14032 "orbit-policy.mc"
 ORBit_ObjectKey *ORBit_OAObject_object_to_objkey( ORBit_OAObject adaptor_obj); 
#line 14039 "orbit-policy.mc"
void ORBit_OAObject_invoke( ORBit_OAObject adaptor_obj,  gpointer ret,  gpointer *args,  CORBA_Context ctx,  gpointer data,  CORBA_Environment *ev); 
#line 14044 "orbit-policy.mc"
typedef  gboolean (*ORBitStateCheckFunc)( ORBit_OAObject adaptor_obj); 
#line 14046 "orbit-policy.mc"
typedef  ORBit_ObjectKey *(*ORBitKeyGenFunc)( ORBit_OAObject adaptor_obj); 
#line 14053 "orbit-policy.mc"
typedef void (*ORBitInvokeFunc)( ORBit_OAObject adaptor_obj,  gpointer ret,  gpointer *args,  CORBA_Context ctx,  gpointer data,  CORBA_Environment *ev); 
#line 14061 "orbit-policy.mc"
typedef void (*ORBitReqFunc)( ORBit_OAObject adaptor_obj,  CORBA_Identifier opname,  gpointer ret,  gpointer *args,  CORBA_Context ctx,  GIOPRecvBuffer *recv_buffer,  CORBA_Environment *ev); 
#line 14065 "orbit-policy.mc"
typedef enum {ORBIT_ADAPTOR_POA=1 << 0}ORBit_Adaptor_type; 
#line 14074 "orbit-policy.mc"
struct ORBit_OAObject_Interface_type { ORBit_Adaptor_type adaptor_type;  ORBitStateCheckFunc is_active;  ORBitKeyGenFunc object_to_objkey;  ORBitInvokeFunc invoke;  ORBitReqFunc handle_request; }; 
#line 14076 "orbit-policy.mc"
typedef struct ORBit_OAObject_Interface_type *ORBit_OAObject_Interface; 
#line 14084 "orbit-policy.mc"
struct ORBit_OAObject_type {struct ORBit_RootObject_struct parent;  CORBA_Object objref;  ORBit_OAObject_Interface interface; }; 
#line 14090 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_octet ORBit_AdaptorKey; 
#line 14094 "orbit-policy.mc"
typedef void (*ORBitReqHandlerFunc)( ORBit_ObjectAdaptor adaptor,  GIOPRecvBuffer *recv_buffer,  ORBit_ObjectKey *objkey); 
#line 14108 "orbit-policy.mc"
struct ORBit_ObjectAdaptor_type {struct ORBit_RootObject_struct parent;  GMutex *lock;  ORBitReqHandlerFunc handle_request;  ORBit_AdaptorKey adaptor_key;  ORBitThreadHint thread_hint;  GMainContext *context; }; 
#line 14110 "orbit-policy.mc"
int ORBit_adaptor_setup( ORBit_ObjectAdaptor adaptor,  CORBA_ORB orb); 
#line 14127 "orbit-policy.mc"
typedef struct {void (*dummy_padding)(void );  ORBit_impl_finder impl_finder; const char *class_name;  CORBA_unsigned_long *class_id;  ORBit_VepvIdx *vepvmap;  ORBit_IInterface *idata; }PortableServer_ClassInfo; 
#line 14146 "orbit-policy.mc"
struct ORBit_POAObject_type {struct ORBit_OAObject_type base;  PortableServer_Servant servant;  PortableServer_POA poa;  PortableServer_ObjectId *object_id;  ORBit_VepvIdx *vepvmap_cache;  guint16 life_flags;  guint16 use_cnt;  ORBit_POAObject next; }; 
#line 14157 "orbit-policy.mc"
void ORBit_c_stub_invoke( CORBA_Object obj,  ORBit_IMethods *methods,  glong method_index,  gpointer ret,  gpointer args,  CORBA_Context ctx,  CORBA_Environment *ev,  glong class_id,  glong method_offset,  ORBitSmallSkeleton skel_impl); 
#line 14164 "orbit-policy.mc"
typedef struct {void *_private; }POA_PortableServer_ServantManager__epv; 
#line 14181 "orbit-policy.mc"
typedef struct {void *_private;  PortableServer_Servant (*incarnate)( PortableServer_Servant _servant, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter,  CORBA_Environment *ev); void (*etherealize)( PortableServer_Servant _servant, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter, const  PortableServer_Servant serv, const  CORBA_boolean cleanup_in_progress, const  CORBA_boolean remaining_activations,  CORBA_Environment *ev); }POA_PortableServer_ServantActivator__epv; 
#line 14186 "orbit-policy.mc"
typedef struct { PortableServer_ServantBase__epv *_base_epv;  POA_PortableServer_ServantManager__epv *PortableServer_ServantManager_epv;  POA_PortableServer_ServantActivator__epv *PortableServer_ServantActivator_epv; }POA_PortableServer_ServantActivator__vepv; 
#line 14191 "orbit-policy.mc"
typedef struct {void *_private;  POA_PortableServer_ServantActivator__vepv *vepv; }POA_PortableServer_ServantActivator; 
#line 14210 "orbit-policy.mc"
typedef struct {void *_private;  PortableServer_Servant (*preinvoke)( PortableServer_Servant _servant, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter, const  CORBA_Identifier operation,  PortableServer_ServantLocator_Cookie *the_cookie,  CORBA_Environment *ev); void (*postinvoke)( PortableServer_Servant _servant, const  PortableServer_ObjectId *oid, const  PortableServer_POA adapter, const  CORBA_Identifier operation, const  PortableServer_ServantLocator_Cookie the_cookie, const  PortableServer_Servant the_servant,  CORBA_Environment *ev); }POA_PortableServer_ServantLocator__epv; 
#line 14215 "orbit-policy.mc"
typedef struct { PortableServer_ServantBase__epv *_base_epv;  POA_PortableServer_ServantManager__epv *PortableServer_ServantManager_epv;  POA_PortableServer_ServantLocator__epv *PortableServer_ServantLocator_epv; }POA_PortableServer_ServantLocator__vepv; 
#line 14219 "orbit-policy.mc"
typedef struct {void *_private;  POA_PortableServer_ServantLocator__vepv *vepv; }POA_PortableServer_ServantLocator; 
#line 14236 "orbit-policy.mc"
struct PortableServer_POAManager_type {struct ORBit_RootObject_struct parent;  GSList *poa_collection;  PortableServer_POAManager_State state;  CORBA_ORB orb; }; 
#line 14266 "orbit-policy.mc"
struct PortableServer_POA_type {struct ORBit_ObjectAdaptor_type base;  guint16 use_cnt;  guint16 life_flags; int poa_id; int next_sysid; char *name;  CORBA_ORB orb;  PortableServer_POA parent_poa;  PortableServer_POAManager poa_manager;  PortableServer_AdapterActivator the_activator;  PortableServer_ServantManager servant_manager;  PortableServer_Servant default_servant;  GHashTable *oid_to_obj_map;  CORBA_unsigned_long next_id;  GSList *held_requests;  GHashTable *child_poas;  PortableServer_ThreadPolicyValue p_thread;  PortableServer_LifespanPolicyValue p_lifespan;  PortableServer_IdUniquenessPolicyValue p_id_uniqueness;  PortableServer_IdAssignmentPolicyValue p_id_assignment;  PortableServer_ImplicitActivationPolicyValue p_implicit_activation;  PortableServer_ServantRetentionPolicyValue p_servant_retention;  PortableServer_RequestProcessingPolicyValue p_request_processing; }; 
#line 14284 "orbit-policy.mc"
struct PortableServer_Current_type {struct ORBit_RootObject_struct parent;  CORBA_ORB orb; }; 
#line 14291 "orbit-policy.mc"
void PortableServer_ServantBase__init( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14293 "orbit-policy.mc"
void PortableServer_ServantBase__fini( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14296 "orbit-policy.mc"
void PortableServer_RefCountServantBase__init( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14298 "orbit-policy.mc"
void PortableServer_RefCountServantBase__fini( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14301 "orbit-policy.mc"
void PortableServer_ServantBase__add_ref( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14303 "orbit-policy.mc"
void PortableServer_ServantBase__remove_ref( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14306 "orbit-policy.mc"
void PortableServer_RefCountServantBase__add_ref( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14308 "orbit-policy.mc"
void PortableServer_RefCountServantBase__remove_ref( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14311 "orbit-policy.mc"
 PortableServer_POA PortableServer_ServantBase__default_POA( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14313 "orbit-policy.mc"
 CORBA_InterfaceDef PortableServer_ServantBase__get_interface( PortableServer_Servant servant,  CORBA_Environment *ev); 
#line 14316 "orbit-policy.mc"
 CORBA_boolean PortableServer_ServantBase__is_a( PortableServer_Servant servant, const  CORBA_char *logical_type_id,  CORBA_Environment *ev); 
#line 14318 "orbit-policy.mc"
 PortableServer_ObjectId *PortableServer_string_to_ObjectId( CORBA_char *str,  CORBA_Environment *nv); 
#line 14321 "orbit-policy.mc"
 PortableServer_ObjectId *PortableServer_wstring_to_ObjectId( CORBA_wchar *str,  CORBA_Environment *ev); 
#line 14324 "orbit-policy.mc"
 CORBA_char *PortableServer_ObjectId_to_string( PortableServer_ObjectId *oid,  CORBA_Environment *ev); 
#line 14327 "orbit-policy.mc"
 CORBA_wchar *PortableServer_ObjectId_to_wstring( PortableServer_ObjectId *oid,  CORBA_Environment *ev); 
#line 14334 "orbit-policy.mc"
 PortableServer_POA ORBit_POA_new_from( CORBA_ORB orb,  PortableServer_POA parent, const  CORBA_char *adaptor_name, const  CORBA_PolicyList *opt_policies,  CORBA_Environment *ev); 
#line 14344 "orbit-policy.mc"
void ORBit_skel_class_register( PortableServer_ClassInfo *ci,  PortableServer_ServantBase *servant, void (*opt_finalize)( PortableServer_Servant ,  CORBA_Environment *),  CORBA_unsigned_long class_offset,  CORBA_unsigned_long first_parent_id, ...); 
#line 14347 "orbit-policy.mc"
void ORBit_classinfo_register( PortableServer_ClassInfo *ci); 
#line 14348 "orbit-policy.mc"
 PortableServer_ClassInfo *ORBit_classinfo_lookup(const char *type_id); 
#line 14349 "orbit-policy.mc"
void ORBit_POAObject_post_invoke( ORBit_POAObject obj); 
#line 14351 "orbit-policy.mc"
 gboolean ORBit_poa_allow_cross_thread_call( ORBit_POAObject pobj,  ORBit_IMethodFlag method_flags); 
#line 14353 "orbit-policy.mc"
void ORBit_recv_buffer_return_sys_exception( GIOPRecvBuffer *buf,  CORBA_Environment *ev); 
#line 14354 "orbit-policy.mc"
void ORBit_poa_init(void ); 
#line 14359 "orbit-policy.mc"
typedef struct DynamicAny_DynAny_type *DynamicAny_DynAny; 
#line 14360 "orbit-policy.mc"
typedef struct DynamicAny_DynAny_InvalidValue_type DynamicAny_DynAny_InvalidValue; 
#line 14363 "orbit-policy.mc"
struct DynamicAny_DynAny_InvalidValue_type {int dummy; }; 
#line 14366 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_DynAny_InvalidValue_struct; 
#line 14367 "orbit-policy.mc"
typedef struct DynamicAny_DynAny_TypeMismatch_type DynamicAny_DynAny_TypeMismatch; 
#line 14370 "orbit-policy.mc"
struct DynamicAny_DynAny_TypeMismatch_type {int dummy; }; 
#line 14373 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_DynAny_TypeMismatch_struct; 
#line 14374 "orbit-policy.mc"
typedef struct DynamicAny_DynFixed_type *DynamicAny_DynFixed; 
#line 14382 "orbit-policy.mc"
typedef struct DynamicAny_DynEnum_type *DynamicAny_DynEnum; 
#line 14389 "orbit-policy.mc"
typedef  CORBA_string DynamicAny_FieldName; 
#line 14392 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_FieldName_struct; 
#line 14400 "orbit-policy.mc"
typedef struct DynamicAny_NameValuePair_type DynamicAny_NameValuePair; 
#line 14404 "orbit-policy.mc"
struct DynamicAny_NameValuePair_type { DynamicAny_FieldName id;  CORBA_any value; }; 
#line 14407 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_NameValuePair_struct; 
#line 14408 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  DynamicAny_NameValuePair *_buffer;  CORBA_boolean _release; }CORBA_sequence_DynamicAny_NameValuePair; 
#line 14411 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_DynamicAny_NameValuePair_struct; 
#line 14412 "orbit-policy.mc"
typedef  CORBA_sequence_DynamicAny_NameValuePair DynamicAny_NameValuePairSeq; 
#line 14415 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_NameValuePairSeq_struct; 
#line 14416 "orbit-policy.mc"
typedef struct DynamicAny_NameDynAnyPair_type DynamicAny_NameDynAnyPair; 
#line 14420 "orbit-policy.mc"
struct DynamicAny_NameDynAnyPair_type { DynamicAny_FieldName id;  DynamicAny_DynAny value; }; 
#line 14423 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_NameDynAnyPair_struct; 
#line 14424 "orbit-policy.mc"
typedef struct { CORBA_unsigned_long _maximum,_length;  DynamicAny_NameDynAnyPair *_buffer;  CORBA_boolean _release; }CORBA_sequence_DynamicAny_NameDynAnyPair; 
#line 14427 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_DynamicAny_NameDynAnyPair_struct; 
#line 14428 "orbit-policy.mc"
typedef  CORBA_sequence_DynamicAny_NameDynAnyPair DynamicAny_NameDynAnyPairSeq; 
#line 14431 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_NameDynAnyPairSeq_struct; 
#line 14432 "orbit-policy.mc"
typedef struct DynamicAny_DynStruct_type *DynamicAny_DynStruct; 
#line 14440 "orbit-policy.mc"
typedef struct DynamicAny_DynUnion_type *DynamicAny_DynUnion; 
#line 14441 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_any DynamicAny_AnySeq; 
#line 14444 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_AnySeq_struct; 
#line 14445 "orbit-policy.mc"
typedef  CORBA_sequence_CORBA_Object CORBA_sequence_DynamicAny_DynAny; 
#line 14448 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_CORBA_sequence_DynamicAny_DynAny_struct; 
#line 14449 "orbit-policy.mc"
typedef  CORBA_sequence_DynamicAny_DynAny DynamicAny_DynAnySeq; 
#line 14452 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_DynAnySeq_struct; 
#line 14453 "orbit-policy.mc"
typedef struct DynamicAny_DynSequence_type *DynamicAny_DynSequence; 
#line 14461 "orbit-policy.mc"
typedef struct DynamicAny_DynArray_type *DynamicAny_DynArray; 
#line 14469 "orbit-policy.mc"
typedef struct DynamicAny_DynValueCommon_type *DynamicAny_DynValueCommon; 
#line 14477 "orbit-policy.mc"
typedef struct DynamicAny_DynValue_type *DynamicAny_DynValue; 
#line 14485 "orbit-policy.mc"
typedef struct DynamicAny_DynValueBox_type *DynamicAny_DynValueBox; 
#line 14486 "orbit-policy.mc"
typedef struct DynamicAny_MustTruncate_type DynamicAny_MustTruncate; 
#line 14489 "orbit-policy.mc"
struct DynamicAny_MustTruncate_type {int dummy; }; 
#line 14492 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_MustTruncate_struct; 
#line 14493 "orbit-policy.mc"
typedef struct DynamicAny_DynAnyFactory_type *DynamicAny_DynAnyFactory; 
#line 14494 "orbit-policy.mc"
typedef struct DynamicAny_DynAnyFactory_InconsistentTypeCode_type DynamicAny_DynAnyFactory_InconsistentTypeCode; 
#line 14497 "orbit-policy.mc"
struct DynamicAny_DynAnyFactory_InconsistentTypeCode_type {int dummy; }; 
#line 14500 "orbit-policy.mc"
extern const struct CORBA_TypeCode_struct TC_DynamicAny_DynAnyFactory_InconsistentTypeCode_struct; 
#line 14508 "orbit-policy.mc"
 CORBA_TypeCode DynamicAny_DynAny_type( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14509 "orbit-policy.mc"
void DynamicAny_DynAny_assign( DynamicAny_DynAny _obj, const  DynamicAny_DynAny dyn_any,  CORBA_Environment *ev); 
#line 14510 "orbit-policy.mc"
void DynamicAny_DynAny_from_any( DynamicAny_DynAny _obj, const  CORBA_any *value,  CORBA_Environment *ev); 
#line 14511 "orbit-policy.mc"
 CORBA_any *DynamicAny_DynAny_to_any( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14512 "orbit-policy.mc"
 CORBA_boolean DynamicAny_DynAny_equal( DynamicAny_DynAny _obj, const  DynamicAny_DynAny dyn_any,  CORBA_Environment *ev); 
#line 14513 "orbit-policy.mc"
void DynamicAny_DynAny_destroy( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14514 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynAny_copy( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14515 "orbit-policy.mc"
void DynamicAny_DynAny_insert_boolean( DynamicAny_DynAny _obj, const  CORBA_boolean value,  CORBA_Environment *ev); 
#line 14516 "orbit-policy.mc"
void DynamicAny_DynAny_insert_octet( DynamicAny_DynAny _obj, const  CORBA_octet value,  CORBA_Environment *ev); 
#line 14517 "orbit-policy.mc"
void DynamicAny_DynAny_insert_char( DynamicAny_DynAny _obj, const  CORBA_char value,  CORBA_Environment *ev); 
#line 14518 "orbit-policy.mc"
void DynamicAny_DynAny_insert_short( DynamicAny_DynAny _obj, const  CORBA_short value,  CORBA_Environment *ev); 
#line 14519 "orbit-policy.mc"
void DynamicAny_DynAny_insert_ushort( DynamicAny_DynAny _obj, const  CORBA_unsigned_short value,  CORBA_Environment *ev); 
#line 14520 "orbit-policy.mc"
void DynamicAny_DynAny_insert_long( DynamicAny_DynAny _obj, const  CORBA_long value,  CORBA_Environment *ev); 
#line 14521 "orbit-policy.mc"
void DynamicAny_DynAny_insert_ulong( DynamicAny_DynAny _obj, const  CORBA_unsigned_long value,  CORBA_Environment *ev); 
#line 14522 "orbit-policy.mc"
void DynamicAny_DynAny_insert_float( DynamicAny_DynAny _obj, const  CORBA_float value,  CORBA_Environment *ev); 
#line 14523 "orbit-policy.mc"
void DynamicAny_DynAny_insert_double( DynamicAny_DynAny _obj, const  CORBA_double value,  CORBA_Environment *ev); 
#line 14524 "orbit-policy.mc"
void DynamicAny_DynAny_insert_string( DynamicAny_DynAny _obj, const  CORBA_char *value,  CORBA_Environment *ev); 
#line 14525 "orbit-policy.mc"
void DynamicAny_DynAny_insert_reference( DynamicAny_DynAny _obj, const  CORBA_Object value,  CORBA_Environment *ev); 
#line 14526 "orbit-policy.mc"
void DynamicAny_DynAny_insert_typecode( DynamicAny_DynAny _obj, const  CORBA_TypeCode value,  CORBA_Environment *ev); 
#line 14527 "orbit-policy.mc"
void DynamicAny_DynAny_insert_longlong( DynamicAny_DynAny _obj, const  CORBA_long_long value,  CORBA_Environment *ev); 
#line 14528 "orbit-policy.mc"
void DynamicAny_DynAny_insert_ulonglong( DynamicAny_DynAny _obj, const  CORBA_unsigned_long_long value,  CORBA_Environment *ev); 
#line 14529 "orbit-policy.mc"
void DynamicAny_DynAny_insert_longdouble( DynamicAny_DynAny _obj, const  CORBA_long_double value,  CORBA_Environment *ev); 
#line 14530 "orbit-policy.mc"
void DynamicAny_DynAny_insert_wchar( DynamicAny_DynAny _obj, const  CORBA_wchar value,  CORBA_Environment *ev); 
#line 14531 "orbit-policy.mc"
void DynamicAny_DynAny_insert_wstring( DynamicAny_DynAny _obj, const  CORBA_wstring value,  CORBA_Environment *ev); 
#line 14532 "orbit-policy.mc"
void DynamicAny_DynAny_insert_any( DynamicAny_DynAny _obj, const  CORBA_any *value,  CORBA_Environment *ev); 
#line 14533 "orbit-policy.mc"
void DynamicAny_DynAny_insert_dyn_any( DynamicAny_DynAny _obj, const  DynamicAny_DynAny value,  CORBA_Environment *ev); 
#line 14534 "orbit-policy.mc"
 CORBA_boolean DynamicAny_DynAny_get_boolean( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14535 "orbit-policy.mc"
 CORBA_octet DynamicAny_DynAny_get_octet( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14536 "orbit-policy.mc"
 CORBA_char DynamicAny_DynAny_get_char( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14537 "orbit-policy.mc"
 CORBA_short DynamicAny_DynAny_get_short( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14538 "orbit-policy.mc"
 CORBA_unsigned_short DynamicAny_DynAny_get_ushort( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14539 "orbit-policy.mc"
 CORBA_long DynamicAny_DynAny_get_long( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14540 "orbit-policy.mc"
 CORBA_unsigned_long DynamicAny_DynAny_get_ulong( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14541 "orbit-policy.mc"
 CORBA_float DynamicAny_DynAny_get_float( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14542 "orbit-policy.mc"
 CORBA_double DynamicAny_DynAny_get_double( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14543 "orbit-policy.mc"
 CORBA_string DynamicAny_DynAny_get_string( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14544 "orbit-policy.mc"
 CORBA_Object DynamicAny_DynAny_get_reference( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14545 "orbit-policy.mc"
 CORBA_TypeCode DynamicAny_DynAny_get_typecode( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14546 "orbit-policy.mc"
 CORBA_long_long DynamicAny_DynAny_get_longlong( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14547 "orbit-policy.mc"
 CORBA_unsigned_long_long DynamicAny_DynAny_get_ulonglong( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14548 "orbit-policy.mc"
 CORBA_long_double DynamicAny_DynAny_get_longdouble( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14549 "orbit-policy.mc"
 CORBA_wchar DynamicAny_DynAny_get_wchar( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14550 "orbit-policy.mc"
 CORBA_wstring DynamicAny_DynAny_get_wstring( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14551 "orbit-policy.mc"
 CORBA_any *DynamicAny_DynAny_get_any( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14552 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynAny_get_dyn_any( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14553 "orbit-policy.mc"
 CORBA_boolean DynamicAny_DynAny_seek( DynamicAny_DynAny _obj, const  CORBA_long index,  CORBA_Environment *ev); 
#line 14554 "orbit-policy.mc"
void DynamicAny_DynAny_rewind( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14555 "orbit-policy.mc"
 CORBA_boolean DynamicAny_DynAny_next( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14556 "orbit-policy.mc"
 CORBA_unsigned_long DynamicAny_DynAny_component_count( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14557 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynAny_current_component( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14558 "orbit-policy.mc"
void DynamicAny_DynAny_insert_abstract( DynamicAny_DynAny _obj, const  CORBA_AbstractBase value,  CORBA_Environment *ev); 
#line 14559 "orbit-policy.mc"
 CORBA_AbstractBase DynamicAny_DynAny_get_abstract( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14560 "orbit-policy.mc"
void DynamicAny_DynAny_insert_boolean_seq( DynamicAny_DynAny _obj, const  CORBA_BooleanSeq *value,  CORBA_Environment *ev); 
#line 14561 "orbit-policy.mc"
void DynamicAny_DynAny_insert_octet_seq( DynamicAny_DynAny _obj, const  CORBA_OctetSeq *value,  CORBA_Environment *ev); 
#line 14562 "orbit-policy.mc"
void DynamicAny_DynAny_insert_char_seq( DynamicAny_DynAny _obj, const  CORBA_CharSeq *value,  CORBA_Environment *ev); 
#line 14563 "orbit-policy.mc"
void DynamicAny_DynAny_insert_short_seq( DynamicAny_DynAny _obj, const  CORBA_ShortSeq *value,  CORBA_Environment *ev); 
#line 14564 "orbit-policy.mc"
void DynamicAny_DynAny_insert_ushort_seq( DynamicAny_DynAny _obj, const  CORBA_UShortSeq *value,  CORBA_Environment *ev); 
#line 14565 "orbit-policy.mc"
void DynamicAny_DynAny_insert_long_seq( DynamicAny_DynAny _obj, const  CORBA_LongSeq *value,  CORBA_Environment *ev); 
#line 14566 "orbit-policy.mc"
void DynamicAny_DynAny_insert_ulong_seq( DynamicAny_DynAny _obj, const  CORBA_ULongSeq *value,  CORBA_Environment *ev); 
#line 14567 "orbit-policy.mc"
void DynamicAny_DynAny_insert_float_seq( DynamicAny_DynAny _obj, const  CORBA_FloatSeq *value,  CORBA_Environment *ev); 
#line 14568 "orbit-policy.mc"
void DynamicAny_DynAny_insert_double_seq( DynamicAny_DynAny _obj, const  CORBA_DoubleSeq *value,  CORBA_Environment *ev); 
#line 14569 "orbit-policy.mc"
void DynamicAny_DynAny_insert_longlong_seq( DynamicAny_DynAny _obj, const  CORBA_LongLongSeq *value,  CORBA_Environment *ev); 
#line 14570 "orbit-policy.mc"
void DynamicAny_DynAny_insert_ulonglong_seq( DynamicAny_DynAny _obj, const  CORBA_ULongLongSeq *value,  CORBA_Environment *ev); 
#line 14571 "orbit-policy.mc"
void DynamicAny_DynAny_insert_longdouble_seq( DynamicAny_DynAny _obj, const  CORBA_LongDoubleSeq *value,  CORBA_Environment *ev); 
#line 14572 "orbit-policy.mc"
void DynamicAny_DynAny_insert_wchar_seq( DynamicAny_DynAny _obj, const  CORBA_WCharSeq *value,  CORBA_Environment *ev); 
#line 14573 "orbit-policy.mc"
 CORBA_BooleanSeq *DynamicAny_DynAny_get_boolean_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14574 "orbit-policy.mc"
 CORBA_OctetSeq *DynamicAny_DynAny_get_octet_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14575 "orbit-policy.mc"
 CORBA_CharSeq *DynamicAny_DynAny_get_char_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14576 "orbit-policy.mc"
 CORBA_ShortSeq *DynamicAny_DynAny_get_short_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14577 "orbit-policy.mc"
 CORBA_UShortSeq *DynamicAny_DynAny_get_ushort_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14578 "orbit-policy.mc"
 CORBA_LongSeq *DynamicAny_DynAny_get_long_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14579 "orbit-policy.mc"
 CORBA_ULongSeq *DynamicAny_DynAny_get_ulong_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14580 "orbit-policy.mc"
 CORBA_FloatSeq *DynamicAny_DynAny_get_float_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14581 "orbit-policy.mc"
 CORBA_DoubleSeq *DynamicAny_DynAny_get_double_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14582 "orbit-policy.mc"
 CORBA_LongLongSeq *DynamicAny_DynAny_get_longlong_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14583 "orbit-policy.mc"
 CORBA_ULongLongSeq *DynamicAny_DynAny_get_ulonglong_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14584 "orbit-policy.mc"
 CORBA_LongDoubleSeq *DynamicAny_DynAny_get_longdouble_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14585 "orbit-policy.mc"
 CORBA_WCharSeq *DynamicAny_DynAny_get_wchar_seq( DynamicAny_DynAny _obj,  CORBA_Environment *ev); 
#line 14586 "orbit-policy.mc"
 CORBA_string DynamicAny_DynFixed_get_value( DynamicAny_DynFixed _obj,  CORBA_Environment *ev); 
#line 14587 "orbit-policy.mc"
 CORBA_boolean DynamicAny_DynFixed_set_value( DynamicAny_DynFixed _obj, const  CORBA_char *val,  CORBA_Environment *ev); 
#line 14588 "orbit-policy.mc"
 CORBA_string DynamicAny_DynEnum_get_as_string( DynamicAny_DynEnum _obj,  CORBA_Environment *ev); 
#line 14589 "orbit-policy.mc"
void DynamicAny_DynEnum_set_as_string( DynamicAny_DynEnum _obj, const  CORBA_char *value,  CORBA_Environment *ev); 
#line 14590 "orbit-policy.mc"
 CORBA_unsigned_long DynamicAny_DynEnum_get_as_ulong( DynamicAny_DynEnum _obj,  CORBA_Environment *ev); 
#line 14591 "orbit-policy.mc"
void DynamicAny_DynEnum_set_as_ulong( DynamicAny_DynEnum _obj, const  CORBA_unsigned_long value,  CORBA_Environment *ev); 
#line 14592 "orbit-policy.mc"
 DynamicAny_FieldName DynamicAny_DynStruct_current_member_name( DynamicAny_DynStruct _obj,  CORBA_Environment *ev); 
#line 14593 "orbit-policy.mc"
 CORBA_TCKind DynamicAny_DynStruct_current_member_kind( DynamicAny_DynStruct _obj,  CORBA_Environment *ev); 
#line 14594 "orbit-policy.mc"
 DynamicAny_NameValuePairSeq *DynamicAny_DynStruct_get_members( DynamicAny_DynStruct _obj,  CORBA_Environment *ev); 
#line 14595 "orbit-policy.mc"
void DynamicAny_DynStruct_set_members( DynamicAny_DynStruct _obj, const  DynamicAny_NameValuePairSeq *value,  CORBA_Environment *ev); 
#line 14596 "orbit-policy.mc"
 DynamicAny_NameDynAnyPairSeq *DynamicAny_DynStruct_get_members_as_dyn_any( DynamicAny_DynStruct _obj,  CORBA_Environment *ev); 
#line 14597 "orbit-policy.mc"
void DynamicAny_DynStruct_set_members_as_dyn_any( DynamicAny_DynStruct _obj, const  DynamicAny_NameDynAnyPairSeq *value,  CORBA_Environment *ev); 
#line 14598 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynUnion_get_discriminator( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14599 "orbit-policy.mc"
void DynamicAny_DynUnion_set_discriminator( DynamicAny_DynUnion _obj, const  DynamicAny_DynAny d,  CORBA_Environment *ev); 
#line 14600 "orbit-policy.mc"
void DynamicAny_DynUnion_set_to_default_member( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14601 "orbit-policy.mc"
void DynamicAny_DynUnion_set_to_no_active_member( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14602 "orbit-policy.mc"
 CORBA_boolean DynamicAny_DynUnion_has_no_active_member( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14603 "orbit-policy.mc"
 CORBA_TCKind DynamicAny_DynUnion_discriminator_kind( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14604 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynUnion_member( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14605 "orbit-policy.mc"
 DynamicAny_FieldName DynamicAny_DynUnion_member_name( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14606 "orbit-policy.mc"
 CORBA_TCKind DynamicAny_DynUnion_member_kind( DynamicAny_DynUnion _obj,  CORBA_Environment *ev); 
#line 14607 "orbit-policy.mc"
 CORBA_unsigned_long DynamicAny_DynSequence_get_length( DynamicAny_DynSequence _obj,  CORBA_Environment *ev); 
#line 14608 "orbit-policy.mc"
void DynamicAny_DynSequence_set_length( DynamicAny_DynSequence _obj, const  CORBA_unsigned_long len,  CORBA_Environment *ev); 
#line 14609 "orbit-policy.mc"
 DynamicAny_AnySeq *DynamicAny_DynSequence_get_elements( DynamicAny_DynSequence _obj,  CORBA_Environment *ev); 
#line 14610 "orbit-policy.mc"
void DynamicAny_DynSequence_set_elements( DynamicAny_DynSequence _obj, const  DynamicAny_AnySeq *value,  CORBA_Environment *ev); 
#line 14611 "orbit-policy.mc"
 DynamicAny_DynAnySeq *DynamicAny_DynSequence_get_elements_as_dyn_any( DynamicAny_DynSequence _obj,  CORBA_Environment *ev); 
#line 14612 "orbit-policy.mc"
void DynamicAny_DynSequence_set_elements_as_dyn_any( DynamicAny_DynSequence _obj, const  DynamicAny_DynAnySeq *value,  CORBA_Environment *ev); 
#line 14613 "orbit-policy.mc"
 DynamicAny_AnySeq *DynamicAny_DynArray_get_elements( DynamicAny_DynArray _obj,  CORBA_Environment *ev); 
#line 14614 "orbit-policy.mc"
void DynamicAny_DynArray_set_elements( DynamicAny_DynArray _obj, const  DynamicAny_AnySeq *value,  CORBA_Environment *ev); 
#line 14615 "orbit-policy.mc"
 DynamicAny_DynAnySeq *DynamicAny_DynArray_get_elements_as_dyn_any( DynamicAny_DynArray _obj,  CORBA_Environment *ev); 
#line 14616 "orbit-policy.mc"
void DynamicAny_DynArray_set_elements_as_dyn_any( DynamicAny_DynArray _obj, const  DynamicAny_DynAnySeq *value,  CORBA_Environment *ev); 
#line 14617 "orbit-policy.mc"
 CORBA_boolean DynamicAny_DynValueCommon_is_null( DynamicAny_DynValueCommon _obj,  CORBA_Environment *ev); 
#line 14618 "orbit-policy.mc"
void DynamicAny_DynValueCommon_set_to_null( DynamicAny_DynValueCommon _obj,  CORBA_Environment *ev); 
#line 14619 "orbit-policy.mc"
void DynamicAny_DynValueCommon_set_to_value( DynamicAny_DynValueCommon _obj,  CORBA_Environment *ev); 
#line 14620 "orbit-policy.mc"
 DynamicAny_FieldName DynamicAny_DynValue_current_member_name( DynamicAny_DynValue _obj,  CORBA_Environment *ev); 
#line 14621 "orbit-policy.mc"
 CORBA_TCKind DynamicAny_DynValue_current_member_kind( DynamicAny_DynValue _obj,  CORBA_Environment *ev); 
#line 14622 "orbit-policy.mc"
 DynamicAny_NameValuePairSeq *DynamicAny_DynValue_get_members( DynamicAny_DynValue _obj,  CORBA_Environment *ev); 
#line 14623 "orbit-policy.mc"
void DynamicAny_DynValue_set_members( DynamicAny_DynValue _obj, const  DynamicAny_NameValuePairSeq *value,  CORBA_Environment *ev); 
#line 14624 "orbit-policy.mc"
 DynamicAny_NameDynAnyPairSeq *DynamicAny_DynValue_get_members_as_dyn_any( DynamicAny_DynValue _obj,  CORBA_Environment *ev); 
#line 14625 "orbit-policy.mc"
void DynamicAny_DynValue_set_members_as_dyn_any( DynamicAny_DynValue _obj, const  DynamicAny_NameDynAnyPairSeq *value,  CORBA_Environment *ev); 
#line 14626 "orbit-policy.mc"
 CORBA_any *DynamicAny_DynValueBox_get_boxed_value( DynamicAny_DynValueBox _obj,  CORBA_Environment *ev); 
#line 14627 "orbit-policy.mc"
void DynamicAny_DynValueBox_set_boxed_value( DynamicAny_DynValueBox _obj, const  CORBA_any *boxed,  CORBA_Environment *ev); 
#line 14628 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynValueBox_get_boxed_value_as_dyn_any( DynamicAny_DynValueBox _obj,  CORBA_Environment *ev); 
#line 14629 "orbit-policy.mc"
void DynamicAny_DynValueBox_set_boxed_value_as_dyn_any( DynamicAny_DynValueBox _obj, const  DynamicAny_DynAny boxed,  CORBA_Environment *ev); 
#line 14630 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynAnyFactory_create_dyn_any( DynamicAny_DynAnyFactory _obj, const  CORBA_any *value,  CORBA_Environment *ev); 
#line 14631 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynAnyFactory_create_dyn_any_from_type_code( DynamicAny_DynAnyFactory _obj, const  CORBA_TypeCode type,  CORBA_Environment *ev); 
#line 14632 "orbit-policy.mc"
 DynamicAny_DynAny DynamicAny_DynAnyFactory_create_dyn_any_without_truncation( DynamicAny_DynAnyFactory _obj, const  CORBA_any *value,  CORBA_Environment *ev); 
#line 14633 "orbit-policy.mc"
 DynamicAny_DynAnySeq *DynamicAny_DynAnyFactory_create_multiple_dyn_anys( DynamicAny_DynAnyFactory _obj, const  DynamicAny_AnySeq *values, const  CORBA_boolean allow_truncate,  CORBA_Environment *ev); 
#line 14634 "orbit-policy.mc"
 DynamicAny_AnySeq *DynamicAny_DynAnyFactory_create_multiple_anys( DynamicAny_DynAnyFactory _obj, const  DynamicAny_DynAnySeq *values,  CORBA_Environment *ev); 
#line 14640 "orbit-policy.mc"
 gpointer ORBit_dynany_new_default(const  CORBA_TypeCode tc); 
#line 14648 "orbit-policy.mc"
extern const char *orbit_version; 
#line 14649 "orbit-policy.mc"
extern unsigned int orbit_major_version; 
#line 14650 "orbit-policy.mc"
extern unsigned int orbit_minor_version; 
#line 14651 "orbit-policy.mc"
extern unsigned int orbit_micro_version; 
#line 14661 "orbit-policy.mc"
struct _ORBitPolicy {struct ORBit_RootObject_struct parent;  GPtrArray *allowed_poas; }; 
#line 14663 "orbit-policy.mc"
 gboolean ORBit_policy_validate( ORBitPolicy *policy); 
#line 14681 "orbit-policy.mc"
typedef enum {ORBIT_DEBUG_NONE=0,ORBIT_DEBUG_TRACES=1 << 0,ORBIT_DEBUG_INPROC_TRACES=1 << 1,ORBIT_DEBUG_TIMINGS=1 << 2,ORBIT_DEBUG_TYPES=1 << 3,ORBIT_DEBUG_MESSAGES=1 << 4,ORBIT_DEBUG_ERRORS=1 << 5,ORBIT_DEBUG_OBJECTS=1 << 6,ORBIT_DEBUG_GIOP=1 << 7,ORBIT_DEBUG_REFS=1 << 8,ORBIT_DEBUG_FORCE_THREADED=1 << 9}OrbitDebugFlags; 
#line 14685 "orbit-policy.mc"
 GType ORBit_policy_ex_get_type(void )  {

#line 14686 "orbit-policy.mc"
return 0; }
 
#line 14691 "orbit-policy.mc"
static void ORBit_policy_free_fn( ORBit_RootObject obj)  {

#line 14692 "orbit-policy.mc"

#line 14692 "orbit-policy.mc"
 ORBitPolicy *p = (( ORBitPolicy *)obj);
#line 14693 "orbit-policy.mc"
g_ptr_array_free((p->allowed_poas), ((!(0)))); 
#line 14694 "orbit-policy.mc"
g_free(p); }
 
#line 14700 "orbit-policy.mc"
static const  ORBit_RootObject_Interface ORBit_Policy_epv = {ORBIT_ROT_CLIENT_POLICY,ORBit_policy_free_fn}; 
#line 14706 "orbit-policy.mc"
 ORBitPolicy *ORBit_policy_new( GType type, const char *first_prop, ...)  {

#line 14707 "orbit-policy.mc"

#line 14707 "orbit-policy.mc"
 va_list args;
#line 14708 "orbit-policy.mc"

#line 14708 "orbit-policy.mc"
const char *name;
#line 14709 "orbit-policy.mc"

#line 14709 "orbit-policy.mc"
 ORBitPolicy *policy = ((( ORBitPolicy *)g_malloc0(((( gsize )sizeof ( ORBitPolicy ))) * ((( gsize )(1))))));
#line 14710 "orbit-policy.mc"
ORBit_RootObject_init((&(policy->parent)), (&ORBit_Policy_epv)); 
#line 14712 "orbit-policy.mc"
(policy->allowed_poas) = g_ptr_array_sized_new(1); 
#line 14714 "orbit-policy.mc"
__builtin_va_start(args, first_prop); 
#line 14715 "orbit-policy.mc"
for(name = first_prop;name;name = __builtin_va_arg (args, char *)) { { 
#line 14720 "orbit-policy.mc"
if ((!__extension__ ({ 
#line 14716 "orbit-policy.mc"

#line 14716 "orbit-policy.mc"
 size_t __s1_len,__s2_len;
#line 14716 "orbit-policy.mc"
((__builtin_constant_p(name) && __builtin_constant_p("allow") && (__s1_len = strlen(name) , __s2_len = strlen("allow") , ((!((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1)) || __s1_len >= 4) && ((!((( size_t )((const void *)(("allow") + 1))) - (( size_t )((const void *)("allow"))) == 1)) || __s2_len >= 4))?__builtin_strcmp(name, "allow"):((__builtin_constant_p(name) && ((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1) && (__s1_len = strlen(name) , __s1_len < 4)?((__builtin_constant_p("allow") && ((( size_t )((const void *)(("allow") + 1))) - (( size_t )((const void *)("allow"))) == 1)?__builtin_strcmp(name, "allow"):(__extension__ ({ 
#line 14716 "orbit-policy.mc"

#line 14716 "orbit-policy.mc"
__const unsigned char *__s2 = ((__const unsigned char *)((__const char *)("allow")));
#line 14716 "orbit-policy.mc"

#line 14716 "orbit-policy.mc"
register int __result = ((((__const unsigned char *)((__const char *)(name))))[0] - __s2[0]);
#line 14716 "orbit-policy.mc"
if (__s1_len > 0 && __result == 0){
{ 
#line 14716 "orbit-policy.mc"
__result = ((((__const unsigned char *)((__const char *)(name))))[1] - __s2[1]); 
#line 14716 "orbit-policy.mc"
if (__s1_len > 1 && __result == 0){
{ 
#line 14716 "orbit-policy.mc"
__result = ((((__const unsigned char *)((__const char *)(name))))[2] - __s2[2]); 
#line 14716 "orbit-policy.mc"
if (__s1_len > 2 && __result == 0){
__result = ((((__const unsigned char *)((__const char *)(name))))[3] - __s2[3]); }} }} }
#line 14716 "orbit-policy.mc"
__result; } )))):((__builtin_constant_p("allow") && ((( size_t )((const void *)(("allow") + 1))) - (( size_t )((const void *)("allow"))) == 1) && (__s2_len = strlen("allow") , __s2_len < 4)?((__builtin_constant_p(name) && ((( size_t )((const void *)((name) + 1))) - (( size_t )((const void *)(name))) == 1)?__builtin_strcmp(name, "allow"):(__extension__ ({ 
#line 14716 "orbit-policy.mc"

#line 14716 "orbit-policy.mc"
__const unsigned char *__s1 = ((__const unsigned char *)((__const char *)(name)));
#line 14716 "orbit-policy.mc"

#line 14716 "orbit-policy.mc"
register int __result = __s1[0] - (((__const unsigned char *)((__const char *)("allow"))))[0];
#line 14716 "orbit-policy.mc"
if (__s2_len > 0 && __result == 0){
{ 
#line 14716 "orbit-policy.mc"
__result = (__s1[1] - (((__const unsigned char *)((__const char *)("allow"))))[1]); 
#line 14716 "orbit-policy.mc"
if (__s2_len > 1 && __result == 0){
{ 
#line 14716 "orbit-policy.mc"
__result = (__s1[2] - (((__const unsigned char *)((__const char *)("allow"))))[2]); 
#line 14716 "orbit-policy.mc"
if (__s2_len > 2 && __result == 0){
__result = (__s1[3] - (((__const unsigned char *)((__const char *)("allow"))))[3]); }} }} }
#line 14716 "orbit-policy.mc"
__result; } )))):__builtin_strcmp(name, "allow"))))))); } ))){
{ 
#line 14717 "orbit-policy.mc"

#line 14717 "orbit-policy.mc"
 gpointer poa = __builtin_va_arg (args, void *);
#line 14718 "orbit-policy.mc"
g_ptr_array_add((policy->allowed_poas), poa); } }} } 
#line 14722 "orbit-policy.mc"
__builtin_va_end(args); 
#line 14724 "orbit-policy.mc"
return ORBit_RootObject_duplicate_T(policy); }
 
#line 14729 "orbit-policy.mc"
 ORBitPolicy *ORBit_policy_ref( ORBitPolicy *p)  {

#line 14730 "orbit-policy.mc"
return ORBit_RootObject_duplicate(p); }
 
#line 14735 "orbit-policy.mc"
void ORBit_policy_unref( ORBitPolicy *p)  {

#line 14736 "orbit-policy.mc"
ORBit_RootObject_release(p); }
 
#line 14742 "orbit-policy.mc"
void ORBit_object_set_policy( CORBA_Object obj,  ORBitPolicy *p)  {

#line 14745 "orbit-policy.mc"
if (obj == (((void *)0))){
return ; }
#line 14745 "orbit-policy.mc"
ORBit_policy_unref((obj->invoke_policy)); 
#line 14746 "orbit-policy.mc"
(obj->invoke_policy) = ORBit_policy_ref(p); }
 
#line 14751 "orbit-policy.mc"
 ORBitPolicy *ORBit_object_get_policy( CORBA_Object obj)  {

#line 14755 "orbit-policy.mc"
if (obj == (((void *)0))){
return (((void *)0)); }else{
return ORBit_policy_ref((obj->invoke_policy)); }}
 
#line 14760 "orbit-policy.mc"
void ORBit_policy_push( ORBitPolicy *p)  {

#line 14761 "orbit-policy.mc"

#line 14761 "orbit-policy.mc"
 GIOPThread *tdata = giop_thread_self();
#line 14763 "orbit-policy.mc"
if ((!(tdata->invoke_policies))){
(tdata->invoke_policies) = g_queue_new(); }
#line 14766 "orbit-policy.mc"
g_queue_push_head((tdata->invoke_policies), ORBit_policy_ref(p)); }
 
#line 14771 "orbit-policy.mc"
void ORBit_policy_pop(void )  {

#line 14772 "orbit-policy.mc"

#line 14772 "orbit-policy.mc"
 GIOPThread *tdata = giop_thread_self();
#line 14774 "orbit-policy.mc"
if ((!(tdata->invoke_policies))){
g_log(((( gchar *)0)), G_LOG_LEVEL_WARNING, "No policy queue to pop from"); }else{
{ 
#line 14777 "orbit-policy.mc"

#line 14777 "orbit-policy.mc"
 ORBitPolicy *p;
#line 14778 "orbit-policy.mc"
p = g_queue_pop_head((tdata->invoke_policies)); 
#line 14779 "orbit-policy.mc"
ORBit_policy_unref(p); } }}
 
#line 14784 "orbit-policy.mc"
 gboolean ORBit_policy_validate( ORBitPolicy *policy)  {

#line 14785 "orbit-policy.mc"
return ((!(0))); }
 
