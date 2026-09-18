//Write a C program to print all Armstrong numbers between 1 to n.

#include <stdio.h>

void main() {
    int num;

    printf("Enter range : ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        int count = 0;
        int remainder;
        int result = 0;
        
        int temp = i;
        while (temp != 0) {
            temp /= 10;
            count++;
        }

        temp = i;
        while (temp != 0) {
            remainder = temp % 10;
            int power = 1;
            int temp_count = count;
            while (temp_count > 0) {
                power *= remainder;
                temp_count--;
            }
            result += power;
            temp /= 10;
        }
    
        if ((int)result == i) {
            printf("%d, ", i);
        }
        i++;
    }
}