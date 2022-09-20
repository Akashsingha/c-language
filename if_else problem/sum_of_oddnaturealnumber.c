#include<stdio.h>

int main()
{
    int N,s,i=1;
    printf("Enter a number\n");
    scanf("%d",&N);
    s =0 ;
    while(i<=N)
    {

        s=s+2*i-1;
        i++;
        printf("%d\n %d\n",i,s);
    }
    printf("sum of 1st %d odd natural number is %d",N,s);
    return 0;
}