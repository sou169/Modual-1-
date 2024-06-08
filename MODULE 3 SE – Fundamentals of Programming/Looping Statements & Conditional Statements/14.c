#include<stdio.h>
int main()
{
	int i,fact=1,n,j;
	for(j=1;j<=5;j++){
	printf("\nEnter value: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fact*=i;
	}
		printf("Factorial of %d is %d\n",n,fact);
		fact=1;
}
	return 0;
}
