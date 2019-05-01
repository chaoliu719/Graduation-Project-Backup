
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
# 1 "t1ac_ac.c" 
 


#line 3 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(   struct JoinPoint *  this  )  {
 


#line 4 "t1ac_ac.c"
printf("aspect: within cflow of foo3, before, caller = %s\n", (this->funcName)); 
#line 5 "t1ac_ac.c"
printf("aspect: within cflow of foo3, before, callee = %s\n", (this->targetName)); 
#line 6 "t1ac_ac.c"
printf("aspect: within cflow of foo3, before, file = %s\n", (this->fileName)); }

 


#line 10 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(   struct JoinPoint *  this  )  {
 


#line 11 "t1ac_ac.c"
printf("aspect: within cflow of foo3, after, call = %s\n", (this->funcName)); }

 


#line 14 "t1ac_ac.c"
 inline void __utac_acc__t1ac__4(   struct JoinPoint *  this  )  {
 


#line 18 "t1ac_ac.c"
printf("before execution of foo, caller = %s, callee = %s, file = %s\n", (this->funcName), (this->targetName), (this->fileName)); }

 

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


