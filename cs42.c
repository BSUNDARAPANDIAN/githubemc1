#include<stdio.h>
//Program to remove duplicate elements
int main()
{
	int n,i,j,k;

	printf("Enter number of elements\n");
	if(scanf("%d",&n)!=1||n<=0){
		printf("Invalid input\n");
		return 1;
	}
	
	int arr[n];
	printf("Enter the %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	//nested loop for remove duplicate
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n-1;k++){
					arr[k]=arr[k-1];
				}
				n--;
				j--;
			}
		}
	}

	printf("Array after removing duplicates\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("\n");
	return 0;
}


