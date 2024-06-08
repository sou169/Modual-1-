#include<stdio.h>
int main(){
	float temp;
	printf("Enter temperature in Centigrade:");
	scanf("%f",&temp);
	if(temp>=40){
		printf("It's Very Hot");
	}
	else if(temp>=30){
		printf("It's Hot");
	}
	else if(temp>=20){
		printf("It's Normal");
	}
	else if(temp>=10){
		printf("It's Cold");
	}
	else if(temp>=0){
		printf("It's Very Cold");
	}
	else{
		printf("It's Freezing");
	}
	return 0;
}
