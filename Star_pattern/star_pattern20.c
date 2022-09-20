#include<stdio.h>

int main()
{
    int a,b,row;
    printf("Enter a number:\n");
    scanf("%d",&row);

    for (int i = 1; i <=row; i++)
    {
        a='A';
        b=1;
        for (int j = 1; j <=(row*2) ; j++)
        {
           if (j>=(row+1)-i && j<=i+row)
           {
              if (j<=row)
              {
                  printf("%c", a);
                  a++;
              }
              else
              {
                 printf("%d",b);
                 b++;
              }
               
              
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