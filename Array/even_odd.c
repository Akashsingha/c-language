
#include<stdio.h>

int main()
{
    int a[10];
    int even=0,odd=0;
    printf("Enter 10 number:\n");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int j = 0; j < 10; j++)
    {
        if(a[j]%2==0)
        {
            even = even + a[j];
        }    
        else
        {
            odd = odd + a[j];
        }
        
    }
    printf("Even number sum is %d\nodd number sum is %d",even,odd);
    

    return 0;
}