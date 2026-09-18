#include <stdio.h>

void main() {
    int num;
    printf("Enter num : ");
    scanf("%d", &num);

    int i = 0;
    int n_1 = 0; 
    int n1 = 1; 
    int n = 0; 
    while (i < num) {
        printf("%d, ", n);
        n_1 = n;
        n = n1;
        n1 = n_1 + n;
        i++;
    }
}