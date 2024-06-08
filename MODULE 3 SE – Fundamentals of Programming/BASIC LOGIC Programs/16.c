#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char country[100];
    char abb[100];
    int i,j;
    printf("Enter the country's name: ");
    gets(country);
    j = 0;
    for(i = 0; country[i]!= '\0'; i++) {
        if(country[i] == ' ' || i == 0) {
            abb[j++] = toupper(country[i]);
        }
    }
    abb[j] = '\0';
    printf("The abbreviated form of the country's name is: %s\n", abb);
    return 0;
}
