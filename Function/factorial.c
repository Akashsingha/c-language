#include <stdio.h>

int fact(int);

int main()
{
    int N;
    printf("Enter a number:\n");
    scanf("%d", &N);
    N=fact(N);
    printf("factorial is %d", N);
    return 0;
}

int fact(int N)
{
    int f = 1;
    for (int i = 1; i <= N; i++)
        f = f * i;
    return (f);
}