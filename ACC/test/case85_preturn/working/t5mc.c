
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


#line 1 "t5mc.mc"
void foo_c()  
# 33 "t5mc.c"
{



# 38 "t5mc.c"
{

# 41 "t5mc.c"

}

# 45 "t5mc.c"

}
 
#line 2 "t5mc.mc"
void foo1_c()  
# 51 "t5mc.c"
{



# 56 "t5mc.c"
{

# 59 "t5mc.c"

}

# 63 "t5mc.c"

}
 
#line 3 "t5mc.mc"
void foo2_c()  
# 69 "t5mc.c"
{



# 74 "t5mc.c"
{

# 77 "t5mc.c"

}

# 81 "t5mc.c"

}
 
#line 4 "t5mc.mc"
void foo3_c()  
# 87 "t5mc.c"
{



# 92 "t5mc.c"
{

# 95 "t5mc.c"

}

# 99 "t5mc.c"

}
 
#line 5 "t5mc.mc"
void foo4_c()  
# 105 "t5mc.c"
{



# 110 "t5mc.c"
{

# 113 "t5mc.c"

}

# 117 "t5mc.c"

}
 
#line 6 "t5mc.mc"
void foo5_c()  
# 123 "t5mc.c"
{



# 128 "t5mc.c"
{

# 131 "t5mc.c"

}

# 135 "t5mc.c"

}
 
#line 7 "t5mc.mc"
void foo6_c()  
# 141 "t5mc.c"
{



# 146 "t5mc.c"
{

# 149 "t5mc.c"

}

# 153 "t5mc.c"

}
 
static inline void  foo_c__t5mc__0 (void * __utac__excep_para )  ; 

#include <setjmp.h> 


#line 9 "t5mc.mc"
void foo()  
# 164 "t5mc.c"
{

struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
return ; 
} 





# 187 "t5mc.c"
{

#line 10 "t5mc.mc"
foo_c__t5mc__0(   (void *) &  __utac__excep_var ); 
#line 11 "t5mc.mc"
printf("end of foo\n"); 
# 194 "t5mc.c"

}

# 198 "t5mc.c"

}
  void __utac_acc__t10ac__1 (  struct JoinPoint * );

  void foo_c () ; 

# 205 "t5mc.c"
static inline void  foo_c__t5mc__0 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t10ac__1(&this );
 
 } 
 } 
}
 
static inline void  foo1_c__t5mc__1 (void * __utac__excep_para )  ; 

#line 15 "t5mc.mc"
int foo1()  
# 221 "t5mc.c"
{
# 223 "t5mc.c"
int retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (int)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





# 248 "t5mc.c"
{

#line 16 "t5mc.mc"
foo1_c__t5mc__1(   (void *) &  __utac__excep_var ); 
#line 17 "t5mc.mc"
printf("end of foo1\n"); 
#line 18 "t5mc.mc"

# 257 "t5mc.c"
retValue_acc = 9;
# 259 "t5mc.c"
return (int )retValue_acc;
 
# 262 "t5mc.c"

}

# 266 "t5mc.c"
return (int )retValue_acc;

# 269 "t5mc.c"

}
  void __utac_acc__t10ac__2 (  struct JoinPoint * );

  void foo1_c () ; 

# 276 "t5mc.c"
static inline void  foo1_c__t5mc__1 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t10ac__2(&this );
 
 } 
 } 
}
 
static inline void  foo2_c__t5mc__2 (void * __utac__excep_para )  ; 

#line 21 "t5mc.mc"
float foo2()  
# 292 "t5mc.c"
{
# 294 "t5mc.c"
float retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (float)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





# 319 "t5mc.c"
{

#line 22 "t5mc.mc"
foo2_c__t5mc__2(   (void *) &  __utac__excep_var ); 
#line 23 "t5mc.mc"
printf("end of foo2\n"); 
#line 24 "t5mc.mc"

# 328 "t5mc.c"
retValue_acc = 9.9;
# 330 "t5mc.c"
return (float )retValue_acc;
 
# 333 "t5mc.c"

}

# 337 "t5mc.c"
return (float )retValue_acc;

# 340 "t5mc.c"

}
  void __utac_acc__t10ac__3 (  struct JoinPoint * );

  void foo2_c () ; 

# 347 "t5mc.c"
static inline void  foo2_c__t5mc__2 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t10ac__3(&this );
 
 } 
 } 
}
 
static inline void  foo3_c__t5mc__3 (void * __utac__excep_para )  ; 

#line 27 "t5mc.mc"
double foo3()  
# 363 "t5mc.c"
{
# 365 "t5mc.c"
double retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (double)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





# 390 "t5mc.c"
{

#line 28 "t5mc.mc"
foo3_c__t5mc__3(   (void *) &  __utac__excep_var ); 
#line 29 "t5mc.mc"
printf("end of foo3\n"); 
#line 30 "t5mc.mc"

# 399 "t5mc.c"
retValue_acc = 9.9;
# 401 "t5mc.c"
return (double )retValue_acc;
 
# 404 "t5mc.c"

}

# 408 "t5mc.c"
return (double )retValue_acc;

# 411 "t5mc.c"

}
  void __utac_acc__t10ac__4 (  struct JoinPoint * );

  void foo3_c () ; 

