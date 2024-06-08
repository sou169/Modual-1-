#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The ASCII value of '%d' is '%c'", num, (char)num);
    return 0;
}


