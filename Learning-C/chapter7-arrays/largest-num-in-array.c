#include <stdio.h>

int largest(int num[], int n);

int main() {
    
    int num[] = {0, 1, 6, 67, 6, 5, 6, 7, 8, 8, 6, 11};
    printf("Largest number in array : %d", largest(num, 11));
    return 0;
}

int largest(int num[], int n) {
    int i = 0;
    int largest = 0;
    while(i <= n) {
        if (num[i] >= largest) {
            largest = num[i];
            i++;
        } else {
            i++;
        }
    }
    return largest;
}