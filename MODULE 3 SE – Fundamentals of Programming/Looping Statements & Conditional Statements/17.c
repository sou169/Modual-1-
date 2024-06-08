#include<stdio.h>
int main()
{
	int i=1,even=0,odd=0,n;	
	while(i<=5){	
	printf("\nEnter value %d: ",i);
	scanf("%d",&n);
	i++;
	if(n%2==0){
		even++;
	}
	else{
		odd++;
	}
}
	printf("\nNo. of EVEN: %d",even);
	printf("\nNo. of ODD: %d",odd);
	return 0;
}
