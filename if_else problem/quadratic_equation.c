#include <stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    float x,y,D;
    printf("Enter three number:\n a = ");
    scanf("%d", &a);

    printf(" b = ");
    scanf("%d", &b);

    printf(" c = ");
    scanf("%d", &c);

    printf("Your Equation is: %dx^2 + %dx + %d\n",a,b,c);
    D = b*b  -4*a*c;
    printf("%f",x);
    if (D<0)
    {
        printf("Roots are imaginary\n");
    }
    if(D==0)
    {
        x = -b /(2.0*a);
        printf("\nBoth roots are equal : %f\n",x);
    }

    if(D>0)
    {
        y = (-b + sqrt(D))/(2*a);
        x = (-b - sqrt(D))/(2*a);
        printf("\nTwo different roots are : %f and %f\n ",y,x);
    }
    
    return 0;
}
//6 b = -17 c = 12