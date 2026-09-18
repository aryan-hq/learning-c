//write a C program to find all factors of a number.

#include <stdio.h>

void main() {
    int num;
    printf("Enter number :");
    scanf("%d", &num);

    int n = 1;
    printf("Factors : ");
    while (n <= num) {

        if (num % n == 0) {
            printf("%d, ", n);
            n++;
        } else {
            n++;
        }
    }
}