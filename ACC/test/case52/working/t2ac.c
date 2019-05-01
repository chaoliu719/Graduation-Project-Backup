
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
# 2 "t2ac_ac.c" 
 inline void __utac_acc__t2ac__1(void) { 


/* __utac__introduce__begin@ */


#line 3 "t2ac_ac.c"

#line 3 "t2ac_ac.c"
double f;
/* __utac__introduce__end@   */
}

 
#line 6 "t2ac_ac.c"
 inline void __utac_acc__t2ac__2(void) { 


/* __utac__introduce__begin@ */


#line 7 "t2ac_ac.c"

#line 7 "t2ac_ac.c"
double g;
/* __utac__introduce__end@   */
}

 
#line 10 "t2ac_ac.c"
 inline void __utac_acc__t2ac__3(void) { 


/* __utac__introduce__begin@ */


#line 11 "t2ac_ac.c"

#line 11 "t2ac_ac.c"
double h;
/* __utac__introduce__end@   */
}

 
#line 14 "t2ac_ac.c"
 inline void __utac_acc__t2ac__4(void) { 


/* __utac__introduce__begin@ */


#line 15 "t2ac_ac.c"

#line 15 "t2ac_ac.c"
double i;
/* __utac__introduce__end@   */
}

 
#line 18 "t2ac_ac.c"
 inline void __utac_acc__t2ac__5(void) { 


/* __utac__introduce__begin@ */


#line 19 "t2ac_ac.c"

#line 19 "t2ac_ac.c"
char *point;
/* __utac__introduce__end@   */
}

 
#line 22 "t2ac_ac.c"
 inline void __utac_acc__t2ac__6(void) { 



#line 23 "t2ac_ac.c"
printf("aspect 2: after execution main\n"); }

 
#line 28 "t2ac_ac.c"
 inline void __utac_acc__t2ac__7(void) { 


/* __utac__introduce__begin@ */


#line 30 "t2ac_ac.c"

#line 30 "t2ac_ac.c"
double b;
/* __utac__introduce__end@   */
}

 
#line 34 "t2ac_ac.c"
 inline void __utac_acc__t2ac__8(void) { 


/* __utac__introduce__begin@ */


#line 36 "t2ac_ac.c"

#line 36 "t2ac_ac.c"
double c;
/* __utac__introduce__end@   */
}

 
#line 40 "t2ac_ac.c"
 inline void __utac_acc__t2ac__9(void) { 


/* __utac__introduce__begin@ */


#line 42 "t2ac_ac.c"

#line 42 "t2ac_ac.c"
double c;
/* __utac__introduce__end@   */
}

 
#line 46 "t2ac_ac.c"
 inline void __utac_acc__t2ac__10(void) { 


/* __utac__introduce__begin@ */


#line 48 "t2ac_ac.c"

#line 48 "t2ac_ac.c"
char *p;
/* __utac__introduce__end@   */
}

 



