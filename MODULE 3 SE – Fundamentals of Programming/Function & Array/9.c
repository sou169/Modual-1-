#include<stdio.h>
struct employee1{
	int id;
	char name[100];
};

union employee2{
	int id;
	char name[100];
};

int main()
{
	struct employee1 emp1;
	union employee2 emp2;
	//You can scan more than one value in single scanf (Structure)
	printf("\nEnter id and name for Structure variable : ");
	scanf("%d %s",&emp1.id,&emp1.name);
	printf("\nid and name of Structure variable is %d & %s",emp1.id,emp1.name);
	//You can scan only one value in a scanf (Union)
	printf("\nEnter id for Union variable : ");
	scanf("%d",&emp2.id);
	printf("\nid of Union variable is %d",emp2.id);
	printf("\nEnter name for Union variable : ");
	scanf("%s",&emp2.name);
	printf("\nname of Union variable is %s",emp2.name);
	//Structure occupies memory of the total variable
	printf("\nSIZE OF STRUCTURE : %d",sizeof(emp1));
	//Union occupies the memory of a variable which has highest total memory
	printf("\nSIZE OF UNION : %d",sizeof(emp2));  
	return 0;
}
