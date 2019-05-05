
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

# 1 "t2_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t2_ac.c" 
int mp; 
#line 3 "t2_ac.c"
void foo(int a); 
#line 5 "t2_ac.c"
int foo2(); 
#line 7 "t2_ac.c"
char *foo3(double a); 
#line 9 "t2_ac.c"
static void foo4(); 
#line 13 "t2_ac.c"
struct A {int b; 
}a; 
#line 15 "t2_ac.c"
static struct A ab; 



