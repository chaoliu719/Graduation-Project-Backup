
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
extern void foo2(char *c); 
  void __utac_acc__t1ac__4 (  struct JoinPoint * );


#line 3 "t1mc_mc.c"
void foo(int a)  
# 41 "t1mc.c"
{


 { 
 struct JoinPoint this; 
this.funcName = "foo"; 
this.targetName = "foo"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "execution"; 
 { 
__utac_acc__t1ac__4(&this );
 
 } 
 } 

# 57 "t1mc.c"
{

#line 4 "t1mc_mc.c"
printf("inside foo\n"); 
# 62 "t1mc.c"

}

# 66 "t1mc.c"

}
 
int __utac__cflow_t1ac_0 ( int , int);


int __utac__cflow_t1ac_0 ( int , int);


static inline void  foo2__t1mc__0 (char* c  )  ; 

#line 7 "t1mc_mc.c"
int foo3(char *s, int b)  
# 80 "t1mc.c"
{
# 82 "t1mc.c"
int retValue_acc;




{
{ extern void * __utac__error_stack_mgt(void * env , int mode, int count)  ; 
 void * tmp = __utac__error_stack_mgt ( 0, 2 , 1); 
 if(tmp) { extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val)  ; 
 __utac__exception__cf_handler_set (tmp, & __utac__cflow_t1ac_0, __utac__cflow_t1ac_0(3,0)); } 
 } 
__utac__cflow_t1ac_0 ( 1, 0 ) ; 

}

# 98 "t1mc.c"
{

#line 8 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 9 "t1mc_mc.c"
foo2__t1mc__0("call foo2 in foo3\n"); 
# 105 "t1mc.c"

}

{
__utac__cflow_t1ac_0 ( 2, 0 ) ; 

}

# 114 "t1mc.c"
return (int )retValue_acc;

# 117 "t1mc.c"

}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  void foo2 (char* c  ) ; 

# 128 "t1mc.c"
static inline void  foo2__t1mc__0 (char* c  ) {
 { 
 struct JoinPoint this; 
this.funcName = "foo3"; 
this.targetName = "foo2"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__2(&this );
 } 
 
 } 
 } 
foo2 ( c ) ;  
 { 
 struct JoinPoint this; 
this.funcName = "foo3"; 
this.targetName = "foo2"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__3(&this );
 } 
 
 } 
 } 
}
 
static inline int  foo3__t1mc__2 (char* s ,int b  )  ; 

static inline void  foo__t1mc__1 (int a  )  ; 

#line 11 "t1mc_mc.c"
int main()  
# 165 "t1mc.c"
{
# 167 "t1mc.c"
int retValue_acc;




# 173 "t1mc.c"
{

#line 12 "t1mc_mc.c"
foo__t1mc__1(4); 
#line 13 "t1mc_mc.c"
printf("---------\n"); 
#line 14 "t1mc_mc.c"
foo3__t1mc__2("abc", 3); 
#line 15 "t1mc_mc.c"

# 184 "t1mc.c"
retValue_acc = 0;
# 186 "t1mc.c"
return (int )retValue_acc;
 
# 189 "t1mc.c"

}

# 193 "t1mc.c"
return (int )retValue_acc;

# 196 "t1mc.c"

}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  int foo3 (char* s ,int b  ) ; 

# 207 "t1mc.c"
static inline int  foo3__t1mc__2 (char* s ,int b  ) {

# 210 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo3"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__2(&this );
 } 
 
 } 
 } 

# 226 "t1mc.c"
retValue_acc = foo3 ( s , b ) ;  
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo3"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__3(&this );
 } 
 
 } 
 } 

# 242 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  void __utac_acc__t1ac__3 (  struct JoinPoint * );
int __utac__cflow_t1ac_0(int, int);

  void foo (int a  ) ; 

# 253 "t1mc.c"
static inline void  foo__t1mc__1 (int a  ) {
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__2(&this );
 } 
 
 } 
 } 
foo ( a ) ;  
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
if( __utac__cflow_t1ac_0(3,0) ) { 
__utac_acc__t1ac__3(&this );
 } 
 
 } 
 } 
}
 
