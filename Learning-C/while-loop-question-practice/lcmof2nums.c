//write a C program to find HCF of two numbers

#include <stdio.h>

void main() {
    int num1;
    int num2;
    printf("Enter number 1 :");
    scanf("%d", &num1);
    printf("Enter number 2 :");
    scanf("%d", &num2);

    int greater;
    if (num1 > num2) {
        greater = num1;
    } else {
        greater = num2;
    }

    int n = greater;
    int lcm = 1;
    while (1) {

        if (n % num1 == 0 && n % num2 == 0) {
            lcm = n;
            break;
        } else {
            n += greater;
        }
    }

    printf("LCM of %d and %d : %d", num1, num2, lcm);
}