
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


#line 1 "t7mc.mc"
int foo4(int i)  
# 33 "t7mc.c"
{
# 35 "t7mc.c"
int retValue_acc;




# 41 "t7mc.c"
{

#line 2 "t7mc.mc"
printf("in foo4\n"); 
#line 3 "t7mc.mc"

# 48 "t7mc.c"
retValue_acc = i;
# 50 "t7mc.c"
return (int )retValue_acc;
 
# 53 "t7mc.c"

}

# 57 "t7mc.c"
return (int )retValue_acc;

# 60 "t7mc.c"

}
 
int __utac__cflow_t7a6_4 ( int , int);


int __utac__cflow_t7a6_4 ( int , int);


int __utac__cflow_t7a6_4 ( int , int);


#line 6 "t7mc.mc"
int foo3(int i)  
# 75 "t7mc.c"
{
# 77 "t7mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_4, __utac__cflow_t7a6_4(3,0)); } 
 } 
__utac__cflow_t7a6_4 ( 1, 0 ) ; 

}

# 93 "t7mc.c"
{

#line 7 "t7mc.mc"
printf("\t\t\t in foo3\n"); 
#line 8 "t7mc.mc"

# 100 "t7mc.c"
retValue_acc = i;
{
__utac__cflow_t7a6_4 ( 2, 0 ) ; 

}

# 107 "t7mc.c"
return (int )retValue_acc;
 
# 110 "t7mc.c"

}

{
__utac__cflow_t7a6_4 ( 2, 0 ) ; 

}

# 119 "t7mc.c"
return (int )retValue_acc;

# 122 "t7mc.c"

}
 
void __utac_acc__t7a6__4 (int , struct JoinPoint *  ) ;


void __utac_acc__t7a6__3 (int  ) ;


void __utac_acc__t7a6__2 (int  ) ;


int __utac__cflow_t7a6_3 ( int , int);


int __utac__cflow_t7a6_3 ( int , int);


;


;


;


int __utac__cflow_t7a6_3 ( int , int);


;


;


;


static inline int  foo3__t7mc__0 (int i  )  ; 

#include <setjmp.h> 


#line 11 "t7mc.mc"
int foo2(int i)  
# 169 "t7mc.c"
{
# 171 "t7mc.c"
int retValue_acc;
int __utac__try_mask = 0; 

 int __utac__try_jmp_ret_1 = 0; 
 jmp_buf __utac__try_jmpbuf_1 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_1 = { & __utac__try_jmpbuf_1 , 0, 0 }; 
 
 int __utac__try_jmp_ret_2 = 0; 
 jmp_buf __utac__try_jmpbuf_2 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_2 = { & __utac__try_jmpbuf_2 , 0, 0 }; 
 
 int __utac__try_jmp_ret_3 = 0; 
 jmp_buf __utac__try_jmpbuf_3 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_3 = { & __utac__try_jmpbuf_3 , 0, 0 }; 
 

struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
__utac__exception__cf_handler_set ( (void *) & __utac__excep_var, & __utac__cflow_t7a6_3 , __utac__cflow_t7a6_3(3, 0)); } 
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
 struct JoinPoint this; 
