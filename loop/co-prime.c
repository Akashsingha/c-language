#include <stdio.h>

int main()
{
    int a, b, i;
    printf("Enter two number to see they are co-prime or not:\n");
    scanf("%d%d", &a, &b);
    for (i = 2; i < (a < b ? a : b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d and %d are not co-prime", a, b);
            break;
        }
    }
    if (i == a)
        printf("%d and %d are co-prime", a, b);
    return 0;
}