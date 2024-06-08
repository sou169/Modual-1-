#include<stdio.h>
int main()
{
int s;
printf("\nInput monthly salary =");
scanf("%d",&s);
printf("\nAfter deducting 10%% insurance premium & 10%% loan installment");
printf("\nRemaining Salary is= %f",(s-(s*0.2)));
return 0;
}

