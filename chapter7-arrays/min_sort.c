#include <stdio.h>

int minSwaps(int* nums, int numsSize) {
    int sum_arr[numsSize];

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        int num_sum = 0;
        while (num > 0) {
            int digit = num % 10;
            num_sum += digit;
            num /= 10;
        }
        sum_arr[i] = num_sum;
    }

    int swap_count = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        int swapped = 0;

        for (int j = 0; j < numsSize - 1; j++) {
            if (sum_arr[j] > sum_arr[j + 1] || 
            sum_arr[i] == sum_arr[j + 1] && nums[i] > nums[j + 1]) {

                int temp_sum = sum_arr[i];
                sum_arr[i] = sum_arr[j + 1];
                sum_arr[j + 1] = temp_sum;

                int temp_num = nums[i];
                nums[i] = nums[j + 1];
                nums[j + 1] = temp_num;

                swap_count += 1;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }

    printf("num arr : ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d, ", nums[i]);
    }
    printf("\n sum arr : ");

    for (int i = 0; i < numsSize; i++) {
        printf("%d, ", sum_arr[i]);
    }
    
    return swap_count;
}

int main() {
    int nums1[] = {37, 100};
    int nums2[] = {22, 14, 33, 7};
    int nums3[] = {18, 43, 34, 16};
    int numsSize1 = 2;
    int numsSize = 4;
    int *ptr1 = nums1;
    int *ptr2 = nums2;
    int *ptr3 = nums3;

    printf("\n No. of swaps : %d \n", minSwaps(ptr1, numsSize1));
    printf("======================================================\n");
    printf("\n No. of swaps : %d \n", minSwaps(ptr2, numsSize));
    printf("======================================================\n");
    printf("\n No. of swaps : %d \n", minSwaps(ptr3, numsSize));

    return 0;
}