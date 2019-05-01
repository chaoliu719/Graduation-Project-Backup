
# 1 "../../arch/avr/dev/ide.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "../../arch/avr/dev/ide.c" 
# 59 "../../arch/avr/dev/ide.c" 
# 1 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 1 3 4
# 151 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 213 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h"
typedef unsigned int size_t; 
# 213 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 3 4
# 325 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 3 4
typedef int wchar_t; 
# 60 "../../arch/avr/dev/ide.c" 2
# 1 "/usr/avr/include/string.h" 1 3
# 40 "/usr/avr/include/string.h" 3
# 1 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 1 3 4
# 41 "/usr/avr/include/string.h" 2 3
# 59 "/usr/avr/include/string.h" 3
extern void *memccpy(void *, const void *, int ,  size_t ); 
#line 60 "/usr/avr/include/string.h"
extern void *memchr(const void *, int ,  size_t ) __attribute__  (( __pure__ )) ; 
#line 61 "/usr/avr/include/string.h"
extern int memcmp(const void *, const void *,  size_t ) __attribute__  (( __pure__ )) ; 
#line 62 "/usr/avr/include/string.h"
extern void *memcpy(void *, const void *,  size_t ); 
#line 63 "/usr/avr/include/string.h"
extern void *memmove(void *, const void *,  size_t ); 
#line 64 "/usr/avr/include/string.h"
extern void *memset(void *, int ,  size_t ); 
#line 65 "/usr/avr/include/string.h"
extern char *strcat(char *, const char *); 
#line 66 "/usr/avr/include/string.h"
extern char *strchr(const char *, int ) __attribute__  (( __pure__ )) ; 
#line 67 "/usr/avr/include/string.h"
extern int strcmp(const char *, const char *) __attribute__  (( __pure__ )) ; 
#line 68 "/usr/avr/include/string.h"
extern char *strcpy(char *, const char *); 
#line 69 "/usr/avr/include/string.h"
extern int strcasecmp(const char *, const char *) __attribute__  (( __pure__ )) ; 
#line 70 "/usr/avr/include/string.h"
extern  size_t strlcat(char *, const char *,  size_t ); 
#line 71 "/usr/avr/include/string.h"
extern  size_t strlcpy(char *, const char *,  size_t ); 
#line 72 "/usr/avr/include/string.h"
extern  size_t strlen(const char *) __attribute__  (( __pure__ )) ; 
#line 73 "/usr/avr/include/string.h"
extern char *strlwr(char *); 
#line 74 "/usr/avr/include/string.h"
extern char *strncat(char *, const char *,  size_t ); 
#line 75 "/usr/avr/include/string.h"
extern int strncmp(const char *, const char *,  size_t ); 
#line 76 "/usr/avr/include/string.h"
extern char *strncpy(char *, const char *,  size_t ); 
#line 77 "/usr/avr/include/string.h"
extern int strncasecmp(const char *, const char *,  size_t ) __attribute__  (( __pure__ )) ; 
#line 78 "/usr/avr/include/string.h"
extern  size_t strnlen(const char *,  size_t ) __attribute__  (( __pure__ )) ; 
#line 79 "/usr/avr/include/string.h"
extern char *strrchr(const char *, int ) __attribute__  (( __pure__ )) ; 
#line 80 "/usr/avr/include/string.h"
extern char *strrev(char *); 
#line 81 "/usr/avr/include/string.h"
extern char *strsep(char **, const char *) __attribute__  (( __pure__ )) ; 
#line 82 "/usr/avr/include/string.h"
extern char *strstr(const char *, const char *) __attribute__  (( __pure__ )) ; 
#line 83 "/usr/avr/include/string.h"
extern char *strtok_r(char *, const char *, char **) __attribute__  (( __pure__ )) ; 
#line 84 "/usr/avr/include/string.h"
extern char *strupr(char *); 
# 61 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/sys/timer.h" 1
# 92 "../../include/sys/timer.h" 
# 1 "../../include/sys/types.h" 1
# 144 "../../include/sys/types.h" 
# 1 "../../include/compiler.h" 1
# 70 "../../include/compiler.h" 
# 1 "../../include/arch/avr.h" 1
# 87 "../../include/arch/avr.h" 
# 1 "../../include/arch/avr/gcc.h" 1
# 54 "../../include/arch/avr/gcc.h" 
# 1 "/usr/avr/include/avr/io.h" 1 3
# 81 "/usr/avr/include/avr/io.h" 3
# 1 "/usr/avr/include/avr/sfr_defs.h" 1 3
# 82 "/usr/avr/include/avr/io.h" 2 3
# 163 "/usr/avr/include/avr/io.h" 3
# 1 "/usr/avr/include/avr/iom128.h" 1 3
# 164 "/usr/avr/include/avr/io.h" 2 3
# 55 "../../include/arch/avr/gcc.h" 2
# 1 "/usr/avr/include/avr/interrupt.h" 1 3
# 130 "/usr/avr/include/avr/interrupt.h" 3
extern inline void timer_enable_int(unsigned char ints)  {

#line 132 "/usr/avr/include/avr/interrupt.h"
((*((volatile unsigned char *)((0x37) + 0x20)))) = ints; }
 
# 56 "../../include/arch/avr/gcc.h" 2
# 1 "/usr/avr/include/avr/signal.h" 1 3
# 57 "../../include/arch/avr/gcc.h" 2
# 1 "/usr/avr/include/avr/eeprom.h" 1 3
# 40 "/usr/avr/include/avr/eeprom.h" 3
# 1 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 1 3 4
# 41 "/usr/avr/include/avr/eeprom.h" 2 3
# 1 "/usr/avr/include/inttypes.h" 1 3
# 67 "/usr/avr/include/inttypes.h" 3
typedef signed char int8_t; 
#line 72 "/usr/avr/include/inttypes.h"
typedef unsigned char uint8_t; 
#line 90 "/usr/avr/include/inttypes.h"
typedef int int16_t; 
#line 95 "/usr/avr/include/inttypes.h"
typedef unsigned int uint16_t; 
# 90 "/usr/avr/include/inttypes.h" 3
# 106 "/usr/avr/include/inttypes.h" 3
typedef long int32_t; 
#line 111 "/usr/avr/include/inttypes.h"
typedef unsigned long uint32_t; 
#line 124 "/usr/avr/include/inttypes.h"
typedef long long int64_t; 
#line 129 "/usr/avr/include/inttypes.h"
typedef unsigned long long uint64_t; 
# 124 "/usr/avr/include/inttypes.h" 3
# 141 "/usr/avr/include/inttypes.h" 3
typedef  int16_t intptr_t; 
#line 146 "/usr/avr/include/inttypes.h"
typedef  uint16_t uintptr_t; 
# 42 "/usr/avr/include/avr/eeprom.h" 2 3
# 83 "/usr/avr/include/avr/eeprom.h" 3
extern  uint8_t eeprom_read_byte(const  uint8_t *addr); 
#line 88 "/usr/avr/include/avr/eeprom.h"
extern  uint16_t eeprom_read_word(const  uint16_t *addr); 
#line 94 "/usr/avr/include/avr/eeprom.h"
extern void eeprom_read_block(void *buf, const void *addr,  size_t n); 
#line 99 "/usr/avr/include/avr/eeprom.h"
extern void eeprom_write_byte( uint8_t *addr,  uint8_t val); 
#line 104 "/usr/avr/include/avr/eeprom.h"
extern void eeprom_write_word( uint16_t *addr,  uint16_t val); 
#line 110 "/usr/avr/include/avr/eeprom.h"
extern void eeprom_write_block(const void *buf, void *addr,  size_t n); 
# 58 "../../include/arch/avr/gcc.h" 2
# 1 "/usr/avr/include/avr/pgmspace.h" 1 3
# 68 "/usr/avr/include/avr/pgmspace.h" 3
# 1 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 1 3 4
# 69 "/usr/avr/include/avr/pgmspace.h" 2 3
# 89 "/usr/avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute__  (( __progmem__ )) ; 
#line 90 "/usr/avr/include/avr/pgmspace.h"
typedef char prog_char __attribute__  (( __progmem__ )) ; 
#line 91 "/usr/avr/include/avr/pgmspace.h"
typedef unsigned char prog_uchar __attribute__  (( __progmem__ )) ; 
#line 93 "/usr/avr/include/avr/pgmspace.h"
typedef  int8_t prog_int8_t __attribute__  (( __progmem__ )) ; 
#line 94 "/usr/avr/include/avr/pgmspace.h"
typedef  uint8_t prog_uint8_t __attribute__  (( __progmem__ )) ; 
#line 95 "/usr/avr/include/avr/pgmspace.h"
typedef  int16_t prog_int16_t __attribute__  (( __progmem__ )) ; 
#line 96 "/usr/avr/include/avr/pgmspace.h"
typedef  uint16_t prog_uint16_t __attribute__  (( __progmem__ )) ; 
#line 98 "/usr/avr/include/avr/pgmspace.h"
typedef  int32_t prog_int32_t __attribute__  (( __progmem__ )) ; 
#line 99 "/usr/avr/include/avr/pgmspace.h"
typedef  uint32_t prog_uint32_t __attribute__  (( __progmem__ )) ; 
#line 101 "/usr/avr/include/avr/pgmspace.h"
typedef  int64_t prog_int64_t __attribute__  (( __progmem__ )) ; 
#line 102 "/usr/avr/include/avr/pgmspace.h"
typedef  uint64_t prog_uint64_t __attribute__  (( __progmem__ )) ; 
#line 349 "/usr/avr/include/avr/pgmspace.h"
extern void *memcpy_P(void *, const  prog_void *,  size_t ); 
#line 350 "/usr/avr/include/avr/pgmspace.h"
extern char *strcat_P(char *, const  prog_char *); 
#line 351 "/usr/avr/include/avr/pgmspace.h"
extern int strcmp_P(const char *, const  prog_char *) __attribute__  (( __pure__ )) ; 
#line 352 "/usr/avr/include/avr/pgmspace.h"
extern char *strcpy_P(char *, const  prog_char *); 
#line 353 "/usr/avr/include/avr/pgmspace.h"
extern int strcasecmp_P(const char *, const  prog_char *) __attribute__  (( __pure__ )) ; 
#line 354 "/usr/avr/include/avr/pgmspace.h"
extern  size_t strlcat_P(char *, const  prog_char *,  size_t ); 
#line 355 "/usr/avr/include/avr/pgmspace.h"
extern  size_t strlcpy_P(char *, const  prog_char *,  size_t ); 
#line 356 "/usr/avr/include/avr/pgmspace.h"
extern  size_t strlen_P(const  prog_char *) __attribute__  (( __const__ )) ; 
#line 357 "/usr/avr/include/avr/pgmspace.h"
extern int strncmp_P(const char *, const  prog_char *,  size_t ) __attribute__  (( __pure__ )) ; 
#line 358 "/usr/avr/include/avr/pgmspace.h"
extern int strncasecmp_P(const char *, const  prog_char *,  size_t ) __attribute__  (( __pure__ )) ; 
#line 359 "/usr/avr/include/avr/pgmspace.h"
extern char *strncat_P(char *, const  prog_char *,  size_t ); 
#line 360 "/usr/avr/include/avr/pgmspace.h"
extern char *strncpy_P(char *, const  prog_char *,  size_t ); 
# 349 "/usr/avr/include/avr/pgmspace.h" 3
# 59 "../../include/arch/avr/gcc.h" 2
# 1 "/usr/avr/include/avr/sleep.h" 1 3
# 60 "../../include/arch/avr/gcc.h" 2
# 1 "/usr/avr/include/stdlib.h" 1 3
# 41 "/usr/avr/include/stdlib.h" 3
# 1 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 1 3 4
# 42 "/usr/avr/include/stdlib.h" 2 3
# 63 "/usr/avr/include/stdlib.h" 3
typedef struct {int quot; int rem; }div_t; 
#line 69 "/usr/avr/include/stdlib.h"
typedef struct {long quot; long rem; }ldiv_t; 
#line 72 "/usr/avr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 94 "/usr/avr/include/stdlib.h"
extern __inline__ void abort(void ) __attribute__  (( __noreturn__ )) ; 
#line 101 "/usr/avr/include/stdlib.h"
extern __inline__ void abort(void )  {

#line 102 "/usr/avr/include/stdlib.h"
for(;;) { ; } }
 
