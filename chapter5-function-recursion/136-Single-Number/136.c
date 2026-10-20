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