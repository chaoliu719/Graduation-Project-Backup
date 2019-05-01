
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



#line 1 "t3ac.ac"
 inline const int __utac_acc__t3ac__1(   struct JoinPoint *  this  )  {
 


#line 2 "t3ac.ac"
printf("aspect1: name = %s\n", (this->funcName)); 
#line 3 "t3ac.ac"
(** (int const **)(this->fp(this)) ) ; 
#line 4 "t3ac.ac"
printf("aspect: end1\n"); 
#line 5 "t3ac.ac"
return 0; }

 


#line 8 "t3ac.ac"
 inline int __utac_acc__t3ac__2(   struct JoinPoint *  this  )  {
 


#line 9 "t3ac.ac"
printf("aspect2: name = %s\n", (this->funcName)); 
#line 10 "t3ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 11 "t3ac.ac"
printf("aspect: end2\n"); 
#line 12 "t3ac.ac"
return 0; }

 


#line 16 "t3ac.ac"
 inline int __utac_acc__t3ac__3(   struct JoinPoint *  this  )  {
 


#line 17 "t3ac.ac"
printf("aspect3: name = %s\n", (this->funcName)); 
#line 18 "t3ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 19 "t3ac.ac"
printf("aspect: end3\n"); 
#line 20 "t3ac.ac"
return 0; }

 


#line 23 "t3ac.ac"
 inline int __utac_acc__t3ac__4(   struct JoinPoint *  this  )  {
 


#line 24 "t3ac.ac"
printf("aspect4: name = %s\n", (this->funcName)); 
#line 25 "t3ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 26 "t3ac.ac"
printf("aspect: end4\n"); 
#line 27 "t3ac.ac"
return 0; }

 


#line 30 "t3ac.ac"
 inline int __utac_acc__t3ac__5(   struct JoinPoint *  this  )  {
 


#line 31 "t3ac.ac"
printf("aspect5: name = %s\n", (this->funcName)); 
#line 32 "t3ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 33 "t3ac.ac"
printf("aspect: end5\n"); 
#line 34 "t3ac.ac"
return 0; }

 


#line 37 "t3ac.ac"
 inline int __utac_acc__t3ac__6(   struct JoinPoint *  this  )  {
 


#line 38 "t3ac.ac"
printf("aspect 6: name = %s\n", (this->funcName)); 
#line 39 "t3ac.ac"
(** (int **)(this->fp(this)) ) ; 
#line 40 "t3ac.ac"
printf("aspect: end6\n"); 
#line 41 "t3ac.ac"
return 0; }

 


#line 44 "t3ac.ac"
 inline const int *__utac_acc__t3ac__7(const int *ap , struct JoinPoint *  this  )  {
 


#line 45 "t3ac.ac"
printf("aspect 7: name = %s, argument value = %d\n", (this->funcName), (*ap)); 
#line 46 "t3ac.ac"
(** (int const* **)(this->fp(this)) ) ; 
#line 47 "t3ac.ac"
printf("aspect: end7\n"); 
#line 48 "t3ac.ac"
return ap; }

 



