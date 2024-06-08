#include <stdio.h>
int main(){
    int j,i;
	char ch='A';
    for(i=65;i<70;i++){
        for(j=65;j<=i;j++){
        printf("%c ",j);
        }
    printf("\n");
    }
    return 0;
}

//ch='A' 
//i=65 j=65 print A 
//i=66 j=65 print A j=66 printf B
//i=67 j=65 print A j=66 printf B  j=67 print C
//i=68 j=65 print A j=66 printf B  j=67 print C  j=68 printf D 
//i=69 j=65 print A j=66 printf B  j=67 print C  j=68 printf D j=69 printf E 
