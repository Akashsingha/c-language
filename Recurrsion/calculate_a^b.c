#include <stdio.h>

int fac(int, int);
int main()
{
    int a, b;
    printf("Enter a number:\n");
    scanf("%d%d", &a, &b);

    a = fac(a, b);
    printf("%d", a);
    return 0;
}

int fac(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * fac(a, b - 1);
}