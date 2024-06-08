#include<stdio.h>
int main()
{
	int temp,i,j,arr[5];
	printf("Enter 5 val in array: ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n-----BEFORE SORTING-----\n");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\n-----AFTER SORTING (ACCENDING)-----\n");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
