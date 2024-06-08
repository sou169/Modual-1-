#include<stdio.h>
int main()
{
	int i,j,k,arr1[2][2],arr2[2][2],arr_mul[2][2];
	printf("\nEnter 4 values of Array 1: ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter 4 values of Array 2: ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			arr_mul[i][j]=0;
			for(k=0;k<2;k++){
				arr_mul[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	printf("\n-----Printing Multiplication Array-----\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr_mul[i][j]);
		}
		printf("\n");
	}
}
