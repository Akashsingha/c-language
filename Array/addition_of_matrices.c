
#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];
    int k,l,i,j;
    printf("Enter 1st matrix:\n");

    for( k = 0; k < 3; k++)
    {
        for ( l = 0; l < 3; l++)
        {
            scanf("%d",&a[k][l]);
        }
        printf("\n");
    }
    printf("Enter 2nd matrix:\n");
    for( k = 0; k < 3; k++)
    {
        for ( l = 0; l < 3; l++)
        {
            scanf("%d",&b[k][l]);
        }
        printf("\n");
    }
    
	for( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            c[i][j]= a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
