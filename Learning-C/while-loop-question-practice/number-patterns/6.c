#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int k = 1;
    int i = 1;
    while (i <= rows) {
        int j = 1;
        while(j <= rows) {
            if (k == -1) {
                printf("0");
            } else {
                printf("1");
            }
            k *= -1;
            j++;
        }
        printf("\n");
        i++;
    }
}