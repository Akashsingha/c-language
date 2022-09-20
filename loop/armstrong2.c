
#include <stdio.h>

int main()
{
    int value, a, b = 0, c = 0;
   
    for (int i = 1; i < 200; i++)
    {
        i = value;
        b = value;

    while (value != 0)
    {
        a = value % 10;
        a = c + (a * a * a);
        c = a;
        value = value / 10;
    }

    if (a == b)
    {
        printf("%d \n", b);
    }
   }
 
    return 0;
}