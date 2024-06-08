#include<stdio.h>
int main()
{
	int n,i,j,type,temp;
	printf("\nEnter size of arrays : ");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	printf("\n---ENTER VALUES FOR ARRAY 1---\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("\n---ENTER VALUES FOR ARRAY 2---\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}
	printf("\n---CHOOSE SORTING TYPE---\n1.Ascending\n2.Descending\n");
	scanf("%d",&type);
	printf("\n---BEFORE SORTING---\n");
	printf("\n--Array 1--\n");
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
	printf("\n--Array 2--\n");
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
	if(type==1){
		printf("\n---Ascending sorting of Array 1---\n");
		for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr1[i]>arr1[j]){
				temp=arr1[j];
				arr1[j]=arr1[i];
				arr1[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
			printf("\n---Ascending sorting of Array 2---\n");
		for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr2[i]>arr2[j]){
				temp=arr2[j];
				arr2[j]=arr2[i];
				arr2[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
	}
	else if(type==2){
		printf("\n---Descending sorting of Array 1---\n");
		for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr1[i]<arr1[j]){
				temp=arr1[j];
				arr1[j]=arr1[i];
				arr1[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
			printf("\n---Descending sorting of Array 2---\n");
		for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr2[i]<arr2[j]){
				temp=arr2[j];
				arr2[j]=arr2[i];
				arr2[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
	}
	else{
		printf("\nEnter valid choice !!!!!!!\n");
	}
	return 0;
}
