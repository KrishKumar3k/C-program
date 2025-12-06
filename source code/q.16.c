#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	printf("\n Input data (to exit press ctrl+z)=");
	fp=fopen("question16.txt","w");
	while((ch=getchar())!=EOF)
		{
			putc(ch,fp);
		}
	fclose(fp);
	printf("\n Output data\n ");
	fp=fopen("question16.txt","r");
	while((ch=getc(fp))!=EOF)
		{
			putchar(ch);
		}
	fclose(fp);
return (0);
} 
