#include "patricia_advice.h"

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>

#include <arpa/inet.h>

#include "patricia.h"

struct print_queue{
    int depth;
    struct ptree *p;
    struct print_queue *next;
};

static void error()
{
    exit(-1);
}

static int tree_depth(struct ptree *phead, int father_pb)
{
    /* father's p_b >= chile->p_b mean father is a leaf */
    if (father_pb >= phead->p_b) return 0;

    int left = tree_depth(phead->p_left, phead->p_b);
    int right = tree_depth(phead->p_right, phead->p_b);
    return (left > right ? left : right) + 1;
}

static void enqueue(struct print_queue * queue, struct print_queue *node)
{
    assert(queue);
    assert(node);

    struct print_queue * end;
    for (end = queue; end->next != NULL; end = end->next);

    end->next = node;
    node->next = NULL;
}

static void free_queue(struct print_queue *queue)
{
    struct print_queue *curr = queue;
    struct print_queue *next;

    while (curr)
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
}

static struct print_queue *malloc_node(int depth, struct ptree *ptree_node)
{
    assert(depth >= 0);

    struct print_queue * node;
    node = malloc(sizeof(struct print_queue));
    if (!node)
    {
        error();
    }
    node->depth = depth;
    node->p = ptree_node;
    node->next = NULL;

    return node;
}

static struct print_queue *layer_traversing(struct ptree *phead)
{
    assert(phead);

    struct print_queue *queue = malloc_node(0, phead);
    struct print_queue *iter = queue;
    int depth = tree_depth(phead, -1) - 1;

    while(iter->depth < depth)
    {
        if (iter->p)
        {
            enqueue(queue, malloc_node(iter->depth + 1, iter->p->p_b < iter->p->p_left->p_b ? iter->p->p_left : NULL));
            enqueue(queue, malloc_node(iter->depth + 1, iter->p->p_b < iter->p->p_right->p_b ? iter->p->p_right : NULL));
        }
        else
        {
            enqueue(queue, malloc_node(iter->depth + 1, NULL));
            enqueue(queue, malloc_node(iter->depth + 1, NULL));
        }
        
        iter = iter->next;
    }
    
    return queue;
}

static void print_space(int num)
{
    assert(num >= 0);
    while(num--) printf(" ");
}

static void print_bar(int num)
{
    assert(num >= 0);
    while(num--) printf("-");
}

static void print_node(int depth, int now_depth, struct print_queue * queue)
{
    struct ptree * node;
    struct print_queue * i;
	struct in_addr addr;
    const char * addr_str;
    int max_mask = 0;
    int now_mask;
    int count = 0;
    int interval = (int)pow(2, depth - now_depth) * 18 - 18;
    int start = interval / 2;

    /* "|" at the beginning */
    if (now_depth != 0)
    {
        print_space(start + 18 / 2);
        printf("|");
        for (i = queue; i && i->next && i->next->depth == now_depth; i = i->next)
        {
                print_space(interval + 17);
                printf("|");
        }
        printf("\n");
    }

    /* "----"  */
    print_space(start);
    for (i = queue; i && i->depth == now_depth; i = i->next)
    {
        print_space(1);
        print_bar(16);
        print_space(1);
        print_space(interval);
    }
    printf("\n");

    /* p_b */
    print_space(start);
    for (i = queue; i && i->depth == now_depth; i = i->next)
    {
        node = i->p;
        if (node)
            printf("|%-16d|", node->p_b);
        else
            printf("|%-16s|", "-              -");

        print_space(interval);
    }
    printf("\n");

    /* p_key */
    print_space(start);
    for (i = queue; i && i->depth == now_depth; i = i->next)
    {
        node = i->p;
        if (node)
        {
            addr.s_addr = ntohl(node->p_key);
            printf("|%-16s|", inet_ntoa(addr));
        }
        else
            printf("|%-16s|", "-              -");

        print_space(interval);
    }
    printf("\n");

    /* p_mask */
    for (i = queue; i && i->depth == now_depth; i = i->next)
    {
        node = i->p;
        if (node)
        {
            max_mask = max_mask < node->p_mlen ? node->p_mlen : max_mask;
        }
    }

    for (now_mask = 0; now_mask < max_mask; now_mask++)
    {
        print_space(start);
        for (i = queue; i && i->depth == now_depth; i = i->next)
        {
            node = i->p;
            if (node && now_mask < node->p_mlen)
            {
                addr.s_addr = ntohl(node->p_m[now_mask].pm_mask);
                printf("|%-16s|", inet_ntoa(addr));
            }
            else
                printf("|%-16s|", "-              -");

            print_space(interval);
        }
        printf("\n");

    }

    /* "----" */
    print_space(start);
    for (i = queue; i && i->depth == now_depth; i = i->next)
    {
        print_space(1);
        print_bar(16);
        print_space(1);
        print_space(interval);
    }
    printf("\n");

    /* "|" at the end and "-----" for next level*/
    if (now_depth != depth)
    {
        print_space(start + 18 / 2);
        printf("|");
        for (i = queue; i && i->next && i->next->depth == now_depth; i = i->next)
        {
                print_space(interval + 17);
                printf("|");
        }

        printf("\n");
        print_space((start + 18 / 2) / 2);
        print_bar((interval + 21) / 2);
        for (i = queue; i && i->next && i->next->depth == now_depth; i = i->next)
        {
                print_space((interval + 17) / 2);
                print_bar((interval + 21) / 2);
        }
    }
    
    printf("\n");
}

void __print_tree(void *phead)
{
    struct print_queue * queue = layer_traversing(phead);

    struct print_queue * iter;
    int depth = tree_depth(phead, -1) - 1;
    int now_depth = -1;

    for (iter = queue; iter != NULL; iter = iter->next)
    {
        if (now_depth != iter->depth)
        {
            now_depth = iter->depth;
            print_node(depth, now_depth, iter);
        }
    }
    printf("\n\n");

    free_queue(queue);
}