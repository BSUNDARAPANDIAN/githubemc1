#include<stdio.h>
int main()
{
int num,i=2,flag=1;
scanf("%d",&num);
while(i<=num-1)
{
if(num%i==0)
{
	printf("not a prime number");
	flag=0;
	break;
}
i++;
}
if(flag==1)
	printf("Prime number");
return 0;
}

