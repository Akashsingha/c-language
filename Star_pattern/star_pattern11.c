/* *
   * *
   * * *
   * * * *
   * * *
   * *
   *        */
#include<stdio.h>

int main()
{
    int k,rows,columns;
    printf("Enter a number:\n");
    scanf("%d",&columns);
   
    for (int i = 1; i <= columns+(columns-1) ; i++)
    {   
        // if (columns%2=0)
        // {
            
        // }
        // else
        // {
            i <= columns ? k++ : k--;
        // }

        for (int j = 1; j <= columns ; j++)
        {
            
            if (j<=k)
            {
                printf("*");   
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
