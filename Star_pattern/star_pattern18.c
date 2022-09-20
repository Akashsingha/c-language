#include <stdio.h>

int main()
{
    int row;
    printf("Enter number of row:\n");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row+(row-1); j++)
        {
            if (j >= i && j <= 2*row - i)
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