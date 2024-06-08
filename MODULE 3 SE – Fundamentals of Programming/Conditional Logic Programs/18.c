//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
	int cost,sell;
	printf("Enter manufacturing cost(in Rs.):");
	scanf("%d",&cost);
	printf("Enter selling price(in Rs.):");
	scanf("%d",&sell);
	if(cost>sell){
		printf("We're in LOSS of %d Rs.",(cost-sell));
	}
	else{
		printf("We're in PROFIT of %d Rs.",(sell-cost));
	}
	return 0;
}
