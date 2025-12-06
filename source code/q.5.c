#include<stdio.h>
void main(){
	int i ,j ,mat[3][3],mat2[3][3],mat3[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("Enter the number for first matrix of [%d] [%d] : ",i,j);
				scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("Enter the number for second matrix of [%d] [%d] : ",i,j);
				scanf("%d",&mat2[i][j]);
		}
	}
	printf("The first matrix is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("%d \t",mat[i][j]);
		}
		if(j==3){
			printf("\n");
		}
	}
	printf("The second matrix is : \n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("%d \t",mat2
				[i][j]);
		}
		if(j==3){
			printf("\n");
		}
	}
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				mat3[i][j]=mat[i][j]+mat2[i][j];
		}
	}
	printf("The added matrix is : \n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("%d \t",mat3[i][j]);
		}
		if(j==3){
			printf("\n");
		}
	}
}
