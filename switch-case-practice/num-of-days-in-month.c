#include <stdio.h>

int main() {
    int month_num;
    printf("Enter month number : ");
    scanf("%d", &month_num);

    switch(month_num) {
        case 1:
            printf("Number of Days : 31");
            break;
        case 2:
            printf("Number of Days : 29");
            break;
        case 3:
            printf("Number of Days : 31");
            break;
        case 4:
            printf("Number of Days : 30");
            break;
        case 5:
            printf("Number of Days : 31");
            break;
        case 6:
            printf("Number of Days : 30");
            break;
        case 7:
            printf("Number of Days : 31");
            break;
        case 8:
            printf("Number of Days : 31");
            break;
        case 9:
            printf("Number of Days : 30");
            break;
        case 10:
            printf("Number of Days : 31");
            break;
        case 11:
            printf("Number of Days : 30");
            break;
        case 12:
            printf("Number of Days : 31");
            break;
        default:
            printf("INVALID INPUT !!!");
            break;
    }
    return 0;
}