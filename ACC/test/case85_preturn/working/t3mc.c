
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


# 1 "t3.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t3.c" 
# 1 "/usr/include/setjmp.h" 1 3 4
# 25 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 353 "/usr/include/features.h" 2 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4
typedef long int __jmp_buf[8]; 
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; 
}__sigset_t; 
#line 43 "/usr/include/setjmp.h"
struct __jmp_buf_tag { __jmp_buf __jmpbuf; int __mask_was_saved;  __sigset_t __saved_mask; 
}; 
#line 48 "/usr/include/setjmp.h"
typedef struct __jmp_buf_tag jmp_buf[1]; 
#line 52 "/usr/include/setjmp.h"
extern int setjmp( jmp_buf __env) __attribute__  (( __nothrow__ )) ; 
#line 59 "/usr/include/setjmp.h"
extern int __sigsetjmp(struct __jmp_buf_tag __env[1], int __savemask) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/setjmp.h"
extern int _setjmp(struct __jmp_buf_tag __env[1]) __attribute__  (( __nothrow__ )) ; 
#line 75 "/usr/include/setjmp.h"
extern void longjmp(struct __jmp_buf_tag __env[1], int __val) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 84 "/usr/include/setjmp.h"
extern void _longjmp(struct __jmp_buf_tag __env[1], int __val) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 92 "/usr/include/setjmp.h"
typedef struct __jmp_buf_tag sigjmp_buf[1]; 
# 31 "/usr/include/setjmp.h" 2 3 4
# 103 "/usr/include/setjmp.h" 3 4
extern void siglongjmp( sigjmp_buf __env, int __val) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 112 "/usr/include/setjmp.h" 3 4
# 3 "t3.c" 2
int foo2(void )  
# 89 "t3mc.c"
{
# 91 "t3mc.c"
int retValue_acc;




# 97 "t3mc.c"
{

#line 4 "t3.c"
printf("in foo2\n"); 
#line 5 "t3.c"

# 104 "t3mc.c"
retValue_acc = 0;
# 106 "t3mc.c"
return (int )retValue_acc;
 
# 109 "t3mc.c"

}

# 113 "t3mc.c"
return (int )retValue_acc;

# 116 "t3mc.c"

}
 
static inline int  foo2__t3mc__0 (void * __utac__excep_para )  ; 

#line 8 "t3.c"
int foo1(void )  
# 124 "t3mc.c"
{
# 126 "t3mc.c"
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





# 151 "t3mc.c"
{

#line 9 "t3.c"
printf("in foo1\n"); 
#line 10 "t3.c"
foo2__t3mc__0(   (void *) &  __utac__excep_var ); 
#line 11 "t3.c"
printf("end of foo1\n"); 
#line 12 "t3.c"

# 162 "t3mc.c"
retValue_acc = 0;
# 164 "t3mc.c"
return (int )retValue_acc;
 
# 167 "t3mc.c"

}

# 171 "t3mc.c"
return (int )retValue_acc;

# 174 "t3mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  void __utac_acc__t1ac__3 (void);

  int foo2 (void) ; 

# 185 "t3mc.c"
static inline int  foo2__t3mc__0 (void * __utac__excep_para ) {

# 188 "t3mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}
 { 
 struct JoinPoint this; 
this.excep_return = __utac__excep_para; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 

{
__utac_acc__t1ac__3();

}

# 209 "t3mc.c"
retValue_acc = foo2 ( ) ;  

# 212 "t3mc.c"
return (int )retValue_acc;
}
 
#line 15 "t3.c"
int main(void )  
# 218 "t3mc.c"
{
# 220 "t3mc.c"
int retValue_acc;




# 226 "t3mc.c"
{

#line 16 "t3.c"
printf("return value of foo1 = %d \n", foo1()); 
#line 17 "t3.c"

# 233 "t3mc.c"
retValue_acc = 0;
# 235 "t3mc.c"
return (int )retValue_acc;
 
# 238 "t3mc.c"

}

# 242 "t3mc.c"
return (int )retValue_acc;

# 245 "t3mc.c"

}
 
