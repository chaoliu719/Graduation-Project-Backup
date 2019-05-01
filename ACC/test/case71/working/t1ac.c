
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

#line 5 "t1ac.ac"
 inline void __utac_acc__t1ac__1(void) { 


}

 
#line 9 "t1ac.ac"
 inline void __utac_acc__t1ac__2(void) { 


}

 
#line 13 "t1ac.ac"
 inline void __utac_acc__t1ac__3(void) { 


}

 
#line 15 "t1ac.ac"
 inline void __utac_acc__t1ac__4(void) { 


}

 
#line 18 "t1ac.ac"
 
#line 22 "t1ac.ac"
 inline void __utac_acc__t1ac__6(void) { 


}

 
#line 25 "t1ac.ac"
 
#line 26 "t1ac.ac"
 inline void __utac_acc__t1ac__8(void) { 


}

 
#line 28 "t1ac.ac"
 
#line 30 "t1ac.ac"
 inline void __utac_acc__t1ac__10(int a) {


}

 
#line 34 "t1ac.ac"
 
#line 36 "t1ac.ac"
 inline void __utac_acc__t1ac__12(void) { 


}

 
#line 40 "t1ac.ac"
 inline void __utac_acc__t1ac__13(void) { 


}

 
#line 43 "t1ac.ac"
 inline __utac_acc__t1ac__14(void) { 


}

 
#line 46 "t1ac.ac"
 inline int (void) { 


}

 
#line 48 "t1ac.ac"
 inline int (void) { 


/* __utac__introduce__begin@ */


/* __utac__introduce__end@   */
}

 
#line 51 "t1ac.ac"
 inline void __utac_acc__t1ac__17(int a) {


}

 
#line 54 "t1ac.ac"
 inline void __utac_acc__t1ac__18(void) { 



#line 55 "t1ac.ac"
; }

 
#line 59 "t1ac.ac"
 inline void __utac_acc__t1ac__19(void) { 


}

 
#line 61 "t1ac.ac"
 inline void __utac_acc__t1ac__20(void) { 


/* __utac__introduce__begin@ */


/* __utac__introduce__end@   */
}

 
#line 63 "t1ac.ac"
 
#line 65 "t1ac.ac"
 inline void __utac_acc__t1ac__22(void) { 


/* __utac__introduce__begin@ */


/* __utac__introduce__end@   */
}

 
#line 68 "t1ac.ac"
 inline void __utac_acc__t1ac__23(int i) {


}

 
#line 72 "t1ac.ac"
 inline void __utac_acc__t1ac__24(int i) {


}

 
#line 74 "t1ac.ac"
 inline void __utac_acc__t1ac__25(int i) {


}

 
#line 76 "t1ac.ac"
 inline void __utac_acc__t1ac__26(int i, int j) {


}

 
#line 79 "t1ac.ac"
 inline void __utac_acc__t1ac__27(void) { 


}

 
#line 82 "t1ac.ac"
 inline void __utac_acc__t1ac__28(void) { 


}

 
#line 84 "t1ac.ac"
 inline void __utac_acc__t1ac__29(void) { 


}

 
#line 86 "t1ac.ac"
 inline void __utac_acc__t1ac__30(void) { 


}

 
#include <setjmp.h> 


#line 89 "t1ac.ac"
 inline void __utac_acc__t1ac__31(void) { 


/* __utac__introduce__begin@ */


#line 90 "t1ac.ac"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 3);}; 
/* __utac__introduce__end@   */
}

 
#line 94 "t1ac.ac"
 inline void __utac_acc__t1ac__32(void) { 


}

 
#line 96 "t1ac.ac"
 inline void __utac_acc__t1ac__33(int e) {


}

 
#line 99 "t1ac.ac"
 inline void __utac_acc__t1ac__34(void) { 


}

 
#line 101 "t1ac.ac"
 inline void __utac_acc__t1ac__35(int e, int f) {


}

 
#line 103 "t1ac.ac"
 inline void __utac_acc__t1ac__36(int e) {


}

 
#line 106 "t1ac.ac"
 inline void __utac_acc__t1ac__37(int i) {


}

 

 int __utac__cflow_t1ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


