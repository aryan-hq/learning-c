//Write a C program to print multiplication table of any number.

#include <stdio.h>

void main() {
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    int i = 1;
    while (i <= 10) {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
}