#include<stdio.h>
int main()
{
	int i,j,arr1[2][2],arr2[2][2],arr_add[2][2];
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
			arr_add[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("\n-----Printing Addition Array-----\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr_add[i][j]);
		}
		printf("\n");
	}
}
 
