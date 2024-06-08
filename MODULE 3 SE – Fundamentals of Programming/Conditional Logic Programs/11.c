//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main(){
	int a;
	printf("Enter a no. :");
	scanf("%d",&a);
	a%2==0 ? printf("EVEN")  : printf("ODD");
	return 0;
}
