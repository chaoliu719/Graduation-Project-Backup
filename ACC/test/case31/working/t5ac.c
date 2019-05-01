
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

# 1 "t5mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 7 "t5mc_mc.c" 
enum before {beforebefore}; 
#line 8 "t5mc_mc.c"
enum after {afterafter}; 
#line 9 "t5mc_mc.c"
enum around {aroundaround}; 
#line 11 "t5mc_mc.c"
enum call {callcall}; 
#line 12 "t5mc_mc.c"
enum execution {executionexecution}; 
#line 13 "t5mc_mc.c"
enum args {argsargs}; 
#line 14 "t5mc_mc.c"
enum result {resultresult}; 
#line 15 "t5mc_mc.c"
enum infile {infileinfile}; 
#line 16 "t5mc_mc.c"
enum infunc {infuncinfunc}; 
#line 18 "t5mc_mc.c"
enum proceed {proceedproceed}; 



