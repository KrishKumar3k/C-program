#include<stdio.h>
float sum();
int main()
{
	printf("The sum is=%f",sum());
	return 0;
}
float sum()
{
	int n=0,i;
	for(i=1;i<=10;i++)
		{
			n=n+i;
		}
	return n;
} 
