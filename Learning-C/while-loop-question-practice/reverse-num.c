//Write a C program to enter a number and print its reverse.

#include <stdio.h>

int main() {
    int num;
    int reverse = 0;
    printf("Enter num : ");
    scanf("%d", &num);

    while (num > 0) {
        reverse = (reverse * 10) + num % 10;
        num /= 10;
    }
    printf("Reverse : %d", reverse);
}