//WAP to find the largest of three numbers
#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3){
		printf("%d is Largest",n1);
	}
	else if(n2>n1 && n2>n3){
		printf("%d is Largest",n2);
	}
	else{
		printf("%d is Largest",n3);
	}
	return 0;
}
