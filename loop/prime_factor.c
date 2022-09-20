#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number two find it's prime factor\n");
    scanf("%d",&n);
    
    while (n!=1)
    {
        if (n%2==0)
        {
            n=n/2;
            printf("*2");
        }
        if (n%3==0)
        {
            n=n/3;
            printf("*3");
        }
        if (n%5==0)
        {
            n=n/5;
            printf("*5");
        }
        if (n % 7 == 0)
        {
            n = n / 7;
            printf("*7");
        }
        if (n%9==0)
        {
            n = n/9;
            printf("*8");
        }
        
    }
    
    
    return 0;
}