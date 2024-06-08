#include<stdio.h>
int main()
{
	int i=1,pal,rem,num,rev=0;
	while(i<=3){
	printf("\nEnter a no: ");
	scanf("%d",&num);
	pal=num;
	while(num!=0){
			rem=num%10;
			num=num/10;
			rev=rev*10+rem;	
	}
	if(pal==rev){
		printf("It's PLAINDROM\n");
	}
	else{
	printf("It's not PALINDROM\n");
	}
	pal=0,rem=0,rev=0;
	i++;
}
	return 0;
}
