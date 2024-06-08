#include<stdio.h>
int main()
{
int day,month,year;
printf("Enter no. of years: ");
scanf("%d",&year);
month=year*12;
day=year*365;
printf("No. of months:%d",month);
printf("\nNo. of days:%d",day);
return 0;
}
