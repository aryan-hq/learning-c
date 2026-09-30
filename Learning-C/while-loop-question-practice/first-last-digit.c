//Write a C program to find first and last digit of a number.

#include <stdio.h>

void main() {
    int num;
    int count = 0;
    printf("Enter num : ");
    scanf("%d", &num);

    int i = 1;
    int n = num;

    while (n != 0) {
        if (n % 10 != 0) {
            count++;
        }
        n /= 10;
    }
    
    int n2 = num;
    while (i < count) {
        n2 = n2 / 10;
        count --;
    }
    printf("First digit : %d\n", n2);

    if (num % 10 != 0) {
        int last = num % 10;
        printf("Last Digit : %d", last);
    }

}