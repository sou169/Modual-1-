#include<stdio.h>
#include<math.h>
int main()
{
int p,n;
float r,ci;
printf("Enter Principle amount:");
scanf("%d",&p);
printf("Enter Rate of Interest (in percent):");
scanf("%f",&r);
printf("Enter number of years:");
scanf("%d",&n);
ci=p*(pow((1+r/100),n));
printf("Your Compont Interest is=%0.0f",round(ci));	
return 0;	
}
