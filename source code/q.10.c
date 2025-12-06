#include<stdio.h>
struct distance
{
int km;
int m;
}d1,d2,total;
void sum(struct distance dis1,struct distance dis2);

int main()
{
	printf("Enter first distance : ");
	scanf("%d%d",&d1.km,&d1.m);
	printf("Enter second distance : ");
	scanf("%d%d",&d2.km,&d2.m);
	sum(d1,d2);
return 0;
}
void sum(struct distance dis1,struct distance dis2)
{
	total.m=(dis1.m+dis2.m)%1000;
	total.km=dis1.km+dis2.km+(dis1.m+dis2.m)/1000;
	printf("Total km=%d m=%d",total.km,total.m);
} 
