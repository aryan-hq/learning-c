//Heart star pattern.

#include <stdio.h>

void main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int i = rows / 2;
    while (i <= rows) {
        int space1 = 1;
        while (space1 < (rows - i)) {
            printf(" ");
            space1 += 2;
        }

        int star1 = 1;
        while (star1 <= i) {
            printf("*");
            star1++;
        }
        
        int space2 = 1;
        while (space2 <= (rows - i)) {
            printf(" ");
            space2++;
        }
        
        int star2 = 1;
        while (star2 <= i) {
            printf("*");
            star2++;
        }
        
        printf("\n");
        i += 2;
    }

    int j = rows;
    while (j >= 1) {
        
        int space = 1;
        while (space <= (rows - j)) {
            printf(" ");
            space++;
        }
        
        int star = 1;
        while (star <= ((j * 2) - 1)) {
            printf("*");
            star++;
        }
        
        printf("\n");
        j--;
    }
    
}