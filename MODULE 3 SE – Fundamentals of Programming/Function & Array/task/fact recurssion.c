#include<stdio.h>
int fact();
int main()
{
	printf("%d",fact(5));
	return 0;
}

int fact(int n)
{
	if(n>=1){	
	return n*fact(n-1);//5*4*3*2*1=120	
	}
	else{
		return 1;//120 * 1= 120 
	}
}
