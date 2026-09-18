//Write a C program to calculate sum of digits in a number.

#include <stdio.h>

void main() {
    int num;
    int digit;
    int sum = 0;
    printf("Enter num : ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits : %d", sum);
}