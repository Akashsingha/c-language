#include<stdio.h>

int main()
{
    int N,k;
    printf("Enter a number to find it's factorial\n");
    scanf("%d",&N);
    k=N;
    for (int i = 1; i < N; i++)
    {
        k = k*(N-i);
    }
    printf("%d is the factorial of %d",k,N);
    return 0;
}