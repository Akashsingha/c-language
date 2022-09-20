// Write a C Program to check two given integer and return true if one of them is 30 or if their sum is 30

#include<stdio.h>

int main(void)
{
    int one,two,Result;
    printf("Enter two number:\n");
    scanf("%d%d",&one,&two);
    Result = one == 30 || two == 30 || (one+two == 30) ;
    printf("%d",Result);
}