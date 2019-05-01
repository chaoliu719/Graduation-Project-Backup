
# 1 "../../os/nutinit.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "../../os/nutinit.c" 
# 102 "../../os/nutinit.c" 
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
# 213 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 3 4
typedef unsigned int size_t; 
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
# 325 "/usr/lib/gcc-lib/avr/3.3.1/include/stddef.h" 3 4
typedef int wchar_t; 
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
# 103 "../../os/nutinit.c" 2
# 1 "../../include/sys/heap.h" 1
# 68 "../../include/sys/heap.h" 
# 1 "../../include/sys/types.h" 1
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
 
# 69 "../../include/sys/heap.h" 2
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
# 104 "../../os/nutinit.c" 2
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
# 105 "../../os/nutinit.c" 2
# 1 "../../include/sys/timer.h" 1
# 93 "../../include/sys/timer.h" 
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
# 106 "../../os/nutinit.c" 2
# 1 "../../include/sys/confos.h" 1
# 56 "../../include/sys/confos.h" 
# 1 "../../nutbld-13g-gcc/include/cfg/eeprom.h" 1
# 57 "../../include/sys/confos.h" 2
# 72 "../../include/sys/confos.h" 
typedef struct _CONFOS CONFOS; 
#line 83 "../../include/sys/confos.h"
struct _CONFOS { u_char size;  u_char magic[2];  u_char hostname[16]; }; 
#line 85 "../../include/sys/confos.h"
extern  CONFOS confos; 
#line 90 "../../include/sys/confos.h"
extern int NutLoadConfig(void ); 
#line 91 "../../include/sys/confos.h"
extern int NutSaveConfig(void ); 
# 108 "../../os/nutinit.c" 2
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
# 109 "../../os/nutinit.c" 2
# 126 "../../os/nutinit.c" 
volatile  u_char ms62_5 = 0; 
# 1 "../../arch/avr/os/nutinit.c" 1
# 106 "../../arch/avr/os/nutinit.c" 
# 1 "../../nutbld-13g-gcc/include/cfg/memory.h" 1
# 107 "../../arch/avr/os/nutinit.c" 2
# 1 "../../nutbld-13g-gcc/include/cfg/os.h" 1
# 108 "../../arch/avr/os/nutinit.c" 2
# 1 "../../include/cfg/arch/avr.h" 1
# 77 "../../include/cfg/arch/avr.h" 
# 1 "../../nutbld-13g-gcc/include/cfg/arch/avrpio.h" 1
# 78 "../../include/cfg/arch/avr.h" 2
# 109 "../../arch/avr/os/nutinit.c" 2
# 1 "../../nutbld-13g-gcc/include/cfg/arch.h" 1
# 110 "../../arch/avr/os/nutinit.c" 2
# 144 "../../arch/avr/os/nutinit.c" 
 u_char nutmem_onchip[64]; 
#line 149 "../../arch/avr/os/nutinit.c"
 u_char idle_sleep_mode = 0xff; 
#line 264 "../../arch/avr/os/nutinit.c"
void NutInit(void ) __attribute__  (( naked ))  __attribute__  (( section ( ".init8" )  )) ; 
#line 265 "../../arch/avr/os/nutinit.c"
extern void NutAppMain(void *arg) __attribute__  (( noreturn )) ; 
# 264 "../../arch/avr/os/nutinit.c" 
# 278 "../../arch/avr/os/nutinit.c" 
static void NutInitXRAM(void ) __attribute__  (( naked , section ( ".init1" )  , used )) ; 
#line 280 "../../arch/avr/os/nutinit.c"
void NutInitXRAM(void )  {

#line 294 "../../arch/avr/os/nutinit.c"
((*((volatile unsigned char *)((0x35) + 0x20)))) = (1 << (7)) | (1 << (6)); }
 
