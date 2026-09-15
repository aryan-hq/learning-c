//Inverted pyramid star pattern

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
            printf("* ");
            star--;
        }
        printf("\n");
        i++;
    }
}