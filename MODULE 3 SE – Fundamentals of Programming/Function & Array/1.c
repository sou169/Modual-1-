#include<stdio.h>
int max_val();
int main()
{
	max_val();
	return 0;
}

int max_val()
{
	int n,i,max;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d values : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("MAX VAL AMONG ARRAY IS : %d",max);
	return 0;
}
