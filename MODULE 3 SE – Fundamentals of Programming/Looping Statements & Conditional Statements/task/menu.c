#include<stdio.h>
int main()
{
	int n,bill=0,qua;	
	char ch;
	printf("\n--------M E N U--------",n);	
	printf("\n1. PIZZA    | 180/-");
	printf("\n2. BURGER   | 100/-");
	printf("\n3. SANDWICH | 80/-");
	printf("\n4. COFFEE   | 50/-");

	do{
	printf("\nEnter your choice: ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("\nYou have selected PIZZA !");
			printf("\nEnter Quantity: ");
			scanf("%d",&qua);
			bill+=qua*180;
			break;
		case 2:
			printf("\nYou have selected BURGER !");
			printf("\nEnter Quantity: ");
			scanf("%d",&qua);
			bill+=qua*100;
			break;
		case 3:
			printf("\nYou have selected SANDWICH !");
			printf("\nEnter Quantity: ");
			scanf("%d",&qua);
			bill+=qua*80;
			break;
		case 4:
			printf("\nYou have selected COFFEE !");
			printf("\nEnter Quantity: ");
			scanf("%d",&qua);
			bill+=qua*50;
			break;
		default:
			printf("\nEnter valid choice");
			break;
	}
		printf("\nYour bill amount is %d /-",bill);
		printf("\nDo u want to order more? (y or n): ");
		scanf(" %c",&ch);
}
	while(ch=='y' || ch=='Y');
	
	return 0;
}
