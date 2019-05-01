
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

#line 1 "t1ac.acc"
 inline void __utac_acc__t1ac__1(void) { 



#line 2 "t1ac.acc"
printf("aspect1\n"); }

 
#line 5 "t1ac.acc"
 inline void __utac_acc__t1ac__2(void) { 



#line 6 "t1ac.acc"
printf("aspect2\n"); }

 
#line 10 "t1ac.acc"
 inline void __utac_acc__t1ac__3(void) { 



#line 11 "t1ac.acc"
printf("aspect3\n"); }

 
#line 15 "t1ac.acc"
 inline void __utac_acc__t1ac__4(void) { 



#line 16 "t1ac.acc"
printf("aspect4\n"); }

 
#line 19 "t1ac.acc"
 inline void __utac_acc__t1ac__5(void) { 



#line 20 "t1ac.acc"
printf("aspect5\n"); }

 
#line 23 "t1ac.acc"
 inline void __utac_acc__t1ac__6(void) { 



#line 24 "t1ac.acc"
printf("aspect6\n"); }

 
#line 28 "t1ac.acc"
 inline void __utac_acc__t1ac__7(void) { 



#line 29 "t1ac.acc"
printf("aspect7\n"); }

 
#line 33 "t1ac.acc"
 inline void __utac_acc__t1ac__8(void) { 



#line 34 "t1ac.acc"
printf("aspect8\n"); }

 



