#include<stdio.h>
int add(int x,int y);
int main()
{
	int a=10,b=20,c;
	c= add(a,b);
	printf("%d",c);
	return 0;
}

int add(int x,int y)
{
	int z;
	z= x+y;
	return z;
}

