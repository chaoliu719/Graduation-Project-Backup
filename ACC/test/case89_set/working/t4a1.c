
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

#line 1 "t4a1.acc"
 inline void __utac_acc__t4a1__1(void) { 



#line 2 "t4a1.acc"
printf("aspect 1: match set(int a) \n"); }

 
#line 5 "t4a1.acc"
 inline void __utac_acc__t4a1__2(void) { 



#line 6 "t4a1.acc"
printf("aspect 2: match set($int$ $a$ ) \n"); }

 
#line 9 "t4a1.acc"
 inline void __utac_acc__t4a1__3(void) { 



#line 10 "t4a1.acc"
printf("aspect 3: match set(myintt daf ) \n"); }

 
#line 13 "t4a1.acc"
 inline void __utac_acc__t4a1__4(void) { 



#line 14 "t4a1.acc"
printf("aspect 4: match set($ $ ) \n"); }

 



