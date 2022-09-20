#include<stdio.h>

int main()
{
    int swap,x,y;
    printf("Enter two number:\n");
    scanf("%d%d",&x,&y);
    printf("you give x = %d and y = %d",x,y);
    printf("\nswaping......\n");
    swap = x;
    x = y ;
    y = swap;
    printf("now x = %d xnd y = %d",x,y);
    return 0;
}