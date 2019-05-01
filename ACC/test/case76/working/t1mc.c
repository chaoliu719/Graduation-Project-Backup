
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
void foo(int (*a))  
# 33 "t1mc.c"
{



# 38 "t1mc.c"
{

#line 2 "t1mc.mc"
printf("in foo\n"); 
# 43 "t1mc.c"

}

# 47 "t1mc.c"

}
 
#line 5 "t1mc.mc"
void foo2(int (*a)())  
# 53 "t1mc.c"
{



# 58 "t1mc.c"
{

#line 6 "t1mc.mc"
printf("in foo2\n"); 
# 63 "t1mc.c"

}

# 67 "t1mc.c"

}
 
#line 9 "t1mc.mc"
int foo3()  
# 73 "t1mc.c"
{
# 75 "t1mc.c"
int retValue_acc;




# 81 "t1mc.c"
{

#line 10 "t1mc.mc"
printf("in foo3\n"); 
#line 11 "t1mc.mc"

# 88 "t1mc.c"
retValue_acc = 0;
# 90 "t1mc.c"
return (int )retValue_acc;
 
# 93 "t1mc.c"

}

# 97 "t1mc.c"
return (int )retValue_acc;

# 100 "t1mc.c"

}
 
static inline void  foo2__t1mc__1 (int(*a)()  )  ; 

static inline void  foo__t1mc__0 (int* a  )  ; 

#line 15 "t1mc.mc"
int main()  
# 110 "t1mc.c"
{
# 112 "t1mc.c"
int retValue_acc;




# 118 "t1mc.c"
{

#line 16 "t1mc.mc"

#line 16 "t1mc.mc"
int a;
#line 17 "t1mc.mc"

#line 17 "t1mc.mc"
int *ap = (&a);
#line 19 "t1mc.mc"
foo__t1mc__0(ap); 
#line 21 "t1mc.mc"
foo2__t1mc__1(foo3); 
#line 23 "t1mc.mc"

# 135 "t1mc.c"
retValue_acc = 0;
# 137 "t1mc.c"
return (int )retValue_acc;
 
# 140 "t1mc.c"

}

# 144 "t1mc.c"
return (int )retValue_acc;

# 147 "t1mc.c"

}
  void __utac_acc__t1ac__2 (void);

  void foo2 (int(*a)()  ) ; 

# 154 "t1mc.c"
static inline void  foo2__t1mc__1 (int(*a)()  ) {

{
__utac_acc__t1ac__2();

}
foo2 ( a ) ;  
}
  void __utac_acc__t1ac__1 (void);

  void foo (int* a  ) ; 

# 167 "t1mc.c"
static inline void  foo__t1mc__0 (int* a  ) {

{
__utac_acc__t1ac__1();

}
foo ( a ) ;  
}
 
