//write a C program to sum until the user enter a negative number

#include <stdio.h>

void main() {
    int sum = 0; 
    int num;

    while(1) {

        printf("Enter Number : ");
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
        } else {
            break;
        }
    }

    printf("Total Sum : %d\n", sum);

}