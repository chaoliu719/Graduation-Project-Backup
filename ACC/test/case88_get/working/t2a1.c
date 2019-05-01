
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

#line 1 "t2a1.acc"
 inline void __utac_acc__t2a1__1(void) { 



#line 2 "t2a1.acc"
printf("aspect 1: get && args \n"); }

 
#line 5 "t2a1.acc"
 inline void __utac_acc__t2a1__2(int j) {



#line 6 "t2a1.acc"
printf("aspect 2: get && args , val = %d\n", j); }

 
#line 9 "t2a1.acc"
 inline void __utac_acc__t2a1__3(int *j) {



#line 10 "t2a1.acc"
printf("aspect 3: get && args , ori val = %d, change to 1000 \n", (*j)); 
#line 11 "t2a1.acc"
(*j) = 1000; }

 
#line 14 "t2a1.acc"
 inline void __utac_acc__t2a1__4(void) { 



#line 15 "t2a1.acc"
printf("aspect 4: get && result \n"); }

 
#line 18 "t2a1.acc"
 inline void __utac_acc__t2a1__5(int res) {



#line 19 "t2a1.acc"
printf("aspect 5: get && result, = %d \n", res); }

 
#line 22 "t2a1.acc"
 inline void __utac_acc__t2a1__6(void) { 



#line 23 "t2a1.acc"
printf("aspect error: should not match \n"); }

 
#line 26 "t2a1.acc"
 inline void __utac_acc__t2a1__7(void) { 



#line 27 "t2a1.acc"
printf("aspect 6: get && infunc(foo) \n"); }

 
#line 30 "t2a1.acc"
 inline void __utac_acc__t2a1__8(void) { 



#line 32 "t2a1.acc"
printf("aspect 7: get && infunc(main) \n"); }

 

 int __utac__cflow_t2a1_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


