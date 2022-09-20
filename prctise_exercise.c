
#include<stdio.h>
int fun(int* x,int* y)
{
    int sub,add;
    add = *x+*y;
    sub = *y - *x;
    *x = add;
    *y = sub;
}

int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    fun(&a, &b);
    printf("%d and %d",a,b);
    return 0;
}