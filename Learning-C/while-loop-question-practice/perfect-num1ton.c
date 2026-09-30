//Write a C program to print all Perfect numbers between 1 to n.

#include <stdio.h>

void main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    int i = 1;
    while(i <= num) {
        int j = 1;
        int sum = 0;
        while(j <= i/2) {
            if (i % j == 0) {
                sum += j;  
            }
            j++;
        }
        if (sum == i) {
            printf("%d, ", i);
        }
        i++;
    }
}