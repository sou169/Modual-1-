#include<stdio.h>
int main()
{
	int num,first,last;
	printf("Enter a no: ");
	scanf("%d",&num);
	last=num%10;
	while(num!=0){
		first=num;
		num=num/10;		
	}
	printf("Sum of first & last digit: %d",(first+last));
	return 0;
}
