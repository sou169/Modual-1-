#include<stdio.h>
int main()
{
	int i,a[5];
	printf("Enter 5 no : ");
	for(i=0;i<5;i++){
	scanf("%d",&a[i]);
}
	printf("\nReversed\n");
	for(i=4;i>=0;i--){
	printf("%d ",a[i]);
}
	return 0;
}
