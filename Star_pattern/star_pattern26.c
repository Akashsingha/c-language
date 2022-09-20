 
 #include<stdio.h>
 
 int main()
 {
     int a,row;
    printf("Enter number of row:\n");
    scanf("%d",&row);

    for (int i = 1; i <= row; i++)
    {
        a = 64 + i;
        for (int j = 1; j <= row; j++)
        {
            if (j<=i)
            {
                printf(" %c",a);
                a--;
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
     
    return 0;
 }