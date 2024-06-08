#include<stdio.h>
int main()
{
	int n,i,sum=0,j;
	printf("Enter n th number: ");
	scanf("%d",&n);
	for(j=1;j<=n;j++){
	printf(" ");
	for(i=1;i<=j;i++){
		if(i<n){
		printf("%d+",i);
		sum+=i;
	}
	else{
		printf("%d",i);
		sum+=i;
	}	
	}
}
	printf("\nSum is %d",sum);
	return 0;
}
