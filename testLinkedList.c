#include <stdio.h>
#include <stdlib.h>
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
    //struct node *start = NULL;  

    //printf("0\n");
    //insertNodeEnd(&start, 5);
    //printf("1\n");
    //printf("%d\n", (*start).data);
    //insertNodeEnd(&start, 1);
    int i; 
    for(i =0; i< MAX_C; i++){
        insertNodeEnd(&start, i);
    }
   
    transverseListAndPrint(&start);

    return 0;
}
