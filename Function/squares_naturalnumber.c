        //Write a function to calculate sum of sqauares of first N natural number

#include<stdio.h>

void func(void); // TNRN


int main()
{
    func();
    return 0;
}

void func(void)
{
    int N,s=0;
    printf("Enter a  natural number :\n");
    scanf("%d",&N);

    for (int i = 1; i <=N; i++)
    {
        s=s+i*i;
    }
    printf("Sum of squares of first %d natural number is : %d",N,s);
}