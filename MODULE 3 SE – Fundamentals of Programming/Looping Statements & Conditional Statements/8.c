#include<stdio.h>
int main()
{
	int gre=0,rem,num;
	printf("Enter a no: ");
	scanf("%d",&num);
	while(num!=0){
			rem=num%10;
			num=num/10;
		if(rem>gre){
			gre=rem;
		}	
	}
	printf("Max no: %d",gre);
	return 0;
}
