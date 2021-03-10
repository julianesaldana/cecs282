//Sean Heidari,Javier Sanchez, Julian Saldana,Erik Nyguen
//week 8 - Lab1 Strlen, Strcpy, Stract
//demo time - 8:42pm

#include <iostream>

using namespace std;

int strlen(char *start) {   // returns the length of a string
    int length = 0;
    while (*start != '\0') {
        length++;
        start++;
    }
    return length;
}

char *strcpy(char *dest, char *source) {    // copies source to dest, returns dest
    int counter = 0;
    while (*source != '\0') {
        dest = source;
        dest++;
        source++;
        counter++;
    }
    return dest - counter;
}

char *strcat(char *dest, char *source) {    // concatenates source to the end of dest, returns dest
    int counter = strlen(dest);
    dest += counter;
    while (*source != '\0') {
        *dest = *source;
        source++;
        dest++;
        counter++;
    }
    *dest = '\0';
    return dest - counter;
}

int main() {
    char test[30] = "test";
    char test2[30] = "test2";
    cout << strlen(test) << endl;
    cout << strcpy(test, test2) << endl;
    cout << strcat(test, test2) << endl;
    return 0;
}