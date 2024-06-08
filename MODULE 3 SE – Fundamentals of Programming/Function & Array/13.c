#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=0;i<5;i++){
	printf("\nEnter no %d : ",i+1);
	scanf("%d",&a[i]);
	if(a[i]%2==0){
		printf("%d is EVEN\n",a[i]);
	}
	else{
		printf("%d is ODD\n",a[i]);
	}
}
	return 0;
}
