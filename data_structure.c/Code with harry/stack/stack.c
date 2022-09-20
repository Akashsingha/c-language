#include<stdio.h>

int st[5],top;

void push();
void pop();
void peek();
void display();

int main()
{
    int val,option;

    do
    {
        printf("****Main menu****\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        scanf("%d",)
    switch (option)
    {
    case 1: printf("Enter a number you want to insert:\n");
        scanf("%d",&val);
        push(val);;
        break;
    case 2:
        printf("Enter a number you want to delete\n");
        val = pop();
        break;
    case 3:
        printf("Enter the index number you want to dispaly:\n");
        scanf("%d", &val);
        peek(val);
       break;
    case 4:
        display();
        break;

    default:
        break;
    } while (option<=5);
    return 0;
}

void push()
{


    return 0;
}