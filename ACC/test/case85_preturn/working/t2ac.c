
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

#line 1 "t2ac.acc"
 inline void __utac_acc__t2ac__1(void) { 



#line 2 "t2ac.acc"
printf("after aspect 1\n"); }

 
#include <setjmp.h> 




#line 5 "t2ac.acc"
 inline void __utac_acc__t2ac__2(   struct JoinPoint *  this  )  {
 


#line 6 "t2ac.acc"
printf("after aspect 2\n"); 
#line 7 "t2ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 99);longjmp(*p, 1); }; }

 
#line 10 "t2ac.acc"
 inline void __utac_acc__t2ac__3(void) { 



#line 11 "t2ac.acc"
printf("after aspect 3, should be skipped \n"); }

 



