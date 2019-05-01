
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


#line 1 "t4mc.mc"
int foo3(int a)  
# 33 "t4mc.c"
{
# 35 "t4mc.c"
int retValue_acc;




# 41 "t4mc.c"
{

#line 2 "t4mc.mc"
printf("in foo3, a = %d\n", a); 
#line 3 "t4mc.mc"

# 48 "t4mc.c"
retValue_acc = a * 2;
# 50 "t4mc.c"
return (int )retValue_acc;
 
# 53 "t4mc.c"

}

# 57 "t4mc.c"
return (int )retValue_acc;

# 60 "t4mc.c"

}
 
#line 7 "t4mc.mc"
int foo2(int a, int b, int c)  
# 66 "t4mc.c"
{
# 68 "t4mc.c"
int retValue_acc;




# 74 "t4mc.c"
{

#line 8 "t4mc.mc"
printf("in foo2, a = %d, b = %d , c = %d \n", a, b, c); 
# 79 "t4mc.c"

}

# 83 "t4mc.c"
return (int )retValue_acc;

# 86 "t4mc.c"

}
 
int __utac__cflow_t9ac_0 ( int , int);


int __utac__cflow_t9ac_0 ( int , int);


int __utac__cflow_t9ac_0 ( int , int);


static inline int  foo3__t4mc__1 (int a  ,void * __utac__excep_para )  ; 

static inline int  foo2__t4mc__0 (int a ,int b ,int c  )  ; 

#include <setjmp.h> 


#line 12 "t4mc.mc"
int foo(int a, int b, int c)  
# 108 "t4mc.c"
{
# 110 "t4mc.c"
int retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
__utac__exception__cf_handler_set ( (void *) & __utac__excep_var, & __utac__cflow_t9ac_0 , __utac__cflow_t9ac_0(3, 0)); } 
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
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t9ac_0, __utac__cflow_t9ac_0(3,0)); } 
 } 
__utac__cflow_t9ac_0 ( 1, 0 ) ; 

}

# 147 "t4mc.c"
{

#line 13 "t4mc.mc"
printf("in foo, a = %d, b = %d, c = %d \n", a, b, c); 
#line 14 "t4mc.mc"
foo2__t4mc__0(a * b, b * c, c); 
#line 15 "t4mc.mc"
foo3__t4mc__1(9,   (void *) &  __utac__excep_var ); 
#line 16 "t4mc.mc"

# 158 "t4mc.c"
retValue_acc = 0;
{
extern void __utac__exception__cf_handler_free(void * exception) ; 
__utac__exception__cf_handler_free ( (void *) & __utac__excep_var); 
__utac__cflow_t9ac_0 ( 2, 0 ) ; 

}

# 167 "t4mc.c"
return (int )retValue_acc;
 
# 170 "t4mc.c"

}

{
extern void __utac__exception__cf_handler_free(void * exception) ; 
__utac__exception__cf_handler_free ( (void *) & __utac__excep_var); 
__utac__cflow_t9ac_0 ( 2, 0 ) ; 

}

# 181 "t4mc.c"
return (int )retValue_acc;

# 184 "t4mc.c"

}
  void __utac_acc__t9ac__2 (  struct JoinPoint * );

  int foo3 (int a  ) ; 

# 191 "t4mc.c"
static inline int  foo3__t4mc__1 (int a  ,void * __utac__excep_para ) {

# 194 "t4mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t9ac__2(&this );
 
 } 
 } 

# 205 "t4mc.c"
retValue_acc = foo3 ( a ) ;  

# 208 "t4mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t9ac__1 (void);
int __utac__cflow_t9ac_0(int, int);

  int foo2 (int a ,int b ,int c  ) ; 

# 216 "t4mc.c"
static inline int  foo2__t4mc__0 (int a ,int b ,int c  ) {

# 219 "t4mc.c"
int retValue_acc;

{
if( __utac__cflow_t9ac_0(3,0) ) { 
__utac_acc__t9ac__1();
 } 

}

# 229 "t4mc.c"
retValue_acc = foo2 ( a , b , c ) ;  

# 232 "t4mc.c"
return (int )retValue_acc;
}
 
static inline int  foo3__t4mc__2 (int a  ,void * __utac__excep_para )  ; 

#line 19 "t4mc.mc"
void foo4()  
# 240 "t4mc.c"
{

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
return ; 
} 





# 263 "t4mc.c"
{

#line 20 "t4mc.mc"
printf("in foo4, call foo3\n"); 
#line 21 "t4mc.mc"
foo3__t4mc__2(9,   (void *) &  __utac__excep_var ); 
#line 22 "t4mc.mc"
printf("end of foo4\n"); 
# 272 "t4mc.c"

}

# 276 "t4mc.c"

}
  void __utac_acc__t9ac__2 (  struct JoinPoint * );

  int foo3 (int a  ) ; 

# 283 "t4mc.c"
static inline int  foo3__t4mc__2 (int a  ,void * __utac__excep_para ) {

# 286 "t4mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t9ac__2(&this );
 
 } 
 } 

# 297 "t4mc.c"
retValue_acc = foo3 ( a ) ;  

# 300 "t4mc.c"
return (int )retValue_acc;
}
 
static inline int  foo2__t4mc__3 (int a ,int b ,int c  )  ; 

#line 25 "t4mc.mc"
int main()  
# 308 "t4mc.c"
{
# 310 "t4mc.c"
int retValue_acc;




# 316 "t4mc.c"
{

#line 27 "t4mc.mc"
printf("call foo(3,4,5) in main\n"); 
#line 28 "t4mc.mc"
foo(3, 4, 5); 
#line 29 "t4mc.mc"
printf("\n---------------------\n"); 
#line 30 "t4mc.mc"
printf("call foo2(3,4,5) in main\n"); 
#line 31 "t4mc.mc"
foo2__t4mc__3(3, 4, 5); 
#line 32 "t4mc.mc"
printf("\n---------------------\n"); 
#line 33 "t4mc.mc"
printf("call foo4 in main\n"); 
#line 34 "t4mc.mc"
foo4(); 
#line 35 "t4mc.mc"

# 337 "t4mc.c"
retValue_acc = 0;
# 339 "t4mc.c"
return (int )retValue_acc;
 
# 342 "t4mc.c"

}

# 346 "t4mc.c"
return (int )retValue_acc;

# 349 "t4mc.c"

}
  void __utac_acc__t9ac__1 (void);
int __utac__cflow_t9ac_0(int, int);

  int foo2 (int a ,int b ,int c  ) ; 

# 357 "t4mc.c"
static inline int  foo2__t4mc__3 (int a ,int b ,int c  ) {

# 360 "t4mc.c"
int retValue_acc;

{
if( __utac__cflow_t9ac_0(3,0) ) { 
__utac_acc__t9ac__1();
 } 

}

# 370 "t4mc.c"
retValue_acc = foo2 ( a , b , c ) ;  

# 373 "t4mc.c"
return (int )retValue_acc;
}
 
