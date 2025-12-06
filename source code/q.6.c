#include<stdio.h>
struct student
{
int id;
char name[30];
int grade;
} s;

int main(){
	printf("Enter student id,name and grade : ");
	scanf("%d%s%d",&s.id,s.name,&s.grade);
	printf("The id %d is refered to %s who studies in grade %d.",s.id,s.name,s.grade);
	return 0;	
} 
