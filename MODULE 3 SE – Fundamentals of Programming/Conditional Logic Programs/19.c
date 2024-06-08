//Write a program in C to calculate and print the electricity bill of a given customer.
#include<stdio.h>
int main(){
	int id;
	char name[20];
	float unit,total;
	printf("Enter Customer ID:");
	scanf("%d",&id);
	printf("Enter Customer name:");
	scanf("%s",&name);
	printf("Enter Unit consumed:");
	scanf("%f",&unit);
	printf("\n************************************************************\n");
	printf("Torrent Power ltd.");
	printf("\n************************************************************\n");
	printf("\nCUSTOMER ID:                                 %d",id);
	printf("\nCUSTOMER NAME:                               %s",name);
	printf("\nUNIT CONSUMED:                               %0.2f KWh\n",unit);
	if(unit>=800){
		total=unit*2;
	}
	else if(unit>=600){
		total=unit*1.8;
	}
	else if(unit>=350){
		total=unit*1.5;
	}
	else if(unit>0){
		total=unit*1.2;
	}
	else{
		printf("Enter Valid Unit value");
	}
	
	if(total>800){
		total=total*0.18;
		printf("\n\n================================================================");
		printf("\nTHE BILL EXCEEDS 800 /- Rs. SO ADDITIONAL 18% CHARGE IS APPLIED");
		printf("\n\nTOTAL AMOUNT:                                %0.2f Rs.",total);
		printf("\n\n================================================================");
	}
	else if(total<256){
		printf("\n\n================================================================");
		printf("\nThe minimum bill should be of Rs. 256/-");
		printf("\n\n================================================================");
	}
	else{
		printf("\n\n================================================================");
		printf("\nTOTAL AMOUNT:                                %0.2f Rs.",total);
		printf("\n\n================================================================");
	}
	
	printf("\n************************************************************");
	return 0;
}
