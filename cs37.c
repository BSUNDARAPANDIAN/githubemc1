#include<stdio.h>
//program to find what are the armstrong numbers between 0 and 1000
int main()
{
	int num,n,sum,digit,cube;
	
	for(num=0;num<=1000;num++)
	{
		if(num>0)
		{
//	printf("Enter a number");
//	scanf("%d",&num);
	sum=0;
	n=num;
	while(n>0)
	{
	digit=n%10;
	cube=digit*digit*digit;
	sum=sum+cube;
	n=n/10;
	}
//	printf("%d\n",sum);
	
	if(num==sum)
		printf("The %d is armstrong\n",num);
		}
	}	
	return 0;
}

