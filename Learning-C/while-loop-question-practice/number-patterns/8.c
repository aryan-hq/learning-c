#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while(j <= rows) {
            if (i == j || j == (rows + 1) - i) {
                printf("1");
            } else {
                printf("0");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}