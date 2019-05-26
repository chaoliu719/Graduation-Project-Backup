#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "csapp.h"
#include "proxy.h"

static pthread_t main_thread; // never be "init" process

void Get_main_thread()
{
    main_thread = pthread_self();
}

void Create_thread(void *connfd_p)
{
    if (pthread_equal(pthread_self(), main_thread))
    {
        pthread_t tid;
        int *cp_connfd = (int *)malloc(sizeof(int *));
        *cp_connfd = *(int *)connfd_p;
        Pthread_create(&tid, NULL,
                       (void *(*)(void *))doit,
                       (void *)cp_connfd);
        *(int *)connfd_p = -1;
    }
    else
    {
        Pthread_detach(pthread_self());
    }
}

void Free_pointer(void *connfd_p)
{
    if (!pthread_equal(pthread_self(), main_thread))
    {
        free(connfd_p);
    }
}