#include <stdio.h>

void oddeven(int arr[], int n);

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    oddeven(arr, 11);
    return 0;
}

void oddeven(int arr[], int n) {
    int oddcount = 0;
    int evencount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evencount += 1;
        } else {
            oddcount += 1;
        }
    }
    printf("Odd : %d, Even : %d", oddcount, evencount);
    
}