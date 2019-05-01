
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


#line 1 "t6a1.acc"
 inline void __utac_acc__t6a1__1(int err) {



#line 2 "t6a1.acc"
printf("aspect: catch an exception for set(int a), err = %d\n", err); 
#line 3 "t6a1.acc"
printf("throw a new exception = %d\n", err + 1); 
#line 4 "t6a1.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, err + 1);}; }

 
#line 7 "t6a1.acc"
 inline void __utac_acc__t6a1__2(int err) {



#line 8 "t6a1.acc"
printf("aspect: catch an exception for call($ foo()) , err = %d\n", err); }

 
#line 11 "t6a1.acc"
 inline void __utac_acc__t6a1__3(int val) {



#line 12 "t6a1.acc"
printf("aspect: before set(int a) \n"); 
#line 13 "t6a1.acc"
if (val < 0){
{ 
#line 14 "t6a1.acc"
printf("throw exception %d inside advice, \n", 9); 
#line 15 "t6a1.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 9);}; } }
#line 17 "t6a1.acc"
printf("aspect: end \n"); }

 



