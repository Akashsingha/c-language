#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three number to find greater between them:\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
        {
            printf("%d is gretest among %d and %d\n", x, y, z);
        }
    }
    else
    {
        if (y > z)
        {
            printf("%d is gretest among %d and %d\n", y, x, z);
        }
        else
        {
            printf("%d is gretest among %d and %d\n", z, y, x);
        }
    }

    return 0;
}