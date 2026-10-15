#include <stdio.h>

int factorial(int n);

int main() {
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("Factorial : %d", factorial(n));
    } else {
        printf("Factorial can't be defined for negative numbers. !!!");
    }

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    int result = 0;
    result = factorial(n - 1) * n;
    return result;
}