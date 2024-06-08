#include<stdio.h>
int main()
{
int p,c,m,total;
float pr;
printf("Enter Phy, Chem, Math marks:");
scanf("%d %d %d",&p,&c,&m);
total=p+c+m;
pr=total/3;
printf("Total=%d\n",total);
printf("Percentage=%0.2f %%\n",pr);
if(pr>=80){
	printf("GRADE A");
}	
else if(pr>=60){
	printf("GRADE B");
}	
else if(pr>=35){
	printf("GRADE C");
}	
else if(pr<0){
	printf("Enter Valid Percentage");
}	
else{
	printf("FAIL!! BETTER LUCK NEXT TIME");
}
return 0;
}
