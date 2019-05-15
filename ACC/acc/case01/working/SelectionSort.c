
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


  void __utac_acc__TestAspect__1 (void);


  void __utac_acc__TestAspect__3 (void);


  void __utac_acc__TestAspect__2 (void);


# 1 "SelectionSort.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "SelectionSort.c" 
void sort(int x[], int n)  
# 45 "SelectionSort.c"
{



{
__utac_acc__TestAspect__1();

}

{
__utac_acc__TestAspect__3();

}

{
__utac_acc__TestAspect__2();

}

# 65 "SelectionSort.c"

}
 
#line 22 "SelectionSort.c"
int incr(int x)  
# 71 "SelectionSort.c"
{
# 73 "SelectionSort.c"
int retValue_acc;




# 79 "SelectionSort.c"
{

#line 24 "SelectionSort.c"
x = x + 1; 
#line 25 "SelectionSort.c"

# 86 "SelectionSort.c"
retValue_acc = x;
# 88 "SelectionSort.c"
return (int )retValue_acc;
 
# 91 "SelectionSort.c"

}

# 95 "SelectionSort.c"
return (int )retValue_acc;

# 98 "SelectionSort.c"

}
 
#line 28 "SelectionSort.c"
void printArray(int x[], int n)  
# 104 "SelectionSort.c"
{



# 109 "SelectionSort.c"
{

#line 29 "SelectionSort.c"

#line 29 "SelectionSort.c"
int i;
#line 31 "SelectionSort.c"
for(i = 0;i < n;i++) { { 
#line 32 "SelectionSort.c"
printf("%d ", x[i]); } } 
#line 34 "SelectionSort.c"
printf("\n"); 
# 122 "SelectionSort.c"

}

# 126 "SelectionSort.c"

}
 
static inline int  incr__SelectionSort__0 (int x  )  ; 

#line 38 "SelectionSort.c"
int main(int argc, char *argv[])  
# 134 "SelectionSort.c"
{
# 136 "SelectionSort.c"
int retValue_acc;




# 142 "SelectionSort.c"
{

#line 39 "SelectionSort.c"

#line 39 "SelectionSort.c"
int x[5] = {3,5,2,1,4};
#line 40 "SelectionSort.c"

#line 40 "SelectionSort.c"
int a;
#line 43 "SelectionSort.c"
printf("initial array:\n"); 
#line 44 "SelectionSort.c"
printArray(x, 5); 
#line 46 "SelectionSort.c"
sort(x, 5); 
#line 47 "SelectionSort.c"
printf("new array:\n"); 
#line 48 "SelectionSort.c"
printArray(x, 5); 
#line 50 "SelectionSort.c"
a = 8; 
#line 51 "SelectionSort.c"
printf("init value: %d\n", a); 
#line 52 "SelectionSort.c"
a = incr__SelectionSort__0(a); 
#line 53 "SelectionSort.c"
printf("new value: %d\n", a); 
#line 55 "SelectionSort.c"

# 173 "SelectionSort.c"
retValue_acc = 0;
# 175 "SelectionSort.c"
return (int )retValue_acc;
 
# 178 "SelectionSort.c"

}

# 182 "SelectionSort.c"
return (int )retValue_acc;

# 185 "SelectionSort.c"

}
  void __utac_acc__TestAspect__4 (void);

  void __utac_acc__TestAspect__5 (void);

  int __utac_acc__TestAspect__6 (void);

  int incr (int x  ) ; 

# 196 "SelectionSort.c"
static inline int  incr__SelectionSort__0 (int x  ) {

# 199 "SelectionSort.c"
int retValue_acc;

{
__utac_acc__TestAspect__4();

}

{
retValue_acc = __utac_acc__TestAspect__6();

}

{
__utac_acc__TestAspect__5();

}

# 217 "SelectionSort.c"
return (int )retValue_acc;
}
 
