
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

#line 5 "t1ac.ac"
struct A {int a; int b; 
}; 
#line 11 "t1ac.ac"
union B {int a; int b; 
}ub = {.a = 77}; 
#line 15 "t1ac.ac"
int main()  {

#line 16 "t1ac.ac"

#line 16 "t1ac.ac"
struct A foo;
#line 18 "t1ac.ac"

#line 18 "t1ac.ac"
__typeof (foo) d;
#line 20 "t1ac.ac"

#line 20 "t1ac.ac"
typeof (char ) i;
#line 21 "t1ac.ac"

#line 21 "t1ac.ac"
typeof (char *) ip;
#line 24 "t1ac.ac"
foo = (struct A ){3}; 
#line 26 "t1ac.ac"
printf("foo.a = %d\n", foo.a); 
#line 28 "t1ac.ac"
foo = (struct A ){.b = 4}; 
#line 30 "t1ac.ac"
printf("foo.b = %d\n", foo.b); 
#line 32 "t1ac.ac"
printf("foo.a = %d\n", ((struct A ){9}).a); 
#line 34 "t1ac.ac"
printf("ub.b = %d\n", ub.b); 
#line 36 "t1ac.ac"
printf("size of i = %d, ip = %d\n", sizeof (i), sizeof (ip)); 
#line 38 "t1ac.ac"
return 0; }
 



