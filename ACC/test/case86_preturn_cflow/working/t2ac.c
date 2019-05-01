
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
printf("call foo2 in cflow of call foo\n"); }

 
#line 5 "t2ac.acc"
 inline void __utac_acc__t2ac__2(void) { 



#line 6 "t2ac.acc"
printf("call foo2 in cflow of call foo1\n"); }

 
#line 9 "t2ac.acc"
 inline void __utac_acc__t2ac__3(void) { 



#line 10 "t2ac.acc"
printf("call foo2 in cflow of execution foo\n"); }

 
#line 13 "t2ac.acc"
 inline void __utac_acc__t2ac__4(void) { 



#line 14 "t2ac.acc"
printf("call foo2 in cflow of execution foo1\n"); }

 
#line 17 "t2ac.acc"
 inline void __utac_acc__t2ac__5(void) { 



#line 18 "t2ac.acc"
printf("call foo2 in cflow of execution main\n"); }

 
#include <setjmp.h> 




#line 21 "t2ac.acc"
 inline void __utac_acc__t2ac__6(   struct JoinPoint *  this  )  {
 


#line 22 "t2ac.acc"
printf("aspect: after execution foo1, do preturn\n"); 
#line 23 "t2ac.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 3);longjmp(*p, 1); }; }

 

 int __utac__cflow_t2ac_4 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t2ac_3 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t2ac_2 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t2ac_1 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t2ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 

