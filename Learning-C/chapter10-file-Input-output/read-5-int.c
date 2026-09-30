#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    for (int i = 0; i < 5; i++) {
        int n;
        fscanf(fptr, "%d", &n);
        printf("%d\n", n);
    }
    fclose(fptr);
    return 0;
}