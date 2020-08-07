#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
    
#include "singlyLList.h"

#define MAX_C 10


// In this file, several tests are performed to guarantee the 
// correctness of the linked list implementation

struct node *start = NULL;// global variable

void transverseListAndPrint(struct node **start)
{
    //Transversing the list 
    struct node *ptr, *nPtr;
    ptr = *start;
    
    while((nPtr = (*ptr).next) != NULL){
        printf("%d\n", (*nPtr).data);
        ptr = nPtr;
    }
}

int main (void)
{
    //insertNodeEnd(&start, 5);
    //printf("%d\n", (*start).data);
    //insertNodeEnd(&start, 1);

    int i; 
    for(i =0; i< MAX_C; i++){
        insertNodeEnd(&start, i);
    }
   
    transverseListAndPrint(&start);
    printf("--------------\n"); 

    // Testing search for a node with a specific value
    struct node *found;
    found = searchForNode(&start, 4);
    assert(found != NULL);
    printf("%d\n", (*found).data);
    printf("--------------\n"); 

    // Deleting Nodes
    deleteNodeEnd(&start);
    deleteNodeBeginning(&start);
    transverseListAndPrint(&start);
    printf("--------------\n"); 

    return 0;
}
