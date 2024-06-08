//Monday to Sunday using switch case
#include<stdio.h>
int main(){
	int a;
	printf("Enter no between 1 to 7: ");
	scanf("%d",&a);
	switch(a)
	{
	case 1: printf("MON");break;
	case 2: printf("TUE");break;
	case 3: printf("WED");break;
	case 4: printf("THU");break;
	case 5: printf("FRI");break;
	case 6: printf("SAT");break;
	case 7: printf("SUN");break;
	default: printf("Enter valid value");
	}
	return 0;
}
