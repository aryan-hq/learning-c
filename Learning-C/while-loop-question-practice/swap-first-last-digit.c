//Write a C program to swap first and last digits of a number.

#include <stdio.h>

void main() {
    int num;
    printf("Enter num : ");
    scanf("%d", &num);

    int last_digit;
    int first_digit;
    int swapnum;

    if (num <= 9) {
        printf("%d", num);
    } else {
        last_digit = num % 10;
        int n = num;
        int place = 1;
        while (n >= 10) {
            n = n / 10;
            place *= 10;
        }
        first_digit = n;
        int middle_part = (num % place) - last_digit;
        swapnum = (last_digit * place) + middle_part + first_digit;

        if (last_digit == 0) {
            printf("Number after swaping first digit and last digit : 0%d", swapnum);
        }else {
            printf("Number after swaping first digit and last digit : %d", swapnum);
        }
    }
}