#include <stdio.h>

int factorial(int n);

int main() {
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Factorial : %d", factorial(n));

    return 0;
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    }

    int result = 0;
    result = factorial(n - 1) * n;
    return result;
}