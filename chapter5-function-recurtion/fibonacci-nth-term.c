#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    
    printf("Fibonacci %dth term is : %d\n", n, fibonacci(n));

    return 0;
}

int fibonacci(int n) {
        if (n == 0 ) {
            return 0;
        }
        if (n == 1 ) {
            return 1;
        }
    
    int fib = fibonacci(n - 1) + fibonacci(n - 2);
    return fib;
} 