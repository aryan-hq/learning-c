#include <stdio.h>

char highfreq(char str[], int n);

int main() {
    char str[100];
    printf("Input : ");
    fgets(str, sizeof(str), stdin);

    printf("The highest frequency character is : %c ", highfreq(str, 100));

    return 0;
}

char highfreq(char str[], int n) {
    char max_ch = str[0];
    int max_count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            int count = 0;
            for (int j = 0; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
                if (count > max_count) {
                    max_count = count;
                    max_ch = str[i];
                }
            }
        }
    }
    return max_ch;
}