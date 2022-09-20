//
#include <stdio.h>

int main()
{
    int value, a, c = 0;      // value = temp ;
    for (int i = 0; i <= 1000; i++) // number =number
    {
        value = i;
        c = 0;
        while (value != 0)
        {
            a = value % 10;
            c = c + (a * a * a);
            value = value / 10;
        }

        if (i == c)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}
