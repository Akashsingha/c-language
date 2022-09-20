
#include<stdio.h>

int main()
{
	int val,low,high,mid,a[20],n;
	int i,found,pos;
	//Input Array
	printf("Enter the size of Array: \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the Elements: ");
		scanf("%d",&a[i]);
	}
	printf("Array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter the value you want to search:\n");
	scanf("%d",&val);
	
	low = 0;
	high = n-1;
	
	while(low<=high)
	{
		mid = (low+high)/2;
		if(val==a[mid])
		{
			found =1;
			pos = mid+1;
			break;
		}
		else if(val>a[mid])
		{
			low = mid +1;
		}
else if(val<a[mid])
{
high=mid-1;
}
	}
	if(found==1)
	{
		printf("\n %d is found at %d position",val,pos);
	}
	else if(found==0)
	{
		printf("\n%d is not found",val);
	}
	return 0;
}
