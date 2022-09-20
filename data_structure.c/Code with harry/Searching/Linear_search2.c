#include<stdio.h>

	//Display all element
void Display(int a[],int n)
{
	int i;
	printf("Array is :\t");
	for(i=0;i<n;i++)
		printf("%3d ",a[i]);
	printf("\n");
}
	//User Input in the Array
int Input(int a[],int n)
{
	int i,element;
	printf("Enter Element you want to insert in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the Element You want to insert in %d position	",i+1);
		scanf("%d",&a[i]);
	}
	
	return 0;
}
	//Linear Search
void linear_search(int a[],int n,int element)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
			printf("Element is found in %d Position\n",i+1);
	}
	if(i==n)
		printf("Element is not found\n");
}

int main()
{
	int a[10],n,element,option;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	Input(a,n);
	
	do
	{
		printf("\n\t\t***Main menu***\n");
		printf("Choose option:\n 1. Display all element \n 2. Element you want to search\n ");
		scanf("%d",&option);
	switch(option)
	{
		case 1:	Display(a,n);
				break;
		case 2: printf("Enter the Element You want to Search:\n");
				scanf("%d",&element);
				linear_search(a,n,element);
				break;
	}
	}while(option<=3);
	return 0;
}
