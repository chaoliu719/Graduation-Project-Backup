

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 2 "t4a1.acc"
extern void foo(); 
# 2 "t4a1.acc" 
# 3 "t4a1.acc" 
extern void foo1(); 
#line 4 "t4a1.acc"
extern void foo2(); 
# 4 "t4a1.acc" 
# 6 "t4a1.acc" 
void foo3()  
# 28 "t4a1.c"
{



# 33 "t4a1.c"
{

#line 7 "t4a1.acc"
printf("foo3, in aspect file \n"); 
# 38 "t4a1.c"

}

# 42 "t4a1.c"

}
 
static inline void  foo3__t4a1_c_aa_temp_src__0 (void * __utac__excep_para )  ; 

#include <setjmp.h> 


# 7 "t4a1.acc" 
# 10 "t4a1.acc" 
inline void __utac_acc__t4a1__1(void )  
# 54 "t4a1.c"
{

struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
return ; 
} 





# 77 "t4a1.c"
{

#line 11 "t4a1.acc"
printf("aspect 1: before call foo\n"); 
# 11 "t4a1.acc" 
# 13 "t4a1.acc" 
printf("call foo2 inside aspect \n"); 
#line 14 "t4a1.acc"
foo2(); 
# 14 "t4a1.acc" 
# 16 "t4a1.acc" 
printf("call foo3 inside aspect \n"); 
#line 18 "t4a1.acc"
foo3__t4a1_c_aa_temp_src__0(   (void *) &  __utac__excep_var ); 
# 18 "t4a1.acc" 
# 20 "t4a1.acc" 
printf("end of aspect 1\n"); 
# 95 "t4a1.c"

}

# 99 "t4a1.c"

}
  void __vtac_acc__t4a1__2 (  struct JoinPoint * );

  void foo3 () ; 

# 106 "t4a1.c"
static inline void  foo3__t4a1_c_aa_temp_src__0 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__vtac_acc__t4a1__2(&this );
 
 } 
 } 
foo3 ( ) ;  
}
 
#include <setjmp.h> 
 
#line 24 "t4a1.acc"
inline void __utac_acc__t4a1__2(struct JoinPoint *this)  
# 123 "t4a1.c"
{



# 128 "t4a1.c"
{

# 24 "t4a1.acc" 
# 25 "t4a1.acc" 
printf("aspect 2: before call foo3 \n"); 
#line 28 "t4a1.acc"
{ 
#line 28 "t4a1.acc"

#line 28 "t4a1.acc"
 jmp_buf *p;
#line 29 "t4a1.acc"

#line 29 "t4a1.acc"
struct __UTAC__EXCEPTION *excep = ((struct __UTAC__EXCEPTION *)(this->excep_return));
#line 30 "t4a1.acc"
if ((excep->pops)){
__utac__error_stack_mgt(0, 1, (excep->pops)); }
#line 31 "t4a1.acc"
p = (( jmp_buf *)(excep->jumpbuf)); 
#line 32 "t4a1.acc"
; 
#line 32 "t4a1.acc"
(excep->prtValue) = ((unsigned long long int )(3)); 
#line 32 "t4a1.acc"
longjmp((*p), 1); } 
#line 32 "t4a1.acc"
; 
# 27 "t4a1.acc" 
# 29 "t4a1.acc" 
printf("end of aspect 2\n"); 
# 160 "t4a1.c"

}

# 164 "t4a1.c"

}
 
 void __vtac_acc__t4a1__1(void) { 



#line 11 "t4a1.acc"
printf("aspect 1: before call foo\n"); 
#line 13 "t4a1.acc"
printf("call foo2 inside aspect \n"); 
#line 14 "t4a1.acc"
foo2(); 
#line 16 "t4a1.acc"
printf("call foo3 inside aspect \n"); 
#line 18 "t4a1.acc"
foo3(); 
#line 20 "t4a1.acc"
printf("end of aspect 1\n"); }

 void __vtac_acc__t4a1__2(   struct JoinPoint *  this  )  {
 


#line 25 "t4a1.acc"
printf("aspect 2: before call foo3 \n"); 
#line 27 "t4a1.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 3);longjmp(*p, 1); }; 
#line 29 "t4a1.acc"
printf("end of aspect 2\n"); }