this.excep_return =  (void *) &__utac__excep_var; 
 { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_3 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (3 - 3 ) ; 
 ((struct __UTAC__EXCEPTION *)(this.excep_return))->pops  ++ ;
if (__utac__try_jmp_ret_3 = setjmp(__utac__try_jmpbuf_3)) { 
__utac__try_poplevel = 0; 
for(i = 3 - 3 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 ((struct __UTAC__EXCEPTION *)(this.excep_return))->pops  = __utac__try_poplevel ; 
 __utac_acc__t7a6__4 ( __utac__try_jmp_ret_3 ,  & this  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_3, 1 , __utac__try_poplevel ); 

# 230 "t7mc.c"
return ( int  ) retValue_acc ; 

 } 
} 
 
 } 
 } 

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_2 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (3 - 2 ) ; 
if (__utac__try_jmp_ret_2 = setjmp(__utac__try_jmpbuf_2)) { 
__utac__try_poplevel = 0; 
for(i = 3 - 2 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t7a6__3 ( __utac__try_jmp_ret_2  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_2, 1 , __utac__try_poplevel ); 

# 254 "t7mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_1 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (3 - 1 ) ; 
if (__utac__try_jmp_ret_1 = setjmp(__utac__try_jmpbuf_1)) { 
__utac__try_poplevel = 0; 
for(i = 3 - 1 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t7a6__2 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 277 "t7mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_3, __utac__cflow_t7a6_3(3,0)); } 
 } 
{ extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
__utac__exception__cf_handler_set ( (void *) & __utac__excep_var, & __utac__cflow_t7a6_3 , __utac__cflow_t7a6_3(3, 0)); } 
__utac__cflow_t7a6_3 ( 1, 0 ) ; 

}

# 297 "t7mc.c"
{

#line 12 "t7mc.mc"
printf("\t\t\t in foo2\n"); 
#line 13 "t7mc.mc"
foo3__t7mc__0(i); 
#line 14 "t7mc.mc"
printf("\t\t\t end of foo2\n"); 
#line 15 "t7mc.mc"

# 308 "t7mc.c"
retValue_acc = i;
{
extern void __utac__exception__cf_handler_free(void * exception) ; 
__utac__exception__cf_handler_free ( (void *) & __utac__excep_var); 
__utac__cflow_t7a6_3 ( 2, 0 ) ; 

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 344 "t7mc.c"
return (int )retValue_acc;
 
# 347 "t7mc.c"

}

{
extern void __utac__exception__cf_handler_free(void * exception) ; 
__utac__exception__cf_handler_free ( (void *) & __utac__excep_var); 
__utac__cflow_t7a6_3 ( 2, 0 ) ; 

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 385 "t7mc.c"
return (int )retValue_acc;

# 388 "t7mc.c"

}
int __utac__cflow_t7a6_8 ( int , int);

  void __utac_acc__t7a6__1 (void);

int __utac__cflow_t7a6_8 ( int , int);

  int foo3 (int i  ) ; 

# 399 "t7mc.c"
static inline int  foo3__t7mc__0 (int i  ) {

# 402 "t7mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_8, __utac__cflow_t7a6_8(3,0)); } 
 } 
__utac__cflow_t7a6_8 ( 1, 0 ) ; 

}

{
__utac_acc__t7a6__1();

}

# 420 "t7mc.c"
retValue_acc = foo3 ( i ) ;  

{
__utac__cflow_t7a6_8 ( 2, 0 ) ; 

}

# 428 "t7mc.c"
return (int )retValue_acc;
}
 
int __utac__cflow_t7a6_2 ( int , int);


int __utac__cflow_t7a6_2 ( int , int);


int __utac__cflow_t7a6_2 ( int , int);


static inline int  foo2__t7mc__1 (int i  )  ; 

#line 18 "t7mc.mc"
int foo1(int i)  
# 445 "t7mc.c"
{
# 447 "t7mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_2, __utac__cflow_t7a6_2(3,0)); } 
 } 
__utac__cflow_t7a6_2 ( 1, 0 ) ; 

}

# 463 "t7mc.c"
{

#line 19 "t7mc.mc"
printf("\t\t in foo1\n"); 
#line 20 "t7mc.mc"
foo2__t7mc__1(i); 
#line 21 "t7mc.mc"
printf("\t\t end of foo1\n"); 
#line 22 "t7mc.mc"

# 474 "t7mc.c"
retValue_acc = i;
{
__utac__cflow_t7a6_2 ( 2, 0 ) ; 

}

# 481 "t7mc.c"
return (int )retValue_acc;
 
# 484 "t7mc.c"

}

{
__utac__cflow_t7a6_2 ( 2, 0 ) ; 

}

# 493 "t7mc.c"
return (int )retValue_acc;

# 496 "t7mc.c"

}
int __utac__cflow_t7a6_7 ( int , int);

int __utac__cflow_t7a6_7 ( int , int);

  int foo2 (int i  ) ; 

# 505 "t7mc.c"
static inline int  foo2__t7mc__1 (int i  ) {

# 508 "t7mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_7, __utac__cflow_t7a6_7(3,0)); } 
 } 
__utac__cflow_t7a6_7 ( 1, 0 ) ; 

}

# 521 "t7mc.c"
retValue_acc = foo2 ( i ) ;  

{
__utac__cflow_t7a6_7 ( 2, 0 ) ; 

}

# 529 "t7mc.c"
return (int )retValue_acc;
}
 
int __utac__cflow_t7a6_1 ( int , int);


int __utac__cflow_t7a6_1 ( int , int);


int __utac__cflow_t7a6_1 ( int , int);


static inline int  foo1__t7mc__2 (int i  )  ; 

#line 25 "t7mc.mc"
int foo(int i)  
# 546 "t7mc.c"
{
# 548 "t7mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_1, __utac__cflow_t7a6_1(3,0)); } 
 } 
__utac__cflow_t7a6_1 ( 1, 0 ) ; 

}

# 564 "t7mc.c"
{

#line 26 "t7mc.mc"
printf("\t in foo\n"); 
#line 27 "t7mc.mc"
foo1__t7mc__2(i); 
#line 28 "t7mc.mc"
printf("\t end of foo\n"); 
#line 29 "t7mc.mc"

# 575 "t7mc.c"
retValue_acc = i;
{
__utac__cflow_t7a6_1 ( 2, 0 ) ; 

}

# 582 "t7mc.c"
return (int )retValue_acc;
 
# 585 "t7mc.c"

}

{
__utac__cflow_t7a6_1 ( 2, 0 ) ; 

}

# 594 "t7mc.c"
return (int )retValue_acc;

# 597 "t7mc.c"

}
int __utac__cflow_t7a6_6 ( int , int);

int __utac__cflow_t7a6_6 ( int , int);

  int foo1 (int i  ) ; 

