//Write a C program to calculate factorial of a number.

#include <stdio.h>

int main() {
    int num;
    int factorial = 1;
    printf("Enter number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial = i * factorial;
    }

    printf("Factorial of %d is %d", num, factorial);
    return 0;
}