//Write a C program to check whether a number is Prime number or not.

#include <stdio.h> 

void main() {
    int num;
    int prime = 1;

    printf("Enter number : ");
    scanf("%d", &num);

    int i = 2;
    while (i <= num / 2) {
        if (num % i == 0) {
            prime = 0;
            i++;
            break;
        }
        i++;
    }
    if (prime) {
        printf("It's PRIME");
    } else {
        printf("It's Not PRIME");
    }
}