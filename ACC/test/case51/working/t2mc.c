
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
# 2 "t2mc_mc.c" 
void foo(); 
static inline void  foo__t2mc__0 (void)  ; 

  void foo () ; 
void ** foo_utac__call__wrapper_t2mc_0 (struct JoinPoint * this);  
 

# 42 "t2mc.c"
void ** foo_utac__call__wrapper_t2mc_0 (struct JoinPoint * this) { 
 
foo ( ); 
return this->retValue; 
} 


#line 4 "t2mc_mc.c"
void foo3()  
# 52 "t2mc.c"
{



# 57 "t2mc.c"
{

#line 5 "t2mc_mc.c"
printf("here is foo3 \n"); 
#line 6 "t2mc_mc.c"
foo__t2mc__0(); 
# 64 "t2mc.c"

}

# 68 "t2mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  void foo () ; 

# 77 "t2mc.c"
static inline void  foo__t2mc__0 (void) {

{
__utac_acc__t1ac__1();

}
 { 
 struct JoinPoint this; 
 void * __utac__args[0]; 
 const char * __utac__argstype[0];
this.argsCount = 0 ; 
 void * __utac__retp[1]; 
this.args = __utac__args; 
this.argsType = __utac__argstype; 
{ extern void * __utac__get_this_arg (int, struct JoinPoint *)  ; 
  extern const char * __utac__get_this_argtype (int, struct JoinPoint *)  ; 
this.arg = __utac__get_this_arg ; 
this.argType= __utac__get_this_argtype ; } 
this.fp = &(foo_utac__call__wrapper_t2mc_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 
}
 
