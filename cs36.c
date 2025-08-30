#include<stdio.h>
//Program for Multiplication table
int main()
{
	int num,i=0,result;

	printf("Enter the which table you want");
	scanf("%d",&num);

	do
	{
		result= i* num;
		printf("%d x %d= %d\n",i,num,result);
		i++;
	}while(i<=10);

	return 0;
}


