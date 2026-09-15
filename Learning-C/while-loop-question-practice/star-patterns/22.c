//Diamond star pattern.

#include <stdio.h>

void main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= ((rows * 2) - 1)) {
        
        int k;
        if (i <= rows) {
            k = i;
        } else {
            k = (rows * 2) - i;
        }
        
        int space = 1;
        while (space <= (rows - k)) {
            printf(" ");
            space++;
        }
        
        int star = 1;
        while (star <= ((k * 2) - 1)) {
            printf("*");
            star++;
        }
        
        printf("\n");
        i++;
    }
    
}