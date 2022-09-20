#include<stdio.h>

int main()
{
    int N;
    double s = 1.0;
    printf("Enter a number\n");
    scanf("%d",&N);
    for (int i = 2; i <= N; i++)
    {
        s = s*i;
    }
    
    printf("sum of %d natural number is %f",N,s);
    return 0;
}