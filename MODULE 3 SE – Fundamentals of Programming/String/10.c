#include <stdio.h>
#include <stdlib.h>
int main()
{
char s[1000],sub[1000];
int pos,len,c=0;
printf("Enter String : ");
fgets(s, sizeof s, stdin);
printf("Enter the position and length of substring\n");
scanf("%d%d",&pos,&len);
while(c<len){
	sub[c]=s[pos+c-1];
    c++;
}
sub[c]='\0'; 
printf("Required substring is \"%s\"\n", sub); 
return 0;
}
