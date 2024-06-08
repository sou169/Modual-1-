#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=50;i++){
		if(i<=9){
			printf("0%d\t",i);
		}
		else{
			printf("%d\t",i);
		}
	}
	return 0;
}