#line 108 "/usr/avr/include/stdlib.h"
extern int abs(int __i) __attribute__  (( __const__ )) ; 
# 94 "/usr/avr/include/stdlib.h" 3
# 117 "/usr/avr/include/stdlib.h" 3
extern long labs(long __i) __attribute__  (( __const__ )) ; 
#line 141 "/usr/avr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size, int (*__compar)(const void *, const void *)); 
#line 149 "/usr/avr/include/stdlib.h"
extern  div_t div(int __num, int __denom) __asm__ ("__divmodhi4") __attribute__  (( __const__ )) ; 
#line 155 "/usr/avr/include/stdlib.h"
extern  ldiv_t ldiv(long __num, long __denom) __asm__ ("__divmodsi4") __attribute__  (( __const__ )) ; 
# 140 "/usr/avr/include/stdlib.h" 3
# 173 "/usr/avr/include/stdlib.h" 3
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar); 
#line 205 "/usr/avr/include/stdlib.h"
extern long strtol(const char *__nptr, char **__endptr, int __base); 
# 205 "/usr/avr/include/stdlib.h" 3
# 239 "/usr/avr/include/stdlib.h" 3
extern unsigned long strtoul(const char *__nptr, char **__endptr, int __base); 
#line 249 "/usr/avr/include/stdlib.h"
extern __inline__ long atol(const char *__nptr) __attribute__  (( __pure__ )) ; 
#line 252 "/usr/avr/include/stdlib.h"
extern __inline__ long atol(const char *__nptr)  {

#line 253 "/usr/avr/include/stdlib.h"
return strtol(__nptr, ((char **)0), 10); }
 
# 249 "/usr/avr/include/stdlib.h" 3
# 273 "/usr/avr/include/stdlib.h" 3
extern int atoi(const char *) __attribute__  (( __pure__ )) ; 
#line 285 "/usr/avr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __noreturn__ )) ; 
# 285 "/usr/avr/include/stdlib.h" 3
# 297 "/usr/avr/include/stdlib.h" 3
extern void *malloc( size_t __size) __attribute__  (( __malloc__ )) ; 
#line 304 "/usr/avr/include/stdlib.h"
extern void free(void *__ptr); 
#line 309 "/usr/avr/include/stdlib.h"
extern  size_t __malloc_margin; 
#line 314 "/usr/avr/include/stdlib.h"
extern char *__malloc_heap_start; 
#line 319 "/usr/avr/include/stdlib.h"
extern char *__malloc_heap_end; 
#line 326 "/usr/avr/include/stdlib.h"
extern void *calloc( size_t __nele,  size_t __size) __attribute__  (( __malloc__ )) ; 
#line 358 "/usr/avr/include/stdlib.h"
extern double strtod(const char *__nptr, char **__endptr); 
# 358 "/usr/avr/include/stdlib.h" 3
# 380 "/usr/avr/include/stdlib.h" 3
extern int rand(void ); 
#line 384 "/usr/avr/include/stdlib.h"
extern void srand(unsigned int __seed); 
#line 391 "/usr/avr/include/stdlib.h"
extern int rand_r(unsigned long *ctx); 
#line 414 "/usr/avr/include/stdlib.h"
extern char *itoa(int __val, char *__s, int __radix); 
# 414 "/usr/avr/include/stdlib.h" 3
# 434 "/usr/avr/include/stdlib.h" 3
extern char *ltoa(long int __val, char *__s, int __radix); 
#line 452 "/usr/avr/include/stdlib.h"
extern char *utoa(unsigned int __val, char *__s, int __radix); 
# 452 "/usr/avr/include/stdlib.h" 3
# 470 "/usr/avr/include/stdlib.h" 3
extern char *ultoa(unsigned long int __val, char *__s, int __radix); 
#line 488 "/usr/avr/include/stdlib.h"
extern long random(void ); 
#line 493 "/usr/avr/include/stdlib.h"
extern void srandom(unsigned long __seed); 
#line 501 "/usr/avr/include/stdlib.h"
extern long random_r(unsigned long *ctx); 
# 488 "/usr/avr/include/stdlib.h" 3
# 542 "/usr/avr/include/stdlib.h" 3
extern char *dtostre(double __val, char *__s, unsigned char __prec, unsigned char __flags); 
#line 554 "/usr/avr/include/stdlib.h"
extern char *dtostrf(double __val, char __width, char __prec, char *__s); 
# 554 "/usr/avr/include/stdlib.h" 3
# 61 "../../include/arch/avr/gcc.h" 2
# 1 "/usr/avr/include/avr/twi.h" 1 3
# 69 "../../include/arch/avr/gcc.h" 2
# 88 "../../include/arch/avr.h" 2
# 138 "../../include/arch/avr.h" 
extern void *__heap_start; 
# 71 "../../include/compiler.h" 2
# 145 "../../include/sys/types.h" 2
# 155 "../../include/sys/types.h" 
typedef unsigned char u_char; 
#line 158 "../../include/sys/types.h"
typedef unsigned short u_short; 
#line 162 "../../include/sys/types.h"
typedef unsigned int u_int; 
#line 165 "../../include/sys/types.h"
typedef unsigned long u_long; 
#line 168 "../../include/sys/types.h"
typedef unsigned long long u_longlong; 
#line 173 "../../include/sys/types.h"
typedef void *HANDLE; 
#line 186 "../../include/sys/types.h"
typedef unsigned char ureg_t; 
# 186 "../../include/sys/types.h" 
# 203 "../../include/sys/types.h" 
typedef unsigned char reg_t; 
#line 221 "../../include/sys/types.h"
typedef unsigned short uptr_t; 
# 221 "../../include/sys/types.h" 
# 244 "../../include/sys/types.h" 
static inline  u_short __byte_swap2( u_short val)  {

#line 247 "../../include/sys/types.h"
 asm volatile ("mov __tmp_reg__, %A0\n\t""mov %A0, %B0\n\t""mov %B0, __tmp_reg__\n\t" : "=r"(val) : "0"(val)); 
#line 248 "../../include/sys/types.h"
return val; }
 
#line 254 "../../include/sys/types.h"
static inline  u_long __byte_swap4( u_long val)  {

#line 259 "../../include/sys/types.h"
 asm volatile ("mov __tmp_reg__, %A0\n\t""mov %A0, %D0\n\t""mov %D0, __tmp_reg__\n\t""mov __tmp_reg__, %B0\n\t""mov %B0, %C0\n\t""mov %C0, __tmp_reg__\n\t" : "=r"(val) : "0"(val)); 
#line 260 "../../include/sys/types.h"
return val; }
 
