//Write a C program to accept two integers and check whether they are equalor not
#include<stdio.h>
int main()
{
int a,b;
printf("Enter 2 no.:");
scanf("%d %d",&a,&b);
if(a==b){
	printf("Both are Equal");
}
else{
	printf("Not equal");
}
return 0;
}
