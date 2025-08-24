#include<stdio.h>

int main()
{
	char str[100];
	scanf("%99s",&str);
	int length=0;
	while(str[length]!='\0')
	{
		length++;
	}
	printf("the length of string is %d",length);
	return ;
}

