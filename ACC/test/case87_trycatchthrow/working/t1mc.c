
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


#line 2 "t1mc.mc"
int foo2(int i)  
# 33 "t1mc.c"
{
# 35 "t1mc.c"
int retValue_acc;




# 41 "t1mc.c"
{

#line 3 "t1mc.mc"
printf("\t\t\t in foo2\n"); 
#line 4 "t1mc.mc"

# 48 "t1mc.c"
retValue_acc = i;
# 50 "t1mc.c"
return (int )retValue_acc;
 
# 53 "t1mc.c"

}

# 57 "t1mc.c"
return (int )retValue_acc;

# 60 "t1mc.c"

}
 
static inline int  foo2__t1mc__0 (int i  )  ; 

#include <setjmp.h> 


#line 7 "t1mc.mc"
int foo1(int i)  
# 71 "t1mc.c"
{
# 73 "t1mc.c"
int retValue_acc;




# 79 "t1mc.c"
{

#line 8 "t1mc.mc"
printf("\t\t in foo1\n"); 
#line 9 "t1mc.mc"
foo2__t1mc__0(i); 
#line 10 "t1mc.mc"
printf("\t\t end of foo1\n"); 
#line 11 "t1mc.mc"

# 90 "t1mc.c"
retValue_acc = i;
# 92 "t1mc.c"
return (int )retValue_acc;
 
# 95 "t1mc.c"

}

# 99 "t1mc.c"
return (int )retValue_acc;

# 102 "t1mc.c"

}
  int __utac_acc__t1a5__1 (void);

  int foo2 (int i  ) ; 

# 109 "t1mc.c"
static inline int  foo2__t1mc__0 (int i  ) {

# 112 "t1mc.c"
int retValue_acc;

{
retValue_acc = __utac_acc__t1a5__1();

}

# 120 "t1mc.c"
return (int )retValue_acc;
}
 
static inline int  foo1__t1mc__1 (int i  )  ; 

#line 14 "t1mc.mc"
int foo(int i)  
# 128 "t1mc.c"
{
# 130 "t1mc.c"
int retValue_acc;




# 136 "t1mc.c"
{

#line 15 "t1mc.mc"
printf("\t in foo\n"); 
#line 16 "t1mc.mc"
foo1__t1mc__1(i); 
#line 17 "t1mc.mc"
printf("\t end of foo\n"); 
#line 18 "t1mc.mc"

# 147 "t1mc.c"
retValue_acc = i;
# 149 "t1mc.c"
return (int )retValue_acc;
 
# 152 "t1mc.c"

}

# 156 "t1mc.c"
return (int )retValue_acc;

# 159 "t1mc.c"

}
void __utac_acc__t1a5__3 (int  ) ;

;

  int foo1 (int i  ) ; 

# 168 "t1mc.c"
static inline int  foo1__t1mc__1 (int i  ) {

# 171 "t1mc.c"
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
 __utac_acc__t1a5__3 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 194 "t1mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 202 "t1mc.c"
retValue_acc = foo1 ( i ) ;  

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 214 "t1mc.c"
return (int )retValue_acc;
}
 
static inline int  foo__t1mc__2 (int i  )  ; 

#line 22 "t1mc.mc"
int main()  
# 222 "t1mc.c"
{
# 224 "t1mc.c"
int retValue_acc;




# 230 "t1mc.c"
{

#line 23 "t1mc.mc"
printf("in main, call foo\n"); 
#line 24 "t1mc.mc"
foo__t1mc__2(1); 
#line 25 "t1mc.mc"
printf("end of main\n"); 
#line 26 "t1mc.mc"

# 241 "t1mc.c"
retValue_acc = 0;
# 243 "t1mc.c"
return (int )retValue_acc;
 
# 246 "t1mc.c"

}

# 250 "t1mc.c"
return (int )retValue_acc;

# 253 "t1mc.c"

}
void __utac_acc__t1a5__2 (int  ) ;

;

  int foo (int i  ) ; 

# 262 "t1mc.c"
static inline int  foo__t1mc__2 (int i  ) {

# 265 "t1mc.c"
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
 __utac_acc__t1a5__2 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 288 "t1mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 296 "t1mc.c"
retValue_acc = foo ( i ) ;  

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 308 "t1mc.c"
return (int )retValue_acc;
}
 
