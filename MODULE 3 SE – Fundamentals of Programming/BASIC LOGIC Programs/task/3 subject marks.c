#include<stdio.h>
int main()
{
	int a,b,c,total,pr,avg;
	printf("Enter sub 1 marks=");
	scanf("%d",&a);	
	printf("\nEnter sub 2 marks=");
	scanf("%d",&b);
	printf("\nEnter sub 3 marks=");
	scanf("%d",&c);
	total=a+b+c;
	avg=total/3;
	pr=(total*100)/300;
	printf("\nTotal= %d",total);
	printf("\nAverage= %d",avg);
	printf("\nPercent= %d %",pr);
	return 0;
}
