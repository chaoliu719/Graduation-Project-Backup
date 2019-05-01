
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

#line 2 "t1ac.ac"
int  __attribute__  (( __cdecl__ )) gcc_attr1_in_ac(int *); 
#line 3 "t1ac.ac"
int * __attribute__  (( __cdecl__ )) gcc_attr2_in_ac(int ); 
#line 8 "t1ac.ac"
struct X_in_ac {int  __attribute__  (( __cdecl__ )) (*abc)(int ); int * __attribute__  (( __cdecl__ )) (*def)(int ); 
}; 
#line 12 "t1ac.ac"
 inline void __utac_acc__t1ac__1(void) { 



#line 13 "t1ac.ac"
printf("match all foo3 in main of t1mc.c \n"); }

 
#line 17 "t1ac.ac"
 inline void __utac_acc__t1ac__2(void) { 



#line 18 "t1ac.ac"
printf("match call foo3 in t2mc.c\n"); }

 



