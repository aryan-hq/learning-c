#include <stdio.h>

int main() {
    int table[2][11];
    for (int i = 0; i <= 10; i++) {
        table[0][i] = i * 2;
        table[1][i] = i * 3;
    }
    printf("Table 2 : ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", table[0][i]);
    }
    printf("\n");
    printf("Table 3 : ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", table[1][i]);
    }
    return 0;
}