//Write a C program to calculate product of digits in a number.

#include <stdio.h>

void main() {
    int num;
    int digit;
    int product = 1;
    printf("Enter num : ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    printf("Sum of digits : %d", product);
}