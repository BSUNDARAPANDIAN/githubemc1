#include<stdio.h>

int main(void)
{
	char str[256];

	if(!fgets(str,sizeof(str),stdin))
		return 1;
	int i= 0;
	while(str[i]!='\0')
	{
		if(str[i]>= 'a' && str[i]<='z')
		{
		str[i]= str[i]-('a'-'A');
		}
		i++;
	}
	printf("the upper case string are %s",str);
	return 0;
}
