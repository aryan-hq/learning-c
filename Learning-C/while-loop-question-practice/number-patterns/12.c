#include <stdio.h>

void main() {
    int rows;
    printf("Enter rows : ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = i;
        while(j < rows + i) {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i++;
    }
}