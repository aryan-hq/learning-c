//write a C program to find HCF of two numbers

#include <stdio.h>

void main() {
    int num1;
    int num2;
    printf("Enter number 1 :");
    scanf("%d", &num1);
    printf("Enter number 2 :");
    scanf("%d", &num2);

    int range;
    if (num1 > num2) {
        range = num1;
    } else {
        range = num2;
    }

    int n = 1;
    int hcf = 1;
    while (n <= range) {

        if (num1 % n == 0 && num2 % n == 0) {
            hcf = n;
             n++;
        } else {
            n++;
        }
    }

    printf("HCF of %d and %d : %d", num1, num2, hcf);
}