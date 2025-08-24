#include<stdio.h>

int main()
{
	int base,exponent;
	long long result=1;

	if(scanf("%d",&base)!=1)
		return 1;
	if(scanf("%d",&exponent)!=1 || exponent<0)
		return 1;

	int i=0;
	while(i<exponent)
	{
		result= result*base;
		i++;
	}
	printf("%d^%d =%lld\n",base,exponent,result);
	return 0;
}
