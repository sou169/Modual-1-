//C Program to Check Uppercase or Lowercase or Digit or SpecialCharacter
#include<stdio.h>
int main(){
	char a;
	printf("Enter any anything(char or digit or symbol) :");
	scanf(" %c",&a);
	if (a>='A' && a<='Z'){
		printf("It's UPPERCASE");
	}
	else if(a>='a' && a<='z'){
		printf("It's lowercase");
	}
	else if(a>='0' && a<='9'){
		printf("It's Digit");
	}
	else{
		printf("It's special character/symbol");
	}
	return 0;
}
