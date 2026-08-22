#include <stdio.h>

int main() {
    int num = 0;
    do {
        num++;
        if (num == 6) {
            continue;
        }
        printf("%d", num);
    } while (num < 10);

    return 0;
}