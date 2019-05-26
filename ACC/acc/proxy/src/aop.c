#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "aspect.h"

before(): execution($ main(...)) {
  Get_main_thread();
}

void around(void *connfd_p): execution($ doit(...)) && args(connfd_p) {
  Create_thread(connfd_p);
  proceed();
  Free_pointer(connfd_p);
}