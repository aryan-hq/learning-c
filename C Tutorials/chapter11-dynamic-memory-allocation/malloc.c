#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 6.7;
    ptr[1] = 6.9;
    ptr[2] = 110.5;
    ptr[3] = 80;
    ptr[4] = 199;

    for (int i = 0; i <5; i++) {
        printf("%.2f\n", ptr[i]);
    }

    return 0;
}