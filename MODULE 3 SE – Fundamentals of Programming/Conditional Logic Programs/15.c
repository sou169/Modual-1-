#include<stdio.h>
int main(){
	int p,c,m;
	printf("Let's check your eligibility for admission to a professional course");
	printf("\n=============================================================================\n");
	printf("Enter the marks obtained in Physics:");
	scanf("%d",&p);
	printf("\nEnter the marks obtained in Chemistry:");
	scanf("%d",&c);
	printf("\nEnter the marks obtained in Maths:");
	scanf("%d",&m);
	printf("\nTotal marks:%d",p+c+m);
	printf("\nTotal of Maths and Physics:%d",(p+m));
	printf("\n=============================================================================");
	if(m>=65 && p>=60 && c>=55 && (p+c+m)>=190 && (p+m)>=140){
		printf("\nYOU'RE ELIGIBLE!!!!!!!!!!");
	}
	else{
		printf("\nYou're not eligible, Better luck next time!\n");
	}
	return 0;
}
