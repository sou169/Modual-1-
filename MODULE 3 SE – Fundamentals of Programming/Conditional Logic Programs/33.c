//WAP to input the week number and print week day
#include<stdio.h>
int main(){
	int w;
	printf("Enter week number(1-7):");
	scanf("%d",&w);
		if(w==1){
			printf("Mon");
		}
		else if(w==2){
			printf("Tue");
		}
		else if(w==3){
			printf("Wed");
		}
		else if(w==4){
			printf("Thu");
		}
		else if(w==5){
			printf("Fri");
		}
		else if(w==6){
			printf("Sat");
		}
		else if(w==7){
			printf("Sun");
		}
		else{
			printf("ENTER VALID WEEK NUMBER!");
		}
	return 0;
}
