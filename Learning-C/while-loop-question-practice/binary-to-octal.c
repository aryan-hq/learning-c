//Write a C program to convert Binary to Octal number system.

#include <stdio.h>

void main() {
    int binary;
    int temp;
    int octal = 0;
    int place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;
    while (temp > 0) {
        int last3 = temp % 1000;
        
        int digit1 = (last3 % 10) * 1;
        int digit2 = ((last3 / 10) % 10) * 2;
        int digit3 = ((last3 / 100) % 10) * 4;
        
        int octal_digit = digit1 + digit2 + digit3;
        octal = octal + (octal_digit * place);

        place = place * 10;
        temp = temp / 1000;
    }

    printf("Octal : %d\n", octal);

}