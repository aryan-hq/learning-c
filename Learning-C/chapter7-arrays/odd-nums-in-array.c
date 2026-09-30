#include <stdio.h>

int oddnum(int num[], int n);

int main() {
    
    int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    printf("Total number of odd integers : %d", oddnum(num, 11));
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