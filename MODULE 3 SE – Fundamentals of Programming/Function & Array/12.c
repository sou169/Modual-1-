#include<stdio.h>
int main()
{
	int i;
	char name[5][50];
	for(i=0;i<5;i++){
	printf("Enter name %d : ",i+1);
	scanf("%s",&name[i]);
}
	printf("\nPrinting 5 students name: ");
	for(i=0;i<5;i++){	
	printf("\n%s",name[i]);
}
	return 0;
}
