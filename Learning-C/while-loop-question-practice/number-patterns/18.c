#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = rows;
    while (i >= 1) {
        int j = rows;
        while (j >= i) {
            printf("%d", j);
            j--;
        }
        printf("\n");
        i--;
    }
}