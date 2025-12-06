#include<stdio.h>
int main()
{
	char name[30],add[30];
	FILE *fp;
	fp=fopen("question17.txt","w");
	printf("Enter name and address : ");
	scanf("%s%s",name,add);
	fprintf(fp,"%s\t %s",name,add);
	fclose(fp);
	fp=fopen("question17.txt","r");
	fscanf(fp,"%s\t %s",name,add);
	printf("\n -----Ouput data -----\n ");
	printf("%s \t %s",name,add);
	fclose(fp);
return (0);
} 
