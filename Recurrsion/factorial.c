#include <stdio.h>

int fac(int);
int main()
{
    int a, b;
    printf("Enter a number:\n");
    scanf("%d", &a);

    a = fac(a);
    printf("%d", a);
    return 0;
}

int fac(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a * fac(a-1);
}