#include<stdio.h>

int num(int);

int main()
{
    int n;
    printf("Enter a number:\n ");
    scanf("%d",&n);

   num(n);
    return 0;
}

int num(int n)
{
    if (n==0)
    {
        return 0;
    }
    printf("%d ",n);
    return num(n-1);
}