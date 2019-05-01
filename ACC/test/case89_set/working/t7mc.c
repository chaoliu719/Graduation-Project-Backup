
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


#line 1 "t7mc.mc"
int t; 
#line 2 "t7mc.mc"
int *a = (&t); 
static inline int*  a__t7mc__1 (int** __utac__para0 ,int* __utac__para1  )  ; 

static inline int*  a__t7mc__0 (int** __utac__para0 ,int* __utac__para1  )  ; 

#line 4 "t7mc.mc"
int main()  
# 41 "t7mc.c"
{
# 43 "t7mc.c"
int retValue_acc;




# 49 "t7mc.c"
{

#line 5 "t7mc.mc"

#line 5 "t7mc.mc"
int **ap;
#line 6 "t7mc.mc"

#line 6 "t7mc.mc"
int *a2;
#line 7 "t7mc.mc"

#line 7 "t7mc.mc"
int b;
#line 8 "t7mc.mc"
(*a) = 4; 
#line 9 "t7mc.mc"
ap = (&a); 
#line 10 "t7mc.mc"
printf("should match set(int *a) \n"); 
#line 11 "t7mc.mc"
a__t7mc__0(&a,((&b))); 
#line 12 "t7mc.mc"
printf("should match set(int *a) \n"); 
#line 13 "t7mc.mc"
a__t7mc__1(&a,(a2)); 
#line 14 "t7mc.mc"

# 78 "t7mc.c"
retValue_acc = 0;
# 80 "t7mc.c"
return (int )retValue_acc;
 
# 83 "t7mc.c"

}

# 87 "t7mc.c"
return (int )retValue_acc;

# 90 "t7mc.c"

}
  void __utac_acc__t7a1__1 (void);


# 96 "t7mc.c"
static inline int*  a__t7mc__1 (int** __utac__para0 ,int* __utac__para1  ) {

# 99 "t7mc.c"
int* retValue_acc;

{
__utac_acc__t7a1__1();

}

# 107 "t7mc.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

# 110 "t7mc.c"
return (int* )retValue_acc;
}
  void __utac_acc__t7a1__1 (void);


# 116 "t7mc.c"
static inline int*  a__t7mc__0 (int** __utac__para0 ,int* __utac__para1  ) {

# 119 "t7mc.c"
int* retValue_acc;

{
__utac_acc__t7a1__1();

}

# 127 "t7mc.c"
retValue_acc = (*__utac__para0 = __utac__para1) ; 

# 130 "t7mc.c"
return (int* )retValue_acc;
}
 
