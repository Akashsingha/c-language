    //Greatest among 10 number 
#include<stdio.h>

int main()
{
    int max=0;
    printf("Enter 10 number:\n");
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for (int j = 1; j < 10; j++)
    {
        
        if (a[j]>max)
        {
            max = a[j];
        }
        
    }
    printf("%d is the greatest",max);

    return 0;
}