//write a C program to add no. from 1 to n

#include <stdio.h>

void main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int i = 0;
    int sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("%d", sum);
}