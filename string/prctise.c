#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];

    printf("Enter your name:\n");
    gets(name);
    puts(name);
    printf("'Hello',%s", &name[3]);
    return 0;
}