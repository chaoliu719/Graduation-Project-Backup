
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
 inline void __utac_acc__t2ac__1(   struct JoinPoint *  this  )  {
 


#line 2 "t2ac_ac.c"
printf("aspect 1\n"); 
#line 3 "t2ac_ac.c"
(this->fp(this)); }

 


#line 5 "t2ac_ac.c"
 inline void __utac_acc__t2ac__2(   struct JoinPoint *  this  )  {
 


#line 6 "t2ac_ac.c"
printf("aspect 2\n"); 
#line 7 "t2ac_ac.c"
(this->fp(this)); }

 


#line 9 "t2ac_ac.c"
 inline void __utac_acc__t2ac__3(   struct JoinPoint *  this  )  {
 


#line 10 "t2ac_ac.c"
printf("aspect 3\n"); 
#line 11 "t2ac_ac.c"
(this->fp(this)); }

 


#line 13 "t2ac_ac.c"
 inline void __utac_acc__t2ac__4(   struct JoinPoint *  this  )  {
 


#line 14 "t2ac_ac.c"
printf("aspect 4\n"); 
#line 15 "t2ac_ac.c"
(this->fp(this)); }

 


#line 17 "t2ac_ac.c"
 inline void __utac_acc__t2ac__5(   struct JoinPoint *  this  )  {
 


#line 18 "t2ac_ac.c"
printf("aspect 5\n"); 
#line 19 "t2ac_ac.c"
(this->fp(this)); }

 


#line 21 "t2ac_ac.c"
 inline void __utac_acc__t2ac__6(   struct JoinPoint *  this  )  {
 


#line 22 "t2ac_ac.c"
printf("aspect 6\n"); 
#line 23 "t2ac_ac.c"
(this->fp(this)); }

 


#line 25 "t2ac_ac.c"
 inline void __utac_acc__t2ac__7(   struct JoinPoint *  this  )  {
 


#line 26 "t2ac_ac.c"
printf("aspect 7\n"); 
#line 27 "t2ac_ac.c"
(this->fp(this)); }

 


#line 30 "t2ac_ac.c"
 inline void __utac_acc__t2ac__8(   struct JoinPoint *  this  )  {
 


#line 32 "t2ac_ac.c"
printf("aspect 8\n"); 
#line 33 "t2ac_ac.c"
(this->fp(this)); }

 



