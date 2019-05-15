#include <stdio.h>
#include <math.h>

static size_t lines = 0;
static size_t compare_cnt = 0;


before(): execution($ compare(...)){
    compare_cnt++;
}


before(size_t nitems): call(void qsort(...)) && args($, nitems, ...){
    lines = nitems;

 
}

after(): call(void qsort(...)){
    double x = (double)compare_cnt;
    double n = (double)lines;

    if (n == 0)
    {   
        return;
    }

    double lgn = log2(n);
    double r = 100.0 - (x - n * lgn) * 100 / (n * (n - lgn));

    // 效率: nlgn = 100%, n^2 = 0%
    fprintf(stderr, "效率[%.3f], n[%ld], nlgn[%ld], n^2[%ld]\n", r, compare_cnt, (size_t)(n * lgn), lines * lines);
}
