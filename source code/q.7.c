#include<stdio.h>
struct student
{
int id;
char name[30];
int grade;
} s[5];

int main(){
		int i;
		for(i=0;i<5;i++)
		{
		  printf("Enter student id,name and grade : ");
		  scanf("%d%s%d",&s[i].id,s[i].name,&s[i].grade);
		  }
		printf("-------Output-------\n");
		printf("ID\t Name\t Grade\n");
		for(i=0;i<5;i++)
		{
		  printf("%d\t %s\t %d\n",s[i].id,s[i].name,s[i].grade);
		  }
	return 0;
}
