#include <stdio.h>
#include <ctype.h>
int main() 
{
	int i,j=0;
    char sch[100];
    char abb[50];
    printf("Enter the school's name: ");
    fgets(sch, sizeof(sch), stdin);
    abb[j++] = toupper(sch[0]); 
    for (i = 0; sch[i] != '\0'; i++) {
        if (sch[i] == ' ') {
            abb[j++] = toupper(sch[i + 1]); 
        }
    }
    abb[j] = '\0'; 
    printf("Abbreviated form of the school's name: %s\n", abb);
    return 0;
}
