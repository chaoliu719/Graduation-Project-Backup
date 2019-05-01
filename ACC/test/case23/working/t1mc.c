
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
typedef int INT; 
#line 3 "t1mc_mc.c"
int foo3( INT *a)  
# 38 "t1mc.c"
{
# 40 "t1mc.c"
int retValue_acc;




# 46 "t1mc.c"
{

#line 4 "t1mc_mc.c"
printf("inside foo3\n"); 
#line 5 "t1mc_mc.c"

# 53 "t1mc.c"
retValue_acc = 0;
# 55 "t1mc.c"
return (int )retValue_acc;
 
# 58 "t1mc.c"

}

# 62 "t1mc.c"
return (int )retValue_acc;

# 65 "t1mc.c"

}
 
#line 8 "t1mc_mc.c"
int foo4( INT a)  
# 71 "t1mc.c"
{
# 73 "t1mc.c"
int retValue_acc;




# 79 "t1mc.c"
{

#line 9 "t1mc_mc.c"
printf("inside foo4\n"); 
# 84 "t1mc.c"

}

# 88 "t1mc.c"
return (int )retValue_acc;

# 91 "t1mc.c"

}
 
static inline int  foo4__t1mc__1 (INT a  )  ; 

static inline int  foo3__t1mc__0 (INT* a  )  ; 

#line 13 "t1mc_mc.c"
int main()  
# 101 "t1mc.c"
{
# 103 "t1mc.c"
int retValue_acc;




# 109 "t1mc.c"
{

#line 15 "t1mc_mc.c"

#line 15 "t1mc_mc.c"
int *p;
#line 16 "t1mc_mc.c"

#line 16 "t1mc_mc.c"
int q;
#line 18 "t1mc_mc.c"
foo3__t1mc__0(p); 
#line 20 "t1mc_mc.c"
foo4__t1mc__1(q); 
#line 22 "t1mc_mc.c"

# 126 "t1mc.c"
retValue_acc = 0;
# 128 "t1mc.c"
return (int )retValue_acc;
 
# 131 "t1mc.c"

}

# 135 "t1mc.c"
return (int )retValue_acc;

# 138 "t1mc.c"

}
  void __utac_acc__t1ac__2 (void);

  int foo4 (INT a  ) ; 

# 145 "t1mc.c"
static inline int  foo4__t1mc__1 (INT a  ) {

# 148 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__2();

}

# 156 "t1mc.c"
retValue_acc = foo4 ( a ) ;  

# 159 "t1mc.c"
return (int )retValue_acc;
}
  void __utac_acc__t1ac__1 (void);

  int foo3 (INT* a  ) ; 

# 166 "t1mc.c"
static inline int  foo3__t1mc__0 (INT* a  ) {

# 169 "t1mc.c"
int retValue_acc;

{
__utac_acc__t1ac__1();

}

# 177 "t1mc.c"
retValue_acc = foo3 ( a ) ;  

# 180 "t1mc.c"
return (int )retValue_acc;
}
 
