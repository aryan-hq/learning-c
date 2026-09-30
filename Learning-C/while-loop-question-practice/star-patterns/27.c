//X star pattern.

#include <stdio.h>

void main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int total_size = (rows * 2) - 1;
    int i = 1;
    
    while (i <= total_size) {
        int j = 1;
        while (j <= total_size) {
            if (j == i || j == (total_size - i + 1)) {
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