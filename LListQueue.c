#include <stdio.h>
#include <stdlib.h>

#include "LListQueue.h"
//#include "singlyLList.h"


struct queue *createQueue()
{
    struct queue *ptr;
    ptr = (void *)malloc(sizeof(struct queue));
    return ptr;
}

void insertInQueue(struct queue **qe, int val)
{
    if((**qe).front == NULL){
        (**qe).front = createNode();
        (**qe).front->data = val;
        (**qe).rear = (**qe).front;
    }else{
        
    }
}

struct node *peek(struct queue **qe)
{
    return NULL;
}

void deleteInQueue(struct queue **qe)
{
    if((**qe).front == NULL){
        printf("UNDERFLOW\n");
    }else{

    }
}
