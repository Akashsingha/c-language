#include<stdio.h>

int main()
{
    int k;
    for (int i = 0; i <= 5 ; i++)
    {
        k = 1;
        for (int j= 0; j <= 9 ; j++)
        {
            k--;
            if ( j>=6-i && j<=4+i && k ) 
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
    
    
    
    return 0;
}