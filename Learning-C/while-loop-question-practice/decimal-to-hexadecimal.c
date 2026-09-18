#include <stdio.h>

void main() {
    int num;
    printf("Enter num : ");
    scanf("%d", &num);

    int t = num;
    int d = 1;
    while (t >= 16) {
        t = t/16;
        d *= 16;
    }
    
    t = num;
    while(d > 0) {
        int q = (t / d);
        if (q < 10) {
            printf("%d", q);
        } else {
            printf("%c", (q - 10) + 'A');
        }
        t = t % d;
        d = d / 16;
    }
}