#include<stdio.h>

int main()
{
    int N;
    printf("Even natural no\n");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    

    return 0;
}