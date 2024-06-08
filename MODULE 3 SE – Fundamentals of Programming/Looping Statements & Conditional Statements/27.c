#include<stdio.h>
int main()
{
	int n,i,j;
	float sum=0;
	printf("Enter n th number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i<n){
		if(i%2==0){
		printf("(%d/%d) + ",i,i+1);
		sum-=(float)i/((float)i+1);
	}
	else{
		printf("(%d/%d) - ",i,i+1);
		sum+=(float)i/((float)i+1);
	}
	}
	else{
		if(i%2==0){
		printf("(%d/%d)",i,i+1);
		sum-=(float)i/((float)i+1);
	}
	else{
		printf("(%d/%d)",i,i+1);
		sum+=(float)i/((float)i+1);
	}
	}
	}
	printf("\nSum is %0.2f",sum);
	return 0;
}
