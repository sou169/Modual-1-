//Accept month number and display month name
#include<stdio.h>
int main(){
	int w;
	printf("Enter month number(1-12):");
	scanf("%d",&w);
		if(w==1){
			printf("JAN");
		}
		else if(w==2){
			printf("FEB");
		}
		else if(w==3){
			printf("MAR");
		}
		else if(w==4){
			printf("APR");
		}
		else if(w==5){
			printf("MAY");
		}
		else if(w==6){
			printf("JUN");
		}
		else if(w==7){
			printf("JULY");
		}
		else if(w==8){
		printf("AUG");
		}
		else if(w==9){
			printf("SEP");
		}
		else if(w==10){
			printf("OCT");
		}
		else if(w==11){
			printf("NOV");
		}
		else if(w==12){
			printf("DEC");
		}
		else{
			printf("ENTER VALID MONTH NUMBER!");
		}
	return 0;
}
