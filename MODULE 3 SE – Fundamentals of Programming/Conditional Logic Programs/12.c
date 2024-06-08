//WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	n1>n2 ? (n1>n3?printf("%d is max",n1):printf("%d is max",n3)) : (n2>n3?printf("%d is max",n2):printf("%d is max",n3));
	return 0;
}
