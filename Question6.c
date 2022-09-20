// Write a c Program to compute the Perimeter and Area of a circle with a given radius
#include<stdio.h>

int main()
{
    int Radius;
    float Pi = 3.15, Circumference, Area;
    printf("Enter the Radius of the Circle:\n ");
    scanf("%d",&Radius);
    Circumference = 2*Pi*Radius;
    Area = Pi*(Radius*Radius);
    printf("Circumference of the Circle is : %f\n",Circumference);
    printf("Area of the Circle is : %f\n",Area);

    return 0;
}