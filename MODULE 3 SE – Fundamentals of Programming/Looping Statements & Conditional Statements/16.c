#include<stdio.h>
int main()
{
	int i=1,sum=0,n;	
	printf("\nEnter a natural number u want to sum up: ");
	scanf("%d",&n);
	while(i<=n){
	sum+=i;	
	i++;
}
	printf("Sum of natural numberts 1 to %d is: %d",n,sum);
	return 0;
}
