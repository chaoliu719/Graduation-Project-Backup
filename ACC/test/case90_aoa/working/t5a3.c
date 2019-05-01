

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 1 "t5a3.acc"
inline void __utac_acc__t5a3__1(int e)  
# 20 "t5a3.c"
{



# 25 "t5a3.c"
{

# 1 "t5a3.acc" 
# 2 "t5a3.acc" 
printf("aspect: catch an exception during call foo1 = %d\n", e); 
# 31 "t5a3.c"

}

# 35 "t5a3.c"

}
 
#line 6 "t5a3.acc"
void foo3()  
# 41 "t5a3.c"
{



# 46 "t5a3.c"
{

# 6 "t5a3.acc" 
# 7 "t5a3.acc" 
printf("in foo3\n"); 
# 52 "t5a3.c"

}

# 56 "t5a3.c"

}
 
#line 10 "t5a3.acc"
void foo4()  
# 62 "t5a3.c"
{



# 67 "t5a3.c"
{

# 10 "t5a3.acc" 
# 11 "t5a3.acc" 
printf("in foo4\n"); 
# 73 "t5a3.c"

}

# 77 "t5a3.c"

}
 
#line 14 "t5a3.acc"
extern void foo2(); 
static inline void  foo4__t5a3_c_aa_temp_src__0 (void)  ; 

#include <setjmp.h> 


# 14 "t5a3.acc" 
# 16 "t5a3.acc" 
inline void __utac_acc__t5a3__2(void )  
# 91 "t5a3.c"
{



# 96 "t5a3.c"
{

#line 17 "t5a3.acc"
printf("aspect: before calling foo2, call foo4 \n"); 
# 17 "t5a3.acc" 
# 18 "t5a3.acc" 
foo4__t5a3_c_aa_temp_src__0(); 
#line 19 "t5a3.acc"
printf("end of aspect \n"); 
# 106 "t5a3.c"

}

# 110 "t5a3.c"

}
  void __vtac_acc__t5a3__3 (void);

  void foo4 () ; 

# 117 "t5a3.c"
static inline void  foo4__t5a3_c_aa_temp_src__0 (void) {
foo4 ( ) ;  

{
__vtac_acc__t5a3__3();

}
}
 
#include <setjmp.h> 
 
# 19 "t5a3.acc" 
# 22 "t5a3.acc" 
inline void __utac_acc__t5a3__3(void )  
# 132 "t5a3.c"
{



# 137 "t5a3.c"
{

#line 23 "t5a3.acc"
printf("aspect: throw exception 4 after call foo4\n"); 
# 23 "t5a3.acc" 
# 25 "t5a3.acc" 
{ 
#line 25 "t5a3.acc"

#line 25 "t5a3.acc"
 jmp_buf *p;
#line 26 "t5a3.acc"

#line 26 "t5a3.acc"
struct __UTAC__EXCEPTION *excep = ((struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1));
#line 27 "t5a3.acc"
p = (( jmp_buf *)((excep->jumpbuf))); 
#line 28 "t5a3.acc"
longjmp((*p), 4); } 
#line 28 "t5a3.acc"
; 
# 159 "t5a3.c"

}

# 163 "t5a3.c"

}
 
 void __vtac_acc__t5a3__1(int e) {



#line 2 "t5a3.acc"
printf("aspect: catch an exception during call foo1 = %d\n", e); }

 void __vtac_acc__t5a3__2(void) { 



#line 17 "t5a3.acc"
printf("aspect: before calling foo2, call foo4 \n"); 
#line 18 "t5a3.acc"
foo4(); 
#line 19 "t5a3.acc"
printf("end of aspect \n"); }

 void __vtac_acc__t5a3__3(void) { 



#line 23 "t5a3.acc"
printf("aspect: throw exception 4 after call foo4\n"); 
#line 24 "t5a3.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 4);}; }


