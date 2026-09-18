//Write a C program to print all alphabets from a to z. – using while loop

#include <stdio.h>

void main() {
    char alpha = 'A';
    while (alpha >= 'A' && alpha <= 'Z') {
        printf("%c ", alpha);
        alpha++;
    }
}