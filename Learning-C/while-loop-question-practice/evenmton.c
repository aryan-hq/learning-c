//write a C program to print even no. from m to n

#include <stdio.h>

void main() {
    int m;
    int n;
    printf("Enter start number : ");
    scanf("%d", &m);
    printf("Enter end number : ");
    scanf("%d", &n);

    int i = m;
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            i++;
        } else {
            i++;
            continue;
        }
    }
}