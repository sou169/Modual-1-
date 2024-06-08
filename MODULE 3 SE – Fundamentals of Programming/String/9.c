#include <stdio.h>
#include <string.h>
int main() 
{
char str[100];
int i,max=0;
printf("Enter a string: ");
gets(str);	
for(i=0;str[i] != '\0';i++){
	if(str[i]!=' '){
		 max++;
	}
}
printf("Maximum number of characters(alphabets) in the string: %d\n",max);
return 0;
}

