//write a C program to prime no. from m to n

#include <stdio.h> 

void main() {
    int m;
    int n;

    printf("Enter the start number : ");
    scanf("%d", &m);
    printf("Enter the ending number : ");
    scanf("%d", &n);

    printf("Prime numbers between %d to %d are :\n", m, n);

    int num = m;
    while (num <= n) {
        if (num <= 1) {
            num++;
            continue;
        }
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