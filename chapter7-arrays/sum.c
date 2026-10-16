#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the size of array : ");
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++) {
        printf("Enter value %d : ", i+1);
        scanf("%d", &num[i]);
        sum += num[i];
    }

    printf("Sum of all elements : %d", sum);

    return 0;
}