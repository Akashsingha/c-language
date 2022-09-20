#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *
traversal(struct node *head)
{
    struct node *p = head;
    do
    {
        printf("Elements : %d\n", p->data);
        p = p->next;
    } while (p != head);

    return head;
}

int main()
{
    struct node *head, *first, *second, *third, *fourth, *five, *six;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));

    (*head).data = 45;
    head->next = first;

    first->data = 76;
    first->next = second;

    second->data = 96;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 38;
    fourth->next = five;

    five->data = 46;
    five->next = six;

    six->data = 78;
    six->next = head;

    head = traversal(head);
    return 0;
}