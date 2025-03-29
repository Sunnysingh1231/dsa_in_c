#include <stdio.h>  //standard input output
#include <stdlib.h> //malloc function


// creation and structure of node(structure of node)
struct Node
{
    int data;
    struct Node *next;
};

// print all node value of node
void printNode(struct Node *head)
{

    while (head != NULL)
    {
        printf("%d \n", head->data);
        head = head->next;
    }
    printf("\n");
}

// insertertion of data into node
void insertDataInNode()
{

    struct Node *head = NULL;                          // create head is a pointer taht have only link(location not data);
    head = (struct Node *)malloc(sizeof(struct Node)); // create a location in memory;

    struct Node *a;
    a = (struct Node *)malloc(sizeof(struct Node));

    struct Node *b;
    b = (struct Node *)malloc(sizeof(struct Node));

    struct Node *c;
    c = (struct Node *)malloc(sizeof(struct Node));

    struct Node *d;
    d = (struct Node *)malloc(sizeof(struct Node));

    struct Node *e;
    e = (struct Node *)malloc(sizeof(struct Node));

    head = a;

    a->data = 28;
    a->next = b;

    b->data = 35;
    b->next = c;

    c->data = 42;
    c->next = d;

    d->data = 57;
    d->next = e;

    e->data = 70;
    e->next = NULL;

    printNode(head);
    insertNode(head);
}
// main function
int main()
{
    
    insertDataInNode();
    return 0;
}