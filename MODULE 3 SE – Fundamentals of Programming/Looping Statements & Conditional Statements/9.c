#include<stdio.h>
int main()
{
	int sum=0,rem,num;
	printf("Enter a no: ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		num=num/10;
		sum+=rem;		
	}
	printf("Sum: %d",sum);
	return 0;
}
