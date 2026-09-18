//Write a C program to check whether a number is perfect number or not

#include <stdio.h>

void main() {
    int num;
    int sum = 0;
    printf("Enter Number : ");
    scanf("%d", &num);

    int i = 1;
    while(i <= num/2) {
        if (num % i == 0) {
            sum += i;  
        }
        i++;
    }
    if (num == sum) {
        printf("It is a perfect number.");
    } else {
        printf("It is not a perfect number.");
    }
}