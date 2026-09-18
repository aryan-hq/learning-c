//write a C program to print prime numbers from 1 to n

#include <stdio.h> 

void main() {
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are :\n", n);

    int num = 2;
    while (num <= n) {
        int prime = 1;

        int i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                prime = 0;
                i++;
                break;
            }
            i++;
        }
        if (prime) {
            printf("%d\n", num);
        }
        num++;
    }
}