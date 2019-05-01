
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


#line 1 "t6m1.mc"
int foo3(int i)  
# 33 "t6m1.c"
{
# 35 "t6m1.c"
int retValue_acc;




# 41 "t6m1.c"
{

#line 2 "t6m1.mc"
printf("\t\t\t in foo3\n"); 
#line 3 "t6m1.mc"

# 48 "t6m1.c"
retValue_acc = i;
# 50 "t6m1.c"
return (int )retValue_acc;
 
# 53 "t6m1.c"

}

# 57 "t6m1.c"
return (int )retValue_acc;

# 60 "t6m1.c"

}
 
static inline int  foo3__t6m1__0 (int i  )  ; 

#include <setjmp.h> 


#line 6 "t6m1.mc"
int foo2(int i)  
# 71 "t6m1.c"
{
# 73 "t6m1.c"
int retValue_acc;




# 79 "t6m1.c"
{

#line 7 "t6m1.mc"
printf("\t\t\t in foo2\n"); 
#line 8 "t6m1.mc"
foo3__t6m1__0(i); 
#line 9 "t6m1.mc"
printf("\t\t\t end of foo2\n"); 
#line 10 "t6m1.mc"

# 90 "t6m1.c"
retValue_acc = i;
# 92 "t6m1.c"
return (int )retValue_acc;
 
# 95 "t6m1.c"

}

# 99 "t6m1.c"
return (int )retValue_acc;

# 102 "t6m1.c"

}
  void __utac_acc__t6a9__1 (void);

  int foo3 (int i  ) ; 

# 109 "t6m1.c"
static inline int  foo3__t6m1__0 (int i  ) {

# 112 "t6m1.c"
int retValue_acc;

{
__utac_acc__t6a9__1();

}

# 120 "t6m1.c"
retValue_acc = foo3 ( i ) ;  

# 123 "t6m1.c"
return (int )retValue_acc;
}
 
static inline int  foo2__t6m1__1 (int i  ,void * __utac__excep_para )  ; 

#line 13 "t6m1.mc"
int foo1(int i)  
# 131 "t6m1.c"
{
# 133 "t6m1.c"
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





# 158 "t6m1.c"
{

#line 14 "t6m1.mc"
printf("\t\t in foo1\n"); 
#line 15 "t6m1.mc"
foo2__t6m1__1(i,   (void *) &  __utac__excep_var ); 
#line 16 "t6m1.mc"
printf("\t\t end of foo1\n"); 
#line 17 "t6m1.mc"

# 169 "t6m1.c"
retValue_acc = i;
# 171 "t6m1.c"
return (int )retValue_acc;
 
# 174 "t6m1.c"

}

# 178 "t6m1.c"
return (int )retValue_acc;

# 181 "t6m1.c"

}
void __utac_acc__t6a9__6 (int , struct JoinPoint *  ) ;

void __utac_acc__t6a9__5 (int  ) ;

void __utac_acc__t6a9__4 (int  ) ;

void __utac_acc__t6a9__3 (int  ) ;

;

;

;

;

  int foo2 (int i  ) ; 

