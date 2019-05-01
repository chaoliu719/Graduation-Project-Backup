

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 7 "t3a1.acc"
struct A {int a; 



int b;



int d;
}; 
# 6 "t3a1.acc" 
# 8 "t3a1.acc" 
inline void __utac_acc__t3a1__1(void )  
# 32 "t3a1.c"
{



# 37 "t3a1.c"
{

#line 9 "t3a1.acc"

# 9 "t3a1.acc" 
# 9 "t3a1.acc" 
int b;
# 45 "t3a1.c"

}

# 49 "t3a1.c"

}
 
#line 12 "t3a1.acc"
inline void __utac_acc__t3a1__2(void )  
# 55 "t3a1.c"
{



# 60 "t3a1.c"
{

#line 13 "t3a1.acc"

# 12 "t3a1.acc" 
# 13 "t3a1.acc" 
# 13 "t3a1.acc" 
int c;
# 69 "t3a1.c"

}

# 73 "t3a1.c"

}
 
#line 16 "t3a1.acc"
extern int get_struct_B_size(); 
# 16 "t3a1.acc" 
# 18 "t3a1.acc" 
inline void __utac_acc__t3a1__3(void )  
# 82 "t3a1.c"
{



# 87 "t3a1.c"
{

#line 19 "t3a1.acc"
printf("aspect 1: call foo1 \n"); 
# 19 "t3a1.acc" 
# 21 "t3a1.acc" 
printf("size of struct A = %d\n", sizeof (struct A )); 
#line 23 "t3a1.acc"
printf("size of struct B = %d\n", get_struct_B_size()); 
# 97 "t3a1.c"

}

# 101 "t3a1.c"

}
 
 void __vtac_acc__t3a1__1(void) { 


/* __utac__introduce__begin@ */


#line 9 "t3a1.acc"

#line 9 "t3a1.acc"
int b;
/* __utac__introduce__end@   */
}

 void __vtac_acc__t3a1__2(void) { 


/* __utac__introduce__begin@ */


#line 13 "t3a1.acc"

#line 13 "t3a1.acc"
int c;
/* __utac__introduce__end@   */
}

 void __vtac_acc__t3a1__3(void) { 



#line 19 "t3a1.acc"
printf("aspect 1: call foo1 \n"); 
#line 21 "t3a1.acc"
printf("size of struct A = %d\n", sizeof (struct A )); 
#line 23 "t3a1.acc"
printf("size of struct B = %d\n", get_struct_B_size()); }


