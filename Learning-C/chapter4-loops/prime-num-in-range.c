#include <stdio.h> 

int main() {
    int start;
    int end;

    printf("Enter the start number : ");
    scanf("%d", &start);
    printf("Enter the ending number : ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++) {
        if (num <= 1) continue;
        int isprime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isprime = 0;
                break;
            } 
        }
        if (isprime) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}