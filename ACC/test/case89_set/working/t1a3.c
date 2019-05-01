
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



#line 1 "t1a3.acc"
 inline int __utac_acc__t1a3__1(   struct JoinPoint *  this  )  {
 


#line 2 "t1a3.acc"

#line 2 "t1a3.acc"
int res;
#line 3 "t1a3.acc"
printf("aspect: around set global a\n"); 
#line 4 "t1a3.acc"
printf("call proceed();\n"); 
#line 6 "t1a3.acc"
res = (** (int **)(this->fp(this)) )  + 2; 
#line 7 "t1a3.acc"
return res; }

 



