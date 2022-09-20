#include<stdio.h>

int main()
{
	int i,j,a='A',c,row;
	printf("Enter a number:\n");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		c = a;	
		for(j=1;j<=row;j++)
		{
			if(j>=(row+1)-i)
			{
				printf("%c",c);
				c--;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		a++;
		a = a+i;
		
	}
	
}
