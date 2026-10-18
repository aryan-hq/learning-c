#include <stdio.h>

int singleNumber(int* nums, int numsSize);

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int *ptr = nums;
    int numsSize = 5;
    printf("The Unique No. : %d ", singleNumber(ptr, numsSize));

    return 0;
}

int singleNumber(int* nums, int numsSize) {
    int single = 0;
    for (int i = 0; i < numsSize; i++) {
        int check = 1;
        for (int j = 0; j < numsSize; j++) {
            if (i == j) continue;
            if (nums[i] == nums[j]) {
                check = 0;
                break;
            }
        }
        if (check == 1) {
            single = nums[i];
            break;
        }
    }
    return single;
}