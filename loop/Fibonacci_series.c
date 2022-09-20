    //Fibonacci series

#include<stdio.h>

int main()
{
    int N,a,b,c;
    printf("Enter a number to find it's fibonacci series\n");
    scanf("%d",&N);
    a=-1;
    b=1;
     for (int i = 0; i < N; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
    return 0;
}