#include <stdio.h>

void main() {
    int rows;
    printf("Enter Rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = rows;
        while (j > rows - i) {
            printf("%d", j);
            j--;
        }
        j = 1;
        while (j <= rows - i) {
            printf("%d", rows - i + 1);
            j++;
        }
        printf("\n");
        i++;
    }
}