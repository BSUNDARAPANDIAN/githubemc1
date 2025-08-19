#include<stdio.h>
int main()
{
	int num1,num2;
	if(scanf("%d %d",&num1,&num2)!=2)
	{
		printf("Invalid input");
	return 1;
	}

	switch(num1>num2)
	{
		case 1: printf("maximum number is %d",num1);
			break;

		case 0: printf("maximum number is %d",num2);
			break;
	}
			return 0;
}	
