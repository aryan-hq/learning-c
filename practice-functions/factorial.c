#include <stdio.h>

int factorial(int n) {
    int f = 1;
    while(n > 1) {
        f *= n;
        n--;
    }
    return f;
}

int main() {
    int n, f;
    printf("Enter The Number : ");
    scanf("%d", &n);
    f = factorial(n);
    printf("Factorial of %d is %d", n, f);

    return 0;
}