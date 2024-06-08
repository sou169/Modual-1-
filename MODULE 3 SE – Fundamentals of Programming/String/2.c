#include <stdio.h>
#include <stdlib.h>
int main()
{
int i=0;
char s[100]; 
printf("Enter string : ");
fgets(s,sizeof(s),stdin);
printf("\nSeperating characters of string :\n");
    while(s[i]!='\0'){
       printf("%c\t", s[i]);
       i++;
    }
    return 0;
}

