#include<stdio.h>

int ncube(int);

int main()
{   int a;
    printf("Enter Nth term of natural number:\n");
    scanf("%d",&a);
    printf("%d is %d",a,ncube(a));
    return 0;
}

int ncube(int a)
{
    if (a==1)
    {
        return 1;
    }
    return a*a*a + ncube(a-1);
}