# 606 "t7mc.c"
static inline int  foo1__t7mc__2 (int i  ) {

# 609 "t7mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_6, __utac__cflow_t7a6_6(3,0)); } 
 } 
__utac__cflow_t7a6_6 ( 1, 0 ) ; 

}

# 622 "t7mc.c"
retValue_acc = foo1 ( i ) ;  

{
__utac__cflow_t7a6_6 ( 2, 0 ) ; 

}

# 630 "t7mc.c"
return (int )retValue_acc;
}
 
int __utac__cflow_t7a6_0 ( int , int);


int __utac__cflow_t7a6_0 ( int , int);


int __utac__cflow_t7a6_0 ( int , int);


static inline int  foo4__t7mc__4 (int i  )  ; 

static inline int  foo__t7mc__3 (int i  )  ; 

#line 33 "t7mc.mc"
int main()  
# 649 "t7mc.c"
{
# 651 "t7mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_0, __utac__cflow_t7a6_0(3,0)); } 
 } 
__utac__cflow_t7a6_0 ( 1, 0 ) ; 

}

# 667 "t7mc.c"
{

#line 34 "t7mc.mc"
printf("in main, call foo\n"); 
#line 35 "t7mc.mc"
foo__t7mc__3(1); 
#line 36 "t7mc.mc"
printf("call foo4 in main\n"); 
#line 37 "t7mc.mc"
foo4__t7mc__4(2); 
#line 38 "t7mc.mc"
printf("end of main\n"); 
#line 39 "t7mc.mc"

# 682 "t7mc.c"
retValue_acc = 0;
{
__utac__cflow_t7a6_0 ( 2, 0 ) ; 

}

# 689 "t7mc.c"
return (int )retValue_acc;
 
# 692 "t7mc.c"

}

{
__utac__cflow_t7a6_0 ( 2, 0 ) ; 

}

# 701 "t7mc.c"
return (int )retValue_acc;

# 704 "t7mc.c"

}
  void __utac_acc__t7a6__5 (void);
int __utac__cflow_t7a6_0(int, int);

  void __utac_acc__t7a6__6 (void);
int __utac__cflow_t7a6_1(int, int);

  void __utac_acc__t7a6__7 (void);
int __utac__cflow_t7a6_2(int, int);

  void __utac_acc__t7a6__8 (void);
int __utac__cflow_t7a6_3(int, int);

  void __utac_acc__t7a6__9 (void);
int __utac__cflow_t7a6_4(int, int);

  void __utac_acc__t7a6__10 (void);
int __utac__cflow_t7a6_5(int, int);

  void __utac_acc__t7a6__11 (void);
int __utac__cflow_t7a6_6(int, int);

  void __utac_acc__t7a6__12 (void);
int __utac__cflow_t7a6_7(int, int);

  void __utac_acc__t7a6__13 (void);
int __utac__cflow_t7a6_8(int, int);

  int foo4 (int i  ) ; 

# 736 "t7mc.c"
static inline int  foo4__t7mc__4 (int i  ) {

# 739 "t7mc.c"
int retValue_acc;

{
if( __utac__cflow_t7a6_0(3,0) ) { 
__utac_acc__t7a6__5();
 } 

}

{
if( __utac__cflow_t7a6_1(3,0) ) { 
__utac_acc__t7a6__6();
 } 

}

{
if( __utac__cflow_t7a6_2(3,0) ) { 
__utac_acc__t7a6__7();
 } 

}

{
if( __utac__cflow_t7a6_3(3,0) ) { 
__utac_acc__t7a6__8();
 } 

}

{
if( __utac__cflow_t7a6_4(3,0) ) { 
__utac_acc__t7a6__9();
 } 

}

{
if( __utac__cflow_t7a6_5(3,0) ) { 
__utac_acc__t7a6__10();
 } 

}

{
if( __utac__cflow_t7a6_6(3,0) ) { 
__utac_acc__t7a6__11();
 } 

}

{
if( __utac__cflow_t7a6_7(3,0) ) { 
__utac_acc__t7a6__12();
 } 

}

{
if( __utac__cflow_t7a6_8(3,0) ) { 
__utac_acc__t7a6__13();
 } 

}

# 805 "t7mc.c"
retValue_acc = foo4 ( i ) ;  

# 808 "t7mc.c"
return (int )retValue_acc;
}
int __utac__cflow_t7a6_5 ( int , int);

int __utac__cflow_t7a6_5 ( int , int);

  int foo (int i  ) ; 

# 817 "t7mc.c"
static inline int  foo__t7mc__3 (int i  ) {

# 820 "t7mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t7a6_5, __utac__cflow_t7a6_5(3,0)); } 
 } 
__utac__cflow_t7a6_5 ( 1, 0 ) ; 

}

# 833 "t7mc.c"
retValue_acc = foo ( i ) ;  

{
__utac__cflow_t7a6_5 ( 2, 0 ) ; 

}

# 841 "t7mc.c"
return (int )retValue_acc;
}
 
