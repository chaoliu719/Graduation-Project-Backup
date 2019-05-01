

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 2 "t1a2a.acc"
extern void foo(); 
# 2 "t1a2a.acc" 
# 3 "t1a2a.acc" 
extern void foo1(); 
#line 4 "t1a2a.acc"
extern void foo2(); 
  void __vtac_acc__t1a2b__1 (void);


# 4 "t1a2a.acc" 
# 6 "t1a2a.acc" 
void foo3()  
# 31 "t1a2a.c"
{



{
__vtac_acc__t1a2b__1();

}

# 41 "t1a2a.c"
{

#line 7 "t1a2a.acc"
printf("foo3, in aspect file \n"); 
# 46 "t1a2a.c"

}

# 50 "t1a2a.c"

}
 
# 7 "t1a2a.acc" 
# 12 "t1a2a.acc" 
inline void __utac_acc__t1a2a__1(void )  
# 57 "t1a2a.c"
{



# 62 "t1a2a.c"
{

#line 13 "t1a2a.acc"
printf("aspect 1: before execution foo\n"); 
# 13 "t1a2a.acc" 
# 15 "t1a2a.acc" 
printf("call foo2 inside aspect \n"); 
#line 16 "t1a2a.acc"
foo2(); 
# 16 "t1a2a.acc" 
# 18 "t1a2a.acc" 
printf("call foo3 inside aspect \n"); 
#line 20 "t1a2a.acc"
foo3(); 
# 77 "t1a2a.c"

}

# 81 "t1a2a.c"

}
 
# 20 "t1a2a.acc" 
# 23 "t1a2a.acc" 
inline void __utac_acc__t1a2a__2(void )  
# 88 "t1a2a.c"
{



# 93 "t1a2a.c"
{

#line 24 "t1a2a.acc"
printf("aspect 2: after exeuction foo\n"); 
# 24 "t1a2a.acc" 
# 26 "t1a2a.acc" 
printf("call foo2 inside aspect \n"); 
#line 27 "t1a2a.acc"
foo2(); 
# 27 "t1a2a.acc" 
# 29 "t1a2a.acc" 
printf("call foo3 inside aspect \n"); 
#line 31 "t1a2a.acc"
foo3(); 
# 108 "t1a2a.c"

}

# 112 "t1a2a.c"

}
 
 void __vtac_acc__t1a2a__1(void) { 



#line 13 "t1a2a.acc"
printf("aspect 1: before execution foo\n"); 
#line 15 "t1a2a.acc"
printf("call foo2 inside aspect \n"); 
#line 16 "t1a2a.acc"
foo2(); 
#line 18 "t1a2a.acc"
printf("call foo3 inside aspect \n"); 
#line 20 "t1a2a.acc"
foo3(); }

 void __vtac_acc__t1a2a__2(void) { 



#line 24 "t1a2a.acc"
printf("aspect 2: after exeuction foo\n"); 
#line 26 "t1a2a.acc"
printf("call foo2 inside aspect \n"); 
#line 27 "t1a2a.acc"
foo2(); 
#line 29 "t1a2a.acc"
printf("call foo3 inside aspect \n"); 
#line 31 "t1a2a.acc"
foo3(); }


