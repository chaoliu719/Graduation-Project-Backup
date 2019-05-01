
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

#line 3 "t1ac.acc"
 inline void __utac_acc__t1ac__1(int *a, int ap) {



#line 5 "t1ac.acc"
printf("before calling foo, original parameter = %d, %d \n", (*a), ap); 
#line 6 "t1ac.acc"
(*a) *= 2; 
#line 7 "t1ac.acc"
ap *= 2; 
#line 9 "t1ac.acc"
printf("in aspect, double their value. The 1st should be modified, 2nd should be unchanged  \n"); }

 
#line 13 "t1ac.acc"
 inline void __utac_acc__t1ac__2(int *x) {



#line 15 "t1ac.acc"
printf("after advice 1: original return value of foo1 = %d\n", (*x)); 
#line 16 "t1ac.acc"
(*x) *= 2; 
#line 17 "t1ac.acc"
printf("in aspect, double its value. Return value should be changed  \n"); }

 
#line 20 "t1ac.acc"
 inline void __utac_acc__t1ac__3(int x) {



#line 22 "t1ac.acc"
printf("after advice 2: original return value of foo2 = %d\n", x); 
#line 23 "t1ac.acc"
x *= 2; 
#line 24 "t1ac.acc"
printf("in aspect, double its value. Return value should be unchanged  \n"); }

 



