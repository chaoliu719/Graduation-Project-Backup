
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


  int __utac_acc__t6ac__1 (  struct JoinPoint * );


  void __utac_acc__t6ac__2 (  struct JoinPoint * );


  void __utac_acc__t6ac__3 (void);


#include <setjmp.h> 


#line 1 "t1mc.mc"
int foo2(void )  
# 45 "t1mc.c"
{
# 47 "t1mc.c"
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




 { 
 struct JoinPoint this; 
this.excep_return =  (void *) &__utac__excep_var; 
 { 
retValue_acc = __utac_acc__t6ac__1(&this );
 
 } 
 } 
 { 
 struct JoinPoint this; 
this.excep_return =  (void *) &__utac__excep_var; 
 { 
__utac_acc__t6ac__2(&this );
 
 } 
 } 

{
__utac_acc__t6ac__3();

}

# 93 "t1mc.c"
return (int )retValue_acc;

# 96 "t1mc.c"

}
 
#line 6 "t1mc.mc"
int foo1(void )  
# 102 "t1mc.c"
{
# 104 "t1mc.c"
int retValue_acc;




# 110 "t1mc.c"
{

#line 7 "t1mc.mc"
printf("in foo1\n"); 
#line 8 "t1mc.mc"
foo2(); 
#line 9 "t1mc.mc"
printf("end of foo1\n"); 
#line 10 "t1mc.mc"

# 121 "t1mc.c"
retValue_acc = 0;
# 123 "t1mc.c"
return (int )retValue_acc;
 
# 126 "t1mc.c"

}

# 130 "t1mc.c"
return (int )retValue_acc;

# 133 "t1mc.c"

}
 
#line 13 "t1mc.mc"
int main(void )  
# 139 "t1mc.c"
{
# 141 "t1mc.c"
int retValue_acc;




# 147 "t1mc.c"
{

#line 14 "t1mc.mc"
printf("return value of foo1 = %d \n", foo1()); 
#line 15 "t1mc.mc"

# 154 "t1mc.c"
retValue_acc = 0;
# 156 "t1mc.c"
return (int )retValue_acc;
 
# 159 "t1mc.c"

}

# 163 "t1mc.c"
return (int )retValue_acc;

# 166 "t1mc.c"

}
 
