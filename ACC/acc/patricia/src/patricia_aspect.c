#include "patricia.h"
#include "patricia_advice.h"
#include <stdio.h>

after(struct ptree *phead): call(struct ptree *pat_insert(...)) && args($, phead){
    __print_tree(phead);
}

after(struct ptree *phead): call(struct ptree *pat_remove(...)) && args($, phead){
    __print_tree(phead);
}