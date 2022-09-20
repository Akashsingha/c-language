#include<stdio.h>

int main()
{
    int a,b,i,j;
    printf("Enter a number:\n");
    scanf("%d",&b);
    a=1;
    for (int i = 1; i <=b ; i = i*10)
    {
        
        a++;
       //printf("i = %d and a = %d\n",i,a);
    }
  printf("%d ia a %d digit number",b,a-1);  
    return 0;
}