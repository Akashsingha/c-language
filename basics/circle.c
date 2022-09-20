#include<stdio.h>

int main()
{
    int  radius;
    float Area,p = 3.15;
    printf("Enter the radius\n");
    scanf("%d",&radius);
    Area = p*(radius*radius);
    printf("%f is the area",Area);
    return 0;
}