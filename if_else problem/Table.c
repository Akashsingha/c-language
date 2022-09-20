#include<stdio.h>

int main()
{
    int choice;
    printf("Enter the table which you want to print\n");
    scanf("%d",&choice);
    for (int i = 1; i <=10 ; i++)
    {
        printf("%d * %d = %d\n",choice,i,choice*i);
    }
    return 0;
}