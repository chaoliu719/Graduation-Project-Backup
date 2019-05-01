
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


#line 2 "t5mc.mc"
int foo2(int i)  
# 33 "t5mc.c"
{
# 35 "t5mc.c"
int retValue_acc;




# 41 "t5mc.c"
{

#line 3 "t5mc.mc"
printf("\t\t\t in foo2\n"); 
#line 4 "t5mc.mc"

# 48 "t5mc.c"
retValue_acc = i;
# 50 "t5mc.c"
return (int )retValue_acc;
 
# 53 "t5mc.c"

}

# 57 "t5mc.c"
return (int )retValue_acc;

# 60 "t5mc.c"

}
 
static inline int  foo2__t5mc__0 (int i  )  ; 

#include <setjmp.h> 


#line 7 "t5mc.mc"
int foo1(int i)  
# 71 "t5mc.c"
{
# 73 "t5mc.c"
int retValue_acc;




# 79 "t5mc.c"
{

#line 8 "t5mc.mc"
printf("\t\t in foo1\n"); 
#line 9 "t5mc.mc"
foo2__t5mc__0(i); 
#line 10 "t5mc.mc"
printf("\t\t end of foo1\n"); 
#line 11 "t5mc.mc"

# 90 "t5mc.c"
retValue_acc = i;
# 92 "t5mc.c"
return (int )retValue_acc;
 
# 95 "t5mc.c"

}

# 99 "t5mc.c"
return (int )retValue_acc;

# 102 "t5mc.c"

}
void __utac_acc__t5a2__3 (int  ) ;

void __utac_acc__t5a2__2 (int  ) ;

  void __utac_acc__t5a2__1 (void);

;

;

  int foo2 (int i  ) ; 

# 117 "t5mc.c"
static inline int  foo2__t5mc__0 (int i  ) {

# 120 "t5mc.c"
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
 __utac_acc__t5a2__3 ( __utac__try_jmp_ret_2  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_2, 1 , __utac__try_poplevel ); 

# 147 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{

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
 __utac_acc__t5a2__2 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 170 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{
__utac_acc__t5a2__1();

}

# 183 "t5mc.c"
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

# 204 "t5mc.c"
return (int )retValue_acc;
}
 
static inline int  foo1__t5mc__1 (int i  )  ; 

#line 14 "t5mc.mc"
int foo(int i)  
# 212 "t5mc.c"
{
# 214 "t5mc.c"
int retValue_acc;




# 220 "t5mc.c"
{

#line 15 "t5mc.mc"
printf("\t in foo\n"); 
#line 16 "t5mc.mc"
foo1__t5mc__1(i); 
#line 17 "t5mc.mc"
printf("\t end of foo\n"); 
#line 18 "t5mc.mc"

# 231 "t5mc.c"
retValue_acc = i;
# 233 "t5mc.c"
return (int )retValue_acc;
 
# 236 "t5mc.c"

}

# 240 "t5mc.c"
return (int )retValue_acc;

# 243 "t5mc.c"

}
void __utac_acc__t5a2__4 (int  ) ;

;

  int foo1 (int i  ) ; 

# 252 "t5mc.c"
static inline int  foo1__t5mc__1 (int i  ) {

# 255 "t5mc.c"
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
 __utac_acc__t5a2__4 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 278 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 286 "t5mc.c"
retValue_acc = foo1 ( i ) ;  

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 298 "t5mc.c"
return (int )retValue_acc;
}
 
static inline int  foo__t5mc__2 (int i  )  ; 

#line 21 "t5mc.mc"
int foo3(int i)  
# 306 "t5mc.c"
{
# 308 "t5mc.c"
int retValue_acc;




# 314 "t5mc.c"
{

#line 22 "t5mc.mc"
printf("\t in foo3\n"); 
#line 23 "t5mc.mc"
foo__t5mc__2(i); 
#line 24 "t5mc.mc"
printf("\t end of foo3\n"); 
#line 25 "t5mc.mc"

# 325 "t5mc.c"
retValue_acc = i;
# 327 "t5mc.c"
return (int )retValue_acc;
 
# 330 "t5mc.c"

}

# 334 "t5mc.c"
return (int )retValue_acc;

# 337 "t5mc.c"

}
void __utac_acc__t5a2__6 (int  ) ;
int __utac__cflow_t5a2_0(int, int);

void __utac_acc__t5a2__5 (int  ) ;
int __utac__cflow_t5a2_0(int, int);

;
int __utac__cflow_t5a2_0(int, int);

;
int __utac__cflow_t5a2_0(int, int);

  int foo (int i  ) ; 

