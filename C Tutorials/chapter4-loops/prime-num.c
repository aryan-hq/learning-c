#include <stdio.h> 

int main() {
    int num;
    int isprime = 1;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a prime number !");
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime == 1) {
            printf("Prime Number !");
        } else {
            printf("Not a Prime Number !");
        }
}