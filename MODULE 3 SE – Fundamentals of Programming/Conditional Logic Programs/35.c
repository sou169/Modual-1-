#include<stdio.h>
int main(){
	int month;
	printf("Enter month no:");
	scanf("%d",&month);
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		printf("Number of Days in no.%d month is 31",month);
	}
	else if(month==4 || month==6 || month==9 || month==11){
		printf("Number of Days in no.%d month is 30",month);
	}
	else if(month==2){
		printf("Number of Days in no.%d month is 28 (not leap)",month);
	}
	else{
		printf("Enter Valid value");
	}
	return 0;
}
