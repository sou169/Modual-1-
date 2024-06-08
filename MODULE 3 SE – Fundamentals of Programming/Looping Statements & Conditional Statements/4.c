#include<stdio.h>
int main()
{
	int i,num;
	printf("\nEnter the number of table u want to print: ");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",num,i,num*i);
	}
	return 0;
}
