    //Write a program to find sum of N natural number.(TNRN,TSRS,TSRN,TNRS)

#include<stdio.h>

void sum(void);
int sum1(int N);
void sum2(int N);
int sum3(int N);

int main()
{
    sum();
    return 0;
}

void sum()
{
    int N,s=0;
    printf("Enter a Natural number:\n");
    scanf("%d",&N);

    for (int i = 1; i <=N ; i++)
       s=s+i;
    printf("Sum of %d is %d",N,s);
}

