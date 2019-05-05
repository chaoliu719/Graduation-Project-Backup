
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


  void __utac_acc__TestAspect__1 (short x ,int y  );


# 1 "SelectionSort.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "SelectionSort.c" 
void foo3(short p1, int p2)  
# 39 "SelectionSort.c"
{



{
short __utac__ad__arg1 = p1 ; 
int __utac__ad__arg2 = p2 ; 
__utac_acc__TestAspect__1(__utac__ad__arg1 ,__utac__ad__arg2 );

}

# 51 "SelectionSort.c"
{

#line 3 "SelectionSort.c"
printf("here is foo3, short = %d, int = %d\n", p1, p2); 
#line 4 "SelectionSort.c"
p2 - 1;return ; 
 
# 59 "SelectionSort.c"

}

# 63 "SelectionSort.c"

}
 
#line 7 "SelectionSort.c"
void foo4(int c)  
# 69 "SelectionSort.c"
{



# 74 "SelectionSort.c"
{

#line 8 "SelectionSort.c"
printf("here is foo4, c = %d\n", c); 
# 79 "SelectionSort.c"

}

# 83 "SelectionSort.c"

}
 
#line 11 "SelectionSort.c"
int foo5(int d, int e)  
# 89 "SelectionSort.c"
{
# 91 "SelectionSort.c"
int retValue_acc;




# 97 "SelectionSort.c"
{

#line 12 "SelectionSort.c"
printf("here is foo5, input = %d , %d\n", d, e); 
#line 14 "SelectionSort.c"

# 104 "SelectionSort.c"
retValue_acc = d + e;
# 106 "SelectionSort.c"
return (int )retValue_acc;
 
# 109 "SelectionSort.c"

}

# 113 "SelectionSort.c"
return (int )retValue_acc;

# 116 "SelectionSort.c"

}
 
static inline void  foo3__SelectionSort__0 (short p1 ,int p2  )  ; 

#line 18 "SelectionSort.c"
int main()  
# 124 "SelectionSort.c"
{
# 126 "SelectionSort.c"
int retValue_acc;




# 132 "SelectionSort.c"
{

#line 19 "SelectionSort.c"

#line 19 "SelectionSort.c"
int pp;
#line 20 "SelectionSort.c"
pp = 99; 
#line 22 "SelectionSort.c"
foo3__SelectionSort__0(2, pp); 
#line 25 "SelectionSort.c"

# 145 "SelectionSort.c"
retValue_acc = 0;
# 147 "SelectionSort.c"
return (int )retValue_acc;
 
# 150 "SelectionSort.c"

}

# 154 "SelectionSort.c"
return (int )retValue_acc;

# 157 "SelectionSort.c"

}
  void __utac_acc__TestAspect__2 (short x ,int y  );

  void foo3 (short p1 ,int p2  ) ; 

# 164 "SelectionSort.c"
static inline void  foo3__SelectionSort__0 (short p1 ,int p2  ) {

{
short __utac__ad__arg1 = p1 ; 
int __utac__ad__arg2 = p2 ; 
__utac_acc__TestAspect__2(__utac__ad__arg1 ,__utac__ad__arg2 );

}
foo3 ( p1 , p2 ) ;  
}
 
