#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    int equal = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            equal++;
        }
    }

    *returnSize = equal;

    int* result = (int*)malloc(equal * sizeof(int));
    if (result == NULL) {
        return NULL;
    }

    int resultIndex = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            result[resultIndex] = i;
            resultIndex++;
        }
    }

    return result;
}