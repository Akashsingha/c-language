/*Write a c Program to get the absolute difference between n and 51. 
If n is greater than 51 return triple the absolute difference*/

#include<stdio.h>

int main()
{
    int Num;
    printf("Enter a Number:\n");
    scanf("%d",&Num);
    if (Num>=51)
    {
        printf("Your number is greater so....\n Triple of the value is : %d \n",3*Num);
    }
    else
    {
        printf("Difference between %d and 51 is : %d\n",Num,51-Num);
    }
    
    
    return 0;
}