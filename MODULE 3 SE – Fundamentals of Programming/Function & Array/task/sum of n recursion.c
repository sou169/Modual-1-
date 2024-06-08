#include<stdio.h>
int sum();
int main()
{
	printf("%d",sum(5));
	return 0;
}

int sum(int n)
{
	if(n>=1){	
	return n+sum(n-1);
	}
	else{
		return 0;// 15 + 0 = 15 
	}
}
