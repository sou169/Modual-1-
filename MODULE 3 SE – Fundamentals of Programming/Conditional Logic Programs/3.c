//WAP to check if the given year is a leap year or not
#include<stdio.h>
int main()
{
int m;
printf("Enter year:");
scanf("%d",&m);
if(m%4==0){
	printf("LEAP YEAR");
}
else{
	printf("NOT LEAP YEAR");
}
return 0;
}
