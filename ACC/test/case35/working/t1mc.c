
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
# 3 "t1mc_mc.c" 
void foo(int k)  
# 36 "t1mc.c"
{



# 41 "t1mc.c"
{

#line 4 "t1mc_mc.c"
printf("inside foo, k = %d\n", k); 
# 46 "t1mc.c"

}

# 50 "t1mc.c"

}
 
static inline void  foo__t1mc__0 (int k  )  ; 

#line 9 "t1mc_mc.c"
void foo2()  
# 58 "t1mc.c"
{



# 63 "t1mc.c"
{

#line 10 "t1mc_mc.c"
printf("call foo in foo2\n"); 
#line 11 "t1mc_mc.c"
foo__t1mc__0(2); 
# 70 "t1mc.c"

}

# 74 "t1mc.c"

}
  void __utac_acc__t1ac__4 (void);

  void foo (int k  ) ; 

# 81 "t1mc.c"
static inline void  foo__t1mc__0 (int k  ) {

{
__utac_acc__t1ac__4();

}
foo ( k ) ;  
}
 
static inline void  foo__t1mc__1 (int k  )  ; 

#line 14 "t1mc_mc.c"
void foo4()  
# 95 "t1mc.c"
{



# 100 "t1mc.c"
{

#line 15 "t1mc_mc.c"
printf("call foo in foo4\n"); 
#line 16 "t1mc_mc.c"
foo__t1mc__1(2); 
# 107 "t1mc.c"

}

# 111 "t1mc.c"

}
  void __utac_acc__t1ac__4 (void);

  void foo (int k  ) ; 

# 118 "t1mc.c"
static inline void  foo__t1mc__1 (int k  ) {

{
__utac_acc__t1ac__4();

}
foo ( k ) ;  
}
 
#line 19 "t1mc_mc.c"
char foo5(int a, int b)  
# 130 "t1mc.c"
{
# 132 "t1mc.c"
char retValue_acc;




# 138 "t1mc.c"
{

#line 20 "t1mc_mc.c"
printf("in foo5, second argument = %d\n", b); 
# 143 "t1mc.c"

}

# 147 "t1mc.c"
return (char )retValue_acc;

# 150 "t1mc.c"

}
 
#line 23 "t1mc_mc.c"
char foo6(int a, char b, int c)  
# 156 "t1mc.c"
{
# 158 "t1mc.c"
char retValue_acc;




# 164 "t1mc.c"
{

#line 24 "t1mc_mc.c"
printf("inside foo6\n"); 
# 169 "t1mc.c"

}

# 173 "t1mc.c"
return (char )retValue_acc;

# 176 "t1mc.c"

}
 
#line 28 "t1mc_mc.c"
char foo7(int a, char b, int c, char d, int e, char f, int g)  
# 182 "t1mc.c"
{
# 184 "t1mc.c"
char retValue_acc;




# 190 "t1mc.c"
{

#line 30 "t1mc_mc.c"
printf("inside foo7, a = %d, b = %c, c = %d, d = %c, e = %d, f = %c , g = %d\n", a, b, c, d, e, f, g); 
# 195 "t1mc.c"

}

# 199 "t1mc.c"
return (char )retValue_acc;

# 202 "t1mc.c"

}
 
static inline void  foo__t1mc__2 (int k  )  ; 

#line 34 "t1mc_mc.c"
void fo3()  
# 210 "t1mc.c"
{



# 215 "t1mc.c"
{

#line 35 "t1mc_mc.c"
printf("call foo in fo3\n"); 
#line 36 "t1mc_mc.c"
foo__t1mc__2(1); 
# 222 "t1mc.c"

}

# 226 "t1mc.c"

}
  void __utac_acc__t1ac__6 (void);

  void foo (int k  ) ; 

# 233 "t1mc.c"
static inline void  foo__t1mc__2 (int k  ) {

{
__utac_acc__t1ac__6();

}
foo ( k ) ;  
}
 
#line 39 "t1mc_mc.c"
void fo(int a, int b)  
# 245 "t1mc.c"
{



# 250 "t1mc.c"
{

#line 40 "t1mc_mc.c"
printf("in fo, first = %d, last = %d\n", a, b); 
# 255 "t1mc.c"

}

# 259 "t1mc.c"

}
 
