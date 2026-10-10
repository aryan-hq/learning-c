#include <stdio.h>

int oddnum(int num[], int n);

int main() {
    
    int num[] = {10, 23, 24, 25, 45, 3, 4, 6, 7, 8, 9};
    printf("Total number of odd integers : %d", oddnum(num, 10));
    return 0;
}

int oddnum(int num[], int n) {
    int i = 0;
    int count = 0;
    while(i <= n) {
        if (num[i] % 2 != 0) {
            count++;
            i++;
        } else {
            i++;
        }
    }
    return count;
}