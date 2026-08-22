#include <stdio.h>

int main () {
    char ch;
    printf("Enter your alphabet : ");
    scanf("%c", &ch);

    if (ch <= 'z' && ch >= 'a') {
        printf("It is lowercase.");
    }
    else if (ch <= 'Z' && ch >= 'A') {
        printf("It is uppercase.");
    }
    else {
        printf("Error : Not an alphabet !");
    }

    return 0;
}