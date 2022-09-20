#include<stdio.h>

int main()
{
    int a,b,i,L;
    printf("Enter two number to find it's lcm:\n");
    scanf("%d%d",&a,&b);

    for ( i = 1; i < a*b; i++)
    {
        if (i%a==0 && i%b==0)
        {
            break;
        }
    }
    printf("Lcm is %d",i);
    
    return 0;
}