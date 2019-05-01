
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


# 1 "t2mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t2mc_mc.c" 
extern void foo(int ); 
static inline void  foo__t2mc__0 (int __utac__para0  )  ; 

#line 3 "t2mc_mc.c"
void foo2(char *s)  
# 40 "t2mc.c"
{



# 45 "t2mc.c"
{

#line 4 "t2mc_mc.c"
printf("inside foo2, s = %s\n", s); 
#line 5 "t2mc_mc.c"
foo__t2mc__0(3); 
# 52 "t2mc.c"

}

# 56 "t2mc.c"

}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  void foo (int __utac__para0  ) ; 

# 67 "t2mc.c"
static inline void  foo__t2mc__0 (int __utac__para0  ) {
 { 
 struct JoinPoint this; 
this.funcName = "foo2"; 
this.targetName = "foo"; 
this.fileName = "t2mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__2(&this );
 } 
 
 } 
 } 
foo ( __utac__para0 ) ;  
 { 
 struct JoinPoint this; 
this.funcName = "foo2"; 
this.targetName = "foo"; 
this.fileName = "t2mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__3(&this );
 } 
 
 } 
 } 
}
 
