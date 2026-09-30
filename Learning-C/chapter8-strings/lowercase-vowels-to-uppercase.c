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
        if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] -= 32;
        }
    }
    printf("Modified String : %s", str);
}