# 294 "../../arch/avr/os/nutinit.c" 
# 308 "../../arch/avr/os/nutinit.c" 
# 325 "../../arch/avr/os/nutinit.c" 
static void FakeNicEeprom(void ) __attribute__  (( naked , section ( ".init1" )  , used )) ; 
#line 327 "../../arch/avr/os/nutinit.c"
void FakeNicEeprom(void )  {

#line 333 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x15) + 0x20)))))))))))) |= (1 << (7))); 
#line 334 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x14) + 0x20)))))))))))) |= (1 << (7))); 
#line 336 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x15) + 0x20)))))))))))) |= (1 << (6))); 
#line 337 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x14) + 0x20)))))))))))) |= (1 << (6))); 
#line 340 "../../arch/avr/os/nutinit.c"
((*((volatile unsigned char *)(0x8300)))) = 0xE1; 
#line 341 "../../arch/avr/os/nutinit.c"
((*((volatile unsigned char *)(0x8300 + 1)))) = 0x40; 
#line 345 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x35) + 0x20)))))))))))) &= (~(1 << (7)))); 
#line 353 "../../arch/avr/os/nutinit.c"
 __asm__ __volatile__ ("\n""EmuLoop:               ""\n""        ldi  r24, 0    ""\n""        ldi  r25, 0    ""\n""        sbis %0, %1    ""\n""        rjmp EmuClkClr ""\n""EmuClkSet:             ""\n""        adiw r24, 1    ""\n""        breq EmuDone   ""\n""        sbis %0, %1    ""\n""        rjmp EmuLoop   ""\n""        rjmp EmuClkSet ""\n""EmuClkClr:             ""\n""        adiw r24, 1    ""\n""        breq EmuDone   ""\n""        sbic %0, %1    ""\n""        rjmp EmuLoop   ""\n""        rjmp EmuClkClr ""\n""EmuDone:               \n\t" :  : "I"(((((unsigned int )(&(((*((volatile unsigned char *)((0x13) + 0x20)))))))) - 0x20)),"I"(5) : "r24","r25"); 
#line 379 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x35) + 0x20)))))))))))) |= (1 << (7))); 
#line 384 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x15) + 0x20)))))))))))) &= (~(1 << (7)))); 
#line 385 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x14) + 0x20)))))))))))) &= (~(1 << (7)))); 
#line 387 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x15) + 0x20)))))))))))) &= (~(1 << (6)))); 
#line 388 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x14) + 0x20)))))))))))) &= (~(1 << (6)))); }
 
#line 404 "../../arch/avr/os/nutinit.c"
void NutThreadSetSleepMode( u_char mode)  {

#line 405 "../../arch/avr/os/nutinit.c"
idle_sleep_mode = mode; }
 
#line 414 "../../arch/avr/os/nutinit.c"
void NutIdle(void *arg) __attribute__  (( noreturn )) ; 
#line 415 "../../arch/avr/os/nutinit.c"
void NutIdle(void *arg)  {

#line 417 "../../arch/avr/os/nutinit.c"

#line 417 "../../arch/avr/os/nutinit.c"
 u_char sleep_mode;
#line 420 "../../arch/avr/os/nutinit.c"
NutTimerInit(); 
#line 423 "../../arch/avr/os/nutinit.c"
NutThreadCreate("main", NutAppMain, 0, 768); 
#line 430 "../../arch/avr/os/nutinit.c"
NutThreadSetPriority(254); 
#line 431 "../../arch/avr/os/nutinit.c"
for(;;) { { 
#line 432 "../../arch/avr/os/nutinit.c"
NutThreadYield(); 
#line 433 "../../arch/avr/os/nutinit.c"
NutThreadDestroy(); 
#line 436 "../../arch/avr/os/nutinit.c"
if (idle_sleep_mode != 0xff){
{ 
#line 437 "../../arch/avr/os/nutinit.c"
sleep_mode = ((*((volatile unsigned char *)((0x35) + 0x20)))) & ((1 << (3)) | (1 << (4)) | (1 << (2))); 
#line 438 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((0x35) + 0x20)))) = ((((*((volatile unsigned char *)((0x35) + 0x20)))) & (~((1 << (3)) | (1 << (4)) | (1 << (2))))) | (idle_sleep_mode))); 
#line 441 "../../arch/avr/os/nutinit.c"
((*((volatile unsigned char *)((0x35) + 0x20)))) |= (1 << (5)); 
#line 442 "../../arch/avr/os/nutinit.c"
 __asm__ __volatile__ ("sleep""\n\t" :  : ); 
#line 443 "../../arch/avr/os/nutinit.c"
((*((volatile unsigned char *)((0x35) + 0x20)))) &= (~(1 << (5))); 
#line 444 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((0x35) + 0x20)))) = ((((*((volatile unsigned char *)((0x35) + 0x20)))) & (~((1 << (3)) | (1 << (4)) | (1 << (2))))) | (sleep_mode))); } }} } }
 
#line 451 "../../arch/avr/os/nutinit.c"
static void NutInitSP(void ) __attribute__  (( naked , section ( ".init5" )  , used )) ; 
#line 453 "../../arch/avr/os/nutinit.c"
void NutInitSP(void )  {

#line 460 "../../arch/avr/os/nutinit.c"
((*((volatile unsigned int *)((0x3D) + 0x20)))) = (( u_short )((( u_short )(0x1100 + (( u_short )28416) - 1U)))); }
 
#line 466 "../../arch/avr/os/nutinit.c"
static void NutInitHeap(void ) __attribute__  (( naked , section ( ".init5" )  , used )) ; 
#line 469 "../../arch/avr/os/nutinit.c"
void NutInitHeap()  {

#line 482 "../../arch/avr/os/nutinit.c"
if ((( u_short )(( u_short )(0x1100 + (( u_short )28416) - 1U))) - (( u_short )((&__heap_start))) > 384){
{ 
# 403 "../../arch/avr/os/nutinit.c" 
# 480 "../../arch/avr/os/nutinit.c" 
NutHeapAdd((&__heap_start), (( u_short )(( u_short )(0x1100 + (( u_short )28416) - 1U))) - 256 - (( u_short )((&__heap_start)))); } }}
 
#line 485 "../../arch/avr/os/nutinit.c"
static void NutCustomInit(void ) __attribute__  (( naked , section ( ".init1" )  , used )) ; 
# 496 "../../arch/avr/os/nutinit.c" 
# 568 "../../arch/avr/os/nutinit.c" 
void NutCustomInit(void )  {

#line 570 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)((0x09) + 0x20)))))))))))) = (7)); 
#line 572 "../../arch/avr/os/nutinit.c"
(((*((volatile unsigned char *)((((unsigned int )(&(((*((volatile unsigned char *)(0x99)))))))))))) = (7)); }
 
#line 610 "../../arch/avr/os/nutinit.c"
void NutInit(void )  {

#line 643 "../../arch/avr/os/nutinit.c"
if (NutLoadConfig()){
{ 
# 609 "../../arch/avr/os/nutinit.c" 
# 637 "../../arch/avr/os/nutinit.c" 
strcpy(confos.hostname, "ethernut"); 
#line 638 "../../arch/avr/os/nutinit.c"
NutSaveConfig(); } }
#line 643 "../../arch/avr/os/nutinit.c"
NutThreadCreate("idle", NutIdle, 0, 384); }
 
