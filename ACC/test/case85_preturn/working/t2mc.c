
struct JoinPoint { 
	void** (*fp) (struct JoinPoint *);
	void ** args;
	int argsCount;
	const char ** argsType;
	 void * (*arg)(int, struct JoinPoint *); 
	 const char * (*argType)(int , struct JoinPoint *); 
	void ** retValue;
	const char * retType;
	const char * funcName ;
	const char * targetName ;
	const char * fileName ;
	const char * kind ;
	void * excep_return ;
};

 struct __UTAC__EXCEPTION {
	void * jumpbuf ;
	unsigned long long int prtValue ;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next; 
	} * cflowfuncs; 
}; 


#line 1 "t2mc.mc"
int foo4(void )  
# 33 "t2mc.c"
{
# 35 "t2mc.c"
int retValue_acc;




# 41 "t2mc.c"
{

#line 2 "t2mc.mc"
printf("\t\t\tin foo4\n\n"); 
#line 3 "t2mc.mc"

# 48 "t2mc.c"
retValue_acc = 0;
# 50 "t2mc.c"
return (int )retValue_acc;
 
# 53 "t2mc.c"

}

# 57 "t2mc.c"
return (int )retValue_acc;

# 60 "t2mc.c"

}
 
  void __utac_acc__t8ac__5 (  struct JoinPoint * );
int __utac__cflow_t8ac_1(int, int);


  void __utac_acc__t8ac__5 (  struct JoinPoint * );
int __utac__cflow_t8ac_1(int, int);


static inline int  foo4__t2mc__0 (void)  ; 

#include <setjmp.h> 


#line 6 "t2mc.mc"
int foo3(void )  
# 79 "t2mc.c"
{
# 81 "t2mc.c"
int retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (int)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





# 106 "t2mc.c"
{

#line 7 "t2mc.mc"
printf("\t\tin foo3\n"); 
#line 8 "t2mc.mc"
printf("\t\tcall foo4 in foo3\n"); 
#line 9 "t2mc.mc"
foo4__t2mc__0(); 
#line 10 "t2mc.mc"
printf("\t\tend of foo3\n"); 
#line 11 "t2mc.mc"

# 119 "t2mc.c"
retValue_acc = 0; { 
 struct JoinPoint this; 
this.excep_return =  (void *) &__utac__excep_var; 
 { 
if( __utac__cflow_t8ac_1(3,0) ) { 
__utac_acc__t8ac__5(&this );
 } 
 
 } 
 } 

# 131 "t2mc.c"
return (int )retValue_acc;
 
# 134 "t2mc.c"

}
 { 
 struct JoinPoint this; 
this.excep_return =  (void *) &__utac__excep_var; 
 { 
if( __utac__cflow_t8ac_1(3,0) ) { 
__utac_acc__t8ac__5(&this );
 } 
 
 } 
 } 

# 148 "t2mc.c"
return (int )retValue_acc;

# 151 "t2mc.c"

}
  void __utac_acc__t8ac__2 (void);
int __utac__cflow_t8ac_0(int, int);

  void __utac_acc__t8ac__3 (void);
int __utac__cflow_t8ac_1(int, int);

  void __utac_acc__t8ac__4 (void);
int __utac__cflow_t8ac_2(int, int);

  int foo4 (void) ; 

# 165 "t2mc.c"
static inline int  foo4__t2mc__0 (void) {

# 168 "t2mc.c"
int retValue_acc;

{
if( __utac__cflow_t8ac_0(3,0) ) { 
__utac_acc__t8ac__2();
 } 

}

{
if( __utac__cflow_t8ac_1(3,0) ) { 
__utac_acc__t8ac__3();
 } 

}

{
if( __utac__cflow_t8ac_2(3,0) ) { 
__utac_acc__t8ac__4();
 } 

}

# 192 "t2mc.c"
retValue_acc = foo4 ( ) ;  

# 195 "t2mc.c"
return (int )retValue_acc;
}
 
static inline int  foo4__t2mc__2 (void)  ; 

static inline int  foo3__t2mc__1 (void)  ; 

#line 14 "t2mc.mc"
int foo2(void )  
# 205 "t2mc.c"
{
# 207 "t2mc.c"
int retValue_acc;




# 213 "t2mc.c"
{

#line 15 "t2mc.mc"
printf("\tin foo2\n"); 
#line 16 "t2mc.mc"
printf("\tcall foo3 in foo2\n"); 
#line 17 "t2mc.mc"
foo3__t2mc__1(); 
#line 18 "t2mc.mc"
printf("\tcall foo4 in foo2\n"); 
#line 19 "t2mc.mc"
foo4__t2mc__2(); 
#line 20 "t2mc.mc"
printf("\tend of foo2\n"); 
#line 21 "t2mc.mc"

# 230 "t2mc.c"
retValue_acc = 0;
# 232 "t2mc.c"
return (int )retValue_acc;
 
# 235 "t2mc.c"

}

# 239 "t2mc.c"
return (int )retValue_acc;

# 242 "t2mc.c"

}
  void __utac_acc__t8ac__2 (void);
int __utac__cflow_t8ac_0(int, int);

  void __utac_acc__t8ac__3 (void);
int __utac__cflow_t8ac_1(int, int);

  void __utac_acc__t8ac__4 (void);
int __utac__cflow_t8ac_2(int, int);

  int foo4 (void) ; 

