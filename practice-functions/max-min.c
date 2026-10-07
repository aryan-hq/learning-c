#include <stdio.h>

int max(int n1, int n2);
int min(int n1, int n2);

int main() {
    int n1, n2;
    printf("Enter 1st Number : ");
    scanf("%d", &n1);
    printf("Enter 2nd Number : ");
    scanf("%d", &n2);

    if(n1 != n2) {
        printf("Max : %d\n", max(n1, n2));
        printf("Min : %d", min(n1, n2));
    } else {
        printf("Both are equal.");
    }

    return 0;
}

int max(int n1, int n2) {
    int max;
    if (n1 > n2) {
        max = n1;
    } else {
        max = n2;
    }
    return max;
}
int min(int n1, int n2) {
    int min;
    if (n1 > n2) {
        min = n2;
    } else {
        min = n1;
    }
    return min;
}