//Write a C program to print all Strong numbers between 1 to n.

#include <stdio.h>

void main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    int n = 1;
    while (n <= num) {
        int sum = 0;
        int temp = n;
        while(temp > 0) {
            int i;
            i = temp % 10;
            int j = 1;
            int factorial = 1;
            while(j <= i) {
                factorial *= j;
                j++;
            }
            sum += factorial;
            temp /= 10;
        }
        if (sum == n) {
            printf("%d, ", n);
        }
        n++;
    }
    
}