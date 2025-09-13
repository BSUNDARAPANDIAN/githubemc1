//arr8.Program to count the frequency of array element
#include<stdio.h>
int main()
{
	int arr[]={10,20,30,10,20,30,40};
	int n= sizeof(arr)/sizeof(arr[0]);

	int visited[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}

	for(i=0;i<n;i++)
	{
		if(visited[i]==1)
			continue;
		
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				visited[j]=1;
			}
		}
		printf("%d occur %d time",arr[i],count);
		printf("\n");
	}

	return 0;
}
