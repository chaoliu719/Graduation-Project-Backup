
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


#line 1 "t6mc.mc"
int foo3(int i)  
# 33 "t6mc.c"
{
# 35 "t6mc.c"
int retValue_acc;




# 41 "t6mc.c"
{

#line 2 "t6mc.mc"
printf("\t\t\t in foo3\n"); 
#line 3 "t6mc.mc"

# 48 "t6mc.c"
retValue_acc = i;
# 50 "t6mc.c"
return (int )retValue_acc;
 
# 53 "t6mc.c"

}

# 57 "t6mc.c"
return (int )retValue_acc;

# 60 "t6mc.c"

}
 
static inline int  foo3__t6mc__0 (int i  )  ; 

#include <setjmp.h> 


#line 6 "t6mc.mc"
int foo2(int i)  
# 71 "t6mc.c"
{
# 73 "t6mc.c"
int retValue_acc;




# 79 "t6mc.c"
{

#line 7 "t6mc.mc"
printf("\t\t\t in foo2\n"); 
#line 8 "t6mc.mc"
foo3__t6mc__0(i); 
#line 9 "t6mc.mc"
printf("\t\t\t end of foo2\n"); 
#line 10 "t6mc.mc"

# 90 "t6mc.c"
retValue_acc = i;
# 92 "t6mc.c"
return (int )retValue_acc;
 
# 95 "t6mc.c"

}

# 99 "t6mc.c"
return (int )retValue_acc;

# 102 "t6mc.c"

}
  void __utac_acc__t6a3__1 (void);

  int foo3 (int i  ) ; 

# 109 "t6mc.c"
static inline int  foo3__t6mc__0 (int i  ) {

# 112 "t6mc.c"
int retValue_acc;

{
__utac_acc__t6a3__1();

}

# 120 "t6mc.c"
retValue_acc = foo3 ( i ) ;  

# 123 "t6mc.c"
return (int )retValue_acc;
}
 
#line 13 "t6mc.mc"
int foo1(int i)  
# 129 "t6mc.c"
{
# 131 "t6mc.c"
int retValue_acc;




# 137 "t6mc.c"
{

#line 14 "t6mc.mc"
printf("\t\t in foo1\n"); 
#line 15 "t6mc.mc"
foo2(i); 
#line 16 "t6mc.mc"
printf("\t\t end of foo1\n"); 
#line 17 "t6mc.mc"

# 148 "t6mc.c"
retValue_acc = i;
# 150 "t6mc.c"
return (int )retValue_acc;
 
# 153 "t6mc.c"

}

# 157 "t6mc.c"
return (int )retValue_acc;

# 160 "t6mc.c"

}
 
static inline int  foo1__t6mc__1 (int i  ,void * __utac__excep_para )  ; 

#line 20 "t6mc.mc"
int foo(int i)  
# 168 "t6mc.c"
{
# 170 "t6mc.c"
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





# 195 "t6mc.c"
{

#line 21 "t6mc.mc"
printf("\t in foo\n"); 
#line 22 "t6mc.mc"
foo1__t6mc__1(i,   (void *) &  __utac__excep_var ); 
#line 23 "t6mc.mc"
printf("\t end of foo\n"); 
#line 24 "t6mc.mc"

# 206 "t6mc.c"
retValue_acc = i;
# 208 "t6mc.c"
return (int )retValue_acc;
 
# 211 "t6mc.c"

}

# 215 "t6mc.c"
return (int )retValue_acc;

# 218 "t6mc.c"

}
void __utac_acc__t6a3__3 (int , struct JoinPoint *  ) ;

void __utac_acc__t6a3__2 (int , struct JoinPoint *  ) ;

;

;

  int foo1 (int i  ) ; 

# 231 "t6mc.c"
static inline int  foo1__t6mc__1 (int i  ,void * __utac__excep_para ) {

# 234 "t6mc.c"
int retValue_acc;
int __utac__try_mask = 0; 

 int __utac__try_jmp_ret_1 = 0; 
 jmp_buf __utac__try_jmpbuf_1 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_1 = { & __utac__try_jmpbuf_1 , 0, 0 }; 
 
 int __utac__try_jmp_ret_2 = 0; 
 jmp_buf __utac__try_jmpbuf_2 ; 
 struct __UTAC__EXCEPTION __utac__try_exception_2 = { & __utac__try_jmpbuf_2 , 0, 0 }; 
  { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo1"; 
this.fileName = "t6mc.mc"; 
this.kind = "call"; 
this.excep_return = __utac__excep_para; 
 { 

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
int __utac__try_poplevel = 0 ; 
 int i = 0 ; 
__utac__error_stack_mgt ( & __utac__try_exception_2 , 0 , 1 ) ; 
__utac__try_mask |= 1 << (2 - 2 ) ; 
 ((struct __UTAC__EXCEPTION *)(this.excep_return))->pops  ++ ;
if (__utac__try_jmp_ret_2 = setjmp(__utac__try_jmpbuf_2)) { 
__utac__try_poplevel = 0; 
for(i = 2 - 2 - 1; i >= 0; i--) { 
 if(__utac__try_mask & ( 1 << i)) { __utac__try_poplevel ++ ; } 
 } 
 ((struct __UTAC__EXCEPTION *)(this.excep_return))->pops  = __utac__try_poplevel ; 
 __utac_acc__t6a3__3 ( __utac__try_jmp_ret_2 ,  & this  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_2, 1 , __utac__try_poplevel ); 

# 269 "t6mc.c"
return ( int  ) retValue_acc ; 

 } 
} 
 
 } 
 } 
 { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo1"; 
this.fileName = "t6mc.mc"; 
this.kind = "call"; 
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
 __utac_acc__t6a3__2 ( __utac__try_jmp_ret_1 ,  & this  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 298 "t6mc.c"
return ( int  ) retValue_acc ; 

 } 
} 
 
 } 
 } 

# 307 "t6mc.c"
retValue_acc = foo1 ( i ) ;  

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

# 328 "t6mc.c"
return (int )retValue_acc;
}
 
#line 28 "t6mc.mc"
int main()  
# 334 "t6mc.c"
{
# 336 "t6mc.c"
int retValue_acc;




# 342 "t6mc.c"
{

#line 29 "t6mc.mc"
printf("in main, call foo\n"); 
#line 30 "t6mc.mc"
foo(1); 
#line 31 "t6mc.mc"
printf("end of main\n"); 
#line 32 "t6mc.mc"

# 353 "t6mc.c"
retValue_acc = 0;
# 355 "t6mc.c"
return (int )retValue_acc;
 
# 358 "t6mc.c"

}

# 362 "t6mc.c"
return (int )retValue_acc;

# 365 "t6mc.c"

}
 
