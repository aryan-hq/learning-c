//Write a C program to find the sum of first and last digit of a number.

#include <stdio.h>

void main() {
    int num;
    int count = 0;
    printf("Enter num : ");
    scanf("%d", &num);

    int i = 1;
    int n = num;

    while (n != 0) {
        if (n % 10 != 0) {
            count++;
        }
        n /= 10;
    }
    
    int n2 = num;
    while (i < count) {
        n2 = n2 / 10;
        count --;
    }
    int first_digit = n2;

    int last_digit;
    if (num % 10 != 0) {
        last_digit = num % 10;
    }

    printf("The sum of first and last digits : %d", first_digit + last_digit);
}