#include <iostream>
#include <cstring>
using namespace std;
class addString {
public:
    char s1[25],s2[25];
    addString(char str1[], char str2[]) {
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
    void operator+() {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};

int main() {
    char str1[] = "HELLO";
    char str2[] = "WORLD";
    addString a1(str1,str2);
    +a1;
    return 0;
}
