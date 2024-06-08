#include<stdio.h>
int main()
{
	int i,fact,n;
	printf("Enter value: ");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		fact*=i;
		i--;
	}
	printf("Fact: %d",fact);
	return 0;
}
