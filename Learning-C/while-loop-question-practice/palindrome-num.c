//Write a C program to check whether a number is palindrome or not.

#include <stdio.h>

int main() {
    int num;
    int reverse = 0;
    printf("Enter num : ");
    scanf("%d", &num);

    int n = num;
    while (n > 0) {
        reverse = (reverse * 10) + n % 10;
        n /= 10;
    }

    if (num == reverse) {
        printf("It's palindrome");
    } else {
        printf("It's not palindrome");
    }
}