#include<stdio.h>
void area_perimeter(int l, int b);
int main()
{
	int l,b;
	printf("Enter length and breadth :");
	scanf("%d%d",&l,&b);
	area_perimeter(l,b);
	return 0;
}
void area_perimeter(int l, int b)
{
	int area,perimeter;
	area=l*b;
	printf("Area of rectangle = %d",area);
	perimeter=2*(l+b);
	printf("\nPerimeter of rectangle = %d",perimeter);
} 
