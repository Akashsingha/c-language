/* without % and bitwish operator */

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    if (x / 2 * 2 == x)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}