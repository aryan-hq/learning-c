#include <stdio.h>

int main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    num > 0 ? printf("It is a natural number !") : printf("It is not a natural number !");

    return 0;
}