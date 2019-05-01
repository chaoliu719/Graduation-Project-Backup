
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


#line 1 "t7a2.acc"
 inline void __utac_acc__t7a2__1(void) { 



#line 2 "t7a2.acc"
printf("before call foo3, throw exception 3\n"); 
#line 3 "t7a2.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 3);}; 
#line 4 "t7a2.acc"
printf("end of aspect\n"); }

 


#line 7 "t7a2.acc"
 inline void __utac_acc__t7a2__2(int e , struct JoinPoint *  this  )  {
 


#line 8 "t7a2.acc"
printf("catch exception %d from calling foo2\n", e); 
#line 9 "t7a2.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 9);longjmp(*p, 1); }; }

 
#line 12 "t7a2.acc"
 inline void __utac_acc__t7a2__3(void) { 



#line 13 "t7a2.acc"
printf("call foo4 in cflow of execution of main\n"); }

 
#line 16 "t7a2.acc"
 inline void __utac_acc__t7a2__4(void) { 



#line 17 "t7a2.acc"
printf("call foo4 in cflow of execution of foo\n"); }

 
#line 20 "t7a2.acc"
 inline void __utac_acc__t7a2__5(void) { 



#line 21 "t7a2.acc"
printf("call foo4 in cflow of execution of foo1\n"); }

 
#line 23 "t7a2.acc"
 inline void __utac_acc__t7a2__6(void) { 



#line 24 "t7a2.acc"
printf("call foo4 in cflow of execution of foo2\n"); }

 
#line 26 "t7a2.acc"
 inline void __utac_acc__t7a2__7(void) { 



#line 27 "t7a2.acc"
printf("call foo4 in cflow of execution of foo3\n"); }

 
#line 31 "t7a2.acc"
 inline void __utac_acc__t7a2__8(void) { 



#line 32 "t7a2.acc"
printf("call foo4 in cflow of call of foo\n"); }

 
#line 35 "t7a2.acc"
 inline void __utac_acc__t7a2__9(void) { 



#line 36 "t7a2.acc"
printf("call foo4 in cflow of call of foo1\n"); }

 
#line 38 "t7a2.acc"
 inline void __utac_acc__t7a2__10(void) { 



#line 39 "t7a2.acc"
printf("call foo4 in cflow of call of foo2\n"); }

 
#line 41 "t7a2.acc"
 inline void __utac_acc__t7a2__11(void) { 



#line 42 "t7a2.acc"
printf("call foo4 in cflow of call of foo3\n"); }

 

 int __utac__cflow_t7a2_8 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_7 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_6 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_5 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_4 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_3 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_2 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_1 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t7a2_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


