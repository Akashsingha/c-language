#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *p)
{
    if (p->top == -1)
        return 1;
    return 0;
}
int isfull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    return 0;
}

int push(struct stack *s, int value)
{
    if (isfull(s))
    {
        printf("Stack overflow:\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
    }
    return 0;
}

int pop(struct stack *s)
{
    if (isempty(s))
    {
        printf("Stack underflow:\n");
    }
    else
    {
        int val = s->arr[s->top];
        s->top = s->top - 1;

        return val;
    }
}

int main()
{
    struct stack *s;
    s->size = 8;
    s->top = -1;

    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 45);
    push(s, 78);
    push(s, 92);
    push(s, 83);
    push(s, 65);
    push(s, 78);
    push(s, 92);
    push(s, 83);
    push(s,67);
    /*pop(s);
    pop(s);
    pop(s);
    pop(s);*/
    printf(" %d\n",isfull(s));
    for (int i = 0; i <= s->top; i++)
        printf("Elements are: %d\n", s->arr[i]);
    return 0;
}