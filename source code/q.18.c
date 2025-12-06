#include<stdio.h>
struct employee
{
	char e_name[30];
	char post[10];
	float salary;
};
int main()
{
	struct employee emp;
	char ch;
	FILE *fp;
	fp=fopen("question18.txt","w");
	while(ch!='n')
		{
			printf(" Enter employee name:\n ");
			scanf("%s",emp.e_name);
			printf(" Enter employee post:\n ");
			scanf("%s",emp.post);
			printf(" Enter employee salary:\n ");
			scanf("%f",&emp.salary);
			fwrite(&emp,sizeof(emp),1,fp);
			printf("\n Add more record (y/n): ");
			scanf(" %c",&ch);
		}
	fclose(fp);
	fp=fopen("question18.txt","r");
	printf("\n Data from the file: \n");
	printf("\n Name\t Post \t\t Salary");
	while(fread(&emp,sizeof(emp),1,fp))
		{
			printf("\n %s\t %s\t%f",emp.e_name,emp.post,emp.salary);
		}
	printf("\n");
	fclose(fp);
return (0);
} 
