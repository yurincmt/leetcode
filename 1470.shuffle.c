/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* ret = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for (size_t a = 0, reti = 0; a < n; ++a) {
        ret[reti++] = nums[a];
        ret[reti++] = nums[a+n];
    } return ret;
}