#line 43 "t1mc_mc.c"
void f3o(int a, char c, int b)  
# 265 "t1mc.c"
{



# 270 "t1mc.c"
{

#line 44 "t1mc_mc.c"
printf("in f3o, first = %d, last = %d\n", a, b); 
# 275 "t1mc.c"

}

# 279 "t1mc.c"

}
 
#line 47 "t1mc_mc.c"
void f44o(int a, int *c, int b)  
# 285 "t1mc.c"
{



# 290 "t1mc.c"
{

#line 48 "t1mc_mc.c"
printf("in f44o, first = %d, last = %d\n", a, b); 
# 295 "t1mc.c"

}

# 299 "t1mc.c"

}
 
#line 51 "t1mc_mc.c"
void cbc(int a)  
# 305 "t1mc.c"
{



# 310 "t1mc.c"
{

#line 52 "t1mc_mc.c"
printf("in cbc\n"); 
# 315 "t1mc.c"

}

# 319 "t1mc.c"

}
 
#line 55 "t1mc_mc.c"
void cbcbc(int b)  
# 325 "t1mc.c"
{



# 330 "t1mc.c"
{

#line 56 "t1mc_mc.c"
printf("in cbcbc\n"); 
# 335 "t1mc.c"

}

# 339 "t1mc.c"

}
 
static inline char  foo7__t1mc__11 (int a ,char b ,int c ,char d ,int e ,char f ,int g  )  ; 

static inline char  foo6__t1mc__10 (int a ,char b ,int c  )  ; 

static inline char  foo5__t1mc__9 (int a ,int b  )  ; 

static inline void  cbcbc__t1mc__8 (int b  )  ; 

static inline void  cbc__t1mc__7 (int a  )  ; 

static inline void  f44o__t1mc__6 (int a ,int* c ,int b  )  ; 

static inline void  f3o__t1mc__5 (int a ,char c ,int b  )  ; 

static inline void  fo__t1mc__4 (int a ,int b  )  ; 

static inline void  foo__t1mc__3 (int k  )  ; 

#line 60 "t1mc_mc.c"
int main()  
# 363 "t1mc.c"
{
# 365 "t1mc.c"
int retValue_acc;




# 371 "t1mc.c"
{

#line 61 "t1mc_mc.c"
printf("call foo in main\n"); 
#line 62 "t1mc_mc.c"
foo__t1mc__3(3); 
#line 63 "t1mc_mc.c"
foo2(); 
#line 64 "t1mc_mc.c"
foo4(); 
#line 65 "t1mc_mc.c"
fo3(); 
#line 67 "t1mc_mc.c"
fo__t1mc__4(1, 2); 
#line 68 "t1mc_mc.c"
f3o__t1mc__5(3, 7, 4); 
#line 69 "t1mc_mc.c"
f44o__t1mc__6(5, 0, 6); 
#line 71 "t1mc_mc.c"
cbc__t1mc__7(3); 
#line 72 "t1mc_mc.c"
cbcbc__t1mc__8(4); 
#line 75 "t1mc_mc.c"
foo5__t1mc__9(3, 5); 
#line 76 "t1mc_mc.c"
foo6__t1mc__10(3, 'w', 4); 
#line 78 "t1mc_mc.c"
foo7__t1mc__11(1, 'a', 2, 'b', 3, 'c', 4); 
#line 80 "t1mc_mc.c"

# 402 "t1mc.c"
retValue_acc = 0;
# 404 "t1mc.c"
return (int )retValue_acc;
 
# 407 "t1mc.c"

}

# 411 "t1mc.c"
return (int )retValue_acc;

# 414 "t1mc.c"

}
  void __utac_acc__t1ac__1 (char x ,int y  );

  void __utac_acc__t1ac__7 (int i ,int j  );

  char foo7 (int a ,char b ,int c ,char d ,int e ,char f ,int g  ) ; 

