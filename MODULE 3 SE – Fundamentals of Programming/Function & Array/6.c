#include<stdio.h>
int main()
{
	int i,j,k;
	int arr1[2][2],arr2[2][2],result[2][2]; 
	printf("\n-----ASSUMING 2X2 MATRIX-----\n");
	printf("\nEnter %d values of Array 1: ",2*2);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter %d values of Array 2: ",2*2);
	for(i=0;i<2;i++){  
		for(j=0;j<2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("\n-----Printing Addition Array-----\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",result[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			result[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	printf("\n-----Printing Subtraction Array-----\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",result[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			result[i][j]=0;
			for(k=0;k<2;k++){
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	printf("\n-----Printing Multiplication Array-----\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
