//Write a C program to find ones complement of a binary number

#include <stdio.h>

void main() {
    int binary;
    printf("Enter Binary Value : ");
    scanf("%d", &binary);

    int temp = binary;
    int result = 0;
    int place = 1;

    if (temp == 0) {
        result = 1;
    } else {
        while (temp != 0) {
            int digit = temp % 10;
            int flipped_digit;

            if (digit == 1) {
                flipped_digit = 0;
            } else {
                flipped_digit = 1;
            }

            result += (flipped_digit * place);

            place *= 10;
            temp /= 10;
        }
    }

    printf("One's Complement : %d\n", result);

}