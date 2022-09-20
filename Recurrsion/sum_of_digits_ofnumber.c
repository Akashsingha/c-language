#include<stdio.h>

int sum(int);

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("Sum is %d",sum(a));
    return 0;
}

int sum(int a)
{
    if(a/10==0)
    {
        return a;
    }   

    return (a%10 + sum(a/10));
}