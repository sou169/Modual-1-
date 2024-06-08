#include<stdio.h>
int main(){
    int j,i,k;
    for(i=1;i<=5;i++){
    	for(j=i;j<=5;j++){
        printf("  ");
    }
        	for(k=1;k<=(2*i-1);k++){
				printf(" *");
			}
			printf("\n");
    }
    return 0;
}

//i=1 j=1 to j=5 printf 4 space k=1 printf * 
//i=2 j=2 to j=5 printf 3 space k=1 to k=3 printf ***
//i=3 j=3 to j=5 printf 2 space k=1 to k=5 printf *****
//i=4 j=4 to j=5 printf 1 space k=1 to k=7 printf *******
//i=5 j=5 to j=5 printf 0 space k=1 to k=9 printf *********
