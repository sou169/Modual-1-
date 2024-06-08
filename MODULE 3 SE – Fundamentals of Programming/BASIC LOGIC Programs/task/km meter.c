#include<stdio.h>
int main()
{
	float in_km,in_meter,km_to_meter,meter_to_km;
	{
	printf("\nEnter distance in KM:");
	scanf("%f",&in_km);
	km_to_meter=in_km*1000;
	printf("\n%0.3f KM in METER is= %0.3f METER",in_km,km_to_meter);
	}
	
	{
	printf("\nEnter distance in METER:");
	scanf("%f",&in_meter);
	meter_to_km=in_meter/1000;
	printf("\n%0.3f METER in KM is= %0.3f KM",in_meter,meter_to_km);
	}
}
