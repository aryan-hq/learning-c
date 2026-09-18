//write a C program to reverse a given integer no.

#include <stdio.h>

void main() {
    int num;
    int count = 0;

    printf("Enter number : ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    }

    int n = num;
    while (n > 0) {
        n = n / 10;
        count++;
    }

    int i = 1;
    while (i <= count) {
        printf("%d", num % 10);
        num = num / 10;
        i++;
    }

}