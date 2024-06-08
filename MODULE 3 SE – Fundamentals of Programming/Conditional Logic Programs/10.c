//WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main(){
	int a;
	printf("Enter a no. :");
	scanf("%d",&a);
	if(a>0){
		printf("+ve");
	}
	else if(a==0){
		printf("It's ZERO");
	}
	else{
		printf("-ve");
	}
	return 0;
}