# 93 "../../include/sys/timer.h" 2
# 1 "../../include/arch/timer.h" 1
# 44 "../../include/arch/timer.h" 
# 1 "../../include/arch/avr/timer.h" 1
# 45 "../../include/arch/timer.h" 2
# 61 "../../include/arch/timer.h" 
extern void NutRegisterTimer(void (*handler)(void *)); 
#line 62 "../../include/arch/timer.h"
extern  u_long NutGetCpuClock(void ); 
#line 63 "../../include/arch/timer.h"
extern  u_long NutGetTickClock(void ); 
#line 64 "../../include/arch/timer.h"
extern  u_long NutTimerMillisToTicks( u_long ms); 
#line 65 "../../include/arch/timer.h"
extern void NutDelay( u_char ms); 
# 94 "../../include/sys/timer.h" 2
# 103 "../../include/sys/timer.h" 
typedef struct _NUTTIMERINFO NUTTIMERINFO; 
#line 126 "../../include/sys/timer.h"
struct _NUTTIMERINFO { NUTTIMERINFO *tn_next;  u_long tn_ticks;  u_long tn_ticks_left; void (*tn_callback)( HANDLE , void *); volatile void *tn_arg; }; 
#line 128 "../../include/sys/timer.h"
extern  NUTTIMERINFO *volatile nutTimerList; 
#line 129 "../../include/sys/timer.h"
extern  NUTTIMERINFO *volatile nutTimerPool; 
#line 139 "../../include/sys/timer.h"
extern void NutTimerInit(void ); 
#line 140 "../../include/sys/timer.h"
extern  NUTTIMERINFO *NutTimerCreate( u_long ticks, void (*callback)( HANDLE , void *), void *arg,  u_char flags); 
#line 141 "../../include/sys/timer.h"
extern void NutTimerInsert( NUTTIMERINFO *tn); 
#line 142 "../../include/sys/timer.h"
extern void NutTimerProcessElapsed(void ); 
#line 147 "../../include/sys/timer.h"
extern void NutSleep( u_long ms); 
#line 149 "../../include/sys/timer.h"
extern  u_long NutGetTickCount(void ); 
#line 150 "../../include/sys/timer.h"
extern  u_long NutGetSeconds(void ); 
#line 151 "../../include/sys/timer.h"
extern  u_long NutGetMillis(void ); 
#line 153 "../../include/sys/timer.h"
extern  HANDLE NutTimerStart( u_long ms, void (*callback)( HANDLE , void *), void *arg,  u_char flags); 
#line 154 "../../include/sys/timer.h"
extern  HANDLE NutTimerStartTicks( u_long ticks, void (*callback)( HANDLE , void *), void *arg,  u_char flags); 
#line 155 "../../include/sys/timer.h"
extern void NutTimerStop( HANDLE handle); 
#line 156 "../../include/sys/timer.h"
extern void NutTimerStopAsync( HANDLE handle); 
# 63 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/sys/thread.h" 1
# 121 "../../include/sys/thread.h" 
typedef struct _NUTTHREADINFO NUTTHREADINFO; 
#line 145 "../../include/sys/thread.h"
struct _NUTTHREADINFO { NUTTHREADINFO *volatile td_next;  NUTTHREADINFO *td_qnxt;  u_char td_name[9];  u_char td_state;  uptr_t td_sp;  u_char td_priority;  u_char *td_memory;  HANDLE td_timer;  HANDLE td_queue; }; 
#line 160 "../../include/sys/thread.h"
extern  NUTTHREADINFO *runningThread; 
#line 161 "../../include/sys/thread.h"
extern  NUTTHREADINFO *nutThreadList; 
#line 162 "../../include/sys/thread.h"
extern  NUTTHREADINFO *volatile readyQueue; 
#line 163 "../../include/sys/thread.h"
extern  NUTTHREADINFO *runQueue; 
#line 171 "../../include/sys/thread.h"
extern void NutThreadSetSleepMode( u_char mode); 
#line 174 "../../include/sys/thread.h"
extern  HANDLE NutThreadCreate( u_char *name, void (*fn)(void *), void *arg,  size_t stackSize); 
#line 175 "../../include/sys/thread.h"
extern  u_char NutThreadSetPriority( u_char level); 
#line 177 "../../include/sys/thread.h"
extern void NutThreadKill(void ); 
#line 178 "../../include/sys/thread.h"
extern void NutThreadDestroy(void ); 
#line 179 "../../include/sys/thread.h"
extern void NutThreadExit(void ); 
#line 181 "../../include/sys/thread.h"
extern void NutThreadResume(void ); 
#line 182 "../../include/sys/thread.h"
extern void NutThreadWake( HANDLE timer,  HANDLE th); 
#line 183 "../../include/sys/thread.h"
extern void NutThreadYield(void ); 
#line 185 "../../include/sys/thread.h"
extern void NutThreadAddPriQueue( NUTTHREADINFO *td,  NUTTHREADINFO **tqpp); 
#line 186 "../../include/sys/thread.h"
extern void NutThreadRemoveQueue( NUTTHREADINFO *td,  NUTTHREADINFO *volatile *tqpp); 
#line 188 "../../include/sys/thread.h"
extern void NutThreadSwitch(void ); 
#line 189 "../../include/sys/thread.h"
extern  HANDLE GetThreadByName( u_char *name); 
# 160 "../../include/sys/thread.h" 
# 198 "../../include/sys/thread.h" 
extern void DumpThreads( HANDLE handle); 
#line 200 "../../include/sys/thread.h"
extern void *NutStackAlloc( size_t size); 
#line 201 "../../include/sys/thread.h"
extern int NutStackFree(void *block); 
#line 202 "../../include/sys/thread.h"
extern void NutStackAdd(void *addr,  size_t size); 
# 64 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/sys/event.h" 1
# 95 "../../include/sys/event.h" 
extern void NutEventTimeout( HANDLE timer, void *arg); 
#line 96 "../../include/sys/event.h"
extern int NutEventWait(volatile  HANDLE *qhp,  u_long ms); 
#line 97 "../../include/sys/event.h"
extern int NutEventWaitNext(volatile  HANDLE *qhp,  u_long ms); 
#line 98 "../../include/sys/event.h"
extern int NutEventPostAsync( HANDLE volatile *qhp); 
#line 99 "../../include/sys/event.h"
extern int NutEventPostFromIrq( HANDLE volatile *qhp); 
#line 100 "../../include/sys/event.h"
extern int NutEventPost( HANDLE *qhp); 
#line 101 "../../include/sys/event.h"
extern int NutEventBroadcastAsync( HANDLE *qhp); 
#line 102 "../../include/sys/event.h"
extern int NutEventBroadcast( HANDLE *qhp); 
# 65 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/sys/atom.h" 1
# 98 "../../include/sys/atom.h" 
# 1 "../../nutbld-13g-gcc/include/cfg/os.h" 1
# 99 "../../include/sys/atom.h" 2
# 125 "../../include/sys/atom.h" 
# 1 "../../include/arch/avr/atom.h" 1
# 126 "../../include/sys/atom.h" 2
# 66 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/sys/heap.h" 1
# 90 "../../include/sys/heap.h" 
typedef struct _HEAPNODE { size_t hn_size; struct _HEAPNODE *hn_next; }HEAPNODE; 
#line 92 "../../include/sys/heap.h"
extern  HEAPNODE *volatile heapFreeList; 
#line 103 "../../include/sys/heap.h"
extern void *NutHeapAlloc( size_t size); 
#line 104 "../../include/sys/heap.h"
extern void *NutHeapAllocClear( size_t size); 
#line 105 "../../include/sys/heap.h"
extern int NutHeapFree(void *block); 
#line 106 "../../include/sys/heap.h"
extern void NutHeapAdd(void *addr,  size_t size); 
#line 107 "../../include/sys/heap.h"
extern  size_t NutHeapAvailable(void ); 
# 103 "../../include/sys/heap.h" 
# 67 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/dev/irqreg.h" 1
# 94 "../../include/dev/irqreg.h" 
# 1 "../../nutbld-13g-gcc/include/cfg/arch.h" 1
# 95 "../../include/dev/irqreg.h" 2
# 1 "../../include/sys/device.h" 1
# 85 "../../include/sys/device.h" 
# 1 "../../include/sys/file.h" 1
# 52 "../../include/sys/file.h" 
struct _NUTDEVICE ; 
#line 57 "../../include/sys/file.h"
typedef struct _NUTFILE NUTFILE; 
#line 78 "../../include/sys/file.h"
struct _NUTFILE { NUTFILE *nf_next; struct _NUTDEVICE *nf_dev; void *nf_fcb; }; 
# 86 "../../include/sys/device.h" 2
# 127 "../../include/sys/device.h" 
typedef struct _NUTDEVICE NUTDEVICE; 
# 143 "../../include/sys/device.h" 
# 243 "../../include/sys/device.h" 
struct _NUTDEVICE { NUTDEVICE *dev_next;  u_char dev_name[9];  u_char dev_type;  uptr_t dev_base;  u_char dev_irq; void *dev_icb; void *dev_dcb; int (*dev_init)( NUTDEVICE *); int (*dev_ioctl)( NUTDEVICE *, int , void *); int (*dev_read)( NUTFILE *, void *, int ); int (*dev_write)( NUTFILE *, const void *, int ); int (*dev_write_P)( NUTFILE *, const  prog_char *, int );  NUTFILE *(*dev_open)( NUTDEVICE *, const char *, int , int ); int (*dev_close)( NUTFILE *); long (*dev_size)( NUTFILE *); }; 
#line 248 "../../include/sys/device.h"
typedef struct _NUTVIRTUALDEVICE NUTVIRTUALDEVICE; 
#line 263 "../../include/sys/device.h"
struct _NUTVIRTUALDEVICE { NUTVIRTUALDEVICE *vdv_next;  NUTVIRTUALDEVICE *vdv_zero;  u_char vdv_type; int (*vdv_read)(void *, void *, int ); int (*vdv_write)(void *, const void *, int ); int (*vdv_write_P)(void *, const  prog_char *, int ); int (*vdv_ioctl)(void *, int , void *); }; 
#line 268 "../../include/sys/device.h"
typedef struct _IFSTREAM IFSTREAM; 
#line 288 "../../include/sys/device.h"
struct _IFSTREAM {int (*if_input)( NUTDEVICE *); int (*if_output)( NUTDEVICE *); int (*if_flush)( NUTDEVICE *); volatile  u_char if_rx_idx;  u_char if_rd_idx; volatile  u_char if_tx_idx;  u_char if_wr_idx; volatile  u_char if_tx_act;  u_char if_last_eol;  u_char if_rx_buf[256];  u_char if_tx_buf[256]; }; 
#line 293 "../../include/sys/device.h"
extern  NUTDEVICE *nutDeviceList; 
#line 295 "../../include/sys/device.h"
extern int NutRegisterDevice( NUTDEVICE *dev,  uptr_t base,  u_char irq); 
#line 296 "../../include/sys/device.h"
extern  NUTDEVICE *NutDeviceLookup(const char *name); 
# 96 "../../include/dev/irqreg.h" 2
# 1 "../../include/dev/irqstack.h" 1
# 58 "../../include/dev/irqstack.h" 
# 1 "../../include/cfg/dev.h" 1
# 59 "../../include/dev/irqstack.h" 2
# 97 "../../include/dev/irqreg.h" 2
# 136 "../../include/dev/irqreg.h" 
typedef struct {void *ir_arg; void (*ir_handler)(void *); int (*ir_ctl)(int cmd, void *param); }IRQ_HANDLER; 
# 1 "../../include/arch/avr/irqreg.h" 1
# 56 "../../include/arch/avr/irqreg.h" 
extern  IRQ_HANDLER sig_INTERRUPT0; 
#line 57 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INTERRUPT1; 
#line 58 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INTERRUPT2; 
#line 59 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INTERRUPT3; 
#line 60 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INTERRUPT4; 
#line 61 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INTERRUPT5; 
#line 62 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INTERRUPT6; 
#line 63 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INTERRUPT7; 
#line 64 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE2; 
#line 65 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OVERFLOW2; 
#line 66 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INPUT_CAPTURE1; 
#line 67 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE1A; 
#line 68 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE1B; 
#line 69 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OVERFLOW1; 
#line 70 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE0; 
#line 71 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OVERFLOW0; 
#line 72 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_SPI; 
#line 73 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_UART0_TRANS; 
#line 74 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_UART0_DATA; 
#line 75 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_UART0_RECV; 
#line 76 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_ADC; 
#line 77 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_EEPROM_READY; 
#line 78 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_COMPARATOR; 
#line 80 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE1C; 
#line 81 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_INPUT_CAPTURE3; 
#line 82 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE3A; 
#line 83 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE3B; 
#line 84 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OUTPUT_COMPARE3C; 
#line 85 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_OVERFLOW3; 
#line 86 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_UART1_RECV; 
#line 87 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_UART1_DATA; 
#line 88 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_UART1_TRANS; 
#line 89 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_2WIRE_SERIAL; 
#line 90 "../../include/arch/avr/irqreg.h"
extern  IRQ_HANDLER sig_SPM_READY; 
# 140 "../../include/dev/irqreg.h" 2
# 157 "../../include/dev/irqreg.h" 
extern void CallHandler( IRQ_HANDLER *irh); 
#line 162 "../../include/dev/irqreg.h"
extern int NutRegisterIrqHandler( IRQ_HANDLER *irh, void (*handler)(void *), void *arg); 
#line 163 "../../include/dev/irqreg.h"
extern int NutIrqEnable( IRQ_HANDLER *irq); 
#line 164 "../../include/dev/irqreg.h"
extern int NutIrqDisable( IRQ_HANDLER *irq); 
#line 165 "../../include/dev/irqreg.h"
extern int NutIrqSetPriority( IRQ_HANDLER *irq, int level); 
# 68 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/dev/ide.h" 1
# 44 "../../include/dev/ide.h" 
# 1 "../../include/fs/typedefs.h" 1
# 41 "../../include/fs/typedefs.h" 
typedef char CHAR; 
#line 42 "../../include/fs/typedefs.h"
typedef unsigned char BYTE; 
#line 43 "../../include/fs/typedefs.h"
typedef unsigned short WORD; 
#line 44 "../../include/fs/typedefs.h"
typedef long LONG; 
#line 45 "../../include/fs/typedefs.h"
typedef unsigned long ULONG; 
#line 46 "../../include/fs/typedefs.h"
typedef unsigned long DWORD; 
# 45 "../../include/dev/ide.h" 2
# 87 "../../include/dev/ide.h" 
typedef void IDE_MOUNT_FUNC(int nDevice); 
#line 96 "../../include/dev/ide.h"
int IDEInit(int nBaseAddress, int nIDEMode,  IDE_MOUNT_FUNC *pMountFunc,  IDE_MOUNT_FUNC *pUnMountFunc); 
#line 98 "../../include/dev/ide.h"
int IDEMountDevice( BYTE bDevice,  BYTE *pSectorBuffer); 
#line 100 "../../include/dev/ide.h"
int IDEGetSectorSize( BYTE bDevice); 
#line 102 "../../include/dev/ide.h"
int IDEIsCDROMDevice( BYTE bDevice); 
#line 104 "../../include/dev/ide.h"
int IDEIsZIPDevice( BYTE bDevice); 
#line 106 "../../include/dev/ide.h"
int IDEUnMountDevice( BYTE bDevice); 
#line 108 "../../include/dev/ide.h"
 DWORD IDEGetTotalSectors( BYTE bDevice); 
