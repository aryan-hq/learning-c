//Write a C program to convert Deciaml to Binary number system.

#include <stdio.h>

void main() {
    int num;
    printf("Enter num : ");
    scanf("%d", &num);

    int t = num;
    int d = 1;
    while (t > 1) {
        t = t/2;
        d *= 2;
    }
    
    t = num;
    while(d > 0) {
        printf("%d", t / d);
        t = t % d;
        d = d / 2;
    }
}