#include<stdio.h>
void series (int *p);
int main()
{
	int *p;
	int n=10;
	p=&n;
	series(&n);
return (0);
}
void series(int *p)
{
	int a=7,i;
	for(i=1;i<=*p;i++)
		{
			printf("%5d",a);
			if(a%2==0){
				a=a/2;
			}else{
				a=a*3+1;
			}
		}
} 
