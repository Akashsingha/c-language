#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter two number:\n");
    scanf("%d%d", &x,&y);
    if (x>y)
    {
        printf("%d is greter than %d\n",x,y);
    }
    if (y>x)
    {
        printf("%d is grater than %d",y,x);
    }
    
   
    return 0;
}