
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



#line 1 "t2ac.ac"
 inline const int __utac_acc__t2ac__1(   struct JoinPoint *  this  )  {
 


#line 2 "t2ac.ac"
printf("aspect1: name = %s\n", (this->funcName)); 
#line 3 "t2ac.ac"
(** (int const **)(this->fp(this)) ) ; 
#line 4 "t2ac.ac"
printf("aspect: end\n"); 
#line 5 "t2ac.ac"
return 0; }

 


#line 8 "t2ac.ac"
 inline int __utac_acc__t2ac__2(   struct JoinPoint *  this  )  {
 


#line 9 "t2ac.ac"
printf("aspect2: name = %s\n", (this->funcName)); 
#line 10 "t2ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 11 "t2ac.ac"
printf("aspect: end\n"); 
#line 12 "t2ac.ac"
return 0; }

 


#line 16 "t2ac.ac"
 inline int __utac_acc__t2ac__3(   struct JoinPoint *  this  )  {
 


#line 17 "t2ac.ac"
printf("aspect3: name = %s\n", (this->funcName)); 
#line 18 "t2ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 19 "t2ac.ac"
printf("aspect: end\n"); 
#line 20 "t2ac.ac"
return 0; }

 


#line 23 "t2ac.ac"
 inline int __utac_acc__t2ac__4(   struct JoinPoint *  this  )  {
 


#line 24 "t2ac.ac"
printf("aspect4: name = %s\n", (this->funcName)); 
#line 25 "t2ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 26 "t2ac.ac"
printf("aspect: end\n"); 
#line 27 "t2ac.ac"
return 0; }

 


#line 30 "t2ac.ac"
 inline int __utac_acc__t2ac__5(   struct JoinPoint *  this  )  {
 


#line 31 "t2ac.ac"
printf("aspect5: name = %s\n", (this->funcName)); 
#line 32 "t2ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 33 "t2ac.ac"
printf("aspect: end\n"); 
#line 34 "t2ac.ac"
return 0; }

 



