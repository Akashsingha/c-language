#include<stdio.h>

int fun(int row)   /* Printing function of * (Triangular star patter)*/
{
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j < i;j++)
        {
            printf("*");
        }
        printf("\n");
    }  
}
int fun2(int row)
{
       for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j < row-i; j++)
        {
            printf("*");            
        }
        
        printf("\n");
    }
}

int main()
{
    while (1)
    {
    int opt,dec,row;
    printf("Select one of these:\n 1.Triangular star pattern\n 2.Reverse triangular star pattern\n");
    scanf("%d",&opt);
    printf("How much row do you need\n");
    scanf("%d", &row);
    
    if (opt==1)
    {
        fun(row);    
    }
    else if (opt==2)
    {
        fun2(row);
    }
    else
    {
        printf("Invalid input");
    }
    
    printf("Do you want to exit\n 1.Yes  2.No\n");
    scanf("%d", &dec);
        if (dec == 1)
        {
            goto end;
        }
    }
end:
}
