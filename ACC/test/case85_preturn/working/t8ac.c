
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

#line 1 "t8ac.acc"
 
#line 3 "t8ac.acc"
 inline void __utac_acc__t8ac__2(void) { 



#line 4 "t8ac.acc"
printf("call foo4 in cflow of foo1\n"); }

 
#line 6 "t8ac.acc"
 inline void __utac_acc__t8ac__3(void) { 



#line 7 "t8ac.acc"
printf("call foo4 in cflow of foo2\n"); }

 
#line 9 "t8ac.acc"
 inline void __utac_acc__t8ac__4(void) { 



#line 10 "t8ac.acc"
printf("call foo4 in cflow of foo3\n"); }

 
#include <setjmp.h> 




#line 13 "t8ac.acc"
 inline void __utac_acc__t8ac__5(   struct JoinPoint *  this  )  {
 


#line 14 "t8ac.acc"
printf("execute foo3 inside foo2 cflow, \n"); 
#line 15 "t8ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 99);longjmp(*p, 1); }; }

 

 int __utac__cflow_t8ac_2 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t8ac_1 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t8ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


