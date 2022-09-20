/*
*****
** **
*   *
** **
***** */
#include <stdio.h>

int main()
{
    /*printf("");
    scanf("", &);*/

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= (i <= 3 ? 4 - i : i - 2) || j >= (i <= 3 ? i + 2 : 8 - i))
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