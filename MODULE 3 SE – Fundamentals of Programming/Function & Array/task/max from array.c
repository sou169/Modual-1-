#include<stdio.h>
int main()
{
	int temp,i,j,arr[5];
	printf("Enter 5 val in array: ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<1;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]<arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\nMAX ELEMENT : %d",arr[0]);
	return 0;
}
