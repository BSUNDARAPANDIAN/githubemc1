#include<stdio.h>
//Program to create a claculator.
int main()
{
	int num1,num2;
	char op;

	printf("Enter the expression");
	scanf("%d %c %d",&num1,&op,&num2);
	
	if(num2!=0)
	{
	switch(op)
	{
		case '+': printf("%d %c %d= %d\n",num1,op,num2,num1+num2);
			  break;
		case '-': printf("%d %c %d= %d\n",num1,op,num2,num1-num2);
                          break;
		case '*': printf("%d %c %d= %d\n",num1,op,num2,num1*num2);
                          break;
		case '/': printf("%d %c %d= %d\n",num1,op,num2,num1/num2);
                          break;
		case '%': printf("%d %c %d= %d\n",num1,op,num2,num1%num2);
                          break;
		default : printf("Invalid input");
	}
	}
	else
		printf("Progrm craches with segmentation fault");
	return 0;
}
