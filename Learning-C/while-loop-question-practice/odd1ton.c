//write a C program to print odd numbers from 1 to n

#include <stdio.h>

void main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            i++;
        } else {
            i++;
            continue;
        }
    }
}