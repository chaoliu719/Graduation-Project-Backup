
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

extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) ; 
extern void __utac__exception__cf_handler_free(void * exception);
extern void __utac__exception__cf_handler_reset(void * exception) ; 
extern void * __utac__error_stack_mgt(void * env , int mode, int count) ;

# 1 "t1ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1ac_ac.c" 
# 10 "t1ac_ac.c" 
 inline int __utac_acc__t1ac__1(int x) {



#line 11 "t1ac_ac.c"
printf("aspect 1\n"); 
#line 12 "t1ac_ac.c"
if (x < 3){
{ 
#line 13 "t1ac_ac.c"
printf("a < 3\n"); 
#line 14 "t1ac_ac.c"
return 33; } }}

 


#line 19 "t1ac_ac.c"
 inline int __utac_acc__t1ac__2(int x , struct JoinPoint *  this  )  {
 


#line 20 "t1ac_ac.c"
printf("aspect 2\n"); 
#line 21 "t1ac_ac.c"
if (x < 9){
{ 
#line 22 "t1ac_ac.c"
printf("a < 9\n"); 
#line 23 "t1ac_ac.c"
return 99; } }else{
{ 
#line 25 "t1ac_ac.c"
return (** (int **)(this->fp(this)) ) ; } }}

 


#line 30 "t1ac_ac.c"
 inline int __utac_acc__t1ac__3(int x , struct JoinPoint *  this  )  {
 


#line 31 "t1ac_ac.c"
printf("aspect 3\n"); 
#line 32 "t1ac_ac.c"
if (x < 20){
{ 
#line 33 "t1ac_ac.c"
printf("a < 20\n"); 
#line 34 "t1ac_ac.c"
return 2020; } }else{
{ 
#line 36 "t1ac_ac.c"
return (** (int **)(this->fp(this)) ) ; } }}

 

 int __utac__cflow_t1ac_0 (int x, int y) { 
 static int level = 0; 
 switch(x) { 
 case 1: level ++; break ; 
 case 2: level -- ; break; 
 case 3: break; 
 case 4: level = y ; 
 } 
 return level ; 
 } 


