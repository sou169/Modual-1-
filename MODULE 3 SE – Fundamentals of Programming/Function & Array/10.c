#include<stdio.h>
int main()
{
	int pal,rem,num,rev=0;
	printf("Enter a no: ");
	scanf("%d",&num);
	pal=num;
	for(;num!=0;){
			rem=num%10;
			num=num/10;
			rev=rev*10+rem;	
}
	if(pal==rev){
		printf("It's PLAINDROM");
	}
	else{
	printf("It's not PALINDROM");
	}

	return 0;
}
