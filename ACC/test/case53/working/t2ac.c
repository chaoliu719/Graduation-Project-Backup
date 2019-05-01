
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
 
#line 4 "t2ac_ac.c"
 inline void __utac_acc__t2ac__2(void) { 


/* __utac__introduce__begin@ */


#line 5 "t2ac_ac.c"

#line 5 "t2ac_ac.c"
double newMember;
/* __utac__introduce__end@   */
}

 
#line 8 "t2ac_ac.c"
 inline void __utac_acc__t2ac__3(void) { 


/* __utac__introduce__begin@ */


#line 9 "t2ac_ac.c"

#line 9 "t2ac_ac.c"
double newMember2;
/* __utac__introduce__end@   */
}

 
#line 13 "t2ac_ac.c"
 inline void __utac_acc__t2ac__4(void) { 


/* __utac__introduce__begin@ */


#line 14 "t2ac_ac.c"

#line 14 "t2ac_ac.c"
double f;
/* __utac__introduce__end@   */
}

 
#line 17 "t2ac_ac.c"
 inline void __utac_acc__t2ac__5(void) { 


/* __utac__introduce__begin@ */


#line 18 "t2ac_ac.c"

#line 18 "t2ac_ac.c"
double g;
/* __utac__introduce__end@   */
}

 
#line 21 "t2ac_ac.c"
 inline void __utac_acc__t2ac__6(void) { 


/* __utac__introduce__begin@ */


#line 22 "t2ac_ac.c"

#line 22 "t2ac_ac.c"
double h;
/* __utac__introduce__end@   */
}

 
#line 25 "t2ac_ac.c"
 inline void __utac_acc__t2ac__7(void) { 


/* __utac__introduce__begin@ */


#line 26 "t2ac_ac.c"

#line 26 "t2ac_ac.c"
double i;
/* __utac__introduce__end@   */
}

 
#line 29 "t2ac_ac.c"
 inline void __utac_acc__t2ac__8(void) { 


/* __utac__introduce__begin@ */


#line 30 "t2ac_ac.c"

#line 30 "t2ac_ac.c"
char *point;
/* __utac__introduce__end@   */
}

 
#line 33 "t2ac_ac.c"
 inline void __utac_acc__t2ac__9(void) { 



#line 34 "t2ac_ac.c"
printf("aspect 2: after execution main\n"); }

 



