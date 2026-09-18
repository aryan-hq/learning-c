//Write a C program to convert Octal to Binary number system.

#include <stdio.h>

void main() {
    int octal, temp;
    int binary = 0;
    int place = 1;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    temp = octal;

    if (temp == 0) {
        printf("Binary : 0\n");
        return 0;
    }

    while (temp > 0) {
        int digit = temp % 10; 

        if (digit > 7) {
            printf("Only use 0-7.\n", digit);
            break;
        } 

        int bit1 = (digit % 2) * 1;
        int bit2 = ((digit / 2) % 2) * 10;
        int bit3 = ((digit / 4) % 2) * 100;
        
        int binary_chunk = bit1 + bit2 + bit3;
        binary = binary + (binary_chunk * place);
        place = place * 1000;
        temp = temp / 10; 
    }

    printf("Binary : %d\n", binary);

}