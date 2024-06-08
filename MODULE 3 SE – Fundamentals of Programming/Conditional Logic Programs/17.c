//Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter three angles:");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b+c==180){
		printf("Tringle can be formed");
	}
	else{
		printf("Tringle can't be fomred with these angles");
	}
	return 0;
}