#line 110 "../../include/dev/ide.h"
int IDEReadSectors( BYTE bDevice, void *pData,  DWORD dwStartSector,  WORD wSectorCount); 
# 96 "../../include/dev/ide.h" 
# 120 "../../include/dev/ide.h" 
int IDEATAPISetCDSpeed( BYTE bDevice,  WORD wSpeed); 
# 70 "../../arch/avr/dev/ide.c" 2
# 1 "../../include/dev/idep.h" 1
# 233 "../../include/dev/idep.h" 
typedef struct {unsigned UnUsed0:1; unsigned HardSector_O:1; unsigned SoftSector_O:1; unsigned MFM_O:1; unsigned SlowHead_O:1; unsigned SynchDriveMotor_O:1; unsigned FixedDevice:1; unsigned RemoveableDevice:1; unsigned DiskTransferRate_O:3; unsigned InaccurateSpeed_O:1; unsigned DataStrobeOffset_O:1; unsigned TrackOffsetOption_O:1; unsigned FormatGapRequired_O:1; unsigned ATAPI:1;  WORD Cylinders;  WORD UnUsed1;  WORD Heads;  WORD BytesPerTrack_O;  WORD BytesPerSector_O;  WORD SectorsPerTrack;  WORD VendorSpecific[3]; char SerialNumber[20];  WORD BufferType_O;  WORD BufferSizeSectors_O;  WORD ECCBytes; char FirmwareRevision[8]; char Model[40];  BYTE MaxMultipleSectors;  BYTE UnUsed2;  WORD Can32Bit_O; unsigned CanDMA_O:1; unsigned UnUsed3:9; unsigned CanDisableIORDY:1; unsigned IORDYSupported:1; unsigned AdvancedTransferMode:1; unsigned ATA3StandbyTimer:1; unsigned UnUsed4:2;  WORD UnUsed5;  BYTE UnUsed6;  BYTE PIOTransferSpeed;  BYTE UnUsed7;  BYTE DMATransferSpeed; unsigned Fields_6C_75_Valid:1; unsigned Fields_80_8C_Valid:1; unsigned UnUsed8:14;  WORD Cylinders2;  WORD Heads2;  WORD SectorsPerTrack2;  DWORD Sectors;  BYTE MaxSectorsPerInt; unsigned MaxSectorsPerIntIsValid:1; unsigned UnUsed9:7;  DWORD LBASectors;  WORD UnUsed10;  BYTE SupportedDMAModes;  BYTE ActiveDMAModes;  BYTE PIOModesSupported;  BYTE UnUsed11;  WORD DMACycleTime;  WORD RecommendedDMACycleTime;  WORD PIOCycleTime;  WORD IORDYPIOCycleTime;  WORD Reserved1[2];  WORD Reserved2[4];  WORD QueueDepth;  WORD Reserved3[4];  WORD ATAVersionMajor;  WORD ATAVersionMinor;  WORD CommandSetSupported[2];  WORD CommandSetSupportedExtension;  WORD CommandSetEnabled[2];  WORD CommandSetDefault;  WORD UltraDMAMode;  WORD SecurityStatus[2];  WORD AdvancedPowerManagement;  WORD MasterPasswordRevisionCode;  WORD HardwareResetResult;  WORD AcousticManagementValue;  WORD Reserved4[5];  WORD MaximumUserLBA48[4];  WORD Reserved5[23]; }IDEDEVICEINFO; 
# 71 "../../arch/avr/dev/ide.c" 2
# 140 "../../arch/avr/dev/ide.c" 
# 164 "../../arch/avr/dev/ide.c" 
typedef struct _drive { WORD wFlags;  BYTE bIDEMode;  BYTE bDevice;  DWORD dwTotalSectors;  WORD wSectorSize; }DRIVE,*LPDRIVE; 
#line 173 "../../arch/avr/dev/ide.c"
static  HANDLE hIDEEvent; 
#line 174 "../../arch/avr/dev/ide.c"
static volatile  BYTE *pIDE; 
#line 175 "../../arch/avr/dev/ide.c"
static volatile  BYTE gbIntStatus = 0; 
#line 177 "../../arch/avr/dev/ide.c"
static  DRIVE sDrive[1]; 
#line 179 "../../arch/avr/dev/ide.c"
static  HANDLE hIDESemaphore; 
#line 180 "../../arch/avr/dev/ide.c"
static  HANDLE hCFChangeInt; 
#line 181 "../../arch/avr/dev/ide.c"
static  BYTE gbCFMountStatus = 0; 
#line 183 "../../arch/avr/dev/ide.c"
static  IDE_MOUNT_FUNC *pUserMountFunc = (((void *)0)); 
#line 184 "../../arch/avr/dev/ide.c"
static  IDE_MOUNT_FUNC *pUserUnMountFunc = (((void *)0)); 
#line 190 "../../arch/avr/dev/ide.c"
static  BYTE aATAPICmd[12]; 
# 173 "../../arch/avr/dev/ide.c" 
# 207 "../../arch/avr/dev/ide.c" 
static void Wait400ns(void )  {

#line 212 "../../arch/avr/dev/ide.c"
; 
#line 213 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 214 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 215 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 216 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 217 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 218 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 219 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 220 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 221 "../../arch/avr/dev/ide.c"
; }
 
#line 228 "../../arch/avr/dev/ide.c"
void IDELock(void )  {

#line 229 "../../arch/avr/dev/ide.c"
NutEventWait((&hIDESemaphore), 0); }
 
#line 236 "../../arch/avr/dev/ide.c"
void IDEFree(void )  {

#line 237 "../../arch/avr/dev/ide.c"
NutEventPost((&hIDESemaphore)); }
 
#line 244 "../../arch/avr/dev/ide.c"
void IDESemaInit(void )  {

#line 245 "../../arch/avr/dev/ide.c"
NutEventPost((&hIDESemaphore)); }
 
#line 252 "../../arch/avr/dev/ide.c"
static void HardwareReset( DRIVE *pDrive)  {

#line 294 "../../arch/avr/dev/ide.c"
if ((pDrive->bIDEMode) == 3){
{ 
#line 257 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x12) + 0x20)))) |= 0x20; 
#line 258 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 260 "../../arch/avr/dev/ide.c"
NutSleep(1000); 
#line 265 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x12) + 0x20)))) &= (~0x20); 
#line 266 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 268 "../../arch/avr/dev/ide.c"
NutSleep(1000); } }else{
{ 
#line 273 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x12) + 0x20)))) &= (~0x20); 
#line 274 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 276 "../../arch/avr/dev/ide.c"
NutSleep(1000); 
#line 281 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x12) + 0x20)))) |= 0x20; 
#line 282 "../../arch/avr/dev/ide.c"
 __asm__ __volatile__ ("nop"); 
#line 284 "../../arch/avr/dev/ide.c"
if ((pDrive->bIDEMode) == 2){
{ 
#line 285 "../../arch/avr/dev/ide.c"
NutSleep(1000); } }else{
{ 
#line 292 "../../arch/avr/dev/ide.c"
NutSleep(10000); } }} }}
 
#line 301 "../../arch/avr/dev/ide.c"
static void CFInterrupt(void *p)  {

#line 302 "../../arch/avr/dev/ide.c"
p = p; 
#line 304 "../../arch/avr/dev/ide.c"
NutEventPostFromIrq((&hCFChangeInt)); }
 
#line 311 "../../arch/avr/dev/ide.c"
static void IDEInterrupt(void *p)  {

#line 312 "../../arch/avr/dev/ide.c"
p = p; 
#line 314 "../../arch/avr/dev/ide.c"
gbIntStatus = pIDE[(0x0000 + 7)]; 
#line 316 "../../arch/avr/dev/ide.c"
NutEventPostFromIrq((&hIDEEvent)); }
 
#line 323 "../../arch/avr/dev/ide.c"
static void ClearEvent( HANDLE *pEvent)  {

#line 324 "../../arch/avr/dev/ide.c"
 asm volatile ("in  __tmp_reg__, __SREG__""\n\t""cli""\n\t""push __tmp_reg__""\n\t"); 
#line 324 "../../arch/avr/dev/ide.c"
; 
#line 326 "../../arch/avr/dev/ide.c"
(*pEvent) = 0; 
#line 328 "../../arch/avr/dev/ide.c"
 asm volatile ("pop __tmp_reg__""\n\t""out __SREG__, __tmp_reg__""\n\t"); }
 
