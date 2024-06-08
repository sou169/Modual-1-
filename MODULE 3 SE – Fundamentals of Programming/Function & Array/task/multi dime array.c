#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("Enter the no of rows you want: ");
	scanf("%d",&row);
	printf("Enter the no of columns you want: ");
	scanf("%d",&col);
	printf("Enter %d values: ",row*col);
	int arr[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n-----Printing %dX%d Array-----\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
} 
