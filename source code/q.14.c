#include<stdio.h>
int main()
{
	int *p;
	int num[10],i,j,temp;
	for(i=0;i<10;i++)
		{
			printf("Enter num[%d] : ",i+1);
			scanf("%d",(num+i));
		}
	for(i=0;i<9;i++)
		{
			for(j=i+1;j<10;j++)
				{
					if(*(num+i)>*(num+j))
						{
							temp=*(num+i);
							*(num+i)=*(num+j);
							*(num+j)=temp;
						}
				}
		}
	printf("Sorted in Ascending Order \n");
	for(i=0;i<10;i++)
		{
			printf("%d\n",*(num+i));
		}
return (0);
} 
