#include<stdio.h>

int main()
{
    int a,row;
    printf("Enter number of row:\n");
    scanf("%d",&row);
    
    for (int i = 1; i <= row; i++)
    {
        a = 'A';
        for (int j = 1; j <= row+(row-1); j++)
        {
            if (j>=(row+1)-i && j<=(row-1)+i)
            {
                printf("%c",a);
                j<row? a++:a--;
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