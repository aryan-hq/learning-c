//Plus star pattern

#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= ((rows * 2) - 1)) {
        if (i == rows) {
            int j = 1;
            while (j <= ((rows * 2) - 1)) {
                printf("+");
                j++;
            }
        } else {
            int j = 1;
            while (j < rows) {
                printf(" ");
                j++;
            }
            printf("+");
        }
        printf("\n");
        i++;
    }
}