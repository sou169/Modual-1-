//Check Number Is Positive or Negative
#include<stdio.h>
int main(){
	int a;
	printf("Enter a no. :");
	scanf("%d",&a);
	if(a<0){
		printf("-ve");
	}
	else{
		printf("+ve");
	}
	return 0;
}
