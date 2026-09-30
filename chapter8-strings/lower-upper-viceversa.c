#include <stdio.h>

void convert(char str[], int n);

int main() {
    char str[100];
    printf("Input : ");
    fgets(str, sizeof(str), stdin);

    convert(str, 100);

    return 0;
}

void convert(char str[], int n) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ( str[i] <= 'z' && str[i] >= 'a') {
            str[i] -= 32;
        }
        else if (str[i] <= 'Z' && str[i] >= 'A') {
            str[i] += 32;
        }
    }
    printf("Modified String : %s", str);
}