# 418 "t5mc.c"
static inline void  foo3_c__t5mc__3 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t10ac__4(&this );
 
 } 
 } 
}
 
static inline void  foo4_c__t5mc__4 (void * __utac__excep_para )  ; 

#line 33 "t5mc.mc"
char *foo4()  
# 434 "t5mc.c"
{
# 436 "t5mc.c"
char* retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (char*)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





# 461 "t5mc.c"
{

#line 34 "t5mc.mc"
foo4_c__t5mc__4(   (void *) &  __utac__excep_var ); 
#line 35 "t5mc.mc"
printf("end of foo4\n"); 
#line 36 "t5mc.mc"

# 470 "t5mc.c"
retValue_acc = "normal return of foo4";
# 472 "t5mc.c"
return (char* )retValue_acc;
 
# 475 "t5mc.c"

}

# 479 "t5mc.c"
return (char* )retValue_acc;

# 482 "t5mc.c"

}
  void __utac_acc__t10ac__5 (  struct JoinPoint * );

  void foo4_c () ; 

# 489 "t5mc.c"
static inline void  foo4_c__t5mc__4 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t10ac__5(&this );
 
 } 
 } 
}
 
static inline void  foo5_c__t5mc__5 (void * __utac__excep_para )  ; 

#line 39 "t5mc.mc"
char foo5()  
# 505 "t5mc.c"
{
# 507 "t5mc.c"
char retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (char)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





# 532 "t5mc.c"
{

#line 40 "t5mc.mc"
foo5_c__t5mc__5(   (void *) &  __utac__excep_var ); 
#line 41 "t5mc.mc"
printf("end of foo5\n"); 
#line 42 "t5mc.mc"

# 541 "t5mc.c"
retValue_acc = 'X';
# 543 "t5mc.c"
return (char )retValue_acc;
 
# 546 "t5mc.c"

}

# 550 "t5mc.c"
return (char )retValue_acc;

# 553 "t5mc.c"

}
  void __utac_acc__t10ac__6 (  struct JoinPoint * );

  void foo5_c () ; 

# 560 "t5mc.c"
static inline void  foo5_c__t5mc__5 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t10ac__6(&this );
 
 } 
 } 
}
 
static inline void  foo6_c__t5mc__6 (void * __utac__excep_para )  ; 

#line 45 "t5mc.mc"
void *foo6()  
# 576 "t5mc.c"
{
# 578 "t5mc.c"
void* retValue_acc;


struct __UTAC__EXCEPTION __utac__excep_var ; 
 jmp_buf __utac__jmpbuf ; 
 int __utac__jmp_ret ; 
 __utac__excep_var.jumpbuf = & __utac__jmpbuf ; 
 __utac__excep_var.prtValue = 0 ; 
 __utac__excep_var.cflowfuncs = 0 ; 
 __utac__excep_var.pops = 0 ; 
 __utac__jmp_ret = setjmp(__utac__jmpbuf); 
 if(__utac__jmp_ret !=0) { 
 if(__utac__excep_var.cflowfuncs != 0) { 
 extern void __utac__exception__cf_handler_reset(void * exception) ; 
 __utac__exception__cf_handler_reset (& __utac__excep_var ); 
 } 
retValue_acc = (void*)__utac__excep_var.prtValue ; 
 return retValue_acc ; 
} 





# 603 "t5mc.c"
{

#line 46 "t5mc.mc"
foo6_c__t5mc__6(   (void *) &  __utac__excep_var ); 
#line 47 "t5mc.mc"
printf("end of foo6\n"); 
#line 48 "t5mc.mc"

# 612 "t5mc.c"
retValue_acc = ((void *)(1));
# 614 "t5mc.c"
return (void* )retValue_acc;
 
# 617 "t5mc.c"

}

# 621 "t5mc.c"
return (void* )retValue_acc;

# 624 "t5mc.c"

}
  void __utac_acc__t10ac__7 (  struct JoinPoint * );

  void foo6_c () ; 

# 631 "t5mc.c"
static inline void  foo6_c__t5mc__6 (void * __utac__excep_para ) {
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t10ac__7(&this );
 
 } 
 } 
}
 
#line 51 "t5mc.mc"
int main()  
# 645 "t5mc.c"
{
# 647 "t5mc.c"
int retValue_acc;




# 653 "t5mc.c"
{

#line 53 "t5mc.mc"
printf("call foo in main\n"); 
#line 54 "t5mc.mc"
foo(); 
#line 56 "t5mc.mc"
printf("return value of foo1 = %d\n", foo1()); 
#line 57 "t5mc.mc"
printf("return value of foo2 = %f\n", foo2()); 
#line 58 "t5mc.mc"
printf("return value of foo3 = %f\n", foo3()); 
#line 59 "t5mc.mc"
printf("return value of foo4 = %s\n", foo4()); 
#line 60 "t5mc.mc"
printf("return value of foo5 = %c\n", foo5()); 
#line 62 "t5mc.mc"
printf("return value of foo6 = %d\n", ((int )foo6())); 
#line 63 "t5mc.mc"

# 674 "t5mc.c"
retValue_acc = 0;
# 676 "t5mc.c"
return (int )retValue_acc;
 
# 679 "t5mc.c"

}

# 683 "t5mc.c"
return (int )retValue_acc;

# 686 "t5mc.c"

}
 
