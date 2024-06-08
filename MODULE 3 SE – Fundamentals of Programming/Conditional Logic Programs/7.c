//Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
	int a;
	printf("Enter Marks: ");
	scanf(" %d",&a);
	if (a<35){
		printf("FAIL!!!");
	}
	else{
		printf("PASS");
	}
	return 0;
}
