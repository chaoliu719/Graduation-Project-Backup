
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
int foo3(int *a)  
# 36 "t1mc.c"
{
# 38 "t1mc.c"
int retValue_acc;




# 44 "t1mc.c"
{

#line 3 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 4 "t1mc_mc.c"

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
 
#line 7 "t1mc_mc.c"
int foo4(int a)  
# 69 "t1mc.c"
{
# 71 "t1mc.c"
int retValue_acc;




# 77 "t1mc.c"
{

#line 8 "t1mc_mc.c"
printf("inside foo4\n"); 
# 82 "t1mc.c"

}

# 86 "t1mc.c"
return (int )retValue_acc;

# 89 "t1mc.c"

}
 
static inline int  foo4__t1mc__1 (int a  )  ; 

static inline int  foo3__t1mc__0 (int* a  )  ; 

#line 12 "t1mc_mc.c"
int main()  
# 99 "t1mc.c"
{
# 101 "t1mc.c"
int retValue_acc;




# 107 "t1mc.c"
{

#line 14 "t1mc_mc.c"

#line 14 "t1mc_mc.c"
int *p;
#line 15 "t1mc_mc.c"

#line 15 "t1mc_mc.c"
int q;
#line 17 "t1mc_mc.c"
foo3__t1mc__0(p); 
#line 19 "t1mc_mc.c"
foo4__t1mc__1(q); 
#line 21 "t1mc_mc.c"

# 124 "t1mc.c"
retValue_acc = 0;
# 126 "t1mc.c"
return (int )retValue_acc;
 
# 129 "t1mc.c"

}

# 133 "t1mc.c"
return (int )retValue_acc;

# 136 "t1mc.c"

}
  void __utac_acc__t1ac__2 (void);

  int foo4 (int a  ) ; 

# 143 "t1mc.c"
static inline int  foo4__t1mc__1 (int a  ) {

# 146 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__2();

}

# 154 "t1mc.c"
retValue_acc = foo4 ( a ) ;  

# 157 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (void);

  int foo3 (int* a  ) ; 

# 164 "t1mc.c"
static inline int  foo3__t1mc__0 (int* a  ) {

# 167 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 175 "t1mc.c"
retValue_acc = foo3 ( a ) ;  

# 178 "t1mc.c"
return (int )retValue_acc;
}
 
