#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "range.h"
#include "helper.h"
#include "memlib.h"

extern int verbose;        /* global flag for verbose output */
extern int errors;  /* number of errs found when running student malloc */
extern char msg[MAXLINE];      /* for whenever we need to compose an error message */


static void print_payloads(range_t **ranges, int center)
{
    char print = 'y';
    range_t *p;

    printf("Print debug info? [y/N]: ");
    scanf("%c", &print);
    if (print == 'y')
    {
        for (p = *ranges;  p != NULL;  p = p->next) {
            if (p->number < center + 3 && p->number > center - 4)
            printf("Payload %d (%ld:%ld) size:[%ld]\n", 
                    p->number, 
                    p->lo - (char *)mem_heap_lo() - ALIGNMENT, 
                    p->hi - (char *)mem_heap_lo(),
                    p->hi - p->lo + 1);
        }
    }
}


/*
 * add_range - As directed by request opnum in trace tracenum,
 *     we've just called the student's mm_malloc to allocate a block of 
 *     size bytes at addr lo. After checking the block for correctness,
 *     we create a range struct for this block and add it to the range list. 
 */
int add_range(range_t **ranges, char *lo, int size, 
		     int tracenum, int opnum)
{
    char *hi = lo + size - 1;
    range_t *p;
    char msg[MAXLINE];

    assert(size > 0);

    /* Payload addresses must be ALIGNMENT-byte aligned */
    if (!IS_ALIGNED(lo)) {
	sprintf(msg, "Payload %d'saddress (%p) not aligned to %d bytes", 
		opnum, lo, ALIGNMENT);
        malloc_error(tracenum, opnum, msg);
        return 0;
    }

    /* The payload must lie within the extent of the heap */
    if ((lo < (char *)mem_heap_lo()) || (lo > (char *)mem_heap_hi()) || 
	(hi < (char *)mem_heap_lo()) || (hi > (char *)mem_heap_hi())) {
        sprintf(msg, "Payload %d (%p:%p) lies outside heap (%p:%p)",
            opnum, lo, hi, mem_heap_lo(), mem_heap_hi());
        malloc_error(tracenum, opnum, msg);
        print_payloads(ranges, opnum);
        return 0;
    }

    /* The payload must not overlap any other payloads */
    for (p = *ranges;  p != NULL;  p = p->next) {
        if ((lo >= p->lo && lo <= p-> hi) ||
            (hi >= p->lo && hi <= p->hi)) {
	    sprintf(msg, "Payload %d (%ld:%ld) overlaps payload %d (%ld:%ld)\n",
		    opnum, lo - (char *)mem_heap_lo() - ALIGNMENT, hi - (char *)mem_heap_lo() - ALIGNMENT,
            p->number, p->lo - (char *)mem_heap_lo() - ALIGNMENT, p->hi - (char *)mem_heap_lo() - ALIGNMENT);
	    malloc_error(tracenum, opnum, msg);
        print_payloads(ranges, p->number);
	    return 0;
        }
    }

    /* 
     * Everything looks OK, so remember the extent of this block 
     * by creating a range struct and adding it the range list.
     */
    if ((p = (range_t *)malloc(sizeof(range_t))) == NULL)
	unix_error("malloc error in add_range");
    p->number = opnum;
    p->next = *ranges;
    p->lo = lo;
    p->hi = hi;
    *ranges = p;
    return 1;
}

/* 
 * remove_range - Free the range record of block whose payload starts at lo 
 */
void remove_range(range_t **ranges, char *lo)
{
    range_t *p;
    range_t **prevpp = ranges;
    int size;

    for (p = *ranges;  p != NULL; p = p->next) {
        if (p->lo == lo) {
	    *prevpp = p->next;
            size = p->hi - p->lo + 1;
            free(p);
            break;
        }
        prevpp = &(p->next);
    }
}

/*
 * clear_ranges - free all of the range records for a trace 
 */
void clear_ranges(range_t **ranges)
{
    range_t *p;
    range_t *pnext;

    for (p = *ranges;  p != NULL;  p = pnext) {
        pnext = p->next;
        free(p);
    }
    *ranges = NULL;

}
