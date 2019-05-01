
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



#line 1 "t2a2.acc"
 inline int __utac_acc__t2a2__1(   struct JoinPoint *  this  )  {
 


#line 2 "t2a2.acc"
printf("aspect 1: get && args \n"); 
#line 3 "t2a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 


#line 6 "t2a2.acc"
 inline int __utac_acc__t2a2__2(int j , struct JoinPoint *  this  )  {
 


#line 7 "t2a2.acc"
printf("aspect 2: get && args , val = %d\n", j); 
#line 8 "t2a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 


#line 11 "t2a2.acc"
 inline int __utac_acc__t2a2__3(int *j , struct JoinPoint *  this  )  {
 


#line 12 "t2a2.acc"
printf("aspect 3: get && args , ori val = %d, change to 1000 \n", (*j)); 
#line 13 "t2a2.acc"
(*j) = 1000; 
#line 14 "t2a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 
#line 17 "t2a2.acc"
 inline void __utac_acc__t2a2__4(void) { 



#line 18 "t2a2.acc"
printf("aspect error: should not match \n"); }

 


#line 21 "t2a2.acc"
 inline int __utac_acc__t2a2__5(   struct JoinPoint *  this  )  {
 


#line 22 "t2a2.acc"
printf("aspect 6: get && infunc(foo) \n"); 
#line 23 "t2a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 


#line 26 "t2a2.acc"
 inline int __utac_acc__t2a2__6(   struct JoinPoint *  this  )  {
 


#line 28 "t2a2.acc"
printf("aspect 7: get && infunc(main) \n"); 
#line 30 "t2a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 

 int __utac__cflow_t2a2_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


