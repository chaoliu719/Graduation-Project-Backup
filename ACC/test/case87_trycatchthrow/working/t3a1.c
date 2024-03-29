
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

extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) ; 
extern void __utac__exception__cf_handler_free(void * exception);
extern void __utac__exception__cf_handler_reset(void * exception) ; 
extern void * __utac__error_stack_mgt(void * env , int mode, int count) ;

#include <setjmp.h> 


#line 1 "t3a1.acc"
 inline void __utac_acc__t3a1__1(void) { 



#line 2 "t3a1.acc"
printf("aspect, throw 3\n"); 
#line 3 "t3a1.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 3);}; 
#line 4 "t3a1.acc"
printf("end of aspect\n"); }

 
#line 7 "t3a1.acc"
 inline void __utac_acc__t3a1__2(int e) {



#line 8 "t3a1.acc"
printf("1st cacth, exception = %d\n", e); }

 
#line 11 "t3a1.acc"
 inline void __utac_acc__t3a1__3(int e) {



#line 12 "t3a1.acc"
printf("2nd cacth, exception = %d\n", e); }

 
#line 15 "t3a1.acc"
 inline void __utac_acc__t3a1__4(void) { 



#line 16 "t3a1.acc"
printf("after aspect for foo\n"); }

 



