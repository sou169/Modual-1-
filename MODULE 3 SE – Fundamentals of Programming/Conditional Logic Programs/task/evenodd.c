#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a%2==0){
	printf("EVEN");
}
else{
	printf("ODD");
}
return 0;
}
