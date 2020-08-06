/*
    Cases to Analyse:
        Transversing (Iterating singly Linkedlist)
        Searching for a value
        Insertion
            At the beginning
            At the end
            After a given node (THINK HOW TO BE ABSTRACT)
            Before a given node (THINK HOW TO BE ABSTRACT)
        Deletion
            At the beginning
            At the end
            After a given node (THINK HOW TO BE ABSTRACT)
*/

struct node 
{
    int data;
    struct node *next;
};

struct node **initializePtrOfPtr();

struct node *createNode();

void insertNodeBeginning(struct node **start, int val);

void insertNodeEnd(struct node **start, int val);

