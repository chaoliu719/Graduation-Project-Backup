
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

#line 1 "t6a2.acc"
 inline void __utac_acc__t6a2__1(void) { 



#line 2 "t6a2.acc"
printf("aspect error : call foo3 in cflow of call(foo) \n"); }

 
#line 5 "t6a2.acc"
 inline void __utac_acc__t6a2__2(void) { 



#line 6 "t6a2.acc"
printf("aspect error : call foo3 in cflow of execution(foo) \n"); }

 
#line 9 "t6a2.acc"
 inline void __utac_acc__t6a2__3(void) { 



#line 10 "t6a2.acc"
printf("aspect : call foo3 in cflow of execution(main) \n"); }

 
#line 14 "t6a2.acc"
 inline void __utac_acc__t6a2__4(void) { 



#line 15 "t6a2.acc"
printf("aspect error : call foo3 in cflow of call(foo1) \n"); }

 
#line 18 "t6a2.acc"
 inline void __utac_acc__t6a2__5(void) { 



#line 19 "t6a2.acc"
printf("aspect error : call foo3 in cflow of execution(foo1) \n"); }

 
#line 22 "t6a2.acc"
 inline void __utac_acc__t6a2__6(void) { 



#line 23 "t6a2.acc"
printf("aspect error : call foo3 in cflow of call(foo2) \n"); }

 
#line 26 "t6a2.acc"
 inline void __utac_acc__t6a2__7(void) { 



#line 27 "t6a2.acc"
printf("aspect error : call foo3 in cflow of execution(foo2) \n"); }

 

 int __utac__cflow_t6a2_6 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t6a2_5 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t6a2_4 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t6a2_3 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t6a2_2 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t6a2_1 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 int __utac__cflow_t6a2_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