# 202 "t6m1.c"
static inline int  foo2__t6m1__1 (int i  ,void * __utac__excep_para ) {

# 205 "t6m1.c"
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
 
 int __utac__try_jmp_ret_4 = 0; 
 jmp_buf __utac__try_jmpbuf_4 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_4 = { & __utac__try_jmpbuf_4 , 0, 0 }; 
  { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_4 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (4 - 4 ) ; 
 ((struct __UTAC__EXCEPTION *)(this.excep_return))->pops  ++ ;
if (__utac__try_jmp_ret_4 = setjmp(__utac__try_jmpbuf_4)) { 
__utac__try_poplevel = 0; 
for(i = 4 - 4 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 ((struct __UTAC__EXCEPTION *)(this.excep_return))->pops  = __utac__try_poplevel ; 
 __utac_acc__t6a9__6 ( __utac__try_jmp_ret_4 ,  & this  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_4, 1 , __utac__try_poplevel ); 

# 244 "t6m1.c"
return ( int  ) retValue_acc ; 

 } 
} 
 
 } 
 } 

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_3 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (4 - 3 ) ; 
if (__utac__try_jmp_ret_3 = setjmp(__utac__try_jmpbuf_3)) { 
__utac__try_poplevel = 0; 
for(i = 4 - 3 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t6a9__5 ( __utac__try_jmp_ret_3  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_3, 1 , __utac__try_poplevel ); 

# 268 "t6m1.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_2 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (4 - 2 ) ; 
if (__utac__try_jmp_ret_2 = setjmp(__utac__try_jmpbuf_2)) { 
__utac__try_poplevel = 0; 
for(i = 4 - 2 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t6a9__4 ( __utac__try_jmp_ret_2  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_2, 1 , __utac__try_poplevel ); 

# 291 "t6m1.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_1 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (4 - 1 ) ; 
if (__utac__try_jmp_ret_1 = setjmp(__utac__try_jmpbuf_1)) { 
__utac__try_poplevel = 0; 
for(i = 4 - 1 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t6a9__3 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 314 "t6m1.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 322 "t6m1.c"
retValue_acc = foo2 ( i ) ;  

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

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 361 "t6m1.c"
return (int )retValue_acc;
}
 
static inline int  foo3__t6m1__2 (int i  )  ; 

#line 20 "t6m1.mc"
int foo(int i)  
# 369 "t6m1.c"
{
# 371 "t6m1.c"
int retValue_acc;




# 377 "t6m1.c"
{

#line 21 "t6m1.mc"
printf("\t in foo\n"); 
#line 22 "t6m1.mc"
foo1(i); 
#line 23 "t6m1.mc"
printf("\t call foo3 in foo\n"); 
#line 24 "t6m1.mc"
foo3__t6m1__2(i); 
#line 25 "t6m1.mc"
printf("\t end of foo\n"); 
#line 26 "t6m1.mc"

# 392 "t6m1.c"
retValue_acc = i;
# 394 "t6m1.c"
return (int )retValue_acc;
 
# 397 "t6m1.c"

}

# 401 "t6m1.c"
return (int )retValue_acc;

# 404 "t6m1.c"

}
  void __utac_acc__t6a9__1 (void);

  int foo3 (int i  ) ; 

# 411 "t6m1.c"
static inline int  foo3__t6m1__2 (int i  ) {

# 414 "t6m1.c"
int retValue_acc;

{
__utac_acc__t6a9__1();

}

# 422 "t6m1.c"
retValue_acc = foo3 ( i ) ;  

# 425 "t6m1.c"
return (int )retValue_acc;
}
 
static inline int  foo__t6m1__3 (int i  )  ; 

#line 30 "t6m1.mc"
int main()  
# 433 "t6m1.c"
{
# 435 "t6m1.c"
int retValue_acc;




# 441 "t6m1.c"
{

#line 31 "t6m1.mc"
printf("in main, call foo\n"); 
#line 32 "t6m1.mc"
foo__t6m1__3(1); 
#line 33 "t6m1.mc"
printf("end of main\n"); 
#line 34 "t6m1.mc"

# 452 "t6m1.c"
retValue_acc = 0;
# 454 "t6m1.c"
return (int )retValue_acc;
 
# 457 "t6m1.c"

}

# 461 "t6m1.c"
return (int )retValue_acc;

# 464 "t6m1.c"

}
void __utac_acc__t6a9__2 (int  ) ;

;

  int foo (int i  ) ; 

# 473 "t6m1.c"
static inline int  foo__t6m1__3 (int i  ) {

# 476 "t6m1.c"
int retValue_acc;
int __utac__try_mask = 0; 

 int __utac__try_jmp_ret_1 = 0; 
 jmp_buf __utac__try_jmpbuf_1 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_1 = { & __utac__try_jmpbuf_1 , 0, 0 }; 
 
{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_1 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (1 - 1 ) ; 
if (__utac__try_jmp_ret_1 = setjmp(__utac__try_jmpbuf_1)) { 
__utac__try_poplevel = 0; 
for(i = 1 - 1 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t6a9__2 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 499 "t6m1.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 507 "t6m1.c"
retValue_acc = foo ( i ) ;  

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 519 "t6m1.c"
return (int )retValue_acc;
}
 
