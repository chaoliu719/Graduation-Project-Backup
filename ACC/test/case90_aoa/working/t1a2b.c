

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 2 "t1a2b.acc"
extern void foo(); 
# 2 "t1a2b.acc" 
# 3 "t1a2b.acc" 
extern void foo1(); 
#line 4 "t1a2b.acc"
extern void foo2(); 
# 4 "t1a2b.acc" 
# 6 "t1a2b.acc" 
inline void __utac_acc__t1a2b__1(void )  
# 28 "t1a2b.c"
{



# 33 "t1a2b.c"
{

#line 7 "t1a2b.acc"
printf("aspect 3: before execution foo3 or before execution foo2\n"); 
# 38 "t1a2b.c"

}

# 42 "t1a2b.c"

}
 
 void __vtac_acc__t1a2b__1(void) { 



#line 7 "t1a2b.acc"
printf("aspect 3: before execution foo3 or before execution foo2\n"); }


