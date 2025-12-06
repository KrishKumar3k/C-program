#include <stdio.h>
int main() {
	char name[30];
	int age, length;
	FILE *fp;
	fp = fopen("question20.txt", "w");
	printf("Enter your name: \n");
	scanf("%s", name);
	printf("Enter your age: \n");
	scanf("%d", &age);
	fprintf(fp, "%s %d", name, age);
	length = ftell(fp);
	rewind(fp);
	fscanf(fp, "%s", name);
	fscanf(fp, "%d", &age);
	fclose(fp);
	printf("Name= %s\nAge= %d\n", name, age);
	printf("Total number of characters in file is %d\n\n", length);
	printf("---------------------------------\n");
	printf("Second process \n");
	FILE *fp2;
	fp2 = fopen("question20.txt", "r");
	fseek(fp2, 0, SEEK_END);
	printf("%ld is the no of character in file.\n", ftell(fp2));
	fclose(fp2);
	return 0;
} 
