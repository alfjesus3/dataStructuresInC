#include <stdio.h>
#include <stdlib.h>

#include "singlyLList.h"


struct node **initializePtrOfPtr()
{
    struct node **ptr;
    struct node *tmp = NULL;
    ptr = &tmp;
    return ptr;
}

struct node *createNode()
{
    struct node *ptr;
    ptr = (void *)malloc(sizeof(struct node));
    return ptr;
}

void insertNodeBeginning(struct node **start, int val)
{
    //printf("entered\n");
    struct node *old;
    old = *start;
    //printf("entered\n");
    
    *start = createNode();
    
    (**start).data = val; 
    (**start).next = old;
    //printf("%d\n", (**start).data);
}

void insertNodeEnd(struct node **start, int val)
{
    if(*start == NULL){
        insertNodeBeginning(start, val);
        //printf("%d\n", (**start).data);
    }else{
        struct node *ptr, *nPtr;
        ptr = *start;
        
        while((nPtr = (*ptr).next) != NULL)
            ptr = nPtr;
        
        struct node *newN = createNode();
        (* newN).data = val;
        (* newN).next = NULL; // necessary ??
        (* ptr).next = newN; 
    }
}

struct node *searchForNode(struct node **start, int val)
{
    struct node *ptr, *nPtr, *res = NULL;
    ptr = *start;
    //*res = NULL;
    
    while((nPtr = (*ptr).next) != NULL)
        if ((*ptr).data == val){
            res = ptr;
            break;
        }else
            ptr = nPtr;
    
    return res;
}