# 423 "t1mc.c"
static inline char  foo7__t1mc__11 (int a ,char b ,int c ,char d ,int e ,char f ,int g  ) {

# 426 "t1mc.c"
char retValue_acc;

{
char __utac__ad__arg1 = f ; 
int __utac__ad__arg2 = g ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}

{
int __utac__ad__arg1 = a ; 
int __utac__ad__arg2 = g ; 
__utac_acc__t1ac__7(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 443 "t1mc.c"
retValue_acc = foo7 ( a , b , c , d , e , f , g ) ;  

# 446 "t1mc.c"
return (char )retValue_acc;
}
  void __utac_acc__t1ac__1 (char x ,int y  );

  void __utac_acc__t1ac__7 (int i ,int j  );

  char foo6 (int a ,char b ,int c  ) ; 

# 455 "t1mc.c"
static inline char  foo6__t1mc__10 (int a ,char b ,int c  ) {

# 458 "t1mc.c"
char retValue_acc;

{
char __utac__ad__arg1 = b ; 
int __utac__ad__arg2 = c ; 
__utac_acc__t1ac__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}

{
int __utac__ad__arg1 = a ; 
int __utac__ad__arg2 = c ; 
__utac_acc__t1ac__7(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 475 "t1mc.c"
retValue_acc = foo6 ( a , b , c ) ;  

# 478 "t1mc.c"
return (char )retValue_acc;
}
  void __utac_acc__t1ac__2 (int x  );

  void __utac_acc__t1ac__7 (int i ,int j  );

  void __utac_acc__t1ac__3 (void);

  char foo5 (int a ,int b  ) ; 

# 489 "t1mc.c"
static inline char  foo5__t1mc__9 (int a ,int b  ) {

# 492 "t1mc.c"
char retValue_acc;

{
int __utac__ad__arg1 = b ; 
__utac_acc__t1ac__2(__utac__ad__arg1 );

}

{
int __utac__ad__arg1 = a ; 
int __utac__ad__arg2 = b ; 
__utac_acc__t1ac__7(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 508 "t1mc.c"
retValue_acc = foo5 ( a , b ) ;  

{
__utac_acc__t1ac__3();

}

# 516 "t1mc.c"
return (char )retValue_acc;
}
  void __utac_acc__t1ac__8 (void);

  void cbcbc (int b  ) ; 

# 523 "t1mc.c"
static inline void  cbcbc__t1mc__8 (int b  ) {

{
__utac_acc__t1ac__8();

}
cbcbc ( b ) ;  
}
  void __utac_acc__t1ac__8 (void);

  void cbc (int a  ) ; 

# 536 "t1mc.c"
static inline void  cbc__t1mc__7 (int a  ) {

{
__utac_acc__t1ac__8();

}
cbc ( a ) ;  
}
  void __utac_acc__t1ac__7 (int i ,int j  );

  void f44o (int a ,int* c ,int b  ) ; 

# 549 "t1mc.c"
static inline void  f44o__t1mc__6 (int a ,int* c ,int b  ) {

{
int __utac__ad__arg1 = a ; 
int __utac__ad__arg2 = b ; 
__utac_acc__t1ac__7(__utac__ad__arg1 ,__utac__ad__arg2 );

}
f44o ( a , c , b ) ;  
}
  void __utac_acc__t1ac__7 (int i ,int j  );

  void f3o (int a ,char c ,int b  ) ; 

# 564 "t1mc.c"
static inline void  f3o__t1mc__5 (int a ,char c ,int b  ) {

{
int __utac__ad__arg1 = a ; 
int __utac__ad__arg2 = b ; 
__utac_acc__t1ac__7(__utac__ad__arg1 ,__utac__ad__arg2 );

}
f3o ( a , c , b ) ;  
}
  void __utac_acc__t1ac__7 (int i ,int j  );

  void fo (int a ,int b  ) ; 

# 579 "t1mc.c"
static inline void  fo__t1mc__4 (int a ,int b  ) {

{
int __utac__ad__arg1 = a ; 
int __utac__ad__arg2 = b ; 
__utac_acc__t1ac__7(__utac__ad__arg1 ,__utac__ad__arg2 );

}
fo ( a , b ) ;  
}
  void __utac_acc__t1ac__5 (void);

  void foo (int k  ) ; 

# 594 "t1mc.c"
static inline void  foo__t1mc__3 (int k  ) {

{
__utac_acc__t1ac__5();

}
foo ( k ) ;  
}
 
