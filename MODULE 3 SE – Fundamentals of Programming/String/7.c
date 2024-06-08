#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    printf("\nEnter the string 1: ");
    gets(s1);
    printf("\nEnter the string 2: ");
    gets(s2);
    strcpy(s2,s1);
    printf("\nString 1 copied to String 2\n");
    printf("\nNow String 1 = %s", s1);
    printf("\nNow String 2 = %s", s2);
    return 0;
}
