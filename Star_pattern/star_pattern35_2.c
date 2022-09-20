#include<stdio.h>

int main()
{
    int i,k=0,a=3;
    printf("");

    for ( i = 1; i <=7 ; i++)
    {
        if (i==4-k)
        {
            printf("*");
            i=0;
           a--;
        }     
        
        if (i==4+k)
        {
            printf("*\n");
            i=0;
            k++;
        }
        else
        {
            printf(" ");
        }
    }
    
    return 0;
}
