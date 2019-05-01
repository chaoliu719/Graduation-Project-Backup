
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


#line 1 "t1mc.mc"
int foo2(void )  
# 33 "t1mc.c"
{
# 35 "t1mc.c"
int retValue_acc;




# 41 "t1mc.c"
{

#line 2 "t1mc.mc"
printf("in foo2\n"); 
#line 3 "t1mc.mc"

# 48 "t1mc.c"
retValue_acc = 0;
# 50 "t1mc.c"
return (int )retValue_acc;
 
# 53 "t1mc.c"

}

# 57 "t1mc.c"
return (int )retValue_acc;

# 60 "t1mc.c"

}
 
int __utac__cflow_t2ac_3 ( int , int);


  void __utac_acc__t2ac__6 (  struct JoinPoint * );


int __utac__cflow_t2ac_3 ( int , int);


  void __utac_acc__t2ac__6 (  struct JoinPoint * );


int __utac__cflow_t2ac_3 ( int , int);


#include <setjmp.h> 


#line 6 "t1mc.mc"
int foo1(void )  
# 84 "t1mc.c"
{
# 86 "t1mc.c"
int retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
__utac__exception__cf_handler_set ( (void *) & __utac__excep_var, & __utac__cflow_t2ac_3 , __utac__cflow_t2ac_3(3, 0)); } 
__utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (int)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2ac_3, __utac__cflow_t2ac_3(3,0)); } 
 } 
{ extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
__utac__exception__cf_handler_set ( (void *) & __utac__excep_var, & __utac__cflow_t2ac_3 , __utac__cflow_t2ac_3(3, 0)); } 
__utac__cflow_t2ac_3 ( 1, 0 ) ; 

}

# 125 "t1mc.c"
{

#line 7 "t1mc.mc"
printf("in foo1\n"); 
#line 8 "t1mc.mc"

# 132 "t1mc.c"
retValue_acc = 0; { 
 struct JoinPoint this; 
this.excep_return =  (void *) &__utac__excep_var; 
 { 
__utac_acc__t2ac__6(&this );
 
 } 
 } 

{
extern void __utac__exception__cf_handler_free(void * exception) ; 
__utac__exception__cf_handler_free ( (void *) & __utac__excep_var); 
__utac__cflow_t2ac_3 ( 2, 0 ) ; 

}

# 149 "t1mc.c"
return (int )retValue_acc;
 
# 152 "t1mc.c"

}
 { 
 struct JoinPoint this; 
this.excep_return =  (void *) &__utac__excep_var; 
 { 
__utac_acc__t2ac__6(&this );
 
 } 
 } 

{
extern void __utac__exception__cf_handler_free(void * exception) ; 
__utac__exception__cf_handler_free ( (void *) & __utac__excep_var); 
__utac__cflow_t2ac_3 ( 2, 0 ) ; 

}

# 171 "t1mc.c"
return (int )retValue_acc;

# 174 "t1mc.c"

}
 
int __utac__cflow_t2ac_2 ( int , int);


int __utac__cflow_t2ac_2 ( int , int);


int __utac__cflow_t2ac_2 ( int , int);


static inline int  foo1__t1mc__0 (void)  ; 

#line 11 "t1mc.mc"
int foo(void )  
# 191 "t1mc.c"
{
# 193 "t1mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2ac_2, __utac__cflow_t2ac_2(3,0)); } 
 } 
__utac__cflow_t2ac_2 ( 1, 0 ) ; 

}

# 209 "t1mc.c"
{

#line 12 "t1mc.mc"
printf("in foo\n"); 
#line 13 "t1mc.mc"
foo1__t1mc__0(); 
#line 14 "t1mc.mc"
printf("end of foo\n"); 
#line 15 "t1mc.mc"

# 220 "t1mc.c"
retValue_acc = 0;
{
__utac__cflow_t2ac_2 ( 2, 0 ) ; 

}

# 227 "t1mc.c"
return (int )retValue_acc;
 
# 230 "t1mc.c"

}

{
__utac__cflow_t2ac_2 ( 2, 0 ) ; 

}

# 239 "t1mc.c"
return (int )retValue_acc;

