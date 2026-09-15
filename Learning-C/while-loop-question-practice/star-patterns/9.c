//Hollow right triangle star pattern

#include <stdio.h>

void main() {
    int rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int star = 1;
        while (star <= i) {
            if (i == 1 || i == star || star == 1 || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
            star++;
        }
        printf("\n");
        i++;
    }
}