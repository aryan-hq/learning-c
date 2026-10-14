#include <stdio.h>

int calc_fib(int n);

int main() {
    int n;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    
    printf("Fibonacci of %d terms : %d\n", n, calc_fib(n));

    return 0;
}

int calc_fib(int n) {
        if (n == 0 ) {
            return 0;
        }
        if (n == 1 ) {
            return 1;
        }
    
    int fib = calc_fib(n - 1) + calc_fib(n - 2);
    return fib;
} 