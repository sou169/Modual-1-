#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    int i,len;
	printf("Enter the string : ");
    fgets(s,sizeof(s),stdin);
	len=strlen(s);
	printf("The characters of the string in reverse are : ");
    for(i=len;i>=0;i--){
        printf("%c\t", s[i]);
    }
    return 0;
}
