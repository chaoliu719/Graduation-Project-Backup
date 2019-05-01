

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 2 "t2a1.acc"
extern void foo(); 
# 2 "t2a1.acc" 
# 3 "t2a1.acc" 
extern void foo1(); 
#line 4 "t2a1.acc"
extern void foo2(); 
# 4 "t2a1.acc" 
# 6 "t2a1.acc" 
void foo4()  
# 28 "t2a1.c"
{



# 33 "t2a1.c"
{

#line 7 "t2a1.acc"
printf("foo4, in aspect file \n"); 
# 38 "t2a1.c"

}

# 42 "t2a1.c"

}
 
static inline void  foo4__t2a1_c_aa_temp_src__0 (void)  ; 

# 7 "t2a1.acc" 
# 11 "t2a1.acc" 
void foo3()  
# 51 "t2a1.c"
{



# 56 "t2a1.c"
{

#line 12 "t2a1.acc"
printf("foo3, in aspect file \n"); 
# 12 "t2a1.acc" 
# 14 "t2a1.acc" 
printf("call foo4 in foo3\n"); 
#line 16 "t2a1.acc"
foo4__t2a1_c_aa_temp_src__0(); 
# 66 "t2a1.c"

}

# 70 "t2a1.c"

}
  void __vtac_acc__t2a1__3 (void);
int __utac__cflow_t2a1_1(int, int);

  void __vtac_acc__t2a2__1 (void);
int __utac__cflow_t2a1_1(int, int);

  void foo4 () ; 

# 81 "t2a1.c"
static inline void  foo4__t2a1_c_aa_temp_src__0 (void) {

{
if( __utac__cflow_t2a1_1(3,0) ) { 
__vtac_acc__t2a1__3();
 } 

}

{
if( __utac__cflow_t2a1_1(3,0) ) { 
__vtac_acc__t2a2__1();
 } 

}
foo4 ( ) ;  
}
 
static inline void  foo3__t2a1_c_aa_temp_src__1 (void)  ; 

# 16 "t2a1.acc" 
# 21 "t2a1.acc" 
inline void __utac_acc__t2a1__1(void )  
# 105 "t2a1.c"
{



# 110 "t2a1.c"
{

#line 22 "t2a1.acc"
printf("aspect 1: call foo1 in cflow of calling foo \n"); 
# 22 "t2a1.acc" 
# 23 "t2a1.acc" 
printf("call foo2 inside aspect 1\n"); 
#line 24 "t2a1.acc"
foo2(); 
# 24 "t2a1.acc" 
# 25 "t2a1.acc" 
printf("call foo3 inside aspect 1\n"); 
#line 26 "t2a1.acc"
foo3__t2a1_c_aa_temp_src__1(); 
# 125 "t2a1.c"

}

# 129 "t2a1.c"

}
int __utac__cflow_t2a1_1 ( int , int);

  void __vtac_acc__t2a1__2 (void);
int __utac__cflow_t2a1_0(int, int);

int __utac__cflow_t2a1_1 ( int , int);

  void foo3 () ; 

# 141 "t2a1.c"
static inline void  foo3__t2a1_c_aa_temp_src__1 (void) {

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2a1_1, __utac__cflow_t2a1_1(3,0)); } 
 } 
__utac__cflow_t2a1_1 ( 1, 0 ) ; 

}

{
if( __utac__cflow_t2a1_0(3,0) ) { 
__vtac_acc__t2a1__2();
 } 

}
foo3 ( ) ;  

{
__utac__cflow_t2a1_1 ( 2, 0 ) ; 

}
}
 
# 26 "t2a1.acc" 
# 29 "t2a1.acc" 
inline void __utac_acc__t2a1__2(void )  
# 171 "t2a1.c"
{



# 176 "t2a1.c"
{

#line 30 "t2a1.acc"
printf("aspect 2: call foo3 in cflow of calling foo \n"); 
# 181 "t2a1.c"

}

# 185 "t2a1.c"

}
 
# 30 "t2a1.acc" 
# 33 "t2a1.acc" 
inline void __utac_acc__t2a1__3(void )  
# 192 "t2a1.c"
{



# 197 "t2a1.c"
{

#line 34 "t2a1.acc"
printf("aspect 4: call foo4 in cflow of call foo3\n"); 
# 202 "t2a1.c"

}

# 206 "t2a1.c"

}
 
 void __vtac_acc__t2a1__1(void) { 



#line 22 "t2a1.acc"
printf("aspect 1: call foo1 in cflow of calling foo \n"); 
#line 23 "t2a1.acc"
printf("call foo2 inside aspect 1\n"); 
#line 24 "t2a1.acc"
foo2(); 
#line 25 "t2a1.acc"
printf("call foo3 inside aspect 1\n"); 
#line 26 "t2a1.acc"
foo3(); }

 void __vtac_acc__t2a1__2(void) { 



#line 30 "t2a1.acc"
printf("aspect 2: call foo3 in cflow of calling foo \n"); }

 void __vtac_acc__t2a1__3(void) { 



#line 34 "t2a1.acc"
printf("aspect 4: call foo4 in cflow of call foo3\n"); }

 int __utac__cflow_t2a1_1 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t2a1_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 

