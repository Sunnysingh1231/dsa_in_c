#include <stdio.h>  //standard input output
#include <stdlib.h> //malloc function

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{

    insertDataInLinkedList();
    return 0;
}

void insertDataInLinkedList(){

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    struct node *a = (struct node *)malloc(sizeof(struct node));
    struct node *b = (struct node *)malloc(sizeof(struct node));
    struct node *c = (struct node *)malloc(sizeof(struct node));
    struct node *d = (struct node *)malloc(sizeof(struct node));
    struct node *e = (struct node *)malloc(sizeof(struct node));
    struct node *f = (struct node *)malloc(sizeof(struct node));
    struct node *g = (struct node *)malloc(sizeof(struct node));

    head = a;

    a->prev = NULL;
    a->data = 10;
    a->next = b;

    b->prev = a;
    b->data = 20;
    b->next = c;

    c->prev = b;
    c->data = 30;
    c->next = d;

    d->prev = c;
    d->data = 40;
    d->next = e;

    e->prev = d;
    e->data = 50;
    e->next = f;

    f->prev = e;
    f->data = 60;
    f->next = NULL;

    printNode(head);
}

void printNode(struct node *head)
{

    while (head != NULL)
    {
        printf("%d \n", head->data);
        head = head->next;
    }
    printf("\n");
}
