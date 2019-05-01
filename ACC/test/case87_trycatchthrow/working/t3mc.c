
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


#line 2 "t3mc.mc"
int foo2(int i)  
# 33 "t3mc.c"
{
# 35 "t3mc.c"
int retValue_acc;




# 41 "t3mc.c"
{

#line 3 "t3mc.mc"
printf("\t\t\t in foo2\n"); 
#line 4 "t3mc.mc"

# 48 "t3mc.c"
retValue_acc = i;
# 50 "t3mc.c"
return (int )retValue_acc;
 
# 53 "t3mc.c"

}

# 57 "t3mc.c"
return (int )retValue_acc;

# 60 "t3mc.c"

}
 
static inline int  foo2__t3mc__0 (int i  )  ; 

#include <setjmp.h> 


#line 7 "t3mc.mc"
int foo1(int i)  
# 71 "t3mc.c"
{
# 73 "t3mc.c"
int retValue_acc;




# 79 "t3mc.c"
{

#line 8 "t3mc.mc"
printf("\t\t in foo1\n"); 
#line 9 "t3mc.mc"
foo2__t3mc__0(i); 
#line 10 "t3mc.mc"
printf("\t\t end of foo1\n"); 
#line 11 "t3mc.mc"

# 90 "t3mc.c"
retValue_acc = i;
# 92 "t3mc.c"
return (int )retValue_acc;
 
# 95 "t3mc.c"

}

# 99 "t3mc.c"
return (int )retValue_acc;

# 102 "t3mc.c"

}
  void __utac_acc__t3a5__1 (void);

  int foo2 (int i  ) ; 

# 109 "t3mc.c"
static inline int  foo2__t3mc__0 (int i  ) {

# 112 "t3mc.c"
int retValue_acc;

{
__utac_acc__t3a5__1();

}

# 120 "t3mc.c"
retValue_acc = foo2 ( i ) ;  

# 123 "t3mc.c"
return (int )retValue_acc;
}
 
void __utac_acc__t3a5__3 (int  ) ;


void __utac_acc__t3a5__2 (int  ) ;
int __utac__cflow_t3a5_0(int, int);


;
int __utac__cflow_t3a5_0(int, int);


;


;
int __utac__cflow_t3a5_0(int, int);


;


#line 14 "t3mc.mc"
int foo(int i)  
# 150 "t3mc.c"
{
# 152 "t3mc.c"
int retValue_acc;
int __utac__try_mask = 0; 

 int __utac__try_jmp_ret_1 = 0; 
 jmp_buf __utac__try_jmpbuf_1 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_1 = { & __utac__try_jmpbuf_1 , 0, 0 }; 
 
 int __utac__try_jmp_ret_2 = 0; 
 jmp_buf __utac__try_jmpbuf_2 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_2 = { & __utac__try_jmpbuf_2 , 0, 0 }; 
 



{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_2 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (2 - 2 ) ; 
if (__utac__try_jmp_ret_2 = setjmp(__utac__try_jmpbuf_2)) { 
__utac__try_poplevel = 0; 
for(i = 2 - 2 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t3a5__3 ( __utac__try_jmp_ret_2  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_2, 1 , __utac__try_poplevel ); 

# 182 "t3mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{
if ( __utac__cflow_t3a5_0(3,0) ) { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_1 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (2 - 1 ) ; 
if (__utac__try_jmp_ret_1 = setjmp(__utac__try_jmpbuf_1)) { 
__utac__try_poplevel = 0; 
for(i = 2 - 1 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 __utac_acc__t3a5__2 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 206 "t3mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

}

# 216 "t3mc.c"
{

#line 15 "t3mc.mc"
printf("\t in foo\n"); 
#line 16 "t3mc.mc"
foo1(i); 
#line 17 "t3mc.mc"
printf("\t end of foo\n"); 
#line 18 "t3mc.mc"

# 227 "t3mc.c"
retValue_acc = i;
{
if ( __utac__cflow_t3a5_0(3,0) ) { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 250 "t3mc.c"
return (int )retValue_acc;
 
# 253 "t3mc.c"

}

{
if ( __utac__cflow_t3a5_0(3,0) ) { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 278 "t3mc.c"
return (int )retValue_acc;

# 281 "t3mc.c"

}
 
static inline int  foo__t3mc__1 (int i  )  ; 

#line 21 "t3mc.mc"
int foo3(int i)  
# 289 "t3mc.c"
{
# 291 "t3mc.c"
int retValue_acc;




# 297 "t3mc.c"
{

#line 22 "t3mc.mc"
printf("\t in foo3\n"); 
#line 23 "t3mc.mc"
foo__t3mc__1(i); 
#line 24 "t3mc.mc"
printf("\t end of foo3\n"); 
#line 25 "t3mc.mc"

# 308 "t3mc.c"
retValue_acc = i;
# 310 "t3mc.c"
return (int )retValue_acc;
 
# 313 "t3mc.c"

}

# 317 "t3mc.c"
return (int )retValue_acc;

# 320 "t3mc.c"

}
  void __utac_acc__t3a5__4 (void);

  int foo (int i  ) ; 

# 327 "t3mc.c"
static inline int  foo__t3mc__1 (int i  ) {

# 330 "t3mc.c"
int retValue_acc;

# 333 "t3mc.c"
retValue_acc = foo ( i ) ;  

{
__utac_acc__t3a5__4();

}

# 341 "t3mc.c"
return (int )retValue_acc;
}
 
static inline int  foo3__t3mc__3 (int i  )  ; 

static inline int  foo__t3mc__2 (int i  )  ; 

#line 29 "t3mc.mc"
int main()  
# 351 "t3mc.c"
{
# 353 "t3mc.c"
int retValue_acc;




# 359 "t3mc.c"
{

#line 30 "t3mc.mc"
printf("in main, call foo\n"); 
#line 31 "t3mc.mc"
foo__t3mc__2(1); 
#line 32 "t3mc.mc"
printf("in main, call foo3\n"); 
#line 33 "t3mc.mc"
foo3__t3mc__3(1); 
#line 34 "t3mc.mc"
printf("end of main\n"); 
#line 35 "t3mc.mc"

# 374 "t3mc.c"
retValue_acc = 0;
# 376 "t3mc.c"
return (int )retValue_acc;
 
# 379 "t3mc.c"

}

# 383 "t3mc.c"
return (int )retValue_acc;

# 386 "t3mc.c"

}
int __utac__cflow_t3a5_0 ( int , int);

int __utac__cflow_t3a5_0 ( int , int);

  int foo3 (int i  ) ; 

# 395 "t3mc.c"
static inline int  foo3__t3mc__3 (int i  ) {

# 398 "t3mc.c"
int retValue_acc;

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t3a5_0, __utac__cflow_t3a5_0(3,0)); } 
 } 
__utac__cflow_t3a5_0 ( 1, 0 ) ; 

}

# 411 "t3mc.c"
retValue_acc = foo3 ( i ) ;  

{
__utac__cflow_t3a5_0 ( 2, 0 ) ; 

}

# 419 "t3mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t3a5__4 (void);

  int foo (int i  ) ; 

# 426 "t3mc.c"
static inline int  foo__t3mc__2 (int i  ) {

# 429 "t3mc.c"
int retValue_acc;

# 432 "t3mc.c"
retValue_acc = foo ( i ) ;  

{
__utac_acc__t3a5__4();

}

# 440 "t3mc.c"
return (int )retValue_acc;
}
 
