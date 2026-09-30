//Hollow inverted pyramid star pattern

#include <stdio.h>

void main() {
    int rows;
    printf("Enter Rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int space = 1;
        while (space <= i) {
            printf(" ");
            space++;
        }
        int star = rows;
        while (star >= i) {
            if (i == rows || i == 1 || star == 1 || star == rows || star == i) {
                printf("* ");
            } else {
                printf("  ");
            }
            star--;
        }
        printf("\n");
        i++;
    }
}