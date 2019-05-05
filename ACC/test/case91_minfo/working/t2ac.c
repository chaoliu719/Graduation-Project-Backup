

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 1 "t2ac.acc"
extern void foo(); 
static inline void  foo__t2ac_c_aa_temp_src__0 (void)  ; 

# 1 "t2ac.acc" 
# 3 "t2ac.acc" 
void foo3()  
# 25 "t2ac.c"
{



# 30 "t2ac.c"
{

#line 5 "t2ac.acc"
foo__t2ac_c_aa_temp_src__0(); 
# 35 "t2ac.c"

}

# 39 "t2ac.c"

}
  void __vtac_acc__t1ac__1 (void);

  void __vtac_acc__t2ac__1 (void);

  void foo () ; 

# 48 "t2ac.c"
static inline void  foo__t2ac_c_aa_temp_src__0 (void) {

{
__vtac_acc__t1ac__1();

}
foo ( ) ;  

{
__vtac_acc__t2ac__1();

}
}
 
# 5 "t2ac.acc" 
# 8 "t2ac.acc" 
inline void __utac_acc__t2ac__1(void )  
# 66 "t2ac.c"
{



# 71 "t2ac.c"
{

# 74 "t2ac.c"

}

# 78 "t2ac.c"

}
 
 void __vtac_acc__t2ac__1(void) { 


}


