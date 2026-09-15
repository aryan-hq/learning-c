//Heart star pattern with name.

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
        
        if (j == rows) {
            int total_width = (j * 2) - 1;
            
            int stars_before = (total_width - 10) / 2;
            int stars_after = total_width - 10 - stars_before;
            
            int star = 1;
            while (star <= stars_before) {
                printf("*");
                star++;
            }
            
            printf("Codeforwin");
            
            star = 1;
            while (star <= stars_after) {
                printf("*");
                star++;
            }
        } 
        else {
            int star = 1;
            while (star <= ((j * 2) - 1)) {
                printf("*");
                star++;
            }
        }
        
        printf("\n");
        j--;
    }
    
}