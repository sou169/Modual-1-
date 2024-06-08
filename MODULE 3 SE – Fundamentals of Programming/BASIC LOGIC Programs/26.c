#include<stdio.h>
int main()
{
float f,c;
printf("Enter temp in F: ");
scanf("%f",&f);
c=((f-32)*5/9);
printf("%f in F is %f in C: ",f,c);
return 0;
}
