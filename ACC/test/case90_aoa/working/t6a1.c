

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 1 "t6a1.acc"
int a; 
# 1 "t6a1.acc" 
# 3 "t6a1.acc" 
extern char b; 
static inline char  b__t6a1_c_aa_temp_src__1 (char __utac__para0  )  ; 

static inline int  a__t6a1_c_aa_temp_src__0 (int* __utac__para0 ,int __utac__para1  )  ; 

#line 5 "t6a1.acc"
inline void __utac_acc__t6a1__1(void )  
# 29 "t6a1.c"
{



# 34 "t6a1.c"
{

# 5 "t6a1.acc" 
# 6 "t6a1.acc" 
printf("aspect: before set global a\n"); 
#line 7 "t6a1.acc"
printf("set a to be 9 inside advice \n"); 
# 7 "t6a1.acc" 
# 8 "t6a1.acc" 
a__t6a1_c_aa_temp_src__0(&a,(9)); 
#line 9 "t6a1.acc"
printf("in aspect 1, a = %d, b = %c \n", a, b__t6a1_c_aa_temp_src__1(b  )); 
# 47 "t6a1.c"

}

# 51 "t6a1.c"

}
  void __vtac_acc__t6a2__1 (void);


# 57 "t6a1.c"
static inline char  b__t6a1_c_aa_temp_src__1 (char __utac__para0  ) {

# 60 "t6a1.c"
char retValue_acc;

# 63 "t6a1.c"
retValue_acc = __utac__para0 ; 

{
__vtac_acc__t6a2__1();

}

# 71 "t6a1.c"
return (char )retValue_acc;
}
  void __vtac_acc__t6a1__1 (void);


# 77 "t6a1.c"
static inline int  a__t6a1_c_aa_temp_src__0 (int* __utac__para0 ,int __utac__para1  ) {

# 80 "t6a1.c"
int retValue_acc;

{
__vtac_acc__t6a1__1();

}

# 88 "t6a1.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

# 91 "t6a1.c"
return (int )retValue_acc;
}
 
 void __vtac_acc__t6a1__1(void) { 



#line 6 "t6a1.acc"
printf("aspect: before set global a\n"); 
#line 7 "t6a1.acc"
printf("set a to be 9 inside advice \n"); 
#line 8 "t6a1.acc"
a = 9; 
#line 9 "t6a1.acc"
printf("in aspect 1, a = %d, b = %c \n", a, b); }


