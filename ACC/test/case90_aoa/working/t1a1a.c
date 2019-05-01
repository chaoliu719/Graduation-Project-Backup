

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 2 "t1a1a.acc"
extern void foo(); 
# 2 "t1a1a.acc" 
# 3 "t1a1a.acc" 
extern void foo1(); 
#line 4 "t1a1a.acc"
extern void foo2(); 
# 4 "t1a1a.acc" 
# 6 "t1a1a.acc" 
void foo3()  
# 28 "t1a1a.c"
{



# 33 "t1a1a.c"
{

#line 7 "t1a1a.acc"
printf("foo3, in aspect file \n"); 
# 38 "t1a1a.c"

}

# 42 "t1a1a.c"

}
 
static inline void  foo3__t1a1a_c_aa_temp_src__1 (void)  ; 

static inline void  foo2__t1a1a_c_aa_temp_src__0 (void)  ; 

# 7 "t1a1a.acc" 
# 12 "t1a1a.acc" 
inline void __utac_acc__t1a1a__1(void )  
# 53 "t1a1a.c"
{



# 58 "t1a1a.c"
{

#line 13 "t1a1a.acc"
printf("aspect 1: before call foo\n"); 
# 13 "t1a1a.acc" 
# 15 "t1a1a.acc" 
printf("call foo2 inside aspect \n"); 
#line 16 "t1a1a.acc"
foo2__t1a1a_c_aa_temp_src__0(); 
# 16 "t1a1a.acc" 
# 18 "t1a1a.acc" 
printf("call foo3 inside aspect \n"); 
#line 20 "t1a1a.acc"
foo3__t1a1a_c_aa_temp_src__1(); 
# 73 "t1a1a.c"

}

# 77 "t1a1a.c"

}
  void __vtac_acc__t1a1b__1 (void);

  void foo3 () ; 

# 84 "t1a1a.c"
static inline void  foo3__t1a1a_c_aa_temp_src__1 (void) {

{
__vtac_acc__t1a1b__1();

}
foo3 ( ) ;  
}
  void __vtac_acc__t1a1b__1 (void);

  void foo2 () ; 

# 97 "t1a1a.c"
static inline void  foo2__t1a1a_c_aa_temp_src__0 (void) {

{
__vtac_acc__t1a1b__1();

}
foo2 ( ) ;  
}
 
static inline void  foo3__t1a1a_c_aa_temp_src__3 (void)  ; 

static inline void  foo2__t1a1a_c_aa_temp_src__2 (void)  ; 

# 20 "t1a1a.acc" 
# 23 "t1a1a.acc" 
inline void __utac_acc__t1a1a__2(void )  
# 114 "t1a1a.c"
{



# 119 "t1a1a.c"
{

#line 24 "t1a1a.acc"
printf("aspect 2: after call foo\n"); 
# 24 "t1a1a.acc" 
# 26 "t1a1a.acc" 
printf("call foo2 inside aspect \n"); 
#line 27 "t1a1a.acc"
foo2__t1a1a_c_aa_temp_src__2(); 
# 27 "t1a1a.acc" 
# 29 "t1a1a.acc" 
printf("call foo3 inside aspect \n"); 
#line 31 "t1a1a.acc"
foo3__t1a1a_c_aa_temp_src__3(); 
# 134 "t1a1a.c"

}

# 138 "t1a1a.c"

}
  void __vtac_acc__t1a1b__1 (void);

  void foo3 () ; 

# 145 "t1a1a.c"
static inline void  foo3__t1a1a_c_aa_temp_src__3 (void) {

{
__vtac_acc__t1a1b__1();

}
foo3 ( ) ;  
}
  void __vtac_acc__t1a1b__1 (void);

  void foo2 () ; 

# 158 "t1a1a.c"
static inline void  foo2__t1a1a_c_aa_temp_src__2 (void) {

{
__vtac_acc__t1a1b__1();

}
foo2 ( ) ;  
}
 
 void __vtac_acc__t1a1a__1(void) { 



#line 13 "t1a1a.acc"
printf("aspect 1: before call foo\n"); 
#line 15 "t1a1a.acc"
printf("call foo2 inside aspect \n"); 
#line 16 "t1a1a.acc"
foo2(); 
#line 18 "t1a1a.acc"
printf("call foo3 inside aspect \n"); 
#line 20 "t1a1a.acc"
foo3(); }

 void __vtac_acc__t1a1a__2(void) { 



#line 24 "t1a1a.acc"
printf("aspect 2: after call foo\n"); 
#line 26 "t1a1a.acc"
printf("call foo2 inside aspect \n"); 
#line 27 "t1a1a.acc"
foo2(); 
#line 29 "t1a1a.acc"
printf("call foo3 inside aspect \n"); 
#line 31 "t1a1a.acc"
foo3(); }


