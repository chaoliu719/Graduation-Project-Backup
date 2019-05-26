#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "range.h"

after(): execution($ mm_init(...)){
    clear_ranges_r();
}

after(size_t size, void *newp): execution($ mm_malloc(...)) && args(size) && result(newp) {
    malloc_r(newp, size);
}

after(void *p): execution($ mm_free(...)) && args(p){
    free_r(p);
}

after(void *oldp, size_t size, void *newp): execution($ mm_realloc(...)) && args(oldp, size) && result(newp) {
    realloc_r(oldp, size, newp);
}



