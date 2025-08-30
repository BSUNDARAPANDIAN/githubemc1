#include<stdio.h>
//Program to find given number is Palindrome or not.
int main()
{
	int num,original,reversed=0,remainder;

	printf("Enter a number");
	scanf("%d",&num);
	original= num;

	if(num<0)
		num= -num;

	while(num>0)
	{
		remainder= num%10;
		reversed= reversed * 10 + remainder;
		num= num/10;
	}
		printf("%d\n",reversed);

		if(reversed==original)
			printf("The given %d is palindrome\n",reversed);
		else
			printf("The given %d is not palindrome\n",reversed);

	return 0;
}

