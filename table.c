#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int table;
    printf("Enter a number to print its table:\n");
    scanf("%d",&table);
    
    printf("Table of %d is:\n",table);
    int num = 1;
    while (num!=11)
    {
        printf("%d x %d = %d\n",table,num,table*num);
        ++num;
     
    }
    
    
    return 0;
}

