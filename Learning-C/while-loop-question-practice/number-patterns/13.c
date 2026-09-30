#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = 1;
    int count = 1;
    while (i <= rows) {
        int j = 1;
        while(j <= rows) {
            printf("%d ", count);
            j++;
            count++;
        }
        printf("\n");
        i++;
    }
}