# 354 "t5mc.c"
static inline int  foo__t5mc__2 (int i  ) {

# 357 "t5mc.c"
int retValue_acc;
int __utac__try_mask = 0; 

 int __utac__try_jmp_ret_1 = 0; 
 jmp_buf __utac__try_jmpbuf_1 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_1 = { & __utac__try_jmpbuf_1 , 0, 0 }; 
 
 int __utac__try_jmp_ret_2 = 0; 
 jmp_buf __utac__try_jmpbuf_2 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_2 = { & __utac__try_jmpbuf_2 , 0, 0 }; 
 
{
if ( __utac__cflow_t5a2_0(3,0) ) { 

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
 __utac_acc__t5a2__6 ( __utac__try_jmp_ret_2  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_2, 1 , __utac__try_poplevel ); 

# 385 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

}

{
if ( !(__utac__cflow_t5a2_0(3,0)) ) { 

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
 __utac_acc__t5a2__5 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 411 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

}

# 421 "t5mc.c"
retValue_acc = foo ( i ) ;  

{
if ( !(__utac__cflow_t5a2_0(3,0)) ) { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

}

{
if ( __utac__cflow_t5a2_0(3,0) ) { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

}

# 448 "t5mc.c"
return (int )retValue_acc;
}
 
static inline int  foo3__t5mc__4 (int i  )  ; 

static inline int  foo__t5mc__3 (int i  )  ; 

#line 29 "t5mc.mc"
int main()  
# 458 "t5mc.c"
{
# 460 "t5mc.c"
int retValue_acc;




# 466 "t5mc.c"
{

#line 30 "t5mc.mc"
printf("in main, call foo\n"); 
#line 31 "t5mc.mc"
foo__t5mc__3(1); 
#line 32 "t5mc.mc"
printf("in main, call foo3\n"); 
#line 33 "t5mc.mc"
foo3__t5mc__4(1); 
#line 34 "t5mc.mc"
printf("end of main\n"); 
#line 35 "t5mc.mc"

# 481 "t5mc.c"
retValue_acc = 0;
# 483 "t5mc.c"
return (int )retValue_acc;
 
# 486 "t5mc.c"

}

# 490 "t5mc.c"
return (int )retValue_acc;

# 493 "t5mc.c"

}
void __utac_acc__t5a2__7 (int  ) ;

int __utac__cflow_t5a2_0 ( int , int);

int __utac__cflow_t5a2_0 ( int , int);

;

  int foo3 (int i  ) ; 

# 506 "t5mc.c"
static inline int  foo3__t5mc__4 (int i  ) {

# 509 "t5mc.c"
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
 __utac_acc__t5a2__7 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 532 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t5a2_0, __utac__cflow_t5a2_0(3,0)); } 
 } 
__utac__cflow_t5a2_0 ( 1, 0 ) ; 

}

# 550 "t5mc.c"
retValue_acc = foo3 ( i ) ;  

{
__utac__cflow_t5a2_0 ( 2, 0 ) ; 

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 567 "t5mc.c"
return (int )retValue_acc;
}
void __utac_acc__t5a2__6 (int  ) ;
int __utac__cflow_t5a2_0(int, int);

void __utac_acc__t5a2__5 (int  ) ;
int __utac__cflow_t5a2_0(int, int);

;
int __utac__cflow_t5a2_0(int, int);

;
int __utac__cflow_t5a2_0(int, int);

  int foo (int i  ) ; 

# 584 "t5mc.c"
static inline int  foo__t5mc__3 (int i  ) {

# 587 "t5mc.c"
int retValue_acc;
int __utac__try_mask = 0; 

 int __utac__try_jmp_ret_1 = 0; 
 jmp_buf __utac__try_jmpbuf_1 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_1 = { & __utac__try_jmpbuf_1 , 0, 0 }; 
 
 int __utac__try_jmp_ret_2 = 0; 
 jmp_buf __utac__try_jmpbuf_2 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_2 = { & __utac__try_jmpbuf_2 , 0, 0 }; 
 
{
if ( __utac__cflow_t5a2_0(3,0) ) { 

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
 __utac_acc__t5a2__6 ( __utac__try_jmp_ret_2  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_2, 1 , __utac__try_poplevel ); 

# 615 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

}

{
if ( !(__utac__cflow_t5a2_0(3,0)) ) { 

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
 __utac_acc__t5a2__5 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 641 "t5mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

}

# 651 "t5mc.c"
retValue_acc = foo ( i ) ;  

{
if ( !(__utac__cflow_t5a2_0(3,0)) ) { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

}

{
if ( __utac__cflow_t5a2_0(3,0) ) { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

}

# 678 "t5mc.c"
return (int )retValue_acc;
}
 
