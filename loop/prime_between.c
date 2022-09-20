#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two number to find prime:\n");
    scanf("%d%d", &a, &b);

    for (int n = (a < b ? a : b); n < (a > b ? a : b); n++)
    {
        for (int i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                break;
            }
            else
            {
                printf("%d,",n);
                break;
            }
            
        }
    }

    return 0;
}