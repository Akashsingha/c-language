
#include <stdio.h>

int main()
{
    int k, row, a;
    printf("Enter number of row\n");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        i % 2 == 0 ? a = 'A' : (a = 1);

        k = 1;
        for (int j = 1; j <= row + (row - 1); j++)
        {
            if (j >= (row + 1) - i && j <= (row - 1) + i)
            {
                if (k)
                {
                    if (i % 2 == 0)
                    {
                        printf("%c", a);
                    }
                    else
                    {
                        printf("%d", a);
                    }

                    a++;
                }
                else
                {
                    printf(" ");
                }
                k = 1 - k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}