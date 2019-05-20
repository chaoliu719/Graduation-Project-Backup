#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "dijkstra_advice.h"

/*
 * acc cannot print function which called in dijkstra.c but defined in other file
 * because acc can not capture function name while using "call" pointcut
 * that means we can only weave out function into function call but cannot print the function's name!!
 * so we can only use "execution" pointcut to capture function which defined and called in same file(like dijkstra.c)
*/

static void join_on_entry(const char * name)
{
  if (strncmp("main", name, 4) == 0)
  {
    __init_head();
  }
  else
  {
    __before_call(name);
  }
}

static void join_on_exit(const char * name)
{
  if (strncmp("main", name, 4) == 0)
  {
    __print_profiling();
  }
  else
  {
    __after_call(name);
  }
}

before(): execution($ $(...)) && infile("dijkstra.c") {
    join_on_entry(this->funcName);
}

after(): execution($ $(...)) && infile("dijkstra.c") {
    join_on_exit(this->funcName);
}


