#include<stdio.h>
int main()
{
	int i,j,k,arr[2][2][2];
	printf("\nEnter 8 values of Array: ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
			scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("\n-----Printing 3D Array-----\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
					printf("arr[%d][%d][%d] = %d \n",i,j,k,arr[i][j][k]);
			}
		}	
	}
}
