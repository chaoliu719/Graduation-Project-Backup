
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



#line 1 "t1ac.acc"
 inline void __utac_acc__t1ac__1(   struct JoinPoint *  this  )  {
 


#line 2 "t1ac.acc"

#line 2 "t1ac.acc"
int i;
#line 3 "t1ac.acc"
printf("function name = %s \n", (this->targetName)); 
#line 4 "t1ac.acc"
for(i = 1;i <= (this->argsCount);i++) { { 
#line 5 "t1ac.acc"
printf("parameter type : arg[%d] = |%s| \n", i, (this->argType)(i , this ) ); } } 
#line 8 "t1ac.acc"
printf("return type = |%s| \n", (this->retType)); 
#line 10 "t1ac.acc"
printf("\n"); }

 



