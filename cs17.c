#include<stdio.h>
int main()
{
	int i=0;
	int fact=1;
	int num;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact= i*fact;
	}
	printf("%d",fact);
	return 0;
}

