#include<stdio.h>

int main()
{
    int i = 0,k;
    printf("Natural number\n");
    scanf("%d",&k);
    do
    {
        i++;
        printf("%d\n",i);
    } while (i<k);
    
    
    return 0;
}