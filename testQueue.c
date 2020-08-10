#include <stdio.h>

#include <LListQueue.h>

int main(void)
{
    struct queue *ptr = createQueue();
    printf("The queue is :%d\n", ptr != NULL);
    
    deleteInQueue(&ptr);    
    
    insertInQueue(&ptr, 5);
    printf("%d\n", (*ptr).rear->data); 
    return 0;
}
