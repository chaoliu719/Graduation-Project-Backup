
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


  void __utac_acc__TestAspect__4 (void);


  void __utac_acc__TestAspect__6 (void);


# 1 "SelectionSort.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 2 "SelectionSort.c" 
void sort(int n)  
# 48 "SelectionSort.c"
{



{
__utac_acc__TestAspect__1();

}

{
__utac_acc__TestAspect__3();

}

{
__utac_acc__TestAspect__4();

}

{
__utac_acc__TestAspect__6();

}

# 73 "SelectionSort.c"
{

#line 4 "SelectionSort.c"
printf("begin sorting\n"); 
#line 5 "SelectionSort.c"
printf("finish sorting\n"); 
# 80 "SelectionSort.c"

}

# 84 "SelectionSort.c"

}
 
  void __utac_acc__TestAspect__4 (void);


  void __utac_acc__TestAspect__6 (void);


static inline void  sort__SelectionSort__0 (int n  )  ; 

#line 9 "SelectionSort.c"
int main(int argc, char *argv[])  
# 98 "SelectionSort.c"
{
# 100 "SelectionSort.c"
int retValue_acc;




{
__utac_acc__TestAspect__4();

}

{
__utac_acc__TestAspect__6();

}

# 116 "SelectionSort.c"
{

#line 10 "SelectionSort.c"
printf("calling sort in main \n"); 
#line 11 "SelectionSort.c"
sort__SelectionSort__0(5); 
#line 12 "SelectionSort.c"
printf("after calling sort in main\n"); 
#line 13 "SelectionSort.c"

# 127 "SelectionSort.c"
retValue_acc = 0;
# 129 "SelectionSort.c"
return (int )retValue_acc;
 
# 132 "SelectionSort.c"

}

# 136 "SelectionSort.c"
return (int )retValue_acc;

# 139 "SelectionSort.c"

}
  void __utac_acc__TestAspect__4 (void);

  void __utac_acc__TestAspect__6 (void);

  void sort (int n  ) ; 

# 148 "SelectionSort.c"
static inline void  sort__SelectionSort__0 (int n  ) {

{
__utac_acc__TestAspect__4();

}

{
__utac_acc__TestAspect__6();

}
sort ( n ) ;  
}
 
