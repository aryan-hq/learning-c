//Write a C program to print pascal triangle

#include <stdio.h>
void main() {
    int rows;
    printf("Enter Rows : ");
    scanf("%d", &rows);

    int i = 0;
    while (i < rows) {
        int space = rows;
        while (space > i) {
            printf(" ");
            space--;
        }
        
        int j = 0;
        int digit = 1;
        while (j <= i) {
            printf("%d ", digit);
            digit = digit * (i - j) / (j + 1);
            j++;
        }
        printf("\n");
        i++;
    }
}