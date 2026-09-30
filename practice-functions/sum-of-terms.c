#include <stdio.h>

int sumofnn(int n) {
    int sum = 0;
    while(n >= 1) {
        sum += n;
        n--;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Sum : %d", sumofnn(n));

    return 0;
}