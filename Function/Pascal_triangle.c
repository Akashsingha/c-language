
#include <stdio.h>

void shape(int);
int fact(int);
int combi(int,int);

int main()
{
    int row;
    printf("Enter number of row:\n");
    scanf("%d", &row);
    shape(row);
}

int fact(int n)
{
    int f=1;
    while (n>=1)
    {
        f=f*n;
        n--;
    }
    return(f);

}

int combi(int n,int r)
{
    return(fact(n)/fact(n-r)/fact(r));
}

void shape(int row)
{
    int k,a,r;
    for (int i = 1; i <= row; i++)
    {
        k = 1; r=0;
        for (int j = 1; j <= row+(row-1); j++)
        {
            if (j >= row+1 - i && j <= row-1 + i && k)
            {
                printf("%2d",combi(i-1,r));
                k=0; r++;
            }
            else
            {
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}
