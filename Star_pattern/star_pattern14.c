/*
3210
210
10
0  */
#include<stdio.h>

int main()
{
    int row,k;
    printf("\nEnter number of rows\n");
    scanf("%d",&row);

    for (int i = 1; i <= row; i++)
    {
        k=row-i;
        for (int j = 1; j <= row ; j++)
        {
            if (j<=(row+1)-i)
            {
                
                printf("%d ", k); 
                k--;    
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