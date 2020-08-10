#include <stdio.h>

#include <LListQueue.h>

int main(void)
{
    struct queue *ptr = createQueue();
    printf("The queue is :%d\n", ptr != NULL);
    
    // Testing special case delete
    deleteInQueue(&ptr);    
    
    // Testing insert
    insertInQueue(&ptr, 5);
    insertInQueue(&ptr, 89);
    printf("Front: %d\tRear: %d\n", (*ptr).front->data, (*ptr).rear->data); 
    insertInQueue(&ptr, 2);
    printf("Front: %d\tRear: %d\n", (*ptr).front->data, (*ptr).rear->data); 
    insertInQueue(&ptr, 3);
    printf("Front: %d\tRear: %d\n", (*ptr).front->data, (*ptr).rear->data); 
    
    // Testing delete
   

    return 0;
}
