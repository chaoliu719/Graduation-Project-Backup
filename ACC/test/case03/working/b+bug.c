
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


  void __utac_acc__bAspect__1 (void);


  void __utac_acc__bAspect__2 (void);


  void __utac_acc__bAspect__2 (void);


  void __utac_acc__bAspect__2 (void);


# 1 "b+bug.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "b+bug.c" 
# 11 "b+bug.c" 
int fct(int a)  
# 49 "b+bug.c"
{
# 51 "b+bug.c"
int retValue_acc;




{
__utac_acc__bAspect__1();

}

# 62 "b+bug.c"
{

#line 13 "b+bug.c"
printf("In `fct'\n"); 
#line 15 "b+bug.c"
if (a < 10){

# 70 "b+bug.c"
retValue_acc = 100;
{
__utac_acc__bAspect__2();

}

# 77 "b+bug.c"
return (int )retValue_acc;
 }else{

# 81 "b+bug.c"
retValue_acc = 400;
{
__utac_acc__bAspect__2();

}

# 88 "b+bug.c"
return (int )retValue_acc;
 }
# 91 "b+bug.c"

}

{
__utac_acc__bAspect__2();

}

# 100 "b+bug.c"
return (int )retValue_acc;

# 103 "b+bug.c"

}
 
static inline int  fct__b_bug__0 (int a  )  ; 

#line 21 "b+bug.c"
int main()  
# 111 "b+bug.c"
{
# 113 "b+bug.c"
int retValue_acc;




# 119 "b+bug.c"
{

#line 22 "b+bug.c"

#line 22 "b+bug.c"
int i;
#line 24 "b+bug.c"
i = fct__b_bug__0(8); 
#line 25 "b+bug.c"
printf("Result from `fct' %i\n", i); 
#line 26 "b+bug.c"

# 132 "b+bug.c"
retValue_acc = 0;
# 134 "b+bug.c"
return (int )retValue_acc;
 
# 137 "b+bug.c"

}

# 141 "b+bug.c"
return (int )retValue_acc;

# 144 "b+bug.c"

}
  void __utac_acc__bAspect__3 (void);

  int fct (int a  ) ; 

# 151 "b+bug.c"
static inline int  fct__b_bug__0 (int a  ) {

# 154 "b+bug.c"
int retValue_acc;

{
__utac_acc__bAspect__3();

}

# 162 "b+bug.c"
retValue_acc = fct ( a ) ;  

# 165 "b+bug.c"
return (int )retValue_acc;
}
 
