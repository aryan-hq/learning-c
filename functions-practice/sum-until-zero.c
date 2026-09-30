#include <stdio.h>

int sumo(int n, int sum) {
    sum += n;
    return sum;
}

int main() {
    int n;
    int sum = 0;

    do {
        printf("Enter Number : ");
        scanf("%d", &n);
        sum = sumo(n, sum);
        printf("Sum : %d\n", sum);
    } while (n != 0);

    return 0;
}