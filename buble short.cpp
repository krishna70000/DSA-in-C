#include<stdio.h>
int main()
{
	int size;
	printf("enter the size :-");
	scanf("%d",&size);
	
	
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("enter the element:-");
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	printf("the sorted array is :-");
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	
	
	
	
	
}
	

