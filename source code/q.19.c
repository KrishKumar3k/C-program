#include <stdio.h>
int main() {
	FILE *fp;
	char name[30];
	fp = fopen("question19old.txt", "w");
	if (fp == NULL) 
	{
		printf("Error opening file.\n");
		return 1;
	}
	printf("Enter your name: ");
	scanf("%s", name);
	fprintf(fp, "%s", name);
	fclose(fp);
	if (rename("question19old.txt", "question19new.txt") != 0) {
		printf("Error renaming file.\n");
		return 1;
	}

	if (remove("question19new.txt") != 0) {
		printf("Error removing file.\n");
		return 1;
	}
	printf("File renamed and removed successfully.\n");
	return 0;
} 
