#include<stdio.h>

int main()
{
	int i;
	for(i=0;i<=20;i=i+2)
	{
		if(i==0)
			break;		
		
		else
			printf("%d\n",i);
	}
	return 0;
}
