#include <stdio.h>

#include "ArrayStack.h"

//int *top = NULL;
int *arrStack = NULL;

int main(void)
{
    int top = -1;
    
    // Testing Push
    push(&arrStack, &top, 5);
    printf("Entering%d\n",3);

    // Testing Peek
    printf("%d\n", peek(&arrStack, &top));
    
    //Testing Pop
    pop(&arrStack, &top);
    printf("%d\n", peek(&arrStack, &top));
    
    return 0;
}
