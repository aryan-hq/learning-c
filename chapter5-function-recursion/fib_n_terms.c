#include <stdio.h>

void fib(int n, int a, int b);

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    if (n > 0) {
        fib(n, 0, 1);
        printf("\n");
    }
    
    return 0;
}

void fib(int n, int a, int b) {
    if (n <= 0) {
        return;
    }
    
    printf("%d ", a);
    fib(n - 1, b, a + b);
}