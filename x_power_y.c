#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter a number and the power:\n");
    scanf("%d%d",&x,&y);
    z = x;
    for (int i = 2; i <=y ; i++)
    {
        z=z*x;
    }
    printf("%d power %d is %d",x,y,z);

    return 0;
}