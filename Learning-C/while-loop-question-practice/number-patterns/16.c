#include <stdio.h>

void main() {
    int rows;
    printf("Enter Rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = i;
        while (j <= rows) {
            printf("%d", j);
            j++;
        }
        j = i-1;
        while (j >= 1) {
            printf("%d", j);
            j--;
        }
        printf("\n");
        i++;
    }
}