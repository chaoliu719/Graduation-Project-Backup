

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 1 "t5a4.acc"
inline void __utac_acc__t5a4__1(int e)  
# 20 "t5a4.c"
{



# 25 "t5a4.c"
{

# 1 "t5a4.acc" 
# 2 "t5a4.acc" 
printf("aspect: catch an exception during execution foo3 = %d\n", e); 
# 31 "t5a4.c"

}

# 35 "t5a4.c"

}
 
#line 5 "t5a4.acc"
void foo4()  
# 41 "t5a4.c"
{



# 46 "t5a4.c"
{

# 5 "t5a4.acc" 
# 6 "t5a4.acc" 
printf("in foo4\n"); 
# 52 "t5a4.c"

}

# 56 "t5a4.c"

}
 
void __vtac_acc__t5a4__1 (int  ) ;


;


static inline void  foo4__t5a4_c_aa_temp_src__0 (void)  ; 

#include <setjmp.h> 


#line 9 "t5a4.acc"
void foo3()  
# 73 "t5a4.c"
{int __utac__try_mask = 0; 

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
 __vtac_acc__t5a4__1 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 
return ; 

 } 
} 

}

# 104 "t5a4.c"
{

# 9 "t5a4.acc" 
# 10 "t5a4.acc" 
printf("in foo3, call foo4 \n"); 
#line 11 "t5a4.acc"
foo4__t5a4_c_aa_temp_src__0(); 
# 112 "t5a4.c"

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 125 "t5a4.c"

}
  void __vtac_acc__t5a4__3 (void);

  void foo4 () ; 

# 132 "t5a4.c"
static inline void  foo4__t5a4_c_aa_temp_src__0 (void) {

{
__vtac_acc__t5a4__3();

}
foo4 ( ) ;  
}
 
# 11 "t5a4.acc" 
# 14 "t5a4.acc" 
extern void foo2(); 
#line 16 "t5a4.acc"
inline void __utac_acc__t5a4__2(void )  
# 147 "t5a4.c"
{



# 152 "t5a4.c"
{

# 16 "t5a4.acc" 
# 17 "t5a4.acc" 
printf("aspect: around call foo1, call foo3 directly \n"); 
#line 18 "t5a4.acc"
foo3(); 
# 18 "t5a4.acc" 
# 19 "t5a4.acc" 
printf("end of aspect \n"); 
# 163 "t5a4.c"

}

# 167 "t5a4.c"

}
 
#include <setjmp.h> 
 
#line 22 "t5a4.acc"
inline void __utac_acc__t5a4__3(void )  
# 175 "t5a4.c"
{



# 180 "t5a4.c"
{

# 22 "t5a4.acc" 
# 23 "t5a4.acc" 
printf("aspect: before call foo4, throw exception 5\n"); 
#line 25 "t5a4.acc"
{ 
#line 25 "t5a4.acc"

#line 25 "t5a4.acc"
 jmp_buf *p;
#line 26 "t5a4.acc"

#line 26 "t5a4.acc"
struct __UTAC__EXCEPTION *excep = ((struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1));
#line 27 "t5a4.acc"
p = (( jmp_buf *)((excep->jumpbuf))); 
#line 28 "t5a4.acc"
longjmp((*p), 5); } 
#line 28 "t5a4.acc"
; 
# 202 "t5a4.c"

}

# 206 "t5a4.c"

}
 
 void __vtac_acc__t5a4__1(int e) {



#line 2 "t5a4.acc"
printf("aspect: catch an exception during execution foo3 = %d\n", e); }

 void __vtac_acc__t5a4__2(void) { 



#line 17 "t5a4.acc"
printf("aspect: around call foo1, call foo3 directly \n"); 
#line 18 "t5a4.acc"
foo3(); 
#line 19 "t5a4.acc"
printf("end of aspect \n"); }

 void __vtac_acc__t5a4__3(void) { 



#line 23 "t5a4.acc"
printf("aspect: before call foo4, throw exception 5\n"); 
#line 24 "t5a4.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 5);}; }


