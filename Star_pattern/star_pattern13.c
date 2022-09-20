
#include<stdio.h>

int main()
{
    int k,row;
    printf("\nEnter number of rows:\n");
    scanf("%d",&row);
    for (int i = 1; i <= row ; i++)
    {
        k = i ;
        for (int j = 1; j <= row+(row-1) ; j++)
        {
           
            if (j<=(row-1)+i && j>=(row+1)-i)
            {
                printf("%d",k);
                 j<4?k++:k--;
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