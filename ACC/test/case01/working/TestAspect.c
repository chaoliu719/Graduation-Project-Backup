
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

# 1 "TestAspect.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "TestAspect.c" 
# 18 "TestAspect.c" 
 inline void __utac_acc__TestAspect__1(void) { 



#line 20 "TestAspect.c"
printf("before sort function execution\n"); }

 
#line 23 "TestAspect.c"
 inline void __utac_acc__TestAspect__2(void) { 



#line 25 "TestAspect.c"
printf("after sort function execution\n"); }

 
#line 29 "TestAspect.c"
 inline void __utac_acc__TestAspect__3(void) { 



#line 31 "TestAspect.c"
printf("around sort function execution\n"); 
#line 32 "TestAspect.c"
printf("no sorting\n"); }

 
#line 35 "TestAspect.c"
 inline void __utac_acc__TestAspect__4(void) { 



#line 37 "TestAspect.c"
printf("before incr function call\n"); }

 
#line 40 "TestAspect.c"
 inline void __utac_acc__TestAspect__5(void) { 



#line 42 "TestAspect.c"
printf("after incr function call\n"); }

 
#line 45 "TestAspect.c"
 inline int __utac_acc__TestAspect__6(void) { 



#line 47 "TestAspect.c"
printf("around incr function call\n"); 
#line 48 "TestAspect.c"
return 100; }

 



