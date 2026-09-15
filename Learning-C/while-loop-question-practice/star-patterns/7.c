//hollow mirrored rhombus or parallelogram star pattern

#include <stdio.h>

void main() {
    int rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    int i = 1;
    while(i <= rows) {
        int space = rows;
        while(space >= rows - i) {
            printf(" ");
            space--;
        }
        int star = 1;
        while (star <= rows) {
            if ( star == 1 || star == rows || i == 1 || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
            star++;
        }
        printf("\n");
        i++;
    }
}