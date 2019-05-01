
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
# 1 "t1mc_mc.c" 
int foo()  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 2 "t1mc_mc.c"
printf("in foo\n"); 
#line 3 "t1mc_mc.c"

# 51 "t1mc.c"
retValue_acc = 0;
# 53 "t1mc.c"
return (int )retValue_acc;
 
# 56 "t1mc.c"

}

# 60 "t1mc.c"
return (int )retValue_acc;

# 63 "t1mc.c"

}
 
#line 6 "t1mc_mc.c"
int (*d1)(); 
static inline int  d1__t1mc__2 (int (* __utac__fp__para) () )  ; 

static inline int  parap__t1mc__1 (int (* __utac__fp__para) () )  ; 

static inline int  e1__t1mc__0 (int (* __utac__fp__para) () )  ; 

#line 8 "t1mc_mc.c"
int foo5(int (*parap)())  
# 77 "t1mc.c"
{
# 79 "t1mc.c"
int retValue_acc;




# 85 "t1mc.c"
{

#line 9 "t1mc_mc.c"

#line 9 "t1mc_mc.c"
int (*e1)();
#line 11 "t1mc_mc.c"
printf("in foo5\n"); 
#line 13 "t1mc_mc.c"
e1 = foo; 
#line 15 "t1mc_mc.c"
printf("call foo by local fp: e1\n"); 
#line 16 "t1mc_mc.c"
((e1__t1mc__0))( e1    ); 
#line 18 "t1mc_mc.c"
printf("call foo by parameter fp: parap\n"); 
#line 20 "t1mc_mc.c"
((parap__t1mc__1))( parap    ); 
#line 22 "t1mc_mc.c"
d1 = foo; 
#line 24 "t1mc_mc.c"
printf("call foo by global fp : d1\n"); 
#line 26 "t1mc_mc.c"
((d1__t1mc__2))( d1    ); 
#line 29 "t1mc_mc.c"
printf("end of foo5\n"); 
# 112 "t1mc.c"

}

# 116 "t1mc.c"
return (int )retValue_acc;

# 119 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );


# 125 "t1mc.c"
static inline int  d1__t1mc__2 (int (* __utac__fp__para) () ) {

# 128 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "foo5"; 
this.targetName = "d1"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
if( (__utac__fp__para==foo && ( this.targetName="foo")   ) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 145 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

# 148 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );


# 154 "t1mc.c"
static inline int  parap__t1mc__1 (int (* __utac__fp__para) () ) {

# 157 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "foo5"; 
this.targetName = "parap"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
if( (__utac__fp__para==foo && ( this.targetName="foo")   ) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 174 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

# 177 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );


# 183 "t1mc.c"
static inline int  e1__t1mc__0 (int (* __utac__fp__para) () ) {

# 186 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "foo5"; 
this.targetName = "e1"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "callp"; 
 { 
    int foo () ;  
if( (__utac__fp__para==foo && ( this.targetName="foo")   ) ) { 
__utac_acc__t1ac__1(&this );
 } 
 
 } 
 } 

# 203 "t1mc.c"
retValue_acc = (*__utac__fp__para) ( ) ;  

# 206 "t1mc.c"
return (int )retValue_acc;
}
 
#line 32 "t1mc_mc.c"
int main()  
# 212 "t1mc.c"
{
# 214 "t1mc.c"
int retValue_acc;




# 220 "t1mc.c"
{

#line 33 "t1mc_mc.c"
printf("call foo5 in main\n"); 
#line 34 "t1mc_mc.c"
foo5(foo); 
#line 36 "t1mc_mc.c"

# 229 "t1mc.c"
retValue_acc = 0;
# 231 "t1mc.c"
return (int )retValue_acc;
 
# 234 "t1mc.c"

}

# 238 "t1mc.c"
return (int )retValue_acc;

# 241 "t1mc.c"

}
 
