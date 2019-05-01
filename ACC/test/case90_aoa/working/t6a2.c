

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 1 "t6a2.acc"
extern int a; 
# 1 "t6a2.acc" 
# 3 "t6a2.acc" 
char b = 'b'; 
static inline char  b__t6a2_c_aa_temp_src__0 (char __utac__para0  )  ; 

#line 5 "t6a2.acc"
inline void __utac_acc__t6a2__1(void )  
# 27 "t6a2.c"
{



# 32 "t6a2.c"
{

# 5 "t6a2.acc" 
# 6 "t6a2.acc" 
printf("aspect 2: after get global b\n"); 
#line 7 "t6a2.acc"
printf("set b to be 't' inside advice \n"); 
# 7 "t6a2.acc" 
# 8 "t6a2.acc" 
b = 't'; 
#line 9 "t6a2.acc"
printf("in aspect 2, a = %d, b = %c \n", a, b__t6a2_c_aa_temp_src__0(b  )); 
# 45 "t6a2.c"

}

# 49 "t6a2.c"

}
  void __vtac_acc__t6a2__1 (void);


# 55 "t6a2.c"
static inline char  b__t6a2_c_aa_temp_src__0 (char __utac__para0  ) {

# 58 "t6a2.c"
char retValue_acc;

# 61 "t6a2.c"
retValue_acc = __utac__para0 ; 

{
__vtac_acc__t6a2__1();

}

# 69 "t6a2.c"
return (char )retValue_acc;
}
 
 void __vtac_acc__t6a2__1(void) { 



#line 6 "t6a2.acc"
printf("aspect 2: after get global b\n"); 
#line 7 "t6a2.acc"
printf("set b to be 't' inside advice \n"); 
#line 8 "t6a2.acc"
b = 't'; 
#line 9 "t6a2.acc"
printf("in aspect 2, a = %d, b = %c \n", a, b); }


