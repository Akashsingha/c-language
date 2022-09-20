#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    printf("Enter a string:\n");
    gets(str);

    printf("%d",strlen(str));
    return 0;
}