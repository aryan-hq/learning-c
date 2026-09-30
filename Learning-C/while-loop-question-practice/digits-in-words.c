//Write a C program to enter a number and print it in words.

#include <stdio.h>

void main() {
    int num;
    int digit;
    int place = 1;
    printf("Enter num : ");
    scanf("%d", &num);

    int n = num;
    while (n / 10 > 0) {
        place *= 10;
        n /= 10;
    }

    while (num > 0) {
        digit = (num / place) % 10;
        if (digit == 0) {
            printf("Zero ");
        }
        else if (digit == 1) {
            printf("One ");
        }
        else if (digit == 2) {
            printf("Two ");
        }
        else if (digit == 3) {
            printf("Three ");
        }
        else if (digit == 4) {
            printf("Four ");
        }
        else if (digit == 5) {
            printf("Five ");
        }
        else if (digit == 6) {
            printf("Six ");
        }
        else if (digit == 7) {
            printf("Seven ");
        }
        else if (digit == 8) {
            printf("Eight ");
        }
        else if (digit == 9) {
            printf("Nine ");
        }
        place /= 10;
    }
}