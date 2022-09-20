
#include<stdio.h>

int main()
{
    int a,k,row;
    printf("Enter a number:\n");
    scanf("%d",&row);

    for (int i = 1; i <= row; i++)
    {
        k=1;
        for (int j = 1; j <= row; j++)
        {
            if (j<=i)
            {
                printf("%d",k);
                k=1-k;                  // k = 1 - k ;
            }
            else
            {
                printf(" ");                
            }
        }
        printf("\n");
    }
    
    return 0;
}