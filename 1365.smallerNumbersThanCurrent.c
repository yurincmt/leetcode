/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* retInt = calloc(numsSize, sizeof(int));
    *returnSize = numsSize;

    for (size_t a = 0; a < numsSize; ++a) {
        for (size_t b = 0; b < numsSize; ++b) {
            if (nums[b] < nums[a] && a != b) {
                ++retInt[a];
            }
        }
    } return retInt;
}