#include<stdio.h>
#include<math.h>
int main()
{
	int p,rem,num,arm,original;
	printf("Enter total number of digits: ");
	scanf("%d",&p);
	printf("Enter a no: ");
	scanf("%d",&num);
	original=num;
	while(num!=0){
			rem=num%10;
			arm+=pow(rem,p);
			num=num/10;	
	}
	if(original==arm){
		printf("It's ARMSTRONG");
	}
	else{
		printf("It's not ARMSTRONG");
	}
	return 0;
}
