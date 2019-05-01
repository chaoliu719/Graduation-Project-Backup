
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

#line 1 "t3a1.acc"
 
#line 3 "t3a1.acc"
 inline void __utac_acc__t3a1__2(void) { 



#line 4 "t3a1.acc"
printf("aspect 1: get && args \n"); }

 
#line 7 "t3a1.acc"
 inline void __utac_acc__t3a1__3(int j) {



#line 8 "t3a1.acc"
printf("aspect 2: get && args , val = %d\n", j); }

 
#line 11 "t3a1.acc"
 inline void __utac_acc__t3a1__4(int *j) {



#line 12 "t3a1.acc"
printf("aspect 3: get && args , ori val = %d, change to 1000 \n", (*j)); 
#line 13 "t3a1.acc"
(*j) = 1000; }

 
#line 16 "t3a1.acc"
 inline void __utac_acc__t3a1__5(void) { 



#line 17 "t3a1.acc"
printf("aspect 4: get && result \n"); }

 
#line 20 "t3a1.acc"
 inline void __utac_acc__t3a1__6(int res) {



#line 21 "t3a1.acc"
printf("aspect 5: get && result, = %d \n", res); }

 
#line 24 "t3a1.acc"
 inline void __utac_acc__t3a1__7(void) { 



#line 25 "t3a1.acc"
printf("aspect error: should not match \n"); }

 
#line 28 "t3a1.acc"
 inline void __utac_acc__t3a1__8(void) { 



#line 29 "t3a1.acc"
printf("aspect 6: get && infunc(foo) \n"); }

 
#line 32 "t3a1.acc"
 inline void __utac_acc__t3a1__9(void) { 



#line 34 "t3a1.acc"
printf("aspect 7: get && infunc(main) \n"); }

 

 int __utac__cflow_t3a1_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


