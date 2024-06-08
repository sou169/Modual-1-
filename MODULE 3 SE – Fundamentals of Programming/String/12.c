#include <stdio.h>
#include <string.h>
int countis(char *str, const char *word);
int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);    
	const char *word = "is";
    int occurrences = countis(str, word);
    printf("The word '%s' appears %d times in the given string.\n", word, occurrences);
    return 0;
}

int countis(char *str, const char *word) {
    int count = 0;
    const char *tmp = str;
    while((tmp = strstr(tmp, word)) != NULL) {
        count++;
        tmp++; 
    }
    return count;
}
