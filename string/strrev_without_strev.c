// String reverse without strrev function
#include <stdio.h>
#include <string.h>

int main()
{
    int temp,i,n;
    char a[10];
    printf("Enter a string:\n");
    gets(a);
    n = strlen(a)-1;
    for ( i = 0; i <= n/2; i++)
    {
        temp = a[n - i];
        a[n - i] = a[i];
        a[i] = temp;
    }
    printf("reverse string is : %s",a);  
    
    return 0;
}