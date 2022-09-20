
#include <stdio.h>

float Area(float);

float main()
{
    float a;
    printf("Enter the radius:\n");
    scanf("%f",&a);
    a = Area(a);
    printf("Area of circle is %f",a);
    return 0;
}

float Area(float a)
{
    float p = 3.15;
    a = p*(a*a);
    return (a);
}