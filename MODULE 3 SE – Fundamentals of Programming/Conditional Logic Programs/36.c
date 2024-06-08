#include<stdio.h>
int main(){
	float unit,bill;
	printf("Enter the unit consumed:");
	scanf("%f",&unit);
	if(unit<=50){
		bill=unit*0.5;
	}
	else if(unit<=150){
		bill= (0.5*50) + ((unit-50)*0.75);
	}
	else if(unit<=250){
		bill= 25+75+ ((unit-150)*1.2);
	}
	else{
		bill= 100+120 + ((unit-250)*1.5);
	}
	printf("\nWith 20%% additional surcharge....\n");
	printf("Bill amount: %0.2f Rs.",(bill+bill*0.2));
	return 0;
}
