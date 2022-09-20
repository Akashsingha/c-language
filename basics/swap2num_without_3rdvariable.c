#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two number:\n");
    scanf("%d%d", &x, &y);
    printf("You give x = %d and y = %d", x, y);
    printf("\nSwaping......\n");
    x = x+y;
    y = x-y;
    x = x-y;
    printf("Now x = %d xnd y = %d", x, y);
    return 0;
}