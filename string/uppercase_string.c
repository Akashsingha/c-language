// Write a program to transform a string in uppercase
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter your name:\n");
    scanf("%s", str);
    strupr(str);
    printf("%s", str);
}