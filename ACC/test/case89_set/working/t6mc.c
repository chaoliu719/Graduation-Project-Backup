
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


#line 2 "t6mc.mc"
int a = 99; 
#line 4 "t6mc.mc"
void foo3()  
# 35 "t6mc.c"
{



# 40 "t6mc.c"
{

#line 5 "t6mc.mc"
printf("in foo3\n"); 
# 45 "t6mc.c"

}

# 49 "t6mc.c"

}
 
static inline int  a__t6mc__0 (int* __utac__para0 ,int __utac__para1  )  ; 

#include <setjmp.h> 


#line 8 "t6mc.mc"
void foo2(int i)  
# 60 "t6mc.c"
{



# 65 "t6mc.c"
{

#line 9 "t6mc.mc"
printf("in foo2, assign a to be %d \n", i); 
#line 10 "t6mc.mc"
a__t6mc__0(&a,(i)); 
#line 11 "t6mc.mc"
printf("in foo2, a = %d\n", a); 
#line 12 "t6mc.mc"
printf("end of foo2\n"); 
# 76 "t6mc.c"

}

# 80 "t6mc.c"

}
void __utac_acc__t6a1__1 (int  ) ;

  void __utac_acc__t6a1__3 (int val  );

;


# 90 "t6mc.c"
static inline int  a__t6mc__0 (int* __utac__para0 ,int __utac__para1  ) {

# 93 "t6mc.c"
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
 __utac_acc__t6a1__1 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 116 "t6mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

{
int __utac__ad__arg1 = __utac__para1 ; 
__utac_acc__t6a1__3(__utac__ad__arg1 );

}

# 130 "t6mc.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 142 "t6mc.c"
return (int )retValue_acc;
}
 
#line 15 "t6mc.mc"
void foo1(int i)  
# 148 "t6mc.c"
{



# 153 "t6mc.c"
{

#line 16 "t6mc.mc"
printf("in foo1, call foo2(%d) \n", i); 
#line 17 "t6mc.mc"
foo2(i); 
#line 18 "t6mc.mc"
printf("end of foo1\n"); 
# 162 "t6mc.c"

}

# 166 "t6mc.c"

}
 
int __utac__cflow_t6a2_1 ( int , int);


int __utac__cflow_t6a2_1 ( int , int);


#line 21 "t6mc.mc"
void foo()  
# 178 "t6mc.c"
{



{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t6a2_1, __utac__cflow_t6a2_1(3,0)); } 
 } 
__utac__cflow_t6a2_1 ( 1, 0 ) ; 

}

# 193 "t6mc.c"
{

#line 22 "t6mc.mc"
printf("in foo, call foo1(2) \n"); 
#line 23 "t6mc.mc"
foo1(2); 
#line 24 "t6mc.mc"
printf("in foo, call foo1(-1) \n"); 
#line 25 "t6mc.mc"
foo1((-1)); 
#line 26 "t6mc.mc"
printf("end of foo\n"); 
# 206 "t6mc.c"

}

{
__utac__cflow_t6a2_1 ( 2, 0 ) ; 

}

# 215 "t6mc.c"

}
 
int __utac__cflow_t6a2_2 ( int , int);


int __utac__cflow_t6a2_2 ( int , int);


int __utac__cflow_t6a2_2 ( int , int);


static inline void  foo3__t6mc__2 (void)  ; 

static inline void  foo__t6mc__1 (void)  ; 

#line 29 "t6mc.mc"
int main()  
# 234 "t6mc.c"
{
# 236 "t6mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t6a2_2, __utac__cflow_t6a2_2(3,0)); } 
 } 
__utac__cflow_t6a2_2 ( 1, 0 ) ; 

}

# 252 "t6mc.c"
{

#line 30 "t6mc.mc"
foo__t6mc__1(); 
#line 31 "t6mc.mc"
printf("call foo3() in main\n"); 
#line 32 "t6mc.mc"
foo3__t6mc__2(); 
#line 33 "t6mc.mc"

# 263 "t6mc.c"
retValue_acc = 0;
{
__utac__cflow_t6a2_2 ( 2, 0 ) ; 

}

# 270 "t6mc.c"
return (int )retValue_acc;
 
# 273 "t6mc.c"

}

{
__utac__cflow_t6a2_2 ( 2, 0 ) ; 

}

# 282 "t6mc.c"
return (int )retValue_acc;

# 285 "t6mc.c"

}
  void __utac_acc__t6a2__1 (void);
int __utac__cflow_t6a2_0(int, int);

  void __utac_acc__t6a2__2 (void);
int __utac__cflow_t6a2_1(int, int);

  void __utac_acc__t6a2__3 (void);
int __utac__cflow_t6a2_2(int, int);

  void __utac_acc__t6a2__4 (void);
int __utac__cflow_t6a2_3(int, int);

  void __utac_acc__t6a2__5 (void);
int __utac__cflow_t6a2_4(int, int);

  void __utac_acc__t6a2__6 (void);
int __utac__cflow_t6a2_5(int, int);

  void __utac_acc__t6a2__7 (void);
int __utac__cflow_t6a2_6(int, int);

  void foo3 () ; 

# 311 "t6mc.c"
static inline void  foo3__t6mc__2 (void) {

{
if( __utac__cflow_t6a2_0(3,0) ) { 
__utac_acc__t6a2__1();
 } 

}

{
if( __utac__cflow_t6a2_1(3,0) ) { 
__utac_acc__t6a2__2();
 } 

}

{
if( __utac__cflow_t6a2_2(3,0) ) { 
__utac_acc__t6a2__3();
 } 

}

{
if( __utac__cflow_t6a2_3(3,0) ) { 
__utac_acc__t6a2__4();
 } 

}

{
if( __utac__cflow_t6a2_4(3,0) ) { 
__utac_acc__t6a2__5();
 } 

}

{
if( __utac__cflow_t6a2_5(3,0) ) { 
__utac_acc__t6a2__6();
 } 

}

{
if( __utac__cflow_t6a2_6(3,0) ) { 
__utac_acc__t6a2__7();
 } 

}
foo3 ( ) ;  
}
void __utac_acc__t6a1__2 (int  ) ;

int __utac__cflow_t6a2_0 ( int , int);

int __utac__cflow_t6a2_0 ( int , int);

;

  void foo () ; 

# 374 "t6mc.c"
static inline void  foo__t6mc__1 (void) {
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
 __utac_acc__t6a1__2 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 
return ; 

 } 
} 

}

{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t6a2_0, __utac__cflow_t6a2_0(3,0)); } 
 } 
__utac__cflow_t6a2_0 ( 1, 0 ) ; 

}
foo ( ) ;  

{
__utac__cflow_t6a2_0 ( 2, 0 ) ; 

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}
}
 
