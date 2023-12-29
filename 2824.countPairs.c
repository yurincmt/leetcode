int countPairs(int* nums, int numsSize, int target){
    int countSum = 0;

    for (size_t a = 0; a < numsSize; ++a) {
        for (size_t b = a+1; b < numsSize; ++b) {
            if (nums[a] + nums[b] < target) {
                ++countSum;
            }
        }
    } return countSum;
}