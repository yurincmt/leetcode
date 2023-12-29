int numIdenticalPairs(int* nums, int numsSize) {
    int count = 0;
    for (size_t a = 0; a < numsSize; ++a) {
        for (size_t b = a + 1; b < numsSize; ++b) {
            if (nums[a] == nums[b] && a != b && a < b) {
                count++;
            }
        }
    } return count;
}