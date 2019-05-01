

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 1 "t5a1.acc"
inline void __utac_acc__t5a1__1(int e)  
# 20 "t5a1.c"
{



# 25 "t5a1.c"
{

# 1 "t5a1.acc" 
# 2 "t5a1.acc" 
printf("aspect: catch an exception during call foo2 = %d\n", e); 
# 31 "t5a1.c"

}

# 35 "t5a1.c"

}
 
#line 6 "t5a1.acc"
void foo3()  
# 41 "t5a1.c"
{



# 46 "t5a1.c"
{

# 6 "t5a1.acc" 
# 7 "t5a1.acc" 
printf("in foo3\n"); 
# 52 "t5a1.c"

}

# 56 "t5a1.c"

}
 
#line 10 "t5a1.acc"
extern void foo2(); 
static inline void  foo2__t5a1_c_aa_temp_src__0 (void)  ; 

#include <setjmp.h> 


# 10 "t5a1.acc" 
# 12 "t5a1.acc" 
inline void __utac_acc__t5a1__2(void )  
# 70 "t5a1.c"
{



# 75 "t5a1.c"
{

#line 13 "t5a1.acc"
printf("aspect: before calling foo1, call foo2 \n"); 
# 13 "t5a1.acc" 
# 14 "t5a1.acc" 
foo2__t5a1_c_aa_temp_src__0(); 
#line 15 "t5a1.acc"
printf("end of aspect \n"); 
# 85 "t5a1.c"

}

# 89 "t5a1.c"

}
void __vtac_acc__t5a1__1 (int  ) ;

;

  void foo2 () ; 

# 98 "t5a1.c"
static inline void  foo2__t5a1_c_aa_temp_src__0 (void) {
int __utac__try_mask = 0; 

 int __utac__try_jmp_ret_1 = 0; 
 jmp_buf __utac__try_jmpbuf_1 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_1 = { & __utac__try_jmpbuf_1 , 0, 0 }; 
 
{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_1 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (1 - 1 ) ; 
if (__utac__try_jmp_ret_1 = setjmp(__utac__try_jmpbuf_1)) { 
__utac__try_poplevel = 0; 
for(i = 1 - 1 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __vtac_acc__t5a1__1 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 
return ; 

 } 
} 

}
foo2 ( ) ;  

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}
}
 
#include <setjmp.h> 
 
# 15 "t5a1.acc" 
# 18 "t5a1.acc" 
inline void __utac_acc__t5a1__3(void )  
# 143 "t5a1.c"
{



# 148 "t5a1.c"
{

#line 19 "t5a1.acc"
printf("aspect: after calling foo3, throw exception 4\n"); 
# 19 "t5a1.acc" 
# 21 "t5a1.acc" 
{ 
#line 21 "t5a1.acc"

#line 21 "t5a1.acc"
 jmp_buf *p;
#line 22 "t5a1.acc"

#line 22 "t5a1.acc"
struct __UTAC__EXCEPTION *excep = ((struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1));
#line 23 "t5a1.acc"
p = (( jmp_buf *)((excep->jumpbuf))); 
#line 24 "t5a1.acc"
longjmp((*p), 4); } 
#line 24 "t5a1.acc"
; 
# 170 "t5a1.c"

}

# 174 "t5a1.c"

}
 
 void __vtac_acc__t5a1__1(int e) {



#line 2 "t5a1.acc"
printf("aspect: catch an exception during call foo2 = %d\n", e); }

 void __vtac_acc__t5a1__2(void) { 



#line 13 "t5a1.acc"
printf("aspect: before calling foo1, call foo2 \n"); 
#line 14 "t5a1.acc"
foo2(); 
#line 15 "t5a1.acc"
printf("end of aspect \n"); }

 void __vtac_acc__t5a1__3(void) { 



#line 19 "t5a1.acc"
printf("aspect: after calling foo3, throw exception 4\n"); 
#line 20 "t5a1.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 4);}; }


