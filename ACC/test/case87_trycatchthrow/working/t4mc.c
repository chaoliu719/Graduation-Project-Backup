
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


#line 2 "t4mc.mc"
int foo2(int i)  
# 33 "t4mc.c"
{
# 35 "t4mc.c"
int retValue_acc;




# 41 "t4mc.c"
{

#line 3 "t4mc.mc"
printf("\t\t\t in foo2\n"); 
#line 4 "t4mc.mc"

# 48 "t4mc.c"
retValue_acc = i;
# 50 "t4mc.c"
return (int )retValue_acc;
 
# 53 "t4mc.c"

}

# 57 "t4mc.c"
return (int )retValue_acc;

# 60 "t4mc.c"

}
 
static inline int  foo2__t4mc__0 (int i  )  ; 

#include <setjmp.h> 


#line 7 "t4mc.mc"
int foo1(int i)  
# 71 "t4mc.c"
{
# 73 "t4mc.c"
int retValue_acc;




# 79 "t4mc.c"
{

#line 8 "t4mc.mc"
printf("\t\t in foo1\n"); 
#line 9 "t4mc.mc"
foo2__t4mc__0(i); 
#line 10 "t4mc.mc"
printf("\t\t end of foo1\n"); 
#line 11 "t4mc.mc"

# 90 "t4mc.c"
retValue_acc = i;
# 92 "t4mc.c"
return (int )retValue_acc;
 
# 95 "t4mc.c"

}

# 99 "t4mc.c"
return (int )retValue_acc;

# 102 "t4mc.c"

}
  void __utac_acc__t4a1__1 (void);

  int foo2 (int i  ) ; 

# 109 "t4mc.c"
static inline int  foo2__t4mc__0 (int i  ) {

# 112 "t4mc.c"
int retValue_acc;

{
__utac_acc__t4a1__1();

}

# 120 "t4mc.c"
retValue_acc = foo2 ( i ) ;  

# 123 "t4mc.c"
return (int )retValue_acc;
}
 
#line 14 "t4mc.mc"
int foo(int i)  
# 129 "t4mc.c"
{
# 131 "t4mc.c"
int retValue_acc;




# 137 "t4mc.c"
{

#line 15 "t4mc.mc"
printf("\t in foo\n"); 
#line 16 "t4mc.mc"
foo1(i); 
#line 17 "t4mc.mc"
printf("\t end of foo\n"); 
#line 18 "t4mc.mc"

# 148 "t4mc.c"
retValue_acc = i;
# 150 "t4mc.c"
return (int )retValue_acc;
 
# 153 "t4mc.c"

}

# 157 "t4mc.c"
return (int )retValue_acc;

# 160 "t4mc.c"

}
 
#line 21 "t4mc.mc"
int foo4(int i)  
# 166 "t4mc.c"
{
# 168 "t4mc.c"
int retValue_acc;




# 174 "t4mc.c"
{

#line 22 "t4mc.mc"
printf("\t in foo4\n"); 
#line 23 "t4mc.mc"

# 181 "t4mc.c"
retValue_acc = i;
# 183 "t4mc.c"
return (int )retValue_acc;
 
# 186 "t4mc.c"

}

# 190 "t4mc.c"
return (int )retValue_acc;

# 193 "t4mc.c"

}
 
static inline int  foo4__t4mc__1 (int i  )  ; 

#line 27 "t4mc.mc"
int foo3(int i)  
# 201 "t4mc.c"
{
# 203 "t4mc.c"
int retValue_acc;




# 209 "t4mc.c"
{

#line 28 "t4mc.mc"
printf("\t in foo3\n"); 
#line 29 "t4mc.mc"
foo4__t4mc__1(i); 
#line 30 "t4mc.mc"
printf("\t end of foo3\n"); 
#line 31 "t4mc.mc"

# 220 "t4mc.c"
retValue_acc = i;
# 222 "t4mc.c"
return (int )retValue_acc;
 
# 225 "t4mc.c"

}

# 229 "t4mc.c"
return (int )retValue_acc;

# 232 "t4mc.c"

}
  void __utac_acc__t4a1__2 (void);

  int foo4 (int i  ) ; 

# 239 "t4mc.c"
static inline int  foo4__t4mc__1 (int i  ) {

# 242 "t4mc.c"
int retValue_acc;

{
__utac_acc__t4a1__2();

}

# 250 "t4mc.c"
retValue_acc = foo4 ( i ) ;  

# 253 "t4mc.c"
return (int )retValue_acc;
}
 
static inline int  foo3__t4mc__3 (int i  )  ; 

static inline int  foo__t4mc__2 (int i  )  ; 

#line 35 "t4mc.mc"
int main()  
# 263 "t4mc.c"
{
# 265 "t4mc.c"
int retValue_acc;




# 271 "t4mc.c"
{

#line 36 "t4mc.mc"
printf("in main, call foo\n"); 
#line 37 "t4mc.mc"
foo__t4mc__2(1); 
#line 38 "t4mc.mc"
printf("in main, call foo3\n"); 
#line 39 "t4mc.mc"
foo3__t4mc__3(1); 
#line 40 "t4mc.mc"
printf("end of main\n"); 
#line 41 "t4mc.mc"

# 286 "t4mc.c"
retValue_acc = 0;
# 288 "t4mc.c"
return (int )retValue_acc;
 
# 291 "t4mc.c"

}

# 295 "t4mc.c"
return (int )retValue_acc;

# 298 "t4mc.c"

}
void __utac_acc__t4a1__3 (int  ) ;

;

  int foo3 (int i  ) ; 

# 307 "t4mc.c"
static inline int  foo3__t4mc__3 (int i  ) {

# 310 "t4mc.c"
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
 __utac_acc__t4a1__3 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 333 "t4mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 341 "t4mc.c"
retValue_acc = foo3 ( i ) ;  

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 353 "t4mc.c"
return (int )retValue_acc;
}
void __utac_acc__t4a1__3 (int  ) ;

;

  int foo (int i  ) ; 

# 362 "t4mc.c"
static inline int  foo__t4mc__2 (int i  ) {

# 365 "t4mc.c"
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
 __utac_acc__t4a1__3 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 388 "t4mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 396 "t4mc.c"
retValue_acc = foo ( i ) ;  

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 408 "t4mc.c"
return (int )retValue_acc;
}
 
