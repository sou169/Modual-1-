#include<stdio.h>
#include<math.h>
int main()
{
float total,p,r,t,ci;
printf("Enter Principle amount:");
scanf("%f",&p);
printf("Enter Rate of Interest:");
scanf("%f",&r);
printf("Enter Time period in years:");
scanf("%f",&t);
total=p*(pow(1+r/100,t));
ci=total-p;
printf("\nCompount Interest(round of)          = %0.0f Rs.",round(ci));
printf("\nTotal Amount with Interest(round of) = %0.0f Rs.",round(total));
return 0; 
}
