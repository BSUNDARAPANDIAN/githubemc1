#include<stdio.h>

int main()
{
	int i=0,n;
//	int arr[100];
	int length;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	//find the length using built in function.
	 length=sizeof(arr)/sizeof(arr[0]);
	/*
	printf("enter the number of elements");
	scanf("%d",&n);

	printf("enter the n elements");
	while(i<n)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	
	largest=arr[0];
	while(i<n)
	{
		if(max>arr[i])
			max=arr[i];
	}
	printf("%d",largest);
	*/
	
	int max=0;

	while(length>i)
	{
		if(max<arr[i])
			max=arr[i];
		i++;
	}
	printf("%d",max);
	
	return 0;
}


