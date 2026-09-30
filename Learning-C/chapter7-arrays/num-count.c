#include <stdio.h>

int checknum(int num[], int n);

int main() {
    
    int num[] = {0, 1, 6, 3, 6, 5, 6, 7, 8, 8, 6, 11};
    printf("Total number of 6 : %d", checknum(num, 11));
    return 0;
}

int checknum(int num[], int n) {
    int i = 0;
    int count = 0;
    while(i <= n) {
        if (num[i] == 6) {
            count++;
            i++;
        } else {
            i++;
        }
    }
    return count;
}