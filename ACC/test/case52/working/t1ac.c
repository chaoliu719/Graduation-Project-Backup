
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
 inline void __utac_acc__t1ac__1(void) { 


/* __utac__introduce__begin@ */


#line 2 "t1ac_ac.c"

#line 2 "t1ac_ac.c"
int a;
#line 3 "t1ac_ac.c"

#line 3 "t1ac_ac.c"
char b;
#line 4 "t1ac_ac.c"

#line 4 "t1ac_ac.c"
char *c;
/* __utac__introduce__end@   */
}

 
#line 7 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(void) { 


/* __utac__introduce__begin@ */


#line 8 "t1ac_ac.c"

#line 8 "t1ac_ac.c"
char d;
/* __utac__introduce__end@   */
}

 
#line 11 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(void) { 


/* __utac__introduce__begin@ */


#line 12 "t1ac_ac.c"

#line 12 "t1ac_ac.c"
long long a;
#line 13 "t1ac_ac.c"

#line 13 "t1ac_ac.c"
int (*funp)(int );
/* __utac__introduce__end@   */
}

 
#line 17 "t1ac_ac.c"
 inline void __utac_acc__t1ac__4(void) { 


/* __utac__introduce__begin@ */


#line 18 "t1ac_ac.c"

#line 18 "t1ac_ac.c"
double c;
/* __utac__introduce__end@   */
}

 
#line 21 "t1ac_ac.c"
 inline void __utac_acc__t1ac__5(void) { 


/* __utac__introduce__begin@ */


#line 22 "t1ac_ac.c"

#line 22 "t1ac_ac.c"
double c;
/* __utac__introduce__end@   */
}

 
#line 25 "t1ac_ac.c"
 inline void __utac_acc__t1ac__6(void) { 


/* __utac__introduce__begin@ */


#line 26 "t1ac_ac.c"

#line 26 "t1ac_ac.c"
double d;
/* __utac__introduce__end@   */
}

 
#line 29 "t1ac_ac.c"
 inline void __utac_acc__t1ac__7(void) { 


/* __utac__introduce__begin@ */


#line 30 "t1ac_ac.c"

#line 30 "t1ac_ac.c"
double e;
/* __utac__introduce__end@   */
}

 
#line 34 "t1ac_ac.c"
 inline void __utac_acc__t1ac__8(void) { 



#line 35 "t1ac_ac.c"
printf("aspect 1: before executing main\n"); }

 



