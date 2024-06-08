#include<stdio.h>
int main()
{
	int i=1,sum=0,n;	
	while(i<=10){
	printf("\nEnter value %d: ",i);
	scanf("%d",&n);
	sum+=n;	
	i++;
}
	printf("Sum of entered 10 numbers is: %d",sum);
	return 0;
}
