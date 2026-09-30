//not solved : to be solved

#include <stdio.h>

char highfreq(char str[], int n);

int main() {
    char str[100];
    printf("Input : ");
    fgets(str, sizeof(str), stdin);

    printf("The highest frequency character is : %d ", highfreq(str, 100));

    return 0;
}

char highfreq(char str[], int n) {
    char ch;
    int max_count;
    for (int i = 0; str[i] != '\0'; i++) {
        
    }
    return ch;
}