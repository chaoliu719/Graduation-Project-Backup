
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

# 1 "t1ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 3 "t1ac_ac.c" 
struct X {int a; 
}; 
#line 7 "t1ac_ac.c"
union Y {int b; 
}; 
#line 9 "t1ac_ac.c"
enum Z {A,B}; 
#line 11 "t1ac_ac.c"
 inline void __utac_acc__t1ac__1(void) { 



#line 12 "t1ac_ac.c"
printf("before call foo1\n"); }

 
#line 15 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(void) { 



#line 16 "t1ac_ac.c"
printf("before call foo2\n"); }

 
#line 19 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(void) { 



#line 20 "t1ac_ac.c"
printf("before call foo3\n"); }

 
#line 23 "t1ac_ac.c"
 inline void __utac_acc__t1ac__4(void) { 



#line 24 "t1ac_ac.c"
printf("before call foo4\n"); }

 
#line 27 "t1ac_ac.c"
 inline void __utac_acc__t1ac__5(void) { 



#line 28 "t1ac_ac.c"
printf("before call foo5\n"); }

 
#line 32 "t1ac_ac.c"
 inline void __utac_acc__t1ac__6(void) { 



#line 33 "t1ac_ac.c"
printf("before call foo6\n"); }

 



