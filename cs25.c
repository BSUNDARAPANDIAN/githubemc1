#include<stdio.h>

int main()
{
	int i=0;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int length= sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	while(i<length)
	{
		sum=sum+arr[i];
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
