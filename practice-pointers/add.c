#include <stdio.h>

int add(int *n1, int *n2, int *result);

int main() {
    int n1, n2;
    int result;
    printf("Enter 1st Number : ");
    scanf("%d", &n1);
    printf("Enter 2nd Number : ");
    scanf("%d", &n2);

    add(&n1, &n2, &result);
    printf("%d + %d = %d", n1, n2, result);

    return 0;
}

int add(int *n1, int *n2, int *result) {
    int *ptr1, *ptr2, *ptr_result;
    ptr1 = n1;
    ptr2 = n2;
    ptr_result = result;

    *ptr_result = *ptr1 + *ptr2;

    return 0;
}