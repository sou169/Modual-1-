#include<stdio.h>
int main()
{
float w,l,h,a;
printf("\nInput length=");
scanf("%f",&l);
printf("\nInput width=");
scanf("%f",&w);
printf("\nInput height=");
scanf("%f",&h);
a=(2*((w*l)+(h*l)+(h*w)));
printf("\nCIRCUMFERENCE of rectangular prism=%f",a);
return 0;
}
