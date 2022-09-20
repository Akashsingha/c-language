// Write a C program wheather a given positive number is a multiplication of 3 or a multiplication of 7

#include<stdio.h>

int main()
{
    int Num;
    printf("Enter a number to check the positive number is a multiplication of 3 or a multiplication of 7 :\n");
    scanf("%d",&Num);
    if (Num % 3 == 0)
    {
        printf("%d is divisible by 3\n",Num);
    }
    else 
    {
        printf("%d number is not divisible by 3 \n",Num);
    }
    if (Num % 7 == 0)
    {
        printf("%d is divisible by 7\n", Num);
    }
    else
    {
        printf("%d number is not divisible by 7 \n",Num);
    }

    return 0;
}    