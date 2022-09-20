#include <stdio.h>

int squr(int);

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("%d is the squares of digits of %d", a, squr(a));
    return 0;
}

int squr(int a)
{
    if (a % 10 == 0)
    {
        return a;
    }

    return ((a % 10) * (a % 10)) + (squr(a / 10));
}