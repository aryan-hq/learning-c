//hollow square star pattern with diagonals

#include <stdio.h>

void main() {
    int rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    int i = 1;
    while (i <= rows) {
        int j =  1;
        while (j <= rows) {
            if (i == 1 || i == rows || i == j || j == rows || j == 1 || j == (rows - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}