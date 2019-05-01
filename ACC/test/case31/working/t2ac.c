
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

# 1 "t2mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 5 "t2mc_mc.c" 
int before; 
#line 6 "t2mc_mc.c"
int after; 
#line 7 "t2mc_mc.c"
int around; 
#line 9 "t2mc_mc.c"
int call; 
#line 10 "t2mc_mc.c"
int execution; 
#line 11 "t2mc_mc.c"
int args; 
#line 12 "t2mc_mc.c"
int result; 
#line 13 "t2mc_mc.c"
int infile; 
#line 14 "t2mc_mc.c"
int infunc; 
#line 16 "t2mc_mc.c"
int proceed; 



