#include <stdio.h>

void find(int num[], int n, int element);

int main() {
    int element;
    int num[] = {0, 1, 6, 67, 6, 5, 6, 7, 8, 8, 6, 11};

    printf("Which element you wanna find : ");
    scanf("%d", &element);
    find(num, 11, element);

    return 0;
}

void find(int num[], int n, int element) {
    int i = 0;
    while(i <= n) {
        if (num[i] == element) {
            printf("YES! %d is present in array.", element);
            return;
        } else {
            i++;
        }
    }
    printf("NO! %d is not present in array.", element);
}