# 242 "t1mc.c"

}
int __utac__cflow_t2ac_1 ( int , int);

int __utac__cflow_t2ac_1 ( int , int);

  int foo1 (void) ; 

# 251 "t1mc.c"
static inline int  foo1__t1mc__0 (void) {

# 254 "t1mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2ac_1, __utac__cflow_t2ac_1(3,0)); } 
 } 
__utac__cflow_t2ac_1 ( 1, 0 ) ; 

}

# 267 "t1mc.c"
retValue_acc = foo1 ( ) ;  

{
__utac__cflow_t2ac_1 ( 2, 0 ) ; 

}

# 275 "t1mc.c"
return (int )retValue_acc;
}
 
int __utac__cflow_t2ac_4 ( int , int);


int __utac__cflow_t2ac_4 ( int , int);


int __utac__cflow_t2ac_4 ( int , int);


static inline int  foo2__t1mc__2 (void)  ; 

static inline int  foo__t1mc__1 (void)  ; 

#line 18 "t1mc.mc"
int main(void )  
# 294 "t1mc.c"
{
# 296 "t1mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2ac_4, __utac__cflow_t2ac_4(3,0)); } 
 } 
__utac__cflow_t2ac_4 ( 1, 0 ) ; 

}

# 312 "t1mc.c"
{

#line 19 "t1mc.mc"
printf("call foo in main\n"); 
#line 20 "t1mc.mc"
foo__t1mc__1(); 
#line 21 "t1mc.mc"
printf("\ncall foo2 in main\n"); 
#line 22 "t1mc.mc"
foo2__t1mc__2(); 
#line 23 "t1mc.mc"

# 325 "t1mc.c"
retValue_acc = 0;
{
__utac__cflow_t2ac_4 ( 2, 0 ) ; 

}

# 332 "t1mc.c"
return (int )retValue_acc;
 
# 335 "t1mc.c"

}

{
__utac__cflow_t2ac_4 ( 2, 0 ) ; 

}

# 344 "t1mc.c"
return (int )retValue_acc;

# 347 "t1mc.c"

}
  void __utac_acc__t2ac__1 (void);
int __utac__cflow_t2ac_0(int, int);

  void __utac_acc__t2ac__2 (void);
int __utac__cflow_t2ac_1(int, int);

  void __utac_acc__t2ac__3 (void);
int __utac__cflow_t2ac_2(int, int);

  void __utac_acc__t2ac__4 (void);
int __utac__cflow_t2ac_3(int, int);

  void __utac_acc__t2ac__5 (void);
int __utac__cflow_t2ac_4(int, int);

  int foo2 (void) ; 

# 367 "t1mc.c"
static inline int  foo2__t1mc__2 (void) {

# 370 "t1mc.c"
int retValue_acc;

{
if( __utac__cflow_t2ac_0(3,0) ) { 
__utac_acc__t2ac__1();
 } 

}

{
if( __utac__cflow_t2ac_1(3,0) ) { 
__utac_acc__t2ac__2();
 } 

}

{
if( __utac__cflow_t2ac_2(3,0) ) { 
__utac_acc__t2ac__3();
 } 

}

{
if( __utac__cflow_t2ac_3(3,0) ) { 
__utac_acc__t2ac__4();
 } 

}

{
if( __utac__cflow_t2ac_4(3,0) ) { 
__utac_acc__t2ac__5();
 } 

}

# 408 "t1mc.c"
retValue_acc = foo2 ( ) ;  

# 411 "t1mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t2ac_0 ( int , int);

int __utac__cflow_t2ac_0 ( int , int);

  int foo (void) ; 

# 420 "t1mc.c"
static inline int  foo__t1mc__1 (void) {

# 423 "t1mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t2ac_0, __utac__cflow_t2ac_0(3,0)); } 
 } 
__utac__cflow_t2ac_0 ( 1, 0 ) ; 

}

# 436 "t1mc.c"
retValue_acc = foo ( ) ;  

{
__utac__cflow_t2ac_0 ( 2, 0 ) ; 

}

# 444 "t1mc.c"
return (int )retValue_acc;
}
 
