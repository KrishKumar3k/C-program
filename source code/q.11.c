#include<stdio.h>
int main()
{
	int num1,num2,sum,diff,mul,div,*x,*y;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	x=&num1;
	y=&num2;
	
	sum=*x + *y;
	diff=*x - *y;
	mul=*x * *y;
	div=(*x) / (*y);
	printf("Sum=%d\n",sum);
	printf("Difference=%d\n",diff);
	printf("Multiplication=%d\n",mul);
	printf("Division=%d\n",div);
return (0);
} 
