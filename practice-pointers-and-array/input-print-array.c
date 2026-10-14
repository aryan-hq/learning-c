#include <stdio.h>

int main() {
    int size;
    printf("Enter Size of the Array : ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Input Element : ");
        scanf("%d", &arr[i]);
    }

    printf("Array Elements : ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}