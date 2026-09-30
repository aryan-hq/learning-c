//write a C program to calculate sum of all prime numbers from 1 to n

#include <stdio.h> 

void main() {
    int n;
    int sum = 0;
    
    printf("Enter number : ");
    scanf("%d", &n);

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
            sum += num;
        }
        num++;
    }
    printf("Sum of prime numbers between 1 and %d is : %d\n", n, sum);
}