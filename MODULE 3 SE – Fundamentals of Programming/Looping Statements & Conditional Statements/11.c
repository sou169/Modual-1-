#include<stdio.h>
int main()
{
	int i;
	char name[100];
	for(i=0;i<=4;i++)
	{
		printf("Enter Name: ");
		scanf(" %s",&name);
		printf("\nThe name you have entered is:%s",name);
		printf("\n\n********************\n");
	}
	return 0;
}
