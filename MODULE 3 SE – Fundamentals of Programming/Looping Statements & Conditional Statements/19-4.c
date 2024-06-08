#include<stdio.h>
int main(){
    int j,i,k;
    for(i=1;i<=6;i++){
    	for(j=1;j<=i;j++){
        printf("* ");
    }
			printf("\n");
    }
    for(i=5;i>=1;i--){
    	for(j=1;j<=i;j++){
        printf("* ");
    }
			printf("\n");
    }
    return 0;
}
////1st half of loop
//i=1 j=1 printf *
//i=2 j=1 to j=2 printf **
//i=2 j=1 to j=3 printf ***
//i=2 j=1 to j=4 printf ****
//i=2 j=1 to j=5 printf *****
//i=2 j=1 to j=6 printf ******

//2nd half of loop
//i=5 j=1 to j=5 printf *****
//i=4 j=1 to j=4 printf ****
//i=3 j=1 to j=3 printf ***
//i=2 j=1 to j=2 printf **
//i=1 j=1 printf *
