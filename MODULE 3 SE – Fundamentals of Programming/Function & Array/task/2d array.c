#include<stdio.h>
int main()
{
	int i,j,arr[2][2];
	printf("Enter 4 values: ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n-----Printing 2D Array-----\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
