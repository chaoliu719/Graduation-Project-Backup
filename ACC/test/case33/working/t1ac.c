
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
# 4 "t1ac_ac.c" 
struct pointcut {int pointcut; 
}; 
#line 8 "t1ac_ac.c"
 
#line 11 "t1ac_ac.c"
 
#line 14 "t1ac_ac.c"
 
#line 16 "t1ac_ac.c"
 
#line 18 "t1ac_ac.c"
 
#line 21 "t1ac_ac.c"
 
#line 23 "t1ac_ac.c"
 inline void __utac_acc__t1ac__7(void) { 



#line 24 "t1ac_ac.c"
printf("advice:before execution of foo1\n"); }

 
#line 27 "t1ac_ac.c"
 inline void __utac_acc__t1ac__8(int j, int k) {



#line 28 "t1ac_ac.c"
printf("advice:before call foo1, second argu = %d, third argu = %d\n", j, k); }

 
#line 31 "t1ac_ac.c"
 
#line 33 "t1ac_ac.c"
 inline void __utac_acc__t1ac__10(int j, int m) {



#line 34 "t1ac_ac.c"
printf("advice:after call foo1, second argum = %d, result = %d\n", j, m); }

 
#line 38 "t1ac_ac.c"
 inline void __utac_acc__t1ac__11(void) { 



#line 39 "t1ac_ac.c"
printf("advice:before call foo2 in main\n"); }

 
#line 42 "t1ac_ac.c"
 inline void __utac_acc__t1ac__12(void) { 



#line 43 "t1ac_ac.c"
printf("advice:call foo2 in foo1\n"); }

 


#line 46 "t1ac_ac.c"
 inline void __utac_acc__t1ac__13(   struct JoinPoint *  this  )  {
 


#line 47 "t1ac_ac.c"

#line 47 "t1ac_ac.c"
int poincut;
#line 48 "t1ac_ac.c"
printf("advice:around foo3 execution\n"); 
#line 49 "t1ac_ac.c"
(this->fp(this)); }

 



