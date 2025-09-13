//arr9.Program to find the minimum and maximum of array element
#include<stdio.h>
int main()
{

	int arr[]={15,8,23,42,4,16,16};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min=arr[0];
	int max=arr[0];
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];

		if(arr[i]>max)
			max=arr[i];
	}

	printf("Minimum value is= %d\n",min);
	printf("Maximum value is= %d\n",max);
		
	return 0;
}

