#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *traversal(struct node *head)
{
    struct node *p;
    p = head;
    while (p->next != NULL)
    {
        printf("Elements are: %d\n", p->data);
        p = p->next;
    }
    return head;
}
// case 1: Delete the first elements of the link list
struct node *delete_at_beginning(struct node *head)
{
    struct node *p;
    p = head;
    head = head->next;
    free(p);
    return head;
}
// case 2: Delete a node in a given index of linked list
struct node *delete_at_index(struct node *head, int index)
{
    struct node *p;
    struct node *q = head->next;
        p = head;
    for (int i = 0; i <= index - 1; i++)
    {
        p = p->next;
        q = p->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
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
    six->next = NULL;

    head = traversal(head);
    // head = delete_at_beginning(head);
    int ind;
    printf("Enter index: ");
    scanf("%d", &ind);
    head = delete_at_index(head, ind);
    printf("\n\n");
    head = traversal(head);

    return 0;
}