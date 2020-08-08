#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "ArrayStack.h"

int *createStack()
{
    int *emptyStack;
    emptyStack = (void *)malloc(sizeof(int) * MAX_ST);
    return emptyStack;
}

void push(int **stack, int *top, int val)
{
    printf("entered1\n");
    /*
    if(*top == -1){
        printf("entered2\n");
        *stack = createStack(); // Allocating the memory for the Array based Stack
        **stack = val;
        *top = 0;
    }else if(*top == (MAX_ST-1)){
        printf("%d\n", (*top - (MAX_ST-1)));
        printf("OVERFLOW");
    }else{
        *top++;
        stack++;
        **stack = val;
    }    
    */
    if(*top == (MAX_ST-1)){
        printf("%d\n", (*top - (MAX_ST-1)));
        printf("OVERFLOW");
    }else{
        if(*top == -1)
            *stack = createStack();
        else
            (*stack)++;
        **stack = val;
        (*top)++;
    }        
}

int peek(int **stack, int *top)
{
    assert((*top >=0) && (*top<MAX_ST));
    return **stack;
}

void pop(int **stack, int *top)
{
    if((*top == -1)){// || (stack == top) && (*top == 0)){
        printf("UNDERFLOW");
    }else{
        **stack = 0; // to "clean" the memory position
        stack--; // the top becomes the previous contiguous memory space 
        (*top)--;  
    }
}
