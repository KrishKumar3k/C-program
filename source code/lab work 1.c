#include<stdio.h>
int v;
int c[10];
int inp,i;
void input();
void menu();
void maxmin();
void search_number();
void odd_even_display();

int main(){
	input();
	menu();
	return 0;
}
void input(){
	printf("Enter the no of data you want to save:");
	scanf("%d",&v);
			printf("Enter numbers : \n");
	for(i=0;i<v;i++){
		scanf("%d",&c[i]);
	}
}
void menu(){
	printf("Menu Bar \n");
	printf("1.Max_Min \n2.Search_number \n3.odd_even_display \n4.Exit \n");
	scanf("%d",&inp);
	switch(inp){
		case(1):
			maxmin();
			break;
		case (2):
			search_number();
			break;
		case(3):
			odd_even_display();
			break;
		case(4):
			exit(0);
			break;
		default:
			printf("Sorry wrong number\n");
	}
}
void maxmin(){
	int i,max,min;
max=c[2];
min=c[1];
for(i=0;i<v;i++)
{
 if(max<c[i]){
 	max=c[i];
 }else if(min>c[i]){
 	 min=c[i];
 }
}printf("\nmaximum value=%d \nminimum value=%d\n\n",max,min);
menu();
}
void search_number(){
	int i,k,r=0;
	printf("Enter the number you want to search : ");
	scanf("%d",&k);
	for(i=1;i<v;i++){
	if(c[i]==k){
		r=1;
	break;}}
if (r==1){
		printf("%d is present at palce %d\n\n",k,i);
}else{
		printf("non\n\n");}
		
	menu();
	}
void odd_even_display(){
	
 int i,odd=0,even=0;

    for(i=0;i<v;i++){
	  if(c[i]%2==0){
	      even++;
     } else{ 
     odd++;
   }}
	 printf("The total odd number are %d and even number are %d\n\n",odd,even);
	 menu();
}
