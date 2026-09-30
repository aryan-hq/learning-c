//Write a C program to convert Octal to Decimal number system

#include <stdio.h>

void main() {
    int octal;
    printf("Enter Value : ");
    scanf("%d", &octal);

    int result = 0;
    int temp = octal;
    int digit = 0;

    int power = 1; 
    while (temp != 0) {
        digit = temp % 10;
        result += (digit * power);
        power *= 8;
        temp /= 10;
    }
    
    printf("Decimal : %d\n", result);
    
}