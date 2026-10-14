#include <stdio.h>

int sumofnn(int n);

int main() {
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Sum : %d", sumofnn(n));

    return 0;
}

int sumofnn(int n) {
    if (n == 1) {
        return 1;
    }
    int sum = sumofnn(n-1) + n;
    return sum;
}