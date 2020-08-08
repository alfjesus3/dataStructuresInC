/*
    Cases to Analyse:
        Variants: Using an Array, Using a Linked List
        Variables : Top, max
        Operations:
            Push
            Pop
            Peek
*/

#define MAX_ST 15 // defines the maximum number of elements in the stack

int *createStack(); // allocates the memory for a empty stack with MAX memory positions available

void push(int val); // it adds a element to the top of the stack

int peek(); // it retrieves the value of the top element of the stack without removing it

void pop(); // it removes the top element of the stack

