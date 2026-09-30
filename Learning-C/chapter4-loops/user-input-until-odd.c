#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter number : ");
        scanf("%d", &num);
        printf("You entered %d \n", num);
    } while (num % 2 == 0); 

    printf("thank you");

    return 0;
}