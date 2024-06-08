#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id,age;
	char name[100];
	char address[100];
};
int main()
{
	struct employee emp;
	int i;
		printf("Enter employee ID      : ",i+1);
		scanf("%d",&emp.id);
		printf("Enter employee Name    : ",i+1);
		scanf("%s",&emp.name);
		printf("Enter employee Address : ",i+1);
		scanf("%s",&emp.address);
		printf("Enter employee Age     : ",i+1);
		scanf("%d",&emp.age);
		printf("\n");
		
		printf("\nID of Employee       : %d",emp.id);
		printf("\nName of Employee     : %s",emp.name);
		printf("\nAddress of Employee  : %s",emp.address);
		printf("\nAge of Employee      : %d",emp.age);
		printf("\n");
	return 0;
}
