#include <stdio.h>

void num(int);

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);

    num(a);
    return 0;
}

void num(int a)
{
    if (a >= 1)
    {
        num(a-1);
        printf(" %d",a);
    }
}