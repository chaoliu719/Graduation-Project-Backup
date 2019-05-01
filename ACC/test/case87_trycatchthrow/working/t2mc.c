
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


#line 2 "t2mc.mc"
int foo2(int i)  
# 33 "t2mc.c"
{
# 35 "t2mc.c"
int retValue_acc;




# 41 "t2mc.c"
{

#line 3 "t2mc.mc"
printf("\t\t\t in foo2\n"); 
#line 4 "t2mc.mc"

# 48 "t2mc.c"
retValue_acc = i;
# 50 "t2mc.c"
return (int )retValue_acc;
 
# 53 "t2mc.c"

}

# 57 "t2mc.c"
return (int )retValue_acc;

# 60 "t2mc.c"

}
 
static inline int  foo2__t2mc__0 (int i  )  ; 

#include <setjmp.h> 


#line 7 "t2mc.mc"
int foo1(int i)  
# 71 "t2mc.c"
{
# 73 "t2mc.c"
int retValue_acc;




# 79 "t2mc.c"
{

#line 8 "t2mc.mc"
printf("\t\t in foo1\n"); 
#line 9 "t2mc.mc"
foo2__t2mc__0(i); 
#line 10 "t2mc.mc"
printf("\t\t end of foo1\n"); 
#line 11 "t2mc.mc"

# 90 "t2mc.c"
retValue_acc = i;
# 92 "t2mc.c"
return (int )retValue_acc;
 
# 95 "t2mc.c"

}

# 99 "t2mc.c"
return (int )retValue_acc;

# 102 "t2mc.c"

}
  void __utac_acc__t2a1__1 (void);

  int foo2 (int i  ) ; 

# 109 "t2mc.c"
static inline int  foo2__t2mc__0 (int i  ) {

# 112 "t2mc.c"
int retValue_acc;

{
__utac_acc__t2a1__1();

}

# 120 "t2mc.c"
retValue_acc = foo2 ( i ) ;  

# 123 "t2mc.c"
return (int )retValue_acc;
}
 
void __utac_acc__t2a1__2 (int  ) ;


;


;


#line 14 "t2mc.mc"
int foo(int i)  
# 138 "t2mc.c"
{
# 140 "t2mc.c"
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
 __utac_acc__t2a1__2 ( __utac__try_jmp_ret_1  ) ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , __utac__try_poplevel ); 

# 166 "t2mc.c"
return ( int  ) retValue_acc ; 

 } 
} 

}

# 174 "t2mc.c"
{

#line 15 "t2mc.mc"
printf("\t in foo\n"); 
#line 16 "t2mc.mc"
foo1(i); 
#line 17 "t2mc.mc"
printf("\t end of foo\n"); 
#line 18 "t2mc.mc"

# 185 "t2mc.c"
retValue_acc = i;
{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 196 "t2mc.c"
return (int )retValue_acc;
 
# 199 "t2mc.c"

}

{

{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
__utac__error_stack_mgt ( & __utac__try_exception_1, 1 , 1 ); 

}

}

# 212 "t2mc.c"
return (int )retValue_acc;

# 215 "t2mc.c"

}
 
static inline int  foo__t2mc__1 (int i  )  ; 

#line 22 "t2mc.mc"
int main()  
# 223 "t2mc.c"
{
# 225 "t2mc.c"
int retValue_acc;




# 231 "t2mc.c"
{

#line 23 "t2mc.mc"
printf("in main, call foo\n"); 
#line 24 "t2mc.mc"
foo__t2mc__1(1); 
#line 25 "t2mc.mc"
printf("end of main\n"); 
#line 26 "t2mc.mc"

# 242 "t2mc.c"
retValue_acc = 0;
# 244 "t2mc.c"
return (int )retValue_acc;
 
# 247 "t2mc.c"

}

# 251 "t2mc.c"
return (int )retValue_acc;

# 254 "t2mc.c"

}
  void __utac_acc__t2a1__3 (void);

  int foo (int i  ) ; 

# 261 "t2mc.c"
static inline int  foo__t2mc__1 (int i  ) {

# 264 "t2mc.c"
int retValue_acc;

# 267 "t2mc.c"
retValue_acc = foo ( i ) ;  

{
__utac_acc__t2a1__3();

}

# 275 "t2mc.c"
return (int )retValue_acc;
}
 
