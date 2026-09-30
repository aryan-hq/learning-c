#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while(j <= rows) {
            if (j % 2 == 0) {
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