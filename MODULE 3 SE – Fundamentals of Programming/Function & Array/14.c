#include<stdio.h>
int main()
{
	int i,j,arr[3][3];
	printf("Enter 9 values: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n-----Printing 3 x 3 Matrix-----\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
