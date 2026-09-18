//Write a C program to convert Decimal to Octal number system

#include <stdio.h>

void main() { 
    int decimal;
    printf("Enter Decimal Value : ");
    scanf("%d", &decimal);

    int result = 0;
    int temp = decimal;
    int remainder = 0;
    
    int place = 1;

    while (temp != 0) {
        remainder = temp % 8; 
        result += (remainder * place);
        place *= 10;
        temp /= 8;
    }
    
    printf("Octal : %d\n", result);
    
}