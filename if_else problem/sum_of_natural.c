#include<stdio.h>

int main()
{
    int N,k;
    printf("Enter a number to find sum of natural number\n");
    scanf("%d",&N);
        if (N%2==0) //even input
        {
            k = (N + 1)* (N / 2);
            printf("%d",k);
        }
        else
        {
            k = (N + 1) * (N / 2) + ((N + 1)/2) ;
            printf("%d", k);
        }

    
    return 0;
}