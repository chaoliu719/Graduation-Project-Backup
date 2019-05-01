
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


# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "t1mc_mc.c" 
void foo()  
# 36 "t1mc.c"
{



# 41 "t1mc.c"
{

#line 3 "t1mc_mc.c"
printf("here is foo\n"); 
# 46 "t1mc.c"

}

# 50 "t1mc.c"

}
 
static inline void  foo__t1mc__0 (void)  ; 

  void foo () ; 
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this);  
 

# 60 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_0 (struct JoinPoint * this) { 
 
foo ( ); 
return this->retValue; 
} 


#line 6 "t1mc_mc.c"
void foo2()  
# 70 "t1mc.c"
{



# 75 "t1mc.c"
{

#line 7 "t1mc_mc.c"
printf("here is foo2\n"); 
#line 8 "t1mc_mc.c"
foo__t1mc__0(); 
# 82 "t1mc.c"

}

# 86 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  void foo () ; 

# 95 "t1mc.c"
static inline void  foo__t1mc__0 (void) {

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
this.fp = &(foo_utac__call__wrapper_t1mc_0);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 
}
 
#line 11 "t1mc_mc.c"
void foo3(); 
static inline void  foo__t1mc__1 (void)  ; 

  void foo () ; 
void ** foo_utac__call__wrapper_t1mc_1 (struct JoinPoint * this);  
 

# 132 "t1mc.c"
void ** foo_utac__call__wrapper_t1mc_1 (struct JoinPoint * this) { 
 
foo ( ); 
return this->retValue; 
} 


#line 13 "t1mc_mc.c"
int main()  
# 142 "t1mc.c"
{
# 144 "t1mc.c"
int retValue_acc;




# 150 "t1mc.c"
{

#line 14 "t1mc_mc.c"
foo__t1mc__1(); 
#line 15 "t1mc_mc.c"
printf("\n"); 
#line 16 "t1mc_mc.c"
foo2(); 
#line 17 "t1mc_mc.c"
printf("\n"); 
#line 18 "t1mc_mc.c"
foo3(); 
#line 19 "t1mc_mc.c"

# 165 "t1mc.c"
retValue_acc = 0;
# 167 "t1mc.c"
return (int )retValue_acc;
 
# 170 "t1mc.c"

}

# 174 "t1mc.c"
return (int )retValue_acc;

# 177 "t1mc.c"

}
  void __utac_acc__t1ac__1 (void);

  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  void foo () ; 

# 186 "t1mc.c"
static inline void  foo__t1mc__1 (void) {

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
this.fp = &(foo_utac__call__wrapper_t1mc_1);
this.retValue = __utac__retp ; 
this.retType ="void" ; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 
}
 
