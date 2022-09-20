/*
*******
*****
***
* */
#include <stdio.h>
#include <conio.h>
int main()
{
    int col, row;
    printf("Enter number of rows:\n");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row + (row - 1); j++)
        {
            if (j <= (2 * row) - i && j >= i)
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
    getch();
    return 0;
}