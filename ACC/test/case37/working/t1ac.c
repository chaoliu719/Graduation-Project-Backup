
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
 inline int __utac_acc__t1ac__1(char *x , struct JoinPoint *  this  )  {
 


#line 2 "t1ac_ac.c"
printf("aspect: call function\n"); 
#line 3 "t1ac_ac.c"
if (x != 0){
{ 
#line 4 "t1ac_ac.c"
(** (int **)(this->fp(this)) ) ; } }else{
{ 
#line 6 "t1ac_ac.c"
printf("aspect, the second last parameter is 0, skip the call\n"); } }}

 



