
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
# 3 "t1ac_ac.c" 
struct X {int a; 



int b;



int c;
}; 
#line 6 "t1ac_ac.c"
void callme()  {

#line 7 "t1ac_ac.c"

#line 7 "t1ac_ac.c"
char *a;
#line 8 "t1ac_ac.c"

#line 8 "t1ac_ac.c"
struct X abc;
#line 9 "t1ac_ac.c"
printf("sizeof(a) = %d\n", sizeof a); 
#line 10 "t1ac_ac.c"
printf("sizeof(*a) = %d\n", sizeof  *a); 
#line 11 "t1ac_ac.c"
printf("sizeof(struct X) = %d\n", sizeof (abc)); }
 


#line 15 "t1ac_ac.c"
 inline int __utac_acc__t1ac__1(int p[] , struct JoinPoint *  this  )  {
 


#line 16 "t1ac_ac.c"
printf("aspect1: call %s from %s , p[0] = %d\n", (this->targetName), (this->funcName), p[0]); 
#line 17 "t1ac_ac.c"
(** (int **)(this->fp(this)) ) ; 
#line 18 "t1ac_ac.c"
callme(); 
#line 19 "t1ac_ac.c"
printf("aspect: end\n"); 
#line 20 "t1ac_ac.c"
return 0; }

 
#line 23 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(void) { 


/* __utac__introduce__begin@ */


#line 24 "t1ac_ac.c"

#line 24 "t1ac_ac.c"
int b;
/* __utac__introduce__end@   */
}

 



