//Pyramid star pattern

#include <stdio.h>

void main() {
    int rows;
    printf("Enter Rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int space = rows;
        while (space >= i) {
            printf(" ");
            space--;
        }
        int star = 1;
        while (star <= i) {
            printf("* ");
            star++;
        }
        printf("\n");
        i++;
    }
}