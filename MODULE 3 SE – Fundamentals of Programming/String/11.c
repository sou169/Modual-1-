#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
char s[100];
int len,ch,i;
printf("Input the string : ");
fgets(s, sizeof s, stdin);  
i=strlen(s);
len=i;
printf("\nThe given sentence is             : %s",s);
printf("\nAfter Case changed the string  is : ");
for(i=0;i<len;i++){
    ch = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
    putchar(ch);
}
return 0;
} 
