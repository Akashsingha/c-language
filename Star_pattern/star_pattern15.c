/*  1
   12
  123
 1234
  123
   12
    1 */

#include <stdio.h>

int main()
{
    int a,col;
    printf("Enter number of column:\n");
    scanf("%d",&col);
    for (int i = 1; i <= col+(col-1); i++)
    {
        a = 1;
        for (int j = 1; j <= col; j++)
        {
            if (j >= (i <= col ? (col+1) - i : i - (col-1)) && j <= col)
            {
                printf("%d",a);
                a++;
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