
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


#line 1 "t1mc.mc"
unsigned foo1()  
# 33 "t1mc.c"
{
# 35 "t1mc.c"
unsigned retValue_acc;




# 41 "t1mc.c"
{

#line 2 "t1mc.mc"
printf("in foo1\n"); 
# 46 "t1mc.c"

}

# 50 "t1mc.c"
return (unsigned )retValue_acc;

# 53 "t1mc.c"

}
 
#line 5 "t1mc.mc"
signed foo2()  
# 59 "t1mc.c"
{
# 61 "t1mc.c"
signed retValue_acc;




# 67 "t1mc.c"
{

#line 6 "t1mc.mc"
printf("in foo2\n"); 
# 72 "t1mc.c"

}

# 76 "t1mc.c"
return (signed )retValue_acc;

# 79 "t1mc.c"

}
 
#line 10 "t1mc.mc"
unsigned int foo3()  
# 85 "t1mc.c"
{
# 87 "t1mc.c"
unsigned int retValue_acc;




# 93 "t1mc.c"
{

#line 11 "t1mc.mc"
printf("in foo3\n"); 
# 98 "t1mc.c"

}

# 102 "t1mc.c"
return (unsigned int )retValue_acc;

# 105 "t1mc.c"

}
 
#line 15 "t1mc.mc"
signed int foo4()  
# 111 "t1mc.c"
{
# 113 "t1mc.c"
signed int retValue_acc;




# 119 "t1mc.c"
{

#line 16 "t1mc.mc"
printf("in foo4\n"); 
# 124 "t1mc.c"

}

# 128 "t1mc.c"
return (signed int )retValue_acc;

# 131 "t1mc.c"

}
 
#line 19 "t1mc.mc"
void foo5(unsigned a)  
# 137 "t1mc.c"
{



# 142 "t1mc.c"
{

#line 20 "t1mc.mc"
printf("in foo5\n"); 
# 147 "t1mc.c"

}

# 151 "t1mc.c"

}
 
#line 23 "t1mc.mc"
void foo6(signed a)  
# 157 "t1mc.c"
{



# 162 "t1mc.c"
{

#line 24 "t1mc.mc"
printf("in foo6\n"); 
# 167 "t1mc.c"

}

# 171 "t1mc.c"

}
 
#line 28 "t1mc.mc"
void foo7(unsigned int a)  
# 177 "t1mc.c"
{



# 182 "t1mc.c"
{

#line 29 "t1mc.mc"
printf("in foo7\n"); 
# 187 "t1mc.c"

}

# 191 "t1mc.c"

}
 
#line 33 "t1mc.mc"
void foo8(signed int a)  
# 197 "t1mc.c"
{



# 202 "t1mc.c"
{

#line 34 "t1mc.mc"
printf("in foo8\n"); 
# 207 "t1mc.c"

}

# 211 "t1mc.c"

}
 
static inline void  foo8__t1mc__7 (signed int a  )  ; 

static inline void  foo7__t1mc__6 (unsigned int a  )  ; 

static inline void  foo6__t1mc__5 (signed a  )  ; 

static inline void  foo5__t1mc__4 (unsigned a  )  ; 

static inline signed int  foo4__t1mc__3 (void)  ; 

static inline unsigned int  foo3__t1mc__2 (void)  ; 

static inline signed  foo2__t1mc__1 (void)  ; 

static inline unsigned  foo1__t1mc__0 (void)  ; 

#line 38 "t1mc.mc"
int main()  
# 233 "t1mc.c"
{
# 235 "t1mc.c"
int retValue_acc;




# 241 "t1mc.c"
{

#line 39 "t1mc.mc"
foo1__t1mc__0(); 
#line 40 "t1mc.mc"
foo2__t1mc__1(); 
#line 41 "t1mc.mc"
foo3__t1mc__2(); 
#line 42 "t1mc.mc"
foo4__t1mc__3(); 
#line 44 "t1mc.mc"
foo5__t1mc__4(1); 
#line 45 "t1mc.mc"
foo6__t1mc__5(1); 
#line 46 "t1mc.mc"
foo7__t1mc__6(1); 
#line 47 "t1mc.mc"
foo8__t1mc__7(1); 
#line 49 "t1mc.mc"

# 262 "t1mc.c"
retValue_acc = 0;
# 264 "t1mc.c"
return (int )retValue_acc;
 
# 267 "t1mc.c"

}

# 271 "t1mc.c"
return (int )retValue_acc;

# 274 "t1mc.c"

}
  void __utac_acc__t1ac__8 (void);

  void foo8 (signed int a  ) ; 

# 281 "t1mc.c"
static inline void  foo8__t1mc__7 (signed int a  ) {

{
__utac_acc__t1ac__8();

}
foo8 ( a ) ;  
}
  void __utac_acc__t1ac__7 (void);

  void foo7 (unsigned int a  ) ; 

# 294 "t1mc.c"
static inline void  foo7__t1mc__6 (unsigned int a  ) {

{
__utac_acc__t1ac__7();

}
foo7 ( a ) ;  
}
  void __utac_acc__t1ac__6 (void);

  void foo6 (signed a  ) ; 

# 307 "t1mc.c"
static inline void  foo6__t1mc__5 (signed a  ) {

{
__utac_acc__t1ac__6();

}
foo6 ( a ) ;  
}
  void __utac_acc__t1ac__5 (void);

  void foo5 (unsigned a  ) ; 

# 320 "t1mc.c"
static inline void  foo5__t1mc__4 (unsigned a  ) {

{
__utac_acc__t1ac__5();

}
foo5 ( a ) ;  
}
  void __utac_acc__t1ac__4 (void);

  signed int foo4 () ; 

# 333 "t1mc.c"
static inline signed int  foo4__t1mc__3 (void) {

# 336 "t1mc.c"
signed int retValue_acc;

{
__utac_acc__t1ac__4();

}

# 344 "t1mc.c"
retValue_acc = foo4 ( ) ;  

# 347 "t1mc.c"
return (signed int )retValue_acc;
}
  void __utac_acc__t1ac__3 (void);

  unsigned int foo3 () ; 

# 354 "t1mc.c"
static inline unsigned int  foo3__t1mc__2 (void) {

# 357 "t1mc.c"
unsigned int retValue_acc;

{
__utac_acc__t1ac__3();

}

# 365 "t1mc.c"
retValue_acc = foo3 ( ) ;  

# 368 "t1mc.c"
return (unsigned int )retValue_acc;
}
  void __utac_acc__t1ac__2 (void);

  signed foo2 () ; 

# 375 "t1mc.c"
static inline signed  foo2__t1mc__1 (void) {

# 378 "t1mc.c"
signed retValue_acc;

{
__utac_acc__t1ac__2();

}

# 386 "t1mc.c"
retValue_acc = foo2 ( ) ;  

# 389 "t1mc.c"
return (signed )retValue_acc;
}
  void __utac_acc__t1ac__1 (void);

  unsigned foo1 () ; 

# 396 "t1mc.c"
static inline unsigned  foo1__t1mc__0 (void) {

# 399 "t1mc.c"
unsigned retValue_acc;

{
__utac_acc__t1ac__1();

}

# 407 "t1mc.c"
retValue_acc = foo1 ( ) ;  

# 410 "t1mc.c"
return (unsigned )retValue_acc;
}
 
