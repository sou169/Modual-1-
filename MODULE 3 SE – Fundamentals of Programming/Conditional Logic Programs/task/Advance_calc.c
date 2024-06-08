#include<stdio.h>
int main()
{
int a,b;
char op;
printf("Enter 1st no.:");
scanf("%d",&a);
printf("Enter Operator (+,-,*,/,%%): ");
scanf(" %c",&op);

if(op=='+' || op=='-' || op=='*' || op=='/' || op=='%')
{
	printf("Enter 2nd no.:");
	scanf("%d",&b);
	switch(op)
	{
	case '+':
		printf("We're performing additon............\n");
		printf("%d %c %d = %d",a,op,b,a+b);
		break;
	case '-':
		printf("We're performing subtraction............\n");
		printf("%d %c %d = %d",a,op,b,a-b);
		break;
	case '*':
		printf("We're performing multiplication............\n");
		printf("%d %c %d = %d",a,op,b,a*b);
		break;
	case '/':
		if(b==0)
			{
				printf("Can't divide by 0");	
			}
		else
			{
				printf("We're performing division............\n");
				printf("%d %c %d = %d",a,op,b,a/b);
			}
				break;
	case '%':
			printf("We're performing modulo............\n");
			printf("%d %c %d = %d",a,op,b,a%b);
			break;
	default:
		printf("Enter valid Operator!!!");
		break;
	}
}
else
{
	printf("Enter Valid Operator!!!");
}
return 0;
}
