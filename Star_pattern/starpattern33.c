#include <stdio.h>

int main()
{
    int a,row;
    printf("Enter number of row:\n");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        a = 'A';
        for (int j = 1; j <= row +(row-1); j++)
        {
            if (j >= row+2 - i && j <= row-2 + i)
            {
                printf(" ");
            }
            else
            {
                printf("%c", a);
            }
            a++;
        }
        printf("\n");
    }

    return 0;
}