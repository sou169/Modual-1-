//WAP to accept the height of a person in centimeters and categorize thep erson according to their height
#include<stdio.h>
int main(){
	int a;
	printf("Enter your height (in cm): ");
	scanf(" %d",&a);
	if (a>=170){
		printf("You're TALL !!!");
	}
	else if(a>=150){
		printf("You're Average");
	}
	else{
		printf("You're SHORT HAHAHA");
	}
	return 0;
}
