#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id,age;
	char name[100];
	char address[100];
};
int main()
{
	int i,n;
	printf("How many employee are in your company : ");
	scanf("%d",&n);
	struct employee emp[n];
	for(i=0;i<n;i++){
		printf("Enter employee %d ID      : ",i+1);
		scanf("%d",&emp[i].id);
		printf("Enter employee %d Name    : ",i+1);
		scanf("%s",&emp[i].name);
		printf("Enter employee %d Address : ",i+1);
		scanf("%s",&emp[i].address);
		printf("Enter employee %d Age     : ",i+1);
		scanf("%d",&emp[i].age);
		printf("\n");
	}
	for(i=0;i<n;i++){
		printf("\nID of Employee %d      : %d",i+1,emp[i].id);
		printf("\nName of Employee %d    : %s",i+1,emp[i].name);
		printf("\nAddress of Employee %d : %s",i+1,emp[i].address);
		printf("\nAge of Employee %d     : %d",i+1,emp[i].age);
		printf("\n");
	}
	return 0;
}
