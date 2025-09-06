#include<stdio.h>
//Read n number of values of array and display them in reverse order.
int main()
{
	int arr[10];
	
	int size,i,j;
	printf("Enter the size of array:\n ");
	if(scanf("%d",&size)!=0 && size<1)
	{
		printf("Invalid size\n");
		return 1;
	}


	printf("Enter the %d elements of array\n",size);
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array of %d elements\n",size);
	for(i=0,j=size-1;i<=j-1;i++,j--)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;

	//	printf("%d\t",arr[i]);
	}
	

	printf("Array after reversed\n");
	for(i=0;i<=size-1;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
