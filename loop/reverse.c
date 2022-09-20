/*write a program to reverse a numbe*/
#include<stdio.h>

int main()
{
    int a,r,y=0;
    printf("Enter a number to reverse it ");
    scanf("%d",&a);
    while(a!=0)
    {
        r = a%10 ;   //reminder of digit (ones digit)
        y = y*10+r;    //multiplicatiobn of a = 243/10=24.00 remainder = 3 ; 0+3 ; 10+4 ;
        a = a/10;
    }
    printf("Reverese of the number is %d",y);
    return 0;
}