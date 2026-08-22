#include <stdio.h>

void calc(int x, int y, int *sum, int *prod, int *average);

int main() {
    int a = 5;
    int b = 10;
    int sum = 0; int prod = 0; int average = 0;
    calc(a, b, &sum, &prod, &average);
    printf("Sum : %d, Product : %d, Average : %d", sum, prod, average);
    return 0;
}

void calc(int x, int y, int *sum, int *prod, int *average) {
    *sum = x + y;
    *prod = x * y;
    *average = (*sum / 2);
}