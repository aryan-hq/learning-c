#include <stdio.h>
#include <stdlib.h>

char* highfreq(char str[]);

int main() {
    char *str = NULL;
    int length = 0;
    char ch;

    printf("Input : ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str = realloc(str, (length +1) * sizeof(char));
        str[length] = ch;
        length++;
    }
    str = realloc(str, (length +1) * sizeof(char));
    str[length] = '\0';

    char *max_arr = highfreq(str);

    printf("Highest Frequency Characters : ");
    for (int i = 0; max_arr[i] != '\0'; i++) {
        printf("%c, ", max_arr[i]);
    }

    free(max_arr);
    free(str);

    return 0;
}

char* highfreq(char str[]) {
    char *max_arr = NULL;
    int length = 0;
    int max_count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            int count = 0;
            for (int j = 0; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }
            if (count > max_count) {
                max_count = count;
                length = 0;
                max_arr = realloc(max_arr, (length + 1) * (sizeof(char)));
                max_arr[length] = str[i];
                length++;
            } else if (count == max_count) {
                int is_duplicate = 0;
                for (int k = 0; k < length; k++) {
                    if (max_arr[k] == str[i]) {
                        is_duplicate = 1;
                        break;
                    }
                }

                if (is_duplicate == 0) {
                    max_arr = realloc(max_arr, (length + 1) * (sizeof(char)));
                    max_arr[length] = str[i];
                    length++;
                }
            }
        }
    }

    max_arr = realloc(max_arr, (length + 1) * (sizeof(char)));
    max_arr[length] = '\0';
    return max_arr;
}