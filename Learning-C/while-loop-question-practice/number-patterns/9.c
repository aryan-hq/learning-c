#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while(j <= rows) {
            if ((j == 1 || j == rows) && (i == 1 || i == rows)) {
                printf("0");
            } 
            else if (i == 1 || j == 1 || i == rows || j == rows) {
                printf("1");
            } else {
                printf("0");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}