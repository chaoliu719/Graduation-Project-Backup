#ifndef __RANGE_H_
#define __RANGE_H_
#include "helper.h"

/*
typedef struct range_t {
    int number;
    char *lo;
    char *hi;
    struct range_t *next;
} range_t;
*/

/* these functions manipulate range lists */
int add_range(range_t **ranges, char *lo, int size, 
		     int tracenum, int opnum);
void remove_range(range_t **ranges, char *lo);
void clear_ranges(range_t **ranges);


void clear_ranges_r();
void malloc_r(char *p, size_t size);
void free_r(char *p);
void realloc_r(char *oldp, size_t size, char *newp);

#endif /* __RANGE_H_ */