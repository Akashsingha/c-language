#include <stdio.h>

int fibo(int);
int main()
{
    int a, b, n;
    printf("Enter a number:\n");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
    {
        n = fibo(i);
        printf("%d ", n);
    }

    return 0;
}

int fibo(int a)
{
    if (a <= 1)
    {
        return a;
    }
    return fibo(a - 1) + fibo(a - 2);
}