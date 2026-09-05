#include <stdio.h>

int main() {
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    // using for loop

    for (int i = 10; i >= 1; i--) {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    // using while loop

    // int i = 10;
    // while (i >= 1) {
    //     printf("%d X %d = %d\n", n, i, n * i);
    //     i--;
    // }

    return 0;
}