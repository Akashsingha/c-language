#include <stdio.h>
#include <conio.h>

int main()
{
    char c;
    float a, b;
    printf("Enter 1st operater\n");
    scanf("%f", &a);

    printf("Choose operant: +,-,*,/\n");
    c = getche();

    printf("\nEnter 2nd operater\n");
    scanf("%f", &b);
    switch (c)
    {
    case '+':
        printf("\n%f + %f = %f", a, b, a + b);
        break;
    case '-':
        printf("\n%f - %f = %f", a, b, a - b);
        break;

    case '*':
        printf("\n%f * %f = %f", a, b, a * b);
        break;
    case '/':
        printf("\n%f / %f = %f", a, b, a / b);
        break;
    default:
        break;
    }
    getch();
    return 0;
}
