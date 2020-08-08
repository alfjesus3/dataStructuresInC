#include <stdio.h>

#include "ArrayStack.h"


int main(void)
{
    int *arrStack = createStack();
    printf("%d\n", *arrStack);
    
    return 0;
}
