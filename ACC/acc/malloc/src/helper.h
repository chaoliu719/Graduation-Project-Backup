#ifndef __HELPER_H_
#define __HELPER_H_



#include "config.h"

/**********************
 * Constants and macros
 **********************/

/* Misc */
#define MAXLINE     1024 /* max string size */
#define HDRLINES       4 /* number of header lines in a trace file */
#define LINENUM(i) (i+5) /* cnvt trace request nums to linenums (origin 1) */

/* Returns true if p is ALIGNMENT-byte aligned */
#define IS_ALIGNED(p)  ((((unsigned long int)(p)) % ALIGNMENT) == 0)

/****************************** 
 * The key compound data types 
 *****************************/

/* Records the extent of each block's payload */
typedef struct range_t {
    int number;            /* lines in file */
    char *lo;              /* low payload address */
    char *hi;              /* high payload address */
    struct range_t *next;  /* next list element */
} range_t;


/* Characterizes a single trace operation (allocator request) */
typedef struct {
    enum {ALLOC, FREE, REALLOC} type; /* type of request */
    int index;                        /* index for free() to use later */
    int size;                         /* byte size of alloc/realloc request */
} traceop_t;

/* Holds the information for one trace file*/
typedef struct {
    int sugg_heapsize;   /* suggested heap size (unused) */
    int num_ids;         /* number of alloc/realloc ids */
    int num_ops;         /* number of distinct requests */
    int weight;          /* weight for this trace (unused) */
    traceop_t *ops;      /* array of requests */
    char **blocks;       /* array of ptrs returned by malloc/realloc... */
    size_t *block_sizes; /* ... and a corresponding array of payload sizes */
} trace_t;

/* 
 * Holds the params to the xxx_speed functions, which are timed by fcyc. 
 * This struct is necessary because fcyc accepts only a pointer array
 * as input.
 */
typedef struct {
    trace_t *trace;  
    range_t *ranges;
} speed_t;

/* Summarizes the important stats for some malloc function on some trace */
typedef struct {
    /* defined for both libc malloc and student malloc package (mm.c) */
    double ops;      /* number of ops (malloc/free/realloc) in the trace */
    int valid;       /* was the trace processed correctly by the allocator? */
    double secs;     /* number of secs needed to run the trace */

    /* defined only for the student malloc package */
    double util;     /* space utilization for this trace (always 0 for libc) */

    /* Note: secs and util are only defined if valid is true */
} stats_t; 


/* Various helper routines */
void printresults(int n, stats_t *stats);
void usage(void);
void unix_error(char *msg);
void malloc_error(int tracenum, int opnum, char *msg);
void app_error(char *msg);

#endif /* __HELPER_H_ */