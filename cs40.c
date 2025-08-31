#include<stdio.h>
//To find the sum of element in the lower triangular matrix.
int main()
{
	int n,i,j;
	int sum= 0;
	
	printf("Enter size of square matrix\n");
	if(scanf("%d",&n)!=1||n<=0)
	{
		printf("Invalid input");
		return 1;
	}
	
	int matrix[n][n];
	printf("Enter the elements of %dx%d matrix\n",n,n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>=j){
				sum= sum+matrix[i][j];
			}
		}
	}
	printf("Sum of lower tringular  matrix is %d\n ",sum);

	return 0;
}
			

