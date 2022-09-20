#include <stdio.h>

int main()
{
    printf("");

    for (int i = 1; i <=4 ; i++)
    {
        for (int j = 1; j <=8 ; j++)
        {
            if (j >= 5 - i && j <= 9 - i)
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