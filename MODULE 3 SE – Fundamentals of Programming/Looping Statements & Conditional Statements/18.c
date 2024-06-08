#include<stdio.h>
int main()
{
	int n,i=1;		
	printf("\nEnter value to print table: ",i);
	scanf("%d",&n);
	while(i<=10){
	 printf("\n%d X %d = %d",n,i,n*i);
	 i++;
	}
	return 0;
}
