#include "dijkstra_advice.h"

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

/* we do not want to print all function name in call stack */
static char *func_black_list[] = {
    "free",
    "malloc",
    "qcount",
    "enqueue",
    "dequeue",
    "fscanf"
};

#define BLACK_LIST_LEN (sizeof(func_black_list) / sizeof(char *))

static int not_black_list_func(const char * func_name)
{
    assert(func_name);

    int i;
    for (i = 0; i < BLACK_LIST_LEN; i++)
    {
        if (strncmp(func_name, func_black_list[i], MAX_FUNC_NAME_LEN) == 0)
        {
            return 0;
        }
    }

    return 1;
}

static struct profiling * head;
static struct profiling * tail;
static int indent = 0;      // for printing call stack
static int interval = 2;    // for printing call stack
static FILE *output_fp = NULL;

static void error()
{
    exit(6);
}

static struct profiling *malloc_profiling(const char *func_name)
{
    int rst;
    struct profiling * p = (struct profiling *) malloc(sizeof(struct profiling));
    if (!p)
        error();
    strncpy(p->func_name, func_name, MAX_FUNC_NAME_LEN);
    rst = gettimeofday(&(p->total_time), NULL);
    if (rst == -1)
        error();
    p->finish = 0;
    p->count = 1;
    p->next = NULL;

    return p;
}

static void free_list(struct profiling *print_list)
{
    assert(print_list);
    
    struct profiling *curr = NULL;
    struct profiling *next = NULL;
    for(curr = print_list; curr != NULL; curr = next)
    {
        next = curr->next;
        free(curr);
    }
}

static struct profiling *find_last_unfinish_profiling(const char * func_name)
{
    assert(func_name);

    struct profiling *rst = NULL;
    struct profiling *iter = head;
    for (iter = head; iter != NULL; iter = iter->next)
    {
        if (strncmp(func_name, iter->func_name, MAX_FUNC_NAME_LEN) == 0 &&
            iter->finish == 0)
            rst = iter;
    }
    return rst;
}

static struct profiling *find_next_profiling(struct profiling * node, const char * func_name)
{
    assert(node);
    assert(func_name);

    struct profiling *iter;
    for (iter = node->next; iter != NULL; iter = iter->next)
    {
        if (strncmp(func_name, iter->func_name, MAX_FUNC_NAME_LEN) == 0)
            return iter;
    }
    return NULL;
}

static struct profiling *push_back(const char *func_name)
{
    struct profiling *new_p = malloc_profiling(func_name);
    tail->next = new_p;
    tail = new_p;
    return new_p;
};

static int max_file_name_len(struct profiling *print_list)
{
    assert(print_list);

    int max = -1;
    int tmp;
    struct profiling *iter = print_list->next;
    for(iter = print_list->next; iter != NULL; iter = iter->next)
    {
        tmp = strlen(iter->func_name);
        max = max < tmp ? tmp : max;
    }

    assert(max > 0);
    return max;
}

static void print_profiling(struct profiling *print_list)
{
    assert(print_list);

    struct profiling *iter = print_list->next;
    for(iter = print_list->next; iter != NULL; iter = iter->next)
    {
        fprintf(output_fp, "%*s: call %5d times, %10.3fms total\n", 
                max_file_name_len(print_list), iter->func_name,
                iter->count, 
                iter->total_time.tv_sec * 1000 + (double) (iter->total_time.tv_usec) / 1000);
    }
}

static void prompt(int num)
{
    assert (num >= 0);

    if (num < 2)
        return;

    while(num-->2) fprintf(output_fp, " ");
    fprintf(output_fp, "|-");
}

static void timeval_sub(struct timeval *start, struct timeval *end)
{
    assert(start);
    assert(end);

    long int udiff = end->tv_usec - start->tv_usec;
    start->tv_usec = udiff < 0 ? 1000000 + udiff : udiff;
    long int diff = end->tv_sec - start->tv_sec;
    start->tv_sec = udiff < 0 ? diff - 1 : diff;
}

static void timeval_add(struct timeval *a, struct timeval *b)
{
    assert(a);
    assert(b);

    long int sum = a->tv_usec + b->tv_usec;
    a->tv_usec = sum % 1000000;
    a->tv_sec = a->tv_sec + b->tv_sec + sum / 1000000;
}

void __before_call(const char *func_name)
{
    assert(func_name);

    /* function call stack */
    if (not_black_list_func(func_name))
    {
        prompt(indent);
        fprintf(output_fp, "%s()\n", func_name);
        indent += interval;
    }

    push_back(func_name);
}

void __after_call(const char *func_name)
{
    assert(func_name);

    /* function call stack */
    if (not_black_list_func(func_name))
    {
        indent -= interval;
    }

    int rst;
    struct timeval end_time;
    struct profiling *this_func;
    rst = gettimeofday(&end_time, NULL);
    if (rst == -1)
        error();

    this_func = find_last_unfinish_profiling(func_name);
    if (!this_func)
        error();

    this_func->finish = 1;
    /* total_time = end_time - total_time(start_time) */
    timeval_sub(&(this_func->total_time), &end_time);
}

void __init_head()
{
    head = malloc_profiling("");
    head->finish = 1;
    tail = head;

    output_fp = fopen("output", "w+");

    if (!output_fp)
        error();

    fprintf(output_fp, "\n-----------Call Stack-----------\n");
}

void __print_profiling()
{
    fprintf(output_fp, "\n-----------Profiling-----------\n");
    struct profiling * print_list = malloc_profiling("");
    struct profiling * print_iter = print_list;
    struct profiling * tmp = NULL;
    struct profiling * iter = NULL;

    for (iter = head->next; iter != NULL;)
    {
        tmp = find_next_profiling(iter, iter->func_name);
        if (tmp)
        {
            assert(tmp->finish);

            tmp->count += iter->count;
            timeval_add(&(tmp->total_time), &(iter->total_time));

            /* delete iter */
            tmp = iter;
            iter = iter->next;
            free(tmp);
        }
        else
        {
            print_iter->next = iter;
            print_iter = iter;
            tmp = iter;
            iter = iter->next;
            tmp->next = NULL;
        }
    }

    print_profiling(print_list);
    free_list(print_list);
    free(head);

    if (output_fp) fclose(output_fp);
}