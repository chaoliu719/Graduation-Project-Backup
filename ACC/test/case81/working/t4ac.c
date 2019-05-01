
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

#line 3 "t4ac.ac"
 inline int __utac_acc__t4ac__1(int *b, double a, int c) {



#line 5 "t4ac.ac"
printf("aspect3: first 2 parameters of foo = %d, %d \n", ((int )a), (*b)); 
#line 6 "t4ac.ac"
printf("aspect3: parameter of foo3 = %d\n", c); }

 

 int __utac__cflow_t4ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 void * __utac__cflow_t4ac_0_0 (int action, int index, void * p) { 
static double __utac__para_0;
static int* __utac__para_1;
switch (index) { 
  case 0 : if(action == 1 ) { 
 __utac__para_0 = *(double *)(p); 
 } else { return (void *)(&__utac__para_0); } 
 break ; 
 case 1 : if(action == 1 ) { 
 __utac__para_1 = *(int* *)(p); 
 } else { return (void *)(&__utac__para_1); } 
 break ; 
  }  
 } 


