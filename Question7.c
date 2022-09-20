/* Write a c Program to compute the sum of the two given integer values.
 if the two values are the same,the return triple their sum*/

#include<stdio.h>

int main()
{
    int Number_1,Number_2;
    printf("Enter two number to find its sum :\n");
    scanf("%d%d",&Number_1,&Number_2);
    if (Number_1==Number_2)
    {
        printf("Your Number is same so triple value is : %d",3*(Number_1));
    }
    else
    {
        printf("Sum of the Two number is :%d",(Number_1+Number_2));
    }
    
    
    return 0;
}