#include<stdio.h>
void swapv(int a, int b);
void swapr(int *a, int *b);
int main() {
	int a = 10, b = 20;
	swapv(a, b);
	printf("Call by value\n");
	printf("After swapping a = %d and b = %d\n", a, b);
	swapr(&a, &b);
	printf("Call by reference\n");
	printf("After swapping a = %d and b = %d\n", a, b);
return 0;
}
void swapv(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
}
void swapr(int *a, int *b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
} 
