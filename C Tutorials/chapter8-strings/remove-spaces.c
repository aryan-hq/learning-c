#include <stdio.h>

void removespace(char str[], int n);

int main() {
    char str[100];
    printf("Input : ");
    fgets(str, 100, stdin);

    removespace(str, 100);
    return 0;
}

void removespace(char str[], int n) {
    char newstr[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ( str[i] != ' ') {
            newstr[j] = str[i];
            j++;
        } else {
            continue;
        }
    }
    newstr[j] = '\0';
    printf(newstr);
}