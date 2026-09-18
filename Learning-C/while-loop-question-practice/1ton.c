// write a C program to print no. from 1 to n

#include <stdio.h>

void main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
}