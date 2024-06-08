#include<stdio.h>
int main()
{
int input,year,month,day;
printf("Enter no. of days:");
scanf("%d",&input);
printf("============================================\n");
year=input/365;
printf("\t\t%d years",year);

year=input%365;
month=year/30;
printf("\n\t\t%d months",month);

month=year%30;
day=month;
printf("\n\t\t%d days",day);
printf("\n============================================");
return 0;
}
