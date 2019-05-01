
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
struct X {int a; 
}; 
#line 7 "t1mc_mc.c"
union Y {int b; 
}; 
#line 9 "t1mc_mc.c"
enum Z {A,B}; 
#line 11 "t1mc_mc.c"
void foo1(struct X info)  
# 44 "t1mc.c"
{



# 49 "t1mc.c"
{

#line 12 "t1mc_mc.c"
printf("in foo1\n"); 
# 54 "t1mc.c"

}

# 58 "t1mc.c"

}
 
#line 15 "t1mc_mc.c"
void foo2(struct X *info)  
# 64 "t1mc.c"
{



# 69 "t1mc.c"
{

#line 16 "t1mc_mc.c"
printf("in foo2\n"); 
# 74 "t1mc.c"

}

# 78 "t1mc.c"

}
 
#line 19 "t1mc_mc.c"
void foo3(union Y info)  
# 84 "t1mc.c"
{



# 89 "t1mc.c"
{

#line 20 "t1mc_mc.c"
printf("in foo3\n"); 
# 94 "t1mc.c"

}

# 98 "t1mc.c"

}
 
#line 23 "t1mc_mc.c"
void foo4(union Y *info)  
# 104 "t1mc.c"
{



# 109 "t1mc.c"
{

#line 24 "t1mc_mc.c"
printf("in foo4\n"); 
# 114 "t1mc.c"

}

# 118 "t1mc.c"

}
 
#line 27 "t1mc_mc.c"
void foo5(enum Z info)  
# 124 "t1mc.c"
{



# 129 "t1mc.c"
{

#line 28 "t1mc_mc.c"
printf("in foo5\n"); 
# 134 "t1mc.c"

}

# 138 "t1mc.c"

}
 
#line 31 "t1mc_mc.c"
void foo6(enum Z *info)  
# 144 "t1mc.c"
{



# 149 "t1mc.c"
{

#line 32 "t1mc_mc.c"
printf("in foo6\n"); 
# 154 "t1mc.c"

}

# 158 "t1mc.c"

}
 
static inline void  foo6__t1mc__5 (enum Z * info  )  ; 

static inline void  foo5__t1mc__4 (enum Z  info  )  ; 

static inline void  foo4__t1mc__3 (union Y * info  )  ; 

static inline void  foo3__t1mc__2 (union Y  info  )  ; 

static inline void  foo2__t1mc__1 (struct X * info  )  ; 

static inline void  foo1__t1mc__0 (struct X  info  )  ; 

#line 35 "t1mc_mc.c"
int main()  
# 176 "t1mc.c"
{
# 178 "t1mc.c"
int retValue_acc;




# 184 "t1mc.c"
{

#line 36 "t1mc_mc.c"

#line 36 "t1mc_mc.c"
struct X a;
#line 37 "t1mc_mc.c"

#line 37 "t1mc_mc.c"
union Y b;
#line 38 "t1mc_mc.c"

#line 38 "t1mc_mc.c"
enum Z c;
#line 40 "t1mc_mc.c"
foo1__t1mc__0(a); 
#line 41 "t1mc_mc.c"
foo2__t1mc__1((&a)); 
#line 42 "t1mc_mc.c"
foo3__t1mc__2(b); 
#line 43 "t1mc_mc.c"
foo4__t1mc__3((&b)); 
#line 44 "t1mc_mc.c"
foo5__t1mc__4(c); 
#line 45 "t1mc_mc.c"
foo6__t1mc__5((&c)); 
#line 48 "t1mc_mc.c"

# 213 "t1mc.c"
retValue_acc = 0;
# 215 "t1mc.c"
return (int )retValue_acc;
 
# 218 "t1mc.c"

}

# 222 "t1mc.c"
return (int )retValue_acc;

# 225 "t1mc.c"

}
  void __utac_acc__t1ac__6 (void);

  void foo6 (enum Z * info  ) ; 

# 232 "t1mc.c"
static inline void  foo6__t1mc__5 (enum Z * info  ) {

{
__utac_acc__t1ac__6();

}
foo6 ( info ) ;  
}
  void __utac_acc__t1ac__5 (void);

  void foo5 (enum Z  info  ) ; 

# 245 "t1mc.c"
static inline void  foo5__t1mc__4 (enum Z  info  ) {

{
__utac_acc__t1ac__5();

}
foo5 ( info ) ;  
}
  void __utac_acc__t1ac__4 (void);

  void foo4 (union Y * info  ) ; 

# 258 "t1mc.c"
static inline void  foo4__t1mc__3 (union Y * info  ) {

{
__utac_acc__t1ac__4();

}
foo4 ( info ) ;  
}
  void __utac_acc__t1ac__3 (void);

  void foo3 (union Y  info  ) ; 

# 271 "t1mc.c"
static inline void  foo3__t1mc__2 (union Y  info  ) {

{
__utac_acc__t1ac__3();

}
foo3 ( info ) ;  
}
  void __utac_acc__t1ac__2 (void);

  void foo2 (struct X * info  ) ; 

# 284 "t1mc.c"
static inline void  foo2__t1mc__1 (struct X * info  ) {

{
__utac_acc__t1ac__2();

}
foo2 ( info ) ;  
}
  void __utac_acc__t1ac__1 (void);

  void foo1 (struct X  info  ) ; 

# 297 "t1mc.c"
static inline void  foo1__t1mc__0 (struct X  info  ) {

{
__utac_acc__t1ac__1();

}
foo1 ( info ) ;  
}
 
