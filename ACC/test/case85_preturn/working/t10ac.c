
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




#line 1 "t10ac.acc"
 inline void __utac_acc__t10ac__1(   struct JoinPoint *  this  )  {
 


#line 2 "t10ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 0);longjmp(*p, 1); }; }

 


#line 5 "t10ac.acc"
 inline void __utac_acc__t10ac__2(   struct JoinPoint *  this  )  {
 


#line 6 "t10ac.acc"

#line 6 "t10ac.acc"
int i = 99;
#line 7 "t10ac.acc"

#line 7 "t10ac.acc"
int j = 2;
#line 8 "t10ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( i * j);longjmp(*p, 1); }; }

 


#line 10 "t10ac.acc"
 inline void __utac_acc__t10ac__3(   struct JoinPoint *  this  )  {
 


#line 11 "t10ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 11.10);longjmp(*p, 1); }; }

 


#line 13 "t10ac.acc"
 inline void __utac_acc__t10ac__4(   struct JoinPoint *  this  )  {
 


#line 14 "t10ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 1.11111);longjmp(*p, 1); }; }

 


#line 16 "t10ac.acc"
 inline void __utac_acc__t10ac__5(   struct JoinPoint *  this  )  {
 


#line 17 "t10ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( "This is a preturn value from advice");longjmp(*p, 1); }; }

 


#line 20 "t10ac.acc"
 inline void __utac_acc__t10ac__6(   struct JoinPoint *  this  )  {
 


#line 21 "t10ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 'Z');longjmp(*p, 1); }; }

 


#line 24 "t10ac.acc"
 inline void __utac_acc__t10ac__7(   struct JoinPoint *  this  )  {
 


#line 25 "t10ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( ((void *)0));longjmp(*p, 1); }; }

 



