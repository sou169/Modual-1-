#include <stdio.h>  
#include<stdlib.h>  
int main()  
{  
int flag=0,i=0;
char s1[20];  
char s2[20];  
printf("Enter the first string : ");  
fgets(s1,sizeof s1,stdin);  
printf("Enter the second string : ");  
fgets(s2,sizeof s2,stdin);
while(s1[i]!='\0' &&s2[i]!='\0'){  
    if(s1[i]!=s2[i]){  
           flag=1;  
           break;  
    }  
    i++;  
}    
if(flag==0)  
printf("Both Strings are same");  
else  
printf("Both Strings are not same");  
return 0;  
}  
