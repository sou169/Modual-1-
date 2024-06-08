#include <stdio.h>
#include <string.h>
int main()
{
char s[100];  
int i,v,c;
v=c=0;
printf("Enter the string : ");
gets(s);
    for(i=0;s[i];i++){
    	if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z'))
    	{
		if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		    v++;
        else
            c++;
        }
 
 	}
printf("No. of Vowels = %d\n",v);
printf("No. of Consonants = %d\n",c);
return 0;
}
