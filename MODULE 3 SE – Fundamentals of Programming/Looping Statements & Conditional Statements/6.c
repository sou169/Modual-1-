#include<stdio.h>
int main()
{
	int num,i,a=0,b=1,c=0;
	printf("Enter how many terms you want: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
