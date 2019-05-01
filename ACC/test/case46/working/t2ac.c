
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



# 1 "t2ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t2ac_ac.c" 
 inline int __utac_acc__t2ac__1(int x , struct JoinPoint *  this  )  {
 


#line 2 "t2ac_ac.c"
printf("aspect 1, has proceed\n"); 
#line 3 "t2ac_ac.c"
return (** (int **)(this->fp(this)) ) ; 
#line 3 "t2ac_ac.c"
; }

 
#line 6 "t2ac_ac.c"
 inline int __utac_acc__t2ac__2(int x) {



#line 7 "t2ac_ac.c"
printf("aspect 2, no proceed \n"); 
#line 8 "t2ac_ac.c"
return 99; }

 
#line 12 "t2ac_ac.c"
 inline int __utac_acc__t2ac__3(int x) {



#line 13 "t2ac_ac.c"
printf("aspect 3, has proceed \n"); 
#line 14 "t2ac_ac.c"
return 2020; }

 



