#include <stdio.h>

int main()
{
    int value, show, rem, dec = 0, i = 0;
    printf("Enter a binary number:\t");
    scanf("%d", &value);
    show = value;
    while (value)
    {
        rem = value % 10;
        if (i == 0)
            i = 1;
        else
            i = i * 2;
        dec = dec + rem * i;
        value = value / 10;
    }

    printf("Decimal value of %d is : %d ", show, dec);

    return 0;
}