#include <stdio.h>

void reverse(int arr[], int n);

int main() {
    
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    reverse(arr, 11);
    return 0;
}

void reverse(int arr[], int n) {
    printf("Reverse of this array : ");
    int i = n;
    while(i <= n && i >= 0) {
        printf("%d, ", arr[i]);
        i--;
    }
}