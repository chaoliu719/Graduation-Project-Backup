

struct JoinPoint {void **(*fp)(struct JoinPoint *); void **args; int argsCount; const char **argsType; void *(*arg)(int , struct JoinPoint *); const char *(*argType)(int , struct JoinPoint *); void **retValue; const char *retType; const char *funcName; const char *targetName; const char *fileName; const char *kind; void *excep_return; 
}; 

struct __UTAC__EXCEPTION {void *jumpbuf; unsigned long long int prtValue; int pops; struct __UTAC__CFLOW_FUNC {int (*func)(int , int ); int val; struct __UTAC__CFLOW_FUNC *next; 
}*cflowfuncs; 
}; 

extern void __utac__exception__cf_handler_set(void *exception, int (*cflow_func)(int , int ), int val); 

extern void __utac__exception__cf_handler_free(void *exception); 

extern void __utac__exception__cf_handler_reset(void *exception); 

extern void *__utac__error_stack_mgt(void *env, int mode, int count); 
#line 6 "t3a2.acc"
struct B {int a1; int a2; int a3; 



int b;



int e;
}; 
# 5 "t3a2.acc" 
# 9 "t3a2.acc" 
int get_struct_B_size()  
# 32 "t3a2.c"
{
# 34 "t3a2.c"
int retValue_acc;




# 40 "t3a2.c"
{

#line 10 "t3a2.acc"

# 45 "t3a2.c"
retValue_acc = sizeof (struct B );
# 47 "t3a2.c"
return (int )retValue_acc;
 
# 50 "t3a2.c"

}

# 54 "t3a2.c"
return (int )retValue_acc;

# 57 "t3a2.c"

}
 
# 10 "t3a2.acc" 
# 14 "t3a2.acc" 
inline void __utac_acc__t3a2__1(void )  
# 64 "t3a2.c"
{



# 69 "t3a2.c"
{

#line 15 "t3a2.acc"

# 15 "t3a2.acc" 
# 15 "t3a2.acc" 
int d;
# 77 "t3a2.c"

}

# 81 "t3a2.c"

}
 
#line 18 "t3a2.acc"
inline void __utac_acc__t3a2__2(void )  
# 87 "t3a2.c"
{



# 92 "t3a2.c"
{

#line 20 "t3a2.acc"

# 18 "t3a2.acc" 
# 20 "t3a2.acc" 
# 20 "t3a2.acc" 
int e;
# 101 "t3a2.c"

}

# 105 "t3a2.c"

}
 
 void __vtac_acc__t3a2__1(void) { 


/* __utac__introduce__begin@ */


#line 15 "t3a2.acc"

#line 15 "t3a2.acc"
int d;
/* __utac__introduce__end@   */
}

 void __vtac_acc__t3a2__2(void) { 


/* __utac__introduce__begin@ */


#line 20 "t3a2.acc"

#line 20 "t3a2.acc"
int e;
/* __utac__introduce__end@   */
}


