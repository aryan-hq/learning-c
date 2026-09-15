//Eight star pattern.

#include <stdio.h>

void main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= ((rows * 2) - 1)) {
        int j = 1;
        while (j <= rows) {
            
            if ((i == 1 || i == rows || i == ((rows * 2) - 1)) && (j > 1 && j < rows)) {
                printf("*");
            } 
            else if ((j == 1 || j == rows) && (i != 1 && i != rows && i != ((rows * 2) - 1))) {
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