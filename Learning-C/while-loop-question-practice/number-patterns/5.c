#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while(j <= rows) {
            if (i == (rows+1)/2 && j == (rows+1)/2) {
                printf("0");
            } else {
                printf("1");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}