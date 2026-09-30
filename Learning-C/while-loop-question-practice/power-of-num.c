//Write a C program to find power of a number using while loop.

#include <stdio.h>

void main()
{
    int num, power;

    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &power);

    int i = 1;
    int result = 1;
    int power_cpy = power;
    while (i <= power_cpy) {
        result = result * num;
        power_cpy--;
    }

    printf("%d ^ %d = %d", num, power, result);
}