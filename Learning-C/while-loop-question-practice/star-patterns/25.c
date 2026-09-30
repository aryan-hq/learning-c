//Left arrow star pattern.

#include <stdio.h>

void main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= ((rows * 2) - 1)) {
        
        int j;
        if (i <= rows) {
            j = i;
        } else {
            j = (rows * 2) - i;
        }
        
        int space = 1;
        while (space <= (rows - j)) {
            printf(" ");
            space++;
        }
        
        int star = 1;
        while (star <= ((rows - j) + 1)) {
            printf("*");
            star++;
        }
        
        printf("\n");
        i++;
    }
    
}