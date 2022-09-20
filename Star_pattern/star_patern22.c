#include <stdio.h>

int main()
{
    int a,b,row;
    printf("Enter a number:\n");
    scanf("%d",&row);

    for (int i = 1; i <= row; i++)
    {
        a=1;
        b='A';
        for (int j = 1; j <= row +(row-1); j++)
        {
            if (j >= (row+1) - i && j <= (row-1) + i)
            {
                if (j<=row)
                {
                    printf("%d",a);
                    a++;
                }
                else
                {
                    printf("%c",b);
                    b++;
                }
                
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