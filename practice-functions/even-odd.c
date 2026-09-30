#include <stdio.h>

int iseven(int num);

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    if (iseven(num) == 1) {
        printf("%d is Even.", num);
    } else {
        printf("%d is Odd.", num);
    }

    return 0;
}

int iseven(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}