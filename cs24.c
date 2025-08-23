#include<stdio.h>

int main()
{
	int i=0;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	while(i<sizeof(arr)/sizeof(arr[0]))
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return 0;
}

