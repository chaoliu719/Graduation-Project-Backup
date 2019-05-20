
#ifndef __DIJKSTRA_DEVICE_H
#define __DIJKSTRA_DEVICE_H

#include <sys/time.h>   
#include <unistd.h>

#define MAX_FUNC_NAME_LEN 32
#define MAX_FILE_NAME_LEN 32
struct profiling {
    char func_name[MAX_FUNC_NAME_LEN];
    struct timeval total_time;
    int finish;
    int count;
    struct profiling * next;
};

void __before_call(const char *func_name);
void __after_call(const char *func_name);
void __init_head();
void __print_profiling();

#endif /* __DIJKSTRA_DEVICE_H */