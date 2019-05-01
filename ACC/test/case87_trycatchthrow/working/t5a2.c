
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


#line 1 "t5a2.acc"
 inline void __utac_acc__t5a2__1(void) { 



#line 2 "t5a2.acc"
printf("aspect, throw 3\n"); 
#line 3 "t5a2.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 3);}; }

 
#line 6 "t5a2.acc"
 inline void __utac_acc__t5a2__2(int e) {



#line 7 "t5a2.acc"
printf("catch 1, exception = %d\n", e); 
#line 8 "t5a2.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, e + 1);}; }

 
#line 11 "t5a2.acc"
 inline void __utac_acc__t5a2__3(int e) {



#line 12 "t5a2.acc"
printf("catch 1.5, exception = %d\n", e); 
#line 13 "t5a2.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, e + 1);}; }

 
#line 16 "t5a2.acc"
 inline void __utac_acc__t5a2__4(int e) {



#line 17 "t5a2.acc"
printf("catch 2, exception = %d\n", e); 
#line 18 "t5a2.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, e + 1);}; }

 
#line 23 "t5a2.acc"
 inline void __utac_acc__t5a2__5(int e) {



#line 24 "t5a2.acc"
printf("catch 3, not in cflow of foo3, exception = %d\n", e); }

 
#line 27 "t5a2.acc"
 inline void __utac_acc__t5a2__6(int e) {



#line 28 "t5a2.acc"
printf("catch 4, in cflow of foo3,  exception = %d\n", e); 
#line 29 "t5a2.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, e + 1);}; }

 
#line 32 "t5a2.acc"
 inline void __utac_acc__t5a2__7(int e) {



#line 33 "t5a2.acc"
printf("catch 5, exception = %d\n", e); }

 

 int __utac__cflow_t5a2_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


