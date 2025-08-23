#include<stdio.h>
int main()
{
	int i=0;
	int digit;
	int start,final=0,num;
	scanf("%d",&num);
	start= num;
	while(num>0)
	{
		digit=num%10;
		final=final * 10 + digit;
		num=num/10;
		
	}
	printf("%d",final);
	if(start == final)
		printf("the number is pallindrome");
	else
		printf("the number is not pallindrome");
	return 0;
}
