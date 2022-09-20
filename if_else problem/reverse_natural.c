#include<stdio.h>

int main()
{
    int k;
    printf("Enter number to reverse natural number\n");
    scanf("%d",&k);
    printf("natural numbers are:\n");
    for (int i = k; i >= 1 ; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}