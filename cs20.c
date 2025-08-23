#include<stdio.h>

int main()
{
	int i=0,n,/*f=0,*/firstterm=0,secondterm=1,newterm;
	scanf("%d",&n);
	while(i<n)
	{
		if(i<=1)
		{
			newterm=i;
		}
		else
		{
		//f= (i-1)+(i-2);
		newterm=firstterm+secondterm;
		firstterm= secondterm;
		secondterm=newterm;
	
		}
		printf("%d\n",newterm);
		i++;
	}
	return 0;
}
