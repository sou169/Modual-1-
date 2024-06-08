#include<stdio.h>
int main()
{
int p,n;
float r,i;
printf("Enter Principle amount:");
scanf("%d",&p);
printf("Enter Rate of Interest (in percent):");
scanf("%f",&r);
printf("Enter number of days:");
scanf("%d",&n);
i=(p*r*n)/100;
printf("Your Interest is=%0.2f",i);	
return 0;	
}
