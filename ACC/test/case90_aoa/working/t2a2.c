

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 2 "t2a2.acc"
extern void foo3(); 
# 2 "t2a2.acc" 
# 3 "t2a2.acc" 
extern void foo4(); 
#line 6 "t2a2.acc"
inline void __utac_acc__t2a2__1(void )  
# 25 "t2a2.c"
{



# 30 "t2a2.c"
{

# 6 "t2a2.acc" 
# 7 "t2a2.acc" 
printf("aspect 3: call foo4 in cflow of call foo3 \n"); 
# 36 "t2a2.c"

}

# 40 "t2a2.c"

}
 
 void __vtac_acc__t2a2__1(void) { 



#line 7 "t2a2.acc"
printf("aspect 3: call foo4 in cflow of call foo3 \n"); }


