#include <stdio.h>

void reverse(int arr[], int n);
void printarr(int arr[], int n);

int main() {
    
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    reverse(arr, 12);
    printarr(arr, 12);
    return 0;
}

void reverse(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int value1 = arr[i];
        int value2 = arr[n - i - 1];
        arr[i] = value2;
        arr[n - i - 1] = value1;
    }
    
}

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
}