#include <stdio.h>

void main() {
    int n1, n2;
    char c;
    printf("Enter First num: ");
    scanf("%d", &n1);
    printf("Enter Second num: ");
    scanf("%d", &n2);
    printf("'a' for addition \n's' for subtraction \n'm' for multiplication \n'd' for divide \nENTER INPUT :");
    scanf(" %c", &c);

    switch(c) {
        case 'a': {
            printf("Result : %d", n1 + n2);
            break;
        }
        
        case 's': {
            printf("Result : %d", n1 - n2);
            break;
        } 

        case 'm': {
            printf("Result : %d", n1 * n2);
            break;
        }

        case 'd': {
            if (n2 == 0) {
                printf("second num can't be zero to divide");
                break;
            }
            printf("Result : %d", n1 / n2);
            break;
        }

        default : {
            printf("INVALID INPUT !!!");
        }
    }
}