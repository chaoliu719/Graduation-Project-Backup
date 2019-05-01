
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


#line 2 "t7mc.mc"
int *a; 
static inline int*  a__t7mc__0 (int* __utac__para0  )  ; 

#line 4 "t7mc.mc"
int main()  
# 37 "t7mc.c"
{
# 39 "t7mc.c"
int retValue_acc;




# 45 "t7mc.c"
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
a = (&b); 
#line 9 "t7mc.mc"
ap = (&a); 
#line 10 "t7mc.mc"
(*a) = 3; 
#line 11 "t7mc.mc"
b = (*a); 
#line 12 "t7mc.mc"
printf("should match get(int *a) \n"); 
#line 13 "t7mc.mc"
a2 = a__t7mc__0(a  ); 
#line 14 "t7mc.mc"

# 74 "t7mc.c"
retValue_acc = 0;
# 76 "t7mc.c"
return (int )retValue_acc;
 
# 79 "t7mc.c"

}

# 83 "t7mc.c"
return (int )retValue_acc;

# 86 "t7mc.c"

}
  void __utac_acc__t7a1__1 (void);


# 92 "t7mc.c"
static inline int*  a__t7mc__0 (int* __utac__para0  ) {

# 95 "t7mc.c"
int* retValue_acc;

{
__utac_acc__t7a1__1();

}

# 103 "t7mc.c"
retValue_acc = __utac__para0 ; 

# 106 "t7mc.c"
return (int* )retValue_acc;
}
 
