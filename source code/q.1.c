#include<stdio.h>
int sum(int a, int b);
int main()
{
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("Sum of two numbers = %d",c);
}
int sum(int a, int b)
{
	int p;
	p=a+b;
	return (p);
}

