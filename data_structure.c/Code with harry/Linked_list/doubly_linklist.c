#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *traversal(struct node *head)
{
    struct node *p = head;
    do
    {
        printf("Elements are: %d\n", p->data);
        p = p->next;
    } while (p->next != NULL);
    printf("Elements are: %d\n", p->data);
    printf("Reversing the linked list:\n");
    do
    {
        printf("Elements are: %d\n", p->data);
        p = p->prev;
    } while (p != NULL);

    return head;
}

int main()
{
    struct node *head, *first, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->prev = NULL;
    head->next = first;

    first->data = 87;
    first->prev = head;
    first->next = second;

    second->data = 96;
    second->prev = first;
    second->next = third;

    third->data = 76;
    third->prev = second;
    third->next = NULL;

    head = traversal(head);
    return 0;
}