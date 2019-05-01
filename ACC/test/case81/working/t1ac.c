
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
 
#line 6 "t1ac.ac"
 inline void __utac_acc__t1ac__2(int *b, double a, int c) {



#line 8 "t1ac.ac"
printf("aspect1: first 2 parameters of foo = %d, %d \n", ((int )a), (*b)); 
#line 9 "t1ac.ac"
printf("aspect1: parameter of foo3 = %d\n", c); }

 
#line 15 "t1ac.ac"
 inline void __utac_acc__t1ac__3(int b, int d, int c) {



#line 16 "t1ac.ac"
printf("aspect2: last 2 parameters of foo = %d, %d \n", b, d); 
#line 17 "t1ac.ac"
printf("aspect2: result of foo3() = %d\n", c); }

 

 int __utac__cflow_t1ac_1 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 void * __utac__cflow_t1ac_1_1 (int action, int index, void * p) { 
static int __utac__para_0;
static int __utac__para_1;
switch (index) { 
  case 0 : if(action == 1 ) { 
 __utac__para_0 = *(int *)(p); 
 } else { return (void *)(&__utac__para_0); } 
 break ; 
 case 1 : if(action == 1 ) { 
 __utac__para_1 = *(int *)(p); 
 } else { return (void *)(&__utac__para_1); } 
 break ; 
  }  
 } 
 int __utac__cflow_t1ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 
 void * __utac__cflow_t1ac_0_0 (int action, int index, void * p) { 
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


