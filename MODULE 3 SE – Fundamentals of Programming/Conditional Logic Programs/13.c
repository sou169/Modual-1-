//WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	n1<n2 ? (n1<n3?printf("%d is min",n1):printf("%d is min",n3)) : (n2<n3?printf("%d is min",n2):printf("%d is min",n3));
	return 0;
}
