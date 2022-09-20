// Write a c Program to compute the perimeter and area of a rectangle with a height of 7inche and width of 5inches
#include <stdio.h>

int main()
{
    int Length, Width, Perimeter, Area;     // Length width declaration
    printf("Enter length of Rectangle:\n"); // Input from user
    scanf("%d", &Length);                   // asking for length
    printf("Enter width of Rectangle:\n");  // Input from user
    scanf("%d", &Width);                    // asking foe width
    printf("This is how your rectangle look like:\n");
    printf("       %d       \n###############\n##           ##\n##           ## %d\n##           ##\n###############\n", Length, Width);
    Perimeter = 2 * (Length + Width);
    printf("Perimeter of the rectangle is = %d\n", Perimeter);
    Area = Length * Width;
    printf("Area of the rectangle is = %d", Area);
    return 0;
}