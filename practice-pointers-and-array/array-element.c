#include <stdio.h>

int main() {
    int age[3] = {22, 56, 19};
    int *ptr = &age[0];
    printf("ptr = %u\n", *ptr);
    *ptr += 1;
    printf("ptr = %u\n", *ptr);
    return 0;
}