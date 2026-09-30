//Write a C program to count number of digits in a number.

#include <stdio.h>

void main() {
    int num;
    int count = 0;
    printf("Enter num : ");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 10 != 0) {
            count++;
        }
        num /= 10;
    }
    printf("Number of digits : %d", count);
}