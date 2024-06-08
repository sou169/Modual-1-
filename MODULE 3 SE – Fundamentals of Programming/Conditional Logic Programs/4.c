//WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main()
{
int a,b;
char op;
printf("Enter 1st no.:");
scanf("%d",&a);
printf("Enter 2nd no.:");
scanf("%d",&b);
printf("Enter Operator (+,-,*,/,%%): ");
scanf(" %c",&op);
if(op=='+'){
	printf("We're performing additon............\n");
	printf("%d%c%d = %d",a,op,b,a+b);
}
else if(op=='-'){
	printf("We're performing subtraction............\n");
	printf("%d%c%d = %d",a,op,b,a-b);
}
else if(op=='*'){
	printf("We're performing multiplication............\n");
	printf("%d%c%d = %d",a,op,b,a*b);
}
else if(op=='/'){
	if(b==0)
	{
	printf("Can't divide by 0");	
	}
	else
	{
	printf("We're performing division............\n");
	printf("%d%c%d = %d",a,op,b,a/b);
	}
}
else if(op=='%'){
	printf("We're performing modulo............\n");
	printf("%d%c%d = %d",a,op,b,a%b);
}
else{
	printf("Enter valid Operator!!!");
}
return 0;
}
