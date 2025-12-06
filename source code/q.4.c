#include<stdio.h>
int fac(int);
void main(){
	int n;
	printf("Input a number = ");
	scanf("%d",&n);
	printf("The Factorial of %d is %d",n,fac(n));
}
int fac(int n){
	if (n==0 || n==1){
	
		return 1;}
	else{
		return (n*fac(n-1));}
	
}
