#include<stdio.h>
int main()
{
	int rem,num,rev=0;
	printf("Enter a no: ");
	scanf("%d",&num);
	for(;num!=0;){
			rem=num%10;
			num=num/10;
			rev=rev*10+rem;	
	}
	printf("Reverse no: %d",rev);
	return 0;
}
