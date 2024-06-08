#include<stdio.h>
int main()
{
int min,sec,hr;
printf("Enter minutes: ");
scanf("%d",&min);
sec=min*60;
hr=min/60;
printf("%d Hours",hr);
printf("\n%d Seconds",sec);
return 0;
}
