//Write a C program to check whether a number is Strong number or not

#include <stdio.h>

void main() {
    int num;
    int sum = 0;
    printf("Enter Number : ");
    scanf("%d", &num);

    int n = num;
    while(n > 0) {
        int i;
        i = n % 10;
        int j = 1;
        int factorial = 1;
        while(j <= i) {
            factorial *= j;
            j++;
        }
        sum += factorial;
        n /= 10;
    }
    if (sum == num) {
        printf("It is a strong number.");
    } else {
        printf("It is not a strong number.");
    }
}