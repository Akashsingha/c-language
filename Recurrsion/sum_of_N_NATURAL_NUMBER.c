#include<stdio.h>

int revsum(int);
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);

    a = revsum(a);
    printf("%d",a);
    return 0;
}

int revsum(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n + revsum(n-1);
}