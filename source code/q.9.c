#include<stdio.h>
#include<string.h>
struct student
{
char name[30];
int grade;
char gender[10];
int sub1,sub2,sub3,sub4,sub5,total;
float per;
}s[5];

int main()
{
	int i;
	for(i=0;i<5;i++)
		{
			printf("Enter name,grade,gender, marks in five subjects : ");
			scanf("%s%d%s%d%d%d%d%d",s[i].name, &s[i].grade,s[i].gender,&s[i].sub1, &s[i].sub2, &s[i].sub3,
					&s[i].sub4, &s[i].sub5);
		}
	for(i=0;i<5;i++)
		{
			s[i].total=s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5;
			s[i].per=(float)s[i].total/5;
			}
	for(i=0;i<5;i++)
		{
			printf("Name: %s\n",s[i].name);
			printf("Grade:%d\n",s[i].grade);
			printf("Gender:%s\n",s[i].gender);
			printf("Total:%d\n",s[i].total);
			printf("Percentage:%0.2f\n\n",s[i].per);
		}
	printf("\n Female Records only \n");
	for(i=0;i<5;i++)
		{
			if(strcmp(s[i].gender,"Female")==0 || strcmp(s[i].gender,"female")==0)
			{
				printf("Name: %s\n",s[i].name);
				printf("Grade:%d\n",s[i].grade);
				printf("Gender:%s\n",s[i].gender);
				printf("Total:%d\n",s[i].total);
				printf("Percentage:%0.2f\n\n",s[i].per);
			}
		}
return 0;
} 
