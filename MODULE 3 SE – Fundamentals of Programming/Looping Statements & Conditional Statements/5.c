#include<stdio.h>
int main()
{
	int i,fact=1,n;
	printf("Enter value: ");
	scanf("%d",&n);
	if(n<=0){
		printf("\nFactorial not possible!");
	}
	else{
	for(i=n;i>=1;i--){
		fact*=i;
	}
	printf("\nFactorial of %d is %d",n,fact);
}
	return 0;
}