# 256 "t2mc.c"
static inline int  foo4__t2mc__2 (void) {

# 259 "t2mc.c"
int retValue_acc;

{
if( __utac__cflow_t8ac_0(3,0) ) { 
__utac_acc__t8ac__2();
 } 

}

{
if( __utac__cflow_t8ac_1(3,0) ) { 
__utac_acc__t8ac__3();
 } 

}

{
if( __utac__cflow_t8ac_2(3,0) ) { 
__utac_acc__t8ac__4();
 } 

}

# 283 "t2mc.c"
retValue_acc = foo4 ( ) ;  

# 286 "t2mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t8ac_2 ( int , int);

int __utac__cflow_t8ac_2 ( int , int);

  int foo3 (void) ; 

# 295 "t2mc.c"
static inline int  foo3__t2mc__1 (void) {

# 298 "t2mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t8ac_2, __utac__cflow_t8ac_2(3,0)); } 
 } 
__utac__cflow_t8ac_2 ( 1, 0 ) ; 

}

# 311 "t2mc.c"
retValue_acc = foo3 ( ) ;  

{
__utac__cflow_t8ac_2 ( 2, 0 ) ; 

}

# 319 "t2mc.c"
return (int )retValue_acc;
}
 
static inline int  foo4__t2mc__5 (void)  ; 

static inline int  foo3__t2mc__4 (void)  ; 

static inline int  foo2__t2mc__3 (void)  ; 

#line 24 "t2mc.mc"
int foo1(void )  
# 331 "t2mc.c"
{
# 333 "t2mc.c"
int retValue_acc;




# 339 "t2mc.c"
{

#line 25 "t2mc.mc"
printf("in foo1\n"); 
#line 26 "t2mc.mc"
printf("call foo2 in foo1\n"); 
#line 27 "t2mc.mc"
foo2__t2mc__3(); 
#line 28 "t2mc.mc"
printf("call foo3 in foo1\n"); 
#line 29 "t2mc.mc"
foo3__t2mc__4(); 
#line 30 "t2mc.mc"
printf("call foo4 in foo1\n"); 
#line 31 "t2mc.mc"
foo4__t2mc__5(); 
#line 32 "t2mc.mc"
printf("end of foo1\n"); 
#line 33 "t2mc.mc"

# 360 "t2mc.c"
retValue_acc = 0;
# 362 "t2mc.c"
return (int )retValue_acc;
 
# 365 "t2mc.c"

}

# 369 "t2mc.c"
return (int )retValue_acc;

# 372 "t2mc.c"

}
  void __utac_acc__t8ac__2 (void);
int __utac__cflow_t8ac_0(int, int);

  void __utac_acc__t8ac__3 (void);
int __utac__cflow_t8ac_1(int, int);

  void __utac_acc__t8ac__4 (void);
int __utac__cflow_t8ac_2(int, int);

  int foo4 (void) ; 

# 386 "t2mc.c"
static inline int  foo4__t2mc__5 (void) {

# 389 "t2mc.c"
int retValue_acc;

{
if( __utac__cflow_t8ac_0(3,0) ) { 
__utac_acc__t8ac__2();
 } 

}

{
if( __utac__cflow_t8ac_1(3,0) ) { 
__utac_acc__t8ac__3();
 } 

}

{
if( __utac__cflow_t8ac_2(3,0) ) { 
__utac_acc__t8ac__4();
 } 

}

# 413 "t2mc.c"
retValue_acc = foo4 ( ) ;  

# 416 "t2mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t8ac_2 ( int , int);

int __utac__cflow_t8ac_2 ( int , int);

  int foo3 (void) ; 

# 425 "t2mc.c"
static inline int  foo3__t2mc__4 (void) {

# 428 "t2mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t8ac_2, __utac__cflow_t8ac_2(3,0)); } 
 } 
__utac__cflow_t8ac_2 ( 1, 0 ) ; 

}

# 441 "t2mc.c"
retValue_acc = foo3 ( ) ;  

{
__utac__cflow_t8ac_2 ( 2, 0 ) ; 

}

# 449 "t2mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t8ac_1 ( int , int);

int __utac__cflow_t8ac_1 ( int , int);

  int foo2 (void) ; 

# 458 "t2mc.c"
static inline int  foo2__t2mc__3 (void) {

# 461 "t2mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t8ac_1, __utac__cflow_t8ac_1(3,0)); } 
 } 
__utac__cflow_t8ac_1 ( 1, 0 ) ; 

}

# 474 "t2mc.c"
retValue_acc = foo2 ( ) ;  

{
__utac__cflow_t8ac_1 ( 2, 0 ) ; 

}

# 482 "t2mc.c"
return (int )retValue_acc;
}
 
static inline int  foo1__t2mc__6 (void)  ; 

#line 36 "t2mc.mc"
int main(void )  
# 490 "t2mc.c"
{
# 492 "t2mc.c"
int retValue_acc;




# 498 "t2mc.c"
{

#line 37 "t2mc.mc"
printf("call foo1 in main\n"); 
#line 38 "t2mc.mc"
foo1__t2mc__6(); 
#line 39 "t2mc.mc"
printf("end of main\n"); 
#line 40 "t2mc.mc"

# 509 "t2mc.c"
retValue_acc = 0;
# 511 "t2mc.c"
return (int )retValue_acc;
 
# 514 "t2mc.c"

}

# 518 "t2mc.c"
return (int )retValue_acc;

# 521 "t2mc.c"

}
int __utac__cflow_t8ac_0 ( int , int);

int __utac__cflow_t8ac_0 ( int , int);

  int foo1 (void) ; 

# 530 "t2mc.c"
static inline int  foo1__t2mc__6 (void) {

# 533 "t2mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t8ac_0, __utac__cflow_t8ac_0(3,0)); } 
 } 
__utac__cflow_t8ac_0 ( 1, 0 ) ; 

}

# 546 "t2mc.c"
retValue_acc = foo1 ( ) ;  

{
__utac__cflow_t8ac_0 ( 2, 0 ) ; 

}

# 554 "t2mc.c"
return (int )retValue_acc;
}
 
