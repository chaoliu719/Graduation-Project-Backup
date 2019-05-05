
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
 inline void __utac_acc__TestAspect__1(void) { 



#line 3 "TestAspect.c"
printf("advice 1\n"); }

 
#line 8 "TestAspect.c"
 inline void __utac_acc__TestAspect__2(void) { 



#line 9 "TestAspect.c"
printf("advice 2 \n"); }

 
#line 13 "TestAspect.c"
 inline void __utac_acc__TestAspect__3(void) { 



#line 14 "TestAspect.c"
printf("advice 3 \n"); }

 
#line 18 "TestAspect.c"
 inline void __utac_acc__TestAspect__4(void) { 



#line 19 "TestAspect.c"
printf("advice 4\n"); }

 
#line 23 "TestAspect.c"
 inline void __utac_acc__TestAspect__5(void) { 



#line 24 "TestAspect.c"
printf("advice 5 \n"); }

 
#line 28 "TestAspect.c"
 inline void __utac_acc__TestAspect__6(void) { 



#line 29 "TestAspect.c"
printf("advice 6\n"); }

 
#line 32 "TestAspect.c"
 inline void __utac_acc__TestAspect__7(void) { 



#line 33 "TestAspect.c"
printf("advice 7\n"); }

 
#line 36 "TestAspect.c"
 inline void __utac_acc__TestAspect__8(void) { 



#line 37 "TestAspect.c"
printf("advice 8\n"); }

 



