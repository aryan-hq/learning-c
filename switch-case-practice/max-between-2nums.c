#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    int check;
    check = num1 > num2;
    switch(check) {
        case 0: 
            printf("%d is greater.", num2);
            break;
        case 1:
            printf("%d is greater.", num1);
            break;
        default:
            printf("Both are equal");
            break;
    }

    return 0;
}