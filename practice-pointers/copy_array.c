#include <stdio.h>

void fcpy_arr(int size, int *arr, int *cpy_arr);

int main() {
    int size;
    printf("Enter Size of the Array : ");
    scanf("%d", &size);

    int arr[size];
    int cpy_arr[size];
    for (int i = 0; i < size; i++) {
        printf("Input Element : ");
        scanf("%d", &arr[i]);
    }

    fcpy_arr(size, arr, cpy_arr);

    printf("Original Array : ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");

    printf("Copy Array : ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", cpy_arr[i]);
    }

    return 0;
}

void fcpy_arr(int size, int *arr, int *cpy_arr) {
    for (int i = 0; i < size; i++) {
        cpy_arr[i] = arr[i];
    }
}