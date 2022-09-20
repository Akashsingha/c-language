#include<stdio.h>

int main()
{
    int N,s;
    printf("Enter a number\n");
    scanf("%d",&N);
    s = 0 ;
    for (int i = 1; i <=N ; i++)
    {
        if (i%2==0)
        {
            s=s+i;
            
        }
        
    }
    printf("%d\n", s);
    return 0;
}