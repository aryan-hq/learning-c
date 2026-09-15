// Hollow diamond star pattern

#include <stdio.h>

void main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= (rows * 2)) {
        
        int k;
        if (i <= rows) {
            k = (rows - i) + 1;
        } else {
            k = i - rows;
        }
        
        int left_star = 1;
        while (left_star <= k) {
            printf("*");
            left_star++;
        }
        
        int space = 1;
        int total_spaces = (rows * 2) - (k * 2); 
        while (space <= total_spaces) {
            printf(" ");
            space++;
        }
        
        int right_star = 1;
        while (right_star <= k) {
            printf("*");
            right_star++;
        }
        
        printf("\n");
        i++;
    }
    
}