#line 337 "../../arch/avr/dev/ide.c"
static int WaitForInterrupt( DWORD dwTimeout)  {

#line 338 "../../arch/avr/dev/ide.c"

#line 338 "../../arch/avr/dev/ide.c"
int nError;
#line 339 "../../arch/avr/dev/ide.c"

#line 339 "../../arch/avr/dev/ide.c"
int nTimeout;
#line 341 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 343 "../../arch/avr/dev/ide.c"
nTimeout = NutEventWait((&hIDEEvent), dwTimeout); 
#line 344 "../../arch/avr/dev/ide.c"
if (nTimeout == (-1)){
{ 
#line 345 "../../arch/avr/dev/ide.c"
nError = 0x01; } }
#line 348 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 358 "../../arch/avr/dev/ide.c"
static int WaitDRQ( DWORD dwTimeout)  {

#line 359 "../../arch/avr/dev/ide.c"

#line 359 "../../arch/avr/dev/ide.c"
int nError;
#line 360 "../../arch/avr/dev/ide.c"

#line 360 "../../arch/avr/dev/ide.c"
 BYTE bStatus;
#line 362 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 364 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 365 "../../arch/avr/dev/ide.c"
if ((bStatus & (0x80 | 0x08)) != 0x08){
{ 
#line 367 "../../arch/avr/dev/ide.c"
dwTimeout = (( DWORD )(((dwTimeout * 10UL) / 625UL) + 1UL)); 
#line 368 "../../arch/avr/dev/ide.c"
dwTimeout += NutGetTickCount(); 
#line 370 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 371 "../../arch/avr/dev/ide.c"
while((bStatus & (0x80 | 0x08)) != 0x08) { { 
#line 376 "../../arch/avr/dev/ide.c"
if (NutGetTickCount() > dwTimeout){
{ 
#line 373 "../../arch/avr/dev/ide.c"
nError = 0x01; 
#line 374 "../../arch/avr/dev/ide.c"
break; } }
#line 376 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; } } } }
#line 381 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 391 "../../arch/avr/dev/ide.c"
static int WaitNotBusy( DWORD dwTimeout)  {

#line 392 "../../arch/avr/dev/ide.c"

#line 392 "../../arch/avr/dev/ide.c"
int nError;
#line 393 "../../arch/avr/dev/ide.c"

#line 393 "../../arch/avr/dev/ide.c"
 BYTE bStatus;
#line 395 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 397 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 398 "../../arch/avr/dev/ide.c"
if (bStatus & (0x80 | 0x08)){
{ 
#line 400 "../../arch/avr/dev/ide.c"
dwTimeout = ((dwTimeout * 10) / 625) + 1; 
#line 401 "../../arch/avr/dev/ide.c"
dwTimeout += NutGetTickCount(); 
#line 403 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 404 "../../arch/avr/dev/ide.c"
while(bStatus & (0x80 | 0x08)) { { 
#line 409 "../../arch/avr/dev/ide.c"
if (NutGetTickCount() > dwTimeout){
{ 
#line 406 "../../arch/avr/dev/ide.c"
nError = 0x04; 
#line 407 "../../arch/avr/dev/ide.c"
break; } }
#line 409 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; } } } }
#line 414 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 423 "../../arch/avr/dev/ide.c"
static int SelectDevice( BYTE bDevice)  {

#line 424 "../../arch/avr/dev/ide.c"

#line 424 "../../arch/avr/dev/ide.c"
int nError;
#line 425 "../../arch/avr/dev/ide.c"

#line 425 "../../arch/avr/dev/ide.c"
int nTimeout;
#line 426 "../../arch/avr/dev/ide.c"

#line 426 "../../arch/avr/dev/ide.c"
 BYTE bStatus;
#line 427 "../../arch/avr/dev/ide.c"

#line 427 "../../arch/avr/dev/ide.c"
 BYTE bDummy;
#line 429 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 431 "../../arch/avr/dev/ide.c"
if (WaitNotBusy(200) == 0x00){
{ 
#line 433 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 6)] = 0xA0 + (bDevice << 4); 
#line 435 "../../arch/avr/dev/ide.c"
Wait400ns(); 
#line 437 "../../arch/avr/dev/ide.c"
nError = WaitNotBusy(200); } }else{
{ 
#line 439 "../../arch/avr/dev/ide.c"
nError = 0x04; } }
#line 442 "../../arch/avr/dev/ide.c"
if (nError != 0x00){
{ 
#line 447 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 448 "../../arch/avr/dev/ide.c"
if (bStatus & 0x08){
{ 
#line 450 "../../arch/avr/dev/ide.c"
nTimeout = 512; 
#line 451 "../../arch/avr/dev/ide.c"
while((bStatus & 0x08) && (nTimeout)) { { 
#line 452 "../../arch/avr/dev/ide.c"
bDummy = pIDE[(0x0000 + 0x0300)]; 
#line 453 "../../arch/avr/dev/ide.c"
bDummy = pIDE[(0x0000 + 0x0300)]; 
#line 454 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 455 "../../arch/avr/dev/ide.c"
nTimeout--; } } } }} }
#line 460 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 470 "../../arch/avr/dev/ide.c"
static int ATAPISendCommand( LPDRIVE pDrive,  BYTE *pSectorBuffer,  WORD *pReadCount)  {

#line 471 "../../arch/avr/dev/ide.c"

#line 471 "../../arch/avr/dev/ide.c"
int nError;
#line 472 "../../arch/avr/dev/ide.c"

#line 472 "../../arch/avr/dev/ide.c"
 BYTE bStatus;
#line 473 "../../arch/avr/dev/ide.c"

#line 473 "../../arch/avr/dev/ide.c"
 BYTE bDevice;
#line 474 "../../arch/avr/dev/ide.c"

#line 474 "../../arch/avr/dev/ide.c"
 WORD x,y;
#line 475 "../../arch/avr/dev/ide.c"

#line 475 "../../arch/avr/dev/ide.c"
 BYTE bDummy;
#line 476 "../../arch/avr/dev/ide.c"

#line 476 "../../arch/avr/dev/ide.c"
 WORD wSectorSize;
#line 478 "../../arch/avr/dev/ide.c"
nError = 0x01; 
#line 479 "../../arch/avr/dev/ide.c"
bDummy = 0; 
#line 480 "../../arch/avr/dev/ide.c"
bDevice = (pDrive->bDevice); 
#line 481 "../../arch/avr/dev/ide.c"
wSectorSize = (pDrive->wSectorSize); 
#line 483 "../../arch/avr/dev/ide.c"
(*pReadCount) = 0; 
#line 485 "../../arch/avr/dev/ide.c"
if (SelectDevice(bDevice) == 0x00){
{ 
#line 487 "../../arch/avr/dev/ide.c"
ClearEvent((&hIDEEvent)); 
#line 489 "../../arch/avr/dev/ide.c"
if (WaitNotBusy(5000) == 0x00){
{ 
#line 491 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 1)] = 0x00; 
#line 492 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 2)] = 0x00; 
#line 493 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 3)] = 0x00; 
#line 494 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 4)] = (( BYTE )(wSectorSize & 0x00FF)); 
#line 495 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 5)] = (( BYTE )((wSectorSize >> 8) & 0x00FF)); 
#line 496 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 7)] = 0xA0; 
#line 498 "../../arch/avr/dev/ide.c"
if ((pDrive->wFlags) & 0x0008){
{ 
#line 499 "../../arch/avr/dev/ide.c"
nError = WaitForInterrupt(5000); 
#line 500 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 501 "../../arch/avr/dev/ide.c"
ClearEvent((&hIDEEvent)); } }} }else{
{ 
#line 504 "../../arch/avr/dev/ide.c"
nError = WaitDRQ(5000); } }
#line 507 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 511 "../../arch/avr/dev/ide.c"
for(x = 0;x < 12;x = x + 2) { { 
#line 509 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 0x0200)] = aATAPICmd[x + 1]; 
#line 510 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 0x0100)] = aATAPICmd[x]; } } 
#line 513 "../../arch/avr/dev/ide.c"
if (WaitForInterrupt(5000) == 0x00){
{ 
#line 546 "../../arch/avr/dev/ide.c"
if (gbIntStatus & 0x01){
{ 
#line 515 "../../arch/avr/dev/ide.c"
nError = 0x01; } }else{
{ 
#line 517 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 519 "../../arch/avr/dev/ide.c"
if (gbIntStatus & 0x08){
{ 
#line 521 "../../arch/avr/dev/ide.c"
Wait400ns(); 
#line 523 "../../arch/avr/dev/ide.c"
y = pIDE[(0x0000 + 5)] << 8; 
#line 524 "../../arch/avr/dev/ide.c"
y |= pIDE[(0x0000 + 4)]; 
#line 526 "../../arch/avr/dev/ide.c"
if (y > wSectorSize){
{ 
#line 527 "../../arch/avr/dev/ide.c"
y = wSectorSize; } }
#line 530 "../../arch/avr/dev/ide.c"
if (pSectorBuffer != (((void *)0))){
{ 
#line 534 "../../arch/avr/dev/ide.c"
for(x = 0;x < y;x = x + 2) { { 
#line 532 "../../arch/avr/dev/ide.c"
pSectorBuffer[x] = pIDE[(0x0000 + 0x0300)]; 
#line 533 "../../arch/avr/dev/ide.c"
pSectorBuffer[x + 1] = pIDE[(0x0000 + 0x0400)]; } } } }else{
{ 
#line 539 "../../arch/avr/dev/ide.c"
for(x = 0;x < y;x = x + 2) { { 
#line 537 "../../arch/avr/dev/ide.c"
bDummy += pIDE[(0x0000 + 0x0300)]; 
#line 538 "../../arch/avr/dev/ide.c"
bDummy += pIDE[(0x0000 + 0x0400)]; } } } }
#line 542 "../../arch/avr/dev/ide.c"
(*pReadCount) = y; 
#line 544 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; } }} }} }} }} }} }
#line 552 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 561 "../../arch/avr/dev/ide.c"
static int ATAPIGetTotalSectors( LPDRIVE pDrive,  BYTE *pSectorBuffer,  DWORD *pMaxSectors)  {

#line 562 "../../arch/avr/dev/ide.c"

#line 562 "../../arch/avr/dev/ide.c"
int nError;
#line 563 "../../arch/avr/dev/ide.c"

#line 563 "../../arch/avr/dev/ide.c"
 WORD wReadCount;
#line 564 "../../arch/avr/dev/ide.c"

#line 564 "../../arch/avr/dev/ide.c"
 WORD wErrorCount;
#line 565 "../../arch/avr/dev/ide.c"

#line 565 "../../arch/avr/dev/ide.c"
 DWORD dwValue;
#line 567 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 568 "../../arch/avr/dev/ide.c"
(*pMaxSectors) = 0; 
#line 570 "../../arch/avr/dev/ide.c"
wErrorCount = 4; 
#line 571 "../../arch/avr/dev/ide.c"
while(wErrorCount) { { 
#line 573 "../../arch/avr/dev/ide.c"
{ 
#line 573 "../../arch/avr/dev/ide.c"
memset(aATAPICmd, 0x00, sizeof (aATAPICmd)); 
#line 573 "../../arch/avr/dev/ide.c"
aATAPICmd[0] = 0x25; } 
#line 573 "../../arch/avr/dev/ide.c"
; 
#line 574 "../../arch/avr/dev/ide.c"
nError = ATAPISendCommand(pDrive, pSectorBuffer, (&wReadCount)); 
#line 575 "../../arch/avr/dev/ide.c"
if ((nError == 0x00) && (wReadCount == 8)){
{ 
#line 576 "../../arch/avr/dev/ide.c"
dwValue = pSectorBuffer[0]; 
#line 577 "../../arch/avr/dev/ide.c"
dwValue = dwValue << 8; 
#line 578 "../../arch/avr/dev/ide.c"
dwValue |= pSectorBuffer[1]; 
#line 579 "../../arch/avr/dev/ide.c"
dwValue = dwValue << 8; 
#line 580 "../../arch/avr/dev/ide.c"
dwValue |= pSectorBuffer[2]; 
#line 581 "../../arch/avr/dev/ide.c"
dwValue = dwValue << 8; 
#line 582 "../../arch/avr/dev/ide.c"
dwValue |= pSectorBuffer[3]; 
#line 583 "../../arch/avr/dev/ide.c"
(*pMaxSectors) = dwValue; 
#line 588 "../../arch/avr/dev/ide.c"
dwValue = pSectorBuffer[4]; 
#line 589 "../../arch/avr/dev/ide.c"
dwValue = dwValue << 8; 
#line 590 "../../arch/avr/dev/ide.c"
dwValue |= pSectorBuffer[5]; 
#line 591 "../../arch/avr/dev/ide.c"
dwValue = dwValue << 8; 
#line 592 "../../arch/avr/dev/ide.c"
dwValue |= pSectorBuffer[6]; 
#line 593 "../../arch/avr/dev/ide.c"
dwValue = dwValue << 8; 
#line 594 "../../arch/avr/dev/ide.c"
dwValue |= pSectorBuffer[7]; 
#line 595 "../../arch/avr/dev/ide.c"
if (dwValue > 2048){
{ 
#line 596 "../../arch/avr/dev/ide.c"
dwValue = 2048; } }
#line 598 "../../arch/avr/dev/ide.c"
(pDrive->wSectorSize) = (( WORD )(dwValue & 0x0000FFFF)); 
#line 599 "../../arch/avr/dev/ide.c"
break; } }
#line 601 "../../arch/avr/dev/ide.c"
wErrorCount--; 
#line 602 "../../arch/avr/dev/ide.c"
NutSleep(2000); } } 
#line 605 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 616 "../../arch/avr/dev/ide.c"
static int GetDeviceInfoPacket( LPDRIVE pDrive,  BYTE *pSectorBuffer)  {

#line 617 "../../arch/avr/dev/ide.c"

#line 617 "../../arch/avr/dev/ide.c"
 WORD i;
#line 618 "../../arch/avr/dev/ide.c"

#line 618 "../../arch/avr/dev/ide.c"
int nError;
#line 619 "../../arch/avr/dev/ide.c"

#line 619 "../../arch/avr/dev/ide.c"
 BYTE bStatus;
#line 620 "../../arch/avr/dev/ide.c"

#line 620 "../../arch/avr/dev/ide.c"
 BYTE bErrorReg;
#line 621 "../../arch/avr/dev/ide.c"

#line 621 "../../arch/avr/dev/ide.c"
 BYTE bDevice;
#line 622 "../../arch/avr/dev/ide.c"

#line 622 "../../arch/avr/dev/ide.c"
 WORD wConfig;
#line 623 "../../arch/avr/dev/ide.c"

#line 623 "../../arch/avr/dev/ide.c"
 DWORD dwTotalSectors;
#line 625 "../../arch/avr/dev/ide.c"
nError = 0x01; 
#line 626 "../../arch/avr/dev/ide.c"
bDevice = (pDrive->bDevice); 
#line 628 "../../arch/avr/dev/ide.c"
if (SelectDevice(bDevice) == 0x00){
{ 
#line 630 "../../arch/avr/dev/ide.c"
ClearEvent((&hIDEEvent)); 
#line 632 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 7)] = 0xA1; 
#line 633 "../../arch/avr/dev/ide.c"
if (WaitForInterrupt(10000) == 0x00){
{ 
#line 696 "../../arch/avr/dev/ide.c"
if (gbIntStatus & 0x08){
{ 
#line 644 "../../arch/avr/dev/ide.c"
for(i = 0;i < 512;i = i + 2) { { 
#line 638 "../../arch/avr/dev/ide.c"
pSectorBuffer[i] = pIDE[(0x0000 + 0x0300)]; 
#line 639 "../../arch/avr/dev/ide.c"
if ((pDrive->bIDEMode) == 3){
{ 
#line 640 "../../arch/avr/dev/ide.c"
pSectorBuffer[i + 1] = pIDE[(0x0000 + 0x0300)]; } }else{
{ 
#line 642 "../../arch/avr/dev/ide.c"
pSectorBuffer[i + 1] = pIDE[(0x0000 + 0x0400)]; } }} } 
#line 650 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 652 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) = 0; 
#line 654 "../../arch/avr/dev/ide.c"
wConfig = (*(( WORD *)(&pSectorBuffer[0]))); 
#line 655 "../../arch/avr/dev/ide.c"
if ((wConfig & 0x0060) == 0x0020){
{ 
#line 656 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) |= 0x0008; } }
#line 658 "../../arch/avr/dev/ide.c"
if ((wConfig & 0x1F00) == 0x0000){
{ 
#line 659 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) |= 0x2000; } }
#line 661 "../../arch/avr/dev/ide.c"
if ((wConfig & 0x1F00) == 0x0500){
{ 
#line 662 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) |= (0x4000 | 0x1000); } }
#line 664 "../../arch/avr/dev/ide.c"
if ((wConfig & 0xC000) == 0x8000){
{ 
#line 665 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) |= 0x0004; } }
#line 668 "../../arch/avr/dev/ide.c"
if ((wConfig & 0x0003) == 0x0000){
{ 
#line 669 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) |= 0x8000; 
#line 671 "../../arch/avr/dev/ide.c"
nError = ATAPIGetTotalSectors(pDrive, pSectorBuffer, (&dwTotalSectors)); 
#line 672 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 673 "../../arch/avr/dev/ide.c"
(pDrive->dwTotalSectors) = dwTotalSectors; 
#line 678 "../../arch/avr/dev/ide.c"
{ 
#line 678 "../../arch/avr/dev/ide.c"
memset(aATAPICmd, 0x00, sizeof (aATAPICmd)); 
#line 678 "../../arch/avr/dev/ide.c"
aATAPICmd[0] = 0x5A; } 
#line 678 "../../arch/avr/dev/ide.c"
; 
#line 679 "../../arch/avr/dev/ide.c"
aATAPICmd[2] = 0x2A; 
#line 680 "../../arch/avr/dev/ide.c"
aATAPICmd[7] = 0x08; 
#line 681 "../../arch/avr/dev/ide.c"
aATAPICmd[8] = 0x00; 
#line 682 "../../arch/avr/dev/ide.c"
ATAPISendCommand(pDrive, pSectorBuffer, (&i)); 
#line 687 "../../arch/avr/dev/ide.c"
IDEATAPISetCDSpeed(bDevice, 150); } }else{
{ 
#line 689 "../../arch/avr/dev/ide.c"
(pDrive->dwTotalSectors) = 0; } }} }} }
#line 696 "../../arch/avr/dev/ide.c"
if (gbIntStatus & 0x01){
{ 
#line 697 "../../arch/avr/dev/ide.c"
bErrorReg = pIDE[(0x0000 + 1)]; } }} }} }
#line 703 "../../arch/avr/dev/ide.c"
return (nError); }
 
# 615 "../../arch/avr/dev/ide.c" 
# 715 "../../arch/avr/dev/ide.c" 
static int GetDeviceInfo( LPDRIVE pDrive,  BYTE *pSectorBuffer)  {

#line 716 "../../arch/avr/dev/ide.c"

#line 716 "../../arch/avr/dev/ide.c"
 WORD i;
#line 717 "../../arch/avr/dev/ide.c"

#line 717 "../../arch/avr/dev/ide.c"
int nError;
#line 718 "../../arch/avr/dev/ide.c"

#line 718 "../../arch/avr/dev/ide.c"
 BYTE bStatus;
#line 719 "../../arch/avr/dev/ide.c"

#line 719 "../../arch/avr/dev/ide.c"
 BYTE bErrorReg;
#line 720 "../../arch/avr/dev/ide.c"

#line 720 "../../arch/avr/dev/ide.c"
 BYTE bDevice;
#line 721 "../../arch/avr/dev/ide.c"

#line 721 "../../arch/avr/dev/ide.c"
 IDEDEVICEINFO *pInfo;
#line 723 "../../arch/avr/dev/ide.c"
nError = 0x01; 
#line 724 "../../arch/avr/dev/ide.c"
bDevice = (pDrive->bDevice); 
#line 726 "../../arch/avr/dev/ide.c"
if (SelectDevice(bDevice) == 0x00){
{ 
#line 728 "../../arch/avr/dev/ide.c"
ClearEvent((&hIDEEvent)); 
#line 738 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 7)] = 0xEC; 
#line 739 "../../arch/avr/dev/ide.c"
if (WaitForInterrupt(10000) == 0x00){
{ 
#line 784 "../../arch/avr/dev/ide.c"
if (gbIntStatus & 0x08){
{ 
#line 750 "../../arch/avr/dev/ide.c"
for(i = 0;i < 512;i = i + 2) { { 
#line 744 "../../arch/avr/dev/ide.c"
pSectorBuffer[i] = pIDE[(0x0000 + 0x0300)]; 
#line 745 "../../arch/avr/dev/ide.c"
if ((pDrive->bIDEMode) == 3){
{ 
#line 746 "../../arch/avr/dev/ide.c"
pSectorBuffer[i + 1] = pIDE[(0x0000 + 0x0300)]; } }else{
{ 
#line 748 "../../arch/avr/dev/ide.c"
pSectorBuffer[i + 1] = pIDE[(0x0000 + 0x0400)]; } }} } 
#line 756 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 758 "../../arch/avr/dev/ide.c"
pInfo = (( IDEDEVICEINFO *)pSectorBuffer); 
# 738 "../../arch/avr/dev/ide.c" 
# 767 "../../arch/avr/dev/ide.c" 
if ((pInfo->LBASectors) > 0){
{ 
#line 768 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) = 0x8000 | 0x0001; 
#line 769 "../../arch/avr/dev/ide.c"
(pDrive->dwTotalSectors) = (pInfo->LBASectors); } }else{
{ } }
#line 781 "../../arch/avr/dev/ide.c"
nError = 0x00; } }
#line 784 "../../arch/avr/dev/ide.c"
if (gbIntStatus & 0x01){
{ 
#line 785 "../../arch/avr/dev/ide.c"
bErrorReg = pIDE[(0x0000 + 1)]; } }} }} }
#line 791 "../../arch/avr/dev/ide.c"
return (nError); }
 
# 779 "../../arch/avr/dev/ide.c" 
# 804 "../../arch/avr/dev/ide.c" 
static int IsPacketDevice(void )  {

#line 805 "../../arch/avr/dev/ide.c"

#line 805 "../../arch/avr/dev/ide.c"
int nPacketDevice;
#line 806 "../../arch/avr/dev/ide.c"

#line 806 "../../arch/avr/dev/ide.c"
 BYTE bSectorCount;
#line 807 "../../arch/avr/dev/ide.c"

#line 807 "../../arch/avr/dev/ide.c"
 BYTE bSectorNumber;
#line 808 "../../arch/avr/dev/ide.c"

#line 808 "../../arch/avr/dev/ide.c"
 BYTE bCylinderLow;
#line 809 "../../arch/avr/dev/ide.c"

#line 809 "../../arch/avr/dev/ide.c"
 BYTE bCylinderHigh;
#line 811 "../../arch/avr/dev/ide.c"
nPacketDevice = 0; 
#line 813 "../../arch/avr/dev/ide.c"
bSectorCount = pIDE[(0x0000 + 2)]; 
#line 814 "../../arch/avr/dev/ide.c"
bSectorNumber = pIDE[(0x0000 + 3)]; 
#line 815 "../../arch/avr/dev/ide.c"
bCylinderLow = pIDE[(0x0000 + 4)]; 
#line 816 "../../arch/avr/dev/ide.c"
bCylinderHigh = pIDE[(0x0000 + 5)]; 
#line 819 "../../arch/avr/dev/ide.c"
if ((bCylinderLow == 0x14) && (bCylinderHigh == 0xEB)){
{ 
#line 820 "../../arch/avr/dev/ide.c"
nPacketDevice = 1; } }
#line 823 "../../arch/avr/dev/ide.c"
return (nPacketDevice); }
 
#line 840 "../../arch/avr/dev/ide.c"
static int DeviceDiag( LPDRIVE pDrive)  {

#line 841 "../../arch/avr/dev/ide.c"

#line 841 "../../arch/avr/dev/ide.c"
int nError;
#line 842 "../../arch/avr/dev/ide.c"

#line 842 "../../arch/avr/dev/ide.c"
 BYTE bResult;
#line 844 "../../arch/avr/dev/ide.c"
nError = 0x01; 
#line 846 "../../arch/avr/dev/ide.c"
if (SelectDevice(0) == 0x00){
{ 
# 839 "../../arch/avr/dev/ide.c" 
# 856 "../../arch/avr/dev/ide.c" 
ClearEvent((&hIDEEvent)); 
#line 861 "../../arch/avr/dev/ide.c"
if (IsPacketDevice() == 1){
{ 
#line 862 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 863 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) = 0x0004; } }else{
{ 
#line 866 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 7)] = 0x90; 
#line 867 "../../arch/avr/dev/ide.c"
if (WaitForInterrupt(10000) == 0x00){
{ 
#line 869 "../../arch/avr/dev/ide.c"
bResult = pIDE[(0x0000 + 1)]; 
#line 870 "../../arch/avr/dev/ide.c"
if (bResult == 0x01){
{ 
#line 871 "../../arch/avr/dev/ide.c"
nError = 0x00; } }} }} }} }
#line 878 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 889 "../../arch/avr/dev/ide.c"
static int ReadSectors( BYTE bDevice,  BYTE *pData,  DWORD dwStartSector,  WORD wSectorCount)  {

#line 890 "../../arch/avr/dev/ide.c"

#line 890 "../../arch/avr/dev/ide.c"
 WORD i,x;
#line 891 "../../arch/avr/dev/ide.c"

#line 891 "../../arch/avr/dev/ide.c"
int nError;
#line 892 "../../arch/avr/dev/ide.c"

#line 892 "../../arch/avr/dev/ide.c"
 BYTE bValue;
#line 893 "../../arch/avr/dev/ide.c"

#line 893 "../../arch/avr/dev/ide.c"
 BYTE bErrorReg;
#line 894 "../../arch/avr/dev/ide.c"

#line 894 "../../arch/avr/dev/ide.c"
 BYTE bStatus;
#line 895 "../../arch/avr/dev/ide.c"

#line 895 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 903 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 904 "../../arch/avr/dev/ide.c"
nError = SelectDevice(bDevice); 
#line 910 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x0001) == 0){
{ 
#line 914 "../../arch/avr/dev/ide.c"
nError = 0x01; } }
#line 918 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 920 "../../arch/avr/dev/ide.c"
ClearEvent((&hIDEEvent)); 
#line 922 "../../arch/avr/dev/ide.c"
if ((pDrive->wFlags) & 0x0001){
{ 
#line 926 "../../arch/avr/dev/ide.c"
bValue = (( BYTE )((bDevice << 4) | 0xE0 | (dwStartSector >> 24))); 
#line 927 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 6)] = bValue; 
#line 928 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 5)] = (( BYTE )(dwStartSector >> 16)); 
#line 929 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 4)] = (( BYTE )(dwStartSector >> 8)); 
#line 930 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 3)] = (( BYTE )(dwStartSector)); 
#line 932 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 2)] = (( BYTE )(wSectorCount & 0xff)); 
#line 933 "../../arch/avr/dev/ide.c"
pIDE[(0x0000 + 7)] = 0x20; } }
# 888 "../../arch/avr/dev/ide.c" 
# 957 "../../arch/avr/dev/ide.c" 
for(i = 0;i < wSectorCount;i++) { { 
#line 958 "../../arch/avr/dev/ide.c"
nError = WaitForInterrupt(10000); 
#line 959 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 960 "../../arch/avr/dev/ide.c"
bStatus = gbIntStatus; 
#line 962 "../../arch/avr/dev/ide.c"
if (bStatus & 0x01){
{ 
#line 963 "../../arch/avr/dev/ide.c"
bErrorReg = pIDE[(0x0000 + 1)]; 
#line 964 "../../arch/avr/dev/ide.c"
nError = 0x01; 
#line 965 "../../arch/avr/dev/ide.c"
break; } }
#line 968 "../../arch/avr/dev/ide.c"
for(x = 0;x < 512;x = x + 2) { { 
#line 969 "../../arch/avr/dev/ide.c"
pData[x] = pIDE[(0x0000 + 0x0300)]; 
#line 970 "../../arch/avr/dev/ide.c"
if ((pDrive->bIDEMode) == 3){
{ 
#line 971 "../../arch/avr/dev/ide.c"
pData[x + 1] = pIDE[(0x0000 + 0x0300)]; } }else{
{ 
#line 973 "../../arch/avr/dev/ide.c"
pData[x + 1] = pIDE[(0x0000 + 0x0400)]; } }} } 
#line 977 "../../arch/avr/dev/ide.c"
pData += 512; } }else{
{ 
#line 980 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; 
#line 981 "../../arch/avr/dev/ide.c"
bErrorReg = pIDE[(0x0000 + 1)]; } }} } 
#line 985 "../../arch/avr/dev/ide.c"
bStatus = pIDE[(0x0000 + 7)]; } }
#line 989 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 1120 "../../arch/avr/dev/ide.c"
void CFChange(void *arg) __attribute__  (( noreturn )) ; 
#line 1121 "../../arch/avr/dev/ide.c"
void CFChange(void *arg)  {

#line 1122 "../../arch/avr/dev/ide.c"

#line 1122 "../../arch/avr/dev/ide.c"
 BYTE bNewStatus;
#line 1123 "../../arch/avr/dev/ide.c"

#line 1123 "../../arch/avr/dev/ide.c"
 BYTE *pSectorBuffer;
#line 1125 "../../arch/avr/dev/ide.c"
while(1) { { 
#line 1127 "../../arch/avr/dev/ide.c"
NutEventWaitNext((&hCFChangeInt), 0); 
#line 1131 "../../arch/avr/dev/ide.c"
NutSleep(2000); 
#line 1133 "../../arch/avr/dev/ide.c"
bNewStatus = (((*((volatile unsigned char *)((0x01) + 0x20)))) & (1 << (6))); 
#line 1134 "../../arch/avr/dev/ide.c"
if (bNewStatus != gbCFMountStatus){
{ 
#line 1174 "../../arch/avr/dev/ide.c"
if (bNewStatus == 0){
{ 
#line 1137 "../../arch/avr/dev/ide.c"
gbCFMountStatus = 0; 
#line 1141 "../../arch/avr/dev/ide.c"
HardwareReset((&sDrive[0])); 
#line 1143 "../../arch/avr/dev/ide.c"
pSectorBuffer = (( BYTE *)NutHeapAlloc(512)); 
#line 1144 "../../arch/avr/dev/ide.c"
if (pSectorBuffer != (((void *)0))){
{ 
#line 1145 "../../arch/avr/dev/ide.c"
IDEMountDevice(0, pSectorBuffer); 
#line 1146 "../../arch/avr/dev/ide.c"
NutHeapFree(pSectorBuffer); 
#line 1148 "../../arch/avr/dev/ide.c"
if (pUserMountFunc != (((void *)0))){
{ 
#line 1149 "../../arch/avr/dev/ide.c"
pUserMountFunc(0); } }} }
#line 1153 "../../arch/avr/dev/ide.c"
 asm volatile ("in  __tmp_reg__, __SREG__""\n\t""cli""\n\t""push __tmp_reg__""\n\t"); 
#line 1153 "../../arch/avr/dev/ide.c"
; 
#line 1154 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3A) + 0x20)))) &= (~0x30); 
#line 1155 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3A) + 0x20)))) |= 0x30; 
#line 1156 "../../arch/avr/dev/ide.c"
 asm volatile ("pop __tmp_reg__""\n\t""out __SREG__, __tmp_reg__""\n\t"); } }else{
{ 
#line 1159 "../../arch/avr/dev/ide.c"
gbCFMountStatus = 1; 
#line 1164 "../../arch/avr/dev/ide.c"
IDEUnMountDevice(0); 
#line 1166 "../../arch/avr/dev/ide.c"
if (pUserUnMountFunc != (((void *)0))){
{ 
#line 1167 "../../arch/avr/dev/ide.c"
pUserUnMountFunc(0); } }
#line 1170 "../../arch/avr/dev/ide.c"
 asm volatile ("in  __tmp_reg__, __SREG__""\n\t""cli""\n\t""push __tmp_reg__""\n\t"); 
#line 1170 "../../arch/avr/dev/ide.c"
; 
#line 1171 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3A) + 0x20)))) &= (~0x30); 
#line 1172 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3A) + 0x20)))) |= 0x20; 
#line 1173 "../../arch/avr/dev/ide.c"
 asm volatile ("pop __tmp_reg__""\n\t""out __SREG__, __tmp_reg__""\n\t"); } }} }} } }
 
#line 1186 "../../arch/avr/dev/ide.c"
int IDEInit(int nBaseAddress, int nIDEMode,  IDE_MOUNT_FUNC *pMountFunc,  IDE_MOUNT_FUNC *pUnMountFunc)  {

#line 1187 "../../arch/avr/dev/ide.c"

#line 1187 "../../arch/avr/dev/ide.c"
int i;
#line 1188 "../../arch/avr/dev/ide.c"

#line 1188 "../../arch/avr/dev/ide.c"
int nError;
#line 1189 "../../arch/avr/dev/ide.c"

#line 1189 "../../arch/avr/dev/ide.c"
 BYTE bValue;
#line 1191 "../../arch/avr/dev/ide.c"
pUserMountFunc = pMountFunc; 
#line 1192 "../../arch/avr/dev/ide.c"
pUserUnMountFunc = pUnMountFunc; 
#line 1197 "../../arch/avr/dev/ide.c"
if (nBaseAddress == 0){
{ 
#line 1198 "../../arch/avr/dev/ide.c"
nBaseAddress = 0xE000; } }
# 1120 "../../arch/avr/dev/ide.c" 
# 1208 "../../arch/avr/dev/ide.c" 
((*((volatile unsigned char *)(0x6D)))) = (1 << (1)); 
#line 1214 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x11) + 0x20)))) = 0x20; 
#line 1217 "../../arch/avr/dev/ide.c"
for(i = 0;i < 1;i++) { { 
#line 1218 "../../arch/avr/dev/ide.c"
memset((( BYTE *)(&sDrive[i])), 0x00, sizeof ( DRIVE )); 
#line 1220 "../../arch/avr/dev/ide.c"
sDrive[i].bDevice = (( BYTE )i); 
#line 1221 "../../arch/avr/dev/ide.c"
sDrive[i].bIDEMode = (( BYTE )nIDEMode); } } 
#line 1224 "../../arch/avr/dev/ide.c"
IDESemaInit(); 
#line 1226 "../../arch/avr/dev/ide.c"
pIDE = ((unsigned char *)nBaseAddress); 
#line 1228 "../../arch/avr/dev/ide.c"
ClearEvent((&hIDEEvent)); 
#line 1230 "../../arch/avr/dev/ide.c"
 asm volatile ("in  __tmp_reg__, __SREG__""\n\t""cli""\n\t""push __tmp_reg__""\n\t"); 
#line 1230 "../../arch/avr/dev/ide.c"
; 
#line 1235 "../../arch/avr/dev/ide.c"
gbIntStatus = 0; 
#line 1240 "../../arch/avr/dev/ide.c"
nError = NutRegisterIrqHandler((&sig_INTERRUPT7), IDEInterrupt, (((void *)0))); 
#line 1241 "../../arch/avr/dev/ide.c"
if (nError == 0){
{ 
#line 1242 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3A) + 0x20)))) |= 0xC0; 
#line 1243 "../../arch/avr/dev/ide.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x39) + 0x20)))))))))))) |= (1 << (7))); } }
#line 1246 "../../arch/avr/dev/ide.c"
switch(nIDEMode){ { 
#line 1249 "../../arch/avr/dev/ide.c"
case 0: { 
#line 1248 "../../arch/avr/dev/ide.c"
break; } 
#line 1258 "../../arch/avr/dev/ide.c"
case 1: { 
#line 1263 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3C) + 0x20)))) = 0xff; 
#line 1265 "../../arch/avr/dev/ide.c"
break; } 
#line 1267 "../../arch/avr/dev/ide.c"
case 2: { 
#line 1268 "../../arch/avr/dev/ide.c"
break; } 
#line 1270 "../../arch/avr/dev/ide.c"
case 3: { 
# 1258 "../../arch/avr/dev/ide.c" 
# 1280 "../../arch/avr/dev/ide.c" 
((*((volatile unsigned char *)((0x3A) + 0x20)))) &= (~0x30); 
#line 1285 "../../arch/avr/dev/ide.c"
bValue = (((*((volatile unsigned char *)((0x01) + 0x20)))) & (1 << (6))); 
#line 1286 "../../arch/avr/dev/ide.c"
if (bValue == 0){
{ 
#line 1287 "../../arch/avr/dev/ide.c"
gbCFMountStatus = 0; 
#line 1293 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3A) + 0x20)))) |= 0x30; } }else{
{ 
#line 1295 "../../arch/avr/dev/ide.c"
gbCFMountStatus = 1; 
#line 1301 "../../arch/avr/dev/ide.c"
((*((volatile unsigned char *)((0x3A) + 0x20)))) |= 0x20; } }
#line 1304 "../../arch/avr/dev/ide.c"
nError = NutRegisterIrqHandler((&sig_INTERRUPT6), CFInterrupt, (((void *)0))); 
#line 1305 "../../arch/avr/dev/ide.c"
if (nError == 0){
{ 
#line 1306 "../../arch/avr/dev/ide.c"
NutThreadCreate("cfchange", CFChange, (((void *)0)), 640); 
#line 1307 "../../arch/avr/dev/ide.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x39) + 0x20)))))))))))) |= (1 << (6))); } }
#line 1310 "../../arch/avr/dev/ide.c"
break; } } } 
#line 1313 "../../arch/avr/dev/ide.c"
 asm volatile ("pop __tmp_reg__""\n\t""out __SREG__, __tmp_reg__""\n\t"); 
#line 1315 "../../arch/avr/dev/ide.c"
HardwareReset((&sDrive[0])); 
#line 1317 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 1319 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 1326 "../../arch/avr/dev/ide.c"
int IDEMountDevice( BYTE bDevice,  BYTE *pSectorBuffer)  {

#line 1327 "../../arch/avr/dev/ide.c"

#line 1327 "../../arch/avr/dev/ide.c"
int nError;
#line 1328 "../../arch/avr/dev/ide.c"

#line 1328 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 1330 "../../arch/avr/dev/ide.c"
pDrive = (((void *)0)); 
#line 1332 "../../arch/avr/dev/ide.c"
IDELock(); 
#line 1334 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1335 "../../arch/avr/dev/ide.c"
nError = 0x01; } }else{
{ 
#line 1337 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1339 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) = 0; 
#line 1353 "../../arch/avr/dev/ide.c"
(pDrive->dwTotalSectors) = 0; 
#line 1355 "../../arch/avr/dev/ide.c"
nError = DeviceDiag(pDrive); 
#line 1356 "../../arch/avr/dev/ide.c"
if ((pDrive->wFlags) & 0x0004){
{ 
#line 1358 "../../arch/avr/dev/ide.c"
(pDrive->wSectorSize) = 2048; 
#line 1359 "../../arch/avr/dev/ide.c"
nError = GetDeviceInfoPacket(pDrive, pSectorBuffer); 
#line 1360 "../../arch/avr/dev/ide.c"
if ((pDrive->wFlags) & 0x8000){
{ 
#line 1361 "../../arch/avr/dev/ide.c"
nError = 0x00; } }} }else{
{ 
#line 1372 "../../arch/avr/dev/ide.c"
if (nError != 0x00){
{ 
#line 1369 "../../arch/avr/dev/ide.c"
nError = DeviceDiag(pDrive); } }
#line 1372 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 1373 "../../arch/avr/dev/ide.c"
(pDrive->wSectorSize) = 512; 
#line 1374 "../../arch/avr/dev/ide.c"
nError = GetDeviceInfo(pDrive, pSectorBuffer); 
#line 1375 "../../arch/avr/dev/ide.c"
if ((pDrive->wFlags) & 0x8000){
{ 
#line 1376 "../../arch/avr/dev/ide.c"
nError = 0x00; } }} }} }} }
#line 1383 "../../arch/avr/dev/ide.c"
IDEFree(); 
#line 1385 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 1392 "../../arch/avr/dev/ide.c"
int IDEGetSectorSize( BYTE bDevice)  {

#line 1393 "../../arch/avr/dev/ide.c"

#line 1393 "../../arch/avr/dev/ide.c"
int nSectorSize;
#line 1394 "../../arch/avr/dev/ide.c"

#line 1394 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 1396 "../../arch/avr/dev/ide.c"
nSectorSize = 0; 
#line 1398 "../../arch/avr/dev/ide.c"
IDELock(); 
#line 1400 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1401 "../../arch/avr/dev/ide.c"
nSectorSize = 0; } }else{
{ 
#line 1403 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1404 "../../arch/avr/dev/ide.c"
nSectorSize = (pDrive->wSectorSize); } }
#line 1407 "../../arch/avr/dev/ide.c"
IDEFree(); 
#line 1409 "../../arch/avr/dev/ide.c"
return (nSectorSize); }
 
#line 1416 "../../arch/avr/dev/ide.c"
int IDEIsCDROMDevice( BYTE bDevice)  {

#line 1417 "../../arch/avr/dev/ide.c"

#line 1417 "../../arch/avr/dev/ide.c"
int nIsCDROM;
#line 1418 "../../arch/avr/dev/ide.c"

#line 1418 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 1420 "../../arch/avr/dev/ide.c"
nIsCDROM = 0; 
#line 1422 "../../arch/avr/dev/ide.c"
IDELock(); 
#line 1424 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1425 "../../arch/avr/dev/ide.c"
nIsCDROM = 0; } }else{
{ 
#line 1427 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1428 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x8000) && ((pDrive->wFlags) & 0x1000)){
{ 
#line 1429 "../../arch/avr/dev/ide.c"
nIsCDROM = 1; } }} }
#line 1433 "../../arch/avr/dev/ide.c"
IDEFree(); 
#line 1435 "../../arch/avr/dev/ide.c"
return (nIsCDROM); }
 
#line 1442 "../../arch/avr/dev/ide.c"
int IDEIsZIPDevice( BYTE bDevice)  {

#line 1443 "../../arch/avr/dev/ide.c"

#line 1443 "../../arch/avr/dev/ide.c"
int nIsZIP;
#line 1444 "../../arch/avr/dev/ide.c"

#line 1444 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 1446 "../../arch/avr/dev/ide.c"
nIsZIP = 0; 
#line 1448 "../../arch/avr/dev/ide.c"
IDELock(); 
#line 1450 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1451 "../../arch/avr/dev/ide.c"
nIsZIP = 0; } }else{
{ 
#line 1453 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1454 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x8000) && ((pDrive->wFlags) & 0x2000)){
{ 
#line 1455 "../../arch/avr/dev/ide.c"
nIsZIP = 1; } }} }
#line 1459 "../../arch/avr/dev/ide.c"
IDEFree(); 
#line 1461 "../../arch/avr/dev/ide.c"
return (nIsZIP); }
 
#line 1468 "../../arch/avr/dev/ide.c"
int IDEUnMountDevice( BYTE bDevice)  {

#line 1469 "../../arch/avr/dev/ide.c"

#line 1469 "../../arch/avr/dev/ide.c"
int nError = 0;
#line 1470 "../../arch/avr/dev/ide.c"

#line 1470 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 1472 "../../arch/avr/dev/ide.c"
pDrive = (((void *)0)); 
#line 1474 "../../arch/avr/dev/ide.c"
IDELock(); 
#line 1476 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1477 "../../arch/avr/dev/ide.c"
nError = 0x01; } }else{
{ 
#line 1479 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1481 "../../arch/avr/dev/ide.c"
(pDrive->wFlags) = 0; } }
#line 1484 "../../arch/avr/dev/ide.c"
IDEFree(); 
#line 1486 "../../arch/avr/dev/ide.c"
return (nError); }
 
#line 1493 "../../arch/avr/dev/ide.c"
 DWORD IDEGetTotalSectors( BYTE bDevice)  {

#line 1494 "../../arch/avr/dev/ide.c"

#line 1494 "../../arch/avr/dev/ide.c"
 DWORD dwTotalSectors;
#line 1495 "../../arch/avr/dev/ide.c"

#line 1495 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 1497 "../../arch/avr/dev/ide.c"
dwTotalSectors = 0; 
#line 1499 "../../arch/avr/dev/ide.c"
IDELock(); 
#line 1501 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1502 "../../arch/avr/dev/ide.c"
dwTotalSectors = 0; } }else{
{ 
#line 1504 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1505 "../../arch/avr/dev/ide.c"
dwTotalSectors = (pDrive->dwTotalSectors); 
#line 1507 "../../arch/avr/dev/ide.c"
dwTotalSectors -= 64; } }
#line 1510 "../../arch/avr/dev/ide.c"
IDEFree(); 
#line 1512 "../../arch/avr/dev/ide.c"
return (dwTotalSectors); }
 
#line 1519 "../../arch/avr/dev/ide.c"
int IDEReadSectors( BYTE bDevice, void *pData,  DWORD dwStartSector,  WORD wSectorCount)  {

#line 1520 "../../arch/avr/dev/ide.c"

#line 1520 "../../arch/avr/dev/ide.c"
 WORD i;
#line 1521 "../../arch/avr/dev/ide.c"

#line 1521 "../../arch/avr/dev/ide.c"
int nError;
#line 1522 "../../arch/avr/dev/ide.c"

#line 1522 "../../arch/avr/dev/ide.c"
 WORD wReadCount;
#line 1523 "../../arch/avr/dev/ide.c"

#line 1523 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive = 0;
#line 1524 "../../arch/avr/dev/ide.c"

#line 1524 "../../arch/avr/dev/ide.c"
 BYTE *pByte;
#line 1526 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 1528 "../../arch/avr/dev/ide.c"
IDELock(); 
#line 1530 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1531 "../../arch/avr/dev/ide.c"
nError = 0x02; } }else{
{ 
#line 1533 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1534 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x8000) == 0){
{ 
#line 1535 "../../arch/avr/dev/ide.c"
nError = 0x02; } }else{
{ 
#line 1540 "../../arch/avr/dev/ide.c"
if ((dwStartSector + wSectorCount) > (pDrive->dwTotalSectors)){
{ 
#line 1538 "../../arch/avr/dev/ide.c"
nError = 0x03; } }} }} }
#line 1543 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x0004) && ((wSectorCount > 1))){
{ 
#line 1548 "../../arch/avr/dev/ide.c"
nError = 0x03; } }
#line 1551 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x0004) && (nError == 0x00)){
{ 
#line 1556 "../../arch/avr/dev/ide.c"
{ 
#line 1556 "../../arch/avr/dev/ide.c"
memset(aATAPICmd, 0x00, sizeof (aATAPICmd)); 
#line 1556 "../../arch/avr/dev/ide.c"
aATAPICmd[0] = 0xA8; } 
#line 1556 "../../arch/avr/dev/ide.c"
; 
#line 1557 "../../arch/avr/dev/ide.c"
i = 5; 
#line 1558 "../../arch/avr/dev/ide.c"
while(dwStartSector) { { 
#line 1559 "../../arch/avr/dev/ide.c"
aATAPICmd[i--] = (( BYTE )dwStartSector); 
#line 1560 "../../arch/avr/dev/ide.c"
dwStartSector >>= 8; } } 
#line 1565 "../../arch/avr/dev/ide.c"
aATAPICmd[9] = 1; 
#line 1566 "../../arch/avr/dev/ide.c"
nError = ATAPISendCommand(pDrive, pData, (&i)); 
#line 1567 "../../arch/avr/dev/ide.c"
if ((nError != 0x00) || (i != (pDrive->wSectorSize))){
{ 
#line 1568 "../../arch/avr/dev/ide.c"
nError = 0x01; } }} }else{
{ 
#line 1594 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 1575 "../../arch/avr/dev/ide.c"
pByte = (( BYTE *)pData); 
#line 1576 "../../arch/avr/dev/ide.c"
while(wSectorCount > 0) { { 
#line 1582 "../../arch/avr/dev/ide.c"
if (wSectorCount < 256){
{ 
#line 1579 "../../arch/avr/dev/ide.c"
wReadCount = wSectorCount; } }else{
{ 
#line 1581 "../../arch/avr/dev/ide.c"
wReadCount = 256; } }
#line 1584 "../../arch/avr/dev/ide.c"
nError = ReadSectors(bDevice, pByte, dwStartSector, wReadCount); 
#line 1585 "../../arch/avr/dev/ide.c"
if (nError != 0x00){
{ 
#line 1586 "../../arch/avr/dev/ide.c"
break; } }
#line 1589 "../../arch/avr/dev/ide.c"
dwStartSector += wReadCount; 
#line 1590 "../../arch/avr/dev/ide.c"
wSectorCount -= wReadCount; 
#line 1591 "../../arch/avr/dev/ide.c"
pByte += (wReadCount * (pDrive->wSectorSize)); } } } }} }
#line 1596 "../../arch/avr/dev/ide.c"
IDEFree(); 
#line 1598 "../../arch/avr/dev/ide.c"
return (nError); }
 
# 1353 "../../arch/avr/dev/ide.c" 
# 1665 "../../arch/avr/dev/ide.c" 
int IDEATAPISetCDSpeed( BYTE bDevice,  WORD wSpeed)  {

#line 1666 "../../arch/avr/dev/ide.c"

#line 1666 "../../arch/avr/dev/ide.c"
 WORD i;
#line 1667 "../../arch/avr/dev/ide.c"

#line 1667 "../../arch/avr/dev/ide.c"
int nError;
#line 1668 "../../arch/avr/dev/ide.c"

#line 1668 "../../arch/avr/dev/ide.c"
 LPDRIVE pDrive;
#line 1670 "../../arch/avr/dev/ide.c"
nError = 0x00; 
#line 1671 "../../arch/avr/dev/ide.c"
pDrive = (((void *)0)); 
#line 1673 "../../arch/avr/dev/ide.c"
if (bDevice >= 1){
{ 
#line 1674 "../../arch/avr/dev/ide.c"
nError = 0x02; } }else{
{ 
#line 1676 "../../arch/avr/dev/ide.c"
pDrive = (&sDrive[bDevice]); 
#line 1677 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x8000) == 0){
{ 
#line 1678 "../../arch/avr/dev/ide.c"
nError = 0x02; } }
#line 1680 "../../arch/avr/dev/ide.c"
if (((pDrive->wFlags) & 0x0004) == 0){
{ 
#line 1681 "../../arch/avr/dev/ide.c"
nError = 0x08; } }} }
#line 1685 "../../arch/avr/dev/ide.c"
if (nError == 0x00){
{ 
#line 1686 "../../arch/avr/dev/ide.c"
{ 
#line 1686 "../../arch/avr/dev/ide.c"
memset(aATAPICmd, 0x00, sizeof (aATAPICmd)); 
#line 1686 "../../arch/avr/dev/ide.c"
aATAPICmd[0] = 0xBB; } 
#line 1686 "../../arch/avr/dev/ide.c"
; 
#line 1687 "../../arch/avr/dev/ide.c"
aATAPICmd[2] = (( BYTE )((wSpeed >> 8) & 0x00FF)); 
#line 1688 "../../arch/avr/dev/ide.c"
aATAPICmd[3] = (( BYTE )(wSpeed & 0x00FF)); 
#line 1689 "../../arch/avr/dev/ide.c"
nError = ATAPISendCommand(pDrive, (((void *)0)), (&i)); } }
#line 1692 "../../arch/avr/dev/ide.c"
return (nError); }
 
