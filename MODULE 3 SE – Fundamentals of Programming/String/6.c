#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{   //NOTE : THIS COUNTS SHIFT BUTTON AS A SPECIAL CHARACTER
char s[100];
int alp,digit,spch,i;
i=alp=digit=spch=0;
printf("Enter the string : ");
fgets(s,sizeof(s),stdin);
while(s[i]!='\0'){
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
        alp++;
    }
    else if(s[i]>='0' && s[i]<='9'){
    	digit++;
    }
    else{
    	spch++;
    }
	i++;
}
    printf("Number of Alphabets is : %d\n",alp);
    printf("Number of Digits is : %d\n",digit);
    printf("Number of Special characters is : %d",spch);
}

