//Write a C program to convert Binary to Decimal number system.

#include <stdio.h>

void main() {
    int binary;
    int temp;
    int decimal = 0;
    int position = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;
    while (temp > 0) {
        int power_sum = 1;
        int i = 0;
        while (i < position) {
            power_sum *= 2;
            i++;
        }
        int last_digit = temp % 10;
        decimal += last_digit * power_sum;

        temp = temp / 10;
        position++;
    }

    printf("Deciamal : %d\n", decimal);

}