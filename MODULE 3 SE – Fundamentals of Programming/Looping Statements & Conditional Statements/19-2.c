#include <stdio.h>
int main(){
    int j,i,temp;
	char ch='A';
	temp=ch;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
        printf("%c ",temp);
        temp++;
        }
    printf("\n");
    }
    return 0;
}

//ch='A'
//temp=ASCII val of A = 65
//i=0 j=0 print A temp++
//i=1 j=0 print B temp++ j=1 printf C temp++
//i=2 j=0 print D temp++ j=1 print E temp++ j=2 print F temp++
//i=3 j=0 print G temp++ j=1 print H temp++ j=2 print I temp++ j=3 print J temp++
//i=4 j=0 print K temp++ j=1 print L temp++ j=2 print M temp++ j=3 print N temp++ j=4 print O temp++
