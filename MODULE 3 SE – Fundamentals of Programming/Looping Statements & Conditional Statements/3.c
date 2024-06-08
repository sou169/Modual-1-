#include<stdio.h>
int main()
{
	int i,num,even=0,odd=0,even_sum=0,odd_sum=0;
	for(i=1;i<=10;i++){
	printf("\nEnter value no. %d: ",i);
	scanf("%d",&num);
	if(num%2==0){
		even++;
		even_sum=even_sum+num;
	}
	else{
		odd++;
		odd_sum=odd_sum+num;
	}
}
	printf("\n**********************************");
	printf("\nTotal even numbers: %d",even);
	printf("\nTotal odd numbers: %d",odd);
	printf("\nSum of even numbers: %d",even_sum);
	printf("\nSum of odd numbers: %d",odd_sum);
	printf("\n**********************************");
	return 0;
}
