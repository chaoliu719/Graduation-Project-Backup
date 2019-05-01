
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
int a = 99; 
static inline int  a__t5mc__1 (int* __utac__para0 ,int __utac__para1  ,void * __utac__excep_para )  ; 

static inline int  a__t5mc__0 (int* __utac__para0 ,int __utac__para1  ,void * __utac__excep_para )  ; 

#include <setjmp.h> 


#line 5 "t5mc.mc"
void foo()  
# 42 "t5mc.c"
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





# 65 "t5mc.c"
{

#line 6 "t5mc.mc"

#line 6 "t5mc.mc"
int b;
#line 7 "t5mc.mc"
printf("in foo\n"); 
#line 8 "t5mc.mc"
printf("assignment: b = a = 1 \n"); 
#line 9 "t5mc.mc"
b = a__t5mc__0(&a,(1),   (void *) &  __utac__excep_var ); 
#line 10 "t5mc.mc"
printf("a = %d, b = %d \n", a, b); 
#line 11 "t5mc.mc"
printf("assignment: b=a=-1 \n"); 
#line 12 "t5mc.mc"
b = a__t5mc__1(&a,((-1)),   (void *) &  __utac__excep_var ); 
#line 13 "t5mc.mc"
printf("a = %d, b = %d \n", a, b); 
#line 14 "t5mc.mc"
printf("end of foo\n"); 
# 88 "t5mc.c"

}

# 92 "t5mc.c"

}
  int __utac_acc__t5a3__1 (int val  , struct JoinPoint * );


# 98 "t5mc.c"
static inline int  a__t5mc__1 (int* __utac__para0 ,int __utac__para1  ,void * __utac__excep_para ) {

# 101 "t5mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
int __utac__ad__arg1 = __utac__para1 ; 
retValue_acc = __utac_acc__t5a3__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 113 "t5mc.c"
return (int )retValue_acc;
}
  int __utac_acc__t5a3__1 (int val  , struct JoinPoint * );


# 119 "t5mc.c"
static inline int  a__t5mc__0 (int* __utac__para0 ,int __utac__para1  ,void * __utac__excep_para ) {

# 122 "t5mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
int __utac__ad__arg1 = __utac__para1 ; 
retValue_acc = __utac_acc__t5a3__1(__utac__ad__arg1 ,&this );
 
 } 
 } 

# 134 "t5mc.c"
return (int )retValue_acc;
}
 
#line 17 "t5mc.mc"
int main()  
# 140 "t5mc.c"
{
# 142 "t5mc.c"
int retValue_acc;




# 148 "t5mc.c"
{

#line 18 "t5mc.mc"
foo(); 
#line 19 "t5mc.mc"

# 155 "t5mc.c"
retValue_acc = 0;
# 157 "t5mc.c"
return (int )retValue_acc;
 
# 160 "t5mc.c"

}

# 164 "t5mc.c"
return (int )retValue_acc;

# 167 "t5mc.c"

}
 
