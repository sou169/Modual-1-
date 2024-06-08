#include<stdio.h>
int i=0;
void hello();
int main()
{
	hello();
	return 0;
}

void hello()
{
	i++;
	printf("Hello function\n");
	
	if(i<5){	
		hello();
	}
}
