#include<stdio.h>

int main()
{
	int i=0;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int length=sizeof(arr)/sizeof(arr[0]);
	int min=arr[0];
	while(i<length)
	{
		if(min>arr[i])
			min=arr[i];
		i++;
	}
	printf("smallest element is %d\n",min);
	return 0;
}



