#include<stdio.h>
int main()
{
int year,day;
printf("Enter years: ");
scanf("%d",&year);
day=year*365;
printf("%d Days",day);
printf("\nNow Enter days:");
scanf("%d",&day);
year=day/365;
printf("%d Years",year);
return 0;
}
