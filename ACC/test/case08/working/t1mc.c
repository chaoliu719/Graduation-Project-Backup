
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


  int __utac_acc__t1ac__1 (int x  );


# 1 "t1mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1mc.c" 
# 1 "SelectionSort.c" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 3 "SelectionSort.c" 
int incr(int x)  
# 43 "t1mc.c"
{
# 45 "t1mc.c"
int retValue_acc;




{
int __utac__ad__arg1 = x ; 
retValue_acc = __utac_acc__t1ac__1(__utac__ad__arg1 );

}

# 57 "t1mc.c"
return (int )retValue_acc;

# 60 "t1mc.c"

}
 
#line 11 "SelectionSort.c"
int main(int argc, char *argv[])  
# 66 "t1mc.c"
{
# 68 "t1mc.c"
int retValue_acc;




# 74 "t1mc.c"
{

#line 12 "SelectionSort.c"

#line 12 "SelectionSort.c"
int p;
#line 13 "SelectionSort.c"
printf("before call incr \n"); 
#line 15 "SelectionSort.c"
p = incr(99); 
#line 17 "SelectionSort.c"
printf("after call incr p = %d \n", p); 
#line 19 "SelectionSort.c"

# 89 "t1mc.c"
retValue_acc = 0;
# 91 "t1mc.c"
return (int )retValue_acc;
 
# 94 "t1mc.c"

}

# 98 "t1mc.c"
return (int )retValue_acc;

# 101 "t1mc.c"

}
 
