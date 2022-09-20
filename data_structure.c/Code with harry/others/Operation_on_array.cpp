	//Operation on Array
	#include<stdio.h>
	int i;
//Traversal of Code
	void Display(int arr[],int size){
		for(i=0;i<size;i++)
		{
			printf("%2d ",arr[i]);
		}
		printf("\n");
	}
	
//Insertion
	int insertion(int arr[],int size,int capacity)
	{
		int element,pos;
		if(size>=capacity)
			return 0;
		
		printf("Enter a Element you want to insert:\n");
		scanf("%d",&element);	
		printf("Enter the Position you want to enter:\n");
		scanf("%d",&pos);
		pos -=1;
		for(i=size;i>pos;i--)
		{
			arr[i+1] = arr[i];
		}
		arr[pos] = element;
		return 0;
	}
	
//Deletion
	int Deletion(int size,int arr[])
	{
		int index;
		printf("Enter the index you want to delete:\n");
		scanf("%d",&index);
		for(i=index;i<size-1;i++)
			arr[i] = arr[i+1];
		size -= 1;
	}
	
int main()
	{
		int arr[10] = {45,86,91,27,35,67,45};
		int size = 7,capacity = 10;
		Display(arr,size);
		insertion(arr,size,capacity);
		size += 1;
		Display(arr,size);
		Deletion(size,arr);
		Display(arr,size);
	}
