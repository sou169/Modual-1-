#include<stdio.h>
int main()
{
char emp1,emp2,emp3,emp4,emp5;
float total,avg,es1,es2,es3,es4,es5;
 
printf("Enter emp 1 name : ");
scanf("%s",&emp1);
printf("Enter emp 1 salary : ");
scanf("%f",&es1);
printf("Enter emp 2 name : ");
scanf("%s",&emp2);
printf("Enter emp 2 salary : ");
scanf("%f",&es2);
printf("Enter emp 3 name : ");
scanf("%s",&emp3);
printf("Enter emp 3 salary : ");
scanf("%f",&es3);
printf("Enter emp 4 name : ");
scanf("%s",&emp4);
printf("Enter emp 4 salary : ");
scanf("%f",&es4);
printf("Enter emp 5 name : ");
scanf("%s",&emp5);
printf("Enter emp 5 salary : ");
scanf("%f",&es5);
total = es1+es2+es3+es4+es5;
avg = (es1+es2+es3+es4+es5)/5;	
printf("Avg salary: %f",avg);
printf("\nTotal salary: %f",total);
return 0;
}
