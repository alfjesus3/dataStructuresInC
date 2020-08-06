#include <stdio.h>
#include <stdlib.h>
#include "singlyLList.h"

#define MAX_C 10

// Issues faced:
// When creating a pointer inside main, there is a temporary allocation on memory
// The other solution is to use malloc but then it is not possible to distinguish between
// garbage and actual data
    // In this situation use global variables

// In this file, several tests are performed to guarantee the 
// correctness of the linked list implementation

struct node *start = NULL;// global variable

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
    
    struct node *ptr, *nPtr;
    ptr = start;
    
    while((nPtr = (*ptr).next) != NULL){
        printf("%d\n", (*nPtr).data);
        ptr = nPtr;
    }
    return 0;
}
