
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
# 2 "t1ac_ac.c" 
 inline void __utac_acc__t1ac__1(int *i, int j , struct JoinPoint *  this  )  {
 


#line 3 "t1ac_ac.c"
printf("in foo1 exec around advice, begin, last 2 parm = %d , %d \n", (*i), j); 
#line 4 "t1ac_ac.c"
printf("2nd argument is doubled by advice \n"); 
#line 5 "t1ac_ac.c"
(*i) = ((*i)) * 2; 
#line 6 "t1ac_ac.c"
(this->fp(this)); 
#line 7 "t1ac_ac.c"
printf("in foo1 exec around advice, end\n"); }

 


#line 10 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(int **i, int *j , struct JoinPoint *  this  )  {
 


#line 11 "t1ac_ac.c"
printf("in foo2 call around advice, begin, last 2 parm = %d , %d \n", (*(*i)), (*j)); 
#line 12 "t1ac_ac.c"
printf("2nd argument decrease by 2\n"); 
#line 13 "t1ac_ac.c"
(*(*i)) = ((*(*i))) - 2; 
#line 14 "t1ac_ac.c"
(this->fp(this)); }

 



