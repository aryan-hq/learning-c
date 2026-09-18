/*write a C program that prompts the user to enter a positive integer and then calculates and prints the sum of the squares of 
each digit in that number.*/

#include <stdio.h>

void main() {
    int num;
    int sum = 0;

    printf("Enter a Positive Integer : ");
    scanf("%d", &num);

    while(1) {
        if (num >= 0) {
            break;
        }
        printf("Enter a Positive Integer : ");
        scanf("%d", &num);
    }

    while (num > 0) {
        int digit = num % 10;
        sum += (digit * digit);
        num = num / 10;
    }
    printf("%d", sum);
}