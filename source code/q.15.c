#include<stdio.h>
int main()
{
	int num,i;
	int *p ;
	printf(" Enter any number : ") ;
	scanf("%d",&num);
	p = &num;
	for(i=1;i<=10;i++)
		{
			printf(" %d\n",(*p * i)) ;
		}
return (0);
} 
