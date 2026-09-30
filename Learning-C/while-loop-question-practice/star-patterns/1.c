//square star pattern

#include <stdio.h>

void main() {
    int rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    int i = 0;
    while (i < rows) {
        int j =  0;
        while (j < rows) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}