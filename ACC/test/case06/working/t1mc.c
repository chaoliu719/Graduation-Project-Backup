
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


  void __utac_acc__t1ac__1 (void);


  void __utac_acc__t1ac__1 (void);


  void __utac_acc__t1ac__1 (void);


# 1 "t1mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1mc.c" 
int fct(int a)  
# 45 "t1mc.c"
{
# 47 "t1mc.c"
int retValue_acc;




# 53 "t1mc.c"
{

#line 3 "t1mc.c"
printf("In `fct'\n"); 
#line 5 "t1mc.c"
if (a > 3){
{ 
#line 6 "t1mc.c"

# 63 "t1mc.c"
retValue_acc = 100;
{
__utac_acc__t1ac__1();

}

# 70 "t1mc.c"
return (int )retValue_acc;
 } }else{
{ 
#line 8 "t1mc.c"

# 76 "t1mc.c"
retValue_acc = 9;
{
__utac_acc__t1ac__1();

}

# 83 "t1mc.c"
return (int )retValue_acc;
 } }
# 86 "t1mc.c"

}

{
__utac_acc__t1ac__1();

}

# 95 "t1mc.c"
return (int )retValue_acc;

# 98 "t1mc.c"

}
 
  void __utac_acc__t1ac__2 (void);


  void __utac_acc__t1ac__2 (void);


#line 12 "t1mc.c"
void fct2(int a)  
# 110 "t1mc.c"
{



# 115 "t1mc.c"
{

#line 13 "t1mc.c"
printf("In fct2\n"); 
#line 14 "t1mc.c"

{
__utac_acc__t1ac__2();

}
return ; 
 
# 128 "t1mc.c"

}

{
__utac_acc__t1ac__2();

}

# 137 "t1mc.c"

}
 
  void __utac_acc__t1ac__3 (void);


#line 17 "t1mc.c"
void fct3(int a)  
# 146 "t1mc.c"
{



# 151 "t1mc.c"
{

#line 18 "t1mc.c"
printf("in fct3\n"); 
# 156 "t1mc.c"

}

{
__utac_acc__t1ac__3();

}

# 165 "t1mc.c"

}
 
#line 22 "t1mc.c"
int main()  
# 171 "t1mc.c"
{
# 173 "t1mc.c"
int retValue_acc;




# 179 "t1mc.c"
{

#line 23 "t1mc.c"

#line 23 "t1mc.c"
int i;
#line 25 "t1mc.c"
i = fct(8); 
#line 26 "t1mc.c"
printf("Result from `fct' %i\n", i); 
#line 28 "t1mc.c"
fct2(2); 
#line 30 "t1mc.c"
fct3(24); 
#line 32 "t1mc.c"

# 196 "t1mc.c"
retValue_acc = 0;
# 198 "t1mc.c"
return (int )retValue_acc;
 
# 201 "t1mc.c"

}

# 205 "t1mc.c"
return (int )retValue_acc;

# 208 "t1mc.c"

}
 
