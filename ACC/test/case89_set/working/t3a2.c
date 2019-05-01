
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

#line 1 "t3a2.acc"
 


#line 3 "t3a2.acc"
 inline int __utac_acc__t3a2__2(   struct JoinPoint *  this  )  {
 


#line 4 "t3a2.acc"
printf("aspect 1: set && args \n"); 
#line 5 "t3a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 


#line 8 "t3a2.acc"
 inline int __utac_acc__t3a2__3(int j , struct JoinPoint *  this  )  {
 


#line 9 "t3a2.acc"
printf("aspect 2: set && args , val = %d\n", j); 
#line 10 "t3a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 


#line 13 "t3a2.acc"
 inline int __utac_acc__t3a2__4(int *j , struct JoinPoint *  this  )  {
 


#line 14 "t3a2.acc"
printf("aspect 3: set && args , ori val = %d, change to 1000 \n", (*j)); 
#line 15 "t3a2.acc"
(*j) = 1000; 
#line 16 "t3a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 
#line 19 "t3a2.acc"
 inline void __utac_acc__t3a2__5(void) { 



#line 20 "t3a2.acc"
printf("aspect error: should not match \n"); }

 


#line 23 "t3a2.acc"
 inline int __utac_acc__t3a2__6(   struct JoinPoint *  this  )  {
 


#line 24 "t3a2.acc"
printf("aspect 6: set && infunc(foo) \n"); 
#line 25 "t3a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 


#line 28 "t3a2.acc"
 inline int __utac_acc__t3a2__7(   struct JoinPoint *  this  )  {
 


#line 30 "t3a2.acc"
printf("aspect 7: set && infunc(main) \n"); 
#line 32 "t3a2.acc"
return (** (int **)(this->fp(this)) ) ; }

 

 int __utac__cflow_t3a2_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


