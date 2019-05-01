
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
extern int printf(__const char *__restrict __format, ...); 
#line 3 "t1mc_mc.c"
void printfmine(char *s)  
# 38 "t1mc.c"
{



# 43 "t1mc.c"
{

#line 4 "t1mc_mc.c"
printf("call printfmine, %s \n", s); 
# 48 "t1mc.c"

}

# 52 "t1mc.c"

}
 
#line 7 "t1mc_mc.c"
void printfmine2(char *s, ...)  
# 58 "t1mc.c"
{



# 63 "t1mc.c"
{

#line 8 "t1mc_mc.c"
printf("call printfmine2, %s\n", s); 
# 68 "t1mc.c"

}

# 72 "t1mc.c"

}
 
#line 11 "t1mc_mc.c"
int foo1(void ); 
static inline void  printfmine__t1mc__0 (char* s  )  ; 

#line 13 "t1mc_mc.c"
int foo1()  
# 82 "t1mc.c"
{
# 84 "t1mc.c"
int retValue_acc;




# 90 "t1mc.c"
{

#line 14 "t1mc_mc.c"
printf("here is foo1\n"); 
#line 15 "t1mc_mc.c"
printfmine__t1mc__0("call printfmine inside foo1\n"); 
#line 16 "t1mc_mc.c"
printfmine2("call printfmine2 inside foo1\n"); 
#line 17 "t1mc_mc.c"

# 101 "t1mc.c"
retValue_acc = 3;
# 103 "t1mc.c"
return (int )retValue_acc;
 
# 106 "t1mc.c"

}

# 110 "t1mc.c"
return (int )retValue_acc;

# 113 "t1mc.c"

}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  void printfmine (char* s  ) ; 

# 120 "t1mc.c"
static inline void  printfmine__t1mc__0 (char* s  ) {
 { 
 struct JoinPoint this; 
this.funcName = "foo1"; 
this.targetName = "printfmine"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 
printfmine ( s ) ;  
}
 
#line 20 "t1mc_mc.c"
int foo2(); 
static inline void  printfmine__t1mc__1 (char* s  )  ; 

#line 22 "t1mc_mc.c"
int foo2(int a)  
# 142 "t1mc.c"
{
# 144 "t1mc.c"
int retValue_acc;




# 150 "t1mc.c"
{

#line 23 "t1mc_mc.c"
printf("here is foo2, a = %d\n", a); 
#line 24 "t1mc_mc.c"
printfmine__t1mc__1("call printfmine inside foo1\n"); 
#line 25 "t1mc_mc.c"
printfmine2("call printfmine2 inside foo1\n"); 
#line 26 "t1mc_mc.c"

# 161 "t1mc.c"
retValue_acc = a;
# 163 "t1mc.c"
return (int )retValue_acc;
 
# 166 "t1mc.c"

}

# 170 "t1mc.c"
return (int )retValue_acc;

# 173 "t1mc.c"

}
  void __utac_acc__t1ac__2 (  struct JoinPoint * );

  void printfmine (char* s  ) ; 

# 180 "t1mc.c"
static inline void  printfmine__t1mc__1 (char* s  ) {
 { 
 struct JoinPoint this; 
this.funcName = "foo2"; 
this.targetName = "printfmine"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__2(&this );
 
 } 
 } 
printfmine ( s ) ;  
}
 
static inline int  foo2__t1mc__3 (int a  )  ; 

static inline int  foo1__t1mc__2 (void)  ; 

#line 30 "t1mc_mc.c"
int main()  
# 202 "t1mc.c"
{
# 204 "t1mc.c"
int retValue_acc;




# 210 "t1mc.c"
{

#line 31 "t1mc_mc.c"
foo1__t1mc__2(); 
#line 32 "t1mc_mc.c"
foo2__t1mc__3(4); 
#line 33 "t1mc_mc.c"

# 219 "t1mc.c"
retValue_acc = 0;
# 221 "t1mc.c"
return (int )retValue_acc;
 
# 224 "t1mc.c"

}

# 228 "t1mc.c"
return (int )retValue_acc;

# 231 "t1mc.c"

}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  int foo2 (int a  ) ; 

# 238 "t1mc.c"
static inline int  foo2__t1mc__3 (int a  ) {

# 241 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo2"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__1(&this );
 
 } 
 } 

# 255 "t1mc.c"
retValue_acc = foo2 ( a ) ;  

# 258 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (  struct JoinPoint * );

  int foo1 () ; 

# 265 "t1mc.c"
static inline int  foo1__t1mc__2 (void) {

# 268 "t1mc.c"
int retValue_acc;
 { 
 struct JoinPoint this; 
this.funcName = "main"; 
this.targetName = "foo1"; 
this.fileName = "t1mc_mc.c"; 
this.kind = "call"; 
 { 
__utac_acc__t1ac__1(&this );
 
 } 
 } 

# 282 "t1mc.c"
retValue_acc = foo1 ( ) ;  

# 285 "t1mc.c"
return (int )retValue_acc;
}
 
