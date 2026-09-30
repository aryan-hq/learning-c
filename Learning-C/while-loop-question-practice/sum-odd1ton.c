//Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>

void main () {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    int i = 0;
    int sum = 0;
    while (i <= n) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    printf("Sum of even numbers 1 to n : %d", sum);
}