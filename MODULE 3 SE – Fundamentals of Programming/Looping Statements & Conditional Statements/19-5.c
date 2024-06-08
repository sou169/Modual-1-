#include<stdio.h>
int main(){
    int j,i,temp=1;
    for(i=1;i<=5;i++){
    	for(j=1;j<=i;j++){
        printf("%d ",temp);
    temp++;
	}
		printf("\n");
    }
    return 0;
}

//temp=1
//i=1 j=1 printf 1 temp++ 
//i=2 j=1 printf 2 temp++ j=2 printf 3 temp++
//i=3 j=1 printf 4 temp++ j=2 printf 5 temp++ j=3 printf 6 temp++ 
//i=4 j=1 printf 7 temp++ j=2 printf 8 temp++ j=3 printf 9 temp++ j=4 printf 10 temp++
//i=5 j=1 printf 11 temp++ j=2 printf 12 temp++ j=3 printf 13 temp++ j=4 printf 14 temp++ j=5 printf 15 temp++
