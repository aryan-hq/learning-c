//write a C program to find all print factors of a number.

#include <stdio.h>

void main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int n = 2;
    printf("Prime Factors : ");
    while (n <= num) {

        if (num % n == 0) {
            int prime = 1;
            int i = 2;
            while (i <= n / 2) {
                if (n % i == 0) {
                prime = 0;
                i++;
                break;
                }
                i++;
            }
            if (prime) {
                printf("%d, ", n);
            }
            n++;
        } else {
            n++;
        }
    }
}