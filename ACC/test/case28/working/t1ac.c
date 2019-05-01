
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
 inline void __utac_acc__t1ac__1(int i , struct JoinPoint *  this  )  {
 


#line 3 "t1ac_ac.c"
printf("in foo1 exec around advice, begin, i = %d\n", i); 
#line 4 "t1ac_ac.c"
(this->fp(this)); 
#line 5 "t1ac_ac.c"
printf("in foo1 exec around advice, end\n"); }

 


#line 8 "t1ac_ac.c"
 inline int __utac_acc__t1ac__2(int i , struct JoinPoint *  this  )  {
 


#line 9 "t1ac_ac.c"

#line 9 "t1ac_ac.c"
int k;
#line 10 "t1ac_ac.c"
printf("in foo2 exec around advice, begin, i = %d\n", i); 
#line 11 "t1ac_ac.c"
k = (** (int **)(this->fp(this)) ) ; 
#line 12 "t1ac_ac.c"
printf("in foo2 exec around advice, end \n"); 
#line 14 "t1ac_ac.c"
printf("result of proceed in exec = %d \n", k); 
#line 15 "t1ac_ac.c"
return k; }

 


#line 19 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(int i , struct JoinPoint *  this  )  {
 


#line 20 "t1ac_ac.c"
printf("in foo1 call around advice, begin, i = %d\n", i); 
#line 21 "t1ac_ac.c"
(this->fp(this)); 
#line 22 "t1ac_ac.c"
printf("in foo1 call around advice, end\n"); }

 


#line 25 "t1ac_ac.c"
 inline int __utac_acc__t1ac__4(int i , struct JoinPoint *  this  )  {
 


#line 26 "t1ac_ac.c"

#line 26 "t1ac_ac.c"
int k;
#line 27 "t1ac_ac.c"
printf("in foo2 call around advice, begin, i = %d\n", i); 
#line 28 "t1ac_ac.c"
k = (** (int **)(this->fp(this)) ) ; 
#line 29 "t1ac_ac.c"
printf("in foo2 call around advice, end \n"); 
#line 31 "t1ac_ac.c"
printf("result of proceed in call = %d \n", k); 
#line 32 "t1ac_ac.c"
return k; }

 



