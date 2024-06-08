#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter n th number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i<n){
		printf("(%d*%d) + ",i,i);
		sum+=(i*i);
	}
	else{
		printf("(%d*%d)",i,i);
		sum+=(i*i);
	}	
	}
	printf("\nSum is %d",sum);
	return 0;
}
