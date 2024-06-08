#include <stdio.h>
void rev_rec(char s[], int max);

int main() {
    int i=0,len=0,max;
    char s[100];
    printf("Enter String: ");
    gets(s);
    while(s[i]!='\0'){
        i++;
        len++;
    }
    max=len-1;
    rev_rec(s,max);
    return 0;
}

void rev_rec(char s[],int max){
    if(max>=0){
    	printf("%c",s[max]);
        max--;
        rev_rec(s,max);
    }
}
